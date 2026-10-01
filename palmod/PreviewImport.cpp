#include "stdafx.h"
#include "PalMod.h"
#include "PreviewImport.h"

class CPreviewImportDialog : public CDialog
{
    DECLARE_DYNAMIC(CPreviewImportDialog)

public:
    CPreviewImportDialog(std::vector<CString> rgstrHWOptionsList, int nSuggestedIndex, UINT nSuggestedLayer, std::vector<sImageDimensions> rgExistingDimensions,
                            sSpriteImportOptions importPreviewOptions, CWnd* pParent = NULL);
    virtual ~CPreviewImportDialog() {};

    BOOL OnInitDialog();
    afx_msg void OnUpdateCombobox_HW() { m_nCurrentSel_HW = m_lbHWOptions.GetCurSel(); };
    afx_msg void OnUpdateCombobox_Layer();
    afx_msg void OnUpdateCombobox_Read() { m_nCurrentSel_Read = static_cast<SpriteImportDirection>(m_lbReadOptions.GetCurSel()); };
    afx_msg void OnUpdateCombobox_Composition();

    enum { IDD = IDD_PREVIEWIMPORT_DIALOG };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);
    virtual void OnOK();

    void _UpdatePaddingEnableState();

    DECLARE_MESSAGE_MAP()

    CListBox m_lbHWOptions;
    CListBox m_lbLayerOptions;
    std::vector<CString> m_rgstrHWOptionsList;
    std::vector<CString> m_rgstrLayerOptionsList;
    std::vector<sImageDimensions> m_rgExistingDimensions;

    CListBox m_lbReadOptions;
    CListBox m_lbCompositionOptions;

public:
    int m_nCurrentSel_HW = 0;
    UINT m_nCurrentSel_Layer = 0;
    SpriteImportDirection m_nCurrentSel_Read = SpriteImportDirection::TopDown;
    SpriteImportCompositionStyle m_nCurrentSel_Composition = SpriteImportCompositionStyle::Replace;
    sImageDimensions m_nOffsets = {};    
};

IMPLEMENT_DYNAMIC(CPreviewImportDialog, CDialog)

CPreviewImportDialog::CPreviewImportDialog(std::vector<CString> rgstrHWOptionsList, int nSuggestedIndex, UINT nSuggestedLayer, std::vector<sImageDimensions> rgExistingDimensions, 
                                            sSpriteImportOptions importPreviewOptions, CWnd* pParent /* = NULL*/)
    : CDialog(CPreviewImportDialog::IDD, pParent)
{
    m_rgstrHWOptionsList = rgstrHWOptionsList;
    m_rgExistingDimensions = rgExistingDimensions;

    m_nCurrentSel_HW = nSuggestedIndex;
    m_nCurrentSel_Layer = nSuggestedLayer;
    m_nCurrentSel_Read = importPreviewOptions.direction;
    m_nOffsets = importPreviewOptions.offsets;
}

BOOL CPreviewImportDialog::OnInitDialog()
{
    CDialog::OnInitDialog();

    for (const CString& strColorOption : m_rgstrHWOptionsList)
    {
        m_lbHWOptions.AddString(strColorOption);
    }

    m_lbHWOptions.SetCurSel(m_nCurrentSel_HW);

    m_lbReadOptions.InsertString(0, L"Normal");
    m_lbReadOptions.InsertString(1, L"Flip Vertical");
    m_lbReadOptions.InsertString(2, L"Flip Horizontal");
    m_lbReadOptions.SetCurSel(static_cast<int>(m_nCurrentSel_Read));

    m_lbCompositionOptions.InsertString(0, L"Replace");
    m_lbCompositionOptions.InsertString(1, L"Blend (Foreground)");
    m_lbCompositionOptions.InsertString(2, L"Blend (Background)");
    m_lbCompositionOptions.InsertString(3, L"Side: Left");
    m_lbCompositionOptions.InsertString(4, L"Side: Right");
    m_lbCompositionOptions.InsertString(5, L"Side: Above");
    m_lbCompositionOptions.InsertString(6, L"Side: Below");
    m_lbCompositionOptions.SetCurSel(static_cast<int>(m_nCurrentSel_Composition));

    if ((m_nCurrentSel_Layer >= m_rgExistingDimensions.size()) || m_rgExistingDimensions.at(m_nCurrentSel_Layer).IsEmpty())
    {
        // so this is interesting since we may or may not have existing previews...
        // we DO know what data we have already
        // but if we're paying attention to that then we need to update this as the user changes layers
        m_lbCompositionOptions.EnableWindow(FALSE);
    }

    CString strInfo;
    sImageDimensions dimensionsOfFirstLayer;
    int nLayer = 0;

    for (size_t iEntry = 0; iEntry < m_rgExistingDimensions.size(); iEntry++)
    {
        strInfo.Format(L"%u", nLayer);
        m_lbLayerOptions.InsertString(nLayer++, strInfo.GetString());

        if (dimensionsOfFirstLayer.IsEmpty())
        {
            dimensionsOfFirstLayer = m_rgExistingDimensions.at(iEntry);
        }
    }

    m_lbLayerOptions.SetCurSel(m_nCurrentSel_Layer);

    strInfo = L"";

    if (!dimensionsOfFirstLayer.IsEmpty())
    {
        strInfo.Format(L"The current preview is %u x %u.  ", dimensionsOfFirstLayer.width, dimensionsOfFirstLayer.height);
    }

    strInfo += L"We should read your new preview as:";
    GetDlgItem(IDC_PREVIEWIMPORT_IMAGEINFO)->SetWindowText(strInfo.GetString());

    strInfo.Format(L"%i", m_nOffsets.width);
    GetDlgItem(IDC_PREVIEWIMPORT_PADDING_WIDTH)->SetWindowText(strInfo.GetString());
    strInfo.Format(L"%i", m_nOffsets.height);
    GetDlgItem(IDC_PREVIEWIMPORT_PADDING_HEIGHT)->SetWindowText(strInfo.GetString());

    _UpdatePaddingEnableState();

    UpdateData();

    return TRUE;
}

