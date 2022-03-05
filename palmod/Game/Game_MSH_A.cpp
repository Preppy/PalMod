#include "StdAfx.h"
#include "Game_MSH_A.h"
#include "GameDef.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define MSH_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_MSH_A::MSH_A_EXTRA_CUSTOM_05 = nullptr;
stExtraDef* CGame_MSH_A::MSH_A_EXTRA_CUSTOM_06 = nullptr;

CDescTree CGame_MSH_A::MainDescTree_05 = nullptr;
CDescTree CGame_MSH_A::MainDescTree_06 = nullptr;

uint32_t CGame_MSH_A::rgExtraCountAll_05[MSH_A_NUMUNIT_05 + 1] = { (uint32_t)-1 };
uint32_t CGame_MSH_A::rgExtraCountAll_06[MSH_A_NUMUNIT_06 + 1] = { (uint32_t)-1 };
uint32_t CGame_MSH_A::rgExtraLoc_05[MSH_A_NUMUNIT_05 + 1] = { (uint32_t)-1 };
uint32_t CGame_MSH_A::rgExtraLoc_06[MSH_A_NUMUNIT_06 + 1] = { (uint32_t)-1 };

uint32_t CGame_MSH_A::m_nMSHSelectedRom = 5;
UINT32 CGame_MSH_A::m_nTotalPaletteCountForMSH_05 = 0;
UINT32 CGame_MSH_A::m_nTotalPaletteCountForMSH_06 = 0;
UINT32 CGame_MSH_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_MSH_A::m_nConfirmedROMSize = -1;

void CGame_MSH_A::InitializeStatics()
{
    safe_delete_array(CGame_MSH_A::MSH_A_EXTRA_CUSTOM_05);
    safe_delete_array(CGame_MSH_A::MSH_A_EXTRA_CUSTOM_06);

    memset(rgExtraCountAll_05, -1, sizeof(rgExtraCountAll_05));
    memset(rgExtraCountAll_06, -1, sizeof(rgExtraCountAll_06));
    memset(rgExtraLoc_05, -1, sizeof(rgExtraLoc_05));
    memset(rgExtraLoc_06, -1, sizeof(rgExtraLoc_06));

    MainDescTree_05.SetRootTree(InitDescTree(5));
    MainDescTree_06.SetRootTree(InitDescTree(6));
}

CGame_MSH_A::CGame_MSH_A(UINT32 nConfirmedROMSize, int nMSHRomToLoad)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nMSHSelectedRom = (nMSHRomToLoad == 5) ? 5 : 6;

    CString strMessage;
    strMessage.Format(L"CGame_MSH_A::CGame_MSH_A: Loading for the %s ROM\n", (m_nMSHSelectedRom == 5) ? L"05" : L"6B");
    OutputDebugString(strMessage);

    m_nTotalInternalUnits = UsePaletteSetForCharacters() ? MSH_A_NUMUNIT_05 : MSH_A_NUMUNIT_06;
    m_nExtraUnit = UsePaletteSetForCharacters() ? MSH_A_EXTRALOC_05 : MSH_A_EXTRALOC_06;

    const UINT32 nSafeCountFor05 = 437;
    const UINT32 nSafeCountFor06 = 72;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForCharacters() ? nSafeCountFor05 : nSafeCountFor06);
    m_pszExtraFilename = UsePaletteSetForCharacters() ? EXTRA_FILENAME_MSH_05 : EXTRA_FILENAME_MSH_06;
    m_nTotalPaletteCount = UsePaletteSetForCharacters() ? m_nTotalPaletteCountForMSH_05 : m_nTotalPaletteCountForMSH_06;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetForCharacters() ? m_uLowestKnownPaletteROMLocation_05 : m_uLowestKnownPaletteROMLocation_06;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = MSH_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = MSH_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_MSH_A::~CGame_MSH_A(void)
{
    safe_delete_array(CGame_MSH_A::MSH_A_EXTRA_CUSTOM_05);
    safe_delete_array(CGame_MSH_A::MSH_A_EXTRA_CUSTOM_06);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_MSH_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
#ifdef MAME_NOTES
    Every 6 ROM is identical.  5 varies.
GAME(1995, msh,        0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Euro 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshu,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (USA 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",  0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b", 0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshud,      msh,      dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "Marvel Super Heroes (US 951024 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)    ROM_LOAD16_WORD_SWAP("mshud.05",0x100000, 0x80000, CRC(3b493e84) SHA1(875e616270e839218c924e09627bcf79211ee694))
    ROM_LOAD16_WORD_SWAP("mshud.05",0x100000, 0x80000, CRC(3b493e84) SHA1(875e616270e839218c924e09627bcf79211ee694))
    ROM_LOAD16_WORD_SWAP("msh.06b", 0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshj,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Japan 951117)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05a",  0x100000, 0x80000, CRC(f37539e6) SHA1(770febc25ca5615b6c2023727edab3c68b15b2c4))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshjr1,     msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Japan 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, msha,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Asia 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshh,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Hispanic 951117)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05a",  0x100000, 0x80000, CRC(f37539e6) SHA1(770febc25ca5615b6c2023727edab3c68b15b2c4))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshb,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Brazil 951117)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05a",  0x100000, 0x80000, CRC(f37539e6) SHA1(770febc25ca5615b6c2023727edab3c68b15b2c4))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshbr1,     msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Brazil 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
#endif
        { L"MSH (CPS2 951024)", L"msh.05", 0x6a091b9e, 0 },
        { L"MSH (CPS2 951117)", L"msh.05a", 0xf37539e6, 0 },
        { L"MSH (CPS2 US 951024)", L"mshud.05", 0x3b493e84, 0 },

        { L"MSH (CPS2)", L"msh.06b",  0x803e3fa4, 0 },
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
}

