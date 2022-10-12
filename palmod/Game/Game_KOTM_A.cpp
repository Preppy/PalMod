#include "StdAfx.h"
#include "Game_KOTM_A.h"

uint32_t CGame_KOTM_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"King of the Monsters (Neo-Geo set 1)", L"016-p1.p1", 0x1b818731, 0 },
        { L"King of the Monsters (Neo-Geo set 2)", L"016-hp1.bin", 0xb774621e, 0 },
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
