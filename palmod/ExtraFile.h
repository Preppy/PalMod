#pragma once

#include "game\gamedef.h"

class CGameWithExtrasFile : public CGameClass
{
protected:
    static UINT32 m_nTotalPaletteCount;
    UINT16 m_nExtraUnit = INVALID_UNIT_VALUE;
    UINT32 m_nSafeCountForThisRom = 0;
    UINT32 m_nLowestRomLocationThisPass = k_nBogusHighValue;
    UINT32 m_nLowestRomExtrasLocationThisPass = k_nBogusHighValue;
    LPCWSTR m_pszExtraFilename = nullptr;
    LPCWSTR m_pszDupedPaletteName = nullptr;

private:
    bool IsROMOffsetDuplicated(size_t nUnitId, size_t nPalId, UINT32 nStartingOffsetToCheck, UINT32 nEndOfRegionToCheck = 0);
    int GetDupeCountInExtrasDataset();
    int GetDupeCountInDataset();

public:
    CGameWithExtrasFile() {};
    virtual ~CGameWithExtrasFile() {};

    // Checks for duplicate entries and surprisingly low entries.
    void CheckForErrorsInTables();

    void OpenExtraFile() override;
    bool GameAllowsExtraFile() override { return m_pszExtraFilename != nullptr; };

    static void LoadExtraFileForGame(LPCWSTR pszExtraFileName, const stExtraDef* pBaseExtraDefs, stExtraDef** pCompleteExtraDefs, size_t nExtraUnitStart, UINT32 nGameROMSize, UINT8 cbColorSize = 2);
};
