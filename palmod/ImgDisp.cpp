// ImgDisp.cpp : implementation file
//

#include "stdafx.h"
#include "ImgDisp.h"
#include "RLEData.h"

#include "resource.h"
#include "atlimage.h"
#include "PalMod.h"
#include "lodepng\lodepng.h"

class CPreviewImportDialog : public CDialog
{
    DECLARE_DYNAMIC(CPreviewImportDialog)

public:
    CPreviewImportDialog(std::vector<CString> rgstrHWOptionsList, int nSuggestedIndex, UINT nSuggestedLayer, SpriteImportDirection suggestedDirection, std::vector<std::pair<int, int>> rgExistingDimensions, bool fAllowComposition, CWnd* pParent = NULL);
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
    std::vector<std::pair<int, int>> m_rgExistingDimensions;

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

CPreviewImportDialog::CPreviewImportDialog(std::vector<CString> rgstrHWOptionsList, int nSuggestedIndex, UINT nSuggestedLayer, SpriteImportDirection suggestedDirection, std::vector<std::pair<int, int>> rgExistingDimensions, bool fAllowComposition, CWnd* pParent /* = NULL*/)
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
        if (item.first != 0)
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

    if (m_rgExistingDimensions.at(m_nCurrentSel_Layer).first && m_fCompositionAllowed)
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

// CImgDisp

CImgDisp::CImgDisp()
{
    InitImgBuffer();

    RegisterWindowClass();
}

CImgDisp::~CImgDisp()
{
    m_BGBitmap.DeleteObject();
    m_BGBrush.DeleteObject();

    ClearAllImages();

    safe_delete(m_MainDC);
    safe_delete(m_ImageDC);

    for (int iPos = 0; iPos < MAX_IMAGES_DISPLAYABLE; iPos++)
    {
        safe_delete_array(m_ppSpriteOverrideTexture[iPos]);
    }

    DeleteObject(m_hBmp);
}

BOOL CImgDisp::RegisterWindowClass()
{
    WNDCLASS wndcls;
    HINSTANCE hInst = AfxGetInstanceHandle();

    if (!(::GetClassInfo(hInst, IMGDISP_CLASSNAME, &wndcls)))
    {
        // otherwise we need to register a new class
        wndcls.style = CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;
        wndcls.lpfnWndProc = ::DefWindowProc;
        wndcls.cbClsExtra = wndcls.cbWndExtra = 0;
        wndcls.hInstance = hInst;
        wndcls.hIcon = NULL;
        wndcls.hCursor = AfxGetApp()->LoadStandardCursor(IDC_ARROW);
        wndcls.hbrBackground = (HBRUSH)(COLOR_3DFACE + 1);
        wndcls.lpszMenuName = NULL;
        wndcls.lpszClassName = IMGDISP_CLASSNAME;

        if (!AfxRegisterClass(&wndcls))
        {
            AfxThrowResourceException();
            return FALSE;
        }
    }

    return TRUE;
}

BEGIN_MESSAGE_MAP(CImgDisp, CWnd)
    ON_WM_PAINT()
    ON_WM_ERASEBKGND()
    ON_WM_SIZE()
    ON_WM_LBUTTONDOWN()
    ON_WM_RBUTTONDOWN()
    ON_WM_MOUSEMOVE()
    ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

void CImgDisp::InitImgBuffer()
{
    for (int iImageIndex = 0; iImageIndex < MAX_IMAGES_DISPLAYABLE; iImageIndex++)
    {
        m_pImgBuffer[iImageIndex] = nullptr;
    }

    m_rImgRct.SetRectEmpty();
}

void CImgDisp::ResizeMainBitmap()
{
    if (m_MainDC)
    {
        DeleteObject(m_hBmp);

        m_Bmpi.bmiHeader.biWidth = MAIN_W;
        m_Bmpi.bmiHeader.biHeight = MAIN_H;
        m_Bmpi.bmiHeader.biPlanes = 1;
        m_Bmpi.bmiHeader.biBitCount = 32;
        m_Bmpi.bmiHeader.biCompression = BI_RGB;
        m_Bmpi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

        m_hBmp = CreateDIBSection(m_MainDC->GetSafeHdc(), &m_Bmpi, DIB_RGB_COLORS, (void**)&m_pBmpData, NULL, 0);

        m_MainDC->SelectObject(m_hBmp);
    }
}

/*
void CImgDisp::CreateImgBitmap(int nIndex, int nWidth, int nHeight)
{
    BITMAPINFO * currInfo = &pImgBuffer[nIndex]->Bmpi;
    HBITMAP * currBmp = &pImgBuffer[nIndex]->hBmp;

    //pImgBuffer[nIndex]->pBmpData = new uint32_t[nWidth * nHeight];

    currInfo->bmiHeader.biWidth = nWidth;
    currInfo->bmiHeader.biHeight = nHeight;
    currInfo->bmiHeader.biPlanes = 1;
    currInfo->bmiHeader.biBitCount = 32;
    currInfo->bmiHeader.biCompression = BI_RGB;
    currInfo->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

    *currBmp = CreateDIBSection(ImageDC->GetSafeHdc(), currInfo, DIB_RGB_COLORS, (void **)&pImgBuffer[nIndex]->pBmpData, NULL, 0);
}
*/

void CImgDisp::ResetImageCompositionLayout()
{
    memset(m_bUsed, 0, sizeof(uint8_t) * MAX_IMAGES_DISPLAYABLE);
    m_rImgRct.SetRectEmpty();

    m_nXOffsTop = 0;
    m_nYOffsTop = 0;
    m_nImgRctW = 0;
    m_nImgRctH = 0;

    // reset offsets
    for (uint32_t iPos = 0; iPos < ARRAYSIZE(m_ptOffs); iPos++)
    {
        m_ptOffs[iPos].x = m_ptOffs[iPos].y = 0;
    }
}

void CImgDisp::ResetForNewImage()
{
    m_rImgRct.right += abs(m_rImgRct.left);
    m_rImgRct.left = 0;

    m_rImgRct.bottom += abs(m_rImgRct.top);
    m_rImgRct.top = 0;

    m_nImgRctW = m_rImgRct.Width();
    m_nImgRctH = m_rImgRct.Height();

    ModifySrcRect();

    ResizeMainBitmap();
}

void CImgDisp::ResetCustomSpriteOverride(int nPosition)
{
    if (m_ppSpriteOverrideTexture[nPosition])
    {
        if (m_pImgBuffer[nPosition])
        {
            m_pImgBuffer[nPosition]->pImgData = nullptr;
            m_pImgBuffer[nPosition]->uImgH = m_pImgBuffer[nPosition]->uImgW = 0;
        }
    }
    safe_delete_array(m_ppSpriteOverrideTexture[nPosition]);
}

void CImgDisp::FlushCustomSpriteOverrides()
{
    for (int iPos = 0; iPos < MAX_IMAGES_DISPLAYABLE; iPos++)
    {
        ResetCustomSpriteOverride(iPos);
        m_nTextureOverrideW[iPos] = m_nTextureOverrideH[iPos] = 0;
    }
}

void CImgDisp::FlushUnused()
{
    if (m_nImgAmt)
    {
        for (int iImageIndex = 0; iImageIndex < MAX_IMAGES_DISPLAYABLE; iImageIndex++)
        {
            if (!m_bUsed[iImageIndex])
            {
                FlushImageNode(iImageIndex);
            }
        }

        ResetForNewImage();
    }

    FlushCustomSpriteOverrides();
}

void CImgDisp::AddImageNode(int nIndex, uint16_t uImgW, uint16_t uImgH, uint8_t* pImgData, COLORREF* pPalette, int uPalSz, int nXOffs, int nYOffs, BlendMode eBlendMode /* = BlendMode::Alpha */)
{
    sImgNode* pNewNode = new sImgNode;

    pNewNode->uImgW = uImgW;
    pNewNode->uImgH = uImgH;
    pNewNode->nXOffs = nXOffs;
    pNewNode->nYOffs = nYOffs;

    pNewNode->pImgData = pImgData;
    pNewNode->pPalette = pPalette;
    pNewNode->uPalSz = uPalSz;

    pNewNode->eBlendMode = eBlendMode;

    if (nIndex >=  MAX_IMAGES_DISPLAYABLE)
    {
        DebugBreak();
        return;
    }

    if (m_pImgBuffer[nIndex])
    {
        FlushImageNode(nIndex);
    }

    m_pImgBuffer[nIndex] = pNewNode;

    //Set used
    m_bUsed[nIndex] = 1;

    // The zero image defines the bounding rect
    int nMaxWidth = uImgW, nMaxHeight = uImgH;

    if (nIndex == 0)
    {
        // If the user custom loads am unexpectedly sized image for layer 0, we do weird things in terms of offset.
        // Without this logic, image 0 is centered, and then further images are drawn within that specific bounding rect.
        // That results in most of their content being shown in the upper right of the composition.
        // We can do a quick pass here to ensure that the bounding rect for 0 is optimized.
        // Note that mismatched image sizes is a bad plan in general, but this should make it slightly less annoying.
        // The logic here isn't perfect, but it at least is a more presentable preview.
        if (m_ppSpriteOverrideTexture[0])
        {
            for (int iLayer = 1; iLayer < MAX_IMAGES_DISPLAYABLE; iLayer++)
            {
                if (m_pImgBuffer[iLayer])
                {
                    nMaxWidth = max(nMaxWidth, m_pImgBuffer[iLayer]->uImgW);
                    nMaxHeight = max(nMaxHeight, m_pImgBuffer[iLayer]->uImgH);
                }
            }
        }

        if ((nMaxWidth != uImgW) || (nMaxHeight != uImgH))
        {
            CString strInfo;
            strInfo.Format(L"ERROR: Paired preview size mismatch!  Image 0 is %u x %u, but there is a larger %u x %u image in the stack!\r\n", uImgW, uImgH, nMaxWidth, nMaxHeight);
            OutputDebugString(strInfo.GetString());
        }

        if (nXOffs < m_rImgRct.left)
        {
            m_rImgRct.left = nXOffs;
            m_nXOffsTop = nXOffs;
        }

        if (nYOffs < m_rImgRct.top)
        {
            m_rImgRct.top = nYOffs;
            m_nYOffsTop = nYOffs;
        }
    }

    if ((nXOffs + nMaxWidth) > m_rImgRct.right)
    {
        m_rImgRct.right = nXOffs + nMaxWidth;
    }

    if ((nYOffs + nMaxHeight) > m_rImgRct.bottom)
    {
        m_rImgRct.bottom = nYOffs + nMaxHeight;
    }

    m_ptOffs[nIndex].x = nXOffs;
    m_ptOffs[nIndex].y = nYOffs;

    //Add image amount
    m_nImgAmt++;
}

void CImgDisp::UpdateImgPalette(int nIndex, COLORREF* pPalette, int nPalSz)
{
    if (m_pImgBuffer[nIndex])
    {
        m_pImgBuffer[nIndex]->pPalette = pPalette;
        m_pImgBuffer[nIndex]->uPalSz = nPalSz;
        m_bUsed[nIndex] = 1;
    }
}

void CImgDisp::FlushImageNode(int nIndex)
{
    if (m_pImgBuffer[nIndex])
    {
        safe_delete(m_pImgBuffer[nIndex]);

        m_nImgAmt--;
    }
}

void CImgDisp::ClearAllImages()
{
    for (int iIndex = 0; iIndex < MAX_IMAGES_DISPLAYABLE; iIndex++)
    {
        FlushImageNode(iIndex);
    }
}

BOOL CImgDisp::LoadBGBmp(LPCWSTR pszBmpLoc)
{
    CImage backgroundImage;

    if (pszBmpLoc)
    {
        m_strBackgroundLoc = pszBmpLoc;
    }

    if (SUCCEEDED(backgroundImage.Load(m_strBackgroundLoc)))
    {
        m_hBGBitmap = backgroundImage.Detach();
            
        m_fIsBGAvail = TRUE;

        m_BGBitmap.DeleteObject();
        m_BGBitmap.Attach(m_hBGBitmap);

        m_BGBrush.DeleteObject();
        m_BGBrush.CreatePatternBrush(&m_BGBitmap);

        //Get the bitmap dimensions
        BITMAP bmp = {};

        if (GetObject(m_hBGBitmap, sizeof(BITMAP), (BITMAP*)&bmp))
        {
            m_nBGBmpW = bmp.bmWidth;
            m_nBGBmpH = bmp.bmHeight;
        }

        return TRUE;
    }
    else
    {
        m_fIsBGAvail = FALSE;
        return FALSE;
    }
}

BOOL CImgDisp::CanForceBGBitmapAvailable()
{
    if (!m_fIsBGAvail && (m_strBackgroundLoc.GetLength() > 8))
    {
        LoadBGBmp(nullptr);
    }

    return m_fIsBGAvail; 
};

void CImgDisp::InitDC(CPaintDC& PaintDC)
{
    if (m_fNeedFirstInit)
    {
        m_MainDC = new CDC;
        m_ImageDC = new CDC;

        m_MainDC->CreateCompatibleDC(&PaintDC);
        m_ImageDC->CreateCompatibleDC(&PaintDC);

        m_fNeedFirstInit = FALSE;

        ModifyClRect();
        ModifySrcRect();

        //ResizeMainBitmap(rCtrlRct.Width(), rCtrlRct.Height());
        m_MainDC->SelectObject(m_hBmp); //OnSize should be called first

        UpdateCtrl(FALSE);
    }
}

void CImgDisp::ModifySrcRect()
{
    int nCtrlW = m_rCtrlRct.right;
    int nCtrlH = m_rCtrlRct.bottom;

    if (nCtrlW > m_nImgRctW)
    {
        MAIN_W = nCtrlW * 2 - m_nImgRctW;
    }
    else
    {
        MAIN_W = m_nImgRctW;
    }

    if (nCtrlH > m_nImgRctH)
    {
        MAIN_H = nCtrlH * 2 - m_nImgRctH;
    }
    else
    {
        MAIN_H = m_nImgRctH;
    }

    m_rSrcRct.top = (MAIN_H / 2) - static_cast<int>(static_cast<double>(nCtrlH / 2) / m_fpZoom);
    m_rSrcRct.left = (MAIN_W / 2) - static_cast<int>(static_cast<double>(nCtrlW / 2) / m_fpZoom);
    m_rSrcRct.bottom = m_rSrcRct.top + static_cast<int>(static_cast<double>(nCtrlH) / m_fpZoom);
    m_rSrcRct.right = m_rSrcRct.left + static_cast<int>(static_cast<double>(nCtrlW) / m_fpZoom);

    m_rImgRct.left = -(m_nImgRctW / 2) + (MAIN_W / 2);
    m_rImgRct.right = (m_nImgRctW / 2) + (MAIN_W / 2);
    m_rImgRct.top = -(m_nImgRctH / 2) + (MAIN_H / 2);
    m_rImgRct.bottom = (m_nImgRctH / 2) + (MAIN_H / 2);
}

void CImgDisp::ModifyClRect()
{
    GetClientRect(&m_rCtrlRct);
}

void CImgDisp::DrawMainBG()
{
    if (m_MainDC)
    {
        if (m_fShouldTileBGBmp && !m_fShouldUseBGCol && CanForceBGBitmapAvailable())
        {
            m_MainDC->FillRect(CRect(0, 0, MAIN_W, MAIN_H), &m_BGBrush);
        }
        else
        {
            m_MainDC->FillSolidRect(CRect(0, 0, MAIN_W, MAIN_H), m_crBGCol);
        }

        if (!m_fShouldTileBGBmp && !m_fShouldUseBGCol && CanForceBGBitmapAvailable())
        {
            m_ImageDC->SelectObject(&m_BGBitmap);

            m_MainDC->BitBlt(
                (MAIN_W / 2) - (m_nBGBmpW / 2) + m_nBGXOffs,
                (MAIN_H / 2) - (m_nBGBmpH / 2) + m_nBGYOffs,
                m_nBGBmpW, m_nBGBmpH,
                m_ImageDC,
                0, 0, SRCCOPY);
        }
    }
}

void CImgDisp::UpdateCtrl(BOOL fRedraw /* = TRUE */, int indexOfImageUsingBlinkPalette /* = 0 */)
{
    //Do nothing on a hidden window
    if (!IsWindowVisible())
    {
        return;
    }

    //Clear the background
    DrawMainBG();

    //Reset the BLT rect
    //memset(&rBlt, 0, sizof(RECT));

    const int nBlinkImageIndex = (indexOfImageUsingBlinkPalette ? (indexOfImageUsingBlinkPalette & 0x00FF) : MAX_IMAGES_DISPLAYABLE);

    for (int nImgCtr = 0; nImgCtr < MAX_IMAGES_DISPLAYABLE; nImgCtr++)
    {
        if (m_pImgBuffer[nImgCtr] && m_pImgBuffer[nImgCtr]->pImgData)
        {
            //Draw the img
            CustomBlt(
                nImgCtr,
                m_ptOffs[nImgCtr].x + m_rImgRct.left + abs(m_nXOffsTop),
                m_ptOffs[nImgCtr].y + m_rImgRct.top + abs(m_nYOffsTop),
                (nBlinkImageIndex == nImgCtr)
            );
        }
    }

    //Repaint
    if (fRedraw)
    {
        Redraw();
    }
}

void CImgDisp::Redraw()
{
    if (m_MainDC)
    {
        CClientDC* cdc = new CClientDC(this);

        cdc->StretchBlt(
            m_rCtrlRct.left,
            m_rCtrlRct.top,
            m_rCtrlRct.right,
            m_rCtrlRct.bottom,
            m_MainDC,
            m_rSrcRct.left,
            m_rSrcRct.top,
            m_rSrcRct.right - m_rSrcRct.left,
            m_rSrcRct.bottom - m_rSrcRct.top,
            SRCCOPY);

        safe_delete(cdc);
    }
}

void CImgDisp::OnPaint()
{
    CPaintDC *PaintDC = new CPaintDC(this);

    InitDC(*PaintDC);

    Redraw();

    CWnd::OnPaint();

    safe_delete(PaintDC);
}

BOOL CImgDisp::OnEraseBkgnd(CDC* pDC)
{
    return FALSE;
}

void CImgDisp::OnSize(UINT nType, int cx, int cy)
{
    CWnd::OnSize(nType, cx, cy);

    ModifyClRect();
    ModifySrcRect();

    //Handle the bitmap resize
    ResizeMainBitmap();

    if (IsWindowVisible())
    {
        UpdateCtrl();
        //Redraw();
    }
}

void CImgDisp::AssignBackupPalette(sPalDef* pBackupPaletteDef)
{
    m_pBackupPaletteDef = pBackupPaletteDef;
    m_pBackupBlinkPalette = nullptr;
}

bool CImgDisp::DoWeHaveImageForIndex(int nIndex)
{
    return ((m_pImgBuffer[nIndex] && m_pImgBuffer[nIndex]->pImgData) ||
            m_ppSpriteOverrideTexture[nIndex]);
}

bool CImgDisp::_GetUserOptionsForTextureOverride(int nFileSize, int& nSuggestedImageWidth, int& nSuggestedImageHeight, UINT& nPositionToLoadTo, SpriteImportDirection& spriteDirection, SpriteImportCompositionStyle *pCompositionStyle)
{
    CString strOutput;
    std::vector<int> rgWidthOptions;
    std::vector<CString> rgstrHWOptions;
    // Note that this implementation only checks for solo preferred Width values not for solo preferred Height values
    std::pair<int, int> indexSuggestion = { 0, nSuggestedImageWidth };
    // Arbitrary assumption that user raws will not be taller than 4000px tall
    const int nUnreasonablyTallImage = 4096;
    // Arbitrary assumption that image size should be less than 25px wide.
    // We'll increment this such that we ensure that the image is not "nUnreasonablyTallImage" tall.
    int nMinimumAcceptableWidth = 25;
    const int nSizeToCheck = static_cast<int>(ceil(nFileSize / static_cast<float>(nMinimumAcceptableWidth)));
    bool fHaveViableDimensions = false;

    while ((nFileSize / nMinimumAcceptableWidth) > nUnreasonablyTallImage)
    {
        nMinimumAcceptableWidth++;
    }

    for (int nPossibleWidth = nMinimumAcceptableWidth, nFoundMatches = 0; nPossibleWidth < nSizeToCheck; nPossibleWidth++)
    {
        if (nFileSize % nPossibleWidth == 0)
        {
            strOutput.Format(L"%u x %u", nPossibleWidth, nFileSize / nPossibleWidth);

            rgWidthOptions.push_back(nPossibleWidth);
            rgstrHWOptions.push_back(strOutput);

            if (nSuggestedImageWidth)
            {
                if (abs(nSuggestedImageWidth - nPossibleWidth) < indexSuggestion.second)
                {
                    indexSuggestion.first = nFoundMatches;
                    indexSuggestion.second = abs(nSuggestedImageWidth - nPossibleWidth);
                }
            }

            nFoundMatches++;
        }
    }

    if (rgstrHWOptions.size())
    {
        std::vector<std::pair<int, int>> rgExistingDimensions;

        for (int iImgLayer = 0; iImgLayer < m_nImgAmt; iImgLayer++)
        {
            if (m_ppSpriteOverrideTexture[iImgLayer])
            {
                rgExistingDimensions.push_back({ m_nTextureOverrideW[iImgLayer], m_nTextureOverrideH[iImgLayer] });
            }
            else if (m_pImgBuffer[iImgLayer])
            {
                rgExistingDimensions.push_back({ m_pImgBuffer[iImgLayer]->uImgW, m_pImgBuffer[iImgLayer]->uImgH });
            }
            else
            {
                rgExistingDimensions.push_back({ 0, 0 });
            }
        }

        CPreviewImportDialog AdjustmentDialog(rgstrHWOptions, indexSuggestion.first, nPositionToLoadTo, spriteDirection, rgExistingDimensions, pCompositionStyle);

        if (AdjustmentDialog.DoModal() == IDOK)
        {
            nSuggestedImageWidth = rgWidthOptions.at(AdjustmentDialog.m_nCurrentSel_HW);
            nSuggestedImageHeight = nFileSize / rgWidthOptions.at(AdjustmentDialog.m_nCurrentSel_HW);
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

uint8_t* CImgDisp::_LoadTextureFromRAWSprite(wchar_t* pszTextureLocation, UINT& nPositionToLoadTo, int& nSuggestedHeight, int& nSuggestedWidth, SpriteImportDirection& direction, SpriteImportCompositionStyle& compositionStyle, bool fPreferQuietMode /* = true */)
{
    // We get to have a lot of bonus logic here since RAW files don't contain height/width information...
    CFile TextureFile;
    bool fHaveViableDimensions = false;
    uint8_t* pNewOverrideTexture = nullptr;

    if (TextureFile.Open(pszTextureLocation, CFile::modeRead | CFile::typeBinary))
    {
        const int nIncomingFileSize = static_cast<int>(TextureFile.GetLength());
        const int cbMinimumReasonableFileSize = 250;
        nSuggestedWidth = 0;
        nSuggestedHeight = 0;

        // Filename of form: MvC2_D-offset-2230419-W-60-H-98
        _wcslwr(pszTextureLocation);
        wchar_t* pszDataW = wcsstr(pszTextureLocation, L"-w-");
        wchar_t* pszDataH = wcsstr(pszTextureLocation, L"-h-");
        wchar_t* pszCompType = wcsstr(pszTextureLocation, L"-compf-");
        wchar_t* pszTermination = wcsstr(pszTextureLocation, L".data");

        enum class RAWCompressionChoice
        {
            NoCompression,
            RLE,
            BitMaskRLE,
        };

        RAWCompressionChoice eCompType = RAWCompressionChoice::NoCompression;

        if (pszTermination == nullptr)
        {
            pszTermination = wcsstr(pszTextureLocation, L".raw");
        }

        bool fIsDoubleSizeGIMPRAW = false;
        int nSizeIfThisIsRAW = 0;

        if (pszTermination != nullptr)
        {
            uint32_t nScannedH = 0, nScannedW = 0;

            pszTermination[0] = 0;

            if (pszDataH)
            {
                pszDataH[0] = 0;
                pszDataH += ARRAYSIZE(L"H-");
            }

            if (pszDataW)
            {
                pszDataW[0] = 0;
                pszDataW += ARRAYSIZE(L"W-");
            }

            if (pszDataH && _stscanf_s(pszDataH, L"%u", &nScannedH))
            {
                nSuggestedHeight = static_cast<uint16_t>(nScannedH);
            }

            if (pszDataW && _stscanf_s(pszDataW, L"%u", &nScannedW))
            {
                nSuggestedWidth = static_cast<uint16_t>(nScannedW);
            }

            nSizeIfThisIsRAW = nSuggestedWidth * nSuggestedHeight;

            if (pszCompType)
            {
                uint32_t nCompType = 0;
                pszCompType[0] = 0;
                pszCompType += ARRAYSIZE(L"compf-");

                if (_stscanf_s(pszCompType, L"%u", &nCompType))
                {
                    switch (nCompType)
                    {
                    default:
                        eCompType = RAWCompressionChoice::NoCompression;
                        break;
                    case 1:
                        OutputDebugString(L"RAW is marked as being RLE compressed.\n");
                        eCompType = RAWCompressionChoice::RLE;
                        break;
                    case 2:
                        OutputDebugString(L"RAW is marked as being BitMask RLE compressed.\n");
                        eCompType = RAWCompressionChoice::BitMaskRLE;
                        break;
                    }
                }
            }

            if ((eCompType == RAWCompressionChoice::NoCompression) &&
                (nSuggestedWidth < 10000) &&
                (nSuggestedHeight < 10000))
            {
                // Validate that the RAW dimensions are viable
                if (nSizeIfThisIsRAW == nIncomingFileSize)
                {
                    // Perfection!
                    fHaveViableDimensions = true;
                }
                else if ((3 * nSizeIfThisIsRAW) == nIncomingFileSize)
                {
                    // This is an RGB RAW...
                    fHaveViableDimensions = true;
                    MessageBox(L"This RAW is not using indexed color.  Please recreate it using indexed colors.  This will not look right.", GetHost()->GetAppName(), MB_ICONERROR);
                }
                else if ((2 * nSizeIfThisIsRAW) == nIncomingFileSize)
                {
                    // I think it's GIMP that doubles the RAW for no apparent reason
                    fIsDoubleSizeGIMPRAW = true;
                    fHaveViableDimensions = true;
                    GetHost()->GetPalModDlg()->SetStatusText(IDS_RAW_EXTRADATA);
                }
                else if ((nSizeIfThisIsRAW != nIncomingFileSize) && (nIncomingFileSize > cbMinimumReasonableFileSize))
                {
                    CString strHelpText = L"RAW texture files do not contain header information, so we don't know what height or width to use.  To work around this, please name your filenames in the form:\r\n        WHATEVER-W-width-H-height.raw";
                    strHelpText.Append(L"\r\n\r\nWe'll present you some H/W combos that might work if this is a normal RAW file, but please update your filename.");

                    SHMessageBoxCheck(g_appHWnd, strHelpText, GetHost()->GetAppName(), MB_OK | MB_ICONERROR, IDOK, L"{468EB2CC-58A2-48a1-B4D0-7FAFE1FDD9B7}");

                    // Try to use the override H/W if available, but if not see if we can reuse the current displays dimensions.
                    if ((nSuggestedWidth == 0) && m_pImgBuffer[0])
                    {
                        nSuggestedWidth = m_pImgBuffer[0]->uImgW;
                    }

                    if ((nSuggestedHeight == 0) && m_pImgBuffer[0])
                    {
                        nSuggestedHeight = m_pImgBuffer[0]->uImgH;
                    }

                }

                if (!fPreferQuietMode || !fHaveViableDimensions)
                {
                    fHaveViableDimensions = _GetUserOptionsForTextureOverride(nIncomingFileSize, nSuggestedWidth, nSuggestedHeight, nPositionToLoadTo, direction, &compositionStyle);
                }
            }
        }

        if (eCompType != RAWCompressionChoice::NoCompression)
        {
            std::vector<uint8_t*> pNewData;
            pNewData.resize(nIncomingFileSize);

            TextureFile.Read(pNewData.data(), nIncomingFileSize);

            uint8_t* pNewOverrideTexture = nullptr;

            switch (eCompType)
            {
                case RAWCompressionChoice::RLE:
                {
                    pNewOverrideTexture = RLEData::RLEDecodeImg(
                        reinterpret_cast<uint8_t*>(&pNewData[0]),
                        nSizeIfThisIsRAW,
                        nSuggestedWidth,
                        nSuggestedHeight
                    );
                    break;
                }
                case RAWCompressionChoice::BitMaskRLE:
                {
                    pNewOverrideTexture = RLEData::BitMaskRLEDecodeImg(
                        reinterpret_cast<uint8_t*>(&pNewData[0]),
                        nSizeIfThisIsRAW,
                        nSuggestedWidth,
                        nSuggestedHeight
                    );
                    break;
                }
            }

            if (pNewOverrideTexture)
            {
                GetHost()->GetPalModDlg()->SetStatusText(L"Loaded RLE-compressed RAW as a custom preview.");
            }
        }
        else if (fHaveViableDimensions)
        {
            CString strInfo;
            strInfo.Format(L"CImgDisp::LoadExternalSprite texture file is: %u x %u\n", nSuggestedWidth, nSuggestedHeight);
            OutputDebugString(strInfo);

            TextureFile.SeekToBegin();

            // Note: at one point (July 4, 2024) I wrote alternate loading code for GIMP RAWs.
            // That change loaded flipped RAWs topdown (?) and did a 2 byte stride across the file.
            // Both those changes seem non-optimum.  Reverting the change gets us loading the 
            // test files I currently have correctly.  I am solidly guessing that we had a different 
            // sample file with different behavior, but can't find it in the archives right now.
            // If we do need to revisit this, make sure to test both with that new mystery file that 
            // lead to this change as well as the GIMP 2x sample texture I've now put in the archive.

            // Read the data first
            pNewOverrideTexture = new uint8_t[nIncomingFileSize];

            if (direction == SpriteImportDirection::TopDown)
            {
                TextureFile.Read(pNewOverrideTexture, nIncomingFileSize);
            }
            else if (direction == SpriteImportDirection::UpsideDown)
            {
                int nCurrentFilePosition = nIncomingFileSize;

                if (fIsDoubleSizeGIMPRAW)
                {
                    nCurrentFilePosition /= 2;
                }

                // Skip one line back since we're upside-down and walking backwards
                nCurrentFilePosition -= nSuggestedWidth;

                // We need to flip this line by line
                for (int nLinePosition = 0; nLinePosition < nSuggestedHeight; nLinePosition++)
                {
                    TextureFile.Read(&pNewOverrideTexture[nCurrentFilePosition], nSuggestedWidth);
                    nCurrentFilePosition -= nSuggestedWidth;
                }
            }
            else // if (direction == SpriteImportDirection::FlipHorizontal)
            {
                for (int iLine = 0; iLine < nSuggestedHeight; iLine++)
                {
                    for (int iLinePos = nSuggestedWidth; iLinePos > 0; iLinePos--)
                    {
                        TextureFile.Read(&pNewOverrideTexture[(iLine * nSuggestedWidth) + (iLinePos - 1)], 1);
                    }
                }
            }
        }
    }

    return pNewOverrideTexture;
}

void CImgDisp::_CompositeTexture(uint8_t* pNewOverrideTexture, UINT nPositionToLoadTo, int nSuggestedHeight, int nSuggestedWidth, SpriteImportDirection direction, SpriteImportCompositionStyle compositionStyle)
{
    const int nOldHeight = m_nTextureOverrideH[nPositionToLoadTo];
    const int nOldWidth = m_nTextureOverrideW[nPositionToLoadTo];
    uint8_t* pOldOverrideTexture = m_ppSpriteOverrideTexture[nPositionToLoadTo];
    m_ppSpriteOverrideTexture[nPositionToLoadTo] = nullptr;
    const int nIncomingFileSize = nSuggestedHeight * nSuggestedWidth;
    int nCompositedFileSize;

    if (compositionStyle == SpriteImportCompositionStyle::Replace)
    {
        ResetCustomSpriteOverride(nPositionToLoadTo);

        m_nTextureOverrideW[nPositionToLoadTo] = nSuggestedWidth;
        m_nTextureOverrideH[nPositionToLoadTo] = nSuggestedHeight;
        nCompositedFileSize = nIncomingFileSize;
    }
    else // Merge options
    {
        if (pOldOverrideTexture)
        {
            m_nTextureOverrideW[nPositionToLoadTo] = max(nSuggestedWidth, m_nTextureOverrideW[nPositionToLoadTo]);
            m_nTextureOverrideH[nPositionToLoadTo] = max(nSuggestedHeight, m_nTextureOverrideH[nPositionToLoadTo]);
        }
        else
        {
            m_nTextureOverrideW[nPositionToLoadTo] = max(nSuggestedWidth, m_pImgBuffer[nPositionToLoadTo]->uImgW);
            m_nTextureOverrideH[nPositionToLoadTo] = max(nSuggestedHeight, m_pImgBuffer[nPositionToLoadTo]->uImgH);
        }

        nCompositedFileSize = m_nTextureOverrideW[nPositionToLoadTo] * m_nTextureOverrideH[nPositionToLoadTo];
    }

    CString strInfo;
    strInfo.Format(L"CImgDisp::CompositeTexture: texture file is: %u x %u\n", m_nTextureOverrideW[nPositionToLoadTo], m_nTextureOverrideH[nPositionToLoadTo]);
    OutputDebugString(strInfo);

    // Now composit the data
    if (compositionStyle == SpriteImportCompositionStyle::Replace)
    {
        m_ppSpriteOverrideTexture[nPositionToLoadTo] = pNewOverrideTexture;
    }
    else // if ((compositionStyle == SpriteImportCompositionStyle::MergeAbove) || (compositionStyle == SpriteImportCompositionStyle::MergeBelow))
    {
        if (pOldOverrideTexture)
        {
            const int nMergedFileSize = m_nTextureOverrideH[nPositionToLoadTo] * m_nTextureOverrideW[nPositionToLoadTo];
            m_ppSpriteOverrideTexture[nPositionToLoadTo] = new uint8_t[nMergedFileSize];

            strInfo.Format(L"\tMerging Above: %u x %u source image with the existing custom %u x %u image, for a %u x %u composited image.\r\n", nSuggestedHeight, nSuggestedWidth, nOldHeight, nOldWidth, m_nTextureOverrideH[nPositionToLoadTo], m_nTextureOverrideW[nPositionToLoadTo]);
            OutputDebugString(strInfo.GetString());

            for (int iCurrentLine = 0; (iCurrentLine * m_nTextureOverrideW[nPositionToLoadTo]) < nMergedFileSize; iCurrentLine++)
            {
                for (int iCurrentLinePos = 0; iCurrentLinePos < m_nTextureOverrideW[nPositionToLoadTo]; iCurrentLinePos++)
                {
                    if ((iCurrentLine >= nOldHeight) || (iCurrentLinePos >= nOldWidth))
                    {
                        // We only have the incoming sprite for this pixel
                        m_ppSpriteOverrideTexture[nPositionToLoadTo][(iCurrentLine * m_nTextureOverrideW[nPositionToLoadTo]) + iCurrentLinePos] = pNewOverrideTexture[(iCurrentLine * nSuggestedWidth) + iCurrentLinePos];
                    }
                    else if ((iCurrentLine >= nSuggestedHeight) || (iCurrentLinePos >= nSuggestedWidth))
                    {
                        // We only have the old sprite for this pixel
                        m_ppSpriteOverrideTexture[nPositionToLoadTo][(iCurrentLine * m_nTextureOverrideW[nPositionToLoadTo]) + iCurrentLinePos] = pOldOverrideTexture[(iCurrentLine * nOldWidth) + iCurrentLinePos];
                    }
                    else
                    {
                        // We have both!
                        if (compositionStyle == SpriteImportCompositionStyle::MergeAbove)
                        {
                            m_ppSpriteOverrideTexture[nPositionToLoadTo][(iCurrentLine * m_nTextureOverrideW[nPositionToLoadTo]) + iCurrentLinePos] = pNewOverrideTexture[(iCurrentLine * nSuggestedWidth) + iCurrentLinePos] ? pNewOverrideTexture[(iCurrentLine * nSuggestedWidth) + iCurrentLinePos] : pOldOverrideTexture[(iCurrentLine * nOldWidth) + iCurrentLinePos];
                        }
                        else
                        {
                            m_ppSpriteOverrideTexture[nPositionToLoadTo][(iCurrentLine * m_nTextureOverrideW[nPositionToLoadTo]) + iCurrentLinePos] = pOldOverrideTexture[(iCurrentLine * nOldWidth) + iCurrentLinePos] ? pOldOverrideTexture[(iCurrentLine * nOldWidth) + iCurrentLinePos] : pNewOverrideTexture[(iCurrentLine * nSuggestedWidth) + iCurrentLinePos];
                        }
                    }
                }
            }

            safe_delete_array(pNewOverrideTexture);
        }
        else if (m_pImgBuffer[nPositionToLoadTo])
        {
            const int nMergedFileSize = m_nTextureOverrideH[nPositionToLoadTo] * m_nTextureOverrideW[nPositionToLoadTo];
            m_ppSpriteOverrideTexture[nPositionToLoadTo] = new uint8_t[nMergedFileSize];

            strInfo.Format(L"\tMerging Above: %u x %u source image with the existing internal %u x %u image, for a %u %u composited image.\r\n", nSuggestedHeight, nSuggestedWidth, m_pImgBuffer[nPositionToLoadTo]->uImgH, m_pImgBuffer[nPositionToLoadTo]->uImgW, m_nTextureOverrideH[nPositionToLoadTo], m_nTextureOverrideW[nPositionToLoadTo]);
            OutputDebugString(strInfo.GetString());

            for (int iCurrentLine = 0; (iCurrentLine * m_nTextureOverrideW[nPositionToLoadTo]) < nMergedFileSize; iCurrentLine++)
            {
                for (int iCurrentLinePos = 0; iCurrentLinePos < m_nTextureOverrideW[nPositionToLoadTo]; iCurrentLinePos++)
                {
                    if ((iCurrentLine >= m_pImgBuffer[nPositionToLoadTo]->uImgH) || (iCurrentLinePos >= m_pImgBuffer[nPositionToLoadTo]->uImgW))
                    {
                        // We only have the incoming sprite for this pixel
                        m_ppSpriteOverrideTexture[nPositionToLoadTo][(iCurrentLine * m_nTextureOverrideW[nPositionToLoadTo]) + iCurrentLinePos] = pNewOverrideTexture[(iCurrentLine * nSuggestedWidth) + iCurrentLinePos];
                    }
                    else if ((iCurrentLine >= nSuggestedHeight) || (iCurrentLinePos >= nSuggestedWidth))
                    {
                        // We only have the old sprite for this pixel
                        m_ppSpriteOverrideTexture[nPositionToLoadTo][(iCurrentLine * m_nTextureOverrideW[nPositionToLoadTo]) + iCurrentLinePos] = m_pImgBuffer[nPositionToLoadTo]->pImgData[(iCurrentLine * m_pImgBuffer[nPositionToLoadTo]->uImgW) + iCurrentLinePos];
                    }
                    else
                    {
                        // We have both!
                        if (compositionStyle == SpriteImportCompositionStyle::MergeAbove)
                        {
                            m_ppSpriteOverrideTexture[nPositionToLoadTo][(iCurrentLine * m_nTextureOverrideW[nPositionToLoadTo]) + iCurrentLinePos] = pNewOverrideTexture[(iCurrentLine * nSuggestedWidth) + iCurrentLinePos] ? pNewOverrideTexture[(iCurrentLine * nSuggestedWidth) + iCurrentLinePos] : m_pImgBuffer[nPositionToLoadTo]->pImgData[(iCurrentLine * m_pImgBuffer[nPositionToLoadTo]->uImgW) + iCurrentLinePos];
                        }
                        else
                        {
                            m_ppSpriteOverrideTexture[nPositionToLoadTo][(iCurrentLine * m_nTextureOverrideW[nPositionToLoadTo]) + iCurrentLinePos] = m_pImgBuffer[nPositionToLoadTo]->pImgData[(iCurrentLine * m_pImgBuffer[nPositionToLoadTo]->uImgW) + iCurrentLinePos] ? m_pImgBuffer[nPositionToLoadTo]->pImgData[(iCurrentLine * m_pImgBuffer[nPositionToLoadTo]->uImgW) + iCurrentLinePos] : pNewOverrideTexture[(iCurrentLine * nSuggestedWidth) + iCurrentLinePos];
                        }
                    }
                }
            }
            safe_delete_array(pNewOverrideTexture);
        }
    }

    safe_delete_array(pOldOverrideTexture);
}

bool CImgDisp::LoadExternalRAWSprite(UINT nPositionToLoadTo, SpriteImportDirection direction, wchar_t* pszTextureLocation, bool fPreferQuietMode /*= false */)
{
    SpriteImportCompositionStyle compositionStyle = SpriteImportCompositionStyle::Replace;
    int nSuggestedHeight = 0, nSuggestedWidth = 0;

    uint8_t* pNewOverrideTexture = _LoadTextureFromRAWSprite(pszTextureLocation, nPositionToLoadTo, nSuggestedHeight, nSuggestedWidth, direction, compositionStyle, fPreferQuietMode);
 
    if (pNewOverrideTexture)
    {
        _CompositeTexture(pNewOverrideTexture, nPositionToLoadTo, nSuggestedHeight, nSuggestedWidth, direction, compositionStyle);

        CString strMsg;
        strMsg.Format(L"Loaded %u x %u RAW as a preview.", nSuggestedWidth, nSuggestedHeight);
        GetHost()->GetPalModDlg()->SetStatusText(strMsg.GetString());

        _UpdatePreviewForExternalSprite(&nPositionToLoadTo);

        return true;
    }
    else
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_TEXTURE_LOAD))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        return false;
    }
}

void CImgDisp::_FlipImageDataIfNeeded(SpriteImportDirection direction, uint8_t*& pImageData, int nWidth, int nHeight)
{
    switch (direction)
    {
        default:
        case SpriteImportDirection::TopDown:
            return;
        case SpriteImportDirection::UpsideDown:
        {
            const int nTotalLength = nWidth * nHeight;
            uint8_t* pFlippedBuffer = new uint8_t[nTotalLength];

            // We need to flip this line by line
            int iPos = 0;
            for (int nLinePosition = 0; nLinePosition < nHeight; nLinePosition++)
            {
                int nLineStart = (nTotalLength - ((nLinePosition + 1) * nWidth));

                for (int nColumnPosition = 0; nColumnPosition < nWidth; nColumnPosition++)
                {
                    pFlippedBuffer[iPos++] = pImageData[nLineStart++];
                }
            }

            safe_delete_array(pImageData);
            pImageData = pFlippedBuffer;
            return;
        }
        case SpriteImportDirection::FlipHorizontal:
        {
            const int nTotalLength = nWidth * nHeight;
            uint8_t* pFlippedBuffer = new uint8_t[nTotalLength];

            for (int iLine = 0; iLine < nHeight; iLine++)
            {
                for (int iLinePos = nWidth; iLinePos > 0; iLinePos--)
                {
                    pFlippedBuffer[(iLine * nWidth) + (iLinePos - 1)] = pImageData[(iLine * nWidth) + (nWidth - iLinePos)];
                }
            }

            safe_delete_array(pImageData);
            pImageData = pFlippedBuffer;
            return;
        }
    }
}

void CImgDisp::_ImportAndSplitSpriteComposition(SpriteImportDirection direction, UINT* pnPositionToLoadTo, unsigned char* pImageData, unsigned width, unsigned height, size_t nImagePalSize)
{
    // So this is an interesting situation.
    // Incoming we have a palettized image that the user wants to use as a custom preview.
    // However we know that that image can be comprised of multiple sprites representing multiple palette sets.
    // Since the color table is monolithic, we don't know via that if there were multiple sprites used to build the image.
    // BUT -- we can make some good faith guesses based upon the alignment of the current palette and the
    // palette that is in use in the incoming preview.
    // So if we consider an incoming Wolverine preview, that will be palette size 0x20.  We can use simple 
    // math to split out all references to 0x00-0x10 and 0x11-0x20, functionally decomposing it.
    // For someone with a 0x10 palette length, we can just excise overflowing references: that otherwise would be garbage data.
    // For someone with a 0x20 palette, we can use each "layer" of the preview as its own preview.
    // For someone with a 0x40 palette length, we can not split.

    // Get the total palette size so we can handle correctly
    size_t nTotalPalSize = 0;
    for (int nStartPalette = 0; nStartPalette < MAX_IMAGES_DISPLAYABLE; nStartPalette++)
    {
        if (m_pImgBuffer[nStartPalette])
        {
            nTotalPalSize += m_pImgBuffer[nStartPalette]->uPalSz;
        }
    }

    UINT nLayerToStartWith = pnPositionToLoadTo ? *pnPositionToLoadTo : 0;

    const size_t nDataLen = static_cast<size_t>(width) * static_cast<size_t>(height);

    if ((nTotalPalSize > 0xff) ||
        ((m_nImgAmt == 1) && (nTotalPalSize >= nImagePalSize)))
    {
        // This handles
        // * maximum color table size: at this point we know that the incoming image could not encompass 
        //   the entire sprite set for this composition.  as such, the palette here should be left alone
        // * this is a single preview and the palette sizes match or at least don't use overflowing references.  Don't touch.
        ResetCustomSpriteOverride(nLayerToStartWith);
        m_ppSpriteOverrideTexture[nLayerToStartWith] = new uint8_t[nDataLen];

        for (size_t iPos = 0; iPos < nDataLen; iPos++)
        {
            m_ppSpriteOverrideTexture[nLayerToStartWith][iPos] = pImageData[iPos];
        }

        m_nTextureOverrideW[nLayerToStartWith] = width;
        m_nTextureOverrideH[nLayerToStartWith] = height;

        _FlipImageDataIfNeeded(direction, m_ppSpriteOverrideTexture[nLayerToStartWith], m_nTextureOverrideW[nLayerToStartWith], m_nTextureOverrideH[nLayerToStartWith]);
    }
    else
    {
        // This handles:
        //   * single preview with an incoming palette that overflows: cut out overflow references
        //   * multi-preview composition and the palettes match: cut the previews apart
        //   * direct assignment to a particular position: prune extra and only load for that position
        for (int nPos = nLayerToStartWith; nPos < m_nImgAmt; nPos++)
        {
            ResetCustomSpriteOverride(nPos);
            m_ppSpriteOverrideTexture[nPos] = new uint8_t[nDataLen];

            if (pnPositionToLoadTo)
            {
                break;
            }
        }

        unsigned char nCurrentPalStart = 0;
        for (int nPos = 0; nPos < m_nImgAmt; nPos++)
        {
            unsigned char nCurrentPalEnd = min(0xff, nCurrentPalStart + m_pImgBuffer[nPos]->uPalSz);

            if (nPos < static_cast<int>(nLayerToStartWith))
            {
                // we just wanted the palette math
                continue;
            }

            for (size_t iPos = 0; iPos < nDataLen; iPos++)
            {
                unsigned char nAdjustedIndex = pImageData[iPos];

                if ((nAdjustedIndex <= nCurrentPalStart) ||
                    (nAdjustedIndex >= nCurrentPalEnd))
                {
                    nAdjustedIndex = 0;
                }
                else
                {
                    nAdjustedIndex -= nCurrentPalStart;
                }

                m_ppSpriteOverrideTexture[nPos][iPos] = nAdjustedIndex;
            }

            nCurrentPalStart = nCurrentPalEnd;

            m_nTextureOverrideW[nPos] = width;
            m_nTextureOverrideH[nPos] = height;

            _FlipImageDataIfNeeded(direction, m_ppSpriteOverrideTexture[nPos], m_nTextureOverrideW[nPos], m_nTextureOverrideH[nPos]);

            if (pnPositionToLoadTo)
            {
                break;
            }
        }
    }
}

void CImgDisp::_ResizeAndBlankCustomPreviews(UINT* pnPositionToLoadTo, size_t nNewSize)
{
    for (UINT nLayer = pnPositionToLoadTo ? *pnPositionToLoadTo : 0; nLayer < static_cast<size_t>(m_nImgAmt); nLayer++)
    {
        ResetCustomSpriteOverride(nLayer);
        m_ppSpriteOverrideTexture[nLayer] = new uint8_t[nNewSize];
        ZeroMemory(m_ppSpriteOverrideTexture[nLayer], nNewSize);

        if (pnPositionToLoadTo)
        {
            break;
        }
    }
}

void CImgDisp::_ImportAndSplitRGBSpriteComposition(SpriteImportDirection direction, UINT* pnPositionToLoadTo, unsigned char* pImageData, unsigned width, unsigned height, size_t nImageSize)
{
    // Get the total palette size so we can handle correctly
    size_t nTotalPalSize = 0;

    for (int nStartPalette = 0; nStartPalette < m_nImgAmt; nStartPalette++)
    {
        nTotalPalSize += m_pImgBuffer[nStartPalette]->uPalSz;
    }

    const PALWriteOutputOptions currTransparencyWriteMode = GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency();
    bool fCurrentPaletteIsNotMappingFriendly = false;
    int nCheckColor = 1, nCheckAgainstColor = 2;
    int nStartCheckPalette = 0, nCheckAgainstPalette = 0;
    
    for (nStartCheckPalette = 0; nStartCheckPalette < m_nImgAmt; nStartCheckPalette++)
    {
        for (nCheckColor = 1; nCheckColor < m_pImgBuffer[nStartCheckPalette]->uPalSz; nCheckColor++)
        {
            if ((currTransparencyWriteMode == PALWriteOutputOptions::WRITE_16) &&
                ((nCheckColor % 16) == 0))
            {
                // ignore transparency bytes
                continue;
            }

            const COLORREF clrChecking = m_pImgBuffer[nStartCheckPalette]->pPalette[nCheckColor];
            nCheckAgainstColor = nCheckColor + 1;

            for (nCheckAgainstPalette = nStartCheckPalette; nCheckAgainstPalette < m_nImgAmt; nCheckAgainstPalette++)
            {
                for (; nCheckAgainstColor < m_pImgBuffer[nCheckAgainstPalette]->uPalSz; nCheckAgainstColor++)
                {
                    if (clrChecking == m_pImgBuffer[nCheckAgainstPalette]->pPalette[nCheckAgainstColor])
                    {
                        fCurrentPaletteIsNotMappingFriendly = true;
                        break;
                    }
                }

                if (fCurrentPaletteIsNotMappingFriendly)
                {
                    break;
                }

                nCheckAgainstColor = 1;
            }

            if (fCurrentPaletteIsNotMappingFriendly)
            {
                break;
            }
        }

        if (fCurrentPaletteIsNotMappingFriendly)
        {
            break;
        }
    }

    // allocate max size, even though we may be adjusting this for trim
    const unsigned nDataLen = width * height;

    _ResizeAndBlankCustomPreviews(pnPositionToLoadTo, nDataLen);

    const ColMode currColMode = GetHost()->GetCurrGame()->GetColorMode();
    const bool fGameSuportedByKawaks = ((currColMode == ColMode::COLMODE_RGB444_BE) || (currColMode == ColMode::COLMODE_RGB666_NEOGEO));
    bool fUseWinKawaksShift = fGameSuportedByKawaks && GetPreviewDropWinKawaksFirst();

    const bool fIsARGB = ((static_cast<size_t>(nDataLen) * 4) == nImageSize);
    const bool fIsRGB = ((static_cast<size_t>(nDataLen) * 3) == nImageSize);
    bool fFoundOne = false;
    unsigned nFirstLine = height, nLastLine = 0, nLeftMost = width, nRightMost = 0;
    CString strMsg;

    for (unsigned iPos = 0; iPos < nDataLen; iPos++)
    {
        unsigned char r = 0, g = 0, b = 0, a = 0xff;

        if (fIsARGB)
        {
            r = pImageData[(iPos * 4) + 0];
            g = pImageData[(iPos * 4) + 1];
            b = pImageData[(iPos * 4) + 2];
            a = pImageData[(iPos * 4) + 3];
        }
        else if (fIsRGB)
        {
            r = pImageData[iPos * 3];
            g = pImageData[(iPos * 3) + 1];
            b = pImageData[(iPos * 3) + 2];
        }

        if (fUseWinKawaksShift)
        {
            r = (r >> 4) * 17;
            g = (g >> 4) * 17;
            b = (b >> 4) * 17;
        }

        // filter each color, sadly
        const COLORREF colThisColor = RGB(r, g, b);

        if (a != 0) // ignore background color
        {
            int nCurrentPalette = pnPositionToLoadTo  ? *pnPositionToLoadTo : 0;
            bool fFoundThisColor = false;

            for (; nCurrentPalette < m_nImgAmt; nCurrentPalette++)
            {
                for (uint16_t iPalPos = 1; iPalPos < m_pImgBuffer[nCurrentPalette]->uPalSz; iPalPos++)
                {
                    if ((currTransparencyWriteMode == PALWriteOutputOptions::WRITE_16) &&
                        ((iPalPos % 16) == 0))
                    {
                        // ignore transparency bytes
                        continue;
                    }

                    // filter out alpha for now at least: screenshotting would distort that
                    if ((0xffffff & m_pImgBuffer[nCurrentPalette]->pPalette[iPalPos]) == colThisColor)
                    {
                        const unsigned xPos = (iPos % width);
                        const unsigned yPos = static_cast<unsigned>(floor(static_cast<double>(iPos) / width));

                        nFirstLine = min(nFirstLine, yPos);
                        nLastLine = max(nLastLine, yPos);
                        nLeftMost = min(nLeftMost, xPos);
                        nRightMost = max(nRightMost, xPos);

                        fFoundThisColor = true;
                        fFoundOne = true;
                        m_ppSpriteOverrideTexture[nCurrentPalette][iPos] = static_cast<uint8_t>(iPalPos);

                        break;
                    }
                }

                if (pnPositionToLoadTo || fFoundThisColor)
                {
                    break;
                }
            }
        }

        if (((iPos + 1) == nDataLen) && !fFoundOne && !fUseWinKawaksShift && fGameSuportedByKawaks)
        {
            fUseWinKawaksShift = true;
            iPos = 0;
            _ResizeAndBlankCustomPreviews(pnPositionToLoadTo, nDataLen);
        }
    }

    const unsigned true_width = min(width, 1 + (nRightMost - nLeftMost));
    const unsigned true_height = min(height, 1 + (nLastLine - nFirstLine));
    const unsigned trim_length = true_width * true_height;

    // trim only if we want to (via user setting), if there's actual trimming possible, and if we have a reasonably sized object
    if (GetPreviewDropTrim() && (trim_length != nDataLen) && (trim_length > 16))
    {
        for (signed int nCurrentLayer = pnPositionToLoadTo ? *pnPositionToLoadTo : 0; nCurrentLayer < m_nImgAmt; nCurrentLayer++)
        {
            uint8_t* pTrimmedBuffer = new uint8_t[trim_length];

            unsigned iFilledPos = 0;

            for (unsigned iPos = 0; iPos < nDataLen; iPos++)
            {
                const unsigned xPos = (iPos % width);
                const unsigned yPos = static_cast<int>(floor(static_cast<double>(iPos) / width));

                if ((yPos < nFirstLine) || (xPos < nLeftMost) || (xPos > nRightMost))
                {
                    continue;
                }
                else if (yPos > nLastLine)
                {
                    break;
                }

                pTrimmedBuffer[iFilledPos++] = m_ppSpriteOverrideTexture[nCurrentLayer][iPos];
            }

            ResetCustomSpriteOverride(nCurrentLayer);
            m_ppSpriteOverrideTexture[nCurrentLayer] = pTrimmedBuffer;

            m_nTextureOverrideW[nCurrentLayer] = true_width;
            m_nTextureOverrideH[nCurrentLayer] = true_height;

            if (pnPositionToLoadTo)
            {
                break;
            }
        }

        strMsg.Format(L"Loaded %u x %u (trimmed) RGB PNG preview.", true_width, true_height);
    }
    else
    {
        m_nTextureOverrideW[pnPositionToLoadTo ? *pnPositionToLoadTo : 0] = width;
        m_nTextureOverrideH[pnPositionToLoadTo ? *pnPositionToLoadTo : 0] = height;

        strMsg.Format(L"Loaded %u x %u RGB PNG preview.", width, height);
    }

    if (!pnPositionToLoadTo)
    {
        for (signed int nCurrentLayer = 0; nCurrentLayer < m_nImgAmt; nCurrentLayer++)
        {
            m_nTextureOverrideW[nCurrentLayer] = m_nTextureOverrideW[0];
            m_nTextureOverrideH[nCurrentLayer] = m_nTextureOverrideH[0];

            _FlipImageDataIfNeeded(direction, m_ppSpriteOverrideTexture[nCurrentLayer], m_nTextureOverrideW[nCurrentLayer], m_nTextureOverrideH[nCurrentLayer]);

            AddImageNode(nCurrentLayer, m_nTextureOverrideW[nCurrentLayer], m_nTextureOverrideH[nCurrentLayer], m_ppSpriteOverrideTexture[nCurrentLayer],
                m_pImgBuffer[nCurrentLayer]->pPalette, m_pImgBuffer[nCurrentLayer]->uPalSz, 0, 0);
        }
    }
    else
    {
        _FlipImageDataIfNeeded(direction, m_ppSpriteOverrideTexture[*pnPositionToLoadTo], m_nTextureOverrideW[*pnPositionToLoadTo], m_nTextureOverrideH[*pnPositionToLoadTo]);

        AddImageNode(*pnPositionToLoadTo, m_nTextureOverrideW[*pnPositionToLoadTo], m_nTextureOverrideH[*pnPositionToLoadTo], m_ppSpriteOverrideTexture[*pnPositionToLoadTo],
            m_pImgBuffer[*pnPositionToLoadTo]->pPalette, m_pImgBuffer[*pnPositionToLoadTo]->uPalSz, 0, 0);
    }

    if (fFoundOne && fUseWinKawaksShift)
    {
        strMsg += L" Corrected for WinKawaks colors.";
    }
    else if (!fFoundOne)
    {
        strMsg += L" Palette doesn't match.";
    }

    if (fCurrentPaletteIsNotMappingFriendly)
    {
        strMsg += " Use a mapping palette!";
    }

    GetHost()->GetPalModDlg()->SetStatusText(strMsg.GetString());

    if (fCurrentPaletteIsNotMappingFriendly)
    {
        CString strMistake;

        if (nCheckAgainstPalette == 0)
        {
            strMistake.Format(L"Please note that the active palette set is not ideal for use as a mapping palette.  This is because it has multiple instances of the same color. "
                                L"That color may originally have intended to be index %u or index %u, but since we lose all that context we can only ever map it as index %u.\n\n"
                                L"To avoid this problem, please use mapping palettes.", nCheckColor, nCheckAgainstColor, nCheckColor);
        }
        else
        {
            strMistake.Format(L"Please note that the active palette set is not ideal for use as a mapping palette.  This is because it has multiple instances of the same color. "
                                L"That color may originally have intended to be palette %u index %u or palette %u index %u, but since we lose all that context we can only ever map it as palette %u index %u.\n\n"
                                L"To avoid this problem, please use mapping palettes.", nStartCheckPalette, nCheckColor, nCheckAgainstPalette, nCheckAgainstColor, nStartCheckPalette, nCheckColor);
        }

        SHMessageBoxCheck(g_appHWnd, strMistake, GetHost()->GetAppName(), MB_ICONEXCLAMATION | MB_OK, 0, L"{11BFAD2C-42CA-40e2-967C-1017C1B2676A}");
    }
}

uint8_t* CImgDisp::_LoadTextureFromCImageSprite(wchar_t* pszTextureLocation, UINT& nPositionToLoadTo, int& nSuggestedHeight, int& nSuggestedWidth, SpriteImportDirection& direction, SpriteImportCompositionStyle& compositionStyle, bool fPreferQuietMode /* = true */)
{
    CImage sprite;
    uint8_t* pNewOverrideTexture = nullptr;

    if (SUCCEEDED(sprite.Load(pszTextureLocation)) &&
                  sprite.IsDIBSection() &&
                  sprite.IsIndexed())  // Note that animated GIFs will be DIBSections but not indexed
    {
        uint8_t* pBits = reinterpret_cast<uint8_t*>(sprite.GetBits());

        // Need to replace the color table so we can figure out what goes where easily
        const int nColorTableSize = sprite.GetMaxColorTableEntries();

        RGBQUAD* pColorTable = new RGBQUAD[nColorTableSize];
        uint16_t r = 0, g = 0, b = 0;

        // override the color table so that we can then remap
        for (int iPos = 0; iPos < nColorTableSize; iPos++)
        {
            pColorTable[iPos] = { static_cast<uint8_t>(b), static_cast<uint8_t>(g), static_cast<uint8_t>(r) };
            r++;
            if (r > 0xff)
            {
                r = 0;
                g++;
                if (g > 0xff)
                {
                    // we won't hit this
                    g = 0;
                    b++;
                }
            }
        }

        sprite.SetColorTable(0, nColorTableSize, pColorTable);
        safe_delete_array(pColorTable);

        nSuggestedWidth = sprite.GetWidth();
        nSuggestedHeight = sprite.GetHeight();

        const size_t nPixelCount = static_cast<size_t>(nSuggestedWidth * nSuggestedHeight);

        pNewOverrideTexture = new uint8_t[nPixelCount];

        if (sprite.GetPitch() > 0)
        {
            size_t iPos = 0;

            for (int yPos = 0; yPos < nSuggestedHeight; yPos++)
            {
                for (int xPos = 0; xPos < nSuggestedWidth; xPos++)
                {
                    const COLORREF curColor = sprite.GetPixel(xPos, yPos);
                    const uint8_t nColorIndex = (GetRValue(curColor) + GetGValue(curColor) + GetBValue(curColor));

                    pNewOverrideTexture[iPos] = nColorIndex;
                    iPos++;
                }
            }
        }
        else
        {
            // We're flipped: flip the logic.
            size_t iPos = nPixelCount - 1;
            for (int yPos = nSuggestedHeight - 1; yPos >= 0; yPos--)
            {
                for (int xPos = nSuggestedWidth - 1; xPos >= 0; xPos--)
                {
                    const COLORREF curColor = sprite.GetPixel(xPos, yPos);
                    const uint8_t nColorIndex = (GetRValue(curColor) + GetGValue(curColor) + GetBValue(curColor));

                    pNewOverrideTexture[iPos] = nColorIndex;
                    iPos--;
                }
            }
        }

        if (!fPreferQuietMode)
        {
            if (!_GetUserOptionsForTextureOverride(static_cast<int>(nPixelCount), nSuggestedWidth, nSuggestedHeight, nPositionToLoadTo, direction, &compositionStyle))
            {
                safe_delete_array(pNewOverrideTexture);
            }
        }

        if (pNewOverrideTexture)
        {
            // Apply flip options if needed
            _FlipImageDataIfNeeded(direction, pNewOverrideTexture, nSuggestedWidth, nSuggestedHeight);
        }
    }

    return pNewOverrideTexture;
}

bool CImgDisp::LoadExternalCImageSprite(UINT nPositionToLoadTo, SpriteImportDirection direction, wchar_t* pszTextureLocation, bool fPreferQuietMode /* = false */)
{
    SpriteImportCompositionStyle compositionStyle = SpriteImportCompositionStyle::Replace;
    int nHeight = 0, nWidth= 0;

    uint8_t* pNewOverrideTexture = _LoadTextureFromCImageSprite(pszTextureLocation, nPositionToLoadTo, nHeight, nWidth, direction, compositionStyle, fPreferQuietMode);

    if (pNewOverrideTexture)
    {
        _CompositeTexture(pNewOverrideTexture, nPositionToLoadTo, nHeight, nWidth, direction, compositionStyle);

        _UpdatePreviewForExternalSprite(&nPositionToLoadTo);

        CString strInfo;
        strInfo.Format(L"Loaded %u x %u image as a preview.", nWidth, nHeight);
        GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());
        strInfo += "\r\n";
        OutputDebugString(strInfo.GetString());

        return true;
    }
    else
    {
        CString strInfo = L"Failed to load this image.  Animated GIFs are not supported as replacement previews.";
        MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONERROR);
        strInfo += "\r\n";
        OutputDebugString(strInfo.GetString());
        return false;
    }
}

