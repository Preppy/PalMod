#pragma once
#include "gameclass.h"
#include "..\ExtraFile.h"

struct sGCBUPF_BasicNodeData
{
    std::vector<LPCWSTR> rgpszNodeNames;
    uint32_t nAdditionalBufferBetweenEachNode;
    std::vector<LPCWSTR> rgpszButtonLabels;
};

struct sGCBUPF_RelativePaletteData
{
    const LPCWSTR pszPaletteName;
    const uint32_t nPaletteShiftFromBase = 0;
    const uint16_t indexImageUnit = INVALID_UNIT_VALUE; // the major character/collection index
    const uint16_t indexImageSprite = 0; // subsprites within that collection
    const stPairedPaletteInfo* pPalettePairingInfo = nullptr;
    const stPaletteProcessingInformation* pExtraProcessing = nullptr;
};

// This is used for layouts that are solely button-specific palettes
const std::vector<sGCBUPF_RelativePaletteData> GCBUPF_UseButtonLabelsAsPaletteSet = {};

struct sGCBUPF_BasicFileData
{
    const std::wstring strFileName;
    const std::wstring strCharacter;
    const uint32_t nExpectedFileSize;
    const sGCBUPF_BasicNodeData sNodeData;
    const std::vector<sGCBUPF_RelativePaletteData> prgBasicPalettes;
    uint32_t nInitialLocation = 0;
    uint32_t nImageUnitIndex = INVALID_UNIT_VALUE;
    uint32_t nImagePreviewIndex = 0;
    const std::vector<sGame_PaletteDataset> prgExtraPalettes;
};

enum class PaletteArrangementStyle
{
    EachNodeContainsAPaletteSet,
    OnePaletteSetEntryPerEachNode,
};

class CGameClassPerUnitPerFile : public CGameWithExtrasFile
{
public:
    struct sGCPUPF_CoreGameData
    {
        const std::wstring strGameFriendlyName;
        const SupportedGamesList nGameID;
        const eIMGDat_Sections eImgDatSectionID;
        const std::vector<uint16_t> rgGameImageSet;
        const sCreatePalOptions createPalOptions;
        const eImageOutputSpriteDisplay displayStyle;
        const AlphaMode eAlphaMode;
        const ColMode eColMode;
        std::vector<sGCBUPF_BasicFileData> srgLoadingData;
        // The two options are:
            // each node contains a full set of per-color palettes
            // all nodes together represent the set of palettes.  if there are effects, they go in each node
        const PaletteArrangementStyle ePaletteLayout = PaletteArrangementStyle::EachNodeContainsAPaletteSet;
    };

    static std::wstring m_strGameFriendlyName;
    static SupportedGamesList m_snCurrentGameFlag;

    static const sGCPUPF_CoreGameData* m_psCurrentGameLoadingData;

    static uint32_t m_nConfirmedROMSize;

    static uint32_t uRuleCtr;

    static CDescTree MainDescTree;

    static void InitializeStatics();

    static bool ShouldUseBasePaletteSet(uint32_t nUnitId, uint32_t nPaletteId);
    static std::vector<LPCWSTR> GetBasicPaletteLabelsForUnit(uint32_t nUnitId);
    static LPCWSTR GetBasicPaletteNameForPalette(uint32_t nUnitId, uint32_t nPaletteId);
    static size_t GetBasicPaletteListSizeForUnit(uint32_t nUnitId);
    static size_t GetBasicPaletteCountForUnit(uint32_t nUnitId);
    // This version includes the count of optional Extra palettes
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;
    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    CGameClassPerUnitPerFile(uint32_t nConfirmedROMSize = -1) {};
    ~CGameClassPerUnitPerFile() {};

    CDescTree* GetMainTree() { return &MainDescTree; };

    void InitializeGame(uint32_t nConfirmedROMSize, const sGCPUPF_CoreGameData& gameLoadingData);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitNumber) override;

    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    LPCWSTR GetGameName() override;

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static sFileRule GetNextRule(const std::vector<sGCBUPF_BasicFileData>& gameLoadingData);
    static sFileRule GetRule(uint32_t nRuleId, const std::vector<sGCBUPF_BasicFileData>& gameLoadingData);
    
    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sDescTreeNode* InitDescTree();

    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId);
};
