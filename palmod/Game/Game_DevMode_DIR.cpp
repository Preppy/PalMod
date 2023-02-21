#include "StdAfx.h"
#include "Game_DevMode_DIR.h"
#include "..\PalMod.h"
#include "RegProc.h"

sDirectoryLoadingData CGame_DevMode_DIR::m_sFileLoadingData;
bool CGame_DevMode_DIR::m_fHaveReadOverrideFromFile = false;

class CDevModeFilePickerDialog : public CDialog
{
    DECLARE_DYNAMIC(CDevModeFilePickerDialog)

public:
    CDevModeFilePickerDialog(sDirectoryLoadingData *psFileLoadingData, CWnd* pParent = nullptr);
    ~CDevModeFilePickerDialog() {};

    BOOL OnInitDialog();

    afx_msg void OnOK();

    afx_msg void OnUpdateFileName1();
    afx_msg void OnUpdateFileName2();
    afx_msg void OnUpdateFileName3();
    afx_msg void OnUpdateFileName4();

    afx_msg void OnSelectFile1() { SelectFileForControl(IDC_DEVMODE_FILE1); };
    afx_msg void OnSelectFile2() { SelectFileForControl(IDC_DEVMODE_FILE2); };
    afx_msg void OnSelectFile3() { SelectFileForControl(IDC_DEVMODE_FILE3); };
    afx_msg void OnSelectFile4() { SelectFileForControl(IDC_DEVMODE_FILE4); };

    afx_msg void OnFileReadSeq() { m_eReadType = static_cast<int>(FileReadType::Sequential); };
    afx_msg void OnFileReadInt2() { m_eReadType = static_cast<int>(FileReadType::Interleaved_2FileSets); };
    afx_msg void OnFileReadInt4() { m_eReadType = static_cast<int>(FileReadType::Interleaved_4FileSets); };
    afx_msg void OnFileReadInt2_R2_LE() { m_eReadType = static_cast<int>(FileReadType::Interleaved_Read2Bytes_LE); };
    afx_msg void OnFileReadInt2_R2_BE() { m_eReadType = static_cast<int>(FileReadType::Interleaved_Read2Bytes_BE); };

    enum { IDD = IDD_DEVMODE_SELECTFILES };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    void SelectFileForControl(int nCtrlId);
    void UpdateOptionsForCurrentSelection();
    void EnsurePrimaryPath();

    sDirectoryLoadingData* m_psFileLoadingData;
    wchar_t m_szPrimaryPath[MAX_PATH] = {};
    bool m_fOKButtonShouldBeEnabled = false;
    bool m_fIsConfigurationSupported = false;
    // During OnInitDialog we're going to send one initial value assignment message, so we use this to avoid refreshing 
    // the just-set data during that time
    bool m_fPastInitialConfig1 = false;
    bool m_fPastInitialConfig2 = false;
    bool m_fPastInitialConfig3 = false;
    bool m_fPastInitialConfig4 = false;

    DECLARE_MESSAGE_MAP()

public:
    int m_eReadType = static_cast<int>(FileReadType::Sequential);
    CString m_strFirstFileWithPath;
    CString m_strFile1, m_strFile2, m_strFile3, m_strFile4;
};

IMPLEMENT_DYNAMIC(CDevModeFilePickerDialog, CDialog)

CDevModeFilePickerDialog::CDevModeFilePickerDialog(sDirectoryLoadingData *psFileLoadingData, CWnd* pParent /*= nullptr*/)
    : CDialog(CDevModeFilePickerDialog::IDD, pParent),
       m_psFileLoadingData(psFileLoadingData)
{    
}

void CDevModeFilePickerDialog::EnsurePrimaryPath()
{
    if (wcslen(m_szPrimaryPath) == 0)
    {
        if (m_strFirstFileWithPath.GetLength())
        {
            wcsncpy(m_szPrimaryPath, m_strFirstFileWithPath.GetString(), ARRAYSIZE(m_szPrimaryPath));

            if (!(GetFileAttributes(m_szPrimaryPath) & FILE_ATTRIBUTE_DIRECTORY))
            {
                wchar_t* pszPathSplit = wcsrchr(m_szPrimaryPath, L'\\');

                if (pszPathSplit)
                {
                    *pszPathSplit = 0;
                }
            }
        }
    }
}

