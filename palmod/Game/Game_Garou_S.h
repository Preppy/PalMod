#pragma once
#include "gameclass.h"
#include "Game_Garou_A.h"
#include "..\extrafile.h"

class CGame_Garou_S : public CGame_Garou_A
{
private:
    static constexpr uint32_t m_nExpectedGameROMSize = 0x900000; // 9,437,184 bytes
    static uint32_t m_nConfirmedROMSize;

public:
    CGame_Garou_S(uint32_t nConfirmedROMSize);
    ~CGame_Garou_S();

    static sFileRule GetRule(uint32_t nUnitId);
};

class CGame_GarouP_A : public CGame_Garou_A
{
private:
    static constexpr uint32_t m_nExpectedGameROMSize = 0x100000;
    static uint32_t m_nConfirmedROMSize;

public:
    CGame_GarouP_A(uint32_t nConfirmedROMSize);
    ~CGame_GarouP_A();

    static sFileRule GetRule(uint32_t nUnitId);
};
