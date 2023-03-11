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

    //Create the redirect buffer: must be for the larger file-based size as CGameLoad::LoadDir needs that size
    m_rgUnitRedir.resize(nUnitAmt, 0);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

sDescTreeNode* CGameClassPerUnitPerFile::InitDescTree()
{
    // Generating the tree for this type of game requires a little finessing.  Specifically, a character unit is allowed to be
    // comprised of multiple file units.  We build the tree by walking through characters.  When we find a character unit composed
    // of multiple file units, we process all of those during the same character pass.

    uint32_t nTotalPaletteCountForGame = 0;
    const uint32_t nTotalCharacters = GetUniqueUnitCount();
    const uint32_t nTotalFiles = static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.size());
    uint32_t nCurrentCharacterIndex = 0;

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", m_strGameFriendlyName.c_str());
    NewDescTree->ChildNodes = new sDescTreeNode[nTotalCharacters];
    NewDescTree->uChildAmt = nTotalCharacters;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGameClassPerUnitPerFile::InitDescTree: Building desc tree for '%s'...\n", m_strGameFriendlyName.c_str());
    OutputDebugString(strMsg.GetString());

    //Go through each the list of files to build up the character units
    for (uint32_t nUnitCtrByFile = 0; nUnitCtrByFile < nTotalFiles; nUnitCtrByFile++)
    {
        if (!IsFileUnitFirstCharacterUnit(nUnitCtrByFile))
        {
            continue;
        }

        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nTotalCollectionsForCharacterUnit = GetCollectionCountForUnit(nCurrentCharacterIndex);
        uint32_t nTotalPalettesUsedInCharacterUnit = 0;

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[nCurrentCharacterIndex];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", m_psCurrentGameLoadingData->srgLoadingData.at(nUnitCtrByFile).strCharacter.c_str());

        UnitNode->ChildNodes = new sDescTreeNode[nTotalCollectionsForCharacterUnit];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nTotalCollectionsForCharacterUnit;

#if GCPUPF_A_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u character units, %u total child collections\n", UnitNode->szDesc, nCurrentCharacterIndex + 1, nTotalCharacters, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        uint16_t nPalettesAddedToCollection = 0;
        uint32_t nCurrentFileUnitForCollection = nUnitCtrByFile;

        //Set data for each child group ("collection")
        for (uint32_t iCollectionCtr = 0; iCollectionCtr < nTotalCollectionsForCharacterUnit; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(nCurrentCharacterIndex, iCollectionCtr));
            //Collection children have nodes
            const uint32_t nTotalPalettesForCollection = GetNodeCountForCollection(nCurrentCharacterIndex, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nTotalPalettesForCollection;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nTotalPalettesForCollection];

            uint32_t nTotalPalettesThisFile = static_cast<uint32_t>(GetBasicPaletteCountForUnit(nCurrentCharacterIndex));
            nTotalPalettesThisFile += static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nCurrentFileUnitForCollection).sExtrasNodeData.prgExtraPalettes.size());

#if GCPUPF_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u palettes in this collection\n", CollectionNode->szDesc, iCollectionCtr + 1, nTotalCollectionsForCharacterUnit, nTotalPalettesForCollection);
            OutputDebugString(strMsg);
#endif

            for (uint32_t nPaletteIndexForCollection = 0; nPaletteIndexForCollection < nTotalPalettesForCollection; nPaletteIndexForCollection++)
            {
                const bool fShouldUseBasicPalettes = ShouldUseBasePaletteSetForFileUnit(nCurrentFileUnitForCollection, nPalettesAddedToCollection);
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nPaletteIndexForCollection];

#if GCPUPF_A_DEBUG
                strMsg.Format(L"\t\tCreating entry for %u of %u palettes. CharacterUnit %u Collection %u PaletteIndexForCollection %u , FileUnit %u PalettesAddedToCollection %u \n", nPaletteIndexForCollection + 1, nTotalPalettesForCollection, nCurrentCharacterIndex, iCollectionCtr, nPaletteIndexForCollection, nUnitCtrByFile, nPalettesAddedToCollection);
                OutputDebugString(strMsg);
#endif

                if (fShouldUseBasicPalettes)
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GetBasicPaletteNameForPalette(nCurrentCharacterIndex, nPaletteIndexForCollection));
                }
                else
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", m_psCurrentGameLoadingData->srgLoadingData.at(nCurrentFileUnitForCollection).sExtrasNodeData.prgExtraPalettes.at(nPaletteIndexForCollection).szPaletteName);
                }

                ChildNode->uUnitId = nCurrentCharacterIndex;
                ChildNode->uPalId = nTotalPalettesUsedInCharacterUnit++;
                nTotalPaletteCountForGame++;

                nPalettesAddedToCollection++;

