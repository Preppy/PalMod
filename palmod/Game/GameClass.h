#pragma once

#include "DescTree.h"
#include "Default.h"
#include "GameDef.h"
#include "PalGroup.h"
#include "ImgTicket.h"
#include "ColorSystem.h"
#include "game\SuppProc.h"
#include <vector>

constexpr auto MAX_FILENAME_LENGTH = 64;

//File rule definition
struct sFileRule
{
    wchar_t szFileName[MAX_FILENAME_LENGTH] = L"uninit";
    uint32_t uVerifyVar;
    uint32_t uUnitId = INVALID_UNIT_VALUE;
    bool fHasAltName = false;
    wchar_t szAltFileName[MAX_FILENAME_LENGTH] = L"uninit";
    uint32_t uAltVerifyVar = (uint32_t)-1;
};

const uint32_t k_nBogusHighValue = 0xFEEDFED;

const uint16_t RULE_COUNTER_MASK = 0xF000;
const uint16_t RULE_COUNTER_DEMASK = 0x0FFF;

class CGameClass : public CSecondaryPaletteProcessing
{
protected:
    LPWSTR m_pszLoadedPathOrFile = nullptr;
    LPWSTR m_pszLoadedPathOnly = nullptr;
    // This is an old array used to determine if the character-file or the ROM has been updated
    // Don't use this for SIMM-based games: use IsPaletteDirty there instead
    std::vector<bool> m_rgFileChanged;
    uint32_t nFileAmt = 0;

    uint32_t m_nTotalInternalUnits = INVALID_UNIT_VALUE;
    uint32_t m_nCurrentPaletteROMLocation = 0;
    uint32_t m_nLowestKnownPaletteRomLocation = k_nBogusHighValue;
    uint16_t m_nCurrentPaletteSizeInColors = 0;
    LPCWSTR m_pszCurrentPaletteName = nullptr;
    uint32_t m_nConfirmedCRCValue = 0;

    BOOL m_fIsDirectoryBasedGame = FALSE;
    BOOL m_fGameUnitsMapToIndividualFiles = FALSE;

    uint32_t nUnitAmt = 0;
    SupportedGamesList nGameFlag = NUM_GAMES;
    int nImgGameFlag = 0;
    std::vector<uint16_t> m_prgGameImageSet;

    //Values used for image out
    uint32_t nSrcPalUnit[MAX_PALETTES_DISPLAYABLE] = { 0 };
    uint32_t nSrcPalStart[MAX_PALETTES_DISPLAYABLE] = { 0 };
    uint32_t nSrcPalAmt[MAX_PALETTES_DISPLAYABLE] = { 0 };
    uint32_t nSrcPalInc[MAX_PALETTES_DISPLAYABLE] = { 0 };

    ColMode CurrColMode = ColMode::COLMODE_RGB444_BE;
    sImgTicket* CurrImgTicket = nullptr;
    CPalGroup BasePalGroup;

    eImageOutputSpriteDisplay DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Used for the Export Image listbox: P1/P2, LP-HK/A2, etc
    std::vector<LPCWSTR> pButtonLabelSet;

    bool m_fGameUsesAlphaValue = false;
    bool m_fAllowIPSPatching = false;

    static BOOL m_fAllowTransparencyEdits;
    static bool m_fGameSizeAllowsIPSPatching;

    enum PALOptionValues
    {
        NO_SPECIAL_OPTIONS = 0,
        OFFSET_PALETTE_BY_ONE = 1,
    };

    struct sCreatePalOptions
    {
        // Normally zero, but we can offset by one in some cases.
        uint8_t nStartingPosition = NO_SPECIAL_OPTIONS;
        PALWriteOutputOptions eWriteOutputOptions = PALWriteOutputOptions::WRITE_16;
        uint16_t nTransparencyColorPosition = 0;
    };

    sCreatePalOptions createPalOptions;

    struct sPaletteIdentifier
    {
        uint32_t nUnit = 0;
        uint32_t nPaletteId = 0;
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
    
    static uint8_t m_nSizeOfColorsInBytes;
    uint16_t*** m_pppDataBuffer = nullptr;
    uint32_t*** m_pppDataBuffer24 = nullptr;
    uint32_t*** m_pppDataBuffer32 = nullptr;

