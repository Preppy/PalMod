#include "StdAfx.h"
#include <fstream>
#include "PalMod.h"
#include "RegProc.h"

#include "ExtraFile.h"
#include <unordered_map>

// Use this to have this file help convert an Extra file to our header style
#ifdef DEBUG
#define DUMP_EXTRAS_ON_LOAD
#endif

uint32_t CGameWithExtrasFile::m_nTotalPaletteCount = 0;
size_t CGameWithExtrasFile::m_nUsableFileViewStart = 0;
size_t CGameWithExtrasFile::m_nLoadedFileViewSize = 0;
char CGameWithExtrasFile::m_paszGameNameOverride[MAX_PATH] = "";
AlphaMode CGameWithExtrasFile::m_AlphaModeOverride = AlphaMode::Unknown;
ColMode CGameWithExtrasFile::m_ColorModeOverride = ColMode::COLMODE_LAST;
eIMGDat_Sections CGameWithExtrasFile::m_ImageSectionOverride = eIMGDat_Sections::IMGDAT_SECTION_LAST;
std::vector<CGameWithExtrasFile::UnitData> CGameWithExtrasFile::m_vUnitData = {};

class CCreateExtraFileDlg : public CDialog
{
    DECLARE_DYNAMIC(CCreateExtraFileDlg)

public:
    CCreateExtraFileDlg(CWnd* pParent = NULL);   // standard constructor
    virtual ~CCreateExtraFileDlg() {};

    BOOL OnInitDialog();
    afx_msg void OnUpdateCheckboxes();

    // Dialog Data
    enum { IDD = IDD_EXTRAS_EXPORT };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    DECLARE_MESSAGE_MAP()

public:
    BOOL m_fAddKnownAsComments = FALSE;
    BOOL m_fSortKnownPalettes = TRUE;
    BOOL m_fShowUnknownRegions = FALSE;
    BOOL m_fShowPreUnknown = FALSE;
    BOOL m_fShowPostUnknown = FALSE;
};

IMPLEMENT_DYNAMIC(CCreateExtraFileDlg, CDialog)

CCreateExtraFileDlg::CCreateExtraFileDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CCreateExtraFileDlg::IDD, pParent)
{
}

void CCreateExtraFileDlg::OnUpdateCheckboxes()
{
    UpdateData();

    GetDlgItem(IDC_EXTRAS_SORTKNOWN)->EnableWindow(m_fAddKnownAsComments);

    GetDlgItem(IDC_EXTRAS_UNKNOWNBEFORE)->EnableWindow(m_fShowUnknownRegions);
    GetDlgItem(IDC_EXTRAS_UNKNOWNAFTER)->EnableWindow(m_fShowUnknownRegions);
}

BOOL CCreateExtraFileDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    OnUpdateCheckboxes();

    return TRUE;
}

void CCreateExtraFileDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Check(pDX, IDC_EXTRAS_ADDKNOWN, m_fAddKnownAsComments);
    DDX_Check(pDX, IDC_EXTRAS_SORTKNOWN, m_fSortKnownPalettes);
    DDX_Check(pDX, IDC_EXTRAS_MAPUNKNOWN, m_fShowUnknownRegions);
    DDX_Check(pDX, IDC_EXTRAS_UNKNOWNBEFORE, m_fShowPreUnknown);
    DDX_Check(pDX, IDC_EXTRAS_UNKNOWNAFTER, m_fShowPostUnknown);
}

BEGIN_MESSAGE_MAP(CCreateExtraFileDlg, CDialog)
    ON_COMMAND(IDC_EXTRAS_ADDKNOWN, &CCreateExtraFileDlg::OnUpdateCheckboxes)
    ON_COMMAND(IDC_EXTRAS_MAPUNKNOWN, &CCreateExtraFileDlg::OnUpdateCheckboxes)
END_MESSAGE_MAP()

void CGameWithExtrasFile::ResetStaticOverrideVariables()
{
    strcpy(m_paszGameNameOverride, "");
    m_AlphaModeOverride = AlphaMode::Unknown;
    m_ColorModeOverride = ColMode::COLMODE_LAST;
    m_ImageSectionOverride = eIMGDat_Sections::IMGDAT_SECTION_LAST;
}

void CGameWithExtrasFile::SetGameNameOverride(LPCSTR paszAlphaString)
{
    strncpy(m_paszGameNameOverride, paszAlphaString, ARRAYSIZE(m_paszGameNameOverride));
}

void CGameWithExtrasFile::SetAlphaOverride(LPCSTR paszAlphaString)
{
    if (ColorSystem::GetAlphaModeForAlphaModeString(paszAlphaString, m_AlphaModeOverride))
    {
        CStringA astrMsg;
        astrMsg.Format("\tCGameWithExtrasFile: Extras file is setting Alpha mode to %s\n", paszAlphaString);
        OutputDebugStringA(astrMsg);
    }
}

void CGameWithExtrasFile::SetImageSectionOverride(LPCSTR paszImageSectionString)
{
    if (GetImageSectionIDForImageSectionString(paszImageSectionString, m_ImageSectionOverride))
    {
        CStringA astrMsg;
        astrMsg.Format("\tCGameWithExtrasFile: Extras file is using image section %u (\"%s\")\n", m_ImageSectionOverride, g_rgImgDatSectionNames.at(m_ImageSectionOverride).c_str());
        OutputDebugStringA(astrMsg);
    }
}

void CGameWithExtrasFile::SetColorFormatOverride(LPCSTR paszColorString)
{
    if (ColorSystem::GetColorFormatForColorFormatString(paszColorString, m_ColorModeOverride))
    {
        CStringA astrMsg;
        astrMsg.Format("\tCGameWithExtrasFile: Extras file is setting Color mode to %s\n", paszColorString);
        OutputDebugStringA(astrMsg);
    }
}

