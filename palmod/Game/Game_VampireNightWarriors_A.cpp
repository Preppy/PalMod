#include "StdAfx.h"
#include "Game_VampireNightWarriors_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

stExtraDef* CGame_VampireNightWarriors_A::VampireNightWarriors_A_EXTRA_CUSTOM_04 = nullptr;
stExtraDef* CGame_VampireNightWarriors_A::VampireNightWarriors_A_EXTRA_CUSTOM_09 = nullptr;

CDescTree CGame_VampireNightWarriors_A::MainDescTree_04 = nullptr;
CDescTree CGame_VampireNightWarriors_A::MainDescTree_09 = nullptr;

uint32_t CGame_VampireNightWarriors_A::rgExtraCountAll_04[VampireNightWarriors_A_NUMUNIT_04 + 1] = { (uint32_t)-1 };
uint32_t CGame_VampireNightWarriors_A::rgExtraCountAll_09[VampireNightWarriors_A_NUMUNIT_09 + 1] = { (uint32_t)-1 };
uint32_t CGame_VampireNightWarriors_A::rgExtraLoc_04[VampireNightWarriors_A_NUMUNIT_04 + 1] = { (uint32_t)-1 };
uint32_t CGame_VampireNightWarriors_A::rgExtraLoc_09[VampireNightWarriors_A_NUMUNIT_09 + 1] = { (uint32_t)-1 };

uint32_t CGame_VampireNightWarriors_A::m_nTotalPaletteCountForVampireNightWarriors_04 = 0;
uint32_t CGame_VampireNightWarriors_A::m_nTotalPaletteCountForVampireNightWarriors_09 = 0;
uint32_t CGame_VampireNightWarriors_A::m_nConfirmedROMSize = -1;

uint32_t CGame_VampireNightWarriors_A::m_nVSROMMode = 50;

void CGame_VampireNightWarriors_A::InitializeStatics()
{
    safe_delete_array(CGame_VampireNightWarriors_A::VampireNightWarriors_A_EXTRA_CUSTOM_04);
    safe_delete_array(CGame_VampireNightWarriors_A::VampireNightWarriors_A_EXTRA_CUSTOM_09);

    memset(rgExtraCountAll_04, -1, sizeof(rgExtraCountAll_04));
    memset(rgExtraCountAll_09, -1, sizeof(rgExtraCountAll_09));
    memset(rgExtraLoc_04, -1, sizeof(rgExtraLoc_04));
    memset(rgExtraLoc_09, -1, sizeof(rgExtraLoc_09));

    MainDescTree_04.SetRootTree(CGame_VampireNightWarriors_A::InitDescTree(VampireNightWarriors_A_04_ROMKEY));
    MainDescTree_09.SetRootTree(CGame_VampireNightWarriors_A::InitDescTree(VampireNightWarriors_A_09_ROMKEY));
}

