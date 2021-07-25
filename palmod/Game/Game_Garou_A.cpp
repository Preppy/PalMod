#include "StdAfx.h"
#include "GameDef.h"
#include "Game_Garou_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define Garou_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_Garou_A::Garou_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_Garou_A::MainDescTree = nullptr;

int CGame_Garou_A::rgExtraCountAll[Garou_A_NUMUNIT + 1];
int CGame_Garou_A::rgExtraLoc[Garou_A_NUMUNIT + 1];

UINT32 CGame_Garou_A::m_nTotalPaletteCountForGarou = 0;
UINT32 CGame_Garou_A::m_nExpectedGameROMSize = 0x40000; // 262,144 bytes
UINT32 CGame_Garou_A::m_nConfirmedROMSize = -1;

void CGame_Garou_A::InitializeStatics()
{
    safe_delete_array(CGame_Garou_A::Garou_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_Garou_A::InitDescTree());
}

CGame_Garou_A::CGame_Garou_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_Garou_A::CGame_Garou_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = Garou_A_NUMUNIT;
    m_nExtraUnit = Garou_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1489;
    m_pszExtraFilename = EXTRA_FILENAME_Garou_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForGarou;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x0e040;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = Garou_A;
    nImgGameFlag = IMGDAT_SECTION_GAROU;
    m_prgGameImageSet = GAROU_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(GAROU_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // The MOTW options are A B C D (Boss)
    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO_FIVE;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO_FIVE);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_Garou_A::~CGame_Garou_A(void)
{
    safe_delete_array(CGame_Garou_A::Garou_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_Garou_A::GetMainTree()
{
    return &CGame_Garou_A::MainDescTree;
}

int CGame_Garou_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, Garou_A_NUMUNIT, nUnitId, Garou_A_EXTRA_CUSTOM);
}

int CGame_Garou_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, Garou_A_NUMUNIT, nUnitId, Garou_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_Garou_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_Garou_A, Garou_A_EXTRA, &Garou_A_EXTRA_CUSTOM, Garou_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = Garou_A_NUMUNIT + (GetExtraCt(Garou_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[Garou_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForGarou = _InitDescTree(NewDescTree,
        Garou_A_UNITS,
        Garou_A_EXTRALOC,
        Garou_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        Garou_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_Garou_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"kf.neo-sma");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = 0x40000; // 262144

    return NewFileRule;
}

UINT16 CGame_Garou_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(Garou_A_UNITS, rgExtraCountAll, Garou_A_NUMUNIT, Garou_A_EXTRALOC, nUnitId, Garou_A_EXTRA_CUSTOM);
}

UINT16 CGame_Garou_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(Garou_A_UNITS, rgExtraCountAll, Garou_A_NUMUNIT, Garou_A_EXTRALOC, nUnitId, nCollectionId, Garou_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_Garou_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(Garou_A_UNITS, Garou_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_Garou_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(Garou_A_UNITS, rgExtraCountAll, Garou_A_NUMUNIT, Garou_A_EXTRALOC, nUnitId, Garou_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_Garou_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(Garou_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_Garou_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(Garou_A_UNITS, rgExtraCountAll, Garou_A_NUMUNIT, Garou_A_EXTRALOC, nUnitId, nPaletteId, Garou_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_Garou_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(Garou_A_UNITS, rgExtraCountAll, Garou_A_NUMUNIT, Garou_A_EXTRALOC, nUnitId, nPaletteId, Garou_A_EXTRA_CUSTOM);
}

void CGame_Garou_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != Garou_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            // The various Garou versions shift locations around: account for this
            switch (nGameFlag)
            {
            case Garou_A:
                // these are the base values: leave alone
                break;
            case Garou_S:
            case GarouP_A:
                m_nCurrentPaletteROMLocation += 0xc0000;
                break;
            }
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // Garou_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForGarou_A(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_Garou_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != Garou_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                if (wcscmp(charUnit->szDesc, k_garouNameKey_Portraits) == 0)
                {
                    // These nodes are variable sizes, so do a little math to figure it out
                    nSrcAmt = 4;
                    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;
                    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO);
                    nNodeIncrement = 1;
                    UINT16 nCollectionCount = GetCollectionCountForUnit(NodeGet->uUnitId);
                    nSrcStart = 0;

                    for (UINT16 nCurrentCollection = 0; nCurrentCollection < nCollectionCount; nCurrentCollection++)
                    {
                        UINT16 nNextChunk = GetNodeCountForCollection(NodeGet->uUnitId, nCurrentCollection);

                        if (NodeGet->uPalId < (nSrcStart + nNextChunk))
                        {
                            break;
                        }

                        nSrcStart += nNextChunk;
                    }
                }
                else
                {
                    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO_FIVE;
                    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO_FIVE);
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
                        nSrcAmt = 5;
                        nNodeIncrement = pCurrentNode->uChildAmt;

                        while (nSrcStart >= nNodeIncrement)
                        {
                            // The starting point is the absolute first palette for the sprite in question which is found in P1
                            nSrcStart -= nNodeIncrement;
                        }
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
    
    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}
