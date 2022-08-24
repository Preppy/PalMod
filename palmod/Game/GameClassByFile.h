#include "gameclass.h"
#include "..\extrafile.h"

// This game class implementation is for usage with a game that has each palette unit associated with a specific file.
// Consider the Dreamcast/PS2 versions of MvC2, where each character is its own PLxx.pl file.
// Each unit is associated back to one file.  You can have multiple units sourcing back to the same file, but it is a unique
// load and save each time.

struct sGameUnitsByFile
{
    std::wstring strFileName;
    uint32_t nExpectedFileSize = 0;
    std::wstring strUnitName;
    const sDescTreeNode* prgPaletteSets = nullptr;
    uint32_t nPaletteSetCount = 0;
};

class CGameClassByFile : public CGameWithExtrasFile
{
public:
    static uint32_t uRuleCtr;
    static std::vector<sGameUnitsByFile> _sCurrentGameUnits;
    static SupportedGamesList _sCurrentGameFlag;

    //Static functions
    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitNumber) override;

    static uint32_t InitDescTreeForFileSet(sDescTreeNode* pNewDescTree);

    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);
    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static uint32_t GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId);

    static const sGame_PaletteDataset* GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
};