CDescTree* CGame_MSH_A::GetMainTree()
{
    if (UsePaletteSetForCharacters())
    {
        return &CGame_MSH_A::MainDescTree_05;
    }
    else
    {
        return &CGame_MSH_A::MainDescTree_06;
    }
}

uint32_t CGame_MSH_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetExtraCount(rgExtraCountAll_05, MSH_A_NUMUNIT_05, nUnitId, MSH_A_EXTRA_CUSTOM_05);
    }
    else
    {
        return _GetExtraCount(rgExtraCountAll_06, MSH_A_NUMUNIT_06, nUnitId, MSH_A_EXTRA_CUSTOM_06);
    }
}

uint32_t CGame_MSH_A::GetExtraLoc(uint32_t nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        return _GetExtraLocation(rgExtraLoc_05, MSH_A_NUMUNIT_05, nUnitId, MSH_A_EXTRA_CUSTOM_05);
    }
    else
    {
        return _GetExtraLocation(rgExtraLoc_06, MSH_A_NUMUNIT_06, nUnitId, MSH_A_EXTRA_CUSTOM_06);
    }
}

sDescTreeNode* CGame_MSH_A::InitDescTree(uint32_t nROMPaletteSetToUse)
{
    m_nMSHSelectedRom = nROMPaletteSetToUse;

    UINT16 nUnitCt;
    UINT8 nExtraUnitLocation;

    //Load extra file if we're using it
    if (UsePaletteSetForCharacters())
    {
        nExtraUnitLocation = MSH_A_EXTRALOC_05;
        LoadExtraFileForGame(EXTRA_FILENAME_MSH_05, &MSH_A_EXTRA_CUSTOM_05, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = (MSH_A_NUMUNIT_05 + (GetExtraCt(nExtraUnitLocation) ? 1 : 0));
    }
    else
    {
        nExtraUnitLocation = MSH_A_EXTRALOC_06;
        LoadExtraFileForGame(EXTRA_FILENAME_MSH_06, &MSH_A_EXTRA_CUSTOM_06, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = (MSH_A_NUMUNIT_06 + (GetExtraCt(nExtraUnitLocation) ? 1 : 0));
    }
   
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MSH_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    if (UsePaletteSetForCharacters())
    {
        m_nTotalPaletteCountForMSH_05 = _InitDescTree(NewDescTree,
            MSH_UNITS_05,
            nExtraUnitLocation,
            MSH_A_NUMUNIT_05,
            rgExtraCountAll_05,
            rgExtraLoc_05,
            MSH_A_EXTRA_CUSTOM_05
        );
    }
    else
    {
        m_nTotalPaletteCountForMSH_06 = _InitDescTree(NewDescTree,
            MSH_UNITS_06,
            nExtraUnitLocation,
            MSH_A_NUMUNIT_06,
            rgExtraCountAll_06,
            rgExtraLoc_06,
            MSH_A_EXTRA_CUSTOM_06
        );
    }

    return NewDescTree;
}

sFileRule CGame_MSH_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, (nUnitId == 5) ? L"MSH.05" : L"MSH.06B");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_MSH_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSH_A_EXTRALOC_05)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return MSH_UNITS_05[nUnitId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == MSH_A_EXTRALOC_06)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            return MSH_UNITS_06[nUnitId].uChildAmt;
        }
    }
}

