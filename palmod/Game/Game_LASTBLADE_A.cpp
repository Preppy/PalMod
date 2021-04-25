#include "StdAfx.h"
#include "GameDef.h"
#include "Game_LASTBLADE_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define LASTBLADE_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_LASTBLADE_A::LASTBLADE_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_LASTBLADE_A::MainDescTree = nullptr;

int CGame_LASTBLADE_A::rgExtraCountAll[LASTBLADE_A_NUMUNIT + 1];
int CGame_LASTBLADE_A::rgExtraLoc[LASTBLADE_A_NUMUNIT + 1];

UINT32 CGame_LASTBLADE_A::m_nTotalPaletteCountForLASTBLADE = 0;
UINT32 CGame_LASTBLADE_A::m_nExpectedGameROMSize = 0x100000; // Update to the actual size of the ROM you expect
UINT32 CGame_LASTBLADE_A::m_nConfirmedROMSize = -1;

void CGame_LASTBLADE_A::InitializeStatics()
{
    safe_delete_array(CGame_LASTBLADE_A::LASTBLADE_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_LASTBLADE_A::InitDescTree());
}

CGame_LASTBLADE_A::CGame_LASTBLADE_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_LASTBLADE_A::CGame_LASTBLADE_A: Loading ROM...\n");

    createPalOptions = {
                        NO_SPECIAL_OPTIONS, // Set to SKIP_FIRST_COLOR for most CPS2 games.  Use the nStartingPosition version of UpdatePalData as found in CPS2 game code.
                        WRITE_16            // This is the number of colors to write when saving to the game ROM before we need to add another reserved color/counter UINT16.
                                            // You can set this to WRITE_MAX to write out a maximum of 256 colors.  See CGameClass::UpdatePalData for usage.
    };

    // Set alpha mode: this determines whether or not we set alpha values for the data we write back to the game ROM.
    // For color mode 12A you usually want it not set, for NEOGEO you cannot use it (there's no bit(s) for it), and for 15/15ALT you probably want it on.
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    //Set color mode: see the definitions in GameClass.h
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = LASTBLADE_A_NUMUNIT;
    m_nExtraUnit = LASTBLADE_A_EXTRALOC;

    // You will need to update this once you modify palettes, but PalMod will prompt you to do so.
    // Exact count will be shown in debug output in the debugger
    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 448;
    m_pszExtraFilename = EXTRA_FILENAME_LASTBLADE_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForLASTBLADE; // This value is calculated at runtime: don't change this.
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    // You will need to update this, but PalMod will prompt you to do so.  Exact location will be shown and also
    // visible in debug output in the debugger.
    m_nLowestKnownPaletteRomLocation = 0xaac00;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = LASTBLADE_A; // This value is defined in gamedef.h.  See usage of other values defined there
    nImgGameFlag = IMGDAT_SECTION_KOF; // This value is used to determine which section of the image file is used
    m_prgGameImageSet = LASTBLADE_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(LASTBLADE_A_IMG_UNITS);

    nFileAmt = 1; // Always 1 for monolithic rom games

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS; // DEF_BUTTONLABEL_LASTBLADE1;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS); // ARRAYSIZE(DEF_BUTTONLABEL_LASTBLADE1);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_LASTBLADE_A::~CGame_LASTBLADE_A(void)
{
    safe_delete_array(CGame_LASTBLADE_A::LASTBLADE_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_LASTBLADE_A::GetMainTree()
{
    return &CGame_LASTBLADE_A::MainDescTree;
}

int CGame_LASTBLADE_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, LASTBLADE_A_NUMUNIT, nUnitId, LASTBLADE_A_EXTRA_CUSTOM);
}

