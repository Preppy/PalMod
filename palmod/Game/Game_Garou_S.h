#pragma once
#include "gameclass.h"
#include "Game_Garou_A.h"
#include "..\extrafile.h"

class CGame_Garou_S : public CGame_Garou_A
{
private:
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

public:
    CGame_Garou_S(UINT32 nConfirmedROMSize);
    ~CGame_Garou_S(void);

    static sFileRule GetRule(UINT16 nUnitId);
};

class CGame_GarouP_A : public CGame_Garou_A
{
private:
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

public:
    CGame_GarouP_A(UINT32 nConfirmedROMSize);
    ~CGame_GarouP_A(void);

    static sFileRule GetRule(UINT16 nUnitId);
};
