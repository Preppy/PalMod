#include "StdAfx.h"
#include <fstream>

#include "ExtraFile.h"

// Uncomment this to have this file help convert an Extra file to our header style
//#define DUMP_EXTRAS_ON_LOAD

using namespace std;

// This is the most we can currently display.
constexpr auto MAX_PALETTE_SIZE = 64;

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
            if (strlen(pCurrDef->szDesc))
            {
                nStockExtrasCount++;
                pCurrDef = const_cast<stExtraDef*>(&pBaseExtraDefs[nStockExtrasCount]);
            }
            else
            {
                OutputDebugString("BUGBUG: Unit has no description: please fix.\n");
                break;
            }
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
        CHAR szCurrLine[MAX_PATH];// arbitrary line length: in practice it should be MAX_DESCRIPTION_LENGTH + 1
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

                    int cbDiff = (nCurrEnd - nCurrStart);
                    //int nTotalPalettesNeeded = 1;
                    const int nTotalPagesNeeded = (int)ceil((double)cbDiff / (double)MAX_PALETTE_SIZE);
                    int nCurrentPage = 1;

#ifdef DUMP_EXTRAS_ON_LOAD // You can use this to convert Extras file content into usable headers.
                    CString strText;

                    bool fPaletteUsesMultiplePages = (cbDiff > MAX_PALETTE_SIZE);

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
                    while (cbDiff > 0)
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
                        if (cbDiff > MAX_PALETTE_SIZE)
                        {
                            nCurrentPaletteEntries = MAX_PALETTE_SIZE;

                            cbDiff -= MAX_PALETTE_SIZE;
                        }
                        else
                        {
                            nCurrentPaletteEntries = cbDiff;
                            cbDiff = 0;
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
                            pCurrDef->uOffset = nCurrStart + (MAX_PALETTE_SIZE * nPos);
                            pCurrDef->cbPaletteSize = nCurrentPaletteEntries * 2;
                            pCurrDef->isInvisible = false;
                        }

#ifdef DUMP_EXTRAS_ON_LOAD
                        if (fPaletteUsesMultiplePages)
                        {
                            strText.Format("    { \"%s\", 0x%07x, 0x%07x }, \n", pCurrDef->szDesc, pCurrDef->uOffset, pCurrDef->uOffset + (pCurrDef->cbPaletteSize / 2));
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

    if (*pCompleteExtraDefs == nullptr)
    {
        const int nExtraArraySize = min(nStockExtrasCount + (nTotalExtensionExtraLinesHandled / 3), nMaxExtraBufferSize);

        *pCompleteExtraDefs = new stExtraDef[nExtraArraySize + 1];

        memcpy(*pCompleteExtraDefs, rgTempExtraBuffer, nExtraArraySize * sizeof(stExtraDef));

        (*pCompleteExtraDefs)[nExtraArraySize].uUnitN = INVALID_UNIT_VALUE;

        strOutputText.Format("\tAdded %u palettes from the '%s' Extra file.\n", nExtraArraySize, pszExtraFileName);
        OutputDebugString(strOutputText);
    }
}