void CDevModeFilePickerDialog::SelectFileForControl(int nCtrlId)
{
    UpdateData();

    CFileDialog OpenDialog(
        TRUE,
        NULL,
        NULL,
        OFN_FILEMUSTEXIST | OFN_HIDEREADONLY
    );

    if (OpenDialog.DoModal() == IDOK)
    {
        OPENFILENAME& pOFN = OpenDialog.GetOFN();

        LPCWSTR pszFileName = wcsrchr(pOFN.lpstrFile, L'\\');
        pszFileName = pszFileName ? (pszFileName + 1) : pOFN.lpstrFile;

        wcsncpy(m_szPrimaryPath, pOFN.lpstrFile, MAX_PATH);
        wchar_t* pszPathSplit = wcsrchr(m_szPrimaryPath, L'\\');

        if (pszPathSplit)
        {
            *pszPathSplit = 0;
        }

        switch (nCtrlId)
        {
            case IDC_DEVMODE_FILE1:
            default:
                m_strFile1 = pszFileName;
                m_strFirstFileWithPath = pOFN.lpstrFile;
                break;
            case IDC_DEVMODE_FILE2:
                m_strFile2 = pszFileName;
                break;
            case IDC_DEVMODE_FILE3:
                m_strFile3 = pszFileName;
                break;
            case IDC_DEVMODE_FILE4:
                m_strFile4 = pszFileName;
                break;
        }

        UpdateOptionsForCurrentSelection();

        UpdateData(FALSE);
    }
}

void CDevModeFilePickerDialog::UpdateOptionsForCurrentSelection()
{
    const bool fHave1File = (m_strFirstFileWithPath.GetLength() != 0) && (m_strFile1.GetLength() != 0) && (m_strFile2.GetLength() == 0) && (m_strFile3.GetLength() == 0) && (m_strFile4.GetLength() == 0);
    const bool fHave2Files = (m_strFile1.GetLength() != 0) && (m_strFile2.GetLength() != 0) && (m_strFile3.GetLength() == 0) && (m_strFile4.GetLength() == 0);
    const bool fHave3Files = (m_strFile1.GetLength() != 0) && (m_strFile2.GetLength() != 0) && (m_strFile3.GetLength() != 0) && (m_strFile4.GetLength() == 0);
    const bool fHave4Files = (m_strFile1.GetLength() != 0) && (m_strFile2.GetLength() != 0) && (m_strFile3.GetLength() != 0) && (m_strFile4.GetLength() != 0);

    const bool fEnable2FileSetOptions = fHave2Files || fHave4Files;

    GetDlgItem(IDC_DEVMODE_READTYPE_INT2)->EnableWindow(fEnable2FileSetOptions);
    GetDlgItem(IDC_DEVMODE_READTYPE_INT2_R2_LE)->EnableWindow(fEnable2FileSetOptions);
    GetDlgItem(IDC_DEVMODE_READTYPE_INT2_R2_BE)->EnableWindow(fEnable2FileSetOptions);

    GetDlgItem(IDC_DEVMODE_READTYPE_INT4)->EnableWindow(fHave4Files);

    switch (m_eReadType)
    {
        case static_cast<int>(FileReadType::Sequential):
            m_fIsConfigurationSupported = fHave1File || fHave2Files || fHave3Files || fHave4Files;
        case static_cast<int>(FileReadType::Interleaved_2FileSets):
        case static_cast<int>(FileReadType::Interleaved_Read2Bytes_LE):
        case static_cast<int>(FileReadType::Interleaved_Read2Bytes_BE):
            m_fIsConfigurationSupported = fEnable2FileSetOptions;
            break;
        case static_cast<int>(FileReadType::Interleaved_4FileSets):
            m_fIsConfigurationSupported = fHave4Files;
            break;
    }

    if (m_fOKButtonShouldBeEnabled != m_fIsConfigurationSupported)
    {
        m_fOKButtonShouldBeEnabled = m_fIsConfigurationSupported;

        GetDlgItem(IDOK)->EnableWindow(m_fOKButtonShouldBeEnabled);
    }
}

