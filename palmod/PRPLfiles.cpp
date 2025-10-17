#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "Game\GGXXACR_S_DEF.h"
#include "RegProc.h" // save/restore creator name

// PRPL are ACR color palette files.

const uint8_t k_nPRPLSignatureLength = 0xc;
const uint8_t k_nPalettesPerNode_BBCF = 8;
const uint8_t k_nPalettesPerNode_ACR = 1;
const uint16_t k_nColorsPerPalette = 256; // A PRPL has N sets of 256 (1024 bytes / 4 bytes per color) colors.
const uint8_t k_nBytesPerColor = 4;
const size_t k_nColorDataSize = k_nColorsPerPalette * k_nBytesPerColor;

const std::array<uint8_t, k_nPRPLSignatureLength> k_rgPRPLSignature =
{
    0x49, 0x4d, 0x50, 0x4c, 0x50, 0x52, 0x00, 0x00, // I M P L P R
    0x14, 0x00, 0x00, 0x00 // int for headerlen.  We'll lock to 0x14 headers since otherwise we need code updates.
};

class CPRPLFileImportDialog : public CDialog
{
    DECLARE_DYNAMIC(CPRPLFileImportDialog)

public:
    CPRPLFileImportDialog(std::wstring strCurrentCharacter, const std::vector<LPCWSTR> vpszColorList, int nCurrentSelection, CWnd* pParent = NULL);   // standard constructor
    virtual ~CPRPLFileImportDialog() {};

    BOOL OnInitDialog();
    afx_msg void OnUpdateCombobox();

    // Dialog Data
    enum { IDD = IDD_PRPL_IMPORT };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    DECLARE_MESSAGE_MAP()

    CComboBox m_CBColorPosition;
    std::wstring m_strCharacterName;
    std::vector<LPCWSTR> m_vstrColorOptions;

public:
    int m_nCurrentSel = 0;
};

IMPLEMENT_DYNAMIC(CPRPLFileImportDialog, CDialog)

CPRPLFileImportDialog::CPRPLFileImportDialog(std::wstring strCurrentCharacter, const std::vector<LPCWSTR> vpszColorList, int nCurrentSelection, CWnd* pParent /*=NULL*/)
    : CDialog(CPRPLFileImportDialog::IDD, pParent)
{
    m_strCharacterName = strCurrentCharacter;

    m_vstrColorOptions = vpszColorList;

    m_nCurrentSel = nCurrentSelection;
}

BOOL CPRPLFileImportDialog::OnInitDialog()
{
    CDialog::OnInitDialog();

    GetDlgItem(IDC_PRPL_CHARACTERNAME)->SetWindowText(m_strCharacterName.data());

    for (const std::wstring& strColorOption : m_vstrColorOptions)
    {
        m_CBColorPosition.AddString(strColorOption.c_str());
    }

    m_CBColorPosition.SetCurSel(m_nCurrentSel);

    UpdateData();

    return TRUE;
}

void CPRPLFileImportDialog::OnUpdateCombobox()
{
    m_nCurrentSel = m_CBColorPosition.GetCurSel();
}

void CPRPLFileImportDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_PRPL_COLOROPTIONS, m_CBColorPosition);
}

BEGIN_MESSAGE_MAP(CPRPLFileImportDialog, CDialog)
    ON_CBN_SELCHANGE(IDC_PRPL_COLOROPTIONS, &OnUpdateCombobox)
END_MESSAGE_MAP()

class CPRPLFileExportDialog : public CDialog
{
    DECLARE_DYNAMIC(CPRPLFileExportDialog)

public:
    CPRPLFileExportDialog(std::wstring strCurrentCharacter, CWnd* pParent = NULL);   // standard constructor
    ~CPRPLFileExportDialog();

    BOOL OnInitDialog();

    afx_msg void OnUpdatePalName();

    // Dialog Data
    enum { IDD = IDD_PRPL_EXPORT };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    DECLARE_MESSAGE_MAP()

    std::wstring m_strCharacterName;
    const std::wstring m_strCreatorValueName = L"pref_CreatorName";

public:
    CString m_strPaletteName;
    CString m_strCreator;
    CString m_strDescription;
};

IMPLEMENT_DYNAMIC(CPRPLFileExportDialog, CDialog)

