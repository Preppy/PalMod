#include "StdAfx.h"
#include "GameDef.h"
#include "Game_AOF1_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define AOF1_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_AOF1_A::AOF1_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_AOF1_A::MainDescTree = nullptr;

int CGame_AOF1_A::rgExtraCountAll[AOF1_A_NUMUNIT + 1];
int CGame_AOF1_A::rgExtraLoc[AOF1_A_NUMUNIT + 1];

int CGame_AOF1_A::m_nSelectedRom = 1;
UINT32 CGame_AOF1_A::m_nTotalPaletteCountForAOF1 = 0;
UINT32 CGame_AOF1_A::m_nExpectedGameROMSize = 0x80000;
UINT32 CGame_AOF1_A::m_nConfirmedROMSize = -1;

void CGame_AOF1_A::InitializeStatics()
{
    safe_delete_array(CGame_AOF1_A::AOF1_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_AOF1_A::InitDescTree());
}

CGame_AOF1_A::CGame_AOF1_A(UINT32 nConfirmedROMSize, int nROMToLoad /*= 1*/)
{
    OutputDebugString(L"CGame_AOF1_A::CGame_AOF1_A: Loading ROM...\n");

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nSelectedRom = nROMToLoad;

    m_nTotalInternalUnits = AOF1_A_NUMUNIT;
    m_nExtraUnit = AOF1_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 83;
    m_pszExtraFilename = EXTRA_FILENAME_AOF1_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForAOF1;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x43020;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    //Set game information
    nGameFlag = AOF1_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = AOF1_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(AOF1_A_IMGIDS_USED);

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

CGame_AOF1_A::~CGame_AOF1_A(void)
{
    safe_delete_array(CGame_AOF1_A::AOF1_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

const sDescTreeNode* CGame_AOF1_A::GetCurrentUnitSet()
{
    return AOF1_A_UNITS;
}

UINT16 CGame_AOF1_A::GetCurrentExtraLoc()
{
    return AOF1_A_EXTRALOC;
}

CDescTree* CGame_AOF1_A::GetMainTree()
{
    return &CGame_AOF1_A::MainDescTree;
}

stExtraDef* CGame_AOF1_A::GetCurrentExtraDef(int nDefCtr)
{
    return (stExtraDef*)&AOF1_A_EXTRA_CUSTOM[nDefCtr];
}

int CGame_AOF1_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, AOF1_A_NUMUNIT, nUnitId, AOF1_A_EXTRA_CUSTOM);
}

int CGame_AOF1_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, AOF1_A_NUMUNIT, nUnitId, AOF1_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_AOF1_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    UINT8 nExtraUnitLocation = AOF1_A_EXTRALOC;
    LoadExtraFileForGame(EXTRA_FILENAME_AOF1_A, AOF1_A_EXTRA, &AOF1_A_EXTRA_CUSTOM, AOF1_A_EXTRALOC, m_nConfirmedROMSize);
    bool fHaveExtras = GetExtraCt(AOF1_A_EXTRALOC);
    UINT16 nUnitCt = AOF1_A_NUMUNIT + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[AOF1_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForAOF1 = _InitDescTree(NewDescTree,
        AOF1_A_UNITS,
        AOF1_A_EXTRALOC,
        AOF1_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        AOF1_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_AOF1_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    NewFileRule.uUnitId = 0;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"044-p1.p1");
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_AOF1_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Art of Fighting 1 (Neo-Geo)", L"044-p1.p1", 0xca9f7a6d, 0 },
        { L"Art of Fighting 1 (Neo-Geo)", L"044-p1.bin", 0xca9f7a6d, 0 },
    };

    if (ppKnownROMSet != nullptr)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

UINT16 CGame_AOF1_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(AOF1_A_UNITS, rgExtraCountAll, AOF1_A_NUMUNIT, AOF1_A_EXTRALOC, nUnitId, AOF1_A_EXTRA_CUSTOM);
}