void CGameWithExtrasFile::LoadExtraFileForGame(LPCWSTR pszExtraFileName, std::vector<stExtraDef>& rgCompleteExtraDefs, uint32_t nExtraUnitStart, size_t nGameROMSize, uint8_t cbColorSize /* = 2 */, size_t nUsableStartingOffset /* = 0 */)
{
    std::ifstream extraFile;
    wchar_t szTargetFile[MAX_PATH];
    CString strOutputText;
    int nTotalExtensionExtraLinesHandled = 0;
    int nStockExtrasCount = 0;
    int nArrayOffsetDesired = 0;
    bool fAlertedToTruncation = false;

    const int nMaxExtraBufferSize = 10000;
    std::vector<stExtraDef> rgTempExtraBuffer;

    m_nUsableFileViewStart = nUsableStartingOffset;
    m_nLoadedFileViewSize = nGameROMSize;

    // Reset for a new extras file load.
    ResetStaticOverrideVariables();

    m_vUnitData.clear();

    if ((m_nLoadedFileViewSize != -1) && (m_nLoadedFileViewSize > 0) && pszExtraFileName && (pszExtraFileName[0] != 0)) // If we don't know the ROM size we don't know how to sanely bounds-check our file access, so can't trust our handling of Extra files.
    {
        // Now we look for the Extra extension file.
        GetModuleFileName(nullptr, szTargetFile, static_cast<DWORD>(MAX_PATH));
        wchar_t* pszExeFileName = wcsrchr(szTargetFile, L'\\') + 1;
        pszExeFileName[0] = 0;

        wcscat(szTargetFile, pszExtraFileName);

        strOutputText.Format(L"Loading extra file for '%s'...\n", pszExtraFileName);
        OutputDebugString(strOutputText);

        DWORD nFileAttrib = GetFileAttributes(szTargetFile);

        bool fShouldOpenFile = ((nFileAttrib & FILE_ATTRIBUTE_ARCHIVE) == FILE_ATTRIBUTE_ARCHIVE) && (nFileAttrib != INVALID_FILE_ATTRIBUTES);

        if (fShouldOpenFile)
        {
            CFile cfExtraFile;

            if (cfExtraFile.Open(szTargetFile, CFile::modeRead))
            {
                CFileStatus extraInfo;

                if (cfExtraFile.GetStatus(extraInfo))
                {
                    DWORD nFileSize = static_cast<DWORD>(extraInfo.m_size);

                    if (nFileSize == 0)
                    {
                        fShouldOpenFile = false;
                    }
                    else if (CRegProc::WasExtraFileCanaryKilledLastTime(pszExtraFileName, nFileSize))
                    {
                        CString strWarning;
                        strWarning.Format(L"Last time we tried to load the Extra file \"%s\", PalMod crashed.  This indicates that this Extra file is very probably incorrectly written and should be fixed.\n", pszExtraFileName);
                        strWarning.Append(L"\nAre you sure you wish to load this Extra file?");
                        fShouldOpenFile = (MessageBox(g_appHWnd, strWarning, L"PalMod", MB_ICONSTOP | MB_YESNO | MB_DEFBUTTON2) == IDYES);
                    }

                    CRegProc::SetExtraFileLoadingCanary(pszExtraFileName, nFileSize);
                }

                cfExtraFile.Abort();
            }
        }

        if (fShouldOpenFile)
        {
            // This is raw file and deliberately char
            char aszCurrLine[MAX_PATH]; // arbitrary line length: in practice it should be MAX_DESCRIPTION_LENGTH + 1
#ifdef DUMP_EXTRAS_ON_LOAD
            // This will clip in UI, so only use the larger form for debugging
            char aszCurrDesc[MAX_PATH] = "";
#else
            char aszCurrDesc[MAX_DESCRIPTION_LENGTH] = "";
#endif
            char* aszFinalLine = nullptr;
            int nCurrStart = 0;
            int nCurrEnd = 0;
            DWORD k_colorsPerPage = CRegProc::GetMaxPalettePageSize();
            uint16_t indexImgToUse = INVALID_UNIT_VALUE_16; // the major character/collection index
            uint8_t indexOffsetToUse = 0x0; // subsprites within that collection

            // NOTE: PrintableGameName is only usable in Developer Mode as we only process overrides there.
            wchar_t szPrintableGameName[MAX_PATH] = L"GAMENAME";
            CString strCurrentUnitDisplayName = L"UNNAMED";
            wchar_t szCurrentUnitPrintName[MAX_PATH] = L"UNNAMED";

            if (CRegProc::GetMaxColorsPerPageOverride() != 0)
            {
                // Extra files are allowed to to be larger if they really need it
                k_colorsPerPage = CRegProc::GetMaxColorsPerPageOverride();
            }

            extraFile.open(szTargetFile, std::ios::in);

            while (!extraFile.eof())
            {
                std::string strCurrLine;
                // Use a std::string here to ensure we get the full length of the string, even 
                // if it's pathologically long,
                std::getline(extraFile, strCurrLine);

                // Truncate to reasonability
                strncpy_s(aszCurrLine, strCurrLine.c_str(), ARRAYSIZE(aszCurrLine) - 1);

                aszFinalLine = aszCurrLine;
                const size_t nCurStrLen = strnlen(aszFinalLine, ARRAYSIZE(aszCurrLine));

                if (nCurStrLen)
                {
                    if (aszFinalLine[0] != ';')
                    {
                        // This is a real uncommented line: do what we can with it
                        int nPrevAmt = 0;

                        if (nTotalExtensionExtraLinesHandled == 0)
                        {
                            if (m_ColorModeOverride != ColMode::COLMODE_LAST)
                            {
                                cbColorSize = ColorSystem::GetCbForColMode(m_ColorModeOverride);
                            }
                        }
                        else
                        {
                            if ((nTotalExtensionExtraLinesHandled % 3) == 1)
                            {
                                // We *should* be at an offset.  But sometimes users put extra comments in, so let's work around that if we can.
                                size_t nGoodFaithCheckLength = min(nCurStrLen, 4);
                                bool fFoundHexDigit = false;
                                bool fFoundInvalidEntry = false;

                                for (size_t iCurrPos = 0; iCurrPos < nGoodFaithCheckLength; iCurrPos++)
                                {
                                    bool fIsHexDigit = isxdigit(aszFinalLine[iCurrPos]);

                                    fFoundHexDigit = fFoundHexDigit || fIsHexDigit;

                                    // Acceptable characters on this line would be hex, the "x" indicating hex, or whitespace
                                    if (!fIsHexDigit &&
                                        !isspace(aszFinalLine[iCurrPos]) &&
                                        !((iCurrPos == 1) && ((aszFinalLine[iCurrPos] == 'x') || (aszFinalLine[iCurrPos] == 'X')))
                                        )
                                    {
                                        fFoundInvalidEntry = true;
                                    }
                                }

                                if (!fFoundHexDigit || fFoundInvalidEntry)
                                {
                                    // This is an errant line according to our rules...
                                    CString strError;
                                    strError.Format(L"In file \"%s\", Extra \"%S\" appears to be broken: it is trying to display from starting offset \"%S\".  If that's not a number, your Extras file isn't correct."
                                        L"\n\nIf you're trying to add comments, begin the line with '; '.\n", pszExtraFileName, aszCurrDesc, aszFinalLine);
                                    MessageBox(g_appHWnd, strError, L"PalMod", MB_ICONERROR);

#ifdef DUMP_EXTRAS_ON_LOAD
                                    // Show as comment in output just in case it's useful
                                    OutputDebugString(L"//");
                                    OutputDebugStringA(aszCurrDesc);
                                    OutputDebugString(L"\r\n");
#endif

                                    // Move back to handling this as a palette title.
                                    nTotalExtensionExtraLinesHandled -= 1;
                                }
                            }
                        }

                        switch (nTotalExtensionExtraLinesHandled % 3)
                        {
                            case 0:
                            {
                                // We will clip in wide palette view at about base 40 characters
                                // This includes space for " (x/y) n"
                                // The combobox itself starts clipping at about 30 characters
                                // The status bar fits about 128 characters
#ifdef DUMP_EXTRAS_ON_LOAD
                                // allow UI clipping since this just for debugging
                                constexpr auto nMaxDescLen = sizeof(aszCurrDesc) - 1;
#else
                                constexpr auto nMaxDescLen = min(40, MAX_DESCRIPTION_LENGTH - 8 - 8 - 8 - 6);
#endif
                                if (iswspace(aszFinalLine[0]) && (strlen(aszFinalLine) == 1))
                                {
                                    strOutputText.Format(L"Warning: Bogus entry in extension file with text '%S'.  Skipping.\n", aszFinalLine);
                                    OutputDebugString(strOutputText);
                                    continue;
                                }

                                memcpy(aszCurrDesc, aszFinalLine, nMaxDescLen);
                                aszCurrDesc[nMaxDescLen] = '\0';

                                // reset image settings
                                indexImgToUse = INVALID_UNIT_VALUE_16; // the major character/collection index
                                indexOffsetToUse = 0x0; // subsprites within that collection
                                break;
                            }
                            case 1:
                            {
                                nCurrStart = strtoul(aszFinalLine, nullptr, 16);
                                break;
                            }
                            case 2:
                            {
                                int nPos = 0;

                                nCurrEnd = strtoul(aszFinalLine, nullptr, 16);

                                char* pszComma = strchr(aszFinalLine, ',');

                                if (pszComma)
                                {
                                    pszComma++;
                                    indexImgToUse = static_cast<uint16_t>(strtoul(pszComma, nullptr, 16));

                                    pszComma = strchr(pszComma, ',');

                                    if (pszComma)
                                    {
                                        pszComma++;
                                        indexOffsetToUse = static_cast<uint8_t>(strtoul(pszComma, nullptr, 16));
                                    }
                                }


                                if (nCurrEnd == nCurrStart)
                                {
                                    CString strError;
                                    strError.Format(L"In file \"%s\", Extra \"%S\" is broken: starting offset 0x%x to ending offset 0x%x is zero-length.\n\n"
                                        L"Please fix this. PalMod is truncating this Extra so that you do not corrupt your ROM.", pszExtraFileName, aszCurrDesc, nCurrStart, nCurrEnd);
                                    MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);

                                    CStringA strFormat;
                                    strFormat.Format("Broken: Zero-Length: %s", aszCurrDesc);
                                    _snprintf_s(aszCurrDesc, MAX_DESCRIPTION_LENGTH, _TRUNCATE, strFormat.GetString());
                                    nCurrEnd = nCurrStart + (1 * cbColorSize);
                                }
                                else if (nCurrEnd < nCurrStart)
                                {
                                    CString strError;
                                    strError.Format(L"In file \"%s\", Extra \"%S\" is broken: trying to display from starting offset 0x%x to ending offset 0x%x:"
                                        L" that ending offset actually starts before the starting offset!\n\n"
                                        L"Please fix this. PalMod is truncating this Extra so that you do not corrupt your ROM.", pszExtraFileName, aszCurrDesc, nCurrStart, nCurrEnd);
                                    MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);

                                    CStringA strFormat;
                                    strFormat.Format("Broken: Negative: %s", aszCurrDesc);
                                    _snprintf_s(aszCurrDesc, MAX_DESCRIPTION_LENGTH, _TRUNCATE, strFormat.GetString());

                                    nCurrEnd = nCurrStart + (1 * cbColorSize);
                                }

                                // Validate that they're not trying to read off the end of the ROM...
                                if ((nCurrEnd > static_cast<int>(m_nLoadedFileViewSize)) || 
                                    (nCurrStart >= static_cast<int>(m_nLoadedFileViewSize)) ||
                                    (nCurrStart < static_cast<int>(m_nUsableFileViewStart))
                                    )
                                {
                                    if (!fAlertedToTruncation)
                                    {
                                        CString strQuestion, strAddendum;
                                        strQuestion.Format(L"In file \"%s\", Extra \"%S\" is broken.\n\nThis game ROM size is 0x%x bytes. This Extra starts at offset 0x%x and ends at offset 0x%x.",
                                                                pszExtraFileName, aszCurrDesc, static_cast<int>(m_nLoadedFileViewSize), nCurrStart, nCurrEnd);

                                        if (nCurrStart < static_cast<int>(m_nUsableFileViewStart))
                                        {
                                            strAddendum.Format(L"That won't work: the minimum offset usable for palettes is 0x%x.", static_cast<int>(m_nUsableFileViewStart));
                                        }
                                        else
                                        {
                                            strAddendum.Format(L"That won't work: the maximum ending offset possible is 0x%x.", static_cast<int>(nGameROMSize));
                                        }
                                        
                                        strQuestion += strAddendum;
                                        strQuestion += L"\n\nPlease fix this. PalMod is truncating this Extra so that you do not corrupt your ROM.";

                                        MessageBox(g_appHWnd, strQuestion, GetHost()->GetAppName(), MB_OK | MB_ICONSTOP);
                                        fAlertedToTruncation = true;
                                    }

                                    CStringA strFormat;
                                    strFormat.Format("Broken: Truncated: %s", aszCurrDesc);
                                    _snprintf_s(aszCurrDesc, MAX_DESCRIPTION_LENGTH, _TRUNCATE, strFormat.GetString());
                                    nCurrStart = min(nCurrStart, static_cast<int>(m_nLoadedFileViewSize) - (16 * cbColorSize));
                                    nCurrStart = max(nCurrStart, static_cast<int>(m_nUsableFileViewStart));
                                    nCurrEnd = min(nCurrEnd, static_cast<int>(m_nLoadedFileViewSize));
                                    nCurrEnd = max(nCurrEnd, static_cast<int>(nCurrStart) + (2 * cbColorSize));
                                }

                                uint32_t nColorsUsed = (nCurrEnd - nCurrStart) / cbColorSize; // usually 2 bytes per color.
                                const int nTotalPagesNeeded = static_cast<int>(ceil(static_cast<double>(nColorsUsed) / static_cast<double>(k_colorsPerPage)));
                                int nCurrentPage = 1;

                                CString strText;

                                // ensure we have node/units here
                                if (m_vUnitData.empty())
                                {
                                    // force a dummy unit
                                    UnitData thisUnit = { szCurrentUnitPrintName, strCurrentUnitDisplayName.GetString() };
                                    m_vUnitData.push_back(thisUnit);
                                }

                                if (m_vUnitData.back().vNodeData.empty())
                                {
#ifdef DUMP_EXTRAS_ON_LOAD // You can use this to convert Extras file content into usable headers.
                                    if (m_vUnitData.size() != 1)
                                    {
                                        // Close previous set
                                        OutputDebugString(L"};\r\n\r\n");
                                    }
#endif

                                    strText.Format(L"%s_%s_Default", szPrintableGameName, m_vUnitData.back().strPrintName.c_str());
                                        
                                    NodeData thisNode = { strText.GetString(), L"Palettes" };
                                    m_vUnitData.back().vNodeData.push_back(thisNode);
                                        
#ifdef DUMP_EXTRAS_ON_LOAD
                                    thisNode.PrintPaletteSetHeader();
#endif
                                }

#ifdef DUMP_EXTRAS_ON_LOAD
                                // Do we want to autoslice at 128 or 256 colors...?  Probably 128, so let's use that here.
                                bool fPaletteUsesMultiplePages = (nColorsUsed > PAL_MAXAMT_8COLORSPERLINE);

                                if (!fPaletteUsesMultiplePages)
                                {
                                    strText.Format(L"    { L\"%S\", 0x%x, 0x%x", aszCurrDesc, nCurrStart, nCurrEnd);

                                    if (indexImgToUse != INVALID_UNIT_VALUE_16)
                                    {
                                        CString strImageInfo;
                                        strImageInfo.Format(L", /* ImageId */ 0x%x, 0x%02x", indexImgToUse, indexOffsetToUse);
                                        strText += strImageInfo;
                                    }

                                    strText += " },\r\n";

                                    OutputDebugString(strText);
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
                                        stExtraDef newExtraDef;

                                        newExtraDef.uUnitN = nExtraUnitStart;
                                        if (nTotalPagesNeeded > 1)
                                        {
                                            //pCurrDef->isInvisible = (nCurrentPage == 1);
                                            _snwprintf(newExtraDef.szDesc, sizeof(newExtraDef.szDesc), L"%S (%u/%u) 0x%x", aszCurrDesc, nCurrentPage++, nTotalPagesNeeded, nCurrStart + (k_colorsPerPage * cbColorSize * nPos));
                                        }
                                        else
                                        {
                                            _snwprintf(newExtraDef.szDesc, sizeof(newExtraDef.szDesc), L"%S", aszCurrDesc);
                                            //pCurrDef->isInvisible = false;
                                        }

                                        newExtraDef.uOffset = nCurrStart + (k_colorsPerPage * cbColorSize * nPos);
                                        newExtraDef.cbPaletteSize = nCurrentPaletteEntries * cbColorSize;
                                        newExtraDef.isInvisible = false;
                                        newExtraDef.indexImgToUse = indexImgToUse;
                                        newExtraDef.indexOffsetToUse = indexOffsetToUse;

#ifdef DUMP_EXTRAS_ON_LOAD
                                        if (fPaletteUsesMultiplePages)
                                        {
                                            strText.Format(L"    { L\"%s\", 0x%x, 0x%x },\r\n", newExtraDef.szDesc, newExtraDef.uOffset, newExtraDef.uOffset + newExtraDef.cbPaletteSize);
                                            OutputDebugString(strText);
                                        }
#endif
                                        rgTempExtraBuffer.push_back(newExtraDef);

                                    }

                                    // Ensure that if we loop through here again we are using a new Extra node item
                                    nPos++;
                                }
                                break;
                            } // end case 2
                        } // end switch

                        nTotalExtensionExtraLinesHandled++;
                    }
                    else
                    {
                        bool fHandled = false;

                        if ((nExtraUnitStart == 0) && // Only allow overrides for developer mode
                            (nTotalExtensionExtraLinesHandled == 0)) // Only allow overrides before we parse color entries
                        {
                            typedef void (*overrideFunction)(LPCSTR);

                            std::map<LPCSTR, overrideFunction> rgOverrideMap =
                            {
                                { m_kpszGameNameKey, SetGameNameOverride },
                                { m_kpszColorFormatKey, SetColorFormatOverride },
                                { m_kpszAlphaModeKey, SetAlphaOverride },
                                { m_kpszImageSectionKey, SetImageSectionOverride },
                            };

                            for (const auto& [key, override] : rgOverrideMap)
                            {
                                // Special allowance here for super secret items
                                const uint32_t nKeyLength = static_cast<uint32_t>(strlen(key));
                                if (_strnicmp(aszFinalLine, key, nKeyLength) == 0)
                                {
                                    uint32_t nNameLength = static_cast<uint32_t>(strlen(aszFinalLine + nKeyLength));
                                    override(aszFinalLine + nKeyLength);
                                    fHandled = true;
                                    break;
                                }
                            }

#ifdef DUMP_EXTRAS_ON_LOAD
                            CString strWideGameName;
                            strWideGameName.Format(L"%S", m_paszGameNameOverride);
                            StrRemoveNonASCII(szPrintableGameName, MAX_PATH, strWideGameName.GetString());
#endif
                        }
                        
                        if (!fHandled)
                        {
                            if ((strncmp(aszFinalLine, ";---", 4) == 0) && (aszFinalLine[4] != '-')) // Unit
                            {
                                strCurrentUnitDisplayName.Format(L"%S", aszFinalLine + 4);
                                StrRemoveNonASCII(szCurrentUnitPrintName, MAX_PATH, strCurrentUnitDisplayName.GetString());

                                bool fFoundExisting = false;

                                for (UnitData& unitCheck : m_vUnitData)
                                {
                                    if (wcscmp(unitCheck.strPrintName.c_str(), strCurrentUnitDisplayName.GetString()) == 0)
                                    {
                                        fFoundExisting = true;
                                        break;
                                    }
                                }

                                if (!fFoundExisting)
                                {
                                    UnitData thisUnit = { szCurrentUnitPrintName, strCurrentUnitDisplayName.GetString() };
                                    m_vUnitData.push_back(thisUnit);
                                }
                            }
                            else if ((strncmp(aszFinalLine, ";--", 3) == 0) && (aszFinalLine[3] != '-')) // Node
                            {
                                CString strText, strFriendlyName;
                                wchar_t szPrintableNodeName[MAX_PATH];

                                strFriendlyName.Format(L"%S", aszFinalLine + 3);
                                StrRemoveNonASCII(szPrintableNodeName, MAX_PATH, strFriendlyName.GetString());

#ifdef DUMP_EXTRAS_ON_LOAD
                                if (m_vUnitData.size())
                                {
                                    OutputDebugString(L"};\r\n\r\n");
                                }
#endif

                                if (m_vUnitData.empty())
                                {
                                    // force a dummy unit
                                    UnitData thisUnit = { szCurrentUnitPrintName, strCurrentUnitDisplayName.GetString() };
                                    m_vUnitData.push_back(thisUnit);
                                }

                                CString strNodeRef;
                                strNodeRef.Format(L"%s_%s_%s", szPrintableGameName, szCurrentUnitPrintName, szPrintableNodeName);

                                NodeData thisNode = { strNodeRef.GetString(), strFriendlyName.GetString() };
#ifdef DUMP_EXTRAS_ON_LOAD
                                thisNode.PrintPaletteSetHeader();
#endif

                                for (UnitData& unitCheck : m_vUnitData)
                                {
                                    if (wcscmp(unitCheck.strDisplayName.c_str(), strCurrentUnitDisplayName.GetString()) == 0)
                                    {
                                        unitCheck.vNodeData.push_back(thisNode);
                                        break;
                                    }
                                }
                            }
#ifdef DUMP_EXTRAS_ON_LOAD
                            else if (aszFinalLine[0] == ';')
                            {
                                CString strComment;
                                strComment.Format(L"// %S\r\n", aszFinalLine + 1);
                                OutputDebugString(strComment);
                            }
#endif
                        }
                    }
                }
            }

