#pragma once

#include "DescTree.h"
#include "Default.h"
#include "GameDef.h"
#include "PalGroup.h"
#include "ImgTicket.h"
#include "ColorSystem.h"
#include "game\SuppProc.h"
#include <vector>

//File rule definition
struct sFileRule
{
    WCHAR szFileName[MAX_FILENAME_LENGTH] = L"uninit";
    UINT32 uVerifyVar;
    size_t uUnitId = INVALID_UNIT_VALUE;
    bool fHasAltName = false;
    WCHAR szAltFileName[MAX_FILENAME_LENGTH] = L"uninit";
};

const UINT32 k_nBogusHighValue = 0xFEEDFED;

const UINT16 RULE_COUNTER_MASK = 0xF000;
const UINT16 RULE_COUNTER_DEMASK = 0x0FFF;

class CGameClass : public CSecondaryPaletteProcessing
{
protected:
    LPTSTR m_pszLoadDir = nullptr;
    // This is an old array used to determine if the character-file or the ROM has been updated
    // Don't use this for SIMM-based games: use IsPaletteDirty there instead
    BOOL* rgFileChanged = nullptr;
    size_t nFileAmt = 0;

    size_t m_nTotalInternalUnits = INVALID_UNIT_VALUE;
    UINT32 m_nCurrentPaletteROMLocation = 0;
    UINT32 m_nLowestKnownPaletteRomLocation = k_nBogusHighValue;
    UINT16 m_nCurrentPaletteSizeInColors = 0;
    LPCWSTR m_pszCurrentPaletteName = nullptr;
    UINT32 m_nConfirmedCRCValue = 0;

    BOOL m_fIsDirectoryBasedGame = FALSE;
    BOOL m_fGameUnitsMapToIndividualFiles = FALSE;

    size_t nUnitAmt = 0;
    SupportedGamesList nGameFlag = NUM_GAMES;
    int nImgGameFlag = 0;
    std::vector<UINT16> m_prgGameImageSet;

    //Values used for image out
    int nSrcPalUnit[MAX_PALETTES_DISPLAYABLE] = { 0 };
    int nSrcPalStart[MAX_PALETTES_DISPLAYABLE] = { 0 };
    int nSrcPalAmt[MAX_PALETTES_DISPLAYABLE] = { 0 };
    int nSrcPalInc[MAX_PALETTES_DISPLAYABLE] = { 0 };

    ColMode CurrColMode = ColMode::COLMODE_RGB444_BE;
    sImgTicket* CurrImgTicket = nullptr;
    CPalGroup BasePalGroup;

    eImageOutputSpriteDisplay DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Used for the Export Image listbox: P1/P2, LP-HK/A2, etc
    std::vector<LPCWSTR> pButtonLabelSet;

    bool m_fGameUsesAlphaValue = false;
    bool m_fAllowIPSPatching = false;

    BOOL bUsesHybrid = FALSE;
    size_t* pIndexRedir = nullptr;
    int nHybridSz = 0;

    static BOOL m_fAllowTransparencyEdits;

    enum PALOptionValues
    {
        NO_SPECIAL_OPTIONS = 0,
        OFFSET_PALETTE_BY_ONE = 1,
    };

    struct sCreatePalOptions
    {
        // Normally zero, but we can offset by one in some cases.
        UINT8 nStartingPosition = NO_SPECIAL_OPTIONS;
        PALWriteOutputOptions eWriteOutputOptions = PALWriteOutputOptions::WRITE_16;
        UINT16 nTransparencyColorPosition = 0;
    };

    sCreatePalOptions createPalOptions;

    struct sPaletteIdentifier
    {
        size_t nUnit = 0;
        size_t nPaletteId = 0;
    };

    struct DoPalettesMatch
    {
        sPaletteIdentifier* pPalToCheck;
        DoPalettesMatch(sPaletteIdentifier* pPalToCheck) : pPalToCheck(pPalToCheck) {}
        bool operator () (const sPaletteIdentifier& m) const
        {
            return (m.nUnit == pPalToCheck->nUnit) && (m.nPaletteId == pPalToCheck->nPaletteId);
        }
    };

    void ClearDirtyPaletteTracker() { m_vDirtyPaletteList.clear(); };
    std::vector<sPaletteIdentifier> m_vDirtyPaletteList;
    
