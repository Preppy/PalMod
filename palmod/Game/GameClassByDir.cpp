#include "StdAfx.h"
#include "GameClassByDir.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

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

CGameClassByDir::~CGameClassByDir()
{
    ClearDataBuffer();
    FlushChangeTrackingArray();

    safe_delete_array(m_prgCurrentExtrasLoaded);
}

void CGameClassByDir::InitializeStatics(const sDescTreeNode *psUnitData,
                                        size_t nUnitCount,
                                        const std::wstring strExtraName)
{
    safe_delete_array(m_prgCurrentExtrasLoaded);

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

void CGameClassByDir::InitializeGame(uint32_t nConfirmedROMSize, const sCoreGameData& gameLoadingData)
{
    //Set game-game specific information before loading the game's known palette locations
    m_snCurrentGameFlag = nGameFlag = gameLoadingData.nGameID;
    nImgGameFlag = gameLoadingData.eImgDatSectionID;
    m_prgGameImageSet = gameLoadingData.rgGameImageSet;
    createPalOptions = gameLoadingData.createPalOptions;
    //Set the image out display type
    DisplayType = gameLoadingData.displayStyle;
    pButtonLabelSet = gameLoadingData.rgszButtonLabelSet;
    SetAlphaMode(gameLoadingData.eAlphaMode);
    SetColorMode(gameLoadingData.eColMode);

    m_psCurrentFileLoadingData = &gameLoadingData.sLoadingData;

    // We only check primary ROM size because we outright fail the load if any subsequent ROMs not being the right size.
    if (nConfirmedROMSize == m_psCurrentFileLoadingData->rgFileList.at(0).nFileSize)
    {
        m_nConfirmedROMSize = m_psCurrentFileLoadingData->nAggregateROMSizes;
    }
    else if (m_psCurrentFileLoadingData->rgFileList.size() == 1)
    {
        OutputDebugString(L"CGameClassByDir::InitializeGame:: Unexpected file size.  Narrowing extra load down to primary ROM.\r\n");
        m_nConfirmedROMSize = nConfirmedROMSize;
    }
    else
    {
        OutputDebugString(L"CGameClassByDir::InitializeGame:: Unexpected file size.  Can't load extras here.\r\n");
        m_nConfirmedROMSize = -1;

    }

    // Load the game's layout for palmod
    InitializeStatics(gameLoadingData.psUnitData, gameLoadingData.nUnitCount, gameLoadingData.strExtraName);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_pszExtraFilename = m_strCurrentExtraFilename.c_str();

    //We need the proper unit amt before we init the main buffer
    m_nTotalInternalUnits = m_rgCurrentGameUnits.size();
    m_nExtraUnit = m_nCurrentExtraUnitId = static_cast<uint16_t>(m_rgCurrentGameUnits.size());
    // Tack on an extra unit if we're loading extras
    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    // Game-specific safety checks: if these match what we find at runtime we skip our check for duplicated palettes
    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + gameLoadingData.nKnownPaletteCount;
    m_nLowestKnownPaletteRomLocation = gameLoadingData.nLowestKnownPaletteLocation;

    // Stub in the palette buffer that we will LoadFile into
    InitDataBuffer();

    // This lets LoadGame and SaveGame know how many files it needs to interact with
    nFileAmt = m_psCurrentFileLoadingData->rgFileList.size();

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
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
    if ((m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved) ||
        (m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved_Read2Bytes_LE) ||
        (m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved_Read2Bytes_BE))
    {
        const uint32_t nSIMMLocation = nROMLocation / m_psCurrentFileLoadingData->rgFileList.size();
        return nSIMMLocation;
    }
    else // if (m_psCurrentFileLoadingData->eReadType == FileReadType::Sequential)
    {
        // This is a pointless call since it's 1:1
        return nROMLocation;
    }
}

inline uint32_t CGameClassByDir::GetSIMMUnitFromROMLocation(uint32_t nROMLocation)
{
    if ((m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved) ||
        (m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved_Read2Bytes_LE) ||
        (m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved_Read2Bytes_BE))
    {
        // This is a pointless call since it's functionally monolithic
        return 0;
    }
    else // if (m_psCurrentFileLoadingData->eReadType == FileReadType::Sequential)
    {
        uint32_t nAdjustedLocation = nROMLocation;
        for (uint32_t nSIMMUnit = 0; nSIMMUnit < m_psCurrentFileLoadingData->rgFileList.size(); nSIMMUnit++)
        {
            if (nAdjustedLocation < m_psCurrentFileLoadingData->rgFileList.at(nSIMMUnit).nFileSize)
            {
                return nSIMMUnit;
            }

            nAdjustedLocation -= m_psCurrentFileLoadingData->rgFileList.at(nSIMMUnit).nFileSize;
        }

        CString strInfo;
        strInfo.Format(L"Error: location 0x%x is outside the range for this ROM.", nROMLocation);
        MessageBox(g_appHWnd, strInfo.GetString(), GetHost()->GetAppName(), MB_ICONERROR);

        return 0;
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

sFileRule CGameClassByDir::GetRule(uint32_t nUnitId, const sDirectoryLoadingData& gameLoadingData)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", gameLoadingData.rgFileList.at(nUnitId & 0xFF).strFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = gameLoadingData.rgFileList.at(nUnitId & 0xFF).nFileSize;

    return NewFileRule;
}

sFileRule CGameClassByDir::GetNextRule(const sDirectoryLoadingData& gameLoadingData)
{
    sFileRule NewFileRule = GetRule(uRuleCtr++, gameLoadingData);

    if (uRuleCtr >= gameLoadingData.rgFileList.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
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
    rgFileHandles.resize(m_psCurrentFileLoadingData->rgFileList.size());

    for (size_t iCurrentFile = 0; iCurrentFile < m_psCurrentFileLoadingData->rgFileList.size(); iCurrentFile++)
    {
        CString strNameWithPath;

        if (iCurrentFile == 0)
        {
            // This specifically lets us use a renamed file that they're might try to substitute
            strNameWithPath.Format(L"%s\\%s", GetLoadedDirPathOnly(), LoadedFile->GetFileName().GetString());
            LoadedFile->Abort();
        }
        else
        {
            strNameWithPath.Format(L"%s\\%s", GetLoadedDirPathOnly(), m_psCurrentFileLoadingData->rgFileList.at(iCurrentFile).strFileName.c_str());
        }

        rgFileHandles.at(iCurrentFile) = new CFile;
        
        if (rgFileHandles.at(iCurrentFile)->Open(strNameWithPath.GetString(), CFile::modeRead | CFile::typeBinary))
        {
            if (rgFileHandles.at(iCurrentFile)->GetLength() != m_psCurrentFileLoadingData->rgFileList.at(iCurrentFile).nFileSize)
            {
                if (m_psCurrentFileLoadingData->rgFileList.size() != 1) // for monolithic files we have a runtime check asking if they want to allow the load anyways
                {
                    if (fSuccess)
                    {
                        strInfo.Format(L"Error: file \"%s\" is not the expected size.  Since this file is part of a set, we require it to match a known file size.", strNameWithPath.GetString());
                        MessageBox(g_appHWnd, strInfo.GetString(), GetHost()->GetAppName(), MB_ICONERROR);
                    }

                    fSuccess = FALSE;
                }
            }
        }
        else
        {
            if (fSuccess)
            {
                strInfo.Format(L"Error: could not load file \"%s\".", strNameWithPath.GetString());
                MessageBox(g_appHWnd, strInfo.GetString(), GetHost()->GetAppName(), MB_ICONERROR);
            }

            fSuccess = FALSE;
        }
    }

    if (fSuccess)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

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
                case FileReadType::Interleaved: // 16bit color read
                    {
                        if (m_psCurrentFileLoadingData->rgFileList.size() == 2)
                        {
                            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                            {
                                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                                m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];
                                memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(uint16_t) * m_nCurrentPaletteSizeInColors);

                                rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                                for (uint16_t nColorsRead = 0; nColorsRead < m_nCurrentPaletteSizeInColors; nColorsRead++)
                                {
                                    BYTE high, low;

                                    rgFileHandles.at(0)->Read(&low, 1);
                                    rgFileHandles.at(1)->Read(&high, 1);

                                    uint16_t nColorValue = (uint16_t)((high << 8) | low);

                                    m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsRead] = nColorValue;
                                }
                            }
                        }
                        else if (m_psCurrentFileLoadingData->rgFileList.size() == 4)
                        {
                            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                            {
                                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                                // This has to be checked against the unmodified location
                                const uint8_t nStartingHandle = (m_nCurrentPaletteROMLocation % 4);

                                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                                m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];
                                memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(uint16_t) * m_nCurrentPaletteSizeInColors);

                                uint8_t iHandle1, iHandle2, iHandle3, iHandle4;

                                if (nStartingHandle == 0)
                                {
                                    rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    rgFileHandles.at(2)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    rgFileHandles.at(3)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    iHandle1 = 0;
                                    iHandle2 = 1;
                                    iHandle3 = 2;
                                    iHandle4 = 3;
                                }
                                else
                                {
                                    rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation + 1, CFile::begin);
                                    rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation + 1, CFile::begin);
                                    rgFileHandles.at(2)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    rgFileHandles.at(3)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    iHandle1 = 2;
                                    iHandle2 = 3;
                                    iHandle3 = 0;
                                    iHandle4 = 1;
                                }

                                for (uint16_t nColorsRead = 0; nColorsRead < m_nCurrentPaletteSizeInColors; nColorsRead += 2)
                                {
                                    BYTE high1, low1, high2, low2;

                                    rgFileHandles.at(iHandle1)->Read(&low1, 1);
                                    rgFileHandles.at(iHandle2)->Read(&high1, 1);
                                    rgFileHandles.at(iHandle3)->Read(&low2, 1);
                                    rgFileHandles.at(iHandle4)->Read(&high2, 1);

                                    uint16_t nColorValue1 = (uint16_t)((high1 << 8) | low1);
                                    uint16_t nColorValue2 = (uint16_t)((high2 << 8) | low2);

                                    m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsRead] = nColorValue1;
                                    m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsRead + 1] = nColorValue2;
                                }
                            }
                        }
                        else
                        {
                            MessageBox(g_appHWnd, L"ERROR: PalMod does not support this interleaving at this time.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);
                        }
                    }
                    break;
                case FileReadType::Interleaved_Read2Bytes_LE: // 16bit color read
                case FileReadType::Interleaved_Read2Bytes_BE:
                {
                        // We only currently support interleaving of two files 
                        if (m_psCurrentFileLoadingData->rgFileList.size() != 2)
                        {
                            MessageBox(g_appHWnd, L"ERROR: PalMod only supports interleaving 2 files this way at this time.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);

                        }
                        const bool fIsLittleEndian = (m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved_Read2Bytes_LE);

                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                            // This has to be checked against the unmodified location
                            const uint8_t nStartingHandle = (m_nCurrentPaletteROMLocation % 2);

                            m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                            m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];
                            memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(uint16_t) * m_nCurrentPaletteSizeInColors);

                            // Wiring through palettes on odd bytes is going to be tricky, so skipping that for now.
                            if ((m_nCurrentPaletteROMLocation % 2) != 0)
                            {
                                OutputDebugString(L"ERROR: we don't support starting on odd bytes.\r\n");
                            }

                            rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                            rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                            for (uint16_t nColorsRead = 0; nColorsRead < m_nCurrentPaletteSizeInColors; nColorsRead += 2)
                            {
                                uint16_t nColorValue1, nColorValue2;
                                const bool fColorPairRemaining = (m_nCurrentPaletteSizeInColors - nColorsRead) > 1;

                                rgFileHandles.at(0)->Read(&nColorValue1, 2);

                                if (fColorPairRemaining)
                                {
                                    rgFileHandles.at(1)->Read(&nColorValue2, 2);
                                }

                                if (fIsLittleEndian)
                                {
                                    m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsRead] = nColorValue2;

                                    if (fColorPairRemaining)
                                    {
                                        m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsRead + 1] = nColorValue1;
                                    }
                                }
                                else // big endian
                                {
                                    m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsRead] = nColorValue1;

                                    if (fColorPairRemaining)
                                    {
                                        m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsRead + 1] = nColorValue2;
                                    }
                                }
                            }
                        }
                        break;
                    }
                default:
                    MessageBox(g_appHWnd, L"ERROR: Unsupported read type.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);
                    __fallthrough;
                case FileReadType::Sequential: // 16bit color read
                {
                    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                    {
                        LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                        m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];
                        memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(uint16_t) * m_nCurrentPaletteSizeInColors);

                        const uint32_t nSIMMUnitHoldingPalette = GetSIMMUnitFromROMLocation(m_nCurrentPaletteROMLocation);

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
                    case FileReadType::Interleaved: // 32bit color read
                    {
                        // We only currently support interleaving of four files 
                        if (m_psCurrentFileLoadingData->rgFileList.size() != 4)
                        {
                            MessageBox(g_appHWnd, L"ERROR: PalMod only supports interleaving 4 files this way at this time.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);
                        }

                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

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
                    case FileReadType::Interleaved_Read2Bytes_LE: // 32bit color read
                    case FileReadType::Interleaved_Read2Bytes_BE:
                    {
                        // This is an untested good faith implementation in case we run into this load type
                        if (m_psCurrentFileLoadingData->rgFileList.size() != 4)
                        {
                            MessageBox(g_appHWnd, L"ERROR: PalMod only supports interleaving 4 files this way at this time.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);
                        }
                        const bool fIsLittleEndian = (m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved_Read2Bytes_LE);

                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                            // This has to be checked against the unmodified location
                            const uint8_t nStartingHandle = (m_nCurrentPaletteROMLocation % 4);

                            m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                            m_pppDataBuffer32[nUnitCtr][nPalCtr] = new uint32_t[m_nCurrentPaletteSizeInColors];
                            memset(m_pppDataBuffer32[nUnitCtr][nPalCtr], 0, sizeof(uint32_t) * m_nCurrentPaletteSizeInColors);

                            // Wiring through palettes on odd bytes is going to be tricky, so skipping that for now.
                            if ((m_nCurrentPaletteROMLocation % 2) != 0)
                            {
                                OutputDebugString(L"ERROR: we don't support starting on odd bytes.\r\n");
                            }

                            uint8_t iHandle1, iHandle2, iHandle3, iHandle4;

                            if (nStartingHandle == 0)
                            {
                                rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                rgFileHandles.at(2)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                rgFileHandles.at(3)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                iHandle1 = 0;
                                iHandle2 = 1;
                                iHandle3 = 2;
                                iHandle4 = 3;
                            }
                            else
                            {
                                rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation + 1, CFile::begin);
                                rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation + 1, CFile::begin);
                                rgFileHandles.at(2)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                rgFileHandles.at(3)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                iHandle1 = 2;
                                iHandle2 = 3;
                                iHandle3 = 0;
                                iHandle4 = 1;
                            }

                            for (uint16_t nColorsRead = 0; nColorsRead < m_nCurrentPaletteSizeInColors; nColorsRead++)
                            {
                                uint16_t high = 0, low = 0;

                                if ((nColorsRead % 2) == 0)
                                {
                                    rgFileHandles.at(iHandle1)->Read(&low, 2);
                                    rgFileHandles.at(iHandle2)->Read(&high, 2);
                                }
                                else
                                {
                                    rgFileHandles.at(iHandle3)->Read(&low, 2);
                                    rgFileHandles.at(iHandle4)->Read(&high, 2);
                                }

                                uint32_t nColorValue = (high << 16) | low;

                                if (fIsLittleEndian)
                                {
                                    nColorValue = _byteswap_ushort(nColorValue);
                                }

                                m_pppDataBuffer32[nUnitCtr][nPalCtr][nColorsRead] = nColorValue;
                            }
                        }
                        break;
                    }
                    default:
                        MessageBox(g_appHWnd, L"ERROR: Unsupported read type.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);
                        __fallthrough;
                    case FileReadType::Sequential: // 32bit color read
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

    for (size_t iCurrentFile = 0; iCurrentFile < m_psCurrentFileLoadingData->rgFileList.size(); iCurrentFile++)
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
    strInfo.Format(L"CGameClassByDir::SaveFile: Preparing to save data for ROM set %u\n", nSaveUnit);
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
    rgFileHandles.resize(m_psCurrentFileLoadingData->rgFileList.size());

    for (size_t iCurrentFile = 0; iCurrentFile < m_psCurrentFileLoadingData->rgFileList.size(); iCurrentFile++)
    {
        CString strNameWithPath;
        strNameWithPath.Format(L"%s\\%s", GetLoadedDirPathOnly(), m_psCurrentFileLoadingData->rgFileList.at(iCurrentFile).strFileName.c_str());

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
                    case FileReadType::Interleaved: // 16bit color write
                    {
                        if (m_psCurrentFileLoadingData->rgFileList.size() == 2)
                        {
                            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                            {
                                if (IsPaletteDirty(nUnitCtr, nPalCtr))
                                {
                                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

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
                        }
                        else if (m_psCurrentFileLoadingData->rgFileList.size() == 4)
                        {
                            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                            {
                                if (IsPaletteDirty(nUnitCtr, nPalCtr))
                                {
                                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                                    // This has to be checked against the unmodified location
                                    const uint8_t nStartingHandle = (m_nCurrentPaletteROMLocation % 4);

                                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                                    uint8_t iHandle1, iHandle2, iHandle3, iHandle4;

                                    if (nStartingHandle == 0)
                                    {
                                        rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                        rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                        rgFileHandles.at(2)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                        rgFileHandles.at(3)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                        iHandle1 = 0;
                                        iHandle2 = 1;
                                        iHandle3 = 2;
                                        iHandle4 = 3;
                                    }
                                    else
                                    {
                                        rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation + 1, CFile::begin);
                                        rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation + 1, CFile::begin);
                                        rgFileHandles.at(2)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                        rgFileHandles.at(3)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                        iHandle1 = 2;
                                        iHandle2 = 3;
                                        iHandle3 = 0;
                                        iHandle4 = 1;
                                    }

                                    for (uint16_t nColorsWritten = 0; nColorsWritten < m_nCurrentPaletteSizeInColors; nColorsWritten += 2)
                                    {
                                        uint16_t nColorValue1 = m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsWritten];
                                        uint16_t nColorValue2 = m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsWritten + 1];

                                        BYTE high1 = (nColorValue1 & 0xFF00) >> 8;
                                        BYTE low1 = nColorValue1 & 0xFF;
                                        BYTE high2 = (nColorValue2 & 0xFF00) >> 8;
                                        BYTE low2 = nColorValue2 & 0xFF;

                                        rgFileHandles.at(iHandle1)->Write(&low1, 1);
                                        rgFileHandles.at(iHandle2)->Write(&high1, 1);
                                        rgFileHandles.at(iHandle3)->Write(&low2, 1);
                                        rgFileHandles.at(iHandle4)->Write(&high2, 1);
                                    }
                                }
                            }
                        }
                        else
                        {
                            MessageBox(g_appHWnd, L"ERROR: PalMod does not support this interleaving at this time.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);
                        }

                        break;
                    }
                    case FileReadType::Interleaved_Read2Bytes_LE: // 16bit color write
                    case FileReadType::Interleaved_Read2Bytes_BE:
                    {
                        if (m_psCurrentFileLoadingData->rgFileList.size() != 2)
                        {
                            MessageBox(g_appHWnd, L"ERROR: PalMod only supports interleaving 2 files this way at this time.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);

                        }
                        const bool fIsLittleEndian = (m_psCurrentFileLoadingData->eReadType == FileReadType::Interleaved_Read2Bytes_LE);

                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            if (IsPaletteDirty(nUnitCtr, nPalCtr))
                            {
                                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                                // Wiring through palettes on odd bytes is going to be tricky, so skipping that for now.
                                if ((m_nCurrentPaletteROMLocation % 2) != 0)
                                {
                                    OutputDebugString(L"ERROR: we don't support starting on odd bytes.\r\n");
                                }

                                rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                                for (uint16_t nColorsWritten = 0; nColorsWritten < m_nCurrentPaletteSizeInColors; nColorsWritten += 2)
                                {
                                    uint16_t nColorValue1, nColorValue2 = 0;
                                    const bool fColorPairRemaining = (m_nCurrentPaletteSizeInColors - nColorsWritten) > 1;
                                    
                                    nColorValue1 = m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsWritten];
                                    
                                    if (fColorPairRemaining)
                                    {
                                        nColorValue2 = m_pppDataBuffer[nUnitCtr][nPalCtr][nColorsWritten + 1];
                                    }

                                    if (fIsLittleEndian)
                                    {
                                        if (fColorPairRemaining)
                                        {
                                            const uint16_t nOldVal = nColorValue1;
                                            nColorValue1 = nColorValue2;
                                            nColorValue2 = nOldVal;
                                        }
                                    }

                                    rgFileHandles.at(0)->Write(&nColorValue1, 2);
                                       
                                    if (fColorPairRemaining)
                                    {
                                        rgFileHandles.at(1)->Write(&nColorValue2, 2);
                                    }
                                }
                            }
                        }
                        break;
                    }
                    default:
                        MessageBox(g_appHWnd, L"ERROR: Unsupported write type.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);
                        __fallthrough;
                    case FileReadType::Sequential: // 16bit color write
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
                    case FileReadType::Interleaved: // 32bit color write
                    {
                        // We only currently support interleaving of four files 
                        if (m_psCurrentFileLoadingData->rgFileList.size() != 4)
                        {
                            MessageBox(g_appHWnd, L"ERROR: PalMod only supports interleaving 4 files this way at this time.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);
                        }

                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            if (IsPaletteDirty(nUnitCtr, nPalCtr))
                            {
                                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

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
                    case FileReadType::Interleaved_Read2Bytes_LE: // 32bit color write
                    case FileReadType::Interleaved_Read2Bytes_BE:
                    {
                        // This is an untested good faith implementation in case we run into this load type
                        // We only currently support interleaving of four files 
                        if (m_psCurrentFileLoadingData->rgFileList.size() != 4)
                        {
                            MessageBox(g_appHWnd, L"ERROR: PalMod only supports interleaving 4 files this way at this time.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);
                        }

                        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                        {
                            if (IsPaletteDirty(nUnitCtr, nPalCtr))
                            {
                                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                                // This has to be checked against the unmodified location
                                const uint8_t nStartingHandle = (m_nCurrentPaletteROMLocation % 4);

                                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                                // Wiring through palettes on odd bytes is going to be tricky, so skipping that for now.
                                if ((m_nCurrentPaletteROMLocation % 2) != 0)
                                {
                                    OutputDebugString(L"ERROR: we don't support starting on odd bytes.\r\n");
                                }

                                uint8_t iHandle1, iHandle2, iHandle3, iHandle4;

                                if (nStartingHandle == 0)
                                {
                                    rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    rgFileHandles.at(2)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    rgFileHandles.at(3)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    iHandle1 = 0;
                                    iHandle2 = 1;
                                    iHandle3 = 2;
                                    iHandle4 = 3;
                                }
                                else
                                {
                                    rgFileHandles.at(0)->Seek(m_nCurrentPaletteROMLocation + 2, CFile::begin);
                                    rgFileHandles.at(1)->Seek(m_nCurrentPaletteROMLocation + 2, CFile::begin);
                                    rgFileHandles.at(2)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    rgFileHandles.at(3)->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                                    iHandle1 = 2;
                                    iHandle2 = 3;
                                    iHandle3 = 0;
                                    iHandle4 = 1;
                                }

                                for (uint16_t nColorsWritten = 0; nColorsWritten < m_nCurrentPaletteSizeInColors; nColorsWritten++)
                                {
                                    uint32_t nColorValue = m_pppDataBuffer32[nUnitCtr][nPalCtr][nColorsWritten];
                                    const bool fColorPairRemaining = (m_nCurrentPaletteSizeInColors - nColorsWritten) > 1;

                                    uint16_t high = (nColorValue & 0xFFFF0000) >> 16;
                                    uint16_t low =  (nColorValue & 0xFFFF);

                                    if ((nColorsWritten % 2) == 0)
                                    {
                                        rgFileHandles.at(iHandle1)->Write(&low, 2);
                                        rgFileHandles.at(iHandle2)->Write(&high, 2);
                                    }
                                    else
                                    {
                                        rgFileHandles.at(iHandle3)->Write(&low, 2);
                                        rgFileHandles.at(iHandle4)->Write(&high, 2);
                                    }
                                }
                            }
                        }
                        break;
                    }
                    default:
                        MessageBox(g_appHWnd, L"ERROR: Unsupported write type.  This won't work right.", GetHost()->GetAppName(), MB_ICONERROR);
                        __fallthrough;
                    case FileReadType::Sequential:// 32bit color write
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

    for (size_t iCurrentFile = 0; iCurrentFile < m_psCurrentFileLoadingData->rgFileList.size(); iCurrentFile++)
    {
        rgFileHandles.at(iCurrentFile)->Abort();
        safe_delete(rgFileHandles.at(iCurrentFile));
    }

    OutputDebugString(L"\tCGameClassByDir::SaveFile: Complete.\n");
    return TRUE;
}
