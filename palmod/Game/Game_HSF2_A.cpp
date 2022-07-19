#include "StdAfx.h"
#include "Game_HSF2_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

#define HSF2_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_HSF2_A::HSF2_A_EXTRA_CUSTOM_03 = nullptr;
stExtraDef* CGame_HSF2_A::HSF2_A_EXTRA_CUSTOM_04 = nullptr;

CDescTree CGame_HSF2_A::MainDescTree_03 = nullptr;
CDescTree CGame_HSF2_A::MainDescTree_04 = nullptr;

uint32_t CGame_HSF2_A::m_nHSF2SelectedRom = 4;
uint32_t CGame_HSF2_A::m_nTotalPaletteCountForHSF2_03 = 0;
uint32_t CGame_HSF2_A::m_nTotalPaletteCountForHSF2_04 = 0;

uint32_t CGame_HSF2_A::rgExtraLoc_03[HSF2_A_NUMUNIT_03 + 1] = { (uint32_t)-1 };
uint32_t CGame_HSF2_A::rgExtraLoc_04[HSF2_A_NUMUNIT_04 + 1] = { (uint32_t)-1 };
uint32_t CGame_HSF2_A::rgExtraCountAll_03[HSF2_A_NUMUNIT_03 + 1] = { (uint32_t)-1 };
uint32_t CGame_HSF2_A::rgExtraCountAll_04[HSF2_A_NUMUNIT_04 + 1] = { (uint32_t)-1 };

uint32_t CGame_HSF2_A::m_nConfirmedROMSize = -1;

void CGame_HSF2_A::InitializeStatics()
{
    safe_delete_array(CGame_HSF2_A::HSF2_A_EXTRA_CUSTOM_03);
    safe_delete_array(CGame_HSF2_A::HSF2_A_EXTRA_CUSTOM_04);

    memset(rgExtraLoc_03, -1, sizeof(rgExtraLoc_03));
    memset(rgExtraLoc_04, -1, sizeof(rgExtraLoc_04));
    memset(rgExtraCountAll_03, -1, sizeof(rgExtraCountAll_03));
    memset(rgExtraCountAll_04, -1, sizeof(rgExtraCountAll_04));

    MainDescTree_03.SetRootTree(CGame_HSF2_A::InitDescTree(HSF2_A_GAMEKEY_03));
    MainDescTree_04.SetRootTree(CGame_HSF2_A::InitDescTree(HSF2_A_GAMEKEY_04));
}

CGame_HSF2_A::CGame_HSF2_A(uint32_t nConfirmedROMSize, int nHSF2RomToLoad)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nHSF2SelectedRom = nHSF2RomToLoad;

    CString strMessage;
    strMessage.Format(L"CGame_HSF2_A::CGame_HSF2_A: Loading for the %u ROM\n", m_nHSF2SelectedRom);
    OutputDebugString(strMessage);

    const uint32_t nSafeCountFor03 = 385;
    const uint32_t nSafeCountFor04 = 654;

    switch (m_nHSF2SelectedRom)
    {
    case HSF2_A_GAMEKEY_03:
        m_nTotalInternalUnits = HSF2_A_NUMUNIT_03;
        m_nExtraUnit = HSF2_A_EXTRALOC_03;
        m_nSafeCountForThisRom  = nSafeCountFor03;
        m_pszExtraFilename = EXTRA_FILENAME_HSF2_03;
        m_nTotalPaletteCount = m_nTotalPaletteCountForHSF2_03;
        m_nLowestKnownPaletteRomLocation = m_uLowestKnownPaletteROMLocation_03;
        break;
    case HSF2_A_GAMEKEY_04:
    default:
        m_nTotalInternalUnits = HSF2_A_NUMUNIT_04;
        m_nExtraUnit = HSF2_A_EXTRALOC_04;
        m_nSafeCountForThisRom = nSafeCountFor04;
        m_pszExtraFilename = EXTRA_FILENAME_HSF2_04;
        m_nTotalPaletteCount = m_nTotalPaletteCountForHSF2_04;
        m_nLowestKnownPaletteRomLocation = m_uLowestKnownPaletteROMLocation_04;
        break;
    }

    m_nSafeCountForThisRom += GetExtraCt(m_nExtraUnit);

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = HSF2_A;
    nImgGameFlag = IMGDAT_SECTION_SF2;
    m_prgGameImageSet = HSF2_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet.clear(); // TODO: Figure out what we want here later.
    
    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_HSF2_A::~CGame_HSF2_A()
{
    safe_delete_array(CGame_HSF2_A::HSF2_A_EXTRA_CUSTOM_03);
    safe_delete_array(CGame_HSF2_A::HSF2_A_EXTRA_CUSTOM_04);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

uint32_t CGame_HSF2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"HSF2 (CPS2 Portraits)", L"hs2u.03", 0xb308151e, 0 },
        { L"HSF2 (CPS2 Characters)", L"hs2u.04", 0x327aa49c, 0 },
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

