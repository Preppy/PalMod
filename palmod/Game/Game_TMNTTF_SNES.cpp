#include "StdAfx.h"
#include "GameDef.h"
#include "Game_TMNTTF_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define TMNTTF_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_TMNTTF_SNES::m_nExpectedGameROMSize = 0x200000;

CGame_TMNTTF_SNES::CGame_TMNTTF_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_TMNTTF_SNES::CGame_TMNTTF_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

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
    m_prgGameImageSet = TMNTTF_SNES_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(TMNTTF_SNES_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2; // Check out the available options in gamedef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

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
int CGame_TMNTTF_SNES::rgExtraCountAll[TMNTTF_SNES_NUMUNIT + 1];
int CGame_TMNTTF_SNES::rgExtraLoc[TMNTTF_SNES_NUMUNIT + 1];
UINT32 CGame_TMNTTF_SNES::m_nTotalPaletteCountForTMNTTF = 0;
UINT32 CGame_TMNTTF_SNES::m_nConfirmedROMSize = -1;

void CGame_TMNTTF_SNES::InitializeStatics()
{
    safe_delete_array(CGame_TMNTTF_SNES::TMNTTF_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_TMNTTF_SNES::InitDescTree());
}

CGame_TMNTTF_SNES::~CGame_TMNTTF_SNES(void)
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

int CGame_TMNTTF_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, TMNTTF_SNES_NUMUNIT, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

int CGame_TMNTTF_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, TMNTTF_SNES_NUMUNIT, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_TMNTTF_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_TMNTTF_SNES, TMNTTF_SNES_EXTRA, &TMNTTF_SNES_EXTRA_CUSTOM, TMNTTF_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = TMNTTF_SNES_NUMUNIT + (GetExtraCt(TMNTTF_SNES_EXTRALOC) ? 1 : 0);
    
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

sFileRule CGame_TMNTTF_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, TMNTTF_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_TMNTTF_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_TMNTTF_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, nCollectionId, TMNTTF_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_TMNTTF_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(TMNTTF_SNES_UNITS, TMNTTF_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_TMNTTF_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_TMNTTF_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(TMNTTF_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_TMNTTF_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, nPaletteId, TMNTTF_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_TMNTTF_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, nPaletteId, TMNTTF_SNES_EXTRA_CUSTOM);
}

void CGame_TMNTTF_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
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
    UINT16 nSrcStart = NodeGet->uPalId;
    UINT16 nSrcAmt = 1;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

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

                for (UINT16 nOptionsToTest = 0; nOptionsToTest < m_nNumberOfColorOptions; nOptionsToTest++)
                {
                    if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                    {
                        fIsCorePalette = true;
                        break;
                    }
                }

                if (fIsCorePalette)
                {
                    nSrcAmt = m_nNumberOfColorOptions;
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
                int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;
                INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance);

                if (paletteDataSetToJoin)
                {
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                        )
                    );

                    sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);
                    INT8 nNodeDistance = 0;
                    INT8 nPeerNodeDistance = nPeerPaletteDistance;

                    if (wcsstr(charUnit->szDesc, L"Leo"))
                    {
                        // Leo reaches into the Shared node for his weapons
                        nSrcAmt = 1;
                        nSrcStart = NodeGet->uPalId;
                        nNodeDistance = (Node02 == 0) ? 2 : 1;
                        nPeerNodeDistance = -Node03;
                    }

                    //Set each palette
                    sDescNode* JoinedNode[2] = {
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
