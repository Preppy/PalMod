#pragma once
#include "gameclass.h"
#include "..\ExtraFile.h"

// This game class implementation is for usage wherein the palette units are sourced to a collection of "N" files, which may or may
// not be interleaved, that are read as a composite in order to read the palette data.

enum class FileReadType
{
    Sequential,
    Interleaved,
    Interleaved_Read2Bytes_LE,
    Interleaved_Read2Bytes_BE,
};

struct sFileSpecificLoadData
{
    std::wstring strFileName;
    size_t nFileSize; // This value must be identical for set for interleaved ROMs but can be different for sequential roms
};

struct sDirectoryLoadingData
{
    std::vector<sFileSpecificLoadData> rgFileList;
    FileReadType eReadType;
};

class CGameClassByDir : public CGameWithExtrasFile
{
public:
    struct sCoreGameData
    {
        std::wstring strGameFriendlyName;
        SupportedGamesList nGameID;
        eIMGDat_Sections eImgDatSectionID;
        std::vector<uint16_t> rgGameImageSet;
        sCreatePalOptions createPalOptions;
        eImageOutputSpriteDisplay displayStyle;
        std::vector<LPCWSTR> rgszButtonLabelSet;
        AlphaMode eAlphaMode;
        ColMode eColMode;
        sDirectoryLoadingData sLoadingData;
        const sDescTreeNode* psUnitData;
        size_t nUnitCount;
        std::wstring strExtraName;
        uint32_t nKnownPaletteCount;
        uint32_t nLowestKnownPaletteLocation;
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

    static uint32_t m_nConfirmedROMSize;

    static void InitializeStatics(const sDescTreeNode *psUnitData,
                                  size_t nUnitCount,
                                  const std::wstring strExtraName);


    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    CGameClassByDir(uint32_t nConfirmedROMSize = -1) {};
    ~CGameClassByDir();

    void InitializeGame(uint32_t nConfirmedROMSize, const sCoreGameData& gameLoadingData);

    inline uint32_t GetSIMMLocationFromROMLocation(uint32_t nROMLocation);
    inline uint32_t GetSIMMUnitFromROMLocation(uint32_t nROMLocation);

    //Static functions
    static uint32_t uRuleCtr;

    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    BOOL LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nSaveUnit) override;

    static sFileRule GetRule(uint32_t nRuleId, const sDirectoryLoadingData& gameLoadingData);
    static sFileRule GetNextRule(const sDirectoryLoadingData& gameLoadingData);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly = FALSE);
    static uint32_t GetExtraLoc(uint32_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    LPCWSTR GetGameName() override;

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
};
