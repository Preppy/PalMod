#include "StdAfx.h"
#include "GameClassByDir.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"
#include <assert.h>

uint32_t CGameClassByDir::uRuleCtr = 0;
CDescTree CGameClassByDir::MainDescTree = nullptr;
uint32_t CGameClassByDir::m_nConfirmedROMSize = -1;

std::vector<sDescTreeNode> CGameClassByDir::m_rgCurrentGameUnits;

std::wstring CGameClassByDir::m_strCurrentExtraFilename;
std::vector<uint32_t> CGameClassByDir::m_rgCurrentExtraCounts;
std::vector<uint32_t> CGameClassByDir::m_rgCurrentExtraLocations;
stExtraDef* CGameClassByDir::m_prgCurrentExtrasLoaded = nullptr;
uint16_t CGameClassByDir::m_nCurrentExtraUnitId;
SupportedGamesList CGameClassByDir::m_snCurrentGameFlag = SupportedGamesList::NUM_GAMES;

const sDirectoryLoadingData* CGameClassByDir::m_psCurrentFileLoadingData;

void CGameClassByDir::InitializeStatics(const sDirectoryLoadingData& sLoadingData,
                                        const sDescTreeNode *psUnitData,
                                        size_t nUnitCount,
                                        const std::wstring strExtraName)
{
    safe_delete_array(m_prgCurrentExtrasLoaded);
    m_psCurrentFileLoadingData = &sLoadingData;
    m_nConfirmedROMSize = m_psCurrentFileLoadingData->nROMSize * m_psCurrentFileLoadingData->rgstrFileList.size();

    m_rgCurrentGameUnits.clear();
    for (size_t nCurUnit = 0; nCurUnit < nUnitCount; nCurUnit++)
    {
        m_rgCurrentGameUnits.emplace_back(psUnitData[nCurUnit]);
    }

    m_strCurrentExtraFilename = strExtraName;
    m_rgCurrentExtraCounts.resize(m_rgCurrentGameUnits.size() + 1);
    for (auto& pCount : m_rgCurrentExtraCounts)
    {
        pCount = -1; // Mark as uninitialized: we'll update with actual data later
    }
    m_rgCurrentExtraLocations.resize(m_rgCurrentGameUnits.size() + 1);
    for (auto& pLocation : m_rgCurrentExtraLocations)
    {
        pLocation = -1; // Mark as uninitialized: we'll update with actual data later
    }
    m_nCurrentExtraUnitId = static_cast<uint16_t>(m_rgCurrentGameUnits.size());

    MainDescTree.SetRootTree(CGameClassByDir::InitDescTree());
}

uint32_t CGameClassByDir::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(&m_rgCurrentExtraCounts[0], m_rgCurrentGameUnits.size(), nUnitId, m_prgCurrentExtrasLoaded);
}

uint32_t CGameClassByDir::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(&m_rgCurrentExtraLocations[0], m_rgCurrentGameUnits.size(), nUnitId, m_prgCurrentExtrasLoaded);
}

CDescTree* CGameClassByDir::GetMainTree()
{
    return &CGameClassByDir::MainDescTree;
}

sDescTreeNode* CGameClassByDir::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(m_strCurrentExtraFilename.c_str(), &m_prgCurrentExtrasLoaded, m_nCurrentExtraUnitId, m_nConfirmedROMSize);

    const bool fHaveExtras = (GetExtraCt(m_nCurrentExtraUnitId) > 0);
    const size_t nUnitCt = m_rgCurrentGameUnits.size() + (fHaveExtras ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[m_snCurrentGameFlag]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCount = _InitDescTree(NewDescTree,
        &m_rgCurrentGameUnits[0],
        m_nCurrentExtraUnitId,
        m_rgCurrentGameUnits.size(),
        &m_rgCurrentExtraCounts[0],
        &m_rgCurrentExtraLocations[0],
        m_prgCurrentExtrasLoaded
    );

    return NewDescTree;
}

