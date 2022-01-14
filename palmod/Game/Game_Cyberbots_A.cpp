#include "StdAfx.h"
#include "GameDef.h"
#include "Game_Cyberbots_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

UINT32 CGame_Cyberbots_A::m_nExpectedGameROMSize = 0x80000;

CGame_Cyberbots_A::CGame_Cyberbots_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_Cyberbots_A::CGame_Cyberbots_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = Cyberbots_A_NUMUNIT;
    m_nExtraUnit = Cyberbots_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 425;
    m_pszExtraFilename = EXTRA_FILENAME_Cyberbots_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForCyberbots;

    m_nLowestKnownPaletteRomLocation = 0x3fa3e;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = CYBERBOTS_A;

    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = Cyberbots_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS; // Check out the available options in buttondef.h

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(size_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

UINT32 CGame_Cyberbots_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
#ifdef MAME_NOTES

ROM_START(cybots)
GAME(1995, cybots,     0,        cps2, cybots,    cps2_state, init_cps2,     ROT0,   "Capcom", "Cyberbots: Fullmetal Madness (Euro 950424)",                                    MACHINE_SUPPORTS_SAVE)
    ROM_REGION(CODE_SIZE, "maincpu", 0) // 68000 code
    ROM_LOAD16_WORD_SWAP("cybe.03", 0x000000, 0x80000, CRC(234381cd) SHA1(6202a2a318feda525e16fd7b31c03af9ccc5d964))
    ROM_LOAD16_WORD_SWAP("cybe.04", 0x080000, 0x80000, CRC(80691061) SHA1(4f3ef24fc76d3a5b369aa6192ad390d9c3c9b0e8))

ROM_START(cybotsu)
GAME(1995, cybotsu,    cybots,   cps2, cybots,    cps2_state, init_cps2,     ROT0,   "Capcom", "Cyberbots: Fullmetal Madness (USA 950424)",                                     MACHINE_SUPPORTS_SAVE)
    ROM_REGION(CODE_SIZE, "maincpu", 0) // 68000 code
    ROM_LOAD16_WORD_SWAP("cybu.03", 0x000000, 0x80000, CRC(db4da8f4) SHA1(de9f3f261003f4f70ae32114a15e498387c23f6d))
    ROM_LOAD16_WORD_SWAP("cybu.04", 0x080000, 0x80000, CRC(1eec68ac) SHA1(b2b9379c84b121048cb83a8c48756b48cdbc3ea1))

ROM_START(cybotsj)
GAME(1995, cybotsj,    cybots,   cps2, cybots,    cps2_state, init_cps2,     ROT0,   "Capcom", "Cyberbots: Fullmetal Madness (Japan 950420)",                                   MACHINE_SUPPORTS_SAVE)
    ROM_REGION(CODE_SIZE, "maincpu", 0) // 68000 code
    ROM_LOAD16_WORD_SWAP("cybj.03", 0x000000, 0x80000, CRC(6096eada) SHA1(ea3fa2e6229d90cc3f69c59f447b6b373d64d2aa))
    ROM_LOAD16_WORD_SWAP("cybj.04", 0x080000, 0x80000, CRC(7b0ffaa9) SHA1(595c3e679ea02282bf8a5aa6c7c09e5c30e839c7))
#endif
        { L"Cyberbots: Fullmetal Madness (Euro 950424)", L"cybe.04", 0x80691061, 0 },
        { L"Cyberbots: Fullmetal Madness (Japan 950420)", L"cybj.04", 0xb0ffaa9, -0x14 },
        { L"Cyberbots: Fullmetal Madness (USA 950424)", L"cybu.04", 0xeec68ac, 0 },
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

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating "Cyberbots" to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_Cyberbots_A::Cyberbots_A_EXTRA_CUSTOM = nullptr;
CDescTree CGame_Cyberbots_A::MainDescTree = nullptr;
size_t CGame_Cyberbots_A::rgExtraCountAll[Cyberbots_A_NUMUNIT + 1];
size_t CGame_Cyberbots_A::rgExtraLoc[Cyberbots_A_NUMUNIT + 1];
UINT32 CGame_Cyberbots_A::m_nTotalPaletteCountForCyberbots = 0;
UINT32 CGame_Cyberbots_A::m_nConfirmedROMSize = -1;

void CGame_Cyberbots_A::InitializeStatics()
{
    safe_delete_array(CGame_Cyberbots_A::Cyberbots_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_Cyberbots_A::InitDescTree());
}

CGame_Cyberbots_A::~CGame_Cyberbots_A(void)
{
    safe_delete_array(CGame_Cyberbots_A::Cyberbots_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_Cyberbots_A::GetMainTree()
{
    return &CGame_Cyberbots_A::MainDescTree;
}

size_t CGame_Cyberbots_A::GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, Cyberbots_A_NUMUNIT, nUnitId, Cyberbots_A_EXTRA_CUSTOM);
}

size_t CGame_Cyberbots_A::GetExtraLoc(size_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, Cyberbots_A_NUMUNIT, nUnitId, Cyberbots_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_Cyberbots_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_Cyberbots_A, &Cyberbots_A_EXTRA_CUSTOM, Cyberbots_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = Cyberbots_A_NUMUNIT + (GetExtraCt(Cyberbots_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[CYBERBOTS_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForCyberbots = _InitDescTree(NewDescTree,
        Cyberbots_A_UNITS,
        Cyberbots_A_EXTRALOC,
        Cyberbots_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        Cyberbots_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_Cyberbots_A::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, Cyberbots_A_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

size_t CGame_Cyberbots_A::GetCollectionCountForUnit(size_t nUnitId)
{
    return _GetCollectionCountForUnit(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, nUnitId, Cyberbots_A_EXTRA_CUSTOM);
}

size_t CGame_Cyberbots_A::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetNodeCountForCollection(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, nUnitId, nCollectionId, Cyberbots_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_Cyberbots_A::GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetDescriptionForCollection(Cyberbots_A_UNITS, Cyberbots_A_EXTRALOC, nUnitId, nCollectionId);
}

size_t CGame_Cyberbots_A::GetPaletteCountForUnit(size_t nUnitId)
{
    return _GetPaletteCountForUnit(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, nUnitId, Cyberbots_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_Cyberbots_A::GetPaletteSet(size_t nUnitId, size_t nCollectionId)
{
    return _GetPaletteSet(Cyberbots_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_Cyberbots_A::GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, nUnitId, nPaletteId, Cyberbots_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_Cyberbots_A::GetSpecificPalette(size_t nUnitId, size_t nPaletteId)
{
    return _GetSpecificPalette(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, nUnitId, nPaletteId, Cyberbots_A_EXTRA_CUSTOM);
}

void CGame_Cyberbots_A::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
     if (nUnitId != Cyberbots_A_EXTRALOC)
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
        }
    }
    else // Cyberbots_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&Cyberbots_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_Cyberbots_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, Cyberbots_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
