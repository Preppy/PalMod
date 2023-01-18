#include "StdAfx.h"
#include "Game_FightFever_A.h"

uint32_t CGame_FightFever_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Fight Fever (Neo-Geo)", L"060-p1.p1", 0x2a104b50, 0 },
        { L"Fight Fever (Neo-Geo)", L"060-p1.rom", 0x2a104b50, 0 },
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