    struct ROMRevisionLookupData
    {
        uint16_t nRevisionID;
        std::vector<uint16_t> nBytesToMatch;
    };

    // Given a file pointer and a list of known byte sequences, return the first match, if any.
    bool FindROMVersionFromByteSniff(CFile* LoadedFile, std::vector<ROMRevisionLookupData> vKnownROMVersions, uint16_t& nSniffedVersion, uint32_t nOffsetForRead = 0);

    struct sCRC32ValueSet
    {
        std::wstring strFriendlyName = L"Unknown Game";
        std::wstring strROMFileName = L"uninit";
        uint32_t crcValueExpected = 0;
        int32_t nROMSpecificOffset = 0;
        std::vector<ROMRevisionLookupData> vValidationCheckBytes = {};
    };

    const sCRC32ValueSet* m_pCRC32SpecificData = nullptr;
    std::vector<sCRC32ValueSet> m_prgCRC32DataForGame = {};

public:
    CGameClass();
    virtual ~CGameClass();

    virtual void InitDataBuffer();
    virtual void ClearDataBuffer();

    static BOOL m_ShouldUsePostSetPalProc;

    std::vector<uint32_t> m_rgUnitRedir;

    // Currently only used by MVC2
    uint16_t*** GetDataBuffer() { return m_pppDataBuffer; };
    // This is called as part of Edit's debug information.  It wants the true ROM location, so correct for the nStartingPosition offset
    uint32_t GetCurrentPaletteLocation() { return m_nCurrentPaletteROMLocation - (createPalOptions.nStartingPosition * GetGameColorByteLength()); };
    uint32_t GetLowestExpectedPaletteLocation();

    inline uint8_t GetGameColorByteLength() { return m_nSizeOfColorsInBytes; };
    inline BOOL GameIsUsing16BitColor() { return m_nSizeOfColorsInBytes == 2; };
    inline BOOL GameIsUsing24BitColor() { return m_nSizeOfColorsInBytes == 3; };
    inline BOOL GameIsUsing32BitColor() { return m_nSizeOfColorsInBytes == 4; };

    uint16_t GetCurrentPaletteSizeInColors() { return m_nCurrentPaletteSizeInColors; };
    LPCWSTR GetCurrentPaletteName() { return m_pszCurrentPaletteName; };

    uint16_t(*ConvCol16)(uint32_t inCol);
    uint32_t(*ConvCol24)(uint32_t inCol);
    uint32_t(*ConvCol32)(uint32_t inCol);
    uint32_t(*ConvPal16)(uint16_t inCol);
    uint32_t(*ConvPal24)(uint32_t inCol);
    uint32_t(*ConvPal32)(uint32_t inCol);
    int(*GetColorStepFor8BitValue_RGB)(int inCol);
    int(*Get8BitValueForColorStep_RGB)(int inCol);
    int(*GetColorStepFor8BitValue_A)(int inCol);
    int(*Get8BitValueForColorStep_A)(int inCol);
    int(*GetNearestLegal8BitColorValue_A)(int inCol);
    int(*GetNearestLegal8BitColorValue_RGB)(int inCol);
    int(*ValidateColorStep)(int nColorStep);
    int GetNearestLegal8BitColorValue_RGB_impl(int inCol) override;
    void AddColorStepsToColorValue(COLORREF crSrc, COLORREF* crTarget, int uStepsR, int uStepsG, int uStepsB, int uStepsA) override;

    LPCWSTR GetROMFileName();
    LPCWSTR GetLoadedDirOrFile() { return m_pszLoadedPathOrFile; };
    LPCWSTR GetLoadedDirPathOnly() { return m_pszLoadedPathOnly; };
    BOOL SetLoadedPathOrFile(LPCWSTR pszNewPathOrFile);

    AlphaMode GetAlphaMode() { return ColorSystem::GetAlphaMode(); };
    virtual void SetAlphaMode(AlphaMode NewMode) { ColorSystem::SetAlphaMode(NewMode); };

