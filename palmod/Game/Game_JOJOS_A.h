#pragma once
#include "gameclass.h"
#include "JOJOS_A_DEF.h"
#include "..\ExtraFile.h"
#include "..\palmod.h"

constexpr auto JOJOS_A_50_ROMKEY = 50;
constexpr auto JOJOS_A_51_ROMKEY = 51;
constexpr auto JOJOS_US_A_51_ROMKEY = 5051;

class CGame_JOJOS_A : public CGameWithExtrasFile
{
public:
    // Do we want to autoslice at 128 or 256 colors...?  Probably 128, so let's use that here.
    // This is currently only used when we export out resliced tables: there's no normal usage.
    const int m_knMaxPalettePageSize = PAL_MAXAMT_8COLORSPERLINE;

    // Jojos has two different ROMs of interest: handle here.
    int m_nBufferJojosMode = 50;
    static uint32_t m_nJojosMode;
    static uint32_t m_nTotalPaletteCount50;
    static uint32_t m_nTotalPaletteCount51;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static const uint32_t m_nExpectedGameROMSize = 0x800000;
    static uint32_t m_nConfirmedROMSize;

    static uint32_t rgExtraCountAll_50[JOJOS_A_NUMUNIT_50 + 1];
    static uint32_t rgExtraCountAll_51[JOJOS_A_NUMUNIT_51 + 1];
    static uint32_t rgExtraLoc_50[JOJOS_A_NUMUNIT_50 + 1];
    static uint32_t rgExtraLoc_51[JOJOS_A_NUMUNIT_51 + 1];
    
    static bool UsePaletteSetFor50() { return (m_nJojosMode == JOJOS_A_50_ROMKEY); }
    static bool UseRegulationOnLogic() { return (m_nJojosMode == JOJOS_US_A_51_ROMKEY); }

    static constexpr auto EXTRA_FILENAME_50 = L"jojos50e.txt";
    static constexpr auto EXTRA_FILENAME_51 = L"jojos51e.txt";

public:
    CGame_JOJOS_A(uint32_t nConfirmedROMSize = -1, int nJojosModeToLoad = JOJOS_A_51_ROMKEY);
    ~CGame_JOJOS_A();

    //Static functions / variables
    static CDescTree MainDescTree_50;
    static CDescTree MainDescTree_51;

    static sDescTreeNode* InitDescTree(int nPaletteSetToUse);
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly = FALSE);
    static uint32_t GetExtraLoc(uint32_t nUnitId);
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    //Normal functions
    CDescTree* GetMainTree();
    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId);

    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;
    bool CanEnableMultispriteExport(uint32_t nUnitId, uint32_t nPalId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* JOJOS_A_EXTRA_CUSTOM_50;
    static stExtraDef* JOJOS_A_EXTRA_CUSTOM_51;
};
