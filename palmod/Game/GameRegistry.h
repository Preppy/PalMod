#include "GameDef.h"
#include "GameClass.h"

using GameConstructor = CGameClass * (*)(uint32_t, int, LPCWSTR);
using GetRuleFunc = sFileRule(*)(uint32_t);
using GetNextRuleFunc = sFileRule(*)();
using GetRuleCtrFunc = uint32_t(*)();
using ResetRuleCtrFunc = void (*)();

namespace KnownGameInfo
{
    LPCWSTR GetGameNameForGameID(int nGameID);
    bool FindConstructorForGameID(int nGameID, GameConstructor& gameConstructor);
    bool FindRuleDataForGameID(int nGameID, GetRuleFunc& GetRule, GetNextRuleFunc& GetNextRule, GetRuleCtrFunc& GetRuleCtr, ResetRuleCtrFunc& ResetRuleCtr);
    
    std::vector<sSupportedGameToFileMap>& GetGameToFileMap();

    void SetExtraLoadingDataForGame(int nGameFlag, LPCWSTR pszFileNameLowercase, int& nGameRule);

    void GetMatchingGamesFromFilePath(LPCWSTR pszPath, std::vector<SupportedGamesList>& vMatchingFileGames, std::vector<SupportedGamesList>& vMatchingDirectoryGames);
};
