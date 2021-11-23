#include "gameclass.h"
#include "..\extrafile.h"

struct sGameUnitsByFile
{
    std::wstring strFileName;
    size_t nExpectedFileSize = 0;
    std::wstring strUnitName;
    const sDescTreeNode* prgPaletteSets = nullptr;
    size_t nPaletteSetCount = 0;
};

class CGameClassByFile : public CGameWithExtrasFile
{
public:
    static size_t uRuleCtr;
    static std::vector<sGameUnitsByFile> _sCurrentGameUnits;
    static SupportedGamesList _sCurrentGameFlag;

    //Static functions
    static size_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    BOOL LoadFile(CFile* LoadedFile, size_t nUnitNumber) override;
    BOOL SaveFile(CFile* SaveFile, size_t nUnitNumber) override;

    static size_t InitDescTreeForFileSet(sDescTreeNode* pNewDescTree);

    static size_t GetCollectionCountForUnit(size_t nUnitId);
    static size_t GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId);
    static size_t GetNodeSizeFromPaletteId(size_t nUnitId, size_t nPaletteId);

    static const sGame_PaletteDataset* GetPaletteSet(size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(size_t nUnitId, size_t nPaletteId);

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    const sDescTreeNode* GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
};
