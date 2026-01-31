#pragma once

#include "Game\Default.h"
#include "ColorSystem.h"

class CMappingPaletteManager
{
private:
    ColMode m_lastColorMode = ColMode::COLMODE_LAST;
    bool m_fAvoidPureColors = true;
    uint16_t m_nRedStep = 0, m_nGreenStep = 0, m_nBlueStep = 0;
    uint32_t m_nLoopCount = 0;
    void _Reset(ColMode colorMode);

public:
    std::vector<uint32_t> GetMappingPaletteSequence(ColMode colorMode, PALWriteOutputOptions alpha, uint16_t nWriteLength, uint8_t nStepLength);
    uint32_t GetLoopCount() { return m_nLoopCount; };
};
