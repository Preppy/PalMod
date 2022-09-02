#include "StdAfx.h"
#include "Game_FatalFury1_A.h"

uint32_t CGame_FatalFury1_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Fatal Fury: King of Fighters (Neo-Geo)", L"033-p1.p1", 0x47ebdc2f, 0 },
        { L"Fatal Fury: King of Fighters (Neo-Geo)", L"033-p1.bin", 0x47ebdc2f, 0 },
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

