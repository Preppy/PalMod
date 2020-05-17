#pragma once

#include "game\gamedef.h"

void LoadExtraFileForGame(LPCSTR pszExtraFileName, const stExtraDef* pBaseExtraDefs, stExtraDef** pCompleteExtraDefs, UINT8 nExtraUnitStart);

const UINT32 k_nBogusHighValue = 0xFEEDFED;

class CGameWithExtrasFile : public CGameClass
{
protected:
    UINT32 m_nCurrentPaletteROMLocation = 0;
    UINT16 m_nCurrentPaletteSize = 0;
    static UINT32 m_nTotalPaletteCount;
    UINT16 m_nTotalInternalUnits = INVALID_UNIT_VALUE;
    UINT16 m_nExtraUnit = INVALID_UNIT_VALUE;
    UINT32 m_nSafeCountForThisRom = 0;
    UINT32 m_nLowestKnownPaletteRomLocation = k_nBogusHighValue;
    UINT32 m_nLowestRomLocationThisPass = k_nBogusHighValue;
    UINT32 m_nLowestRomExtrasLocationThisPass = k_nBogusHighValue;
    LPCSTR m_pszExtraFilename = nullptr;

public:
    CGameWithExtrasFile() {};
    virtual ~CGameWithExtrasFile() {};

    virtual void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId) {};
    virtual UINT16 GetPaletteCountForUnit(UINT16 nUnitId) { return INVALID_UNIT_VALUE; };

    bool IsROMOffsetDuplicated(UINT16 nUnitId, UINT16 nPalId, UINT32 nOffsetToCheck);
    int GetDupeCountInExtrasDataset();
    int GetDupeCountInDataset();
    // Checks for duplicate entries and surprisingly low entries.
    void CheckForErrorsInTables();
};

