#include "stdafx.h"
#include <fstream>
#include <charconv>
#include "PalMod.h"
#include "PalModDlg.h"

// GPL files are GIMP palette files.  They look like:
//     GIMP Palette
//     Name: <NAMEVALUE>
//     Columns: <COL_COUNT, 0-256>
//     # '#' is the prefix for comment lines
//     RRR GGG BBB <Name>
// where the RGB values are decimal integer values between 0 and 255.

constexpr auto k_GPLMagicKey = "GIMP Palette";
constexpr auto k_GPLName = "Name: ";
constexpr auto k_GPLColumns = "Columns: ";

bool CPalModDlg::LoadPaletteFromGPL(LPCWSTR pszFileName)
{
    bool fSuccess = false;

    std::ifstream gplFile = {};

    gplFile.open(pszFileName, std::ios::in);

    if (gplFile.is_open())
    {
        std::string strCurrLine;
        std::string strName = "Untitled";
        constexpr auto k_maxGPLColorCount = 256;
        uint32_t nColumnCount = k_maxGPLColorCount + 1; // invalid length
        uint32_t nColorsFound = 0;

        ProcChange();

        // check for magic key
        std::getline(gplFile, strCurrLine);
        if (strCurrLine == k_GPLMagicKey)
        {
            std::getline(gplFile, strCurrLine);

            if (strCurrLine.compare(0, strlen(k_GPLName), k_GPLName) == 0)
            {
                strName = strCurrLine.substr(strlen(k_GPLName));
            }

            std::getline(gplFile, strCurrLine);

            if (strCurrLine.compare(0, strlen(k_GPLColumns), k_GPLColumns) == 0)
            {
                std::string strTemp = strCurrLine.substr(strlen(k_GPLColumns));

                std::from_chars(strTemp.c_str(), strTemp.c_str() + strTemp.length(), nColumnCount);
            }
        }

        if (nColumnCount <= k_maxGPLColorCount)
        {
            if (nColumnCount == 0)
            {
                nColumnCount = k_maxGPLColorCount;
            }

            std::vector<uint8_t> rgRGBVals = {};

            // obtain colors.  delimiters are ' ' or '\t'
            while (std::getline(gplFile, strCurrLine))
            {
                std::string strColor;

                if (strCurrLine.at(0) == '#')
                {
                    continue;
                }

                size_t iFound = 0, iLast = 0;
                for (uint8_t iPos = 0; iPos < 3; iPos++)
                {
                    // Handle ' 55' and '  3' values.
                    if (strCurrLine.at(iLast) == ' ')
                    {
                        iLast++;
                    }

                    if (strCurrLine.at(iLast) == ' ')
                    {
                        iLast++;
                    }

                    iFound = strCurrLine.find_first_of(" \t", iLast);

                    if (iFound == std::string::npos)
                    {
                        if (iLast < strCurrLine.length())
                        {
                            strColor = strCurrLine.substr(iLast, std::string::npos);
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                    {
                        strColor = strCurrLine.substr(iLast, iFound - iLast);
                        iLast = iFound + 1;
                    }

                    rgRGBVals.push_back(static_cast<uint8_t>(atoi(strColor.c_str())));
                }

                nColorsFound++;
            }

            if (nColorsFound && ((rgRGBVals.size() / static_cast<float>(nColorsFound)) == 3.0))
            {
                // Now consume those colors...
                const uint8_t nTotalPaletteCount = MainPalGroup->GetPalAmt();
                uint32_t nTotalNumberOfCurrentColors = 0;

                for (uint32_t nPalette = 0; nPalette < nTotalPaletteCount; nPalette++)
                {
                    nTotalNumberOfCurrentColors += MainPalGroup->GetPalDef(nPalette)->uPalSz;
                }

                uint16_t iGPLIndex = 0;
                uint16_t nCurrentPalette = 0;
                uint16_t nTotalColorsUsed = 0;
                bool fHaveLooped = false;
                uint16_t iCurrentIndexInPalette = 1; // skip transparency color
                uint8_t* pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);

                bool fHaveMultiplePalettes = (nTotalPaletteCount != 1);
                bool* rgfGPLHasColorsForThisPalette = new bool[nTotalPaletteCount];
                memset(rgfGPLHasColorsForThisPalette, false, sizeof(bool) * nTotalPaletteCount);
                rgfGPLHasColorsForThisPalette[0] = true;

                if (fHaveMultiplePalettes)
                {
                    // we have multiple palettes: ensure that we only use useful data from the GPL
                    uint32_t nTotalColorsNeeded = 0;
                    for (uint8_t iPalette = 1; iPalette < nTotalPaletteCount; iPalette++)
                    {
                        nTotalColorsNeeded += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                        if (nTotalColorsNeeded <= nColorsFound)
                        {
                            rgfGPLHasColorsForThisPalette[iPalette] = true;
                        }
                    }
                }

                iGPLIndex = 0;

                for (size_t iAbsolutePaletteIndex = 1; iAbsolutePaletteIndex < nTotalNumberOfCurrentColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
                {
                    pPal[(iCurrentIndexInPalette * 4)    ] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgRGBVals.at(iGPLIndex++));
                    pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgRGBVals.at(iGPLIndex++));
                    pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgRGBVals.at(iGPLIndex++));
                    pPal[(iCurrentIndexInPalette * 4) + 3] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_A(0xFF);

                    if (iGPLIndex >= (nColorsFound * 3))
                    {
                        // If the palette is larger than our GPL, loop it.
                        iGPLIndex = 0;
                        fHaveLooped = true;
                    }

                    iCurrentIndexInPalette++;
                    if (((nCurrentPalette + 1) < nTotalPaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                    {
                        if (fHaveLooped)
                        {
                            // Applying a looping palette to a secondary palette will be generally illogical, so don't
                            nTotalColorsUsed++;
                            break;
                        }
                        else
                        {
                            // advance to the next palette
                            nCurrentPalette++;

                            if (rgfGPLHasColorsForThisPalette[nCurrentPalette])
                            {
                                iCurrentIndexInPalette = 1;
                                pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                }

                safe_delete_array(rgfGPLHasColorsForThisPalette);

                ImgDispCtrl->UpdateCtrl();
                m_PalHost.UpdateAllPalCtrls();

                UpdateMultiEdit(TRUE);
                UpdateSliderSel();

                fSuccess = true;
                CString strStatus;
                strStatus.Format(IDS_GPL_LOADED, nTotalColorsUsed, nColorsFound);
                SetStatusText(strStatus);
            }
        }

        gplFile.close();
    }

    if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(IDS_GPL_LOADFAILURE);
    }

    return fSuccess;
}

void CPalModDlg::SavePaletteToGPL(LPCWSTR pszFileName, bool& fShouldShowGenericError)
{
    CFile GPLFile;
    bool fSuccess = false;

    // Save to GPL file.
    if (GPLFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite))
    {
        char szBuffer[MAX_PATH];
        uint8_t* pPal = reinterpret_cast<uint8_t*>(CurrPalCtrl->GetBasePal());
        int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
        int nColumnCount = nWorkingAmt; // This tracks the numbers of colors listed in the file
        uint8_t nDesiredPalettePageCount = 0;
        uint8_t nAllowedPalettePageCount = 1;

        if (CurrPalCtrl->GetSelAmt() == 0) // they want everything
        {
            nDesiredPalettePageCount = m_PalHost.GetCurrentPageCount();
        }
        else
        {
            nDesiredPalettePageCount = 1;
        }

        for (uint8_t nCurrentPage = 1; nCurrentPage < nDesiredPalettePageCount; nCurrentPage++)
        {
            CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

            if (pPalCtrlNextPage)
            {
                const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                if ((nNextPageWorkingAmt + nWorkingAmt) < 256)
                {
                    nWorkingAmt += nNextPageWorkingAmt;
                    nAllowedPalettePageCount++;
                }
            }
        }

        // Write the header...
        strcpy(szBuffer, "GIMP Palette\n");
        GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));
        _snprintf_s(szBuffer, ARRAYSIZE(szBuffer), _TRUNCATE, "Name: %S\n", m_PalHost.GetPalName(0));
        GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));
        _snprintf_s(szBuffer, ARRAYSIZE(szBuffer), _TRUNCATE, "Columns: %u\n", nWorkingAmt);
        GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));
        strcpy(szBuffer, "# Created by PalMod\n");
        GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));

        // Write out the colors...
        // Skip the first color for GIMP's usage
        int nTotalColorsUsed = 1;
        for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
        {
            _snprintf_s(szBuffer, ARRAYSIZE(szBuffer), _TRUNCATE, "%3u %3u %3u\n", pPal[nTotalColorsUsed * 4], pPal[nTotalColorsUsed * 4 + 1], pPal[nTotalColorsUsed * 4 + 2]);
            GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));
        }

        for (uint8_t nCurrentPage = 1; nCurrentPage < nAllowedPalettePageCount; nCurrentPage++)
        {
            CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

            if (pPalCtrlNextPage)
            {
                const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                for (int nActivePageIndex = 0; nActivePageIndex < nNextPageWorkingAmt; nActivePageIndex++)
                {
                    _snprintf_s(szBuffer, ARRAYSIZE(szBuffer), _TRUNCATE, "%3u %3u %3u\n", pPal[nTotalColorsUsed * 4], pPal[nTotalColorsUsed * 4 + 1], pPal[nTotalColorsUsed * 4 + 2]);
                    GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));
                    nTotalColorsUsed++;
                }
            }
        }

        GPLFile.Close();
        fSuccess = true;
    }

    SetStatusText(fSuccess ? IDS_GPLSAVE_SUCCESS : IDS_GPLSAVE_FAILURE);

    fShouldShowGenericError = !fSuccess;
}
