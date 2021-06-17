#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SFZ3U_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SFZ3U_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SFZ3U_A::SFZ3U_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SFZ3U_A::MainDescTree = nullptr;

int CGame_SFZ3U_A::rgExtraCountAll[SFZ3U_A_NUMUNIT + 1];
int CGame_SFZ3U_A::rgExtraLoc[SFZ3U_A_NUMUNIT + 1];

UINT32 CGame_SFZ3U_A::m_nTotalPaletteCountForSFZ3U = 0;
UINT32 CGame_SFZ3U_A::m_nExpectedGameROMSize = 0xac00000;
UINT32 CGame_SFZ3U_A::m_nConfirmedROMSize = -1;

void CGame_SFZ3U_A::InitializeStatics()
{
    safe_delete_array(CGame_SFZ3U_A::SFZ3U_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SFZ3U_A::InitDescTree());
}

CGame_SFZ3U_A::CGame_SFZ3U_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_SFZ3U_A::CGame_SFZ3U_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SFZ3U_A_NUMUNIT;
    m_nExtraUnit = SFZ3U_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1140;
    m_pszExtraFilename = EXTRA_FILENAME_SFZ3U_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSFZ3U;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x5ff0000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SFZ3U_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = SFZ3U_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(SFZ3U_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_ISMS;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_ISMS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SFZ3U_A::~CGame_SFZ3U_A(void)
{
    safe_delete_array(CGame_SFZ3U_A::SFZ3U_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SFZ3U_A::GetMainTree()
{
    return &CGame_SFZ3U_A::MainDescTree;
}

int CGame_SFZ3U_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SFZ3U_A_NUMUNIT, nUnitId, SFZ3U_A_EXTRA_CUSTOM);
}

int CGame_SFZ3U_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SFZ3U_A_NUMUNIT, nUnitId, SFZ3U_A_EXTRA_CUSTOM);
}

struct sSFZ3U_A_CharacterData
{
    LPCWSTR pszCharacterName = nullptr;
    LPCWSTR pszCharacterImageName = nullptr;
    UINT32 nROMOffset = 0;
    UINT32 nImagePortraitSetIndex = 0;
    UINT32 nImageMainSpriteIndex = 0;
    bool fSpriteIsPaired = false;
};

sSFZ3U_A_CharacterData SFZ3U_A_CharacterDataArray[] =
{
    { L"Ryu",       L"Ryu",     0x5ff0000, 0xB4 },
    { L"Ken",       L"Ken",     0x60bd800, 0xAF },
    { L"Akuma",     L"Akuma",   0x61B7000, 0xA1 }, // Gouki
    { L"Charlie",   L"Charlie", 0x634b000, 0xA5 }, // Nash
    { L"Chun-Li",   L"ChunLi",  0x6428000, 0xA6, 0x0c, true }, // Chun (NOTE: Chun has a special non-X-ISM portrait, A7)
    { L"Adon",      L"Adon",    0x65d7000, 0xA0 },
    { L"Sodom",     L"Sodom",   0x66de000, 0xB7 },
    { L"Guy",       L"Guy",     0x68bd000, 0xAD },
    { L"Birdie",    L"Birdie",  0x69d4000, 0xA2 },
    { L"Rose",      L"Rose",    0x6b01000, 0xB3 },
    { L"M.Bison",   L"Bison",   0x6c3d000, 0xB0 }, // Dict
    { L"Sagat",     L"Sagat",   0x6d43800, 0xB5 },
    { L"Dan",       L"Dan",     0x6e09800, 0xA9 },
    { L"Sakura",    L"Sakura",  0x6f54000, 0xB6 },
    { L"Rolento",   L"Rolento", 0x7076800, 0xB2 },
    { L"Dhalsim",   L"Dhalsim", 0x7190000, 0xAA },

    { L"Zangief",   L"Zangief", 0x732c000, 0xB9 },
    { L"Gen",       L"Gen",     0x7451000, 0xAC },
    { L"Chun-Li (X-Ism)", L"ChunLi", 0x64eb000, 0xa6, 0x00, true },
    { L"Gen (Crane stance)", L"Gen", 0x7546800, 0xac },
    { L"Sodom (X-Ism)", L"Sodom", 0x67EC000, 0xB7 },
    { L"Balrog",    L"Balrog",  0x75fd000, 0xff },
    { L"Cammy",     L"Cammy",   0x77ee000, 0xA4 },
    { L"Evil Ryu",  L"Ryu",     0x791e000, 0xb4 },
    { L"E.Honda",   L"EHonda",  0x7a0b800, 0xAB },
    { L"Blanka",    L"Blanka",  0x7b8a800, 0xA3 },
    { L"R.Mika",    L"RMika",   0x7d0e800, 0xB1 },
    { L"Cody",      L"Cody",    0x7e78000, 0xA8 },
    { L"Vega",      L"Vega",    0x7fb4000, 0xB8, 0x00, true },
    { L"Karin",     L"Karin",   0x80eb000, 0xAE },
    { L"Juli",      L"Juli",    0x820f800, 0xff },
    { L"Juni",      L"Juni",    0x831e000, 0xff },

    { L"Guile",     L"Guile",   0x8444000, 0xff },
    { L"Fei Long",  L"FeiLong", 0x8562000, 0xff },
    { L"Dee Jay",   L"DeeJay",  0x8660000, 0xff },
    { L"T-Hawk",    L"THawk",   0x87b6800, 0xff },
    { L"Shin Akuma", L"Akuma",  0x627B000, 0xA1 },
    { L"Balrog (Finished)", L"Balrog",  0x76EC000, 0xff },
    // ... is Eagle actually present?
    //{ L"Eagle",     L"Eagle",   0x8c26b40, 0xff },
};

