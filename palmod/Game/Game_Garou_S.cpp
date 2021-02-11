#include "StdAfx.h"
#include "GameDef.h"
#include "Game_Garou_S.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define Garou_S_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_Garou_S::m_nExpectedGameROMSize = 0x900000; // 9,437,184 bytes
UINT32 CGame_Garou_S::m_nConfirmedROMSize = -1;

CGame_Garou_S::CGame_Garou_S(UINT32 nConfirmedROMSize) :
    CGame_Garou_A(0x40000) // allow for loading extras
{
    CString strMessage;
    strMessage.Format(L"CGame_Garou_S::CGame_Garou_S: Loading ROM...\n");
    OutputDebugString(strMessage);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xce040;

    //Set game information
    nGameFlag = Garou_S;
}

CGame_Garou_S::~CGame_Garou_S(void)
{
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

sFileRule CGame_Garou_S::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"p1.bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}
