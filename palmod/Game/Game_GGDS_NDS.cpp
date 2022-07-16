#include "StdAfx.h"
#include "GameDef.h"
#include "Game_GGDS_NDS.h"
#include "GGDS_NDS_DEF.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

CGame_GGDS_NDS::CGame_GGDS_NDS(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_GGDS_NDS::CGame_GGDS_NDS: Loading ROM...\n");

    createPalOptions = {
                        NO_SPECIAL_OPTIONS, // Obsolete, don't change.
                        PALWriteOutputOptions::WRITE_16  // This is the number of colors to write when saving to the game ROM before we need to add another reserved color/counter uint16_t.
                                                         // You can set this to PALWriteOutputOptions::WRITE_MAX to write out a maximum of 256 colors.  See CGameClass::UpdatePalData for usage.
    };

    // ** Set alpha mode: this determines whether or not we set alpha values for the data we write back to the game ROM.
    // For color mode COLMODE_RGB444_BE you usually want it not set, for NEOGEO you cannot use it (there's no bit(s) for it), and for 15/15ALT you probably want it on.
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    // ** Set color mode: see the definitions in ColorSystem.h
    // We need to set color mode before calling InitializeStatics as color mode affects color size (2 bytes vs 4 bytes)
    // which in turn affects all our calculations involving colors
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = GGDS_NDS_NUMUNIT;
    m_nExtraUnit = GGDS_NDS_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + m_nPaletteCountInHeaders;
    m_pszExtraFilename = EXTRA_FILENAME_GGDS_NDS;
    m_nTotalPaletteCount = m_nTotalPaletteCountForNEWGAME; // This value is calculated at runtime: don't change this.
    m_nLowestKnownPaletteRomLocation = m_nLowestROMLocationUsedInHeaders;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    // ** Set game flag: you need to add a value for your game in gamedef.h and then set that value here.
    nGameFlag = GGDS_NDS;

    // These next three values define which section in imgdat palmod looks up sprites from, as well as defining
    // what sprites palmod will load from that section.
    // For the most part, you can just keep these values since you won't have images in imgdat.
    // If for some reason there *are* already usable images in imgdat, update these values to point to the right section
    // and create an array (GGDS_NDS_IMG_UNITS) that lists the sprites you want to use from that section.
    nImgGameFlag = IMGDAT_SECTION_CPS2; // This value is used to determine which section of the image file is used
    m_prgGameImageSet.clear();  // GGDS_NDS_IMG_UNITS -- this is the vector of images present in imgdat once that happens

    nFileAmt = 1; // Always 1 for monolithic rom games

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_GGDS; // Check out the available options in buttondef.h

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating NEWGAME to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_GGDS_NDS::GGDS_NDS_EXTRA_CUSTOM = nullptr;
CDescTree CGame_GGDS_NDS::MainDescTree = nullptr;
uint32_t CGame_GGDS_NDS::rgExtraCountAll[GGDS_NDS_NUMUNIT + 1];
uint32_t CGame_GGDS_NDS::rgExtraLoc[GGDS_NDS_NUMUNIT + 1];
uint32_t CGame_GGDS_NDS::m_nTotalPaletteCountForNEWGAME = 0;
uint32_t CGame_GGDS_NDS::m_nConfirmedROMSize = -1;

void CGame_GGDS_NDS::InitializeStatics()
{
    safe_delete_array(CGame_GGDS_NDS::GGDS_NDS_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_GGDS_NDS::InitDescTree());
}

CGame_GGDS_NDS::~CGame_GGDS_NDS(void)
{
    safe_delete_array(CGame_GGDS_NDS::GGDS_NDS_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_GGDS_NDS::GetMainTree()
{
    return &CGame_GGDS_NDS::MainDescTree;
}

uint32_t CGame_GGDS_NDS::GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, GGDS_NDS_NUMUNIT, nUnitId, GGDS_NDS_EXTRA_CUSTOM);
}

uint32_t CGame_GGDS_NDS::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, GGDS_NDS_NUMUNIT, nUnitId, GGDS_NDS_EXTRA_CUSTOM);
}

