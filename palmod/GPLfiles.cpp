#include "stdafx.h"
#include <fstream>
#include <charconv>
#include "PalMod.h"
#include "PalModDlg.h"
#include "PaletteImport.h"

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

bool CPaletteImport::GetPaletteFromGPL(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette)
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

            rgbaPalette.clear();

            // GPL doesn't have a lead transparency bit so just add our own
            rgbaPalette.push_back(0x00);
            rgbaPalette.push_back(0x00);
            rgbaPalette.push_back(0x00);
            rgbaPalette.push_back(0x00);

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

                    rgbaPalette.push_back(static_cast<uint8_t>(atoi(strColor.c_str())));
                }
                
                // insert a dummy alpha value since GPL doesn't hae this byte
                rgbaPalette.push_back(0xff);

                nColorsFound++;
            }

            fSuccess = (nColorsFound > 1);
        }

        gplFile.close();
    }

    return fSuccess && !rgbaPalette.empty();
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

        const uint16_t nPaletteCount = static_cast<uint16_t>(m_PalHost.GetCurrentPaletteCount());

        for (uint16_t nCurrentPalette = 0; nCurrentPalette < nPaletteCount; nCurrentPalette++)
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
