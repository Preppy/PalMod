#include "StdAfx.h"
#include <fstream>
#include "PalMod.h"
#include "RegProc.h"

#include "ExtraFile.h"
#include <algorithm>

// Uncomment this to have this file help convert an Extra file to our header style
//#define DUMP_EXTRAS_ON_LOAD

using namespace std;

UINT32 CGameWithExtrasFile::m_nTotalPaletteCount = 0;

void LoadExtraFileForGame(LPCTSTR pszExtraFileName, const stExtraDef* pBaseExtraDefs, stExtraDef** pCompleteExtraDefs, UINT8 nExtraUnitStart, UINT32 nGameROMSize)
{
    ifstream extraFile;
    TCHAR szTargetFile[MAX_PATH];
    CString strOutputText;
    int nTotalExtensionExtraLinesHandled = 0;
    int nStockExtrasCount = 0;
    int nArrayOffsetDesired = 0;
    bool fAlertedToTruncation = false;

    // Before we load the Extra extension file, load our hardcoded known Extras list.
    stExtraDef* pCurrDef = const_cast<stExtraDef*>(&pBaseExtraDefs[nStockExtrasCount]);

    if (pCurrDef->uUnitN == UNIT_START_VALUE)
    {
        // Check count to ensure correct offset of the file additions
        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            nStockExtrasCount++;
            pCurrDef = const_cast<stExtraDef*>(&pBaseExtraDefs[nStockExtrasCount]);
        }
    }
    else
    {
        // I was hitting a compiler bug for a bit, so added this in.
        // You shouldn't be able to hit this any longer: the revisions to make LoadExtraFile a common function worked around the compiler issue.
        OutputDebugString(_T("BUGBUG: MEMORY CORRUPTION!\n"));
    }

    const int nMaxExtraBufferSize = 10000;
    stExtraDef* prgTempExtraBuffer = nullptr;

    prgTempExtraBuffer = new stExtraDef[nMaxExtraBufferSize];

    if (prgTempExtraBuffer != nullptr)
    {
        memcpy(prgTempExtraBuffer, pBaseExtraDefs, nStockExtrasCount * sizeof(stExtraDef));

        if (nGameROMSize != -1) // If we don't know the ROM size we don't know how to sanely bounds-check our file access, so can't trust our handling of Extra files.
        {
            // Now we look for the Extra extension file.
            GetModuleFileName(nullptr, szTargetFile, (DWORD)MAX_PATH);
            TCHAR* pszExeFileName = _tcsrchr(szTargetFile, _T('\\')) + 1;
            pszExeFileName[0] = 0;

            _tcscat(szTargetFile, pszExtraFileName);

            strOutputText.Format(_T("Loading extra file for '%s'...\n"), pszExtraFileName);
            OutputDebugString(strOutputText);

            DWORD nFileAttrib = GetFileAttributes(szTargetFile);
            if (((nFileAttrib & FILE_ATTRIBUTE_ARCHIVE) == FILE_ATTRIBUTE_ARCHIVE) && (nFileAttrib != INVALID_FILE_ATTRIBUTES))
            {
                // This is raw file and deliberately char
                char aszCurrLine[MAX_PATH]; // arbitrary line length: in practice it should be MAX_DESCRIPTION_LENGTH + 1
                char aszCurrDesc[MAX_DESCRIPTION_LENGTH];
                char* aszFinalLine = nullptr;
                int nCurrStart = 0;
                int nCurrEnd = 0;

                DWORD k_colorsPerPage = CRegProc::GetMaxPalettePageSize();

                if (CRegProc::GetMaxColorsPerPageOverride() != 0)
                {
                    k_colorsPerPage = CRegProc::GetMaxColorsPerPageOverride();
                }

                extraFile.open(szTargetFile, ios::in);

                while (!extraFile.eof())
                {
                    extraFile.getline(aszCurrLine, sizeof(aszCurrLine));

                    aszFinalLine = aszCurrLine;

                    if (strlen(aszFinalLine) && (aszFinalLine[0] != ';'))
                    {
                        int nPrevAmt = 0;

                        switch (nTotalExtensionExtraLinesHandled % 3)
                        {
                        case 0:
                        {
                            if (iswspace(aszFinalLine[0]) && (strlen(aszFinalLine) == 1))
                            {
                                strOutputText.Format(_T("Warning: Bogus entry in extension file with text '%S'.  Skipping.\n"), aszFinalLine);
                                OutputDebugString(strOutputText);
                                continue;
                            }

                            memcpy(aszCurrDesc, aszFinalLine, 31);
                            aszCurrDesc[31] = '\0';
                        }
                        break;
                        case 1:
                        {
                            nCurrStart = strtol(aszFinalLine, nullptr, 16);

                            if (nCurrStart < 0)
                            {
                                // Make sure it's not negative: the terminal write check will check start vs rom size
                                nCurrStart = 0;
                            }

                            if (nCurrStart == 0)
                            {
                                if (((aszFinalLine[0] > 'F') && (aszFinalLine[0] < 'a')) ||
                                    (aszFinalLine[0] > 'f'))
                                {
                                    CString strError;
                                    strError.Format(_T("In file \"%s\", Extra \"%S\" appears to be broken: it is trying to display from starting offset \"%S\".  If that's not a number, your Extras file isn't correct.\n"), pszExtraFileName, aszCurrDesc, aszFinalLine);
                                    MessageBox(g_appHWnd, strError, _T("PalMod"), MB_ICONERROR);
                                }
                            }
                        }
                        break;
                        case 2:
                        {
                            int nPos = 0;

                            nCurrEnd = strtol(aszFinalLine, nullptr, 16);

                            if (nCurrEnd <= nCurrStart)
                            {
                                CString strError;
                                strError.Format(_T("In file \"%s\", Extra \"%S\" is broken: trying to display from starting offset 0x%06x to ending offset 0x%06x: that ending offset actually starts before the starting offset!\n\nPlease fix: this isn't going to work right.\n"), pszExtraFileName, aszCurrDesc, nCurrStart, nCurrEnd);
                                MessageBox(g_appHWnd, strError, _T("PalMod"), MB_ICONERROR);

                                nCurrEnd = nCurrStart + (16 * 2);
                            }

                            // Validate that they're not trying to read off the end of the ROM...
                            if ((nCurrEnd > (int)nGameROMSize) || (nCurrStart >= (int)nGameROMSize))
                            {
                                if (!fAlertedToTruncation)
                                {
                                    CString strQuestion;
                                    strQuestion.Format(_T("In file \"%s\", Extra \"%S\" is broken.\n\nThis game ROM size is 0x%06x bytes. This Extra starts at offset 0x%06x and ends at offset 0x%06x.  That won't work.\n\nPalMod is truncating this Extra so that you do not corrupt your ROM."), pszExtraFileName, aszCurrDesc, nGameROMSize, nCurrStart, nCurrEnd);

                                    MessageBox(g_appHWnd, strQuestion, GetHost()->GetAppName(), MB_OK | MB_ICONSTOP);
                                    fAlertedToTruncation = true;
                                }

                                strcpy(aszCurrDesc, "Broken: Truncated");
                                nCurrStart = min(nCurrStart, (int)(nGameROMSize - (16 * 2)));
                                nCurrEnd = min(nCurrEnd, (int)nGameROMSize);
                            }

                            UINT32 nColorsUsed = (nCurrEnd - nCurrStart) / 2; // 2 bytes per color.

                            static bool s_fShownOnce = false;
                            if (nCurrStart > nCurrEnd) // This file is broken: just make the best of it.
                            {
                                if (!s_fShownOnce)
                                {
                                    s_fShownOnce = true;
                                    CString strError;
                                    strError.Format(_T("In file \"%s\", Extra \"%S\" is trying to display %u colors (from 0x%06x to 0x%06x).  This is broken, so PalMod is overriding it.\n"), pszExtraFileName, aszCurrDesc, nColorsUsed, nCurrStart, nCurrEnd);
                                    MessageBox(g_appHWnd, strError, _T("PalMod"), MB_ICONINFORMATION);
                                }

                                nColorsUsed = 16;
                            }

                            const int nTotalPagesNeeded = (int)ceil((double)nColorsUsed / (double)k_colorsPerPage);
                            int nCurrentPage = 1;

#ifdef DUMP_EXTRAS_ON_LOAD // You can use this to convert Extras file content into usable headers.
                            CString strText;

                            // Do we want to autoslice at 128 or 256 colors...?  Probably 128, so let's use that here.
                            bool fPaletteUsesMultiplePages = (nColorsUsed > PAL_MAXAMT_8COLORSPERLINE);

                            if (fPaletteUsesMultiplePages)
                            {
                                OutputDebugString(_T("#ifdef USE_LARGE_PALETTES\n"));
                            }

                            strText.Format(_T("    { \"%S\", 0x%07x, 0x%07x }, \n"), aszCurrDesc, nCurrStart, nCurrEnd);
                            OutputDebugString(strText);
                            if (fPaletteUsesMultiplePages)
                            {
                                OutputDebugString(_T("#else\n"));
                            }
#endif

                            // I don't believe we care about color mode right here since we only support
                            // COLMODE12 and COLMODE_15 right now.
                            while (nColorsUsed > 0)
                            {
                                int nCurrentPaletteEntries = 0;

                                if (nPos)
                                {
                                    // Create a new extra node item if the range for this complete item is over PAL_MAXAMT_8COLORSPERLINE.
                                    nTotalExtensionExtraLinesHandled += 3;
                                }

                                // If you wanted to fit long palettes on one page you would need to remove this 
                                // overflow check, add an Extra compatible version of CPalGroup::AddSep, and
                                // call that from CGame_*::UpdatePalImg
                                if (nColorsUsed > k_colorsPerPage)
                                {
                                    nCurrentPaletteEntries = k_colorsPerPage;

                                    nColorsUsed -= k_colorsPerPage;
                                }
                                else
                                {
                                    nCurrentPaletteEntries = nColorsUsed;
                                    nColorsUsed = 0;
                                }

                                nArrayOffsetDesired = nStockExtrasCount + (nTotalExtensionExtraLinesHandled / 3);

                                if (nArrayOffsetDesired < nMaxExtraBufferSize)
                                {
                                    pCurrDef = &prgTempExtraBuffer[nArrayOffsetDesired];

                                    pCurrDef->uUnitN = nExtraUnitStart;
                                    if (nTotalPagesNeeded > 1)
                                    {
                                        //pCurrDef->isInvisible = (nCurrentPage == 1);
                                        _sntprintf(pCurrDef->szDesc, sizeof(pCurrDef->szDesc), _T("%S (%u/%u) 0x%x"), aszCurrDesc, nCurrentPage++, nTotalPagesNeeded, nCurrStart + (k_colorsPerPage * 2 * nPos));
                                    }
                                    else
                                    {
                                        _sntprintf(pCurrDef->szDesc, sizeof(pCurrDef->szDesc), _T("%S"), aszCurrDesc);
                                        //pCurrDef->isInvisible = false;
                                    }
                                    pCurrDef->uOffset = nCurrStart + (k_colorsPerPage * 2 * nPos);
                                    pCurrDef->cbPaletteSize = nCurrentPaletteEntries * 2;
                                    pCurrDef->isInvisible = false;
                                }

#ifdef DUMP_EXTRAS_ON_LOAD
                                if (fPaletteUsesMultiplePages)
                                {
                                    strText.Format(_T("    { \"%s\", 0x%07x, 0x%07x }, \n"), pCurrDef->szDesc, pCurrDef->uOffset, pCurrDef->uOffset + pCurrDef->cbPaletteSize);
                                    OutputDebugString(strText);
                                }
#endif

                                // Ensure that if we loop through here again we are using a new Extra node item
                                nPos++;
                            }

#ifdef DUMP_EXTRAS_ON_LOAD
                            if (fPaletteUsesMultiplePages)
                            {
                                OutputDebugString(_T("#endif\n"));
                            }
#endif

                        }
                        break;
                        }

                        nTotalExtensionExtraLinesHandled++;
                    }
                }

                if (nArrayOffsetDesired >= nMaxExtraBufferSize)
                {
                    strOutputText.Format(_T("WARNING: The '%s' Extra file exceeds maximum palette count (%u defined).\n\nPalmod has added the first %u palettes."), pszExtraFileName, nArrayOffsetDesired, nMaxExtraBufferSize);
                    // Note that this crash occurs so early we don't get to load strings.
                    MessageBox(g_appHWnd, strOutputText, _T("PalMod"), MB_ICONERROR);
                }
            }
            else
            {
                strOutputText.Format(_T("\tExtras file '%s' does not exist. Skipping.\n"), pszExtraFileName);
                OutputDebugString(strOutputText);
            }
        }
        else
        {
            OutputDebugString(_T("\tExtras file will not be loaded as the ROM size is unknown.\n"));
        }
    }

    if (*pCompleteExtraDefs == nullptr)
    {
        const int nExtraArraySize = min(nStockExtrasCount + (nTotalExtensionExtraLinesHandled / 3), nMaxExtraBufferSize);

        // These allocations are cleaned up in CGameLoad::~CGameLoad
        *pCompleteExtraDefs = new stExtraDef[nExtraArraySize + 1];

        memcpy(*pCompleteExtraDefs, prgTempExtraBuffer, nExtraArraySize * sizeof(stExtraDef));

        (*pCompleteExtraDefs)[nExtraArraySize].uUnitN = INVALID_UNIT_VALUE;

        strOutputText.Format(_T("\tAdded %u palette Extras total, including the '%s' Extra file.\n"), nExtraArraySize, pszExtraFileName);
        OutputDebugString(strOutputText);
    }

    safe_delete_array(prgTempExtraBuffer);
}

