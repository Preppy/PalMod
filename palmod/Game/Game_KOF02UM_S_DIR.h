#pragma once

#include "GameClassByFile.h"

class CGame_KOF02UM_S_DIR : public CGameClassByFile
{
public:
    CGame_KOF02UM_S_DIR(UINT32 nConfirmedROMSize, SupportedGamesList nKOF02UMROMSetToLoad);
    ~CGame_KOF02UM_S_DIR();

    static sFileRule GetNextRule_8888();
    static sFileRule GetRule_8888(size_t nRuleId);
    static sFileRule GetNextRule_BGR555();
    static sFileRule GetRule_BGR555(size_t nRuleId);
    static sFileRule GetNextRule_RGB555();
    static sFileRule GetRule_RGB555(size_t nRuleId);

    static void InitializeStatics();
    static UINT32 m_nConfirmedROMSize;

    static CDescTree MainDescTree;

    CDescTree* GetMainTree() { return &MainDescTree; };

    LPCWSTR GetGameName() override;
};