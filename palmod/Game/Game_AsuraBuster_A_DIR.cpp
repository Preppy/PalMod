#include "StdAfx.h"
#include "Game_AsuraBuster_A_DIR.h"
#include "GameDef.h"

const sDirectoryLoadingData ThisGamesFileLoadingData =
{
    {
        L"pgm3.u1",
        L"pgm2.u2",
        L"pgm1.u3",
        L"pgm0.u4",
    },
    FileReadType::Interleaved,
    0x80000
};

CGame_AsuraBuster_A_DIR::CGame_AsuraBuster_A_DIR(uint32_t nConfirmedROMSize)
{
    //Set game-game specific information before loading the game's known palette locations
    m_snCurrentGameFlag = nGameFlag = AsuraBuster_A;
    nImgGameFlag = IMGDAT_SECTION_OTHER;
    m_prgGameImageSet = AsuraBuster_A_IMGIDS_USED;
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_ASURABUSTER;
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_xBGR555_LE);

    // Load the game's layout for palmod
    InitializeStatics(ThisGamesFileLoadingData, AsuraBuster_A_UNITS, ARRAYSIZE(AsuraBuster_A_UNITS), m_strExtraFileName);

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

CGame_AsuraBuster_A_DIR::~CGame_AsuraBuster_A_DIR()
{
    ClearDataBuffer();
    FlushChangeTrackingArray();

    safe_delete_array(m_prgCurrentExtrasLoaded);
}

sFileRule CGame_AsuraBuster_A_DIR::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", ThisGamesFileLoadingData.rgstrFileList.at(nUnitId & 0xFF).c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_AsuraBuster_A_DIR::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr++);

    if (uRuleCtr >= ThisGamesFileLoadingData.rgstrFileList.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

