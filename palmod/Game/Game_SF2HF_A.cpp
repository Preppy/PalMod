#include "StdAfx.h"
#include "Game_SF2HF_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

#define SF2HF_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SF2HF_A::SF2HF_A_21_EXTRA_CUSTOM = NULL;
stExtraDef* CGame_SF2HF_A::SF2HF_A_22_EXTRA_CUSTOM = NULL;

int CGame_SF2HF_A::rgExtraCountAll_21[SF2HF_A_21_NUMUNIT + 1] = { -1 };
int CGame_SF2HF_A::rgExtraCountAll_22[SF2HF_A_22_NUMUNIT + 1] = { -1 };
int CGame_SF2HF_A::rgExtraCountVisibleOnly_21[SF2HF_A_21_NUMUNIT + 1] = { -1 };
int CGame_SF2HF_A::rgExtraCountVisibleOnly_22[SF2HF_A_22_NUMUNIT + 1] = { -1 };
int CGame_SF2HF_A::rgExtraLoc_21[SF2HF_A_21_NUMUNIT + 1] = { -1 };
int CGame_SF2HF_A::rgExtraLoc_22[SF2HF_A_22_NUMUNIT + 1] = { -1 };

CDescTree CGame_SF2HF_A::MainDescTree_21 = nullptr;
CDescTree CGame_SF2HF_A::MainDescTree_22 = nullptr;
UINT32 CGame_SF2HF_A::m_nExpectedGameROMSize_HF = 0x80000; // 524288 bytes
UINT32 CGame_SF2HF_A::m_nExpectedGameROMSize_30th = 0x7d191f;

UINT32 CGame_SF2HF_A::m_nConfirmedROMSize = -1;

int CGame_SF2HF_A::m_nSelectedRom = 22;
UINT32 CGame_SF2HF_A::m_nTotalPaletteCountForSF2HF_21 = 0;
UINT32 CGame_SF2HF_A::m_nTotalPaletteCountForSF2HF_22 = 0;

void CGame_SF2HF_A::InitializeStatics()
{
    safe_delete_array(CGame_SF2HF_A::SF2HF_A_21_EXTRA_CUSTOM);
    safe_delete_array(CGame_SF2HF_A::SF2HF_A_22_EXTRA_CUSTOM);

    memset(rgExtraCountAll_21, -1, sizeof(rgExtraCountAll_21));
    memset(rgExtraCountAll_22, -1, sizeof(rgExtraCountAll_22));
    memset(rgExtraCountVisibleOnly_21, -1, sizeof(rgExtraCountVisibleOnly_21));
    memset(rgExtraCountVisibleOnly_22, -1, sizeof(rgExtraCountVisibleOnly_22));
    memset(rgExtraLoc_21, -1, sizeof(rgExtraLoc_21));
    memset(rgExtraLoc_22, -1, sizeof(rgExtraLoc_22));

    MainDescTree_21.SetRootTree(CGame_SF2HF_A::InitDescTree(21));
    MainDescTree_22.SetRootTree(CGame_SF2HF_A::InitDescTree(22));
}

