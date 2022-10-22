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
    nFileAmt = static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.size());
    nUnitAmt = m_nTotalInternalUnits = GetUniqueUnitCount();

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
    const uint32_t nUnitCt = GetUniqueUnitCount();

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", m_strGameFriendlyName.c_str());
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    OutputDebugString(L"CGameClassPerUnitPerFile::InitDescTree: Building desc tree...\n");

    //Go through each character
    for (uint32_t nUnitCtrByFile = 0; nUnitCtrByFile < nUnitCt; nUnitCtrByFile++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nUnitChildCount = GetCollectionCountForUnit(nUnitCtrByFile);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[nUnitCtrByFile];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", m_psCurrentGameLoadingData->srgLoadingData.at(nUnitCtrByFile).strCharacter.c_str());

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if GCPUPF_A_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, nUnitCtrByFile + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        uint32_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (uint32_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(nUnitCtrByFile, iCollectionCtr));
            //Collection children have nodes
            uint32_t nListedChildrenCount = GetNodeCountForCollection(nUnitCtrByFile, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GCPUPF_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            uint16_t nHandledChildren = 0;
            uint16_t nNodeIndexForCharacter = 0;
            uint32_t nUnitCtrByCharacter = nUnitCtrByFile;

            for (uint32_t nNodeIndexForUnit = 0; nNodeIndexForUnit < nListedChildrenCount; nNodeIndexForUnit++)
            {
                bool fShouldUseBasicPalettes = ShouldUseBasePaletteSetForFileUnit(nUnitCtrByFile, nHandledChildren);
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndexForUnit];

                uint32_t nFileUnitId = 0;
                uint32_t nFilePalId = 0;

                GetFileIndexFromCharacterIndex(nUnitCtrByCharacter, nNodeIndexForUnit, nFileUnitId, nFilePalId);

                if (fShouldUseBasicPalettes)
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GetBasicPaletteNameForPalette(nUnitCtrByFile, nNodeIndexForUnit));
                }
                else
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes.at(nFilePalId).szPaletteName);
                }

                ChildNode->uUnitId = nUnitCtrByFile;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

                nHandledChildren++;

                const uint32_t nTotalPalettesThisCharacter = static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nUnitCtrByCharacter).sNodeData.rgpszButtonLabels.size() + m_psCurrentGameLoadingData->srgLoadingData.at(nUnitCtrByCharacter).prgExtraPalettes.size());

                if ((nHandledChildren == nTotalPalettesThisCharacter) && !IsFileUnitForUniqueCharacter(nUnitCtrByCharacter))
                {
                    // Step forward to the next part of this collection
                    for (uint32_t nNextIndex = nUnitCtrByCharacter + 1; nNextIndex < m_psCurrentGameLoadingData->srgLoadingData.size(); nNextIndex++)
                    {
                        if (m_psCurrentGameLoadingData->srgLoadingData.at(nNextIndex).strCharacter == m_psCurrentGameLoadingData->srgLoadingData.at(nUnitCtrByCharacter).strCharacter)
                        {
                            nUnitCtrByCharacter = nNextIndex;
                            nHandledChildren = 0;
                            break;
                        }
                    }
                }

#if GCPUPF_A_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndexForUnit + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGameClassPerUnitPerFile::InitDescTree: Loaded %u palettes.\r\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

std::vector<LPCWSTR> CGameClassPerUnitPerFile::GetBasicPaletteLabelsForUnit(uint32_t nCharacterUnitId)
{
    const uint32_t nFileId = GetFileIndexFromCharacterCollection(nCharacterUnitId, 0);
    if (m_psCurrentGameLoadingData->ePaletteLayout != PaletteArrangementStyle::EachBasicNodeContainsAFullButtonLabelSet)
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sNodeData.rgpszNodeNames;
    }
    else
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sNodeData.rgpszButtonLabels;
    }
}

LPCWSTR CGameClassPerUnitPerFile::GetBasicPaletteNameForPalette(uint32_t nCharacterUnitId, uint32_t nPaletteId)
{
    const uint32_t nFileId = GetFileIndexFromCharacterCollection(nCharacterUnitId, 0);
    if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).prgBasicPalettes.size())
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).prgBasicPalettes.at(nPaletteId).pszPaletteName;
    }
    else
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sNodeData.rgpszButtonLabels.at(nPaletteId);
    }
}

