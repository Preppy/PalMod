#include "StdAfx.h"
#include "Game_P4AU_NESICA.h"
#include "P4AU_NESICA_DEF.h"
#include "..\PalMod.h"

size_t CGame_P4AU_NESICA::uRuleCtr = 0;

CDescTree CGame_P4AU_NESICA::MainDescTree = nullptr;

#define P4AU_NESICA_DEBUG DEFAULT_GAME_DEBUG_STATE

CGame_P4AU_NESICA::CGame_P4AU_NESICA(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_ABGR8888);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = (UINT16)PersonaCharacterData.size();

    InitDataBuffer();

    nGameFlag = P4AU_NESICA;
    nImgGameFlag = IMGDAT_SECTION_ARCSYS;
    //no images yet
    m_prgGameImageSet = P4AU_S_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    pButtonLabelSet = DEF_NOBUTTONS;

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(size_t) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_P4AU_NESICA::~CGame_P4AU_NESICA()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_P4AU_NESICA::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_P4AU_NESICA::InitDescTree());
}

sFileRule CGame_P4AU_NESICA::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    const size_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", PersonaCharacterData[nAdjustedUnitId].pszFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = PersonaCharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_P4AU_NESICA::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= PersonaCharacterData.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_P4AU_NESICA::InitDescTree()
{
    size_t  nTotalPaletteCount = 0;
    size_t  nUnitCt = (UINT16)PersonaCharacterData.size();

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[P4AU_NESICA]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_P4AU_NESICA_DIR::InitDescTree: Building desc tree for P4AU_NESICA...\n");
    OutputDebugString(strMsg);

    //Go through each character
    for (size_t  iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        size_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", PersonaCharacterData[iUnitCtr].pszCharacter.c_str());

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if P4AU_NESICA_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        size_t  nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (size_t  iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            size_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if P4AU_NESICA_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (size_t  nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", PersonaCharacterData[iUnitCtr].paletteInfo->at(nNodeIndex).strName.c_str());

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if P4AU_NESICA_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_P4AU_NESICA_DIR::InitDescTree: Loaded %u palettes for UNICLR ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

size_t CGame_P4AU_NESICA::GetCollectionCountForUnit(size_t nUnitId)
{
    // Just one palette set per character
    return PersonaPaletteNodes.size();
}

size_t CGame_P4AU_NESICA::GetNodeCountForCollection(size_t nUnitId, size_t  /*nCollectionId*/)
{
    return PersonaCharacterData[nUnitId].paletteInfo->size();
}

size_t CGame_P4AU_NESICA::GetPaletteCountForUnit(size_t nUnitId)
{
    return (PersonaCharacterData[nUnitId].paletteInfo->size() * PersonaPaletteNodes.size());
}

LPCWSTR CGame_P4AU_NESICA::GetDescriptionForCollection(size_t  /*nUnitId */, size_t nCollectionId)
{
    return PersonaPaletteNodes[nCollectionId].pszNodeName.c_str();
}

void CGame_P4AU_NESICA::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
    // UNICLR palettes are all 0x400 long
    const int cbPaletteSizeOnDisc = 0x400;

    size_t nAdjustedPalId = (UINT16)(nPalId % Persona4PalettesDefault.size());
    size_t nPaletteSet = (UINT16)(nPalId / Persona4PalettesDefault.size());

    m_pszCurrentPaletteName = PersonaCharacterData[nUnitId].paletteInfo->at(nAdjustedPalId).strName.c_str();
    m_nCurrentPaletteROMLocation = PersonaCharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nAdjustedPalId) + (0x20 * nAdjustedPalId);
    m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

    if (nPaletteSet)
    {
        m_nCurrentPaletteROMLocation += PersonaPaletteNodes[nPaletteSet].nAdjustmentFromBaseNode;
    }
}

BOOL CGame_P4AU_NESICA::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    int nSrcStart = (int)(UINT16)(NodeGet->uPalId % PersonaCharacterData[NodeGet->uUnitId].paletteInfo->size());
    size_t nSrcAmt = pButtonLabelSet.size();
    UINT16 nNodeIncrement = (UINT16)PersonaCharacterData[NodeGet->uUnitId].paletteInfo->size();

    //Change the image id if we need to, using the single image index list used for each color
    size_t nImgUnitId = PersonaCharacterData[NodeGet->uUnitId].paletteInfo->at(nSrcStart).nImageSet;
    nTargetImgId = PersonaCharacterData[NodeGet->uUnitId].paletteInfo->at(nSrcStart).nImageIndex;


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

BOOL CGame_P4AU_NESICA::LoadFile(CFile* LoadedFile, size_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_P4AU_NESICA_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, PersonaCharacterData[nUnitNumber].pszCharacter.c_str());
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGame_P4AU_NESICA_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", PersonaCharacterData[nUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);

    size_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    if (m_pppDataBuffer32[nUnitNumber] == nullptr)
    {
        m_pppDataBuffer32[nUnitNumber] = new UINT32 * [nPalAmt];
        memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(UINT32*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        LoadSpecificPaletteData(nUnitNumber, nPalCtr);

        m_pppDataBuffer32[nUnitNumber][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
        LoadedFile->Read(m_pppDataBuffer32[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if P4AU_NESICA_DEBUG
        strInfo.Format(L"\tCGame_P4AU_NESICA_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_P4AU_NESICA::SaveFile(CFile* SaveFile, size_t nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    size_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}
