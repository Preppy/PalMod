#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "Game\BlazBlueCF_S_DEF.h"
#include "RegProc.h" // save/restore creator name

// CFPL and HPAL are BBCF color palette files.
// HPAL is for one 256 color ABGR palette.
// CFPL is a collection of eight 256 color BGRA palettes: exactly enough for one full character

const uint8_t k_nCFPLSignatureLength = 0x10;
const uint8_t k_nPalettesPerFile = 8;
const uint16_t k_nColorsPerPalette = 256; // An CFPL has 8 sets of 256 (1024 bytes / 4 bytes per color) colors.
const uint8_t k_nBytesPerColor = 4;
const size_t k_nColorDataSize = k_nColorsPerPalette * k_nBytesPerColor;

const std::array<uint8_t, k_nCFPLSignatureLength> k_rgCFPLSignature =
{
    0x49, 0x4d, 0x50, 0x4c, 0x43, 0x46, 0x00, 0x00, // I M P L C F
    0x14, 0x00, 0x00, 0x00, 0x81, 0x20, 0x00, 0x00, // header size, data size: we're going to lock to 0x2098 files for now.
};

class CCFPLFileImportDialog : public CDialog
{
    DECLARE_DYNAMIC(CCFPLFileImportDialog)

public:
    CCFPLFileImportDialog(std::wstring strCurrentCharacter, const std::vector<LPCWSTR> vpszColorList, int nCurrentSelection, CWnd* pParent = NULL);   // standard constructor
    virtual ~CCFPLFileImportDialog() {};

    BOOL OnInitDialog();
    afx_msg void OnUpdateCombobox();

    // Dialog Data
    enum { IDD = IDD_CFPL_IMPORT };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    DECLARE_MESSAGE_MAP()

    CComboBox m_CBColorPosition;
    std::wstring m_strCharacterName;
    std::vector<LPCWSTR> m_vstrColorOptions;

public:
    int m_nCurrentSel = 0;
};

IMPLEMENT_DYNAMIC(CCFPLFileImportDialog, CDialog)

CCFPLFileImportDialog::CCFPLFileImportDialog(std::wstring strCurrentCharacter, const std::vector<LPCWSTR> vpszColorList, int nCurrentSelection, CWnd* pParent /*=NULL*/)
    : CDialog(CCFPLFileImportDialog::IDD, pParent)
{
    m_strCharacterName = strCurrentCharacter;

    m_vstrColorOptions = vpszColorList;

    m_nCurrentSel = nCurrentSelection;
}

BOOL CCFPLFileImportDialog::OnInitDialog()
{
    CDialog::OnInitDialog();

    GetDlgItem(IDC_CFPL_CHARACTERNAME)->SetWindowText(m_strCharacterName.data());

    for (const std::wstring& strColorOption : m_vstrColorOptions)
    {
        m_CBColorPosition.AddString(strColorOption.c_str());
    }

    m_CBColorPosition.SetCurSel(m_nCurrentSel);

    UpdateData();

    return TRUE;
}

void CCFPLFileImportDialog::OnUpdateCombobox()
{
    m_nCurrentSel = m_CBColorPosition.GetCurSel();
}

void CCFPLFileImportDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_CFPL_COLOROPTIONS, m_CBColorPosition);
}

BEGIN_MESSAGE_MAP(CCFPLFileImportDialog, CDialog)
    ON_CBN_SELCHANGE(IDC_CFPL_COLOROPTIONS, &OnUpdateCombobox)
END_MESSAGE_MAP()

class CCFPLFileExportDialog : public CDialog
{
    DECLARE_DYNAMIC(CCFPLFileExportDialog)

public:
    CCFPLFileExportDialog(std::wstring strCurrentCharacter, CWnd* pParent = NULL);   // standard constructor
    ~CCFPLFileExportDialog();

    BOOL OnInitDialog();

    afx_msg void OnUpdatePalName();

    // Dialog Data
    enum { IDD = IDD_CFPL_EXPORT };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    DECLARE_MESSAGE_MAP()

    std::wstring m_strCharacterName;
    const std::wstring m_strCreatorValueName = L"pref_CreatorName";

public:
    CString m_strPaletteName;
    CString m_strCreator;
    CString m_strDescription;
    BOOL m_fEnableBloom = FALSE;
};

IMPLEMENT_DYNAMIC(CCFPLFileExportDialog, CDialog)

CCFPLFileExportDialog::CCFPLFileExportDialog(std::wstring strCurrentCharacter, CWnd* pParent /*=NULL*/)
    : CDialog(CCFPLFileExportDialog::IDD, pParent)
{
    m_strCharacterName = strCurrentCharacter;
}

