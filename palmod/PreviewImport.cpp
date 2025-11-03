#include "stdafx.h"
#include "PalMod.h"
#include "PreviewImport.h"

class CPreviewImportDialog : public CDialog
{
    DECLARE_DYNAMIC(CPreviewImportDialog)

public:
    CPreviewImportDialog(std::vector<CString> rgstrHWOptionsList, int nSuggestedIndex, UINT nSuggestedLayer, SpriteImportDirection suggestedDirection, std::vector<sImageDimensions> rgExistingDimensions, bool fAllowComposition, CWnd* pParent = NULL);
    virtual ~CPreviewImportDialog() {};

    BOOL OnInitDialog();
    afx_msg void OnUpdateCombobox_HW() { m_nCurrentSel_HW = m_lbHWOptions.GetCurSel(); };
    afx_msg void OnUpdateCombobox_Layer();
    afx_msg void OnUpdateCombobox_Read() { m_nCurrentSel_Read = static_cast<SpriteImportDirection>(m_lbReadOptions.GetCurSel()); };
    afx_msg void OnUpdateCombobox_Composition() { m_nCurrentSel_Composition = static_cast<SpriteImportCompositionStyle>(m_lbCompositionOptions.GetCurSel()); };

    enum { IDD = IDD_RAWFIXUP_DIALOG };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);

    DECLARE_MESSAGE_MAP()

    CListBox m_lbHWOptions;
    CListBox m_lbLayerOptions;
    std::vector<CString> m_rgstrHWOptionsList;
    std::vector<CString> m_rgstrLayerOptionsList;
    std::vector<sImageDimensions> m_rgExistingDimensions;

    CListBox m_lbReadOptions;
    CListBox m_lbCompositionOptions;
    bool m_fCompositionAllowed;

public:
    int m_nCurrentSel_HW = 0;
    UINT m_nCurrentSel_Layer = 0;
    SpriteImportDirection m_nCurrentSel_Read = SpriteImportDirection::TopDown;
    SpriteImportCompositionStyle m_nCurrentSel_Composition = SpriteImportCompositionStyle::Replace;
};

IMPLEMENT_DYNAMIC(CPreviewImportDialog, CDialog)

CPreviewImportDialog::CPreviewImportDialog(std::vector<CString> rgstrHWOptionsList, int nSuggestedIndex, UINT nSuggestedLayer, SpriteImportDirection suggestedDirection, std::vector<sImageDimensions> rgExistingDimensions, bool fAllowComposition, CWnd* pParent /* = NULL*/)
    : CDialog(CPreviewImportDialog::IDD, pParent)
{
    m_rgstrHWOptionsList = rgstrHWOptionsList;
    m_rgExistingDimensions = rgExistingDimensions;
    m_fCompositionAllowed = fAllowComposition;

    m_nCurrentSel_HW = nSuggestedIndex;
    m_nCurrentSel_Layer = nSuggestedLayer;
    m_nCurrentSel_Read = suggestedDirection;
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
    m_lbCompositionOptions.InsertString(1, L"Merge Above");
    m_lbCompositionOptions.InsertString(2, L"Merge Below");
    m_lbCompositionOptions.SetCurSel(static_cast<int>(m_nCurrentSel_Composition));

    bool fHavePreviousItemThisLayer = false;
    for (auto& item : m_rgExistingDimensions)
    {
        if (item.width != 0)
        {
            fHavePreviousItemThisLayer = true;
            break;
        }
    }

    if (!fHavePreviousItemThisLayer || !m_fCompositionAllowed)
    {
        // so this is interesting since we may or may not have existing previews...
        // we DO know what data we have already
        // but if we're paying attention to that then we need to update this as the user changes layers
        m_lbCompositionOptions.EnableWindow(FALSE);
    }

    int nLayer = 0;
    for (auto& strColorOption : m_rgExistingDimensions)
    {
        CString strLayer;
        strLayer.Format(L"%u", nLayer);
        m_lbLayerOptions.InsertString(nLayer++, strLayer);
    }

    m_lbLayerOptions.SetCurSel(m_nCurrentSel_Layer);

    if (m_rgExistingDimensions.size() == 1)
    {
        m_lbLayerOptions.EnableWindow(FALSE);
    }

    UpdateData();

    return TRUE;
}

void CPreviewImportDialog::OnUpdateCombobox_Layer()
{
    m_nCurrentSel_Layer = m_lbLayerOptions.GetCurSel();

    if (m_rgExistingDimensions.at(m_nCurrentSel_Layer).width && m_fCompositionAllowed)
    {
        m_lbCompositionOptions.EnableWindow(TRUE);
    }
    else
    {
        m_lbCompositionOptions.EnableWindow(FALSE);
        m_lbCompositionOptions.SetCurSel(0);
    }
}

void CPreviewImportDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_RAWFIXUP_HWOPTIONS, m_lbHWOptions);
    DDX_Control(pDX, IDC_RAWFIXUP_OPTIONS_LAYER, m_lbLayerOptions);
    DDX_Control(pDX, IDC_RAWFIXUP_OPTIONS_READ, m_lbReadOptions);
    DDX_Control(pDX, IDC_RAWFIXUP_OPTIONS_COMPOSITION, m_lbCompositionOptions);
}

BEGIN_MESSAGE_MAP(CPreviewImportDialog, CDialog)
    ON_LBN_SELCHANGE(IDC_RAWFIXUP_HWOPTIONS, &OnUpdateCombobox_HW)
    ON_LBN_SELCHANGE(IDC_RAWFIXUP_OPTIONS_LAYER, &OnUpdateCombobox_Layer)
    ON_LBN_SELCHANGE(IDC_RAWFIXUP_OPTIONS_READ, &OnUpdateCombobox_Read)
    ON_LBN_SELCHANGE(IDC_RAWFIXUP_OPTIONS_COMPOSITION, &OnUpdateCombobox_Composition)
END_MESSAGE_MAP()

bool GetUserOptionsForTextureOverride(int nActualFileSize, sImageDimensions& suggestedImageSize,
                                      int nImgAmt, sImgNode** ppImgBuffer, std::array<sTextureData, MAX_IMAGES_DISPLAYABLE> vSpriteOverrideTextures,
                                      UINT& nPositionToLoadTo, SpriteImportDirection& spriteDirection, SpriteImportCompositionStyle *pCompositionStyle)
{
    CString strOutput;
    std::vector<int> rgWidthOptions;
    std::vector<CString> rgstrHWOptions;
    // Note that this implementation only checks for solo preferred Width values not for solo preferred Height values
    std::pair<int, int> indexSuggestion = { 0, suggestedImageSize.width };
    // Arbitrary assumption that user raws will not be taller than 4000px tall
    const int nUnreasonablyTallImage = 4096;
    // Arbitrary assumption that image size should be less than 25px wide.
    // We'll increment this such that we ensure that the image is not "nUnreasonablyTallImage" tall.
    int nMinimumAcceptableWidth = 25;
    const int nSizeToCheck = static_cast<int>(ceil(nActualFileSize / static_cast<float>(nMinimumAcceptableWidth)));
    bool fHaveViableDimensions = false;

    while ((nActualFileSize / nMinimumAcceptableWidth) > nUnreasonablyTallImage)
    {
        nMinimumAcceptableWidth++;
    }

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

    if (!rgstrHWOptions.empty())
    {
        std::vector<sImageDimensions> rgExistingDimensions;

        for (int iImgLayer = 0; iImgLayer < nImgAmt; iImgLayer++)
        {
            if (!vSpriteOverrideTextures.at(iImgLayer).pixels.empty())
            {
                rgExistingDimensions.push_back({ vSpriteOverrideTextures.at(iImgLayer).dimensions.width, vSpriteOverrideTextures.at(iImgLayer).dimensions.height });
            }
            else if (ppImgBuffer[iImgLayer])
            {
                rgExistingDimensions.push_back({ ppImgBuffer[iImgLayer]->dimensions.width, ppImgBuffer[iImgLayer]->dimensions.height });
            }
            else
            {
                rgExistingDimensions.push_back({ 0, 0 });
            }
        }

        CPreviewImportDialog AdjustmentDialog(rgstrHWOptions, indexSuggestion.first, nPositionToLoadTo, spriteDirection, rgExistingDimensions, pCompositionStyle);

        if (AdjustmentDialog.DoModal() == IDOK)
        {
            suggestedImageSize.width = rgWidthOptions.at(AdjustmentDialog.m_nCurrentSel_HW);
            suggestedImageSize.height = nActualFileSize / rgWidthOptions.at(AdjustmentDialog.m_nCurrentSel_HW);
            nPositionToLoadTo = AdjustmentDialog.m_nCurrentSel_Layer;
            spriteDirection = AdjustmentDialog.m_nCurrentSel_Read;
            if (pCompositionStyle)
            {
                *pCompositionStyle = AdjustmentDialog.m_nCurrentSel_Composition;
            }
            fHaveViableDimensions = true;
        }
    }

    return fHaveViableDimensions;
}
