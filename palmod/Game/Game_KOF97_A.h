#pragma once
#include "gameclass.h"
#include "KOF97_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_KOF97_A = L"KOF97E.txt";
constexpr auto EXTRA_FILENAME_KOF97AE_A = L"KOF97AEe.txt";
#define GetExtraDefForKOF97(x)((UsePaletteSetFor97()) ? (stExtraDef *)&KOF97_A_EXTRA_CUSTOM[x] : (stExtraDef *)&KOF97AE_A_EXTRA_CUSTOM[x])

class CGame_KOF97_A : public CGameWithExtrasFile
{
private:
    SupportedGamesList m_nBufferSelectedRom = KOF97_A;
    static SupportedGamesList m_nSelectedRom;

    static UINT32 m_nTotalPaletteCountForKOF97;
    static UINT32 m_nTotalPaletteCountForKOF97AE;

    static bool UsePaletteSetFor97() { return (m_nSelectedRom != KOF97AE_A); }

    static size_t rgExtraCountAll_97[KOF97_A_NUMUNIT + 1];
    static size_t rgExtraCountAll_97AE[KOF97AE_A_NUMUNIT + 1];
    static size_t rgExtraLoc_97[KOF97_A_NUMUNIT + 1];
    static size_t rgExtraLoc_97AE[KOF97AE_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize_KOF97;
    static UINT32 m_nExpectedGameROMSize_KOF97GM;
    static UINT32 m_nConfirmedROMSize;

    // Needed for multiple ROM support
    void InitDataBuffer() override;
    void ClearDataBuffer() override;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_KOF97_A(UINT32 nConfirmedROMSize, SupportedGamesList nROMToLoad = KOF97_A);
    ~CGame_KOF97_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_97;
    static CDescTree MainDescTree_97AE;

    static sDescTreeNode* InitDescTree(SupportedGamesList nROMPaletteSetToUse);
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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* KOF97_A_EXTRA_CUSTOM;
    static stExtraDef* KOF97AE_A_EXTRA_CUSTOM;
};