CGame_SF2HF_A::CGame_SF2HF_A(UINT32 nConfirmedROMSize, int nSF2HFROMToLoad)
{
    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(IsSF30thBundleFile() ? ColMode::COLMODE_RGB444_LE : ColMode::COLMODE_RGB444_BE);

    InitializeStatics();

    m_nSelectedRom = nSF2HFROMToLoad;
    m_pszExtraFilename = UsePaletteSetForSelect() ? EXTRA_FILENAME_SF2HF_21 : EXTRA_FILENAME_SF2HF_22;

    //We need the proper unit amt before we init the main buffer
    m_nTotalInternalUnits = UsePaletteSetForSelect() ? SF2HF_A_21_NUMUNIT : SF2HF_A_22_NUMUNIT;
    m_nExtraUnit = UsePaletteSetForSelect() ? SF2HF_A_21_EXTRALOC : SF2HF_A_22_EXTRALOC;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + (UsePaletteSetForSelect() ? 41 : 24);
    m_nTotalPaletteCount = UsePaletteSetForSelect() ? m_nTotalPaletteCountForSF2HF_21 : m_nTotalPaletteCountForSF2HF_22;
    m_nLowestKnownPaletteRomLocation = UsePaletteSetForSelect() ? 0x93fe : 0x1e6a6;

    CString strInfo;
    strInfo.Format(L"CGame_SF2HF_A::CGame_SF2HF_A: Loaded SF2HF_A with %u Extras\n", GetExtraCt(m_nExtraUnit));
    OutputDebugString(strInfo);

    InitDataBuffer();

    //Set game information
    nGameFlag = SF2HF_A;
    nImgGameFlag = IMGDAT_SECTION_SF2;
    m_prgGameImageSet = SF2HF_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(SF2HF_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SF2HF_A::~CGame_SF2HF_A(void)
{
    safe_delete_array(CGame_SF2HF_A::SF2HF_A_21_EXTRA_CUSTOM);
    safe_delete_array(CGame_SF2HF_A::SF2HF_A_22_EXTRA_CUSTOM);
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();
}

UINT32 CGame_SF2HF_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        { L"Street Fighter II' - Hyper Fighting (US 921209)", L"s2tu_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (US 921209)", L"s2tu_22.7f", 0xaea6e035, 0 },

        { L"Street Fighter II' - Hyper Fighting (World 921209)", L"s2te_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (World 921209)", L"s2te_22.7f", 0xaea6e035, 0 },

        { L"Street Fighter II' - Hyper Fighting (Japan 921209)", L"s2tj_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (Japan 921209)", L"s2tj_22.7f", 0xaea6e035, 0 },

        { L"Street Fighter II' - Hyper Fighting (30th Anniversary)", L"bundleStreetFighterII_HF.mbundle", 0, 0 },
    };

    if (ppKnownROMSet)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

int CGame_SF2HF_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (UsePaletteSetForSelect())
    {
        return _GetExtraCount(rgExtraCountAll_21, SF2HF_A_21_NUMUNIT, nUnitId, SF2HF_A_21_EXTRA_CUSTOM);
    }
    else
    {
        return _GetExtraCount(rgExtraCountAll_22, SF2HF_A_22_NUMUNIT, nUnitId, SF2HF_A_22_EXTRA_CUSTOM);
    }
}

int CGame_SF2HF_A::GetExtraLoc(UINT16 nUnitId)
{
    if (UsePaletteSetForSelect())
    {
        return _GetExtraLocation(rgExtraLoc_21, SF2HF_A_21_NUMUNIT, nUnitId, SF2HF_A_21_EXTRA_CUSTOM);
    }
    else
    {
        return _GetExtraLocation(rgExtraLoc_22, SF2HF_A_22_NUMUNIT, nUnitId, SF2HF_A_22_EXTRA_CUSTOM);
    }
}

const sDescTreeNode* CGame_SF2HF_A::GetCurrentUnitSet()
{
    if (UsePaletteSetForSelect())
    {
        return SF2HF_A_21_UNITS;
    }
    else
    {
        return SF2HF_A_22_UNITS;
    }
}

UINT16 CGame_SF2HF_A::GetCurrentExtraLoc()
{
    if (UsePaletteSetForSelect())
    {
        return SF2HF_A_21_EXTRALOC;
    }
    else
    {
        return SF2HF_A_22_EXTRALOC;
    }
}

CDescTree* CGame_SF2HF_A::GetMainTree()
{
    if (UsePaletteSetForSelect())
    {
        return &CGame_SF2HF_A::MainDescTree_21;
    }
    else
    {
        return &CGame_SF2HF_A::MainDescTree_22;
    }
}

