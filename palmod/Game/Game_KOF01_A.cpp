#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF01_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF01_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF01_A::KOF01_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF01_A::MainDescTree = nullptr;

int CGame_KOF01_A::rgExtraCountAll[KOF01_A_NUMUNIT + 1];
int CGame_KOF01_A::rgExtraLoc[KOF01_A_NUMUNIT + 1];

UINT32 CGame_KOF01_A::m_nTotalPaletteCountForKOF01 = 0;
UINT32 CGame_KOF01_A::m_nExpectedGameROMSize = 0x400000;
UINT32 CGame_KOF01_A::m_nConfirmedROMSize = -1;

void CGame_KOF01_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF01_A::KOF01_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF01_A::InitDescTree());
}

CGame_KOF01_A::CGame_KOF01_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KOF01_A::CGame_KOF01_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF01_A_NUMUNIT;
    m_nExtraUnit = KOF01_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1472;
    m_pszExtraFilename = EXTRA_FILENAME_KOF01_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF01;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x386722;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF01_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF01_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(KOF01_A_IMGIDS_USED);

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

CGame_KOF01_A::~CGame_KOF01_A(void)
{
    safe_delete_array(CGame_KOF01_A::KOF01_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF01_A::GetMainTree()
{
    return &CGame_KOF01_A::MainDescTree;
}

int CGame_KOF01_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KOF01_A_NUMUNIT, nUnitId, KOF01_A_EXTRA_CUSTOM);
}