size_t CGameClassPerUnitPerFile::GetBasicPaletteListSizeForUnit(uint32_t nCharacterUnitId)
{
    const uint32_t nFileId = GetFileIndexFromCharacterCollection(nCharacterUnitId, 0);
    if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).prgBasicPalettes.size())
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).prgBasicPalettes.size();
    }
    else
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sNodeData.rgpszButtonLabels.size();
    }
}

size_t CGameClassPerUnitPerFile::GetBasicPaletteCountForUnit(uint32_t nCharacterUnitId)
{
    const uint32_t nFileId = GetFileIndexFromCharacterCollection(nCharacterUnitId, 0);
    return m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sNodeData.rgpszNodeNames.size() * GetBasicPaletteListSizeForUnit(nCharacterUnitId);
}

bool CGameClassPerUnitPerFile::ShouldUseBasePaletteSetForFileUnit(uint32_t nFileUnitId, uint32_t nPaletteId)
{
    const uint32_t nCharacterId = GetCharacterIndexFromFileIndex(nFileUnitId);

    return (nPaletteId < GetBasicPaletteCountForUnit(nCharacterId));
}

bool CGameClassPerUnitPerFile::ShouldUseBasePaletteSet(uint32_t nCharacterUnitId, uint32_t nPaletteId)
{
    return (nPaletteId < GetBasicPaletteCountForUnit(nCharacterUnitId));
}

uint32_t CGameClassPerUnitPerFile::GetNodeCountForCollection(uint32_t nCharacterUnitId, uint32_t nNodeId)
{
    uint32_t nRelativeNodeId = nNodeId;

    uint32_t nFileUnitId = GetFileIndexFromCharacterCollection(nCharacterUnitId, nNodeId);

    for (uint32_t nFileIndex = 0; nFileIndex < m_psCurrentGameLoadingData->srgLoadingData.size(); nFileIndex++)
    {
        if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter == m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).strCharacter)
        {
            if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sNodeData.rgpszNodeNames.size() > nRelativeNodeId)
            {
                return static_cast<uint32_t>(GetBasicPaletteListSizeForUnit(nCharacterUnitId));
            }
            else
            {
                nRelativeNodeId -= m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sNodeData.rgpszNodeNames.size();
            }

            if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).prgExtraPalettes.size())
            {
                if (nRelativeNodeId == 0)
                {
                    return static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).prgExtraPalettes.size());
                }
                else
                {
                    nRelativeNodeId--;
                }
            }
        }
    }

    return 0;
}

uint32_t CGameClassPerUnitPerFile::GetPaletteCountForFileUnit(uint32_t nFileUnitId)
{
    size_t nTotalPaletteCount = 0;
    const uint32_t nCharacterId = GetCharacterIndexFromFileIndex(nFileUnitId);

    nTotalPaletteCount += m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sNodeData.rgpszNodeNames.size() * GetBasicPaletteListSizeForUnit(nCharacterId);
    nTotalPaletteCount += m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes.size();

    return static_cast<uint32_t>(nTotalPaletteCount);
}

uint32_t CGameClassPerUnitPerFile::GetPaletteCountForUnit(uint32_t nCharacterUnitId)
{
    size_t nTotalPaletteCount = 0;

    const uint32_t nFileUnitId = GetFileIndexFromCharacterCollection(nCharacterUnitId, 0);

    for (uint32_t nFileIndex = 0; nFileIndex < m_psCurrentGameLoadingData->srgLoadingData.size(); nFileIndex++)
    {
        if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter == m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).strCharacter)
        {
            nTotalPaletteCount += m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sNodeData.rgpszNodeNames.size() * GetBasicPaletteListSizeForUnit(nCharacterUnitId);
            nTotalPaletteCount += m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).prgExtraPalettes.size();
        }
    }

    return static_cast<uint32_t>(nTotalPaletteCount);
}

