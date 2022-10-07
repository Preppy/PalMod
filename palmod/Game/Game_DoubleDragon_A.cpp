#include "StdAfx.h"
#include "Game_DOUBLEDRAGON_A.h"

uint32_t CGame_DOUBLEDRAGON_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Double Dragon (Neo-Geo)", L"082-p1.p1", 0x34ab832a, 0 },
        { L"Double Dragon (Neo-Geo)", L"082-p1.bin", 0x34ab832a, 0 },
    };

    if (ppKnownROMSet != nullptr)
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
