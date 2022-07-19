#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SFA2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SFA2_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07_REV1 = nullptr;
stExtraDef* CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07_REV2 = nullptr;
stExtraDef* CGame_SFA2_A::SFZ2A_A_EXTRA_CUSTOM_07 = nullptr;
stExtraDef* CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08_REV1 = nullptr;
stExtraDef* CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08_REV2 = nullptr;
stExtraDef* CGame_SFA2_A::SFZ2A_A_EXTRA_CUSTOM_08 = nullptr;
stExtraDef* CGame_SFA2_A::SFA2_HACK_EXTRA_CUSTOM_09 = nullptr;

CDescTree CGame_SFA2_A::MainDescTree_07_Rev1 = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_07_Rev2 = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_07_SFZ2A = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_08_Rev1 = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_08_Rev2 = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_08_SFZ2A = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_09_Hack = nullptr;

uint32_t CGame_SFA2_A::rgExtraCountAll_07_Rev1[SFA2_A_NUM_IND_07_REV1 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraCountAll_07_Rev2[SFA2_A_NUM_IND_07_REV2 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraCountAll_07_SFZ2A[SFZ2A_A_NUM_IND_07 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraCountAll_08_Rev1[SFA2_A_NUM_IND_08_REV1 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraCountAll_08_Rev2[SFA2_A_NUM_IND_08_REV2 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraCountAll_08_SFZ2A[SFZ2A_A_NUM_IND_08 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraCountAll_09_SFA2_Hack[SFA2_HACK_NUM_09 + 1] = { (uint32_t)-1 };

uint32_t CGame_SFA2_A::rgExtraLoc_07_Rev1[SFA2_A_NUM_IND_07_REV1 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraLoc_07_Rev2[SFA2_A_NUM_IND_07_REV2 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraLoc_07_SFZ2A[SFZ2A_A_NUM_IND_07 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraLoc_08_Rev1[SFA2_A_NUM_IND_08_REV1 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraLoc_08_Rev2[SFA2_A_NUM_IND_08_REV2 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraLoc_08_SFZ2A[SFZ2A_A_NUM_IND_08 + 1] = { (uint32_t)-1 };
uint32_t CGame_SFA2_A::rgExtraLoc_09_SFA2_Hack[SFA2_HACK_NUM_09 + 1] = { (uint32_t)-1 };

uint32_t CGame_SFA2_A::m_nSFA2SelectedRom = SFA2_A_GAMEKEY_07;
SFA2_SupportedROMRevision CGame_SFA2_A::m_currentSFA2ROMRevision = SFA2_SupportedROMRevision::SFA2_960229;
uint32_t CGame_SFA2_A::m_nTotalPaletteCountForSFA2_07_Rev1 = 0;
uint32_t CGame_SFA2_A::m_nTotalPaletteCountForSFA2_07_Rev2 = 0;
uint32_t CGame_SFA2_A::m_nTotalPaletteCountForSFZ2A_07 = 0;
uint32_t CGame_SFA2_A::m_nTotalPaletteCountForSFA2_08_Rev1 = 0;
uint32_t CGame_SFA2_A::m_nTotalPaletteCountForSFA2_08_Rev2 = 0;
uint32_t CGame_SFA2_A::m_nTotalPaletteCountForSFZ2A_08 = 0;
uint32_t CGame_SFA2_A::m_nTotalPaletteCountForSFA2_Hack_09 = 0;

uint32_t CGame_SFA2_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
uint32_t CGame_SFA2_A::m_nConfirmedROMSize = -1;

void CGame_SFA2_A::InitializeStatics()
{
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07_REV1);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07_REV2);
    safe_delete_array(CGame_SFA2_A::SFZ2A_A_EXTRA_CUSTOM_07);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08_REV1);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08_REV2);
    safe_delete_array(CGame_SFA2_A::SFZ2A_A_EXTRA_CUSTOM_08);
    safe_delete_array(CGame_SFA2_A::SFA2_HACK_EXTRA_CUSTOM_09);

    memset(rgExtraCountAll_07_Rev1, -1, sizeof(rgExtraCountAll_07_Rev1));
    memset(rgExtraCountAll_07_Rev2, -1, sizeof(rgExtraCountAll_07_Rev2));
    memset(rgExtraCountAll_07_SFZ2A, -1, sizeof(rgExtraCountAll_07_SFZ2A));
    memset(rgExtraCountAll_08_Rev1, -1, sizeof(rgExtraCountAll_08_Rev1));
    memset(rgExtraCountAll_08_Rev2, -1, sizeof(rgExtraCountAll_08_Rev2));
    memset(rgExtraCountAll_08_SFZ2A, -1, sizeof(rgExtraCountAll_08_SFZ2A));
    memset(rgExtraCountAll_09_SFA2_Hack, -1, sizeof(rgExtraCountAll_09_SFA2_Hack));

    memset(rgExtraLoc_07_Rev1, -1, sizeof(rgExtraLoc_07_Rev1));
    memset(rgExtraLoc_07_Rev2, -1, sizeof(rgExtraLoc_07_Rev2));
    memset(rgExtraLoc_07_SFZ2A, -1, sizeof(rgExtraLoc_07_SFZ2A));
    memset(rgExtraLoc_08_Rev1, -1, sizeof(rgExtraLoc_08_Rev1));
    memset(rgExtraLoc_08_Rev2, -1, sizeof(rgExtraLoc_08_Rev2));
    memset(rgExtraLoc_08_SFZ2A, -1, sizeof(rgExtraLoc_08_SFZ2A));
    memset(rgExtraLoc_09_SFA2_Hack, -1, sizeof(rgExtraLoc_09_SFA2_Hack));

    MainDescTree_07_Rev1.SetRootTree(CGame_SFA2_A::InitDescTree(SFA2_A_GAMEKEY_07, SFA2_SupportedROMRevision::SFA2_960229));
    MainDescTree_07_Rev2.SetRootTree(CGame_SFA2_A::InitDescTree(SFA2_A_GAMEKEY_07, SFA2_SupportedROMRevision::SFA2_960306_or_960430));
    MainDescTree_07_SFZ2A.SetRootTree(CGame_SFA2_A::InitDescTree(SFA2_A_GAMEKEY_07, SFA2_SupportedROMRevision::SFZ2A_960826));
    MainDescTree_08_Rev1.SetRootTree(CGame_SFA2_A::InitDescTree(SFA2_A_GAMEKEY_08, SFA2_SupportedROMRevision::SFA2_960229));
    MainDescTree_08_Rev2.SetRootTree(CGame_SFA2_A::InitDescTree(SFA2_A_GAMEKEY_08, SFA2_SupportedROMRevision::SFA2_960306_or_960430));
    MainDescTree_08_SFZ2A.SetRootTree(CGame_SFA2_A::InitDescTree(SFA2_A_GAMEKEY_08, SFA2_SupportedROMRevision::SFZ2A_960826));
    MainDescTree_09_Hack.SetRootTree(CGame_SFA2_A::InitDescTree(SFA2_HACK_GAMEKEY_09, SFA2_SupportedROMRevision::SFA2_Hack_220203));
}

void CGame_SFA2_A::ResetActiveSFA2Revision()
{
    ClearDataBuffer();

    const uint32_t nSafeCountFor07_Rev1 = 935;
    const uint32_t nSafeCountFor07_Rev2 = 1057;
    const uint32_t nSafeCountFor07_SFZ2A = 1342;
    const uint32_t nSafeCountFor08_Rev1 = 271;
    const uint32_t nSafeCountFor08_Rev2 = 315;
    const uint32_t nSafeCountFor08_SFZ2A = 345;
    const uint32_t nSafeCountFor09_Hack = 2400;

    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            m_nTotalInternalUnits = SFA2_A_NUM_IND_07_REV1;
            m_nExtraUnit = SFA2_A_EXTRALOC_07_REV1;
            m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + nSafeCountFor07_Rev1;
            m_nTotalPaletteCount = m_nTotalPaletteCountForSFA2_07_Rev1;
            break;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            m_nTotalInternalUnits = SFA2_A_NUM_IND_07_REV2;
            m_nExtraUnit = SFA2_A_EXTRALOC_07_REV2;
            m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + nSafeCountFor07_Rev2;
            m_nTotalPaletteCount = m_nTotalPaletteCountForSFA2_07_Rev2;
            break;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            m_nTotalInternalUnits = SFZ2A_A_NUM_IND_07;
            m_nExtraUnit = SFZ2A_A_EXTRALOC_07;
            m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + nSafeCountFor07_SFZ2A;
            m_nTotalPaletteCount = m_nTotalPaletteCountForSFZ2A_07;
            break;
        case SFA2_SupportedROMRevision::SFA2_Hack_220203:
            m_nTotalInternalUnits = SFA2_HACK_NUM_09;
            m_nExtraUnit = SFA2_HACK_EXTRALOC_09;
            m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + nSafeCountFor09_Hack;
            m_nTotalPaletteCount = m_nTotalPaletteCountForSFA2_Hack_09;
            break;
        };
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            m_nTotalInternalUnits = SFA2_A_NUM_IND_08_REV1;
            m_nExtraUnit = SFA2_A_EXTRALOC_08_REV1;
            m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + nSafeCountFor08_Rev1;
            m_nTotalPaletteCount = m_nTotalPaletteCountForSFA2_08_Rev1;
            break;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            m_nTotalInternalUnits = SFA2_A_NUM_IND_08_REV2;
            m_nExtraUnit = SFA2_A_EXTRALOC_08_REV2;
            m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + nSafeCountFor08_Rev2;
            m_nTotalPaletteCount = m_nTotalPaletteCountForSFA2_08_Rev2;
            break;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            m_nTotalInternalUnits = SFZ2A_A_NUM_IND_08;
            m_nExtraUnit = SFZ2A_A_EXTRALOC_08;
            m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + nSafeCountFor08_SFZ2A;
            m_nTotalPaletteCount = m_nTotalPaletteCountForSFZ2A_08;
            break;
        }
    }

    const uint32_t nLowestPaletteIn07 = 0x2C000;
    const uint32_t nLowestPaletteIn08 = 0x125e;
    const uint32_t nLowestPaletteIn09 = 0x10e;

    if (UsingExpandedVersion())
    {
        m_nLowestKnownPaletteRomLocation = nLowestPaletteIn09;
    }
    else
    {
        m_nLowestKnownPaletteRomLocation = UsePaletteSetForCharacters() ? nLowestPaletteIn07 : nLowestPaletteIn08;
    }

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    //Create the redirect buffer
    safe_delete_array(rgUnitRedir);
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    InitDataBuffer();
}

CGame_SFA2_A::CGame_SFA2_A(uint32_t nConfirmedROMSize, int nSFA2RomToLoad)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    InitializeStatics();

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_SFA2;

    switch (nSFA2RomToLoad)
    {
    case SFA2_A_GAMEKEY_07:
        m_nSFA2SelectedRom = SFA2_A_GAMEKEY_07;
        m_pszExtraFilename = EXTRA_FILENAME_SFA2_07;
        nGameFlag = SFA2_A;
        break;
    case SFA2_A_GAMEKEY_08:
        m_nSFA2SelectedRom = SFA2_A_GAMEKEY_08;
        m_pszExtraFilename = EXTRA_FILENAME_SFA2_08;
        nGameFlag = SFA2_A;
        break;
    case SFA2_HACK_GAMEKEY_09:
        pButtonLabelSet = DEF_BUTTONLABEL_SFA2_HACK;
        m_nSFA2SelectedRom = SFA2_HACK_GAMEKEY_09;
        m_pszExtraFilename = EXTRA_FILENAME_SFA2_09;
        nGameFlag = SFA2_Hack_A;
        break;
    }

    ResetActiveSFA2Revision();

    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = SFA2_A_IMGIDS_USED;

    nFileAmt = 1;

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SFA2_A::~CGame_SFA2_A()
{
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07_REV1);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07_REV2);
    safe_delete_array(CGame_SFA2_A::SFZ2A_A_EXTRA_CUSTOM_07);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08_REV1);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08_REV2);
    safe_delete_array(CGame_SFA2_A::SFZ2A_A_EXTRA_CUSTOM_08);
    safe_delete_array(CGame_SFA2_A::SFA2_HACK_EXTRA_CUSTOM_09);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SFA2_A::GetMainTree()
{
    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            return &CGame_SFA2_A::MainDescTree_07_Rev1;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            return &CGame_SFA2_A::MainDescTree_07_Rev2;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            return &CGame_SFA2_A::MainDescTree_07_SFZ2A;
        case SFA2_SupportedROMRevision::SFA2_Hack_220203:
            return &CGame_SFA2_A::MainDescTree_09_Hack;
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            return &CGame_SFA2_A::MainDescTree_08_Rev1;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            return &CGame_SFA2_A::MainDescTree_08_Rev2;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            return &CGame_SFA2_A::MainDescTree_08_SFZ2A;
        }
    }
}

