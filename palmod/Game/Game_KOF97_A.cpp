#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF97_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

SupportedGamesList CGame_KOF97_A::m_nSelectedRom = KOF97_A;

stExtraDef* CGame_KOF97_A::KOF97_A_EXTRA_CUSTOM = nullptr;
stExtraDef* CGame_KOF97_A::KOF97AE_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF97_A::MainDescTree_97 = nullptr;
CDescTree CGame_KOF97_A::MainDescTree_97AE = nullptr;

uint32_t CGame_KOF97_A::rgExtraCountAll_97[KOF97_A_NUMUNIT + 1];
uint32_t CGame_KOF97_A::rgExtraCountAll_97AE[KOF97AE_A_NUMUNIT + 1];
uint32_t CGame_KOF97_A::rgExtraLoc_97[KOF97_A_NUMUNIT + 1];
uint32_t CGame_KOF97_A::rgExtraLoc_97AE[KOF97AE_A_NUMUNIT + 1];

UINT32 CGame_KOF97_A::m_nTotalPaletteCountForKOF97 = 0;
UINT32 CGame_KOF97_A::m_nTotalPaletteCountForKOF97AE = 0;
UINT32 CGame_KOF97_A::m_nExpectedGameROMSize_KOF97 = 0x400000;  // 4194304 bytes
UINT32 CGame_KOF97_A::m_nExpectedGameROMSize_KOF97GM = 0x500000;
UINT32 CGame_KOF97_A::m_nConfirmedROMSize = -1;

void CGame_KOF97_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF97_A::KOF97_A_EXTRA_CUSTOM);
    safe_delete_array(CGame_KOF97_A::KOF97AE_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll_97, -1, sizeof(rgExtraCountAll_97));
    memset(rgExtraCountAll_97AE, -1, sizeof(rgExtraCountAll_97AE));
    memset(rgExtraLoc_97, -1, sizeof(rgExtraLoc_97));
    memset(rgExtraLoc_97AE, -1, sizeof(rgExtraLoc_97AE));

    MainDescTree_97.SetRootTree(CGame_KOF97_A::InitDescTree(KOF97_A));
    MainDescTree_97AE.SetRootTree(CGame_KOF97_A::InitDescTree(KOF97AE_A));
}

