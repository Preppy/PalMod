#pragma once
#include "GameClassByUnitPerFile.h"
#include "DBFCI_S_DEF.h"

class CGame_DBFCI_A : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Dengeki Bunko Fighting Climax Ignition (Arcade)",
        DBFCI_A,
        IMGDAT_SECTION_FRENCHBREAD,
        DBFCI_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8881,
        DBFCICharacterData,
    };

public:
    CGame_DBFCI_A(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_DBFCI_A() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, DBFCICharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(DBFCICharacterData); };
};
