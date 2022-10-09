#include "StdAfx.h"
#include "Game_VHUNT2_A.h"

uint32_t CGame_VHUNT2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        // We use a significant shift here as we're reusing palette locations from another VS game
        { L"Vampire Hunter 2 (Japan 970929)", L"vh2j.09", 0x11730952, 0x5FFD4 }, //0x4714 }, // bbhood
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
