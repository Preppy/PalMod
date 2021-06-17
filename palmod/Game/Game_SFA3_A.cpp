#include "StdAfx.h"
#include "Game_SFA3_A.h"
#include "GameDef.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SFA3_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SFA3_A::SFA3_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SFA3_A::MainDescTree = nullptr;

UINT32 CGame_SFA3_A::m_nTotalPaletteCountForSFA3 = 0;

int CGame_SFA3_A::rgExtraCountAll[SFA3_A_NUMUNIT + 1] = { -1 };
int CGame_SFA3_A::rgExtraCountVisibleOnly[SFA3_A_NUMUNIT + 1] = { -1 };
int CGame_SFA3_A::rgExtraLoc[SFA3_A_NUMUNIT + 1] = { -1 };
UINT32 CGame_SFA3_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_SFA3_A::m_nConfirmedROMSize = -1;

void CGame_SFA3_A::InitializeStatics()
{
    safe_delete_array(CGame_SFA3_A::SFA3_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraCountVisibleOnly, -1, sizeof(rgExtraCountVisibleOnly));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SFA3_A::InitDescTree());
}

CGame_SFA3_A::CGame_SFA3_A(UINT32 nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = SFA3_A_NUMUNIT + (GetExtraCt(SFA3_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = SFA3_A_NUMUNIT;
    m_nExtraUnit = SFA3_A_EXTRALOC;
    m_nSafeCountForThisRom = 1893 + GetExtraCt(SFA3_A_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_SFA3;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSFA3;
    m_nLowestKnownPaletteRomLocation = 0x2C000;

    InitDataBuffer();

    //Set game information
    nGameFlag = SFA3_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = SFA3_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(SFA3_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_ISMS;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_ISMS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SFA3_A::~CGame_SFA3_A(void)
{
    safe_delete_array(CGame_SFA3_A::SFA3_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_SFA3_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        // Street Fighter Alpha 3 variants...
        { L"SFA3 980904 (Arcade)", L"sz3.09c", 0xb29e5199, 0 },
        { L"SFA3 (Arcade)", L"sz3.09", 0xc5589553, -0x28 }, 
        { L"SFZ3 980726 (Japan Arcade)", L"sz3.09a", 0x2180892, -0x28 },

        // We are aligned to the character sprites here, but not the portraits/stages.
        // Accordingly, we don't actually expose this in the file picker UI.
        { L"SFA3 980616 (Prototype)", L"sz3-usam_09.8d", 0x822fc451, 0x2ff9a },
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

#ifdef NOTES
    // These are the MAME values...
        ROM_START(sfa3) // 04/09/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfa3u)    // 04/09/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfz3j)    // 04/09/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfz3a)    // 04/09/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfa3h)    // 04/09/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))


        ROM_START(sfa3ur1)  // 29/06/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfz3jr2)  // 29/06/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfz3ar1)  // 01/07/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfa3hr1)  // 29/06/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfa3b)    // 29/06/1998 (c) 1998 (Brazil)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))


        ROM_START(sfa3us)   // 16/06/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3-usam_09.8d", 0x300000, 0x80000, CRC(822fc451) SHA1(49ec9e3f33d6023b59b350a79fe2299f6ac90251))


        ROM_START(sfz3jr1)   // 27/07/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("sz3.09a", 0x300000, 0x80000, CRC(2180892c) SHA1(65a44c612b1c6dd527b306c262caa5040897ce7b))

#endif
}

int CGame_SFA3_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SFA3_A_NUMUNIT, nUnitId, SFA3_A_EXTRA_CUSTOM);
}

int CGame_SFA3_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SFA3_A_NUMUNIT, nUnitId, SFA3_A_EXTRA_CUSTOM);
}

CDescTree* CGame_SFA3_A::GetMainTree()
{
    return &CGame_SFA3_A::MainDescTree;
}

sDescTreeNode* CGame_SFA3_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SFA3, SFA3_A_EXTRA, &SFA3_A_EXTRA_CUSTOM, SFA3_A_EXTRALOC, m_nConfirmedROMSize);

    bool fHaveExtras = (GetExtraCt(SFA3_A_EXTRALOC) > 0);
    UINT16 nUnitCt = SFA3_A_NUMUNIT + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SFA3_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSFA3 = _InitDescTree(NewDescTree,
        SFA3_A_UNITS,
        SFA3_A_EXTRALOC,
        SFA3_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SFA3_A_EXTRA_CUSTOM
    );

    // For development use to speed things up
    //DumpHeaderPalettes();

    return NewDescTree;
}