bool CImgDisp::LoadExternalPNGSprite(UINT* pnPositionToLoadTo, SpriteImportDirection direction, wchar_t* pszTextureLocation, bool fPreferQuietMode /* = false */)
{
    bool fSuccess = false;
    bool fUserCanceled = false;
    lodepng::State state;

    lodepng_state_init(&state);

    size_t nSize = 0;
    unsigned char* loadedAsFile = nullptr;
    unsigned char* loadedAsPNG = nullptr;

    if (lodepng_load_file(&loadedAsFile, &nSize, pszTextureLocation) == 0)
    {
        unsigned width = 0, height = 0;
        state.decoder.color_convert = 0;
        if (lodepng_decode(&loadedAsPNG, &width, &height, &state, loadedAsFile, nSize) == 0)
        {
            // We know the gist of this image: let's confirm user options if appropriate
            if (!fPreferQuietMode && pnPositionToLoadTo)
            {
                int intWidth = width, intHeight = height;
                fUserCanceled = !_GetUserOptionsForTextureOverride(width * height, intWidth, intHeight, *pnPositionToLoadTo, direction, nullptr);
                width = intWidth;
                height = intHeight;
            }

            if (!fUserCanceled)
            {
                if (state.info_png.color.colortype == LodePNGColorType::LCT_PALETTE)
                {
                    _ImportAndSplitSpriteComposition(direction, pnPositionToLoadTo, loadedAsPNG, width, height, state.info_png.color.palettesize);

                    // We handle RGB status update inside that logic, since it can be slightly different
                    CString strMsg;
                    strMsg.Format(L"Loaded %u x %u indexed PNG as a preview.", width, height);
                    GetHost()->GetPalModDlg()->SetStatusText(strMsg.GetString());

                    fSuccess = true;
                }
                else if ((state.info_png.color.colortype == LodePNGColorType::LCT_RGB) ||
                         (state.info_png.color.colortype == LodePNGColorType::LCT_RGBA))
                {
                    _ImportAndSplitRGBSpriteComposition(direction, pnPositionToLoadTo, loadedAsPNG, width, height, lodepng_get_raw_size(width, height, &state.info_png.color));
                    fSuccess = true;
                }
            }

            free(loadedAsPNG);
        }

        free(loadedAsFile);
    }
    
    if (fSuccess)
    {
        _UpdatePreviewForExternalSprite(pnPositionToLoadTo);

        return true;
    }
    else
    {
        if (!fPreferQuietMode && !fUserCanceled)
        {
            MessageBox(L"Error: this is not a supported PNG.  Indexed PNGs are best suited as replacement previews.", GetHost()->GetAppName(), MB_ICONERROR);
        }

        return false;
    }
}

