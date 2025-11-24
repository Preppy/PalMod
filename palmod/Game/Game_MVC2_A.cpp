#include "StdAfx.h"
#include "GameRegistry.h"
#include "Game_MVC2_A.h"
#include "Game_MVC2_D.h"
#include "mvc2_descs.h"
#include "mvc2_supp.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_MVC2_A::MVC2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_MVC2_A::m_MainDescTree = nullptr;

uint32_t CGame_MVC2_A::m_rgExtraCountAll[MVC2_A_NUMUNIT + 1];
uint32_t CGame_MVC2_A::m_rgExtraLoc[MVC2_A_NUMUNIT + 1];

uint32_t CGame_MVC2_A::m_nTotalPaletteCountForMVC2 = 0;
uint32_t CGame_MVC2_A::m_nConfirmedROMSize = -1;
size_t CGame_MVC2_A::m_nStartingUsableOffset = 0;

void CGame_MVC2_A::InitializeStatics()
{
    safe_delete_array(CGame_MVC2_A::MVC2_A_EXTRA_CUSTOM);

    memset(m_rgExtraCountAll, -1, sizeof(m_rgExtraCountAll));
    memset(m_rgExtraLoc, -1, sizeof(m_rgExtraLoc));

    m_MainDescTree.SetRootTree(CGame_MVC2_A::InitDescTree());
}

CGame_MVC2_A::CGame_MVC2_A(uint32_t nConfirmedROMSize, SupportedGamesList nROMToLoad)
{
    OutputDebugString(L"CGame_MVC2_A::CGame_MVC2_A: Loading ROM...\n");

    //Set color mode
    m_createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    // Get this data ready for InitializeStatics to consume
    switch (nROMToLoad)
    {
        case MVC2_A:
        default:
            m_nStartingUsableOffset = 0;
            // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
            m_nLowestKnownPaletteRomLocation = 0x260a9c0;
            break;
        case MVC2_S:
            m_nStartingUsableOffset = 0;
            m_nLowestKnownPaletteRomLocation = 0x82cc60;
            break;
        case MVC2_A_DIR:
            m_nStartingUsableOffset = MVC2_ROMReripOffsetDelta;
            m_nLowestKnownPaletteRomLocation = 0x82cc60;
            break;
    }

    InitializeStatics();

    m_nTotalInternalUnits = MVC2_A_NUMUNIT;
    m_nExtraUnit = MVC2_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 6400;
    m_pszExtraFilename = EXTRA_FILENAME_MVC2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMVC2;

    m_nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    m_nGameFlag = nROMToLoad;
    m_nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = MVC2_IMGIDS_USED;

    m_fGameUsesAlphaValue = true;

    m_nFileAmt = 1;

    //Set the image out display type
    m_DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_TOPTOBOTTOM;
    m_pButtonLabelSet = DEF_BUTTONLABEL6_MVC2;

    //Set the MVC2 supp game
    MVC2_SupplementProcessing::CurrMVC2 = (CGame_MVC2_D*)this;
    MVC2_SupplementProcessing::CurrMVC2_Arcade = this;
    //Prepare it
    MVC2_SupplementProcessing::prep_supp(false);

    //Create the redirect buffer
    m_rgUnitRedir.resize(m_nUnitAmt, 0);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_MVC2_A::~CGame_MVC2_A()
{
    safe_delete_array(CGame_MVC2_A::MVC2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();

    MVC2_SupplementProcessing::CurrMVC2 = nullptr;
    MVC2_SupplementProcessing::CurrMVC2_Arcade = nullptr;
}

CDescTree* CGame_MVC2_A::GetMainTree()
{
    return &CGame_MVC2_A::m_MainDescTree;
}

uint32_t CGame_MVC2_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(m_rgExtraCountAll, MVC2_A_NUMUNIT, nUnitId, MVC2_A_EXTRA_CUSTOM);
}

uint32_t CGame_MVC2_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(m_rgExtraLoc, MVC2_A_NUMUNIT, nUnitId, MVC2_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_MVC2_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MVC2_A, &MVC2_A_EXTRA_CUSTOM, MVC2_A_EXTRALOC, m_nConfirmedROMSize, 2, m_nStartingUsableOffset);

    uint16_t nUnitCt = MVC2_A_NUMUNIT + (GetExtraCt(MVC2_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", KnownGameInfo::GetGameNameForGameID(MVC2_A));
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForMVC2 = _InitDescTree(NewDescTree,
        MVC2_A_UNITS,
        MVC2_A_EXTRALOC,
        MVC2_A_NUMUNIT,
        m_rgExtraCountAll,
        m_rgExtraLoc,
        MVC2_A_EXTRA_CUSTOM
    );

    // For development use to speed things up
    //DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_MVC2_A::GetRule_A(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"Marvel vs. Capcom 2.dat");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize_A;

    return NewFileRule;
}

sFileRule CGame_MVC2_A::GetRule_S(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"mvsc2.21D3D8A7");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize_S;

    return NewFileRule;
}

uint32_t CGame_MVC2_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    if (nUnitId == MVC2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return MVC2_A_UNITS[nUnitId].uChildAmt;
    }
}

