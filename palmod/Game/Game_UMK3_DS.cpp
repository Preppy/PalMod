#include "StdAfx.h"
#include "Game_UMK3_DS.h"

void CGame_UMK3_DS::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nCurrentExtraUnitId)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = static_cast<int>(max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset)));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        std::map<uint32_t, int32_t> rgMK3ArcadeToDSMap =
        {
            { 0x31da8, 0x109a0c },
            { 0x35cf4, 0x121764 },
            { 0x42476, 0x126306 },
            { 0x4257a, 0x131b5a },
            { 0x4267e, 0x131e5e },
            { 0x42700, 0x131a56 },
            { 0x42782, 0x131ddc },
            { 0x4517e, 0x1319d4 },
            { 0x4a21e, 0x13408c },
            { 0x4ca7a, 0x139dec },
            { 0x4ec64, 0x13d83e },
            { 0x51210, 0x13ffd0 },
            { 0x51abe, 0x14196c }, // smoke accent color p1
            { 0x528cc, 0x141fe6 }, // kano accent color p2
            { 0x5844a, 0x14253a }, // human smoke babality
            { 0x60bbe, 0x14a370 }, // ermac p1
            { 0x61042, 0x151ae2 }, 
            { 0x67658, 0x151af2 },
            { 0x6a4b2, 0x158776 },
            { 0xa6a10, 0x15bc20 },
            { 0xafe02, 0x160134 },
            { 0xb7a60, 0x15fec0 },
            { 0xffffff, 0x15fec2 },
        };

        // this list was hand-gathered using collated results from the Find in New ROM tool
        for (auto& key : rgMK3ArcadeToDSMap)
        {
            if (m_nCurrentPaletteROMLocation < key.first)
            {
                m_nCurrentPaletteROMLocation += key.second;
                break;
            }
        }

        m_nCurrentPaletteSizeInColors = static_cast<uint16_t>(cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else
    {
        CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);
    }
}