#if GCPUPF_A_DEBUG
                strMsg.Format(L"\t\t\tPalette: '%s', %u of %u palettes for collection, %u of a total %u palettes for character.\n", ChildNode->szDesc, nPaletteIndexForCollection + 1, nTotalPalettesForCollection, nPalettesAddedToCollection, nTotalPalettesThisFile);
                OutputDebugString(strMsg);
#endif

                if (nPalettesAddedToCollection == nTotalPalettesThisFile)
                {
                    if (!IsFileUnitForUniqueCharacter(nCurrentFileUnitForCollection))
                    {
                        bool fIsLastCollectionForUnit = true;

                        // Step forward to the next part of this collection
                        for (uint32_t nNextIndex = nCurrentFileUnitForCollection + 1; nNextIndex < m_psCurrentGameLoadingData->srgLoadingData.size(); nNextIndex++)
                        {
                            if (m_psCurrentGameLoadingData->srgLoadingData.at(nNextIndex).strCharacter == m_psCurrentGameLoadingData->srgLoadingData.at(nUnitCtrByFile).strCharacter)
                            {
#if GCPUPF_A_DEBUG
                                strMsg.Format(L"\tNext section of this character is at file unit %u : leaving file unit %u.\n", nNextIndex + 1, nCurrentFileUnitForCollection + 1);
                                OutputDebugString(strMsg);
#endif

                                nCurrentFileUnitForCollection = nNextIndex;
                                nPalettesAddedToCollection = 0;
                                fIsLastCollectionForUnit = false;
                                break;
                            }
                        }

                        if (fIsLastCollectionForUnit)
                        {
                            // No further matches: move to next character unit
                            nCurrentCharacterIndex++;
                        }
                    }
                    else
                    {
                        nCurrentCharacterIndex++;
                    }
                }
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCountForGame;

    strMsg.Format(L"CGameClassPerUnitPerFile::InitDescTree: Loaded %u palettes for %u characters in %u files.\r\n", nTotalPaletteCountForGame, nTotalCharacters, nTotalFiles);
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
    else if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sNodeData.rgpszButtonLabels.size())
    {
        return m_psCurrentGameLoadingData->srgLoadingData.at(nFileId).sNodeData.rgpszButtonLabels;
    }
    else
    {
        return DEF_NOBUTTONS;
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
    return nPaletteId < (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sNodeData.rgpszNodeNames.size() * GetBasicPaletteListSizeForUnit(nCharacterId));
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
                nRelativeNodeId -= static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sNodeData.rgpszNodeNames.size());
            }

            if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sExtrasNodeData.prgExtraPalettes.size())
            {
                if (nRelativeNodeId == 0)
                {
                    return static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sExtrasNodeData.prgExtraPalettes.size());
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
    const uint32_t nCharacterId = GetCharacterIndexFromFileIndex(nFileUnitId);
    size_t nTotalPaletteCount = 0;

    nTotalPaletteCount += m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sNodeData.rgpszNodeNames.size() * GetBasicPaletteListSizeForUnit(nCharacterId);
    nTotalPaletteCount += m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes.size();

    return static_cast<uint32_t>(nTotalPaletteCount);
}

uint32_t CGameClassPerUnitPerFile::GetPaletteCountForUnit(uint32_t nCharacterUnitId)
{
    const uint32_t nFileUnitId = GetFileIndexFromCharacterCollection(nCharacterUnitId, 0);
    size_t nTotalPaletteCount = 0;

    for (uint32_t nFileIndex = 0; nFileIndex < m_psCurrentGameLoadingData->srgLoadingData.size(); nFileIndex++)
    {
        if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter == m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).strCharacter)
        {
            nTotalPaletteCount += m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sNodeData.rgpszNodeNames.size() * GetBasicPaletteListSizeForUnit(nCharacterUnitId);
            nTotalPaletteCount += m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sExtrasNodeData.prgExtraPalettes.size();
        }
    }

    return static_cast<uint32_t>(nTotalPaletteCount);
}

