#include "StdAfx.h"
#include "Game_MMPR_SNES.h"

uint32_t CGame_MMPR_SNES::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"MMPR:TFE (SNES)", L"Mighty Morphin Power Rangers - The Fighting Edition (USA).sfc", 0x460b0a60, 0 },
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