const LPCWSTR SFZ3U_ColorOptionNames[] =
{
    L"X-Ism Punch",
    L"X-Ism Kick",
    L"A-Ism Punch",
    L"A-Ism Kick",
    L"V-Ism Punch",
    L"V-Ism Kick"
};

const LPCWSTR SFZ3U_CharacterPaletteNames[] =
{
    L"",
    L" Extra 1",
    L" Extra 2",
    L" Super Trail Light",
    L" Super Trail Dark"
};

void CGame_SFZ3U_A::DumpAllCharacters()
{
    CString strOutput;

    for (UINT16 nIndex = 0; nIndex < ARRAYSIZE(SFZ3U_A_CharacterDataArray); nIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFZ3U_A_CharacterDataArray[nIndex].pszCharacterName);

        for (UINT16 nColorIndex = 0; nColorIndex < ARRAYSIZE(SFZ3U_ColorOptionNames); nColorIndex++)
        {
            WCHAR szIsmDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szIsmDesc, ARRAYSIZE(szIsmDesc), SFZ3U_ColorOptionNames[nColorIndex]);

            const UINT16 nPortraitsPerCharacter = 6;
            strOutput.Format(L"const sGame_PaletteDataset SFZ3U_A_%s_PALETTES_%s[] = \r\n{\r\n", szCodeDesc, szIsmDesc);
            OutputDebugString(strOutput);

            for (UINT16 nPaletteIndex = 0; nPaletteIndex < ARRAYSIZE(SFZ3U_CharacterPaletteNames); nPaletteIndex++)
            {
                const UINT32 PALETTE_LENGTH = 0x20;
                CString strColorName;
                strColorName.Format(L"%s%s", SFZ3U_ColorOptionNames[nColorIndex], SFZ3U_CharacterPaletteNames[nPaletteIndex]);
                UINT16 nPaletteSpriteIndex;

                switch (nPaletteIndex)
                {
                default:
                    nPaletteSpriteIndex = SFZ3U_A_CharacterDataArray[nIndex].nImageMainSpriteIndex;
                    break;
                case 1:
                    nPaletteSpriteIndex = 1;
                    break;
                case 2:
                    nPaletteSpriteIndex = 2;
                    break;
                }

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, indexCPS2Sprites_%s, 0x%02x%s },\r\n", strColorName.GetString(), 
                    SFZ3U_A_CharacterDataArray[nIndex].nROMOffset + (PALETTE_LENGTH * nPaletteIndex) + (nColorIndex * ARRAYSIZE(SFZ3U_CharacterPaletteNames) * PALETTE_LENGTH),
                    SFZ3U_A_CharacterDataArray[nIndex].nROMOffset + (PALETTE_LENGTH * (nPaletteIndex + 1)) + (nColorIndex * ARRAYSIZE(SFZ3U_CharacterPaletteNames) * PALETTE_LENGTH),
                    SFZ3U_A_CharacterDataArray[nIndex].pszCharacterImageName, nPaletteSpriteIndex, SFZ3U_A_CharacterDataArray[nIndex].fSpriteIsPaired ? L", &pairNext" : L"");
                OutputDebugString(strOutput);
            }
            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (UINT16 nIndex = 0; nIndex < ARRAYSIZE(SFZ3U_A_CharacterDataArray); nIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFZ3U_A_CharacterDataArray[nIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode SFZ3U_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < ARRAYSIZE(SFZ3U_ColorOptionNames); nColorIndex++)
        {
            WCHAR szIsmDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szIsmDesc, ARRAYSIZE(szIsmDesc), SFZ3U_ColorOptionNames[nColorIndex]);

            strOutput.Format(L"    {  L\"%s\", DESC_NODETYPE_TREE, (void*)SFZ3U_A_%s_PALETTES_%s, ARRAYSIZE(SFZ3U_A_%s_PALETTES_%s) },\r\n", SFZ3U_ColorOptionNames[nColorIndex], szCodeDesc, szIsmDesc, szCodeDesc, szIsmDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    OutputDebugString(L"const sDescTreeNode SFZ3U_A_UNITS[] =\r\n    {\r\n");

    for (UINT16 nIndex = 0; nIndex < ARRAYSIZE(SFZ3U_A_CharacterDataArray); nIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFZ3U_A_CharacterDataArray[nIndex].pszCharacterName);

        strOutput.Format(L"    {  L\"%s\", DESC_NODETYPE_TREE, (void*)SFZ3U_A_%s_COLLECTION, ARRAYSIZE(SFZ3U_A_%s_COLLECTION) },\r\n", SFZ3U_A_CharacterDataArray[nIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    OutputDebugString(L"};\r\n\r\n");
}

sDescTreeNode* CGame_SFZ3U_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SFZ3U_A, SFZ3U_A_EXTRA, &SFZ3U_A_EXTRA_CUSTOM, SFZ3U_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SFZ3U_A_NUMUNIT + (GetExtraCt(SFZ3U_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SFZ3U_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSFZ3U = _InitDescTree(NewDescTree,
        SFZ3U_A_UNITS,
        SFZ3U_A_EXTRALOC,
        SFZ3U_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SFZ3U_A_EXTRA_CUSTOM
    );

    // For development purposes only...
    //DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_SFZ3U_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"StreetFighterZero3Upper.bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SFZ3U_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(SFZ3U_A_UNITS, rgExtraCountAll, SFZ3U_A_NUMUNIT, SFZ3U_A_EXTRALOC, nUnitId, SFZ3U_A_EXTRA_CUSTOM);
}

UINT16 CGame_SFZ3U_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(SFZ3U_A_UNITS, rgExtraCountAll, SFZ3U_A_NUMUNIT, SFZ3U_A_EXTRALOC, nUnitId, nCollectionId, SFZ3U_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SFZ3U_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(SFZ3U_A_UNITS, SFZ3U_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_SFZ3U_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(SFZ3U_A_UNITS, rgExtraCountAll, SFZ3U_A_NUMUNIT, SFZ3U_A_EXTRALOC, nUnitId, SFZ3U_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SFZ3U_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(SFZ3U_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_SFZ3U_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SFZ3U_A_UNITS, rgExtraCountAll, SFZ3U_A_NUMUNIT, SFZ3U_A_EXTRALOC, nUnitId, nPaletteId, SFZ3U_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SFZ3U_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(SFZ3U_A_UNITS, rgExtraCountAll, SFZ3U_A_NUMUNIT, SFZ3U_A_EXTRALOC, nUnitId, nPaletteId, SFZ3U_A_EXTRA_CUSTOM);
}

void CGame_SFZ3U_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != SFZ3U_A_EXTRALOC)
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
    else // SFZ3U_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSFZ3U(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SFZ3U_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(SFZ3U_A_UNITS, rgExtraCountAll, SFZ3U_A_NUMUNIT, SFZ3U_A_EXTRALOC, SFZ3U_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