UINT16 CGame_AOF1_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(AOF1_A_UNITS, rgExtraCountAll, AOF1_A_NUMUNIT, AOF1_A_EXTRALOC, nUnitId, nCollectionId, AOF1_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_AOF1_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(AOF1_A_UNITS, AOF1_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_AOF1_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(AOF1_A_UNITS, rgExtraCountAll, AOF1_A_NUMUNIT, AOF1_A_EXTRALOC, nUnitId, AOF1_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_AOF1_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(AOF1_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_AOF1_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(AOF1_A_UNITS, rgExtraCountAll, AOF1_A_NUMUNIT, AOF1_A_EXTRALOC, nUnitId, nPaletteId, AOF1_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_AOF1_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(AOF1_A_UNITS, rgExtraCountAll, AOF1_A_NUMUNIT, AOF1_A_EXTRALOC, nUnitId, nPaletteId, AOF1_A_EXTRA_CUSTOM);
}

void CGame_AOF1_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_AOF1_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nSelectedRom;

    m_nSelectedRom = m_nBufferSelectedRom;

    if (m_pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nSelectedRom = nCurrentROMMode;
}

void CGame_AOF1_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != GetCurrentExtraLoc())
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
    else // extraloc
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_AOF1_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != GetCurrentExtraLoc())
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

                if (fIsCorePalette && (wcscmp(paletteDataSet->szPaletteName, k_aof1NameKey_MrBigPortrait) == 0))
                {
                    // Mr Big portrait isn't paired
                    fIsCorePalette = false;
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
                    sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                    fShouldUseAlternateLoadLogic = true;

                    if ((wcsstr(charUnit->szDesc, k_aof1NameKey_King)) && (wcsstr(paletteDataSet->szPaletteName, L"Damaged")))
                    {
                        // King is a slightly ugly three-pair node, stepping back for the core sprite and then forward X to her bra

                        INT8 nPeerNodeDistance = nPeerPaletteDistance;
                        INT8 nPeerPaletteDistance2 = (nPeerPaletteDistance == -2) ? 1 : 2;
                        INT8 nPeerNodeDistance2 = nPeerPaletteDistance2;

                        const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse,
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse, 
                                    CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                                )
                            )
                        );

                        //Set each palette
                        sDescNode* JoinedNode[] = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerNodeDistance, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerNodeDistance2, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[1], 0);
                        CreateDefPal(JoinedNode[0], 1);
                        CreateDefPal(JoinedNode[2], 2);

                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
                        SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                    }
                    else
                    {
                        if (!paletteDataSet->pPalettePairingInfo->fPairingIsFlipped)
                        {
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                                )
                            );
                        }
                        else
                        {
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                                )
                            );
                        }

                        INT8 nNodeDistance = 0;
                        INT8 nPeerNodeDistance = nPeerPaletteDistance;

                        if (wcsstr(charUnit->szDesc, k_aof1NameKey_Jack))
                        {
                            // Jack reaches into a shared node for his bubble gum
                            nSrcAmt = 1;
                            nSrcStart = NodeGet->uPalId;
                            nNodeDistance = (Node02 == 0) ? 2 : 1;
                            nPeerNodeDistance = -Node03;
                        }
                        else if ((wcsstr(charUnit->szDesc, k_aof1NameKey_King)) && (wcsstr(paletteDataSet->szPaletteName, L"Portrait")))
                        {
                            // King's portrait reaches into the shared node for her bra
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

                        const UINT8 nFirstPalette = paletteDataSet->pPalettePairingInfo->fPairingIsFlipped ? 1 : 0;
                        const UINT8 nSecondPalette = paletteDataSet->pPalettePairingInfo->fPairingIsFlipped ? 0 : 1;

                        //Set each palette
                        CreateDefPal(JoinedNode[nFirstPalette], 0);
                        CreateDefPal(JoinedNode[nSecondPalette], 1);

                        SetSourcePal(nFirstPalette, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(nSecondPalette, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
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