void CDevModeFilePickerDialog::OnUpdateFileName1()
{
    if (!m_fPastInitialConfig1)
    {
        m_fPastInitialConfig1 = true;
    }
    else
    {
        UpdateData();
        UpdateOptionsForCurrentSelection();
    }
}

void CDevModeFilePickerDialog::OnUpdateFileName2()
{
    if (!m_fPastInitialConfig2)
    {
        m_fPastInitialConfig2 = true;
    }
    else
    {
        UpdateData();
        UpdateOptionsForCurrentSelection();
    }
}

void CDevModeFilePickerDialog::OnUpdateFileName3()
{
    if (!m_fPastInitialConfig3)
    {
        m_fPastInitialConfig3 = true;
    }
    else
    {
        UpdateData();
        UpdateOptionsForCurrentSelection();
    }
}

void CDevModeFilePickerDialog::OnUpdateFileName4()
{
    if (!m_fPastInitialConfig4)
    {
        m_fPastInitialConfig4 = true;
    }
    else
    {
        UpdateData();
        UpdateOptionsForCurrentSelection();
    }
}

BOOL CDevModeFilePickerDialog::OnInitDialog()
{
    CDialog::OnInitDialog();

    if (m_psFileLoadingData->rgFileList.size())
    {
        m_strFile1 = m_psFileLoadingData->rgFileList.at(0).strFileName.data();
    }

    if (m_psFileLoadingData->rgFileList.size() > 1)
    {
        m_strFile2 = m_psFileLoadingData->rgFileList.at(1).strFileName.data();
    }

    if (m_psFileLoadingData->rgFileList.size() > 2)
    {
        m_strFile3 = m_psFileLoadingData->rgFileList.at(2).strFileName.data();
    }

    if (m_psFileLoadingData->rgFileList.size() > 3)
    {
        m_strFile4 = m_psFileLoadingData->rgFileList.at(3).strFileName.data();
    }

    if (m_strFile1.GetLength() == 0)
    {
        m_strFile1 = L"Select a file";
    }

    m_eReadType = static_cast<int>(m_psFileLoadingData->eReadType);

    GetDlgItem(IDC_DEVMODE_FILE1)->SetWindowText(m_strFile1);
    GetDlgItem(IDC_DEVMODE_FILE2)->SetWindowText(m_strFile2);
    GetDlgItem(IDC_DEVMODE_FILE3)->SetWindowText(m_strFile3);
    GetDlgItem(IDC_DEVMODE_FILE4)->SetWindowText(m_strFile4);

    UpdateOptionsForCurrentSelection();

    UpdateData(FALSE);

    return TRUE;
}