bool CGameWithExtrasFile::IsROMOffsetDuplicated(UINT16 nUnitId, UINT16 nPalId, UINT32 nStartingOffsetToCheck, UINT32 nEndOfRegionToCheck /* = 0 */)
{
    UINT32 nTotalDupesFound = 0;
    CString strDupeText;

    // If we're in Extras territory, check it against itself.
    UINT16 nUnitCountToCheck = (m_nTotalInternalUnits == nUnitId) ? m_nTotalInternalUnits + 1 : m_nTotalInternalUnits;

    //Go through each character
    for (INT16 nUnitCtr = 0; nUnitCtr < nUnitCountToCheck; nUnitCtr++)
    {
        UINT16 nPalCount = GetPaletteCountForUnit(nUnitCtr);
        for (UINT16 nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            // Yes this takes a while. Thankfully it only runs once for normal usage.  For the developer. :'(
            if ( !((nUnitId == nUnitCtr) && (nPalId == nPalCtr)))
            {
                bool fIsDupe = false;
                const UINT32 nCurrentEndOfPaletteRegion = (m_nCurrentPaletteROMLocation + (m_nCurrentPaletteSize * 2));
                if ((nStartingOffsetToCheck >= m_nCurrentPaletteROMLocation) &&
                    (nStartingOffsetToCheck < nCurrentEndOfPaletteRegion))
                {
                    fIsDupe = true;
                }
                else if (nEndOfRegionToCheck != 0)
                {
                    // This path is used for Extra files: while the core palette database is checked in all angles,
                    // for Extra files we also need to be sure that they don't contain core palette offsets
                    if ((nEndOfRegionToCheck > m_nCurrentPaletteROMLocation) &&
                        (nEndOfRegionToCheck < nCurrentEndOfPaletteRegion))
                    {
                        fIsDupe = true;
                    }
                    else if ((m_nCurrentPaletteROMLocation >= nStartingOffsetToCheck) &&
                             (m_nCurrentPaletteROMLocation < nEndOfRegionToCheck))
                    {
                        fIsDupe = true;
                    }
                }

                if (fIsDupe)
                {
                    m_pszDupedPaletteName = m_pszCurrentPaletteName;
                    nTotalDupesFound++;
                    strDupeText.Format(_T("ERROR: Unit 0x%02x pal 0x%02x ('%s', 0x%x to 0x%x) is a duplicate of unit 0x%02x pal 0x%02x (0x%x to 0x%x)!\n"), nUnitCtr, nPalCtr, m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation, nCurrentEndOfPaletteRegion, nUnitId, nPalId, nStartingOffsetToCheck, nEndOfRegionToCheck);
                    OutputDebugString(strDupeText);
                    break;
                }
            }
        }
    }

    return (nTotalDupesFound != 0);
}

