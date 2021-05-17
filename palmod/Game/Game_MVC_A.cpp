#include "StdAfx.h"
#include "Game_MVC_A.h"
#include "GameDef.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define MVC_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_MVC_A::MVC_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_MVC_A::MainDescTree = nullptr;

int CGame_MVC_A::rgExtraCountAll[MVC_A_NUMUNIT + 1] = { -1 };
int CGame_MVC_A::rgExtraCountVisibleOnly[MVC_A_NUMUNIT + 1] = { -1 };
int CGame_MVC_A::rgExtraLoc[MVC_A_NUMUNIT + 1] = { -1 };

UINT32 CGame_MVC_A::m_nTotalPaletteCountForMVC = 0;
UINT32 CGame_MVC_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_MVC_A::m_nConfirmedROMSize = -1;

void CGame_MVC_A::InitializeStatics()
{
    safe_delete_array(CGame_MVC_A::MVC_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));
    memset(rgExtraCountVisibleOnly, -1, sizeof(rgExtraCountVisibleOnly));

    MainDescTree.SetRootTree(CGame_MVC_A::InitDescTree());
}

CGame_MVC_A::CGame_MVC_A(UINT32 nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = MVC_A_NUMUNIT + (GetExtraCt(MVC_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = MVC_A_NUMUNIT;
    m_nExtraUnit = MVC_A_EXTRALOC;
    m_nSafeCountForThisRom = GetExtraCt(MVC_A_EXTRALOC) + 1312;
    m_pszExtraFilename = EXTRA_FILENAME_MVC;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMVC;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x030b18;

    // 0x38xxx large body Onslaught sprites
    // 0x39xxx+ unknown
    // 0x47xxx assist icons
    // 0x48xxx characters
    // 0x49xxx end of MM 2 and onslaught, then hidden characters
    // 0x4Axxx unknown
    // 0x4Bxxx onslaught
    // 0x4Cxxx megaman extras
    // 0x4Dxxx megaman + roll extras
    // 0x4Exxx roll extras
    // 0x4Fxxx shadow lady glimmer, most unknown
    // 0x50xxx end of SL glimmer, assists
    // 0x51xxx assists (Anita P2+)
    // 0x52xxx Duo/CSPs
    // 0x53xxx super portraits
    // 0x54xxx super portraits cont
    // 0x55xxx super portraits then VSPs
    // 0x56xxx VSPs
    // 0x57xxx VSPs
    // 0x58xxx VSPs
    // 0x59xxx unknown

#if dontcompilethis

        Educated guess at sort order based upon VSPs. Agrees with CSIs.
        War Machine
        Captain America
        Hulk
        Wolverine
        Gambit
        Venom
        Spider-Man
        Roll
        Ryu
        Captain Commando
        Chun-Li
        Jin
        Zangief
        Strider Hiryu
        Morrigan
        Megaman
        Onslaught
        Red Venom
        Orange Hulk
        Gold War Machine
        Shadow Lady
        Lilith
        Ken
        Gouki
        Mech-Zangief

        Assist CSI layout.  Differs from character sprite palette layout.
        0x047d84 Juggernaut
        0x047da4 Magneto
        0x047dc4 Psylocke
        0x047de4 Cyclops
        0x047e04 Colossus
        0x047e24 Thor
        0x047e44 U.S. Agent
        0x047e64 Iceman
        0x047e84 Rogue
        0x047ea4 Jubilee
        0x047ec4 Storm
        0x047f04 Arthur
        0x047f24 Michelle Heart
        0x047f44 Ton-Pooh
        0x047f64 Saki
        0x047f84 Unknown Soldier
        0x047fa4 Lou
        0x047fc4 Anita
        0x047fe4 Pure and Fur
        0x048004 Devilot
#endif

    InitDataBuffer();

    //Set game information
    nGameFlag = MVC_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = MVC_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(MVC_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_MVC_A::~CGame_MVC_A(void)
{
    safe_delete_array(CGame_MVC_A::MVC_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_MVC_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        // Marvel Vs. Capcom: Clash of Super Heroes
        { L"MvC Arcade (980112)", L"mvc.06",  0x4b0b6d3e, 0 },
        { L"MvC Arcade (980123)", L"mvc.06a", 0x8528e1f5, 0 },
        { L"MvC Arcade (980123)", L"mvcu.06", 0x2f1524bc, -0x60 },
    };

    if (ppKnownROMSet)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);

#ifdef NOTES
    // These are the MAME values...
    ROM_START(mvscud)   // bootlet: USA 980123 Phoenix Edition (bootleg)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvsc )   // 23/01/1998 (c) 1998 (Euro)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvscu )  // 23/01/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvscj )  // 23/01/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START(mvsca)    // 23/01/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvsch )  // 23/01/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvscb )   // 23/01/1998 (c) 1998 (Brazil)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))


    ROM_START(mvscr1) // 12/01/1998 (c) 1998 (Euro)
        ROM_LOAD16_WORD_SWAP("mvc.06", 0x180000, 0x80000, CRC(4b0b6d3e) SHA1(375372adf0a508bb6fc6a79326b2d4171db9ca0f))
        
    ROM_START( mvscjr1 )    // 12/01/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("mvc.06", 0x180000, 0x80000, CRC(4b0b6d3e) SHA1(375372adf0a508bb6fc6a79326b2d4171db9ca0f))

    ROM_START( mvscar1 )    // 12/01/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("mvc.06", 0x180000, 0x80000, CRC(4b0b6d3e) SHA1(375372adf0a508bb6fc6a79326b2d4171db9ca0f))


    ROM_START( mvscur1 )    // 23/01/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("mvcu.06", 0x180000, 0x80000, CRC(2f1524bc) SHA1(b6543d40fb98eabec82787e0fd60fbc59069e72e))

    ROM_START( mvscjsing )  // 23/01/1998 (c) 1998 (Japan) - Single PCB
	    ROM_REGION( CODE_SIZE, "maincpu", 0 )      /* 68000 code */
	    ROM_LOAD16_BYTE( "mvc_ja.simm1", 0x000000, 0x200000, CRC(6a2ef7c2) SHA1(625530b92217375014db4694196e6ab2a4684db6) ) // == mvc_ja.simm4
	    ROM_LOAD16_BYTE( "mvc_ja.simm3", 0x000001, 0x200000, CRC(699d09ad) SHA1(67f6587808f55f10f58e067512f8db3f67dda770) ) // == mvc_ja.simm6
#endif
}

int CGame_MVC_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, MVC_A_NUMUNIT, nUnitId, MVC_A_EXTRA_CUSTOM);
}

int CGame_MVC_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, MVC_A_NUMUNIT, nUnitId, MVC_A_EXTRA_CUSTOM);
}

