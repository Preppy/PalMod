#include "StdAfx.h"
#include "Game_P4AU_STEAM.h"
#include "P4AU_STEAM_DEF.h"
#include "..\PalMod.h"

uint32_t CGame_P4AU_STEAM::uRuleCtr = 0;

CDescTree CGame_P4AU_STEAM::MainDescTree = nullptr;

#define P4AU_STEAM_DEBUG DEFAULT_GAME_DEBUG_STATE

CGame_P4AU_STEAM::CGame_P4AU_STEAM(uint32_t nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_BGRA8888);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = (uint16_t)PersonaCharacterData_Steam.size();

    InitDataBuffer();

    nGameFlag = P4AU_STEAM;
    nImgGameFlag = IMGDAT_SECTION_ARCSYS;
    //no images yet
    m_prgGameImageSet = P4AU_S_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    pButtonLabelSet = PersonaPaletteNodes;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_P4AU_STEAM::~CGame_P4AU_STEAM()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_P4AU_STEAM::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_P4AU_STEAM::InitDescTree());
}

sFileRule CGame_P4AU_STEAM::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", PersonaCharacterData_Steam.at(nAdjustedUnitId).pszFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = PersonaCharacterData_Steam.at(nAdjustedUnitId).nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_P4AU_STEAM::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= PersonaCharacterData_Steam.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_P4AU_STEAM::InitDescTree()
{
    uint32_t  nTotalPaletteCount = 0;
    uint32_t  nUnitCt = (uint16_t)PersonaCharacterData_Steam.size();

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[P4AU_STEAM]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_P4AU_STEAM_DIR::InitDescTree: Building desc tree for P4AU_STEAM...\n");
    OutputDebugString(strMsg);

    //Go through each character
    for (uint32_t  iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", PersonaCharacterData_Steam.at(iUnitCtr).pszCharacter.c_str());

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if P4AU_STEAM_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        uint32_t  nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (uint32_t  iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            uint32_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if P4AU_STEAM_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (uint32_t  nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", PersonaCharacterData_Steam.at(iUnitCtr).paletteInfo->at(nNodeIndex).strName.c_str());

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if P4AU_STEAM_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_P4AU_STEAM_DIR::InitDescTree: Loaded %u palettes for UNICLR ROM.\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

uint32_t CGame_P4AU_STEAM::GetCollectionCountForUnit(uint32_t nUnitId)
{
    // Just one palette set per character
    return static_cast<uint32_t>(PersonaPaletteNodes.size());
}

uint32_t CGame_P4AU_STEAM::GetNodeCountForCollection(uint32_t nUnitId, uint32_t  /*nCollectionId*/)
{
    return static_cast<uint32_t>(PersonaCharacterData_Steam.at(nUnitId).paletteInfo->size());
}

uint32_t CGame_P4AU_STEAM::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return static_cast<uint32_t>((PersonaCharacterData_Steam.at(nUnitId).paletteInfo->size() * PersonaPaletteNodes.size()));
}

LPCWSTR CGame_P4AU_STEAM::GetDescriptionForCollection(uint32_t  /*nUnitId */, uint32_t nCollectionId)
{
    return PersonaPaletteNodes.at(nCollectionId);
}

void CGame_P4AU_STEAM::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    // These palettes are all 0x400 long
    const int cbPaletteSizeOnDisc = 0x400;

    uint32_t nAdjustedPalId = (uint16_t)(nPalId % PersonaCharacterData_Steam.at(nUnitId).paletteInfo->size());
    uint32_t nPaletteSet = (uint16_t)(nPalId / PersonaCharacterData_Steam.at(nUnitId).paletteInfo->size());

    m_pszCurrentPaletteName = PersonaCharacterData_Steam.at(nUnitId).paletteInfo->at(nAdjustedPalId).strName.c_str();
    m_nCurrentPaletteROMLocation = PersonaCharacterData_Steam.at(nUnitId).nInitialLocation + (cbPaletteSizeOnDisc * nAdjustedPalId) + (0x20 * nAdjustedPalId);
    m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

    if (nPaletteSet)
    {
        // Each palette is spaced XXX bytes apart
        m_nCurrentPaletteROMLocation += nPaletteSet * PersonaCharacterData_Steam.at(nUnitId).nPaletteSetLength;
    }
}

BOOL CGame_P4AU_STEAM::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

    // This logic presumes that we are only showing core character palettes.  If we decide to handle
    // anything else, we'd want to validate that the palette in question is in the core lists
    int nSrcStart = (int)(uint16_t)(NodeGet->uPalId % PersonaCharacterData_Steam.at(NodeGet->uUnitId).paletteInfo->size());
    uint32_t nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
    uint16_t nNodeIncrement = (uint16_t)PersonaCharacterData_Steam.at(NodeGet->uUnitId).paletteInfo->size();

    //Change the image id if we need to, using the single image index list used for each color
    uint32_t nImgUnitId = PersonaCharacterData_Steam.at(NodeGet->uUnitId).paletteInfo->at(nSrcStart).nImageSet;
    int nTargetImgId = PersonaCharacterData_Steam.at(NodeGet->uUnitId).paletteInfo->at(nSrcStart).nImageIndex;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

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

BOOL CGame_P4AU_STEAM::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_P4AU_STEAM_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, PersonaCharacterData_Steam.at(nUnitNumber).pszCharacter.c_str());
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGame_P4AU_STEAM_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", PersonaCharacterData_Steam.at(nUnitNumber).nInitialLocation);
    OutputDebugString(strInfo);

    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    if (m_pppDataBuffer32[nUnitNumber] == nullptr)
    {
        m_pppDataBuffer32[nUnitNumber] = new uint32_t * [nPalAmt];
        memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(uint32_t*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        LoadSpecificPaletteData(nUnitNumber, nPalCtr);

        m_pppDataBuffer32[nUnitNumber][nPalCtr] = new uint32_t[m_nCurrentPaletteSizeInColors];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
        LoadedFile->Read(m_pppDataBuffer32[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if P4AU_STEAM_DEBUG
        strInfo.Format(L"\tCGame_P4AU_STEAM_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_P4AU_STEAM::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    uint32_t nTotalPalettesSaved = 0;
    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        if (IsPaletteDirty(nUnitId, nPalCtr))
        {
            LoadSpecificPaletteData(nUnitId, nPalCtr);

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            if (GameIsUsing16BitColor())
            {
                SaveFile->Write(m_pppDataBuffer[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
            else if (GameIsUsing32BitColor())
            {
                SaveFile->Write(m_pppDataBuffer32[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }

            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format(L"CGame_P4AU_STEAM::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}