uint32_t CGame_SFA2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        // Street Fighter Alpha 2 variants...
        // Since the character list changes between revisions, the offsets do as well. 
        // The offset logic is handled in LoadSpecificPaletteData
        { L"SFA2 Rev 1 (CPS2 ROM07)", L"sz2.07", 0x8e184246, 0 },
        { L"SFA2 Rev 1 (CPS2 ROM08)", L"sz2.08", 0x0fe8585d, 0 },

        { L"SFA2 Rev 2 (CPS2 USA ROM07)", L"sz2u.07", 0x5de01cc5, 0 },
        { L"SFA2 Rev 2 (CPS2 USA ROM08)", L"sz2u.08", 0xbea11d56, 0 },

        { L"SFA2 960227 (CPS2 Asia ROM07)", L"sz2a.07", 0x0aed2494, 0 },
        { L"SFA2 960227 (CPS2 Asia ROM07a)", L"sz2j.07a", 0xd910b2a2, 0 },

        { L"SFZ2A 960826 (CPS2 Asia ROM07)", L"szaa.07", 0x5de01cc5, 0 },
        { L"SFZ2A 960826 (CPS2 Asia ROM08)", L"szaa.08", 0xbea11d56, 0 },

        { L"SFZA2 960813 (CPS2 B/H ROM07)", L"sza.07", 0xe9430762, 0 },
        { L"SFZA2 960813 (CPS2 B/H ROM08)", L"sza.08", 0xb65711a9, 0 },

        { L"SFZA2 960805 (CPS2 Japan ROM07a)", L"szaj.07a", 0x975dcb3e, 0 },
        { L"SFZA2 960805 (CPS2 Japan ROM08a)", L"szaj.08a", 0xdc73f2d7, 0 },

        { L"SFZ2 960304 (CPS2 Brazil ROM07)", L"sz2b.07", 0x947e8ac6, 0 },
        { L"SFZ2 960531 (CPS2 Brazil ROM07a)", L"sz2b.07a", 0x7d19d5ec, 0 },
        { L"SFZ2 (CPS2 Brazil ROM08)", L"sz2b.08", 0x92b66e01, 0 },

        { L"SFZ2 960403 (CPS2 Hispanic ROM07)", L"sz2h.07", 0x947e8ac6, 0 },
        { L"SFZ2 960403 (CPS2 Hispanic ROM08)", L"sz2h.08", 0x92b66e01, 0 },

        { L"SFZ2 960403 (CPS2 Japan ROM07b)", L"sz2j.07b", 0x6352f038, 0 },
        { L"SFZ2 960403 (CPS2 Japan ROM08b)", L"sz2j.08b", 0x92b66e01, 0 },

        { L"SFA2 Expansion Hack (CPS2)", L"sz2u.09", 0x35cce97b, 0 },
    };

    if (ppKnownROMSet)
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
        sfa2                            // 06/03/1996 (c) 1996 (Euro)
            ROM_LOAD16_WORD_SWAP("sz2.07", 0x200000, 0x80000, CRC(8e184246) SHA1(c51f6480cfa1dcec6c4713fd38c7a27338c3fa65))
            ROM_LOAD16_WORD_SWAP("sz2.08", 0x280000, 0x80000, CRC(0fe8585d) SHA1(0cd5369a5aa90c98d8dc1ff3342cd4d990631cff))

        sfz2n                           // 29/02/1996 (c) 1996 (Oceania)
            ROM_LOAD16_WORD_SWAP("sz2.07", 0x200000, 0x80000, CRC(8e184246) SHA1(c51f6480cfa1dcec6c4713fd38c7a27338c3fa65))
            ROM_LOAD16_WORD_SWAP("sz2.08", 0x280000, 0x80000, CRC(0fe8585d) SHA1(0cd5369a5aa90c98d8dc1ff3342cd4d990631cff))
            

        sfa2u                           // 30/04/1996 (c) 1996 (USA)
            ROM_LOAD16_WORD_SWAP("sz2u.07", 0x200000, 0x80000, CRC(5de01cc5) SHA1(b19bfe970b217c96e782860fc3ae3fcb976ed30d))
            ROM_LOAD16_WORD_SWAP("sz2u.08", 0x280000, 0x80000, CRC(bea11d56) SHA1(a1d475066d36de7cc5d931671ccdcd89737bc7ee))
            
        sfa2ur1                         // 06/03/1996 (c) 1996 (USA)
            ROM_LOAD16_WORD_SWAP("sz2u.07", 0x200000, 0x80000, CRC(5de01cc5) SHA1(b19bfe970b217c96e782860fc3ae3fcb976ed30d))
            ROM_LOAD16_WORD_SWAP("sz2u.08", 0x280000, 0x80000, CRC(bea11d56) SHA1(a1d475066d36de7cc5d931671ccdcd89737bc7ee))


        sfz2a                           // 27/02/1996 (c) 1996 (Asia)
        sfz2ad                          //
            ROM_LOAD16_WORD_SWAP("sz2a.07a", 0x200000, 0x80000, CRC(0aed2494) SHA1(7beb1a394f17cd78a27128292b626aae28754ca2))
            ROM_LOAD16_WORD_SWAP("sz2.08", 0x280000, 0x80000, CRC(0fe8585d) SHA1(0cd5369a5aa90c98d8dc1ff3342cd4d990631cff))


        sfz2al                          // 26/08/1996 (c) 1996 (Asia)
        sfz2ald                         //
            ROM_LOAD16_WORD_SWAP("szaa.07", 0x200000, 0x80000, CRC(5feb8b20) SHA1(13c79c9b72c3abf0a0b75d507d91ece71e460c06))
            ROM_LOAD16_WORD_SWAP("szaa.08", 0x280000, 0x80000, CRC(6eb6d412) SHA1(c858fec9c1dfea70dfcca629c1c24306f8ae6d81))


        sfz2alb                         // 13/08/1996 (c) 1996 (Brazil)
            ROM_LOAD16_WORD_SWAP("sza.07", 0x200000, 0x80000, CRC(e9430762) SHA1(923aea8db5f9b59212ec6dbc35be0808ea015140))
            ROM_LOAD16_WORD_SWAP("sza.08", 0x280000, 0x80000, CRC(b65711a9) SHA1(3918f44e1bb189e2a115625b35f477eb91a65f04))

        sfz2alh                         // 13/08/1996 (c) 1996 (Hispanic)
            ROM_LOAD16_WORD_SWAP("sza.07", 0x200000, 0x80000, CRC(e9430762) SHA1(923aea8db5f9b59212ec6dbc35be0808ea015140))
            ROM_LOAD16_WORD_SWAP("sza.08", 0x280000, 0x80000, CRC(b65711a9) SHA1(3918f44e1bb189e2a115625b35f477eb91a65f04))


        sfz2alj                         // 05/08/1996 (c) 1996 (Japan)
            ROM_LOAD16_WORD_SWAP("szaj.07a", 0x200000, 0x80000, CRC(975dcb3e) SHA1(a2ca8e5a768e49cce9e2137ec0dcba9337ed2ad5))
            ROM_LOAD16_WORD_SWAP("szaj.08a", 0x280000, 0x80000, CRC(dc73f2d7) SHA1(09fa10e7d1ff5f0dac87a6cf3d66730e3ab9ad25))

        sfz2b                           // 31/05/1996 (c) 1996 (Brazil)
            ROM_LOAD16_WORD_SWAP("sz2b.07a", 0x200000, 0x80000, CRC(7d19d5ec) SHA1(ab88dfcb2029499578837b8f97fbf55412c8f756))
            ROM_LOAD16_WORD_SWAP("sz2b.08", 0x280000, 0x80000, CRC(92b66e01) SHA1(f09cb38aa49b22a9c98219fb2ad8a66b11fa5872))

        sfz2br1                         // 04/03/1996 (c) 1996 (Brazil)
            ROM_LOAD16_WORD_SWAP("sz2b.07", 0x200000, 0x80000, CRC(947e8ac6) SHA1(da82be7cba9cd557da3ee35be9194130a959d5cb))
            ROM_LOAD16_WORD_SWAP("sz2b.08", 0x280000, 0x80000, CRC(92b66e01) SHA1(f09cb38aa49b22a9c98219fb2ad8a66b11fa5872))
        sfz2h                           // 04/03/1996 (c) 1996 (Hispanic)
            ROM_LOAD16_WORD_SWAP("sz2h.07", 0x200000, 0x80000, CRC(947e8ac6) SHA1(da82be7cba9cd557da3ee35be9194130a959d5cb)) /* These two are the same as the Brazil set */
            ROM_LOAD16_WORD_SWAP("sz2h.08", 0x280000, 0x80000, CRC(92b66e01) SHA1(f09cb38aa49b22a9c98219fb2ad8a66b11fa5872)) /* These two are the same as the Brazil set */

        sfz2j                           // 30/04/1996 (c) 1996 (Japan)
        sfz2jd                          //
            ROM_LOAD16_WORD_SWAP("sz2j.07b", 0x200000, 0x80000, CRC(6352f038) SHA1(720a9865ecd0b34315c59ee88d137b4afcdd91cb))
            ROM_LOAD16_WORD_SWAP("sz2j.08b", 0x280000, 0x80000, CRC(92b66e01) SHA1(f09cb38aa49b22a9c98219fb2ad8a66b11fa5872))

        sfz2jr1                         // 27/02/1996 (c) 1996 (Japan)
            ROM_LOAD16_WORD_SWAP("sz2j.07a", 0x200000, 0x80000, CRC(d910b2a2) SHA1(aa201660caa9cef993c147a1077c9e7767b34a78))
            ROM_LOAD16_WORD_SWAP("sz2.08", 0x280000, 0x80000, CRC(0fe8585d) SHA1(0cd5369a5aa90c98d8dc1ff3342cd4d990631cff))

#endif
}