int CGame_KOF01_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KOF01_A_NUMUNIT, nUnitId, KOF01_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_KOF01_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF01_A, KOF01_A_EXTRA, &KOF01_A_EXTRA_CUSTOM, KOF01_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF01_A_NUMUNIT + (GetExtraCt(KOF01_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF01_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKOF01 = _InitDescTree(NewDescTree,
        KOF01_A_UNITS,
        KOF01_A_EXTRALOC,
        KOF01_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KOF01_A_EXTRA_CUSTOM
    );

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

struct sKOF01_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nROMOffset = 0;
    UINT32 nTerminalROMOffset = 0;
    LPCWSTR pszImageSet = L"indexKOF02UMSprites_K";
    bool fHasEffects = true;
    bool fIsBoss = false; // bosses don't have some portraits
};

sKOF01_A_PaletteData KOF01_A_CharacterPalettes[] =
{
    { L"K'", 0x387122, 0x387142, L"indexKOF02UMSprites_K" },
    { L"Maxima", 0x387522, 0x387542, L"indexKOF02UMSprites_Maxima" },
    { L"Whip", 0x387922, 0x387942, L"indexKOF02UMSprites_Whip" },
    { L"Lin", 0x387d22, 0x387d42, L"indexKOF02UMSprites_Lin" },
    { L"Kyo", 0x388122, 0x388142, L"indexKOF02UMSprites_KyoKusa" },
    { L"Benimaru", 0x388522, 0x388542, L"indexKOF02UMSprites_Benimaru" },
    { L"Goro", 0x388922, 0x388942, L"indexKOF02UMSprites_Daimon", false },
    { L"Shingo", 0x388d22, 0x388d42, L"indexKOF02UMSprites_Shingo", false },
    { L"Iori", 0x389122, 0x389142, L"indexKOF02UMSprites_Iori" },
    { L"Vanessa", 0x389522, 0x389542, L"indexKOF02UMSprites_Vanessa", false },
    { L"Seth", 0x389922, 0x389942, L"indexKOF02UMSprites_Seth" },
    { L"Ramon", 0x389d22, 0x389d42, L"indexKOF02UMSprites_Ramon", false },
    { L"Leona", 0x38a122, 0x38a142, L"indexKOF02UMSprites_Leona" },
    { L"Ralf", 0x38a522, 0x38a542, L"indexKOF02UMSprites_Ralf", false },
    { L"Clark", 0x38a922, 0x38a942, L"indexKOF02UMSprites_Clark", false },
    { L"Heidern", 0x38ad22, 0x38ad42, L"indexKOF01Sprites_Heidern" },
    { L"Terry", 0x38b122, 0x38b142, L"indexKOF02UMSprites_Terry" },
    { L"Andy", 0x38b522, 0x38b542, L"indexKOF02UMSprites_Andy" },
    { L"Joe", 0x38b922, 0x38b942, L"indexKOF02UMSprites_Joe" },
    { L"Mary", 0x38bd22, 0x38bd42, L"indexKOF02UMSprites_BlueMary" },
    { L"Ryo", 0x38c122, 0x38c142, L"indexKOF02UMSprites_Ryo" },
    { L"Robert", 0x38c522, 0x38c542, L"indexKOF02UMSprites_Robert" },
    { L"Yuri", 0x38c922, 0x38c942, L"indexKOF02UMSprites_Yuri" },
    { L"Takuma", 0x38cd22, 0x38cd42, L"indexKOF02UMSprites_Takuma" },
    { L"King", 0x38d122, 0x38d142, L"indexKOF02UMSprites_King" },
    { L"Mai", 0x38d522, 0x38d542, L"indexKOF02UMSprites_Mai" },
    { L"Hinako", 0x38d922, 0x38d942, L"indexKOF02UMSprites_Hinako", false },
    { L"Xiangfei", 0x38dd22, 0x38dd42, L"indexKOF01Sprites_Xiangfei" },
    { L"Kula", 0x38e122, 0x38e142, L"indexKOF02UMSprites_Kula" },
    { L"Foxy", 0x38e522, 0x38e542, L"indexKOF01Sprites_Foxy" },
    { L"K9999", 0x38e922, 0x38e942, L"indexKOF02Sprites_K9999" },
    { L"Angel", 0x38ed22, 0x38ed42, L"indexKOF02UMSprites_Angel", false },
    { L"Athena", 0x38f122, 0x38f142, L"indexKOF01Sprites_Athena" },
    { L"Kensou", 0x38f522, 0x38f542, L"indexKOF02UMSprites_Kensou" },
    { L"Chin", 0x38f922, 0x38f942, L"indexKOF02UMSprites_Chin" },
    { L"Bao", 0x38fd22, 0x38fd42, L"indexKOF02UMSprites_Bao" },
    { L"Kim", 0x390122, 0x390142, L"indexKOF02UMSprites_Kim", false },
    { L"Chang", 0x390522, 0x390542, L"indexKOF02UMSprites_Chang" },
    { L"Choi", 0x390922, 0x390942, L"indexKOF02UMSprites_Choi" },
    { L"May Lee", 0x390d22, 0x390d42, L"indexKOF02UMSprites_MayLee", false },
    { L"Zero", 0x391122, 0x391142, L"indexKOF02UMSprites_ZeroOG", true, true },
    { L"Igniz", 0x391522, 0x391542, L"indexKOF02UMSprites_Igniz", true, true },
};

struct sKOF01_A_EffectData
{
    LPCWSTR pszCharacterName;
    UINT32 nROMOffset = 0;
    UINT32 nTerminalROMOffset = 0;
};

sKOF01_A_EffectData KOF01_A_EffectPalettes[] =
{
    { L"K' Effects", 0x392522, 0x392622 },
    { L"Maxima Effects", 0x392722, 0x392822 },
    { L"Whip Effects", 0x392922, 0x392a22 },
    { L"Lin Effects", 0x392b22, 0x392c22 },
    { L"Kyo Effects", 0x392d22, 0x392e22 },
    { L"Benimaru Effects", 0x392f22, 0x393022 },
    { L"Iori Effects", 0x393522, 0x393622 },
    { L"Seth Effects", 0x393922, 0x393a22 },
    { L"Leona Effects", 0x393d22, 0x393e22 },
    { L"Heidern Effects", 0x394322, 0x394422 },
    { L"Terry Effects", 0x394522, 0x394622 },
    { L"Andy Effects", 0x394722, 0x394822 },
    { L"Joe Effects", 0x394922, 0x394a22 },
    { L"Mary Effects", 0x394b22, 0x394c22 },
    { L"Ryo Effects", 0x394d22, 0x394e22 },
    { L"Robert Effects", 0x394f22, 0x395022 },
    { L"Yuri Effects", 0x395122, 0x395222 },
    { L"Takuma Effects", 0x395322, 0x395422 },
    { L"King Effects", 0x395522, 0x395622 },
    { L"Mai Effects", 0x395722, 0x395822 },
    { L"Xiangfei Effects", 0x395b22, 0x395c22 },
    { L"Kula Effects", 0x395d22, 0x395e22 },
    { L"Foxy Effects", 0x395f22, 0x396022 },
    { L"K9999 Effects", 0x396122, 0x396222 },
    { L"Athena Effects", 0x396522, 0x396622 },
    { L"Kensou Effects", 0x396722, 0x396822 },
    { L"Chin Effects", 0x396922, 0x396a22 },
    { L"Bao Effects", 0x396b22, 0x396c22 },
    { L"Chang Effects", 0x396f22, 0x397022 },
    { L"Choi Effects", 0x397122, 0x397222 },
    { L"Zero Extras", 0x397522, 0x397622 },
    { L"Igniz Extras", 0x397722, 0x397822 },
    { L"Striker Krizalid Effects", 0x397922, 0x397a22 },
};

void CGame_KOF01_A::DumpPaletteHeaders()
{
    CString strOutput;
    const UINT16 nColorOptionsPerCharacter = ARRAYSIZE(DEF_BUTTONLABEL_2_PK);
    constexpr UINT32 KOF01_PALETTE_LENGTH = 0x20;
    constexpr UINT32 KOF01_PALETTE_DOUBLE_LENGTH = 0x40;
    constexpr UINT32 KOF01_CHARACTER_LENGTH = 0x200;
    const UINT16 nCountStatusEffects = 8;

    const UINT32 KOF01_STRIKER_START = 0x398322;
    const UINT32 KOF01_ORDERSELECT_START = 0x399322;
    const UINT32 KOF01_SELECTPORTRAIT_START = 0x399f22;
    const UINT32 KOF01_WINPORTRAIT_START = 0x39d122;
    const UINT32 KOF01_LIFEBARPORTRAIT_START = 0x3b8922;
    const UINT32 KOF01_NEXTCHARACTERPORTRAIT_P_START = 0x3b7d22;
    const UINT32 KOF01_NEXTCHARACTERPORTRAIT_K_START = 0x3b8222;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF01_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF01_A_CharacterPalettes[nCharIndex].pszCharacterName);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_PK[nColorIndex]);

            strOutput.Format(L"const sGame_PaletteDataset KOF01_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);

            UINT32 nCurrentOffset = KOF01_A_CharacterPalettes[nCharIndex].nROMOffset + (nColorIndex * KOF01_CHARACTER_LENGTH);

            strOutput.Format(L"    { L\"%s %s\", 0x%x, 0x%x, %s },\r\n", KOF01_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_2_PK[nColorIndex],
                 nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH, KOF01_A_CharacterPalettes[nCharIndex].pszImageSet);
            OutputDebugString(strOutput);

            const LPCWSTR ppszPaletteLines[] =
            {
                L"Character Extra 1",
                L"Character Extra 2",
                L"Electric Palette",
                L"Lin Poison Palette (Unused)",
                L"Freeze Palette (Unused)",
                L"Super Trail",
            };

            for (UINT16 nPaletteIndex = 0; nPaletteIndex < ARRAYSIZE(ppszPaletteLines); nPaletteIndex++)
            {
                nCurrentOffset = KOF01_A_CharacterPalettes[nCharIndex].nROMOffset + ((1 + nPaletteIndex) * KOF01_PALETTE_LENGTH) + (nColorIndex * KOF01_CHARACTER_LENGTH);

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s },\r\n", ppszPaletteLines[nPaletteIndex], nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH, KOF01_A_CharacterPalettes[nCharIndex].pszImageSet);
                OutputDebugString(strOutput);
            }

            if (!KOF01_A_CharacterPalettes[nCharIndex].fIsBoss)
            {
                // There are three palette lengths between striker portraits
                nCurrentOffset = KOF01_STRIKER_START + (3 * nCharIndex * KOF01_PALETTE_LENGTH) + (nColorIndex * KOF01_PALETTE_LENGTH);
                strOutput.Format(L"    { L\"Striker Portrait\", 0x%x, 0x%x },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH);
                OutputDebugString(strOutput);
            }

            WCHAR szKOF01ImageSet[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szKOF01ImageSet, ARRAYSIZE(szKOF01ImageSet), KOF01_A_CharacterPalettes[nCharIndex].pszCharacterName);

            nCurrentOffset = KOF01_ORDERSELECT_START + (ARRAYSIZE(DEF_BUTTONLABEL_2_PK) * nCharIndex * KOF01_PALETTE_LENGTH) + (nColorIndex * KOF01_PALETTE_LENGTH);
            strOutput.Format(L"    { L\"Order Select Portrait\", 0x%x, 0x%x, indexKOF01Sprites_%s, 0x44 },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH, szKOF01ImageSet);
            OutputDebugString(strOutput);

            if (!KOF01_A_CharacterPalettes[nCharIndex].fIsBoss)
            {
                // this area is select portrait p, select portrait k, then the shared three win portrait assist
                nCurrentOffset = KOF01_SELECTPORTRAIT_START + (5 * nCharIndex * KOF01_PALETTE_DOUBLE_LENGTH) + (nColorIndex * KOF01_PALETTE_DOUBLE_LENGTH);
                strOutput.Format(L"    { L\"Select Portrait\", 0x%x, 0x%x, indexKOF01Sprites_%s, 0x42 },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_DOUBLE_LENGTH, szKOF01ImageSet);
                OutputDebugString(strOutput);
            }

            nCurrentOffset = KOF01_WINPORTRAIT_START + (ARRAYSIZE(DEF_BUTTONLABEL_2_PK) * nCharIndex * KOF01_PALETTE_DOUBLE_LENGTH) + (nColorIndex * KOF01_PALETTE_DOUBLE_LENGTH);
            strOutput.Format(L"    { L\"Win Portrait\", 0x%x, 0x%x, indexKOF01Sprites_%s, 0x40 },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_DOUBLE_LENGTH, szKOF01ImageSet);
            OutputDebugString(strOutput);

            nCurrentOffset = KOF01_LIFEBARPORTRAIT_START + (ARRAYSIZE(DEF_BUTTONLABEL_2_PK) * nCharIndex * KOF01_PALETTE_LENGTH) + (nColorIndex * KOF01_PALETTE_LENGTH);
            strOutput.Format(L"    { L\"Lifebar Portrait\", 0x%x, 0x%x, indexKOF01Sprites_%s, 0x43 },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH, szKOF01ImageSet);
            OutputDebugString(strOutput);

            if (!KOF01_A_CharacterPalettes[nCharIndex].fIsBoss)
            {
                if (nColorIndex == 0)
                {
                    nCurrentOffset = KOF01_NEXTCHARACTERPORTRAIT_P_START + (nCharIndex * KOF01_PALETTE_LENGTH);
                }
                else
                {
                    nCurrentOffset = KOF01_NEXTCHARACTERPORTRAIT_K_START + (nCharIndex * KOF01_PALETTE_LENGTH);
                }

                strOutput.Format(L"    { L\"Next Character Lifebar Portrait\", 0x%x, 0x%x },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH);
                OutputDebugString(strOutput);
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF01_A_CharacterPalettes); nCharIndex++)
    {
        if (!KOF01_A_CharacterPalettes[nCharIndex].fIsBoss)
        {
            WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF01_A_CharacterPalettes[nCharIndex].pszCharacterName);

            strOutput.Format(L"const sGame_PaletteDataset KOF01_A_%s_WINPORTRAIT_PALETTES[] = \r\n{\r\n", szCodeDesc);
            OutputDebugString(strOutput);

            // this area is select portrait p, select portrait k, then the shared three win portrait assist
            UINT32 nCurrentOffset = KOF01_SELECTPORTRAIT_START + (5 * nCharIndex * KOF01_PALETTE_DOUBLE_LENGTH) + (2 * KOF01_PALETTE_DOUBLE_LENGTH);
            strOutput.Format(L"    { L\"Win Portrait Assist 1\", 0x%x, 0x%x },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_DOUBLE_LENGTH);
            OutputDebugString(strOutput);
            nCurrentOffset = KOF01_SELECTPORTRAIT_START + (5 * nCharIndex * KOF01_PALETTE_DOUBLE_LENGTH) + (3 * KOF01_PALETTE_DOUBLE_LENGTH);
            strOutput.Format(L"    { L\"Win Portrait Assist 2\", 0x%x, 0x%x },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_DOUBLE_LENGTH);
            OutputDebugString(strOutput);
            nCurrentOffset = KOF01_SELECTPORTRAIT_START + (5 * nCharIndex * KOF01_PALETTE_DOUBLE_LENGTH) + (4 * KOF01_PALETTE_DOUBLE_LENGTH);
            strOutput.Format(L"    { L\"Win Portrait Assist 3\", 0x%x, 0x%x },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_DOUBLE_LENGTH);
            OutputDebugString(strOutput);

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF01_A_EffectPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF01_A_EffectPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sGame_PaletteDataset KOF01_A_%s_PALETTES[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        // Status effects
        for (UINT16 nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
        {
            UINT32 nCurrentOffset = KOF01_A_EffectPalettes[nCharIndex].nROMOffset + (nStatusIndex * KOF01_PALETTE_LENGTH);

            strOutput.Format(L"    { L\"Effect %u\", 0x%x, 0x%x },\r\n", nStatusIndex, nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF01_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF01_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF01_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_PK[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF01_A_%s_%s_PALETTES, ARRAYSIZE(KOF01_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_2_PK[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        if (!KOF01_A_CharacterPalettes[nCharIndex].fIsBoss)
        {
            strOutput.Format(L"    { L\"Win Portrait Assist\", DESC_NODETYPE_TREE, (void*)KOF01_A_%s_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_%s_WINPORTRAIT_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
            OutputDebugString(strOutput);
        }

        if (KOF01_A_CharacterPalettes[nCharIndex].fHasEffects)
        {
            strOutput.Format(L"    { L\"Effects\", DESC_NODETYPE_TREE, (void*)KOF01_A_%sEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_%sEFFECTS_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
            OutputDebugString(strOutput);
        }
        OutputDebugString(L"};\r\n\r\n");
    }
}

sFileRule CGame_KOF01_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"262-p2-08-e0.sp2");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_KOF01_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"King of Fighters 2001 (Neo-Geo)", L"262-p2-08-e0.sp2", 0x8e0d8329, 0 },
        { L"Crouching Tiger Hidden Dragon 2003 (Bootleg)", L"5003-p2.bin", 0xadc1c22b, 0 },
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

UINT16 CGame_KOF01_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, nUnitId, KOF01_A_EXTRA_CUSTOM);
}

UINT16 CGame_KOF01_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, nUnitId, nCollectionId, KOF01_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOF01_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(KOF01_A_UNITS, KOF01_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_KOF01_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, nUnitId, KOF01_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOF01_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(KOF01_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KOF01_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, nUnitId, nPaletteId, KOF01_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOF01_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, nUnitId, nPaletteId, KOF01_A_EXTRA_CUSTOM);
}

void CGame_KOF01_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KOF01_A_EXTRALOC)
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
    else // KOF01_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF01(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF01_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, KOF01_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
