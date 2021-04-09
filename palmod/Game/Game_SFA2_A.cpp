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

CDescTree CGame_SFA2_A::MainDescTree_07_Rev1 = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_07_Rev2 = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_07_SFZ2A = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_08_Rev1 = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_08_Rev2 = nullptr;
CDescTree CGame_SFA2_A::MainDescTree_08_SFZ2A = nullptr;

int CGame_SFA2_A::rgExtraCountAll_07_Rev1[SFA2_A_NUM_IND_07_REV1 + 1] = { -1 };
int CGame_SFA2_A::rgExtraCountAll_07_Rev2[SFA2_A_NUM_IND_07_REV2 + 1] = { -1 };
int CGame_SFA2_A::rgExtraCountAll_07_SFZ2A[SFZ2A_A_NUM_IND_07 + 1] = { -1 };
int CGame_SFA2_A::rgExtraCountAll_08_Rev1[SFA2_A_NUM_IND_08_REV1 + 1] = { -1 };
int CGame_SFA2_A::rgExtraCountAll_08_Rev2[SFA2_A_NUM_IND_08_REV2 + 1] = { -1 };
int CGame_SFA2_A::rgExtraCountAll_08_SFZ2A[SFZ2A_A_NUM_IND_08 + 1] = { -1 };

int CGame_SFA2_A::rgExtraLoc_07_Rev1[SFA2_A_NUM_IND_07_REV1 + 1] = { -1 };
int CGame_SFA2_A::rgExtraLoc_07_Rev2[SFA2_A_NUM_IND_07_REV2 + 1] = { -1 };
int CGame_SFA2_A::rgExtraLoc_07_SFZ2A[SFZ2A_A_NUM_IND_07 + 1] = { -1 };
int CGame_SFA2_A::rgExtraLoc_08_Rev1[SFA2_A_NUM_IND_08_REV1 + 1] = { -1 };
int CGame_SFA2_A::rgExtraLoc_08_Rev2[SFA2_A_NUM_IND_08_REV2 + 1] = { -1 };
int CGame_SFA2_A::rgExtraLoc_08_SFZ2A[SFZ2A_A_NUM_IND_08 + 1] = { -1 };

int CGame_SFA2_A::m_nSFA2SelectedRom = 7;
SFA2_SupportedROMRevision CGame_SFA2_A::m_currentSFA2ROMRevision = SFA2_SupportedROMRevision::SFA2_960229;
UINT32 CGame_SFA2_A::m_nTotalPaletteCountForSFA2_07_Rev1 = 0;
UINT32 CGame_SFA2_A::m_nTotalPaletteCountForSFA2_07_Rev2 = 0;
UINT32 CGame_SFA2_A::m_nTotalPaletteCountForSFZ2A_07 = 0;
UINT32 CGame_SFA2_A::m_nTotalPaletteCountForSFA2_08_Rev1 = 0;
UINT32 CGame_SFA2_A::m_nTotalPaletteCountForSFA2_08_Rev2 = 0;
UINT32 CGame_SFA2_A::m_nTotalPaletteCountForSFZ2A_08 = 0;

UINT32 CGame_SFA2_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_SFA2_A::m_nConfirmedROMSize = -1;

void CGame_SFA2_A::InitializeStatics()
{
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07_REV1);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07_REV2);
    safe_delete_array(CGame_SFA2_A::SFZ2A_A_EXTRA_CUSTOM_07);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08_REV1);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08_REV2);
    safe_delete_array(CGame_SFA2_A::SFZ2A_A_EXTRA_CUSTOM_08);

    memset(rgExtraCountAll_07_Rev1, -1, sizeof(rgExtraCountAll_07_Rev1));
    memset(rgExtraCountAll_07_Rev2, -1, sizeof(rgExtraCountAll_07_Rev2));
    memset(rgExtraCountAll_07_SFZ2A, -1, sizeof(rgExtraCountAll_07_SFZ2A));
    memset(rgExtraCountAll_08_Rev1, -1, sizeof(rgExtraCountAll_08_Rev1));
    memset(rgExtraCountAll_08_Rev2, -1, sizeof(rgExtraCountAll_08_Rev2));
    memset(rgExtraCountAll_08_SFZ2A, -1, sizeof(rgExtraCountAll_08_SFZ2A));

    memset(rgExtraLoc_07_Rev1, -1, sizeof(rgExtraLoc_07_Rev1));
    memset(rgExtraLoc_07_Rev2, -1, sizeof(rgExtraLoc_07_Rev2));
    memset(rgExtraLoc_07_SFZ2A, -1, sizeof(rgExtraLoc_07_SFZ2A));
    memset(rgExtraLoc_08_Rev1, -1, sizeof(rgExtraLoc_08_Rev1));
    memset(rgExtraLoc_08_Rev2, -1, sizeof(rgExtraLoc_08_Rev2));
    memset(rgExtraLoc_08_SFZ2A, -1, sizeof(rgExtraLoc_08_SFZ2A));

    MainDescTree_07_Rev1.SetRootTree(CGame_SFA2_A::InitDescTree(7, SFA2_SupportedROMRevision::SFA2_960229));
    MainDescTree_07_Rev2.SetRootTree(CGame_SFA2_A::InitDescTree(7, SFA2_SupportedROMRevision::SFA2_960306_or_960430));
    MainDescTree_07_SFZ2A.SetRootTree(CGame_SFA2_A::InitDescTree(7, SFA2_SupportedROMRevision::SFZ2A_960826));
    MainDescTree_08_Rev1.SetRootTree(CGame_SFA2_A::InitDescTree(8, SFA2_SupportedROMRevision::SFA2_960229));
    MainDescTree_08_Rev2.SetRootTree(CGame_SFA2_A::InitDescTree(8, SFA2_SupportedROMRevision::SFA2_960306_or_960430));
    MainDescTree_08_SFZ2A.SetRootTree(CGame_SFA2_A::InitDescTree(8, SFA2_SupportedROMRevision::SFZ2A_960826));
}