void CDevModeFilePickerDialog::OnOK()
{
    UpdateData();

    EnsurePrimaryPath();

    for (size_t nCurrentFilePos = 0; nCurrentFilePos < 4; nCurrentFilePos++)
    {
        CString* pstrCurrent;

        switch (nCurrentFilePos)
        {
        case 0:
        default:
            pstrCurrent = &m_strFile1;
            break;
        case 1:
            pstrCurrent = &m_strFile2;
            break;
        case 2:
            pstrCurrent = &m_strFile3;
            break;
        case 3:
            pstrCurrent = &m_strFile4;
            break;
        }

        bool fFoundFileData = false;

        if (pstrCurrent->GetLength())
        {
            WIN32_FILE_ATTRIBUTE_DATA wfad = {};

            LPCWSTR pszFileName = nullptr;

            fFoundFileData = GetFileAttributesEx(pstrCurrent->GetString(), GetFileExInfoStandard, &wfad);

            if (!fFoundFileData)
            {
                // Try with explicit path
                wchar_t szFileWithPath[MAX_PATH];
                _snwprintf_s(szFileWithPath, ARRAYSIZE(szFileWithPath), L"%s\\%s", m_szPrimaryPath, pstrCurrent->GetString());

                fFoundFileData = GetFileAttributesEx(szFileWithPath, GetFileExInfoStandard, &wfad);
            }

            if (fFoundFileData)
            {
                pszFileName = wcsrchr(pstrCurrent->GetString(), L'\\');
                pszFileName = pszFileName ? (pszFileName + 1) : pstrCurrent->GetString();

                m_psFileLoadingData->rgFileList.resize(nCurrentFilePos + 1);
                m_psFileLoadingData->rgFileList.at(nCurrentFilePos).nFileSize = wfad.nFileSizeLow;
                m_psFileLoadingData->rgFileList.at(nCurrentFilePos).strFileName = pszFileName;
            }
        }
        
        if (!fFoundFileData)
        {
            break;
        }
    }

    FileReadType proposedFileType = static_cast<FileReadType>(m_eReadType);

    // Validate that they have selected a valid pairing style
    if ((((proposedFileType != FileReadType::Sequential) && (m_psFileLoadingData->rgFileList.size() % 2) != 0)) ||
        ((proposedFileType == FileReadType::Interleaved_4FileSets) && (m_psFileLoadingData->rgFileList.size() != 4)))
    {
        CString strMsg = L"You have selected an unsupported interleaving configuration for this number of files: defaulting back to Sequential.";
        MessageBox(strMsg, GetHost()->GetAppName(), MB_ICONERROR);

        m_psFileLoadingData->eReadType = FileReadType::Sequential;
    }
    else
    {
        m_psFileLoadingData->eReadType = proposedFileType;
    }

    CString strDebugInfo;

    OutputDebugString(L"Configuration complete.  Files loaded will be:\r\n");
    for (size_t iFile = 0; iFile < m_psFileLoadingData->rgFileList.size(); iFile++)
    {
        strDebugInfo.Format(L"\t%u: '%s'\r\n", static_cast<uint32_t>(iFile), m_psFileLoadingData->rgFileList.at(iFile).strFileName.c_str());
        OutputDebugString(strDebugInfo.GetString());
    }
    strDebugInfo.Format(L"\tFile read join type is enum value '%u' for path '%s'\r\n", m_psFileLoadingData->eReadType, m_strFirstFileWithPath.GetString());
    OutputDebugString(strDebugInfo.GetString());

    CDialog::OnOK();
}

void CDevModeFilePickerDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Radio(pDX, IDC_DEVMODE_READTYPE_SEQ, m_eReadType);

    DDX_Text(pDX, IDC_DEVMODE_FILE1, m_strFile1);
    DDX_Text(pDX, IDC_DEVMODE_FILE2, m_strFile2);
    DDX_Text(pDX, IDC_DEVMODE_FILE3, m_strFile3);
    DDX_Text(pDX, IDC_DEVMODE_FILE4, m_strFile4);
}

