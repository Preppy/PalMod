#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SVCPLUSA_A.h"
#include "PalMod.h"
#include "RegProc.h"

#define SVCPLUSA_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SVCPLUSA_A::SVCPLUSA_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SVCPLUSA_A::MainDescTree = nullptr;

int CGame_SVCPLUSA_A::rgExtraCountAll[SVCPLUSA_A_NUMUNIT + 1];
int CGame_SVCPLUSA_A::rgExtraLoc[SVCPLUSA_A_NUMUNIT + 1];

UINT32 CGame_SVCPLUSA_A::m_nTotalPaletteCountForSVCPLUSA = 0;
UINT32 CGame_SVCPLUSA_A::m_nExpectedGameROMSize = 0x400000;  // 4194304 bytes
UINT32 CGame_SVCPLUSA_A::m_nConfirmedROMSize = -1;

#pragma region MAME_svc_decryption

// This section is:
// license:BSD-3-Clause
// copyright-holders:Aaron Giles, Vas Crabb

/// \brief Extract a single bit from an integer
///
/// Extracts a single bit from an integer into the least significant bit
/// position.
///
/// \param [in] x The integer to extract the bit from.
/// \param [in] n The bit to extract, where zero is the least
///   significant bit of the input.
/// \return Zero if the specified bit is unset, or one if it is set.
/// \sa bitswap
template <typename T, typename U> constexpr T BIT(T x, U n) noexcept { return (x >> n) & T(1); }


/// \brief Extract a bit field from an integer
///
/// Extracts and right-aligns a bit field from an integer.
///
/// \param [in] x The integer to extract the bit field from.
/// \param [in] n The least significant bit position of the field to
///   extract, where zero is the least significant bit of the input.
/// \param [in] w The width of the field to extract in bits.
/// \return The field [n..(n+w-1)] from the input.
/// \sa bitswap
template <typename T, typename U, typename V> constexpr T BIT(T x, U n, V w)
{
    return (x >> n) & make_bitmask<T>(w);
}

/// \brief Extract and right-align a single bit field
///
/// This overload is used to terminate a recursive template
/// implementation.  It is functionally equivalent to the BIT
/// function for extracting a single bit.
///
/// \param [in] val The integer to extract the bit from.
/// \param [in] b The bit to extract, where zero is the least
///   significant bit of the input.
/// \return The specified bit of the input extracted to the least
///   significant position.
template <typename T, typename U> constexpr T bitswap(T val, U b) noexcept { return BIT(val, b) << 0U; }


/// \brief Extract bits in arbitrary order
///
/// Extracts bits from an integer.  Specify the bits in the order they
/// should be arranged in the output, from most significant to least
/// significant.  The extracted bits will be packed into a right-aligned
/// field in the output.
///
/// \param [in] val The integer to extract bits from.
/// \param [in] b The first bit to extract from the input
///   extract, where zero is the least significant bit of the input.
///   This bit will appear in the most significant position of the
///   right-aligned output field.
/// \param [in] c The remaining bits to extract, where zero is the
///   least significant bit of the input.
/// \return The extracted bits packed into a right-aligned field.
template <typename T, typename U, typename... V> constexpr T bitswap(T val, U b, V... c) noexcept
{
    return (BIT(val, b) << sizeof...(c)) | bitswap(val, c...);
}


/// \brief Extract bits in arbitrary order with explicit count
///
/// Extracts bits from an integer.  Specify the bits in the order they
/// should be arranged in the output, from most significant to least
/// significant.  The extracted bits will be packed into a right-aligned
/// field in the output.  The number of bits to extract must be supplied
/// as a template argument.
///
/// A compile error will be generated if the number of bit positions
/// supplied does not match the specified number of bits to extract, or
/// if the output type is too small to hold the extracted bits.  This
/// guards against some simple errors.
///
/// \tparam B The number of bits to extract.  Must match the number of
///   bit positions supplied.
/// \param [in] val The integer to extract bits from.
/// \param [in] b Bits to extract, where zero is the least significant
///   bit of the input.  Specify bits in the order they should appear in
///   the output field, from most significant to least significant.
/// \return The extracted bits packed into a right-aligned field.
template <unsigned B, typename T, typename... U> T bitswap(T val, U... b) noexcept
{
    static_assert(sizeof...(b) == B, "wrong number of bits");
    static_assert((sizeof(std::remove_reference_t<T>) * 8) >= B, "return type too small for result");
    return bitswap(val, b...);
}

void sx_decrypt(uint8_t* fixed, uint32_t fixed_size, int value)
{
    int sx_size = fixed_size;
    uint8_t* rom = fixed;

    if (value == 1)
    {
        std::vector<uint8_t> buf(sx_size);
        memcpy(&buf[0], rom, sx_size);

        for (int i = 0; i < sx_size; i += 0x10)
        {
            memcpy(&rom[i], &buf[i + 8], 8);
            memcpy(&rom[i + 8], &buf[i], 8);
        }
    }
    else if (value == 2)
    {
        for (int i = 0; i < sx_size; i++)
            rom[i] = bitswap<8>(rom[i], 7, 6, 0, 4, 3, 2, 1, 5);
    }
}

enum class SVCCryptionChoice
{
    decryption,
    encryption
};