void CGame_SFA2_A::ResetActiveSFA2Revision()
{
    ClearDataBuffer();

    const UINT32 nSafeCountFor07_Rev1 = 933;
    const UINT32 nSafeCountFor07_Rev2 = 1055;
    const UINT32 nSafeCountFor07_SFZ2A = 1342;
    const UINT32 nSafeCountFor08_Rev1 = 255;
    const UINT32 nSafeCountFor08_Rev2 = 299;
    const UINT32 nSafeCountFor08_SFZ2A = 345;

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
        };
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
        default:
            m_nTotalInternalUnits = SFA2_A_NUM_IND_08_REV1;
            m_nExtraUnit = SFA2_A_EXTRALOC_08_REV1;
            m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + nSafeCountFor08_Rev1;
            m_nTotalPaletteCount = m_nTotalPaletteCountForSFA2_08_Rev1;
            break;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
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

    const UINT32 nLowestPaletteIn07 = 0x2C000;
    const UINT32 nLowestPaletteIn08 = 0x1260;

    m_nLowestKnownPaletteRomLocation = UsePaletteSetForCharacters() ? nLowestPaletteIn07 : nLowestPaletteIn08;

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    //Create the redirect buffer
    safe_delete_array(rgUnitRedir);
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    InitDataBuffer();
}

CGame_SFA2_A::CGame_SFA2_A(UINT32 nConfirmedROMSize, int nSFA2RomToLoad)
{
    createPalOptions = { OFFSET_PALETTE_BY_ONE, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_12A);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    InitializeStatics();

    m_nSFA2SelectedRom = (nSFA2RomToLoad == 7) ? 7 : 8;
    m_pszExtraFilename = UsePaletteSetForCharacters() ? EXTRA_FILENAME_SFA2_07 : EXTRA_FILENAME_SFA2_08;

    CString strMessage;
    strMessage.Format(L"CGame_SFA2_A::CGame_SFA2_A: Loading for the %s ROM\n", (m_nSFA2SelectedRom == 7) ? L"07" : L"08");
    OutputDebugString(strMessage);

    ResetActiveSFA2Revision();

    //Set game information
    nGameFlag = SFA2_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = SFA2_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(SFA2_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_SFA2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_SFA2);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SFA2_A::~CGame_SFA2_A(void)
{
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07_REV1);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_07_REV2);
    safe_delete_array(CGame_SFA2_A::SFZ2A_A_EXTRA_CUSTOM_07);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08_REV1);
    safe_delete_array(CGame_SFA2_A::SFA2_A_EXTRA_CUSTOM_08_REV2);
    safe_delete_array(CGame_SFA2_A::SFZ2A_A_EXTRA_CUSTOM_08);
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

UINT32 CGame_SFA2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        // Street Fighter Alpha 2 variants...
        // Since the character list changes between revisions, the offsets do as well. 
        // The offset logic is handled in LoadSpecificPaletteData
        { L"SFA2 Rev 1 (Arcade)", L"sz2.07", 0x8e184246, 0 },
        { L"SFA2 Rev 1 (Arcade)", L"sz2.08", 0x0fe8585d, 0 },

        { L"SFA2 Rev 2 (Arcade)(USA)", L"sz2u.07", 0x5de01cc5, 0 },
        { L"SFA2 Rev 2 (Arcade)(USA)", L"sz2u.08", 0xbea11d56, 0 },

        { L"SFA2 960227 (Arcade)(Asia)", L"sz2a.07", 0x0aed2494, 0 },
        { L"SFA2 960227 (Arcade)(Asia)", L"sz2j.07a", 0xd910b2a2, 0 },

        { L"SFZ2A 960826 (Arcade)(Asia)", L"szaa.07", 0x5de01cc5, 0 },
        { L"SFZ2A 960826 (Arcade)(Asia)", L"szaa.08", 0xbea11d56, 0 },

        { L"SFZA2 960813 (Arcade)(B/H)", L"sza.07", 0xe9430762, 0 },
        { L"SFZA2 960813 (Arcade)(B/H)", L"sza.08", 0xb65711a9, 0 },

        { L"SFZA2 960805 (Arcade)(Japan)", L"szaj.07a", 0x975dcb3e, 0 },
        { L"SFZA2 960805 (Arcade)(Japan)", L"szaj.08a", 0xdc73f2d7, 0 },

        { L"SFZ2 960304 (Arcade)(Brazil)", L"sz2b.07", 0x947e8ac6, 0 },
        { L"SFZ2 960531 (Arcade)(Brazil)", L"sz2b.07a", 0x7d19d5ec, 0 },
        { L"SFZ2 (Arcade)(Brazil)", L"sz2b.08", 0x92b66e01, 0 },

        { L"SFZ2 960403 (Arcade)(Hispanic)", L"sz2h.07", 0x947e8ac6, 0 },
        { L"SFZ2 960403 (Arcade)(Hispanic)", L"sz2h.08", 0x92b66e01, 0 },

        { L"SFZ2 960403 (Arcade)(Japan)", L"sz2j.07b", 0x6352f038, 0 },
        { L"SFZ2 960403 (Arcade)(Japan)", L"sz2j.08b", 0x92b66e01, 0 },
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