CDescTree* CGame_MVC_A::GetMainTree()
{
    return &CGame_MVC_A::MainDescTree;
}

sDescTreeNode* CGame_MVC_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MVC, MVC_A_EXTRA, &MVC_A_EXTRA_CUSTOM, MVC_A_EXTRALOC, m_nConfirmedROMSize);

    const UINT16 nUnitCt = MVC_A_NUMUNIT + (GetExtraCt(MVC_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MVC_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForMVC = _InitDescTree(NewDescTree,
        MVC_A_UNITS,
        MVC_A_EXTRALOC,
        MVC_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        MVC_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_MVC_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"mvc.06");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_MVC_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(MVC_A_UNITS, rgExtraCountAll, MVC_A_NUMUNIT, MVC_A_EXTRALOC, nUnitId, MVC_A_EXTRA_CUSTOM);
}

UINT16 CGame_MVC_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(MVC_A_UNITS, rgExtraCountAll, MVC_A_NUMUNIT, MVC_A_EXTRALOC, nUnitId, nCollectionId, MVC_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_MVC_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(MVC_A_UNITS, MVC_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_MVC_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(MVC_A_UNITS, rgExtraCountAll, MVC_A_NUMUNIT, MVC_A_EXTRALOC, nUnitId, MVC_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_MVC_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(MVC_A_UNITS, nUnitId, nCollectionId);
}

UINT16 CGame_MVC_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetNodeSizeFromPaletteId(MVC_A_UNITS, rgExtraCountAll, MVC_A_NUMUNIT, MVC_A_EXTRALOC, nUnitId, nPaletteId, MVC_A_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_MVC_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(MVC_A_UNITS, rgExtraCountAll, MVC_A_NUMUNIT, MVC_A_EXTRALOC, nUnitId, nPaletteId, MVC_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_MVC_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    return _GetSpecificPalette(MVC_A_UNITS, rgExtraCountAll, MVC_A_NUMUNIT, MVC_A_EXTRALOC, nUnitId, nPaletteId, MVC_A_EXTRA_CUSTOM);
}

void CGame_MVC_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != MVC_A_EXTRALOC)
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
    else // MVC_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&MVC_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }

    // Adjust for ROM-specific variant locations
    if (m_pCRC32SpecificData)
    {
        // The only differences between the ROMs is a shift in the mvcsu set on offsets above 0x40000
        if (m_nCurrentPaletteROMLocation > 0x40000)
        {
            m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
        }
    }
}

BOOL CGame_MVC_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        // Use a sorted layout
        rgUnitRedir[nUnitCtr] = MVC_A_UNITSORT[nUnitCtr];

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];

            LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

            LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;
    
    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_MVC_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (MVC_A_EXTRALOC != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if ((_wcsicmp(pCurrentNode->szDesc, L"P1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"P2") == 0))
                {
                    // We show 2 sprites (P1/P2) for export for all normal mvc sprites
                    nSrcAmt = 2;
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
                if ((NodeGet->uUnitId == indexMVCAssists) && (paletteDataSet->pPalettePairingInfo == &pairMVCDevilotNormal))
                {
                    INT8 nPeerPaletteDistance1 = 1;
                    INT8 nPeerPaletteDistance2 = 2;
                    INT8 nPeerPaletteDistance3 = 3;
                    INT8 nPeerPaletteDistance4 = 4;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);
                    const sGame_PaletteDataset* paletteDataSetToJoin3 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance3);
                    const sGame_PaletteDataset* paletteDataSetToJoin4 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance4);
                    fShouldUseAlternateLoadLogic = true;

                    // we want the platform first for z-order reasons
                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse,
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                        CreateImgTicket(paletteDataSetToJoin3->indexImgToUse, paletteDataSetToJoin3->indexOffsetToUse,
                                            CreateImgTicket(paletteDataSetToJoin4->indexImgToUse, paletteDataSetToJoin4->indexOffsetToUse
                                )))))
                    );

                    //Set each palette
                    sDescNode* JoinedNode[] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance3, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance4, -1),
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);
                    CreateDefPal(JoinedNode[3], 3);
                    CreateDefPal(JoinedNode[4], 4);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(3, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance3, nSrcAmt, nNodeIncrement);
                    SetSourcePal(4, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance4, nSrcAmt, nNodeIncrement);
                }
                else if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 3)
                {
                    const INT8 nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    const INT8 nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse)
                            ))
                    );

                    //Set each palette
                    sDescNode* JoinedNode[] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                }
                else if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
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