void svcplus_px_crypto(uint8_t* cpurom, uint32_t cpurom_size, SVCCryptionChoice direction)
{
    static const int sec[] = { 0x00, 0x03, 0x02, 0x05, 0x04, 0x01 };
    int size = cpurom_size;
    uint8_t* src = cpurom;
    std::vector<uint8_t> dst(size);

    memcpy(&dst[0], src, size);
    for (int i = 0; i < size / 2; i++)
    {
        int ofst = bitswap<24>((i & 0xfffff), 0x17, 0x16, 0x15, 0x14, 0x13, 0x00, 0x01, 0x02,
            0x0f, 0x0e, 0x0d, 0x0c, 0x0b, 0x0a, 0x09, 0x08,
            0x07, 0x06, 0x05, 0x04, 0x03, 0x10, 0x11, 0x12);
        ofst ^= 0x0f0007;
        ofst += (i & 0xff00000);
        memcpy(&src[i * 0x02], &dst[ofst * 0x02], 0x02);
    }

    memcpy(&dst[0], src, size);
    for (int i = 0; i < 6; i++)
    {
        memcpy(&src[i * 0x100000], &dst[sec[i] * 0x100000], 0x100000);
    }
}

void svcsplus_px_crypto(uint8_t* cpurom, uint32_t cpurom_size, SVCCryptionChoice direction)
{
    static const int sec[] = { 0x06, 0x07, 0x01, 0x02, 0x03, 0x04, 0x05, 0x00 };
    int size = cpurom_size;
    uint8_t* src = cpurom;
    std::vector<uint8_t> dst(size);

    memcpy(&dst[0], src, size);
    for (int i = 0; i < size / 2; i++)
    {
        int ofst = bitswap<16>((i & 0x007fff), 0x0f, 0x00, 0x08, 0x09, 0x0b, 0x0a, 0x0c, 0x0d,
            0x04, 0x03, 0x01, 0x07, 0x06, 0x02, 0x05, 0x0e);

        ofst += (i & 0x078000);
        ofst += sec[(i & 0xf80000) >> 19] << 19;

        if (direction == SVCCryptionChoice::decryption)
        {
            memcpy(&src[i * 2], &dst[ofst * 2], 0x02);
        }
        else
        {
            memcpy(&src[ofst * 2], &dst[i * 2], 0x02);
        }
    }
}

#pragma endregion MAME_svc_decryption

void CGame_SVCPLUSA_A::InitializeStatics()
{
    safe_delete_array(CGame_SVCPLUSA_A::SVCPLUSA_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SVCPLUSA_A::InitDescTree());
}

CGame_SVCPLUSA_A::CGame_SVCPLUSA_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(L"CGame_SVCPLUSA_A::CGame_SVCPLUSA_A: Loading ROM...\n");
    OutputDebugString(strMessage);

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SVCPLUSA_A_NUMUNIT;
    m_nExtraUnit = SVCPLUSA_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1048;
    m_pszExtraFilename = EXTRA_FILENAME_SVCPLUSA_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSVCPLUSA;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x2d97f0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SVCPLUSA_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    nImgUnitAmt = ARRAYSIZE(SVCPLUSA_A_IMG_UNITS);
    m_prgGameImageSet = SVCPLUSA_A_IMG_UNITS;

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

CGame_SVCPLUSA_A::~CGame_SVCPLUSA_A(void)
{
    safe_delete_array(decryptedROM);
    safe_delete_array(CGame_SVCPLUSA_A::SVCPLUSA_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SVCPLUSA_A::GetMainTree()
{
    return &CGame_SVCPLUSA_A::MainDescTree;
}

int CGame_SVCPLUSA_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SVCPLUSA_A_NUMUNIT, nUnitId, SVCPLUSA_A_EXTRA_CUSTOM);
}