// CDevModeFilePickerDialog message handlers
BEGIN_MESSAGE_MAP(CDevModeFilePickerDialog, CDialog)
    ON_BN_CLICKED(IDC_DEVMODE_FILE1_SELECT, &CDevModeFilePickerDialog::OnSelectFile1)
    ON_BN_CLICKED(IDC_DEVMODE_FILE2_SELECT, &CDevModeFilePickerDialog::OnSelectFile2)
    ON_BN_CLICKED(IDC_DEVMODE_FILE3_SELECT, &CDevModeFilePickerDialog::OnSelectFile3)
    ON_BN_CLICKED(IDC_DEVMODE_FILE4_SELECT, &CDevModeFilePickerDialog::OnSelectFile4)

    ON_EN_CHANGE(IDC_DEVMODE_FILE1, &OnUpdateFileName1)
    ON_EN_CHANGE(IDC_DEVMODE_FILE2, &OnUpdateFileName2)
    ON_EN_CHANGE(IDC_DEVMODE_FILE3, &OnUpdateFileName3)
    ON_EN_CHANGE(IDC_DEVMODE_FILE4, &OnUpdateFileName4)

    ON_BN_CLICKED(IDC_DEVMODE_READTYPE_SEQ, &CDevModeFilePickerDialog::OnFileReadSeq)
    ON_BN_CLICKED(IDC_DEVMODE_READTYPE_INT2, &CDevModeFilePickerDialog::OnFileReadInt2)
    ON_BN_CLICKED(IDC_DEVMODE_READTYPE_INT4, &CDevModeFilePickerDialog::OnFileReadInt4)
    ON_BN_CLICKED(IDC_DEVMODE_READTYPE_INT2_R2_LE, &CDevModeFilePickerDialog::OnFileReadInt2_R2_LE)
    ON_BN_CLICKED(IDC_DEVMODE_READTYPE_INT2_R2_BE, &CDevModeFilePickerDialog::OnFileReadInt2_R2_BE)
END_MESSAGE_MAP()

CGame_DevMode_DIR::CGame_DevMode_DIR(uint32_t nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, CRegProc::GetMaxWriteForUnknownGame() };

    ColMode cmCurrentDefault = CRegProc::GetColorModeForUnknownGame();
    AlphaMode amCurrentDefault = CRegProc::GetAlphaModeForUnknownGame();

#ifdef WantOverrideFromFile
    // I need to figure out this logic.  Commenting out for now.
    // When do we want to load from file and when from registry?

    if ((m_AlphaModeOverride != AlphaMode::Unknown) ||
        (m_ColorModeOverride != ColMode::COLMODE_LAST))
    {
        m_fHaveDoneInitialColorSet = false;
        amCurrentDefault = (m_AlphaModeOverride != AlphaMode::Unknown) ? m_AlphaModeOverride : amCurrentDefault;
        cmCurrentDefault = (m_ColorModeOverride != ColMode::COLMODE_LAST) ? m_ColorModeOverride : cmCurrentDefault;
        SetAlphaAndColorModeInternal(cmCurrentDefault, amCurrentDefault);
    }
#endif

    m_sCoreGameData_UseExtrasFile.createPalOptions = createPalOptions;
    m_sCoreGameData_UseExtrasFile.eAlphaMode = amCurrentDefault;
    m_sCoreGameData_UseExtrasFile.eColMode = cmCurrentDefault;

    m_fCurrentlyInitializing = true;

    InitializeGame(nConfirmedROMSize, m_sCoreGameData_UseExtrasFile); 

    if (m_nTotalPaletteCount == 0)
    {
        // Fail over to the empty set
        CString strIntro;
        strIntro = L"Howdy!  This \"dummy\" game mode is designed to allow you to spelunk any random game ROM that PalMod does not already support. \n\n";
        strIntro += L"PalMod will read / write specified RAM offsets as if they indicated colors for the color format specified in the Settings menu.\n\n";
        strIntro += L"Right now, you don't have any entries in your UnknownFileSetE.txt Extras file: you will want to add entries there if you wish to use this \"dummy\" mode.\n\n";
        strIntro += L"Please make sure to only change a copy of the ROMs you're interested in: since you're directly playing around with the game ROM, weird things could happen.\n\n";
        strIntro += L"Good luck!";
        MessageBox(g_appHWnd, strIntro, GetHost()->GetAppName(), MB_ICONINFORMATION);

        InitializeGame(nConfirmedROMSize, m_sCoreGameData_Stub);
    }

    m_fCurrentlyInitializing = false;
}

sFileRule CGame_DevMode_DIR::GetRule(uint32_t nRuleId)
{
    if (m_sFileLoadingData.rgFileList.size() == 0)
    {
        // This is a re-open: Load last selection
        ReloadLoadingChoices();
    }

    if (m_sFileLoadingData.rgFileList.size() == 0)
    {
        // Uh-oh: let them reestablish
        UserCreatesRules();
    }

    return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); 
}