int CGame_LASTBLADE_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraCount(rgExtraLoc, LASTBLADE_A_NUMUNIT, nUnitId, LASTBLADE_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_LASTBLADE_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_LASTBLADE_A, LASTBLADE_A_EXTRA, &LASTBLADE_A_EXTRA_CUSTOM, LASTBLADE_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = LASTBLADE_A_NUMUNIT + (GetExtraCt(LASTBLADE_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[LASTBLADE_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForLASTBLADE = _InitDescTree(NewDescTree,
        LASTBLADE_A_UNITS,
        LASTBLADE_A_EXTRALOC,
        LASTBLADE_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        LASTBLADE_A_EXTRA_CUSTOM
    );

    // For development purposes only...
    //DumpAllCharacters();

    return NewDescTree;
}

void CGame_LASTBLADE_A::DumpAllCharacters()
{
    struct sLASTBLADE_A_CharacterDump
    {
        LPCWSTR pszCharacterName = nullptr;
        UINT32 locationInROM = 0;
        LPCWSTR pszImageRefName = nullptr;
    };

    const sLASTBLADE_A_CharacterDump LASTBLADE_A_CharacterOffsetArray[] =
    {
        { L"Akari",     0xb5b20, L"indexLastBlade2_Akari" },
        { L"Amano",     0xbd560, L"indexLastBladeSprites_Amano", },
        { L"Juzoh",     0xB7020, L"indexLastBlade2_Juzoh" },
        { L"Kaede",     0xb0720, L"indexLastBlade2_Kaede" },
        { L"Kagami",    0xC3E60, L"indexLastBlade2_Shinnosuke" },
        { L"Lee",       0xBEA60, L"indexLastBlade2_LeeRekka" },
        { L"Moryia",    0xb1c20, L"indexLastBlade2_Moriya" },
        { L"Mukuro",    0xbc060, L"indexLastBlade2_Mukuro" },
        { L"Musashi",   0xC2960, L"indexLastBladeSprites_Musashi" },
        { L"Okina",     0xb4620, L"indexLastBladeSprites_Okina" },
        { L"Shigen",    0xC1460, L"indexLastBlade2_Shigen" },
        { L"Washizuka", 0xB8520, L"indexLastBladeSprites_Washizuka" },
        { L"Yuki",      0xb3120, L"indexLastBlade2_Yuki" },
        { L"Zantetsu",  0xBFF60, L"indexLastBlade2_Zantetsu" },
    };

    const LPCWSTR LB1_SHORTBUTTON_NAMES[] =
    {
        L"PA",
        L"PD",
        L"SA",
        L"SD"
    };

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(LASTBLADE_A_CharacterOffsetArray); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];
        UINT32 nWeaponOffset = 0x200;

        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        // We don't currently know where the p2 palettes are so just show the p1 offsets
        for (UINT16 iButtonIndex = 0; iButtonIndex < 1 /* ARRAYSIZE(DEF_BUTTONLABEL_2) */; iButtonIndex++)
        {
            nCurrentCharacterOffset = LASTBLADE_A_CharacterOffsetArray[iUnitCtr].locationInROM + (0x200 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset LASTBLADE_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, LB1_SHORTBUTTON_NAMES[iButtonIndex]);
            OutputDebugString(strOutput);

            strOutput.Format(L"    { L\"Main\", 0x%x, 0x%x, %s, 0x00, &pairNext },\r\n", nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
            OutputDebugString(strOutput);
            strOutput.Format(L"    { L\"Weapon\", 0x%x, 0x%x, %s, 0x01 },\r\n", nCurrentCharacterOffset + nWeaponOffset, nCurrentCharacterOffset + nWeaponOffset + 0x20,
                LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
            OutputDebugString(strOutput);
            
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            const LPCWSTR pszEffectNames[] =
            {
                L"Burned",
                L"Cursed",
                L"Fandango",
                L"Frozen",
                L"Shocked",
                L"Zombie",
                L"Blink",
                L"Deflect",
            };

            for (UINT16 uCurrentMove = 0; uCurrentMove < ARRAYSIZE(pszEffectNames); uCurrentMove++)
            {
                LPCWSTR pszCurrentMoveName = pszEffectNames[uCurrentMove];

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s, 0x00, &pairNext },\r\n", pszCurrentMoveName,
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
                OutputDebugString(strOutput);

                strOutput.Format(L"    { L\"Weapon - %s\", 0x%x, 0x%x, %s, 0x01 },\r\n", pszCurrentMoveName,
                    nWeaponOffset + nCurrentCharacterOffset, nWeaponOffset + nCurrentCharacterOffset + 0x20, LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
                OutputDebugString(strOutput);

                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            const UINT32 nExtrasStartingOffset = nCurrentCharacterOffset;

            for (UINT16 nExtraCount = 1; nExtraCount < 8; nExtraCount++)
            {
                strOutput.Format(L"    { L\"Extra %u\", 0x%x, 0x%x },\r\n", nExtraCount, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                OutputDebugString(strOutput);

                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            nCurrentCharacterOffset = nExtrasStartingOffset;

            for (UINT16 nExtraCount = 1; nExtraCount < 8; nExtraCount++)
            {
                strOutput.Format(L"    { L\"Weapon Extras %u\", 0x%x, 0x%x },\r\n", nExtraCount, nWeaponOffset + nCurrentCharacterOffset, nWeaponOffset + nCurrentCharacterOffset + 0x20);
                OutputDebugString(strOutput);

                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // Now create the collections...
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(LASTBLADE_A_CharacterOffsetArray); iUnitCtr++)
    {
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode LASTBLADE_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"Power A\", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_%s_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_%s_PALETTES_PA) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        //strOutput.Format(L"    { L\"Power D\", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_%s_PALETTES_PD, ARRAYSIZE(LASTBLADE_A_%s_PALETTES_PD) },\r\n", szCodeDesc, szCodeDesc);
        //OutputDebugString(strOutput);
        //strOutput.Format(L"    { L\"Speed A\", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_%s_PALETTES_SA, ARRAYSIZE(LASTBLADE_A_%s_PALETTES_SA) },\r\n", szCodeDesc, szCodeDesc);
        //OutputDebugString(strOutput);
        //strOutput.Format(L"    { L\"Speed D\", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_%s_PALETTES_SD, ARRAYSIZE(LASTBLADE_A_%s_PALETTES_SD) },\r\n", szCodeDesc, szCodeDesc);
        //OutputDebugString(strOutput);

        OutputDebugString(L"};\r\n\r\n");
    }

    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(LASTBLADE_A_CharacterOffsetArray); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StrRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_%s_COLLECTION, ARRAYSIZE(LASTBLADE_A_%s_COLLECTION) },\r\n", LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sFileRule CGame_LASTBLADE_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"234-p1.p1"); // Update with the primary expected ROM name here.

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_LASTBLADE_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"The Last Blade (Neo-Geo)", L"234-p1.p1", 0xe123a5a3, 0 },
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

UINT16 CGame_LASTBLADE_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(LASTBLADE_A_UNITS, rgExtraCountAll, LASTBLADE_A_NUMUNIT, LASTBLADE_A_EXTRALOC, nUnitId, LASTBLADE_A_EXTRA_CUSTOM);
}

UINT16 CGame_LASTBLADE_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(LASTBLADE_A_UNITS, rgExtraCountAll, LASTBLADE_A_NUMUNIT, LASTBLADE_A_EXTRALOC, nUnitId, nCollectionId, LASTBLADE_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_LASTBLADE_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(LASTBLADE_A_UNITS, LASTBLADE_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_LASTBLADE_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(LASTBLADE_A_UNITS, rgExtraCountAll, LASTBLADE_A_NUMUNIT, LASTBLADE_A_EXTRALOC, nUnitId, LASTBLADE_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_LASTBLADE_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(LASTBLADE_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_LASTBLADE_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(LASTBLADE_A_UNITS, rgExtraCountAll, LASTBLADE_A_NUMUNIT, LASTBLADE_A_EXTRALOC, nUnitId, nPaletteId, LASTBLADE_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_LASTBLADE_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(LASTBLADE_A_UNITS, rgExtraCountAll, LASTBLADE_A_NUMUNIT, LASTBLADE_A_EXTRALOC, nUnitId, nPaletteId, LASTBLADE_A_EXTRA_CUSTOM);
}

void CGame_LASTBLADE_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != LASTBLADE_A_EXTRALOC)
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
    else // LASTBLADE_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForLASTBLADE(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_LASTBLADE_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(LASTBLADE_A_UNITS, rgExtraCountAll, LASTBLADE_A_NUMUNIT, LASTBLADE_A_EXTRALOC, LASTBLADE_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