int CGameWithExtrasFile::GetDupeCountInDataset()
{
    UINT32 nTotalPalettesChecked = 0;
    UINT32 nTotalDupesFound = 0;

    CString strDupeText;
    bool fCollisionFound = false;

    //Go through each character
    for (UINT16 nUnitCtr = 0; nUnitCtr < m_nTotalInternalUnits; nUnitCtr++)
    {
        if (nUnitCtr == m_nExtraUnit)
        {
            break;
        }

        UINT16 nPalCount = GetPaletteCountForUnit(nUnitCtr);
        for (UINT16 nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);
            nTotalPalettesChecked++;

            UINT32 nCurrentROMOffset = m_nCurrentPaletteROMLocation;

            if (nCurrentROMOffset == INVALID_UNIT_VALUE)
            {
                // virtual palette: ignore
                continue;
            }

            m_nLowestRomLocationThisPass = min(m_nLowestRomLocationThisPass, m_nCurrentPaletteROMLocation);

            if (IsROMOffsetDuplicated(nUnitCtr, nPalCtr, nCurrentROMOffset))
            {
                fCollisionFound = true;
                nTotalDupesFound++;
            }
        }

        if (fCollisionFound)
        {
            fCollisionFound = false;
        }
    }

    strDupeText.Format(_T("CGameWithExtrasFile::AreThereDupesInDataset: Checked %u core palettes, %u dupes found.\n"), nTotalPalettesChecked, nTotalDupesFound);
    OutputDebugString(strDupeText);

    return nTotalDupesFound;
}