    static UINT8 m_nSizeOfColorsInBytes;
    UINT16*** m_pppDataBuffer = nullptr;
    UINT32*** m_pppDataBuffer24 = nullptr;
    UINT32*** m_pppDataBuffer32 = nullptr;

    struct sCRC32ValueSet
    {
        LPCWSTR szFriendlyName = L"Unknown Game";
        LPCWSTR szROMFileName = L"uninit";
        const UINT32 crcValueExpected = -1;
        const int nROMSpecificOffset = 0;
    };

    const sCRC32ValueSet* m_pCRC32SpecificData = nullptr;

public:
    CGameClass(void);
    virtual ~CGameClass(void);

    virtual void InitDataBuffer();
    virtual void ClearDataBuffer();

    static BOOL m_ShouldUsePostSetPalProc;

    size_t* rgUnitRedir = nullptr;
    int nRedirCtr = 0;
    //Used for image selection
    int nTargetImgId = 0;

    // Currently only used by MVC2
    UINT16*** GetDataBuffer() { return m_pppDataBuffer; };
    // This is called as part of Edit's debug information.  It wants the true ROM location, so correct for the nStartingPosition offset
    UINT32 GetCurrentPaletteLocation() { return m_nCurrentPaletteROMLocation - (createPalOptions.nStartingPosition * GetGameColorByteLength()); };
    UINT32 GetLowestExpectedPaletteLocation();

    inline UINT8 GetGameColorByteLength() { return m_nSizeOfColorsInBytes; };
    inline BOOL GameIsUsing16BitColor() { return m_nSizeOfColorsInBytes == 2; };
    inline BOOL GameIsUsing24BitColor() { return m_nSizeOfColorsInBytes == 3; };
    inline BOOL GameIsUsing32BitColor() { return m_nSizeOfColorsInBytes == 4; };


    UINT16 GetCurrentPaletteSizeInColors() { return m_nCurrentPaletteSizeInColors; };

    UINT16(*ConvCol16)(UINT32 inCol);
    UINT32(*ConvCol24)(UINT32 inCol);
    UINT32(*ConvCol32)(UINT32 inCol);
    UINT32(*ConvPal16)(UINT16 inCol);
    UINT32(*ConvPal24)(UINT32 inCol);
    UINT32(*ConvPal32)(UINT32 inCol);
    int(*GetColorStepFor8BitValue_RGB)(int inCol);
    int(*Get8BitValueForColorStep_RGB)(int inCol);
    int(*GetColorStepFor8BitValue_A)(int inCol);
    int(*Get8BitValueForColorStep_A)(int inCol);
    int(*GetNearestLegal8BitColorValue_A)(int inCol);
    int(*GetNearestLegal8BitColorValue_RGB)(int inCol);
    int(*ValidateColorStep)(int nColorStep);
    void AddColorStepsToColorValue(COLORREF crSrc, COLORREF* crTarget, int uStepsR, int uStepsG, int uStepsB, int uStepsA);

    LPCWSTR GetROMFileName();
    LPCWSTR GetLoadDir() { return m_pszLoadDir; };
    BOOL SetLoadDir(LPCWSTR pszNewDir);

    AlphaMode GetAlphaMode() { return CColorSystem::GetAlphaMode(); };
    virtual void SetAlphaMode(AlphaMode NewMode) { CColorSystem::SetAlphaMode(NewMode); };

    ColMode GetColorMode() { return CurrColMode; };
    BOOL _SetColorMode(ColMode NewMode);
    virtual BOOL SetColorMode(ColMode NewMode);
    virtual bool AllowUpdatingColorFormatForGame() { return false; };
    virtual void OpenExtraFile() { };
    virtual bool GameAllowsExtraFile() { return false; };

    void SetMaximumWritePerEachTransparency(PALWriteOutputOptions eUpdatedOption) { createPalOptions.eWriteOutputOptions = eUpdatedOption; };
    PALWriteOutputOptions GetMaximumWritePerEachTransparency() { return createPalOptions.eWriteOutputOptions; };
    UINT16 GetTransparencyColorPosition() { return createPalOptions.nTransparencyColorPosition; };

