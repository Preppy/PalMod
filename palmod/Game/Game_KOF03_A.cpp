#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF03_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF03_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF03_A::KOF03_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF03_A::MainDescTree = nullptr;

int CGame_KOF03_A::rgExtraCountAll[KOF03_A_NUMUNIT + 1];
int CGame_KOF03_A::rgExtraLoc[KOF03_A_NUMUNIT + 1];

UINT32 CGame_KOF03_A::m_nTotalPaletteCountForKOF03 = 0;
UINT32 CGame_KOF03_A::m_nExpectedGameROMSize = 0x800000;
UINT32 CGame_KOF03_A::m_nConfirmedROMSize = -1;

void CGame_KOF03_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF03_A::KOF03_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF03_A::InitDescTree());
}

CGame_KOF03_A::CGame_KOF03_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KOF03_A::CGame_KOF03_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF03_A_NUMUNIT;
    m_nExtraUnit = KOF03_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1858;
    m_pszExtraFilename = EXTRA_FILENAME_KOF03_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF03;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x002000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF03_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF03_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(KOF03_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOF03_A::~CGame_KOF03_A(void)
{
    safe_delete_array(CGame_KOF03_A::KOF03_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF03_A::GetMainTree()
{
    return &CGame_KOF03_A::MainDescTree;
}

int CGame_KOF03_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KOF03_A_NUMUNIT, nUnitId, KOF03_A_EXTRA_CUSTOM);
}

int CGame_KOF03_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KOF03_A_NUMUNIT, nUnitId, KOF03_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_KOF03_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF03_A, KOF03_A_EXTRA, &KOF03_A_EXTRA_CUSTOM, KOF03_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF03_A_NUMUNIT + (GetExtraCt(KOF03_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF03_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKOF03 = _InitDescTree(NewDescTree,
        KOF03_A_UNITS,
        KOF03_A_EXTRALOC,
        KOF03_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KOF03_A_EXTRA_CUSTOM
    );

    // For development purposes...
    //DumpGameHeaders();

    return NewDescTree;
}

void CGame_KOF03_A::DumpGameHeaders()
{
    CString strInfo;

    struct sKOF03PalData
    {
        LPCWSTR pszPaletteName = nullptr;
        int  nImageIndex = -1;
        UINT32 nSpecificOffset = 0;
    };

    struct sKOF03CharData
    {
        LPCWSTR pszName = nullptr;
        LPCWSTR pszImageSet = nullptr;
        LPCWSTR pszVictoryImageSet = nullptr;
        sKOF03PalData* prgSpecialMoves = nullptr;
        size_t nCountSpecialMoves = 0;
        LPCWSTR pszExtraNameOverride1 = nullptr;
        int nExtraImageOverride1 = -1;
        LPCWSTR pszExtraNameOverride2 = nullptr;
        int nExtraImageOverride2 = -1;
        LPCWSTR pszExtraNameOverride3 = nullptr;
        int nExtraImageOverride3 = -1;
    };

    sKOF03PalData KOF03Moves_Ash[] =
    {
        { L"Ventose", 0x09, 0x100 },
        { L"Sans Culottes Glow", 0x00, 0x1c0 },
        { L"Fire Effects", 0x08, 0x1e0 },
    };

    sKOF03PalData KOF03Moves_Duo[] =
    {
        { L"Hiden~Genmu", -1, 0x100 },
        { L"Taijuu Aiken Glow", 0x00, 0x1c0 },
    };

    sKOF03PalData KOF03Moves_Shen[] =
    {
        { L"Bakushin Burst", -1, 0x100 },
        { L"Bakushin Burst Glow", 0x00, 0x1c0 },
    };

    sKOF03PalData KOF03Moves_Terry[] =
    {
        { L"Buster Wolf", -1, 0x100 },
        { L"Power Wave/Power Geyser", -1, 0x120 },
        { L"Burn Knuckle", -1, 0x140 },
        { L"Burn Knuckle Dust", -1, 0x160 },
        { L"Power Stream", -1, 0x180 },
    };

    sKOF03PalData KOF03Moves_Joe[] =
    {
        { L"Hurricane Upper", -1, 0x100 },
        { L"Golden Heel/Screw Upper", -1, 0x120 },
    };

    sKOF03PalData KOF03Moves_Tizoc[] =
    {
        { L"LDM Big Fall Effects", -1, 0x120 },
        { L"SDM Big Fall Effects", -1, 0x140 },
    };

    sKOF03PalData KOF03Moves_Ryo[] =
    {
        { L"Ko'ou Ken/Haou Shokou Ken", -1, 0x100 },
        { L"Haou Shokou Ken Hitsparks", -1, 0x120 },
    };

    sKOF03PalData KOF03Moves_Robert[] =
    {
        { L"RyuGeki Ken Impact", -1, 0x100 },
        { L"RyuGeki Ken", -1, 0x120 },
        { L"Haou Shokou Ken", -1, 0x140 },
        { L"Intro Bouquet", -1, 0x160 },
    };

    sKOF03PalData KOF03Moves_Yuri[] =
    {
        { L"Cypher/Raiou Ken", -1, 0x120 },
        { L"Ko'ou Ken", -1, 0x140 },
        { L"Haou Shokou Ken/LDM Effects", -1, 0x160 },
    };

    sKOF03PalData KOF03Moves_Jhun[] =
    {
        { L"Hoou Ressou Kyaku", -1, 0x100 },
        { L"Slash Kicks", -1, 0x120 },
        { L"Haiki Geki", -1, 0x140 },
        { L"Ressou Hiten Kyaku", -1, 0x160 },
    };

    sKOF03PalData KOF03Moves_Leona[] =
    {
        { L"Ground Saber", -1, 0x100 },
        { L"Baltic Launcher", -1, 0x120 },
        { L"Earring Bomb", -1, 0x140 },
        { L"X-Caliber", -1, 0x160 },
        { L"Moon Slasher", -1, 0x180 },
        { L"Rebel Spark", -1, 0x1a0 },
        { L"V-Slasher", -1, 0x1c0 },
        { L"Jump CD", -1, 0x1e0 },
    };

    sKOF03PalData KOF03Moves_Gato[] =
    {
        { L"Tatsu Kiba Burst", -1, 0x100 },
        { L"Tatsu Kiba Flame", -1, 0x120 },
        { L"Dust Effects", -1, 0x140 },
        { L"Kouga Effects", -1, 0x160 },
        { L"Kiba Wave", -1, 0x180 },
    };

    sKOF03PalData KOF03Moves_Billy[] =
    {
        { L"Fire Effects", -1, 0x100 },
    };

    sKOF03PalData KOF03Moves_Yamazaki[] =
    {
        { L"Guillotine/Driller Effects", -1, 0x100 },
        { L"Bai Gaeshi Projectile", -1, 0x120 },
        { L"Intro Coat", -1, 0x160 },
    };

    sKOF03PalData KOF03Moves_King[] =
    {
        { L"Venom Strike", -1, 0x100 },
        { L"Venom Strike Hit", -1, 0x120 },
        { L"Kick Effects", -1, 0x140 },
        { L"Rose", -1, 0x160 },
        { L"Phantom Strike", -1, 0x180 },
        { L"Phantom Strike Hit", -1, 0x1a0 },
    };

    sKOF03PalData KOF03Moves_Mai[] =
    {
        { L"Fire Effects", -1, 0x100 },
        { L"Kachou Sen/Sachiyo Dori", -1, 0x120 },
    };

    sKOF03PalData KOF03Moves_BlueMary[] =
    {
        { L"Move Effects", -1, 0x120 },
    };

    sKOF03PalData KOF03Moves_Benimaru[] =
    {
        { L"Hando Sandan Geri", -1, 0x100 },
        { L"Raimei Tou Charge/Raikou Ken", -1, 0x120 },
        { L"Raiji Ken", -1, 0x140 },
        { L"Raimei Tou", -1, 0x180 },
        { L"Raiji Ken Flash", -1, 0x1a0 },
        { L"Gen'ei Hurricane Effects", -1, 0x1c0 },
    };

    sKOF03PalData KOF03Moves_Shingo[] =
    {
        { L"Fire Effects", -1, 0x100 },
    };

    sKOF03PalData KOF03Moves_Athena[] =
    {
        { L"Psychic 10 Transformations 94-99", -1, 0x100 },
        { L"Psychic 10 Transformations 00-02", -1, 0x120 },
        { L"Maria and Asuka", -1, 0x140 },
        { L"Sailor Uniform", -1, 0x160 },
        { L"Goddess Armor", -1, 0x180 },
        { L"Bikini Outfit", -1, 0x1a0 },
        { L"Psycho Power Attacks", -1, 0x1c0 },
        { L"Healer Outfit", -1, 0x1e0 },
    };

    sKOF03PalData KOF03Moves_Hinako[] =
    {
        { L"Salt", -1, 0x100 },
    };

    sKOF03PalData KOF03Moves_Malin[] =
    {
        { L"Intro Stuff", -1, 0x100 },
        { L"LDM Extras", -1, 0x120 },
        { L"Onigumo", -1, 0x140 },
    };

    sKOF03PalData KOF03Moves_K[] =
    {
        { L"Fire Effects", -1, 0x100 },
    };

    sKOF03PalData KOF03Moves_Maxima[] =
    {
        { L"Final Cannon", -1, 0x100 },
        { L"Bunker Buster Effects 1", -1, 0x120 },
        { L"Winpose Steam Cannon", -1, 0x140 },
        { L"Bunker Buster Effects 2", -1, 0x160 },
        { L"Bunker Buster Landing Effects", -1, 0x180 },
        { L"Vapor Cannon", -1, 0x1a0 },
    };

    sKOF03PalData KOF03Moves_Whip[] =
    {
        { L"Desert Eagle Effects", -1, 0x100 },
        { L"LDM Dust Effects", -1, 0x120 },
    };

    sKOF03PalData KOF03Moves_Kyo[] =
    {
        { L"Fire Palette", -1, 0x100 },
        { L"Orochinagi and Intro/Win Flames", -1, 0x120 },
        { L"Rekkas/Shiki Attacks", -1, 0x140 },
        { L"Oniyaki Effects", -1, 0x160 },
        { L"Orochinagi Main and Mu Shiki", -1, 0x180 },
        { L"Way of 182 Effects", -1, 0x1a0 },
    };

    sKOF03PalData KOF03Moves_Iori[] =
    {
        { L"Oniyaki Effects", -1, 0x100 },
        { L"Yami Barai", -1, 0x120 },
        { L"Saika/Sakazuki Effects", -1, 0x160 },
        { L"Intro Fire", -1, 0x180 },
        { L"Shinigi no Ni Effects", -1, 0x1a0 },
    };

    sKOF03PalData KOF03Moves_Chizuru[] =
    {
        { L"Reigi no Ishizue", -1, 0x100 },
    };

    sKOF03PalData KOF03Moves_KUSANAGI[] =
    {
        { L"Fire Palette", -1, 0x100 },
        { L"Orochinagi and Intro/Win Flames", -1, 0x120 },
        { L"Orochinagi Charge", -1, 0x140 },
        { L"Oniyaki Effects", -1, 0x160 },
        { L"Yami Barai", -1, 0x180 },
    };

    sKOF03PalData KOF03Moves_Adelheid[] =
    {
        { L"Reflector", -1, 0x100 },
        { L"Super Attacks", -1, 0x120 },
        { L"LDM Effects", -1, 0x140 },
        { L"Reppuuken", -1, 0x160 },
    };

    sKOF03PalData KOF03Moves_Mukai[] =
    {
        { L"Shikai", -1, 0x100 },
        { L"Touha/Chishou/Tenshou", -1, 0x120 },
    };

    sKOF03PalData KOF03Moves_Maki[] =
    {
        { L"Iotsu no Utamai", -1, 0x100 },
        { L"Chizuru Extra", -1, 0x120 },
        { L"Reigi no Ishizue", -1, 0x140 },
    };

    sKOF03CharData KOF03CharData[] =
    {
        { L"Ash", L"indexKOF03Sprites_Ash", nullptr, KOF03Moves_Ash, ARRAYSIZE(KOF03Moves_Ash) },
        { L"Duo", L"indexKOF03Sprites_Duo", nullptr, KOF03Moves_Duo, ARRAYSIZE(KOF03Moves_Duo) },
        { L"Shen", L"indexKOF03Sprites_Shen", nullptr, KOF03Moves_Shen, ARRAYSIZE(KOF03Moves_Shen), L" Zetsu Gekiken", -1 },
        { L"Terry", L"indexKOF03Sprites_Terry", nullptr, KOF03Moves_Terry, ARRAYSIZE(KOF03Moves_Terry) },
        { L"Joe", L"indexKOF02UMSprites_Joe", L"indexKOF03Sprites_Joe", KOF03Moves_Joe, ARRAYSIZE(KOF03Moves_Joe) },
        { L"Tizoc", L"indexKOF03Sprites_Tizoc", nullptr, KOF03Moves_Tizoc, ARRAYSIZE(KOF03Moves_Tizoc) },
        { L"Ryo", L"indexKOFXISprites_Ryo", L"indexKOF03Sprites_Ryo", KOF03Moves_Ryo, ARRAYSIZE(KOF03Moves_Ryo) },
        { L"Robert", L"indexKOF03Sprites_Robert", nullptr, KOF03Moves_Robert, ARRAYSIZE(KOF03Moves_Robert) },
        { L"Yuri", L"indexKOFXISprites_Yuri", L"indexKOF03Sprites_Yuri", KOF03Moves_Yuri, ARRAYSIZE(KOF03Moves_Yuri) },
        { L"Kim", L"indexKOF02UMSprites_Kim", L"indexKOF03Sprites_Kim" },
        { L"Chang", L"indexKOF02UMSprites_Chang", L"indexKOF03Sprites_Chang"  },
        { L"Jhun", L"indexKOF03Sprites_JhunHoon", nullptr, KOF03Moves_Jhun, ARRAYSIZE(KOF03Moves_Jhun) },
        { L"Leona", L"indexKOF02UMSprites_Leona", L"indexKOF03Sprites_Leona", KOF03Moves_Leona, ARRAYSIZE(KOF03Moves_Leona), L" Intro Coat", -1 },
        { L"Ralf", L"indexKOF02UMSprites_Ralf", L"indexKOF03Sprites_Ralf" },
        { L"Clark", L"indexKOF02UMSprites_Clark", L"indexKOF03Sprites_Clark"  },
        { L"Gato", L"indexKOF03Sprites_Gato", nullptr, KOF03Moves_Gato, ARRAYSIZE(KOF03Moves_Gato) },
        { L"Billy", L"indexKOF03Sprites_Billy", nullptr, KOF03Moves_Billy, ARRAYSIZE(KOF03Moves_Billy) },
        { L"Yamazaki", L"indexKOF03Sprites_Yamazaki", nullptr, KOF03Moves_Yamazaki, ARRAYSIZE(KOF03Moves_Yamazaki) },
        { L"King", L"indexKOF03Sprites_King", nullptr, KOF03Moves_King, ARRAYSIZE(KOF03Moves_King) },
        { L"Mai", L"indexKOF02UMSprites_Mai", L"indexKOF03Sprites_Mai", KOF03Moves_Mai, ARRAYSIZE(KOF03Moves_Mai) },
        { L"Blue Mary", L"indexKOFXISprites_BlueMary", L"indexKOF03Sprites_BlueMary", KOF03Moves_BlueMary, ARRAYSIZE(KOF03Moves_BlueMary), L" Jacket and Anton", -1 },
        { L"Benimaru", L"indexKOF03Sprites_Benimaru", nullptr, KOF03Moves_Benimaru, ARRAYSIZE(KOF03Moves_Benimaru) },
        { L"Shingo", L"indexKOFXISprites_Shingo", L"indexKOF03Sprites_Shingo", KOF03Moves_Shingo, ARRAYSIZE(KOF03Moves_Shingo) },
        { L"Goro", L"indexKOF02UMSprites_Daimon", L"indexKOF03Sprites_GoroDaimon" },
        { L"Athena", L"indexKOF03Sprites_Athena", nullptr, KOF03Moves_Athena, ARRAYSIZE(KOF03Moves_Athena) },
        { L"Hinako", L"indexKOF03Sprites_Hinako", nullptr, KOF03Moves_Hinako, ARRAYSIZE(KOF03Moves_Hinako) },
        { L"Malin", L"indexKOF03Sprites_Malin", nullptr, KOF03Moves_Malin, ARRAYSIZE(KOF03Moves_Malin), L" Weapons Extras", -1, L" Weapons Extra Electric Palette", -1, L" Weapons Extra Super Trail", -1 },
        { L"K'", L"indexKOF03Sprites_K", nullptr, KOF03Moves_K, ARRAYSIZE(KOF03Moves_K) },
        { L"Maxima", L"indexKOF02UMSprites_Maxima", L"indexKOF03Sprites_Maxima", KOF03Moves_Maxima, ARRAYSIZE(KOF03Moves_Maxima) },
        { L"Whip", L"indexKOF03Sprites_Whip", nullptr, KOF03Moves_Whip, ARRAYSIZE(KOF03Moves_Whip) },
        { L"Kyo", L"indexKOF03Sprites_Kyo", nullptr, KOF03Moves_Kyo, ARRAYSIZE(KOF03Moves_Kyo) },
        { L"Iori", L"indexKOF02UMSprites_Iori", L"indexKOF03Sprites_Iori", KOF03Moves_Iori, ARRAYSIZE(KOF03Moves_Iori) },
        { L"Chizuru", L"indexKOF03Sprites_Chizuru", nullptr, KOF03Moves_Chizuru, ARRAYSIZE(KOF03Moves_Chizuru) },
        { L"KUSANAGI", L"indexKOF03Sprites_KUSANAGI", nullptr, KOF03Moves_KUSANAGI, ARRAYSIZE(KOF03Moves_KUSANAGI) },
        { L"Adelheid", L"indexKOFXISprites_Adelheid", L"indexKOF03Sprites_Adelheid", KOF03Moves_Adelheid, ARRAYSIZE(KOF03Moves_Adelheid) },
        { L"Mukai", L"indexKOF03Sprites_Mukai", nullptr, KOF03Moves_Mukai, ARRAYSIZE(KOF03Moves_Mukai) },
        { L"Maki", L"indexKOF03Sprites_Maki", nullptr, KOF03Moves_Maki, ARRAYSIZE(KOF03Moves_Maki) },
    };

    const auto c_nBaseCharacterOffset = 0x2000;

    for (size_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF03CharData); nCharIndex++)
    {
        wchar_t szNodeName[128];

        StruprRemoveNonASCII(szNodeName, ARRAYSIZE(szNodeName), KOF03CharData[nCharIndex].pszName);

        for (size_t nButtonIndex = 0; nButtonIndex < ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO); nButtonIndex++)
        {
            strInfo.Format(L"const sGame_PaletteDataset KOF03_A_%s_PALETTES_%s[] =\r\n{\r\n",
                szNodeName,
                DEF_BUTTONLABEL_NEOGEO[nButtonIndex]);

            OutputDebugString(strInfo);

            sKOF03PalData KOF03CharacterPalData[] =
            {
                { L"", 0x00 },
                { L" Extra 1", -1 },
                { L" Electricity", 0x00 },
                { L" Extra 2", -1 },
                { L" Super Trail", 0x00 },
                { L" Extra 3", -1 },
                { L" Shikai Palette", 0x00 },
                { L" Extra 4", -1 },
            };

            for (size_t nMoveIndex = 0; nMoveIndex < ARRAYSIZE(KOF03CharacterPalData); nMoveIndex++)
            {
                size_t nCurrentOffset = c_nBaseCharacterOffset + (0x800 * nCharIndex) + (0x200 * nButtonIndex) + (nMoveIndex * 0x20);

                LPCWSTR pszOverrideName = nullptr;
                int nImageIndex = KOF03CharacterPalData[nMoveIndex].nImageIndex;

                switch (nMoveIndex)
                {
                case 1:
                    pszOverrideName = KOF03CharData[nCharIndex].pszExtraNameOverride1;
                    nImageIndex = KOF03CharData[nCharIndex].nExtraImageOverride1;
                    break;
                case 3:
                    pszOverrideName = KOF03CharData[nCharIndex].pszExtraNameOverride2;
                    nImageIndex = KOF03CharData[nCharIndex].nExtraImageOverride2;
                    break;
                case 5:
                    pszOverrideName = KOF03CharData[nCharIndex].pszExtraNameOverride3;
                    nImageIndex = KOF03CharData[nCharIndex].nExtraImageOverride3;
                    break;
                default:
                    break;
                }

                strInfo.Format(L"    { L\"%s%s %s\", ",
                    KOF03CharData[nCharIndex].pszName,
                    pszOverrideName ? pszOverrideName : KOF03CharacterPalData[nMoveIndex].pszPaletteName,
                    DEF_BUTTONLABEL_NEOGEO[nButtonIndex]
                );
                OutputDebugString(strInfo);

                strInfo.Format(L"0x%x, 0x%x",
                    nCurrentOffset,
                    nCurrentOffset + 0x20
                    );
                
                OutputDebugString(strInfo);

                if (nImageIndex != -1)
                {
                    strInfo.Format(L", %s, 0x%02x",
                        KOF03CharData[nCharIndex].pszImageSet,
                        nImageIndex
                    );
                    OutputDebugString(strInfo);
                }

                OutputDebugString(L" },\r\n");
            }

            // Optional special move palettes
            if (KOF03CharData[nCharIndex].prgSpecialMoves)
            {
                OutputDebugString(L"\r\n");
                for (size_t nSpecialIndex = 0; nSpecialIndex < KOF03CharData[nCharIndex].nCountSpecialMoves; nSpecialIndex++)
                {
                    size_t nCurrentOffset = c_nBaseCharacterOffset + (0x800 * nCharIndex) + (0x200 * nButtonIndex) + KOF03CharData[nCharIndex].prgSpecialMoves[nSpecialIndex].nSpecificOffset;
                    strInfo.Format(L"    { L\"%s %s\", ",
                        KOF03CharData[nCharIndex].prgSpecialMoves[nSpecialIndex].pszPaletteName,
                        DEF_BUTTONLABEL_NEOGEO[nButtonIndex]
                    );
                    OutputDebugString(strInfo);

                    strInfo.Format(L"0x%x, 0x%x",
                        nCurrentOffset,
                        nCurrentOffset + 0x20
                    );
                    OutputDebugString(strInfo);

                    if (KOF03CharData[nCharIndex].prgSpecialMoves[nSpecialIndex].nImageIndex != -1)
                    {
                        strInfo.Format(L", %s, 0x%02x",
                            KOF03CharData[nCharIndex].pszImageSet,
                            KOF03CharData[nCharIndex].prgSpecialMoves[nSpecialIndex].nImageIndex
                        );
                        OutputDebugString(strInfo);
                    }

                    OutputDebugString(L" },\r\n");
                }
            }

            OutputDebugString(L"\r\n");

            LPCWSTR pszVictoryImageToUse = KOF03CharData[nCharIndex].pszVictoryImageSet ? KOF03CharData[nCharIndex].pszVictoryImageSet : KOF03CharData[nCharIndex].pszImageSet;
            

            // Victory palette
            const auto c_nBaseCharacterOffset = 0x1f120;
            size_t nVictoryOffset = c_nBaseCharacterOffset + (0x100 * nCharIndex) + (0x40 * nButtonIndex);
            strInfo.Format(L"    { L\"%s Victory %s\", 0x%x, 0x%x, %s, 0x30 },\r\n",
                KOF03CharData[nCharIndex].pszName,
                DEF_BUTTONLABEL_NEOGEO[nButtonIndex],
                nVictoryOffset,
                nVictoryOffset + 0x40,
                pszVictoryImageToUse
            );
            OutputDebugString(strInfo);

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    return;
}

sFileRule CGame_KOF03_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"pal_a.bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_KOF03_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(KOF03_A_UNITS, rgExtraCountAll, KOF03_A_NUMUNIT, KOF03_A_EXTRALOC, nUnitId, KOF03_A_EXTRA_CUSTOM);
}

UINT16 CGame_KOF03_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(KOF03_A_UNITS, rgExtraCountAll, KOF03_A_NUMUNIT, KOF03_A_EXTRALOC, nUnitId, nCollectionId, KOF03_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOF03_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(KOF03_A_UNITS, KOF03_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_KOF03_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(KOF03_A_UNITS, rgExtraCountAll, KOF03_A_NUMUNIT, KOF03_A_EXTRALOC, nUnitId, KOF03_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOF03_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(KOF03_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KOF03_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOF03_A_UNITS, rgExtraCountAll, KOF03_A_NUMUNIT, KOF03_A_EXTRALOC, nUnitId, nPaletteId, KOF03_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOF03_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(KOF03_A_UNITS, rgExtraCountAll, KOF03_A_NUMUNIT, KOF03_A_EXTRALOC, nUnitId, nPaletteId, KOF03_A_EXTRA_CUSTOM);
}

void CGame_KOF03_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KOF03_A_EXTRALOC)
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
    else // KOF03_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF03(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF03_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != KOF03_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                if ((_wcsicmp(pCurrentNode->szDesc, L"A") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"B") == 0) ||
                    (_wcsicmp(pCurrentNode->szDesc, L"C") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"D") == 0))
                {
                    nSrcAmt = 4;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1/A
                        nSrcStart -= nNodeIncrement;
                    }
                }
                else if (_wcsicmp(pCurrentNode->szDesc, L"Portraits") == 0) // Portraits is last
                {
                    nSrcAmt = 4;
                    nSrcStart = GetPaletteCountForUnit(NodeGet->uUnitId) - pCurrentNode->uChildAmt;
                    nNodeIncrement = 1;

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