uint32_t CGameClassPerUnitPerFile::GetCollectionCountForUnit(uint32_t nCharacterUnitId)
{
    uint32_t nCollectionCount = 0;

    const uint32_t nFileUnitId = GetFileIndexFromCharacterCollection(nCharacterUnitId, 0);

    for (uint32_t iUnitIndex = 0; iUnitIndex < m_psCurrentGameLoadingData->srgLoadingData.size(); iUnitIndex++)
    {
        if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter == m_psCurrentGameLoadingData->srgLoadingData.at(iUnitIndex).strCharacter)
        {
            if (m_psCurrentGameLoadingData->srgLoadingData.at(iUnitIndex).sNodeData.rgpszButtonLabels.size() ||
                m_psCurrentGameLoadingData->srgLoadingData.at(iUnitIndex).prgBasicPalettes.size())
            {
                nCollectionCount += m_psCurrentGameLoadingData->srgLoadingData.at(iUnitIndex).sNodeData.rgpszNodeNames.size();
            }

            if (m_psCurrentGameLoadingData->srgLoadingData.at(iUnitIndex).prgExtraPalettes.size())
            {
                nCollectionCount++;
            }
        }
    }

    return nCollectionCount;
}

LPCWSTR CGameClassPerUnitPerFile::GetDescriptionForCollection(uint32_t nCharacterUnitId, uint32_t nNodeId)
{
    uint32_t nRelativeNodeId = nNodeId;

    const uint32_t nFileUnitId = GetFileIndexFromCharacterCollection(nCharacterUnitId, nNodeId);

    for (uint32_t nIndex = 0; nIndex < m_psCurrentGameLoadingData->srgLoadingData.size(); nIndex++)
    {
        if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter == m_psCurrentGameLoadingData->srgLoadingData.at(nIndex).strCharacter)
        {
            if (m_psCurrentGameLoadingData->srgLoadingData.at(nIndex).sNodeData.rgpszNodeNames.size() > nRelativeNodeId)
            {
                return m_psCurrentGameLoadingData->srgLoadingData.at(nIndex).sNodeData.rgpszNodeNames.at(nRelativeNodeId);
            }
            else
            {
                nRelativeNodeId -= m_psCurrentGameLoadingData->srgLoadingData.at(nIndex).sNodeData.rgpszNodeNames.size();
            }

            if (m_psCurrentGameLoadingData->srgLoadingData.at(nIndex).prgExtraPalettes.size())
            {
                if (nRelativeNodeId == 0)
                {
                    if (nNodeId == 0)
                    {
                        return L"Palettes";
                    }
                    else
                    {
                        return L"Extras";
                    }
                }
                else
                {
                    nRelativeNodeId--;
                }
            }
        }
    }

    return L"ERROR";
}

bool CGameClassPerUnitPerFile::PaletteIsInFileUnit(uint32_t nTargetFileUnitId, uint32_t nDisplayUnitId, uint32_t nDisplayPalId)
{
    uint32_t nActualFileUnitId = 0;
    uint32_t nFilePalId = 0;

    GetFileIndexFromCharacterIndex(nDisplayUnitId, nDisplayPalId, nActualFileUnitId, nFilePalId);

    return (nTargetFileUnitId == nActualFileUnitId);
}

bool CGameClassPerUnitPerFile::IsFileUnitForUniqueCharacter(uint32_t nFileUnitId)
{
    uint32_t nCountMatches = 0;

    for (auto& fileData : m_psCurrentGameLoadingData->srgLoadingData)
    {
        if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter == fileData.strCharacter)
        {
            nCountMatches++;
        }
    }

    return (nCountMatches == 1);
}

bool CGameClassPerUnitPerFile::IsFileUnitFirstCharacterUnit(uint32_t nFileUnitId)
{
    bool fIsFirst = true;

    for (uint32_t nFileIndex = 0; nFileIndex < nFileUnitId; nFileIndex++)
    {
        if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter == m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).strCharacter)
        {
            fIsFirst = false;
            break;
        }
    }

    return fIsFirst;
}

uint32_t CGameClassPerUnitPerFile::GetUniqueUnitCount()
{
    uint32_t nUniqueCount = 0;

    for (uint32_t nIndex = 0; nIndex < m_psCurrentGameLoadingData->srgLoadingData.size(); nIndex++)
    {
        bool fIsUnique = true;

        for (uint32_t nCheckIndex = 0; nCheckIndex < nIndex; nCheckIndex++)
        {
            if (m_psCurrentGameLoadingData->srgLoadingData.at(nIndex).strCharacter == m_psCurrentGameLoadingData->srgLoadingData.at(nCheckIndex).strCharacter)
            {
                fIsUnique = false;
                break;
            }
        }

        if (fIsUnique)
        {
            nUniqueCount++;
        }
    }

    return nUniqueCount;
}