int CGame_SVCPLUSA_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SVCPLUSA_A_NUMUNIT, nUnitId, SVCPLUSA_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SVCPLUSA_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SVCPLUSA_A, SVCPLUSA_A_EXTRA, &SVCPLUSA_A_EXTRA_CUSTOM, SVCPLUSA_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SVCPLUSA_A_NUMUNIT + (GetExtraCt(SVCPLUSA_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SVCPLUSA_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSVCPLUSA = _InitDescTree(NewDescTree,
        SVCPLUSA_A_UNITS,
        SVCPLUSA_A_EXTRALOC,
        SVCPLUSA_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SVCPLUSA_A_EXTRA_CUSTOM
    );

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

struct sSVCPLUSA_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nCoreOffset = 0;
    UINT32 nEffectsOffset = 0;
    UINT32 nWinPortraitOffset = 0;
    UINT32 nIntroPortraitOffset = 0;
    LPCWSTR pszImageSet = L"";
    //bool rgIsEffectUsed[11];
};

//NORMY 0x364538 + 24000
//FX    0x388538 + 1F400
//INTRO 0x3a7938 + 2000
//WIN   0x3a9938

sSVCPLUSA_A_PaletteData SVCPLUSA_A_CharacterPalettes[] =
{
    { L"Kyo",            0x364538, 0x388538, 0x3a9938, 0x3a7938, L"indexSVCSprites_Kyo" },
    { L"Iori",           0x365538, 0x388d38, 0x3a99b8, 0x3a79b8, L"indexSVCSprites_Iori" },
    { L"Ryo",            0x366538, 0x389538, 0x3a9a38, 0x3a7a38, L"indexSVCSprites_Ryo" },
    { L"Terry",          0x367538, 0x389d38, 0x3a9ab8, 0x3a7ab8, L"indexSVCSprites_Terry" },
    { L"Mai",            0x368538, 0x38a538, 0x3a9b38, 0x3a7b38, L"indexSVCSprites_Mai" },
    { L"Kasumi",         0x369538, 0x38ad38, 0x3a9bb8, 0x3a7bb8, L"indexSVCSprites_Kasumi" },
    { L"Kim",            0x36a538,        0, 0x3a9c38, 0x3a7c38, L"indexSVCSprites_Kim" },
    { L"Mr. Karate",     0x36b538, 0x38bd38, 0x3a9cb8, 0x3a7cb8, L"indexSVCSprites_MrKarate" },
    { L"Choi",           0x36c538, 0x38c538, 0x3a9d38, 0x3a7d38, L"indexSVCSprites_Choi" },
    { L"Earthquake",     0x36d538, 0x38cd38, 0x3a9db8, 0x3a7db8, L"indexSVCSprites_Earthquake" },
    { L"Genjuro",        0x36e538, 0x38d538, 0x3a9e38, 0x3a7e38, L"indexSVCSprites_Genjuro" },
    { L"Shiki",          0x36f538, 0x38dd38, 0x3a9eb8, 0x3a7eb8, L"indexSVCSprites_Shiki" },
    { L"Geese Howard",   0x370538, 0x38e538, 0x3a9f38, 0x3a7f38, L"indexSVCSprites_GeeseHoward" },
    { L"Mars People",    0x371538, 0x38ed38, 0x3a9fb8, 0x3a7fb8, L"indexSVCSprites_MarsPeople" },
    { L"Goenitz",        0x372538, 0x38f538, 0x3aa038, 0x3a8038, L"indexSVCSprites_Goenitz" },
    { L"Princess Athena", 0x373538, 0x38fd38, 0x3aa0b8, 0x3a80b8, L"indexSVCSprites_PrincessAthena" },

    { L"Ryu",            0x374538, 0x390538, 0x3aa138, 0x3a8138, L"indexSVCSprites_Ryu" },
    { L"Ken",            0x375538, 0x390d38, 0x3aa1b8, 0x3a81b8, L"indexSVCSprites_Ken" },
    { L"Chun-Li",        0x376538, 0x391538, 0x3aa238, 0x3a8238, L"indexSVCSprites_ChunLi" },
    { L"Guile",          0x377538, 0x391d38, 0x3aa2b8, 0x3a82b8, L"indexSVCSprites_Guile" },
    { L"Dhalsim",        0x378538, 0x392538, 0x3aa338, 0x3a8338, L"indexSVCSprites_Dhalsim" },
    { L"Boxer",          0x379538, 0x392d38, 0x3aa3b8, 0x3a83b8, L"indexSVCSprites_Boxer" },
    { L"Claw",           0x37a538, 0x393538, 0x3aa438, 0x3a8438, L"indexSVCSprites_Claw" },
    { L"Sagat",          0x37b538, 0x393d38, 0x3aa4b8, 0x3a84b8, L"indexSVCSprites_Sagat" },
    { L"Dictator",       0x37c538, 0x394538, 0x3aa538, 0x3a8538, L"indexSVCSprites_Dictator" },
    { L"Akuma",          0x37d538, 0x394d38, 0x3aa5b8, 0x3a85b8, L"indexSVCSprites_Akuma" },
    { L"Hugo",           0x37e538, 0x395538, 0x3aa638, 0x3a8638, L"indexSVCSprites_Hugo" },
        { L"Poison",            0,        0, 0x3aab38, 0x3a8c38, L"indexSVCSprites_Poison" },
    { L"Tessa",          0x37f538, 0x395d38, 0x3aa6b8, 0x3a86b8, L"indexSVCSprites_Tessa" },
    { L"Zero",           0x380538, 0x396538, 0x3aa738, 0x3a8738, L"indexSVCSprites_Zero" },
        { L"Ciel",              0,        0,        0, 0x3a8bb8, L"indexSVCSprites_Ciel" },
    { L"Demitri",        0x381538, 0x396d38, 0x3aa7b8, 0x3a87b8, L"indexSVCSprites_Demitri" },
    { L"Dan",            0x382538, 0x397538, 0x3aa838, 0x3a8838, L"indexSVCSprites_Dan" },
    { L"Red Arremer",    0x383538, 0x397d38, 0x3aa8b8, 0x3a88b8, L"indexSVCSprites_RedArremer" },

    { L"Orochi Iori",    0x384538, 0x398538, 0x3aa938, 0x3a8938, L"indexSVCSprites_OrochiIori" },
    { L"Serious Mr. Karate", 0x385538, 0x398d38, 0x3aa9b8, 0x3a89b8, L"indexSVCSprites_SeriousMrKarate" },
    { L"Violent Ken",    0x386538, 0x399538, 0x3aaa38, 0x3a8a38, L"indexSVCSprites_ViolentKen" },
    { L"Shin Akuma",     0x387538, 0x399d38, 0x3aaab8, 0x3a8ab8, L"indexSVCSprites_ShinAkuma" },
};

const LPCWSTR SVC_CharacterEffectNames[] =
{
    L"Fire Effect 1",
    L"Fire Effect 2",
    L"Electric Shock Effect",
    L"Red Arremer Transformation",
    L"Athena Transformation",
    L"Soul Palette",
    L"Midnight Bliss",
};

void CGame_SVCPLUSA_A::DumpPaletteHeaders()
{
    CString strOutput;
    const UINT16 nColorOptionsPerCharacter = 2;
    constexpr UINT32 SVCPLUSA_PALETTE_LENGTH = 0x20;
    constexpr UINT16 c_nEffectsPerCharacter = 7;
    constexpr UINT32 c_nSVCDistanceBetweenColorss = 0x200;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SVCPLUSA_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SVCPLUSA_A_CharacterPalettes[nCharIndex].pszCharacterName);
        UINT32 nCurrentOffset = 0;

        nCurrentOffset = SVCPLUSA_A_CharacterPalettes[nCharIndex].nCoreOffset;

        if (nCurrentOffset != 0)
        {
            // First handle the core sprite and moves.
            for (UINT16 iButtonIndex = 0; iButtonIndex < ARRAYSIZE(DEF_BUTTONLABEL_2_PK); iButtonIndex++)
            {
                if (iButtonIndex != 0)
                {
                    nCurrentOffset = SVCPLUSA_A_CharacterPalettes[nCharIndex].nCoreOffset + (iButtonIndex * 0x200);
                }

                WCHAR szCodeButtonLabel[MAX_DESCRIPTION_LENGTH];
                StrRemoveNonASCII(szCodeButtonLabel, ARRAYSIZE(szCodeButtonLabel), DEF_BUTTONLABEL_2_PK[iButtonIndex]);

                strOutput.Format(L"const sGame_PaletteDataset SVCPLUSA_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, szCodeButtonLabel);
                OutputDebugString(strOutput);

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s },\r\n", SVCPLUSA_A_CharacterPalettes[nCharIndex].pszCharacterName, nCurrentOffset, nCurrentOffset + SVCPLUSA_PALETTE_LENGTH, SVCPLUSA_A_CharacterPalettes[nCharIndex].pszImageSet);
                OutputDebugString(strOutput);

                nCurrentOffset += SVCPLUSA_PALETTE_LENGTH;

                for (UINT16 nEffectIndex = 0; nEffectIndex < c_nEffectsPerCharacter; nEffectIndex++)
                {
                    strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s },\r\n", SVC_CharacterEffectNames[nEffectIndex], nCurrentOffset, nCurrentOffset + SVCPLUSA_PALETTE_LENGTH, SVCPLUSA_A_CharacterPalettes[nCharIndex].pszImageSet);
                    OutputDebugString(strOutput);

                    nCurrentOffset += SVCPLUSA_PALETTE_LENGTH;
                }

                OutputDebugString(L"};\r\n\r\n");
            }
        } 

        nCurrentOffset = SVCPLUSA_A_CharacterPalettes[nCharIndex].nEffectsOffset;

        if (nCurrentOffset != 0)
        {
            constexpr UINT16 c_nExtraEffectsPerCharacter = 8;
            strOutput.Format(L"const sGame_PaletteDataset SVCPLUSA_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, L"EFFECTS");
            OutputDebugString(strOutput);

            for (UINT16 nEffectIndex = 0; nEffectIndex < c_nExtraEffectsPerCharacter; nEffectIndex++)
            {
                strOutput.Format(L"    { L\"Effect %u\", 0x%x, 0x%x },\r\n", nEffectIndex, nCurrentOffset, nCurrentOffset + SVCPLUSA_PALETTE_LENGTH);
                OutputDebugString(strOutput);

                nCurrentOffset += SVCPLUSA_PALETTE_LENGTH;
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        nCurrentOffset = SVCPLUSA_A_CharacterPalettes[nCharIndex].nWinPortraitOffset;

        if (nCurrentOffset != 0)
        {
            constexpr auto c_nWinPortraitPaletteLength = 0x40;
            constexpr auto c_nWinPortraitImageOffset = 0x21;

            strOutput.Format(L"const sGame_PaletteDataset SVCPLUSA_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, L"WIN_PORTRAITS");
            OutputDebugString(strOutput);

            for (UINT16 iButtonIndex = 0; iButtonIndex < ARRAYSIZE(DEF_BUTTONLABEL_2_PK); iButtonIndex++)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SVCPLUSA_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_2_PK[iButtonIndex], nCurrentOffset, nCurrentOffset + c_nWinPortraitPaletteLength,
                                                                                SVCPLUSA_A_CharacterPalettes[nCharIndex].pszImageSet, c_nWinPortraitImageOffset);
                OutputDebugString(strOutput);

                nCurrentOffset += c_nWinPortraitPaletteLength;
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        nCurrentOffset = SVCPLUSA_A_CharacterPalettes[nCharIndex].nIntroPortraitOffset;

        if (nCurrentOffset != 0)
        {
            constexpr auto c_nIntroPortraitPaletteLength = 0x40;
            constexpr auto c_nIntroPortraitImageOffset = 0x20;

            strOutput.Format(L"const sGame_PaletteDataset SVCPLUSA_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, L"INTRO_PORTRAITS");
            OutputDebugString(strOutput);

            for (UINT16 iButtonIndex = 0; iButtonIndex < ARRAYSIZE(DEF_BUTTONLABEL_2_PK); iButtonIndex++)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SVCPLUSA_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_2_PK[iButtonIndex], nCurrentOffset, nCurrentOffset + c_nIntroPortraitPaletteLength,
                                                                                SVCPLUSA_A_CharacterPalettes[nCharIndex].pszImageSet, c_nIntroPortraitImageOffset);
                OutputDebugString(strOutput);

                nCurrentOffset += c_nIntroPortraitPaletteLength;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // All the collections...
    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SVCPLUSA_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SVCPLUSA_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode SVCPLUSA_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        if (SVCPLUSA_A_CharacterPalettes[nCharIndex].nCoreOffset != 0)
        {
            for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
            {
                WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
                StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_PK[nColorIndex]);

                strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_%s_%s_PALETTES, ARRAYSIZE(SVCPLUSA_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_2_PK[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
                OutputDebugString(strOutput);
            }
        }

        if (SVCPLUSA_A_CharacterPalettes[nCharIndex].nEffectsOffset != 0)
        {
            strOutput.Format(L"    { L\"Effects\", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_%s_%s_PALETTES, ARRAYSIZE(SVCPLUSA_A_%s_%s_PALETTES) },\r\n", szCodeDesc, L"EFFECTS", szCodeDesc, L"EFFECTS");
            OutputDebugString(strOutput);
        }

        if (SVCPLUSA_A_CharacterPalettes[nCharIndex].nWinPortraitOffset != 0)
        {
            strOutput.Format(L"    { L\"Win Portraits\", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_%s_%s_PALETTES, ARRAYSIZE(SVCPLUSA_A_%s_%s_PALETTES) },\r\n", szCodeDesc, L"WIN_PORTRAITS", szCodeDesc, L"WIN_PORTRAITS");
            OutputDebugString(strOutput);
        }

        if (SVCPLUSA_A_CharacterPalettes[nCharIndex].nIntroPortraitOffset != 0)
        {
            strOutput.Format(L"    { L\"Intro Portraits\", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_%s_%s_PALETTES, ARRAYSIZE(SVCPLUSA_A_%s_%s_PALETTES) },\r\n", szCodeDesc, L"INTRO_PORTRAITS", szCodeDesc, L"INTRO_PORTRAITS");
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    // And now the units...
    OutputDebugString(L"const sDescTreeNode SVCPLUSA_A_UNITS[SVCPLUSA_A_NUMUNIT] =\n{\n");

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SVCPLUSA_A_CharacterPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SVCPLUSA_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_%s_COLLECTION, ARRAYSIZE(SVCPLUSA_A_%s_COLLECTION) },\r\n", SVCPLUSA_A_CharacterPalettes[nCharIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    OutputDebugString(L"};\r\n\r\n");
}

sFileRule CGame_SVCPLUSA_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"svc-p2pl.bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SVCPLUSA_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(SVCPLUSA_A_UNITS, rgExtraCountAll, SVCPLUSA_A_NUMUNIT, SVCPLUSA_A_EXTRALOC, nUnitId, SVCPLUSA_A_EXTRA_CUSTOM);
}

UINT16 CGame_SVCPLUSA_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(SVCPLUSA_A_UNITS, rgExtraCountAll, SVCPLUSA_A_NUMUNIT, SVCPLUSA_A_EXTRALOC, nUnitId, nCollectionId, SVCPLUSA_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SVCPLUSA_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(SVCPLUSA_A_UNITS, SVCPLUSA_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_SVCPLUSA_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(SVCPLUSA_A_UNITS, rgExtraCountAll, SVCPLUSA_A_NUMUNIT, SVCPLUSA_A_EXTRALOC, nUnitId, SVCPLUSA_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SVCPLUSA_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(SVCPLUSA_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_SVCPLUSA_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SVCPLUSA_A_UNITS, rgExtraCountAll, SVCPLUSA_A_NUMUNIT, SVCPLUSA_A_EXTRALOC, nUnitId, nPaletteId, SVCPLUSA_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SVCPLUSA_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(SVCPLUSA_A_UNITS, rgExtraCountAll, SVCPLUSA_A_NUMUNIT, SVCPLUSA_A_EXTRALOC, nUnitId, nPaletteId, SVCPLUSA_A_EXTRA_CUSTOM);
}

void CGame_SVCPLUSA_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            // shift for different roms as needed
            m_nCurrentPaletteROMLocation += m_loadedROMRevision.nOffsetForReads;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // m_nExtraUnit
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSVCPLUSA(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

void CGame_SVCPLUSA_A::UpdateGameName(CFile* LoadedFile)
{
    if (_wcsicmp(LoadedFile->GetFileName(), L"svc-p2sp.bin") == 0) // svcSplus: encrypted
    {
        m_loadedROMRevision.pszRevisionName = L"SNK vs. CAPCOM SVC CHAOS Super Plus (bootleg)";
        m_loadedROMRevision.rev = eSVCRevisionName::SVCSPlus;
        m_loadedROMRevision.fileList = { L"svc-p1sp.bin", L"svc-p2sp.bin" };
        m_loadedROMRevision.nOffsetForReads = 0x200000;
        m_loadedROMRevision.allowWrites = true;

    }
    else if (_wcsicmp(LoadedFile->GetFileName(), L"svc-p2p.bin") == 0) // svcplus: encrypted: we can read but not write
    {
        m_loadedROMRevision.pszRevisionName = L"SNK vs. CAPCOM SVC CHAOS Plus (bootleg set 1)";
        m_loadedROMRevision.rev = eSVCRevisionName::SVCPlus;
        m_loadedROMRevision.fileList = { L"svc-p1p.bin", L"svc-p2p.bin", L"svc-p3p.bin" };
        m_loadedROMRevision.nOffsetForReads = 0x100000;
        m_loadedROMRevision.allowWrites = false;
    }
    else if (_wcsicmp(LoadedFile->GetFileName(), L"svc-p2pl.bin") == 0) // svcplusa: no encryption: we can read and write this
    {
        m_loadedROMRevision.pszRevisionName = L"SNK vs. CAPCOM SVC CHAOS Plus (bootleg set 2)";
        m_loadedROMRevision.rev = eSVCRevisionName::SVCPlusA;
        m_loadedROMRevision.fileList = { L"svc-p2pl.bin" };
        m_loadedROMRevision.nOffsetForReads = 0;
        m_loadedROMRevision.allowWrites = true;
    }
    else // if (_wcsicmp(LoadedFile->GetFileName(), L"269-p2.p2") == 0) // svc: we cannot read nor write this
    {
        m_loadedROMRevision.pszRevisionName = L"SVC (Neo-Geo)";
        m_loadedROMRevision.rev = eSVCRevisionName::SVC;
        m_loadedROMRevision.fileList = { L"269-p1.p1", L"269-p2.p2" };
        m_loadedROMRevision.nOffsetForReads = 0;
        m_loadedROMRevision.allowWrites = false;
    }
}

BOOL CGame_SVCPLUSA_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    BOOL fSuccess = TRUE;

    UpdateGameName(LoadedFile);

    safe_delete_array(decryptedROM);

    switch (m_loadedROMRevision.rev)
    {
    case eSVCRevisionName::SVCSPlus:
        {
            decryptedROM = new uint8_t[m_nConfirmedROMSize * 2];
            ZeroMemory(decryptedROM, m_nConfirmedROMSize * 2);

            CString strPeerFileName;
            CFile pPeerFile;
            strPeerFileName.Format(L"%s\\..\\%s", LoadedFile->GetFilePath().GetString(), L"svc-p1sp.bin");

            fSuccess = pPeerFile.Open(strPeerFileName, CFile::modeRead | CFile::typeBinary);

            if (fSuccess)
            {
                CString strMsg;

                if (strMsg.LoadString(IDS_SVC_WARNDECRYPT) &&
                    (MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONWARNING | MB_YESNO) == IDYES))
                {
                    pPeerFile.Read(decryptedROM, m_nConfirmedROMSize);
                    LoadedFile->Read(decryptedROM + m_nConfirmedROMSize, m_nConfirmedROMSize);

                    pPeerFile.Abort();

                    {
                        CWaitCursor wait;
                        GetHost()->GetPalModDlg()->SetStatusText(IDS_DECRYPTING_START);
                        svcsplus_px_crypto(decryptedROM, m_nConfirmedROMSize * 2, SVCCryptionChoice::decryption);
                        GetHost()->GetPalModDlg()->SetStatusText(IDS_DECRYPTING_DONE);
                    }

#ifdef dump_decrypted_file
                    CFile pOutput;
                    CString strFN;
                    strFN.Format(L"%s\\..\\%s", GetLoadDir(), L"SVCPlusA-decrypt.bin");

                    if (pOutput.Open(strFN, CFile::modeWrite | CFile::typeBinary | CFile::modeCreate))
                    {
                        pOutput.Write(decryptedROM, m_nConfirmedROMSize * 2);
                        pOutput.Abort();
                    }
#endif

                    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
                    {
                        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

                        // Use a sorted layout
                        rgUnitRedir[nUnitCtr] = SVCPLUSA_A_UNITSORT[nUnitCtr];

                        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                            m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];
                            memcpy(m_pppDataBuffer[nUnitCtr][nPalCtr], &decryptedROM[m_nCurrentPaletteROMLocation], m_nCurrentPaletteSizeInColors * 2);
                        }
                    }
                }
                else
                {
                    fSuccess = FALSE;
                }
            }
        }
        break;
    case eSVCRevisionName::SVCPlus: // svc-p2p.bin
        {
            const UINT32 nROMSetSize = 0x600000;
            decryptedROM = new uint8_t[nROMSetSize];
            ZeroMemory(decryptedROM, nROMSetSize);

            LoadedFile->Abort();

            CString strMsg;

            if (strMsg.LoadString(IDS_SVC_CRYPTO_RO) &&
                (MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONSTOP | MB_YESNO) == IDYES))
            {
                UINT32 nCurrentROMOffset = 0;
                for (LPCWSTR romName : m_loadedROMRevision.fileList)
                {
                    CString strPeerFileName;
                    CFile pPeerFile;
                    strPeerFileName.Format(L"%s\\..\\%s", GetLoadDir(), romName);
                    if (pPeerFile.Open(strPeerFileName, CFile::modeRead | CFile::typeBinary))
                    {
                        pPeerFile.Read(&decryptedROM[nCurrentROMOffset], 0x200000);
                        pPeerFile.Abort();
                    }
                    nCurrentROMOffset += 0x200000;
                }

                {
                    CWaitCursor wait;
                    GetHost()->GetPalModDlg()->SetStatusText(IDS_DECRYPTING_START);
                    svcplus_px_crypto(decryptedROM, nROMSetSize, SVCCryptionChoice::decryption);
                    GetHost()->GetPalModDlg()->SetStatusText(IDS_DECRYPTING_DONE);
                }

#ifdef save_decrypted_output
                CFile pOutput;
                CString strFN;
                strFN.Format(L"%s\\..\\%s", GetLoadDir(), L"SVCPlus-decrypt.bin");

                if (pOutput.Open(strFN, CFile::modeWrite | CFile::typeBinary | CFile::modeCreate))
                {
                    pOutput.Write(decryptedROM, nROMSetSize);
                    pOutput.Abort();
                }
#endif

                for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
                {
                    UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                    m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

                    // Use a sorted layout
                    rgUnitRedir[nUnitCtr] = SVCPLUSA_A_UNITSORT[nUnitCtr];

                    for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                    {
                        LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                        m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];
                        memcpy(m_pppDataBuffer[nUnitCtr][nPalCtr], &decryptedROM[m_nCurrentPaletteROMLocation], m_nCurrentPaletteSizeInColors * 2);
                    }
                }
            }
            else
            {
                fSuccess = FALSE;
            }
        }
        break;
    case eSVCRevisionName::SVC:
        {
            CString strMsg;
            
            if (strMsg.LoadString(IDS_SVC_UNKNOWNCRYPTO))
            {
                MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
            }
            __fallthrough;
        }
    default:
    case eSVCRevisionName::SVCPlusA:
        {
            // SVCPlusA is already decrypted
            for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

                // Use a sorted layout
                rgUnitRedir[nUnitCtr] = SVCPLUSA_A_UNITSORT[nUnitCtr];

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                    m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];

                    LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
                }
            }
        }
        break;
    };

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    if (fSuccess)
    {
        CheckForErrorsInTables();
    }

    return fSuccess;
}

