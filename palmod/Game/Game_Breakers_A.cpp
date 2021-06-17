#include "StdAfx.h"
#include "GameDef.h"
#include "Game_BREAKERS_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define BREAKERS_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_BREAKERS_A::BREAKERS_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_BREAKERS_A::MainDescTree = nullptr;

int CGame_BREAKERS_A::rgExtraCountAll[BREAKERS_A_NUMUNIT + 1];
int CGame_BREAKERS_A::rgExtraLoc[BREAKERS_A_NUMUNIT + 1];

UINT32 CGame_BREAKERS_A::m_nTotalPaletteCountForBreakers = 0;
UINT32 CGame_BREAKERS_A::m_nExpectedGameROMSize = 0x200000;
UINT32 CGame_BREAKERS_A::m_nConfirmedROMSize = -1;

void CGame_BREAKERS_A::InitializeStatics()
{
    safe_delete_array(CGame_BREAKERS_A::BREAKERS_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_BREAKERS_A::InitDescTree());
}

CGame_BREAKERS_A::CGame_BREAKERS_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_BREAKERS_A::CGame_BREAKERS_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = BREAKERS_A_NUMUNIT;
    m_nExtraUnit = BREAKERS_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 414;
    m_pszExtraFilename = EXTRA_FILENAME_BREAKERS_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForBreakers;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x135e2a;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = BREAKERS_A;
    nImgGameFlag = IMGDAT_SECTION_BREAKREV;
    nImgUnitAmt = ARRAYSIZE(BREAKERS_A_IMGIDS_USED);
    m_prgGameImageSet = BREAKERS_A_IMGIDS_USED;

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

CGame_BREAKERS_A::~CGame_BREAKERS_A(void)
{
    safe_delete_array(CGame_BREAKERS_A::BREAKERS_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_BREAKERS_A::GetMainTree()
{
    return &CGame_BREAKERS_A::MainDescTree;
}

int CGame_BREAKERS_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, BREAKERS_A_NUMUNIT, nUnitId, BREAKERS_A_EXTRA_CUSTOM);
}

int CGame_BREAKERS_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, BREAKERS_A_NUMUNIT, nUnitId, BREAKERS_A_EXTRA_CUSTOM);
}

struct sBreakers_CharacterDump
{
    LPCWSTR pszCharacterName = nullptr;
    UINT32 baseLocation = 0;
    LPCWSTR pszImageRefName = nullptr;
};

sBreakers_CharacterDump breakersCharacterList[] =
{
    { L"Ash", 0x1011000 }, // 0x1012800
    { L"Oswald", 0x11e2800 }, // 0x11e4000
    { L"Shen", 0x13ab000 }, // 0x13ac800
    { L"Elizabeth", 0x1522800 }, // 0x1524000
    { L"Duo Lon", 0x16bf000 }, // 0x16c0800
    { L"Benimaru", 0x1861800 }, // 0x1863000
    { L"Terry", 0x19b8000 }, // 0x19b9800
    { L"Kim", 0x1b58000 }, // 0x1b59800
    { L"Duck King", 0x1c8f800 }, // 0x1c91000
    { L"Ryo", 0x1df4000, L"indexKOF02UMSprites_Ryo" }, // 0x1df5800
    { L"Yuri", 0x1f5f000 }, // 0x1f60800
    { L"King", 0x20ba800, L"indexKOF02UMSprites_King" }, // 0x20bc000
    { L"B. Jenet", 0x21c5800 }, // 0x21c7000
    { L"Gato", 0x2381000 }, // 0x2382800
    { L"Tizoc/The Griffon", 0x24e1000 }, // 0x24e2800
    { L"Ralf", 0x2680000 }, // 0x2681800
    { L"Clark", 0x27c1000 }, // 0x27c2800
    { L"Whip", 0x28ed000 }, // 0x28ee800
    { L"Athena", 0x2a9d800 }, // 0x2a9f000
    { L"Kensou", 0x2c52800 }, // 0x2c54000
    { L"Momoko", 0x2dd9000 }, // 0x2dda800
    { L"Vanessa", 0x2f98000, L"indexKOF02UMSprites_Vanessa" }, // 0x2f99800
    { L"Blue Mary", 0x30ef000 }, // 0x30f0800
    { L"Ramon", 0x3257000, L"indexKOF02UMSprites_Ramon" }, // 0x3258800
    { L"Malin", 0x33b3800 }, // 0x33b5000
    { L"Kasumi", 0x34e4800 }, // 0x34e6000
    { L"Eiji", 0x3609800 }, // 0x360b000
    { L"K'", 0x3763800, L"indexKOF02UMSprites_K" }, // 0x3765000
    { L"Kula", 0x3901800, L"indexKOF02UMSprites_Kula" }, // 0x3903000
    { L"Maxima", 0x3ab6800, L"indexKOF02UMSprites_Maxima" }, // 0x3ab8000
    { L"Kyo", 0x3c57800 }, // 0x3c59000
    { L"Iori", 0x3df6000, L"indexKOF02UMSprites_Iori" }, // 0x3df7800
    { L"Shingo", 0x3fc5800, L"indexKOF02UMSprites_Shingo" }, // 0x3fc7000
    { L"Gai", 0x40d3000 }, // 0x40d4800
    { L"Sho", 0x420f800 }, // 0x4211000
    { L"Adelheid", 0x4366800 }, // 0x4368000
    { L"Silber", 0x44b1000 }, // 0x44b2800
    { L"Jyazu", 0x45fa800 }, // 0x45fc000
    { L"Shion", 0x47cb800 }, // 0x47cd000
    { L"Magaki", 0x499a000 }, // 0x499b600
};

