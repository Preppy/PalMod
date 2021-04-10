#pragma once
#include "gameclass.h"
#include "MSH_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_MSH_05 = L"MSHe.txt";
constexpr auto EXTRA_FILENAME_MSH_06 = L"MSH06e.txt";
#define GetExtraDefForMSH(x) (UsePaletteSetForCharacters() ? ((stExtraDef *)&MSH_A_EXTRA_CUSTOM_05[x]) : ((stExtraDef *)&MSH_A_EXTRA_CUSTOM_06[x]))

class CGame_MSH_A : public CGameWithExtrasFile
{
private:
    // These handle per-ROM logic.
    int m_nBufferSelectedRom = 5;
    static int m_nMSHSelectedRom;
    static UINT32 m_nTotalPaletteCountForMSH_05;
    static UINT32 m_nTotalPaletteCountForMSH_06;
    static UINT32 m_nTotalPaletteCountForMSH;
    static bool UsePaletteSetForCharacters() { return (m_nMSHSelectedRom == 5); }

    static int rgExtraCountAll_05[MSH_A_NUMUNIT_05 + 1];
    static int rgExtraCountAll_06[MSH_A_NUMUNIT_06 + 1];
    static int rgExtraLoc_05[MSH_A_NUMUNIT_05 + 1];
    static int rgExtraLoc_06[MSH_A_NUMUNIT_06 + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    const int m_uLowestKnownPaletteROMLocation_05 = 0x61000;
    const int m_uLowestKnownPaletteROMLocation_06 = 0xa80;

public:
    CGame_MSH_A(UINT32 nConfirmedROMSize, int nMSHRomToLoad);
    ~CGame_MSH_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_05;
    static CDescTree MainDescTree_06;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCWSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static stExtraDef* MSH_A_EXTRA_CUSTOM_05;
    static stExtraDef* MSH_A_EXTRA_CUSTOM_06;
};
