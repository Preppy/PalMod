#pragma once
#include "gameclass.h"
#include "..\ExtraFile.h"

struct sGCBUPF_BasicNodeData
{
    std::wstring strNodeName;
    uint32_t nAdjustmentFromBaseNode = 0;
};

struct sGCBUPF_BasicFileData
{
    std::wstring strFileName;
    std::wstring strCharacter;
    uint32_t nExpectedFileSize = 0;
    std::vector<LPCWSTR> rgpszPaletteList;
    std::vector<sGCBUPF_BasicNodeData> rgNodeData;
    uint32_t nInitialLocation = 0;
    uint32_t nImageUnitIndex = 0;
    uint32_t nImagePreviewIndex = 0;
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
        const std::vector<LPCWSTR> rgszButtonLabelSet;
        const AlphaMode eAlphaMode;
        const ColMode eColMode;
        std::vector<sGCBUPF_BasicFileData> srgLoadingData;
    };

    static std::wstring m_strGameFriendlyName;
    static SupportedGamesList m_snCurrentGameFlag;

    static const sGCPUPF_CoreGameData* m_psCurrentGameLoadingData;

    static uint32_t m_nConfirmedROMSize;

    static uint32_t uRuleCtr;

    static CDescTree MainDescTree;

    static void InitializeStatics();

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

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