bool CGame_DevMode_DIR::UserCreatesRules(LPWSTR pszPrimaryFilePath /* = nullptr */)
{
    ReloadLoadingChoices();

    CDevModeFilePickerDialog selectDialog(&m_sFileLoadingData);

    SupportedGamesList nLastUsedGFlag = DEVMODE_DIR;
    wchar_t szLastDir[MAX_PATH];

    if (GetHost()->GetPalModDlg()->GetLastUsedPath(szLastDir, sizeof(szLastDir), &nLastUsedGFlag, FALSE))
    {
        selectDialog.m_strFirstFileWithPath = szLastDir;
    }

    bool fSuccess = (selectDialog.DoModal() == IDOK);
    
    if (fSuccess)
    {
        if (pszPrimaryFilePath)
        {
            wcsncpy(pszPrimaryFilePath, selectDialog.m_strFirstFileWithPath, MAX_PATH);
        }

        SaveLoadingChoices();
    }

    return fSuccess;
}

bool CGame_DevMode_DIR::ReloadLoadingChoices()
{
    HKEY hKey;

    if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
    {
        CString strValueName;
        DWORD RegType = REG_SZ;
        DWORD GetSz;
        DWORD dwValue = 0;

        for (size_t iFilePos = 0; iFilePos < c_nMaxFilesToLoad; iFilePos++)
        {
            CString strLookup;

            GetSz = MAX_PATH;
            strValueName.Format(c_strRegvalFileFormat, iFilePos);

            if (RegQueryValueEx(hKey, strValueName, 0, &RegType, (LPBYTE)strLookup.GetBufferSetLength(MAX_PATH), &GetSz) == ERROR_SUCCESS)
            {
                GetSz = sizeof(DWORD);

                strValueName.Format(c_strRegvalFileSizeFormat, iFilePos);
                if (RegQueryValueEx(hKey, strValueName, 0, &RegType, (LPBYTE)&dwValue, &GetSz) == ERROR_SUCCESS)
                {
                    m_sFileLoadingData.rgFileList.resize(iFilePos + 1);
                    m_sFileLoadingData.rgFileList.at(iFilePos).strFileName = strLookup.GetString();
                    m_sFileLoadingData.rgFileList.at(iFilePos).nFileSize = dwValue;
                }
            }
        }

        dwValue = static_cast<DWORD>(FileReadType::Sequential);

        if (m_sFileLoadingData.rgFileList.size() > 1)
        {
            GetSz = sizeof(DWORD);
            RegQueryValueEx(hKey, c_strRegValType, 0, &RegType, (LPBYTE)&dwValue, &GetSz);

            m_sFileLoadingData.eReadType = static_cast<FileReadType>(dwValue);
        }

        RegCloseKey(hKey);
    }

    return (m_sFileLoadingData.rgFileList.size() != 0);
}

void CGame_DevMode_DIR::SaveLoadingChoices()
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        for (size_t iFilePos = 0; iFilePos < c_nMaxFilesToLoad; iFilePos++)
        {
            CString strValueName;
            strValueName.Format(c_strRegvalFileFormat, iFilePos);

            if (iFilePos < m_sFileLoadingData.rgFileList.size())
            {
                RegSetValueEx(hKey, strValueName, 0, REG_SZ, (LPBYTE)m_sFileLoadingData.rgFileList.at(iFilePos).strFileName.c_str(), static_cast<DWORD>(sizeof(wchar_t) * (m_sFileLoadingData.rgFileList.at(iFilePos).strFileName.length() + 1)));
                
                strValueName.Format(c_strRegvalFileSizeFormat, iFilePos);
                
                DWORD dwFilesize = static_cast<DWORD>(m_sFileLoadingData.rgFileList.at(iFilePos).nFileSize);
                RegSetValueEx(hKey, strValueName, 0, REG_DWORD, (LPBYTE)&dwFilesize, sizeof(DWORD));
            }
            else
            {
                RegDeleteValue(hKey, strValueName);
            }
        }

        RegSetValueEx(hKey, c_strRegValType, 0, REG_DWORD, (LPBYTE)&m_sFileLoadingData.eReadType, sizeof(DWORD));
        
        RegCloseKey(hKey);
    }
}