struct sSFA3_A_PortraitData
{
    LPCWSTR pszCharacterName = nullptr;
    LPCWSTR pszCodeName = nullptr;
    UINT32 nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexCPS2Sprites_SFA3Assets"; // SFA3_Unique
    UINT32 nImageSetIndex = 0;
};

sSFA3_A_PortraitData SFA3_A_PortraitDataArray[] =
{
    { L"Ryu", L"RYU", 0x4ce14, L"indexCPS2Sprites_SFA3Assets", 0xB4 }, // Ryu
    { L"Ken", L"KEN", 0x4d114, L"indexCPS2Sprites_SFA3Assets", 0xAF }, // Ken
    { L"Akuma", L"AKUMA", 0x4d414, L"indexCPS2Sprites_SFA3Assets", 0xA1 }, // Akuma
    { L"Charlie", L"CHARLIE", 0x4d714, L"indexCPS2Sprites_SFA3Assets", 0xA5 }, // Charlie
    { L"Chun-Li", L"CHUNLI", 0x4da14, L"indexCPS2Sprites_SFA3Assets", 0xA6 }, // Chun (NOTE: Chun has a special non-X-ISM portrait, A7)
    { L"Adon", L"ADON", 0x4dd14, L"indexCPS2Sprites_SFA3Assets", 0xA0 }, // Adon
    { L"Sodom", L"SODOM", 0x4e014, L"indexCPS2Sprites_SFA3Assets", 0xB7 }, // Sodom
    { L"Guy", L"GUY", 0x4e314, L"indexCPS2Sprites_SFA3Assets", 0xAD }, // Guy
    { L"Birdie", L"BIRDIE", 0x4e614, L"indexCPS2Sprites_SFA3Assets", 0xA2 }, // Birdie
    { L"Rose", L"ROSE", 0x4e914, L"indexCPS2Sprites_SFA3Assets", 0xB3 }, // Rose
    { L"M.Bison", L"MBISON", 0x4ec14, L"indexCPS2Sprites_SFA3Assets", 0xB0 }, // Dict
    { L"Sagat", L"SAGAT", 0x4ef14, L"indexCPS2Sprites_SFA3Assets", 0xB5 }, // Sagat
    { L"Dan", L"DAN", 0x4f214, L"indexCPS2Sprites_SFA3Assets", 0xA9 }, // Dan
    { L"Sakura", L"SAKURA", 0x4f514, L"indexCPS2Sprites_SFA3Assets", 0xB6 }, // Sakura
    { L"Rolento", L"ROLENTO", 0x4f814, L"indexCPS2Sprites_SFA3Assets", 0xB2 }, // Rolento
    { L"Dhalsim", L"DHALSIM", 0x4fb14, L"indexCPS2Sprites_SFA3Assets", 0xAA }, // Dhalsim
    { L"Zangief", L"ZANGIEF", 0x4fe14, L"indexCPS2Sprites_SFA3Assets", 0xB9 }, // Zangief
    { L"Gen", L"GEN", 0x50114, L"indexCPS2Sprites_SFA3Assets", 0xAC }, // Gen
    { L"Cammy", L"CAMMY", 0x50a14, L"indexCPS2Sprites_SFA3Assets", 0xA4 }, // Cammy
    { L"E.Honda", L"EHONDA", 0x50d14, L"indexCPS2Sprites_SFA3Assets", 0xAB }, // E.Honda
    { L"Blanka", L"BLANKA", 0x51014, L"indexCPS2Sprites_SFA3Assets", 0xA3 }, // Blanka
    { L"R.Mika", L"RMIKA", 0x51314, L"indexCPS2Sprites_SFA3Assets", 0xB1 }, // R.Mika
    { L"Cody", L"CODY", 0x51614, L"indexCPS2Sprites_SFA3Assets", 0xA8 }, // Cody
    { L"Vega", L"VEGA", 0x51914, L"indexCPS2Sprites_SFA3Assets", 0xB8 }, // Vega
    { L"Karin", L"KARIN", 0x51c14, L"indexCPS2Sprites_SFA3Assets", 0xAE }, // Karin
};