int CGame_SFA2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
        {
            if (rgExtraCountAll_07_Rev1[0] == -1)
            {
                int nDefCtr = 0;
                memset(rgExtraCountAll_07_Rev1, 0, (SFA2_A_NUM_IND_07_REV1 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    rgExtraCountAll_07_Rev1[pCurrDef->uUnitN]++;

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraCountAll_07_Rev1[nUnitId];
        }
        case SFA2_SupportedROMRevision::SFZ2A_960826:
        default:
        {
            if (rgExtraCountAll_07_SFZ2A[0] == -1)
            {
                int nDefCtr = 0;
                memset(rgExtraCountAll_07_SFZ2A, 0, (SFZ2A_A_NUM_IND_07 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    rgExtraCountAll_07_SFZ2A[pCurrDef->uUnitN]++;

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraCountAll_07_SFZ2A[nUnitId];
        }
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        {
            if (rgExtraCountAll_07_Rev2[0] == -1)
            {
                int nDefCtr = 0;
                memset(rgExtraCountAll_07_Rev2, 0, (SFA2_A_NUM_IND_07_REV2 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    rgExtraCountAll_07_Rev2[pCurrDef->uUnitN]++;

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraCountAll_07_Rev2[nUnitId];
        }
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
        {
            if (rgExtraCountAll_08_Rev1[0] == -1)
            {
                int nDefCtr = 0;
                memset(rgExtraCountAll_08_Rev1, 0, (SFA2_A_NUM_IND_08_REV1 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    rgExtraCountAll_08_Rev1[pCurrDef->uUnitN]++;

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraCountAll_08_Rev1[nUnitId];
        }
        default:
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        {
            if (rgExtraCountAll_08_Rev2[0] == -1)
            {
                int nDefCtr = 0;
                memset(rgExtraCountAll_08_Rev2, 0, (SFA2_A_NUM_IND_08_REV2 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    rgExtraCountAll_08_Rev2[pCurrDef->uUnitN]++;

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraCountAll_08_Rev2[nUnitId];
        }
        case SFA2_SupportedROMRevision::SFZ2A_960826:
        {
            if (rgExtraCountAll_08_SFZ2A[0] == -1)
            {
                int nDefCtr = 0;
                memset(rgExtraCountAll_08_SFZ2A, 0, (SFZ2A_A_NUM_IND_08 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    rgExtraCountAll_08_SFZ2A[pCurrDef->uUnitN]++;

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraCountAll_08_SFZ2A[nUnitId];
        }
        }
    }
}

int CGame_SFA2_A::GetExtraLoc(UINT16 nUnitId)
{
    if (UsePaletteSetForCharacters())
    {
        if (m_currentSFA2ROMRevision == SFA2_SupportedROMRevision::SFA2_960229)
        {
            if (rgExtraLoc_07_Rev1[0] == -1)
            {
                int nDefCtr = 0;
                int nCurrUnit = UNIT_START_VALUE;
                memset(rgExtraLoc_07_Rev1, 0, (SFA2_A_NUM_IND_07_REV1 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    if (pCurrDef->uUnitN != nCurrUnit)
                    {
                        rgExtraLoc_07_Rev1[pCurrDef->uUnitN] = nDefCtr;
                        nCurrUnit = pCurrDef->uUnitN;
                    }

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraLoc_07_Rev1[nUnitId];
        }
        else if (m_currentSFA2ROMRevision == SFA2_SupportedROMRevision::SFZ2A_960826)
        {
            if (rgExtraLoc_07_SFZ2A[0] == -1)
            {
                int nDefCtr = 0;
                int nCurrUnit = UNIT_START_VALUE;
                memset(rgExtraLoc_07_SFZ2A, 0, (SFZ2A_A_NUM_IND_07 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    if (pCurrDef->uUnitN != nCurrUnit)
                    {
                        rgExtraLoc_07_SFZ2A[pCurrDef->uUnitN] = nDefCtr;
                        nCurrUnit = pCurrDef->uUnitN;
                    }

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraLoc_07_SFZ2A[nUnitId];
        }
        else
        {
            if (rgExtraLoc_07_Rev2[0] == -1)
            {
                int nDefCtr = 0;
                int nCurrUnit = UNIT_START_VALUE;
                memset(rgExtraLoc_07_Rev2, 0, (SFA2_A_NUM_IND_07_REV2 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    if (pCurrDef->uUnitN != nCurrUnit)
                    {
                        rgExtraLoc_07_Rev2[pCurrDef->uUnitN] = nDefCtr;
                        nCurrUnit = pCurrDef->uUnitN;
                    }

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraLoc_07_Rev2[nUnitId];
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
        {
            if (rgExtraLoc_08_Rev1[0] == -1)
            {
                int nDefCtr = 0;
                int nCurrUnit = UNIT_START_VALUE;
                memset(rgExtraLoc_08_Rev1, 0, (SFA2_A_NUM_IND_08_REV1 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    if (pCurrDef->uUnitN != nCurrUnit)
                    {
                        rgExtraLoc_08_Rev1[pCurrDef->uUnitN] = nDefCtr;
                        nCurrUnit = pCurrDef->uUnitN;
                    }

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraLoc_08_Rev1[nUnitId];
        }
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
        {
            if (rgExtraLoc_08_Rev2[0] == -1)
            {
                int nDefCtr = 0;
                int nCurrUnit = UNIT_START_VALUE;
                memset(rgExtraLoc_08_Rev2, 0, (SFA2_A_NUM_IND_08_REV2 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    if (pCurrDef->uUnitN != nCurrUnit)
                    {
                        rgExtraLoc_08_Rev2[pCurrDef->uUnitN] = nDefCtr;
                        nCurrUnit = pCurrDef->uUnitN;
                    }

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraLoc_08_Rev2[nUnitId];
        }
        case SFA2_SupportedROMRevision::SFZ2A_960826:
        {
            if (rgExtraLoc_08_SFZ2A[0] == -1)
            {
                int nDefCtr = 0;
                int nCurrUnit = UNIT_START_VALUE;
                memset(rgExtraLoc_08_SFZ2A, 0, (SFZ2A_A_NUM_IND_08 + 1) * sizeof(int));

                stExtraDef* pCurrDef = GetCurrentExtraDef(0);

                while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
                {
                    if (pCurrDef->uUnitN != nCurrUnit)
                    {
                        rgExtraLoc_08_SFZ2A[pCurrDef->uUnitN] = nDefCtr;
                        nCurrUnit = pCurrDef->uUnitN;
                    }

                    nDefCtr++;
                    pCurrDef = GetCurrentExtraDef(nDefCtr);
                }
            }

            return rgExtraLoc_08_SFZ2A[nUnitId];
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

UINT16 CGame_SFA2_A::GetCurrentExtraLoc()
{
    UINT16 nExtraLocation = 0;

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
        default:
            return (stExtraDef*)&SFA2_A_EXTRA_CUSTOM_07_REV1[nDefCtr];
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
            return (stExtraDef*)&SFA2_A_EXTRA_CUSTOM_07_REV2[nDefCtr];
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            return (stExtraDef*)&SFZ2A_A_EXTRA_CUSTOM_07[nDefCtr];
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
    UINT32 nTotalPaletteCount = 0;
    m_nSFA2SelectedRom = nROMPaletteSetToUse;
    m_currentSFA2ROMRevision = nROMRevision;

    bool fHaveExtras;
    UINT16 nUnitCt;
    UINT8 nExtraUnitLocation;

    //Load extra file if we're using it
    if (UsePaletteSetForCharacters())
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            nExtraUnitLocation = SFA2_A_EXTRALOC_07_REV1;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_07, SFA2_A_EXTRA, &SFA2_A_EXTRA_CUSTOM_07_REV1, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFA2_A_NUM_IND_07_REV1 + (fHaveExtras ? 1 : 0);
            break;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            nExtraUnitLocation = SFA2_A_EXTRALOC_07_REV2;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_07, SFA2_A_EXTRA, &SFA2_A_EXTRA_CUSTOM_07_REV2, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFA2_A_NUM_IND_07_REV2 + (fHaveExtras ? 1 : 0);
            break;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            nExtraUnitLocation = SFZ2A_A_EXTRALOC_07;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_07, SFA2_A_EXTRA, &SFZ2A_A_EXTRA_CUSTOM_07, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFZ2A_A_NUM_IND_07 + (fHaveExtras ? 1 : 0);
            break;
        }
    }
    else
    {
        switch (m_currentSFA2ROMRevision)
        {
        case SFA2_SupportedROMRevision::SFA2_960229:
            nExtraUnitLocation = SFA2_A_EXTRALOC_08_REV1;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_08, SFA2_A_EXTRA, &SFA2_A_EXTRA_CUSTOM_08_REV1, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFA2_A_NUM_IND_08_REV1 + (fHaveExtras ? 1 : 0);
            break;
        case SFA2_SupportedROMRevision::SFA2_960306_or_960430:
        default:
            nExtraUnitLocation = SFA2_A_EXTRALOC_08_REV2;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_08, SFA2_A_EXTRA, &SFA2_A_EXTRA_CUSTOM_08_REV2, nExtraUnitLocation, m_nConfirmedROMSize);
            fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
            nUnitCt = SFA2_A_NUM_IND_08_REV2 + (fHaveExtras ? 1 : 0);
            break;
        case SFA2_SupportedROMRevision::SFZ2A_960826:
            nExtraUnitLocation = SFZ2A_A_EXTRALOC_08;
            LoadExtraFileForGame(EXTRA_FILENAME_SFA2_08, SFA2_A_EXTRA, &SFZ2A_A_EXTRA_CUSTOM_08, nExtraUnitLocation, m_nConfirmedROMSize);
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
    for (UINT16 iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UINT16 nExtraCt = GetExtraCt(iUnitCtr, TRUE);
        BOOL bUseExtra = (GetExtraLoc(iUnitCtr) ? 1 : 0);

        UINT16 nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

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
            strMsg.Format(L"Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, bUseExtra ? L"with extras" : L"no extras", nUnitChildCount);
            OutputDebugString(strMsg);
#endif

            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if SFA2_DEBUG
                strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
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
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
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

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
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
    static bool s_fShouldOutputOnce = false;

    if (s_fShouldOutputOnce)
    {
        s_fShouldOutputOnce = false;
        DumpPaletteHeaders();
    }

    return NewDescTree;
}

struct sSFA2_A_PaletteData
{
    LPCWSTR pszCharacterName = nullptr;
    UINT32 nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexCPS2_SFA3Assets"; // SFA2_Unique
    UINT32 nImageSetIndex = 0;
};

const sSFA2_A_PaletteData SFA2_A_CharacterPalettes[] =
{
    { L"Ryu",    0x6e2c0 + (0x3c0 * 0), L"indexCPS2_Ryu" }, // Ryu
    { L"Ken",    0x6e2c0 + (0x3c0 * 1), L"indexCPS2_Ken" }, // Ken
    { L"Akuma",  0x6e2c0 + (0x3c0 * 2), L"indexCPS2_Akuma" }, // Akuma
    { L"Charlie", 0x6e2c0 + (0x3c0 * 3), L"indexCPS2_Charlie" }, // Charlie
    { L"Chun-Li", 0x6e2c0 + (0x3c0 * 4), L"indexCPS2_ChunLi", 0x0c }, // Chun
    { L"Adon",   0x6e2c0 + (0x3c0 * 5), L"indexCPS2_Adon" }, // Adon
    { L"Sodom",  0x6e2c0 + (0x3c0 * 6), L"indexCPS2_Sodom" }, // Sodom
    { L"Guy",    0x6e2c0 + (0x3c0 * 7), L"indexCPS2_Guy" }, // Guy
    { L"Birdie", 0x6e2c0 + (0x3c0 * 8), L"indexCPS2_Birdie" }, // Birdie
    { L"Rose",   0x6e2c0 + (0x3c0 * 9), L"indexCPS2_Rose" }, // Rose
    { L"M.Bison", 0x6e2c0 + (0x3c0 * 10), L"indexCPS2_Bison" }, // Dict
    { L"Sagat",  0x6e2c0 + (0x3c0 * 11), L"indexCPS2_Sagat" }, // Sagat
    { L"Dan",    0x6e2c0 + (0x3c0 * 12), L"indexCPS2_Dan" }, // Dan
    { L"Sakura", 0x6e2c0 + (0x3c0 * 13), L"indexCPS2_Sakura" }, // Sakura
    { L"Rolento", 0x6e2c0 + (0x3c0 * 14), L"indexCPS2_Rolento" }, // Rolento
    { L"Dhalsim", 0x6e2c0 + (0x3c0 * 15), L"indexCPS2_Dhalsim" }, // Dhalsim
    { L"Zangief", 0x6e2c0 + (0x3c0 * 16), L"indexCPS2_Zangief" }, // Zangief
    { L"Gen",    0x6e2c0 + (0x3c0 * 17), L"indexCPS2_Gen" }, // Gen

    { L"Chun-Li (Original)",   0x6e2c0 + (0x3c0 * 18), L"indexCPS2_ChunLi" }, // Chun
    { L"Gen (crane stance)",       0x6e2c0 + (0x3c0 * 19), L"indexCPS2_Gen" }, // Gen
//  { L"Shin Gouki (alt costume)",    0x6e2c0 + (0x3c0 * 20), L"indexCPS2_Gen" }, // SAkuma
    { L"Zangief (WW)",    0x6e2c0 + (0x3c0 * 21), L"indexCPS2_Zangief" },
    { L"Dhalsim (WW)",    0x6e2c0 + (0x3c0 * 22), L"indexCPS2_Dhalsim" },
//  { L"Evil RYu",    0x6e2c0 + (0x3c0 * 20), L"indexCPS2_Ryu" },
};

struct sSFA2_A_EffectPaletteData
{
    LPCWSTR pszCharacterName = nullptr;
    LPCWSTR pszEffectName = nullptr;
    UINT32 nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexCPS2_SFA3Assets"; // SFA2_Unique
    UINT32 nImageSetIndex = 0;
    UINT16 nEffectCount = 1;
};

const sSFA2_A_EffectPaletteData SFA2_EffectsPaletteSets[] =
{
    { L"Akuma",      L"Extra",            0x1adc0, L"indexCPS2_Akuma", 0, 5 },
    { L"Birdie",     L"Bullrush",         0x1b180, L"indexCPS2_Birdie", 0, 3 },
    { L"Rose",       L"Dress winpose",    0x1b3c0, L"indexCPS2_Rose", 1, 1 },
    { L"M.Bison",    L"Teleport",         0x1b480, L"indexCPS2_Bison", 0, 4 },
    // Dan: single entry at 0x1b780
    { L"Dhalsim",    L"Teleport",         0x1b820, L"indexCPS2_Dhalsim", 0, 5 },
    // Single entry : { L"Shin Akuma", L"Teleport",         0x1bbe0, L"indexCPS2_Akuma", 0, 5 },
    { L"Evil Ryu",   L"Extra",            0x1bc80, L"indexCPS2_Ryu", 0, 5 },
};

const sSFA2_A_PaletteData SFA2_A_PortraitPalettes[] =
{
    { L"Ryu",        0x1c7c0 + (0x60 *  0), L"indexCPS2_SFA2Portraits", indexCPS2_Ryu },
    { L"Ken",        0x1c7c0 + (0x60 *  1), L"indexCPS2_SFA2Portraits", indexCPS2_Ken },
    { L"Akuma",      0x1c7c0 + (0x60 *  2), L"indexCPS2_SFA2Portraits", indexCPS2_Akuma },
    { L"Charlie",    0x1c7c0 + (0x60 *  3), L"indexCPS2_SFA2Portraits", indexCPS2_Charlie },
    { L"Chun-Li",    0x1c7c0 + (0x60 *  4), L"indexCPS2_SFA2Portraits", indexCPS2_ChunLi },
    { L"Adon",       0x1c7c0 + (0x60 *  5), L"indexCPS2_SFA2Portraits", indexCPS2_Adon },
    { L"Sodom",      0x1c7c0 + (0x60 *  6), L"indexCPS2_SFA2Portraits", indexCPS2_Sodom },
    { L"Guy",        0x1c7c0 + (0x60 *  7), L"indexCPS2_SFA2Portraits", indexCPS2_Guy },
    { L"Birdie",     0x1c7c0 + (0x60 *  8), L"indexCPS2_SFA2Portraits", indexCPS2_Birdie },
    { L"Rose",       0x1c7c0 + (0x60 *  9), L"indexCPS2_SFA2Portraits", indexCPS2_Rose },
    { L"M.Bison",    0x1c7c0 + (0x60 * 10), L"indexCPS2_SFA2Portraits", indexCPS2_Bison },
    { L"Sagat",      0x1c7c0 + (0x60 * 11), L"indexCPS2_SFA2Portraits", indexCPS2_Sagat },
    { L"Dan",        0x1c7c0 + (0x60 * 12), L"indexCPS2_SFA2Portraits", indexCPS2_Dan },
    { L"Sakura",     0x1c7c0 + (0x60 * 13), L"indexCPS2_SFA2Portraits", indexCPS2_Sakura },
    { L"Rolento",    0x1c7c0 + (0x60 * 14), L"indexCPS2_SFA2Portraits", indexCPS2_Rolento },
    { L"Dhalsim",    0x1c7c0 + (0x60 * 15), L"indexCPS2_SFA2Portraits", indexCPS2_Dhalsim },
    { L"Zangief",    0x1c7c0 + (0x60 * 16), L"indexCPS2_SFA2Portraits", indexCPS2_Zangief },
    { L"Gen",        0x1c7c0 + (0x60 * 17), L"indexCPS2_SFA2Portraits", indexCPS2_Gen },
    { L"Chun-Li (Original)",   0x1c7c0 + (0x60 * 18), L"indexCPS2_SFA2Portraits", indexCPS2_ChunLi + 1 },
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
    const UINT16 nColorOptionsPerCharacter = 6;
    constexpr UINT32 SFA2_PALETTE_LENGTH = 0x20;

    bool fShouldDumpPalettesFor7 = true;

    if (fShouldDumpPalettesFor7)
    {
        const UINT32 nStatusEffectBase = 0x72e60;
        const UINT16 nCountStatusEffects = 16; // ... O_o
        const UINT16 nPalettesPerColor = 5;

        for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_CharacterPalettes); nCharIndex++)
        {
            WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_CharacterPalettes[nCharIndex].pszCharacterName);

            for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
            {
                WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
                StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

                strOutput.Format(L"const sGame_PaletteDataset SFA2_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, szColorOptionCodeDesc);
                OutputDebugString(strOutput);

                UINT32 nCurrentOffset = SFA2_A_CharacterPalettes[nCharIndex].nROMOffset + (nColorIndex * (SFA2_PALETTE_LENGTH * nPalettesPerColor));
                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SFA2_ColorOptionNames[nColorIndex], nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_A_CharacterPalettes[nCharIndex].pszImageSet, SFA2_A_CharacterPalettes[nCharIndex].nImageSetIndex);
                OutputDebugString(strOutput);

                for (UINT16 nMoveIndex = 1; nMoveIndex < nPalettesPerColor; nMoveIndex++)
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
            for (UINT16 nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
            {
                UINT32 nCurrentOffset = 0x72e60 + (nStatusIndex * SFA2_PALETTE_LENGTH) + (nCharIndex * (nCountStatusEffects * SFA2_PALETTE_LENGTH));
                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SFA2_StatusEffectNames[nStatusIndex], nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_A_CharacterPalettes[nCharIndex].pszImageSet, SFA2_A_CharacterPalettes[nCharIndex].nImageSetIndex);
                OutputDebugString(strOutput);
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_CharacterPalettes); nCharIndex++)
        {
            WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_CharacterPalettes[nCharIndex].pszCharacterName);

            strOutput.Format(L"const sDescTreeNode SFA2_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
            OutputDebugString(strOutput);

            for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
            {
                WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
                StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

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

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_EffectsPaletteSets); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_EffectsPaletteSets[nCharIndex].pszCharacterName);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            WCHAR szEffectCodeDescription[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szEffectCodeDescription, ARRAYSIZE(szEffectCodeDescription), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(L"const sGame_PaletteDataset SFA2_A_%s_%s_MOVE_PALETTES[] = \r\n{\r\n", szCodeDesc, szEffectCodeDescription);
            OutputDebugString(strOutput);

            UINT32 nCurrentOffset = SFA2_EffectsPaletteSets[nCharIndex].nROMOffset + (nColorIndex * (SFA2_PALETTE_LENGTH * SFA2_EffectsPaletteSets[nCharIndex].nEffectCount));

            for (UINT16 nMoveIndex = 0; nMoveIndex < SFA2_EffectsPaletteSets[nCharIndex].nEffectCount; nMoveIndex++)
            {
                strOutput.Format(L"    { L\"%s %u\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SFA2_EffectsPaletteSets[nCharIndex].pszEffectName, nMoveIndex + 1, nCurrentOffset, nCurrentOffset + SFA2_PALETTE_LENGTH, SFA2_EffectsPaletteSets[nCharIndex].pszImageSet, SFA2_EffectsPaletteSets[nCharIndex].nImageSetIndex);
                OutputDebugString(strOutput);
                nCurrentOffset += SFA2_PALETTE_LENGTH;
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        strOutput.Format(L"const sDescTreeNode SFA2_A_%s_MOVE_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SFA2_A_%s_%s_MOVE_PALETTES, ARRAYSIZE(SFA2_A_%s_%s_MOVE_PALETTES) },\r\n", SFA2_ColorOptionNames[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    const UINT32 SFA2_PORTRAIT_LENGTH = 0x60;
    const UINT32 SFA2_PORTRAIT_SET_LENGTH = 0x720;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_PortraitPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(L"const sGame_PaletteDataset SFA2_A_%s_%s_PORTRAIT_PALETTES[] = \r\n{\r\n", szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);

            UINT32 nCurrentOffset = SFA2_A_PortraitPalettes[nCharIndex].nROMOffset + (nColorIndex * SFA2_PORTRAIT_SET_LENGTH);

            strOutput.Format(L"    { L\"%s Portrait\", 0x%x, 0x%x, %s, 0x%02x },\r\n", SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName, nCurrentOffset, nCurrentOffset + SFA2_PORTRAIT_LENGTH,
                                                                                             SFA2_A_PortraitPalettes[nCharIndex].pszImageSet, SFA2_A_PortraitPalettes[nCharIndex].nImageSetIndex);
            OutputDebugString(strOutput);

            OutputDebugString(L"};\r\n\r\n");
        }

        strOutput.Format(L"const sDescTreeNode SFA2_A_%s_PORTRAIT_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            WCHAR szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), SFA2_ColorOptionNames[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SFA2_A_%s_%s_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_%s_%s_PORTRAIT_PALETTES) },\r\n", SFA2_ColorOptionNames[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(SFA2_A_PortraitPalettes); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SFA2_A_%s_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_%s_PORTRAIT_COLLECTION) },\r\n", SFA2_A_PortraitPalettes[nCharIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sFileRule CGame_SFA2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, (nUnitId == 7) ? L"sz2.07" : L"sz2.08");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SFA2_A::GetCollectionCountForUnit(UINT16 nUnitId)
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

UINT16 CGame_SFA2_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
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

LPCWSTR CGame_SFA2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
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

UINT16 CGame_SFA2_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == GetCurrentExtraLoc())
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        UINT16 nCollectionCount = GetCurrentUnitSet()[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(GetCurrentUnitSet()[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
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

const sGame_PaletteDataset* CGame_SFA2_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)GetCurrentUnitSet()[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGame_SFA2_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

UINT16 CGame_SFA2_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nNodeSize = 0;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_SFA2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount;

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
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SFA2_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nSFA2SelectedRom;

    m_nSFA2SelectedRom = m_nBufferSelectedRom;

    if (m_pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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

void CGame_SFA2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
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
                break;
            case SFA2_SupportedROMRevision::SFA2_960306_or_960430: // Rev 2
                // 0306 ROMs have a different location for palettes
                if (SFA2_A_UNITSORT_07_0306[nUnitId] == index_SFA2_EvilRyu)
                {
                    ; // no-op: this is already handled
                }
                else if ((m_nCurrentPaletteROMLocation < 0x72DC0) || // Handle up to Gen (Crane Stance)
                        (((SFA2_A_UNITSORT_07_0306[nUnitId] == index_SFA2_WWDhalsim) || (SFA2_A_UNITSORT_07_0306[nUnitId] == index_SFA2_WWZangief)) &&
                            (m_nCurrentPaletteROMLocation < 0x73900))) // Second check handles the inserted WW characters
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
                    (m_nCurrentPaletteROMLocation < 0x73900))
                {
                    // use real locations for SFZ2A unique characters
                }
                else if (m_nCurrentPaletteROMLocation < 0x72DC0) // Handle up to Gen (Crane Stance)
                {
                    // This handles all the character palettes
                    m_nCurrentPaletteROMLocation -= 0xDDBC;
                }
                else if (((SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_WWDhalsim) || (SFZ2A_A_UNITSORT_07_0826[nUnitId] == index_SFA2_WWZangief)) &&
                            (m_nCurrentPaletteROMLocation < 0x73900)) // Second check handles the inserted WW characters
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
                if (m_nCurrentPaletteROMLocation < 0x1c7c0)
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
                    if (m_nCurrentPaletteROMLocation < 0x1b780)
                    {
                        m_nCurrentPaletteROMLocation -= 0x9D9C;
                    }
                    else if (m_nCurrentPaletteROMLocation < 0x1bc80)
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
    const size_t nFileLengthToCheck = 32;
    UINT16* prgFileStart = new UINT16[nFileLengthToCheck];
    SFA2_SupportedROMRevision detectedROMVersion = SFA2_SupportedROMRevision::SFA2_960229;

    struct SFA2_ROM_Identification_Data
    {
        SFA2_SupportedROMRevision sRevision = SFA2_SupportedROMRevision::SFA2_Unsupported;
        UINT16 nBytesToMatch[32] = {};
    };

    SFA2_ROM_Identification_Data rom7s[] =
    {
        {
            SFA2_SupportedROMRevision::SFA2_960229,
            {   0x0, 0x8, 0x0, 0x20,      0x775c, 0x0, 0x0, 0x0,    0x0, 0x8, 0x0, 0x20,      0x776c, 0x0, 0x0, 0x0,
                0x0, 0x8, 0x0, 0x20,      0x774c, 0x0, 0x0, 0x0,    0x0, 0x8, 0x0, 0x20,      0x7714, 0x0, 0x0, 0x0 }
        },
        {
            SFA2_SupportedROMRevision::SFA2_960306_or_960430,
            {  0xB, 0x0, 0x0, 0xff,     0x1f, 0xfff0, 0x4, 0x0,         0x20, 0x1358, 0x2222, 0x1800,     0x400,  0xb216, 0xa, 0x0,
               0x0, 0xff, 0x4, 0x0,     0x20, 0x127c, 0x2020, 0x1900,   0x400, 0x3a16, 0x6, 0x0,          0x0, 0xff, 0x9, 0x0 }
        },
        {
            SFA2_SupportedROMRevision::SFZ2A_960826,
            {   0x7677, 0x0000, 0x7678, 0x0000,     0x765d, 0x0100, 0x0002, 0x002b,
                0x0006, 0x1ea4, 0x7680, 0x1000,     0x7682, 0x7300, 0x2470, 0x0000,
                0x7688, 0x0000, 0x7687, 0x0000,     0x7679, 0x1100, 0x7686, 0x1000,
                0x0002, 0x0029, 0x0006, 0x1ea8,     0x7c21, 0x3020, 0x2520, 0x0000 }
        },
    };

    SFA2_ROM_Identification_Data rom8s[] =
    {
        {
            SFA2_SupportedROMRevision::SFA2_960229,
           { 0x111, 0x222, 0x333, 0x444,    0x555, 0x666, 0x777, 0x888, 0x999, 0xaaa, 0xbbb, 0xccc,    0xddd, 0xeee, 0xfff, 0x000,
            0x111, 0x222, 0x333, 0x444,    0x555, 0x666, 0x777, 0x888,  0x999, 0xaaa, 0xbbb, 0xccc,    0xddd, 0xeee, 0xfff, 0x000 }
        },
        {
            SFA2_SupportedROMRevision::SFA2_960306_or_960430,
            { 0x625, 0xfff, 0xffd, 0xdfa,    0xaf7, 0x6f4, 0x1e4, 0x1d9,    0x111, 0x333, 0x555, 0x888,    0xaaa, 0xccc, 0xfff, 0x000,
              0x413, 0xfff, 0xfef, 0xece,    0xead, 0xe8d, 0xd6c, 0xc5b, 0x111, 0x333, 0x555, 0x888,    0xaaa, 0xccc, 0xfff, 0x000 }
        },
        {
            SFA2_SupportedROMRevision::SFZ2A_960826,
            { 0x0777, 0x0000, 0x0aac, 0x0555, 0x0019, 0x0430, 0x0b96, 0x0ca5,    0x0db6, 0x0ec6, 0x0fd7, 0x0fd8, 0x0bbb, 0x0aaa, 0x0999, 0x0888,
              0x0777, 0x0000, 0x0974, 0x0445, 0x0532, 0x0743, 0x0954, 0x0b65,    0x0d87, 0x0b96, 0x0ca5, 0x0db6, 0x0ec6, 0x0bbb, 0x0aaa, 0x0999, }
        },
    };

    LoadedFile->Seek(UsePaletteSetForCharacters() ? 0 : 0xc0, CFile::begin);
    LoadedFile->Read(prgFileStart, nFileLengthToCheck * 2);

    bool fFoundMatch = false;

    if (UsePaletteSetForCharacters())
    {
        for (UINT16 nROMInfoIndex = 0; nROMInfoIndex < ARRAYSIZE(rom7s); nROMInfoIndex++)
        {
            fFoundMatch = true;

            for (UINT16 nIndex = 0; nIndex < nFileLengthToCheck; nIndex++)
            {
                if (prgFileStart[nIndex] != rom7s[nROMInfoIndex].nBytesToMatch[nIndex])
                {
                    fFoundMatch = false;
                    break;
                }
            }

            if (fFoundMatch)
            {
                detectedROMVersion = rom7s[nROMInfoIndex].sRevision;
                break;
            }
        }
    }
    else
    {
        for (UINT16 nROMInfoIndex = 0; nROMInfoIndex < ARRAYSIZE(rom8s); nROMInfoIndex++)
        {
            fFoundMatch = true;

            for (UINT16 nIndex = 0; nIndex < nFileLengthToCheck; nIndex++)
            {
                if (prgFileStart[nIndex] != rom8s[nROMInfoIndex].nBytesToMatch[nIndex])
                {
                    fFoundMatch = false;
                    break;
                }
            }

            if (fFoundMatch)
            {
                detectedROMVersion = rom8s[nROMInfoIndex].sRevision;
                break;
            }
        }
    }

    CString strByteWatch;
    OutputDebugString(L"Byte sniff for this ROM: ");
    for (UINT16 nIndex = 0; nIndex < nFileLengthToCheck; nIndex++)
    {
        strByteWatch.Format(L"0x%04x, ", prgFileStart[nIndex]);
        OutputDebugString(strByteWatch);
    }
    OutputDebugString(L"\n");

    if (detectedROMVersion == SFA2_SupportedROMRevision::SFA2_Unsupported)
    {
        OutputDebugString(L"\tThis is an unknown SFA2 ROM.\n");

        CString strMessage;
        if (strMessage.LoadString(IDS_SFA2_UNKNOWNROM))
        {
            MessageBox(g_appHWnd, strMessage.GetString(), GetHost()->GetAppName(), MB_ICONWARNING);
        }
    }

    safe_delete_array(prgFileStart);

    return detectedROMVersion;
}

BOOL CGame_SFA2_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    SFA2_SupportedROMRevision romRevision = GetSFA2ROMVersion(LoadedFile);

    if (m_currentSFA2ROMRevision != romRevision)
    {
        m_currentSFA2ROMRevision = romRevision;
        
        // The tree is actually different for the ROMs, so do a full tree reset
        ResetActiveSFA2Revision();
    }

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        // We're using a pre-sorted layout
        rgUnitRedir[nUnitCtr] = nUnitCtr;

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];

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
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            // Right now most of SFA2 is all six palettes within one node.
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
                    // The starting point is the absolute first palette for the sprite in question which is found in X-Ism 1
                    nSrcStart -= nNodeIncrement;
                }
            }
            else
            {
                // Status effects and etc have no peer palettes
                nSrcAmt = 1;
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
                    const UINT16 nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

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
                else
                {
                    UINT16 nDeltaToSecondElement = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                    int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;

                    fShouldUseAlternateLoadLogic = true;

                    UINT16 nPeerPaletteIdInNode = Node03;

                    nPeerPaletteIdInNode += nDeltaToSecondElement;

                    UINT16 nPeerPaletteIdInUnit = NodeGet->uPalId + nDeltaToSecondElement;

                    if (fShouldUseAlternateLoadLogic)
                    {
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, nPeerPaletteIdInUnit);

                        if (paletteDataSetToJoin)
                        {
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                                )
                            );

                            //Set each palette
                            sDescNode* JoinedNode[2] = {
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
