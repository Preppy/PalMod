#include "StdAfx.h"
#include "Game_XMVSF_A.h"
#include "GameDef.h"
#include "..\palmod.h"

#define XMVSF_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_XMVSF_A::XMVSF_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_XMVSF_A::MainDescTree = nullptr;

UINT32 CGame_XMVSF_A::m_nTotalPaletteCountForXMVSF = 0;

uint32_t CGame_XMVSF_A::rgExtraCountAll[XMVSF_A_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_XMVSF_A::rgExtraLoc[XMVSF_A_NUMUNIT + 1] = { (uint32_t)-1 };
UINT32 CGame_XMVSF_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_XMVSF_A::m_nConfirmedROMSize = -1;

void CGame_XMVSF_A::InitializeStatics()
{
    safe_delete_array(CGame_XMVSF_A::XMVSF_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_XMVSF_A::InitDescTree());
}

CGame_XMVSF_A::CGame_XMVSF_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_XMVSF_A::CGame_XMVSF_A: Loading ROM\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    m_nTotalInternalUnits = XMVSF_A_NUMUNIT;
    m_nExtraUnit = XMVSF_A_EXTRALOC;
    m_nSafeCountForThisRom = 544 + GetExtraCt(m_nExtraUnit);
    m_pszExtraFilename = EXTRA_FILENAME_XMVSF;
    m_nTotalPaletteCount = m_nTotalPaletteCountForXMVSF;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x606c;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = XMVSF_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = XMVSF_A_IMGIDS_USED;

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

CGame_XMVSF_A::~CGame_XMVSF_A(void)
{
    safe_delete_array(CGame_XMVSF_A::XMVSF_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_XMVSF_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
#ifdef MAME_NOTES
    we want the 05 rom
GAME(1996, xmvsf,      0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Euro 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfr1,    xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Euro 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfu,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfur1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfur2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfj,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr3,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 960909)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05",   0x100000, 0x80000, CRC(030e0e1e) SHA1(164e3023bb1965768448e1bf6c45ff9e0ac964c7))
GAME(1996, xmvsfa,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 960919)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar3,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfh,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Hispanic 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfb,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Brazil 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfu1d,   xmvsf,    dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "X-Men Vs. Street Fighter (USA 961004 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",   0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
#endif
        { L"XVSF (CPS2)", L"xvs.05a", 0x7db6025d, 0 },
        { L"XVSF (960909 Japan CPS2)", L"xvs.05", 0x030e0e1e, 0 },
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

sFileRule CGame_XMVSF_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"xvs.05a");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_XMVSF_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, XMVSF_A_NUMUNIT, nUnitId, XMVSF_A_EXTRA_CUSTOM);
}

uint32_t CGame_XMVSF_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, XMVSF_A_NUMUNIT, nUnitId, XMVSF_A_EXTRA_CUSTOM);
}

CDescTree* CGame_XMVSF_A::GetMainTree()
{
    return &CGame_XMVSF_A::MainDescTree;
}

sDescTreeNode* CGame_XMVSF_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_XMVSF, &XMVSF_A_EXTRA_CUSTOM, XMVSF_A_EXTRALOC, m_nConfirmedROMSize);

    bool fHaveExtras = (GetExtraCt(XMVSF_A_EXTRALOC) > 0);
    UINT16 nUnitCt = XMVSF_A_NUMUNIT + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[XMVSF_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForXMVSF = _InitDescTree(NewDescTree,
        XMVSF_A_UNITS,
        XMVSF_A_EXTRALOC,
        XMVSF_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        XMVSF_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

uint32_t CGame_XMVSF_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(XMVSF_A_UNITS, rgExtraCountAll, XMVSF_A_NUMUNIT, XMVSF_A_EXTRALOC, nUnitId, XMVSF_A_EXTRA_CUSTOM);
}

uint32_t CGame_XMVSF_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(XMVSF_A_UNITS, rgExtraCountAll, XMVSF_A_NUMUNIT, XMVSF_A_EXTRALOC, nUnitId, nCollectionId, XMVSF_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_XMVSF_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(XMVSF_A_UNITS, XMVSF_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_XMVSF_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(XMVSF_A_UNITS, rgExtraCountAll, XMVSF_A_NUMUNIT, XMVSF_A_EXTRALOC, nUnitId, XMVSF_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_XMVSF_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(XMVSF_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_XMVSF_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(XMVSF_A_UNITS, rgExtraCountAll, XMVSF_A_NUMUNIT, XMVSF_A_EXTRALOC, nUnitId, nPaletteId, XMVSF_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_XMVSF_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(XMVSF_A_UNITS, rgExtraCountAll, XMVSF_A_NUMUNIT, XMVSF_A_EXTRALOC, nUnitId, nPaletteId, XMVSF_A_EXTRA_CUSTOM);
}

void CGame_XMVSF_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != XMVSF_A_EXTRALOC)
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
    }
    else // XMVSF_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForXMVSF(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_XMVSF_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(XMVSF_A_UNITS, rgExtraCountAll, XMVSF_A_NUMUNIT, XMVSF_A_EXTRALOC, XMVSF_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}

void CGame_XMVSF_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != XMVSF_A_EXTRALOC)
    {
        CString strMessage;
        strMessage.Format(L"CGame_XMVSF_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
        OutputDebugString(strMessage);

        const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(nUnitId, nPalId);

        if (pThisPalette && pThisPalette->pExtraProcessing && pThisPalette->pExtraProcessing->pProcessingSteps.size())
        {
            OutputDebugString(L"\tThis palette is linked to additional palettes: updating those as well now.\n");
            ProcessAdditionalPaletteChangesRequired(nUnitId, nPalId, pThisPalette->pExtraProcessing->pProcessingSteps);
        }
        else
        {
            OutputDebugString(L"\tNo further processing needed.\n");
        }
    }
}
