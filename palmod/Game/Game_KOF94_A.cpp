#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF94_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF94_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF94_A::KOF94_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF94_A::MainDescTree = nullptr;
int CGame_KOF94_A::rgExtraCountAll[KOF94_A_NUMUNIT + 1];
int CGame_KOF94_A::rgExtraLoc[KOF94_A_NUMUNIT + 1];

UINT32 CGame_KOF94_A::m_nTotalPaletteCountForKOF94 = 0;
UINT32 CGame_KOF94_A::m_nExpectedGameROMSize = 0x200000;
UINT32 CGame_KOF94_A::m_nConfirmedROMSize = -1;

void CGame_KOF94_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF94_A::KOF94_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF94_A::InitDescTree());
}

CGame_KOF94_A::CGame_KOF94_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KOF94_A::CGame_KOF94_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF94_A_NUMUNIT;
    m_nExtraUnit = KOF94_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 552;
    m_pszExtraFilename = EXTRA_FILENAME_KOF94_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF94;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x176000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF94_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF94_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(KOF94_A_IMGIDS_USED);

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

CGame_KOF94_A::~CGame_KOF94_A(void)
{
    safe_delete_array(CGame_KOF94_A::KOF94_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF94_A::GetMainTree()
{
    return &CGame_KOF94_A::MainDescTree;
}

sFileRule CGame_KOF94_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"055-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_KOF94_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        // There are three unique ROM sets, but the first two share the same palette file,
        // and the third one we don't care about.
        { L"KOF '94 (Neo-Geo)", L"055-p1.p1", 0xf10a2042, 0 },
        { L"KOF '94 (Neo-Geo)", L"055-p1.bin", -1, 0 },
        { L"KOF '94 (Neo-Geo)", L"242-p2.sp2", 0x940aba4c, 0 },
        { L"KOF '94 (Neo-Geo)", L"kof94_p2.rom", 0x940aba4c, 0 },
        { L"KOF '94 (Neo-Geo Alt)", L"242-ep.ep2", 0x6e474841, 0 },
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

#ifdef NOTES
    // These are the MAME values...
    <software name = "kof94">
        <description>The King of Fighters '94 - The Slugfest / King of Fighters '94 - Dream Match Never Ends(NGM - 2420) </description>
            <rom loadflag="load16_word_swap" name="242-p2.sp2" offset="0x200000" size="0x400000" crc="940aba4c" sha1="5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" />  <!--TC5332205-->

	<software name="kof94k" cloneof="kof94">
		<description>The King of Fighters '94 - The Slugfest / King of Fighters '94 - Dream Match Never Ends (Korean board, set 1)</description>
			<rom loadflag="load16_word_swap" name="242-p2.sp2" offset="0x200000" size="0x400000" crc="940aba4c" sha1="5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" />  <!-- TC5332205 -->

	<software name="kof94ka" cloneof="kof94">
		<description>The King of Fighters '94 - The Slugfest / King of Fighters '94 - Dream Match Never Ends (Korean board, set 2)</description>
			<rom loadflag="load16_word_swap" name="242-p2.sp2" offset="0x200000" size="0x400000" crc="940aba4c" sha1="5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" />  <!-- TC5332205 -->

	<software name="kof94h" cloneof="kof94">
		<description>The King of Fighters '94 - The Slugfest / King of Fighters '94 - Dream Match Never Ends (NGH-2420)</description>
				<rom loadflag="load16_word_swap" name="242-p2.sp2" offset="0x100000" size="0x400000" crc="940aba4c" sha1="5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" />  <!-- TC5332205 -->

	<software name="kof94a" cloneof="kof94">
		<description>The King of Fighters '94 - The Slugfest / King of Fighters '94 - Dream Match Never Ends (NGM-2420, alt board)</description>
				<rom loadflag="load16_word_swap" name="242-ep2.ep2" offset="0x400000" size="0x200000" crc="6e474841" sha1="0ce401277f9c53435ea00b930efe361c8d25a7d9" /> <!-- M27C160 -->
#endif
}

int CGame_KOF94_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KOF94_A_NUMUNIT, nUnitId, KOF94_A_EXTRA_CUSTOM);
}