#ifdef DUMP_EXTRAS_ON_LOAD
            if (m_vUnitData.size())
            {
                size_t nNodeIndex = 0;
                CString strText;

                // Close existing node
                OutputDebugString(L"};\r\n\r\n");

                for (auto& unitEntry : m_vUnitData)
                {
                    if (!unitEntry.vNodeData.empty())
                    {
                        strText.Format(L"const sDescTreeNode %s_%s_COLLECTION[] =\r\n{\r\n", szPrintableGameName, unitEntry.strPrintName.c_str());
                        OutputDebugString(strText.GetString());

                        for (auto& nodeEntry : unitEntry.vNodeData)
                        {
                            strText.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)%s, ARRAYSIZE(%s) },\r\n", nodeEntry.strDisplayName.c_str(), nodeEntry.strPrintName.c_str(), nodeEntry.strPrintName.c_str());
                            OutputDebugString(strText.GetString());
                            nNodeIndex++;
                        }

                        OutputDebugString(L"};\r\n\r\n");
                    }
                }

                strText.Format(L"const sDescTreeNode %s_UNITS[] =\r\n{\r\n", szPrintableGameName);

                OutputDebugString(strText.GetString());

                for (auto& unitEntry : m_vUnitData)
                {
                    if (!unitEntry.vNodeData.empty())
                    {
                        strText.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)%s_%s_COLLECTION, ARRAYSIZE(%s_%s_COLLECTION) },\r\n", unitEntry.strDisplayName.c_str(), szPrintableGameName, unitEntry.strPrintName.c_str(), szPrintableGameName, unitEntry.strPrintName.c_str());
                        OutputDebugString(strText.GetString());
                    }
                    else
                    {
                        strText.Format(L"// WARNING: unit \'%s\' is empty and has no nodes.\r\n", unitEntry.strPrintName.c_str());
                        OutputDebugString(strText.GetString());
                    }
                }

                OutputDebugString(L"};\r\n\r\n");
            }
