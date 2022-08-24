#include "StdAfx.h"
#include "Game_PrimalRage_SNES.h"
#include "GameDef.h"

const sDirectoryLoadingData PrimalRageFileLoadingData =
{
    {
        L"Primal Rage (USA).sfc"
    },
    FileReadType::Sequential,
    0x300000
};

sFileRule CGame_PrimalRage_SNES::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", PrimalRageFileLoadingData.rgstrFileList.at(nUnitId & 0xFF).c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_PrimalRage_SNES::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr++);

    if (uRuleCtr >= PrimalRageFileLoadingData.rgstrFileList.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

CGame_PrimalRage_SNES::CGame_PrimalRage_SNES(uint32_t nConfirmedROMSize)
{
    //Set game-game specific information before loading the game's known palette locations
    m_snCurrentGameFlag = nGameFlag = PrimalRage_SNES;
    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = PrimalRage_SNES_IMGIDS_USED;
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_PRIMALRAGE;
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // Load the game's layout for palmod
    InitializeStatics(PrimalRageFileLoadingData, PrimalRage_SNES_UNITS, ARRAYSIZE(PrimalRage_SNES_UNITS), m_strExtraFileName);

    // xoxoxoxxoxoxoxoxoxxoxoxoxoxoxoxoxxoxoxoxxoxoxoxoxoxxoxoxoxoxoxoxox
    // Everything after this is boilerplate and doesn't need to be changed.
    // xoxoxoxxoxoxoxoxoxxoxoxoxoxoxoxoxxoxoxoxxoxoxoxoxoxxoxoxoxoxoxoxox

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_pszExtraFilename = m_strCurrentExtraFilename.c_str();

    //We need the proper unit amt before we init the main buffer
    m_nTotalInternalUnits = m_rgCurrentGameUnits.size();
    m_nExtraUnit = m_nCurrentExtraUnitId = static_cast<uint16_t>(m_rgCurrentGameUnits.size());
    // Tack on an extra unit if we're loading extras
    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    // Game-specific safety checks: if these match what we find at runtime we skip our check for duplicated palettes
    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + m_nPaletteCountInHeaders;
    m_nLowestKnownPaletteRomLocation = m_nLowestROMLocationUsedInHeaders;

    // Stub in the palette buffer that we will LoadFile into
    InitDataBuffer();

    // This lets LoadGame and SaveGame know how many files it needs to interact with
    nFileAmt = m_psCurrentFileLoadingData->rgstrFileList.size();

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_PrimalRage_SNES::~CGame_PrimalRage_SNES()
{
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();

    safe_delete_array(m_prgCurrentExtrasLoaded);
}
