#pragma once
#include "Game_JOJOS_A.h"

class CGame_JOJOS_A_DIR : public CGame_JOJOS_A
{
private:
    static sFileRule GetNextRuleInternal(JojosLoadingKey nVersionToLoad);
    static sFileRule GetRuleInternal(uint32_t nRuleId, JojosLoadingKey nVersionToLoad);

public:
    CGame_JOJOS_A_DIR(uint32_t nConfirmedROMSize, JojosLoadingKey nJojosModeToLoad);

    static sFileRule GetNextRule50() { return GetNextRuleInternal(JojosLoadingKey::JOJOS_A_50_ROMKEY_RERIP); };
    static sFileRule GetRule50(uint32_t nRuleId) { return GetRuleInternal(nRuleId, JojosLoadingKey::JOJOS_A_50_ROMKEY_RERIP); };
    static sFileRule GetNextRule51() { return GetNextRuleInternal(JojosLoadingKey::JOJOS_A_51_ROMKEY_RERIP); };
    static sFileRule GetRule51(uint32_t nRuleId) { return GetRuleInternal(nRuleId, JojosLoadingKey::JOJOS_A_51_ROMKEY_RERIP); };
    static sFileRule GetNextRule51RegOn() { return GetNextRuleInternal(JojosLoadingKey::JOJOS_US_A_51_ROMKEY_RERIP); };
    static sFileRule GetRule51RegOn(uint32_t nRuleId) { return GetRuleInternal(nRuleId, JojosLoadingKey::JOJOS_US_A_51_ROMKEY_RERIP); };

    uint32_t SaveMultiplePatchFiles(CString strTargetDirectory) override;
};