CGame_VampireNightWarriors_A::CGame_VampireNightWarriors_A(uint32_t nConfirmedROMSize, int nVSROMModeToLoad)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    m_nVSROMMode = nVSROMModeToLoad;

    if (UseCharacterROM())
    {
        nUnitAmt = VampireNightWarriors_A_NUMUNIT_09 + (GetExtraCt(VampireNightWarriors_A_EXTRALOC_09) ? 1 : 0);
        m_nTotalInternalUnits = VampireNightWarriors_A_NUMUNIT_09;
        m_nExtraUnit = VampireNightWarriors_A_EXTRALOC_09;
        m_nSafeCountForThisRom = 120 + GetExtraCt(VampireNightWarriors_A_EXTRALOC_09);
        m_pszExtraFilename = EXTRA_FILENAME_VampireNightWarriors_09;
        m_nTotalPaletteCount = m_nTotalPaletteCountForVampireNightWarriors_09;

        // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
        m_nLowestKnownPaletteRomLocation = 0x1182a;
    }
    else
    {
        nUnitAmt = VampireNightWarriors_A_NUMUNIT_04 + (GetExtraCt(VampireNightWarriors_A_EXTRALOC_04) ? 1 : 0);
        m_nTotalInternalUnits = VampireNightWarriors_A_NUMUNIT_04;
        m_nExtraUnit = VampireNightWarriors_A_EXTRALOC_04;
        m_nSafeCountForThisRom = 59 + GetExtraCt(VampireNightWarriors_A_EXTRALOC_04);
        m_pszExtraFilename = EXTRA_FILENAME_VampireNightWarriors_04;
        m_nTotalPaletteCount = m_nTotalPaletteCountForVampireNightWarriors_04;

        // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
        m_nLowestKnownPaletteRomLocation = 0x47ae8;
    }

    InitDataBuffer();

    //Set game information
    nGameFlag = VampireNightWarriors_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = VampireNightWarriors_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_VampireNightWarriors_A::~CGame_VampireNightWarriors_A()
{
    safe_delete_array(CGame_VampireNightWarriors_A::VampireNightWarriors_A_EXTRA_CUSTOM_04);
    safe_delete_array(CGame_VampireNightWarriors_A::VampireNightWarriors_A_EXTRA_CUSTOM_09);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_VampireNightWarriors_A::InitDataBuffer()
{
    m_nBufferVSROMMode = m_nVSROMMode;
    m_pppDataBuffer = new uint16_t * *[nUnitAmt];
    memset(m_pppDataBuffer, 0, sizeof(uint16_t**) * nUnitAmt);
}

void CGame_VampireNightWarriors_A::ClearDataBuffer()
{
    // We walk the tree to clear it according to Jojos mode, but if you live switch games
    // we would use the new mode incorrectly as we clear the old buffer.
    int nCurrentVSROMMode = m_nVSROMMode;

    m_nVSROMMode = m_nBufferVSROMMode;

    if (m_pppDataBuffer)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                uint32_t nPaletteCount = GetPaletteCountForUnit(nUnitCtr);

                for (uint32_t nPaletteIndex = 0; nPaletteIndex < nPaletteCount; nPaletteIndex++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPaletteIndex]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nVSROMMode = nCurrentVSROMMode;
}

uint32_t CGame_VampireNightWarriors_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
#ifdef MAME_INFORMATION
    GAME(1994, dstlk, 0, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (Euro 940705)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vame.04a", 0x080000, 0x80000, CRC(ae413ff2) SHA1(e9b85ac04d6d1a57368c70aa24e3ab8a8d67409f))
        ROM_LOAD16_WORD_SWAP("vame.09a", 0x300000, 0x80000, CRC(f16db74b) SHA1(7b7e31916a61e7fb35ec20849c6d22d74e169ec0))
    GAME(1994, dstlku, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (USA 940818)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamu.04b", 0x080000, 0x80000, CRC(58161453) SHA1(7b5674b8bdb7e3165e090105f6716073696d4bd0))
        ROM_LOAD16_WORD_SWAP("vamu.09b", 0x300000, 0x80000, CRC(2d1e9ae5) SHA1(1c4aced7dd0356ee445ca1e5db2c3a2ad4ee56c6))
    GAME(1994, dstlkur1, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (USA 940705)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamu.04a", 0x080000, 0x80000, CRC(696d9b25) SHA1(743c53ac7fc27960ecc80fed3f2a3c506ee655a1))
        ROM_LOAD16_WORD_SWAP("vamu.09a", 0x300000, 0x80000, CRC(8dd55b24) SHA1(d99c2cbc4a9899a3d187201e6e730b7b8fb13d1d))
    GAME(1994, dstlka, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (Asia 940705)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vama.04a", 0x080000, 0x80000, CRC(bc18e128) SHA1(53116cddb7123b573d76064640c3829fd978c67a))
        ROM_LOAD16_WORD_SWAP("vama.09a", 0x300000, 0x80000, CRC(67fa5573) SHA1(2dab32cf0d361d2c52cce5eb41b389a0e32dd192))
    GAME(1994, dstlkh, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (Hispanic 940818)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamh.04c", 0x080000, 0x80000, CRC(2217e9a0) SHA1(b86ee89457d8a0cf828f1bed247f3b2c0c91b170))
        ROM_LOAD16_WORD_SWAP("vamh.09c", 0x300000, 0x80000, CRC(15187632) SHA1(81b7166334dc3c331673822c31581e0e7809b698))
    
    GAME(1994, vampj, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire: The Night Warriors (Japan 940705)", MACHINE_SUPPORTS_SAVE) // Partial update set? Only rom 04 is "B" revision
        ROM_LOAD16_WORD_SWAP("vamj.04b", 0x080000, 0x80000, CRC(4d9c43c4) SHA1(2087090306646fed959d503ee75e24996ad95b88)) /* should be "B" revision too. Both this   */
        ROM_LOAD16_WORD_SWAP("vamj.09a", 0x300000, 0x80000, CRC(fc0a4aac) SHA1(a2c79eb4dc838c238e182a4da3567ac8db3488d8))
    GAME(1994, vampja, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire: The Night Warriors (Japan 940705 alt)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamj.04a", 0x080000, 0x80000, CRC(fdcbdae3) SHA1(46a1251a2affbe13b200448cf77a455d840f3c9f))
        ROM_LOAD16_WORD_SWAP( "vamj.09a", 0x300000, 0x80000, CRC(fc0a4aac) SHA1(a2c79eb4dc838c238e182a4da3567ac8db3488d8) )
    GAME(1994, vampjr1, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire: The Night Warriors (Japan 940630)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamj.04", 0x080000, 0x80000, CRC(5027db3d) SHA1(64bd09f2b5fd2435d8ec86f64543b640ab08f82f))
        ROM_LOAD16_WORD_SWAP("vamj.09", 0x300000, 0x80000, CRC(c119a827) SHA1(422864dda2a12621175350b8a130f970ed690719))
    ROM_START(dstlku1d) // Phoenix
        ROM_LOAD16_WORD_SWAP("vamud.04a", 0x080000, 0x80000, CRC(3b7a4939) SHA1(020f9768f4d3afb193b1d5a824674f7fb3434369))
        ROM_LOAD16_WORD_SWAP("vamud.09a", 0x300000, 0x80000, CRC(8b333a19) SHA1(5274510491433ac4a0ba3a0a120e95205d291ffe))

#endif

    const std::vector<ROMRevisionLookupData> VHHackROMHeader_04 =
    {
        {
            0,
            {   0x0100, 0x8001, 0x028e, 0x6008,     0x0002, 0xa801, 0x0018, 0x0000,     0x0600, 0xc000, 0x0a90, 0x0000, 
                0x0100, 0x8001, 0x028e, 0x6008,     0x0002, 0xa801, 0x0018, 0x0000,     0x0000, 0x0100, 0x0600, 0xa000,
                0x0a90, 0x0000, 0x0100, 0x8002,     0x028e, 0x6004, 0x0206, 0x3002 }
        },
    };

    const std::vector<ROMRevisionLookupData> VHHackROMHeader_09 =
    {
        {
            0,
            {   0x8dd6, 0x3119, 0x8dd8, 0x2019,     0x8dea, 0x2419, 0x8d9a, 0x0019,     0x8dde, 0x0019, 0x8def, 0x0019,
                0x8e10, 0x181a, 0x0001, 0x001f,     0x0009, 0xff80, 0x0000, 0x0000,     0x0030, 0x7b56, 0x8e19, 0x1318,
                0x8df3, 0x0018, 0x8e30, 0x2318,     0x8df4, 0x1018, 0x8e00, 0x0118 }
        },
    };

    static sCRC32ValueSet knownROMs[] =
    {
        { L"Darkstalkers: The Night Warriors (Euro 940705)", L"vame.09a", 0xf16db74b, -0x2450 },
        { L"Darkstalkers: The Night Warriors (USA 940705)", L"vamu.09a", 0x8dd55b24, -0x24B6 },
        { L"Darkstalkers: The Night Warriors (USA 940818)", L"vamu.09b", 0x2d1e9ae5, -0x2196 },
        { L"Darkstalkers: The Night Warriors (Asia 940705)", L"vama.09a", 0x67fa5573, -0x24B6 },
        { L"Darkstalkers: The Night Warriors (Hispanic 940818)", L"vamh.09c", 0x15187632, -0x2196 },
        { L"Darkstalkers: The Night Warriors (USA 940705 Phoenix)", L"vamud.09a", 0x8b333a19, -0x24B6 },

        // we usually start at 0x1182a for demitri
        { L"Vampire: The Night Warriors (Japan 940630)", L"vamj.09", 0xc119a827, 0 },
        // They used the wrong filename for the Boss Hack version, so we will use the needed shift if and only if
        // we find a matching header.
        { L"Vampire: The Night Warriors (Japan 940705 Boss Hack)", L"vamj.09", 0xfc0a4aac, 0x68, VHHackROMHeader_09 },
        { L"Vampire: The Night Warriors (Japan 940705)", L"vamj.09a", 0xfc0a4aac, 0x68 },

        // Portrait roms
        // starts at 0x47e2a
        { L"Darkstalkers: The Night Warriors (Euro 940705 Portraits)", L"vame.04a", 0xae413ff2, 0 },
        { L"Darkstalkers: The Night Warriors (USA 940705 Portraits)", L"vamu.04a", 0x696d9b25, 0 },
        { L"Darkstalkers: The Night Warriors (USA 940818 Portraits)", L"vamu.04b", 0x58161453, 0x2de },
        { L"Darkstalkers: The Night Warriors (Asia 940705 Portraits)", L"vama.04a", 0xbc18e128, 0 },
        { L"Darkstalkers: The Night Warriors (Hispanic 940818 Portraits)", L"vamh.04c", 0x2217e9a0, 0x2de },
        { L"Darkstalkers: The Night Warriors (USA 940705 Phoenix Portraits)", L"vamud.04a", 0x3b7a4939, 0 },

        { L"Vampire: The Night Warriors (Japan 940630 Portraits)", L"vamj.04", 0x5027db3d, 0x24c4 },  
        // They used the wrong filename for the Boss Hack version, so we will use the needed shift if and only if
        // we find a matching header.
        { L"Vampire: The Night Warriors (Japan 940705 Boss Hack Portraits)", L"vamj.04", 0x4d9c43c4, 0x2522, VHHackROMHeader_04 },
        { L"Vampire: The Night Warriors (Japan 940705 Portraits)", L"vamj.04a", 0x4d9c43c4, 0x2522 },
        // 	ROM_LOAD16_WORD_SWAP( "vamj.04b", 0x080000, 0x80000, CRC(4d9c43c4) SHA1(2087090306646fed959d503ee75e24996ad95b88) ) /* should be "B" revision too. Both this   */
            // GAME( 1994, vampj,      dstlk,    cps2,     cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Vampire: The Night Warriors (Japan 940705)",                                    MACHINE_SUPPORTS_SAVE ) // Partial update set? Only rom 04 is "B" revision
        { L"Vampire: The Night Warriors (Japan 940705b Portraits)", L"vamj.04b", 0x4d9c43c4, 0x2522 },
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
}

uint32_t CGame_VampireNightWarriors_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    if (UseCharacterROM())
    {
        return _GetExtraCount(rgExtraCountAll_09, VampireNightWarriors_A_NUMUNIT_09, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM_09);
    }
    else
    {
        return _GetExtraCount(rgExtraCountAll_04, VampireNightWarriors_A_NUMUNIT_04, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM_04);
    }
}

uint32_t CGame_VampireNightWarriors_A::GetExtraLoc(uint32_t nUnitId)
{
    if (UseCharacterROM())
    {
        return _GetExtraLocation(rgExtraLoc_09, VampireNightWarriors_A_NUMUNIT_09, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM_09);
    }
    else
    {
        return _GetExtraLocation(rgExtraLoc_04, VampireNightWarriors_A_NUMUNIT_04, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM_04);
    }
}

CDescTree* CGame_VampireNightWarriors_A::GetMainTree()
{
    if (UseCharacterROM())
    {
        return &CGame_VampireNightWarriors_A::MainDescTree_09;
    }
    else
    {
        return &CGame_VampireNightWarriors_A::MainDescTree_04;
    }
}

sDescTreeNode* CGame_VampireNightWarriors_A::InitDescTree(int nVSROMSetToUse)
{
    //Load extra file if we're using it
    m_nVSROMMode = nVSROMSetToUse;

    if (UseCharacterROM())
    {
        LoadExtraFileForGame(EXTRA_FILENAME_VampireNightWarriors_09, &VampireNightWarriors_A_EXTRA_CUSTOM_09, VampireNightWarriors_A_EXTRALOC_09, m_nConfirmedROMSize);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_VampireNightWarriors_04, &VampireNightWarriors_A_EXTRA_CUSTOM_04, VampireNightWarriors_A_EXTRALOC_04, m_nConfirmedROMSize);
    }

    const uint16_t nUnitCt = UseCharacterROM() ? (VampireNightWarriors_A_NUMUNIT_09 + (GetExtraCt(VampireNightWarriors_A_EXTRALOC_09) ? 1 : 0)) :
                                                 (VampireNightWarriors_A_NUMUNIT_04 + (GetExtraCt(VampireNightWarriors_A_EXTRALOC_04) ? 1 : 0));

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[VampireNightWarriors_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    if (UseCharacterROM())
    {
        m_nTotalPaletteCountForVampireNightWarriors_09 = _InitDescTree(NewDescTree,
            VampireNightWarriors_A_UNITS_09,
            VampireNightWarriors_A_EXTRALOC_09,
            VampireNightWarriors_A_NUMUNIT_09,
            rgExtraCountAll_09,
            rgExtraLoc_09,
            VampireNightWarriors_A_EXTRA_CUSTOM_09
        );
    }
    else
    {
        m_nTotalPaletteCountForVampireNightWarriors_04 = _InitDescTree(NewDescTree,
            VampireNightWarriors_A_UNITS_04,
            VampireNightWarriors_A_EXTRALOC_04,
            VampireNightWarriors_A_NUMUNIT_04,
            rgExtraCountAll_04,
            rgExtraLoc_04,
            VampireNightWarriors_A_EXTRA_CUSTOM_04
        );
    }

    return NewDescTree;
}

sFileRule CGame_VampireNightWarriors_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"vamj.09");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_VampireNightWarriors_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    if (UseCharacterROM())
    {
        return _GetCollectionCountForUnit(VampireNightWarriors_A_UNITS_09, rgExtraCountAll_09, VampireNightWarriors_A_NUMUNIT_09, VampireNightWarriors_A_EXTRALOC_09, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM_09);
    }
    else
    {
        return _GetCollectionCountForUnit(VampireNightWarriors_A_UNITS_04, rgExtraCountAll_04, VampireNightWarriors_A_NUMUNIT_04, VampireNightWarriors_A_EXTRALOC_04, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM_04);
    }
}

uint32_t CGame_VampireNightWarriors_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UseCharacterROM())
    {
        return _GetNodeCountForCollection(VampireNightWarriors_A_UNITS_09, rgExtraCountAll_09, VampireNightWarriors_A_NUMUNIT_09, VampireNightWarriors_A_EXTRALOC_09, nUnitId, nCollectionId, VampireNightWarriors_A_EXTRA_CUSTOM_09);
    }
    else
    {
        return _GetNodeCountForCollection(VampireNightWarriors_A_UNITS_04, rgExtraCountAll_04, VampireNightWarriors_A_NUMUNIT_04, VampireNightWarriors_A_EXTRALOC_04, nUnitId, nCollectionId, VampireNightWarriors_A_EXTRA_CUSTOM_04);
    }
}

LPCWSTR CGame_VampireNightWarriors_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UseCharacterROM())
    {
        return _GetDescriptionForCollection(VampireNightWarriors_A_UNITS_09, VampireNightWarriors_A_EXTRALOC_09, nUnitId, nCollectionId);
    }
    else
    {
        return _GetDescriptionForCollection(VampireNightWarriors_A_UNITS_04, VampireNightWarriors_A_EXTRALOC_04, nUnitId, nCollectionId);
    }
}

uint32_t CGame_VampireNightWarriors_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    if (UseCharacterROM())
    {
        return _GetPaletteCountForUnit(VampireNightWarriors_A_UNITS_09, rgExtraCountAll_09, VampireNightWarriors_A_NUMUNIT_09, VampireNightWarriors_A_EXTRALOC_09, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM_09);
    }
    else
    {
        return _GetPaletteCountForUnit(VampireNightWarriors_A_UNITS_04, rgExtraCountAll_04, VampireNightWarriors_A_NUMUNIT_04, VampireNightWarriors_A_EXTRALOC_04, nUnitId, VampireNightWarriors_A_EXTRA_CUSTOM_04);
    }
}

const sGame_PaletteDataset* CGame_VampireNightWarriors_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UseCharacterROM())
    {
        return _GetPaletteSet(VampireNightWarriors_A_UNITS_09, nUnitId, nCollectionId);
    }
    else
    {
        return _GetPaletteSet(VampireNightWarriors_A_UNITS_04, nUnitId, nCollectionId);
    }
}

