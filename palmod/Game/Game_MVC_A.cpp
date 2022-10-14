#include "StdAfx.h"
#include "Game_MVC_A.h"

uint32_t CGame_MVC_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        // Marvel Vs. Capcom: Clash of Super Heroes
        { L"MvC (CPS2 980112)", L"mvc.06",  0x4b0b6d3e, 0 },
        { L"MvC (CPS2 980123)", L"mvc.06a", 0x8528e1f5, 0 },
        { L"MvC (CPS2 980123)", L"mvcu.06", 0x2f1524bc, -0x60 },
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

#ifdef NOTES
    // These are the MAME values...
    ROM_START(mvscud)   // bootlet: USA 980123 Phoenix Edition (bootleg)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvsc )   // 23/01/1998 (c) 1998 (Euro)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvscu )  // 23/01/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvscj )  // 23/01/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START(mvsca)    // 23/01/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvsch )  // 23/01/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvscb )   // 23/01/1998 (c) 1998 (Brazil)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))


    ROM_START(mvscr1) // 12/01/1998 (c) 1998 (Euro)
        ROM_LOAD16_WORD_SWAP("mvc.06", 0x180000, 0x80000, CRC(4b0b6d3e) SHA1(375372adf0a508bb6fc6a79326b2d4171db9ca0f))
        
    ROM_START( mvscjr1 )    // 12/01/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("mvc.06", 0x180000, 0x80000, CRC(4b0b6d3e) SHA1(375372adf0a508bb6fc6a79326b2d4171db9ca0f))

    ROM_START( mvscar1 )    // 12/01/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("mvc.06", 0x180000, 0x80000, CRC(4b0b6d3e) SHA1(375372adf0a508bb6fc6a79326b2d4171db9ca0f))


    ROM_START( mvscur1 )    // 23/01/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("mvcu.06", 0x180000, 0x80000, CRC(2f1524bc) SHA1(b6543d40fb98eabec82787e0fd60fbc59069e72e))

    ROM_START( mvscjsing )  // 23/01/1998 (c) 1998 (Japan) - Single PCB
        ROM_REGION( CODE_SIZE, "maincpu", 0 )      /* 68000 code */
        ROM_LOAD16_BYTE( "mvc_ja.simm1", 0x000000, 0x200000, CRC(6a2ef7c2) SHA1(625530b92217375014db4694196e6ab2a4684db6) ) // == mvc_ja.simm4
        ROM_LOAD16_BYTE( "mvc_ja.simm3", 0x000001, 0x200000, CRC(699d09ad) SHA1(67f6587808f55f10f58e067512f8db3f67dda770) ) // == mvc_ja.simm6
#endif
}

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
        stExtraDef* pCurrDef = &m_prgCurrentExtrasLoaded[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }

    // Adjust for ROM-specific variant locations
    if (m_pCRC32SpecificData)
    {
        // The only differences between the ROMs is a shift in the mvcu set on offsets above 0x40000
        if (m_nCurrentPaletteROMLocation > 0x40000)
        {
            m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
        }
    }
}

void CGame_MVC_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        CString strMessage;
        strMessage.Format(L"CGame_MVC_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
        OutputDebugString(strMessage);

        const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(nUnitId, nPalId);

        if (pThisPalette && pThisPalette->pExtraProcessing && pThisPalette->pExtraProcessing->pProcessingSteps.size())
        {
            OutputDebugString(L"\tThis palette is linked to additional palettes: updating those as well now.\n");
            ProcessAdditionalPaletteChangesRequired(nUnitId, nPalId, pThisPalette->pExtraProcessing->pProcessingSteps);
        }
        else
        {
            OutputDebugString(L"\tNo further processing needed.\n");
        }
    }
}
