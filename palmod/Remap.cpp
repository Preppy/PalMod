#include "stdafx.h"
#include "PalModDlg.h"
#include "PalMod.h"
#include "ExtraFile.h"
#include "Util.h"
#include <afxeditbrowsectrl.h> // for the edit browse control

static CString SignedHexAsString(int32_t nHexNumber)
{
    CString strDisplayString;

    if (nHexNumber == 0)
    {
        strDisplayString = L"0";
    }
    else if (nHexNumber > 0)
    {
        strDisplayString.Format(L"0x%x", nHexNumber);
    }
    else
    {
        strDisplayString.Format(L"-0x%x", nHexNumber * -1);
    }

    return strDisplayString;
}

class CFindPalettesInNewROM : public CDialog
{
    DECLARE_DYNAMIC(CFindPalettesInNewROM)

public:
    CFindPalettesInNewROM(CGameClass* CurrGame, int nCurrentUnitSelection, CWnd* pParent = nullptr);
    virtual ~CFindPalettesInNewROM() {};

    BOOL OnInitDialog();

    void ScanForData();

    enum { IDD = IDD_FINDINNEWROM };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);

    virtual void OnOK() override;

    CComboBox m_CBUnit;
    CComboBox m_CBColor_Origin;

    CMFCEditBrowseCtrl m_FCSelectFileToScan;
    CMFCEditBrowseCtrl m_FCSelectOutput;

    CString m_strFileName;
    CString m_strOutputName;

    int m_nCurrentUnitSelection = 0;
    int m_nSearchColorFormat = 0;

    CGameClass* m_pCurrGame = nullptr;

    LPCWSTR m_pszOutputFilter = L"Save as Extras file|*.txt|"
                                L"Save as C++ header|*.h||";
};

IMPLEMENT_DYNAMIC(CFindPalettesInNewROM, CDialog)

void CFindPalettesInNewROM::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_FINDINNEW_SELUNIT, m_CBUnit);
    DDX_Control(pDX, IDC_FINDINNEW_FORMATSOURCE, m_CBColor_Origin);

    DDX_Control(pDX, IDC_FINDINNEW_PATH_ROM, m_FCSelectFileToScan);
    DDX_Control(pDX, IDC_FINDINNEW_PATH_OUTPUT, m_FCSelectOutput);
}

CFindPalettesInNewROM::CFindPalettesInNewROM(CGameClass* CurrGame, int nCurrentUnitSelection, CWnd* pParent /*= nullptr*/)
    : CDialog(CFindPalettesInNewROM::IDD, pParent)
{
    m_pCurrGame = CurrGame;
    m_nCurrentUnitSelection = nCurrentUnitSelection;
}

BOOL CFindPalettesInNewROM::OnInitDialog()
{
    CDialog::OnInitDialog();

    // Set boilerplate
    GetDlgItem(IDC_FINDINNEW_INTROTEXT_1)->SetWindowText(
            L"This is a power user feature.  This will automatically search for locations of all palettes in the currently selected unit in another ROM.  "
            L"This is a potentially lengthy binary search process that can be helpful to find locations of known palettes for one game(or game version) "
            L"in the file(s) of a second game(or game version).");
    
    GetDlgItem(IDC_FINDINNEW_INTROTEXT_2)->SetWindowText(
            L"Some palettes may exist in multiple locations in the new file: we'll list those multiple results as well as the associated deltas.  "
            L"You will generally want to use the same deltas for any given 'block' of palettes.If the entire unit remap shares the same offset, "
            L"you should just reuse the existing unit and set the loading offset value for that unit.");
        
    GetDlgItem(IDC_FINDINNEW_INTROTEXT_3)->SetWindowText(
            L"You will need to select the ROM you want us to scan within and tell us what file to output the results to.  Press Scan when ready.");

#ifdef SINGLE_COLLECTION_ONLY
    // TODO: Maybe support collection only?  I needed this for SFZ3 Max and had to pipe the support in by hand for my very odd needs.
  //  const int nSelectedCollection = m_pCurrGame->m_rgUnitRedir.at(m_CBChildSel1.GetCurSel());
#endif

    // Set up the unit selections
    for (int nCurrentUnit = 0; nCurrentUnit < static_cast<int>(m_pCurrGame->m_rgUnitRedir.size()); nCurrentUnit++)
    {
        const int nUnitAsShown = m_pCurrGame->m_rgUnitRedir[nCurrentUnit];

        const sDescTreeNode* pSelectedUnit = m_pCurrGame->GetMainTree()->GetDescTree(nUnitAsShown, -1);

        if (pSelectedUnit && (_wcsicmp(pSelectedUnit->szDesc, m_pCurrGame->GetExtraUnitDescription()) != 0))
        {
            m_CBUnit.AddString(pSelectedUnit->szDesc);
        }
    }

    m_CBUnit.SetCurSel(m_nCurrentUnitSelection);

    // Set up the color selections
    for (int currColor = 0; currColor < static_cast<int>(ColMode::COLMODE_LAST); currColor++)
    {
        LPCSTR paszColorFormat = ColorSystem::GetColorFormatStringForColorFormat(static_cast<ColMode>(currColor));
        CString curCol;
        curCol.Format(L"%S", paszColorFormat);

        m_CBColor_Origin.AddString(curCol);
    }

    m_CBColor_Origin.SetCurSel(m_nSearchColorFormat);
    
    const DWORD dwDefaultOutputType = CRegProc::GetDefaultRemapFiletype();

    // The OFN flags are cheerfully ignored by the EditBrowseControl.  Neat!
    m_FCSelectFileToScan.EnableFileBrowseButton(nullptr, nullptr, OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST);
    m_FCSelectOutput.EnableFileBrowseButton(dwDefaultOutputType ? L"txt" : L"h", m_pszOutputFilter, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT);

    UpdateData();

    return TRUE;
}