const sDescTreeNode* CGame_VampireNightWarriors_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    if (UseCharacterROM())
    {
        return _GetNodeFromPaletteId(VampireNightWarriors_A_UNITS_09, rgExtraCountAll_09, VampireNightWarriors_A_NUMUNIT_09, VampireNightWarriors_A_EXTRALOC_09, nUnitId, nPaletteId, VampireNightWarriors_A_EXTRA_CUSTOM_09, fReturnBasicNodesOnly);
    }
    else
    {
        return _GetNodeFromPaletteId(VampireNightWarriors_A_UNITS_04, rgExtraCountAll_04, VampireNightWarriors_A_NUMUNIT_04, VampireNightWarriors_A_EXTRALOC_04, nUnitId, nPaletteId, VampireNightWarriors_A_EXTRA_CUSTOM_04, fReturnBasicNodesOnly);
    }
}

const sGame_PaletteDataset* CGame_VampireNightWarriors_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    if (UseCharacterROM())
    {
        return _GetSpecificPalette(VampireNightWarriors_A_UNITS_09, rgExtraCountAll_09, VampireNightWarriors_A_NUMUNIT_09, VampireNightWarriors_A_EXTRALOC_09, nUnitId, nPaletteId, VampireNightWarriors_A_EXTRA_CUSTOM_09);
    }
    else
    {
        return _GetSpecificPalette(VampireNightWarriors_A_UNITS_04, rgExtraCountAll_04, VampireNightWarriors_A_NUMUNIT_04, VampireNightWarriors_A_EXTRALOC_04, nUnitId, nPaletteId, VampireNightWarriors_A_EXTRA_CUSTOM_04);
    }
}