uint32_t CGame_MVC2_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(MVC2_A_UNITS, m_rgExtraCountAll, MVC2_A_NUMUNIT, MVC2_A_EXTRALOC, nUnitId, nCollectionId, MVC2_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_MVC2_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(MVC2_A_UNITS, MVC2_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_MVC2_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(MVC2_A_UNITS, m_rgExtraCountAll, MVC2_A_NUMUNIT, MVC2_A_EXTRALOC, nUnitId, MVC2_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_MVC2_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(MVC2_A_UNITS, nUnitId, nCollectionId);
}

uint32_t CGame_MVC2_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
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

const sDescTreeNode* CGame_MVC2_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(MVC2_A_UNITS, m_rgExtraCountAll, MVC2_A_NUMUNIT, MVC2_A_EXTRALOC, nUnitId, nPaletteId, MVC2_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_MVC2_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(MVC2_A_UNITS, m_rgExtraCountAll, MVC2_A_NUMUNIT, MVC2_A_EXTRALOC, nUnitId, nPaletteId, MVC2_A_EXTRA_CUSTOM);
}

void CGame_MVC2_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != MVC2_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = static_cast<int>(max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset)));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            if (UseSteamMode())
            {
                m_nCurrentPaletteROMLocation -= m_activeSteamShiftTable.at(nUnitId);
            }
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // MVC2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &MVC2_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

int32_t CGame_MVC2_A::GetSteamLoadingOffsetForModifiedFile(CFile* TargetFile, uint32_t nUnitId)
{
    // The PAL files start at file 209 in the AFS.
    const uint32_t nPALFileLocation = 0x40 /* IBIS header */ + 0x08 /* AFS header */ + (0x08 * (nUnitId + 209));
    int32_t nPALFileStart = 0;

    std::vector<uint32_t> normalPALStarts =
    {
        // These are the normal/expected locations for the Steam PL_DAT files within 
        // the ARC.
        // We then check the actual locations, and further shift as needed.
        /* 00 */ 0x7be800,
        /* 01 */ 0x83d800,
        /* 02 */ 0x915800,
        /* 03 */ 0x9a8800,
        /* 04 */ 0xa6f000,
        /* 05 */ 0xb88800,
        /* 06 */ 0xc60800,
        /* 07 */ 0xd48800,
        /* 08 */ 0xe43800,
        /* 09 */ 0xf45800,
        /* 0a */ 0x1031800,
        /* 0b */ 0x1118000,
        /* 0c */ 0x120a800,
        /* 0d */ 0x12e5800,
        /* 0e */ 0x13ff800,
        /* 0f */ 0x1523800,
        /* 10 */ 0x1637800,
        /* 11 */ 0x174e800,
        /* 12 */ 0x182a800,
        /* 13 */ 0x1928000,
        /* 14 */ 0x1a31800,
        /* 15 */ 0x1b4b800,
        /* 16 */ 0x1c64800,
        /* 17 */ 0x1d59800,
        /* 18 */ 0x1e66000,
        /* 19 */ 0x1f52000,
        /* 1a */ 0x1fdf800,
        /* 1b */ 0x20b9800,
        /* 1c */ 0x213a000,
        /* 1d */ 0x21d1800,
        /* 1e */ 0x2245800,
        /* 1f */ 0x22cb000,
        /* 20 */ 0x23e5800,
        /* 21 */ 0x250c800,
        /* 22 */ 0x257a000,
        /* 23 */ 0x2641000,
        /* 24 */ 0x268f800,
        /* 25 */ 0x2730000,
        /* 26 */ 0x27e7000,
        /* 27 */ 0x286c000,
        /* 28 */ 0x28f2800,
        /* 29 */ 0x29dc800,
        /* 2a */ 0x2b09800,
        /* 2b */ 0x2c18000,
        /* 2c */ 0x2d19800,
        /* 2d */ 0x2e30800,
        /* 2e */ 0x2f1b800,
        /* 2f */ 0x301a000,
        /* 30 */ 0x3138000,
        /* 31 */ 0x3234800,
        /* 32 */ 0x334b800,
        /* 33 */ 0x3477800,
        /* 34 */ 0x3579000,
        /* 35 */ 0x369f800,
        /* 36 */ 0x37c7000,
        /* 37 */ 0x38b5800,
        /* 38 */ 0x399b000,
        /* 39 */ 0x3a8a000,
        /* 3a */ 0x3b89800,
    };

    TargetFile->Seek(nPALFileLocation, CFile::begin);
    TargetFile->Read(&nPALFileStart, sizeof(nPALFileStart));

    return (normalPALStarts.at(nUnitId) - nPALFileStart);
}

