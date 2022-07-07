#pragma once
#include "gameclass.h"
#include "Game_Garou_A.h"
#include "..\extrafile.h"

class CGame_Garou_S : public CGame_Garou_A
{
private:
    static uint32_t m_nExpectedGameROMSize;
    static uint32_t m_nConfirmedROMSize;

public:
    CGame_Garou_S(uint32_t nConfirmedROMSize);
    ~CGame_Garou_S(void);

    static sFileRule GetRule(uint32_t nUnitId);
};

class CGame_GarouP_A : public CGame_Garou_A
{
private:
    static uint32_t m_nExpectedGameROMSize;
    static uint32_t m_nConfirmedROMSize;

public:
    CGame_GarouP_A(uint32_t nConfirmedROMSize);
    ~CGame_GarouP_A(void);

    static sFileRule GetRule(uint32_t nUnitId);
};
