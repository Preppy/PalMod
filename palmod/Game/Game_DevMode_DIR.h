#pragma once
#include "GameClassByDir.h"
#include "DevMode_DIR_DEF.h"

class CGame_DevMode_DIR : public CGameClassByDir
{
private:
    static sDirectoryLoadingData m_sFileLoadingData;

    sCoreGameData m_sCoreGameData_UseExtrasFile
    {
        L"Unknown Game (File Set)",
        DEVMODE_DIR,
        IMGDAT_SECTION_OTHER,
        {},
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        {},
        nullptr,
        0,
        L"UnknownFileSetE.txt",         // Extra filename
        0,                              // Count of palettes listed in the header
        0,                              // Lowest known location used for palettes
    };

    sCoreGameData m_sCoreGameData_Stub
    {
        L"Unknown Game (File Set)",
        DEVMODE_DIR,
        IMGDAT_SECTION_OTHER,
        {},
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        {},
        DevMode_DIR_UNITS,
        ARRAYSIZE(DevMode_DIR_UNITS),
        L"UnknownFileSetE.txt",         // Extra filename
        1,                              // Count of palettes listed in the header
        0,                              // Lowest known location used for palettes
    };

    static inline const LPCWSTR c_strRegvalFileFormat = L"DevMode_File%02u";
    static inline const LPCWSTR c_strRegvalFileSizeFormat = L"DevMode_File%02u_Size";
    static inline const LPCWSTR c_strRegValType = L"DevMode_JoinStyle";
    static const size_t c_nMaxFilesToLoad = 4;

    // We're going to allow one color override from file per session 
    // and after that we should use the values supplied in the 
    static bool m_fHaveReadOverrideFromFile;

    bool m_fHaveDoneInitialColorSet = false;
    bool m_fCurrentlyInitializing = false;
    wchar_t m_pszGameNameOverride[MAX_PATH];

    static bool ReloadLoadingChoices();
    static void SaveLoadingChoices();

    void SetAlphaModeInternal(AlphaMode NewMode);
    bool SetAlphaAndColorModeInternal(ColMode NewMode, AlphaMode CurrentAlphaSetting);

public:
    CGame_DevMode_DIR(uint32_t nConfirmedROMSize);

    static bool UserCreatesRules(LPWSTR pszPrimaryFilePath = nullptr);

    void SetAlphaMode(AlphaMode NewMode) override;
    bool SetColorMode(ColMode NewMode) override;
    void SetMaximumWritePerEachTransparency(PALWriteOutputOptions eUpdatedOption) override;
    bool AllowUpdatingColorFormatForGame() override { return true; }

    LPCWSTR GetGameName() override;

    static sFileRule GetRule(uint32_t nRuleId);
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
