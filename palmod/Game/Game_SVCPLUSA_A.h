#pragma once
#include "GameClassByDir.h"
#include "SVCPLUSA_A_DEF.h"

class CGame_SVCPLUSA_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"svc-p2pl.bin", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SVC Plus A",
        SVCPLUSA_A,
        IMGDAT_SECTION_KOF,
        SVCPLUSA_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        SVCPLUSA_A_UNITS,
        ARRAYSIZE(SVCPLUSA_A_UNITS),
        L"SVCE.txt",             // Extra filename
        1048,                        // Count of palettes listed in the header
        0x2d97f0,                   // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

    enum class eSVCRevisionName
    {
        SVC,
        SVCPlus,
        SVCPlusA, // already decrypted!
        SVCSPlus,
    };

    struct SVCRevisionInfo
    {
        LPCWSTR pszRevisionName = L"SVC Plus A";
        eSVCRevisionName rev = eSVCRevisionName::SVCPlusA;
        std::vector<LPCWSTR> fileList;
        int nOffsetForReads = 0;
        bool allowWrites = true;
    };

    SVCRevisionInfo m_loadedROMRevision;

    uint8_t* decryptedROM = nullptr;

public:
    CGame_SVCPLUSA_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_SVCPLUSA_A();

    LPCWSTR GetGameName() { return m_loadedROMRevision.pszRevisionName; };
    void UpdateGameName(CFile* LoadedFile);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId = 0) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId) override;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static sFileRule GetRule(uint32_t nRuleId);
};