inline uint32_t CGameClassByDir::GetSIMMLocationFromROMLocation(uint32_t nROMLocation)
{
    if (m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved)
    {
        const uint32_t nSIMMLocation = nROMLocation / m_psCurrentFileLoadingData->rgstrFileList.size();
        return nSIMMLocation;
    }
    else // if (m_psCurrentFileLoadingData->eReadType == FileReadType::Sequential)
    {
        // Invalid look-up
        return 0;
    }
}

inline uint32_t CGameClassByDir::GetSIMMUnitFromROMLocation(uint32_t nROMLocation)
{
    if (m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved)
    {
        // Invalid look-up
        return 0;
    }
    else // if (m_psCurrentFileLoadingData->eReadType == FileReadType::Sequential)
    {
        const uint32_t nSIMMUnit = static_cast<uint32_t>(floor(static_cast<double>(nROMLocation) / static_cast<double>(m_psCurrentFileLoadingData->nROMSize)));
        return nSIMMUnit;
    }
}

uint32_t CGameClassByDir::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(&m_rgCurrentGameUnits[0], &m_rgCurrentExtraCounts[0], m_rgCurrentGameUnits.size(), m_nCurrentExtraUnitId, nUnitId, m_prgCurrentExtrasLoaded);
}

uint32_t CGameClassByDir::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(&m_rgCurrentGameUnits[0], &m_rgCurrentExtraCounts[0], m_rgCurrentGameUnits.size(), m_nCurrentExtraUnitId, nUnitId, nCollectionId, m_prgCurrentExtrasLoaded);
}

LPCWSTR CGameClassByDir::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(&m_rgCurrentGameUnits[0], m_nCurrentExtraUnitId, nUnitId, nCollectionId);
}

uint32_t CGameClassByDir::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(&m_rgCurrentGameUnits[0], &m_rgCurrentExtraCounts[0], m_rgCurrentGameUnits.size(), m_nCurrentExtraUnitId, nUnitId, m_prgCurrentExtrasLoaded);
}

const sGame_PaletteDataset* CGameClassByDir::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(&m_rgCurrentGameUnits[0], nUnitId, nCollectionId);
}

const sGame_PaletteDataset* CGameClassByDir::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(&m_rgCurrentGameUnits[0], &m_rgCurrentExtraCounts[0], m_rgCurrentGameUnits.size(), m_nCurrentExtraUnitId, nUnitId, nPaletteId, m_prgCurrentExtrasLoaded);
}

const sDescTreeNode* CGameClassByDir::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(&m_rgCurrentGameUnits[0], &m_rgCurrentExtraCounts[0], m_rgCurrentGameUnits.size(), m_nCurrentExtraUnitId, nUnitId, nPaletteId, m_prgCurrentExtrasLoaded, fReturnBasicNodesOnly);
}

void CGameClassByDir::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nCurrentExtraUnitId)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // m_nCurrentExtraUnitId
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &m_prgCurrentExtrasLoaded[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGameClassByDir::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(&m_rgCurrentGameUnits[0], &m_rgCurrentExtraCounts[0], m_rgCurrentGameUnits.size(), m_nCurrentExtraUnitId, m_prgCurrentExtrasLoaded, Node01, Node02, Node03, Node03);
}