void CGame_VampireNightWarriors_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if ( (UseCharacterROM() && (nUnitId != VampireNightWarriors_A_EXTRALOC_09)) ||
        (!UseCharacterROM() && (nUnitId != VampireNightWarriors_A_EXTRALOC_04)))
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

        // Adjust for ROM-specific variant locations
        if (m_pCRC32SpecificData)
        {
            m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;

            if ((m_nCurrentPaletteROMLocation + cbPaletteSizeOnDisc ) > m_nExpectedGameROMSize)
            {
                OutputDebugString(L"Warning: invalid location referenced.  This is probably in the wrong ROM.\n");
            }
        }
    }
    else // VampireNightWarriors_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef;

        if (UseCharacterROM())
        {
            pCurrDef = &VampireNightWarriors_A_EXTRA_CUSTOM_09[GetExtraLoc(nUnitId) + nPalId];
        }
        else
        {
            pCurrDef = &VampireNightWarriors_A_EXTRA_CUSTOM_04[GetExtraLoc(nUnitId) + nPalId];
        }

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_VampireNightWarriors_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    if (UseCharacterROM())
    {
        return _UpdatePalImg(VampireNightWarriors_A_UNITS_09, rgExtraCountAll_09, VampireNightWarriors_A_NUMUNIT_09, VampireNightWarriors_A_EXTRALOC_09, VampireNightWarriors_A_EXTRA_CUSTOM_09, Node01, Node02, Node03, Node03);
    }
    else
    {
        return _UpdatePalImg(VampireNightWarriors_A_UNITS_04, rgExtraCountAll_04, VampireNightWarriors_A_NUMUNIT_04, VampireNightWarriors_A_EXTRALOC_04, VampireNightWarriors_A_EXTRA_CUSTOM_04, Node01, Node02, Node03, Node03);
    }
}