void CPreviewImportDialog::_UpdatePaddingEnableState()
{
    const BOOL fShouldAllowPadding = (m_nCurrentSel_Composition != SpriteImportCompositionStyle::Replace);

    GetDlgItem(IDC_PREVIEWIMPORT_PADDING_WIDTH)->EnableWindow(fShouldAllowPadding);
    GetDlgItem(IDC_PREVIEWIMPORT_PADDING_HEIGHT)->EnableWindow(fShouldAllowPadding);
}

void CPreviewImportDialog::OnUpdateCombobox_Layer()
{
    m_nCurrentSel_Layer = m_lbLayerOptions.GetCurSel();

    if (!m_rgExistingDimensions.at(m_nCurrentSel_Layer).IsEmpty())
    {
        m_lbCompositionOptions.EnableWindow(TRUE);
    }
    else
    {
        m_lbCompositionOptions.EnableWindow(FALSE);
        m_lbCompositionOptions.SetCurSel(0);
    }
}

void CPreviewImportDialog::OnUpdateCombobox_Composition()
{
    m_nCurrentSel_Composition = static_cast<SpriteImportCompositionStyle>(m_lbCompositionOptions.GetCurSel());

    _UpdatePaddingEnableState();
}

void CPreviewImportDialog::OnOK()
{
    if (m_nCurrentSel_Composition != SpriteImportCompositionStyle::Replace)
    {
        CString strInfo;

        GetDlgItemText(IDC_PREVIEWIMPORT_PADDING_WIDTH, strInfo);
        int nOffsetW = _wtol(strInfo.GetString());
        GetDlgItemText(IDC_PREVIEWIMPORT_PADDING_HEIGHT, strInfo);
        int nOffsetH = _wtol(strInfo.GetString());

        // Stop things from getting too degenerate
        if (abs(nOffsetW) > 1000)
        {
            nOffsetW = 0;
        }

        if (abs(nOffsetH) > 1000)
        {
            nOffsetH = 0;
        }

        m_nOffsets = { nOffsetW, nOffsetH };
    }

    CDialog::OnOK();
}

void CPreviewImportDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_PREVIEWIMPORT_HWOPTIONS, m_lbHWOptions);
    DDX_Control(pDX, IDC_PREVIEWIMPORT_OPTIONS_LAYER, m_lbLayerOptions);
    DDX_Control(pDX, IDC_PREVIEWIMPORT_OPTIONS_READ, m_lbReadOptions);
    DDX_Control(pDX, IDC_PREVIEWIMPORT_OPTIONS_COMPOSITION, m_lbCompositionOptions);
}

BEGIN_MESSAGE_MAP(CPreviewImportDialog, CDialog)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_HWOPTIONS, &OnUpdateCombobox_HW)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_OPTIONS_LAYER, &OnUpdateCombobox_Layer)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_OPTIONS_READ, &OnUpdateCombobox_Read)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_OPTIONS_COMPOSITION, &OnUpdateCombobox_Composition)
END_MESSAGE_MAP()

