#include "StdAfx.h"
#include "GameDef.h"
#include "Game_RBFF2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define RBFF2_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_RBFF2_A::RBFF2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_RBFF2_A::MainDescTree = nullptr;

int CGame_RBFF2_A::rgExtraCountAll[RBFF2_A_NUMUNIT + 1];
int CGame_RBFF2_A::rgExtraLoc[RBFF2_A_NUMUNIT + 1];

UINT32 CGame_RBFF2_A::m_nTotalPaletteCountForRBFF2 = 0;
UINT32 CGame_RBFF2_A::m_nExpectedGameROMSize = 0x100000;
UINT32 CGame_RBFF2_A::m_nConfirmedROMSize = -1;

void CGame_RBFF2_A::InitializeStatics()
{
    safe_delete_array(CGame_RBFF2_A::RBFF2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_RBFF2_A::InitDescTree());
}

CGame_RBFF2_A::CGame_RBFF2_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_RBFF2_A::CGame_RBFF2_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = RBFF2_A_NUMUNIT;
    m_nExtraUnit = RBFF2_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 958;
    m_pszExtraFilename = EXTRA_FILENAME_RBFF2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForRBFF2;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xd0000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = RBFF2_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = RBFF2_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(RBFF2_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_RBFF2_A::~CGame_RBFF2_A(void)
{
    safe_delete_array(CGame_RBFF2_A::RBFF2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_RBFF2_A::GetMainTree()
{
    return &CGame_RBFF2_A::MainDescTree;
}

UINT32 CGame_RBFF2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Real Bout Fatal Fury 2 (Neo-Geo)", L"240-p1.p1", 0x80e41205, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo)", L"240-p1.bin", 0x80e41205, 0 },
    };

    if (ppKnownROMSet != nullptr)
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

sFileRule CGame_RBFF2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"240-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

int CGame_RBFF2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, RBFF2_A_NUMUNIT, nUnitId, RBFF2_A_EXTRA_CUSTOM);
}

