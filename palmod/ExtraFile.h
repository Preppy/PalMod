#pragma once

#include "game\gamedef.h"
#include <vector>

void LoadExtraFileForGame(LPCTSTR pszExtraFileName, const stExtraDef* pBaseExtraDefs, stExtraDef** pCompleteExtraDefs, UINT8 nExtraUnitStart, UINT32 nGameROMSize);

const UINT32 k_nBogusHighValue = 0xFEEDFED;

class CGameWithExtrasFile : public CGameClass
{
protected:

    struct sPaletteIdentifier
    {
        UINT16 nUnit = 0;
        UINT16 nPaletteId = 0;
    };

    UINT32 m_nCurrentPaletteROMLocation = 0;
    UINT16 m_nCurrentPaletteSize = 0;
    LPCTSTR m_pszCurrentPaletteName = nullptr;
    static UINT32 m_nTotalPaletteCount;
    UINT16 m_nTotalInternalUnits = INVALID_UNIT_VALUE;
    UINT16 m_nExtraUnit = INVALID_UNIT_VALUE;
    UINT32 m_nSafeCountForThisRom = 0;
    UINT32 m_nLowestKnownPaletteRomLocation = k_nBogusHighValue;
    UINT32 m_nLowestRomLocationThisPass = k_nBogusHighValue;
    UINT32 m_nLowestRomExtrasLocationThisPass = k_nBogusHighValue;
    LPCTSTR m_pszExtraFilename = nullptr;
    LPCTSTR m_pszDupedPaletteName = nullptr;
    std::vector<sPaletteIdentifier> m_vDirtyPaletteList;

private:
    bool IsROMOffsetDuplicated(UINT16 nUnitId, UINT16 nPalId, UINT32 nStartingOffsetToCheck, UINT32 nEndOfRegionToCheck = 0);
    int GetDupeCountInExtrasDataset();
    int GetDupeCountInDataset();

public:
    CGameWithExtrasFile() {};
    virtual ~CGameWithExtrasFile() {};

    virtual void InitDataBuffer();
    virtual void ClearDataBuffer();

    //Used for image selection
    int nTargetImgId = 0;
    UINT16*** m_pppDataBuffer = nullptr;

    UINT16*** GetDataBuffer() { return m_pppDataBuffer; };

    virtual void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId) {};
    virtual UINT16 GetPaletteCountForUnit(UINT16 nUnitId) { return INVALID_UNIT_VALUE; };

    void ClearDirtyPaletteTracker() { m_vDirtyPaletteList.clear(); };
    void MarkPaletteDirty(UINT16 nUnit, UINT16 nPaletteID);
    bool IsPaletteDirty(UINT16 nUnit, UINT16 nPaletteID);

    // Checks for duplicate entries and surprisingly low entries.
    void CheckForErrorsInTables();
};

