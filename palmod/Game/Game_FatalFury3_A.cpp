#include "StdAfx.h"
#include "Game_FatalFury3_A.h"

uint32_t CGame_FatalFury3_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Fatal Fury 3 (Neo-Geo)", L"069-p1.p1", 0xa8bcfbbc, 0 },
        { L"Fatal Fury 3 (Neo-Geo alternate set)", L"069-p1.bin", 0x4e27bd16, 0 },
        { L"Fatal Fury 3 (Ancient Battles Resurgence 2015-03-13)", L"069-p1bh.p1", 0xb8362f59, 0 },
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
