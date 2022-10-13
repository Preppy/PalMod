#include "StdAfx.h"
#include "Game_SPF2T_A.h"

uint32_t CGame_SPF2T_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Super Puzzle Fighter II Turbo (CPS2)", L"pzf.04", 0xb80649e2, 0 },
        { L"Super Puzzle Fighter II Turbo (CPS2)", L"pzf.04a", 0xb80649e2, 0 },
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
