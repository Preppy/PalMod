#include "StdAfx.h"
#include "Game_SF2CE_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

#define SF2CE_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SF2CE_A::SF2CE_A_21_EXTRA_CUSTOM = NULL;
stExtraDef* CGame_SF2CE_A::SF2CE_A_22_EXTRA_CUSTOM = NULL;
stExtraDef* CGame_SF2CE_A::SF2CE_A_23_EXTRA_CUSTOM = NULL;

int CGame_SF2CE_A::rgExtraCountAll_21[SF2CE_A_21_NUMUNIT + 1] = { -1 };
int CGame_SF2CE_A::rgExtraCountAll_22[SF2CE_A_22_NUMUNIT + 1] = { -1 };
int CGame_SF2CE_A::rgExtraCountAll_23[SF2CE_A_23_NUMUNIT + 1] = { -1 };
int CGame_SF2CE_A::rgExtraCountVisibleOnly_21[SF2CE_A_21_NUMUNIT + 1] = { -1 };
int CGame_SF2CE_A::rgExtraCountVisibleOnly_22[SF2CE_A_22_NUMUNIT + 1] = { -1 };
int CGame_SF2CE_A::rgExtraCountVisibleOnly_23[SF2CE_A_23_NUMUNIT + 1] = { -1 };
int CGame_SF2CE_A::rgExtraLoc_21[SF2CE_A_21_NUMUNIT + 1] = { -1 };
int CGame_SF2CE_A::rgExtraLoc_22[SF2CE_A_22_NUMUNIT + 1] = { -1 };
int CGame_SF2CE_A::rgExtraLoc_23[SF2CE_A_23_NUMUNIT + 1] = { -1 };

CDescTree CGame_SF2CE_A::MainDescTree_21 = nullptr;
CDescTree CGame_SF2CE_A::MainDescTree_22 = nullptr;
CDescTree CGame_SF2CE_A::MainDescTree_23 = nullptr;
UINT32 CGame_SF2CE_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_SF2CE_A::m_nConfirmedROMSize = -1;

int CGame_SF2CE_A::m_nSelectedRom = 22;
UINT32 CGame_SF2CE_A::m_nTotalPaletteCountForSF2CE_21 = 0;
UINT32 CGame_SF2CE_A::m_nTotalPaletteCountForSF2CE_22 = 0;
UINT32 CGame_SF2CE_A::m_nTotalPaletteCountForSF2CE_23 = 0;

constexpr auto k_SF2CE_JapanROMName_RevA = L"s92j_22a.7f";
constexpr auto k_SF2CE_JapanROMName_RevB = L"s92j_22b.7f";
constexpr auto k_SF2CE_JapanROMName_RevC = L"s92j_22c.7f";

void CGame_SF2CE_A::InitializeStatics()
{
    safe_delete_array(CGame_SF2CE_A::SF2CE_A_21_EXTRA_CUSTOM);
    safe_delete_array(CGame_SF2CE_A::SF2CE_A_22_EXTRA_CUSTOM);
    safe_delete_array(CGame_SF2CE_A::SF2CE_A_23_EXTRA_CUSTOM);

    memset(rgExtraCountAll_21, -1, sizeof(rgExtraCountAll_21));
    memset(rgExtraCountAll_22, -1, sizeof(rgExtraCountAll_22));
    memset(rgExtraCountAll_23, -1, sizeof(rgExtraCountAll_23));
    memset(rgExtraCountVisibleOnly_21, -1, sizeof(rgExtraCountVisibleOnly_21));
    memset(rgExtraCountVisibleOnly_22, -1, sizeof(rgExtraCountVisibleOnly_22));
    memset(rgExtraCountVisibleOnly_23, -1, sizeof(rgExtraCountVisibleOnly_23));
    memset(rgExtraLoc_21, -1, sizeof(rgExtraLoc_21));
    memset(rgExtraLoc_22, -1, sizeof(rgExtraLoc_22));
    memset(rgExtraLoc_23, -1, sizeof(rgExtraLoc_23));

    MainDescTree_21.SetRootTree(CGame_SF2CE_A::InitDescTree(21));
    MainDescTree_22.SetRootTree(CGame_SF2CE_A::InitDescTree(22));
    MainDescTree_23.SetRootTree(CGame_SF2CE_A::InitDescTree(23));
}