bool GetUserOptionsForTextureOverride(int nActualFileSize, sImageDimensions& suggestedImageSize,
    int nImgAmt, sImgNode** ppImgBuffer, std::array<sTextureData, MAX_IMAGES_DISPLAYABLE> vSpriteOverrideTextures,
    UINT& nPositionToLoadTo, sSpriteImportOptions& importPreviewOptions, bool& fUserCanceled)
{
    CString strOutput;
    std::vector<int> rgWidthOptions;
    std::vector<CString> rgstrHWOptions;
    // Note that this implementation only checks for solo preferred Width values not for solo preferred Height values
    std::pair<int, int> indexSuggestion = { 0, suggestedImageSize.width };
    // Arbitrary assumption that user raws will not be taller than 4000px tall
    bool fHaveViableDimensions = false;

    if (suggestedImageSize.GetPixelCount() == nActualFileSize)
    {
        // got it in one!
        strOutput.Format(L"%u x %u", suggestedImageSize.width, suggestedImageSize.height);

        rgWidthOptions.push_back(suggestedImageSize.width);
        rgstrHWOptions.push_back(strOutput);
    }
    else
    {
        // Arbitrary assumption that image size should be less than 25px wide.
        // We'll increment this such that we ensure that the image is not "nUnreasonablyTallImage" tall.
        int nMinimumAcceptableWidth = 25;
        const int nUnreasonablyTallImage = 4096;

        while ((nActualFileSize / nMinimumAcceptableWidth) > nUnreasonablyTallImage)
        {
            nMinimumAcceptableWidth++;
        }

        const int nSizeToCheck = static_cast<int>(ceil(nActualFileSize / static_cast<float>(nMinimumAcceptableWidth)));

        for (int nPossibleWidth = nMinimumAcceptableWidth, nFoundMatches = 0; nPossibleWidth < nSizeToCheck; nPossibleWidth++)
        {
            if (nActualFileSize % nPossibleWidth == 0)
            {
                strOutput.Format(L"%u x %u", nPossibleWidth, nActualFileSize / nPossibleWidth);

                rgWidthOptions.push_back(nPossibleWidth);
                rgstrHWOptions.push_back(strOutput);

                if (suggestedImageSize.width)
                {
                    if (abs(suggestedImageSize.width - nPossibleWidth) < indexSuggestion.second)
                    {
                        indexSuggestion.first = nFoundMatches;
                        indexSuggestion.second = abs(suggestedImageSize.width - nPossibleWidth);
                    }
                }

                nFoundMatches++;
            }
        }
    }

    if (!rgstrHWOptions.empty())
    {
        // We pass the existing preview dimensions solely so that we know what blend options to enable
        std::vector<sImageDimensions> rgExistingDimensions;

        for (int iImgLayer = 0; iImgLayer < nImgAmt; iImgLayer++)
        {
            if (!vSpriteOverrideTextures.at(iImgLayer).pixels.empty())
            {
                rgExistingDimensions.push_back(vSpriteOverrideTextures.at(iImgLayer).dimensions);
            }
            else if (ppImgBuffer[iImgLayer])
            {
                rgExistingDimensions.push_back(ppImgBuffer[iImgLayer]->dimensions);
            }
            else
            {
                rgExistingDimensions.push_back({ 0, 0 });
            }
        }

        CPreviewImportDialog AdjustmentDialog(rgstrHWOptions, indexSuggestion.first, nPositionToLoadTo, rgExistingDimensions, importPreviewOptions, GetHost()->GetPreviewDlg());

        if (AdjustmentDialog.DoModal() == IDOK)
        {
            suggestedImageSize.width = rgWidthOptions.at(AdjustmentDialog.m_nCurrentSel_HW);
            suggestedImageSize.height = nActualFileSize / rgWidthOptions.at(AdjustmentDialog.m_nCurrentSel_HW);
            nPositionToLoadTo = AdjustmentDialog.m_nCurrentSel_Layer;
            importPreviewOptions.direction = AdjustmentDialog.m_nCurrentSel_Read;
            importPreviewOptions.compositionStyle = AdjustmentDialog.m_nCurrentSel_Composition;
            importPreviewOptions.offsets = AdjustmentDialog.m_nOffsets;

            fHaveViableDimensions = true;
        }
        else
        {
            fUserCanceled = true;
            GetHost()->GetPalModDlg()->SetStatusText(L"(Load canceled.)");
        }
    }

    return fHaveViableDimensions;
}