BOOL CGame_SVCPLUSA_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    if (NodeGet->uUnitId != SVCPLUSA_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode)
            {
                if ((_wcsicmp(pCurrentNode->szDesc, L"Punch") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"Kick") == 0))
                {
                    nSrcAmt = 2;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                {
                    const UINT16 nStageCount = _GetNodeSizeFromPaletteId(SVCPLUSA_A_UNITS, rgExtraCountAll, SVCPLUSA_A_NUMUNIT, SVCPLUSA_A_EXTRALOC, NodeGet->uUnitId, NodeGet->uPalId, SVCPLUSA_A_EXTRA_CUSTOM);

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
                else if (NodeGet->uUnitId == indexSVC_A_GoddessAthena)
                {
                    fShouldUseAlternateLoadLogic = true;

                    int nPaletteTwoDelta = 1;
                    int nPaletteThreeDelta = 2;
                    int nPaletteFourDelta = 5;

                    const sGame_PaletteDataset* paletteDataSetOne = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
                    const sGame_PaletteDataset* paletteDataSetTwo = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteTwoDelta);
                    const sGame_PaletteDataset* paletteDataSetThree = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteThreeDelta);
                    const sGame_PaletteDataset* paletteDataSetFour = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPaletteFourDelta);

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSetOne->indexImgToUse, paletteDataSetOne->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetTwo->indexImgToUse, paletteDataSetTwo->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetThree->indexImgToUse, paletteDataSetThree->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetFour->indexImgToUse, paletteDataSetFour->indexOffsetToUse
                                    )))));


                    //Set each palette
                    sDescNode* JoinedNode[4] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteTwoDelta, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteThreeDelta, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteFourDelta, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);
                    CreateDefPal(JoinedNode[3], 3);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPaletteTwoDelta, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPaletteThreeDelta, nSrcAmt, nNodeIncrement);
                    SetSourcePal(3, NodeGet->uUnitId, nSrcStart + nPaletteFourDelta, nSrcAmt, nNodeIncrement);
                }
                else if (NodeGet->uUnitId == indexSVC_A_Zero)
                {
                    UINT16 nLocationOfSecondPalette = 1;
                    UINT16 nSecondPaletteWithinNode = 0;

                    // Zero is interesting and has two different palettes joins with shared palettes.

                    if (nSrcStart == 0) // primary sprite, joined with shared Effect 7 palette
                    {
                        nLocationOfSecondPalette = 23;
                        nSecondPaletteWithinNode = 7;
                    }
                    else if (nSrcStart == 2)
                    {
                        nLocationOfSecondPalette = 22;
                        nSecondPaletteWithinNode = 6;
                    }
                    
                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, nLocationOfSecondPalette);
                    if (paletteDataSetToJoin)
                    {
                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse)
                            )
                        );

                        //Set each palette
                        sDescNode* JoinedNode[2] = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, 2, nSecondPaletteWithinNode, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);

                        // Our logic doesn't support multisprite export for partially shared palettes
                        nSrcAmt = 1;

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nLocationOfSecondPalette, nSrcAmt, nNodeIncrement);
                    }
                }
                else if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 4)
                {
                    const INT8 nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    const INT8 nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                    const INT8 nPeerPaletteDistance3 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);
                    const sGame_PaletteDataset* paletteDataSetToJoin3 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance3);
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin3->indexImgToUse, paletteDataSetToJoin3->indexOffsetToUse)
                                )))
                    );

                    //Set each palette
                    sDescNode* JoinedNode[] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance3, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);
                    CreateDefPal(JoinedNode[3], 3);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                    SetSourcePal(3, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance3, nSrcAmt, nNodeIncrement);
                }
                else
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

