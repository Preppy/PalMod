#pragma once
#include "gameclass.h"
#include "..\ExtraFile.h"

// This game class implementation is for usage wherein the palette units are sourced to a collection of "N" files, which may or may
// not be interleaved, that are read as a composite in order to read the palette data.
// If you want multiple "0" locations for the Extras file, create a new sCoreGameData set that references that additional
// palette information.

enum class FileReadType
{
    Sequential,
    Interleaved_2FileSets,
    Interleaved_4FileSets,
    Interleaved_Read2Bytes_LE,
    Interleaved_Read2Bytes_BE,
};

struct sFileSpecificLoadData
{
    std::wstring strFileName;
    size_t nFileSize = 0; // This value must be identical for set for interleaved ROMs but can be different for sequential roms
};

struct sDirectoryLoadingData
{
    std::vector<sFileSpecificLoadData> rgFileList;
    FileReadType eReadType = FileReadType::Sequential;
};

class CGameClassByDir : public CGameWithExtrasFile
{
private:
    void SetValidatedFileReadType();

public:
    struct sCoreGameData
    {
        const std::wstring strGameFriendlyName;
        const SupportedGamesList nGameID;
        const eIMGDat_Sections eImgDatSectionID;
        const std::vector<uint16_t> rgGameImageSet;
        sCreatePalOptions createPalOptions;
        const eImageOutputSpriteDisplay displayStyle;
        const std::vector<LPCWSTR> rgszButtonLabelSet;
        AlphaMode eAlphaMode;
        ColMode eColMode;
        const sDirectoryLoadingData sLoadingData;
        std::vector<sCRC32ValueSet> rgCRC32Data;
        const sDescTreeNode* psUnitData;
        const size_t nUnitCount;
        const std::wstring strExtraName;
        const uint32_t nKnownPaletteCount;
        const uint32_t nLowestKnownPaletteLocation;
    };

    static std::vector<sDescTreeNode> m_rgCurrentGameUnits;
   
    static std::wstring m_strGameFriendlyName;
    static std::wstring m_strCurrentExtraFilename;
    static std::vector<uint32_t> m_rgCurrentExtraCounts;
    static std::vector<uint32_t> m_rgCurrentExtraLocations;
    static stExtraDef* m_prgCurrentExtrasLoaded;
    static uint16_t m_nCurrentExtraUnitId;
    static SupportedGamesList m_snCurrentGameFlag;

    static const sDirectoryLoadingData* m_psCurrentFileLoadingData;
    FileReadType m_eValidatedFileJoinType = FileReadType::Sequential;

    static size_t m_nConfirmedROMSize;

    static void InitializeStatics(const sCoreGameData& gameLoadingData);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    CGameClassByDir(uint32_t nConfirmedROMSize = -1) {};
    ~CGameClassByDir();

    void InitializeGame(uint32_t nConfirmedROMSize, const sCoreGameData& gameLoadingData);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nSaveUnit) override;

    CDescTree* GetMainTree() { return &MainDescTree; };

    inline uint32_t GetSIMMLocationFromROMLocation(uint32_t nROMLocation);
    inline uint32_t GetSIMMUnitFromROMLocation(uint32_t nROMLocation);

    static uint32_t uRuleCtr;

    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetRule(uint32_t nRuleId, const sDirectoryLoadingData& gameLoadingData);
    static sFileRule GetNextRule(const sDirectoryLoadingData& gameLoadingData);

    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree(ColMode eColMode);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly = FALSE);
    static uint32_t GetExtraLoc(uint32_t nUnitId);

    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static uint32_t GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    LPCWSTR GetGameName() override;

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    int PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;
};