void CGame_SFA3_A::DumpHeaderPalettes()
{
    CString strOutput;

    for (UINT16 nIndex = 0; nIndex < ARRAYSIZE(SFA3_A_PortraitDataArray); nIndex++)
    {
        const UINT16 nPortraitsPerCharacter = 6;
        strOutput.Format(L"const sGame_PaletteDataset SFA3_A_%s_PORTRAIT_PALETTES[] = \r\n{\r\n", SFA3_A_PortraitDataArray[nIndex].pszCodeName);
        OutputDebugString(strOutput);
        for (UINT16 nColorIndex = 0; nColorIndex < nPortraitsPerCharacter; nColorIndex++)
        {
            constexpr UINT32 PORTRAIT_OFFSET = 0x80;
            CString strColorName;

            switch (nColorIndex)
            {
            case 0:
                strColorName = L"X-Ism Punch";
                break;
            case 1:
                strColorName = L"X-Ism Kick";
                break;
            case 2:
                strColorName = L"A-Ism Punch";
                break;
            case 3:
                strColorName = L"A-Ism Kick";
                break;
            case 4:
                strColorName = L"V-Ism Punch";
                break;
            case 5:
                strColorName = L"V-Ism Kick";
                break;
            }

            strOutput.Format(L"    { \"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", strColorName.GetString(), SFA3_A_PortraitDataArray[nIndex].nROMOffset + (PORTRAIT_OFFSET * nColorIndex), SFA3_A_PortraitDataArray[nIndex].nROMOffset + (PORTRAIT_OFFSET * (nColorIndex + 1)), SFA3_A_PortraitDataArray[nIndex].pszImageSet, SFA3_A_PortraitDataArray[nIndex].nImageSetIndex);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (UINT16 nIndex = 0; nIndex < ARRAYSIZE(SFA3_A_PortraitDataArray); nIndex++)
    {
        const UINT16 nPortraitsPerCharacter = 6;
        strOutput.Format(L"    { \"Select Portraits\", DESC_NODETYPE_TREE, (void*)SFA3_A_%s_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_%s_PORTRAIT_PALETTES) },\r\n", SFA3_A_PortraitDataArray[nIndex].pszCodeName, SFA3_A_PortraitDataArray[nIndex].pszCodeName);
        OutputDebugString(strOutput);
    }
}

sFileRule CGame_SFA3_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"sz3.09c");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SFA3_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(SFA3_A_UNITS, rgExtraCountAll, SFA3_A_NUMUNIT, SFA3_A_EXTRALOC, nUnitId, SFA3_A_EXTRA_CUSTOM);
}

