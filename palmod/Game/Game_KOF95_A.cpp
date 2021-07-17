#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF95_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF95_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF95_A::KOF95_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF95_A::MainDescTree = nullptr;
int CGame_KOF95_A::rgExtraCountAll[KOF95_A_NUMUNIT + 1];
int CGame_KOF95_A::rgExtraLoc[KOF95_A_NUMUNIT + 1];

UINT32 CGame_KOF95_A::m_nTotalPaletteCountForKOF95 = 0;
UINT32 CGame_KOF95_A::m_nExpectedGameROMSize = 0x200000;
UINT32 CGame_KOF95_A::m_nConfirmedROMSize = -1;

void CGame_KOF95_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF95_A::KOF95_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF95_A::InitDescTree());
}

CGame_KOF95_A::CGame_KOF95_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KOF95_A::CGame_KOF95_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF95_A_NUMUNIT;
    m_nExtraUnit = KOF95_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 730;
    m_pszExtraFilename = EXTRA_FILENAME_KOF95_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF95;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xd9000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF95_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF95_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(KOF95_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_NEOGEO;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_NEOGEO);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOF95_A::~CGame_KOF95_A(void)
{
    safe_delete_array(CGame_KOF95_A::KOF95_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF95_A::GetMainTree()
{
    return &CGame_KOF95_A::MainDescTree;
}

sFileRule CGame_KOF95_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"084-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_KOF95_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"King of Fighters '95 (Neo-Geo)", L"084-p1.p1", 0x2cba2716, 0 },
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

int CGame_KOF95_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KOF95_A_NUMUNIT, nUnitId, KOF95_A_EXTRA_CUSTOM);
}

