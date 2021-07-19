#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF97_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF97_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF97_A::KOF97_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF97_A::MainDescTree = nullptr;

int CGame_KOF97_A::rgExtraCountAll[KOF97_A_NUMUNIT + 1];
int CGame_KOF97_A::rgExtraLoc[KOF97_A_NUMUNIT + 1];

UINT32 CGame_KOF97_A::m_nTotalPaletteCountForKOF97 = 0;
UINT32 CGame_KOF97_A::m_nExpectedGameROMSize = 0x400000;  // 4194304 bytes
UINT32 CGame_KOF97_A::m_nConfirmedROMSize = -1;

void CGame_KOF97_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF97_A::KOF97_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF97_A::InitDescTree());
}

CGame_KOF97_A::CGame_KOF97_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KOF97_A::CGame_KOF97_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF97_A_NUMUNIT;
    m_nExtraUnit = KOF97_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 2568;
    m_pszExtraFilename = EXTRA_FILENAME_KOF97_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF97;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x2d1ff0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF97_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF97_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(KOF97_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_4_KOF97;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_4_KOF97);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOF97_A::~CGame_KOF97_A(void)
{
    safe_delete_array(CGame_KOF97_A::KOF97_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF97_A::GetMainTree()
{
    return &CGame_KOF97_A::MainDescTree;
}

int CGame_KOF97_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KOF97_A_NUMUNIT, nUnitId, KOF97_A_EXTRA_CUSTOM);
}

int CGame_KOF97_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KOF97_A_NUMUNIT, nUnitId, KOF97_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_KOF97_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF97_A, KOF97_A_EXTRA, &KOF97_A_EXTRA_CUSTOM, KOF97_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF97_A_NUMUNIT + (GetExtraCt(KOF97_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF97_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKOF97 = _InitDescTree(NewDescTree,
        KOF97_A_UNITS,
        KOF97_A_EXTRALOC,
        KOF97_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KOF97_A_EXTRA_CUSTOM
    );

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

struct sKOF97_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexKOF98Sprites_Kyo";
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
    { L"Kyo",       0x2D1FF0 + (0x800 *  0), L"indexKOF98Sprites_Kyo",          L"indexKOF97Sprites_Kyo",               { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Benimaru",  0x2D1FF0 + (0x800 *  1), L"indexKOF97Sprites_Benimaru",     L"indexKOF97Sprites_Benimaru",          { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Daimon",    0x2D1FF0 + (0x800 *  2), L"indexKOF98Sprites_Daimon",       L"indexKOF97Sprites_Daimon",            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, false, false },
    { L"Terry",     0x2D1FF0 + (0x800 *  3), L"indexKOF98Sprites_Terry",        L"indexKOF97Sprites_Terry",             { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Andy",      0x2D1FF0 + (0x800 *  4), L"indexKOF97Sprites_Andy",         L"indexKOF97Sprites_Andy",              { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Joe",       0x2D1FF0 + (0x800 *  5), L"indexKOF98Sprites_Joe",          L"indexKOF97Sprites_Joe",               { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Ryo",       0x2D1FF0 + (0x800 *  6), L"indexKOF98Sprites_Ryo",          L"indexKOF97Sprites_Ryo",               { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 } },
    { L"Robert",    0x2D1FF0 + (0x800 *  7), L"indexKOF98Sprites_Robert",       L"indexKOF97Sprites_Robert",            { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
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
    { L"Yamazaki",  0x2D1FF0 + (0x800 * 21), L"indexKOF98Sprites_Yamazaki",     L"indexKOF97Sprites_Yamazaki",          { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Blue Mary", 0x2D1FF0 + (0x800 * 22), L"indexKOF98Sprites_BlueMary",     L"indexKOF97Sprites_BlueMary",          { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Billy",     0x2D1FF0 + (0x800 * 23), L"indexKOF98Sprites_Billy",        L"indexKOF97Sprites_Billy",             { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Yashiro",   0x2D1FF0 + (0x800 * 24), L"indexKOF98Sprites_Yashiro",      L"indexKOF97Sprites_Yashiro",           { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1 } },
    { L"Shermie",   0x2D1FF0 + (0x800 * 25), L"indexKOF98Sprites_Shermie",      L"indexKOF97Sprites_Shermie",           { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1 } },
    { L"Chris",     0x2D1FF0 + (0x800 * 26), L"indexKOF98Sprites_Chris",        L"indexKOF97Sprites_Chris",             { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 } },
    { L"Iori",      0x2D1FF0 + (0x800 * 27), L"indexKOF98Sprites_Iori",         L"indexKOF97Sprites_Iori",              { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Orochi Iori",   0x2D1FF0 + (0x800 * 28), L"indexKOF97Sprites_IoriOrochi", L"indexKOF97Sprites_IoriOrochi",      { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Orochi Leona",  0x2D1FF0 + (0x800 * 29), L"indexKOF97Sprites_LeonaOrochi", L"indexKOF97Sprites_LeonaOrochi",    { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }},
    { L"Orochi",    0x2D1FF0 + (0x800 * 30), L"indexKOF97Sprites_Orochi",       L"indexKOF97Sprites_Orochi",            { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Shingo",    0x2D1FF0 + (0x800 * 31), L"indexKOF98Sprites_Shingo",       L"indexKOF97Sprites_Shingo",            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, false, false },
    { L"Orochi Yashiro",    0x2D1FF0 + (0x800 * 32), L"indexKOF98Sprites_Yashiro", L"indexKOF97Sprites_YashiroOrochi",  { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1 } },
    { L"Orochi Shermie",    0x2D1FF0 + (0x800 * 33), L"indexKOF98Sprites_Shermie", L"indexKOF97Sprites_ShermieOrochi",  { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1 } },
    { L"Orochi Chris",      0x2D1FF0 + (0x800 * 34), L"indexKOF98Sprites_Chris",   L"indexKOF97Sprites_ChrisOrochi",    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 } },
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

        for (UINT16 nColorIndex = 0; nColorIndex < ARRAYSIZE(DEF_BUTTONLABEL_4_KOF97); nColorIndex++)
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

sFileRule CGame_KOF97_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"232-p2.sp2");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

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

UINT16 CGame_KOF97_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(KOF97_A_UNITS, rgExtraCountAll, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, nUnitId, KOF97_A_EXTRA_CUSTOM);
}

UINT16 CGame_KOF97_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(KOF97_A_UNITS, rgExtraCountAll, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, nUnitId, nCollectionId, KOF97_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOF97_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(KOF97_A_UNITS, KOF97_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_KOF97_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(KOF97_A_UNITS, rgExtraCountAll, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, nUnitId, KOF97_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOF97_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(KOF97_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KOF97_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOF97_A_UNITS, rgExtraCountAll, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, nUnitId, nPaletteId, KOF97_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOF97_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(KOF97_A_UNITS, rgExtraCountAll, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, nUnitId, nPaletteId, KOF97_A_EXTRA_CUSTOM);
}

void CGame_KOF97_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KOF97_A_EXTRALOC)
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
    return _UpdatePalImg(KOF97_A_UNITS, rgExtraCountAll, KOF97_A_NUMUNIT, KOF97_A_EXTRALOC, KOF97_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