uint32_t CGame_HSF2_A::GetExtraLoc(uint32_t nUnitId)
{
    if (UsePaletteSetForPortraits())
    {
        return _GetExtraLocation(rgExtraLoc_03, HSF2_A_NUMUNIT_03, nUnitId, HSF2_A_EXTRA_CUSTOM_03);
    }
    else
    {
        return _GetExtraLocation(rgExtraLoc_04, HSF2_A_NUMUNIT_04, nUnitId, HSF2_A_EXTRA_CUSTOM_04);
    }
}

uint32_t CGame_HSF2_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    if (UsePaletteSetForPortraits())
    {
        return _GetExtraCount(rgExtraCountAll_03, HSF2_A_NUMUNIT_03, nUnitId, HSF2_A_EXTRA_CUSTOM_03);
    }
    else
    {
        return _GetExtraCount(rgExtraCountAll_04, HSF2_A_NUMUNIT_04, nUnitId, HSF2_A_EXTRA_CUSTOM_04);
    }
}

CDescTree* CGame_HSF2_A::GetMainTree()
{
    if (UsePaletteSetForPortraits())
    {
        return &CGame_HSF2_A::MainDescTree_03;
    }
    else
    {
        return &CGame_HSF2_A::MainDescTree_04;
    }    
}

sDescTreeNode* CGame_HSF2_A::InitDescTree(int nROMPaletteSetToUse)
{
    m_nHSF2SelectedRom = nROMPaletteSetToUse;
    uint8_t nCurrentExtraLocation;
    uint16_t nUnitCt;

    //Load extra file if we're using it
    if (UsePaletteSetForPortraits())
    {
        nCurrentExtraLocation = HSF2_A_EXTRALOC_03;
        nUnitCt = HSF2_A_NUMUNIT_03;
        LoadExtraFileForGame(EXTRA_FILENAME_HSF2_03, &HSF2_A_EXTRA_CUSTOM_03, nCurrentExtraLocation, m_nConfirmedROMSize);
    }
    else // if (UsePaletteSetForCharacters())
    {
        nCurrentExtraLocation = HSF2_A_EXTRALOC_04;
        nUnitCt = HSF2_A_NUMUNIT_04;
        LoadExtraFileForGame(EXTRA_FILENAME_HSF2_04, &HSF2_A_EXTRA_CUSTOM_04, nCurrentExtraLocation, m_nConfirmedROMSize);
    }

    bool fHaveExtras = (GetExtraCt(nCurrentExtraLocation) > 0);
    nUnitCt += (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[HSF2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    switch (m_nHSF2SelectedRom)
    {
    case HSF2_A_GAMEKEY_03:
        m_nTotalPaletteCountForHSF2_03 = _InitDescTree(NewDescTree,
            HSF2_A_UNITS_03,
            HSF2_A_EXTRALOC_03,
            HSF2_A_NUMUNIT_03,
            rgExtraCountAll_03,
            rgExtraLoc_03,
            HSF2_A_EXTRA_CUSTOM_03
        );
        break;
    case HSF2_A_GAMEKEY_04:
    default:
        m_nTotalPaletteCountForHSF2_04 = _InitDescTree(NewDescTree,
            HSF2_A_UNITS_04,
            HSF2_A_EXTRALOC_04,
            HSF2_A_NUMUNIT_04,
            rgExtraCountAll_04,
            rgExtraLoc_04,
            HSF2_A_EXTRA_CUSTOM_04
        );
        break;
    }

    return NewDescTree;
}

sFileRule CGame_HSF2_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    switch (nUnitId)
    {
    case HSF2_A_GAMEKEY_03:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"hs2u.03");
        break;
    case HSF2_A_GAMEKEY_04:
    default:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"hs2u.04");
        break;
    }

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_HSF2_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetForPortraits())
    {
        return _GetCollectionCountForUnit(HSF2_A_UNITS_03, rgExtraCountAll_03, HSF2_A_NUMUNIT_03, HSF2_A_EXTRALOC_03, nUnitId, HSF2_A_EXTRA_CUSTOM_03);
    }
    else // if (UsePaletteSetForCharacters())
    {
        return _GetCollectionCountForUnit(HSF2_A_UNITS_04, rgExtraCountAll_04, HSF2_A_NUMUNIT_04, HSF2_A_EXTRALOC_04, nUnitId, HSF2_A_EXTRA_CUSTOM_04);
    }
}

