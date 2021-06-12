#include "StdAfx.h"
#include "Game_SFIII3_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

#define SFIII3_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SFIII3_A::SFIII3_A_10_EXTRA_CUSTOM = NULL;
stExtraDef* CGame_SFIII3_A::SFIII3_A_14_EXTRA_CUSTOM = NULL;
stExtraDef* CGame_SFIII3_A::SFIII3_A_4_EXTRA_CUSTOM = NULL;
stExtraDef* CGame_SFIII3_A::SFIII3_A_51_EXTRA_CUSTOM = NULL;
stExtraDef* CGame_SFIII3_A::SFIII3_A_70_EXTRA_CUSTOM = NULL;

int CGame_SFIII3_A::rgExtraCountAll_10[SFIII3_A_10_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraCountAll_14[SFIII3_A_10_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraCountAll_4[SFIII3_A_51_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraCountAll_51[SFIII3_A_51_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraCountAll_70[SFIII3_A_70_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraCountVisibleOnly_10[SFIII3_A_10_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraCountVisibleOnly_14[SFIII3_A_10_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraCountVisibleOnly_4[SFIII3_A_51_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraCountVisibleOnly_51[SFIII3_A_51_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraCountVisibleOnly_70[SFIII3_A_70_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraLoc_10[SFIII3_A_10_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraLoc_14[SFIII3_A_10_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraLoc_4[SFIII3_A_51_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraLoc_51[SFIII3_A_51_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraLoc_70[SFIII3_A_70_NUMUNIT + 1] = { -1 };

CDescTree CGame_SFIII3_A::MainDescTree_10 = nullptr;
CDescTree CGame_SFIII3_A::MainDescTree_14 = nullptr;
CDescTree CGame_SFIII3_A::MainDescTree_4 = nullptr;
CDescTree CGame_SFIII3_A::MainDescTree_51 = nullptr;
CDescTree CGame_SFIII3_A::MainDescTree_70 = nullptr;
UINT32 CGame_SFIII3_A::m_nExpectedGameROMSize = 0x800000; // 8,388,608 bytes
UINT32 CGame_SFIII3_A::m_nConfirmedROMSize = -1;

int CGame_SFIII3_A::m_nSelectedRom = SF3ROM_51;
UINT32 CGame_SFIII3_A::m_nTotalPaletteCountForSFIII3_10 = 0;
UINT32 CGame_SFIII3_A::m_nTotalPaletteCountForSFIII3_14 = 0;
UINT32 CGame_SFIII3_A::m_nTotalPaletteCountForSFIII3_4 = 0;
UINT32 CGame_SFIII3_A::m_nTotalPaletteCountForSFIII3_51 = 0;
UINT32 CGame_SFIII3_A::m_nTotalPaletteCountForSFIII3_70 = 0;

void CGame_SFIII3_A::InitializeStatics()
{
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_10_EXTRA_CUSTOM);
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_14_EXTRA_CUSTOM);
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_4_EXTRA_CUSTOM);
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_51_EXTRA_CUSTOM);
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_70_EXTRA_CUSTOM);

    memset(rgExtraCountAll_10, -1, sizeof(rgExtraCountAll_10));
    memset(rgExtraCountAll_14, -1, sizeof(rgExtraCountAll_14));
    memset(rgExtraCountAll_4, -1, sizeof(rgExtraCountAll_4));
    memset(rgExtraCountAll_51, -1, sizeof(rgExtraCountAll_51));
    memset(rgExtraCountAll_70, -1, sizeof(rgExtraCountAll_70));
    memset(rgExtraCountVisibleOnly_10, -1, sizeof(rgExtraCountVisibleOnly_10));
    memset(rgExtraCountVisibleOnly_14, -1, sizeof(rgExtraCountVisibleOnly_14));
    memset(rgExtraCountVisibleOnly_4, -1, sizeof(rgExtraCountVisibleOnly_4));
    memset(rgExtraCountVisibleOnly_51, -1, sizeof(rgExtraCountVisibleOnly_51));
    memset(rgExtraCountVisibleOnly_70, -1, sizeof(rgExtraCountVisibleOnly_70));
    memset(rgExtraLoc_10, -1, sizeof(rgExtraLoc_10));
    memset(rgExtraLoc_14, -1, sizeof(rgExtraLoc_14));
    memset(rgExtraLoc_4, -1, sizeof(rgExtraLoc_4));
    memset(rgExtraLoc_51, -1, sizeof(rgExtraLoc_51));
    memset(rgExtraLoc_70, -1, sizeof(rgExtraLoc_70));

    MainDescTree_10.SetRootTree(CGame_SFIII3_A::InitDescTree(10));
    MainDescTree_14.SetRootTree(CGame_SFIII3_A::InitDescTree(14));
    MainDescTree_4.SetRootTree(CGame_SFIII3_A::InitDescTree(4));
    MainDescTree_51.SetRootTree(CGame_SFIII3_A::InitDescTree(51));
    MainDescTree_70.SetRootTree(CGame_SFIII3_A::InitDescTree(70));
}

CGame_SFIII3_A::CGame_SFIII3_A(UINT32 nConfirmedROMSize, int nSF3ROMToLoad)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_LE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    InitializeStatics();

    m_nSelectedRom = nSF3ROMToLoad;

    //We need the proper unit amt before we init the main buffer
    m_nTotalInternalUnits = UsingROMForGill() ? SFIII3_A_10_NUMUNIT : (UsePaletteSetFor3Ex() ? SFIII3_A_70_NUMUNIT : SFIII3_A_51_NUMUNIT);
    m_nExtraUnit = UsingROMForGill() ? SFIII3_A_10_EXTRALOC : (UsePaletteSetFor3Ex() ? SFIII3_A_70_EXTRALOC : SFIII3_A_51_EXTRALOC);
    m_pszExtraFilename = UsingROMForGill() ? EXTRA_FILENAME_SF3_10 : EXTRA_FILENAME_SF3_51;
    m_nLowestKnownPaletteRomLocation = UsingROMForGill() ? 0x1C86A8 : 0x700000;

    switch (m_nSelectedRom)
    {
    case SF3ROM_10:
        m_nSafeCountForThisRom = 171;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSFIII3_10;
        break;
    case SF3ROM_10_4rd:
        m_nSafeCountForThisRom = 183;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSFIII3_14;
        break;
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        __fallthrough;
    case SF3ROM_51:
        m_nSafeCountForThisRom = 1417;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSFIII3_51;
        break;
    case SF3ROM_51_4rd: // Replaces Shin Gouki with Ultra Sean, which uses 3 fewer palettes
        m_nSafeCountForThisRom = 1417 - 3;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSFIII3_4;
        break;
    case SF3ROM_70_EX: // TV's edit: removes Gill, just has character palettes but adds extra button colors
                       // doesn't include the Bonus nor Stage sections
        m_nSafeCountForThisRom = 1687;
        m_nTotalPaletteCount = m_nTotalPaletteCountForSFIII3_70;
        m_nLowestKnownPaletteRomLocation = 0x0;
        break;
    }

    m_nSafeCountForThisRom += GetExtraCt(m_nExtraUnit);

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    CString strInfo;
    strInfo.Format(L"CGame_SFIII3_A::CGame_SFIII3_A: Loaded SFIII3_A with %u Extras\n", GetExtraCt(m_nExtraUnit));
    OutputDebugString(strInfo);

    InitDataBuffer();

    //Set game information
    nGameFlag = SFIII3_A;
    nImgGameFlag = IMGDAT_SECTION_SF3;
    m_prgGameImageSet = SFIII3_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(SFIII3_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL7_SF3;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL7_SF3);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SFIII3_A::~CGame_SFIII3_A(void)
{
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_10_EXTRA_CUSTOM);
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_14_EXTRA_CUSTOM);
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_4_EXTRA_CUSTOM);
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_51_EXTRA_CUSTOM);
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_70_EXTRA_CUSTOM);
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();
}

int CGame_SFIII3_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    switch (m_nSelectedRom)
    {
    case SF3ROM_10:
    {
        int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly_10 : (int*)rgExtraCountAll_10;

        if (rgExtraCountAll_10[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_10, 0, (SFIII3_A_10_NUMUNIT + 1) * sizeof(int));
            memset(rgExtraCountVisibleOnly_10, 0, (SFIII3_A_10_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_10[pCurrDef->uUnitN]++;

                if (!pCurrDef->isInvisible)
                {
                    rgExtraCountVisibleOnly_10[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraCt[nUnitId];
    }
    case SF3ROM_10_4rd:
    {
        int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly_14 : (int*)rgExtraCountAll_14;

        if (rgExtraCountAll_14[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_14, 0, (SFIII3_A_10_NUMUNIT + 1) * sizeof(int));
            memset(rgExtraCountVisibleOnly_14, 0, (SFIII3_A_10_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_14[pCurrDef->uUnitN]++;

                if (!pCurrDef->isInvisible)
                {
                    rgExtraCountVisibleOnly_10[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraCt[nUnitId];
    }
    case SF3ROM_51_4rd:
    {
        int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly_4 : (int*)rgExtraCountAll_4;

        if (rgExtraCountAll_4[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_4, 0, (SFIII3_A_51_NUMUNIT + 1) * sizeof(int));
            memset(rgExtraCountVisibleOnly_4, 0, (SFIII3_A_51_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_4[pCurrDef->uUnitN]++;

                if (!pCurrDef->isInvisible)
                {
                    rgExtraCountVisibleOnly_4[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraCt[nUnitId];
    }
    case SF3ROM_70_EX:
    {
        int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly_70 : (int*)rgExtraCountAll_70;

        if (rgExtraCountAll_70[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_70, 0, (SFIII3_A_70_NUMUNIT + 1) * sizeof(int));
            memset(rgExtraCountVisibleOnly_70, 0, (SFIII3_A_70_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_70[pCurrDef->uUnitN]++;

                if (!pCurrDef->isInvisible)
                {
                    rgExtraCountVisibleOnly_70[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraCt[nUnitId];
    }
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        __fallthrough;
    case SF3ROM_51:
    {
        int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly_51 : (int*)rgExtraCountAll_51;

        if (rgExtraCountAll_51[0] == -1)
        {
            int nDefCtr = 0;
            memset(rgExtraCountAll_51, 0, (SFIII3_A_51_NUMUNIT + 1) * sizeof(int));
            memset(rgExtraCountVisibleOnly_51, 0, (SFIII3_A_51_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                rgExtraCountAll_51[pCurrDef->uUnitN]++;

                if (!pCurrDef->isInvisible)
                {
                    rgExtraCountVisibleOnly_51[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraCt[nUnitId];
    }
    }
}

int CGame_SFIII3_A::GetExtraLoc(UINT16 nUnitId)
{
    switch (m_nSelectedRom)
    {
    case SF3ROM_10:
    {
        if (rgExtraLoc_10[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_10, 0, (SFIII3_A_10_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_10[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_10[nUnitId];
    }
    case SF3ROM_10_4rd:
    {
        if (rgExtraLoc_14[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_14, 0, (SFIII3_A_10_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_14[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_14[nUnitId];
    }
    case SF3ROM_51_4rd:
    {
        if (rgExtraLoc_4[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_4, 0, (SFIII3_A_51_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_4[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_4[nUnitId];
    }
    case SF3ROM_70_EX:
    {
        if (rgExtraLoc_70[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_70, 0, (SFIII3_A_70_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_70[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_70[nUnitId];
    }
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        __fallthrough;
    case SF3ROM_51:
    {
        if (rgExtraLoc_51[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = UNIT_START_VALUE;
            memset(rgExtraLoc_51, 0, (SFIII3_A_51_NUMUNIT + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetCurrentExtraDef(0);

            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_51[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetCurrentExtraDef(nDefCtr);
            }
        }

        return rgExtraLoc_51[nUnitId];
    }
    }
}

const sDescTreeNode* CGame_SFIII3_A::GetCurrentUnitSet()
{
    switch (m_nSelectedRom)
    {
    case SF3ROM_10:
        return SFIII3_A_10_UNITS;
    case SF3ROM_10_4rd:
        return SFIII3_A_14_UNITS;
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        __fallthrough;
    case SF3ROM_51:
        return SFIII3_A_51_UNITS;
    case SF3ROM_70_EX:
        return SFIII3EX_A_70_UNITS;
    case SF3ROM_51_4rd:
        return SFIII3_A_4_UNITS;
    }
}

UINT16 CGame_SFIII3_A::GetCurrentExtraLoc()
{
    if (UsingROMForGill())
    {
        return SFIII3_A_10_EXTRALOC;
    }
    else
    {
        if (UsePaletteSetFor3Ex())
        {
            return SFIII3_A_70_EXTRALOC;
        }
        else
        {
            return SFIII3_A_51_EXTRALOC;
        }
    }
}

CDescTree* CGame_SFIII3_A::GetMainTree()
{
    switch (m_nSelectedRom)
    {
    case SF3ROM_10:
        return &CGame_SFIII3_A::MainDescTree_10;
    case SF3ROM_10_4rd:
        return &CGame_SFIII3_A::MainDescTree_14;
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        __fallthrough;
    case SF3ROM_51:
        return &CGame_SFIII3_A::MainDescTree_51;
    case SF3ROM_70_EX:
        return &CGame_SFIII3_A::MainDescTree_70;
    case SF3ROM_51_4rd:
        return &CGame_SFIII3_A::MainDescTree_4;
    }
}

stExtraDef* CGame_SFIII3_A::GetCurrentExtraDef(int nDefCtr)
{
    switch (m_nSelectedRom)
    {
    case SF3ROM_10:
        return (stExtraDef*)&SFIII3_A_10_EXTRA_CUSTOM[nDefCtr];
    case SF3ROM_10_4rd:
        return (stExtraDef*)&SFIII3_A_14_EXTRA_CUSTOM[nDefCtr];
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        __fallthrough;
    case SF3ROM_51:
        return (stExtraDef*)&SFIII3_A_51_EXTRA_CUSTOM[nDefCtr];
    case SF3ROM_51_4rd:
        return (stExtraDef*)&SFIII3_A_4_EXTRA_CUSTOM[nDefCtr];
    case SF3ROM_70_EX:
        return (stExtraDef*)&SFIII3_A_70_EXTRA_CUSTOM[nDefCtr];
    }
}

sDescTreeNode* CGame_SFIII3_A::InitDescTree(int nROMPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nSelectedRom = nROMPaletteSetToUse;

    UINT16 nUnitCt;
    UINT8 nExtraUnitLocation;

    switch (m_nSelectedRom)
    {
    case SF3ROM_10:
        nExtraUnitLocation = SFIII3_A_10_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_SF3_10, SFIII3_A_EXTRA, &SFIII3_A_10_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = SFIII3_A_10_NUMUNIT;
        break;
    case SF3ROM_10_4rd:
        nExtraUnitLocation = SFIII3_A_10_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_SF3_10, SFIII3_A_EXTRA, &SFIII3_A_14_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = SFIII3_A_10_NUMUNIT;
        break;
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        __fallthrough;
    case SF3ROM_51:
        nExtraUnitLocation = SFIII3_A_51_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_SF3_51, SFIII3_A_EXTRA, &SFIII3_A_51_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = SFIII3_A_51_NUMUNIT;
        break;
    case SF3ROM_51_4rd:
        nExtraUnitLocation = SFIII3_A_51_EXTRALOC;
        // Don't load extras for this version: it's only half the expected size so early extras would be in space
        LoadExtraFileForGame(nullptr, SFIII3_A_EXTRA, &SFIII3_A_4_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = SFIII3_A_51_NUMUNIT;
        break;
    case SF3ROM_70_EX:
        nExtraUnitLocation = SFIII3_A_70_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_SF3_51, SFIII3_A_EXTRA, &SFIII3_A_70_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        nUnitCt = SFIII3_A_70_NUMUNIT;
        break;
    }

    if (GetExtraCt(nExtraUnitLocation) > 0)
    {
        nUnitCt++;
    }

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SFIII3_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_SFIII3_A::InitDescTree: Building desc tree for SFIII3_A ROM %u...\n", m_nSelectedRom);
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

#if SFIII3_A_DEBUG
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

#if SFIII3_A_DEBUG
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

#if SFIII3_A_DEBUG
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

#if SFIII3_A_DEBUG
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

#if SFIII3_A_DEBUG
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
    case SF3ROM_10:
        m_nTotalPaletteCountForSFIII3_10 = nTotalPaletteCount;
        break;
    case SF3ROM_10_4rd:
        m_nTotalPaletteCountForSFIII3_14 = nTotalPaletteCount;
        break;
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        __fallthrough;
    case SF3ROM_51:
        m_nTotalPaletteCountForSFIII3_51 = nTotalPaletteCount;
        break;
    case SF3ROM_51_4rd:
        m_nTotalPaletteCountForSFIII3_4 = nTotalPaletteCount;
        break;
    case SF3ROM_70_EX:
        m_nTotalPaletteCountForSFIII3_70 = nTotalPaletteCount;
        break;
    }

    strMsg.Format(L"CGame_SFIII3_A::InitDescTree: Loaded %u palettes for SFIII3 ROM %u\n", nTotalPaletteCount, m_nSelectedRom);
    OutputDebugString(strMsg);

    return NewDescTree;
}

sFileRule CGame_SFIII3_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"51");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SFIII3_A::GetCollectionCountForUnit(UINT16 nUnitId)
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

UINT16 CGame_SFIII3_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
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

LPCWSTR CGame_SFIII3_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
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

UINT16 CGame_SFIII3_A::GetPaletteCountForUnit(UINT16 nUnitId)
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

#if SFIII3_A_DEBUG_EXTRA
        CString strMsg;
        strMsg.Format(L"CGame_SFIII3_A::GetPaletteCountForUnit: %u palettes for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_SFIII3_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGame_SFIII3_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
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

UINT16 CGame_SFIII3_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

const sDescTreeNode* CGame_SFIII3_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
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

void CGame_SFIII3_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SFIII3_A::ClearDataBuffer()
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

void CGame_SFIII3_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != GetCurrentExtraLoc())
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // SFIII3_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

UINT16 rotate_left(UINT16 value, int n)
{
    int aux = value >> (16 - n);
    return ((value << n) | aux) % 0x10000;
}

UINT16 rotxor(UINT16 val, UINT16 xorval)
{
    UINT16 res = val + rotate_left(val, 2);

    res = rotate_left(res, 4) ^ (res & (val ^ xorval));

    return res;
}

UINT32 cps3_mask(UINT32 address, UINT32 key1, UINT32 key2)
{
    address ^= key1;

    UINT16 val = (address & 0xffff) ^ 0xffff;

    val = rotxor(val, key2 & 0xffff);

    val ^= (address >> 16) ^ 0xffff;

    val = rotxor(val, key2 >> 16);

    val ^= (address & 0xffff) ^ (key2 & 0xffff);

    return val | (val << 16);
}

BOOL CGame_SFIII3_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        // Layout is presorted
        rgUnitRedir[nUnitCtr] = nUnitCtr;

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];

            if (IsROMEncrypted())
            {
                UINT32 fourByteBlocks = m_nCurrentPaletteSizeInColors >> 1;
                const UINT8 cbStride = 4;

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                UINT32 nNewData = 0;

                for (UINT16 nBlockCount = 0; nBlockCount < fourByteBlocks; nBlockCount++)
                {
                    // this rom is encrypted
                    LoadedFile->Read(&nNewData, cbStride);
                    nNewData = _byteswap_ulong(nNewData);
                    nNewData ^= (cps3_mask(0x6000000 + m_nCurrentPaletteROMLocation + (nBlockCount * cbStride), 0xA55432B4, 0x0C129981));
                    nNewData = _byteswap_ulong(nNewData);
                    *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount) + 1) = (nNewData & 0xFFFF0000) >> 16;
                    *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount)) = nNewData & 0x0000FFFF;

#ifdef Default_Gill_Palette
                    00 00 7F BC 7F 59 7F 16 7A B3 72 71 66 2E 55 CC 51 AB 49 8A 45 48 3D 27 65 B0 5D 8E 55 8D 55 8D
                        4B 0E 67 BF 4A FF 3A 3E 2D DD 31 BB 31 7A 2D 37 29 13 24 F1 24 AF 14 4B 45 56 3D 34 35 12 35 12
                        00 00 03 DE 03 5E 0A 9E 0A 1E 09 9A 01 14 00 90 00 00 00 00 7B DE 7B DE 73 9C 63 18 5A D6 4A 52
                        39 CE 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
#endif
                }
            }
            else
            {
                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
            }
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_SFIII3_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if (IsROMEncrypted())
                {
                    UINT32 fourByteBlocks = m_nCurrentPaletteSizeInColors >> 1;
                    const UINT8 cbStride = 4;

                    SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    UINT32 nDataToWrite = 0;

                    for (UINT16 nBlockCount = 0; nBlockCount < fourByteBlocks; nBlockCount++)
                    {
                        nDataToWrite = *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount));
                        nDataToWrite |= (*(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount) + 1) << 16);
                        nDataToWrite = _byteswap_ulong(nDataToWrite);
                        nDataToWrite ^= (cps3_mask(0x6000000 + m_nCurrentPaletteROMLocation + (nBlockCount * cbStride), 0xA55432B4, 0x0C129981));
                        nDataToWrite = _byteswap_ulong(nDataToWrite);

                        SaveFile->Write(&nDataToWrite, cbStride);
                    }
                }
                else
                {
                    SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    SaveFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
                }
                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

BOOL CGame_SFIII3_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

                if (wcscmp(charUnit->szDesc, k_sf3NameKey_Gill) == 0)
                {
                    // Gill doesn't have an EX palette in 4rd
                    nSrcAmt = 6;
                }
                else
                {
                    nSrcAmt = m_nNumberOfColorOptions;
                }

                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in LP
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

            sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

            // These characters only have two nodes in this game
            if (((wcscmp(charUnit->szDesc, k_sf3NameKey_ShinGouki) == 0) ||
                 (wcscmp(charUnit->szDesc, k_sf3NameKey_UltraSean) == 0)) &&
                (nSrcAmt > 1))
            {
                nSrcAmt = 2;
                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    nSrcStart -= nNodeIncrement;
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if ((wcscmp(charUnit->szDesc, k_sf3NameKey_Alex) == 0) &&
                    (paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner == 0))
                {
                    UINT16 nNodeCount = GetCollectionCountForUnit(NodeGet->uUnitId);
                    UINT16 nNextToLastPalette = GetPaletteCountForUnit(NodeGet->uUnitId) - 1;

                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, nNextToLastPalette);

                    if (paletteDataSetToJoin && (paletteDataSetToJoin->indexOffsetToUse == 0x02))
                    {
                        fShouldUseAlternateLoadLogic = true;
                        nSrcAmt = m_nNumberOfColorOptions;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse)
                            )
                        );

                        //Set each palette
                        sDescNode* JoinedNode[2] = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, nNodeCount - 1, 0, -1)  // The cross-chop is palette 0 in the final node
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        // This second join is of a shared palette, so our node increment is zero
                        SetSourcePal(1, NodeGet->uUnitId, nNextToLastPalette, nSrcAmt, 0);
                    }
                }
                else if (wcscmp(charUnit->szDesc, k_sf3NameKey_Oro) == 0)
                {
                    fShouldUseAlternateLoadLogic = true;

                    LoadSpecificPaletteData(NodeGet->uUnitId, NodeGet->uPalId);

                    BasePalGroup.AddPal(CreatePal(NodeGet->uUnitId, NodeGet->uPalId), m_nCurrentPaletteSizeInColors, NodeGet->uUnitId, NodeGet->uPalId);

                    BasePalGroup.AddSep(0, L"Concrete", 0, 16);
                    BasePalGroup.AddSep(0, L"Turtle", 16, 16);
                    BasePalGroup.AddSep(0, L"Dinosaur / Stone", 32, 16);
                    BasePalGroup.AddSep(0, L"Rocket", 48, 16);
                    BasePalGroup.AddSep(0, L"Brick", 64, 16);

                    ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

                    SetSourcePal(0, NodeGet->uUnitId, NodeGet->uPalId, 1, 1);
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
                else
                {
                    int nDeltaToSecondElement = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                    int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;

                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nDeltaToSecondElement);
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
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nDeltaToSecondElement, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nDeltaToSecondElement, nSrcAmt, nNodeIncrement);
                    }
                }
            }
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
