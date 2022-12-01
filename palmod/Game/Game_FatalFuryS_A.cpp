#include "StdAfx.h"
#include "Game_FatalFuryS_A.h"

uint32_t CGame_FatalFuryS_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Fatal Fury Special (Neo-Geo)", L"058-p1.p1", 0x2f585ba2, 0 },
        { L"Fatal Fury Special (Neo-Geo)", L"058-p1.bin", 0x2f585ba2, 0 },
        { L"Fatal Fury Special (Boss hack by Yumeji)", L"058-p1bs.p1", 0x8cd18f7f, 0 },
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
