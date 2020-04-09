#pragma once

#include "game\gamedef.h"

void LoadExtraFileForGame(LPCSTR pszExtraFileName, const stExtraDef* pBaseExtraDefs, stExtraDef** pCompleteExtraDefs, UINT8 nExtraUnitStart);

class CGameWithExtrasFile
{
protected:
    int m_nCurrentPaletteROMLocation = 0;
    static UINT32 m_nTotalPaletteCount;
    UINT16 m_nTotalInternalUnits = INVALID_UNIT_VALUE;
    UINT16 m_nExtraUnit = INVALID_UNIT_VALUE;
    UINT32 m_nSafeCountForThisRom = 0;
    LPCSTR m_pszExtraFilename = nullptr;

public:

    CGameWithExtrasFile(void) {};
    virtual ~CGameWithExtrasFile(void) {};

    virtual void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId) {};
    virtual UINT16 GetPaletteCountForUnit(UINT16 nUnitId) { return INVALID_UNIT_VALUE; };

    bool IsROMOffsetDuplicated(UINT16 nUnitId, UINT16 nPalId, int nOffsetToCheck);
    int GetDupeCountInExtrasDataset();
    int GetDupeCountInDataset();
    void CheckForDupesInTables();
};