uint32_t CGame_MSH_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSH_A_EXTRALOC_05)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(MSH_UNITS_05[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
    else
    {
        if (nUnitId == MSH_A_EXTRALOC_06)
        {
            return GetExtraCt(nUnitId);
        }
        else
        {
            const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(MSH_UNITS_06[nUnitId].ChildNodes);

            return pCollectionNode[nCollectionId].uChildAmt;
        }
    }
}

LPCWSTR CGame_MSH_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        if (nUnitId == MSH_A_EXTRALOC_05)
        {
            return L"Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)MSH_UNITS_05[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
    else
    {
        if (nUnitId == MSH_A_EXTRALOC_06)
        {
            return L"Extra Palettes";
        }
        else
        {
            const sDescTreeNode* pCollection = (const sDescTreeNode*)MSH_UNITS_06[nUnitId].ChildNodes;
            return pCollection[nCollectionId].szDesc;
        }
    }
}

uint32_t CGame_MSH_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetForCharacters() ? (nUnitId == MSH_A_EXTRALOC_05) :
                                      (nUnitId == MSH_A_EXTRALOC_06))
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        uint32_t nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = UsePaletteSetForCharacters() ? MSH_UNITS_05 : MSH_UNITS_06;
        uint32_t nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (uint32_t nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if MSH_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_MSH_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_MSH_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetForCharacters())
    {
        // Don't use this for Extra palettes.
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)MSH_UNITS_05[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
    else
    {
        // Don't use this for Extra palettes.
        const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)MSH_UNITS_06[nUnitId].ChildNodes;
        return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
    }
}

const sDescTreeNode* CGame_MSH_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount;

        if (UsePaletteSetForCharacters() ? (nUnitId == MSH_A_EXTRALOC_05) :
                                           (nUnitId == MSH_A_EXTRALOC_06))
        {
            nNodeCount = GetExtraCt(nUnitId);

            if (nDistanceFromZero < nNodeCount)
            {
                pCollectionNode = nullptr;
                break;
            }
        }
        else
        {
            const sDescTreeNode* pCollectionNodeToCheck = UsePaletteSetForCharacters() ? (const sDescTreeNode*)(MSH_UNITS_05[nUnitId].ChildNodes) :
                                                                                         (const sDescTreeNode*)(MSH_UNITS_06[nUnitId].ChildNodes);
            
            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < 2)) // P1/P2
                {
                    pCollectionNode = &(pCollectionNodeToCheck[nCollectionIndex]);
                }
                else
                {
                    pCollectionNode = nullptr;
                }

                break;
            }
        }

        nDistanceFromZero -= nNodeCount;
    }

    return pCollectionNode;
}

const sGame_PaletteDataset* CGame_MSH_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

void CGame_MSH_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nMSHSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_MSH_A::ClearDataBuffer()
{
    uint32_t nCurrentROMMode = m_nMSHSelectedRom;

    m_nMSHSelectedRom = m_nBufferSelectedRom;

    if (m_pppDataBuffer)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nMSHSelectedRom = nCurrentROMMode;
}

void CGame_MSH_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (UsePaletteSetForCharacters() ? (nUnitId != MSH_A_EXTRALOC_05) :
                                        (nUnitId != MSH_A_EXTRALOC_06))
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
    else // MSH_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMSH(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MSH_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    if (UsePaletteSetForCharacters())
    {
        return _UpdatePalImg(MSH_UNITS_05, rgExtraCountAll_05, MSH_A_NUMUNIT_05, MSH_A_EXTRALOC_05, MSH_A_EXTRA_CUSTOM_05, Node01, Node02, Node03, Node03);
    }
    else
    {
        return _UpdatePalImg(MSH_UNITS_06, rgExtraCountAll_06, MSH_A_NUMUNIT_06, MSH_A_EXTRALOC_06, MSH_A_EXTRA_CUSTOM_06, Node01, Node02, Node03, Node03);
    }
}

void CGame_MSH_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    if (UsePaletteSetForCharacters() ? (nUnitId != MSH_A_EXTRALOC_05) :
                                       (nUnitId != MSH_A_EXTRALOC_06))
    {
        CString strMessage;
        strMessage.Format(L"CGame_MSH_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
        OutputDebugString(strMessage);

        const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(nUnitId, nPalId);

        if (pThisPalette && pThisPalette->pExtraProcessing && pThisPalette->pExtraProcessing->pProcessingSteps.size())
        {
            OutputDebugString(L"\tThis palette is linked to additional palettes: updating those as well now.\n");
            ProcessAdditionalPaletteChangesRequired(nUnitId, nPalId, pThisPalette->pExtraProcessing->pProcessingSteps);
        }
        else
        {
            OutputDebugString(L"\tNo further processing needed.\n");
        }
    }
}
