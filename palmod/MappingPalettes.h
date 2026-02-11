#pragma once

#include "Game\Default.h"
#include "ColorSystem.h"

class CMappingPaletteManager
{
private:
    ColMode m_lastColorMode = ColMode::COLMODE_LAST;
    bool m_fAvoidPureColors = true;
    uint16_t m_nRedStep = 0, m_nGreenStep = 0, m_nBlueStep = 0;
    uint16_t m_nRedStart = 0, m_nGreenStart = 0, m_nBlueStart = 0;
    uint32_t m_nLoopCount = 0;

    void _Reset(ColMode colorMode);
    const std::wstring c_strRegColorStep = L"mapped_ColorSteps";

public:
    CMappingPaletteManager();
    ~CMappingPaletteManager();

    std::vector<uint32_t> GetMappingPaletteSequence(ColMode colorMode, PALWriteOutputOptions alpha, uint16_t nWriteLength, uint8_t nStepLength);
    bool UnsafeLooped();
    bool Looped() { return m_nLoopCount != 0; };
    void InitializeForUse();
};
