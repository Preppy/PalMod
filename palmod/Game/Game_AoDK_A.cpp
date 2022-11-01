#include "StdAfx.h"
#include "Game_AODK_A.h"

uint32_t CGame_AODK_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Aggressors of Dark Kombat (Neo-Geo)", L"074-p1.p1", 0x62369553, 0 },
        { L"Aggressors of Dark Kombat (Neo-Geo)", L"074-p1.bin", 0x62369553, 0 },
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
