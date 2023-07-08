#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "ImgOutDlg.h"

// This code enables conversion of the image layout to a simple HTML layout.
// It's largely proof of concept: from here you potentially could do fairly interesting things.

void CImgOutDlg::ExportToHTML(CString save_str, CString output_ext, LPCWSTR pszSuggestedFileName)
{
    const int nImageCount = m_DumpBmp.m_pMainImgCtrl->GetImgAmt();

    if (nImageCount > 1)
    {
        CString strError;

        strError = L"This preview is not suited for export to HTML.  This is because this preview uses multiple RAWs.\n";
        strError.Append(L"PalMod might support this later but does not currently.\n");

        MessageBox(strError, GetHost()->GetAppName(), MB_ICONSTOP);
        return;
    }
    else
    {
        CString strOutputFilename;
        const bool fShowingSingleVersion = (m_DumpBmp.m_nTotalImagesToDisplay == 1);
        sImgNode** rgSrcImg = m_DumpBmp.m_pMainImgCtrl->GetImgBuffer();

        // We want to ensure filename syntax, so strip the extension in order to rebuild it below
        save_str.Replace(output_ext.GetString(), L"");

        for (int nImageIndex = 0; nImageIndex < nImageCount; nImageIndex++)
        {
            if (nImageCount == 1)
            {
                strOutputFilename.Format(L"%s%s", save_str.GetString(), output_ext.GetString());
            }
            else
            {
                strOutputFilename.Format(L"%s-%02x%s", save_str.GetString(), nImageIndex, output_ext.GetString());
            }

            CFile rawFile;
            if (rawFile.Open(strOutputFilename, CFile::modeCreate | CFile::modeWrite))
            {
                CStringA strOutput;

                // Print header stuff
                //uint32_t nUnicodeMarker = 0xfeff;
                //rawFile.Write(&nUnicodeMarker, sizeof(nUnicodeMarker));

                strOutput ="<!DOCTYPE html>\r\n<html>\r\n<body>\r\n\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                strOutput = "<i>This is just a proof of concept showing at least a starting point of what we can do here.  Feel free to build or expand upon this.</i><br/><br/>\r\n";

                // Game information
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                // Game information
                strOutput.Format("Game: %S<br/>\r\n", GetHost()->GetCurrGame()->GetGameName());
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                LPCSTR paszColorFormat = ColorSystem::GetColorFormatStringForColorFormat(GetHost()->GetCurrGame()->GetColorMode());
                if (paszColorFormat)
                {
                    strOutput.Format("Color Format=%s<br/><br/>\r\n", paszColorFormat);
                    rawFile.Write(strOutput.GetString(), strOutput.GetLength());
                }

                // Image information

                // We usually don't actually have the palette name itself at this point because for Export Image we look up the LP/LK/MK... linked palettes
                // for display, so GetCurrentPaletteName is potentially going to be wrong.  Hooking Export to HTML directly off of Preview instead of off of
                // Export Image would sidestep that.
                //strOutput.Format("Palette: %S<br/>\r\n", GetHost()->GetCurrGame()->GetCurrentPaletteName());
                //rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                strOutput.Format("imageWidth=%u<br/>\r\nimageHeight=%u<br/>\r\n", rgSrcImg[nImageIndex]->uImgW, rgSrcImg[nImageIndex]->uImgH);
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                strOutput = "\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                // Javascript color updates: this section could be handled in a common JS header used by each export
                strOutput = "<script>\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                for (int iCurrentColor = 0; iCurrentColor < static_cast<int>(m_DumpBmp.m_rgSrcImg[nImageIndex]->uPalSz); iCurrentColor++)
                {
                    strOutput.Format("function updateColor%02x() {\r\n", iCurrentColor);
                    rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                    strOutput.Format("  const clrDiv = document.querySelectorAll('.clr%02x');\r\n\r\n", iCurrentColor);
                    rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                    strOutput.Format("  clrDiv.forEach(element => {\r\n   element.style.backgroundColor = document.getElementById(\"colorPicker%02x\").value;\r\n});\r\n", iCurrentColor);
                    rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                    strOutput= "}\r\n\r\n";
                    rawFile.Write(strOutput.GetString(), strOutput.GetLength());
                }
                    
                strOutput = "</script>\r\n\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                // Assign CSS colors
                uint8_t* pCurrPal = (uint8_t*)m_DumpBmp.m_pppPalettes[nImageIndex][m_DumpBmp.m_nPalIndex];

                strOutput = "<style>\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                int nCurrZoomIndex = m_CB_Zoom.GetCurSel() + 1;

                for (uint32_t iCurrentColor = 0; iCurrentColor < m_DumpBmp.m_rgSrcImg[nImageIndex]->uPalSz; iCurrentColor++)
                {
                    uint32_t nCurrentPosition = iCurrentColor * 4;
                    const uint8_t currAVal = pCurrPal[nCurrentPosition + 3];
                    const uint8_t currBVal = pCurrPal[nCurrentPosition + 2];
                    const uint8_t currGVal = pCurrPal[nCurrentPosition + 1];
                    const uint8_t currRVal = pCurrPal[nCurrentPosition];

                    strOutput.Format(".clr%02x\r\n{\r\n  height:%upx;\r\n  width:%upx;\r\n", iCurrentColor, nCurrZoomIndex, nCurrZoomIndex);
                    rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                    if (iCurrentColor != 0) // 0 is transparent
                    {
                        strOutput.Format("  background-color: #%02x%02x%02x;\r\n", currRVal, currGVal, currBVal);
                        rawFile.Write(strOutput.GetString(), strOutput.GetLength());
                    }

                    strOutput = "}\r\n";
                    rawFile.Write(strOutput.GetString(), strOutput.GetLength());
                }

                strOutput = "</style>\r\n\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                // Print HTML palette table
                strOutput = "<br/>\r\nPalette table:<br/>\r\n<table width=\"\" cellpadding=\"0\" cellspacing=\"0\" style=\"border: 1px solid #000000;\">\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                for (uint32_t iCurrentColor = 0; iCurrentColor < m_DumpBmp.m_rgSrcImg[nImageIndex]->uPalSz; iCurrentColor++)
                {
                    if ((iCurrentColor % 16) == 0)
                    {
                        if (iCurrentColor != 0)
                        {
                            strOutput = "  </tr>\r\n";
                            rawFile.Write(strOutput.GetString(), strOutput.GetLength());
                        }

                        strOutput = "  <tr>\r\n";
                        rawFile.Write(strOutput.GetString(), strOutput.GetLength());
                    }

                    uint32_t nCurrentPosition = iCurrentColor * 4;
                    const uint8_t currAVal = pCurrPal[nCurrentPosition + 3];
                    const uint8_t currBVal = pCurrPal[nCurrentPosition + 2];
                    const uint8_t currGVal = pCurrPal[nCurrentPosition + 1];
                    const uint8_t currRVal = pCurrPal[nCurrentPosition];

                    strOutput.Format("    <td><input type=color value=\"#%02x%02x%02x\" id=\"colorPicker%02x\" onchange=\"updateColor%02x()\"></td>\r\n", currRVal, currGVal, currBVal, iCurrentColor, iCurrentColor);
                    rawFile.Write(strOutput.GetString(), strOutput.GetLength());
                }

                strOutput = "  </tr>\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                strOutput = "</table>\r\n\r\n<br/>\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                // Print image table
                strOutput = "\r\nPreview:<br/>\r\n<table width=\"\" cellpadding=\"0\" cellspacing=\"0\" style=\"border: 1px solid #000000;\">\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                for (size_t nRow = 0; nRow < rgSrcImg[nImageIndex]->uImgH; nRow++)
                {
                    strOutput = " <tr>";
                    rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                    for (size_t nColumn = 0; nColumn < rgSrcImg[nImageIndex]->uImgW; nColumn++)
                    {
                        if (nColumn % 10 == 0) // Line breaks are nice, but our files are huge so let's limit them
                        {
                            strOutput = "\r\n";
                            rawFile.Write(strOutput.GetString(), strOutput.GetLength());
                        }

                        strOutput.Format(" <td class=\"clr%02x\"/>", rgSrcImg[nImageIndex]->pImgData[(nRow * rgSrcImg[nImageIndex]->uImgW) + nColumn]);
                        rawFile.Write(strOutput.GetString(), strOutput.GetLength());
                    }

                    strOutput = " </tr>\r\n";
                    rawFile.Write(strOutput.GetString(), strOutput.GetLength());
                }

                strOutput = "</table>\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                strOutput = "</body>\r\n</html>\r\n";
                rawFile.Write(strOutput.GetString(), strOutput.GetLength());

                rawFile.Abort();
            }
        }
    }
}