uint32_t CGame_SFA2_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
        {
            return _GetExtraCount(rgExtraCountAll_07_Rev1, SFA2_A_NUM_IND_07_REV1, nUnitId, SFA2_A_EXTRA_CUSTOM_07_REV1);
        }
        case SFA2_SupportedROMRevision::SFZ2A_960826:
        {
            return _GetExtraCount(rgExtraCountAll_07_SFZ2A, SFZ2A_A_NUM_IND_07, nUnitId, SFZ2A_A_EXTRA_CUSTOM_07);
        }
        case SFA2_SupportedROMRevision::SFA2_Hack_220203:
        {
            return _GetExtraCount(rgExtraCountAll_09_SFA2_Hack, SFA2_HACK_NUM_09, nUnitId, SFA2_HACK_EXTRA_CUSTOM_09);
        }
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
        {
            return _GetExtraCount(rgExtraCountAll_07_Rev2, SFA2_A_NUM_IND_07_REV2, nUnitId, SFA2_A_EXTRA_CUSTOM_07_REV2);
        }
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
        {
            return _GetExtraCount(rgExtraCountAll_08_Rev1, SFA2_A_NUM_IND_08_REV1, nUnitId, SFA2_A_EXTRA_CUSTOM_08_REV1);
        }
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
        {
            return _GetExtraCount(rgExtraCountAll_08_Rev2, SFA2_A_NUM_IND_08_REV2, nUnitId, SFA2_A_EXTRA_CUSTOM_08_REV2);
        }
        case SFA2_SupportedROMRevision::SFZ2A_960826:
        {
            return _GetExtraCount(rgExtraCountAll_08_SFZ2A, SFZ2A_A_NUM_IND_08, nUnitId, SFZ2A_A_EXTRA_CUSTOM_08);
        }
        }
    }
}

uint32_t CGame_SFA2_A::GetExtraLoc(uint32_t nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
        {
            return _GetExtraLocation(rgExtraLoc_07_Rev1, SFA2_A_NUM_IND_07_REV1, nUnitId, SFA2_A_EXTRA_CUSTOM_07_REV1);
        }
        case SFA2_SupportedROMRevision::SFZ2A_960826:
        {
            return _GetExtraLocation(rgExtraLoc_07_SFZ2A, SFZ2A_A_NUM_IND_07, nUnitId, SFZ2A_A_EXTRA_CUSTOM_07);
        }
        case SFA2_SupportedROMRevision::SFA2_Hack_220203:
        {
            return _GetExtraLocation(rgExtraLoc_09_SFA2_Hack, SFA2_HACK_NUM_09, nUnitId, SFA2_HACK_EXTRA_CUSTOM_09);
        }
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
        {
            return _GetExtraLocation(rgExtraLoc_07_Rev2, SFA2_A_NUM_IND_07_REV2, nUnitId, SFA2_A_EXTRA_CUSTOM_07_REV2);
        }
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
        {
            return _GetExtraLocation(rgExtraLoc_08_Rev1, SFA2_A_NUM_IND_08_REV1, nUnitId, SFA2_A_EXTRA_CUSTOM_08_REV1);
        }
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
        {
            return _GetExtraLocation(rgExtraLoc_08_Rev2, SFA2_A_NUM_IND_08_REV2, nUnitId, SFA2_A_EXTRA_CUSTOM_08_REV2);
        }
        case SFA2_SupportedROMRevision::SFZ2A_960826:
        {
            return _GetExtraLocation(rgExtraLoc_08_SFZ2A, SFZ2A_A_NUM_IND_08, nUnitId, SFZ2A_A_EXTRA_CUSTOM_08);
        }
        }
    }
}

const sDescTreeNode* CGame_SFA2_A::GetCurrentUnitSet()
{
    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            return SFA2_A_UNITS_07_REV1;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            return SFA2_A_UNITS_07_REV2;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            return SFZ2A_A_UNITS_07;
        case SFA2_SupportedROMRevision::SFA2_Hack_220203:
            return SFA2_HACK_UNITS_09;
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            return SFA2_A_UNITS_08_REV1;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            return SFA2_A_UNITS_08_REV2;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            return SFZ2A_A_UNITS_08;
        }        
    }
}

uint32_t CGame_SFA2_A::GetCurrentExtraLoc()
{
    uint16_t nExtraLocation = 0;

    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            nExtraLocation = SFA2_A_EXTRALOC_07_REV1;
            break;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            nExtraLocation = SFA2_A_EXTRALOC_07_REV2;
            break;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            nExtraLocation = SFZ2A_A_EXTRALOC_07;
            break;
        case SFA2_SupportedROMRevision::SFA2_Hack_220203:
            nExtraLocation = SFA2_HACK_EXTRALOC_09;
            break;
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            nExtraLocation = SFA2_A_EXTRALOC_08_REV1;
            break;
        default:
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
            nExtraLocation = SFA2_A_EXTRALOC_08_REV2;
            break;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            nExtraLocation = SFZ2A_A_EXTRALOC_08;
            break;
        }
    }

    return nExtraLocation;
}

stExtraDef* CGame_SFA2_A::GetCurrentExtraDef(int nDefCtr)
{
    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            return (stExtraDef*)&SFA2_A_EXTRA_CUSTOM_07_REV1[nDefCtr];
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            return (stExtraDef*)&SFA2_A_EXTRA_CUSTOM_07_REV2[nDefCtr];
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            return (stExtraDef*)&SFZ2A_A_EXTRA_CUSTOM_07[nDefCtr];
        case SFA2_SupportedROMRevision::SFA2_Hack_220203:
            return (stExtraDef*)&SFA2_HACK_EXTRA_CUSTOM_09[nDefCtr];
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            return (stExtraDef*)&SFA2_A_EXTRA_CUSTOM_08_REV1[nDefCtr];
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            return (stExtraDef*)&SFA2_A_EXTRA_CUSTOM_08_REV2[nDefCtr];
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            return (stExtraDef*)&SFZ2A_A_EXTRA_CUSTOM_08[nDefCtr];
        }
    }
}