UINT16 CGame_SFA3_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(SFA3_A_UNITS, rgExtraCountAll, SFA3_A_NUMUNIT, SFA3_A_EXTRALOC, nUnitId, nCollectionId, SFA3_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SFA3_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(SFA3_A_UNITS, SFA3_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_SFA3_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(SFA3_A_UNITS, rgExtraCountAll, SFA3_A_NUMUNIT, SFA3_A_EXTRALOC, nUnitId, SFA3_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SFA3_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(SFA3_A_UNITS, nUnitId, nCollectionId);
}

const sGame_PaletteDataset* CGame_SFA3_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(SFA3_A_UNITS, rgExtraCountAll, SFA3_A_NUMUNIT, SFA3_A_EXTRALOC, nUnitId, nPaletteId, SFA3_A_EXTRA_CUSTOM);
}

UINT16 CGame_SFA3_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
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

const sDescTreeNode* CGame_SFA3_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SFA3_A_UNITS, rgExtraCountAll, SFA3_A_NUMUNIT, SFA3_A_EXTRALOC, nUnitId, nPaletteId, SFA3_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

void CGame_SFA3_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != SFA3_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        // Adjust for ROM-specific variant locations
        if (m_pCRC32SpecificData)
        {
            m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
        }

    }
    else // SFA3_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSFA3(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SFA3_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    UINT16 nSrcStart = NodeGet->uPalId;
    UINT16 nSrcAmt = 1;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (SFA3_A_EXTRALOC != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

        if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
        {
            if ((_wcsicmp(pCurrentNode->szDesc, L"Select Portraits") == 0) ||
                (_wcsicmp(pCurrentNode->szDesc, L"Win Portraits") == 0))
            {
                // Hm.  These start at an abstract position within the node.  Let's derive that.
                int nProspectiveStart = NodeGet->uPalId;

                if (wcsstr(paletteDataSet->szPaletteName, L"Kick") != nullptr)
                {
                    // Ordering is punch/kick: correct this across all pairs.
                    nProspectiveStart = (nProspectiveStart > 0) ? nProspectiveStart - 1 : nProspectiveStart;
                }

                if (wcsstr(paletteDataSet->szPaletteName, L"V-Ism") != nullptr)
                {
                    nProspectiveStart = (nProspectiveStart > 4) ? nProspectiveStart - 4 : nProspectiveStart;
                }
                else if (wcsstr(paletteDataSet->szPaletteName, L"A-Ism") != nullptr)
                {
                    nProspectiveStart = (nProspectiveStart > 2) ? nProspectiveStart - 2 : nProspectiveStart;
                }

                const sGame_PaletteDataset* prospectivePalette = GetSpecificPalette(NodeGet->uUnitId, nProspectiveStart);

                if (_wcsicmp(prospectivePalette->szPaletteName, L"X-Ism Punch") == 0)
                {
                    sDescTreeNode* charUnit = GetMainTree()->GetDescTree(Node01, -1);

                    if ((wcscmp(charUnit->szDesc, k_sfa3NameKey_ChunLi) == 0) ||  // different portraits for X vs non-X
                        (wcscmp(charUnit->szDesc, k_sfa3NameKey_Sodom) == 0))     // different win portraits for X vs non-X
                    {
                        // OK, we've arrived where we expected to
                        nSrcAmt = 6;
                        nSrcStart = nProspectiveStart;
                        nNodeIncrement = 1;
                    }
                }
                else
                {
                    OutputDebugString(L"CGame_SFA3_A::UpdatePalImg: Possible error: we couldn't map a portrait correctly for multisprite export.\n");
                }
            }
            else if ((_wcsicmp(pCurrentNode->szDesc, L"X-Ism Punch") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"X-Ism Kick") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"A-Ism Punch") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"A-Ism Kick") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"V-Ism Punch") == 0) ||
                     (_wcsicmp(pCurrentNode->szDesc, L"V-Ism Kick") == 0))
            {
                nSrcAmt = 6;
                nNodeIncrement = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                while (nSrcStart >= nNodeIncrement)
                {
                    // The starting point is the absolute first palette for the sprite in question which is found in X-Ism 1
                    nSrcStart -= nNodeIncrement;
                }
            }
            else
            {
                // Status effects and etc have no peer palettes
                nSrcAmt = 1;
            }
        }

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                {
                    const UINT16 nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                    fShouldUseAlternateLoadLogic = true;
                    sImgTicket* pImgArray = nullptr;

                    for (INT16 nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
                    {
                        // The palettes get added forward, but the image tickets need to be generated in reverse order
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + (nStageCount - 1 - nStageIndex));
                        if (paletteDataSetToJoin)
                        {
                            pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                            //Set each palette
                            sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nStageIndex, -1);
                            CreateDefPal(JoinedNode, nStageIndex);
                            SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                        }
                    }

                    ClearSetImgTicket(pImgArray);
                }
                else
                {
                    UINT16 nDeltaToSecondElement = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                    int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;

                    UINT16 nPeerPaletteIdInNode = Node03;

                    if (paletteDataSet->indexImgToUse == indexCPS2Sprites_SFA3Assets)
                    {
                        if (paletteDataSet->indexOffsetToUse == 0x01) // Waterfall landing
                        {
                            nXOffs = 86;
                            nYOffs = -31;
                            nDeltaToSecondElement = 4;
                            nPeerPaletteIdInNode += 4;
                            fShouldUseAlternateLoadLogic = true;
                        }
                        else if (paletteDataSet->indexOffsetToUse == 0x02) // Waterfall stream
                        {
                            nXOffs = -86;
                            nYOffs = 31;
                            nDeltaToSecondElement = -4;
                            nPeerPaletteIdInNode -= 4;
                            fShouldUseAlternateLoadLogic = true;
                        }
                    }
                    else
                    {
                        fShouldUseAlternateLoadLogic = true;
                        nPeerPaletteIdInNode += nDeltaToSecondElement;
                    }

                    UINT16 nPeerPaletteIdInUnit = NodeGet->uPalId + nDeltaToSecondElement;

                    if (fShouldUseAlternateLoadLogic)
                    {
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, nPeerPaletteIdInUnit);

                        if (paletteDataSetToJoin)
                        {
                            ClearSetImgTicket(
                                CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                                )
                            );

                            //Set each palette
                            sDescNode* JoinedNode[2] = {
                                GetMainTree()->GetDescNode(NodeGet->uUnitId, Node02, Node03, -1),
                                GetMainTree()->GetDescNode(NodeGet->uUnitId, Node02, nPeerPaletteIdInNode, -1)
                            };

                            //Set each palette
                            CreateDefPal(JoinedNode[0], 0);
                            CreateDefPal(JoinedNode[1], 1);

                            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                            SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nDeltaToSecondElement, nSrcAmt, nNodeIncrement);
                        }
                    }
                }
            }
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}