CCFPLFileExportDialog::~CCFPLFileExportDialog()
{
    // Store creator name preference if found
    if (m_strCreator.GetLength() > 0)
    {
        HKEY hKey = nullptr;

        if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_SET_VALUE, &hKey) == ERROR_SUCCESS)
        {
            RegSetValueEx(hKey, m_strCreatorValueName.data(), 0, REG_SZ, (LPBYTE)m_strCreator.GetString(), (DWORD)(m_strCreator.GetLength() + 1) * sizeof(wchar_t));

            RegCloseKey(hKey);
        }
    }
}

BOOL CCFPLFileExportDialog::OnInitDialog()
{
    CDialog::OnInitDialog();

    GetDlgItem(IDC_CFPL_CHARACTERNAME)->SetWindowText(m_strCharacterName.data());

    HKEY hKey = nullptr;

    if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
    {
        DWORD dwRegType = REG_SZ;
        wchar_t szCreatorName[MAX_PATH] = {};
        DWORD cbDataSize = sizeof(szCreatorName);

        if ((RegQueryValueEx(hKey, m_strCreatorValueName.data(), 0, &dwRegType, (LPBYTE)szCreatorName, &cbDataSize) == ERROR_SUCCESS) &&
            (dwRegType == REG_SZ))
        {
            m_strCreator = szCreatorName;
        }

        RegCloseKey(hKey);
    }

    GetDlgItem(IDC_CFPL_CREATOR)->SetWindowText(m_strCreator);

    GetDlgItem(IDOK)->EnableWindow(m_strPaletteName.GetLength());

    UpdateData();

    return TRUE;
}

void CCFPLFileExportDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Text(pDX, IDC_CFPL_PALNAME, m_strPaletteName);
    DDX_Text(pDX, IDC_CFPL_CREATOR, m_strCreator);
    DDX_Text(pDX, IDC_CFPL_DESCRIPTION, m_strDescription);
    DDX_Check(pDX, IDC_CFPL_ENABLEBLOOM, m_fEnableBloom);
}

void CCFPLFileExportDialog::OnUpdatePalName()
{
    UpdateData();

    GetDlgItem(IDOK)->EnableWindow(m_strPaletteName.GetLength());

    UpdateData(FALSE);
}

BEGIN_MESSAGE_MAP(CCFPLFileExportDialog, CDialog)
    ON_EN_CHANGE(IDC_CFPL_PALNAME, &OnUpdatePalName)
END_MESSAGE_MAP()