uint32_t CGameClassPerUnitPerFile::GetCollectionCountForUnit(uint32_t nCharacterUnitId)
{
    const uint32_t nFileUnitId = GetFileIndexFromCharacterCollection(nCharacterUnitId, 0);
    uint32_t nCollectionCount = 0;

    for (uint32_t iUnitIndex = 0; iUnitIndex < m_psCurrentGameLoadingData->srgLoadingData.size(); iUnitIndex++)
    {
        if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).strCharacter == m_psCurrentGameLoadingData->srgLoadingData.at(iUnitIndex).strCharacter)
        {
            if (m_psCurrentGameLoadingData->srgLoadingData.at(iUnitIndex).sNodeData.rgpszButtonLabels.size() ||
                m_psCurrentGameLoadingData->srgLoadingData.at(iUnitIndex).prgBasicPalettes.size())
            {
                nCollectionCount += static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(iUnitIndex).sNodeData.rgpszNodeNames.size());
            }

            if (m_psCurrentGameLoadingData->srgLoadingData.at(iUnitIndex).sExtrasNodeData.prgExtraPalettes.size())
            {
                nCollectionCount++;
            }
        }
    }

    return nCollectionCount;
}

LPCWSTR CGameClassPerUnitPerFile::GetDescriptionForCollection(uint32_t nCharacterUnitId, uint32_t nNodeId)
{
    const uint32_t nFileUnitId = GetFileIndexFromCharacterCollection(nCharacterUnitId, nNodeId);
    uint32_t nRelativeNodeId = nNodeId;

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
                nRelativeNodeId -= static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nIndex).sNodeData.rgpszNodeNames.size());
            }

            if (m_psCurrentGameLoadingData->srgLoadingData.at(nIndex).sExtrasNodeData.prgExtraPalettes.size())
            {
                if (nRelativeNodeId == 0)
                {
                    return m_psCurrentGameLoadingData->srgLoadingData.at(nIndex).sExtrasNodeData.strExtraCollectionName.c_str();
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
        const bool fIsFirstInstanceOfCharacter = IsFileUnitFirstCharacterUnit(nFileUnitId);
        if (fIsFirstInstanceOfCharacter && (nCurrentCharacterUnit == nCharacterUnitId))
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

        if (fIsFirstInstanceOfCharacter)
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
        const bool fIsFirstInstanceOfCharacter = IsFileUnitFirstCharacterUnit(nFileIndex);
        if (fIsFirstInstanceOfCharacter && (nCurrentCharacterUnit == nCharacterUnitId))
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
                nRelativeCollectionId -= static_cast<uint32_t>(m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sNodeData.rgpszNodeNames.size());
            }

            if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileIndex).sExtrasNodeData.prgExtraPalettes.size())
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

        if (fIsFirstInstanceOfCharacter)
        {
            nCurrentCharacterUnit++;
        }
    }

    return nFileIndex;
}

