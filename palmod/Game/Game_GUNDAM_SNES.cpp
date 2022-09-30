#include "StdAfx.h"
#include "Game_GUNDAM_SNES.h"

uint32_t CGame_GUNDAM_SNES::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Gundam Wing: Endless Duel (SNES)", L"Shin Kidou Senki Gundam W - Endless Duel (Japan).sfc", 0xc0aecdca, 0 },
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