void CImgDisp::_UpdatePreviewForExternalSprite(UINT* pnPositionToLoadTo)
{
    UINT nPositionToLoadTo = pnPositionToLoadTo ? *pnPositionToLoadTo : 0;

    if (!nPositionToLoadTo)
    {
        // always need to reset our layout when we're replacing the 0th image
        ResetImageCompositionLayout();
    }

    if (m_pImgBuffer[nPositionToLoadTo])
    {
        // Override but use the stock palette
        AddImageNode(nPositionToLoadTo, m_nTextureOverrideW[nPositionToLoadTo], m_nTextureOverrideH[nPositionToLoadTo], m_ppSpriteOverrideTexture[nPositionToLoadTo],
            m_pImgBuffer[nPositionToLoadTo]->pPalette, m_pImgBuffer[nPositionToLoadTo]->uPalSz, 0, 0);
    }
    else
    {
        // We really wanted the palette from pImgBuffer, but oh well we'll just use the backup palette
        AddImageNode(nPositionToLoadTo, m_nTextureOverrideW[nPositionToLoadTo], m_nTextureOverrideH[nPositionToLoadTo], m_ppSpriteOverrideTexture[nPositionToLoadTo],
            m_pBackupPaletteDef->pPal, m_pBackupPaletteDef->uPalSz, 0, 0);
    }

    if (!nPositionToLoadTo)
    {
        ResetForNewImage();
    }
}

