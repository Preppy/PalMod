#pragma once
#include "gameclass.h"
#include "VampireNightWarriors_A_DEF.h"
#include "..\extrafile.h"

constexpr auto VampireNightWarriors_A_04_ROMKEY = 4;
constexpr auto VampireNightWarriors_A_09_ROMKEY = 9;

class CGame_VampireNightWarriors_A : public CGameWithExtrasFile
{
private:
    int m_nBufferVSROMMode = VampireNightWarriors_A_09_ROMKEY;
    static uint32_t m_nVSROMMode;

    static uint32_t m_nTotalPaletteCountForVampireNightWarriors_04;
    static uint32_t m_nTotalPaletteCountForVampireNightWarriors_09;

    static uint32_t rgExtraCountAll_04[VampireNightWarriors_A_NUMUNIT_04 + 1];
    static uint32_t rgExtraCountAll_09[VampireNightWarriors_A_NUMUNIT_09 + 1];
    static uint32_t rgExtraLoc_04[VampireNightWarriors_A_NUMUNIT_04 + 1];
    static uint32_t rgExtraLoc_09[VampireNightWarriors_A_NUMUNIT_09 + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static bool UseCharacterROM() { return (m_nVSROMMode == VampireNightWarriors_A_09_ROMKEY); }

    static constexpr auto EXTRA_FILENAME_VampireNightWarriors_04 = L"VampireNightWarriors04E.txt";
    static constexpr auto EXTRA_FILENAME_VampireNightWarriors_09 = L"VampireNightWarriorsE.txt";
    static constexpr uint32_t m_nExpectedGameROMSize = 0x80000; // 524288 bytes

public:
    CGame_VampireNightWarriors_A(uint32_t nConfirmedROMSize, int nModeToLoad = VampireNightWarriors_A_09_ROMKEY);
    ~CGame_VampireNightWarriors_A();

    //Static functions / variables
    static CDescTree MainDescTree_04;
    static CDescTree MainDescTree_09;

    static sDescTreeNode* InitDescTree(int nVSROMSetToUse);
    static sFileRule GetRule(uint32_t nUnitId);

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

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static stExtraDef* VampireNightWarriors_A_EXTRA_CUSTOM_04;
    static stExtraDef* VampireNightWarriors_A_EXTRA_CUSTOM_09;
};
