#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "Game\BlazBlueCF_S_DEF.h"

// CFPL and HPAL are BBCF color palette files.
// HPAL is for one 256 color ABGR palette.
// CFPL is a collection of eight 256 color BGRA palettes: exactly enough for one full character

class CCFPLFileImportDialog : public CDialog
{
    DECLARE_DYNAMIC(CCFPLFileImportDialog)

public:
    CCFPLFileImportDialog(std::wstring strCurrentCharacter, const std::vector<LPCWSTR> vpszColorList, size_t nCurrentSelection, CWnd* pParent = NULL);   // standard constructor
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
    size_t m_nCurrentSel = 0;
};

IMPLEMENT_DYNAMIC(CCFPLFileImportDialog, CDialog)

CCFPLFileImportDialog::CCFPLFileImportDialog(std::wstring strCurrentCharacter, const std::vector<LPCWSTR> vpszColorList, size_t nCurrentSelection, CWnd* pParent /*=NULL*/)
    : CDialog(CCFPLFileImportDialog::IDD, pParent)
{
    m_strCharacterName = strCurrentCharacter;

    m_vstrColorOptions = vpszColorList;

    m_nCurrentSel = nCurrentSelection;
}

BOOL CCFPLFileImportDialog::OnInitDialog()
{
    CDialog::OnInitDialog();

    GetDlgItem(IDC_CFPLIMPORTCHARACTER)->SetWindowText(m_strCharacterName.data());

    for (std::wstring strColorOption : m_vstrColorOptions)
    {
        m_CBColorPosition.AddString(strColorOption.data());
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

    DDX_Control(pDX, IDC_CFCOLOROPTIONS, m_CBColorPosition);
}

BEGIN_MESSAGE_MAP(CCFPLFileImportDialog, CDialog)
    ON_CBN_SELCHANGE(IDC_CFCOLOROPTIONS, &OnUpdateCombobox)
END_MESSAGE_MAP()

bool CPalModDlg::LoadPaletteFromCFPL(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    bool fUserWantsToApply = false;

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
        const uint8_t k_nCFPLSignatureLength = 0x10;
        const uint8_t k_nCFPLHeaderLength = 0x95;

        bool fFileIsValidCFPL = false;

        // Read data from the CFPL...
        if (CFPLFile.GetLength() == k_nRequiredFileSize)
        {
            const std::array<uint8_t, k_nCFPLSignatureLength> k_rgCFPLSignature =
            {
                0x49, 0x4d, 0x50, 0x4c, 0x43, 0x46, 0x00, 0x00, // I M P L C F
                0x14, 0x00, 0x00, 0x00, 0x81, 0x20, 0x00, 0x00, // header size, data size: we're going to lock to 0x2098 files for now.
            };

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

            for (; nCollectionIndex < BlazBlueCF_S_CharacterData.size(); nCollectionIndex++)
            {
                if (BlazBlueCF_S_CharacterData[nCollectionIndex].nBBCFIMId == nCharacterToApplyTo)
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

            if (nColorPositionToWriteTo < BlazBlueCF_S_CharacterData[nCollectionIndex].ppszCollectionList.size())
            {
                CCFPLFileImportDialog cfplFileDialog(BlazBlueCF_S_CharacterData[nCollectionIndex].pszCharacter,
                    BlazBlueCF_S_CharacterData[nCollectionIndex].ppszCollectionList,
                    nColorPositionToWriteTo);

                if (cfplFileDialog.DoModal() == IDOK)
                {
                    nColorPositionToWriteTo = static_cast<uint8_t>(cfplFileDialog.m_nCurrentSel);

                    fUserWantsToApply = true;
                }
            }
        }

        if (fCanUseCharacterAssignment && fUserWantsToApply)
        {
            const uint16_t k_nColorsPerPalette = 256; // An CFPL has 8 sets of 256 (1024 bytes / 4 bytes per color) colors.
            const uint8_t k_nBytesPerColor = 4;
            const size_t k_nColorDataSize = k_nColorsPerPalette * k_nBytesPerColor;
            const uint8_t k_nPalettesPerFile = 8;
            const uint16_t k_nStartingPaletteAdjustment = k_nPalettesPerFile * nColorPositionToWriteTo;

            std::array<uint8_t, k_nColorDataSize> rgCFPL = {};

            CFPLFile.Seek(k_nCFPLHeaderLength, CFile::begin);

            for (uint8_t nPaletteId = 0; nPaletteId < k_nPalettesPerFile; nPaletteId++)
            {
                uint8_t rgConvertedPalette[k_nColorDataSize] = {};

                CFPLFile.Read(&rgCFPL, rgCFPL.size());

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
            strStatus.Format(IDS_CFPL_LOADED, BlazBlueCF_S_CharacterData[nCollectionIndex].pszCharacter, BlazBlueCF_S_CharacterData[nCollectionIndex].ppszCollectionList[nColorPositionToWriteTo]);
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