CPRPLFileExportDialog::CPRPLFileExportDialog(std::wstring strCurrentCharacter, CWnd* pParent /*=NULL*/)
    : CDialog(CPRPLFileExportDialog::IDD, pParent)
{
    m_strCharacterName = strCurrentCharacter;
}

CPRPLFileExportDialog::~CPRPLFileExportDialog()
{
    // Store creator name preference if found
    if (m_strCreator.GetLength() > 0)
    {
        HKEY hKey = nullptr;

        if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_SET_VALUE, &hKey) == ERROR_SUCCESS)
        {
            RegSetValueEx(hKey, m_strCreatorValueName.data(), 0, REG_SZ, reinterpret_cast<const BYTE *>(m_strCreator.GetString()), static_cast<DWORD>(m_strCreator.GetLength() + 1) * sizeof(wchar_t));

            RegCloseKey(hKey);
        }
    }
}

BOOL CPRPLFileExportDialog::OnInitDialog()
{
    CDialog::OnInitDialog();

    GetDlgItem(IDC_PRPL_CHARACTERNAME)->SetWindowText(m_strCharacterName.data());

    HKEY hKey = nullptr;

    if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
    {
        DWORD dwRegType = REG_SZ;
        wchar_t szCreatorName[MAX_PATH] = {};
        DWORD cbDataSize = sizeof(szCreatorName);

        if ((RegQueryValueEx(hKey, m_strCreatorValueName.data(), 0, &dwRegType, reinterpret_cast<LPBYTE>(szCreatorName), &cbDataSize) == ERROR_SUCCESS) &&
            (dwRegType == REG_SZ))
        {
            m_strCreator = szCreatorName;
        }

        RegCloseKey(hKey);
    }

    GetDlgItem(IDC_PRPL_CREATOR)->SetWindowText(m_strCreator);

    GetDlgItem(IDOK)->EnableWindow(m_strPaletteName.GetLength());

    UpdateData();

    return TRUE;
}

void CPRPLFileExportDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Text(pDX, IDC_PRPL_PALNAME, m_strPaletteName);
    DDX_Text(pDX, IDC_PRPL_CREATOR, m_strCreator);
    DDX_Text(pDX, IDC_PRPL_DESCRIPTION, m_strDescription);
}

void CPRPLFileExportDialog::OnUpdatePalName()
{
    UpdateData();

    GetDlgItem(IDOK)->EnableWindow(m_strPaletteName.GetLength());

    UpdateData(FALSE);
}

BEGIN_MESSAGE_MAP(CPRPLFileExportDialog, CDialog)
    ON_EN_CHANGE(IDC_PRPL_PALNAME, &OnUpdatePalName)
END_MESSAGE_MAP()

