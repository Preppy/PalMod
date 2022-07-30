#include "StdAfx.h"
#include "GameDef.h"
#include "Game_CVS1_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_CVS1_A::CVS1_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_CVS1_A::MainDescTree = nullptr;

uint32_t CGame_CVS1_A::rgExtraCountAll[CVS1_A_NUMUNIT + 1];
uint32_t CGame_CVS1_A::rgExtraLoc[CVS1_A_NUMUNIT + 1];

uint32_t CGame_CVS1_A::m_nTotalPaletteCountForCVS1 = 0;
uint32_t CGame_CVS1_A::m_nConfirmedROMSize = -1;

void CGame_CVS1_A::InitializeStatics()
{
    safe_delete_array(CGame_CVS1_A::CVS1_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_CVS1_A::InitDescTree());
}

CGame_CVS1_A::CGame_CVS1_A(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_CVS1_A::CGame_CVS1_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = CVS1_A_NUMUNIT;
    m_nExtraUnit = CVS1_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1312;
    m_pszExtraFilename = EXTRA_FILENAME_CVS1_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForCVS1;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x8b6d00;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = CVS1_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = CVS1_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_CVS2;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_CVS1_A::~CGame_CVS1_A()
{
    safe_delete_array(CGame_CVS1_A::CVS1_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_CVS1_A::GetMainTree()
{
    return &CGame_CVS1_A::MainDescTree;
}

uint32_t CGame_CVS1_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, CVS1_A_NUMUNIT, nUnitId, CVS1_A_EXTRA_CUSTOM);
}

uint32_t CGame_CVS1_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, CVS1_A_NUMUNIT, nUnitId, CVS1_A_EXTRA_CUSTOM);
}

