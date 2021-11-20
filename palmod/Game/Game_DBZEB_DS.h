#pragma once
#include "gameclass.h"
#include "DBZEB_DS_DEF.h"
#include "..\extrafile.h"

class CGame_DBZEB_DS : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForNEWGAME;

    static size_t rgExtraCountAll[DBZEB_DS_NUMUNIT + 1];
    static size_t rgExtraLoc[DBZEB_DS_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_DBZEB_DS = L"dbzebE.txt";
    static constexpr auto DBZEB_DS_PRIMARY_ROMNAME = L"Dragon Ball Z - Extreme Butoden (USA) Decrypted.3ds"; // the file that your palettes are stored in

public:
    CGame_DBZEB_DS(UINT32 nConfirmedROMSize);
    ~CGame_DBZEB_DS(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(size_t nUnitId);

    //Extra palette function
    static size_t GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly = FALSE);
    static size_t GetExtraLoc(size_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static size_t GetCollectionCountForUnit(size_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static size_t GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(size_t nUnitId, size_t nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* DBZEB_DS_EXTRA_CUSTOM;
};
