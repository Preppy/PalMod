#include "StdAfx.h"
#include "GameDef.h"
#include "Game_VENTURE_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_VENTURE_A::VENTURE_A_EXTRA_CUSTOM_31 = nullptr;
stExtraDef* CGame_VENTURE_A::VENTURE_A_EXTRA_CUSTOM_50 = nullptr;

CDescTree CGame_VENTURE_A::MainDescTree_31 = nullptr;
CDescTree CGame_VENTURE_A::MainDescTree_50 = nullptr;

uint32_t CGame_VENTURE_A::rgExtraCountAll_31[VENTURE_A_NUMUNIT_31 + 1];
uint32_t CGame_VENTURE_A::rgExtraCountAll_50[VENTURE_A_NUMUNIT_50 + 1];
uint32_t CGame_VENTURE_A::rgExtraLoc_31[VENTURE_A_NUMUNIT_31 + 1];
uint32_t CGame_VENTURE_A::rgExtraLoc_50[VENTURE_A_NUMUNIT_50 + 1];

uint32_t CGame_VENTURE_A::m_nVentureMode = 50;
uint32_t CGame_VENTURE_A::m_nTotalPaletteCountFor31 = 0;
uint32_t CGame_VENTURE_A::m_nTotalPaletteCountFor50 = 0;
uint32_t CGame_VENTURE_A::m_nConfirmedROMSize = -1;

void CGame_VENTURE_A::InitializeStatics()
{
    safe_delete_array(CGame_VENTURE_A::VENTURE_A_EXTRA_CUSTOM_31);
    safe_delete_array(CGame_VENTURE_A::VENTURE_A_EXTRA_CUSTOM_50);

    memset(rgExtraCountAll_31, -1, sizeof(rgExtraCountAll_31));
    memset(rgExtraCountAll_50, -1, sizeof(rgExtraCountAll_50));
    memset(rgExtraLoc_31, -1, sizeof(rgExtraLoc_31));
    memset(rgExtraLoc_50, -1, sizeof(rgExtraLoc_50));

    MainDescTree_31.SetRootTree(CGame_VENTURE_A::InitDescTree(31));
    MainDescTree_50.SetRootTree(CGame_VENTURE_A::InitDescTree(50));
}