#endif

            if (nArrayOffsetDesired >= nMaxExtraBufferSize)
            {
                strOutputText.Format(L"WARNING: The '%s' Extra file exceeds maximum palette count (%u defined).\n\nPalmod has added the first %u palettes.", pszExtraFileName, nArrayOffsetDesired, nMaxExtraBufferSize);
                // Note that this crash occurs so early we don't get to load strings.
                MessageBox(g_appHWnd, strOutputText, L"PalMod", MB_ICONERROR);
            }

            // We've made it without crashing, so release our loading canary
            CRegProc::ClearExtraFileLoadingCanary(pszExtraFileName);
        }
        else
        {
            strOutputText.Format(L"\tExtras file '%s' does not exist. Skipping.\n", pszExtraFileName);
            OutputDebugString(strOutputText);
        }
    }
    else
    {
        OutputDebugString(L"\tExtras file will not be loaded as the ROM size is unknown or an Extra filename was not specified.\n");
    }

    if (rgCompleteExtraDefs.empty())
    {
        rgCompleteExtraDefs = rgTempExtraBuffer;

        if (!pszExtraFileName || (pszExtraFileName[0] == 0))
        {
            strOutputText = L"\tCreated a stub Extras array for this game.\n";
        }
        else
        {
            strOutputText.Format(L"\tAdded %u palette Extras total, including the '%s' Extra file.\n", static_cast<int>(rgCompleteExtraDefs.size()), pszExtraFileName);
        }
        OutputDebugString(strOutputText);
    }
}

