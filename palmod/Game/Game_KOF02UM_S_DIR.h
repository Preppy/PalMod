#pragma once

#include "GameClassByFile.h"

class CGame_KOF02UM_S_DIR : public CGameClassByFile
{
public:
    CGame_KOF02UM_S_DIR(uint32_t nConfirmedROMSize, SupportedGamesList nKOF02UMROMSetToLoad);
    ~CGame_KOF02UM_S_DIR();

    static sFileRule GetNextRule_8888();
    static sFileRule GetRule_8888(uint32_t nRuleId);
    static sFileRule GetNextRule_BGR555();
    static sFileRule GetRule_BGR555(uint32_t nRuleId);
    static sFileRule GetNextRule_RGB555();
    static sFileRule GetRule_RGB555(uint32_t nRuleId);

    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    static CDescTree MainDescTree;

    CDescTree* GetMainTree() { return &MainDescTree; };

    LPCWSTR GetGameName() override;
};
