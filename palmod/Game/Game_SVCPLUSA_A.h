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

    static int rgExtraCountAll[SVCPLUSA_A_NUMUNIT + 1];
    static int rgExtraLoc[SVCPLUSA_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

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

    LPCWSTR GetGameName() { return m_loadedROMRevision.pszRevisionName; };

    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId) override;

    static stExtraDef* SVCPLUSA_A_EXTRA_CUSTOM;
};