int CGame_KOF94_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KOF94_A_NUMUNIT, nUnitId, KOF94_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_KOF94_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF94_A, KOF94_A_EXTRA, &KOF94_A_EXTRA_CUSTOM, KOF94_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF94_A_NUMUNIT + (GetExtraCt(KOF94_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF94_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKOF94 = _InitDescTree(NewDescTree,
        KOF94_A_UNITS,
        KOF94_A_EXTRALOC,
        KOF94_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KOF94_A_EXTRA_CUSTOM
    );

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

struct sKOF94_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nROMOffset = 0;
    bool fIsMultipart = false;
    LPCWSTR pszImageSet = nullptr;
};

sKOF94_A_PaletteData KOF94_A_CharacterEffectPalettes[] =
{
    { L"Heidern", 0x176000 /* to 0x1761c0 */, false, L"indexKOF94Sprites_Heidern" },
    { L"Ralf", 0x176380 /* to 0x176540 */, true, L"indexKOF94Sprites_Ralf" },
    { L"Clark", 0x176700 /* to 0x1768c0 */, true, L"indexKOF94Sprites_Clark" },
    { L"Athena", 0x176a80 /* to 0x176c40 */, false, L"indexKOF94Sprites_Athena" },
    { L"Kensou", 0x176e00 /* to 0x176fc0 */, false, L"indexKOF94Sprites_Kensou" },
    { L"Chin", 0x177180 /* to 0x177340 */, false, L"indexKOF94Sprites_Chin" },
    { L"Kyo", 0x177500 /* to 0x1776c0 */, false, L"indexKOF94Sprites_Kyo" },
    { L"Benimaru", 0x177880 /* to 0x177a40 */, false, L"indexKOF94Sprites_Benimaru" },
    { L"Daimon", 0x177c00 /* to 0x177dc0 */, false, L"indexKOF94Sprites_Daimon" },
    { L"Heavy D!", 0x177f80 /* to 0x178140 */, false, L"indexKOF94Sprites_HeavyD" },
    { L"Lucky", 0x178300 /* to 0x1784c0 */, true, L"indexKOF94Sprites_Lucky" },
    { L"Brian", 0x178680 /* to 0x178840 */, false, L"indexKOF94Sprites_Brian" },
    { L"Kim", 0x178a00 /* to 0x178bc0 */, false, L"indexKOF94Sprites_Kim" },
    { L"Chang", 0x178d80 /* to 0x178f40 */, true, L"indexKOF94Sprites_Chang" },
    { L"Choi", 0x179100 /* to 0x1792c0 */, false, L"indexKOF94Sprites_Choi" },
    { L"Terry", 0x179480 /* to 0x179640 */, false, L"indexKOF94Sprites_Terry" },
    { L"Andy", 0x179800 /* to 0x1799c0 */, false, L"indexKOF94Sprites_Andy" },
    { L"Joe", 0x179b80 /* to 0x179d40 */, false, L"indexKOF94Sprites_Joe" },
    { L"Ryo", 0x179f00 /* to 0x17a0c0 */, false, L"indexKOF94Sprites_Ryo" },
    { L"Robert", 0x17a280 /* to 0x17a440 */, false, L"indexKOF94Sprites_Robert" },
    { L"Takuma", 0x17a600 /* to 0x17a7c0 */, false, L"indexKOF94Sprites_Takuma" },
    { L"Yuri", 0x17a980 /* to 0x17ab40 */, false, L"indexKOF94Sprites_Yuri" },
    { L"Mai", 0x17ad00 /* to 0x17aec0 */, false, L"indexKOF94Sprites_Mai" },
    { L"King", 0x17b080 /* to 0x17b240 */, false, L"indexKOF94Sprites_King" },
    { L"Rugal", 0x17b400 /* to 0x17b5c0 */, true, L"indexKOF94Sprites_Rugal" },
};

void CGame_KOF94_A::DumpPaletteHeaders()
{
    CString strOutput;
    constexpr UINT32 KOF94_PALETTE_LENGTH = 0x20;
    const UINT16 nCountStatusEffects = 14;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF94_A_CharacterEffectPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF94_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        for (UINT16 nCharacterColor = 0; nCharacterColor < 2; nCharacterColor++)
        {
            strOutput.Format(L"const sGame_PaletteDataset KOF94_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, (nCharacterColor == 0) ? L"MAIN" : L"ALT");
            OutputDebugString(strOutput);

            for (UINT16 nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
            {
                UINT32 nCurrentOffset = KOF94_A_CharacterEffectPalettes[nCharIndex].nROMOffset + (nStatusIndex * KOF94_PALETTE_LENGTH) + (nCharacterColor * 0x1c0);
                UINT32 nTerminalOffset = nCurrentOffset + KOF94_PALETTE_LENGTH;
                LPCWSTR pszCurrentEffectName = nullptr;
                int nCurrentImageIndex = 0;
                bool fIsPairable = false;

                switch (nStatusIndex)
                {
                case 0:
                    pszCurrentEffectName = KOF94_A_CharacterEffectPalettes[nCharIndex].pszCharacterName;
                    fIsPairable = KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 1:
                    pszCurrentEffectName = L"Extra 1";
                    if (KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 2:
                    pszCurrentEffectName = L"Electric Palette";
                    fIsPairable = KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 3:
                    if (KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"Electric Palette Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 2";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 4:
                    // This is 4x length
                    pszCurrentEffectName = L"Win Portrait";
                    nTerminalOffset += (3 * KOF94_PALETTE_LENGTH);
                    nCurrentImageIndex = 0x30;
                    break;
                case 5:
                case 6:
                case 7:
                    continue;
                case 8:
                    pszCurrentEffectName = L"Lifebar Portrait";
                    nCurrentImageIndex = 0x20;
                    break;
                case 9:
                    pszCurrentEffectName = L"Lifebar Portrait Defeated/Grayed";
                    nCurrentImageIndex = 0x20;
                    break;
                case 10:
                    pszCurrentEffectName = L"Darker Palette";
                    fIsPairable = KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 11:
                    if (KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"Darker Palette Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 3";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 12:
                    pszCurrentEffectName = L"MAX Flash";
                    fIsPairable = KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                default:
                    DebugBreak();
                case 13:
                    if (KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"MAX Flash Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 4";
                        nCurrentImageIndex = -1;
                    }
                    break;
                };

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x", pszCurrentEffectName, nCurrentOffset, nTerminalOffset);
                OutputDebugString(strOutput);

                if (KOF94_A_CharacterEffectPalettes[nCharIndex].pszImageSet && (nCurrentImageIndex != -1))
                {
                    strOutput.Format(L", %s, 0x%02x", KOF94_A_CharacterEffectPalettes[nCharIndex].pszImageSet, nCurrentImageIndex);
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

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF94_A_CharacterEffectPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF94_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF94_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < 2; nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_NEOGEO[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF94_A_%s_%s_PALETTES, ARRAYSIZE(KOF94_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_2_NEOGEO[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }
}


UINT16 CGame_KOF94_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(KOF94_A_UNITS, rgExtraCountAll, KOF94_A_NUMUNIT, KOF94_A_EXTRALOC, nUnitId, KOF94_A_EXTRA_CUSTOM);
}

UINT16 CGame_KOF94_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(KOF94_A_UNITS, rgExtraCountAll, KOF94_A_NUMUNIT, KOF94_A_EXTRALOC, nUnitId, nCollectionId, KOF94_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOF94_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(KOF94_A_UNITS, KOF94_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_KOF94_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(KOF94_A_UNITS, rgExtraCountAll, KOF94_A_NUMUNIT, KOF94_A_EXTRALOC, nUnitId, KOF94_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOF94_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(KOF94_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KOF94_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOF94_A_UNITS, rgExtraCountAll, KOF94_A_NUMUNIT, KOF94_A_EXTRALOC, nUnitId, nPaletteId, KOF94_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOF94_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(KOF94_A_UNITS, rgExtraCountAll, KOF94_A_NUMUNIT, KOF94_A_EXTRALOC, nUnitId, nPaletteId, KOF94_A_EXTRA_CUSTOM);
}

void CGame_KOF94_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KOF94_A_EXTRALOC)
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
    else // KOF94_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF94(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF94_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(KOF94_A_UNITS, rgExtraCountAll, KOF94_A_NUMUNIT, KOF94_A_EXTRALOC, KOF94_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
