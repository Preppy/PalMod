#include "StdAfx.h"
#include "GameDef.h"
#include "Game_FatalFury2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"


uint32_t CGame_FatalFury2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Fatal Fury 2 (Neo-Geo)", L"047-p1.bin", 0xbe40ea92, 0 },
        { L"Fatal Fury 2 (Neo-Geo)", L"047-p1.p1", 0xbe40ea92, 0 },
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