    BOOL SpecSel(int* nVarSet, int nPalId, int nStart, int nInc, int nAmt = 1, int nMax = 6);

    SupportedGamesList GetGameFlag() { return nGameFlag; };
    int GetImgGameFlag() { return nImgGameFlag; };
    size_t GetUnitCt() { return nUnitAmt; };
    std::vector<UINT16> GetImageSetForGame() { return m_prgGameImageSet; };
    sImgTicket* GetImgTicket() { return CurrImgTicket; };

    CPalGroup* GetPalGroup() { return &BasePalGroup; };

    size_t GetFileAmt() { return nFileAmt; };

    void ResetFileChangeTrackingArray();
    BOOL* GetFileChangeTrackingArray() { return rgFileChanged; };
    BOOL WasGameFileChangedInSession();

    void SetIsDir(BOOL bNewIsDir = TRUE) { m_fIsDirectoryBasedGame = bNewIsDir; };
    BOOL GetIsDir() { return m_fIsDirectoryBasedGame; };
    BOOL GetGameMapsUnitsToFiles() { return m_fGameUnitsMapToIndividualFiles; };
    bool AllowIPSPatchGeneration() { return !m_fIsDirectoryBasedGame || m_fAllowIPSPatching; };

    int GetPlaneAmt(ColFlag Flag);

    void SetSourcePal(int nIndex, size_t nUnitId, int nStart, int nAmt, int nInc);
    void ClearSrcPal();

    sImgTicket* CreateImgTicket(size_t nUnitId, int nImgId, sImgTicket* NextTicket = NULL, int nXOffs = 0, int nYOffs = 0);
    void ClearSetImgTicket(sImgTicket* NewImgTicket = NULL);

    int GetCurrentPaletteIncrement() { return nSrcPalInc[0]; };
    eImageOutputSpriteDisplay GetImgDispType() { return DisplayType; };
    int GetImgOutPalAmt() { return nSrcPalAmt[0]; };

    const std::vector<LPCWSTR> GetButtonDescSet() { return pButtonLabelSet; };

    void RevertChanges(int nPalId);

    BOOL CreateHybridPal(size_t nIndexAmt, size_t nPalSz, UINT16* pData, int nExclusion, COLORREF** pNewPal, int* nNewPalSz);

    static void AllowTransparencyEdits(BOOL fAllow) { m_fAllowTransparencyEdits = fAllow; };
    static BOOL AllowTransparencyEdits() { return m_fAllowTransparencyEdits; };
    BOOL AllowTransparency() { return m_fAllowTransparencyEdits && m_fGameUsesAlphaValue; };

    //Public virtual
    virtual CDescTree* GetMainTree() = 0;

    virtual LPCWSTR GetGameName();

    virtual void CheckForErrorsInTables() {};
    virtual BOOL LoadFile(CFile* LoadedFile, size_t nUnitId);
    virtual BOOL SaveFile(CFile* SaveFile, size_t nUnitId);

