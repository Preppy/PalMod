#include "StdAfx.h"
#include "Game_KI_SNES.h"

uint32_t CGame_KI_SNES::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Killer Instinct (SNES Rev 1)", L"Killer Instinct (USA) (Rev 1).sfc", 0x09e9a04e, 0 },
        { L"Killer Instinct (SNES Rev 2)", L"Killer Instinct (USA).sfc", 0x252c1da7, 0x8 },
        { L"Killer Instinct (SNES Rev 2)", L"sns-akle-0.u1", 0x252c1da7, 0x8 },
        { L"Killer Instinct (SNES Rev 1)", L"Killer Instinct (USA) (Rev 1).smc", 0x09e9a04e, 0 },
        { L"Killer Instinct (SNES Rev 2)", L"Killer Instinct (USA).smc", 0x252c1da7, 0x8 },
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
