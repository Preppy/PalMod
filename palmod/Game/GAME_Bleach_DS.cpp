#include "StdAfx.h"
#include "Game_Bleach_DS.h"

uint32_t CGame_BLEACH_DS::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Bleach DS (Europe - Nintendo DS)", L"3494 - Bleach - Dark Souls (Europe) (En,Fr,De,Es,It).nds",  0, 0 },
        { L"Bleach DS (US - Nintendo DS)", L"2761 Bleach - Dark Souls (US).nds", 0, -0x5DBA00 },
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