int CGame_KOF95_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KOF95_A_NUMUNIT, nUnitId, KOF95_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_KOF95_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF95_A, KOF95_A_EXTRA, &KOF95_A_EXTRA_CUSTOM, KOF95_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF95_A_NUMUNIT + (GetExtraCt(KOF95_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF95_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKOF95 = _InitDescTree(NewDescTree,
        KOF95_A_UNITS,
        KOF95_A_EXTRALOC,
        KOF95_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KOF95_A_EXTRA_CUSTOM
    );

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

struct sKOF95_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nROMOffset = 0;
    bool fIsMultipart = false;
    LPCWSTR pszImageSet = nullptr;
};

sKOF95_A_PaletteData KOF95_A_CharacterEffectPalettes[] =
{
    { L"Heidern",   0xd9000, false, L"indexKOF94Sprites_Heidern" },
    { L"Ralf",      0xd9400, true, L"indexKOF94Sprites_Ralf" },
    { L"Clark",     0xd9800, true, L"indexKOF94Sprites_Clark" },
    { L"Athena",    0xd9c00, false, L"indexKOF94Sprites_Athena" },
    { L"Kensou",    0xda000, false, L"indexKOF94Sprites_Kensou" },
    { L"Chin",      0xda400, false, L"indexKOF94Sprites_Chin" },
    { L"Kyo",       0xda800, false, L"indexKOF94Sprites_Kyo" },
    { L"Benimaru",  0xdac00, false, L"indexKOF94Sprites_Benimaru" },
    { L"Daimon",    0xdb000, false, L"indexKOF94Sprites_Daimon" },
    { L"Iori",      0xdb400, false, L"indexKOF95Sprites_Iori" },
    { L"Eiji",      0xdb800, false, L"indexKOF95Sprites_Eiji" },
    { L"Billy",     0xdbc00, false, L"indexKOF95Sprites_Billy" },
    { L"Kim",       0xdc000, false, L"indexKOF94Sprites_Kim" },
    { L"Chang",     0xdc400, true, L"indexKOF95Sprites_Chang" },
    { L"Choi",      0xdc800, false, L"indexKOF95Sprites_Chin" },
    { L"Terry",     0xdcc00, false, L"indexKOF94Sprites_Terry" },
    { L"Andy",      0xdd000, false, L"indexKOF94Sprites_Andy" },
    { L"Joe",       0xdd400, false, L"indexKOF94Sprites_Joe" },
    { L"Ryo",       0xdd800, false, L"indexKOF94Sprites_Ryo" },
    { L"Robert",    0xddc00, false, L"indexKOF94Sprites_Robert" },
    { L"Takuma",    0xde000, false, L"indexKOF94Sprites_Takuma" },
    { L"Yuri",      0xde400, false, L"indexKOF94Sprites_Yuri" },
    { L"Mai",       0xde800, false, L"indexKOF94Sprites_Mai" },
    { L"King",      0xdec00, false, L"indexKOF94Sprites_King" },
    { L"Saisyu",    0xdf000, false, L"indexKOF95Sprites_Saisyu" },
    { L"Omega Rugal", 0xdf400, true, L"indexKOF95Sprites_Rugal" },
};

void CGame_KOF95_A::DumpPaletteHeaders()
{
    CString strOutput;
    constexpr UINT32 KOF95_PALETTE_LENGTH = 0x20;
    const UINT16 nCountStatusEffects = 16;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF95_A_CharacterEffectPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF95_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        for (UINT16 nCharacterColor = 0; nCharacterColor < 2; nCharacterColor++)
        {
            strOutput.Format(L"const sGame_PaletteDataset KOF95_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, (nCharacterColor == 0) ? L"MAIN" : L"ALT");
            OutputDebugString(strOutput);

            for (UINT16 nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
            {
                UINT32 nCurrentOffset = KOF95_A_CharacterEffectPalettes[nCharIndex].nROMOffset + (nStatusIndex * KOF95_PALETTE_LENGTH) + (nCharacterColor * 0x200);
                UINT32 nTerminalOffset = nCurrentOffset + KOF95_PALETTE_LENGTH;
                LPCWSTR pszCurrentEffectName = nullptr;
                int nCurrentImageIndex = 0;
                bool fIsPairable = false;

                switch (nStatusIndex)
                {
                case 0:
                    pszCurrentEffectName = KOF95_A_CharacterEffectPalettes[nCharIndex].pszCharacterName;
                    fIsPairable = KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 1:
                    pszCurrentEffectName = L"Extra 1";
                    if (KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 2:
                    pszCurrentEffectName = L"MAX Flash";
                    fIsPairable = KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 3:
                    if (KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"MAX Flash Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 2";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 4:
                    pszCurrentEffectName = L"Electric Palette?";
                    fIsPairable = KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 5:
                    if (KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"Electric Palette? Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 4";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 6:
                    pszCurrentEffectName = L"Win Portrait?";
                    nTerminalOffset += (2 * KOF95_PALETTE_LENGTH);
                    nCurrentImageIndex = -1;
                    break;
                case 7:
                case 8:
                    // These are part of the win portrait
                    continue;
                case 9:
                    pszCurrentEffectName = L"Extra 5";
                    nCurrentImageIndex = -1;
                    break;
                case 10:
                    pszCurrentEffectName = L"Extra 6";
                    nCurrentImageIndex = -1;
                    break;
                case 11:
                    pszCurrentEffectName = L"Extra 7";
                    nCurrentImageIndex = -1;
                    break;
                case 12:
                    pszCurrentEffectName = L"Extra 8";
                    nCurrentImageIndex = -1;
                    break;
                case 13:
                    pszCurrentEffectName = L"Extra 9";
                    nCurrentImageIndex = -1;
                    break;
                case 14:
                    pszCurrentEffectName = L"Lifebar Portrait";
                    nCurrentImageIndex = 0x20;
                    break;
                case 15:
                    pszCurrentEffectName = L"Lifebar Portrait Defeated/Grayed";
                    nCurrentImageIndex = 0x20;
                    break;
                default:
                    DebugBreak();
                };

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x", pszCurrentEffectName, nCurrentOffset, nTerminalOffset);
                OutputDebugString(strOutput);

                if (KOF95_A_CharacterEffectPalettes[nCharIndex].pszImageSet && (nCurrentImageIndex != -1))
                {
                    strOutput.Format(L", %s, 0x%02x", KOF95_A_CharacterEffectPalettes[nCharIndex].pszImageSet, nCurrentImageIndex);
                    OutputDebugString(strOutput);

                    if (fIsPairable)
                    {
                        OutputDebugString(L", &pairNext");
                    }
                }

                OutputDebugString(L" },\r\n");
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF95_A_CharacterEffectPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF95_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF95_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < 2; nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_NEOGEO[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF95_A_%s_%s_PALETTES, ARRAYSIZE(KOF95_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_2_NEOGEO[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }
}

UINT16 CGame_KOF95_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(KOF95_A_UNITS, rgExtraCountAll, KOF95_A_NUMUNIT, KOF95_A_EXTRALOC, nUnitId, KOF95_A_EXTRA_CUSTOM);
}

UINT16 CGame_KOF95_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(KOF95_A_UNITS, rgExtraCountAll, KOF95_A_NUMUNIT, KOF95_A_EXTRALOC, nUnitId, nCollectionId, KOF95_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOF95_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(KOF95_A_UNITS, KOF95_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_KOF95_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(KOF95_A_UNITS, rgExtraCountAll, KOF95_A_NUMUNIT, KOF95_A_EXTRALOC, nUnitId, KOF95_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOF95_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(KOF95_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KOF95_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOF95_A_UNITS, rgExtraCountAll, KOF95_A_NUMUNIT, KOF95_A_EXTRALOC, nUnitId, nPaletteId, KOF95_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOF95_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(KOF95_A_UNITS, rgExtraCountAll, KOF95_A_NUMUNIT, KOF95_A_EXTRALOC, nUnitId, nPaletteId, KOF95_A_EXTRA_CUSTOM);
}

void CGame_KOF95_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KOF95_A_EXTRALOC)
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
    else // KOF95_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF95(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF95_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(KOF95_A_UNITS, rgExtraCountAll, KOF95_A_NUMUNIT, KOF95_A_EXTRALOC, KOF95_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