bool CGameWithExtrasFile::IsROMOffsetDuplicated(uint32_t nUnitId, uint32_t nPalId, uint32_t nStartingOffsetToCheck, uint32_t nEndOfRegionToCheck /* = 0 */)
{
    uint32_t nTotalDupesFound = 0;
    CString strDupeText;

    // If we're in Extras territory, check it against itself.
    const uint32_t nUnitCountToCheck = (m_nTotalInternalUnits == nUnitId) ? m_nTotalInternalUnits + 1 : m_nTotalInternalUnits;

    //Go through each character
    for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitCountToCheck; nUnitCtr++)
    {
        const uint32_t nPalCount = GetPaletteCountForUnit(nUnitCtr);
        for (uint32_t nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (m_nCurrentPaletteSizeInColors == 0)
            {
                // We use zero-length palettes for virtual units.
                continue;
            }

            // Yes this takes a while. Thankfully it only runs once for normal usage.  For the developer. :'(
            if ( !((nUnitId == nUnitCtr) && (nPalId == nPalCtr)))
            {
                bool fIsDupe = false;
                const uint32_t nCurrentEndOfPaletteRegion = (m_nCurrentPaletteROMLocation + (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes));

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
                    if (nEndOfRegionToCheck != 0x0)
                    {
                        strDupeText.Format(L"ERROR: Unit 0x%02x pal 0x%03x ('%s', 0x%x to 0x%x) is a duplicate of unit 0x%02x pal 0x%03x (0x%x to 0x%x)!\n", nUnitCtr, nPalCtr, m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation, nCurrentEndOfPaletteRegion, nUnitId, nPalId, nStartingOffsetToCheck, nEndOfRegionToCheck);
                    }
                    else
                    {
                        strDupeText.Format(L"ERROR: Unit 0x%02x pal 0x%03x ('%s', 0x%x to 0x%x) is a duplicate of unit 0x%02x pal 0x%03x (starts at 0x%x)!\n", nUnitCtr, nPalCtr, m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation, nCurrentEndOfPaletteRegion, nUnitId, nPalId, nStartingOffsetToCheck);
                    }
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
    OutputDebugString(L"\tCGameWithExtrasFile::GetDupeCountInDataset: Starting dupe check...\n");

    uint32_t nTotalPalettesChecked = 0;
    uint32_t nTotalDupesFound = 0;

    CString strDupeText;
    bool fCollisionFound = false;
    bool fShownInternalErrorOnce = false;
    // TMNTTF and MWarr palettes are odd lengths, so for some of them we need to step back one
    // color in order to assemble a working palette
    uint32_t k_cbUseForcedOffsetForActuallyOverlappingPalettes = 0;

    if ((m_nGameFlag == TMNTTF_SNES) ||
        (m_nGameFlag == MWARR_A))
    {
        k_cbUseForcedOffsetForActuallyOverlappingPalettes = 2;
    }

    //Go through each character
    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nTotalInternalUnits; nUnitCtr++)
    {
        if (nUnitCtr == m_nExtraUnit)
        {
            break;
        }

        const uint32_t nPalCount = GetPaletteCountForUnit(nUnitCtr);
        for (uint32_t nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);
            nTotalPalettesChecked++;

            uint32_t nCurrentROMOffset = m_nCurrentPaletteROMLocation;

            if (nCurrentROMOffset == INVALID_UNIT_VALUE_16)
            {
                // virtual palette: ignore
                continue;
            }

            m_nLowestRomLocationThisPass = min(m_nLowestRomLocationThisPass, m_nCurrentPaletteROMLocation);

            WarnIfPaletteIsOversized(nUnitCtr, nPalCtr, m_nCurrentPaletteROMLocation, m_nCurrentPaletteSizeInColors, m_pszCurrentPaletteName);

            if (IsROMOffsetDuplicated(nUnitCtr, nPalCtr, nCurrentROMOffset + k_cbUseForcedOffsetForActuallyOverlappingPalettes))
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

    strDupeText.Format(L"\t\tCGameWithExtrasFile::GetDupeCountInDataset: Checked %u core palettes, %u dupes found.\n", nTotalPalettesChecked, nTotalDupesFound);
    OutputDebugString(strDupeText);

    return nTotalDupesFound;
}

int CGameWithExtrasFile::GetDupeCountInExtrasDataset()
{
    OutputDebugString(L"\tCGameWithExtrasFile::GetDupeCountInExtrasDataset: Starting dupe check...\n");

    uint32_t nTotalPalettesChecked = 0;
    uint32_t nTotalDupesFound = 0;

    CString strDupeText;
    bool fCollisionFound = false;
    bool fHaveShownDupeWarning = false;

    //Go through the Extras
    const uint32_t nPalCount = GetPaletteCountForUnit(m_nExtraUnit);
    for (uint16_t nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
    {
        LoadSpecificPaletteData(m_nExtraUnit, nPalCtr);
        nTotalPalettesChecked++;

        const uint32_t nCurrentROMOffset = m_nCurrentPaletteROMLocation;
        const uint32_t nEndOfROMOffset = m_nCurrentPaletteROMLocation + (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
        LPCWSTR pszExtraPaletteBeingChecked = m_pszCurrentPaletteName;
        m_nLowestRomExtrasLocationThisPass = min(m_nLowestRomExtrasLocationThisPass, m_nCurrentPaletteROMLocation);

        if (IsROMOffsetDuplicated(m_nExtraUnit, nPalCtr, nCurrentROMOffset, nEndOfROMOffset))
        {
            fCollisionFound = true;
            nTotalDupesFound++;

            if (!fHaveShownDupeWarning && pszExtraPaletteBeingChecked && m_pszDupedPaletteName)
            {
                fHaveShownDupeWarning = true;
                CString strText;
                strText.Format(L"WARNING: In the %s Extras file the palette named '%s' overlaps with '%s'.  That will block patching the first palette.  Please fix this.\n", m_pszExtraFilename, pszExtraPaletteBeingChecked, m_pszDupedPaletteName);
                OutputDebugString(strText);
                MessageBox(g_appHWnd, strText, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
    }

    strDupeText.Format(L"\t\tCGameWithExtrasFile::GetDupeCountInExtrasDataset: Checked %u Extras palettes, %u dupes found.\n", nTotalPalettesChecked, nTotalDupesFound);
    OutputDebugString(strDupeText);

    return nTotalDupesFound;
}

CGameWithExtrasFile::sPaletteTrackingInformation* CGameWithExtrasFile::_AssembleTrackingListFromGameUnits(bool fSort)
{
    sPaletteTrackingInformation* pListRoot = nullptr;
    const uint32_t c_nUnitCount = GetUnitCt();
    sDescTreeNode* pRootTree = GetMainTree()->GetDescTree(-1);

    for (uint32_t nUnitIndex = 0; nUnitIndex < c_nUnitCount; nUnitIndex++)
    {
        if (nUnitIndex == m_nExtraUnit)
        {
            // If you have palmod open with an extras file loaded but then blank it,
            // we should ignore those entries when creating your new file
            continue;
        }

        sDescTreeNode* UnitTree = &((sDescTreeNode*)pRootTree->ChildNodes)[nUnitIndex];

        for (uint32_t nCollectionIndex = 0; nCollectionIndex < UnitTree->uChildAmt; nCollectionIndex++)
        {
            sDescTreeNode* CollectionTree = &((sDescTreeNode*)UnitTree->ChildNodes)[nCollectionIndex];

            for (uint32_t nPaletteIndex = 0; nPaletteIndex < CollectionTree->uChildAmt; nPaletteIndex++)
            {
                sDescNode* DescNode = &((sDescNode*)CollectionTree->ChildNodes)[nPaletteIndex];

                LoadSpecificPaletteData(DescNode->uUnitId, DescNode->uPalId);

                if (m_nCurrentPaletteSizeInColors == 0)
                {
                    // We use virtual zero length palettes for MvC2 Team Views
                    continue;
                }

                sPaletteTrackingInformation* pNewListEntry = new sPaletteTrackingInformation;

                pNewListEntry->nPaletteOffset = m_nCurrentPaletteROMLocation;
                pNewListEntry->nTerminalOffset = m_nCurrentPaletteROMLocation + (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                pNewListEntry->strUnitName = UnitTree->szDesc;
                pNewListEntry->strCollectionName = CollectionTree->szDesc;
                pNewListEntry->strPaletteName = m_pszCurrentPaletteName;

                sPaletteTrackingInformation* pCurrent = pListRoot;

                if (!pCurrent ||
                    !fSort ||
                    (pCurrent->nPaletteOffset > pNewListEntry->nPaletteOffset))
                {
                    pNewListEntry->pNext = pCurrent;
                    pListRoot = pNewListEntry;
                }
                else
                {
                    while (pCurrent->pNext &&
                        (pCurrent->pNext->nPaletteOffset < pNewListEntry->nPaletteOffset))
                    {
                        pCurrent = pCurrent->pNext;
                    }

                    if (!pCurrent->pNext || (pCurrent->pNext->nPaletteOffset != pNewListEntry->nPaletteOffset))
                    {
                        pNewListEntry->pNext = pCurrent->pNext;
                        pCurrent->pNext = pNewListEntry;
                    }
                    else // this should only happen during development or very weird situations
                    {
                        pCurrent->pNext->nTerminalOffset = max(pCurrent->pNext->nTerminalOffset, pNewListEntry->nTerminalOffset);
                        safe_delete(pNewListEntry);
                    }
                }
            }
        }
    }

    return pListRoot;
}

void CGameWithExtrasFile::CheckForErrorsInTables()
{
    const uint32_t nPaletteCountForRom = m_nTotalPaletteCount;
    const uint32_t nExtraCount = GetPaletteCountForUnit(m_nExtraUnit);
    bool fShouldCheckExtras = (nExtraCount != 0);
    m_nLowestRomLocationThisPass = k_nBogusHighValue;
    m_nLowestRomExtrasLocationThisPass = k_nBogusHighValue;

    CWaitCursor wait; // Show a wait cursor, as if we *do* need to run full checks it can take a moment.

    GetHost()->GetPalModDlg()->SetStatusText(IDS_LOADING_DUPECHECK);

    CString strText;
    strText.Format(L"CGameWithExtrasFile::CheckForErrorsInTables: Expected palette count for this game is %u (%u internal).", m_nSafeCountForThisRom, (m_nSafeCountForThisRom - nExtraCount));
    OutputDebugString(strText);
    if (m_nSafeCountForThisRom == nPaletteCountForRom)
    {
        strText = L" Current palette count is unchanged.\n";
    }
    else
    {
        strText.Format(L" We found a total of %u now including %u extras.\n\tIf you added palettes, please update the game's known palette count to %u now.\n", nPaletteCountForRom, nExtraCount, (nPaletteCountForRom - nExtraCount));
    }
    OutputDebugString(strText);

#ifdef DEBUG
    // always run the dupe check logic in debug mode "just in case"
    bool fShouldRunDupeCheck = true;
#else
    bool fShouldRunDupeCheck = (nPaletteCountForRom != m_nSafeCountForThisRom);
#endif

    const int nInternalDupeCount = fShouldRunDupeCheck ?  GetDupeCountInDataset() : 0;
    const int nExtraDupeCount = fShouldCheckExtras ? GetDupeCountInExtrasDataset() : 0;

    if (nInternalDupeCount ||
        nExtraDupeCount ||
        ((m_nSafeCountForThisRom != nPaletteCountForRom) && (m_nTotalInternalUnits != 0)))
    {
        CString strError;
        strText.Empty();

        if (nExtraDupeCount)
        {
            strError.Format(L"WARNING: The %s Extras file contains %u duplicate palettes (including splitting).  Dupe palettes will prevent patching correctly.  Please remove them.\n\n", m_pszExtraFilename, nExtraDupeCount);
            strText.Append(strError);
        }
        
        if (nInternalDupeCount)
        {
            if (((m_nGameFlag == MVC_A) || (m_nGameFlag == MVC_S)) && (nInternalDupeCount == 2))
            {
                strError = L"Warning: MvC's palettes overlap in a few places, so be careful when adding new palettes.\n";
            }
            else
            {
                strError.Format(L"WARNING: There are currently %u duplicates in PalMod's internal palettes tables for this game.\n\nThis is a bug in PalMod.  Please report.\n", nInternalDupeCount);
            }
            strText.Append(strError);
        }
        else if ((m_nSafeCountForThisRom != nPaletteCountForRom) && (m_nTotalInternalUnits != 0))
        {
            strError.Format(L"Warning: This game's known palette count (m_nSafeCountForThisRom) should be updated.\n\nNo duplicates were found.\n");
            strText.Append(strError);
        }

        OutputDebugString(strText);
        MessageBox(g_appHWnd, strText, GetHost()->GetAppName(), MB_ICONERROR);
    }
    else
    {
        OutputDebugString(L"\tCGameWithExtrasFile::CheckForErrorsInTables: This matches the last known palette count: we're good.\n");
    }

    if (m_nLowestRomLocationThisPass != k_nBogusHighValue)
    {
        if (m_nLowestRomLocationThisPass < GetLowestExpectedPaletteLocation())
        {
            strText.Format(L"Warning: This game is trying to write to ROM location 0x%x which is lower than we usually write to (0x%x).\n\nPalMod should be updated to use that new location for the safety check.  Please report.\n", m_nLowestRomLocationThisPass, GetLowestExpectedPaletteLocation());
            OutputDebugString(strText);
            MessageBox(g_appHWnd, strText, GetHost()->GetAppName(), MB_ICONERROR);
        }
        else
        {
            strText.Format(L"\tCGameWithExtrasFile::CheckForErrorsInTables: All palettes were modifying expected ROM ranges (lowest was 0x%x, we expect no lower than 0x%x).  We're good.\n", m_nLowestRomLocationThisPass, GetLowestExpectedPaletteLocation());
            OutputDebugString(strText);
        }
    }
    else
    {
        strText.Format(L"\tCGameWithExtrasFile::CheckForErrorsInTables: Skipped the ROM location safety check since the tables checked out.\n");
        OutputDebugString(strText);
    }

    if (m_nLowestRomExtrasLocationThisPass != k_nBogusHighValue)
    {
        if (m_nLowestRomExtrasLocationThisPass < GetLowestExpectedPaletteLocation())
        {
            strText.Format(L"Warning: The currently loaded Extras file wants to write to ROM location 0x%x which is lower than we usually write to (0x%x).\n\nThis is possibly intentional, but: just a heads-up.\n", m_nLowestRomExtrasLocationThisPass, GetLowestExpectedPaletteLocation());
            OutputDebugString(strText);
            MessageBox(g_appHWnd, strText, GetHost()->GetAppName(), MB_ICONERROR);
        }
        else
        {
            strText.Format(L"\tCGameWithExtrasFile::CheckForErrorsInTables: All Extras palettes were modifying expected ROM ranges (lowest was 0x%x, we expect no lower than 0x%x).  We're good.\n", m_nLowestRomExtrasLocationThisPass, GetLowestExpectedPaletteLocation());
            OutputDebugString(strText);
        }
    }
}

void CGameWithExtrasFile::_WriteToFileAsANSI(CFile& ExtraFile, CString strData)
{
    DWORD dwSize = WideCharToMultiByte(CP_ACP, 0, strData.GetString(), -1, NULL, 0, NULL, FALSE);

    char* paszBuffer = new char[dwSize];
    memset(paszBuffer, 0, dwSize);
    
    if (WideCharToMultiByte(CP_ACP, 0, strData.GetString(), -1, paszBuffer, dwSize, NULL, FALSE))
    {
        ExtraFile.Write(paszBuffer, static_cast<UINT>(strlen(paszBuffer)));
    }

    delete[] paszBuffer;
};

void CGameWithExtrasFile::_WriteHeaderForPaletteListFile(CFile& OutputFile, PaletteListOutputType outputType)
{
    CString strFileText;

    if (outputType == PaletteListOutputType::Extras)
    {
        if (GetGameName())
        {
            strFileText.Format(L"%S%s\r\n", m_kpszGameNameKey, GetGameName());
            _WriteToFileAsANSI(OutputFile, strFileText);
        }

        LPCSTR paszColorFormat = ColorSystem::GetColorFormatStringForColorFormat(GetColorMode());
        if (paszColorFormat)
        {
            strFileText.Format(L"%S%S\r\n", m_kpszColorFormatKey, paszColorFormat);
            _WriteToFileAsANSI(OutputFile, strFileText);
        }

        LPCSTR paszAlphaMode = ColorSystem::GetAlphaModeStringForAlphaMode(GetAlphaMode());
        if (paszAlphaMode)
        {
            strFileText.Format(L"%S%S\r\n", m_kpszAlphaModeKey, paszAlphaMode);
            _WriteToFileAsANSI(OutputFile, strFileText);
        }

        strFileText = L"\r\n";
        _WriteToFileAsANSI(OutputFile, strFileText);
    }
    else
    {
        CString strOutputText = L"#";
        CString strTemp;

        // For the first line let's put our metadata as a comment
        if (GetGameName())
        {
            strOutputText.Append(GetGameName());
        }
        strOutputText.Append(L", ");

        LPCSTR paszColorFormat = ColorSystem::GetColorFormatStringForColorFormat(GetColorMode());
        if (paszColorFormat)
        {
            strTemp.Format(L"%S", paszColorFormat);
            strOutputText.Append(strTemp);
        }
        strOutputText.Append(L", ");

        LPCSTR paszAlphaMode = ColorSystem::GetAlphaModeStringForAlphaMode(GetAlphaMode());
        if (paszAlphaMode)
        {
            strTemp.Format(L"%S", paszAlphaMode);
            strOutputText.Append(strTemp);
        }
        strOutputText.Append(L"\r\n");

        _WriteToFileAsANSI(OutputFile, strOutputText);
    }
}

// Note that this is unreachable.  But I wanted to prototype it at least: we can plug it in later if useful.
// Usage is simply:
//      sPaletteTrackingInformation* pListRoot = _AssembleTrackingListFromGameUnits(true);
//      _OutputPaletteListToType(pListRoot, PaletteListOutputType::Extras);
//      <list deletion here>
// An additional useful feature for this path would be an option to select which Units to export.

void CGameWithExtrasFile::_OutputPaletteListToType(sPaletteTrackingInformation* pListRoot, PaletteListOutputType outputType)
{
    CString strSuggestedName = m_pszLoadedPathOrFile;
    strSuggestedName.Append(L"E.txt");

    CFileDialog OutputDialog(
        FALSE,
        nullptr,
        strSuggestedName,
        OFN_OVERWRITEPROMPT | OFN_HIDEREADONLY
    );

    if (OutputDialog.DoModal() == IDOK)
    {
        OPENFILENAME ofn = OutputDialog.GetOFN();
        CFile OutputFile;

        if (OutputFile.Open(ofn.lpstrFile, CFile::modeCreate | CFile::modeWrite))
        {
            CString strOutputText = L"#";

            _WriteHeaderForPaletteListFile(OutputFile, outputType);

            sPaletteTrackingInformation* pCurrent = pListRoot;

            // Output the list
            while (pCurrent)
            {
                if (outputType == PaletteListOutputType::CSV)
                {
                    strOutputText.Format(L"%s, %s, \"%s\", 0x%x, 0x%x\r\n", pCurrent->strUnitName.c_str(), pCurrent->strCollectionName.c_str(), pCurrent->strPaletteName.c_str(), pCurrent->nPaletteOffset, pCurrent->nTerminalOffset);
                }
                else
                {

                    strOutputText.Format(L"%s: %s: \"%s\"\r\n0x%x\r\n0x%x\r\n\r\n", pCurrent->strUnitName.c_str(), pCurrent->strCollectionName.c_str(), pCurrent->strPaletteName.c_str(), pCurrent->nPaletteOffset, pCurrent->nTerminalOffset);

                }
                _WriteToFileAsANSI(OutputFile, strOutputText);

                sPaletteTrackingInformation* pTemp = pCurrent->pNext;
                pCurrent = pTemp;
            }

            // Close the file
            OutputFile.Close();
        }
    }
}

void CGameWithExtrasFile::_CreateExtrasFileWithOptions(CFile& ExtraFile, sExtrasFileCreationOptions& sCreationOptions)
{
    if (GetIsDir())
    {
        OutputDebugString(L"Sorted tree dump not supported for directory-based games using parallel rom handling as the locations will be identical between files.\r\n");
        OutputDebugString(L"If this doesn't work, please turn off extra files for this game.\r\n");
    }

    sDescTreeNode* pRootTree = GetMainTree()->GetDescTree(-1);

    const uint32_t c_nUnitCount = GetUnitCt();

    sPaletteTrackingInformation* pListRoot = nullptr;

    if (sCreationOptions.fAddKnownAsComments || sCreationOptions.fShowUnknownRegions)
    {
        pListRoot = _AssembleTrackingListFromGameUnits(sCreationOptions.fSortKnownPalettes);
    }

    // Write the header
    CString strExtraFileText;

    strExtraFileText = L";Please refer to the Read Me for a brief guide to Extras files, or the longer guide on the PalMod site.\r\n\r\n";
    strExtraFileText += L";When you are done making changes to the Extras file, reload the game to see those palettes.\r\n\r\n";

    _WriteToFileAsANSI(ExtraFile, strExtraFileText);

    // Add in the basic game information
    _WriteHeaderForPaletteListFile(ExtraFile, PaletteListOutputType::Extras);

    if (sCreationOptions.fAddKnownAsComments || sCreationOptions.fShowUnknownRegions)
    {
        if (sCreationOptions.fShowUnknownRegions && sCreationOptions.fShowPreUnknown && (m_nLowestKnownPaletteRomLocation != 0))
        {
            strExtraFileText = L"Start of this ROM\r\n";
            strExtraFileText += L"0x0\r\n";
            strExtraFileText += L";To: first known palette\r\n";
            _WriteToFileAsANSI(ExtraFile, strExtraFileText);
            strExtraFileText.Format(L"0x%x\r\n\r\n", m_nLowestKnownPaletteRomLocation);
            _WriteToFileAsANSI(ExtraFile, strExtraFileText);
        }

        sPaletteTrackingInformation* pCurrent = pListRoot;

        // Output the list and clean up and delete as we go
        while (pCurrent)
        {
            if (sCreationOptions.fAddKnownAsComments)
            {
                strExtraFileText.Format(L";Known: %s, %s, %s\r\n", pCurrent->strUnitName.c_str(), pCurrent->strCollectionName.c_str(), pCurrent->strPaletteName.c_str());
                _WriteToFileAsANSI(ExtraFile, strExtraFileText);

                strExtraFileText.Format(L";Start: 0x%x\r\n", pCurrent->nPaletteOffset);
                _WriteToFileAsANSI(ExtraFile, strExtraFileText);
            }

            bool fHaveExtendedTheRange = false;

            while (pCurrent->pNext)
            {
                if (pCurrent->nTerminalOffset == pCurrent->pNext->nPaletteOffset)
                {
                    fHaveExtendedTheRange = true;
                    sPaletteTrackingInformation* pTemp = pCurrent->pNext;
                    safe_delete(pCurrent);
                    pCurrent = pTemp;
                }
                else
                {
                    break;
                }
            }

            if (sCreationOptions.fAddKnownAsComments)
            {
                if (fHaveExtendedTheRange)
                {
                    strExtraFileText.Format(L"; to %s, %s, %s\r\n", pCurrent->strUnitName.c_str(), pCurrent->strCollectionName.c_str(), pCurrent->strPaletteName.c_str());
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                }

                strExtraFileText.Format(L";End: 0x%x\r\n\r\n", pCurrent->nTerminalOffset);
                _WriteToFileAsANSI(ExtraFile, strExtraFileText);
            }

            if (pCurrent->pNext)
            {
                if (sCreationOptions.fShowUnknownRegions)
                {
                    strExtraFileText.Format(L"Post: %s, %s, %s\r\n", pCurrent->strUnitName.c_str(), pCurrent->strCollectionName.c_str(), pCurrent->strPaletteName.c_str());
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText.Format(L"0x%x\r\n", pCurrent->nTerminalOffset);
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText.Format(L";Pre: %s, %s, %s\r\n", pCurrent->pNext->strUnitName.c_str(), pCurrent->pNext->strCollectionName.c_str(), pCurrent->pNext->strPaletteName.c_str());
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText.Format(L"0x%x\r\n\r\n", pCurrent->pNext->nPaletteOffset);
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                }
            }
            else if (sCreationOptions.fShowUnknownRegions && sCreationOptions.fShowPostUnknown && m_pszLoadedPathOrFile)
            {
                // How do we want to handle trailing palettes?  We need the file size to do this correctly.
                CFile GameROM;

                if (GameROM.Open(m_pszLoadedPathOrFile, CFile::modeRead | CFile::typeBinary))
                {
                    strExtraFileText.Format(L"Post: %s, %s, %s\r\n", pCurrent->strUnitName.c_str(), pCurrent->strCollectionName.c_str(), pCurrent->strPaletteName.c_str());
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText.Format(L"0x%x\r\n", pCurrent->nTerminalOffset);
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText = L";To: end of ROM\r\n";
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);

                    // If we have a view of files, the extra file can be used across them: double-check that by checking confirmed size vs (single) file size
                    int nFileViewSize = static_cast<int>(GameROM.GetLength());

                    if ((m_nLoadedFileViewSize != -1) &&
                        (m_nLoadedFileViewSize > static_cast<uint32_t>(nFileViewSize)))
                    {
                        nFileViewSize = static_cast<int>(m_nLoadedFileViewSize);
                    }

                    m_nLoadedFileViewSize;
                    strExtraFileText.Format(L"0x%x\r\n\r\n", nFileViewSize);
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);

                    GameROM.Abort();
                }
            }

            sPaletteTrackingInformation* pTemp = pCurrent->pNext;
            safe_delete(pCurrent);
            pCurrent = pTemp;
        }
    }

    // Close the file
    ExtraFile.Close();
}

bool CGameWithExtrasFile::_GetExtrasOptionsFromUser(sExtrasFileCreationOptions& sCreationOptions)
{
    bool fSuccess = false;
    CCreateExtraFileDlg createDlg;

    if (createDlg.DoModal() == IDOK)
    {
        sCreationOptions.fAddKnownAsComments = createDlg.m_fAddKnownAsComments;
        sCreationOptions.fSortKnownPalettes = createDlg.m_fSortKnownPalettes || createDlg.m_fShowUnknownRegions;
        sCreationOptions.fShowUnknownRegions = createDlg.m_fShowUnknownRegions;
        sCreationOptions.fShowPreUnknown = createDlg.m_fShowPreUnknown;
        sCreationOptions.fShowPostUnknown = createDlg.m_fShowPostUnknown;

        fSuccess = true;
    }

    return fSuccess;
}

bool CGameWithExtrasFile::_CreateNewExtrasFile(LPCWSTR pszFilePath)
{
    CFile ExtraFile;
    bool fSuccess = false;

    sExtrasFileCreationOptions sCreationOptions;
    if (_GetExtrasOptionsFromUser(sCreationOptions))
    {
        if (ExtraFile.Open(pszFilePath, CFile::modeCreate | CFile::modeWrite))
        {
            fSuccess = true;
            _CreateExtrasFileWithOptions(ExtraFile, sCreationOptions);
        }
        else
        {
            CString strError;
            strError.Format(L"PalMod could not create a file at:\n\t\"%s\"\nPlease ensure that this is a writable location.\n", pszFilePath);
            MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR | MB_OK);
        }
    }

    return fSuccess;
}

void CGameWithExtrasFile::OpenExtraFile()
{
    if (m_pszExtraFilename)
    {
        wchar_t szExtraFileWithPath[MAX_PATH];

        LPCWSTR pszSlash = wcschr(m_pszExtraFilename, L'\\');
        if (pszSlash)
        {
            // Unknown game mode can provide a full path: use that if available
            wcsncpy_s(szExtraFileWithPath, m_pszExtraFilename, ARRAYSIZE(szExtraFileWithPath));
        }
        else
        {
            // Create in the PalMod folder
            DWORD dwCharsUsed = GetModuleFileName(nullptr, szExtraFileWithPath, static_cast<DWORD>(ARRAYSIZE(szExtraFileWithPath)));
            wchar_t* pszExeFileName = wcsrchr(szExtraFileWithPath, L'\\') + 1;
            wcsncpy(pszExeFileName, m_pszExtraFilename, ARRAYSIZE(szExtraFileWithPath) - dwCharsUsed);
        }
        szExtraFileWithPath[ARRAYSIZE(szExtraFileWithPath) - 1] = 0;

        WIN32_FILE_ATTRIBUTE_DATA fad = {};
        
        bool fHaveUsefulFile = false;

        if (GetFileAttributesEx(szExtraFileWithPath, GetFileExInfoStandard, &fad))
        {
            // Make sure it exists and is non-0
            fHaveUsefulFile = (fad.dwFileAttributes != INVALID_FILE_ATTRIBUTES) && ((fad.nFileSizeHigh != 0) || (fad.nFileSizeLow != 0));
        }

        if (fHaveUsefulFile ||
            _CreateNewExtrasFile(szExtraFileWithPath))
        {
            ShellExecute(
                g_appHWnd,
                L"open",
                szExtraFileWithPath,
                NULL,
                NULL,
                SW_SHOWNORMAL
            );
        }
    }
}
