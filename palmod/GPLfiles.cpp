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
    CGameClass* CurrGame = GetHost()->GetCurrGame();

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
                const uint32_t nTotalPaletteCount = MainPalGroup->GetPalAmt();
                uint32_t nTotalNumberOfCurrentColors = 0;

                for (uint32_t nPalette = 0; nPalette < nTotalPaletteCount; nPalette++)
                {
                    nTotalNumberOfCurrentColors += MainPalGroup->GetPalDef(nPalette)->uPalSz;
                }

                uint16_t iGPLIndex = 0;
                uint32_t nCurrentPalette = 0;
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
                    for (uint32_t iPalette = 1; iPalette < nTotalPaletteCount; iPalette++)
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
                    pPal[(iCurrentIndexInPalette * 4)    ] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgRGBVals.at(iGPLIndex++));
                    pPal[(iCurrentIndexInPalette * 4) + 1] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgRGBVals.at(iGPLIndex++));
                    pPal[(iCurrentIndexInPalette * 4) + 2] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgRGBVals.at(iGPLIndex++));
                    pPal[(iCurrentIndexInPalette * 4) + 3] = CurrGame->GetNearestLegal8BitColorValue_A(0xFF);

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
                                iCurrentIndexInPalette = 0;
                                pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);
                            }
                            else
                            {
                                break;
                            }
                        }
                    }

                    if ((iGPLIndex == 0) && (iAbsolutePaletteIndex < nTotalNumberOfCurrentColors))
                    {
                        // GPLs have no lead transparency bit, so when we loop an application, inject a dummy color
                        pPal[(iCurrentIndexInPalette * 4)]     = CurrGame->GetNearestLegal8BitColorValue_RGB(0);
                        pPal[(iCurrentIndexInPalette * 4) + 1] = CurrGame->GetNearestLegal8BitColorValue_RGB(0);
                        pPal[(iCurrentIndexInPalette * 4) + 2] = CurrGame->GetNearestLegal8BitColorValue_RGB(0);
                        pPal[(iCurrentIndexInPalette * 4) + 3] = CurrGame->GetNearestLegal8BitColorValue_A(0xFF);
                        iAbsolutePaletteIndex++;
                        iCurrentIndexInPalette++;
                        nTotalColorsUsed++;
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
    // The design here is that we export out the maximum possible number of palettes to the palette file,
    // up to a maximum of 256 colors.

    CFile GPLFile;
    bool fSuccess = false;

    // Save to GPL file.
    if (GPLFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite))
    {
        const uint16_t k_nColorsPerPalette = 256; // An HPAL has 256 colors.  Fill with black as needed.
        int nTotalColorsToWrite = 0;
        char szBuffer[MAX_PATH];

        const uint8_t nPaletteCount = m_PalHost.GetCurrentPaletteCount();

        for (uint8_t nCurrentPalette = 0; nCurrentPalette < nPaletteCount; nCurrentPalette++)
        {
            CJunk* pPalette = m_PalHost.GetPalCtrl(nCurrentPalette);

            if (pPalette)
            {
                const int nPaletteWorkingAmt = pPalette->GetWorkingAmt();

                if ((nPaletteWorkingAmt + nTotalColorsToWrite) < k_nColorsPerPalette)
                {
                    nTotalColorsToWrite += nPaletteWorkingAmt;
                }
            }
        }

        // Write the header...
        strcpy(szBuffer, "GIMP Palette\n");
        GPLFile.Write(szBuffer, static_cast<UINT>(strlen(szBuffer)));
        _snprintf_s(szBuffer, ARRAYSIZE(szBuffer), _TRUNCATE, "Name: %S\n", m_PalHost.GetPalName(0));
        GPLFile.Write(szBuffer, static_cast<UINT>(strlen(szBuffer)));
        _snprintf_s(szBuffer, ARRAYSIZE(szBuffer), _TRUNCATE, "Columns: %u\n", nTotalColorsToWrite);
        GPLFile.Write(szBuffer, static_cast<UINT>(strlen(szBuffer)));
        strcpy(szBuffer, "# Created by PalMod\n");
        GPLFile.Write(szBuffer, static_cast<UINT>(strlen(szBuffer)));

        // Write out the colors...
        int nTotalColorsUsed = 0;

        for (uint8_t nCurrentPalette = 0; nCurrentPalette < nPaletteCount; nCurrentPalette++)
        {
            CJunk* pPalette = m_PalHost.GetPalCtrl(nCurrentPalette);

            if (pPalette)
            {
                const int nPaletteWorkingAmt = pPalette->GetWorkingAmt();

                if ((nTotalColorsUsed + nPaletteWorkingAmt) > k_nColorsPerPalette)
                {
                    break;
                }

                uint8_t* pPal = reinterpret_cast<uint8_t*>(pPalette->GetBasePal());

                int nActivePaletteIndex = 0;

                if (nCurrentPalette == 0)
                {
                    // Skip the first color of the first palette for GIMP's usage
                    nActivePaletteIndex = 1;
                    nTotalColorsUsed++;
                }

                for (; nActivePaletteIndex < nPaletteWorkingAmt; nActivePaletteIndex++)
                {
                    _snprintf_s(szBuffer, ARRAYSIZE(szBuffer), _TRUNCATE, "%3u %3u %3u\n", pPal[(nActivePaletteIndex * 4)], pPal[(nActivePaletteIndex * 4) + 1], pPal[(nActivePaletteIndex * 4) + 2]);
                    GPLFile.Write(szBuffer, static_cast<UINT>(strlen(szBuffer)));
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