    ColMode GetColorMode() { return CurrColMode; };
    bool _UpdateColorConverters(ColMode NewMode);
    bool _UpdateColorSteps(ColMode NewMode);
    bool _SetColorMode(ColMode NewMode);
    virtual bool SetColorMode(ColMode NewMode);
    virtual bool AllowUpdatingColorFormatForGame() { return false; };
    virtual void OpenExtraFile() { };
    virtual bool GameAllowsExtraFile() { return false; };

    virtual void SetMaximumWritePerEachTransparency(PALWriteOutputOptions eUpdatedOption) { createPalOptions.eWriteOutputOptions = eUpdatedOption; };
    PALWriteOutputOptions GetMaximumWritePerEachTransparency() { return createPalOptions.eWriteOutputOptions; };
    uint16_t GetTransparencyColorPosition() { return createPalOptions.nTransparencyColorPosition; };

    BOOL SpecSel(int* nVarSet, int nPalId, int nStart, int nInc, int nAmt = 1, int nMax = 6);

    SupportedGamesList GetGameFlag() { return nGameFlag; };
    int GetImgGameFlag() { return nImgGameFlag; };
    uint32_t GetUnitCt() { return nUnitAmt; };
    std::vector<uint16_t> GetImageSetForGame() { return m_prgGameImageSet; };
    sImgTicket* GetImgTicket() { return CurrImgTicket; };

    CPalGroup* GetPalGroup() { return &BasePalGroup; };

    uint32_t GetFileAmt() { return nFileAmt; };

    void ResetFileChangeTrackingArray();
    std::vector<bool>& GetFileChangeTrackingArray() { return m_rgFileChanged; };
    BOOL WasGameFileChangedInSession();

    void SetIsDir(BOOL fNewIsDir = TRUE) { m_fIsDirectoryBasedGame = fNewIsDir; };
    BOOL GetIsDir() { return m_fIsDirectoryBasedGame; };
    BOOL GetGameMapsUnitsToFiles() { return m_fGameUnitsMapToIndividualFiles; };
    bool AllowIPSPatchGeneration();

    int GetPlaneAmt(ColFlag Flag);

    void SetSourcePal(uint32_t nIndex, uint32_t nUnitId, uint32_t nStart, uint32_t nAmt, uint32_t nInc);
    void ClearSrcPal();

    sImgTicket* CreateImgTicket(uint32_t nUnitId, int nImgId, sImgTicket* NextTicket = NULL, int nXOffs = 0, int nYOffs = 0, BlendMode nBlendMode = BlendMode::Alpha);
    void ClearSetImgTicket(sImgTicket* NewImgTicket = NULL);

    uint32_t GetCurrentPaletteIncrement() { return nSrcPalInc[0]; };
    eImageOutputSpriteDisplay GetImgDispType() { return DisplayType; };
    uint32_t GetImgOutPalAmt() { return nSrcPalAmt[0]; };

    const std::vector<LPCWSTR> GetButtonDescSet() { return pButtonLabelSet; };

    void RevertChanges(int nPalId);

    static void AllowTransparencyEdits(BOOL fAllow) { m_fAllowTransparencyEdits = fAllow; };
    static BOOL AllowTransparencyEdits() { return m_fAllowTransparencyEdits; };
    BOOL AllowTransparency() { return m_fAllowTransparencyEdits && m_fGameUsesAlphaValue; };
    static void GameSizeAllowsIPSPatching(bool fAllow) { m_fGameSizeAllowsIPSPatching = fAllow; };

    //Public virtual
    virtual CDescTree* GetMainTree() = 0;

    virtual LPCWSTR GetGameName();

