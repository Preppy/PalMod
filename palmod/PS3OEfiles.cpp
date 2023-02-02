#include "stdafx.h"
#include "PalMod.h"

bool CPalModDlg::LoadPaletteFromPS3SF3OETXT(LPCWSTR pszFileName)
{
    CString strMsg;
    bool fSuccess = false;
    CStdioFile SF3DLCFile;

    if (SF3DLCFile.Open(pszFileName, CFile::modeRead))
    {
        bool fAbleToReadFile = false;

        CString strCharacterName;
        fAbleToReadFile = SF3DLCFile.ReadString(strCharacterName);
        CString strDLCName;
        fAbleToReadFile = fAbleToReadFile && SF3DLCFile.ReadString(strDLCName);
        CString strDLCLoc;
        fAbleToReadFile = fAbleToReadFile && SF3DLCFile.ReadString(strDLCLoc);
        CString strDLCLocDesc;
        fAbleToReadFile = fAbleToReadFile && SF3DLCFile.ReadString(strDLCLocDesc);

        if (fAbleToReadFile)
        {
            CString strCurrentColors;
            CGameClass* CurrGame = GetHost()->GetCurrGame();

            // Only import the full set if we're on the core colors
            sPalDef* spdPalInfo = MainPalGroup->GetPalDef(0);

            int nActivePaletteId = spdPalInfo->uPalId;
            const int nPaletteDistance = CurrGame->GetCurrentPaletteIncrement();

            if ((nActivePaletteId != 0) && (nPaletteDistance != 0))
            {
                // Convert from absolute index to step-based index
                nActivePaletteId /= nPaletteDistance;
            }

            const int nHowManyColorsToImport = CurrGame->GetImgOutPalAmt();
            const uint32_t nUnitId = spdPalInfo->uUnitId;

            int iKeyPosition = strCharacterName.Find('=');
            strCharacterName.Delete(0, iKeyPosition + 1);
            OutputDebugString(strCharacterName);
            OutputDebugString(L"\n");
            iKeyPosition = strDLCName.Find('=');
            OutputDebugString(strDLCName.Mid(iKeyPosition + 1));
            OutputDebugString(L"\n");

            // localize
            CString strMsg;
            strMsg.Format(L"This file appears to contain seven palettes for '%s'.\n\nDo you wish to apply %s to the current character?", strCharacterName.GetString(), (nActivePaletteId == 0) ? L"these" : L"the current color");

            if (MessageBox(strMsg, GetHost()->GetAppName(), MB_YESNO) == IDYES)
            {
                ProcChange();

                for (int iPaletteId = 0; iPaletteId < nHowManyColorsToImport; iPaletteId++)
                {
                    if (SF3DLCFile.ReadString(strCurrentColors))
                    {
                        if ((nActivePaletteId != 0) && (nActivePaletteId != iPaletteId))
                        {
                            // Only copy the current color
                            continue;
                        }

                        const uint32_t nDLCColorCount = 64;
                        std::array<COLORREF, nDLCColorCount> rgDLCColors = {};

                        // OK, now parse the actual colors.
                        iKeyPosition = strCurrentColors.Find('=');
                        CString strColorList = strCurrentColors.Mid(iKeyPosition + 1);
                        OutputDebugString(strCurrentColors.Left(iKeyPosition));
                        OutputDebugString(L"\n");

                        for (uint32_t iPosition = 0; iPosition < nDLCColorCount; iPosition++)
                        {
                            // The final pass won't have a trailing ',', so just use the raw string at that point
                            const int iEndPosition = strColorList.Find(',');
                            CString strThisColor = (iEndPosition != -1) ? strColorList.Left(iEndPosition) : strColorList;

                            uint32_t nThisColor = _wtol(strThisColor);
                            uint8_t alpha = (nThisColor & 0xFF000000) >> 24;
                            uint8_t red = (nThisColor & 0xFF0000) >> 16;
                            uint8_t green = (nThisColor & 0xFF00) >> 8;
                            uint8_t blue = (nThisColor & 0xFF);

                            rgDLCColors.at(iPosition) = RGB(red, green, blue) | (alpha << 24);

                            //strMsg.Format(L"Converted color %u :: %s to rgb 0x%x\n", iPosition, strThisColor.GetString(), pDLCColors[iPosition]);
                            //OutputDebugString(strMsg.GetString());

                            strColorList.Delete(0, iEndPosition + 1);
                        }

                        // Now consume those colors...
                        if (spdPalInfo->uPalId == (iPaletteId * nPaletteDistance))
                        {
                            // This is the active palette: use the palgroup logic so we get easy live updates
                            uint8_t* pVisiblePalette = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(0)->pPal);

                            for (int iCurrentIndexInPalette = 0; iCurrentIndexInPalette < nDLCColorCount; iCurrentIndexInPalette++)
                            {
                                pVisiblePalette[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetRValue(rgDLCColors.at(iCurrentIndexInPalette)));
                                pVisiblePalette[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetGValue(rgDLCColors.at(iCurrentIndexInPalette)));
                                pVisiblePalette[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetBValue(rgDLCColors.at(iCurrentIndexInPalette)));
                            }
                        }
                        else
                        {
                            // These are the inactive palettes: we need to directly update these
                            CurrGame->WritePal(nUnitId, (iPaletteId * nPaletteDistance), &rgDLCColors[0], nDLCColorCount);
                            CurrGame->MarkPaletteDirty(nUnitId, (iPaletteId * nPaletteDistance));
                        }
                    }
                }

                ImgDispCtrl->UpdateCtrl();
                m_PalHost.UpdateAllPalCtrls();

                UpdateMultiEdit(TRUE);
                UpdateSliderSel();

                fSuccess = true;

                // localize
                CString strStatus;
                strStatus.Format(L"Imported %u %s palettes.", nHowManyColorsToImport, strCharacterName.GetString());
                SetStatusText(strStatus);
            }
        }

        if (!fSuccess)
        {
            // localize
            SetStatusText(L"Palettes were not imported.");
        }
    }

    return fSuccess;
}
