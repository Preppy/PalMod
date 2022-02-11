#pragma once
#include "gameclass.h"
#include "SVCPLUSA_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_SVCPLUSA_A = L"SVCE.txt";
#define GetExtraDefForSVCPLUSA(x)((stExtraDef *)&SVCPLUSA_A_EXTRA_CUSTOM[x])

class CGame_SVCPLUSA_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForSVCPLUSA;

    static uint32_t rgExtraCountAll[SVCPLUSA_A_NUMUNIT + 1];
    static uint32_t rgExtraLoc[SVCPLUSA_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

    enum class eSVCRevisionName
    {
        SVC,
        SVCPlus,
        SVCPlusA, // already decrypted!
        SVCSPlus,
    };

    struct SVCRevisionInfo
    {
        LPCWSTR pszRevisionName = L"SVC Plus A";
        eSVCRevisionName rev = eSVCRevisionName::SVCPlusA;
        std::vector<LPCWSTR> fileList;
        int nOffsetForReads = 0;
        bool allowWrites = true;
    };

    SVCRevisionInfo m_loadedROMRevision;

    uint8_t* decryptedROM = nullptr;

    void UpdateGameName(CFile* LoadedFile);

public:
    CGame_SVCPLUSA_A(UINT32 nConfirmedROMSize);
    ~CGame_SVCPLUSA_A(void);

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

    LPCWSTR GetGameName() { return m_loadedROMRevision.pszRevisionName; };

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId) override;

    static stExtraDef* SVCPLUSA_A_EXTRA_CUSTOM;
};
