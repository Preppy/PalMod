#include "StdAfx.h"
#include <fstream>
#include "PalMod.h"
#include "RegProc.h"

#include "ExtraFile.h"
#include <unordered_map>

// Uncomment this to have this file help convert an Extra file to our header style
//#define DUMP_EXTRAS_ON_LOAD

using namespace std;

uint32_t CGameWithExtrasFile::m_nTotalPaletteCount = 0;
char CGameWithExtrasFile::m_paszGameNameOverride[MAX_PATH] = "";
AlphaMode CGameWithExtrasFile::m_AlphaModeOverride = AlphaMode::Unknown;
ColMode CGameWithExtrasFile::m_ColorModeOverride = ColMode::COLMODE_LAST;

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

void CGameWithExtrasFile::SetColorFormatOverride(LPCSTR paszColorString)
{
    if (ColorSystem::GetColorFormatForColorFormatString(paszColorString, m_ColorModeOverride))
    {
        CStringA astrMsg;
        astrMsg.Format("\tCGameWithExtrasFile: Extras file is setting Color mode to %s\n", paszColorString);
        OutputDebugStringA(astrMsg);
    }
}

void CGameWithExtrasFile::LoadExtraFileForGame(LPCWSTR pszExtraFileName, stExtraDef** pCompleteExtraDefs, uint32_t nExtraUnitStart, uint32_t nGameROMSize, uint8_t cbColorSize /* = 2 */)
{
    ifstream extraFile;
    wchar_t szTargetFile[MAX_PATH];
    CString strOutputText;
    int nTotalExtensionExtraLinesHandled = 0;
    int nStockExtrasCount = 0;
    int nArrayOffsetDesired = 0;
    bool fAlertedToTruncation = false;

    const int nMaxExtraBufferSize = 10000;
    stExtraDef* prgTempExtraBuffer = new stExtraDef[nMaxExtraBufferSize];

    // Reset for a new extras file load.
    ResetStaticOverrideVariables();

    if (prgTempExtraBuffer)
    {
        {
            // We always want the extra list to have a starting position and an ending position.
            const stExtraDef STOCKEXTRALIST_EXTRA[] =
            {
                // Start
                { UNIT_START_VALUE },

                { INVALID_UNIT_VALUE }
            };

            nStockExtrasCount = 1; // count the empty starting value
            memcpy(prgTempExtraBuffer, STOCKEXTRALIST_EXTRA, ARRAYSIZE(STOCKEXTRALIST_EXTRA) * sizeof(stExtraDef));
        }

        if ((nGameROMSize != -1) && pszExtraFileName) // If we don't know the ROM size we don't know how to sanely bounds-check our file access, so can't trust our handling of Extra files.
        {
            // Now we look for the Extra extension file.
            GetModuleFileName(nullptr, szTargetFile, (DWORD)MAX_PATH);
            wchar_t* pszExeFileName = wcsrchr(szTargetFile, L'\\') + 1;
            pszExeFileName[0] = 0;

            wcscat(szTargetFile, pszExtraFileName);

            strOutputText.Format(L"Loading extra file for '%s'...\n", pszExtraFileName);
            OutputDebugString(strOutputText);

            DWORD nFileAttrib = GetFileAttributes(szTargetFile);

            bool fShouldOpenFile = ((nFileAttrib & FILE_ATTRIBUTE_ARCHIVE) == FILE_ATTRIBUTE_ARCHIVE) && (nFileAttrib != INVALID_FILE_ATTRIBUTES);

            if (fShouldOpenFile)
            {
                CFile extraFile;

                if (extraFile.Open(szTargetFile, CFile::modeRead))
                {
                    CFileStatus extraInfo;

                    if (extraFile.GetStatus(extraInfo))
                    {
                        DWORD nFileSize = (DWORD)extraInfo.m_size;

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

                    extraFile.Abort();
                }
            }

            if (fShouldOpenFile)
            {
                // This is raw file and deliberately char
                char aszCurrLine[MAX_PATH]; // arbitrary line length: in practice it should be MAX_DESCRIPTION_LENGTH + 1
                char aszCurrDesc[MAX_DESCRIPTION_LENGTH] = "";
                char* aszFinalLine = nullptr;
                int nCurrStart = 0;
                int nCurrEnd = 0;
                DWORD k_colorsPerPage = CRegProc::GetMaxPalettePageSize();
#ifdef DUMP_EXTRAS_ON_LOAD
                std::unordered_map<wstring, size_t> vstrUnits;
                std::vector<wstring> vstrUnitFriendlyNames;
                std::vector<wstring> vstrNodes;
                std::vector<wstring> vstrNodeFriendlyNames;
#endif

                if (CRegProc::GetMaxColorsPerPageOverride() != 0)
                {
                    // Extra files are allowed to to be larger if they really need it
                    k_colorsPerPage = CRegProc::GetMaxColorsPerPageOverride();
                }

                extraFile.open(szTargetFile, ios::in);

                while (!extraFile.eof())
                {
                    std::string strCurrLine;
                    // Use a std::string here to ensure we get the full length of the string, even 
                    // if it's pathologically long,
                    std::getline(extraFile, strCurrLine);

                    // Truncate to reasonability
                    strncpy_s(aszCurrLine, strCurrLine.c_str(), ARRAYSIZE(aszCurrLine) - 1);

                    aszFinalLine = aszCurrLine;

                    if (strlen(aszFinalLine))
                    {
                        if (aszFinalLine[0] != ';')
                        {
                            int nPrevAmt = 0;

                            if (nTotalExtensionExtraLinesHandled == 0)
                            {
                                if (m_ColorModeOverride != ColMode::COLMODE_LAST)
                                {
                                    cbColorSize = ColorSystem::GetCbForColMode(m_ColorModeOverride);
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
                                constexpr auto nMaxDescLen = min(40, MAX_DESCRIPTION_LENGTH - 8 - 8 - 8 - 6);
                                if (iswspace(aszFinalLine[0]) && (strlen(aszFinalLine) == 1))
                                {
                                    strOutputText.Format(L"Warning: Bogus entry in extension file with text '%S'.  Skipping.\n", aszFinalLine);
                                    OutputDebugString(strOutputText);
                                    continue;
                                }

                                memcpy(aszCurrDesc, aszFinalLine, nMaxDescLen);
                                aszCurrDesc[nMaxDescLen] = '\0';
                                break;
                            }
                            case 1:
                            {
                                nCurrStart = strtoul(aszFinalLine, nullptr, 16);

                                if (nCurrStart == 0)
                                {
                                    if (((aszFinalLine[0] > 'F') && (aszFinalLine[0] < 'a')) ||
                                        (aszFinalLine[0] > 'f'))
                                    {
                                        CString strError;
                                        strError.Format(L"In file \"%s\", Extra \"%S\" appears to be broken: it is trying to display from starting offset \"%S\".  If that's not a number, your Extras file isn't correct.\n", pszExtraFileName, aszCurrDesc, aszFinalLine);
                                        MessageBox(g_appHWnd, strError, L"PalMod", MB_ICONERROR);
                                    }
                                }
                                break;
                            }
                            case 2:
                            {
                                int nPos = 0;

                                nCurrEnd = strtoul(aszFinalLine, nullptr, 16);

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
                                if ((nCurrEnd > (int)nGameROMSize) || (nCurrStart >= (int)nGameROMSize))
                                {
                                    if (!fAlertedToTruncation)
                                    {
                                        CString strQuestion;
                                        strQuestion.Format(L"In file \"%s\", Extra \"%S\" is broken.\n\nThis game ROM size is 0x%x bytes. This Extra starts at offset 0x%x and ends at offset 0x%x."
                                            L"That won't work: the maximum ending offset possible is 0x%x.\n\n"
                                            L"Please fix this. PalMod is truncating this Extra so that you do not corrupt your ROM.", pszExtraFileName, aszCurrDesc, nGameROMSize, nCurrStart, nCurrEnd, nGameROMSize);

                                        MessageBox(g_appHWnd, strQuestion, GetHost()->GetAppName(), MB_OK | MB_ICONSTOP);
                                        fAlertedToTruncation = true;
                                    }

                                    CStringA strFormat;
                                    strFormat.Format("Broken: Truncated: %s", aszCurrDesc);
                                    _snprintf_s(aszCurrDesc, MAX_DESCRIPTION_LENGTH, _TRUNCATE, strFormat.GetString());
                                    nCurrStart = min(nCurrStart, (int)(nGameROMSize - (16 * cbColorSize)));
                                    nCurrEnd = min(nCurrEnd, (int)nGameROMSize);
                                }

                                uint32_t nColorsUsed = (nCurrEnd - nCurrStart) / cbColorSize; // usually 2 bytes per color.
                                const int nTotalPagesNeeded = (int)ceil((double)nColorsUsed / (double)k_colorsPerPage);
                                int nCurrentPage = 1;

#ifdef DUMP_EXTRAS_ON_LOAD // You can use this to convert Extras file content into usable headers.
                                CString strText;

                                // Do we want to autoslice at 128 or 256 colors...?  Probably 128, so let's use that here.
                                bool fPaletteUsesMultiplePages = (nColorsUsed > PAL_MAXAMT_8COLORSPERLINE);

                                if (!fPaletteUsesMultiplePages)
                                {
                                    strText.Format(L"    { L\"%S\", 0x%x, 0x%x },\r\n", aszCurrDesc, nCurrStart, nCurrEnd);
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
                                        stExtraDef* pDefToSplit = &prgTempExtraBuffer[nArrayOffsetDesired];

                                        pDefToSplit->uUnitN = nExtraUnitStart;
                                        if (nTotalPagesNeeded > 1)
                                        {
                                            //pCurrDef->isInvisible = (nCurrentPage == 1);
                                            _snwprintf(pDefToSplit->szDesc, sizeof(pDefToSplit->szDesc), L"%S (%u/%u) 0x%x", aszCurrDesc, nCurrentPage++, nTotalPagesNeeded, nCurrStart + (k_colorsPerPage * cbColorSize * nPos));
                                        }
                                        else
                                        {
                                            _snwprintf(pDefToSplit->szDesc, sizeof(pDefToSplit->szDesc), L"%S", aszCurrDesc);
                                            //pCurrDef->isInvisible = false;
                                        }

                                        pDefToSplit->uOffset = nCurrStart + (k_colorsPerPage * cbColorSize * nPos);
                                        pDefToSplit->cbPaletteSize = nCurrentPaletteEntries * cbColorSize;
                                        pDefToSplit->isInvisible = false;

#ifdef DUMP_EXTRAS_ON_LOAD
                                        if (fPaletteUsesMultiplePages)
                                        {
                                            strText.Format(L"    { L\"%s\", 0x%x, 0x%x },\r\n", pDefToSplit->szDesc, pDefToSplit->uOffset, pDefToSplit->uOffset + pDefToSplit->cbPaletteSize);
                                            OutputDebugString(strText);
                                        }
#endif
                                    }

                                    // Ensure that if we loop through here again we are using a new Extra node item
                                    nPos++;
                                }
                                break;
                            } // end case 2
                            } // end switch

                            nTotalExtensionExtraLinesHandled++;
                        }
                        else if ((nExtraUnitStart == 0) && // Only allow overrides for developer mode
                                (nTotalExtensionExtraLinesHandled == 0)) // Only allow overrides before we parse color entries
                        {
                            typedef void (*overrideFunction)(LPCSTR);

                            std::map<LPCSTR, overrideFunction> rgOverrideMap =
                            {
                                { m_kpszGameNameKey, SetGameNameOverride },
                                { m_kpszColorFormatKey, SetColorFormatOverride },
                                { m_kpszAlphaModeKey, SetAlphaOverride },
                            };

                            for (const auto& [key, override] : rgOverrideMap)
                            {
                                // Special allowance here for super secret items
                                const uint32_t nKeyLength = static_cast<uint32_t>(strlen(key));
                                if (_strnicmp(aszFinalLine, key, nKeyLength) == 0)
                                {
                                    uint32_t nNameLength = static_cast<uint32_t>(strlen(aszFinalLine + nKeyLength));
                                    override(aszFinalLine + nKeyLength);
                                    break;
                                }
                            }
                        }
                        else
                        {
#ifdef DUMP_EXTRAS_ON_LOAD
                            static CString strCurrentUnit = L"Unknown";
                            if (strncmp(aszFinalLine, ";---", 4) == 0)
                            {
                                wchar_t szPrintable[MAX_PATH];
                                strCurrentUnit.Format(L"%S", aszFinalLine + 4);
                                vstrUnitFriendlyNames.push_back(strCurrentUnit.GetString());
                                StrRemoveNonASCII(szPrintable, MAX_PATH, strCurrentUnit.GetString());
                                strCurrentUnit = szPrintable;
                                vstrUnits.emplace(strCurrentUnit.GetString(), 0);
                            }
                            else if (strncmp(aszFinalLine, ";--", 3) == 0)
                            {
                                CString strText, strFriendlyName;
                                wchar_t szPrintableNodeName[MAX_PATH];

                                strFriendlyName.Format(L"%S", aszFinalLine + 3);
                                StrRemoveNonASCII(szPrintableNodeName, MAX_PATH, strFriendlyName.GetString());

                                if (vstrNodes.size())
                                {
                                    OutputDebugString(L"};\r\n\r\n");
                                }

                                CString strNodeRef;
                                strNodeRef.Format(L"GAMENAME_%s_%s", strCurrentUnit.GetString(), szPrintableNodeName);
                                strText.Format(L"const sGame_PaletteDataset %s[] =\r\n{\r\n", strNodeRef.GetString());
                                OutputDebugString(strText);
                                
                                std::unordered_map<wstring, size_t>::iterator it = vstrUnits.find(strCurrentUnit.GetString());

                                if (it != vstrUnits.end())
                                {
                                    it->second++;
                                    vstrNodes.push_back(strNodeRef.GetString());
                                    vstrNodeFriendlyNames.push_back(strFriendlyName.GetString());
                                }
                            }
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

#ifdef DUMP_EXTRAS_ON_LOAD
                if (vstrNodes.size())
                {
                    size_t nNodeIndex = 0;
                    CString strText;
                    std::unordered_map<wstring, size_t>::iterator it = vstrUnits.begin();

                    // Close existing node
                    OutputDebugString(L"};\r\n\r\n");

                    for (; it != vstrUnits.end(); it++)
                    {
                        strText.Format(L"const sDescTreeNode GAMENAME_%s_COLLECTION[] =\r\n{\r\n", it->first.c_str());
                        OutputDebugString(strText.GetString());

                        for (size_t nCurrent = 0; nCurrent < it->second; nCurrent++)
                        {
                            strText.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)%s, ARRAYSIZE(%s) },\r\n", vstrNodeFriendlyNames.at(nNodeIndex).c_str(), vstrNodes.at(nNodeIndex).c_str(), vstrNodes.at(nNodeIndex).c_str());
                            OutputDebugString(strText.GetString());
                            nNodeIndex++;
                        }

                        OutputDebugString(L"};\r\n\r\n");
                    }

                    OutputDebugString(L"const sDescTreeNode GAMENAME_UNITS[] =\r\n{\r\n");

                    size_t nUnitIndex = 0;

                    for (it = vstrUnits.begin(); it != vstrUnits.end(); it++)
                    {
                        strText.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)GAMENAME_%s_COLLECTION, ARRAYSIZE(GAMENAME_%s_COLLECTION) },\r\n", vstrUnitFriendlyNames.at(nUnitIndex++).c_str(), it->first.c_str(), it->first.c_str());
                        OutputDebugString(strText.GetString());
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
            OutputDebugString(L"\tExtras file will not be loaded as the ROM size is unknown.\n");
        }
    }

    if (*pCompleteExtraDefs == nullptr)
    {
        const int nExtraArraySize = min(nStockExtrasCount + (nTotalExtensionExtraLinesHandled / 3), nMaxExtraBufferSize);

        // These allocations are cleaned up in CGameLoad::~CGameLoad
        *pCompleteExtraDefs = new stExtraDef[nExtraArraySize + 1];

        memcpy(*pCompleteExtraDefs, prgTempExtraBuffer, nExtraArraySize * sizeof(stExtraDef));

        (*pCompleteExtraDefs)[nExtraArraySize].uUnitN = INVALID_UNIT_VALUE;

        strOutputText.Format(L"\tAdded %u palette Extras total, including the '%s' Extra file.\n", nExtraArraySize, pszExtraFileName);
        OutputDebugString(strOutputText);
    }

    safe_delete_array(prgTempExtraBuffer);
}

bool CGameWithExtrasFile::IsROMOffsetDuplicated(uint32_t nUnitId, uint32_t nPalId, uint32_t nStartingOffsetToCheck, uint32_t nEndOfRegionToCheck /* = 0 */)
{
    uint32_t nTotalDupesFound = 0;
    CString strDupeText;

    // If we're in Extras territory, check it against itself.
    uint32_t nUnitCountToCheck = (m_nTotalInternalUnits == nUnitId) ? m_nTotalInternalUnits + 1 : m_nTotalInternalUnits;

    //Go through each character
    for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitCountToCheck; nUnitCtr++)
    {
        uint32_t nPalCount = GetPaletteCountForUnit(nUnitCtr);
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
                        strDupeText.Format(L"ERROR: Unit 0x%02x pal 0x%02x ('%s', 0x%x to 0x%x) is a duplicate of unit 0x%02x pal 0x%02x (0x%x to 0x%x)!\n", nUnitCtr, nPalCtr, m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation, nCurrentEndOfPaletteRegion, nUnitId, nPalId, nStartingOffsetToCheck, nEndOfRegionToCheck);
                    }
                    else
                    {
                        strDupeText.Format(L"ERROR: Unit 0x%02x pal 0x%02x ('%s', 0x%x to 0x%x) is a duplicate of unit 0x%02x pal 0x%02x (starts at 0x%x)!\n", nUnitCtr, nPalCtr, m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation, nCurrentEndOfPaletteRegion, nUnitId, nPalId, nStartingOffsetToCheck);
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
    uint32_t nTotalPalettesChecked = 0;
    uint32_t nTotalDupesFound = 0;

    CString strDupeText;
    bool fCollisionFound = false;
    const DWORD k_maxColorsPerUnit = PAL_MAXAMT_16COLORSPERLINE;
    bool fShownInternalErrorOnce = false;
    // TMNTTF and MWarr palettes are odd lengths, so for some of them we need to step back one
    // color in order to assemble a working palette
    uint32_t k_cbUseForcedOffsetForActuallyOverlappingPalettes = 0;

    if ((nGameFlag == TMNTTF_SNES) ||
        (nGameFlag == MWARR_A))
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

        uint32_t nPalCount = GetPaletteCountForUnit(nUnitCtr);
        for (uint32_t nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);
            nTotalPalettesChecked++;

            uint32_t nCurrentROMOffset = m_nCurrentPaletteROMLocation;

            if (nCurrentROMOffset == INVALID_UNIT_VALUE)
            {
                // virtual palette: ignore
                continue;
            }

            m_nLowestRomLocationThisPass = min(m_nLowestRomLocationThisPass, m_nCurrentPaletteROMLocation);

            if ((m_nCurrentPaletteSizeInColors > k_maxColorsPerUnit) || (m_nCurrentPaletteSizeInColors == 0))
            {
                CString strText;
                strText.Format(L"WARNING: palette '%s' is %u colors long (unit 0x%02x id 0x%02x).\n\nThis needs to be fixed.\n", m_pszCurrentPaletteName, m_nCurrentPaletteSizeInColors, nUnitCtr, nPalCtr);
                OutputDebugString(strText);

                if (!fShownInternalErrorOnce)
                {
                    // only show this error to the user once in case something is very very wrong
                    fShownInternalErrorOnce = true;
                    MessageBox(g_appHWnd, strText, GetHost()->GetAppName(), MB_ICONERROR);
                }
            }

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

    strDupeText.Format(L"CGameWithExtrasFile::GetDupeCountInDataset: Checked %u core palettes, %u dupes found.\n", nTotalPalettesChecked, nTotalDupesFound);
    OutputDebugString(strDupeText);

    return nTotalDupesFound;
}

int CGameWithExtrasFile::GetDupeCountInExtrasDataset()
{
    uint32_t nTotalPalettesChecked = 0;
    uint32_t nTotalDupesFound = 0;

    CString strDupeText;
    bool fCollisionFound = false;
    bool fHaveShownDupeWarning = false;

    //Go through the Extras
    uint32_t nPalCount = GetPaletteCountForUnit(m_nExtraUnit);
    for (uint16_t nPalCtr = 0; nPalCtr < nPalCount; nPalCtr++)
    {
        LoadSpecificPaletteData(m_nExtraUnit, nPalCtr);
        nTotalPalettesChecked++;

        uint32_t nCurrentROMOffset = m_nCurrentPaletteROMLocation;
        uint32_t nEndOfROMOffset = m_nCurrentPaletteROMLocation + (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
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

    strDupeText.Format(L"CGameWithExtrasFile::GetDupeCountInExtrasDataset: Checked %u Extras palettes, %u dupes found.\n", nTotalPalettesChecked, nTotalDupesFound);
    OutputDebugString(strDupeText);

    return nTotalDupesFound;
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

    int nInternalDupeCount = fShouldRunDupeCheck ?  GetDupeCountInDataset() : 0;
    int nExtraDupeCount = fShouldCheckExtras ? GetDupeCountInExtrasDataset() : 0;

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
            strError.Format(L"WARNING: There are currently %u duplicates in PalMod's internal palettes tables for this game.\n\nThis is a bug in PalMod.  Please report.\n", nInternalDupeCount);
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

void CGameWithExtrasFile::_CreateExtrasFileWithOptions(CFile& ExtraFile, sExtrasFileCreationOptions& sCreationOptions)
{
    if (GetIsDir())
    {
        OutputDebugString(L"Sorted tree dump not supported for directory-based games as the locations will be identical between files.\r\n");
        return;
    }

    sDescTreeNode* pRootTree = GetMainTree()->GetDescTree(-1);

    const uint32_t c_nUnitCount = GetUnitCt();

    struct sPaletteTrackingInformation
    {
        uint32_t nPaletteOffset = -1;
        uint32_t nTerminalOffset = -1;
        std::wstring strUnitName;
        std::wstring strCollectionName;
        std::wstring strPaletteName;
        struct sPaletteTrackingInformation* pNext = nullptr;
    };

    sPaletteTrackingInformation* pListRoot = nullptr;

    if (sCreationOptions.fAddKnownAsComments || sCreationOptions.fShowUnknownRegions)
    {
        for (uint32_t nUnitIndex = 0; nUnitIndex < c_nUnitCount; nUnitIndex++)
        {
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
                        !sCreationOptions.fSortKnownPalettes ||
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

                        pNewListEntry->pNext = pCurrent->pNext;
                        pCurrent->pNext = pNewListEntry;
                    }
                }
            }
        }
    }

    // Write the header
    CString strExtraFileText;

    strExtraFileText = L";Please refer to the Read Me for a brief guide to Extras files, or the longer guide on the PalMod site.\r\n\r\n";
    strExtraFileText += L";When you are done making changes to the Extras file, reload the game to see those palettes.\r\n\r\n";

    _WriteToFileAsANSI(ExtraFile, strExtraFileText);

    // Add in the basic game information

    if (GetGameName())
    {
        strExtraFileText.Format(L"%S%s\r\n", m_kpszGameNameKey, GetGameName());
        _WriteToFileAsANSI(ExtraFile, strExtraFileText);
    }

    LPCSTR paszColorFormat = ColorSystem::GetColorFormatStringForColorFormat(GetColorMode());
    if (paszColorFormat)
    {
        strExtraFileText.Format(L"%S%S\r\n", m_kpszColorFormatKey, paszColorFormat);
        _WriteToFileAsANSI(ExtraFile, strExtraFileText);
    }

    LPCSTR paszAlphaMode = ColorSystem::GetAlphaModeStringForAlphaMode(GetAlphaMode());
    if (paszAlphaMode)
    {
        strExtraFileText.Format(L"%S%S\r\n", m_kpszAlphaModeKey, paszAlphaMode);
        _WriteToFileAsANSI(ExtraFile, strExtraFileText);
    }

    strExtraFileText = L"\r\n";
    _WriteToFileAsANSI(ExtraFile, strExtraFileText);

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

        // Output the list
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
                    strExtraFileText.Format(L"After: %s, %s, %s\r\n", pCurrent->strUnitName.c_str(), pCurrent->strCollectionName.c_str(), pCurrent->strPaletteName.c_str());
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText.Format(L"0x%x\r\n", pCurrent->nTerminalOffset);
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText.Format(L";Before: %s, %s, %s\r\n", pCurrent->pNext->strUnitName.c_str(), pCurrent->pNext->strCollectionName.c_str(), pCurrent->pNext->strPaletteName.c_str());
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText.Format(L"0x%x\r\n\r\n", pCurrent->pNext->nPaletteOffset);
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                }
            }
            else if (sCreationOptions.fShowUnknownRegions && sCreationOptions.fShowPostUnknown && m_pszLoadDir)
            {
                // How do we want to handle trailing palettes?  We need the file size to do this correctly.
                CFile GameROM;

                if (GameROM.Open(m_pszLoadDir, CFile::modeRead | CFile::typeBinary))
                {
                    strExtraFileText.Format(L"After: %s, %s, %s\r\n", pCurrent->strUnitName.c_str(), pCurrent->strCollectionName.c_str(), pCurrent->strPaletteName.c_str());
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText.Format(L"0x%x\r\n", pCurrent->nTerminalOffset);
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText = L";To: end of ROM\r\n";
                    _WriteToFileAsANSI(ExtraFile, strExtraFileText);
                    strExtraFileText.Format(L"0x%x\r\n\r\n", (int)GameROM.GetLength());
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
            DWORD dwCharsUsed = GetModuleFileName(nullptr, szExtraFileWithPath, (DWORD)ARRAYSIZE(szExtraFileWithPath));
            wchar_t* pszExeFileName = wcsrchr(szExtraFileWithPath, L'\\') + 1;
            wcsncpy(pszExeFileName, m_pszExtraFilename, ARRAYSIZE(szExtraFileWithPath) - dwCharsUsed);
        }

        DWORD nFileAttrib = GetFileAttributes(szExtraFileWithPath);

        if ((nFileAttrib != INVALID_FILE_ATTRIBUTES) ||
            (_CreateNewExtrasFile(szExtraFileWithPath)))
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
