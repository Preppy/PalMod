#include "StdAfx.h"
#include "Game_RBFF1_A.h"

uint32_t CGame_RBFF1_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Real Bout Fatal Fury (Neo-Geo)", L"095-p1.p1", 0x63b4d8ae, 0 },
        { L"Real Bout Fatal Fury (Neo-Geo)", L"095-p1.bin", 0x63b4d8ae, 0 },
        { L"Real Bout Fatal Fury (Neo-Geo Korea)", L"095-p1k.p1", 0xf705364b, 0 },
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
