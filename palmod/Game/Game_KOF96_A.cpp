#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF96_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF96_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF96_A::KOF96_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF96_A::MainDescTree = nullptr;
int CGame_KOF96_A::rgExtraCountAll[KOF96_A_NUMUNIT + 1];
int CGame_KOF96_A::rgExtraLoc[KOF96_A_NUMUNIT + 1];

UINT32 CGame_KOF96_A::m_nTotalPaletteCountForKOF96 = 0;
UINT32 CGame_KOF96_A::m_nExpectedGameROMSize = 0x200000;
UINT32 CGame_KOF96_A::m_nConfirmedROMSize = -1;

void CGame_KOF96_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF96_A::KOF96_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF96_A::InitDescTree());
}

CGame_KOF96_A::CGame_KOF96_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KOF96_A::CGame_KOF96_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF96_A_NUMUNIT;
    m_nExtraUnit = KOF96_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 873;
    m_pszExtraFilename = EXTRA_FILENAME_KOF96_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF96;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x102002;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF96_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF96_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(KOF96_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_AOF3;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_AOF3);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOF96_A::~CGame_KOF96_A(void)
{
    safe_delete_array(CGame_KOF96_A::KOF96_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF96_A::GetMainTree()
{
    return &CGame_KOF96_A::MainDescTree;
}

sFileRule CGame_KOF96_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"214-p2.sp2");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_KOF96_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"King of Fighters '96 (Neo-Geo)", L"214-p2.sp2", 0x002ccb73, 0 },
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

int CGame_KOF96_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KOF96_A_NUMUNIT, nUnitId, KOF96_A_EXTRA_CUSTOM);
}

