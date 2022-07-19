#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF02_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_KOF02_A::KOF02_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF02_A::MainDescTree = nullptr;

uint32_t CGame_KOF02_A::rgExtraCountAll[KOF02_A_NUMUNIT + 1];
uint32_t CGame_KOF02_A::rgExtraLoc[KOF02_A_NUMUNIT + 1];

uint32_t CGame_KOF02_A::m_nTotalPaletteCountForKOF02 = 0;
uint32_t CGame_KOF02_A::m_nConfirmedROMSize = -1;

void CGame_KOF02_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF02_A::KOF02_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF02_A::InitDescTree());
}

CGame_KOF02_A::CGame_KOF02_A(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KOF02_A::CGame_KOF02_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF02_A_NUMUNIT;
    m_nExtraUnit = KOF02_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + m_nPaletteCountInHeaders;
    m_pszExtraFilename = EXTRA_FILENAME_KOF02_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF02;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = m_nLowestROMLocationUsedInHeaders;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF02_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF02_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOF02_A::~CGame_KOF02_A()
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

uint32_t CGame_KOF02_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KOF02_A_NUMUNIT, nUnitId, KOF02_A_EXTRA_CUSTOM);
}

uint32_t CGame_KOF02_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KOF02_A_NUMUNIT, nUnitId, KOF02_A_EXTRA_CUSTOM);
}

void CGame_KOF02_A::DumpAllCharacters()
{
    //Go through each character
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        for (uint16_t iButtonIndex = 0; iButtonIndex < 4; iButtonIndex++)
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

            for (uint16_t iCurrentExtra = 1; iCurrentExtra < 8; iCurrentExtra++)
            {
                LPCWSTR pszCurrentMoveName = pszMoveNames[iCurrentExtra - 1];
                uint32_t nCurrentImageToUse = 0;

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
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

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

    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_COLLECTION, ARRAYSIZE(KOF02_A_%s_COLLECTION) },\r\n", KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sDescTreeNode* CGame_KOF02_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF02_A, &KOF02_A_EXTRA_CUSTOM, KOF02_A_EXTRALOC, m_nConfirmedROMSize);

    uint16_t nUnitCt = KOF02_A_NUMUNIT + (GetExtraCt(KOF02_A_EXTRALOC) ? 1 : 0);
    
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

sFileRule CGame_KOF02_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, KOF02_A_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_KOF02_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, nUnitId, KOF02_A_EXTRA_CUSTOM);
}

uint32_t CGame_KOF02_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, nUnitId, nCollectionId, KOF02_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOF02_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(KOF02_A_UNITS, KOF02_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_KOF02_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, nUnitId, KOF02_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOF02_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(KOF02_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KOF02_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, nUnitId, nPaletteId, KOF02_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOF02_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, nUnitId, nPaletteId, KOF02_A_EXTRA_CUSTOM);
}

uint32_t CGame_KOF02_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"King of Fighters 2002 (Neo-Geo)", L"265-p2.sp2", 0x327266b8, 0 },
        { L"King of Fighters 2002 Remix Ultra 3.5 (Neo-Geo Hack)", L"kf2k2ru35-p2.bin", 0x75185760, 0x300000 },
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

void CGame_KOF02_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
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

        // Adjust for ROM-specific variant locations
        if (m_pCRC32SpecificData)
        {
            m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
        }
    }
    else // KOF02_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &KOF02_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF02_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(KOF02_A_UNITS, rgExtraCountAll, KOF02_A_NUMUNIT, KOF02_A_EXTRALOC, KOF02_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