stExtraDef* CGame_SF2HF_A::GetCurrentExtraDef(int nDefCtr)
{
    if (UsePaletteSetForSelect())
    {
        return (stExtraDef*)&SF2HF_A_21_EXTRA_CUSTOM[nDefCtr];
    }
    else
    {
        return (stExtraDef*)&SF2HF_A_22_EXTRA_CUSTOM[nDefCtr];
    }
}

sDescTreeNode* CGame_SF2HF_A::InitDescTree(int nROMPaletteSetToUse)
{
    m_nSelectedRom = nROMPaletteSetToUse;

    bool fHaveExtras;
    UINT16 nUnitCt;
    UINT8 nExtraUnitLocation;

    if (UsePaletteSetForSelect())
    {
        nExtraUnitLocation = SF2HF_A_21_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_SF2HF_21, SF2HF_A_EXTRA, &SF2HF_A_21_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
        nUnitCt = SF2HF_A_21_NUMUNIT + (fHaveExtras ? 1 : 0);
    }
    else
    {
        nExtraUnitLocation = SF2HF_A_22_EXTRALOC;
        //Load extra file if we're using it
        LoadExtraFileForGame(EXTRA_FILENAME_SF2HF_22, SF2HF_A_EXTRA, &SF2HF_A_22_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
        nUnitCt = SF2HF_A_22_NUMUNIT + (fHaveExtras ? 1 : 0);
    }

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SF2HF_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    if (UsePaletteSetForSelect())
    {
        m_nTotalPaletteCountForSF2HF_21 = _InitDescTree(NewDescTree,
            SF2HF_A_21_UNITS,
            SF2HF_A_21_EXTRALOC,
            SF2HF_A_21_NUMUNIT,
            rgExtraCountAll_21,
            rgExtraLoc_21,
            SF2HF_A_21_EXTRA_CUSTOM
        );
    }
    else
    {
        m_nTotalPaletteCountForSF2HF_22 = _InitDescTree(NewDescTree,
            SF2HF_A_22_UNITS,
            SF2HF_A_22_EXTRALOC,
            SF2HF_A_22_NUMUNIT,
            rgExtraCountAll_22,
            rgExtraLoc_22,
            SF2HF_A_22_EXTRA_CUSTOM
        );
    }

    return NewDescTree;
}

sFileRule CGame_SF2HF_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"s2te_21.6f");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = -1;

    return NewFileRule;
}

UINT16 CGame_SF2HF_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForSelect())
    {
        return _GetCollectionCountForUnit(SF2HF_A_21_UNITS, rgExtraCountAll_21, SF2HF_A_21_NUMUNIT, SF2HF_A_21_EXTRALOC, nUnitId, SF2HF_A_21_EXTRA_CUSTOM);
    }
    else
    {
        return _GetCollectionCountForUnit(SF2HF_A_22_UNITS, rgExtraCountAll_22, SF2HF_A_22_NUMUNIT, SF2HF_A_22_EXTRALOC, nUnitId, SF2HF_A_22_EXTRA_CUSTOM);
    }
}

UINT16 CGame_SF2HF_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForSelect())
    {
        return _GetNodeCountForCollection(SF2HF_A_21_UNITS, rgExtraCountAll_21, SF2HF_A_21_NUMUNIT, SF2HF_A_21_EXTRALOC, nUnitId, nCollectionId, SF2HF_A_21_EXTRA_CUSTOM);
    }
    else
    {
        return _GetNodeCountForCollection(SF2HF_A_22_UNITS, rgExtraCountAll_22, SF2HF_A_22_NUMUNIT, SF2HF_A_22_EXTRALOC, nUnitId, nCollectionId, SF2HF_A_22_EXTRA_CUSTOM);
    }
}

LPCWSTR CGame_SF2HF_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForSelect())
    {
        return _GetDescriptionForCollection(SF2HF_A_21_UNITS, SF2HF_A_21_EXTRALOC, nUnitId, nCollectionId);
    }
    else
    {
        return _GetDescriptionForCollection(SF2HF_A_22_UNITS, SF2HF_A_22_EXTRALOC, nUnitId, nCollectionId);
    }
}

