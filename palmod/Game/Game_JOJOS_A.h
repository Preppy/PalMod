#pragma once
#include "gameclass.h"
#include "JOJOS_A_DEF.h"

#define JOJOS_A_USEEXTRAFILE

constexpr auto EXTRA_FILENAME_50 = "jojos50e.txt";
constexpr auto EXTRA_FILENAME_51 = "jojos51e.txt";

#ifdef JOJOS_A_USEEXTRAFILE
#define GetJojosExtraDef(x) (UsePaletteSetFor50() ? ((stExtraDef *)&JOJOS_A_EXTRA_CUSTOM_50[x]) : ((stExtraDef *)&JOJOS_A_EXTRA_CUSTOM_51[x]))
#else
#define GetJojosExtraDef(x) (const_cast<stExtraDef *>(&JOJOS_A_EXTRA[x]))
#endif

class CGame_JOJOS_A : public CGameClass
{
private:
    //Used for GetPalOffset BUGBUG but why?
    int m_nCurrentPaletteROMLocation = 0;
    int m_nCurrentPaletteSize = 0;
    const int m_knMaxPalettePageSize = 64;

    // This array holds all the actual color tables we use
    UINT16*** m_pppDataBuffer = nullptr;
    int m_nBufferJojosMode = 50;

    // Jojos has two different ROMs of interest: handle here.
    static int m_nJojosMode;
    static UINT32 m_nTotalPaletteCount50;
    static UINT32 m_nTotalPaletteCount51;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);

    void InitDataBuffer();
    void ClearDataBuffer();
    void CheckExtrasFileForDuplication();
    bool IsROMOffsetDuplicated(UINT16 nUnitId, UINT16 nPalId, int nOffsetToCheck);
    bool AreThereDupesInDataset();
    void CheckForDupesInTables();
    
    static const sJOJOS_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static bool UsePaletteSetFor50() { return (m_nJojosMode == 50); }

public:
    CGame_JOJOS_A(int nJojosModeToLoad);
    ~CGame_JOJOS_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_50;
    static CDescTree MainDescTree_51;

    // static CDescTree * GetMainTree();
    static CDescTree InitDescTree(int nPaletteSetToUse);
    // static void SetExtraDesc(sDescTreeNode * srcNode, int nCollectionIndex);
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);

    static void LoadExtraFile(int nPaletteSetToUse);

    //Normal functions
    CDescTree* GetMainTree();

    int GetBasicImgId(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nFileId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nFileId = 0);
    BOOL CGame_JOJOS_A::UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);
    BOOL CreateExtraPal(UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };

    static stExtraDef* JOJOS_A_EXTRA_CUSTOM_50;
    static stExtraDef* JOJOS_A_EXTRA_CUSTOM_51;
};