BOOL CImgDisp::CustomBlt(int nSrcIndex, int xWidth, int yHeight, bool fUseBlinkPal)
{
    if ((MAIN_W <= 0) || (MAIN_H <= 0))
    {
        return TRUE;
    }

    int nWidth = 0;
    int nHeight = 0;
    int nSrcX = 0, nSrcY = 0;
    uint8_t* pImgData = nullptr;
    uint8_t* pCurrPal = nullptr;
    uint8_t* pDstBmpData = reinterpret_cast<uint8_t*>(m_pBmpData);
    int nPalSizeInUint8 = 0;
    BlendMode eBlendMode = BlendMode::Alpha;

    if (!pDstBmpData)
    {
        OutputDebugString(L"CImgDisp::CustomBlt: No bitmap available.\n");
        return FALSE;
    }

    if ((nSrcIndex != -1) && m_pImgBuffer[nSrcIndex])
    {
        pImgData = reinterpret_cast<uint8_t*>(m_pImgBuffer[nSrcIndex]->pImgData);
        pCurrPal = reinterpret_cast<uint8_t*>(fUseBlinkPal ? m_pImgBuffer[nSrcIndex]->pBlinkPalette : m_pImgBuffer[nSrcIndex]->pPalette);
        nPalSizeInUint8 = m_pImgBuffer[nSrcIndex]->uPalSz * 4;
        nWidth = m_pImgBuffer[nSrcIndex]->uImgW;
        nHeight = m_pImgBuffer[nSrcIndex]->uImgH;
        eBlendMode = m_pImgBuffer[nSrcIndex]->eBlendMode;
    }
    else if (m_pBackupPaletteDef)
    {
        pCurrPal = reinterpret_cast<uint8_t*>(fUseBlinkPal ? m_pBackupBlinkPalette : m_pBackupPaletteDef->pPal);
        nPalSizeInUint8 = m_pBackupPaletteDef->uPalSz * 4;
        eBlendMode = BlendMode::Alpha;
    }
    else
    {
        OutputDebugString(L"CImgDisp::CustomBlt: No image available and no backup palette available. No image will be loaded.\n");
        return FALSE;
    }

    if (m_eForcedBlendMode != BlendMode::Default)
    {
        eBlendMode = m_eForcedBlendMode;
    }

    if (pImgData == nullptr)
    {
        return FALSE;
    }

    CRect rBltRct(xWidth, yHeight, xWidth + nWidth, yHeight + nHeight);

    if (xWidth < 0)
    {
        rBltRct.left = 0;
        nSrcX = abs(xWidth);
    }

    if (yHeight < 0)
    {
        rBltRct.top = 0;
        nSrcY = abs(yHeight);
    }

    if (rBltRct.right > MAIN_W)
    {
        rBltRct.right = MAIN_W;
    }

    if (rBltRct.bottom > MAIN_H)
    {
        rBltRct.bottom = MAIN_H;
    }

    int nBltW = rBltRct.right - rBltRct.left;
    int nBltH = rBltRct.bottom - rBltRct.top;

    int nRightBlt = rBltRct.right * 4;

    uint16_t nTransparencyPosition = 0;
    uint16_t nMaxWritePerTransparency = 16;

    if (GetHost()->GetCurrGame())
    {
        nTransparencyPosition = GetHost()->GetCurrGame()->GetTransparencyColorPosition();
        nMaxWritePerTransparency = static_cast<uint16_t>(GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency());
    }

    bool fShownErrorForThisImage = false;

    for (int yIndex = 0; yIndex < nBltH; yIndex++)
    {
        int nStartRow = (rBltRct.top + ((nBltH - 1) - yIndex)) * (MAIN_W * 4) + (rBltRct.left * 4);
        int nSrcStartRow = ((yIndex + nSrcY) * nWidth) + nSrcX;

        for (int xIndex = 0; xIndex < nBltW * 4; xIndex += 4)
        {
            uint8_t uIndex = pImgData[nSrcStartRow + (xIndex / 4)];

            if ((uIndex % nMaxWritePerTransparency) != nTransparencyPosition)
            {
                int nDstPos = nStartRow + xIndex;
                const int nCurrentColorPosition = uIndex * 4; // we walk the uint8_t array at COLORREF size strides

                if (nCurrentColorPosition > nPalSizeInUint8)
                {
                    // this is a badly crafted image for this palette.  
                    if (!fShownErrorForThisImage)
                    {
                        CString strError;
                        strError.Format(L"ERROR: This %u by %u image has out-of-bound color references and should be fixed.  Requested 0x%x but palette maxes at 0x%x.\r\n",
                                            nWidth, nHeight, nCurrentColorPosition, nPalSizeInUint8);
                        OutputDebugString(strError.GetString());
                        fShownErrorForThisImage = true;
                    }

                    // Make anything incorrect pink so it's (possibly) obvious there's an error.
                    pDstBmpData[nDstPos + 2] = 0xFF;
                    pDstBmpData[nDstPos + 1] = 0xC0;
                    pDstBmpData[nDstPos]     = 0xCB;
                }
                else
                {
                    uint8_t* uDstR = &pDstBmpData[nDstPos + 2];
                    uint8_t* uDstG = &pDstBmpData[nDstPos + 1];
                    uint8_t* uDstB = &pDstBmpData[nDstPos];

                    switch (eBlendMode)
                    {
                        case BlendMode::Alpha: // alpha blend
                        default:
                        {
                            const double fpAlphaBackground = (1.0 - (pCurrPal[nCurrentColorPosition + 3]) / 255.0);
                            const double fpAlphaForeground = 1.0 - fpAlphaBackground;

                            *uDstR = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition    ])), (fpAlphaBackground * static_cast<double>(*uDstR))));
                            *uDstG = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition + 1])), (fpAlphaBackground * static_cast<double>(*uDstG))));
                            *uDstB = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition + 2])), (fpAlphaBackground * static_cast<double>(*uDstB))));
                            break;
                        }
                        case BlendMode::AdditiveRGB: // additive / linear dodge
                        {
                            *uDstR = static_cast<uint8_t>(min(255, (static_cast<uint16_t>(pCurrPal[nCurrentColorPosition    ]) + static_cast<uint16_t>(*uDstR))));
                            *uDstG = static_cast<uint8_t>(min(255, (static_cast<uint16_t>(pCurrPal[nCurrentColorPosition + 1]) + static_cast<uint16_t>(*uDstG))));
                            *uDstB = static_cast<uint8_t>(min(255, (static_cast<uint16_t>(pCurrPal[nCurrentColorPosition + 2]) + static_cast<uint16_t>(*uDstB))));
                            break;
                        }
                        case BlendMode::AdditiveARGB:
                        {
                            const double fpAlphaBackground = (1.0 - (pCurrPal[nCurrentColorPosition + 3]) / 255.0);
                            const double fpAlphaForeground = 1.0 - fpAlphaBackground;

                            const uint8_t uBlendedR = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition     ])), (fpAlphaBackground * static_cast<double>(*uDstR))));
                            const uint8_t uBlendedG = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition + 1])), (fpAlphaBackground * static_cast<double>(*uDstG))));
                            const uint8_t uBlendedB = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition + 2])), (fpAlphaBackground * static_cast<double>(*uDstB))));

                            *uDstR = static_cast<uint8_t>(min(255, (static_cast<uint16_t>(uBlendedR) + static_cast<uint16_t>(*uDstR))));
                            *uDstG = static_cast<uint8_t>(min(255, (static_cast<uint16_t>(uBlendedG) + static_cast<uint16_t>(*uDstG))));
                            *uDstB = static_cast<uint8_t>(min(255, (static_cast<uint16_t>(uBlendedB) + static_cast<uint16_t>(*uDstB))));
                            break;
                        }
                        case BlendMode::PS1SemiTransparencyOff:
                        {
                            const bool fIsSTPOn = (pCurrPal[nCurrentColorPosition + 3] & 0xF);
                            double fpAlphaToUse = 255.0;

                            if (!fIsSTPOn &&
                                (pCurrPal[nCurrentColorPosition] == 0) &&
                                (pCurrPal[nCurrentColorPosition + 1] == 0) &&
                                (pCurrPal[nCurrentColorPosition + 2] == 0))
                            {
                                fpAlphaToUse = 0;
                            }

                            const double fpAlphaBackground = (1.0 - (fpAlphaToUse / 255.0));
                            const double fpAlphaForeground = 1.0 - fpAlphaBackground;

                            *uDstR = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition])), (fpAlphaBackground * static_cast<double>(*uDstR))));
                            *uDstG = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition + 1])), (fpAlphaBackground * static_cast<double>(*uDstG))));
                            *uDstB = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition + 2])), (fpAlphaBackground * static_cast<double>(*uDstB))));
                            break;
                        }
                        case BlendMode::PS1SemiTransparencyOn:
                        {
                            const bool fIsSTPOn = (pCurrPal[nCurrentColorPosition + 3] & 0xF);
                            double fpAlphaToUse = 127.0;

                            if (!fIsSTPOn)
                            {
                                if ((pCurrPal[nCurrentColorPosition] == 0) &&
                                    (pCurrPal[nCurrentColorPosition + 1] == 0) &&
                                    (pCurrPal[nCurrentColorPosition + 2] == 0))
                                {
                                    fpAlphaToUse = 0;
                                }
                                else
                                {
                                    fpAlphaToUse = 255.0;
                                }
                            }

                            const double fpAlphaBackground = (1.0 - (fpAlphaToUse / 255.0));
                            const double fpAlphaForeground = 1.0 - fpAlphaBackground;

                            *uDstR = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition])), (fpAlphaBackground * static_cast<double>(*uDstR))));
                            *uDstG = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition + 1])), (fpAlphaBackground * static_cast<double>(*uDstG))));
                            *uDstB = static_cast<uint8_t>(aadd((fpAlphaForeground * static_cast<double>(pCurrPal[nCurrentColorPosition + 2])), (fpAlphaBackground * static_cast<double>(*uDstB))));
                            break;
                        }
                    }
                }
            }
        }
    }

    return TRUE;
}

