#include "StdAfx.h"
#include "Game_GEMFIGHTER_A.h"

uint32_t CGame_GEMFIGHTER_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        // sgemf    Super Gem Fighter: Mini Mix (US 970904)
        // sgemfa   Super Gem Fighter: Mini Mix (Asia 970904)
        // pfghtj   Pocket Fighter (Japan 970904)
        // sgemfh   Super Gem Fighter: Mini Mix (Hispanic 970904)
        { L"Super Gem Fighter: Mini Mix (USA 970904)", L"pcf.07",  0x5ac6d5ea, 0 },
    };

    if (ppKnownROMSet)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}
