#include "StdAfx.h"
#include "Game_Kizuna_A.h"

uint32_t CGame_Kizuna_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Kizuna Encounter (Neo-Geo)", L"216-p1.p1", 0x75d2b3de, 0 },
        { L"Kizuna Encounter (Neo-Geo)", L"216-p1.bin", 0x75d2b3de, 0 },
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