UINT16 CGame_SF2HF_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (UsePaletteSetForSelect())
    {
        return _GetPaletteCountForUnit(SF2HF_A_21_UNITS, rgExtraCountAll_21, SF2HF_A_21_NUMUNIT, SF2HF_A_21_EXTRALOC, nUnitId, SF2HF_A_21_EXTRA_CUSTOM);
    }
    else
    {
        return _GetPaletteCountForUnit(SF2HF_A_22_UNITS, rgExtraCountAll_22, SF2HF_A_22_NUMUNIT, SF2HF_A_22_EXTRALOC, nUnitId, SF2HF_A_22_EXTRA_CUSTOM);
    }
}

const sGame_PaletteDataset* CGame_SF2HF_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (UsePaletteSetForSelect())
    {
        return _GetPaletteSet(SF2HF_A_21_UNITS, nUnitId, nCollectionId);
    }
    else
    {
        return _GetPaletteSet(SF2HF_A_22_UNITS, nUnitId, nCollectionId);
    }
}

const sGame_PaletteDataset* CGame_SF2HF_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    if (UsePaletteSetForSelect())
    {
        return _GetSpecificPalette(SF2HF_A_21_UNITS, rgExtraCountAll_21, SF2HF_A_21_NUMUNIT, SF2HF_A_21_EXTRALOC, nUnitId, nPaletteId, SF2HF_A_21_EXTRA_CUSTOM);
    }
    else
    {
        return _GetSpecificPalette(SF2HF_A_22_UNITS, rgExtraCountAll_22, SF2HF_A_22_NUMUNIT, SF2HF_A_22_EXTRALOC, nUnitId, nPaletteId, SF2HF_A_22_EXTRA_CUSTOM);
    }
}

UINT16 CGame_SF2HF_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nNodeSize = 0;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_SF2HF_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    if (UsePaletteSetForSelect())
    {
        return _GetNodeFromPaletteId(SF2HF_A_21_UNITS, rgExtraCountAll_21, SF2HF_A_21_NUMUNIT, SF2HF_A_21_EXTRALOC, nUnitId, nPaletteId, SF2HF_A_21_EXTRA_CUSTOM, fReturnBasicNodesOnly);
    }
    else
    {
        return _GetNodeFromPaletteId(SF2HF_A_22_UNITS, rgExtraCountAll_22, SF2HF_A_22_NUMUNIT, SF2HF_A_22_EXTRALOC, nUnitId, nPaletteId, SF2HF_A_22_EXTRA_CUSTOM, fReturnBasicNodesOnly);
    }

}

void CGame_SF2HF_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSelectedRom;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SF2HF_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nSelectedRom;

    m_nSelectedRom = m_nBufferSelectedRom;

    if (m_pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nSelectedRom = nCurrentROMMode;
}

void CGame_SF2HF_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != GetCurrentExtraLoc())
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        // shifts:
        // Portraits: 0x70009C
        // Characters: 0x68009C
        if (IsSF30thBundleFile())
        {
            m_nCurrentPaletteROMLocation += UsePaletteSetForSelect() ? 0x70009e : 0x68009e;
        }
    }
    else // SF2HF_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SF2HF_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    if (UsePaletteSetForSelect())
    {
        return _UpdatePalImg(SF2HF_A_21_UNITS, rgExtraCountAll_21, SF2HF_A_21_NUMUNIT, SF2HF_A_21_EXTRALOC, SF2HF_A_21_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
    }
    else
    {
        return _UpdatePalImg(SF2HF_A_22_UNITS, rgExtraCountAll_22, SF2HF_A_22_NUMUNIT, SF2HF_A_22_EXTRALOC, SF2HF_A_22_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
    }
}
