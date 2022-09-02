#include "StdAfx.h"
#include "Game_VSAV_A.h"

uint32_t CGame_VSAV_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        // Vampire Savior: The Lord of Vampire (Euro 970519), same for US, Asia, Hispanic
        { L"Vampire Savior (CPS2 970519)", L"vm3.10b",  0xfffbb5b8, 0 },
        // Vampire Savior: The Lord of Vampire (Japan 970519)
        { L"Vampire Savior (CPS2 Japan 970519)", L"vm3j.10b", 0x434518e9, 0x00F4 },
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
