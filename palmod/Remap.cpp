#include "stdafx.h"
#include "PalModDlg.h"
#include "PalMod.h"

void CPalModDlg::OnRemapUnit()
{
    CGameClass* CurrGame = GetHost()->GetCurrGame();

    if (CurrGame)
    {
        const int nSelectedUnit = CurrGame->m_rgUnitRedir.at(m_CBUnitSel.GetCurSel());

        sDescTreeNode* pSelectedUnit = CurrGame->GetMainTree()->GetDescTree(nSelectedUnit, -1);

        UINT uTypes = 0;
        CString strMessage;

        if (_wcsicmp(pSelectedUnit->szDesc, CurrGame->GetExtraUnitDescription()) == 0)
        {
            // This could be handled at the menu item enable/disable level, but the problem is we don't have a quick "IsExtrasUnit" check
            OutputDebugString(L"We can not remap Extra units at this time.\r\n");
            uTypes = MB_ICONERROR | MB_OK;
            strMessage = L"This feature can not be used to remap Extra units.";
        }
        else
        {
            uTypes = MB_ICONINFORMATION | MB_YESNO | MB_DEFBUTTON1;
            strMessage.Format(
                L"This is a power user feature.  This will automatically search for locations of all palettes in the currently loaded unit (\"%s\")"
                L" in another ROM.  This is a potentially lengthy binary search process that can be helpful to find locations of known"
                L" palettes for one game (or game version) in the file(s) of a second game (or game version).\r\n\r\n"
                L"You will first select the ROM you want to map things TO.  Then you will select the file you want to write the results to.", pSelectedUnit->szDesc);

            strMessage += L"\r\n\r\nSome palettes may exist in multiple locations in the new file: we'll show you those multiple results as well as the associated deltas."
                          L" You will generally want to use the same deltas for any given 'block' of palettes."
                          L" If the entire unit remap shares the same offset, you should just reuse the existing unit and set the loading offset value for that unit."
                          L"\r\n\r\nWant to continue?";
        }

        int answer = MessageBox(strMessage, GetHost()->GetAppName(), uTypes);

        CFileDialog ChooseRemapFileDialog(TRUE, NULL, NULL, OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST);

        LPCWSTR pszOutputFilter = L"Save as Extras file|*.txt|"
                                   L"Save as C++ header|*.h||";
        CFileDialog SaveOutputDialog(FALSE, L".txt", nullptr, OFN_OVERWRITEPROMPT | OFN_HIDEREADONLY, pszOutputFilter);

        if ((answer == IDYES) && 
            (ChooseRemapFileDialog.DoModal() == IDOK) &&
            (SaveOutputDialog.DoModal() == IDOK))
        {
            CWaitCursor wait;
            CString strFileName = ChooseRemapFileDialog.GetOFN().lpstrFile;
            CFile NewROMFile;
            std::vector<BYTE> newROMBytes;

            OPENFILENAME SaveFileOFN = SaveOutputDialog.GetOFN();

            SetStatusText(L"Starting remap...");

            if (NewROMFile.Open(strFileName, CFile::modeRead | CFile::typeBinary))
            {
                ULONGLONG lengthNewROM = NewROMFile.GetLength();

                if (lengthNewROM)
                {
                    newROMBytes.resize(static_cast<size_t>(lengthNewROM));
                    NewROMFile.Read(newROMBytes.data(), static_cast<UINT>(lengthNewROM));
                }

                NewROMFile.Close();
            }

            if (!newROMBytes.empty())
            {
                CString strInfo;

                ColMode currColMode = CurrGame->GetColorMode();
                const uint8_t cbColorSize = ColorSystem::GetCbForColMode(currColMode);
                const bool fUseExtrasMode = SaveFileOFN.nFilterIndex != 2;
                const std::wstring strExtrasComment = L";";
                const std::wstring strCodeComment = L"//";
                const std::wstring strActiveCommentStyle = fUseExtrasMode ? strExtrasComment : strCodeComment;
                uint32_t nCountPalettesMapped = 0, nCountPalettesExisting = 0;

                CString strOutput;

                // Assemble the search strings.
                // Note that we CANNOT reliably search against the transparency color. 
                // Those tend to vary wildly!
                std::vector<std::pair<const sGame_PaletteDataset*, std::vector<BYTE>>> rgSearchBytes;

                strInfo.Format(L"%s Remapping unit \"%s\" to file \"%s\".  %u child nodes found.\r\n", strActiveCommentStyle.c_str(), pSelectedUnit->szDesc, strFileName.GetString(), pSelectedUnit->uChildAmt);
                strOutput += strInfo;

                if (fUseExtrasMode)
                {
                    // take advantage of parser rules
                    strInfo.Format(L"%s---%s\r\n", strActiveCommentStyle.c_str(), pSelectedUnit->szDesc);
                    strOutput += strInfo;
                }

                for (uint32_t iCollectionIndex = 0; iCollectionIndex < pSelectedUnit->uChildAmt; iCollectionIndex++)
                {
                    const sGame_PaletteDataset* paletteDataSet = CurrGame->GetPaletteSet(nSelectedUnit, iCollectionIndex);

                    if (!paletteDataSet)
                    {
                        // TODO: this blocks GameClassByUnitPerFile iteration through this code, but
                        // we should solve it differently.
                        strOutput += L"ERROR: Remapping not currently supported for this specific game version: PalMod needs to update the game layout.\r\n";
                        break;
                    }

                    sDescTreeNode* pCurrentCollection = &((sDescTreeNode*)pSelectedUnit->ChildNodes)[iCollectionIndex];
                    sDescNode* pCurrentNode = nullptr;
                    const sGame_PaletteDataset* thisPalette = nullptr;

                    strInfo.Format(L"\r\n%s\tCollection \"%s\": %u palettes found in old collection.\r\n", strActiveCommentStyle.c_str(), pCurrentCollection->szDesc, pCurrentCollection->uChildAmt);
                    strOutput += strInfo;

                    strInfo.Format(L"Remapping collection \"%s\" (%u/%u).  %u palettes in this collection.", pCurrentCollection->szDesc, iCollectionIndex, pSelectedUnit->uChildAmt, pCurrentCollection->uChildAmt);
                    SetStatusText(strInfo.GetString());

                    if (fUseExtrasMode)
                    {
                        // take advantage of parser rules
                        strInfo.Format(L"%s--%s\r\n", strActiveCommentStyle.c_str(), pCurrentCollection->szDesc);
                        strOutput += strInfo;
                    }

                    for (uint32_t iPaletteIndex = 0; iPaletteIndex < pCurrentCollection->uChildAmt; iPaletteIndex++)
                    {
                        pCurrentNode = &((sDescNode*)pCurrentCollection->ChildNodes)[iPaletteIndex];
                        thisPalette = &paletteDataSet[iPaletteIndex];

                        std::vector<BYTE> searchBytes = CurrGame->GetRawPaletteBytes(pCurrentNode->uUnitId, pCurrentNode->uPalId);

                        // This information is largely redundant
                        //strInfo.Format(L"\t\tPalette \"%s\" (%u, %u) %u colors.\r\n", pCurrentNode->szDesc, pCurrentNode->uUnitId, pCurrentNode->uPalId, searchBytes.size());
                        //strOutput += strInfo;

                        if (thisPalette)
                        {
                            rgSearchBytes.push_back({ thisPalette, searchBytes });
                            nCountPalettesExisting++;
                        }
                    }

                    strInfo.Format(L"%s Remapped locations for \"%s\" in new ROM (note this is speculative):\r\n", strActiveCommentStyle.c_str(), pCurrentCollection->szDesc);
                    strOutput += strInfo;

                    uint32_t nLastStartingLocation = 0;
                    uint32_t nLastMappedLocation = 0;

                    for (auto searchColors : rgSearchBytes)
                    {
                        // Search for search strings
                        if (searchColors.second.size() > 4)
                        {
                            // Ignore the first transparency color per above
                            auto it_secondcolor = std::next(searchColors.second.begin(), cbColorSize);
                            auto it_foundcoloroffset = std::search(newROMBytes.begin(), newROMBytes.end(), it_secondcolor, searchColors.second.end());

                            if (it_foundcoloroffset != newROMBytes.end())
                            {
                                nCountPalettesMapped++;

                                uint32_t nStartingMappedOffset = static_cast<uint32_t>(std::distance(newROMBytes.begin(), it_foundcoloroffset));

                                if (nStartingMappedOffset > cbColorSize)
                                {
                                    nStartingMappedOffset -= cbColorSize;
                                }

                                uint32_t nTerminalOffset = nStartingMappedOffset + static_cast<uint32_t>(searchColors.second.size());
                                int32_t nThisLocationRemapDelta = nStartingMappedOffset - searchColors.first->nPaletteOffset;

                                const int32_t nLastLocationRemapDelta = nLastMappedLocation - nLastStartingLocation;

                                if (nLastLocationRemapDelta != nThisLocationRemapDelta)
                                {
                                    // ok, the delta has changed: let's see if this is because there are multiple matches
                                    auto it_afterfirstresult = it_foundcoloroffset + 1;
                                    auto it_secondresult = std::search(it_afterfirstresult, newROMBytes.end(), it_secondcolor, searchColors.second.end());

                                    if (it_secondresult != newROMBytes.end())
                                    {
                                        if (nLastMappedLocation)
                                        {
                                            strInfo.Format(L"%s Warning: the remapped delta shifts from 0x%x to 0x%x!\r\n", strActiveCommentStyle.c_str(), nLastLocationRemapDelta, nThisLocationRemapDelta);
                                            strOutput += strInfo;
                                        }

                                        strInfo.Format(L"%s Match at 0x%x, 0x%x (delta 0x%x)\r\n", strActiveCommentStyle.c_str(), nStartingMappedOffset, nTerminalOffset, nThisLocationRemapDelta);
                                        strOutput += strInfo;
                                    }

                                    // We should only raise concerns if the pattern is replicated in the ROM
                                    while (it_secondresult != newROMBytes.end())
                                    {
                                        uint32_t nSecondMappedOffset = static_cast<uint32_t>(std::distance(newROMBytes.begin(), it_secondresult));

                                        if (nSecondMappedOffset > cbColorSize)
                                        {
                                            nSecondMappedOffset -= cbColorSize;
                                        }

                                        const int32_t alternative_delta = nSecondMappedOffset - searchColors.first->nPaletteOffset;

                                        const uint32_t nAltTerminalOffset = nSecondMappedOffset + static_cast<uint32_t>(searchColors.second.size());

                                        strInfo.Format(L"%s Match at 0x%x, 0x%x (delta 0x%x)", strActiveCommentStyle.c_str(), nSecondMappedOffset, nAltTerminalOffset, alternative_delta);

                                        if (nLastLocationRemapDelta == alternative_delta)
                                        {
                                            strInfo += L" <-- swapped to use this one";
                                            nStartingMappedOffset = nSecondMappedOffset;
                                            nTerminalOffset = nAltTerminalOffset;
                                            nThisLocationRemapDelta = alternative_delta;
                                        }

                                        strInfo += L"\r\n";

                                        strOutput += strInfo;

                                        // reset
                                        it_secondresult++;
                                        it_secondresult = std::search(it_secondresult, newROMBytes.end(), it_secondcolor, searchColors.second.end());
                                    }
                                }

                                nLastMappedLocation = nStartingMappedOffset;
                                // this is sloppy because of remapping done in LoadPalette
                                nLastStartingLocation = searchColors.first->nPaletteOffset;

                                if (fUseExtrasMode)
                                {
                                    strInfo.Format(L"%s\r\n0x%x\r\n0x%x", searchColors.first->szPaletteName, nStartingMappedOffset, nTerminalOffset);

                                    CString strExtraData;

                                    if (searchColors.first->indexImgToUse != INVALID_UNIT_VALUE_16)
                                    {
                                        // Extras doesn't want the ImageId prefix, so instead use deliberately prepend a searchable triple space
                                        strExtraData.Format(L",   0x%x, 0x%02x", searchColors.first->indexImgToUse, searchColors.first->indexOffsetToUse);

                                        if (searchColors.first->pPalettePairingInfo)
                                        {
                                            strExtraData += L"\r\n;NOTE THIS IS A PAIRED_PALETTE\r\n";
                                        }

                                        strInfo += strExtraData;
                                    }

                                    strExtraData.Format(L"\r\n;Remap Delta: 0x%x\r\n", nThisLocationRemapDelta);

                                    strInfo += strExtraData;
                                }
                                else // code
                                {
                                    strInfo.Format(L"    { L\"%s\", 0x%x, 0x%x", searchColors.first->szPaletteName, nStartingMappedOffset, nTerminalOffset);

                                    CString strExtraData;

                                    if (searchColors.first->indexImgToUse != INVALID_UNIT_VALUE_16)
                                    {
                                        // I'm adding in ImageId here because that makes for an easy search string
                                        strExtraData.Format(L", /* ImageId */ 0x%x, 0x%02x", searchColors.first->indexImgToUse, searchColors.first->indexOffsetToUse);

                                        if (searchColors.first->pPalettePairingInfo)
                                        {
                                            strExtraData += L", &PAIRED_PALETTE";
                                        }

                                        strInfo += strExtraData;
                                    }

                                    strExtraData.Format(L" }, /* Delta: 0x%x */\r\n", nThisLocationRemapDelta);

                                    strInfo += strExtraData;
                                }

                                strOutput += strInfo;
                            }
                            else
                            {
                                strInfo.Format(L"%s Palette \"%s\" not found in new ROM.\r\n", strActiveCommentStyle.c_str(), searchColors.first->szPaletteName);
                                strOutput += strInfo;
                            }
                        }
                        else
                        {
                            strInfo.Format(L"%s Palette \"%s\" is too short to care about.\r\n", strActiveCommentStyle.c_str(), searchColors.first->szPaletteName);
                            strOutput += strInfo;
                        }
                    }

                    rgSearchBytes.clear();
                }

                if (fUseExtrasMode)
                {
                    strInfo.Format(L"\r\n%s Remapping complete: %u of %u palettes found.  You'll want to double-check the remap.\r\n", strActiveCommentStyle.c_str(), nCountPalettesMapped, nCountPalettesExisting);
                }
                else
                {
                    strInfo.Format(L"\r\n%s Remapping complete: %u of %u palettes found.  You'll want to update ImageId and palette pair references as well as double-checking the remap.\r\n", strActiveCommentStyle.c_str(), nCountPalettesMapped, nCountPalettesExisting);
                }
                strOutput += strInfo;

                strInfo.Format(L"Remapping complete: %u of %u palettes found.", nCountPalettesMapped, nCountPalettesExisting);
                SetStatusText(strInfo.GetString());
                //const auto foobar = strOutput.GetLength();
                // this doesn't work: overflows shared memory
                //OutputDebugString(strOutput.GetString());

                CFile OutputFile;
                CString strOutputName = SaveFileOFN.lpstrFile;

                if (!wcschr(SaveFileOFN.lpstrFile, L'.'))
                {
                    strOutputName += fUseExtrasMode ? L".txt" : L".h";
                }

                if (OutputFile.Open(strOutputName, CFile::modeCreate | CFile::modeWrite))
                {
                    OutputFile.Write(strOutput.GetString(), strOutput.GetLength() * 2 /* wchar */);

                    OutputFile.Close();
                }
            }
        }
    }
}
