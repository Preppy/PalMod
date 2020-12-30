#pragma once

#include "GameClass.h"

class CGameLoad
{
private:
    BOOL SetGame(int nGameFlag);

    UINT16(*GetRuleCtr)(void) = {};
    void (*ResetRuleCtr)(void) = {};
    sFileRule(*GetNextRule)(void) = {};
    sFileRule(*GetRule)(UINT16) = {};
    CGameClass* CreateGame(int nGameFlag, UINT32 nConfirmedROMSize, int nExtraGameData = 0);

    CString szLoadSaveStr = _T("");

    int nSaveLoadCount = 0;
    int nSaveLoadSucc = 0;
    int nSaveLoadErr = 0;

public:
    CGameLoad(void);
    ~CGameLoad(void);

    CGameClass* LoadFile(int nGameFlag, TCHAR* szLoadFile);
    CGameClass* LoadDir(int nGameFlag, TCHAR* szLoadDir);
    void SaveGame(CGameClass* CurrGame);
    void SavePatchFile(CGameClass* CurrGame);
    void SaveMultiplePatchFiles(CGameClass* CurrGame, CString strTargetDirectory);
    void CrosscopyGame(CGameClass* CurrGame);

    int GetErrCt() { return nSaveLoadErr; };
    CString GetLoadSaveStr() { return szLoadSaveStr; };
};