BOOL CGame_MVC2_A::LoadFile(CFile* LoadedFile, uint32_t nUnitId)
{
    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        if (UseSteamMode() && (nUnitCtr < indexMVC2ATeamView))
        {
            // Our offsets should shift as needed if the ARC has been rebuilt in such a fashion as to move the location of the PL_DAT files.
            const std::vector<int32_t> baseSteamShiftTable =
            {
                // These values are the NAOMI locations vs the Steam locations
                // The delta the operation establishes lets us quickly adjust things 
                // for Steam
                /* Ryu */ 0x260a9c0 - 0x82CC60,
                /* Zangief */ 0x26e2240 - 0x9049A0,
                /* Guile */ 0x2775160 - 0x997A20,
                /* Morrigan */ 0x283a360 - 0xA5D320,
                /* Anakaris */ 0x2954600 - 0xB77B60,
                /* Strider */ 0x2a2c5e0 - 0xC4FE20,
                /* Cyclops */ 0x2b13440 - 0xD36F80,
                /* Wolverine */ 0x2c0eba0 - 0xE32D20,
                /* Psylocke */ 0x2d104e0 - 0xF34940,
                /* Iceman */ 0x2dfb5c0 - 0x10201E0,
                /* Rogue */ 0x2ee2140 - 0x1107480,
                /* CapAm */ 0x2fd03e0 - 0x11F58A0,
                /* Spidey */ 0x30ae9c0 - 0x12D44C0,
                /* Hulk */ 0x31c9400 - 0x13EEF80,
                /* Venom */ 0x32ed120 - 0x1512e20,
                /* DrDoom */ 0x33ffa40 - 0x1625A40,
                /* Tron */ 0x35175c0 - 0x173D7C0,
                /* Jill */ 0x35f3160 - 0x1819B40,
                /* Hayato */ 0x36f0740 - 0x19176C0,
                /* Ruby */ 0x37f9ce0 - 0x1A20D00,
                /* SonSon */ 0x39136c0 - 0x1B3A8C0,
                /* Amingo */ 0x3a2c760 - 0x1C53DE0,
                /* Marrow */ 0x3b214a0 - 0x1D48E20,
                /* Cable */ 0x3c2d5a0 - 0x1E55220,
                /* Abyss 1 */ 0x3d19480 - 0x1F41800,
                /* Abyss 2 */ 0x3da68e0 - 0x1FCED80,
                /* Abyss 3 */ 0x3e80560 - 0x20A8DA0,
                /* ChunLi */ 0x3f00960 - 0x2129520,
                /* Megaman */ 0x3f93960 - 0x21BC920,
                /* Roll */ 0x4007740 - 0x2230DE0,
                /* Akuma */ 0x4090ce0 - 0x22BA5A0,
                /* BBHood */ 0x41aae60 - 0x23D4AA0,
                /* Felicia */ 0x42d2080 - 0x24FC100,
                /* Charlie */ 0x433f100 - 0x25691A0,
                /* Sakura */ 0x4405b60 - 0x2630380,
                /* Dan */ 0x44540c0 - 0x267EB60,
                /* Cammy */ 0x44f3b80 - 0x271EBE0,
                /* Dhalsim */ 0x45aa820 - 0x27D5F20,
                /* Bison */ 0x462f340 - 0x285B0A0,
                /* Ken */ 0x46b5660 - 0x28E1AE0,
                /* Gambit */ 0x479ec80 - 0x29CB740,
                /* Juggy */ 0x48cb760 - 0x2AF8860,
                /* Storm */ 0x49d9e80 - 0x2C070E0,
                /* Sabretooth */ 0x4adb360 - 0x2D089E0,
                /* Magneto */ 0x4bf21c0 - 0x2e1ff80,
                /* Shuma-Gorath */ 0x4cda620 - 0x2F08560,
                /* WarMachine */ 0x4ddab80 - 0x30091A0,
                /* SilverSam */ 0x4ef6120 - 0x3124EC0,
                /* OmegaRed */ 0x4ff4940 - 0x3223B60,
                /* Spiral */ 0x5109fa0 - 0x3339480,
                /* Colossus */ 0x5235a60 - 0x34652C0,
                /* IronMan */ 0x53384c0 - 0x35683A0,
                /* Sent */ 0x545e420 - 0x368E840,
                /* Blackheart */ 0x5585400 - 0x37B5EE0,
                /* Thanos */ 0x5673e40 - 0x38A4C80,
                /* Jin */ 0x5758480 - 0x3989460,
                /* CapCom */ 0x5847ec0 - 0x3A793A0,
                /* Bonerine */ 0x59472a0 - 0x3B78B00,
                /* Kobun */ 0x59acdc0 - 0x3BDEB20,
                0,  // Team View virtual unit
            };

            m_activeSteamShiftTable.at(nUnitCtr) = baseSteamShiftTable.at(nUnitCtr) + GetSteamLoadingOffsetForModifiedFile(LoadedFile, nUnitCtr);
        }

        m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];

        // Use a sorted layout
        m_rgUnitRedir.at(nUnitCtr) = MVC2_A_UNITSORT[nUnitCtr];

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];

            if (nUnitCtr == indexMVC2ATeamView)
            {
                // This is a virtual group.
                // We just need to be indexed in the rgUnitRedir
                ZeroMemory(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors);
                continue;
            }
            else
            {
                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
            }
        }
    }

    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_MVC2_A::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    uint32_t nTotalPalettesSaved = 0;

    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        if (nUnitCtr == indexMVC2ATeamView)
        {
            // This is a virtual group.
            continue;
        }

        uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            // We don't mark proc_supp palettes dirty: only use this check if we change that behavior
            //if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                SaveFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGame_MVC2_A::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, m_nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