void CImgDisp::OnLButtonDown(UINT nFlags, CPoint point)
{
    m_bLButtonDown = TRUE;
    m_bCtrlDown = (GetAsyncKeyState(VK_CONTROL) & 0x8000);
    SetCapture();

    m_ptMouseDown = m_ptLastMouse = point;

    m_fpDiffX = 0.0f;
    m_fpDiffY = 0.0f;

    CWnd::OnLButtonDown(nFlags, point);
}

void CImgDisp::OnMouseMove(UINT nFlags, CPoint point)
{
    if (m_bLButtonDown && (m_nImgAmt || m_bCtrlDown))
    {
        m_fpDiffX += (static_cast<double>(m_ptLastMouse.x) - static_cast<double>(point.x)) / m_fpZoom;
        m_fpDiffY += (static_cast<double>(m_ptLastMouse.y) - static_cast<double>(point.y)) / m_fpZoom;

        int nAdd = 1;

        if (m_fpDiffX < 0)
        {
            nAdd = -nAdd;
        }

#ifndef SETIMGPOS

        if (m_bCtrlDown && !m_fShouldTileBGBmp)
        {
            while (fabs(m_fpDiffX) >= 1.0f)
            {
                m_nBGXOffs -= nAdd;
                m_fpDiffX -= static_cast<double>(nAdd);
            }
        }
        else
        {
            while (fabs(m_fpDiffX) >= 1.0f)
            {
                m_rSrcRct.left += nAdd;
                m_rSrcRct.right += nAdd;

                if (m_rSrcRct.Width() > m_rImgRct.Width())
                {
                    if ((m_rSrcRct.left > m_rImgRct.left) || (m_rSrcRct.right < m_rImgRct.right))
                    {
                        m_rSrcRct.left -= nAdd;
                        m_rSrcRct.right -= nAdd;
                    }
                }
                else
                {
                    if ((m_rSrcRct.left < m_rImgRct.left) || (m_rSrcRct.right > m_rImgRct.right))
                    {
                        m_rSrcRct.left -= nAdd;
                        m_rSrcRct.right -= nAdd;
                    }
                }

                m_fpDiffX -= static_cast<double>(nAdd);
            }
        }
#endif
        nAdd = 1;

        if (m_fpDiffY < 0)
        {
            nAdd = -nAdd;
        }

#ifndef SETIMGPOS

        if (m_bCtrlDown && !m_fShouldTileBGBmp)
        {
            while (fabs(m_fpDiffY) >= 1.0f)
            {
                m_nBGYOffs -= nAdd;
                m_fpDiffY -= static_cast<double>(nAdd);
            }
        }
        else
        {
            while (fabs(m_fpDiffY) >= 1.0f)
            {
                m_rSrcRct.top += nAdd;
                m_rSrcRct.bottom += nAdd;

                if (m_rSrcRct.Height() > m_rImgRct.Height())
                {
                    if ((m_rSrcRct.top > m_rImgRct.top) || (m_rSrcRct.bottom < m_rImgRct.bottom))
                    {
                        m_rSrcRct.top -= nAdd;
                        m_rSrcRct.bottom -= nAdd;
                    }
                }
                else
                {
                    if ((m_rSrcRct.top < m_rImgRct.top) || (m_rSrcRct.bottom > m_rImgRct.bottom))
                    {
                        m_rSrcRct.top -= nAdd;
                        m_rSrcRct.bottom -= nAdd;
                    }
                }

                m_fpDiffY -= static_cast<double>(nAdd);
            }
        }

#else

        int nImgIndex = SETIMGINDEX;

        pImgBuffer[nImgIndex]->nXOffs -= static_cast<int>(fpDiffX);
        pImgBuffer[nImgIndex]->nYOffs -= static_cast<int>(fpDiffY);
        UpdateCtrl();

        fpDiffX = 0;
        fpDiffY = 0;

#endif

        UpdateCtrl();

        m_ptLastMouse = point;
    }

    CWnd::OnMouseMove(nFlags, point);
}