void CFindPalettesInNewROM::OnOK()
{
    m_FCSelectFileToScan.GetWindowText(m_strFileName);

    DWORD nSourceFileAttribs = GetFileAttributes(m_strFileName);

    if (nSourceFileAttribs == INVALID_FILE_ATTRIBUTES)
    {
        MessageBox(L"Error: ROM to scan does not exist.  This must be set to a valid file to continue.", GetHost()->GetAppName(), MB_ICONERROR);
        return;
    }

    m_FCSelectOutput.GetWindowText(m_strOutputName);

    if (!m_strOutputName.GetLength())
    {
        MessageBox(L"Error: Output file not specified.", GetHost()->GetAppName(), MB_ICONERROR);
        return;
    }

    if (!wcschr(m_strOutputName.GetString(), L'.'))
    {
        m_strOutputName += L".txt";
    }

    m_nCurrentUnitSelection = m_CBUnit.GetCurSel();
    CDialog::OnOK();
    return;
}

void CFindPalettesInNewROM::ScanForData()
{
    CWaitCursor wait;
    CFile NewROMFile;
    std::vector<BYTE> newROMBytes;

    if (!wcschr(m_strOutputName.GetString(), L'.'))
    {
        m_strOutputName += L".txt";
    }

    const int dotPos = m_strOutputName.ReverseFind(L'.');
    CString strOutputExt = m_strOutputName.Mid(dotPos + 1);
    const bool fUseExtrasMode = (strOutputExt.CompareNoCase(L"txt") == 0);

    CRegProc::SetDefaultRemapFiletype(fUseExtrasMode ? 0 : 1);

    const int nUnitAsShown = m_pCurrGame->m_rgUnitRedir[m_nCurrentUnitSelection];

    const sDescTreeNode* pSelectedUnit = m_pCurrGame->GetMainTree()->GetDescTree(nUnitAsShown, -1);

    GetHost()->GetPalModDlg()->SetStatusText(L"Starting remap...");

    if (NewROMFile.Open(m_strFileName, CFile::modeRead | CFile::typeBinary))
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

        strInfo.Format(L"Starting remap into file \"%s\"...\r\n", m_strFileName.GetString());
        OutputDebugString(strInfo.GetString());

        const ColMode currColMode = m_pCurrGame->GetColorMode();
        const uint8_t cbColorSize = ColorSystem::GetCbForColMode(currColMode);
        const std::wstring strExtrasComment = L";";
        const std::wstring strCodeComment = L"//";
        const std::wstring strActiveCommentStyle = fUseExtrasMode ? strExtrasComment : strCodeComment;
        uint32_t nCountPalettesMapped = 0, nCountPalettesExisting = 0;

        // Unicode marker
        CString strOutput = L"\xfeff";

        // Assemble the search strings.
        // Note that we CANNOT reliably search against the transparency color. 
        // Those tend to vary wildly!
        std::vector<std::pair<const sGame_PaletteDataset*, std::vector<BYTE>>> rgSearchBytes;

        if (fUseExtrasMode)
        {
            // Write header so that the produced file is easier to work with
            if (m_pCurrGame->GetGameName())
            {
                strInfo.Format(L"%SRemapped %s\r\n", CGameWithExtrasFile::GetExtrasKeyWord_GameName(), m_pCurrGame->GetGameName());
                strOutput += strInfo;
            }

            LPCSTR paszColorFormat = ColorSystem::GetColorFormatStringForColorFormat(m_pCurrGame->GetColorMode());
            if (paszColorFormat)
            {
                strInfo.Format(L"%S%S\r\n", CGameWithExtrasFile::GetExtrasKeyWord_ColorFormat(), paszColorFormat);
                strOutput += strInfo;
            }

            LPCSTR paszAlphaMode = ColorSystem::GetAlphaModeStringForAlphaMode(m_pCurrGame->GetAlphaMode());
            if (paszAlphaMode)
            {
                strInfo.Format(L"%S%S\r\n", CGameWithExtrasFile::GetExtrasKeyWord_AlphaMode(), paszAlphaMode);
                strOutput += strInfo;
            }

            LPCSTR paszImageSectionName = g_rgImgDatSectionNames.at(m_pCurrGame->GetImgGameFlag()).c_str();
            if (paszImageSectionName)
            {
                strInfo.Format(L"%S%S\r\n", CGameWithExtrasFile::GetExtrasKeyWord_ImageSection(), paszImageSectionName);
                strOutput += strInfo;
            }
        }

        strInfo.Format(L"%s Remapping unit \"%s\" to file \"%s\".  %u child nodes found.\r\n", strActiveCommentStyle.c_str(), pSelectedUnit->szDesc, m_strFileName.GetString(), pSelectedUnit->uChildAmt);
        strOutput += strInfo;

        if (fUseExtrasMode)
        {
            // take advantage of parser rules
            strInfo.Format(L"%s---%s\r\n", strActiveCommentStyle.c_str(), pSelectedUnit->szDesc);
            strOutput += strInfo;
        }

        // Track which if any deltas end up being used
        std::vector<std::pair<uint32_t, uint32_t>> rgDeltaVotes;

        for (uint32_t iCollectionIndex = 0; iCollectionIndex < pSelectedUnit->uChildAmt; iCollectionIndex++)
        {
#ifdef SINGLE_COLLECTION_ONLY
            if (nSelectedCollection != iCollectionIndex)
            {
                continue;
            }
#endif
            const sGame_PaletteDataset* paletteDataSet = m_pCurrGame->GetPaletteSet(nUnitAsShown, iCollectionIndex);

            if (!paletteDataSet)
            {
                // TODO: this blocks GameClassByUnitPerFile iteration through this code, but
                // we should solve it differently.
                strOutput += L"ERROR: Remapping not currently supported for this specific game version: PalMod needs to update the game layout.\r\n";
                MessageBox(L"ERROR: The way PalMod currently supports this specific game version disallows remapping units, sorry.", GetHost()->GetAppName(), MB_ICONERROR);
                break;
            }

            sDescTreeNode* pCurrentCollection = &((sDescTreeNode*)pSelectedUnit->ChildNodes)[iCollectionIndex];
            sDescNode* pCurrentNode = nullptr;
            const sGame_PaletteDataset* thisPalette = nullptr;

            strInfo.Format(L"\r\n%s\tCollection \"%s\": %u palettes found in old collection.\r\n", strActiveCommentStyle.c_str(), pCurrentCollection->szDesc, pCurrentCollection->uChildAmt);
            strOutput += strInfo;

            strInfo.Format(L"Remapping collection \"%s\" (%u/%u).  %u palettes in this collection.", pCurrentCollection->szDesc, iCollectionIndex, pSelectedUnit->uChildAmt, pCurrentCollection->uChildAmt);
            GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());

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

                std::vector<BYTE> searchBytes = m_pCurrGame->GetRawPaletteBytes(pCurrentNode->uUnitId, pCurrentNode->uPalId);

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

            for (auto& searchColors : rgSearchBytes)
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

                        CString strDisplayHex;
                        const int32_t nLastLocationRemapDelta = nLastMappedLocation - nLastStartingLocation;

                        if (nLastLocationRemapDelta != nThisLocationRemapDelta)
                        {
                            // ok, the delta has changed: let's see if this is because there are multiple matches
                            auto it_afterfirstresult = it_foundcoloroffset + 1;
                            auto it_secondresult = std::search(it_afterfirstresult, newROMBytes.end(), it_secondcolor, searchColors.second.end());

                            if (it_secondresult != newROMBytes.end())
                            {
                                strDisplayHex = SignedHexAsString(nThisLocationRemapDelta);

                                if (nLastMappedLocation)
                                {
                                    strInfo.Format(L"%s Warning: the remapped delta shifts from 0x%x to %s!\r\n", strActiveCommentStyle.c_str(), nLastLocationRemapDelta, strDisplayHex.GetString());
                                    strOutput += strInfo;
                                }

                                strInfo.Format(L"%s Match at 0x%x, 0x%x (delta %s)\r\n", strActiveCommentStyle.c_str(), nStartingMappedOffset, nTerminalOffset, strDisplayHex.GetString());
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

                                if ((nLastLocationRemapDelta == alternative_delta) || // it moved the same as the previously analyzed palette
                                    (alternative_delta == 0)) // it hasn't moved
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

                        strDisplayHex = SignedHexAsString(nThisLocationRemapDelta);

                        auto it = std::find_if(rgDeltaVotes.begin(), rgDeltaVotes.end(),
                            [&nThisLocationRemapDelta](const std::pair<uint32_t, uint32_t>& elem) {
                                return elem.first == nThisLocationRemapDelta;
                            });

                        if (it == rgDeltaVotes.end())
                        {
                            rgDeltaVotes.push_back(std::make_pair(nThisLocationRemapDelta, 1));
                        }
                        else
                        {
                            it->second++;
                        }

                        if (fUseExtrasMode)
                        {
                            strInfo.Format(L"%s\r\n0x%x\r\n0x%x", searchColors.first->szPaletteName, nStartingMappedOffset, nTerminalOffset);

                            CString strExtraData;

                            if (searchColors.first->indexImgToUse != INVALID_UNIT_VALUE_16)
                            {
                                // Extras doesn't want the ImageId prefix, so instead deliberately prepend a searchable triple space
                                strExtraData.Format(L",   0x%x, 0x%02x", searchColors.first->indexImgToUse, searchColors.first->indexOffsetToUse);

                                if (searchColors.first->pPalettePairingInfo)
                                {
                                    strExtraData += L"\r\n;NOTE THIS IS A PAIRED_PALETTE\r\n";
                                }

                                strInfo += strExtraData;
                            }

                            strExtraData.Format(L"\r\n;Remap Delta: %s\r\n", strDisplayHex.GetString());

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

                            strExtraData.Format(L" }, /* Delta: %s */\r\n", strDisplayHex.GetString());

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

        CFile OutputFile;
        CString strSpecificDeltaInfoIfFound;

        if (nCountPalettesExisting && rgDeltaVotes.size() == 1 && (nCountPalettesMapped == nCountPalettesExisting))
        {
            strInfo = SignedHexAsString(rgDeltaVotes.at(0).first);
            strSpecificDeltaInfoIfFound.Format(L"  Constant delta of %s.", strInfo.GetString());
            strInfo.Format(L"\r\n%sNote: this unit uses a constant delta of %s.\r\n\r\n", strActiveCommentStyle.c_str(), strInfo.GetString());
            strOutput += strInfo;
        }

        if (OutputFile.Open(m_strOutputName, CFile::modeCreate | CFile::modeWrite | CFile::typeUnicode))
        {
            OutputFile.Write(strOutput.GetString(), strOutput.GetLength() * 2 /* wchar */);

            OutputFile.Close();
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

        // Note we can't output strOutput to debug out because it overflows the shared memory buffer size
        //OutputDebugString(strOutput.GetString());

        if (nCountPalettesExisting)
        {
            strInfo.Format(L"Remapping complete: %u of %u palettes found. %s", nCountPalettesMapped, nCountPalettesExisting, strSpecificDeltaInfoIfFound.GetString());
        }
        else
        {
            strInfo = L"PalMod's support for this game does not currently support remapping.";
        }

        GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());
        strInfo += L"\r\n";
        OutputDebugString(strInfo.GetString());

        if (nCountPalettesMapped == 0)
        {
            strInfo += "\r\nNo matches were found: either you're looking at the wrong file or the other version might be using a different color format.";
        }
        else
        {
            CString strAppendMe;
            strAppendMe.Format(L"\r\nResults can be found at \'%s\'.", m_strOutputName.GetString());
            strInfo += strAppendMe;
        }

        MessageBox(strInfo, GetHost()->GetAppName(), MB_OK);
    }
}

void CPalModDlg::OnRemapUnit()
{
    CFindPalettesInNewROM dlgFindInNew(GetHost()->GetCurrGame(), m_CBUnitSel.GetCurSel());

    if (dlgFindInNew.DoModal() == IDOK)
    {
        dlgFindInNew.ScanForData();
    }
    else
    {
        OutputDebugString(L"CPalModDlg::OnRemapUnit: User canceled.\r\n");
    }
}