    virtual void CheckForErrorsInTables() {};
    virtual BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId);
    virtual BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId);

    virtual uint32_t SavePatchFile(CFile* PatchFile, uint32_t nUnitId);
    virtual uint32_t SaveMultiplePatchFiles(CString strTargetDirectory);
    bool UserWantsAllPalettesInPatch();
    void SetSpecificValuesForCRC(CFile* CurrFile, uint32_t nCRCForFile);
    const std::vector<sCRC32ValueSet> &GetKnownCRC32DatasetsForGame(bool* pfNeedToValidateCRCs = nullptr);

    void WritePal(uint32_t nUnitId, uint32_t nPalId, COLORREF* rgColors, uint16_t nColorCount);

    virtual BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1) = 0;
    virtual COLORREF* CreatePal(uint32_t nUnitId, uint32_t nPalId);
    virtual void UpdatePalData();
    void FlushChangeTrackingArray() { m_rgFileChanged.clear(); ClearDirtyPaletteTracker(); };
    virtual void PrepChangeTrackingArray();
    virtual void ValidateMixExtraColors(BOOL& fChangesWereMade) {};
    virtual int PostSetPal(uint32_t nUnitId, uint32_t nPalId) { return 0; };
    virtual void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) {};
    virtual uint32_t GetPaletteCountForUnit(uint32_t nUnitId) { return INVALID_UNIT_VALUE; };

    virtual void CreateDefPal(sDescNode* srcNode, uint32_t nSepId);

    COLORREF*** CreateImgOutPal();

    BOOL _UpdatePalImg(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, stExtraDef* ppExtraDef, int Node01, int Node02, int Node03, int Node04);

    static uint32_t _GetCollectionCountForUnit(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, stExtraDef* ppExtraDef);
    static uint32_t _GetNodeCountForCollection(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, uint32_t nCollectionId, stExtraDef* ppExtraDef);
    static uint32_t _GetNodeSizeFromPaletteId(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, uint32_t nPaletteId, stExtraDef* ppExtraDef);
    static LPCWSTR _GetDescriptionForCollection(const sDescTreeNode* pGameUnits, uint32_t nExtraUnitLocation, uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* _GetPaletteSet(const sDescTreeNode* pGameUnits, uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* _GetSpecificPalette(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, uint32_t nPaletteId, stExtraDef* ppExtraDef);

    uint32_t _GetPaletteCountForUnit(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, stExtraDef* ppExtraDef);
    const sDescTreeNode* _GetNodeFromPaletteId(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, uint32_t nPaletteId, stExtraDef* ppExtraDef, bool fReturnBasicNodesOnly);

    static uint32_t _GetExtraCount(uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nUnitId, stExtraDef* ppExtraDef);
    static uint32_t _GetExtraLocation(uint32_t* rgExtraLocations, uint32_t nNormalUnitCount, uint32_t nUnitId, stExtraDef* ppExtraDef);

    void DumpTreeSorted();

    static uint32_t _InitDescTree(sDescTreeNode* pNewDescTree, const sDescTreeNode* pGameUnits, uint32_t nExtraUnitLocation, uint32_t nTotalNormalUnitCount, uint32_t* rgExtraCount, uint32_t* rgExtraLocations, stExtraDef *ppExtraDef);

    void MarkPaletteDirty(uint32_t nUnit, uint32_t nPaletteId);
    void MarkPaletteClean(uint32_t nUnit, uint32_t nPaletteId);
    bool IsPaletteDirty(uint32_t nUnit, uint32_t nPaletteId) const;
    void WarnIfPaletteIsOversized(uint32_t nUnit, uint32_t nPaletteId, uint32_t nStartPosition, uint16_t nPaletteSizeInColors, LPCWSTR pszPaletteName) const;

    // This section covers SIMM-based games.
    // The length of one individual SIMM file
    uint32_t m_nSIMMLength = 0;
    // The number of SIMMs we need to load to build one file view
    uint16_t m_nNumberOfSIMMsPerSet = 0;
    // The base filename that we then append the file number data to
    LPCWSTR m_pszSIMMBaseFileName = nullptr;
    // This is the "5" in 5.0
    uint8_t m_nSIMMSetBaseNumber = 0;
    // This is the "0" in 5.0
    uint8_t m_nSIMMSetStartingFileNumber = 0;
    uint8_t m_nTotalNumberOfSIMMFilesNeeded = 0;

    inline uint32_t GetSIMMLocationFromROMLocation(uint32_t nROMLocation);
    inline uint32_t GetLocationWithinSIMM(uint32_t nSIMMSetLocation);
    inline uint8_t GetSIMMSetForROMLocation(uint32_t nROMLocation);
    BOOL LoadFileForSIMMGame(CFile* LoadedFile, uint32_t nSIMMNumber);
    BOOL SaveFileForSIMMGame(CFile* SaveFile, uint32_t nSIMMNumber);
    // this is a little hacky...
    virtual sFileRule GetNextRuleForSIMMGame() { sFileRule NewFileRule = {}; return NewFileRule; };
};
