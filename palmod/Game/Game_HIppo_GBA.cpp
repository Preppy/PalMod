#include "StdAfx.h"
#include "Game_HIppo_GBA.h"

uint32_t CGame_HIppo_GBA::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    // If we need further differentiation, we can bytesniff at 0xa0
    static const sCRC32ValueSet knownROMs[] =
    {
        { L"Hajime no Ippo - The Fighting! (Japan)", L"Hajime no Ippo - The Fighting! (Japan).gba", 0x63045aa, 0 },
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
