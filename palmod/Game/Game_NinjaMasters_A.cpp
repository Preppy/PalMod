#include "StdAfx.h"
#include "Game_NINJAMASTERS_A.h"

uint32_t CGame_NINJAMASTERS_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Ninja Master's (Neo-Geo)", L"217-p2.sp2", 0x191fca88, 0 },
        { L"Ninja Master's (Neo-Geo)", L"217-p2.bin", 0x191fca88, 0 },
        { L"Ninja Master's (Neo-Geo)", L"ninjm_p2.rom", 0x191fca88, 0 },
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