bool CPalModDlg::LoadPaletteFromCFPL(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    bool fUserWantsToApply = true;

    CFile CFPLFile;
    if (CFPLFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        // CFPLs are 8344 bytes (0x2098 bytes) long.
        // There is a 32 byte header followed by a text section (32b per section) followed by
        // 8 sets of 256 ARGB colors.
        // Header:
            // 0x00-0x08 IMPLCF signature
            // 0x08-0x0c header length
            // 0x0c-0x10 data length
            // 0x10-0x14 character ID
            // 0x14-0x34 customized palette name
            // 0x34-0x54 optional creator name 
            // 0x54-0x94 optional description
            // 0x94      "has bloom"
        const size_t k_nRequiredFileSize = 0x2098;
        const uint8_t k_nCFPLHeaderLength = 0x95;

        bool fFileIsValidCFPL = false;

        // Read data from the CFPL...
        if (CFPLFile.GetLength() == k_nRequiredFileSize)
        {
            std::array<uint8_t, k_nCFPLSignatureLength> rgHeaderBytes = {};

            CFPLFile.Seek(0, CFile::begin);
            CFPLFile.Read(&rgHeaderBytes, k_nCFPLSignatureLength);
            uint8_t nMatchCount = 0;

            for (size_t nPos = 0; nPos < k_nCFPLSignatureLength; nPos++)
            {
                if (rgHeaderBytes[nPos] == k_rgCFPLSignature[nPos])
                {
                    nMatchCount++;
                }
                else
                {
                    break;
                }
            }

            if (nMatchCount == k_nCFPLSignatureLength)
            {
                fFileIsValidCFPL = true;
            }
        }

        uint16_t nCollectionIndex = 0;
        bool fCanUseCharacterAssignment = false;

        if (fFileIsValidCFPL)
        {
            uint8_t nCharacterToApplyTo = 0;
            CFPLFile.Read(&nCharacterToApplyTo, 1);

            const uint32_t nSpriteId = TranslateBBCFGameIdToPalModSpriteId(nCharacterToApplyTo);

            for (; nCollectionIndex < BlazBlueCF_S_CharacterData.size(); nCollectionIndex++)
            {
                if (BlazBlueCF_S_CharacterData[nCollectionIndex].nImageUnitIndex == nSpriteId)
                {
                    fCanUseCharacterAssignment = true;
                    break;
                }
            }
        }

        uint8_t nColorPositionToWriteTo = -1;

        if (fCanUseCharacterAssignment)
        {
            if (m_nPrevUnitSel == nCollectionIndex) // This character is being displayed
            {
                nColorPositionToWriteTo = m_nPrevChildSel1;
            }
            else
            {
                nColorPositionToWriteTo = 0;
            }

            if (nColorPositionToWriteTo < BlazBlueCF_S_CharacterData[nCollectionIndex].sNodeData.rgpszNodeNames.size())
            {
                CCFPLFileImportDialog cfplFileDialog(BlazBlueCF_S_CharacterData[nCollectionIndex].strCharacter,
                                                     BlazBlueCF_S_CharacterData[nCollectionIndex].sNodeData.rgpszNodeNames,
                                                     nColorPositionToWriteTo);

                if (cfplFileDialog.DoModal() == IDOK)
                {
                    nColorPositionToWriteTo = static_cast<uint8_t>(cfplFileDialog.m_nCurrentSel);
                }
                else
                {
                    fUserWantsToApply = false;
                }
            }
            else
            {
                fCanUseCharacterAssignment = false;
            }
        }

        if (fCanUseCharacterAssignment && fUserWantsToApply)
        {
            const uint16_t k_nStartingPaletteAdjustment = k_nPalettesPerFile * nColorPositionToWriteTo;

            std::array<uint8_t, k_nColorDataSize> rgCFPL = {};

            CFPLFile.Seek(k_nCFPLHeaderLength, CFile::begin);

            for (uint8_t nPaletteId = 0; nPaletteId < k_nPalettesPerFile; nPaletteId++)
            {
                uint8_t rgConvertedPalette[k_nColorDataSize] = {};

                CFPLFile.Read(&rgCFPL, static_cast<UINT>(rgCFPL.size()));

                for (size_t nPaletteIndex = 0; nPaletteIndex < k_nColorsPerPalette; nPaletteIndex++)
                {
                    // incoming is BGRA, so flip to be RBGA
                    rgConvertedPalette[(nPaletteIndex * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgCFPL[(nPaletteIndex * k_nBytesPerColor)]);
                    rgConvertedPalette[(nPaletteIndex * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgCFPL[(nPaletteIndex * k_nBytesPerColor) + 1]);
                    rgConvertedPalette[(nPaletteIndex * 4)] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgCFPL[(nPaletteIndex * k_nBytesPerColor) + 2]);
                    rgConvertedPalette[(nPaletteIndex * 4) + 3] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_A(rgCFPL[(nPaletteIndex * k_nBytesPerColor) + 3]);
                }

                GetHost()->GetCurrGame()->WritePal(nCollectionIndex, nPaletteId + k_nStartingPaletteAdjustment, (COLORREF*)&rgConvertedPalette, k_nColorsPerPalette);
                GetHost()->GetCurrGame()->MarkPaletteDirty(nCollectionIndex, nPaletteId + k_nStartingPaletteAdjustment);
            }

            CFPLFile.Close();

            if ((m_nPrevUnitSel == nCollectionIndex) &&
                (m_nPrevChildSel1 == nColorPositionToWriteTo))
            {
                // They're currently displaying this palette: reload
                UpdateCombo(true);
            }

            // Mark the file load dirty.  We don't mark the palettes dirty-to-user as we don't have an Undo here.
            m_fFileChanged = TRUE;

            fSuccess = true;
            CString strStatus;
            strStatus.Format(IDS_CFPL_LOADED, BlazBlueCF_S_CharacterData.at(nCollectionIndex).strCharacter.c_str(), BlazBlueCF_S_CharacterData[nCollectionIndex].sNodeData.rgpszNodeNames.at(nColorPositionToWriteTo));
            SetStatusText(strStatus);
        }
    }

    if (fUserWantsToApply && !fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(IDS_CFPL_LOADFAILURE);
    }

    return fSuccess;
}

void CPalModDlg::_WriteToFileAsANSIWithForcedLength(CFile& OutFile, CString strData, UINT nForcedLength)
{
    UINT nFillBytes = nForcedLength;

    if (strData.GetLength() > 0)
    {
        DWORD dwSize = WideCharToMultiByte(CP_ACP, 0, strData.GetString(), -1, NULL, 0, NULL, FALSE);

        char* paszBuffer = new char[dwSize];
        memset(paszBuffer, 0, dwSize);

        UINT nCountToWrite = min(dwSize, nForcedLength);

        if (WideCharToMultiByte(CP_ACP, 0, strData.GetString(), -1, paszBuffer, dwSize, NULL, FALSE))
        {
            OutFile.Write(paszBuffer, nCountToWrite);
            nFillBytes -= nCountToWrite;
        }

        delete[] paszBuffer;
    }

    if (nFillBytes > 0)
    {
        BYTE* rgBytes = new BYTE[nFillBytes];
        memset(rgBytes, 0, nFillBytes);

        OutFile.Write(rgBytes, nFillBytes);
        delete[] rgBytes;
    }
}

void CPalModDlg::SavePaletteToCFPL(LPCWSTR pszFileName, bool& fShouldShowGenericError)
{
    CFile CFPLFile;
    bool fSuccess = false;
    fShouldShowGenericError = false;

    CCFPLFileExportDialog cfplFileDialog(BlazBlueCF_S_CharacterData.at(m_nPrevUnitSel).strCharacter.c_str());

    bool fShouldAllowExport = (cfplFileDialog.DoModal() == IDOK);

    if (fShouldAllowExport)
    {
        if (cfplFileDialog.m_strPaletteName.GetLength() == 0)
        {
            fShouldAllowExport = false;
            MessageBox(L"Error: Palette name is required.", GetHost()->GetAppName(), MB_ICONERROR);
        }
    }

    if (fShouldAllowExport)
    {
        if (CFPLFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
        {
            // CFPLs are 8344 bytes (0x2098 bytes) long.
            // There is a 32 byte header followed by a text section (32b per section) followed by
            // 8 sets of 256 ARGB colors.
            // Header:
                // 0x00-0x08 IMPLCF signature
                // 0x08-0x0c header length
                // 0x0c-0x10 data length
                // 0x10-0x14 character ID
                // 0x14-0x34 customized palette name
                // 0x34-0x54 optional creator name 
                // 0x54-0x94 optional description
                // 0x94      "has bloom"
            const UINT k_nRequiredLength = 0x20;
            const UINT k_nDescRequiredLength = 0x40;
            const std::array<BYTE, k_nDescRequiredLength> k_rgFillBytes = { };
            const uint8_t nBBFCIMId = TranslatePalModSpriteIdToBBCFGameId(BlazBlueCF_S_CharacterData.at(m_nPrevUnitSel).nImageUnitIndex);

            CFPLFile.Write(&k_rgCFPLSignature, static_cast<UINT>(k_rgCFPLSignature.size()));

            CFPLFile.Write(&nBBFCIMId, 1);
            CFPLFile.Write(&k_rgFillBytes, 3);

            _WriteToFileAsANSIWithForcedLength(CFPLFile, cfplFileDialog.m_strPaletteName, k_nRequiredLength);
            _WriteToFileAsANSIWithForcedLength(CFPLFile, cfplFileDialog.m_strCreator, k_nRequiredLength);
            _WriteToFileAsANSIWithForcedLength(CFPLFile, cfplFileDialog.m_strDescription, k_nDescRequiredLength);

            // "is bloom" : gives the in-game character display a shine.
            CFPLFile.Write(&cfplFileDialog.m_fEnableBloom, 1);

            const uint16_t k_nStartingPaletteAdjustment = k_nPalettesPerFile * m_nPrevChildSel1;

            // Now write the actual palettes
            for (uint8_t nPaletteId = 0; nPaletteId < k_nPalettesPerFile; nPaletteId++)
            {
                COLORREF* rgCurrentPalette = GetHost()->GetCurrGame()->CreatePal(m_nPrevUnitSel, nPaletteId + k_nStartingPaletteAdjustment);

                for (size_t nPaletteIndex = 0; nPaletteIndex < k_nColorsPerPalette; nPaletteIndex++)
                {
                    // we store as RBGA, CFPLs want BGRA, so flip here.
                    // incoming is BGRA, so flip to be RBGA

                    uint8_t alpha = static_cast<uint8_t>((rgCurrentPalette[nPaletteIndex] & 0xFF000000) >> 24);
                    uint8_t blue =  static_cast<uint8_t>((rgCurrentPalette[nPaletteIndex] & 0x00FF0000) >> 16);
                    uint8_t green = static_cast<uint8_t>((rgCurrentPalette[nPaletteIndex] & 0x0000FF00) >> 8);
                    uint8_t red =   static_cast<uint8_t>(rgCurrentPalette[nPaletteIndex] & 0xFF);
                   
                    CFPLFile.Write(&blue, 1);
                    CFPLFile.Write(&green, 1);
                    CFPLFile.Write(&red, 1);
                    CFPLFile.Write(&alpha, 1);
                }

                delete[] rgCurrentPalette;
            }
            
            // pad 3
            CFPLFile.Write(&k_rgFillBytes, 3);

            CFPLFile.Close();

            fSuccess = true;
        }
        else
        {
            fShouldShowGenericError = true;
        }
    }

    SetStatusText(fSuccess ? IDS_CFPLSAVE_SUCCESS : IDS_CFPLSAVE_FAILURE);
}