BOOL CGame_SVCPLUSA_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    if (m_loadedROMRevision.allowWrites)
    {
        switch (m_loadedROMRevision.rev)
        {
        case eSVCRevisionName::SVCSPlus:
        {
            CString strPeerFileName;
            CFile pPeerFile;
            strPeerFileName.Format(L"%s\\..\\%s", SaveFile->GetFilePath().GetString(), L"svc-p1sp.bin");

            BOOL fSuccess = pPeerFile.Open(strPeerFileName, CFile::modeWrite | CFile::typeBinary);

            if (fSuccess)
            {
                CString strMsg;
                
                if (strMsg.LoadString(IDS_SVC_WARNENCRYPT) &&
                    (MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONSTOP | MB_YESNO) == IDYES))
                {
                    // Save the palette changes
                    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
                    {
                        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                            for (UINT16 nPaletteIndex = 0; nPaletteIndex < m_nCurrentPaletteSizeInColors; nPaletteIndex++)
                            {
                                const UINT16 nMaxSafeColorsToWrite = (UINT16)createPalOptions.eWriteOutputOptions;

                                if ((nPaletteIndex % nMaxSafeColorsToWrite) != 0) // skip the transparency counters
                                {
                                    decryptedROM[m_nCurrentPaletteROMLocation + (nPaletteIndex * 2)] = m_pppDataBuffer[nUnitCtr][nPalCtr][nPaletteIndex] & 0xFF;
                                    decryptedROM[m_nCurrentPaletteROMLocation + (nPaletteIndex * 2) + 1] = m_pppDataBuffer[nUnitCtr][nPalCtr][nPaletteIndex] >> 8;
                                }
                            }
                        }
                    }

                    {
                        CWaitCursor wait;
                        GetHost()->GetPalModDlg()->SetStatusText(IDS_ENCRYPTING_START);
                        svcsplus_px_crypto(decryptedROM, m_nConfirmedROMSize * 2, SVCCryptionChoice::encryption);
                        GetHost()->GetPalModDlg()->SetStatusText(IDS_ENCRYPTING_DONE);
                    }

                    pPeerFile.Write(decryptedROM, m_nConfirmedROMSize);
                    SaveFile->Write(decryptedROM + m_nConfirmedROMSize, m_nConfirmedROMSize);

                    pPeerFile.Abort();
                }
            }

            return fSuccess;
        }