CGame_VENTURE_A::CGame_VENTURE_A(uint32_t nConfirmedROMSize /* = -1 */, int nVentureModeToLoad /* = 50 */)
{
    //Set color mode
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_LE);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    m_nVentureMode = nVentureModeToLoad;

    if (UsePaletteSetFor50())
    {
        m_nTotalInternalUnits = VENTURE_A_NUMUNIT_50;
        m_nExtraUnit = VENTURE_A_EXTRALOC_50;
        m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 193;
        m_pszExtraFilename = EXTRA_FILENAME_VENTURE_A_50;
        m_nTotalPaletteCount = m_nTotalPaletteCountFor50;
        m_nLowestKnownPaletteRomLocation = 0x3b0000;
    }
    else
    {
        m_nTotalInternalUnits = VENTURE_A_NUMUNIT_31;
        m_nExtraUnit = VENTURE_A_EXTRALOC_31;
        m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 46;
        m_pszExtraFilename = EXTRA_FILENAME_VENTURE_A_31;
        m_nTotalPaletteCount = m_nTotalPaletteCountFor31;
        m_nLowestKnownPaletteRomLocation = 0x640400;
    }

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = VENTURE_A;
    nImgGameFlag = IMGDAT_SECTION_JOJOS;
    m_prgGameImageSet = VENTURE_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2; // Check out the available options in gamedef.h

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_VENTURE_A::~CGame_VENTURE_A()
{
    safe_delete_array(CGame_VENTURE_A::VENTURE_A_EXTRA_CUSTOM_31);
    safe_delete_array(CGame_VENTURE_A::VENTURE_A_EXTRA_CUSTOM_50);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_VENTURE_A::GetMainTree()
{
    if (UsePaletteSetFor50())
    {
        return &CGame_VENTURE_A::MainDescTree_50;
    }
    else
    {
        return &CGame_VENTURE_A::MainDescTree_31;
    }
}

uint32_t CGame_VENTURE_A::GetExtraCt(uint32_t nUnitId)
{
    if (UsePaletteSetFor50())
    {
        return _GetExtraCount(rgExtraCountAll_50, VENTURE_A_NUMUNIT_50, nUnitId, VENTURE_A_EXTRA_CUSTOM_50);
    }
    else
    {
        return _GetExtraCount(rgExtraCountAll_31, VENTURE_A_NUMUNIT_31, nUnitId, VENTURE_A_EXTRA_CUSTOM_31);
    }
}

uint32_t CGame_VENTURE_A::GetExtraLoc(uint32_t nUnitId)
{
    if (UsePaletteSetFor50())
    {
        return _GetExtraLocation(rgExtraLoc_50, VENTURE_A_NUMUNIT_50, nUnitId, VENTURE_A_EXTRA_CUSTOM_50);
    }
    else
    {
        return _GetExtraLocation(rgExtraLoc_31, VENTURE_A_NUMUNIT_31, nUnitId, VENTURE_A_EXTRA_CUSTOM_31);
    }
}

sDescTreeNode* CGame_VENTURE_A::InitDescTree(int nPaletteSetToUse)
{
    uint16_t nUnitCt = 0;
    m_nVentureMode = nPaletteSetToUse;

    //Load extra file if we're using it
    if (UsePaletteSetFor50())
    {
        LoadExtraFileForGame(EXTRA_FILENAME_VENTURE_A_50, &VENTURE_A_EXTRA_CUSTOM_50, VENTURE_A_EXTRALOC_50, m_nConfirmedROMSize);
        nUnitCt = VENTURE_A_NUMUNIT_50 + (GetExtraCt(VENTURE_A_EXTRALOC_50) ? 1 : 0);
    }
    else
    {
        LoadExtraFileForGame(EXTRA_FILENAME_VENTURE_A_31, &VENTURE_A_EXTRA_CUSTOM_31, VENTURE_A_EXTRALOC_31, m_nConfirmedROMSize);
        nUnitCt = VENTURE_A_NUMUNIT_31 + (GetExtraCt(VENTURE_A_EXTRALOC_31) ? 1 : 0);
    }
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[VENTURE_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    if (UsePaletteSetFor50())
    {
        m_nTotalPaletteCountFor50 = _InitDescTree(NewDescTree,
            VENTURE_A_UNITS_50,
            VENTURE_A_EXTRALOC_50,
            VENTURE_A_NUMUNIT_50,
            rgExtraCountAll_50,
            rgExtraLoc_50,
            VENTURE_A_EXTRA_CUSTOM_50
        );
    }
    else
    {
        m_nTotalPaletteCountFor31 = _InitDescTree(NewDescTree,
            VENTURE_A_UNITS_31,
            VENTURE_A_EXTRALOC_31,
            VENTURE_A_NUMUNIT_31,
            rgExtraCountAll_31,
            rgExtraLoc_31,
            VENTURE_A_EXTRA_CUSTOM_31
        );
    }

    return NewDescTree;
}

sFileRule CGame_VENTURE_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    if (nUnitId == 50)
    {
        // This value is only used for directory-based games
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"50");
        NewFileRule.uVerifyVar = m_nExpectedGameROMSize_50;
    }
    else
    {
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"31");
        NewFileRule.uVerifyVar = m_nExpectedGameROMSize_31;
    }

    NewFileRule.uUnitId = 0;

    return NewFileRule;
}

LPCWSTR CGame_VENTURE_A::GetGameName()
{
    if (UsePaletteSetFor50())
    {
        return L"Jojo's Venture (Japan, 50: Characters)";
    }
    else
    {
        return L"Jojo's Venture (Japan, 31: HUD Portraits)";
    }
}

void CGame_VENTURE_A::InitDataBuffer()
{
    m_nBufferVentureMode = m_nVentureMode;
    m_pppDataBuffer = new uint16_t * *[nUnitAmt];
    memset(m_pppDataBuffer, 0, sizeof(uint16_t**) * nUnitAmt);
}

void CGame_VENTURE_A::ClearDataBuffer()
{
    // We walk the tree to clear it according to Venture mode, but if you live switch games
    // we would use the new mode incorrectly as we clear the old buffer.
    int nCurrentVentureMode = m_nVentureMode;

    m_nVentureMode = m_nBufferVentureMode;

    if (m_pppDataBuffer)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                uint32_t nPaletteCount = GetPaletteCountForUnit(nUnitCtr);

                for (uint16_t nPaletteIndex = 0; nPaletteIndex < nPaletteCount; nPaletteIndex++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPaletteIndex]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nVentureMode = nCurrentVentureMode;
}

uint32_t CGame_VENTURE_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetFor50())
    {
        return _GetCollectionCountForUnit(VENTURE_A_UNITS_50, rgExtraCountAll_50, VENTURE_A_NUMUNIT_50, VENTURE_A_EXTRALOC_50, nUnitId, VENTURE_A_EXTRA_CUSTOM_50);
    }
    else
    {
        return _GetCollectionCountForUnit(VENTURE_A_UNITS_31, rgExtraCountAll_31, VENTURE_A_NUMUNIT_31, VENTURE_A_EXTRALOC_31, nUnitId, VENTURE_A_EXTRA_CUSTOM_31);
    }
}