void CGame_CVS1_A::DumpAllCharacters()
{
    // Quick function/prototype that shows you the basic logic for exporting out a new palette for each character color
    // Update as you need
    struct sGame_PaletteExport
    {
        const std::wstring wstrPaletteName = L"uninit";
        const uint32_t nPaletteOffset = 0;
        const uint32_t nPaletteSectiontEnd = 0;
        const std::wstring wstrRest = L"";
    };

    const std::vector<sGame_PaletteExport> rgCvS1BaseCharacterInformation =
    {
        { L"Ryu", 0x8b6d00, 0x8b7200, L"indexCVS2Sprites_Ryu" },
        { L"Ken", 0x96f6e0, 0x96fbe0, L"indexCVS2Sprites_Ken" },
        { L"Chun-Li", 0x9f2820, 0x9f2d20, L"" },
        { L"Guile", 0xa8c3c0, 0xa8c8c0, L"indexCVS2Sprites_Guile" },
        { L"Zangief", 0xb7c1e0, 0xb7c6e0, L"indexCVS2Sprites_Zangief" },
        { L"Dhalsim", 0xc37180, 0xc37680, L"indexCVS2Sprites_Dhalsim" },
        { L"E. Honda", 0xcc16a0, 0xcc1ba0, L"indexCVS2Sprites_EHonda" },
        { L"Blanka", 0xda7220, 0xda7720, L"indexCVS2Sprites_Blanka" },
        { L"Claw", 0xe588a0, 0xe58da0, L"indexCVS2Sprites_Vega" },
        { L"Sagat", 0xed45c0, 0xed4ac0, L"indexCVS2Sprites_Sagat" },
        { L"Dictator", 0xf7c3e0, 0xf7c8e0, L"indexCVS2Sprites_MBison" },
        { L"Sakura", 0x1011c20, 0x1012120, L"indexCVS2Sprites_Sakura" },
        { L"Cammy", 0x1098c20, 0x1099120, L"indexCVS2Sprites_Cammy" },
        { L"Akuma", 0x1141920, 0x1141e20, L"indexCVS2Sprites_Akuma" },
        { L"Morrigan", 0x11f23a0, 0x11f28a0, L"indexCVS2Sprites_Morrigan" },
        { L"Evil Ryu", 0x1299180, 0x1299680, L"indexCVS2Sprites_Ryu" },
        { L"Kyo", 0x13e54e0, 0x13e59e0, L"indexCVS2Sprites_Kyo" },
        { L"Iori", 0x14dd0c0, 0x14dd5c0, L"indexCVS2Sprites_Iori" },
        { L"Terry", 0x1591e40, 0x1592340, L"indexCVS2Sprites_Terry" },
        { L"Ryo", 0x164ea20, 0x164ef20, L"indexCVS2Sprites_Ryo" },
        { L"Mai", 0x178f940, 0x178fe40, L"indexCVS2Sprites_Mai" },
        { L"Kim", 0x180ff40, 0x1810440, L"indexCVS2Sprites_Kim" },
        { L"Geese", 0x18d57c0, 0x18d5cc0, L"indexCVS2Sprites_Geese" },
        { L"Yamazaki", 0x19de900, 0x19dee00, L"indexCVS2Sprites_RyujiYamazaki" },
        { L"Raiden", 0x1ac14e0, 0x1ac19e0, L"indexCVS2Sprites_Raiden" },
        { L"Rugal", 0x1bcc3e0, 0x1bcc8e0, L"indexCVS2Sprites_Rugal" },
        { L"Vice", 0x1cadc20, 0x1cae120, L"indexCVS2Sprites_Vice" },
        { L"Benimaru", 0x1d81b40, 0x1d82040, L"indexCVS2Sprites_Benimaru" },
        { L"Yuri", 0x1e093e0, 0x1e098e0, L"indexCVS2Sprites_Yuri" },
        { L"King", 0x1e8c3a0, 0x1e8c8a0, L"indexCVS2Sprites_King" },
        { L"Nakoruru", 0x1f3cb40, 0x1f3d040, L"indexCVS2Sprites_Nakoruru" },
        { L"Orochi Iori", 0x202f480, 0x202f980, L"indexCVS2Sprites_OrochiIori" },
        { L"Boxer", 0x20bc180, 0x20bc680, L"indexCVS2Sprites_Balrog" },
    };

    const std::vector<std::wstring> rgPossibleColors =
    {
        L"LP",
        L"MP",
        L"HP",
        L"LK",
        L"MK",
        L"HK",
        L"3P",
        L"3K"
    };

    const std::vector<std::wstring> rgPaletteListColors =
    {
        L"",
        L" Extra 1",
        L" Extra 2",
        L" Extra 3",
        L" Extra 4",
    };

    const size_t nOffsetDeltaBetweenColors = 0x20 * rgPaletteListColors.size();
    CString strOutput;
    CString strCurrName;

    for (size_t iCurrChar = 0; iCurrChar < rgCvS1BaseCharacterInformation.size(); iCurrChar++)
    {
        for (size_t iCurrColor = 0; iCurrColor < rgPossibleColors.size(); iCurrColor++)
        {
            const size_t nTotalDelta = iCurrColor * nOffsetDeltaBetweenColors;
            size_t nStartingPosition = rgCvS1BaseCharacterInformation.at(iCurrChar).nPaletteOffset + nTotalDelta;
            size_t nEndingPosition = nStartingPosition + 0x20;

            wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCvS1BaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str());

            strCurrName.Format(L"const sGame_PaletteDataset CVS1_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, rgPossibleColors.at(iCurrColor).c_str());
            OutputDebugString(strCurrName.GetString());

            for (size_t iCurrPalette = 0; iCurrPalette < rgPaletteListColors.size(); iCurrPalette++)
            {
                strCurrName.Format(L"%s %s%s", rgCvS1BaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str(),
                                           rgPossibleColors.at(iCurrColor).c_str(),
                                           rgPaletteListColors.at(iCurrPalette).c_str());

                if (rgCvS1BaseCharacterInformation.at(iCurrChar).wstrRest.size())
                {
                    strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", strCurrName.GetString(),
                                                                            nStartingPosition,
                                                                            nEndingPosition,
                                                                            rgCvS1BaseCharacterInformation.at(iCurrChar).wstrRest.c_str(),
                                                                            iCurrPalette);
                }
                else
                {
                    strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x },\r\n", strCurrName.GetString(),
                        nStartingPosition,
                        nEndingPosition);
                }

                OutputDebugString(strOutput);

                nStartingPosition += 0x20;
                nEndingPosition += 0x20;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // Now print collections
    for (size_t iCurrChar = 0; iCurrChar < rgCvS1BaseCharacterInformation.size(); iCurrChar++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCvS1BaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str());

        strCurrName.Format(L"const sDescTreeNode CVS1_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strCurrName.GetString());

        for (size_t iCurrColor = 0; iCurrColor < rgPossibleColors.size(); iCurrColor++)
        {
            strCurrName.Format(L"CVS1_A_%s_PALETTES_%s", szCodeDesc, rgPossibleColors.at(iCurrColor).c_str());
            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)%s, ARRAYSIZE(%s) },\r\n", rgPossibleColors.at(iCurrColor).c_str(), strCurrName.GetString(), strCurrName.GetString());
            OutputDebugString(strOutput.GetString());
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    // Now print units
    OutputDebugString(L"const sDescTreeNode CVS1_A_UNITS[] =\r\n{\r\n");

    for (size_t iCurrChar = 0; iCurrChar < rgCvS1BaseCharacterInformation.size(); iCurrChar++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCvS1BaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str());

        strCurrName.Format(L"CVS1_A_%s_COLLECTION", szCodeDesc);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)%s, ARRAYSIZE(%s) },\r\n", rgCvS1BaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str(),
                                        strCurrName.GetString(),
                                        strCurrName.GetString());
        OutputDebugString(strOutput.GetString());
    }

    OutputDebugString(L"};\r\n\r\n");
}

