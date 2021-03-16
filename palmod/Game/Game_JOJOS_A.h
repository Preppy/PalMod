#pragma once
#include "gameclass.h"
#include "JOJOS_A_DEF.h"
#include "..\ExtraFile.h"
#include "..\palmod.h"

#define JOJOS_A_USEEXTRAFILE

constexpr auto EXTRA_FILENAME_50 = L"jojos50e.txt";
constexpr auto EXTRA_FILENAME_51 = L"jojos51e.txt";

#ifdef JOJOS_A_USEEXTRAFILE
#define GetJojosExtraDef(x) (UsePaletteSetFor50() ? ((stExtraDef *)&JOJOS_A_EXTRA_CUSTOM_50[x]) : ((stExtraDef *)&JOJOS_A_EXTRA_CUSTOM_51[x]))
#else
#define GetJojosExtraDef(x) (const_cast<stExtraDef *>(&JOJOS_A_EXTRA[x]))
#endif

class CGame_JOJOS_A : public CGameWithExtrasFile
{
public:
    // Do we want to autoslice at 128 or 256 colors...?  Probably 128, so let's use that here.
    // This is currently only used when we export out resliced tables: there's no normal usage.
    const int m_knMaxPalettePageSize = PAL_MAXAMT_8COLORSPERLINE;

    // Jojos has two different ROMs of interest: handle here.
    int m_nBufferJojosMode = 50;
    static int m_nJojosMode;
    static UINT32 m_nTotalPaletteCount50;
    static UINT32 m_nTotalPaletteCount51;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static int rgExtraCountAll_50[JOJOS_A_NUMUNIT_50 + 1];
    static int rgExtraCountAll_51[JOJOS_A_NUMUNIT_51 + 1];
    static int rgExtraLoc_50[JOJOS_A_NUMUNIT_50 + 1];
    static int rgExtraLoc_51[JOJOS_A_NUMUNIT_51 + 1];
    
    static bool UsePaletteSetFor50() { return (m_nJojosMode == 50); }

public:
    CGame_JOJOS_A(UINT32 nConfirmedROMSize = -1, int nJojosModeToLoad = 51);
    ~CGame_JOJOS_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_50;
    static CDescTree MainDescTree_51;

    static sDescTreeNode* InitDescTree(int nPaletteSetToUse);
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
    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId);

    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);
    bool CanEnableMultispriteExport(UINT16 nUnitId, UINT16 nPalId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* JOJOS_A_EXTRA_CUSTOM_50;
    static stExtraDef* JOJOS_A_EXTRA_CUSTOM_51;
};