sDescTreeNode* CGame_SFA2_A::InitDescTree(int nROMPaletteSetToUse, SFA2_SupportedROMRevision nROMRevision)
{
    uint32_t nTotalPaletteCount = 0;
    m_nSFA2SelectedRom = nROMPaletteSetToUse;
    m_currentSFA2ROMRevision = nROMRevision;

    bool fHaveExtras;
    uint16_t nUnitCt;
    uint32_t nExtraUnitLocation;

    //Load extra file if we're using it
    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            nExtraUnitLocation = SFA2_A_EXTRALOC_07_REV1;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_07, &SFA2_A_EXTRA_CUSTOM_07_REV1, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFA2_A_NUM_IND_07_REV1 + (fHaveExtras ? 1 : 0);
            break;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            nExtraUnitLocation = SFA2_A_EXTRALOC_07_REV2;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_07, &SFA2_A_EXTRA_CUSTOM_07_REV2, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFA2_A_NUM_IND_07_REV2 + (fHaveExtras ? 1 : 0);
            break;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            nExtraUnitLocation = SFZ2A_A_EXTRALOC_07;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_07, &SFZ2A_A_EXTRA_CUSTOM_07, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFZ2A_A_NUM_IND_07 + (fHaveExtras ? 1 : 0);
            break;
        case SFA2_SupportedROMRevision::SFA2_Hack_220203:
            nExtraUnitLocation = SFA2_HACK_EXTRALOC_09;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_09, &SFA2_HACK_EXTRA_CUSTOM_09, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFA2_HACK_NUM_09 + (fHaveExtras ? 1 : 0);
            break;
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            nExtraUnitLocation = SFA2_A_EXTRALOC_08_REV1;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_08, &SFA2_A_EXTRA_CUSTOM_08_REV1, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFA2_A_NUM_IND_08_REV1 + (fHaveExtras ? 1 : 0);
            break;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            nExtraUnitLocation = SFA2_A_EXTRALOC_08_REV2;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_08, &SFA2_A_EXTRA_CUSTOM_08_REV2, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFA2_A_NUM_IND_08_REV2 + (fHaveExtras ? 1 : 0);
            break;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            nExtraUnitLocation = SFZ2A_A_EXTRALOC_08;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_08, &SFZ2A_A_EXTRA_CUSTOM_08, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFZ2A_A_NUM_IND_08 + (fHaveExtras ? 1 : 0);
            break;
        }
    }

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SFA2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_SFA2_A::InitDescTree: Building desc tree for SFA2 ROM %u %s extras...\n", m_nSFA2SelectedRom, fHaveExtras ? L"with" : L"without");
    OutputDebugString(strMsg);

    //Go through each character
    for (uint16_t iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nExtraCt = GetExtraCt(iUnitCtr, TRUE);
        BOOL fUseExtra = (GetExtraLoc(iUnitCtr) ? 1 : 0);

        uint32_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        if (iUnitCtr != nExtraUnitLocation)
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", GetCurrentUnitSet()[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if SFA2_DEBUG
            strMsg.Format(L"Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, fUseExtra ? L"with extras" : L"no extras", nUnitChildCount);
            OutputDebugString(strMsg);
#endif

            uint32_t nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (uint16_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                uint32_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if SFA2_DEBUG
                strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (uint16_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if SFA2_DEBUG
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
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if SFA2_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (fUseExtra)
        {
            uint32_t nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(nExtraUnitLocation > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if SFA2_DEBUG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (uint16_t nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
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

#if SFA2_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_SFA2_A::InitDescTree: Loaded %u palettes for SFA2 ROM %u\n", nTotalPaletteCount, m_nSFA2SelectedRom);
    OutputDebugString(strMsg);

    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            m_nTotalPaletteCountForSFA2_07_Rev1 = nTotalPaletteCount;
            break;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            m_nTotalPaletteCountForSFA2_07_Rev2 = nTotalPaletteCount;
            break;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            m_nTotalPaletteCountForSFZ2A_07 = nTotalPaletteCount;
            break;
        case SFA2_SupportedROMRevision::SFA2_Hack_220203:
            m_nTotalPaletteCountForSFA2_Hack_09 = nTotalPaletteCount;
            break;
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            m_nTotalPaletteCountForSFA2_08_Rev1 = nTotalPaletteCount;
            break;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            m_nTotalPaletteCountForSFA2_08_Rev2 = nTotalPaletteCount;
            break;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            m_nTotalPaletteCountForSFZ2A_08 = nTotalPaletteCount;
            break;
        }
    }

    // For development use to speed things up
    //DumpPaletteHeaders();

    return NewDescTree;
}

struct sSFA2_A_PaletteData
{
    LPCWSTR pszCharacterName = nullptr;
    uint32_t nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexCPS2Sprites_SFA3Assets"; // SFA2_Unique
    uint32_t nImageSetIndex = 0;
};

const sSFA2_A_PaletteData SFA2_A_CharacterPalettes[] =
{
    { L"Ryu",    0x6e2c0 + (0x3c0 * 0), L"indexCPS2Sprites_Ryu" }, // Ryu
    { L"Ken",    0x6e2c0 + (0x3c0 * 1), L"indexCPS2Sprites_Ken" }, // Ken
    { L"Akuma",  0x6e2c0 + (0x3c0 * 2), L"indexCPS2Sprites_Akuma" }, // Akuma
    { L"Charlie", 0x6e2c0 + (0x3c0 * 3), L"indexCPS2Sprites_Charlie" }, // Charlie
    { L"Chun-Li", 0x6e2c0 + (0x3c0 * 4), L"indexCPS2Sprites_ChunLi", 0x0c }, // Chun
    { L"Adon",   0x6e2c0 + (0x3c0 * 5), L"indexCPS2Sprites_Adon" }, // Adon
    { L"Sodom",  0x6e2c0 + (0x3c0 * 6), L"indexCPS2Sprites_Sodom" }, // Sodom
    { L"Guy",    0x6e2c0 + (0x3c0 * 7), L"indexCPS2Sprites_Guy" }, // Guy
    { L"Birdie", 0x6e2c0 + (0x3c0 * 8), L"indexCPS2Sprites_Birdie" }, // Birdie
    { L"Rose",   0x6e2c0 + (0x3c0 * 9), L"indexCPS2Sprites_Rose" }, // Rose
    { L"M.Bison", 0x6e2c0 + (0x3c0 * 10), L"indexCPS2Sprites_Bison" }, // Dict
    { L"Sagat",  0x6e2c0 + (0x3c0 * 11), L"indexCPS2Sprites_Sagat" }, // Sagat
    { L"Dan",    0x6e2c0 + (0x3c0 * 12), L"indexCPS2Sprites_Dan" }, // Dan
    { L"Sakura", 0x6e2c0 + (0x3c0 * 13), L"indexCPS2Sprites_Sakura" }, // Sakura
    { L"Rolento", 0x6e2c0 + (0x3c0 * 14), L"indexCPS2Sprites_Rolento" }, // Rolento
    { L"Dhalsim", 0x6e2c0 + (0x3c0 * 15), L"indexCPS2Sprites_Dhalsim" }, // Dhalsim
    { L"Zangief", 0x6e2c0 + (0x3c0 * 16), L"indexCPS2Sprites_Zangief" }, // Zangief
    { L"Gen",    0x6e2c0 + (0x3c0 * 17), L"indexCPS2Sprites_Gen" }, // Gen

    { L"Chun-Li (Original)",   0x6e2c0 + (0x3c0 * 18), L"indexCPS2Sprites_ChunLi" }, // Chun
    { L"Gen (crane stance)",       0x6e2c0 + (0x3c0 * 19), L"indexCPS2Sprites_Gen" }, // Gen
//  { L"Shin Gouki (alt costume)",    0x6e2c0 + (0x3c0 * 20), L"indexCPS2Sprites_Gen" }, // SAkuma
    { L"Zangief (WW)",    0x6e2c0 + (0x3c0 * 21), L"indexCPS2Sprites_Zangief" },
    { L"Dhalsim (WW)",    0x6e2c0 + (0x3c0 * 22), L"indexCPS2Sprites_Dhalsim" },
//  { L"Evil RYu",    0x6e2c0 + (0x3c0 * 20), L"indexCPS2Sprites_Ryu" },
};

struct sSFA2_A_EffectPaletteData
{
    LPCWSTR pszCharacterName = nullptr;
    LPCWSTR pszEffectName = nullptr;
    uint32_t nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexCPS2Sprites_SFA3Assets"; // SFA2_Unique
    uint32_t nImageSetIndex = 0;
    uint16_t nEffectCount = 1;
};

const sSFA2_A_EffectPaletteData SFA2_EffectsPaletteSets[] =
{
    { L"Akuma",      L"Extra",            0x1adc0, L"indexCPS2Sprites_Akuma", 0, 5 },
    { L"Birdie",     L"Bullrush",         0x1b180, L"indexCPS2Sprites_Birdie", 0, 3 },
    { L"Rose",       L"Dress winpose",    0x1b3c0, L"indexCPS2Sprites_Rose", 1, 1 },
    { L"M.Bison",    L"Teleport",         0x1b480, L"indexCPS2Sprites_Bison", 0, 4 },
    // Dan: single entry at 0x1b780
    { L"Dhalsim",    L"Teleport",         0x1b820, L"indexCPS2Sprites_Dhalsim", 0, 5 },
    // Single entry : { L"Shin Akuma", L"Teleport",         0x1bbe0, L"indexCPS2Sprites_Akuma", 0, 5 },
    { L"Evil Ryu",   L"Extra",            0x1bc80, L"indexCPS2Sprites_Ryu", 0, 5 },
};

const sSFA2_A_PaletteData SFA2_A_PortraitPalettes[] =
{
    { L"Ryu",        0x1c7c0 + (0x60 *  0), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Ryu },
    { L"Ken",        0x1c7c0 + (0x60 *  1), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Ken },
    { L"Akuma",      0x1c7c0 + (0x60 *  2), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Akuma },
    { L"Charlie",    0x1c7c0 + (0x60 *  3), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Charlie },
    { L"Chun-Li",    0x1c7c0 + (0x60 *  4), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_ChunLi },
    { L"Adon",       0x1c7c0 + (0x60 *  5), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Adon },
    { L"Sodom",      0x1c7c0 + (0x60 *  6), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Sodom },
    { L"Guy",        0x1c7c0 + (0x60 *  7), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Guy },
    { L"Birdie",     0x1c7c0 + (0x60 *  8), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Birdie },
    { L"Rose",       0x1c7c0 + (0x60 *  9), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Rose },
    { L"M.Bison",    0x1c7c0 + (0x60 * 10), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Bison },
    { L"Sagat",      0x1c7c0 + (0x60 * 11), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Sagat },
    { L"Dan",        0x1c7c0 + (0x60 * 12), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Dan },
    { L"Sakura",     0x1c7c0 + (0x60 * 13), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Sakura },
    { L"Rolento",    0x1c7c0 + (0x60 * 14), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Rolento },
    { L"Dhalsim",    0x1c7c0 + (0x60 * 15), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Dhalsim },
    { L"Zangief",    0x1c7c0 + (0x60 * 16), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Zangief },
    { L"Gen",        0x1c7c0 + (0x60 * 17), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_Gen },
    { L"Chun-Li (Original)",   0x1c7c0 + (0x60 * 18), L"indexCPS2Sprites_SFA2Portraits", indexCPS2Sprites_ChunLi + 1 },
};

const LPCWSTR SFA2_ColorOptionNames[] =
{
    L"Punch",
    L"Kick",
    L"2 Punches",
    L"2 Kicks",
    L"Auto Guard Punch",
    L"Auto Guard Kick",
};

const LPCWSTR SFA2_StatusEffectNames[] =
{
    L"Burned 1",
    L"Burned 2",
    L"Psycho Power Burned 1",
    L"Psycho Power Burned 2",
    L"Punch CC Shadow 1",
    L"Punch CC Shadow 2",
    L"Kick CC Shadow 1",
    L"Kick CC Shadow 2",
    L"2 Punches CC Shadow 1",
    L"2 Punches CC Shadow 2",
    L"2 Kicks CC Shadow 1",
    L"2 Kicks CC Shadow 2",
    L"Auto Guard Punch CC Shadow 1",
    L"Auto Guard Punch CC Shadow 2",
    L"Auto Guard Kick CC Shadow 1",
    L"Auto Guard Kick CC Shadow 2",
};

void CGame_SFA2_A::DumpPaletteHeaders()
{
    CString strOutput;
    const uint16_t nColorOptionsPerCharacter = 6;
    constexpr uint32_t SFA2_PALETTE_LENGTH = 0x20;

    bool fShouldDumpPalettesFor7 = true;

    if (fShouldDumpPalettesFor7)
    {
        const uint32_t nStatusEffectBase = 0x72e60;
        const uint16_t nCountStatusEffects = 16; // ... O_o
        const uint16_t nPalettesPerColor = 5;

        for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_CharacterPalettes); nCharIndex++)
        {
            wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_CharacterPalettes[nCharIndex].pszCharacterName);

            for (uint16_t nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
            {
                wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
                StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

                strOutput.Format(L"const sGame_PaletteDataset SFA2_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, szColorOptionCodeDesc);
                OutputDebugString(strOutput);

                uint32_t nCurrentOffset = SFA2_A_CharacterPalettes[nCharIndex].nROMOffset + (nColorIndex * (SFA2_PALETTE_LENGTH * nPalettesPerColor));
                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SFA2_ColorOptionNames[nColorIndex], nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_A_CharacterPalettes[nCharIndex].pszImageSet, SFA2_A_CharacterPalettes[nCharIndex].nImageSetIndex);
                OutputDebugString(strOutput);

                for (uint16_t nMoveIndex = 1; nMoveIndex < nPalettesPerColor; nMoveIndex++)
                {
                    nCurrentOffset += SFA2_PALETTE_LENGTH;
                    strOutput.Format(L"    { L\"%s Extra %u\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SFA2_ColorOptionNames[nColorIndex], nMoveIndex, nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_A_CharacterPalettes[nCharIndex].pszImageSet, SFA2_A_CharacterPalettes[nCharIndex].nImageSetIndex);
                    OutputDebugString(strOutput);
                }

                OutputDebugString(L"};\r\n\r\n");
            }

            strOutput.Format(L"const sGame_PaletteDataset SFA2_A_%s_STATUS_PALETTES[] = \r\n{\r\n", szCodeDesc);
            OutputDebugString(strOutput);

            // Status effects
            for (uint16_t nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
            {
                uint32_t nCurrentOffset = 0x72e60 + (nStatusIndex * SFA2_PALETTE_LENGTH) + (nCharIndex * (nCountStatusEffects * SFA2_PALETTE_LENGTH));
                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SFA2_StatusEffectNames[nStatusIndex], nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_A_CharacterPalettes[nCharIndex].pszImageSet, SFA2_A_CharacterPalettes[nCharIndex].nImageSetIndex);
                OutputDebugString(strOutput);
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_CharacterPalettes); nCharIndex++)
        {
            wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_CharacterPalettes[nCharIndex].pszCharacterName);

            strOutput.Format(L"const sDescTreeNode SFA2_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
            OutputDebugString(strOutput);

            for (uint16_t nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
            {
                wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
                StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

                strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SFA2_A_%s_%s_PALETTES, ARRAYSIZE(SFA2_A_%s_%s_PALETTES) },\r\n", SFA2_ColorOptionNames[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
                OutputDebugString(strOutput);
            }

            strOutput.Format(L"    { L\"Status Effects\", DESC_NODETYPE_TREE, (void*)SFA2_A_%s_STATUS_PALETTES, ARRAYSIZE(SFA2_A_%s_STATUS_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
            OutputDebugString(strOutput);
            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // ROM8 headers
    OutputDebugString(L"\n\nHeaders for ROM8 data...\n\n");

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_EffectsPaletteSets); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_EffectsPaletteSets[nCharIndex].pszCharacterName);

        for (uint16_t nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            wchar_t szEffectCodeDescription[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szEffectCodeDescription, ARRAYSIZE(szEffectCodeDescription), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(L"const sGame_PaletteDataset SFA2_A_%s_%s_MOVE_PALETTES[] = \r\n{\r\n", szCodeDesc, szEffectCodeDescription);
            OutputDebugString(strOutput);

            uint32_t nCurrentOffset = SFA2_EffectsPaletteSets[nCharIndex].nROMOffset + (nColorIndex * (SFA2_PALETTE_LENGTH * SFA2_EffectsPaletteSets[nCharIndex].nEffectCount));

            for (uint16_t nMoveIndex = 0; nMoveIndex < SFA2_EffectsPaletteSets[nCharIndex].nEffectCount; nMoveIndex++)
            {
                strOutput.Format(L"    { L\"%s %u\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SFA2_EffectsPaletteSets[nCharIndex].pszEffectName, nMoveIndex + 1, nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_EffectsPaletteSets[nCharIndex].pszImageSet, SFA2_EffectsPaletteSets[nCharIndex].nImageSetIndex);
                OutputDebugString(strOutput);
                nCurrentOffset += SFA2_PALETTE_LENGTH;
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        strOutput.Format(L"const sDescTreeNode SFA2_A_%s_MOVE_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SFA2_A_%s_%s_MOVE_PALETTES, ARRAYSIZE(SFA2_A_%s_%s_MOVE_PALETTES) },\r\n", SFA2_ColorOptionNames[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    const uint32_t SFA2_PORTRAIT_LENGTH = 0x60;
    const uint32_t SFA2_PORTRAIT_SET_LENGTH = 0x720;

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_PortraitPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName);

        for (uint16_t nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(L"const sGame_PaletteDataset SFA2_A_%s_%s_PORTRAIT_PALETTES[] = \r\n{\r\n", szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);

            uint32_t nCurrentOffset = SFA2_A_PortraitPalettes[nCharIndex].nROMOffset + (nColorIndex * SFA2_PORTRAIT_SET_LENGTH);

            strOutput.Format(L"    { L\"%s Portrait\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName, nCurrentOffset, nCurrentOffset + SFA2_PORTRAIT_LENGTH,
                                                                                             SFA2_A_PortraitPalettes[nCharIndex].pszImageSet, SFA2_A_PortraitPalettes[nCharIndex].nImageSetIndex);
            OutputDebugString(strOutput);

            OutputDebugString(L"};\r\n\r\n");
        }

        strOutput.Format(L"const sDescTreeNode SFA2_A_%s_PORTRAIT_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SFA2_A_%s_%s_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_%s_%s_PORTRAIT_PALETTES) },\r\n", SFA2_ColorOptionNames[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_PortraitPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SFA2_A_%s_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_%s_PORTRAIT_COLLECTION) },\r\n", SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sFileRule CGame_SFA2_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;
    
    switch (nUnitId)
    {
    case SFA2_A_GAMEKEY_07:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"sz2.07");
        break;
    case SFA2_A_GAMEKEY_08:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"sz2.08");
        break;
    case SFA2_HACK_GAMEKEY_09:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"sz2u.09");
        break;
    }

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_SFA2_A::GetCollectionCountForUnit(uint32_t nUnitId)
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

uint32_t CGame_SFA2_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
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

LPCWSTR CGame_SFA2_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
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

uint32_t CGame_SFA2_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        uint32_t nCompleteCount = 0;
        uint32_t nCollectionCount = GetCurrentUnitSet()[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);

        for (uint32_t nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if SFA2_DEBUG
        CString strMsg;
        strMsg.Format(L"CGame_SFA2_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_SFA2_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGame_SFA2_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

uint32_t CGame_SFA2_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nNodeSize = 0;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_SFA2_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount;

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
                if (!fReturnBasicNodesOnly || (nCollectionIndex < 6)) // 3 sets of P/K Isms
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

void CGame_SFA2_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSFA2SelectedRom;
    m_pppDataBuffer = new uint16_t * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(uint16_t**) * nUnitAmt);
}

void CGame_SFA2_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nSFA2SelectedRom;

    m_nSFA2SelectedRom = m_nBufferSelectedRom;

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

    m_nSFA2SelectedRom = nCurrentROMMode;
}

void CGame_SFA2_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != GetCurrentExtraLoc())
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        if (UsePaletteSetForCharacters())
        {
            switch (m_currentSFA2ROMRevision)
            {
            case SFA2_SupportedROMRevision::SFA2_960229: // Rev 1
            case SFA2_SupportedROMRevision::SFA2_Hack_220203: // Jed's "glasses" update
                // no deltas needed
                break;
            case SFA2_SupportedROMRevision::SFA2_960306_or_960430: // Rev 2
            default:
                // 0306 ROMs have a different location for palettes
                if (SFA2_A_UNITSORT_07_0306[nUnitId] == index_SFA2_EvilRyu)
                {
                    ; // no-op: this is already handled
                }
                else if ((m_nCurrentPaletteROMLocation < 0x72Dbe) || // Handle up to Gen (Crane Stance)
                        (((SFA2_A_UNITSORT_07_0306[nUnitId] == index_SFA2_WWDhalsim) || (SFA2_A_UNITSORT_07_0306[nUnitId] == index_SFA2_WWZangief)) &&
                            (m_nCurrentPaletteROMLocation < 0x738fe))) // Second check handles the inserted WW characters
                {
                    m_nCurrentPaletteROMLocation -= 0x11e0;
                }
                else if (SFA2_A_UNITSORT_07_0306[nUnitId] == index_SFA2_Bonus07)
                {
                    // this is handling stages right now
                    m_nCurrentPaletteROMLocation -= 0x180;
                }
                else
                {
                    //  229: Chun-Li SF2, Crane Gen
                    //  and then status effects.
                    //  306: Chun-Li SF2, Crane Gen, Shin Akuma, WW Gief, WW Sim, Evil Ryu
                    m_nCurrentPaletteROMLocation -= 0x380;
                }
                break;
            case SFA2_SupportedROMRevision::SFZ2A_960826: // 0x1bbe0: ryu
                if (((SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_WWRyu) || (SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_WWKen) ||
                     (SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_WWChunLi) || (SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_WWSagat) ||
                     (SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_WWMBison) || (SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_EvilRyu) ||
                     (SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_AltSakura)) &&
                    (m_nCurrentPaletteROMLocation < 0x738fe))
                {
                    // use real locations for SFZ2A unique characters
                }
                else if (m_nCurrentPaletteROMLocation < 0x72Dbe) // Handle up to Gen (Crane Stance)
                {
                    // This handles all the character palettes
                    m_nCurrentPaletteROMLocation -= 0xDDBC;
                }
                else if (((SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_WWDhalsim) || (SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_WWZangief)) &&
                            (m_nCurrentPaletteROMLocation < 0x738fe)) // Second check handles the inserted WW characters
                {
                    // sim: in code 73540
                    // sim: in sz2u.07 -- 72360
                    // sim: in szaa.07 -- 65784
                    m_nCurrentPaletteROMLocation -= 0xDDBC; // CBE0;
                }
                else
                {
                    // This handles all the status effect palettes
                    m_nCurrentPaletteROMLocation -= 0xB11C;
                }
                break;
            };
        }
        else // (!UsePaletteSetForCharacters()
        {
            switch (m_currentSFA2ROMRevision)
            {
            case SFA2_SupportedROMRevision::SFA2_960229: // in 229 portraits start at 0x1bb40
                if (m_nCurrentPaletteROMLocation < 0x1c7be)
                {
                    // Early bonus/extra range
                    m_nCurrentPaletteROMLocation += 0xD80;
                }
                else
                {
                    // Later portrait range
                    m_nCurrentPaletteROMLocation += 0x900;
                }
                break;
            case SFA2_SupportedROMRevision::SFA2_960306_or_960430: // in 306 portraits start at 0x1adc0
            default:
                // 0x1adc0: akuma extra 1
                // 0x1b480: bison teleport
                // 0x1b780: dan sagat throw
                // 0x1b820: sim teleport
                // 0x1bbe0: shin akuma
                // 0x1bc80: evil ryu
                break;
            case SFA2_SupportedROMRevision::SFZ2A_960826: 
                // 0x11024: akuma extra 1
                // 0x11ce4: dan
                // 0x12144: shin akuma
                // 0x12504: evil ryu
                if (((nUnitId > 0) && (nUnitId < 27)) ||
                    (nUnitId == 0x25))                    
                {
                    if (m_nCurrentPaletteROMLocation < 0x1b77e)
                    {
                        m_nCurrentPaletteROMLocation -= 0x9D9C;
                    }
                    else if (m_nCurrentPaletteROMLocation < 0x1bc7e)
                    {
                        m_nCurrentPaletteROMLocation -= 0x9A9C;
                    }
                    else
                    {
                        m_nCurrentPaletteROMLocation -= 0x977C;
                    }
                }
                break;
            };
        }

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // SFA2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

SFA2_SupportedROMRevision CGame_SFA2_A::GetSFA2ROMVersion(CFile* LoadedFile)
{
    // There are a number of SFA2 ROMs floating around for different game versions.
    // We chiefly support 960229 and 960306.  Sniff the ROM to make sure we use the right logic.
    uint16_t detectedROMVersion = static_cast<uint16_t>(SFA2_SupportedROMRevision::SFA2_960229);

    const std::vector<ROMRevisionLookupData> rom7s =
    {
        {
            static_cast<uint16_t>(SFA2_SupportedROMRevision::SFA2_960229),
            {   0x0, 0x8, 0x0, 0x20,      0x775c, 0x0, 0x0, 0x0,    0x0, 0x8, 0x0, 0x20,      0x776c, 0x0, 0x0, 0x0,
                0x0, 0x8, 0x0, 0x20,      0x774c, 0x0, 0x0, 0x0,    0x0, 0x8, 0x0, 0x20,      0x7714, 0x0, 0x0, 0x0 }
        },
        {
            static_cast<uint16_t>(SFA2_SupportedROMRevision::SFA2_960306_or_960430),
            {  0xB, 0x0, 0x0, 0xff,     0x1f, 0xfff0, 0x4, 0x0,         0x20, 0x1358, 0x2222, 0x1800,     0x400, 0xb216, 0xa, 0x0,
               0x0, 0xff, 0x4, 0x0,     0x20, 0x127c, 0x2020, 0x1900,   0x400, 0x3a16, 0x6, 0x0,          0x0, 0xff, 0x9, 0x0 }
        },
#ifdef NOTNEEDED
        {
            static_cast<uint16_t>(SFA2_SupportedROMRevision::SFA2_Unsupported), // SFZ2A_960805,
            {   0x68b0, 0x0000, 0x6893, 0x2000,     0x68c7, 0x1000, 0x68c4, 0x1000,
                0x68d5, 0x0000, 0x0002, 0x0030,     0x0010, 0x1c00, 0x68e0, 0x1800,
                0x68e9, 0x0400, 0x67f2, 0x0100,     0x6878, 0x0500, 0x6883, 0x0000,
                0x686a, 0x0100, 0x58f6, 0x0000,     0x68d8, 0x0100, 0x58f7, 0x0000,  }
        },
#endif
        {
            static_cast<uint16_t>(SFA2_SupportedROMRevision::SFZ2A_960826),
            {   0x7677, 0x0000, 0x7678, 0x0000,     0x765d, 0x0100, 0x0002, 0x002b,
                0x0006, 0x1ea4, 0x7680, 0x1000,     0x7682, 0x7300, 0x2470, 0x0000,
                0x7688, 0x0000, 0x7687, 0x0000,     0x7679, 0x1100, 0x7686, 0x1000,
                0x0002, 0x0029, 0x0006, 0x1ea8,     0x7c21, 0x3020, 0x2520, 0x0000 }
        },
        {
            static_cast<uint16_t>(SFA2_SupportedROMRevision::SFA2_Hack_220203),
            {   0x0030, 0x00c0, 0x0030, 0x1700,     0x0030, 0x2d40, 0x0030, 0x4380,
                0x0030, 0x59c0, 0x0030, 0x7000,     0x0030, 0x8640, 0x0030, 0x9c80,
                0x0030, 0xb2c0, 0x0030, 0xc900,     0x0030, 0xdf40, 0x0030, 0xf580,
                0x0031, 0x0bc0, 0x0031, 0x2200,     0x0031, 0x3840, 0x0031, 0x4e80 }
        },
    };

    const std::vector<ROMRevisionLookupData> rom8s =
    {
        {
            static_cast<uint16_t>(SFA2_SupportedROMRevision::SFA2_960229),
           { 0x111, 0x222, 0x333, 0x444,    0x555, 0x666, 0x777, 0x888,     0x999, 0xaaa, 0xbbb, 0xccc,    0xddd, 0xeee, 0xfff, 0x000,
             0x111, 0x222, 0x333, 0x444,    0x555, 0x666, 0x777, 0x888,     0x999, 0xaaa, 0xbbb, 0xccc,    0xddd, 0xeee, 0xfff, 0x000 }
        },
        {
            static_cast<uint16_t>(SFA2_SupportedROMRevision::SFA2_960306_or_960430),
            { 0x625, 0xfff, 0xffd, 0xdfa,    0xaf7, 0x6f4, 0x1e4, 0x1d9,    0x111, 0x333, 0x555, 0x888,    0xaaa, 0xccc, 0xfff, 0x000,
              0x413, 0xfff, 0xfef, 0xece,    0xead, 0xe8d, 0xd6c, 0xc5b,    0x111, 0x333, 0x555, 0x888,    0xaaa, 0xccc, 0xfff, 0x000 }
        },
#ifdef NOTNEEDED
        {
            static_cast<uint16_t>(SFA2_SupportedROMRevision::SFA2_Unsupported), //SFZ2A_960805,
            { 0x0c93, 0x0da3, 0x0eb5, 0x0cb6, 0x0ba5, 0x0a95, 0x0984, 0x0000,   0x0781, 0x0562, 0x0452, 0x0442, 0x0468, 0x0863, 0x0973, 0x0b83, 
              0x0c93, 0x0da3, 0x0765, 0x0446, 0x0457, 0x0567, 0x0653, 0x0000,   0x0781, 0x0562, 0x0452, 0x0442, 0x0332, 0x0543, 0x0443, 0x0432 }
        },
#endif
        {
            static_cast<uint16_t>(SFA2_SupportedROMRevision::SFZ2A_960826),
            { 0x0777, 0x0000, 0x0aac, 0x0555, 0x0019, 0x0430, 0x0b96, 0x0ca5,   0x0db6, 0x0ec6, 0x0fd7, 0x0fd8, 0x0bbb, 0x0aaa, 0x0999, 0x0888,
              0x0777, 0x0000, 0x0974, 0x0445, 0x0532, 0x0743, 0x0954, 0x0b65,   0x0d87, 0x0b96, 0x0ca5, 0x0db6, 0x0ec6, 0x0bbb, 0x0aaa, 0x0999 }
        },
    };

    bool fFoundMatch = false;

    if (UsePaletteSetForCharacters())
    {
        fFoundMatch = FindROMVersionFromByteSniff(LoadedFile, rom7s, detectedROMVersion);
    }
    else
    {
        fFoundMatch = FindROMVersionFromByteSniff(LoadedFile, rom8s, detectedROMVersion, 0xc0);
    }

    if (!fFoundMatch)
    {
        OutputDebugString(L"\tThis is an unknown SFA2 ROM.\n");

        CString strMessage;
        if (strMessage.LoadString(IDS_ERROR_UNKNOWNROM))
        {
            MessageBox(g_appHWnd, strMessage.GetString(), GetHost()->GetAppName(), MB_ICONWARNING);
        }

        detectedROMVersion = static_cast<uint16_t>(SFA2_SupportedROMRevision::SFA2_Unsupported);
    }

    return static_cast<SFA2_SupportedROMRevision>(detectedROMVersion);
}

// This dumps the headers from the Glasses expansion version of SFA2 provided
// a pointer to the current version.  This sniffs and processes the layout:
// if that changes this code would need to change.
void DumpSFA2_Hack_Headers(CFile* LoadedFile)
{
    // jump to ryu pal 00
    LONGLONG currpos = 0x100;
    LoadedFile->Seek(currpos, CFile::begin);

    char aszBuffer[MAX_PATH];

    constexpr auto strreadlength = 16;
    constexpr auto colorreadlength = 32;

    struct core_decoder_sheet
    {
        LPCSTR pszTableName;
        LPCSTR pszJedString;
        LPCSTR pszCharacterName;
        LPCSTR pszImageString = "";
        LPCSTR pszExtraOneName = "Extra 1";
        LPCSTR pszExtraOneString = "";
        LPCSTR pszExtraTwoName = "Extra 2";
        LPCSTR pszExtraTwoString = "";
        LPCSTR pszPairingString = "";
    };

    struct portrait_decoder_sheet
    {
        LPCSTR pszTableName;
        LPCSTR pszJedString;
        LPCSTR pszCharacterName;
        LPCSTR pszImageString;
    };

    struct specialmove_decoder_sheet
    {
        LPCSTR pszTableName;
        LPCSTR pszJedString;
        LPCSTR pszDescription;
        LPCSTR pszEffectName;
        uint16_t nCountExtras;
        LPCSTR pszImageString;
    };

    const std::vector<core_decoder_sheet> sfa2_hack_core_charlist =
    {
        { "RYU", "RYU PALETTE 00 ", "Ryu", ", indexCPS2Sprites_Ryu, 0x00", "Hadoken", ", indexCPS2Sprites_Ryu, 0x01", "Red Hadoken", ", indexCPS2Sprites_Ryu, 0x01" },
        { "KEN", "KEN PALETTE 00 ", "Ken", ", indexCPS2Sprites_Ken, 0x00", "Extra 1", ", indexCPS2Sprites_Ken, 0x01", "Extra 2", ", indexCPS2Sprites_Ken, 0x08" },
        { "AKUMA",  "AKM PALETTE 00 ", "Akuma", ", indexCPS2Sprites_Akuma, 0x00", "Extra 1", ", indexCPS2Sprites_Akuma, 0x0c" },
        { "NASH",  "NSH PALETTE 00 ", "Nash", ", indexCPS2Sprites_Charlie, 0x00", "Sonic Boom", ", indexCPS2Sprites_Charlie, 0x01", "Flash Kick", ", indexCPS2Sprites_Charlie, 0x02" },
        { "CHUN",  "CHN PALETTE 00 ", "Chun-Li", ", indexCPS2Sprites_ChunLi, 0x0c", "Keiokuken (shades)", ", indexCPS2Sprites_ChunLi, 0x0f, &pairPrevious", "Extra 2", ", indexCPS2Sprites_ChunLi, 0x02", ", &pairNext" },
        { "ADON",  "ADN PALETTE 00 ", "Adon", ", indexCPS2Sprites_Adon, 0x00", "Extra 1", ", indexCPS2Sprites_Adon, 0x01" },
        { "SODOM",  "SDM PALETTE 00 ", "Sodom", ", indexCPS2Sprites_Sodom, 0x02", "Slashes", ", indexCPS2Sprites_Sodom, 0x04, &pairPrevious", "Intro", ", indexCPS2Sprites_Sodom, 0x03", ", &pairNext" },
        { "GUY",  "GUY PALETTE 00 ", "Guy", ", indexCPS2Sprites_Guy, 0x00", "Extra 1", "", "Barrels", ", indexCPS2Sprites_Guy, 0x02" },
        { "BIRDIE",  "BRD PALETTE 00 ", "Birdie", ", indexCPS2Sprites_Birdie, 0x00", "Extra 1", ", indexCPS2Sprites_Birdie, 0x00" },
        { "ROSE",  "RSE PALETTE 00 ", "Rose", ", indexCPS2Sprites_Rose, 0x00", "Soul Power 1", ", indexCPS2Sprites_Rose, 0x02", "Soul Power 2", ", indexCPS2Sprites_Rose, 0x02" },
        { "BISON",  "DIC PALETTE 00 ", "M.Bison", ", indexCPS2Sprites_Bison, 0x00", "Extra 1", ", indexCPS2Sprites_Bison, 0x08", "Extra 2", ", indexCPS2Sprites_Bison, 0x09" },
        { "SAGAT",  "SAG PALETTE 00 ", "Sagat", ", indexCPS2Sprites_Sagat, 0x00", "Extra 1", ", indexCPS2Sprites_Sagat, 0x01", "Extra 2", ", indexCPS2Sprites_Sagat, 0x02" },
        { "DAN",  "DAN PALETTE 00 ", "Dan", ", indexCPS2Sprites_Dan, 0x00", "Extra 1", ", indexCPS2Sprites_Dan, 0x01" },
        { "SAKURA",  "SAK PALETTE 00 ", "Sakura", ", indexCPS2Sprites_Sakura, 0x00", "Extra 1", ", indexCPS2Sprites_Sakura, 0x01", "Extra 2", ", indexCPS2Sprites_Sakura, 0x02" },
        { "ROLENTO",  "ROL PALETTE 00 ", "Rolento", ", indexCPS2Sprites_Rolento, 0x00" },
        { "DHALSIM",  "SIM PALETTE 00 ", "Dhalsim", ", indexCPS2Sprites_Dhalsim, 0x00", "Extra 1", ", indexCPS2Sprites_Dhalsim, 0x01", "Sally", ", indexCPS2Sprites_Dhalsim, 0x02" },
        { "ZANGIEF",  "ZAN PALETTE 00 ", "Zangief", ", indexCPS2Sprites_Zangief, 0x00", "Banishing Fist", ", indexCPS2Sprites_Zangief, 0x01" },
        { "GEN",  "GEN PALETTE 00 ", "Gen", ", indexCPS2Sprites_Gen, 0x00", "Extra 1", ", indexCPS2Sprites_Gen, 0x00", "Extra 2", ", indexCPS2Sprites_Gen, 0x00" },
        { "CHUNLI_OG",  "S2C PALETTE 00 ", "Chun-Li (Original)", ", indexCPS2Sprites_ChunLi, 0x00", "Keiokuken (shades)", ", indexCPS2Sprites_ChunLi, 0x0f, &pairPrevious", "Extra 2", ", indexCPS2Sprites_ChunLi, 0x02", ", &pairNext" },
        // SNA PALETTE 00 is unused
        { "WWGIEF",  "WWG PALETTE 00 ", "Zangief (WW)", ", indexCPS2Sprites_Zangief, 0x00", "Banishing Fist", ", indexCPS2Sprites_Zangief, 0x01" },
        { "WWSIM",  "WWS PALETTE 00 ", "Dhalsim (WW)", ", indexCPS2Sprites_Dhalsim, 0x00", "Extra 1", ", indexCPS2Sprites_Dhalsim, 0x01", "Sally", ", indexCPS2Sprites_Dhalsim, 0x02" },
        { "EVILRYU",  "ERY PALETTE 00 ", "Evil Ryu", ", indexCPS2Sprites_Ryu, 0x00", "Hadoken", ", indexCPS2Sprites_Ryu, 0x01", "Shoryuken" },
    };

    const std::vector<portrait_decoder_sheet> sfa2_hack_portrait_charlist =
    {
        { "RYU", "RYU PORT PAL 00", "Ryu", ", indexCPS2Sprites_Ryu" },
        { "KEN", "KEN PORT PAL 00", "Ken", ", indexCPS2Sprites_Ken" },
        { "AKUMA",  "AKM PORT PAL 00", "Akuma", ", indexCPS2Sprites_Akuma" },
        { "NASH",  "NSH PORT PAL 00", "Nash", ", indexCPS2Sprites_Charlie" },
        { "CHUN",  "CHN PORT PAL 00", "Chun-Li", ", indexCPS2Sprites_ChunLi" },
        { "ADON",  "ADN PORT PAL 00", "Adon", ", indexCPS2Sprites_Adon" },
        // Which sodom is this?
            { "SODOM",  "SDM PORT PAL 00", "Sodom", ", indexCPS2Sprites_Sodom" },
        { "GUY",  "GUY PORT PAL 00", "Guy", ", indexCPS2Sprites_Guy" },
        { "BIRDIE",  "BRD PORT PAL 00", "Birdie", ", indexCPS2Sprites_Birdie" },
        { "ROSE",  "RSE PORT PAL 00", "Rose", ", indexCPS2Sprites_Rose" },
        { "BISON",  "DIC PORT PAL 00", "M.Bison", ", indexCPS2Sprites_Bison" },
        { "SAGAT",  "SAG PORT PAL 00", "Sagat", ", indexCPS2Sprites_Sagat" },
        { "DAN",  "DAN PORT PAL 00", "Dan", ", indexCPS2Sprites_Dan" },
        { "SAKURA",  "SAK PORT PAL 00", "Sakura", ", indexCPS2Sprites_Sakura", },
        { "ROLENTO",  "ROL PORT PAL 00", "Rolento", ", indexCPS2Sprites_Rolento" },
        { "DHALSIM",  "SIM PORT PAL 00", "Dhalsim", ", indexCPS2Sprites_Dhalsim" },
        { "ZANGIEF",  "ZAN PORT PAL 00", "Zangief", ", indexCPS2Sprites_Zangief" },
        { "GEN",  "GEN PORT PAL 00", "Gen", ", indexCPS2Sprites_Gen",  },
        { "CHUNLI_OG",  "S2C PORT PAL 00", "Chun-Li (Original)", ", 0x1c" },
        // SNA PORT PAL 00 is unused
        { "WWGIEF",  "WWG PORT PAL 00", "Zangief (WW)", ", indexCPS2Sprites_Zangief" },
        { "WWSIM",  "WWS PORT PAL 00", "Dhalsim (WW)", ", indexCPS2Sprites_Dhalsim"  },
        { "EVILRYU",  "ERY PORT PAL 00", "Evil Ryu", ", indexCPS2Sprites_Ryu"  },
    };

    const std::vector<specialmove_decoder_sheet> sfa2_hack_specialmove_list =
    {
        { "ROSE_DRESS", "Rose MP Winpose", "Rose Extras", "Dress Winpose", 1, ", indexCPS2Sprites_Rose, 0x01" },
            // dress 1, 0x01
        { "AKUMAEXTRA", "Akuma Stuff    ", "Akuma Extras", "Akuma", 5, ", indexCPS2Sprites_Akuma" },
            // ?
        // { "",  "AKM TELE 06", "Akuma", ", indexCPS2Sprites_Akuma" },
        // { "",  "AKM TELE 07", "Akuma", ", indexCPS2Sprites_Akuma" },
        // { "",  "AKM TELE 08", "Akuma", ", indexCPS2Sprites_Akuma" },
        // { "",  "AKM TELE 09", "Akuma", ", indexCPS2Sprites_Akuma" },
        // { "",  "AKM TELE 0A", "Akuma", ", indexCPS2Sprites_Akuma" },
        // { "",  "AKM TELE 0B", "Akuma", ", indexCPS2Sprites_Akuma" },
        // { "",  "AKM TELE 0C", "Akuma", ", indexCPS2Sprites_Akuma" },
        // { "",  "AKM TELE 0D", "Akuma", ", indexCPS2Sprites_Akuma" },
        // { "",  "AKM TELE 0E", "Akuma", ", indexCPS2Sprites_Akuma" },
        // { "",  "AKM TELE 0F", "Akuma", ", indexCPS2Sprites_Akuma" },
        { "BIRDIE_HEADRUSH",  "Birdie Headrush", "Birdie Bullrush", "Bullrush", 3, ", indexCPS2Sprites_Birdie" },
        { "BISON_TELEPORT",  "DIC EFFECTS    ", "M.Bison Teleport", "Teleport", 4, ", indexCPS2Sprites_Bison" },
        // Teleport 1-4, 00
        { "SIM_TELEPORT",  "Sim Tele start ", "Dhalsim Teleport", "Teleport", 5, ", indexCPS2Sprites_Dhalsim" },
        // Teleport 1-5, image 00
    };

    while (LoadedFile->Read(aszBuffer, strreadlength))
    {
        // only uses 00-0f, not the second pair of sixteen
        CStringA strout;

        if (isalpha((unsigned char)aszBuffer[0]) &&
            (isalpha((unsigned char)aszBuffer[1]) || (aszBuffer[1] == '2')) &&
            isalpha((unsigned char)aszBuffer[2]) &&
            ((aszBuffer[3] == 0x20) || isalpha((unsigned char)aszBuffer[3])))
        {
            aszBuffer[15] = 0;

            // jed's marker for normal palette section termination
            if ((aszBuffer[0] == 'E') &&
                (aszBuffer[1] == 'N') &&
                (aszBuffer[2] == 'D'))
            {
                // we are palette complete for most stuff: only continue if you want PORTraits and effect palettes
                //break;
            }

            uint32_t nCharacterStart = uint32_t(currpos) + strreadlength - 0x02;
            if (strstr(aszBuffer, "PALETTE 00"))
            {
                for (const core_decoder_sheet& thischaracter : sfa2_hack_core_charlist)
                {
                    if (strcmp(thischaracter.pszJedString, aszBuffer) == 0)
                    {
                        // start of a2 section
                        for (const LPCWSTR &pszSFA2HButtonName : DEF_BUTTONLABEL_SFA2_HACK)
                        {
                            wchar_t szSafeButtonName[MAX_DESCRIPTION_LENGTH];
                            StruprRemoveNonASCII(szSafeButtonName, ARRAYSIZE(szSafeButtonName), pszSFA2HButtonName);

                            strout.Format("const sGame_PaletteDataset SFA2_HACK_%s_%S_PALETTES[] =\r\n{\r\n", thischaracter.pszTableName, szSafeButtonName);
                            OutputDebugStringA(strout);

                            strout.Format("    { L\"%s %S\", 0x%x, 0x%x%s%s },\r\n", thischaracter.pszCharacterName, pszSFA2HButtonName, nCharacterStart + (0x00 * colorreadlength), nCharacterStart + (0x01 * colorreadlength), thischaracter.pszImageString, thischaracter.pszPairingString);
                            OutputDebugStringA(strout);
                            strout.Format("    { L\"%s %S %s\", 0x%x, 0x%x%s },\r\n", thischaracter.pszCharacterName, pszSFA2HButtonName, thischaracter.pszExtraOneName, nCharacterStart + (0x01 * colorreadlength), nCharacterStart + (0x02 * colorreadlength), thischaracter.pszExtraOneString);
                            OutputDebugStringA(strout);
                            strout.Format("    { L\"%s %S %s\", 0x%x, 0x%x%s },\r\n", thischaracter.pszCharacterName, pszSFA2HButtonName, thischaracter.pszExtraTwoName, nCharacterStart + (0x02 * colorreadlength), nCharacterStart + (0x03 * colorreadlength), thischaracter.pszExtraTwoString);
                            OutputDebugStringA(strout);
                            strout.Format("    { L\"%s %S Super Trail Light\", 0x%x, 0x%x%s },\r\n", thischaracter.pszCharacterName, pszSFA2HButtonName, nCharacterStart + (0x03 * colorreadlength), nCharacterStart + (0x04 * colorreadlength), thischaracter.pszImageString);
                            OutputDebugStringA(strout);
                            strout.Format("    { L\"%s %S Super Trail Dark\", 0x%x, 0x%x%s },\r\n", thischaracter.pszCharacterName, pszSFA2HButtonName, nCharacterStart + (0x04 * colorreadlength), nCharacterStart + (0x05 * colorreadlength), thischaracter.pszImageString);
                            OutputDebugStringA(strout);

                            OutputDebugStringA("};\r\n\r\n");

                            // Move forward one character set + the string name
                            nCharacterStart += (0x05 * colorreadlength) + 0x10;
                        }

                        strout.Format("const sDescTreeNode SFA2_HACK_%s_COLLECTION[] =\r\n{\r\n", thischaracter.pszTableName);
                        OutputDebugStringA(strout);

                        for (const LPCWSTR& pszSFA2HButtonName : DEF_BUTTONLABEL_SFA2_HACK)
                        {
                            wchar_t szSafeButtonName[MAX_DESCRIPTION_LENGTH];
                            StruprRemoveNonASCII(szSafeButtonName, ARRAYSIZE(szSafeButtonName), pszSFA2HButtonName);
                            strout.Format("    { L\"%S\", DESC_NODETYPE_TREE, (void*)SFA2_HACK_%s_%S_PALETTES, ARRAYSIZE(SFA2_HACK_%s_%S_PALETTES) },\r\n", pszSFA2HButtonName, thischaracter.pszTableName, szSafeButtonName, thischaracter.pszTableName, szSafeButtonName);
                            OutputDebugStringA(strout);
                        };

                        OutputDebugStringA("};\r\n\r\n");
                    }
                }
            }
            else if (strstr(aszBuffer, "PAL 00")) // Portraits
            {
                for (const portrait_decoder_sheet& thisportrait : sfa2_hack_portrait_charlist)
                {
                    if (strcmp(thisportrait.pszJedString, aszBuffer) == 0)
                    {
                        strout.Format("const sGame_PaletteDataset SFA2_HACK_%s_PORTRAIT_PALETTES[] =\r\n{\r\n", thisportrait.pszTableName);
                        OutputDebugStringA(strout);

                        for (const LPCWSTR& pszSFA2HButtonName : DEF_BUTTONLABEL_SFA2_HACK)
                        {
                            strout.Format("    { L\"%s %S\", 0x%x, 0x%x, indexCPS2Sprites_SFA2Portraits%s },\r\n", thisportrait.pszCharacterName, pszSFA2HButtonName, 
                                    nCharacterStart + (0x00 * colorreadlength), nCharacterStart + (0x03 * colorreadlength), thisportrait.pszImageString);
                            OutputDebugStringA(strout);

                            // Move forward one character set + the string name
                            nCharacterStart += (0x03 * colorreadlength) + 0x10;
                        }

                        OutputDebugStringA("};\r\n\r\n");
                    }
                }
            }
            else 
            {
                for (const specialmove_decoder_sheet& thismove : sfa2_hack_specialmove_list)
                {
                    if (strcmp(thismove.pszJedString, aszBuffer) == 0)
                    {
                        bool fShouldPrintCollectionData = false;

                        if (strcmp(thismove.pszTableName, "ROSE_DRESS") == 0)
                        {
                            for (const LPCWSTR& pszSFA2HButtonName : DEF_BUTTONLABEL_SFA2_HACK)
                            {
                                wchar_t szSafeButtonName[MAX_DESCRIPTION_LENGTH];
                                StruprRemoveNonASCII(szSafeButtonName, ARRAYSIZE(szSafeButtonName), pszSFA2HButtonName);

                                strout.Format("const sGame_PaletteDataset SFA2_HACK_%s_%S_PALETTES[] =\r\n{\r\n", thismove.pszTableName, szSafeButtonName);
                                OutputDebugStringA(strout);

                                strout.Format("    { L\"%s %S\", 0x%x, 0x%x%s },\r\n", thismove.pszEffectName, pszSFA2HButtonName,
                                    nCharacterStart + (0x00 * colorreadlength), nCharacterStart + (0x01 * colorreadlength), thismove.pszImageString);
                                OutputDebugStringA(strout);

                                OutputDebugStringA("};\r\n\r\n");

                                // Move forward one character set
                                nCharacterStart += colorreadlength;

                                fShouldPrintCollectionData = true;
                            }
                        }
                        else if (strcmp(thismove.pszTableName, "AKUMAEXTRA") == 0)
                        {
                            for (const LPCWSTR& pszSFA2HButtonName : DEF_BUTTONLABEL_SFA2_HACK)
                            {
                                wchar_t szSafeButtonName[MAX_DESCRIPTION_LENGTH];
                                StruprRemoveNonASCII(szSafeButtonName, ARRAYSIZE(szSafeButtonName), pszSFA2HButtonName);

                                strout.Format("const sGame_PaletteDataset SFA2_HACK_%s_%S_PALETTES[] =\r\n{\r\n", thismove.pszTableName, szSafeButtonName);
                                OutputDebugStringA(strout);

                                strout.Format("    { L\"%s %S\", 0x%x, 0x%x%s, 0x00 },\r\n", thismove.pszEffectName, pszSFA2HButtonName, nCharacterStart + (0x00 * colorreadlength), nCharacterStart + (0x01 * colorreadlength), thismove.pszImageString);
                                OutputDebugStringA(strout);
                                strout.Format("    { L\"%s %S Hadoken\", 0x%x, 0x%x%s, 0x01 },\r\n", thismove.pszEffectName, pszSFA2HButtonName, nCharacterStart + (0x01 * colorreadlength), nCharacterStart + (0x02 * colorreadlength), thismove.pszImageString);
                                OutputDebugStringA(strout);
                                strout.Format("    { L\"%s %S Shoryuken (Flame)\", 0x%x, 0x%x },\r\n", thismove.pszEffectName, pszSFA2HButtonName, nCharacterStart + (0x02 * colorreadlength), nCharacterStart + (0x03 * colorreadlength));
                                OutputDebugStringA(strout);
                                strout.Format("    { L\"%s %S Super Trail Light\", 0x%x, 0x%x%s, 0x00 },\r\n", thismove.pszEffectName, pszSFA2HButtonName, nCharacterStart + (0x03 * colorreadlength), nCharacterStart + (0x04 * colorreadlength), thismove.pszImageString);
                                OutputDebugStringA(strout);
                                strout.Format("    { L\"%s %S Super Trail Dark\", 0x%x, 0x%x%s, 0x00 },\r\n", thismove.pszEffectName, pszSFA2HButtonName, nCharacterStart + (0x04 * colorreadlength), nCharacterStart + (0x05 * colorreadlength), thismove.pszImageString);
                                OutputDebugStringA(strout);

                                OutputDebugStringA("};\r\n\r\n");

                                // Move forward one character set
                                nCharacterStart += (0x05 * colorreadlength);

                                fShouldPrintCollectionData = true;
                            }
                        }
                        else if ((strcmp(thismove.pszTableName, "BIRDIE_HEADRUSH") == 0) ||
                                    (strcmp(thismove.pszTableName, "BISON_TELEPORT") == 0) ||
                                    (strcmp(thismove.pszTableName, "SIM_TELEPORT") == 0))
                        {
                            for (const LPCWSTR& pszSFA2HButtonName : DEF_BUTTONLABEL_SFA2_HACK)
                            {
                                wchar_t szSafeButtonName[MAX_DESCRIPTION_LENGTH];
                                StruprRemoveNonASCII(szSafeButtonName, ARRAYSIZE(szSafeButtonName), pszSFA2HButtonName);

                                strout.Format("const sGame_PaletteDataset SFA2_HACK_%s_%S_PALETTES[] =\r\n{\r\n", thismove.pszTableName, szSafeButtonName);
                                OutputDebugStringA(strout);

                                for (int iPos = 0; iPos < thismove.nCountExtras; iPos++)
                                {
                                    strout.Format("    { L\"%s %S %u\", 0x%x, 0x%x%s },\r\n", thismove.pszEffectName, pszSFA2HButtonName, iPos + 1,
                                        nCharacterStart + (iPos * colorreadlength), nCharacterStart + ((iPos + 1) * colorreadlength), thismove.pszImageString);
                                    OutputDebugStringA(strout);
                                }

                                OutputDebugStringA("};\r\n\r\n");

                                // Move forward one character set
                                nCharacterStart += (thismove.nCountExtras * colorreadlength);

                                fShouldPrintCollectionData = true;
                            }
                        }

                        if (fShouldPrintCollectionData)
                        {
                            strout.Format("const sDescTreeNode SFA2_HACK_%s_COLLECTION[] =\r\n{\r\n", thismove.pszTableName);
                            OutputDebugStringA(strout);

                            for (const LPCWSTR& pszSFA2HButtonName : DEF_BUTTONLABEL_SFA2_HACK)
                            {
                                wchar_t szSafeButtonName[MAX_DESCRIPTION_LENGTH];
                                StruprRemoveNonASCII(szSafeButtonName, ARRAYSIZE(szSafeButtonName), pszSFA2HButtonName);
                                strout.Format("    { L\"%S\", DESC_NODETYPE_TREE, (void*)SFA2_HACK_%s_%S_PALETTES, ARRAYSIZE(SFA2_HACK_%s_%S_PALETTES) },\r\n", pszSFA2HButtonName, thismove.pszTableName, szSafeButtonName, thismove.pszTableName, szSafeButtonName);
                                OutputDebugStringA(strout);
                            };

                            OutputDebugStringA("};\r\n\r\n");
                        }
                    }
                }
            }
        }

        currpos += strreadlength;
    }

    static bool s_fhaveprintedunits = false;

    if (!s_fhaveprintedunits)
    {
        CStringA strout;

        s_fhaveprintedunits = true;

        OutputDebugStringA("const sDescTreeNode SFA2_HACK_PORTRAIT_COLLECTION[] =\r\n{\r\n");

        for (const portrait_decoder_sheet& thisportrait : sfa2_hack_portrait_charlist)
        {
            strout.Format("    { L\"%s\", DESC_NODETYPE_TREE, (void*)SFA2_HACK_%s_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_HACK_%s_PORTRAIT_PALETTES) },\r\n", thisportrait.pszCharacterName, thisportrait.pszTableName, thisportrait.pszTableName);
            OutputDebugStringA(strout);
        }

        OutputDebugStringA("};\r\n\r\n");

        OutputDebugStringA("const sDescTreeNode SFA2_HACK_UNITS_09[] =\r\n{\r\n");

        for (const core_decoder_sheet& thischaracter : sfa2_hack_core_charlist)
        {
            strout.Format("    { L\"%s\", DESC_NODETYPE_TREE, (void*)SFA2_HACK_%s_COLLECTION, ARRAYSIZE(SFA2_HACK_%s_COLLECTION) },\r\n", thischaracter.pszCharacterName, thischaracter.pszTableName, thischaracter.pszTableName);
            OutputDebugStringA(strout);
        }

        for (const specialmove_decoder_sheet& thismove : sfa2_hack_specialmove_list)
        {
            strout.Format("    { L\"%s\", DESC_NODETYPE_TREE, (void*)SFA2_HACK_%s_COLLECTION, ARRAYSIZE(SFA2_HACK_%s_COLLECTION) },\r\n", thismove.pszDescription, thismove.pszTableName, thismove.pszTableName);
            OutputDebugStringA(strout);
        }

        strout.Format("    { L\"Portraits\", DESC_NODETYPE_TREE, (void*)SFA2_HACK_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_HACK_PORTRAIT_COLLECTION) },\r\n");
        OutputDebugStringA(strout);

        OutputDebugStringA("};\r\n\r\n");
    }
}

BOOL CGame_SFA2_A::LoadFile(CFile* LoadedFile, uint32_t nUnitId)
{
    // DumpSFA2_Hack_Headers(LoadedFile);

    SFA2_SupportedROMRevision romRevision = GetSFA2ROMVersion(LoadedFile);

    if (m_currentSFA2ROMRevision != romRevision)
    {
        m_currentSFA2ROMRevision = romRevision;
        
        // The tree is actually different for the ROMs, so do a full tree reset
        ResetActiveSFA2Revision();
    }

    for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];

        // We're using a pre-sorted layout
        rgUnitRedir[nUnitCtr] = nUnitCtr;

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];

            LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

            LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_SFA2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    uint32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    int nTargetImgId = 0;
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            // Right now most of SFA2 is all six palettes within one node.
            // These strings are the friendly names for DEF_BUTTONLABEL_SFA2
            if ((_wcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[0]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[1]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[2]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[3]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[4]) == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, SFA2_ColorOptionNames[5]) == 0))
            {
                nSrcAmt = min(GetCollectionCountForUnit(NodeGet->uUnitId), 6); // This min is specifically needed for SFA2 due to Shin Akuma's variable node count between rev 2 and 3
                                                                               // In rev 2, it's just Punch.  In rev 3, it's all colors as expected.
                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in Punch
                    nSrcStart -= nNodeIncrement;
                }
            }
            else
            {
                bool fIsCorePalette = false;

                nSrcAmt = 1;

                for (uint32_t nOptionsToTest = 0; nOptionsToTest < pButtonLabelSet.size(); nOptionsToTest++)
                {
                    if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                    {
                        fIsCorePalette = true;
                        break;
                    }
                }

                if (fIsCorePalette)
                {
                    // We've confirmed that the string matches one of the indicated button names.  Since we're doing a color per node, ensure we only ever
                    // expose to max node.  This covers the situation where a game might have LP/LK but not LP/LK/MP/MK out of a set.
                    nSrcAmt = min(static_cast<uint32_t>(pButtonLabelSet.size()), GetCollectionCountForUnit(NodeGet->uUnitId));
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in LP
                        nSrcStart -= nNodeIncrement;
                    }
                }
            }
        }

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                {
                    const uint32_t nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                    fShouldUseAlternateLoadLogic = true;
                    sImgTicket* pImgArray = nullptr;

                    for (uint32_t nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
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
                else
                {
                    int8_t nDeltaToSecondElement = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                    fShouldUseAlternateLoadLogic = true;

                    uint16_t nPeerPaletteIdInNode = Node03 + nDeltaToSecondElement;

                    uint32_t nPeerPaletteIdInUnit = NodeGet->uPalId + nDeltaToSecondElement;

                    if (fShouldUseAlternateLoadLogic)
                    {
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, nPeerPaletteIdInUnit);

                        if (paletteDataSetToJoin)
                        {
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse)
                                )
                            );

                            //Set each palette
                            std::vector<sDescNode*> JoinedNode = {
                                GetMainTree()->GetDescNode(NodeGet->uUnitId, Node02, Node03, -1),
                                GetMainTree()->GetDescNode(NodeGet->uUnitId, Node02, nPeerPaletteIdInNode, -1)
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