uint32_t CGameClassPerUnitPerFile::GetCharacterIndexFromFileIndex(uint32_t nFileUnitId)
{
    uint32_t nCharacterUnitId = 0;
    std::map<std::wstring, uint32_t> rgCharacterLayout;

    for (uint32_t nFileIndex = 0; (nFileIndex < m_psCurrentGameLoadingData->srgLoadingData.size()) && (nFileIndex <= nFileUnitId); nFileIndex++)
    {
        if (IsFileUnitFirstCharacterUnit(nFileIndex))
        {
            rgCharacterLayout.emplace(m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).strCharacter, nCharacterUnitId++);
        }
    }

    auto charData = rgCharacterLayout.find(m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter);
    return (charData != rgCharacterLayout.end()) ? charData->second : 0;
}

void CGameClassPerUnitPerFile::GetFileIndexFromCharacterIndex(uint32_t nCharacterUnitId, uint32_t nCharacterPalId, uint32_t& nFileUnitId, uint32_t& nFilePalId)
{
    nFileUnitId = 0;
    nFilePalId = nCharacterPalId;

    uint32_t nCurrentCharacterUnit = 0;
    std::wstring strCharacterName;

    for (; nFileUnitId < m_psCurrentGameLoadingData->srgLoadingData.size(); nFileUnitId++)
    {
        // The easiest way to decipher this is just to build up the file list to the character list, and simply stop along the way
        if (nCurrentCharacterUnit == nCharacterUnitId)
        {
            strCharacterName = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter;
        }

        if (strCharacterName == m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter)
        {
            uint32_t nPaletteCount = GetPaletteCountForFileUnit(nFileUnitId);

            if (nPaletteCount > nFilePalId)
            {
                break;
            }
            else
            {
                nFilePalId -= nPaletteCount;
            }
        }

        if (IsFileUnitFirstCharacterUnit(nFileUnitId))
        {
            nCurrentCharacterUnit++;
        }
    }

    return;
}

uint32_t CGameClassPerUnitPerFile::GetFileIndexFromCharacterCollection(uint32_t nCharacterUnitId, uint32_t nCollectionId)
{
    uint32_t nRelativeCollectionId = nCollectionId;
    uint32_t nCurrentCharacterUnit = 0;
    std::wstring strCharacterName;
    uint32_t nFileIndex = 0;

    for (; nFileIndex < m_psCurrentGameLoadingData->srgLoadingData.size(); nFileIndex++)
    {
        // The easiest way to decipher this is just to build up the file list to the character list, and simply stop along the way
        if (nCurrentCharacterUnit == nCharacterUnitId)
        {
            strCharacterName = m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).strCharacter;
        }
        
        if (strCharacterName == m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).strCharacter)
        {
            if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sNodeData.rgpszNodeNames.size() > nRelativeCollectionId)
            {
                break;
            }
            else
            {
                nRelativeCollectionId -= m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sNodeData.rgpszNodeNames.size();
            }

            if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).prgExtraPalettes.size())
            {
                if (nRelativeCollectionId == 0)
                {
                    break;
                }
                else
                {
                    nRelativeCollectionId--;
                }
            }
        }

        if (IsFileUnitFirstCharacterUnit(nFileIndex))
        {
            nCurrentCharacterUnit++;
        }
    }

    return nFileIndex;
}