void CImgDisp::OnLButtonUp(UINT nFlags, CPoint point)
{
    m_bLButtonDown = FALSE;
    ReleaseCapture();

#ifdef SETIMGPOS

    int nImgIndex = SETIMGINDEX;

    CString szTemp;
    szTemp.Format(L"x: %d, y: %d", pImgBuffer[nImgIndex]->nXOffs, pImgBuffer[nImgIndex]->nYOffs);
    MessageBox(szTemp);

#endif

    if (GetClickToFindColorSetting())
    {
        // We want clicks to highlight colors, but we don't want mouse *drags* to change selections or highlight colors.
        // So let's just say that a "click" will have less than 15px of total mouse travel, whereas a "drag" will have
        // 15px or more of travel.
        constexpr auto mouse_distance_for_drags = 15;
        if ((abs(m_ptMouseDown.x - point.x) + (abs(m_ptMouseDown.y - point.y))) < mouse_distance_for_drags)
        {
            // Update the current palette selections based upon this click
            GetHost()->GetPalModDlg()->SelectMatchingColorsInPalette(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(), m_crBGCol);
        }
    }

    CWnd::OnLButtonUp(nFlags, point);
}

void CImgDisp::SetBlinkPalette(int nIndex, COLORREF* pBlinkPalette)
{
    // This is a copy of the main palette: we need that so we can swap out the highlighted color(s) for the
    // selected blink color
    if (m_pImgBuffer[nIndex])
    {
        m_pImgBuffer[nIndex]->pBlinkPalette = pBlinkPalette;
    }

    m_pBackupBlinkPalette = pBlinkPalette;
}

