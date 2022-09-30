#include "StdAfx.h"
#include "Game_MSHWOTG_SNES.h"

uint32_t CGame_MSHWOTG_SNES::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Marvel Super Heroes:  War of the Gems (SNES USA)", L"Marvel Super Heroes in War of the Gems (USA).sfc", 0x00af56e8, 0 },
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