void CGame_BREAKERS_A::DumpAllCharacters()
{
    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(breakersCharacterList); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), breakersCharacterList[iUnitCtr].pszCharacterName);

        for (UINT16 iButtonIndex = 0; iButtonIndex < ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO); iButtonIndex++)
        {
            nCurrentCharacterOffset = breakersCharacterList[iUnitCtr].baseLocation + (0x200 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset BREAKERS_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_NEOGEO[iButtonIndex]);
            OutputDebugString(strOutput);

            if (breakersCharacterList[iUnitCtr].pszImageRefName)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x, %s },\r\n", breakersCharacterList[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    breakersCharacterList[iUnitCtr].pszImageRefName);
            }
            else
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x },\r\n", breakersCharacterList[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
            }

            OutputDebugString(strOutput);
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            const LPCWSTR pszMoveNames[] =
            {
                L"Super Trail",
                L"Pure Black",
                L"Pure White"
                L"Fire",
                L"Fire Cycled",
                L"Elec1",
                L"Elec2",
                L"Poisoned 1",
                L"Poisoned 2",
                L"Blue Gradient",
                L"Orange Gradient",
                L"Elbow Dash / Aura Flicker",
                L"Aura Flicker / Poison 1",
                L"Anubis Palette",
                L"Teleport Palette",
                L"Drop Palette",
                L"Poison 2", 
            };

            for (UINT16 iCurrentExtra = 0; iCurrentExtra < ARRAYSIZE(pszMoveNames); iCurrentExtra++)
            {
                LPCWSTR pszCurrentMoveName = pszMoveNames[iCurrentExtra];
                UINT32 nCurrentImageToUse = 0;

                if (breakersCharacterList[iUnitCtr].pszImageRefName)
                {
                    strOutput.Format(L"    { L\"%s - %s\", 0x%07x, 0x%07x, %s, 0x%02x },\r\n", DEF_BUTTONLABEL_NEOGEO[iButtonIndex], pszCurrentMoveName,
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                        breakersCharacterList[iUnitCtr].pszImageRefName, nCurrentImageToUse);
                }
                else
                {
                    strOutput.Format(L"    { L\"%s - %s\", 0x%07x, 0x%07x },\r\n", DEF_BUTTONLABEL_NEOGEO[iButtonIndex], pszCurrentMoveName,
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                }

                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // Now create the collections...
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(breakersCharacterList); iUnitCtr++)
    {
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), breakersCharacterList[iUnitCtr].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode BREAKERS_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (UINT16 nButtonNameIndex = 0; nButtonNameIndex < ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO); nButtonNameIndex++)
        {
            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)BREAKERS_A_%s_PALETTES_%s, ARRAYSIZE(BREAKERS_A_%s_PALETTES_%s) },\r\n", DEF_BUTTONLABEL_NEOGEO[nButtonNameIndex], szCodeDesc, DEF_BUTTONLABEL_NEOGEO[nButtonNameIndex],
                                                                                                                                            szCodeDesc, DEF_BUTTONLABEL_NEOGEO[nButtonNameIndex] );
            OutputDebugString(strOutput);
        }
        
        OutputDebugString(L"};\r\n\r\n");
    }

    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(breakersCharacterList); iUnitCtr++)
    {
        UINT32 nCurrentCharacterOffset = 0;
        UINT16 nPaletteCount = 0;
        CString strOutput;
        WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), breakersCharacterList[iUnitCtr].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)BREAKERS_A_%s_COLLECTION, ARRAYSIZE(BREAKERS_A_%s_COLLECTION) },\r\n", breakersCharacterList[iUnitCtr].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sDescTreeNode* CGame_BREAKERS_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_BREAKERS_A, BREAKERS_A_EXTRA, &BREAKERS_A_EXTRA_CUSTOM, BREAKERS_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = BREAKERS_A_NUMUNIT + (GetExtraCt(BREAKERS_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[BREAKERS_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;
    
    m_nTotalPaletteCountForBreakers = _InitDescTree(NewDescTree,
        BREAKERS_A_UNITS,
        BREAKERS_A_EXTRALOC,
        BREAKERS_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        BREAKERS_A_EXTRA_CUSTOM
    );

    // This is used during development to produce the palette data for the header
    //DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_BREAKERS_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"245-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_BREAKERS_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(BREAKERS_A_UNITS, rgExtraCountAll, BREAKERS_A_NUMUNIT, BREAKERS_A_EXTRALOC, nUnitId, BREAKERS_A_EXTRA_CUSTOM);
}

UINT16 CGame_BREAKERS_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(BREAKERS_A_UNITS, rgExtraCountAll, BREAKERS_A_NUMUNIT, BREAKERS_A_EXTRALOC, nUnitId, nCollectionId, BREAKERS_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_BREAKERS_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(BREAKERS_A_UNITS, BREAKERS_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_BREAKERS_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(BREAKERS_A_UNITS, rgExtraCountAll, BREAKERS_A_NUMUNIT, BREAKERS_A_EXTRALOC, nUnitId, BREAKERS_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_BREAKERS_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(BREAKERS_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_BREAKERS_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(BREAKERS_A_UNITS, rgExtraCountAll, BREAKERS_A_NUMUNIT, BREAKERS_A_EXTRALOC, nUnitId, nPaletteId, BREAKERS_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_BREAKERS_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(BREAKERS_A_UNITS, rgExtraCountAll, BREAKERS_A_NUMUNIT, BREAKERS_A_EXTRALOC, nUnitId, nPaletteId, BREAKERS_A_EXTRA_CUSTOM);
}

void CGame_BREAKERS_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != BREAKERS_A_EXTRALOC)
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
    else // BREAKERS_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForBreakers(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_BREAKERS_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(BREAKERS_A_UNITS, rgExtraCountAll, BREAKERS_A_NUMUNIT, BREAKERS_A_EXTRALOC, BREAKERS_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