int CGameWithExtrasFile::GetDupeCountInExtrasDataset()
{
    UINT32 nTotalPalettesChecked = 0;
    UINT32 nTotalDupesFound = 0;

    CString strDupeText;
    bool fCollisionFound = false;
    bool fHaveShownDupeWarning = false;

    //Go through the Extras
    UINT16 nPalCount = GetPaletteCountForUnit(m_nExtraUnit);
    for (UINT16 nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
    {
        LoadSpecificPaletteData(m_nExtraUnit, nPalCtr);
        nTotalPalettesChecked++;

        UINT32 nCurrentROMOffset = m_nCurrentPaletteROMLocation;
        UINT32 nEndOfROMOffset = m_nCurrentPaletteROMLocation + (m_nCurrentPaletteSize * 2);
        LPCTSTR pszExtraPaletteBeingChecked = m_pszCurrentPaletteName;
        m_nLowestRomExtrasLocationThisPass = min(m_nLowestRomExtrasLocationThisPass, m_nCurrentPaletteROMLocation);

        if (IsROMOffsetDuplicated(m_nExtraUnit, nPalCtr, nCurrentROMOffset, nEndOfROMOffset))
        {
            fCollisionFound = true;
            nTotalDupesFound++;

            if (!fHaveShownDupeWarning && pszExtraPaletteBeingChecked && m_pszDupedPaletteName)
            {
                fHaveShownDupeWarning = true;
                CString strText;
                strText.Format(_T("WARNING: In the %s Extras file the palette named '%s' overlaps with '%s'.  That will block patching the first palette.  Please fix this.\n"), m_pszExtraFilename, pszExtraPaletteBeingChecked, m_pszDupedPaletteName);
                OutputDebugString(strText);
                MessageBox(g_appHWnd, strText, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
    }

    strDupeText.Format(_T("CGameWithExtrasFile::AreThereDupesInExtrasDataset: Checked %u Extras palettes, %u dupes found.\n"), nTotalPalettesChecked, nTotalDupesFound);
    OutputDebugString(strDupeText);

    return nTotalDupesFound;
}

void CGameWithExtrasFile::CheckForErrorsInTables()
{
    const UINT32 nPaletteCountForRom = m_nTotalPaletteCount;
    bool fShouldCheckExtras = (GetPaletteCountForUnit(m_nExtraUnit) != 0);
    m_nLowestRomLocationThisPass = k_nBogusHighValue;
    m_nLowestRomExtrasLocationThisPass = k_nBogusHighValue;

    CString strText;
    strText.Format(_T("CGameWithExtrasFile::CheckForErrorsInTables: Safe palette count for ROM is %u.  We found %u now including extras.\n"), m_nSafeCountForThisRom, nPaletteCountForRom);
    OutputDebugString(strText);

    int nInternalDupeCount = (nPaletteCountForRom == m_nSafeCountForThisRom) ? 0 : GetDupeCountInDataset();
    int nExtraDupeCount = fShouldCheckExtras ? GetDupeCountInExtrasDataset() : 0;

    if (nInternalDupeCount || nExtraDupeCount || (m_nSafeCountForThisRom != nPaletteCountForRom))
    {
        if (nExtraDupeCount)
        {
            strText.Format(_T("WARNING: The %s Extras file contains %u duplicate palettes (including splitting).  Dupe palettes will prevent patching correctly.  Please remove them.\n"), m_pszExtraFilename, nExtraDupeCount);
        }
        else if (nInternalDupeCount)
        {
            strText.Format(_T("WARNING: There are currently %u duplicates in the hex tables.\n\nThis is a bug in PalMod.  Please report.\n"), nInternalDupeCount);
        }
        else
        {
            strText.Format(_T("Warning: This game's duplicate check count (m_nSafeCountForThisRom) should be updated.\n\nNo duplicates were found thankfully.\n"));
        }

        OutputDebugString(strText);
        MessageBox(g_appHWnd, strText, GetHost()->GetAppName(), MB_ICONERROR);
    }
    else
    {
        OutputDebugString(_T("\tCGameWithExtrasFile::CheckForErrorsInTables: This matches the last known palette count: we're good.\n"));
    }

    if (m_nLowestRomLocationThisPass != k_nBogusHighValue)
    {
        if (m_nLowestRomLocationThisPass < m_nLowestKnownPaletteRomLocation)
        {
            strText.Format(_T("Warning: This game is trying to write to ROM location 0x%06x which is lower than we usually write to (0x%06x).\n\nThis is a bug in PalMod.  Please report.\n"), m_nLowestRomLocationThisPass, m_nLowestKnownPaletteRomLocation);
            OutputDebugString(strText);
            MessageBox(g_appHWnd, strText, GetHost()->GetAppName(), MB_ICONERROR);
        }
        else
        {
            strText.Format(_T("\tCGameWithExtrasFile::CheckForErrorsInTables: All palettes were modifying expected ROM ranges (lowest was 0x%06x, we expect no lower than 0x%06x).  We're good.\n"), m_nLowestRomLocationThisPass, m_nLowestKnownPaletteRomLocation);
            OutputDebugString(strText);
        }
    }
    else
    {
        strText.Format(_T("\tCGameWithExtrasFile::CheckForErrorsInTables: Skipped the ROM location safety check since the tables checked out.\n"));
        OutputDebugString(strText);
    }

    if (m_nLowestRomExtrasLocationThisPass != k_nBogusHighValue)
    {
        if (m_nLowestRomExtrasLocationThisPass < m_nLowestKnownPaletteRomLocation)
        {
            strText.Format(_T("Warning: The currently loaded Extras file wants to write to ROM location 0x%06x which is lower than we usually write to (0x%06x).\n\nThis is possibly intentional, but: just a heads-up.\n"), m_nLowestRomExtrasLocationThisPass, m_nLowestKnownPaletteRomLocation);
            OutputDebugString(strText);
            MessageBox(g_appHWnd, strText, GetHost()->GetAppName(), MB_ICONERROR);
        }
        else
        {
            strText.Format(_T("\tCGameWithExtrasFile::CheckForErrorsInTables: All Extras palettes were modifying expected ROM ranges (lowest was 0x%06x, we expect no lower than 0x%06x).  We're good.\n"), m_nLowestRomExtrasLocationThisPass, m_nLowestKnownPaletteRomLocation);
            OutputDebugString(strText);
        }
    }
}