CGame_KOF97_A::CGame_KOF97_A(UINT32 nConfirmedROMSize, SupportedGamesList nROMToLoad /* = KOF97_A */)
{
    OutputDebugString(L"CGame_KOF97_A::CGame_KOF97_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    nGameFlag = m_nSelectedRom = nROMToLoad;

    m_nTotalInternalUnits = UsePaletteSetFor97() ? KOF97_A_NUMUNIT : KOF97AE_A_NUMUNIT;
    m_nExtraUnit = UsePaletteSetFor97() ? KOF97_A_EXTRALOC : KOF97AE_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetFor97() ? 2568 : 2568);
    m_pszExtraFilename = UsePaletteSetFor97() ? EXTRA_FILENAME_KOF97_A : EXTRA_FILENAME_KOF97AE_A;
    m_nTotalPaletteCount = UsePaletteSetFor97() ? m_nTotalPaletteCountForKOF97 : m_nTotalPaletteCountForKOF97AE;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x2d1ff0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF97_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_4_KOF97;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOF97_A::~CGame_KOF97_A(void)
{
    safe_delete_array(CGame_KOF97_A::KOF97_A_EXTRA_CUSTOM);
    safe_delete_array(CGame_KOF97_A::KOF97AE_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF97_A::GetMainTree()
{
    if (UsePaletteSetFor97())
    {
        return &CGame_KOF97_A::MainDescTree_97;
    }
    else
    {
        return &CGame_KOF97_A::MainDescTree_97AE;
    }
}

uint32_t CGame_KOF97_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    if (UsePaletteSetFor97())
    {
        return _GetExtraCount(rgExtraCountAll_97, KOF97_A_NUMUNIT, nUnitId, KOF97_A_EXTRA_CUSTOM);
    }
    else
    {
        return _GetExtraCount(rgExtraCountAll_97AE, KOF97AE_A_NUMUNIT, nUnitId, KOF97AE_A_EXTRA_CUSTOM);
    }
}

uint32_t CGame_KOF97_A::GetExtraLoc(uint32_t nUnitId)
{
    if (UsePaletteSetFor97())
    {
        return _GetExtraLocation(rgExtraLoc_97, KOF97_A_NUMUNIT, nUnitId, KOF97_A_EXTRA_CUSTOM);
    }
    else
    {
        return _GetExtraLocation(rgExtraLoc_97AE, KOF97AE_A_NUMUNIT, nUnitId, KOF97AE_A_EXTRA_CUSTOM);
    }
}

sDescTreeNode* CGame_KOF97_A::InitDescTree(SupportedGamesList nROMPaletteSetToUse)
{
    m_nSelectedRom = nROMPaletteSetToUse;

    UINT16 nUnitCt;

    if (UsePaletteSetFor97())
    {
        LoadExtraFileForGame(EXTRA_FILENAME_KOF97_A, &KOF97_A_EXTRA_CUSTOM, KOF97_A_EXTRALOC, m_nConfirmedROMSize);
        nUnitCt = KOF97_A_NUMUNIT + (GetExtraCt(KOF97_A_EXTRALOC) ? 1 : 0);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_KOF97AE_A, &KOF97AE_A_EXTRA_CUSTOM, KOF97AE_A_EXTRALOC, m_nConfirmedROMSize);
        nUnitCt = KOF97AE_A_NUMUNIT + (GetExtraCt(KOF97AE_A_EXTRALOC) ? 1 : 0);
    }
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF97_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    if (UsePaletteSetFor97())
    {
        m_nTotalPaletteCountForKOF97 = _InitDescTree(NewDescTree,
            KOF97_A_UNITS,
            KOF97_A_EXTRALOC,
            KOF97_A_NUMUNIT,
            rgExtraCountAll_97,
            rgExtraLoc_97,
            KOF97_A_EXTRA_CUSTOM
        );
    }
    else
    {
        m_nTotalPaletteCountForKOF97AE = _InitDescTree(NewDescTree,
            KOF97AE_A_UNITS,
            KOF97AE_A_EXTRALOC,
            KOF97AE_A_NUMUNIT,
            rgExtraCountAll_97AE,
            rgExtraLoc_97AE,
            KOF97AE_A_EXTRA_CUSTOM
        );

    }

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

struct sKOF97_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexKOF97Sprites_Kyo";
    LPCWSTR pszPortraitImageSet = L"indexKOF97Sprites_Kyo";
    bool rgIsEffectUsed[14];
    bool fIsPaired = false;
    bool fUsesEffects = true;
};

// This array is used to generate the palette headers
sKOF97_A_PaletteData KOF97_A_CharacterPalettes[] =
{
    // These effects use a random number of palettes per character.  The rgIsEffectUsed array keeps track of this for us.
    //                                                                                                                    1  2  3  4  5  6  7  8  9  a  b  c  d  e
    { L"Kyo",       0x2D1FF0 + (0x800 *  0), L"indexKOF97Sprites_Kyo",          L"indexKOF97Sprites_Kyo",               { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Benimaru",  0x2D1FF0 + (0x800 *  1), L"indexKOF97Sprites_Benimaru",     L"indexKOF97Sprites_Benimaru",          { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Daimon",    0x2D1FF0 + (0x800 *  2), L"indexKOF98Sprites_Daimon",       L"indexKOF97Sprites_Daimon",            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, false, false },
    { L"Terry",     0x2D1FF0 + (0x800 *  3), L"indexKOF97Sprites_Terry",        L"indexKOF97Sprites_Terry",             { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Andy",      0x2D1FF0 + (0x800 *  4), L"indexKOF97Sprites_Andy",         L"indexKOF97Sprites_Andy",              { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Joe",       0x2D1FF0 + (0x800 *  5), L"indexKOF98Sprites_Joe",          L"indexKOF97Sprites_Joe",               { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Ryo",       0x2D1FF0 + (0x800 *  6), L"indexKOF98Sprites_Ryo",          L"indexKOF97Sprites_Ryo",               { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 } },
    { L"Robert",    0x2D1FF0 + (0x800 *  7), L"indexKOF97Sprites_Robert",       L"indexKOF97Sprites_Robert",            { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Yuri",      0x2D1FF0 + (0x800 *  8), L"indexKOF98Sprites_Yuri",         L"indexKOF97Sprites_Yuri",              { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Leona",     0x2D1FF0 + (0x800 *  9), L"indexKOF98Sprites_Leona",        L"indexKOF97Sprites_Leona",             { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Ralf",      0x2D1FF0 + (0x800 * 10), L"indexKOF98Sprites_Ralf",         L"indexKOF97Sprites_Ralf",              { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, true, false },
    { L"Clark",     0x2D1FF0 + (0x800 * 11), L"indexKOF98Sprites_Clark",        L"indexKOF97Sprites_Clark",             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, true, false },
    { L"Athena",    0x2D1FF0 + (0x800 * 12), L"indexKOF97Sprites_Athena",       L"indexKOF97Sprites_Athena",            { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 } },
    { L"Kensou",    0x2D1FF0 + (0x800 * 13), L"indexKOF98Sprites_Kensou",       L"indexKOF97Sprites_Kensou",            { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Chin",      0x2D1FF0 + (0x800 * 14), L"indexKOF98Sprites_Chin",         L"indexKOF97Sprites_Chin",              { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Chizuru",   0x2D1FF0 + (0x800 * 15), L"indexKOF98Sprites_Chizuru",      L"indexKOF97Sprites_Chizuru",           { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Mai",       0x2D1FF0 + (0x800 * 16), L"indexKOF98Sprites_Mai",          L"indexKOF97Sprites_Mai",               { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"King",      0x2D1FF0 + (0x800 * 17), L"indexKOF96Sprites_King",         L"indexKOF97Sprites_King",              { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Kim",       0x2D1FF0 + (0x800 * 18), L"indexKOF98Sprites_Kim",          L"indexKOF97Sprites_Kim",               { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, false, false },
    { L"Chang",     0x2D1FF0 + (0x800 * 19), L"indexKOF98Sprites_Chang",        L"indexKOF97Sprites_Chang",             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, true, false },
    { L"Choi",      0x2D1FF0 + (0x800 * 20), L"indexKOF98Sprites_Choi",         L"indexKOF97Sprites_Choi",              { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Yamazaki",  0x2D1FF0 + (0x800 * 21), L"indexKOF97Sprites_Yamazaki",     L"indexKOF97Sprites_Yamazaki",          { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Blue Mary", 0x2D1FF0 + (0x800 * 22), L"indexKOF97Sprites_BlueMary",     L"indexKOF97Sprites_BlueMary",          { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Billy",     0x2D1FF0 + (0x800 * 23), L"indexKOF97Sprites_Billy",        L"indexKOF97Sprites_Billy",             { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Yashiro",   0x2D1FF0 + (0x800 * 24), L"indexKOF97Sprites_Yashiro",      L"indexKOF97Sprites_Yashiro",           { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1 } },
    { L"Shermie",   0x2D1FF0 + (0x800 * 25), L"indexKOF97Sprites_Shermie",      L"indexKOF97Sprites_Shermie",           { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1 } },
    { L"Chris",     0x2D1FF0 + (0x800 * 26), L"indexKOF97Sprites_Chris",        L"indexKOF97Sprites_Chris",             { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 } },
    { L"Iori",      0x2D1FF0 + (0x800 * 27), L"indexKOF98Sprites_Iori",         L"indexKOF97Sprites_Iori",              { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Orochi Iori",   0x2D1FF0 + (0x800 * 28), L"indexKOF97Sprites_IoriOrochi", L"indexKOF97Sprites_IoriOrochi",      { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Orochi Leona",  0x2D1FF0 + (0x800 * 29), L"indexKOF97Sprites_LeonaOrochi", L"indexKOF97Sprites_LeonaOrochi",    { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }},
    { L"Orochi",    0x2D1FF0 + (0x800 * 30), L"indexKOF97Sprites_Orochi",       L"indexKOF97Sprites_Orochi",            { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Shingo",    0x2D1FF0 + (0x800 * 31), L"indexKOF97Sprites_Shingo",       L"indexKOF97Sprites_Shingo",            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, false, false },
    { L"Orochi Yashiro",    0x2D1FF0 + (0x800 * 32), L"indexKOF97Sprites_YashiroOrochi", L"indexKOF97Sprites_YashiroOrochi",  { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1 } },
    { L"Orochi Shermie",    0x2D1FF0 + (0x800 * 33), L"indexKOF97Sprites_ShermieOrochi", L"indexKOF97Sprites_ShermieOrochi",  { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1 } },
    { L"Orochi Chris",      0x2D1FF0 + (0x800 * 34), L"indexKOF97Sprites_ChrisOrochi",   L"indexKOF97Sprites_ChrisOrochi",    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 } },
    // Full character sets end after Orochi Chris
    //                                                                                                                    1  2  3  4  5  6  7  8  9  a  b  c  d  e
};

// These numbers reflect the used palette lines found in the portrait region
// We only want to expose used lines
UINT16  KOF97_A_CharacterPortraitLineLength[] =
{
    8, // kyo
    4, // benimaru
    1, // daimon
    6, // terry
    8, // andy
    1, // joe
    8, // ryo
    8, // robert
    6, // yuri
    5, // Leona
    8, // Ralf
    6, // Clark
    8, // Athena
    5, // Kensou
    4, // Chin
    5, // Chizuru
    6, // Mai
    8, // King
    8, // Kim
    8, // Chang
    8, // Choi
    8, // Yamazaki
    7, // Blue Mary
    6, // Billy
    8, // Yashiro
    8, // Shermie
    8, // Chris
    8, // Iori
    6, // Orochi Iori
    6, // Orochi Leona
    3, // Orochi
    5, // Shingo
    8, // Orochi Yashiro
    8, // Orochi Shermie
    8, // Orochi Chris
};

void CGame_KOF97_A::DumpPaletteHeaders()
{
    CString strOutput;
    const UINT16 nColorOptionsPerCharacter = 4;
    constexpr UINT32 KOF97_PALETTE_LENGTH = 0x20;
    const UINT16 nCountPalettes = 16;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF97_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName);

        for (UINT16 nColorIndex = 0; nColorIndex < DEF_BUTTONLABEL_4_KOF97.size(); nColorIndex++)
        {
            strOutput.Format(L"const sGame_PaletteDataset KOF97_A_%s_PALETTES_%s[] = \r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_4_KOF97[nColorIndex]);
            OutputDebugString(strOutput);

            for (UINT16 nPaletteIndex = 0; nPaletteIndex < nCountPalettes; nPaletteIndex++)
            {
                UINT32 nCurrentOffset = KOF97_A_CharacterPalettes[nCharIndex].nROMOffset + (nPaletteIndex * KOF97_PALETTE_LENGTH) + (nCountPalettes * KOF97_PALETTE_LENGTH * nColorIndex);

                switch (nPaletteIndex)
                {

                case 0:
                    if (KOF97_A_CharacterPalettes[nCharIndex].fIsPaired)
                    {
                        strOutput.Format(L"    { L\"%s %s - Main\", 0x%x, 0x%x, %s, 0x00, &pairNext },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    }
                    else
                    {
                        strOutput.Format(L"    { L\"%s %s - Main\", 0x%x, 0x%x, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    }
                    break;
                case 1: // possible main pair
                case 4: // possible max mode pair
                    if (KOF97_A_CharacterPalettes[nCharIndex].fIsPaired)
                    {
                        strOutput.Format(L"    { L\"%s %s - Extra %u\", 0x%x, 0x%x, %s, 0x01 },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex], nPaletteIndex,
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                        break;
                    }
                    __fallthrough;
                case 7: // possible super trail pair
                    if (KOF97_A_CharacterPalettes[nCharIndex].fIsPaired)
                    {
                        strOutput.Format(L"    { L\"%s %s - Super Trail 2\", 0x%x, 0x%x, %s, 0x01 },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                        break;
                    }
                    __fallthrough;
                case 2:
                case 5:
                default:
                    strOutput.Format(L"    { L\"%s %s - Extra %u\", 0x%x, 0x%x, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex], nPaletteIndex,
                        nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    break;
                case 3:
                    if (KOF97_A_CharacterPalettes[nCharIndex].fIsPaired)
                    {
                        strOutput.Format(L"    { L\"%s %s - Max Mode\", 0x%x, 0x%x, %s, 0x00, &pairNext },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    }
                    else
                    {
                        strOutput.Format(L"    { L\"%s %s - Max Mode\", 0x%x, 0x%x, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);

                    }
                    break;
                case 6:
                    if (KOF97_A_CharacterPalettes[nCharIndex].fIsPaired)
                    {
                        strOutput.Format(L"    { L\"%s %s - Super Trail 1\", 0x%x, 0x%x, %s, 0x00, &pairNext },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    }
                    else
                    {
                        strOutput.Format(L"    { L\"%s %s - Super Trail\", 0x%x, 0x%x, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                            nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    }
                    break;
                case 9:
                    strOutput.Format(L"    { L\"%s %s - Electric Palette\", 0x%x, 0x%x, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                        nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    break;
                case 14:
                    strOutput.Format(L"    { L\"%s %s - Character Select/Win Assist Portrait\", 0x%x, 0x%x, %s, 0x41 },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                        nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszPortraitImageSet);
                    break;
                case 15:
                    strOutput.Format(L"    { L\"%s %s - Lifebar Portrait\", 0x%x, 0x%x, indexKOF98Sprites_Lifebar, %s },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                        nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH, KOF97_A_CharacterPalettes[nCharIndex].pszImageSet);
                    break;
                }

                OutputDebugString(strOutput);
            }

            UINT32 nWinPortraitOffset = 0x2e7df0 + (nColorIndex * 0x100) + (0x400 * nCharIndex);
            strOutput.Format(L"    { L\"%s %s - Win Portrait\", 0x%x, 0x%x, %s, 0x40 },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_4_KOF97[nColorIndex],
                nWinPortraitOffset, nWinPortraitOffset + (KOF97_A_CharacterPortraitLineLength[nCharIndex] * KOF97_PALETTE_LENGTH), KOF97_A_CharacterPalettes[nCharIndex].pszPortraitImageSet);
            OutputDebugString(strOutput);

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // 15 and 16 are never used
    const UINT16 nCountStatusEffects = 14;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF97_A_CharacterPalettes); nCharIndex++)
    {
        if (KOF97_A_CharacterPalettes[nCharIndex].fUsesEffects)
        {
            WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName);

            strOutput.Format(L"const sGame_PaletteDataset KOF97_A_%s_EFFECT_PALETTES[] = \r\n{\r\n", szCodeDesc);
            OutputDebugString(strOutput);

            // Status effects
            for (UINT16 nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
            {
                // base is 0x2e37f0
                UINT32 nCurrentOffset = (0x2e37f0 + (0x200 * nCharIndex)) + (nStatusIndex * KOF97_PALETTE_LENGTH);

                if (KOF97_A_CharacterPalettes[nCharIndex].rgIsEffectUsed[nStatusIndex])
                {
                    strOutput.Format(L"    { L\"Effect %u\", 0x%x, 0x%x },\r\n", nStatusIndex, nCurrentOffset, nCurrentOffset + KOF97_PALETTE_LENGTH);
                    OutputDebugString(strOutput);
                }
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF97_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF97_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_4_KOF97[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF97_A_%s_PALETTES_%s, ARRAYSIZE(KOF97_A_%s_PALETTES_%s) },\r\n", DEF_BUTTONLABEL_4_KOF97[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        if (KOF97_A_CharacterPalettes[nCharIndex].fUsesEffects)
        {
            strOutput.Format(L"    { L\"Effects\", DESC_NODETYPE_TREE, (void*)KOF97_A_%s_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_%s_EFFECT_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    OutputDebugString(L"const sDescTreeNode KOF97_A_UNITS[] = \r\n{\r\n");

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF97_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF97_A_%s_COLLECTION, ARRAYSIZE(KOF97_A_%s_COLLECTION) },\r\n", KOF97_A_CharacterPalettes[nCharIndex].pszCharacterName,
            szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    OutputDebugString(L"    { L\"Bonus\", DESC_NODETYPE_TREE, (void*)KOF97_A_BONUS_COLLECTION, ARRAYSIZE(KOF97_A_BONUS_COLLECTION) },\r\n");
    OutputDebugString(L"};\r\n\r\n");
}

sFileRule CGame_KOF97_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"232-p2.sp2");

    NewFileRule.uUnitId = 0;

    if (nUnitId != KOF97GM_S)
    {
        NewFileRule.uVerifyVar = m_nExpectedGameROMSize_KOF97;
    }
    else
    {
        NewFileRule.uVerifyVar = m_nExpectedGameROMSize_KOF97GM;
    }

    return NewFileRule;
}

UINT32 CGame_KOF97_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"King of Fighters '97 (Neo-Geo)", L"232-p2.sp2", 0x158b23f6, 0 },
        { L"King of Fighters '97 (Neo-Geo)", L"KOF97_p2.rom", 0x158b23f6, 0 },
        { L"King of Fighters '97AE (Neo-Geo)", L"232ae.p2", -1, 0 },
        { L"King of Fighters '97 Plus (Neo-Geo bootleg)", L"kf97-p2p.bin", 0x5502b020, 0 },
        { L"King of Fighters '97 Anniversary Edition (Neo-Geo)", L"232ae-p2.sp2", 0x228aa8d1, 0 },

        { L"King of Fighters '97 Global Match (Steam)", L"p1.bin", 0x228aa8d1, 0x100000 },
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

uint32_t CGame_KOF97_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetFor97())
    {
        return _GetCollectionCountForUnit(KOF97_A_UNITS, rgExtraCountAll_97, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, nUnitId, KOF97_A_EXTRA_CUSTOM);
    }
    else
    {
        return _GetCollectionCountForUnit(KOF97AE_A_UNITS, rgExtraCountAll_97AE, KOF97AE_A_NUMUNIT, KOF97AE_A_EXTRALOC, nUnitId, KOF97AE_A_EXTRA_CUSTOM);
    }
}

uint32_t CGame_KOF97_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetFor97())
    {
        return _GetNodeCountForCollection(KOF97_A_UNITS, rgExtraCountAll_97, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, nUnitId, nCollectionId, KOF97_A_EXTRA_CUSTOM);
    }
    else
    {
        return _GetNodeCountForCollection(KOF97AE_A_UNITS, rgExtraCountAll_97AE, KOF97AE_A_NUMUNIT, KOF97AE_A_EXTRALOC, nUnitId, nCollectionId, KOF97AE_A_EXTRA_CUSTOM);
    }
}

LPCWSTR CGame_KOF97_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetFor97())
    {
        return _GetDescriptionForCollection(KOF97_A_UNITS, KOF97_A_EXTRALOC, nUnitId, nCollectionId);
    }
    else
    {
        return _GetDescriptionForCollection(KOF97AE_A_UNITS, KOF97AE_A_EXTRALOC, nUnitId, nCollectionId);
    }
}

uint32_t CGame_KOF97_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetFor97())
    {
        return _GetPaletteCountForUnit(KOF97_A_UNITS, rgExtraCountAll_97, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, nUnitId, KOF97_A_EXTRA_CUSTOM);
    }
    else
    {
        return _GetPaletteCountForUnit(KOF97AE_A_UNITS, rgExtraCountAll_97AE, KOF97AE_A_NUMUNIT, KOF97AE_A_EXTRALOC, nUnitId, KOF97AE_A_EXTRA_CUSTOM);
    }
}

const sGame_PaletteDataset* CGame_KOF97_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetFor97())
    {
        return _GetPaletteSet(KOF97_A_UNITS, nUnitId, nCollectionId);
    }
    else
    {
        return _GetPaletteSet(KOF97AE_A_UNITS, nUnitId, nCollectionId);
    }
}

const sDescTreeNode* CGame_KOF97_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    if (UsePaletteSetFor97())
    {
        return _GetNodeFromPaletteId(KOF97_A_UNITS, rgExtraCountAll_97, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, nUnitId, nPaletteId, KOF97_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
    }
    else
    {
        return _GetNodeFromPaletteId(KOF97AE_A_UNITS, rgExtraCountAll_97AE, KOF97AE_A_NUMUNIT, KOF97AE_A_EXTRALOC, nUnitId, nPaletteId, KOF97AE_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
    }
}

const sGame_PaletteDataset* CGame_KOF97_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    if (UsePaletteSetFor97())
    {
        return _GetSpecificPalette(KOF97_A_UNITS, rgExtraCountAll_97, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, nUnitId, nPaletteId, KOF97_A_EXTRA_CUSTOM);
    }
    else
    {
        return _GetSpecificPalette(KOF97AE_A_UNITS, rgExtraCountAll_97AE, KOF97_A_NUMUNIT, KOF97AE_A_EXTRALOC, nUnitId, nPaletteId, KOF97AE_A_EXTRA_CUSTOM);
    }
}

void CGame_KOF97_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_KOF97_A::ClearDataBuffer()
{
    SupportedGamesList nCurrentROMMode = m_nSelectedRom;

    m_nSelectedRom = m_nBufferSelectedRom;

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

    m_nSelectedRom = nCurrentROMMode;
}

void CGame_KOF97_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (UsePaletteSetFor97() ? (nUnitId != KOF97_A_EXTRALOC) : (nUnitId != KOF97AE_A_EXTRALOC))
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            // Adjust for ROM-specific variant locations
            if (m_pCRC32SpecificData)
            {
                m_nCurrentPaletteROMLocation = max(0, m_nCurrentPaletteROMLocation + m_pCRC32SpecificData->nROMSpecificOffset);
            }
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // KOF97_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF97(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF97_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    if (UsePaletteSetFor97())
    {
        return _UpdatePalImg(KOF97_A_UNITS, rgExtraCountAll_97, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, KOF97_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
    }
    else
    {
        return _UpdatePalImg(KOF97AE_A_UNITS, rgExtraCountAll_97AE, KOF97AE_A_NUMUNIT, KOF97AE_A_EXTRALOC, KOF97AE_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
    }
}