int CGame_KOF96_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KOF96_A_NUMUNIT, nUnitId, KOF96_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_KOF96_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF96_A, KOF96_A_EXTRA, &KOF96_A_EXTRA_CUSTOM, KOF96_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF96_A_NUMUNIT + (GetExtraCt(KOF96_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF96_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKOF96 = _InitDescTree(NewDescTree,
        KOF96_A_UNITS,
        KOF96_A_EXTRALOC,
        KOF96_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KOF96_A_EXTRA_CUSTOM
    );

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

struct sKOF96_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nROMOffset = 0;
    bool fIsMultipart = false;
    LPCWSTR pszImageSet = nullptr;
};

sKOF96_A_PaletteData KOF96_A_CharacterEffectPalettes[] =
{
    { L"Kyo",       0x102002, false, L"indexKOF94Sprites_Kyo" },
    { L"Benimaru",  0x102402, false, L"indexKOF94Sprites_Benimaru" },
    { L"Daimon",    0x102802, false, L"indexKOFSprites_98Daimon" },
    { L"Terry",     0x102c02, false, L"indexKOF94Sprites_Terry" },
    { L"Andy",      0x103002, false, L"indexKOF97Sprites_Andy" },
    { L"Joe",       0x103402, false, L"indexKOF94Sprites_Joe" },
    { L"Ryo",       0x103802, false, L"indexKOF94Sprites_Ryo" },
    { L"Robert",    0x103c02, false, L"indexKOF94Sprites_Robert" },
    { L"Yuri",      0x104002, false, L"indexKOF94Sprites_Yuri" },
    { L"Leona",     0x104402, false, L"indexKOFSprites_98Leona" },
    { L"Ralf",      0x104802, true, L"indexKOF94Sprites_Ralf" },
    { L"Clark",     0x104c02, true, L"indexKOF94Sprites_Clark" },
    { L"Athena",    0x105002, false, L"indexKOF94Sprites_Athena" },
    { L"Kensou",    0x105402, false, L"indexKOF94Sprites_Kensou" },
    { L"Chin",      0x105802, false, L"indexKOF94Sprites_Chin" },
    { L"Kasumi",    0x105c02, false, L"indexKOFSprites_00Kasumi" },
    { L"Mai",       0x106002, false, L"indexKOF94Sprites_Mai" },
    { L"King",      0x106402, false, L"indexKOFSprites_98King" },
    { L"Kim",       0x106802, false, L"indexKOFSprites_98Kim" },
    { L"Chang",     0x106c02, true, L"indexKOFSprites_98Chang" },
    { L"Choi",      0x107002, false, L"indexKOFSprites_98Choi" },
    { L"Iori",      0x107402, false, L"indexKOFSprites_98Iori" },
    { L"Mature",    0x107802, false, L"indexKOFSprites_98Mature" },
    { L"Vice",      0x107c02, false, L"indexKOFSprites_98Vice" },
    { L"Geese",     0x108002, false, L"indexKOFSprites_02Geese" },
    { L"Krauser",   0x108402, false, L"indexKOF96Sprites_Krauser" },
    { L"Mr. Big",   0x108802, false, L"indexKOF96Sprites_MrBig" },
    { L"Chizuru",   0x108c02, false, L"indexKOFSprites_98Chizuru" },
    { L"Goenitz",   0x109002, false, L"indexKOFSprites_02Goenitz" },
};

void CGame_KOF96_A::DumpPaletteHeaders()
{
    CString strOutput;
    constexpr UINT32 KOF96_PALETTE_LENGTH = 0x20;
    const UINT16 nCountStatusEffects = 16;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF96_A_CharacterEffectPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF96_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        for (UINT16 nCharacterColor = 0; nCharacterColor < ARRAYSIZE(DEF_BUTTONLABEL_2_AOF3); nCharacterColor++)
        {
            strOutput.Format(L"const sGame_PaletteDataset KOF96_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, (nCharacterColor == 0) ? L"A" : L"D");
            OutputDebugString(strOutput);

            for (UINT16 nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
            {
                UINT32 nCurrentOffset = KOF96_A_CharacterEffectPalettes[nCharIndex].nROMOffset + (nStatusIndex * KOF96_PALETTE_LENGTH) + (nCharacterColor * 0x200);
                UINT32 nTerminalOffset = nCurrentOffset + KOF96_PALETTE_LENGTH;
                LPCWSTR pszCurrentEffectName = nullptr;
                int nCurrentImageIndex = 0;
                bool fIsPairable = false;

                switch (nStatusIndex)
                {
                case 0:
                    pszCurrentEffectName = KOF96_A_CharacterEffectPalettes[nCharIndex].pszCharacterName;
                    fIsPairable = KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 1:
                    pszCurrentEffectName = L"Extra 1";
                    if (KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 2:
                    pszCurrentEffectName = L"Super Trail 1";
                    fIsPairable = KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 3:
                    pszCurrentEffectName = L"Super Trail 2";
                    if (KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 4:
                    pszCurrentEffectName = L"MAX Mode";
                    fIsPairable = KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 5:
                    if (KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"MAX Mode Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 1";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 6:
                    pszCurrentEffectName = L"Electric Palette?";
                    fIsPairable = KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;

                    //pszCurrentEffectName = L"Win Portrait?";
                    //nTerminalOffset += (2 * KOF96_PALETTE_LENGTH);
                    //nCurrentImageIndex = -1;
                    break;
                case 7:
                    if (KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"Electric Palette Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 3";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 8:
                    pszCurrentEffectName = L"Extra 4";
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
                    pszCurrentEffectName = L"Monochrome Palette";
                    break;
                case 14:
                    pszCurrentEffectName = L"Extra 9";
                    nCurrentImageIndex = -1;
                    break;
                case 15:
                    pszCurrentEffectName = L"Lifebar Portrait";
                    nCurrentImageIndex = 0x20;
                    break;
                default:
                    DebugBreak();
                };

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x", pszCurrentEffectName, nCurrentOffset, nTerminalOffset);
                OutputDebugString(strOutput);

                if (KOF96_A_CharacterEffectPalettes[nCharIndex].pszImageSet && (nCurrentImageIndex != -1))
                {
                    strOutput.Format(L", %s, 0x%02x", KOF96_A_CharacterEffectPalettes[nCharIndex].pszImageSet, nCurrentImageIndex);
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

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF96_A_CharacterEffectPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF96_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF96_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < ARRAYSIZE(DEF_BUTTONLABEL_2_AOF3); nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_AOF3[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF96_A_%s_%s_PALETTES, ARRAYSIZE(KOF96_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_2_AOF3[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }
}

UINT16 CGame_KOF96_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(KOF96_A_UNITS, rgExtraCountAll, KOF96_A_NUMUNIT, KOF96_A_EXTRALOC, nUnitId, KOF96_A_EXTRA_CUSTOM);
}

UINT16 CGame_KOF96_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(KOF96_A_UNITS, rgExtraCountAll, KOF96_A_NUMUNIT, KOF96_A_EXTRALOC, nUnitId, nCollectionId, KOF96_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOF96_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(KOF96_A_UNITS, KOF96_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_KOF96_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(KOF96_A_UNITS, rgExtraCountAll, KOF96_A_NUMUNIT, KOF96_A_EXTRALOC, nUnitId, KOF96_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOF96_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(KOF96_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KOF96_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOF96_A_UNITS, rgExtraCountAll, KOF96_A_NUMUNIT, KOF96_A_EXTRALOC, nUnitId, nPaletteId, KOF96_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOF96_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(KOF96_A_UNITS, rgExtraCountAll, KOF96_A_NUMUNIT, KOF96_A_EXTRALOC, nUnitId, nPaletteId, KOF96_A_EXTRA_CUSTOM);
}

void CGame_KOF96_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KOF96_A_EXTRALOC)
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
    else // KOF96_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF96(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF96_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(KOF96_A_UNITS, rgExtraCountAll, KOF96_A_NUMUNIT, KOF96_A_EXTRALOC, KOF96_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