void CGameClassPerUnitPerFile::LoadSpecificPaletteDataByFileUnit(uint32_t nFileUnitId, uint32_t nFilePalId)
{
    // NOTE: we presume all palettes are 0x400 long for now
    const int cbPaletteSizeOnDisc = 0x400;
    // Sort option styles:
    //  Left, Right
    //     1, 2, 3, 4, 5, 6, 7, 8, 9
    //  Pal1, Pal2, Pal3, Pal4, Pal5
    //     Main, ex1, ex2, ex3

    const uint32_t nCharacterId = GetCharacterIndexFromFileIndex(nFileUnitId);
    const uint32_t nBasicPaletteSizeForUnit = GetBasicPaletteListSizeForUnit(nCharacterId);

    if (m_psCurrentGameLoadingData->ePaletteLayout == PaletteArrangementStyle::EachBasicNodeContainsAFullButtonLabelSet)
    {
        if (ShouldUseBasePaletteSetForFileUnit(nFileUnitId, nFilePalId))
        {
            const uint32_t nRelativePalId = nFilePalId % nBasicPaletteSizeForUnit;
            const uint32_t nPaletteSet =    nFilePalId / nBasicPaletteSizeForUnit;

            m_pszCurrentPaletteName = GetBasicPaletteNameForPalette(nCharacterId, nRelativePalId);
            m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).nInitialLocation + (cbPaletteSizeOnDisc * nRelativePalId);
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

            if (nPaletteSet)
            {
                // Walk forward one palette offset per set/node
                m_nCurrentPaletteROMLocation += (nPaletteSet * m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sNodeData.nAdditionalBufferBetweenEachNode);
            }

            // Use the optional per-palette increment reflecting a buffer between palettes
            if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.size())
            {
                m_nCurrentPaletteROMLocation += m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.at(nRelativePalId).nPaletteShiftFromBase;
            }
        }
        else // extra palettes
        {
            const size_t nAdjustedPaletteId = nFilePalId - GetBasicPaletteCountForUnit(nCharacterId);

            const int cbPaletteSizeOnDisc = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes.at(nAdjustedPaletteId).nPaletteOffsetEnd - m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

            m_pszCurrentPaletteName = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes.at(nAdjustedPaletteId).szPaletteName;
            m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes.at(nAdjustedPaletteId).nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        }
    }
    else // PaletteArrangementStyle::OneButtonLabelEntryPerEachNode
    {
        if (ShouldUseBasePaletteSetForFileUnit(nFileUnitId, nFilePalId))
        {
            const uint32_t nRelativePalId = nFilePalId % nBasicPaletteSizeForUnit;
            const uint32_t nCollectionId = static_cast<uint32_t>(floor(static_cast<double>(nFilePalId) / static_cast<double>(nBasicPaletteSizeForUnit)));

            m_pszCurrentPaletteName = GetBasicPaletteNameForPalette(nCharacterId, nRelativePalId);

            m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).nInitialLocation;
            m_nCurrentPaletteROMLocation += nCollectionId * m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sNodeData.nAdditionalBufferBetweenEachNode;
            // Use the optional per-palette increment reflecting a buffer between palettes
            if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.size())
            {
                m_nCurrentPaletteROMLocation += m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.at(nRelativePalId).nPaletteShiftFromBase;
            }
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        }
        else // effects palettes
        {
            const size_t nAdjustedPaletteId = nFilePalId - GetBasicPaletteCountForUnit(nCharacterId);

            const int cbPaletteSizeOnDisc = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes.at(nAdjustedPaletteId).nPaletteOffsetEnd - m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

            m_pszCurrentPaletteName = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes.at(nAdjustedPaletteId).szPaletteName;
            m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes.at(nAdjustedPaletteId).nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        }
    }

    WarnIfPaletteIsOversized(nFileUnitId, nFilePalId, m_nCurrentPaletteROMLocation, m_nCurrentPaletteSizeInColors, m_pszCurrentPaletteName);
}

void CGameClassPerUnitPerFile::LoadSpecificPaletteData(uint32_t nDisplayUnitId, uint32_t nDisplayPalId)
{
    uint32_t nFileUnitId = 0;
    uint32_t nFilePalId = 0;

    GetFileIndexFromCharacterIndex(nDisplayUnitId, nDisplayPalId, nFileUnitId, nFilePalId);

    LoadSpecificPaletteDataByFileUnit(nFileUnitId, nFilePalId);
}

