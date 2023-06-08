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
    // this reflects all accrued buffer space from pal(0) up until this palette's start location
    const uint32_t nPaletteShiftFromBase = 0;
    const uint16_t indexImageUnit = INVALID_UNIT_VALUE; // the major character/collection index
    const uint16_t indexImageSprite = 0; // subsprites within that collection
    const stPairedPaletteInfo* pPalettePairingInfo = nullptr;
    const stPaletteProcessingInformation* pExtraProcessing = nullptr;
};

struct sGCBUPF_ExtrasCollection
{
    const std::wstring strExtraCollectionName; 
    const std::vector<sGame_PaletteDataset> prgExtraPalettes;
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
    sGCBUPF_ExtrasCollection sExtrasNodeData;
};

// This enum defines how we present the assembled data to the user.  While PalMod internally Unit::Collection::Node,
// the game's view of those palettes to the user is constructed around button labels, such as P1/P2/P3, etc.
// This enum lets you align our Collection::Node layouts to those button labels.
enum class PaletteArrangementStyle
{
    // With this style, each basic node contains a simple list comprised solely of one item per button label.
    // The nodes themselves might be "Palettes" or { "Core Palettes", "EX Palettes" }
    EachBasicNodeContainsAFullButtonLabelSet,
    // With this style, the collections match the button labels.  The nodes themselves contain the core 
    // palettes and presumably some additional move or Extras palettes, such as
    //        { "Core Palette", "Fireball", "Kick Move" }
    // and so forth.
    OneButtonLabelEntryPerEachNode,
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
        const PaletteArrangementStyle ePaletteLayout = PaletteArrangementStyle::EachBasicNodeContainsAFullButtonLabelSet;
        const int cbDefaultPaletteSize = 0x400;
    };

    static std::wstring m_strGameFriendlyName;
    static SupportedGamesList m_snCurrentGameFlag;

    static const sGCPUPF_CoreGameData* m_psCurrentGameLoadingData;

    static uint32_t m_nConfirmedROMSize;

    static uint32_t uRuleCtr;

    static CDescTree MainDescTree;

    static void InitializeStatics();

    static bool ShouldUseBasePaletteSetForFileUnit(uint32_t nFileUnitId, uint32_t nPaletteId);
    static bool ShouldUseBasePaletteSet(uint32_t nCharacterUnitId, uint32_t nPaletteId);
    static std::vector<LPCWSTR> GetBasicPaletteLabelsForUnit(uint32_t nCharacterUnitId);
    static LPCWSTR GetBasicPaletteNameForPalette(uint32_t nCharacterUnitId, uint32_t nPaletteId);
    static size_t GetBasicPaletteListSizeForUnit(uint32_t nCharacterUnitId);
    static size_t GetBasicPaletteCountForUnit(uint32_t nCharacterUnitId);
    // This version includes the count of optional Extra palettes
    uint32_t GetPaletteCountForUnit(uint32_t nCharacterUnitId) override;
    static uint32_t GetPaletteCountForFileUnit(uint32_t nFileUnitId);
    
    void LoadSpecificPaletteDataByFileUnit(uint32_t nFileUnitId, uint32_t nFilePalId);
    void LoadSpecificPaletteData(uint32_t nCharacterUnitId, uint32_t nDisplayPalId);

    CGameClassPerUnitPerFile(uint32_t nConfirmedROMSize = -1) {};
    ~CGameClassPerUnitPerFile() {};

    CDescTree* GetMainTree() { return &MainDescTree; };

    void InitializeGame(uint32_t nConfirmedROMSize, const sGCPUPF_CoreGameData& gameLoadingData);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nFileUnitNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nFileUnitNumber) override;

    LPCWSTR GetGameName() override;

    enum class ImagePairing
    {
        ForBasic,
        ForExtras
    };
    bool CreateImageIfPaired(ImagePairing pairingType, int Node01, int Node02, int Node03, int Node04, uint32_t nFileUnitId, uint32_t nPalIdInNode, const stPairedPaletteInfo *pPalettePairingInfo);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static sFileRule GetNextRule(const std::vector<sGCBUPF_BasicFileData>& gameLoadingData);
    static sFileRule GetRule(uint32_t nRuleId, const std::vector<sGCBUPF_BasicFileData>& gameLoadingData);
    
    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sDescTreeNode* InitDescTree();

    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static uint32_t GetNodeCountForCollection(uint32_t nCharacterUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nCharacterUnitId, uint32_t nCollectionId);

    // These enable joining units across files by having them share unit names.
    static bool PaletteIsInFileUnit(uint32_t nTargetFileUnitId, uint32_t nDisplayUnitId, uint32_t nDisplayPalId);
    static uint32_t GetUniqueUnitCount();
    static bool IsFileUnitForUniqueCharacter(uint32_t nFileUnitId);
    static bool IsFileUnitFirstCharacterUnit(uint32_t nFileUnitId);

    static uint32_t GetCharacterIndexFromFileIndex(uint32_t nFileUnitId);
    static void GetFileIndexFromCharacterIndex(uint32_t nCharacterUnitId, uint32_t nCharacterPalId, uint32_t& nFileUnitId, uint32_t& nFilePalId);
    static uint32_t GetFileIndexFromCharacterCollection(uint32_t nCharacterUnitId, uint32_t nCollectionId);
};