bool CPalModDlg::LoadPaletteFromPRPL(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    bool fUserWantsToApply = true;
    CGameClass* CurrGame = GetHost()->GetCurrGame();

    CFile PRPLFile;
    if (PRPLFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        // PRPLs are 8344 bytes (0x2098 bytes) long.
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
            // 0x94      "has bloom" -- unused for ACR
        const size_t k_nRequiredFileSize_ACR = 0x498;
        const uint8_t k_nPRPLHeaderLength = 0x95;

        bool fFileIsValidPRPL = false;
        const ULONGLONG nPRPLFileSize = PRPLFile.GetLength();

        // Read data from the PRPL...
        if (nPRPLFileSize == k_nRequiredFileSize_ACR)
        {
            std::array<uint8_t, k_nPRPLSignatureLength> rgHeaderBytes = {};

            PRPLFile.Seek(0, CFile::begin);
            PRPLFile.Read(&rgHeaderBytes, k_nPRPLSignatureLength);
            uint8_t nMatchCount = 0;

            for (size_t nPos = 0; nPos < k_nPRPLSignatureLength; nPos++)
            {
                if (rgHeaderBytes[nPos] == k_rgPRPLSignature[nPos])
                {
                    nMatchCount++;
                }
                else
                {
                    break;
                }
            }

            if (nMatchCount == k_nPRPLSignatureLength)
            {
                fFileIsValidPRPL = true;
            }
        }

        int nDataLen = 0;
        PRPLFile.Read(&nDataLen, 4);

        uint16_t nCollectionIndex = 0;
        bool fCanUseCharacterAssignment = false;
        const bool fIsValidACRDataLen = (nDataLen == 0x481);

        if (!fIsValidACRDataLen)
        {
            fFileIsValidPRPL = false;
        }

        if (fFileIsValidPRPL)
        {
            uint8_t nCharacterToApplyTo = 0;
            PRPLFile.Read(&nCharacterToApplyTo, 1);

            const uint32_t nSpriteId = TranslateACRGameIdToPalModSpriteId(nCharacterToApplyTo);

            for (; nCollectionIndex < GGXXACR_S_CharacterData.size(); nCollectionIndex++)
            {
                if (GGXXACR_S_CharacterData[nCollectionIndex].nImageUnitIndex == nSpriteId)
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

            if (nColorPositionToWriteTo < GGXXACR_S_CharacterData[nCollectionIndex].sNodeData.rgpszNodeNames.size())
            {
                CPRPLFileImportDialog PRPLFileDialog(GGXXACR_S_CharacterData[nCollectionIndex].strCharacter,
                                                        GGXXACRPaletteNamesShort,
                                                        nColorPositionToWriteTo);

                if (PRPLFileDialog.DoModal() == IDOK)
                {
                    nColorPositionToWriteTo = static_cast<uint8_t>(PRPLFileDialog.m_nCurrentSel);
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
            // 1 palette for ACR currently.  This is gated in the nDataLen check above.
            const uint8_t k_nPalettesPerNodeThisGame = k_nPalettesPerNode_ACR;
            const uint16_t k_nStartingPaletteAdjustment = k_nPalettesPerNodeThisGame * nColorPositionToWriteTo;

            std::array<uint8_t, k_nColorDataSize> rgPRPL = {};

            PRPLFile.Seek(k_nPRPLHeaderLength, CFile::begin);

            for (uint8_t nPaletteId = 0; nPaletteId < k_nPalettesPerNodeThisGame; nPaletteId++)
            {
                uint8_t rgConvertedPalette[k_nColorDataSize] = {};

                PRPLFile.Read(&rgPRPL, static_cast<UINT>(rgPRPL.size()));

                for (size_t nPaletteIndex = 0; nPaletteIndex < k_nColorsPerPalette; nPaletteIndex++)
                {
                    // this is RGBA already
                    rgConvertedPalette[(nPaletteIndex * 4) + 2] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgPRPL[(nPaletteIndex * k_nBytesPerColor) + 2]);
                    rgConvertedPalette[(nPaletteIndex * 4) + 1] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgPRPL[(nPaletteIndex * k_nBytesPerColor) + 1]);
                    rgConvertedPalette[(nPaletteIndex * 4)]     = CurrGame->GetNearestLegal8BitColorValue_RGB(rgPRPL[(nPaletteIndex * k_nBytesPerColor) + 0]);
                    // This is 1bit alpha I don't know why either
                    rgConvertedPalette[(nPaletteIndex * 4) + 3] = rgPRPL[(nPaletteIndex * k_nBytesPerColor) + 3] ? 0xff : 0;
                }

                CurrGame->WritePal(nCollectionIndex, nPaletteId + k_nStartingPaletteAdjustment, (COLORREF*)&rgConvertedPalette, k_nColorsPerPalette);
                CurrGame->MarkPaletteDirty(nCollectionIndex, nPaletteId + k_nStartingPaletteAdjustment);
            }

            PRPLFile.Close();

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

            // reuse the identical CFPL format
            strStatus.Format(IDS_CFPL_LOADED, k_nPalettesPerNode_ACR, GGXXACR_S_CharacterData.at(nCollectionIndex).strCharacter.c_str(), GGXXACRPaletteNamesShort.at(nColorPositionToWriteTo));
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
        SetStatusText(IDS_PRPL_LOADFAILURE);
    }

    return fSuccess;
}

void CPalModDlg::SavePaletteToPRPL(LPCWSTR pszFileName, bool& fShouldShowGenericError)
{
    CFile PRPLFile;
    bool fSuccess = false;
    fShouldShowGenericError = false;

    CGameClass* CurrGame = GetHost()->GetCurrGame();
    const SupportedGamesList gameID = CurrGame->GetGameFlag();

    CPRPLFileExportDialog PRPLFileDialog(GGXXACR_S_CharacterData.at(m_nPrevUnitSel).strCharacter.c_str());

    bool fShouldAllowExport = (PRPLFileDialog.DoModal() == IDOK);

    if (fShouldAllowExport)
    {
        if (PRPLFileDialog.m_strPaletteName.GetLength() == 0)
        {
            fShouldAllowExport = false;
            MessageBox(L"Error: Palette name is required.", GetHost()->GetAppName(), MB_ICONERROR);
        }
    }

    if (fShouldAllowExport)
    {
        if (PRPLFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
        {
            // ACR PRPLs are 1176 bytes (0x498 bytes) long.
            // There is a 32 byte header followed by a text section (32b per section) followed by
            // 8 sets of 256 ARGB colors (BBCF) or 1 set of 256 ABGR colors (ACR).
            // Header:
                // 0x00-0x08 IMPLCF signature
                // 0x08-0x0c header length
                // 0x0c-0x10 data length
                // 0x10-0x14 character ID
                // 0x14-0x34 customized palette name
                // 0x34-0x54 optional creator name 
                // 0x54-0x94 optional description
                // 0x94      "has bloom" -- unused for ACR
            const UINT k_nRequiredLength = 0x20;
            const UINT k_nDescRequiredLength = 0x40;
            const std::array<BYTE, k_nDescRequiredLength> k_rgFillBytes = { };

            const uint8_t nCharacterId = TranslatePalModSpriteIdToACRGameId(GGXXACR_S_CharacterData.at(m_nPrevUnitSel).nImageUnitIndex);
            // N sets of 256 color palettes comprised of 4 byte colors
            //  + 0x81 bytes which is everything in the header past character ID to Has Bloom
            const uint32_t nPRPLDataLen = (1 * 4 * 256) + 0x81;

            PRPLFile.Write(&k_rgPRPLSignature, static_cast<UINT>(k_rgPRPLSignature.size()));
            
            PRPLFile.Write(&nPRPLDataLen, 4);

            PRPLFile.Write(&nCharacterId, 1);
            PRPLFile.Write(&k_rgFillBytes, 3);

            _WriteToFileAsANSIWithForcedLength(PRPLFile, PRPLFileDialog.m_strPaletteName, k_nRequiredLength);
            _WriteToFileAsANSIWithForcedLength(PRPLFile, PRPLFileDialog.m_strCreator, k_nRequiredLength);
            _WriteToFileAsANSIWithForcedLength(PRPLFile, PRPLFileDialog.m_strDescription, k_nDescRequiredLength);

            // PRPL doesn't use Bloom but uses the same file structure
            const BOOL fEmptyBool = TRUE;
            PRPLFile.Write(&fEmptyBool, 1);

            const uint8_t k_nPalettesPerNodeThisGame = k_nPalettesPerNode_ACR;
            const uint16_t nStartingPaletteAdjustment = m_nPrevChildSel2;

            // Now write the actual palettes
            for (uint8_t nPaletteId = 0; nPaletteId < k_nPalettesPerNodeThisGame; nPaletteId++)
            {
                const COLORREF* rgCurrentPalette = CurrGame->CreatePal(m_nPrevUnitSel, nPaletteId + nStartingPaletteAdjustment);

                for (size_t nPaletteIndex = 0; nPaletteIndex < k_nColorsPerPalette; nPaletteIndex++)
                {
                    // for ACR we're fine
                    const uint8_t alpha = static_cast<uint8_t>((rgCurrentPalette[nPaletteIndex] & 0xFF000000) >> 24);
                    const uint8_t blue =  static_cast<uint8_t>((rgCurrentPalette[nPaletteIndex] & 0x00FF0000) >> 16);
                    const uint8_t green = static_cast<uint8_t>((rgCurrentPalette[nPaletteIndex] & 0x0000FF00) >> 8);
                    const uint8_t red =   static_cast<uint8_t>(rgCurrentPalette[nPaletteIndex] & 0xFF);
                   
                    PRPLFile.Write(&red, 1);
                    PRPLFile.Write(&green, 1);
                    PRPLFile.Write(&blue, 1);
                    PRPLFile.Write(&alpha, 1);
                }

                delete[] rgCurrentPalette;
            }
            
            // pad 3
            PRPLFile.Write(&k_rgFillBytes, 3);

            PRPLFile.Close();

            fSuccess = true;
        }
        else
        {
            fShouldShowGenericError = true;
        }
    }

    SetStatusText(fSuccess ? IDS_PRPLSAVE_SUCCESS : IDS_PRPLSAVE_FAILURE);
}