BOOL CGameClassPerUnitPerFile::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* CharacterNode = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (!CharacterNode)
    {
        return FALSE;
    }

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    //Change the image id if we need to
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;
    uint32_t nTargetImgId = 0;
    uint32_t nSrcStart = 0;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    bool fShouldUseAlternateLoadLogic = false;

    uint32_t nFileUnitId = 0;
    uint32_t nFilePalId = 0;

    GetFileIndexFromCharacterIndex(CharacterNode->uUnitId, CharacterNode->uPalId, nFileUnitId, nFilePalId);

    if (ShouldUseBasePaletteSetForFileUnit(nFileUnitId, nFilePalId))
    {
        pButtonLabelSet = GetBasicPaletteLabelsForUnit(CharacterNode->uUnitId);

        if (m_psCurrentGameLoadingData->ePaletteLayout == PaletteArrangementStyle::EachBasicNodeContainsAFullButtonLabelSet)
        {
            // The following logic locks us in as having each node contain one full palette set.  Any additional nodes
            // will also contain a full palette set.  If the palette set is instead spread one palette per node, this logic
            // will need to be updated.
            const int nPaletteSetOfInterest = static_cast<int>(floor(static_cast<double>(nFilePalId) / static_cast<double>(GetBasicPaletteListSizeForUnit(CharacterNode->uUnitId))));
            nSrcStart = CharacterNode->uPalId - nFilePalId;
            nImgUnitId = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).nImageUnitIndex;
            nTargetImgId = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).nImagePreviewIndex;

            nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());

            nNodeIncrement = 1;
        }
        else
        {
            // For basic nodes, use the built-in data
            nSrcStart = CharacterNode->uPalId % GetBasicPaletteListSizeForUnit(CharacterNode->uUnitId);
            nSrcAmt = static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sNodeData.rgpszNodeNames.size());
            nNodeIncrement = static_cast<uint32_t>(GetBasicPaletteListSizeForUnit(CharacterNode->uUnitId));

            // Use the specific (relative) palette data's specification of the preview to use if provided, otherwise
            // fall back to the basic palette info's specification
            if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.size() &&
                (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.at(nSrcStart).indexImageUnit != INVALID_UNIT_VALUE))
            {
                nImgUnitId = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.at(nSrcStart).indexImageUnit;
                nTargetImgId = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.at(nSrcStart).indexImageSprite;
            }
            else
            {
                nImgUnitId = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).nImageUnitIndex;
                nTargetImgId = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).nImagePreviewIndex;
            }
        }
    }
    else
    {
        // For extras, use the built-in data
        const size_t nCountBasicPalettes = GetBasicPaletteCountForUnit(CharacterNode->uUnitId);
        const uint32_t nPalIdInFileNode = nFilePalId - static_cast<uint32_t>(nCountBasicPalettes);
        nSrcStart = CharacterNode->uPalId;
        nSrcAmt = 1;
        pButtonLabelSet = DEF_NOBUTTONS;
        const sGame_PaletteDataset* paletteDataSet = &m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes.at(nPalIdInFileNode);
        nImgUnitId = paletteDataSet->indexImgToUse;
        nTargetImgId = paletteDataSet->indexOffsetToUse;

        if (paletteDataSet->pPalettePairingInfo)
        {
            if ((paletteDataSet->pPalettePairingInfo->nPalettesToJoin > 1) &&
                (paletteDataSet->pPalettePairingInfo->nPalettesToJoin <= MAXIMUM_PALETTE_PAIRS_ALLOWED))
            {
                std::vector<const sGame_PaletteDataset*> vsPaletteDataSetToJoin;
                std::vector<int8_t> vnPeerPaletteDistances;
                bool fAllNodesFound = true;

                for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                {
                    switch (nPairIndex)
                    {
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
                    default:
                        // Anything past this just gets default pairing
                        vnPeerPaletteDistances.push_back(nPairIndex);
                        break;
                    }

                    const sGame_PaletteDataset* paletteDataSetToJoin = &m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgExtraPalettes.at(nPalIdInFileNode + vnPeerPaletteDistances.at(nPairIndex));

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
                    sDescNode* sSearchedNode = GetMainTree()->GetDescNode(Node01, Node02, nPalIdInFileNode + vnPeerPaletteDistances.at(nNodeIndex), -1);

                    if (sSearchedNode)
                    {
                        vsJoinedNodes.push_back(sSearchedNode);
                    }
                    else
                    {
                        fAllNodesFound = false;
                        break;
                    }
                }

                if (fAllNodesFound)
                {
                    fShouldUseAlternateLoadLogic = true;

                    std::vector<sImgTicket*> vsImagePairs;
                    sImgTicket* pPreviousImage = nullptr;

                    for (int32_t nNodeIndex = (paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1); nNodeIndex >= 0; nNodeIndex--)
                    {
                        sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin.at(nNodeIndex)->indexImgToUse, vsPaletteDataSetToJoin.at(nNodeIndex)->indexOffsetToUse, pPreviousImage);

                        vsImagePairs.push_back(pThisImage);

                        pPreviousImage = pThisImage;
                    }

                    ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                    for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                    {
                        //Set each palette
                        CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                        SetSourcePal(nPairIndex, nFileUnitId, nSrcStart + vnPeerPaletteDistances.at(nPairIndex), nSrcAmt, nNodeIncrement);
                    }
                }
                else
                {
                    OutputDebugString(L"ERROR: Invalid palette pairing requested.   You probably want to check the linkage here.\n");
                }
            }
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(CharacterNode, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, CharacterNode->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
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

BOOL CGameClassPerUnitPerFile::LoadFile(CFile* LoadedFile, uint32_t nFileUnitId)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGameClassPerUnitPerFile::LoadFile: Preparing to load data for file unit number %u (character %s)\n", nFileUnitId, m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter.c_str());
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGameClassPerUnitPerFile::LoadFile: Loaded palettes starting at location 0x%x\n", m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).nInitialLocation);
    OutputDebugString(strInfo);

    const uint32_t nCharacterUnitId = GetCharacterIndexFromFileIndex(nFileUnitId);
    const uint32_t nPalAmt = GetPaletteCountForUnit(nCharacterUnitId);

    if (GameIsUsing16BitColor())
    {
        if (m_pppDataBuffer[nCharacterUnitId] == nullptr)
        {
            m_pppDataBuffer[nCharacterUnitId] = new uint16_t * [nPalAmt];
            memset(m_pppDataBuffer[nCharacterUnitId], 0, sizeof(uint16_t*) * nPalAmt);
        }
    }
    else if (GameIsUsing32BitColor())
    {
        if (m_pppDataBuffer32[nCharacterUnitId] == nullptr)
        {
            m_pppDataBuffer32[nCharacterUnitId] = new uint32_t * [nPalAmt];
            memset(m_pppDataBuffer32[nCharacterUnitId], 0, sizeof(uint32_t*) * nPalAmt);
        }
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nCharacterUnitId] = nCharacterUnitId;

    for (uint32_t nCharacterPalCtr = 0; nCharacterPalCtr < nPalAmt; nCharacterPalCtr++)
    {
        uint32_t nCurrentFileUnitId = 0;
        uint32_t nCurrentFilePalId = 0;

        GetFileIndexFromCharacterIndex(nCharacterUnitId, nCharacterPalCtr, nCurrentFileUnitId, nCurrentFilePalId);

        if (nFileUnitId == nCurrentFileUnitId)
        {
            LoadSpecificPaletteDataByFileUnit(nFileUnitId, nCurrentFilePalId);

            LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            if (GameIsUsing16BitColor())
            {
                m_pppDataBuffer[nCharacterUnitId][nCharacterPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];
                LoadedFile->Read(m_pppDataBuffer[nCharacterUnitId][nCharacterPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
            else if (GameIsUsing32BitColor())
            {
                m_pppDataBuffer32[nCharacterUnitId][nCharacterPalCtr] = new uint32_t[m_nCurrentPaletteSizeInColors];
                LoadedFile->Read(m_pppDataBuffer32[nCharacterUnitId][nCharacterPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }

#if GCPUPF_A_DEBUG
            strInfo.Format(L"\tCGameClassPerUnitPerFile::LoadFile:: Loaded palette '%s' for file unit 0x%x palette 0x%x from location 0x%x to display unit 0x%x display palette 0x%x\n",
                m_pszCurrentPaletteName, nFileUnitId, nCurrentFilePalId, m_nCurrentPaletteROMLocation, nCharacterUnitId, nCharacterPalCtr);
            OutputDebugString(strInfo);
#endif
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGameClassPerUnitPerFile::SaveFile(CFile* SaveFile, uint32_t nFileUnitId)
{
    uint32_t nTotalPalettesSaved = 0;

    const uint32_t nCharacterUnitId = GetCharacterIndexFromFileIndex(nFileUnitId);
    const uint32_t nPalAmt = GetPaletteCountForUnit(nCharacterUnitId);

    for (uint32_t nCharacterPalCtr = 0; nCharacterPalCtr < nPalAmt; nCharacterPalCtr++)
    {
        if (IsPaletteDirty(nCharacterUnitId, nCharacterPalCtr))
        {
            uint32_t nCurrentFileUnitId = 0;
            uint32_t nCurrentFilePalId = 0;

            GetFileIndexFromCharacterIndex(nCharacterUnitId, nCharacterPalCtr, nCurrentFileUnitId, nCurrentFilePalId);

            if (nFileUnitId == nCurrentFileUnitId)
            {
                LoadSpecificPaletteDataByFileUnit(nFileUnitId, nCurrentFilePalId);

                SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                if (GameIsUsing16BitColor())
                {
                    SaveFile->Write(m_pppDataBuffer[nCharacterUnitId][nCharacterPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }
                else if (GameIsUsing32BitColor())
                {
                    SaveFile->Write(m_pppDataBuffer32[nCharacterUnitId][nCharacterPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }

                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nFileUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}
