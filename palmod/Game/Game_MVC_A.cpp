#include "StdAfx.h"
#include "Game_MVC_A.h"

void CGame_MVC_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = static_cast<int>(max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset)));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // MVC_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef& currDef = m_prgCurrentExtrasLoaded.at(GetExtraLocForUnit(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = currDef.uOffset;
        m_nCurrentPaletteSizeInColors = (currDef.cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = currDef.szDesc;
    }

    // Adjust for ROM-specific variant locations
    if (m_pCRC32SpecificData)
    {
        // The only differences between the ROMs is a shift in the mvcu set on offsets above 0x40004
        if (m_nCurrentPaletteROMLocation > 0x40004) // This is the start of Intro Cliff Pt 1
        {
            m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
        }
    }
}

void CGame_MVC_D::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    // There are a number of things to be concerned about.
    // * The generalized shift from Arcade-->Dreamcast
    // * A bunch of smaller shifts as the palette chunks are also shifted
    // So this code handles those different sectional shifts.  Should be fairly logical.
    if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = static_cast<int>(max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset)));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            // Adjust for ROM-specific variant locations
            if (m_nCurrentPaletteROMLocation < 0x40004)
            {
                // This section is most of the stages, CSIs, Onslaught Phase 2 Main Body, etc
                m_nCurrentPaletteROMLocation += 0x25F176;
            }
            else if (m_nCurrentPaletteROMLocation < 0x46A44)
            {
                // This section is Intro Cliff Pt1 to Red Duo BG
                m_nCurrentPaletteROMLocation += 0x25F0AA;
            }
            else if (m_nCurrentPaletteROMLocation < 0x597A2)
            {
                // character palettes and everything normal
                m_nCurrentPaletteROMLocation += 0x23254C;
            }
            else
            {
                // Just M.Bison and Intro Cliff 3.  The previous section ends on CapAm's K Eagle.
                m_nCurrentPaletteROMLocation += 0x23256C;
            }
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // MVC_D_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef& currDef = m_prgCurrentExtrasLoaded.at(GetExtraLocForUnit(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = currDef.uOffset;
        m_nCurrentPaletteSizeInColors = (currDef.cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = currDef.szDesc;
    }
}
