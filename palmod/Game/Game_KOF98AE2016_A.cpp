#include "StdAfx.h"
#include "Game_KOF98AE2016_A.h"

uint32_t CGame_KOF98AE2016_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"KOF98AE2016 (Romhack)", L"242ae-p2.sp2", 0xAC1E9E79, 0 },
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
