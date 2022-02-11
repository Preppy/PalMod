#pragma once
#include "gameclass.h"
#include "DBZEB_DS_DEF.h"
#include "..\extrafile.h"

class CGame_DBZEB_DS : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForNEWGAME;

    static uint32_t rgExtraCountAll[DBZEB_DS_NUMUNIT + 1];
    static uint32_t rgExtraLoc[DBZEB_DS_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_DBZEB_DS = L"dbzebE.txt";
    static constexpr auto DBZEB_DS_PRIMARY_ROMNAME = L"Dragon Ball Z - Extreme Butoden (USA) Decrypted.3ds"; // the file that your palettes are stored in

public:
    CGame_DBZEB_DS(UINT32 nConfirmedROMSize);
    ~CGame_DBZEB_DS(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly = FALSE);
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

    static stExtraDef* DBZEB_DS_EXTRA_CUSTOM;
};
