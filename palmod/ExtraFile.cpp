#include "StdAfx.h"
#include <fstream>
#include "PalMod.h"

#include "ExtraFile.h"

// Uncomment this to have this file help convert an Extra file to our header style
//#define DUMP_EXTRAS_ON_LOAD

using namespace std;

// This is the most we can currently display.
constexpr auto MAX_PALETTE_SIZE = 64;

UINT32 CGameWithExtrasFile::m_nTotalPaletteCount = 0;

void LoadExtraFileForGame(LPCSTR pszExtraFileName, const stExtraDef* pBaseExtraDefs, stExtraDef** pCompleteExtraDefs, UINT8 nExtraUnitStart)
{
    ifstream extraFile;
    CHAR szTargetFile[MAX_PATH];
    int nTotalExtensionExtraLinesHandled = 0;
    int nStockExtrasCount = 0;
    int nArrayOffsetDesired = 0;

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
        OutputDebugString("BUGBUG: MEMORY CORRUPTION!\n");
    }

    const int nMaxExtraBufferSize = 1000;
    // I got a report that editing a palette wasn't saving.  Turns out it was also in their Extra file and the later unchanged palette
    // was stomping over the changed palette when we saved out.
    const int nPossibleDuplicateConcern = 100;
    stExtraDef rgTempExtraBuffer[nMaxExtraBufferSize];
    memcpy(rgTempExtraBuffer, pBaseExtraDefs, nStockExtrasCount * sizeof(stExtraDef));

    // Now we look for the Extra extension file.
    GetModuleFileName(nullptr, szTargetFile, (DWORD)MAX_PATH * sizeof(CHAR));
    CHAR* pszExeFileName = strrchr(szTargetFile, '\\') + 1;
    pszExeFileName[0] = '\0';

    strcat(szTargetFile, pszExtraFileName);

    CString strOutputText;
    strOutputText.Format("Loading extra file for '%s'...\n", pszExtraFileName);
    OutputDebugString(strOutputText);

    int nFileAttrib = GetFileAttributes(szTargetFile);
    if (((nFileAttrib & FILE_ATTRIBUTE_ARCHIVE) == FILE_ATTRIBUTE_ARCHIVE) && (nFileAttrib != INVALID_FILE_ATTRIBUTES))
    {
        CHAR szCurrLine[MAX_PATH]; // arbitrary line length: in practice it should be MAX_DESCRIPTION_LENGTH + 1
        CHAR szCurrDesc[MAX_DESCRIPTION_LENGTH];
        CHAR* szFinalLine = nullptr;
        int nCurrStart = 0;
        int nCurrEnd = 0;

        extraFile.open(szTargetFile, ios::in);

        while (!extraFile.eof())
        {
            extraFile.getline(szCurrLine, sizeof(szCurrLine));

            szFinalLine = szCurrLine;

            if (strlen(szFinalLine) && (szFinalLine[0] != ';'))
            {
                int nPrevAmt = 0;

                switch (nTotalExtensionExtraLinesHandled % 3)
                {
                case 0:
                {
                    if (iswspace(szFinalLine[0]) && (strlen(szFinalLine) == 1))
                    {
                        strOutputText.Format("Warning: Bogus entry in extension file text '%s'.  Skipping.\n", szFinalLine);
                        OutputDebugString(strOutputText);
                        continue;
                    }

                    memcpy(szCurrDesc, szFinalLine, 31);
                    szCurrDesc[31] = '\0';
                }
                break;
                case 1:
                {
                    nCurrStart = strtol(szFinalLine, nullptr, 16);

                    if (nCurrStart > 0x00800000 || nCurrStart < 0)
                    {
                        nCurrStart = 0;
                    }
                }
                break;
                case 2:
                {
                    int nPos = 0;

                    nCurrEnd = strtol(szFinalLine, nullptr, 16);

                    int nColorsUsed = (nCurrEnd - nCurrStart) / 2; // 2 bytes per color.
                    const int nTotalPagesNeeded = (int)ceil((double)nColorsUsed / (double)MAX_PALETTE_SIZE);
                    int nCurrentPage = 1;

#ifdef DUMP_EXTRAS_ON_LOAD // You can use this to convert Extras file content into usable headers.
                    CString strText;

                    bool fPaletteUsesMultiplePages = (nColorsUsed > MAX_PALETTE_SIZE);

                    if (fPaletteUsesMultiplePages)
                    {
                        OutputDebugString("#ifdef USE_LARGE_PALETTES\n");
                    }

                    strText.Format("    { \"%s\", 0x%07x, 0x%07x }, \n", szCurrDesc, nCurrStart, nCurrEnd);
                    OutputDebugString(strText);
                    if (fPaletteUsesMultiplePages)
                    {
                        OutputDebugString("#else\n");
                    }
#endif

                    // I don't believe we care about color mode right here since we only support
                    // COLMODE12 and COLMODE_15 right now.
                    while (nColorsUsed > 0)
                    {
                        int nCurrentPaletteEntries = 0;

                        if (nPos)
                        {
                            // Create a new extra node item if the range for this complete item is over MAX_PALETTE_SIZE.
                            nTotalExtensionExtraLinesHandled += 3;
                        }

                        // If you wanted to fit long palettes on one page you would need to remove this 
                        // overflow check, add an Extra compatible version of CPalGroup::AddSep, and
                        // call that from CGame_*::UpdatePalImg
                        if (nColorsUsed > MAX_PALETTE_SIZE)
                        {
                            nCurrentPaletteEntries = MAX_PALETTE_SIZE;

                            nColorsUsed -= MAX_PALETTE_SIZE;
                        }
                        else
                        {
                            nCurrentPaletteEntries = nColorsUsed;
                            nColorsUsed = 0;
                        }

                        nArrayOffsetDesired = nStockExtrasCount + (nTotalExtensionExtraLinesHandled / 3);

                        if (nArrayOffsetDesired < nMaxExtraBufferSize)
                        {
                            pCurrDef = &rgTempExtraBuffer[nArrayOffsetDesired];

                            pCurrDef->uUnitN = nExtraUnitStart;
                            if (nTotalPagesNeeded > 1)
                            {
                                //pCurrDef->isInvisible = (nCurrentPage == 1);
                                snprintf(pCurrDef->szDesc, sizeof(pCurrDef->szDesc), "%s (%u/%u)", szCurrDesc, nCurrentPage++, nTotalPagesNeeded);
                            }
                            else
                            {
                                strncpy(pCurrDef->szDesc, szCurrDesc, sizeof(pCurrDef->szDesc));
                                //pCurrDef->isInvisible = false;
                            }
                            pCurrDef->uOffset = nCurrStart + (MAX_PALETTE_SIZE * 2 * nPos);
                            pCurrDef->cbPaletteSize = nCurrentPaletteEntries * 2;
                            pCurrDef->isInvisible = false;
                        }

#ifdef DUMP_EXTRAS_ON_LOAD
                        if (fPaletteUsesMultiplePages)
                        {
                            strText.Format("    { \"%s\", 0x%07x, 0x%07x }, \n", pCurrDef->szDesc, pCurrDef->uOffset, pCurrDef->uOffset + pCurrDef->cbPaletteSize);
                            OutputDebugString(strText);
                        }
#endif

                        // Ensure that if we loop through here again we are using a new Extra node item
                        nPos++;
                    }

#ifdef DUMP_EXTRAS_ON_LOAD
                    if (fPaletteUsesMultiplePages)
                    {
                        OutputDebugString("#endif\n");
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
            strOutputText.Format("WARNING: The '%s' Extra file exceeds maximum palette count (%u defined).\n\nPalmod has added the first %u palettes.", pszExtraFileName, nArrayOffsetDesired, nMaxExtraBufferSize);
            // Note that this crash occurs so early we don't get to load strings.
            MessageBox(nullptr, strOutputText, "PalMod", MB_ICONERROR);
        }
        else if (nArrayOffsetDesired >= nPossibleDuplicateConcern)
        {
            strOutputText.Format("WARNING: The '%s' Extra file contains %u items.  Any item directly in PalMod and also in the Extras file can not be patched normally.\n\nPlease remove the duplicates from this Extras file - or don't use it.\n ", pszExtraFileName, nArrayOffsetDesired);
            MessageBox(nullptr, strOutputText, "PalMod", MB_ICONERROR);
        }
    }
    else
    {
        strOutputText.Format("\tExtras file '%s' does not exist. Skipping.\n", pszExtraFileName);
        OutputDebugString(strOutputText);
    }

    if (*pCompleteExtraDefs == nullptr)
    {
        const int nExtraArraySize = min(nStockExtrasCount + (nTotalExtensionExtraLinesHandled / 3), nMaxExtraBufferSize);

        // These allocations are cleaned up in CGameLoad::~CGameLoad
        *pCompleteExtraDefs = new stExtraDef[nExtraArraySize + 1];

        memcpy(*pCompleteExtraDefs, rgTempExtraBuffer, nExtraArraySize * sizeof(stExtraDef));

        (*pCompleteExtraDefs)[nExtraArraySize].uUnitN = INVALID_UNIT_VALUE;

        strOutputText.Format("\tAdded %u palette Extras total, including the '%s' Extra file.\n", nExtraArraySize, pszExtraFileName);
        OutputDebugString(strOutputText);
    }
}

bool CGameWithExtrasFile::IsROMOffsetDuplicated(UINT16 nUnitId, UINT16 nPalId, int nOffsetToCheck)
{
    UINT32 nTotalDupesFound = 0;
    CString strDupeText;

    //Go through each character
    for (INT16 nUnitCtr = 0; nUnitCtr < m_nTotalInternalUnits; nUnitCtr++)
    {
        UINT16 nPalCount = GetPaletteCountForUnit(nUnitCtr);
        for (UINT16 nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if ((nOffsetToCheck == m_nCurrentPaletteROMLocation) &&
                !((nUnitId == nUnitCtr) && (nPalId == nPalCtr)))
            {
                nTotalDupesFound++;
                strDupeText.Format("ERROR: Unit %u pal %u at offset 0x%06x is a duplicate of unit %u pal %u!\n", nUnitCtr, nPalCtr, nOffsetToCheck, nUnitId, nPalId);
                OutputDebugString(strDupeText);
                break;
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
    for (INT16 nUnitCtr = 0; nUnitCtr < m_nTotalInternalUnits; nUnitCtr++)
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

            int nCurrentROMOffset = m_nCurrentPaletteROMLocation;

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

    strDupeText.Format("CGameWithExtrasFile::AreThereDupesInDataset: Checked %u palettes, %u dupes found.\n", nTotalPalettesChecked, nTotalDupesFound);
    OutputDebugString(strDupeText);

    // Div 2 since each one will be matching another one internally here
    return nTotalDupesFound / 2;
}

int CGameWithExtrasFile::GetDupeCountInExtrasDataset()
{
    UINT32 nTotalPalettesChecked = 0;
    UINT32 nTotalDupesFound = 0;

    CString strDupeText;
    bool fCollisionFound = false;

    //Go through the Extras
    UINT16 nPalCount = GetPaletteCountForUnit(m_nExtraUnit);
    for (UINT16 nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
    {
        LoadSpecificPaletteData(m_nExtraUnit, nPalCtr);
        nTotalPalettesChecked++;

        int nCurrentROMOffset = m_nCurrentPaletteROMLocation;

        if (IsROMOffsetDuplicated(m_nExtraUnit, nPalCtr, nCurrentROMOffset))
        {
            fCollisionFound = true;
            nTotalDupesFound++;
        }
    }

    strDupeText.Format("CGameWithExtrasFile::AreThereDupesInExtrasDataset: Checked %u palettes, %u dupes found.\n", nTotalPalettesChecked, nTotalDupesFound);
    OutputDebugString(strDupeText);

    return nTotalDupesFound;
}

void CGameWithExtrasFile::CheckForDupesInTables()
{
    const UINT32 nPaletteCountForRom = m_nTotalPaletteCount;
    bool fShouldCheckExtras = (GetPaletteCountForUnit(m_nExtraUnit) != 0);

    CString strText;
    strText.Format("CGameWithExtrasFile::CheckForDupesInTables: Safe palette count for ROM is %u.  We found %u now.\n", m_nSafeCountForThisRom, nPaletteCountForRom);
    OutputDebugString(strText);

    int nDupeCount = (nPaletteCountForRom == m_nSafeCountForThisRom) ? 0 : GetDupeCountInDataset();
    int nExtraDupeCount = fShouldCheckExtras ? GetDupeCountInExtrasDataset() : 0;

    if (nDupeCount || nExtraDupeCount || (m_nSafeCountForThisRom != nPaletteCountForRom))
    {
        if (nExtraDupeCount)
        {
            strText.Format("WARNING: The %s Extras file used has %u duplicate palettes (including splitting) that are already in PalMod.  They will not work correctly.  Please remove them.", m_pszExtraFilename, nExtraDupeCount);
        }
        else if (nDupeCount)
        {
            strText.Format("WARNING: There are currently %u duplicates in the hex tables.\n\nThis is a bug in PalMod.  Please report.", nDupeCount);
        }
        else
        {
            strText.Format("Warning: This game's duplicate check count (m_nSafeCountForThisRom) should be updated.\n\nNo duplicates were found thankfully.");
        }

        OutputDebugString(strText);
        MessageBox(g_appHWnd, strText, GetAppName(), MB_ICONERROR);
    }
    else
    {
        OutputDebugString("\tCGameWithExtrasFile::CheckForDupesInTables: This matches the last known palette count: we're good.\n");
    }
}