CGame_SF2CE_A::CGame_SF2CE_A(UINT32 nConfirmedROMSize, int nSF2CEROMToLoad)
{
    createPalOptions = { OFFSET_PALETTE_BY_ONE, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_12A);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    InitializeStatics();

    m_nSelectedRom = nSF2CEROMToLoad;

    switch (m_nSelectedRom)
    {
    case 21:
        m_pszExtraFilename = EXTRA_FILENAME_SF2CE_21;
        m_nTotalInternalUnits = SF2CE_A_21_NUMUNIT;
        m_nExtraUnit = SF2CE_A_21_EXTRALOC;

        nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

        m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 39;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSF2CE_21;
        m_nLowestKnownPaletteRomLocation = 0x9400;
        break;
    case 22:
    default:
        m_pszExtraFilename = EXTRA_FILENAME_SF2CE_22;

        //We need the proper unit amt before we init the main buffer
        m_nTotalInternalUnits = SF2CE_A_22_NUMUNIT;
        m_nExtraUnit = SF2CE_A_22_EXTRALOC;

        nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

        m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 24;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSF2CE_22;
        m_nLowestKnownPaletteRomLocation = 0x16836;
        break;
    case 23:
        m_pszExtraFilename = EXTRA_FILENAME_SF2CE_23;
        m_nTotalInternalUnits = SF2CE_A_23_NUMUNIT;
        m_nExtraUnit = SF2CE_A_23_EXTRALOC;

        nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

        m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 16;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSF2CE_23;
        m_nLowestKnownPaletteRomLocation = 0x01dffa;
        break;
    };

    CString strInfo;
    strInfo.Format(L"CGame_SF2CE_A::CGame_SF2CE_A: Loaded SF2CE_A with %u Extras\n", GetExtraCt(m_nExtraUnit));
    OutputDebugString(strInfo);

    InitDataBuffer();

    //Set game information
    nGameFlag = SF2CE_A;
    nImgGameFlag = IMGDAT_SECTION_SF2;
    m_prgGameImageSet = SF2HF_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(SF2HF_A_IMG_UNITS);

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

CGame_SF2CE_A::~CGame_SF2CE_A(void)
{
    safe_delete_array(CGame_SF2CE_A::SF2CE_A_21_EXTRA_CUSTOM);
    safe_delete_array(CGame_SF2CE_A::SF2CE_A_22_EXTRA_CUSTOM);
    safe_delete_array(CGame_SF2CE_A::SF2CE_A_23_EXTRA_CUSTOM);
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();
}

UINT32 CGame_SF2CE_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        // 21 is the same across all versions
        { L"Street Fighter II' - Champion Edition", L"s92_21a.6f", 0x925a7877, 0 },
        { L"Street Fighter II' - Champion Edition (Japan 920308)", L"s92j_21a.6f", 0x925a7877, 0 },

        // 22 shifts consistently across revisions
        { L"Street Fighter II' - Champion Edition (920313)", L"s92_22a.7f", 0x99f1cca4, -0xc },
        { L"Street Fighter II' - Champion Edition (920513)", L"s92_22b.7f", 0x2bbe15ed, 0 },
        { L"Street Fighter II' - Champion Edition (920803)", L"s92_22c.7f", 0x5fd8630b, 0x8 },

        // second shift for boxer and P2 colors at least
        { L"Street Fighter II' - Champion Edition (Japan 920313)", k_SF2CE_JapanROMName_RevA, 0xc4f64bcd, 0x1BDE },
        { L"Street Fighter II' - Champion Edition (Japan 920513)", k_SF2CE_JapanROMName_RevB, 0x2fbb3bfe, 0x1BF0 },
        { L"Street Fighter II' - Champion Edition (Japan 920803)", k_SF2CE_JapanROMName_RevC, 0x8c0b2ed6, 0x1BF8 },

        // 23
        { L"Street Fighter II' - Champion Edition (World 920313)", L"s92e_23b.8f", 0x0aaa1a3a, 0 }, // ce - core
        { L"Street Fighter II' - Champion Edition (World 920513)", L"s92e_23a.8f", 0x3f846b74, 0 }, // ceea

        { L"Street Fighter II' - Champion Edition (USA 920313)", L"s92u_23a.8f", 0xac44415b, 0 }, // ceua
        { L"Street Fighter II' - Champion Edition (USA 920513)", L"s92u_23b.8f", 0x996a3015, 0 }, // ceub
        { L"Street Fighter II' - Champion Edition (USA 920803)", L"s92u_23c.8f", 0x0a8b6aa2, 0 }, // ceuc

        { L"Street Fighter II' - Champion Edition (Taiwan 920313)", L"s92t_23a.8f", 0xd7c28ade, 0 }, // cet
        { L"Street Fighter II' - Champion Edition (Japan 920322)", L"s92j_23a.8f", 0x4f42bb5a, 0xA14 }, // ceja
        { L"Street Fighter II' - Champion Edition (Japan 920513)", L"s92j_23b.8f", 0x140876c5, 0xA14 }, // cejb
        { L"Street Fighter II' - Champion Edition (Japan 920803)", L"s92j_23c.8f", 0xf0120635, 0xA14 }, // cejc
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

#ifdef MAME_INFO
        ROM_START(sf2ce)    // 13/05/1992 (c) 1992 (World)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92e_23b.8f", 0x000000, 0x80000, CRC(0aaa1a3a) SHA1(774a2b52f7c1876c0e10d8d57a0850ad2d016cf6))
        ROM_LOAD16_WORD_SWAP("s92_22b.7f", 0x080000, 0x80000, CRC(2bbe15ed) SHA1(a8e2edef62fa99c5ef701b28bfb6bc42f3af183d))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2ceea)  // 13/03/1992 (c) 1992 (World)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92e_23a.8f", 0x000000, 0x80000, CRC(3f846b74) SHA1(c8d7a01b626771870123f1663a01a81f9c8fe582))
        ROM_LOAD16_WORD_SWAP("s92_22a.7f", 0x080000, 0x80000, CRC(99f1cca4) SHA1(64111eba81d743fc3fd51d7a89cd0b2eefcc900d))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2ceua) // 13/03/1992 (c) 1992 (USA)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92u_23a.8f", 0x000000, 0x80000, CRC(ac44415b) SHA1(218f8b1886eb72b8547127042b5ae47600e18944))
        ROM_LOAD16_WORD_SWAP("s92_22a.7f", 0x080000, 0x80000, CRC(99f1cca4) SHA1(64111eba81d743fc3fd51d7a89cd0b2eefcc900d))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2ceub) // 13/05/1992 (c) 1992 (USA)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92u_23b.8f", 0x000000, 0x80000, CRC(996a3015) SHA1(fdf45da54b1c14478a60f2b86e37ffe32a98b135))
        ROM_LOAD16_WORD_SWAP("s92_22b.7f", 0x080000, 0x80000, CRC(2bbe15ed) SHA1(a8e2edef62fa99c5ef701b28bfb6bc42f3af183d))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2ceuc) // 03/08/1992 (c) 1992 (USA)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92u_23c.8f", 0x000000, 0x80000, CRC(0a8b6aa2) SHA1(a19871271172119e1cf1ff47700bb1917b08514b))
        ROM_LOAD16_WORD_SWAP("s92_22c.7f", 0x080000, 0x80000, CRC(5fd8630b) SHA1(f0ef9c5ab91a4b421fb4b1747eef99c964c15de3))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2cet) // 13/03/1992 (c) 1992 (Taiwan)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92t_23a.8f", 0x000000, 0x80000, CRC(d7c28ade) SHA1(4fe8201d8861f9ea9c62fd97b7396bc180a9f3ce))
        ROM_LOAD16_WORD_SWAP("s92_22a.7f", 0x080000, 0x80000, CRC(99f1cca4) SHA1(64111eba81d743fc3fd51d7a89cd0b2eefcc900d))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2ceja) // 22/03/1992 (c) 1992 (Japan)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92j_23a.8f", 0x000000, 0x80000, CRC(4f42bb5a) SHA1(59d0587c554e06ea45d4092ea4299ff086509d4b))
        ROM_LOAD16_WORD_SWAP("s92j_22a.7f", 0x080000, 0x80000, CRC(c4f64bcd) SHA1(262c0419bf727da80c2ac52b877a19276d9aac3c))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2cejb) // 13/05/1992 (c) 1992 (Japan)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92j_23b.8f", 0x000000, 0x80000, CRC(140876c5) SHA1(304630e6d8bae9f8d29090e05f7e013c7dafe9cc))
        ROM_LOAD16_WORD_SWAP("s92j_22b.7f", 0x080000, 0x80000, CRC(2fbb3bfe) SHA1(e364564a12022730c2c0d0e8fd435e2c30ef9410))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))  // could be s92j_21a.6f

        ROM_START(sf2cejc) // 03/08/1992 (c) 1992 (Japan)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92j_23c.8f", 0x000000, 0x80000, CRC(f0120635) SHA1(5e4a9a4b0f65c6139e76ee4ffa02b9db245b1858))
        ROM_LOAD16_WORD_SWAP("s92j_22c.7f", 0x080000, 0x80000, CRC(8c0b2ed6) SHA1(408db039b4dad72b41458723575ed5352b71e10b))
        ROM_LOAD16_WORD_SWAP("s92j_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))  // == s92_21a.6f
#endif

    return ARRAYSIZE(knownROMs);
}