void CGame_DevMode_DIR::SetAlphaModeInternal(AlphaMode NewMode)
{
    return CGameClass::SetAlphaMode(NewMode);
}

void CGame_DevMode_DIR::SetAlphaMode(AlphaMode NewMode)
{
    if (!m_fCurrentlyInitializing)
    {
        CString strMsg = L"Updated.  Further palette changes will use this alpha setting.";
        MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONINFORMATION);
    }

    // stomp the setting for posterity
    // We set this here as this is an explicit action overriding the implicit default for any
    // given color format.
    CRegProc::SetAlphaModeForUnknownGame(NewMode);

    return SetAlphaModeInternal(NewMode);
}

bool CGame_DevMode_DIR::SetAlphaAndColorModeInternal(ColMode NewMode, AlphaMode CurrentAlphaSetting)
{
    // ColorMode and AlphaMode need to be loosely tied together.  However, we do want to allow
    // people to override alpha mode for a given color mode.  The logic here allows for this.

    // stomp the setting for posterity
    CRegProc::SetColorModeForUnknownGame(NewMode);

    bool fShouldSetAlpha = CurrentAlphaSetting == AlphaMode::Unknown;
    AlphaMode suggestedAlphaSetting = CurrentAlphaSetting;

    const uint8_t cbPreviousColorSize = m_nSizeOfColorsInBytes;
    uint8_t cbRequiredColorSize = 0;
    bool fChangedColorSize = false;

    // This handles the color modes switches for:
    // ID_COLORFORMAT_RGB444_BE
    // ID_COLORFORMAT_RGB555_LE
    // ID_COLORFORMAT_RGB556
    // ID_COLORFORMAT_RGB666
    // ID_COLORFORMAT_RGB557
    // ID_COLORFORMAT_BGR555_LE
    // ID_COLORFORMAT_RGB555_BE
    // ID_COLORFORMAT_RGB333_BE
    // ID_COLORFORMAT_ARGB7888
    // ID_COLORFORMAT_SHARPRGB
    // ID_COLORFORMAT_RGB444_LE
    // ID_COLORFORMAT_ARGB8888
    // ID_COLORFORMAT_ARGB1888
    // ID_COLORFORMAT_xBGR888
    // ID_COLORFORMAT_xGRB888
    // ID_COLORFORMAT_xRGB888
    // ID_COLORFORMAT_GRB555_LE
    // ID_COLORFORMAT_ABGR8888
    // ID_COLORFORMAT_BGR555_BE
    // ID_COLORFORMAT_xBGR555_LE
    // ID_COLORFORMAT_BRG555_LE
    // I am explicitly and needlessly listing out all of those string IDs because Visual Studio search sometimes misses the color modes below,
    // and we have to add explicit color handling here so that people can change to that color mode in Unknown Game mode

    // Update this check once you've decided whether to expose the new color or not.
    static_assert((ColMode)28 == ColMode::COLMODE_LAST, "New color formats usually mean updating color selectability in the Developer Mode support.");

    switch (NewMode)
    {
        case ColMode::COLMODE_BGR333:
        case ColMode::COLMODE_RBG333:
        case ColMode::COLMODE_RGB333:

        case ColMode::COLMODE_BGR444:
        case ColMode::COLMODE_BRG444:
        case ColMode::COLMODE_RBG444:
        case ColMode::COLMODE_RGB444_BE:
        case ColMode::COLMODE_RGB444_LE:

        case ColMode::COLMODE_BGR555_LE:
        case ColMode::COLMODE_BGR555_BE:
        case ColMode::COLMODE_GRB555_LE:
        case ColMode::COLMODE_BRG555_LE:

        case ColMode::COLMODE_RGB555_SHARP:
            cbRequiredColorSize = 2;
            suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
            m_fGameUsesAlphaValue = false;
            break;

        case ColMode::COLMODE_RGB555_LE:
        case ColMode::COLMODE_xBGR555_LE:
        case ColMode::COLMODE_RGB555_BE:
            cbRequiredColorSize = 2;
            suggestedAlphaSetting = AlphaMode::GameUsesFixedAlpha;
            m_fGameUsesAlphaValue = true;
            break;

        case ColMode::COLMODE_BGR888:
        case ColMode::COLMODE_BRG888:
        case ColMode::COLMODE_GRB888:
        case ColMode::COLMODE_RGB888:
            cbRequiredColorSize = 3;
            suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
            m_fGameUsesAlphaValue = false;
            break;

        case ColMode::COLMODE_RGBA8881:
        case ColMode::COLMODE_RGBA8881_32STEPS:
        case ColMode::COLMODE_RGBA8887:
        case ColMode::COLMODE_RGBA8888_BE:
        case ColMode::COLMODE_RGBA8888_LE:
        case ColMode::COLMODE_BGRA8888_BE:
        case ColMode::COLMODE_BGRA8888_LE:
            cbRequiredColorSize = 4;
            suggestedAlphaSetting = AlphaMode::GameUsesVariableAlpha;
            m_fGameUsesAlphaValue = true;
            break;

        default: // Something is wrong: reset
            MessageBox(g_appHWnd, L"Warning: unknown color mode was requested. Resetting to default\n", GetHost()->GetAppName(), MB_ICONSTOP);
            __fallthrough;
        case ColMode::COLMODE_RGB666_NEOGEO:
            cbRequiredColorSize = 2;
            fShouldSetAlpha = true;  // NEOGEO has no allowance for alpha: force to DoesNotUse
            suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
            m_fGameUsesAlphaValue = false;
            break;
    };

    if (cbRequiredColorSize != cbPreviousColorSize)
    {
        if (!m_fHaveDoneInitialColorSet)
        {
            m_nSizeOfColorsInBytes = cbRequiredColorSize;
        }
        else
        {
            fChangedColorSize = true;
            CString strMsg = L"Configured.  You must now reload this game to use this setting.  PalMod will not work correctly until you reload.";

            MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONSTOP);
        }
    }
    else
    {
        if (m_fHaveDoneInitialColorSet && !m_fCurrentlyInitializing)
        {
            CString strMsg = L"Updated.  The next palette displayed will use this color format.";

            MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONINFORMATION);
        }
    }

    m_fHaveDoneInitialColorSet = true;

    if (fShouldSetAlpha)
    {
        SetAlphaModeInternal(suggestedAlphaSetting);
    }

    if (!fChangedColorSize)
    {
        return CGameClass::SetColorMode(NewMode);
    }
    else
    {
        return false;
    }
}

bool CGame_DevMode_DIR::SetColorMode(ColMode NewMode)
{
    // Reset alpha mode since we're switching color formats...
    CRegProc::SetAlphaModeForUnknownGame(AlphaMode::Unknown);

    return SetAlphaAndColorModeInternal(NewMode, AlphaMode::Unknown);
}

void CGame_DevMode_DIR::SetMaximumWritePerEachTransparency(PALWriteOutputOptions eUpdatedOption)
{
    // Store for next launch
    CRegProc::SetMaxWriteForUnknownGame(eUpdatedOption);

    return CGameClass::SetMaximumWritePerEachTransparency(eUpdatedOption);
}

LPCWSTR CGame_DevMode_DIR::GetGameName()
{
    size_t nOverrideLength = strlen(m_paszGameNameOverride);

    if (nOverrideLength)
    {
        _snwprintf_s(m_pszGameNameOverride, ARRAYSIZE(m_pszGameNameOverride), _TRUNCATE, L"%S", m_paszGameNameOverride);

        return m_pszGameNameOverride;
    }
    else
    {
        return CGameClassByDir::GetGameName();
    }
}