    virtual UINT32 SavePatchFile(CFile* PatchFile, size_t nUnitId);
    virtual UINT32 SaveMultiplePatchFiles(CString strTargetDirectory);
    bool UserWantsAllPalettesInPatch();
    void SetSpecificValuesForCRC(UINT32 nCRCForFile);
    virtual UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) { return 0; };

    void WritePal(size_t nUnitId, size_t nPalId, COLORREF* rgColors, UINT16 nColorCount);

    virtual BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1) = 0;
    virtual COLORREF* CreatePal(size_t nUnitId, size_t nPalId);
    virtual void UpdatePalData();
    void FlushChangeTrackingArray() { safe_delete_array(rgFileChanged); ClearDirtyPaletteTracker(); };
    virtual void PrepChangeTrackingArray();
    virtual void ValidateMixExtraColors(BOOL* pfChangesWereMade) {};
    virtual void PostSetPal(size_t nUnitId, size_t nPalId) {};
    virtual void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId) {};
    virtual size_t GetPaletteCountForUnit(size_t nUnitId) { return INVALID_UNIT_VALUE; };

    virtual void CreateDefPal(sDescNode* srcNode, size_t nSepId);

    COLORREF*** CreateImgOutPal();

    BOOL _UpdatePalImg(const sDescTreeNode* pGameUnits, size_t* rgExtraCount, size_t nNormalUnitCount, size_t nExtraUnitLocation, stExtraDef* ppExtraDef, int Node01, int Node02, int Node03, int Node04);

    static size_t _GetCollectionCountForUnit(const sDescTreeNode* pGameUnits, size_t* rgExtraCount, size_t nNormalUnitCount, size_t nExtraUnitLocation, size_t nUnitId, stExtraDef* ppExtraDef);
    static size_t _GetNodeCountForCollection(const sDescTreeNode* pGameUnits, size_t* rgExtraCount, size_t nNormalUnitCount, size_t nExtraUnitLocation, size_t nUnitId, size_t nCollectionId, stExtraDef* ppExtraDef);
    static LPCWSTR _GetDescriptionForCollection(const sDescTreeNode* pGameUnits, size_t nExtraUnitLocation, size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* _GetPaletteSet(const sDescTreeNode* pGameUnits, size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* _GetSpecificPalette(const sDescTreeNode* pGameUnits, size_t* rgExtraCount, size_t nNormalUnitCount, size_t nExtraUnitLocation, size_t nUnitId, size_t nPaletteId, stExtraDef* ppExtraDef);

    size_t _GetPaletteCountForUnit(const sDescTreeNode* pGameUnits, size_t* rgExtraCount, size_t nNormalUnitCount, size_t nExtraUnitLocation, size_t nUnitId, stExtraDef* ppExtraDef);
    size_t _GetNodeSizeFromPaletteId(const sDescTreeNode* pGameUnits, size_t* rgExtraCount, size_t nNormalUnitCount, size_t nExtraUnitLocation, size_t nUnitId, size_t nPaletteId, stExtraDef* ppExtraDef);
    const sDescTreeNode* _GetNodeFromPaletteId(const sDescTreeNode* pGameUnits, size_t* rgExtraCount, size_t nNormalUnitCount, size_t nExtraUnitLocation, size_t nUnitId, size_t nPaletteId, stExtraDef* ppExtraDef, bool fReturnBasicNodesOnly);

    static size_t _GetExtraCount(size_t* rgExtraCount, size_t nNormalUnitCount, size_t nUnitId, stExtraDef* ppExtraDef);
    static size_t _GetExtraLocation(size_t*rgExtraLocations, size_t nNormalUnitCount, size_t nUnitId, stExtraDef* ppExtraDef);

    void DumpTreeSorted();

    static UINT32 _InitDescTree(sDescTreeNode* pNewDescTree, const sDescTreeNode* pGameUnits, size_t nExtraUnitLocation, size_t nTotalNormalUnitCount, size_t*rgExtraCount, size_t*rgExtraLocations, stExtraDef *ppExtraDef);

    void MarkPaletteDirty(size_t nUnit, size_t nPaletteId);
    void MarkPaletteClean(size_t nUnit, size_t nPaletteId);
    bool IsPaletteDirty(size_t nUnit, size_t nPaletteId);

    // This section covers SIMM-based games.
    // The length of one individual SIMM file
    UINT32 m_nSIMMLength = 0;
    // The number of SIMMs we need to load to build one file view
    UINT16 m_nNumberOfSIMMsPerSet = 0;
    // The base filename that we then append the file number data to
    LPCWSTR m_pszSIMMBaseFileName = nullptr;
    // This is the "5" in 5.0
    UINT8 m_nSIMMSetBaseNumber = 0;
    // This is the "0" in 5.0
    UINT8 m_nSIMMSetStartingFileNumber = 0;
    UINT8 m_nTotalNumberOfSIMMFilesNeeded = 0;

    inline UINT32 GetSIMMLocationFromROMLocation(UINT32 nROMLocation);
    inline UINT32 GetLocationWithinSIMM(UINT32 nSIMMSetLocation);
    inline UINT8 GetSIMMSetForROMLocation(UINT32 nROMLocation);
    BOOL LoadFileForSIMMGame(CFile* LoadedFile, size_t nSIMMNumber);
    BOOL SaveFileForSIMMGame(CFile* SaveFile, size_t nSIMMNumber);
    // this is a little hacky...
    virtual sFileRule GetNextRuleForSIMMGame() { sFileRule NewFileRule = {}; return NewFileRule; };
};