stExtraDef* CGame_GGDS_NDS::GetCurrentExtraDef(int nDefCtr)
{
    return (stExtraDef*)&GGDS_NDS_EXTRA_CUSTOM[nDefCtr];
}

sDescTreeNode* CGame_GGDS_NDS::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_GGDS_NDS, &GGDS_NDS_EXTRA_CUSTOM, GGDS_NDS_EXTRALOC, m_nConfirmedROMSize);

    uint32_t nUnitCt = GGDS_NDS_NUMUNIT + (GetExtraCt(GGDS_NDS_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[GGDS_NDS]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForNEWGAME = _InitDescTree(NewDescTree,
        GGDS_NDS_UNITS,
        GGDS_NDS_EXTRALOC,
        GGDS_NDS_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        GGDS_NDS_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_GGDS_NDS::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, GGDS_NDS_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_GGDS_NDS::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(GGDS_NDS_UNITS, rgExtraCountAll, GGDS_NDS_NUMUNIT, GGDS_NDS_EXTRALOC, nUnitId, GGDS_NDS_EXTRA_CUSTOM);
}

uint32_t CGame_GGDS_NDS::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(GGDS_NDS_UNITS, rgExtraCountAll, GGDS_NDS_NUMUNIT, GGDS_NDS_EXTRALOC, nUnitId, nCollectionId, GGDS_NDS_EXTRA_CUSTOM);
}

LPCWSTR CGame_GGDS_NDS::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(GGDS_NDS_UNITS, GGDS_NDS_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_GGDS_NDS::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(GGDS_NDS_UNITS, rgExtraCountAll, GGDS_NDS_NUMUNIT, GGDS_NDS_EXTRALOC, nUnitId, GGDS_NDS_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_GGDS_NDS::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(GGDS_NDS_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_GGDS_NDS::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(GGDS_NDS_UNITS, rgExtraCountAll, GGDS_NDS_NUMUNIT, GGDS_NDS_EXTRALOC, nUnitId, nPaletteId, GGDS_NDS_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_GGDS_NDS::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(GGDS_NDS_UNITS, rgExtraCountAll, GGDS_NDS_NUMUNIT, GGDS_NDS_EXTRALOC, nUnitId, nPaletteId, GGDS_NDS_EXTRA_CUSTOM);
}

void CGame_GGDS_NDS::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != GGDS_NDS_EXTRALOC)
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
    else // GGDS_NDS_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&GGDS_NDS_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_GGDS_NDS::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    //Change the image id if we need to
    int nTargetImgId = 0;
    uint32_t nImgUnitId = NodeGet->uUnitId;

    uint32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    //Select the image
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        if (pCurrentNode) // All current nodes are one block of color options
        {
            if (_wcsicmp(pCurrentNode->szDesc, L"Palettes") == 0)
            {
                nSrcAmt = static_cast<uint32_t>(DEF_BUTTONLABEL_GGDS.size());
                nNodeIncrement = 1;
                // The starting point is the absolute first palette for the sprite in question which is found in A
                nSrcStart = 0;
            }
            else // Extras or Extra Range
            {
                // Status effects and etc have no peer palettes
                nSrcAmt = 1;
            }
        }

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;
        }
    }
    else // Extra region
    {
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(NodeGet->uUnitId) + NodeGet->uPalId);

        if (pCurrDef->indexImgToUse != INVALID_UNIT_VALUE)
        {
            nImgUnitId = pCurrDef->indexImgToUse;
            nTargetImgId = pCurrDef->indexOffsetToUse;
        }
        else
        {
            fShouldUseAlternateLoadLogic = true;

            CreateDefPal(NodeGet, 0);

            // Only internal units get sprites
            ClearSetImgTicket(nullptr);

            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, 1);
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(NodeGet, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}