sDescTreeNode* CGame_CVS1_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_CVS1_A, &CVS1_A_EXTRA_CUSTOM, CVS1_A_EXTRALOC, m_nConfirmedROMSize);

    uint16_t nUnitCt = CVS1_A_NUMUNIT + (GetExtraCt(CVS1_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[CVS1_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForCVS1 = _InitDescTree(NewDescTree,
        CVS1_A_UNITS,
        CVS1_A_EXTRALOC,
        CVS1_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        CVS1_A_EXTRA_CUSTOM
    );

    // For development purposes only...
    //DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_CVS1_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"Capcom_vs_SNK_Millenium_Fight_2000_Unlocked.bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_CVS1_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(CVS1_A_UNITS, rgExtraCountAll, CVS1_A_NUMUNIT, CVS1_A_EXTRALOC, nUnitId, CVS1_A_EXTRA_CUSTOM);
}

uint32_t CGame_CVS1_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(CVS1_A_UNITS, rgExtraCountAll, CVS1_A_NUMUNIT, CVS1_A_EXTRALOC, nUnitId, nCollectionId, CVS1_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_CVS1_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(CVS1_A_UNITS, CVS1_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_CVS1_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(CVS1_A_UNITS, rgExtraCountAll, CVS1_A_NUMUNIT, CVS1_A_EXTRALOC, nUnitId, CVS1_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_CVS1_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(CVS1_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_CVS1_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(CVS1_A_UNITS, rgExtraCountAll, CVS1_A_NUMUNIT, CVS1_A_EXTRALOC, nUnitId, nPaletteId, CVS1_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_CVS1_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(CVS1_A_UNITS, rgExtraCountAll, CVS1_A_NUMUNIT, CVS1_A_EXTRALOC, nUnitId, nPaletteId, CVS1_A_EXTRA_CUSTOM);
}

void CGame_CVS1_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != CVS1_A_EXTRALOC)
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
    else // CVS1_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &CVS1_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_CVS1_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(CVS1_A_UNITS, rgExtraCountAll, CVS1_A_NUMUNIT, CVS1_A_EXTRALOC, CVS1_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
