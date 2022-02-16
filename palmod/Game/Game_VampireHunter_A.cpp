#include "StdAfx.h"
#include "Game_VampireHunter_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

stExtraDef* CGame_VampireHunter_A::VampireHunter_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_VampireHunter_A::MainDescTree = nullptr;

uint32_t CGame_VampireHunter_A::rgExtraCountAll[VampireHunter_A_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_VampireHunter_A::rgExtraLoc[VampireHunter_A_NUMUNIT + 1] = { (uint32_t)-1 };

UINT32 CGame_VampireHunter_A::m_nTotalPaletteCountForVampireHunter = 0;
UINT32 CGame_VampireHunter_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_VampireHunter_A::m_nConfirmedROMSize = -1;

void CGame_VampireHunter_A::InitializeStatics()
{
    safe_delete_array(CGame_VampireHunter_A::VampireHunter_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_VampireHunter_A::InitDescTree());
}

CGame_VampireHunter_A::CGame_VampireHunter_A(UINT32 nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = VampireHunter_A_NUMUNIT + (GetExtraCt(VampireHunter_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = VampireHunter_A_NUMUNIT;
    m_nExtraUnit = VampireHunter_A_EXTRALOC;
    m_nSafeCountForThisRom = 560 + GetExtraCt(VampireHunter_A_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_VampireHunter;
    m_nTotalPaletteCount = m_nTotalPaletteCountForVampireHunter;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x5d5cc; // this number is shifted to simplify things

    InitDataBuffer();

    //Set game information
    nGameFlag = VampireHunter_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = VampireHunter_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_VAMPIREHUNTER;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_VampireHunter_A::~CGame_VampireHunter_A(void)
{
    safe_delete_array(CGame_VampireHunter_A::VampireHunter_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_VampireHunter_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
#ifdef MAME_NOTES
    GAME(1995, nwarr, 0, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Night Warriors: Darkstalkers' Revenge (Euro 950316)", MACHINE_SUPPORTS_SAVE)
    ROM_START(nwarr)
        ROM_LOAD16_WORD_SWAP("vphe.09b", 0x300000, 0x80000, CRC(9882561c) SHA1(cc6d4a50819cd4e6b8c39c60e7c8ce46ba0f05d8))
    GAME(1995, nwarru, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Night Warriors: Darkstalkers' Revenge (USA 950406)", MACHINE_SUPPORTS_SAVE)
    ROM_START(nwarru)
        ROM_LOAD16_WORD_SWAP("vphu.09b", 0x300000, 0x80000, CRC(41a64205) SHA1(1f5af658b7c3fb09cab3dd10d6dc433a0605f81a))
    GAME(1995, nwarrh, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Night Warriors: Darkstalkers' Revenge (Hispanic 950403)", MACHINE_SUPPORTS_SAVE)
    ROM_START(nwarrh)
        ROM_LOAD16_WORD_SWAP("vphh.09", 0x300000, 0x80000, CRC(a2ce6d63) SHA1(52aed61d0c7a6191016f1ec4b0a4372fbf55bf49))
    GAME(1995, nwarrb, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Night Warriors: Darkstalkers' Revenge (Brazil 950403)", MACHINE_SUPPORTS_SAVE)
    ROM_START(nwarrb)
        ROM_LOAD16_WORD_SWAP("vphb.09", 0x300000, 0x80000, CRC(029e015d) SHA1(441d0ea36484cbffe783cb0a1133537c09783022))
    GAME(1995, nwarra, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Night Warriors: Darkstalkers' Revenge (Asia 950302)", MACHINE_SUPPORTS_SAVE)
    ROM_START(nwarra)
        ROM_LOAD16_WORD_SWAP("vpha.09b", 0x300000, 0x80000, CRC(7e96bd0a) SHA1(f7750209b157a405710c0797e9eb30f980db582d))

    GAME(1995, vhuntj, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire Hunter: Darkstalkers' Revenge (Japan 950316)", MACHINE_SUPPORTS_SAVE)
    ROM_START(vhuntj)
        ROM_LOAD16_WORD_SWAP("vphj.09b", 0x300000, 0x80000, CRC(823d6d99) SHA1(17be75b2ebfbf60a2141aef67c386454d23565f2))
    GAME(1995, vhuntjr1s, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire Hunter: Darkstalkers' Revenge (Japan 950307 stop version)", MACHINE_SUPPORTS_SAVE)
    ROM_START(vhuntjr1s)
        ROM_LOAD16_WORD_SWAP("vphj.09b", 0x300000, 0x80000, CRC(823d6d99) SHA1(17be75b2ebfbf60a2141aef67c386454d23565f2))
    GAME(1995, vhuntjr1, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire Hunter: Darkstalkers' Revenge (Japan 950307)", MACHINE_SUPPORTS_SAVE)
    ROM_START(vhuntjr1)
        ROM_LOAD16_WORD_SWAP("vphj.09b", 0x300000, 0x80000, CRC(823d6d99) SHA1(17be75b2ebfbf60a2141aef67c386454d23565f2))
    GAME(1995, vhuntjr2, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire Hunter: Darkstalkers' Revenge (Japan 950302)", MACHINE_SUPPORTS_SAVE)
    ROM_START(vhuntjr2)
        ROM_LOAD16_WORD_SWAP("vphj.09a", 0x300000, 0x80000, CRC(026e6f82) SHA1(4dffda5e2bcd2fbc9084782e9a79ebd2be1338e7))
#endif

    static sCRC32ValueSet knownROMs[] =
    {
        { L"Night Warriors: Darkstalkers' Revenge (Euro 950316)", L"vphe.09b", 0x9882561c, 0x740 },
        { L"Night Warriors: Darkstalkers' Revenge (USA 950406)", L"vphu.09b", 0x41a64205, 0x676 },
        { L"Night Warriors: Darkstalkers' Revenge (Hispanic 950403)", L"vphh.09", 0xa2ce6d63, 0x6dc },
        { L"Night Warriors: Darkstalkers' Revenge (Brazil 950403)", L"vphb.09", 0x029e015d, 0x6dc },
        { L"Night Warriors: Darkstalkers' Revenge (Asia 950302)", L"vpha.09b", 0x7e96bd0a, -0x342 },


        { L"Vampire Hunter: Darkstalkers' Revenge (Japan 950302)", L"vphj.09a", 0x823d6d99, 0 },
        { L"Vampire Hunter: Darkstalkers' Revenge (Japan CPS2)", L"vphj.09b", 0x26e6f82, 0x9be },
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

uint32_t CGame_VampireHunter_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, VampireHunter_A_NUMUNIT, nUnitId, VampireHunter_A_EXTRA_CUSTOM);
}

uint32_t CGame_VampireHunter_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, VampireHunter_A_NUMUNIT, nUnitId, VampireHunter_A_EXTRA_CUSTOM);
}

CDescTree* CGame_VampireHunter_A::GetMainTree()
{
    return &CGame_VampireHunter_A::MainDescTree;
}

sDescTreeNode* CGame_VampireHunter_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_VampireHunter, &VampireHunter_A_EXTRA_CUSTOM, VampireHunter_A_EXTRALOC, m_nConfirmedROMSize);

    const UINT16 nUnitCt = VampireHunter_A_NUMUNIT + (GetExtraCt(VampireHunter_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[VampireHunter_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForVampireHunter = _InitDescTree(NewDescTree,
        VampireHunter_A_UNITS,
        VampireHunter_A_EXTRALOC,
        VampireHunter_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        VampireHunter_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_VampireHunter_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"vphj.09a");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_VampireHunter_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(VampireHunter_A_UNITS, rgExtraCountAll, VampireHunter_A_NUMUNIT, VampireHunter_A_EXTRALOC, nUnitId, VampireHunter_A_EXTRA_CUSTOM);
}

uint32_t CGame_VampireHunter_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(VampireHunter_A_UNITS, rgExtraCountAll, VampireHunter_A_NUMUNIT, VampireHunter_A_EXTRALOC, nUnitId, nCollectionId, VampireHunter_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_VampireHunter_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(VampireHunter_A_UNITS, VampireHunter_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_VampireHunter_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(VampireHunter_A_UNITS, rgExtraCountAll, VampireHunter_A_NUMUNIT, VampireHunter_A_EXTRALOC, nUnitId, VampireHunter_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_VampireHunter_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(VampireHunter_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_VampireHunter_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(VampireHunter_A_UNITS, rgExtraCountAll, VampireHunter_A_NUMUNIT, VampireHunter_A_EXTRALOC, nUnitId, nPaletteId, VampireHunter_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_VampireHunter_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(VampireHunter_A_UNITS, rgExtraCountAll, VampireHunter_A_NUMUNIT, VampireHunter_A_EXTRALOC, nUnitId, nPaletteId, VampireHunter_A_EXTRA_CUSTOM);
}

void CGame_VampireHunter_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != VampireHunter_A_EXTRALOC)
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
    else // VampireHunter_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = ((stExtraDef*)&VampireHunter_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId]);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_VampireHunter_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(VampireHunter_A_UNITS, rgExtraCountAll, VampireHunter_A_NUMUNIT, VampireHunter_A_EXTRALOC, VampireHunter_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
