#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF02_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF02_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF02_A::KOF02_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF02_A::MainDescTree = nullptr;

int CGame_KOF02_A::rgExtraCountAll[KOF02_A_NUMUNIT + 1];
int CGame_KOF02_A::rgExtraLoc[KOF02_A_NUMUNIT + 1];

UINT32 CGame_KOF02_A::m_nTotalPaletteCountForKOF02 = 0;
UINT32 CGame_KOF02_A::m_nExpectedGameROMSize = 0x400000;  // 4194304 bytes
UINT32 CGame_KOF02_A::m_nConfirmedROMSize = -1;

void CGame_KOF02_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF02_A::KOF02_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF02_A::InitDescTree());
}

CGame_KOF02_A::CGame_KOF02_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KOF02_A::CGame_KOF02_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF02_A_NUMUNIT;
    m_nExtraUnit = KOF02_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 2003;
    m_pszExtraFilename = EXTRA_FILENAME_KOF02_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF02;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x01b4e0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF02_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF02_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(KOF02_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOF02_A::~CGame_KOF02_A(void)
{
    safe_delete_array(CGame_KOF02_A::KOF02_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF02_A::GetMainTree()
{
    return &CGame_KOF02_A::MainDescTree;
}

int CGame_KOF02_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KOF02_A_NUMUNIT, nUnitId, KOF02_A_EXTRA_CUSTOM);
}

int CGame_KOF02_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KOF02_A_NUMUNIT, nUnitId, KOF02_A_EXTRA_CUSTOM);
}

void CGame_KOF02_A::DumpAllCharacters()
{
    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        for (UINT16 iButtonIndex = 0; iButtonIndex < 4; iButtonIndex++)
        {
            nCurrentCharacterOffset = KOF02_A_CharacterOffsetArray[iUnitCtr].locationInROM + (0x200 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset KOF02_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_NEOGEO[iButtonIndex]);
            OutputDebugString(strOutput);

            if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszImageRefName)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x, %s },\r\n", KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    KOF02_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
            }
            else
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x },\r\n", KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
            }

            OutputDebugString(strOutput);
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            const LPCWSTR pszMoveNames[] =
            {
                L"Hidden Super Desperation Move 1",
                L"Desperation Move / Super Desperation Move",
                L"Electric Shock Effect",
                L"MAX Flash",
                L"Hidden Super Desperation Move 2",
                L"Soul Palette",
                L"Hidden Super Desperation Move 3",
            };

            for (UINT16 iCurrentExtra = 1; iCurrentExtra < 8; iCurrentExtra++)
            {
                LPCWSTR pszCurrentMoveName = pszMoveNames[iCurrentExtra - 1];
                UINT32 nCurrentImageToUse = 0;

                switch (iCurrentExtra)
                {
                case 1: // HSDM1
                    if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM1NameOverride)
                    {
                        pszCurrentMoveName = KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM1NameOverride;
                    }
                    nCurrentImageToUse = KOF02_A_CharacterOffsetArray[iUnitCtr].nHSDMI1ImageIndex;
                    break;
                case 2: // DM/SDM
                    if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszDMSDMNameOverride)
                    {
                        pszCurrentMoveName = KOF02_A_CharacterOffsetArray[iUnitCtr].pszDMSDMNameOverride;
                    }
                    nCurrentImageToUse = KOF02_A_CharacterOffsetArray[iUnitCtr].nDMSDMImageIndex;
                    break;
                case 3: // electric shock
                    nCurrentImageToUse = 0x18;
                    break;
                case 4: // MAX flash
                    nCurrentImageToUse = 0x8;
                    break;
                case 5: // HSDM2
                    if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM2NameOverride)
                    {
                        pszCurrentMoveName = KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM2NameOverride;
                    }
                    nCurrentImageToUse = KOF02_A_CharacterOffsetArray[iUnitCtr].nHSDMI2ImageIndex;
                    break;
                case 6: // soul palette
                    nCurrentImageToUse = 0x18;
                    break;
                case 7: // HSDM3
                    if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM3NameOverride)
                    {
                        pszCurrentMoveName = KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM3NameOverride;
                    }
                    nCurrentImageToUse = KOF02_A_CharacterOffsetArray[iUnitCtr].nHSDMI3ImageIndex;
                    break;
                default:
                    break;
                }

                strOutput.Format(L"    { L\"%s - %s\", 0x%07x, 0x%07x, %s, 0x%02x },\r\n", DEF_BUTTONLABEL_NEOGEO[iButtonIndex], pszCurrentMoveName,
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    KOF02_A_CharacterOffsetArray[iUnitCtr].pszImageRefName, nCurrentImageToUse);

                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // Now create the collections...
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF02_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"A\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_A, ARRAYSIZE(KOF02_A_%s_PALETTES_A) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"B\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_B, ARRAYSIZE(KOF02_A_%s_PALETTES_B) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"C\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_C, ARRAYSIZE(KOF02_A_%s_PALETTES_C) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"D\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_D, ARRAYSIZE(KOF02_A_%s_PALETTES_D) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"Win Portraits\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_%s_PALETTES_PORTRAITS_WIN) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Lifebar Portraits\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_%s_PALETTES_PORTRAITS_LIFEBAR) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Select Portrait\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_%s_PALETTES_PORTRAITS_SELECT) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        OutputDebugString(L"};\r\n\r\n");
    }

    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_COLLECTION, ARRAYSIZE(KOF02_A_%s_COLLECTION) },\r\n", KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sDescTreeNode* CGame_KOF02_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF02_A, KOF02_A_EXTRA, &KOF02_A_EXTRA_CUSTOM, KOF02_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF02_A_NUMUNIT + (GetExtraCt(KOF02_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF02_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKOF02 = _InitDescTree(NewDescTree,
        KOF02_A_UNITS,
        KOF02_A_EXTRALOC,
        KOF02_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KOF02_A_EXTRA_CUSTOM
    );

    // For development purposes only...
    // Note that Chin uses 0x9 and Kensou uses 0x0 for their MAX Flash palette: the autogenerator currently doesn't account for that
    //DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_KOF02_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"265-p2.sp2");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_KOF02_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, nUnitId, KOF02_A_EXTRA_CUSTOM);
}

UINT16 CGame_KOF02_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, nUnitId, nCollectionId, KOF02_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOF02_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(KOF02_A_UNITS, KOF02_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_KOF02_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, nUnitId, KOF02_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOF02_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(KOF02_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KOF02_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, nUnitId, nPaletteId, KOF02_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOF02_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, nUnitId, nPaletteId, KOF02_A_EXTRA_CUSTOM);
}

void CGame_KOF02_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KOF02_A_EXTRALOC)
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
    else // KOF02_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF02(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF02_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, KOF02_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