void CGameClassPerUnitPerFile::LoadSpecificPaletteDataByFileUnit(uint32_t nFileUnitId, uint32_t nFilePalId)
{
    // Sort option styles:
    //  Left, Right
    //     1, 2, 3, 4, 5, 6, 7, 8, 9
    //  Pal1, Pal2, Pal3, Pal4, Pal5
    //     Main, ex1, ex2, ex3

    const uint32_t nCharacterId = GetCharacterIndexFromFileIndex(nFileUnitId);

    if (m_psCurrentGameLoadingData->ePaletteLayout == PaletteArrangementStyle::EachBasicNodeContainsAFullButtonLabelSet)
    {
        if (ShouldUseBasePaletteSetForFileUnit(nFileUnitId, nFilePalId))
        {
            const uint32_t nBasicPaletteSizeForUnit = static_cast<uint32_t>(GetBasicPaletteListSizeForUnit(nCharacterId));
            const uint32_t nRelativePalId = nFilePalId % nBasicPaletteSizeForUnit;
            const uint32_t nPaletteSet =    nFilePalId / nBasicPaletteSizeForUnit;

            m_pszCurrentPaletteName = GetBasicPaletteNameForPalette(nCharacterId, nRelativePalId);
            m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).nInitialLocation + (m_psCurrentGameLoadingData->cbDefaultPaletteSize * nRelativePalId);
            m_nCurrentPaletteSizeInColors = m_psCurrentGameLoadingData->cbDefaultPaletteSize / m_nSizeOfColorsInBytes;

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
            const int cbPaletteSizeOnDisc = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes.at(nAdjustedPaletteId).nPaletteOffsetEnd - m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

            m_pszCurrentPaletteName = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes.at(nAdjustedPaletteId).szPaletteName;
            m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes.at(nAdjustedPaletteId).nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        }
    }
    else // PaletteArrangementStyle::OneButtonLabelEntryPerEachNode
    {
        if (ShouldUseBasePaletteSetForFileUnit(nFileUnitId, nFilePalId))
        {
            const uint32_t nBasicPaletteSizeForUnit = static_cast<uint32_t>(GetBasicPaletteListSizeForUnit(nCharacterId));
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
            m_nCurrentPaletteSizeInColors = m_psCurrentGameLoadingData->cbDefaultPaletteSize / m_nSizeOfColorsInBytes;
        }
        else // effects palettes
        {
            const size_t nAdjustedPaletteId = nFilePalId - GetBasicPaletteCountForUnit(nCharacterId);
            const int cbPaletteSizeOnDisc = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes.at(nAdjustedPaletteId).nPaletteOffsetEnd - m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

            m_pszCurrentPaletteName = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes.at(nAdjustedPaletteId).szPaletteName;
            m_nCurrentPaletteROMLocation = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes.at(nAdjustedPaletteId).nPaletteOffset;
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
    BlendMode nBlendMode = BlendMode::Alpha;

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

            // Use the specific (relative) palette data's specification of the preview unit to use if provided, otherwise
            // fall back to the basic palette info's specification
            if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.size())
            {
                // For image unit ID, use the basic palette specified value if present, otherwise use the general value for file
                // If the client wants us to ignore the local value, they should specify INVALID_UNIT_VALUE for image unit ID.
                if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.at(nSrcStart).indexImageUnit != INVALID_UNIT_VALUE)
                {
                    nImgUnitId = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.at(nSrcStart).indexImageUnit;
                }
                else
                {
                    nImgUnitId = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).nImageUnitIndex;
                }

                // For preview ID, use the vlaue from the basic palette data.  At worst case it'll default to 0.
                nTargetImgId = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.at(nSrcStart).indexImageSprite;

                if (m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.at(nSrcStart).pExtraProcessing)
                {
                    nBlendMode = m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).prgBasicPalettes.at(nSrcStart).pExtraProcessing->eBlendMode;
                }
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
        const sGame_PaletteDataset* paletteDataSet = &m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes.at(nPalIdInFileNode);
        nImgUnitId = paletteDataSet->indexImgToUse;
        nTargetImgId = paletteDataSet->indexOffsetToUse;

        if (paletteDataSet->pExtraProcessing)
        {
            nBlendMode = paletteDataSet->pExtraProcessing->eBlendMode;
        }

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

                    const sGame_PaletteDataset* paletteDataSetToJoin = &m_psCurrentGameLoadingData->srgLoadingData.at(nFileUnitId).sExtrasNodeData.prgExtraPalettes.at(nPalIdInFileNode + static_cast<size_t>(vnPeerPaletteDistances.at(nPairIndex)));

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
                        if (vsPaletteDataSetToJoin.at(nNodeIndex)->pExtraProcessing)
                        {
                            nBlendMode = vsPaletteDataSetToJoin.at(nNodeIndex)->pExtraProcessing->eBlendMode;
                        }
                        else
                        {
                            nBlendMode = BlendMode::Alpha;
                        }

                        sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin.at(nNodeIndex)->indexImgToUse, vsPaletteDataSetToJoin.at(nNodeIndex)->indexOffsetToUse, pPreviousImage, 0, 0, nBlendMode);

                        vsImagePairs.push_back(pThisImage);

                        pPreviousImage = pThisImage;
                    }

                    ClearSetImgTicket(vsImagePairs[(static_cast<size_t>(paletteDataSet->pPalettePairingInfo->nPalettesToJoin) - 1)]);

                    for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                    {
                        //Set each palette
                        CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                        SetSourcePal(nPairIndex, CharacterNode->uUnitId, nSrcStart + vnPeerPaletteDistances.at(nPairIndex), nSrcAmt, nNodeIncrement);
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
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId, nullptr, 0, 0, nBlendMode));

        SetSourcePal(0, CharacterNode->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

LPCWSTR CGameClassPerUnitPerFile::GetGameName()
{
    if (m_pCRC32SpecificData)
    {
        return m_pCRC32SpecificData->strFriendlyName.c_str();
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
    m_rgUnitRedir.at(nCharacterUnitId) = nCharacterUnitId;

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
