#include "StdAfx.h"
#include "Game_MAGICALDROPIII_A.h"

uint32_t CGame_MAGICALDROPIII_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Magical Drop III (Neo-Geo)", L"233-p1.p1", 0x931e17fa, 0 },
        { L"Magical Drop III Boss Hack (Neo-Geo)", L"233-p1bh.p1", 0x80bfe2a9, 0 },
        { L"Magical Drop III Tournament Edition Hack (Neo-Geo)", L"233-p1te.p1", 0xe2068d05, 0 },       
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