int CGame_SF2CE_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    switch (m_nSelectedRom)
    {
    case 21:
    {
        int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly_21 : (int*)rgExtraCountAll_21;

        if (rgExtraCountAll_21[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_21, 0, (SF2CE_A_21_NUMUNIT + 1) * sizeof(int));
            memset(rgExtraCountVisibleOnly_21, 0, (SF2CE_A_21_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_21[pCurrDef->uUnitN]++;

                if (!pCurrDef->isInvisible)
                {
                    rgExtraCountVisibleOnly_21[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraCt[nUnitId];
    }
    case 22:
    default:
    {
        int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly_22 : (int*)rgExtraCountAll_22;

        if (rgExtraCountAll_22[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_22, 0, (SF2CE_A_22_NUMUNIT + 1) * sizeof(int));
            memset(rgExtraCountVisibleOnly_22, 0, (SF2CE_A_22_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_22[pCurrDef->uUnitN]++;

                if (!pCurrDef->isInvisible)
                {
                    rgExtraCountVisibleOnly_22[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraCt[nUnitId];
    }
    case 23:
    {
        int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly_23 : (int*)rgExtraCountAll_23;

        if (rgExtraCountAll_23[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_23, 0, (SF2CE_A_23_NUMUNIT + 1) * sizeof(int));
            memset(rgExtraCountVisibleOnly_23, 0, (SF2CE_A_23_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_23[pCurrDef->uUnitN]++;

                if (!pCurrDef->isInvisible)
                {
                    rgExtraCountVisibleOnly_23[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraCt[nUnitId];
    }
    };
}

int CGame_SF2CE_A::GetExtraLoc(UINT16 nUnitId)
{
    switch (m_nSelectedRom)
    {
    case 21:
    {
        if (rgExtraLoc_21[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_21, 0, (SF2CE_A_21_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_21[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_21[nUnitId];
    }
    case 22:
    default:
    {
        if (rgExtraLoc_22[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_22, 0, (SF2CE_A_22_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_22[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_22[nUnitId];
    }
    case 23:
    {
        if (rgExtraLoc_23[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_23, 0, (SF2CE_A_23_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_23[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_23[nUnitId];
    }
    };
}

const sDescTreeNode* CGame_SF2CE_A::GetCurrentUnitSet()
{
    switch (m_nSelectedRom)
    {
    case 21:
        return SF2CE_A_21_UNITS;
    case 22:
    default:
        return SF2CE_A_22_UNITS;
    case 23:
        return SF2CE_A_23_UNITS;
    };
}

UINT16 CGame_SF2CE_A::GetCurrentExtraLoc()
{
    switch (m_nSelectedRom)
    {
    case 21:
        return SF2CE_A_21_EXTRALOC;
    case 22:
    default:
        return SF2CE_A_22_EXTRALOC;
    case 23:
        return SF2CE_A_23_EXTRALOC;
    };
}

CDescTree* CGame_SF2CE_A::GetMainTree()
{
    switch (m_nSelectedRom)
    {
    case 21:
        return &CGame_SF2CE_A::MainDescTree_21;
    case 22:
    default:
        return &CGame_SF2CE_A::MainDescTree_22;
    case 23:
        return &CGame_SF2CE_A::MainDescTree_23;
    };
}

stExtraDef* CGame_SF2CE_A::GetCurrentExtraDef(int nDefCtr)
{
    switch (m_nSelectedRom)
    {
    case 21:
        return (stExtraDef*)&SF2CE_A_21_EXTRA_CUSTOM[nDefCtr];
    case 22:
    default:
        return (stExtraDef*)&SF2CE_A_22_EXTRA_CUSTOM[nDefCtr];
    case 23:
        return (stExtraDef*)&SF2CE_A_23_EXTRA_CUSTOM[nDefCtr];
    };
}

sDescTreeNode* CGame_SF2CE_A::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nSelectedRom = nROMPaletteSetToUse;

    bool fHaveExtras;
    UINT16 nUnitCt;
    UINT8 nExtraUnitLocation;

    switch (m_nSelectedRom)
    {
    case 21:
    {
        nExtraUnitLocation = SF2CE_A_21_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_SF2CE_21, SF2CE_A_EXTRA, &SF2CE_A_21_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
        nUnitCt = SF2CE_A_21_NUMUNIT + (fHaveExtras ? 1 : 0);
        break;
    }
    case 22:
    default:
    {
        nExtraUnitLocation = SF2CE_A_22_EXTRALOC;
        //Load extra file if we're using it
        LoadExtraFileForGame(EXTRA_FILENAME_SF2CE_22, SF2CE_A_EXTRA, &SF2CE_A_22_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
        nUnitCt = SF2CE_A_22_NUMUNIT + (fHaveExtras ? 1 : 0);
        break;
    }
    case 23:
    {
        nExtraUnitLocation = SF2CE_A_23_EXTRALOC;
        //Load extra file if we're using it
        LoadExtraFileForGame(EXTRA_FILENAME_SF2CE_23, SF2CE_A_EXTRA, &SF2CE_A_23_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
        nUnitCt = SF2CE_A_23_NUMUNIT + (fHaveExtras ? 1 : 0);
        break;
    }
    };

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SF2CE_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_SF2CE_A::InitDescTree: Building desc tree for SF2CE_A ROM %u...\n", m_nSelectedRom);
    OutputDebugString(strMsg);

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UINT16 nExtraCt = GetExtraCt(iUnitCtr, TRUE);
        BOOL bUseExtra = (GetExtraLoc(iUnitCtr) ? 1 : 0);

        UINT16 nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        if (iUnitCtr != nExtraUnitLocation)
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", GetCurrentUnitSet()[iUnitCtr].szDesc);

            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if SF2CE_A_DEBUG
            strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
            OutputDebugString(strMsg);
#endif

            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if SF2CE_A_DEBUG
                strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if SF2CE_A_DEBUG
                    strMsg.Format(L"\t\tPalette: \"%s\", %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(L", 0x%06x to 0x%06x (%u colors),", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(L" image unit 0x%02x image index 0x%02x.\n", paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(L" no image available.\n");
                    }
                    OutputDebugString(strMsg);
#endif
                }
            }
        }
        else
        {
            // This handles data loaded from the Extra extension file, which are treated
            // each as their own separate node with one collection with everything under that.
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"Extra Palettes");
            UnitNode->ChildNodes = new sDescTreeNode[1]; // Only 1, L"Extra Palettes)"
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if SF2CE_A_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif

        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(nExtraUnitLocation > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetCurrentExtraDef(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetCurrentExtraDef(nExtraPos + nCurrExtra);
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((nExtraUnitLocation > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if SF2CE_A_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    switch (m_nSelectedRom)
    {
    case 21:
        m_nTotalPaletteCountForSF2CE_21 = nTotalPaletteCount;
        break;
    case 22:
    default:
        m_nTotalPaletteCountForSF2CE_22 = nTotalPaletteCount;
        break;
    case 23:
        m_nTotalPaletteCountForSF2CE_23 = nTotalPaletteCount;
        break;
    };

    strMsg.Format(L"CGame_SF2CE_A::InitDescTree: Loaded %u palettes for SF2CE ROM %u\n", nTotalPaletteCount, m_nSelectedRom);
    OutputDebugString(strMsg);

    return NewDescTree;
}

sFileRule CGame_SF2CE_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"s92_22b.7f");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SF2CE_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return GetCurrentUnitSet()[nUnitId].uChildAmt;
    }
}

UINT16 CGame_SF2CE_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);
        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCWSTR CGame_SF2CE_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return L"Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_SF2CE_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        UINT16 nCollectionCount = GetCurrentUnitSet()[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if SF2CE_A_DEBUG_EXTRA
        CString strMsg;
        strMsg.Format(L"CGame_SF2CE_A::GetPaletteCountForUnit: %u palettes for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_SF2CE_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGame_SF2CE_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

UINT16 CGame_SF2CE_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nNodeSize = 0;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_SF2CE_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount;

        if (nUnitId == GetCurrentExtraLoc())
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
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);

            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < m_nNumberOfColorOptions))
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

void CGame_SF2CE_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SF2CE_A::ClearDataBuffer()
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

void CGame_SF2CE_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != GetCurrentExtraLoc())
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        // Adjust for ROM-specific variant locations
        if (m_pCRC32SpecificData)
        {
            // There's a different shift in Japanese 22 ROMs above this location.
            bool isLocationLow = (m_nCurrentPaletteROMLocation < 0x19000);
            if (isLocationLow && (wcscmp(m_pCRC32SpecificData->szROMFileName, k_SF2CE_JapanROMName_RevA) == 0))
            {
                m_nCurrentPaletteROMLocation += 0x1b3c;
            }
            else if (isLocationLow && (wcscmp(m_pCRC32SpecificData->szROMFileName, k_SF2CE_JapanROMName_RevB) == 0))
            {
                m_nCurrentPaletteROMLocation += 0x1b4e;
            }
            else if (isLocationLow && (wcscmp(m_pCRC32SpecificData->szROMFileName, k_SF2CE_JapanROMName_RevC) == 0))
            {
                m_nCurrentPaletteROMLocation += 0x1b56;
            }
            else
            {
                m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
            }
        }
    }
    else // SF2CE_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SF2CE_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    //Change the image id if we need to
    nTargetImgId = 0;
    UINT16 nImgUnitId = NodeGet->uUnitId;

    UINT16 nSrcStart = NodeGet->uPalId;
    UINT16 nSrcAmt = 1;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    //Select the image
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            if ((_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2[0]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, DEF_BUTTONLABEL_2[1]) == 0))
            {
                nSrcAmt = ARRAYSIZE(DEF_BUTTONLABEL_2);
                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in P1
                    nSrcStart -= nNodeIncrement;
                }
            }
            else // Extras or Extra Range
            {
                // Status effects and etc have no peer palettes
                nSrcAmt = 1;
            }
        }

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;
        }
    }
    else // Extra region
    {
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(NodeGet->uUnitId) + NodeGet->uPalId);

        if (pCurrDef->indexImgToUse != INVALID_UNIT_VALUE)
        {
            nImgUnitId = pCurrDef->indexImgToUse;
            nTargetImgId = pCurrDef->indexOffsetToUse;
        }
        else
        {
            fShouldUseAlternateLoadLogic = true;

            CreateDefPal(NodeGet, 0);

            // Only internal units get sprites
            ClearSetImgTicket(nullptr);

            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, 1);
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(NodeGet, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}
