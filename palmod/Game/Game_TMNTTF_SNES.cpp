#include "StdAfx.h"
#include "GameDef.h"
#include "Game_TMNTTF_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

uint32_t CGame_TMNTTF_SNES::m_nExpectedGameROMSize = 0x200000;

CGame_TMNTTF_SNES::CGame_TMNTTF_SNES(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_TMNTTF_SNES::CGame_TMNTTF_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = TMNTTF_SNES_NUMUNIT;
    m_nExtraUnit = TMNTTF_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 211;
    m_pszExtraFilename = EXTRA_FILENAME_TMNTTF_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForTMNTTF;

    m_nLowestKnownPaletteRomLocation = 0x8000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = TMNTTF_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = TMNTTF_SNES_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2; // Check out the available options in buttondef.h

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating TMNTTF to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_TMNTTF_SNES::TMNTTF_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_TMNTTF_SNES::MainDescTree = nullptr;
uint32_t CGame_TMNTTF_SNES::rgExtraCountAll[TMNTTF_SNES_NUMUNIT + 1];
uint32_t CGame_TMNTTF_SNES::rgExtraLoc[TMNTTF_SNES_NUMUNIT + 1];
uint32_t CGame_TMNTTF_SNES::m_nTotalPaletteCountForTMNTTF = 0;
uint32_t CGame_TMNTTF_SNES::m_nConfirmedROMSize = -1;

void CGame_TMNTTF_SNES::InitializeStatics()
{
    safe_delete_array(CGame_TMNTTF_SNES::TMNTTF_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_TMNTTF_SNES::InitDescTree());
}

CGame_TMNTTF_SNES::~CGame_TMNTTF_SNES()
{
    safe_delete_array(CGame_TMNTTF_SNES::TMNTTF_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_TMNTTF_SNES::GetMainTree()
{
    return &CGame_TMNTTF_SNES::MainDescTree;
}

uint32_t CGame_TMNTTF_SNES::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, TMNTTF_SNES_NUMUNIT, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

uint32_t CGame_TMNTTF_SNES::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, TMNTTF_SNES_NUMUNIT, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_TMNTTF_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_TMNTTF_SNES, &TMNTTF_SNES_EXTRA_CUSTOM, TMNTTF_SNES_EXTRALOC, m_nConfirmedROMSize);

    uint16_t nUnitCt = TMNTTF_SNES_NUMUNIT + (GetExtraCt(TMNTTF_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[TMNTTF_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForTMNTTF = _InitDescTree(NewDescTree,
        TMNTTF_SNES_UNITS,
        TMNTTF_SNES_EXTRALOC,
        TMNTTF_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        TMNTTF_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_TMNTTF_SNES::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, TMNTTF_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_TMNTTF_SNES::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

uint32_t CGame_TMNTTF_SNES::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, nCollectionId, TMNTTF_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_TMNTTF_SNES::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(TMNTTF_SNES_UNITS, TMNTTF_SNES_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_TMNTTF_SNES::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_TMNTTF_SNES::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(TMNTTF_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_TMNTTF_SNES::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, nPaletteId, TMNTTF_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_TMNTTF_SNES::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, nPaletteId, TMNTTF_SNES_EXTRA_CUSTOM);
}

void CGame_TMNTTF_SNES::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != TMNTTF_SNES_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // TMNTTF_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&TMNTTF_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_TMNTTF_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    uint32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    int nTargetImgId = 0;
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (NodeGet->uUnitId != TMNTTF_SNES_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                bool fIsCorePalette = false;

                for (uint32_t nOptionsToTest = 0; nOptionsToTest < pButtonLabelSet.size(); nOptionsToTest++)
                {
                    if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                    {
                        fIsCorePalette = true;
                        break;
                    }
                }

                if (fIsCorePalette)
                {
                    nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                int8_t nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance);

                if (paletteDataSetToJoin)
                {
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse)
                        )
                    );

                    sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);
                    int8_t nNodeDistance = 0;
                    int8_t nPeerNodeDistance = nPeerPaletteDistance;

                    if (wcsstr(charUnit->szDesc, L"Leo"))
                    {
                        // Leo reaches into the Shared node for his weapons
                        nSrcAmt = 1;
                        nSrcStart = NodeGet->uPalId;
                        nNodeDistance = (Node02 == 0) ? 2 : 1;
                        nPeerNodeDistance = -Node03;
                    }

                    //Set each palette
                    std::vector<sDescNode*> JoinedNode = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02 + nNodeDistance, Node03 + nPeerNodeDistance, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
                }
            }
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}