int CGame_RBFF2_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, RBFF2_A_NUMUNIT, nUnitId, RBFF2_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_RBFF2_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_RBFF2_A, RBFF2_A_EXTRA, &RBFF2_A_EXTRA_CUSTOM, RBFF2_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = RBFF2_A_NUMUNIT + (GetExtraCt(RBFF2_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[RBFF2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForRBFF2 = _InitDescTree(NewDescTree,
        RBFF2_A_UNITS,
        RBFF2_A_EXTRALOC,
        RBFF2_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        RBFF2_A_EXTRA_CUSTOM
    );

    // turn this on to regenerate the headers
    //DumpPaletteHeaders();

    return NewDescTree;
}

void CGame_RBFF2_A::DumpPaletteHeaders()
{
    CString strOutput;
    const UINT32 RBFF2_PALETTE_LENGTH = 0x20;
    const UINT32 RBFF2_PALETTE_COUNT = 16;

    struct rbff2CharacterData
    {
        LPCWSTR pszCharacterName = nullptr;
        LPCWSTR pszImageName = nullptr;
        bool fShowImage[RBFF2_PALETTE_COUNT] = { false };
    };

    rbff2CharacterData rgCharacterData[] =
    {   //                                               base   bg     2      3     4       5      6      7     8      9       10    11   burn   13    elec  15
        { L"Terry",     L"indexRBFF2Sprites_Terry",   { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Andy",      L"indexRBFFSSprites_Andy",    { true, true, false, false, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Joe",       L"indexRBFF2Sprites_Joe",     { true, true, false, false, false, false, true, false, false, true, false, true, true, true, true, true } },
        { L"Mai",       L"indexRBFFSSprites_Mai",     { true, true, false, false, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Geese",     L"indexRBFFSSprites_Geese",   { true, true, false, false, false, false, true, false, false, false, false, true, true, true, true, true } },
        { L"Sokaku",    L"indexRBFFSSprites_Sokaku",  { true, true, false, false, false, true, false, false, false, false, false, true, true, true, true, true } },
        { L"Bob",       L"indexRBFFSSprites_Bob",     { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Hon Fu",    L"indexRBFFSSprites_Hon",     { true, true, true, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Blue Mary", L"indexRBFFSSprites_BlueMary", { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Franco",    L"indexRBFFSSprites_Franco",  { true, true, false, true, false, false, true, true, false, false, false, true, true, true, true, true } },
        { L"Yamazaki",  L"indexRBFFSSprites_Yamazaki", { true, true, false, false, false, true, true, false, false, false, false, true, true, true, true, true } },
        { L"Chonrei",   L"indexRBFFSSprites_Chonrei", { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Chonshu",   L"indexRBFFSSprites_Chonshu", { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Duck King", L"indexRBFFSSprites_DuckKing", { true, true, false, false, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Kim",       L"indexRBFFSSprites_Kim",     { true, true, false, true, false, true, true, false, false, false, false, true, true, true, true, true } },
        { L"Billy",     L"indexRBFFSSprites_Billy",   { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Cheng",     L"indexRBFFSSprites_Cheng",   { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Tung",      L"indexRBFFSSprites_Tung",    { true, true, false, true, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Laurence",  L"indexRBFFSSprites_Laurence", { true, true, false, false, false, false, true, false, false, false, false, true, true, true, true, true } },
        { L"Krauser",   L"indexRBFFSSprites_Krauser", { true, true, false, false, false, false, false, true, false, false, false, true, true, true, true, true } },
        { L"Rick",      L"indexRBFF2Sprites_Rick",    { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"XiangFei",  L"indexRBFF2Sprites_Xiangfei", { true, true, false, false, true, true, false, false, false, false, false, true, true, true, true, true } },
        { L"Alfred",    L"indexRBFF2Sprites_Alfred",  { true, true, false, false, false, true, false, false, false, false, false, true, true, true, true, true } },
        //                                               base   bg     2      3     4       5      6      7     8      9       10    11   burn   13    elec  15
    };

    const UINT32 k_nBasePalette = 0xd0000;
    UINT32 nCurrentPalettePosition = k_nBasePalette;

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacterData); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacterData[nCharIndex].pszCharacterName);

        // Status effects
        for (UINT16 nStatusIndex = 0; nStatusIndex < 32; nStatusIndex++)
        {
            CString strPaletteName;

            if ((nStatusIndex % RBFF2_PALETTE_COUNT) == 0)
            {
                strOutput.Format(L"const sGame_PaletteDataset RBFF2_A_%s_PALETTES_%s[] = \r\n{\r\n", szCodeDesc, (nStatusIndex < 10) ? L"P1" : L"P2");
                OutputDebugString(strOutput);
            }

            UINT32 nAdjustedIndex = (nStatusIndex > (RBFF2_PALETTE_COUNT - 1)) ? (nStatusIndex - RBFF2_PALETTE_COUNT) : nStatusIndex;

            switch (nAdjustedIndex)
            {
            case 0:
                strPaletteName = L"Main Palette";
                break;
            case 1:
                strPaletteName = L"Background Palette";
                break;
            case 12:
                strPaletteName = L"Burn Palette";
                break;
            case 13:
                strPaletteName = L"Purple Burn Palette";
                break;
            case 14:
                strPaletteName = L"Electricity Palette";
                break;
            case 15:
                strPaletteName = L"Break Shot/Background Palette 2";
                break;
            default:
                strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);
                break;
            }

            if (rgCharacterData[nCharIndex].fShowImage[nAdjustedIndex])
            {
                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s },\r\n", strPaletteName.GetString(), nCurrentPalettePosition,
                                                                                            nCurrentPalettePosition + RBFF2_PALETTE_LENGTH, rgCharacterData[nCharIndex].pszImageName);
            }
            else
            {
                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x },\r\n", strPaletteName.GetString(), nCurrentPalettePosition, nCurrentPalettePosition + RBFF2_PALETTE_LENGTH );
            }
            OutputDebugString(strOutput);
            nCurrentPalettePosition += RBFF2_PALETTE_LENGTH;

            if (((nStatusIndex + 1) % RBFF2_PALETTE_COUNT) == 0)
            {
                strOutput.Format(L"};\r\n\r\n");
                OutputDebugString(strOutput);
            }
        }
    }

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacterData); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacterData[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode RBFF2_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P1\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PALETTES_P1, ARRAYSIZE(RBFF2_A_%s_PALETTES_P1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P2\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PALETTES_P2, ARRAYSIZE(RBFF2_A_%s_PALETTES_P2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"P1 Portraits\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_%s_PORTRAIT_PALETTES_P1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P2 Portraits\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_%s_PORTRAIT_PALETTES_P2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"};\r\n\r\n");
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"const sDescTreeNode RBFF2_A_UNITS[] = \r\n{\r\n");
    OutputDebugString(strOutput);

    for (UINT16 nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacterData); nCharIndex++)
    {
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacterData[nCharIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_COLLECTION, ARRAYSIZE(RBFF2_A_%s_COLLECTION) },\r\n", rgCharacterData[nCharIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"    { L\"Bonus\", DESC_NODETYPE_TREE, (void*)RBFF2_A_BONUS_COLLECTION, ARRAYSIZE(RBFF2_A_BONUS_COLLECTION) },\r\n");
    OutputDebugString(strOutput);

    strOutput.Format(L"};\r\n\r\n");
    OutputDebugString(strOutput);
}

UINT16 CGame_RBFF2_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(RBFF2_A_UNITS, rgExtraCountAll, RBFF2_A_NUMUNIT, RBFF2_A_EXTRALOC, nUnitId, RBFF2_A_EXTRA_CUSTOM);
}

UINT16 CGame_RBFF2_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(RBFF2_A_UNITS, rgExtraCountAll, RBFF2_A_NUMUNIT, RBFF2_A_EXTRALOC, nUnitId, nCollectionId, RBFF2_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_RBFF2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(RBFF2_A_UNITS, RBFF2_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_RBFF2_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(RBFF2_A_UNITS, rgExtraCountAll, RBFF2_A_NUMUNIT, RBFF2_A_EXTRALOC, nUnitId, RBFF2_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_RBFF2_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(RBFF2_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_RBFF2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(RBFF2_A_UNITS, rgExtraCountAll, RBFF2_A_NUMUNIT, RBFF2_A_EXTRALOC, nUnitId, nPaletteId, RBFF2_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_RBFF2_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(RBFF2_A_UNITS, rgExtraCountAll, RBFF2_A_NUMUNIT, RBFF2_A_EXTRALOC, nUnitId, nPaletteId, RBFF2_A_EXTRA_CUSTOM);
}

void CGame_RBFF2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != RBFF2_A_EXTRALOC)
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
    else // RBFF2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForRBFF2(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_RBFF2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(RBFF2_A_UNITS, rgExtraCountAll, RBFF2_A_NUMUNIT, RBFF2_A_EXTRALOC, RBFF2_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
