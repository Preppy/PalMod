#include "StdAfx.h"
#include "Game_SDODGEBALL_A.h"

uint32_t CGame_SDODGEBALL_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Super Dodge Ball (Neo-Geo)", L"208-p1.p1", 0x127f3d32, 0 },
        { L"Super Dodge Ball (Neo-Geo)", L"208-p1.bin", 0x127f3d32, 0 },
        { L"Super Dodge Ball (Neo-Geo)", L"SDB_P1.ROM", 0x127f3d32, 0 },
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
