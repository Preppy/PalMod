#include "StdAfx.h"
#include "GameDef.h"
#include "Game_Windjammers_A.h"
#include "..\RegProc.h"

#define Windjammers_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_Windjammers_A::Windjammers_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_Windjammers_A::MainDescTree = nullptr;

int CGame_Windjammers_A::rgExtraCountAll[Windjammers_A_NUMUNIT + 1];
int CGame_Windjammers_A::rgExtraLoc[Windjammers_A_NUMUNIT + 1];

UINT32 CGame_Windjammers_A::m_nTotalPaletteCountForWindjammers = 0;
const UINT32 CGame_Windjammers_A::m_nExpectedGameROMSize = 0x100000;  // 4194304 bytes
UINT32 CGame_Windjammers_A::m_nConfirmedROMSize = -1;

void CGame_Windjammers_A::InitializeStatics()
{
    safe_delete_array(CGame_Windjammers_A::Windjammers_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_Windjammers_A::InitDescTree());
}

CGame_Windjammers_A::CGame_Windjammers_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(L"CGame_Windjammers_A::CGame_Windjammers_A: Loading ROM...\n");
    OutputDebugString(strMessage);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    InitializeStatics();

    m_nTotalInternalUnits = Windjammers_A_NUMUNIT;
    m_nExtraUnit = Windjammers_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 35;
    m_pszExtraFilename = EXTRA_FILENAME_Windjammers_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForWindjammers;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x30080;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = WINDJAMMERS_A;
    nImgGameFlag = IMGDAT_SECTION_WINDJAMMERS;
    m_prgGameImageSet = WINDJAMMERS_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(WINDJAMMERS_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_Windjammers_A::~CGame_Windjammers_A(void)
{
    safe_delete_array(CGame_Windjammers_A::Windjammers_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_Windjammers_A::GetMainTree()
{
    return &CGame_Windjammers_A::MainDescTree;
}

int CGame_Windjammers_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, Windjammers_A_NUMUNIT, nUnitId, Windjammers_A_EXTRA_CUSTOM);
}

int CGame_Windjammers_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, Windjammers_A_NUMUNIT, nUnitId, Windjammers_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_Windjammers_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_Windjammers_A, Windjammers_A_EXTRA, &Windjammers_A_EXTRA_CUSTOM, Windjammers_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = Windjammers_A_NUMUNIT + (GetExtraCt(Windjammers_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[WINDJAMMERS_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForWindjammers = _InitDescTree(NewDescTree,
        Windjammers_A_UNITS,
        Windjammers_A_EXTRALOC,
        Windjammers_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        Windjammers_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_Windjammers_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"066-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_Windjammers_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, nUnitId, Windjammers_A_EXTRA_CUSTOM);
}

UINT16 CGame_Windjammers_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, nUnitId, nCollectionId, Windjammers_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_Windjammers_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(Windjammers_A_UNITS, Windjammers_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_Windjammers_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, nUnitId, Windjammers_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_Windjammers_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(Windjammers_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_Windjammers_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, nUnitId, nPaletteId, Windjammers_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_Windjammers_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, nUnitId, nPaletteId, Windjammers_A_EXTRA_CUSTOM);
}

void CGame_Windjammers_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != m_nExtraUnit)
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
    else // m_nExtraUnit
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForWindjammers(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_Windjammers_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != Windjammers_A_EXTRALOC)
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
                    sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                    if (wcscmp(charUnit->szDesc, L"Japan") == 0)
                    {
                        // Japan has a quirky p1/p2 palette, so don't associate the p1/p2 sets
                    }
                    else
                    {
                        nSrcAmt = m_nNumberOfColorOptions;
                        nNodeIncrement = pCurrentNode->uChildAmt;

                        while (nSrcStart >= nNodeIncrement)
                        {
                            // The starting point is the absolute first palette for the sprite in question which is found in P1/A
                            nSrcStart -= nNodeIncrement;
                        }
                    }
                }

                if (paletteDataSet->pPalettePairingInfo)
                {
                    const INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance);

                    if (paletteDataSetToJoin)
                    {
                        int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                        int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;

                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                            )
                        );

                        //Set each palette
                        sDescNode* JoinedNode[2] = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
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