uint32_t CGame_VENTURE_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetFor50())
    {
        return _GetNodeCountForCollection(VENTURE_A_UNITS_50, rgExtraCountAll_50, VENTURE_A_NUMUNIT_50, VENTURE_A_EXTRALOC_50, nUnitId, nCollectionId, VENTURE_A_EXTRA_CUSTOM_50);
    }
    else
    {
        return _GetNodeCountForCollection(VENTURE_A_UNITS_31, rgExtraCountAll_31, VENTURE_A_NUMUNIT_31, VENTURE_A_EXTRALOC_31, nUnitId, nCollectionId, VENTURE_A_EXTRA_CUSTOM_31);
    }
}

LPCWSTR CGame_VENTURE_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetFor50())
    {
        return _GetDescriptionForCollection(VENTURE_A_UNITS_50, VENTURE_A_EXTRALOC_50, nUnitId, nCollectionId);
    }
    else
    {
        return _GetDescriptionForCollection(VENTURE_A_UNITS_31, VENTURE_A_EXTRALOC_31, nUnitId, nCollectionId);
    }

}

uint32_t CGame_VENTURE_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetFor50())
    {
        return _GetPaletteCountForUnit(VENTURE_A_UNITS_50, rgExtraCountAll_50, VENTURE_A_NUMUNIT_50, VENTURE_A_EXTRALOC_50, nUnitId, VENTURE_A_EXTRA_CUSTOM_50);
    }
    else
    {
        return _GetPaletteCountForUnit(VENTURE_A_UNITS_31, rgExtraCountAll_31, VENTURE_A_NUMUNIT_31, VENTURE_A_EXTRALOC_31, nUnitId, VENTURE_A_EXTRA_CUSTOM_31);
    }
}

const sGame_PaletteDataset* CGame_VENTURE_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetFor50())
    {
        return _GetPaletteSet(VENTURE_A_UNITS_50, nUnitId, nCollectionId);
    }
    else
    {
        return _GetPaletteSet(VENTURE_A_UNITS_31, nUnitId, nCollectionId);
    }
}

const sDescTreeNode* CGame_VENTURE_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    if (UsePaletteSetFor50())
    {
        return _GetNodeFromPaletteId(VENTURE_A_UNITS_50, rgExtraCountAll_50, VENTURE_A_NUMUNIT_50, VENTURE_A_EXTRALOC_50, nUnitId, nPaletteId, VENTURE_A_EXTRA_CUSTOM_50, fReturnBasicNodesOnly);
    }
    else
    {
        return _GetNodeFromPaletteId(VENTURE_A_UNITS_31, rgExtraCountAll_31, VENTURE_A_NUMUNIT_31, VENTURE_A_EXTRALOC_31, nUnitId, nPaletteId, VENTURE_A_EXTRA_CUSTOM_31, fReturnBasicNodesOnly);
    }
}

const sGame_PaletteDataset* CGame_VENTURE_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    if (UsePaletteSetFor50())
    {
        return _GetSpecificPalette(VENTURE_A_UNITS_50, rgExtraCountAll_50, VENTURE_A_NUMUNIT_50, VENTURE_A_EXTRALOC_50, nUnitId, nPaletteId, VENTURE_A_EXTRA_CUSTOM_50);
    }
    else
    {
        return _GetSpecificPalette(VENTURE_A_UNITS_31, rgExtraCountAll_31, VENTURE_A_NUMUNIT_31, VENTURE_A_EXTRALOC_31, nUnitId, nPaletteId, VENTURE_A_EXTRA_CUSTOM_31);
    }
}

void CGame_VENTURE_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    bool isPaletteFromExtensionsFile = false;

    if (UsePaletteSetFor50() ? (nUnitId == VENTURE_A_EXTRALOC_50) :
                               (nUnitId == VENTURE_A_EXTRALOC_31))
    {
        isPaletteFromExtensionsFile = true;
    }

     if (!isPaletteFromExtensionsFile)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // VENTURE_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForVENTURE(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_VENTURE_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    if (UsePaletteSetFor50())
    {
        return _UpdatePalImg(VENTURE_A_UNITS_50, rgExtraCountAll_50, VENTURE_A_NUMUNIT_50, VENTURE_A_EXTRALOC_50, VENTURE_A_EXTRA_CUSTOM_50, Node01, Node02, Node03, Node03);
    }
    else
    {
        return _UpdatePalImg(VENTURE_A_UNITS_31, rgExtraCountAll_31, VENTURE_A_NUMUNIT_31, VENTURE_A_EXTRALOC_31, VENTURE_A_EXTRA_CUSTOM_31, Node01, Node02, Node03, Node03);
    }
}