#ifdef NEED_TO_FIX_SVCPLUS_REENCRYPTION_FIRST
        case eSVCRevisionName::SVCPlus:
        {
            CString strPeerFileName;
            CFile pPeerFile1, pPeerFile2;

            strPeerFileName.Format(L"%s\\..\\%s", SaveFile->GetFilePath().GetString(), L"svc-p1p.bin");

            BOOL fSuccess = pPeerFile1.Open(strPeerFileName, CFile::modeWrite | CFile::typeBinary);

            strPeerFileName.Format(L"%s\\..\\%s", SaveFile->GetFilePath().GetString(), L"svc-p3p.bin");

            fSuccess = fSuccess && pPeerFile2.Open(strPeerFileName, CFile::modeWrite | CFile::typeBinary);

            if (fSuccess)
            {
                CString strMsg;

                if (strMsg.LoadString(IDS_SVC_WARNENCRYPT) &&
                    (MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONWARNING | MB_YESNO) == IDYES))
                {
                    // Save the palette changes
                    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
                    {
                        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                            for (UINT16 nPaletteIndex = 0; nPaletteIndex < m_nCurrentPaletteSizeInColors; nPaletteIndex++)
                            {
                                decryptedROM[m_nCurrentPaletteROMLocation + (nPaletteIndex * 2)] = m_pppDataBuffer[nUnitCtr][nPalCtr][nPaletteIndex] & 0xFF;
                                decryptedROM[m_nCurrentPaletteROMLocation + (nPaletteIndex * 2) + 1] = m_pppDataBuffer[nUnitCtr][nPalCtr][nPaletteIndex] >> 8;
                            }
                        }
                    }

                    {
                        CWaitCursor wait;
                        GetHost()->GetPalModDlg()->SetStatusText(IDS_ENCRYPTING_START);
                        svcplus_px_crypto(decryptedROM, 0x200000 * 3, SVCCryptionChoice::encryption);
                        GetHost()->GetPalModDlg()->SetStatusText(IDS_ENCRYPTING_DONE);
                    }

                    pPeerFile1.Write(decryptedROM, 0x200000);
                    SaveFile->Write(decryptedROM + 0x200000, 0x200000);
                    pPeerFile2.Write(decryptedROM + (0x200000 * 2), 0x200000);

                    pPeerFile1.Abort();
                    pPeerFile2.Abort();
                }
            }

            return fSuccess;
        }
#endif
        default:
        case eSVCRevisionName::SVCPlusA:
        {
            return CGameClass::SaveFile(SaveFile, nUnitId);
        }
        }
    }
    else
    {
        CString strMsg;
        strMsg = (L"Patching is currently disabled: PalMod can only read this encrypted ROM.  PalMod cannot write to this encrypted ROM at this time.");
        MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONSTOP);
        return FALSE;
    }
}
