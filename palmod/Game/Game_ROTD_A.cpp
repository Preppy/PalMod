#include "StdAfx.h"
#include "Game_ROTD_A.h"

uint32_t CGame_ROTD_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Rage of the Dragons (Neo-Geo)", L"264-p1.p1", 0xb8cc969d, 0 },
        // This is a smaller file but it works
        { L"Rage of the Dragons (Neo-Geo Clone)", L"264-pk1.p1", 0xff2fa719, 0 },
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
