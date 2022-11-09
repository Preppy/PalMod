#include "StdAfx.h"
#include "Game_MAGICALDROPII_A.h"

uint32_t CGame_MAGICALDROPII_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Magical Drop II (Neo-Geo)", L"221-p1.p1", 0x7be82353, 0 },
        { L"Magical Drop II (Neo-Geo)", L"221-p1.bin", 0x7be82353, 0 },
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
