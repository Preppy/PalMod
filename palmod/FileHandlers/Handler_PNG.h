#pragma once
#include "..\Game\GameClass.h"

// So for this we need to 
// load the palette from the PNG
// load the PNG as an image for usage by us using alt image load
// special case save, block patch, etc

const sGame_PaletteDataset HANDLER_PNG_FAKE_PALETTE[] =
{
    { L"Native Palette", 0x00, 0x400 },
};

const sDescTreeNode HANDLER_PNG_FAKE_COLLECTION[] =
{
    { L"Image Viewer", DESC_NODETYPE_TREE, (void*)HANDLER_PNG_FAKE_PALETTE, ARRAYSIZE(HANDLER_PNG_FAKE_PALETTE) },
};

const sDescTreeNode HANDLER_PNG_FAKE_UNIT[] =
{
    { L"Image Viewer", DESC_NODETYPE_TREE, (void*)HANDLER_PNG_FAKE_COLLECTION, ARRAYSIZE(HANDLER_PNG_FAKE_COLLECTION) },
};

class CImageViewers_PNGorRAW : public CGameClass
{
private:
    static void InitializeStatics();

    static CDescTree m_MainDescTree;
    LPCWSTR m_strKeyName = L"FavPalette_RAW";

    void _StorePaletteInRegistry();
    bool _RestorePaletteFromRegistry();

    CString m_strImagePath;
    size_t m_nPaletteLength = 0;

public:
    CImageViewers_PNGorRAW(SupportedGamesList nGameDef, LPCWSTR pszImagePath, uint32_t nConfirmedROMSize);
    ~CImageViewers_PNGorRAW();

    bool GetForcedSinglePreviewPath(CString& strPath) override;

    CDescTree* GetMainTree() override { return &CImageViewers_PNGorRAW::m_MainDescTree; };

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId) override;

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) override;

    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override { return 1; };

    static sDescTreeNode* InitDescTree();

    static sFileRule GetRule(uint32_t nRule);
};
