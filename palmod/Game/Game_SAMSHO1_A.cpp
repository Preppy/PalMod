#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SAMSHO1_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SAMSHO1_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SAMSHO1_A::SAMSHO1_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SAMSHO1_A::MainDescTree = nullptr;

int CGame_SAMSHO1_A::rgExtraCountAll[SAMSHO1_A_NUMUNIT + 1];
int CGame_SAMSHO1_A::rgExtraLoc[SAMSHO1_A_NUMUNIT + 1];

UINT32 CGame_SAMSHO1_A::m_nTotalPaletteCountForSAMSHO1 = 0;
UINT32 CGame_SAMSHO1_A::m_nExpectedGameROMSize = 0x100000;  // 1,048,576 bytes
UINT32 CGame_SAMSHO1_A::m_nConfirmedROMSize = -1;

void CGame_SAMSHO1_A::InitializeStatics()
{
    safe_delete_array(CGame_SAMSHO1_A::SAMSHO1_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SAMSHO1_A::InitDescTree());
}

CGame_SAMSHO1_A::CGame_SAMSHO1_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(L"CGame_SAMSHO1_A::CGame_SAMSHO1_A: Loading ROM...\n");
    OutputDebugString(strMessage);

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SAMSHO1_A_NUMUNIT;
    m_nExtraUnit = SAMSHO1_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 258;
    m_pszExtraFilename = EXTRA_FILENAME_SAMSHO1_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSAMSHO1;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xe4a8a;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SAMSHO1_A;
    nImgGameFlag = IMGDAT_SECTION_SAMSHO;
    m_prgGameImageSet = SAMSHO1_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(SAMSHO1_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_PK;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_PK);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SAMSHO1_A::~CGame_SAMSHO1_A(void)
{
    safe_delete_array(CGame_SAMSHO1_A::SAMSHO1_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SAMSHO1_A::GetMainTree()
{
    return &CGame_SAMSHO1_A::MainDescTree;
}

int CGame_SAMSHO1_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SAMSHO1_A_NUMUNIT, nUnitId, SAMSHO1_A_EXTRA_CUSTOM);
}

int CGame_SAMSHO1_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SAMSHO1_A_NUMUNIT, nUnitId, SAMSHO1_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SAMSHO1_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SAMSHO1_A, SAMSHO1_A_EXTRA, &SAMSHO1_A_EXTRA_CUSTOM, SAMSHO1_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SAMSHO1_A_NUMUNIT + (GetExtraCt(SAMSHO1_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SAMSHO1_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSAMSHO1 = _InitDescTree(NewDescTree,
        SAMSHO1_A_UNITS,
        SAMSHO1_A_EXTRALOC,
        SAMSHO1_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SAMSHO1_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_SAMSHO1_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"087-p5.p5");
    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SAMSHO1_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, SAMSHO1_A_EXTRA_CUSTOM);
}

UINT16 CGame_SAMSHO1_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, nCollectionId, SAMSHO1_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SAMSHO1_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(SAMSHO1_A_UNITS, SAMSHO1_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_SAMSHO1_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, SAMSHO1_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SAMSHO1_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(SAMSHO1_A_UNITS, nUnitId, nCollectionId);
}

UINT16 CGame_SAMSHO1_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetNodeSizeFromPaletteId(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO1_A_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_SAMSHO1_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO1_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SAMSHO1_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO1_A_EXTRA_CUSTOM);
}

void CGame_SAMSHO1_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != SAMSHO1_A_EXTRALOC)
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
    else // SAMSHO1_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSAMSHO1(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SAMSHO1_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != SAMSHO1_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                if ( (paletteDataSet->indexImgToUse == indexSamSho5Sprites_Nakoruru) &&
                    ((_wcsicmp(paletteDataSet->szPaletteName, L"Main") == 0) ||
                     (_wcsicmp(paletteDataSet->szPaletteName, L"Rage Flash") == 0)))
                {
                    if ((_wcsicmp(pCurrentNode->szDesc, L"Slash 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Slash 2") == 0) ||
                        (_wcsicmp(pCurrentNode->szDesc, L"Bust 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Bust 2") == 0))
                    {
                        nSrcAmt = 2;
                        nNodeIncrement = pCurrentNode->uChildAmt;

                        if (((nSrcStart >= nNodeIncrement) && (nSrcStart < (nNodeIncrement * 2))) ||
                            ((nSrcStart >= (nNodeIncrement * 3)) && (nSrcStart < (nNodeIncrement * 4))))
                        {
                            nSrcStart -= nNodeIncrement;
                        }
                    }
                }
                else if ((_wcsicmp(pCurrentNode->szDesc, L"Slash 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Slash 2") == 0) ||
                         (_wcsicmp(pCurrentNode->szDesc, L"Bust 1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Bust 2") == 0))
                {
                    nSrcAmt = 4;
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
                if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                {
                    const UINT16 nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                    fShouldUseAlternateLoadLogic = true;
                    sImgTicket* pImgArray = nullptr;

                    for (INT16 nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
                    {
                        // The palettes get added forward, but the image tickets need to be generated in reverse order
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + (nStageCount - 1 - nStageIndex));
                        if (paletteDataSetToJoin)
                        {
                            pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                            //Set each palette
                            sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nStageIndex, -1);
                            CreateDefPal(JoinedNode, nStageIndex);
                            SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                        }
                    }

                    ClearSetImgTicket(pImgArray);
                }
                else
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