BOOL CGame_MVC2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    uint32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    m_BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    int nTargetImgId = 0;
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (NodeGet->uUnitId != MVC2_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if (NodeGet->uUnitId == indexMVC2ATeamView)
                {
                    // This code path is analogous but very much not identical to that in mvc2_palsel.cpp
                    // This is used for Steam and etc - that version is used for DC

                    uint16_t nJoinedUnit1 = indexMVC2AMagneto;
                    uint16_t nJoinedUnit2 = indexMVC2AStorm;
                    uint16_t nJoinedUnit3 = indexMVC2APsylocke;
                    bool fTeamFound = false;

                    fShouldUseAlternateLoadLogic = true;
                    uint16_t nTeamIndex = 0;

                    for (; nTeamIndex < ARRAYSIZE(mvc2TeamList); nTeamIndex++)
                    {
                        if (_wcsicmp(mvc2TeamList[nTeamIndex].pszTeamName, pCurrentNode->szDesc) == 0)
                        {
                            nJoinedUnit1 = mvc2TeamList[nTeamIndex].nCharacterOne;
                            nJoinedUnit2 = mvc2TeamList[nTeamIndex].nCharacterTwo;
                            nJoinedUnit3 = mvc2TeamList[nTeamIndex].nCharacterThree;
                            fTeamFound = true;
                            break;
                        }
                    }

                    if (!fTeamFound)
                    {
                        OutputDebugString(L"WARNING: MVC2 Team lookup failed. Please fix.  Will use MSP for now.\n");
                    }

                    // Reset just in case
                    m_pButtonLabelSet = DEF_BUTTONLABEL6_MVC2;
                    nSrcAmt = static_cast<uint32_t>(m_pButtonLabelSet.size()); // 6 button colors
                    nNodeIncrement = 8; // 8 palettes per main character color set

                    const uint16_t nNodeIndex = (NodeGet->uPalId % static_cast<uint16_t>(m_pButtonLabelSet.size()));
                    // there are 8 palettes per main character button/color section
                    const uint16_t nPaletteIndex = nNodeIndex * 8;
                    // We're just using the indexImgToUse value from these PaletteDatasets
                    const sGame_PaletteDataset* palette1ToJoin = GetSpecificPalette(nJoinedUnit1, nPaletteIndex);
                    const sGame_PaletteDataset* palette2ToJoin = GetSpecificPalette(nJoinedUnit2, nPaletteIndex);
                    const sGame_PaletteDataset* palette3ToJoin = GetSpecificPalette(nJoinedUnit3, nPaletteIndex);

                    std::vector<sImgDef*> pImgDefSet;
                    uint16_t nPosition2 = 1, nPosition3 = 2;

                    // Get the image dimensions so that we can collate them into one contiguous strip
                    pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(palette1ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex));
                    if (mvc2TeamList[nTeamIndex].fFirstRequiresSecondPart)
                    {
                        pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(palette1ToJoin->indexImgToUse, k_nSpecialTeamSpriteImagePairIndex));
                        nPosition2++;
                    }

                    pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(palette2ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex));
                    if (mvc2TeamList[nTeamIndex].fSecondRequiresSecondPart)
                    {
                        pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(palette2ToJoin->indexImgToUse, k_nSpecialTeamSpriteImagePairIndex));
                    }

                    pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(palette3ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex));
                    if (mvc2TeamList[nTeamIndex].fThirdRequiresSecondPart)
                    {
                        pImgDefSet.push_back(GetHost()->GetImgFile()->GetImageDef(palette3ToJoin->indexImgToUse, k_nSpecialTeamSpriteImagePairIndex));
                    }

                    // Height is always 186, so we can't use image height to adjust positions: ignore Y for now.
                    const int nXOffsetForFirst = 0;
                    const int nXOffsetForSecond = pImgDefSet[0]->uImgWidth;
                    const int nXOffsetForThird = pImgDefSet[0]->uImgWidth + pImgDefSet[nPosition2]->uImgWidth;

                    // Load the ticket in full reverse order
                    sImgTicket* pImgTicket = nullptr;

                    if (mvc2TeamList[nTeamIndex].fThirdRequiresSecondPart)
                    {
                        pImgTicket = CreateImgTicket(palette3ToJoin->indexImgToUse, k_nSpecialTeamSpriteImagePairIndex, pImgTicket, nXOffsetForThird);
                    }
                    pImgTicket = CreateImgTicket(palette3ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex, pImgTicket, nXOffsetForThird);

                    if (mvc2TeamList[nTeamIndex].fSecondRequiresSecondPart)
                    {
                        pImgTicket = CreateImgTicket(palette2ToJoin->indexImgToUse, k_nSpecialTeamSpriteImagePairIndex, pImgTicket, nXOffsetForSecond);
                    }
                    pImgTicket = CreateImgTicket(palette2ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex, pImgTicket, nXOffsetForSecond);

                    if (mvc2TeamList[nTeamIndex].fFirstRequiresSecondPart)
                    {
                        pImgTicket = CreateImgTicket(palette1ToJoin->indexImgToUse, k_nSpecialTeamSpriteImagePairIndex, pImgTicket, nXOffsetForFirst);
                    }
                    pImgTicket = CreateImgTicket(palette1ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex, pImgTicket, nXOffsetForFirst);

                    ClearSetImgTicket(pImgTicket);

                    //Set each palette
                    std::vector<sDescNode*> JoinedNode;

                    JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit1, nNodeIndex, 0, -1));
                    if (mvc2TeamList[nTeamIndex].fFirstRequiresSecondPart)
                    {
                        JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit1, nNodeIndex, 1, -1));
                    }
                    JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit2, nNodeIndex, 0, -1));
                    if (mvc2TeamList[nTeamIndex].fSecondRequiresSecondPart)
                    {
                        JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit2, nNodeIndex, 1, -1));
                    }
                    JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit3, nNodeIndex, 0, -1));
                    if (mvc2TeamList[nTeamIndex].fThirdRequiresSecondPart)
                    {
                        JoinedNode.push_back(GetMainTree()->GetDescNode(nJoinedUnit3, nNodeIndex, 1, -1));
                    }

                    //Set each palette
                    for (size_t iNodePos = 0; iNodePos < JoinedNode.size(); iNodePos++)
                    {
                        CreateDefPal(JoinedNode[iNodePos], iNodePos);
                    }

                    size_t iSourcePalPos = 0;
                    SetSourcePal(iSourcePalPos++, nJoinedUnit1, 0, nSrcAmt, nNodeIncrement);
                    if (mvc2TeamList[nTeamIndex].fFirstRequiresSecondPart)
                    {
                        SetSourcePal(iSourcePalPos++, nJoinedUnit1, 1, nSrcAmt, nNodeIncrement);
                    }

                    SetSourcePal(iSourcePalPos++, nJoinedUnit2, 0, nSrcAmt, nNodeIncrement);
                    if (mvc2TeamList[nTeamIndex].fSecondRequiresSecondPart)
                    {
                        SetSourcePal(iSourcePalPos++, nJoinedUnit2, 1, nSrcAmt, nNodeIncrement);
                    }

                    SetSourcePal(iSourcePalPos++, nJoinedUnit3, 0, nSrcAmt, nNodeIncrement);
                    if (mvc2TeamList[nTeamIndex].fThirdRequiresSecondPart)
                    {
                        SetSourcePal(iSourcePalPos++, nJoinedUnit3, 1, nSrcAmt, nNodeIncrement);
                    }

                }
                else  if ((_wcsicmp(pCurrentNode->szDesc, L"LP") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"LK") == 0) ||
                          (_wcsicmp(pCurrentNode->szDesc, L"HP") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"HK") == 0) ||
                          (_wcsicmp(pCurrentNode->szDesc, L"A1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"A2") == 0))
                {
                    nNodeIncrement = pCurrentNode->uChildAmt;
                    // Need to reset because we have a status effect label set as well.
                    m_pButtonLabelSet = DEF_BUTTONLABEL6_MVC2;
                    // We show 6 sprites (LP...A2) for export for all normal MVC2 sprites
                    nSrcAmt = static_cast<uint32_t>(m_pButtonLabelSet.size());

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
                else if (_wcsicmp(pCurrentNode->szDesc, L"Status Effects") == 0)
                {
                    // Status Effects follow main buttons but are before Extras, if any
                    nSrcStart = 0;

                    for (uint16_t iCollectionIndex = 0; iCollectionIndex < DEF_BUTTONLABEL6_MVC2.size(); iCollectionIndex++)
                    {
                        nSrcStart += GetNodeCountForCollection(NodeGet->uUnitId, iCollectionIndex);
                    }

                    nNodeIncrement = paletteDataSet->pPalettePairingInfo ? 2 : 1;
                    // There are 8 status effects
                    m_pButtonLabelSet = DEF_LABEL_STATUS_EFFECTS;
                    nSrcAmt = static_cast<uint32_t>(m_pButtonLabelSet.size());
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (ArePalettePairsEqual(paletteDataSet->pPalettePairingInfo, &pairFullyLinkedNode))
                {
                    const uint32_t nPaletteCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                    fShouldUseAlternateLoadLogic = true;
                    sImgTicket* pImgArray = nullptr;

                    for (uint32_t nPaletteIndex = 0; nPaletteIndex < nPaletteCount; nPaletteIndex++)
                    {
                        // The palettes get added forward, but the image tickets need to be generated in reverse order
                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + (nPaletteCount - 1 - nPaletteIndex));
                        if (paletteDataSetToJoin)
                        {
                            pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                            //Set each palette
                            sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteIndex, -1);
                            CreateDefPal(JoinedNode, nPaletteIndex);
                            SetSourcePal(nPaletteIndex, NodeGet->uUnitId, nSrcStart + nPaletteIndex, nSrcAmt, nNodeIncrement);
                        }
                    }

                    ClearSetImgTicket(pImgArray);
                }
                else
                {
                    std::vector<const sGame_PaletteDataset*> vsPaletteDataSetToJoin;
                    std::vector<int8_t> vnPeerPaletteDistances;
                    bool fAllNodesFound = true;

                    for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                    {
                        switch (nPairIndex)
                        {
                        default:
                            // Fail
                            fAllNodesFound = false;
                            __fallthrough;
                        case 0:
                            vnPeerPaletteDistances.push_back(0);
                            break;
                        case 1:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner);
                            break;
                        case 2:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner);
                            break;
                        case 3:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner);
                            break;
                        case 4:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo4thPartner);
                            break;
                        case 5:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo5thPartner);
                            break;
                        case 6:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo6thPartner);
                            break;
                        case 7:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo7thPartner);
                            break;
                        }

                        const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + vnPeerPaletteDistances[nPairIndex]);

                        if (paletteDataSetToJoin)
                        {
                            vsPaletteDataSetToJoin.push_back(paletteDataSetToJoin);
                        }
                        else
                        {
                            fAllNodesFound = false;
                        }
                    }

                    std::vector<sDescNode*> vsJoinedNodes;

                    for (uint32_t nNodeIndex = 0; nNodeIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nNodeIndex++)
                    {
                        sDescNode* sSearchedNode = nullptr;

                        // We need to readjust the nodes here.
                        uint32_t nNodeSize = 8;
                        uint32_t nAdjustedCollectionIndex = Node02;
                        ptrdiff_t nAdjustedButtonIndex = Node03 + static_cast<ptrdiff_t>(vnPeerPaletteDistances[nNodeIndex]);

                        while (nAdjustedButtonIndex >= 0)
                        {
                            sSearchedNode = GetMainTree()->GetDescNode(Node01, nAdjustedCollectionIndex, nAdjustedButtonIndex, -1);

                            if (sSearchedNode)
                            {
                                break;
                            }

                            // This palette isn't in this node: walk to the next available node for this unit.
                            nAdjustedButtonIndex -= nNodeSize;
                            nAdjustedCollectionIndex++;
                        }

                        if (sSearchedNode)
                        {
                            vsJoinedNodes.push_back(sSearchedNode);
                        }
                        else
                        {
                            fAllNodesFound = false;
                        }
                    }

                    if (fAllNodesFound)
                    {
                        fShouldUseAlternateLoadLogic = true;

                        std::vector<sImgTicket*> vsImagePairs;
                        sImgTicket* pPreviousImage = nullptr;

                        for (int nNodeIndex = static_cast<int>(paletteDataSet->pPalettePairingInfo->nPalettesToJoin) - 1; nNodeIndex >= 0; nNodeIndex--)
                        {
                            sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin[nNodeIndex]->indexImgToUse, vsPaletteDataSetToJoin[nNodeIndex]->indexOffsetToUse, pPreviousImage);

                            vsImagePairs.push_back(pThisImage);

                            pPreviousImage = pThisImage;
                        }

                        ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                        for (int nPairIndex = 0; nPairIndex < static_cast<int>(paletteDataSet->pPalettePairingInfo->nPalettesToJoin); nPairIndex++)
                        {
                            //Set each palette
                            CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                            SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[nPairIndex], nSrcAmt, nNodeIncrement);
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

uint32_t CGame_MVC2_A::GetBasicOffset(uint32_t nPalId)
{
    // Each character by default gets 6 buttons worth of 8 palettes.  
    if (nPalId >= static_cast<uint32_t>(8 * k_mvc2_character_coloroption_count))
    {
        // This palette is in the Extra group for this character
        return -1;
    }
    else
    {
        // This is a stock palette entry for this character: return the MOD so we know the 
        // particular offset within this button group.
        return (nPalId % 8);
    }
}

int CGame_MVC2_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    uint32_t nBasicOffset = GetBasicOffset(nPalId);

    CString strMessage;
    strMessage.Format(L"CGame_MVC2_A::GetBasicOffset : Palette %u updated.  This palette is %s.\n", nPalId, (nBasicOffset != -1) ? L"basic" : L"Extra");
    OutputDebugString(strMessage);

    return MVC2_SupplementProcessing::proc_supp(nUnitId, nPalId);
}