BOOL CGameClassByDir::LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGameClassByDir::LoadFile: Preparing to load data from SIMM number %u\n", nSIMMNumber);
    OutputDebugString(strInfo);

    if (nSIMMNumber != 0)
    {
        // We're done with our "files" but gameload has a loose mapping between files and unit count.  
        // We can handle that mapping by simply setting the "file" count to the unit count.
        nRedirCtr = nUnitAmt - 1;

        OutputDebugString(L"\tAlready handled.\n");
        return TRUE;
    }

    std::vector<CFile *> rgFileHandles;

    // Reset: we reopen in bulk
    LoadedFile->Abort();
    rgFileHandles.resize(m_psCurrentFileLoadingData->rgstrFileList.size());

    for (size_t iCurrentFile = 0; iCurrentFile < m_psCurrentFileLoadingData->rgstrFileList.size(); iCurrentFile++)
    {
        CString strNameWithPath;
        strNameWithPath.Format(L"%s\\%s", GetLoadedDirPathOnly(), m_psCurrentFileLoadingData->rgstrFileList.at(iCurrentFile).c_str());

        rgFileHandles.at(iCurrentFile) = new CFile;
        
        if (!rgFileHandles.at(iCurrentFile)->Open(strNameWithPath.GetString(), CFile::modeRead | CFile::typeBinary))
        {
            fSuccess = FALSE;
        }
    }

    if (fSuccess)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            // These are already sorted, no need to redirect
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            if (GameIsUsing16BitColor())
            {
                if (m_pppDataBuffer[nUnitCtr] == nullptr)
                {
                    m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];
                    memset(m_pppDataBuffer[nUnitCtr], 0, sizeof(uint16_t*) * nPalAmt);
                }

                switch (m_psCurrentFileLoadingData->eReadType)
                {
                case FileReadType::Interleaved:
                    {
                        // We only currently support interleaving of two files 
                        assert(m_psCurrentFileLoadingData->rgstrFileList.size() == 2);

                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                            uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                            m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                            m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];
                            memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(uint16_t) * m_nCurrentPaletteSizeInColors);

                            rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                            rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                            for (uint16_t nWordsRead = 0; nWordsRead < m_nCurrentPaletteSizeInColors; nWordsRead++)
                            {
                                BYTE high, low;

                                rgFileHandles.at(0)->Read(&low, 1);
                                rgFileHandles.at(1)->Read(&high, 1);

                                uint16_t nColorValue = (uint16_t)((high << 8) | low);

                                m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsRead] = nColorValue;
                            }
                        }
                    }
                    break;
                default:
                    assert(0); // Unsupported read type
                    __fallthrough;
                case FileReadType::Sequential:
                {
                    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                    {
                        LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                        m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];
                        memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(uint16_t) * m_nCurrentPaletteSizeInColors);

                        uint32_t nSIMMUnitHoldingPalette = GetSIMMUnitFromROMLocation(m_nCurrentPaletteROMLocation);

                        rgFileHandles.at(nSIMMUnitHoldingPalette)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                        for (uint16_t nWordsRead = 0; nWordsRead < m_nCurrentPaletteSizeInColors; nWordsRead++)
                        {
                            uint16_t nColorValue;

                            rgFileHandles.at(nSIMMUnitHoldingPalette)->Read(&nColorValue, 2);

                            m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsRead] = nColorValue;
                        }
                    }
                }
                break;
                };

            }
            else if (GameIsUsing32BitColor())
            {
                if (m_pppDataBuffer32[nUnitCtr] == nullptr)
                {
                    m_pppDataBuffer32[nUnitCtr] = new uint32_t * [nPalAmt];
                    memset(m_pppDataBuffer32[nUnitCtr], 0, sizeof(uint32_t*) * nPalAmt);
                }

                switch (m_psCurrentFileLoadingData->eReadType)
                {
                case FileReadType::Interleaved:
                {
                    // We only currently support interleaving of four files 
                    assert(m_psCurrentFileLoadingData->rgstrFileList.size() == 4);

                    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                    {
                        LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                        uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                        m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                        m_pppDataBuffer32[nUnitCtr][nPalCtr] = new uint32_t[m_nCurrentPaletteSizeInColors];
                        memset(m_pppDataBuffer32[nUnitCtr][nPalCtr], 0, sizeof(uint32_t) * m_nCurrentPaletteSizeInColors);

                        rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        rgFileHandles.at(2)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        rgFileHandles.at(3)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                        for (uint16_t nWordsRead = 0; nWordsRead < m_nCurrentPaletteSizeInColors; nWordsRead++)
                        {
                            BYTE high, low, high2, low2;

                            rgFileHandles.at(0)->Read(&low, 1);
                            rgFileHandles.at(1)->Read(&high, 1);
                            rgFileHandles.at(2)->Read(&low2, 1);
                            rgFileHandles.at(3)->Read(&high2, 1);

                            uint32_t nColorValue = (high2 << 24) | (low2 << 16) |(high << 8) | low;

                            m_pppDataBuffer32[nUnitCtr][nPalCtr][nWordsRead] = nColorValue;
                        }
                    }
                    break;
                }
                default:
                    assert(0); // Unsupported read type
                    __fallthrough;
                case FileReadType::Sequential:
                    {
                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                            m_pppDataBuffer32[nUnitCtr][nPalCtr] = new uint32_t[m_nCurrentPaletteSizeInColors];
                            memset(m_pppDataBuffer32[nUnitCtr][nPalCtr], 0, sizeof(uint32_t) * m_nCurrentPaletteSizeInColors);

                            uint32_t nSIMMUnitHoldingPalette = GetSIMMUnitFromROMLocation(m_nCurrentPaletteROMLocation);

                            rgFileHandles.at(nSIMMUnitHoldingPalette)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                            for (uint16_t nWordsRead = 0; nWordsRead < m_nCurrentPaletteSizeInColors; nWordsRead++)
                            {
                                uint32_t nColorValue;

                                rgFileHandles.at(nSIMMUnitHoldingPalette)->Read(&nColorValue, 4);

                                m_pppDataBuffer32[nUnitCtr][nPalCtr][nWordsRead] = nColorValue;
                            }
                        }
                        break;
                    }
                }
            }
        }
    }

    for (size_t iCurrentFile = 0; iCurrentFile < m_psCurrentFileLoadingData->rgstrFileList.size(); iCurrentFile++)
    {
        rgFileHandles.at(iCurrentFile)->Abort();
        delete rgFileHandles.at(iCurrentFile);
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForErrorsInTables();

    return fSuccess;
}