uint32_t CGame_HSF2_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetForPortraits())
    {
        return _GetNodeCountForCollection(HSF2_A_UNITS_03, rgExtraCountAll_03, HSF2_A_NUMUNIT_03, HSF2_A_EXTRALOC_03, nUnitId, nCollectionId, HSF2_A_EXTRA_CUSTOM_03);
    }
    else // if (UsePaletteSetForCharacters())
    {
        return _GetNodeCountForCollection(HSF2_A_UNITS_04, rgExtraCountAll_04, HSF2_A_NUMUNIT_04, HSF2_A_EXTRALOC_04, nUnitId, nCollectionId, HSF2_A_EXTRA_CUSTOM_04);
    }
}

LPCWSTR CGame_HSF2_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    if (UsePaletteSetForPortraits())
    {
        return _GetDescriptionForCollection(HSF2_A_UNITS_03, HSF2_A_EXTRALOC_03, nUnitId, nCollectionId);
    }
    else // if (UsePaletteSetForCharacters())
    {
        return _GetDescriptionForCollection(HSF2_A_UNITS_04, HSF2_A_EXTRALOC_04, nUnitId, nCollectionId);
    }
}

uint32_t CGame_HSF2_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    if (UsePaletteSetForPortraits())
    {
        return _GetPaletteCountForUnit(HSF2_A_UNITS_03, rgExtraCountAll_03, HSF2_A_NUMUNIT_03, HSF2_A_EXTRALOC_03, nUnitId, HSF2_A_EXTRA_CUSTOM_03);
    }
    else
    {
        return _GetPaletteCountForUnit(HSF2_A_UNITS_04, rgExtraCountAll_04, HSF2_A_NUMUNIT_04, HSF2_A_EXTRALOC_04, nUnitId, HSF2_A_EXTRA_CUSTOM_04);
    }
}

const sGame_PaletteDataset* CGame_HSF2_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    // Don't use this for Extra palettes.
    if (UsePaletteSetForPortraits())
    {
        return _GetPaletteSet(HSF2_A_UNITS_03, nUnitId, nCollectionId);
    }
    else //if (UsePaletteSetForCharacters())
    {
        return _GetPaletteSet(HSF2_A_UNITS_04, nUnitId, nCollectionId);
    }
}

uint32_t CGame_HSF2_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nNodeSize = 0;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }
    
    return nNodeSize;
}

const sGame_PaletteDataset* CGame_HSF2_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

void CGame_HSF2_A::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nHSF2SelectedRom;
    m_pppDataBuffer = new uint16_t * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(uint16_t**) * nUnitAmt);
}

void CGame_HSF2_A::ClearDataBuffer()
{
    int nCurrentROMMode = m_nHSF2SelectedRom;

    m_nHSF2SelectedRom = m_nBufferSelectedRom;

    if (m_pppDataBuffer)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nHSF2SelectedRom = nCurrentROMMode;
}

void CGame_HSF2_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if ((UsePaletteSetForPortraits() && (nUnitId != HSF2_A_EXTRALOC_03)) ||
        (UsePaletteSetForCharacters() && (nUnitId != HSF2_A_EXTRALOC_04)))
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // HSF2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = UsePaletteSetForPortraits() ? &HSF2_A_EXTRA_CUSTOM_03[GetExtraLoc(nUnitId) + nPalId] : &HSF2_A_EXTRA_CUSTOM_04[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_HSF2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    if (UsePaletteSetForPortraits())
    {
        return _UpdatePalImg(HSF2_A_UNITS_03, rgExtraCountAll_03, HSF2_A_NUMUNIT_03, HSF2_A_EXTRALOC_03, HSF2_A_EXTRA_CUSTOM_03, Node01, Node02, Node03, Node03);
    }
    else
    {
        // Color options per game:
        // WW: 2
        // CE: 2
        // HF: 2
        // SSF2: 2
        // ST: 8

        return _UpdatePalImg(HSF2_A_UNITS_04, rgExtraCountAll_04, HSF2_A_NUMUNIT_04, HSF2_A_EXTRALOC_04, HSF2_A_EXTRA_CUSTOM_04, Node01, Node02, Node03, Node03);
    }
}
