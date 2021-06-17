#include "StdAfx.h"
#include "GameDef.h"
#include "Game_CVS2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define CVS2_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_CVS2_A::CVS2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_CVS2_A::MainDescTree = nullptr;

int CGame_CVS2_A::rgExtraCountAll[CVS2_A_NUMUNIT + 1];
int CGame_CVS2_A::rgExtraLoc[CVS2_A_NUMUNIT + 1];

UINT32 CGame_CVS2_A::m_nTotalPaletteCountForCVS2 = 0;
UINT32 CGame_CVS2_A::m_nExpectedGameROMSize = 0x9800000;  // 159,383,552 bytes
UINT32 CGame_CVS2_A::m_nConfirmedROMSize = -1;

void CGame_CVS2_A::InitializeStatics()
{
    safe_delete_array(CGame_CVS2_A::CVS2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_CVS2_A::InitDescTree());
}

CGame_CVS2_A::CGame_CVS2_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_CVS2_A::CGame_CVS2_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = CVS2_A_NUMUNIT;
    m_nExtraUnit = CVS2_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 2296;
    m_pszExtraFilename = EXTRA_FILENAME_CVS2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForCVS2;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x1488e80;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = CVS2_A;
    nImgGameFlag = IMGDAT_SECTION_CVS2;
    m_prgGameImageSet = CVS2_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(CVS2_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_CVS2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_CVS2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_CVS2_A::~CGame_CVS2_A(void)
{
    safe_delete_array(CGame_CVS2_A::CVS2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_CVS2_A::GetMainTree()
{
    return &CGame_CVS2_A::MainDescTree;
}

int CGame_CVS2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, CVS2_A_NUMUNIT, nUnitId, CVS2_A_EXTRA_CUSTOM);
}

int CGame_CVS2_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, CVS2_A_NUMUNIT, nUnitId, CVS2_A_EXTRA_CUSTOM);
}

void CGame_CVS2_A::DumpAllCharacters()
{
    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(CVS2_CharacterOffsetArray); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        const UINT16 k_nCharacterColorCount = ARRAYSIZE(DEF_BUTTONLABEL_CVS2);
        CString strOutput;

        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), CVS2_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        for (UINT16 iButtonIndex = 0; iButtonIndex < k_nCharacterColorCount; iButtonIndex++)
        {
            nCurrentCharacterOffset = CVS2_CharacterOffsetArray[iUnitCtr].romOffset + (0xc0 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset CVS2_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_CVS2[iButtonIndex]);
            OutputDebugString(strOutput);

            strOutput.Format(L"    { L\"Main Sprite\", 0x%07x, 0x%07x, %s },\r\n", 
                nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                CVS2_CharacterOffsetArray[iUnitCtr].pszImageRefName);

            OutputDebugString(strOutput);
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            for (UINT16 iCurrentExtra = 1; iCurrentExtra < 6; iCurrentExtra++)
            {
                const sCVS2_ExtraPair* extraPairInfo = nullptr;

                switch (iCurrentExtra)
                {
                case 1:
                    extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra1);
                    break;
                case 2:
                    extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra2);
                    break;
                case 3:
                    extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra3);
                    break;
                case 4:
                    extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra4);
                    break;
                case 5:
                    extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra5);
                    break;
                }

                if (extraPairInfo && extraPairInfo->pszExtraName)
                {
                    strOutput.Format(L"    { L\"%s\", 0x%07x, 0x%07x, %s, %u },\r\n", 
                        extraPairInfo->pszExtraName, 
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                        CVS2_CharacterOffsetArray[iUnitCtr].pszImageRefName, extraPairInfo->nImgIndex);
                }
                else
                {
                    strOutput.Format(L"    { L\"Extra %u\", 0x%07x, 0x%07x },\r\n", iCurrentExtra,
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                }

                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        // Now create the collection...
        strOutput.Format(L"const sDescTreeNode CVS2_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 iButtonIndex = 0; iButtonIndex < k_nCharacterColorCount; iButtonIndex++)
        {
            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)CVS2_A_%s_PALETTES_%s, ARRAYSIZE(CVS2_A_%s_PALETTES_%s) },\r\n",
                DEF_BUTTONLABEL_CVS2[iButtonIndex],
                szCodeDesc, DEF_BUTTONLABEL_CVS2[iButtonIndex],
                szCodeDesc, DEF_BUTTONLABEL_CVS2[iButtonIndex]);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(CVS2_CharacterOffsetArray); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;

        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), CVS2_CharacterOffsetArray[iUnitCtr].pszCharacterName);


        strOutput.Format(L"    { \"%s\", DESC_NODETYPE_TREE, (void*)CVS2_A_%s_COLLECTION, ARRAYSIZE(CVS2_A_%s_COLLECTION) },\r\n", CVS2_CharacterOffsetArray[iUnitCtr].pszCharacterName,
                                        szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sDescTreeNode* CGame_CVS2_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_CVS2_A, CVS2_A_EXTRA, &CVS2_A_EXTRA_CUSTOM, CVS2_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = CVS2_A_NUMUNIT + (GetExtraCt(CVS2_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[CVS2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForCVS2 = _InitDescTree(NewDescTree,
        CVS2_A_UNITS,
        CVS2_A_EXTRALOC,
        CVS2_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        CVS2_A_EXTRA_CUSTOM
    );

    // For development purposes only...
    // DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_CVS2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"SNKGD_SL.bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_CVS2_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(CVS2_A_UNITS, rgExtraCountAll, CVS2_A_NUMUNIT, CVS2_A_EXTRALOC, nUnitId, CVS2_A_EXTRA_CUSTOM);
}

UINT16 CGame_CVS2_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(CVS2_A_UNITS, rgExtraCountAll, CVS2_A_NUMUNIT, CVS2_A_EXTRALOC, nUnitId, nCollectionId, CVS2_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_CVS2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(CVS2_A_UNITS, CVS2_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_CVS2_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(CVS2_A_UNITS, rgExtraCountAll, CVS2_A_NUMUNIT, CVS2_A_EXTRALOC, nUnitId, CVS2_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_CVS2_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(CVS2_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_CVS2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(CVS2_A_UNITS, rgExtraCountAll, CVS2_A_NUMUNIT, CVS2_A_EXTRALOC, nUnitId, nPaletteId, CVS2_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_CVS2_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(CVS2_A_UNITS, rgExtraCountAll, CVS2_A_NUMUNIT, CVS2_A_EXTRALOC, nUnitId, nPaletteId, CVS2_A_EXTRA_CUSTOM);
}

void CGame_CVS2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != CVS2_A_EXTRALOC)
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
    else // CVS2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForCVS2(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_CVS2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(CVS2_A_UNITS, rgExtraCountAll, CVS2_A_NUMUNIT, CVS2_A_EXTRALOC, CVS2_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