BOOL CGameClassByDir::SaveFile(CFile* SaveFile, uint32_t nSaveUnit)
{
    BOOL fSuccess = TRUE;
    CString strInfo;
    strInfo.Format(L"CGameClassByDir::SaveFile: Preparing to save data for MWarr ROM set\n");
    OutputDebugString(strInfo);

    if (nSaveUnit != 0)
    {
        // We're done with our "files" but gameload has a loose mapping between files and unit count.  
        // We can handle that mapping by simply setting the "file" count to the unit count.
        OutputDebugString(L"\tCGameClassByDir::SaveFile: Already handled.\n");
        return TRUE;
    }

    std::vector<CFile*> rgFileHandles;

    // Reset: we reopen in bulk
    SaveFile->Abort();
    rgFileHandles.resize(m_psCurrentFileLoadingData->rgstrFileList.size());

    for (size_t iCurrentFile = 0; iCurrentFile < m_psCurrentFileLoadingData->rgstrFileList.size(); iCurrentFile++)
    {
        CString strNameWithPath;
        strNameWithPath.Format(L"%s\\%s", GetLoadedDirPathOnly(), m_psCurrentFileLoadingData->rgstrFileList.at(iCurrentFile).c_str());

        rgFileHandles.at(iCurrentFile) = new CFile;

        if (!rgFileHandles.at(iCurrentFile)->Open(strNameWithPath.GetString(), CFile::modeWrite | CFile::typeBinary))
        {
            fSuccess = FALSE;
        }
    }

    if (fSuccess)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            if (GameIsUsing16BitColor())
            {
                switch (m_psCurrentFileLoadingData->eReadType)
                {
                case FileReadType::Interleaved:
                    {
                        // We only currently support interleaving of two files 
                        assert(m_psCurrentFileLoadingData->rgstrFileList.size() == 2);

                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            if (IsPaletteDirty(nUnitCtr, nPalCtr))
                            {
                                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                                uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                                rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                                for (uint16_t nColorsWritten = 0; nColorsWritten < m_nCurrentPaletteSizeInColors; nColorsWritten++)
                                {
                                    uint16_t nColorValue = m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsWritten];

                                    BYTE high = (nColorValue & 0xFF00) >> 8;
                                    BYTE low = nColorValue & 0xFF;

                                    rgFileHandles.at(0)->Write(&low, 1);
                                    rgFileHandles.at(1)->Write(&high, 1);
                                }
                            }
                        }
                        break;
                    }
                default:
                    assert(0); // Unsupported write type
                    __fallthrough;
                case FileReadType::Sequential:
                    {
                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            if (IsPaletteDirty(nUnitCtr, nPalCtr))
                            {
                                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                                uint32_t nSIMMUnitHoldingPalette = GetSIMMUnitFromROMLocation(m_nCurrentPaletteROMLocation);

                                rgFileHandles.at(nSIMMUnitHoldingPalette)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                                for (uint16_t nColorsWritten = 0; nColorsWritten < m_nCurrentPaletteSizeInColors; nColorsWritten++)
                                {
                                    uint16_t nColorValue = m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsWritten];

                                    rgFileHandles.at(nSIMMUnitHoldingPalette)->Write(&nColorValue, 2);
                                }
                            }
                        }
                        break;
                    }
                };

            }
            else if (GameIsUsing32BitColor())
            {
                switch (m_psCurrentFileLoadingData->eReadType)
                {
                case FileReadType::Interleaved:
                    {
                        // We only currently support interleaving of four files 
                        assert(m_psCurrentFileLoadingData->rgstrFileList.size() == 4);

                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            if (IsPaletteDirty(nUnitCtr, nPalCtr))
                            {
                                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                                uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                                rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                rgFileHandles.at(2)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                rgFileHandles.at(3)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                                for (uint16_t nColorsWritten = 0; nColorsWritten < m_nCurrentPaletteSizeInColors; nColorsWritten++)
                                {
                                    uint32_t nColorValue = m_pppDataBuffer32[nUnitCtr][nPalCtr][nColorsWritten];

                                    BYTE high2 = (nColorValue & 0xFF000000) >> 24;
                                    BYTE low2 =  (nColorValue & 0xFF0000) >> 16;
                                    BYTE high =  (nColorValue & 0xFF00) >> 8;
                                    BYTE low =   (nColorValue & 0xFF);

                                    rgFileHandles.at(0)->Write(&low, 1);
                                    rgFileHandles.at(1)->Write(&high, 1);
                                    rgFileHandles.at(2)->Write(&low2, 1);
                                    rgFileHandles.at(3)->Write(&high2, 1);
                                }
                            }
                        }
                        break;
                    }
                default:
                    assert(0); // Unsupported read type
                    __fallthrough;
                case FileReadType::Sequential:
                    {
                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            if (IsPaletteDirty(nUnitCtr, nPalCtr))
                            {
                                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                                uint32_t nSIMMUnitHoldingPalette = GetSIMMUnitFromROMLocation(m_nCurrentPaletteROMLocation);

                                rgFileHandles.at(nSIMMUnitHoldingPalette)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                                for (uint16_t nColorsWritten = 0; nColorsWritten < m_nCurrentPaletteSizeInColors; nColorsWritten++)
                                {
                                    uint32_t nColorValue = m_pppDataBuffer32[nUnitCtr][nPalCtr][nColorsWritten];

                                    rgFileHandles.at(nSIMMUnitHoldingPalette)->Write(&nColorValue, 2);
                                }
                            }
                        }
                        break;
                    }
                }
            }
        }
    }

    for (size_t iCurrentFile = 0; iCurrentFile < m_psCurrentFileLoadingData->rgstrFileList.size(); iCurrentFile++)
    {
        rgFileHandles.at(iCurrentFile)->Abort();
        delete rgFileHandles.at(iCurrentFile);
    }

    return TRUE;
}