void CImgDisp::OnRButtonDown(UINT nFlags, CPoint point)
{
    if (GetHost()->GetCurrGame())
    {
        CMenu PopupMenu;

        if (PopupMenu.CreatePopupMenu())
        {
            RECT rWnd;
            GetWindowRect(&rWnd);
            point.x += rWnd.left;
            point.y += rWnd.top;

            bool canPasteFromCliboard = CPalModDlg::IsPasteSupported();

            constexpr auto CUSTOM_FINDCOLOR = WM_USER + 20;
            constexpr auto CUSTOM_COPYCOLOR = WM_USER + 21;
            constexpr auto CUSTOM_PASTECOLOR = WM_USER + 22;

            PopupMenu.AppendMenu(MF_ENABLED, CUSTOM_FINDCOLOR, L"Find this color in palette");
            PopupMenu.AppendMenu(MF_SEPARATOR, 0, L"");
            PopupMenu.AppendMenu(MF_ENABLED, CUSTOM_COPYCOLOR, L"&Copy this color");
            PopupMenu.AppendMenu(canPasteFromCliboard ? MF_ENABLED : MF_DISABLED, CUSTOM_PASTECOLOR, L"&Paste to this color");

            int result = PopupMenu.TrackPopupMenuEx(TPM_LEFTALIGN | TPM_RETURNCMD, point.x, point.y, this, NULL);

            switch (result)
            {
            case CUSTOM_FINDCOLOR:
                GetHost()->GetPalModDlg()->SelectMatchingColorsInPalette(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(point.x, point.y), m_crBGCol);
                break;
            case CUSTOM_COPYCOLOR:
                GetHost()->GetPalModDlg()->CopyColorToClipboard(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(point.x, point.y));
                break;
            case CUSTOM_PASTECOLOR:
                if (GetHost()->GetPalModDlg()->SelectMatchingColorsInPalette(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(point.x, point.y), m_crBGCol))
                {
                    GetHost()->GetPalModDlg()->OnEditPaste();
                }
                break;
            }
        }
        else
        {
            OutputDebugString(L"ERROR: Couldn't create popup menu.\n");
        }
    }

    CWnd::OnRButtonDown(nFlags, point);
}
