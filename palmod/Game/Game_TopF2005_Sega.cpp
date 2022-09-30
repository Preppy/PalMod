#include "StdAfx.h"
#include "Game_TOPF2005_SEGA.h"

uint32_t CGame_TOPF2005_SEGA::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Top Fighter 2005 (Mega Drive)", L"top fighter 2005 (unl).bin", 0x174DEFE6, 0 },
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
