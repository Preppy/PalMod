#include "StdAfx.h"
#include "GameClassByUnitPerFile.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

#define GCPUPF_A_DEBUG DEFAULT_GAME_DEBUG_STATE

uint32_t CGameClassPerUnitPerFile::uRuleCtr = 0;
CDescTree CGameClassPerUnitPerFile::MainDescTree = nullptr;
uint32_t CGameClassPerUnitPerFile::m_nConfirmedROMSize = -1;

std::wstring CGameClassPerUnitPerFile::m_strGameFriendlyName;
SupportedGamesList CGameClassPerUnitPerFile::m_snCurrentGameFlag = SupportedGamesList::NUM_GAMES;

const CGameClassPerUnitPerFile::sGCPUPF_CoreGameData* CGameClassPerUnitPerFile::m_psCurrentGameLoadingData = nullptr;

void CGameClassPerUnitPerFile::InitializeStatics()
{
    MainDescTree.SetRootTree(CGameClassPerUnitPerFile::InitDescTree());
}

sFileRule CGameClassPerUnitPerFile::GetRule(uint32_t nUnitId, const std::vector<sGCBUPF_BasicFileData>& gameLoadingData)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", gameLoadingData.at(nAdjustedUnitId).strFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = gameLoadingData.at(nAdjustedUnitId).nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGameClassPerUnitPerFile::GetNextRule(const std::vector<sGCBUPF_BasicFileData>& gameLoadingData)
{
    sFileRule NewFileRule = GetRule(uRuleCtr, gameLoadingData);

    if (++uRuleCtr >= gameLoadingData.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

void CGameClassPerUnitPerFile::InitializeGame(uint32_t nConfirmedROMSize, const sGCPUPF_CoreGameData& gameLoadingData)
{
    //Set game-game specific information before loading the game's known palette locations
    m_strGameFriendlyName = gameLoadingData.strGameFriendlyName;
    m_snCurrentGameFlag = nGameFlag = gameLoadingData.nGameID;
    nImgGameFlag = gameLoadingData.eImgDatSectionID;
    m_prgGameImageSet = gameLoadingData.rgGameImageSet;
    createPalOptions = gameLoadingData.createPalOptions;
    //Set the image out display type
    DisplayType = gameLoadingData.displayStyle;
    pButtonLabelSet = gameLoadingData.rgszButtonLabelSet;
    SetAlphaMode(gameLoadingData.eAlphaMode);

    if (gameLoadingData.eAlphaMode == AlphaMode::GameUsesVariableAlpha)
    {
        m_fGameUsesAlphaValue = true;
    }

    SetColorMode(gameLoadingData.eColMode);

    m_psCurrentGameLoadingData = &gameLoadingData;

    // Load the game's layout for palmod
    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = nFileAmt = static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.size());

    // Stub in the palette buffer that we will LoadFile into
    InitDataBuffer();

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

sDescTreeNode* CGameClassPerUnitPerFile::InitDescTree()
{
    uint32_t nTotalPaletteCount = 0;

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", m_strGameFriendlyName.c_str());
    NewDescTree->ChildNodes = new sDescTreeNode[m_psCurrentGameLoadingData->srgLoadingData.size()];
    NewDescTree->uChildAmt = m_psCurrentGameLoadingData->srgLoadingData.size();
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    OutputDebugString(L"CGameClassPerUnitPerFile_DIR::InitDescTree: Building desc tree...\n");

    //Go through each character
    for (uint32_t iUnitCtr = 0; iUnitCtr < m_psCurrentGameLoadingData->srgLoadingData.size(); iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", m_psCurrentGameLoadingData->srgLoadingData.at(iUnitCtr).strCharacter.c_str());

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if GCPUPF_A_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, m_psCurrentGameLoadingData->srgLoadingData.size(), UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        uint32_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (uint32_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            uint32_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GCPUPF_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (uint32_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", m_psCurrentGameLoadingData->srgLoadingData.at(iUnitCtr).rgpszPaletteList[nNodeIndex]);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if GCPUPF_A_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGameClassPerUnitPerFile_DIR::InitDescTree: Loaded %u palettes.\r\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

uint32_t CGameClassPerUnitPerFile::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).rgNodeData.size();
}

uint32_t CGameClassPerUnitPerFile::GetNodeCountForCollection(uint32_t nUnitId, uint32_t /*nCollectionId*/)
{
    return static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).rgpszPaletteList.size());
}

uint32_t CGameClassPerUnitPerFile::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).rgpszPaletteList.size() * m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).rgNodeData.size());
}

LPCWSTR CGameClassPerUnitPerFile::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).rgNodeData.at(nCollectionId).strNodeName.c_str();
}

void CGameClassPerUnitPerFile::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    // NOTE: we presume all palettes are 0x400 long for now
    const int cbPaletteSizeOnDisc = 0x400;

    uint32_t nAdjustedPalId = nPalId % static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).rgpszPaletteList.size());
    uint32_t nPaletteSet = nPalId / static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).rgpszPaletteList.size());

    m_pszCurrentPaletteName = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).rgpszPaletteList.at(nAdjustedPalId);
    m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).nInitialLocation + (cbPaletteSizeOnDisc * nAdjustedPalId) + (0x0 * nAdjustedPalId);
    m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

    if (nPaletteSet)
    {
        m_nCurrentPaletteROMLocation += m_psCurrentGameLoadingData->srgLoadingData.at(nUnitId).rgNodeData.at(nPaletteSet).nAdjustmentFromBaseNode;
    }

    WarnIfPaletteIsOversized(nUnitId, nPalId, m_nCurrentPaletteROMLocation, m_nCurrentPaletteSizeInColors, m_pszCurrentPaletteName);
}

BOOL CGameClassPerUnitPerFile::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
    uint32_t nImgUnitId = m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).nImageUnitIndex;
    uint32_t nTargetImgId = m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).nImagePreviewIndex;

    pButtonLabelSet = m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).rgpszPaletteList;

    // This logic presumes that we are only showing core character palettes.  If we decide to handle
    // anything else, we'd want to validate that the palette in question is in the core lists
    int nSrcStart = (int)(NodeGet->uPalId % m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).rgpszPaletteList.size());
    uint32_t nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
    uint32_t nNodeIncrement = static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(NodeGet->uUnitId).rgpszPaletteList.size());

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

LPCWSTR CGameClassPerUnitPerFile::GetGameName()
{
    if (m_pCRC32SpecificData)
    {
        return m_pCRC32SpecificData->szFriendlyName;
    }
    else
    {
        return m_strGameFriendlyName.c_str();
    }
}

BOOL CGameClassPerUnitPerFile::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGameClassPerUnitPerFile_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, m_psCurrentGameLoadingData->srgLoadingData.at(nUnitNumber).strCharacter.c_str());
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGameClassPerUnitPerFile_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", m_psCurrentGameLoadingData->srgLoadingData.at(nUnitNumber).nInitialLocation);
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

#if GCPUPF_A_DEBUG
        strInfo.Format(L"\tCGameClassPerUnitPerFile_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGameClassPerUnitPerFile::SaveFile(CFile* SaveFile, uint32_t nUnitId)
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
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}
