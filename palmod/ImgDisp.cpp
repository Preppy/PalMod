// ImgDisp.cpp : implementation file
//

#include "stdafx.h"
#include "ImgDisp.h"

#include "resource.h"
#include "atlimage.h"
#include "PalMod.h"
#include "lodepng\lodepng.h"
#include "PreviewImport.h"
#include "RAWfiles.h"

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

void CImgDisp::_ResizeMainBitmap()
{
    if (m_MainDC)
    {
        DeleteObject(m_hBmp);

        m_Bmpi.bmiHeader.biWidth = m_MainLayout.width;
        m_Bmpi.bmiHeader.biHeight = m_MainLayout.height;
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

// Called before inserting images to clear layout rect settings
void CImgDisp::ResetImageCompositionLayout()
{
    memset(m_bUsed, 0, sizeof(uint8_t) * MAX_IMAGES_DISPLAYABLE);
    m_rImgRct.SetRectEmpty();

    m_ImageOffsets.x = 0;
    m_ImageOffsets.y = 0;
    m_ImgDimensions.width = 0;
    m_ImgDimensions.height = 0;

    // reset offsets
    for (uint32_t iPos = 0; iPos < ARRAYSIZE(m_ptOffs); iPos++)
    {
        m_ptOffs[iPos].x = m_ptOffs[iPos].y = 0;
    }
}

// Called after preview images are set in place so that we know what the layout rects should be
void CImgDisp::_ResetForNewImage()
{
    m_rImgRct.right += abs(m_rImgRct.left);
    m_rImgRct.left = 0;

    m_rImgRct.bottom += abs(m_rImgRct.top);
    m_rImgRct.top = 0;

    m_ImgDimensions.width = m_rImgRct.Width();
    m_ImgDimensions.height = m_rImgRct.Height();

    ModifySrcRect();

    _ResizeMainBitmap();
}

void CImgDisp::ResetCustomSpriteOverride(size_t nPosition)
{
    if (m_vSpriteOverrideTextures.at(nPosition).pixels.size())
    {
        if (m_pImgBuffer[nPosition])
        {
            m_pImgBuffer[nPosition]->pImgData = nullptr;
            m_pImgBuffer[nPosition]->dimensions.height = m_pImgBuffer[nPosition]->dimensions.width = 0;
        }
    }

    m_vSpriteOverrideTextures.at(nPosition).pixels.clear();
    m_vSpriteOverrideTextures.at(nPosition).dimensions.width = 0;
    m_vSpriteOverrideTextures.at(nPosition).dimensions.height = 0;
}

void CImgDisp::FlushCustomSpriteOverrides()
{
    for (size_t iPos = 0; iPos < m_vSpriteOverrideTextures.size(); iPos++)
    {
        ResetCustomSpriteOverride(iPos);
    }
}

void CImgDisp::FlushUnusedAndResize(bool fKeepImageCache)
{
    if (m_nImgAmt)
    {
        if (!fKeepImageCache)
        {
            for (int iImageIndex = 0; iImageIndex < MAX_IMAGES_DISPLAYABLE; iImageIndex++)
            {
                if (!m_bUsed[iImageIndex])
                {
                    FlushImageNode(iImageIndex);
                }
            }
        }

        _ResetForNewImage();
    }

    if (!fKeepImageCache)
    {
        FlushCustomSpriteOverrides();
    }
}

void CImgDisp::_UpdateCompositionDisplayRect(UINT nPosition, sImageDimensions dimensions)
{
    if (nPosition)
    {
        if ((m_ptOffs[nPosition].x + dimensions.width) > m_rImgRct.right)
        {
            m_rImgRct.right = m_ptOffs[nPosition].x + dimensions.width;
        }

        if ((m_ptOffs[nPosition].y + dimensions.height) > m_rImgRct.bottom)
        {
            m_rImgRct.bottom = m_ptOffs[nPosition].y + dimensions.height;
        }
    }
    else
    {
        // 0th position sets the foundation for display
        m_rImgRct.right = m_ptOffs[nPosition].x + dimensions.width;
        m_rImgRct.bottom = m_ptOffs[nPosition].y + dimensions.height;
    }
}

void CImgDisp::AddImageNode(int nIndex, uint16_t uImgW, uint16_t uImgH, uint8_t* pImgData, COLORREF* pPalette, int uPalSz, int nXOffs, int nYOffs, BlendMode eBlendMode /* = BlendMode::Alpha */)
{
    sImgNode* pNewNode = new sImgNode;

    pNewNode->dimensions.width = uImgW;
    pNewNode->dimensions.height = uImgH;
    pNewNode->offsets.x = nXOffs;
    pNewNode->offsets.y = nYOffs;

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
        // If the user custom loads an unexpectedly sized image for layer 0, we do weird things in terms of offset.
        // Without this logic, image 0 is centered, and then further images are drawn within that specific bounding rect.
        // That results in most of their content being shown in the upper right of the composition.
        // We can do a quick pass here to ensure that the bounding rect for 0 is optimized.
        // Note that mismatched image sizes is a bad plan in general, but this should make it slightly less annoying.
        // The logic here isn't perfect, but it at least is a more presentable preview.
        // Note that mismatched preview sizes is going to cause problems, so avoid that.
        if (m_vSpriteOverrideTextures.at(0).pixels.size())
        {
            for (int iLayer = 1; iLayer < MAX_IMAGES_DISPLAYABLE; iLayer++)
            {
                if (m_pImgBuffer[iLayer])
                {
                    nMaxWidth = max(nMaxWidth, m_pImgBuffer[iLayer]->dimensions.width);
                    nMaxHeight = max(nMaxHeight, m_pImgBuffer[iLayer]->dimensions.height);
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
            m_ImageOffsets.x = nXOffs;
        }

        if (nYOffs < m_rImgRct.top)
        {
            m_rImgRct.top = nYOffs;
            m_ImageOffsets.y = nYOffs;
        }
    }

    _UpdateCompositionDisplayRect(nIndex, { nMaxWidth, nMaxHeight });

    // BUGBUG: This seems incoherent for position 0 where we are duplicating the requested offset.
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
        m_Settings.strPreviewBGBMPPath = pszBmpLoc;
    }

    if (SUCCEEDED(backgroundImage.Load(m_Settings.strPreviewBGBMPPath)))
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
            m_BGBmpDimensions.width = bmp.bmWidth;
            m_BGBmpDimensions.height = bmp.bmHeight;
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
    if (!m_fIsBGAvail && (m_Settings.strPreviewBGBMPPath.GetLength() > 8))
    {
        LoadBGBmp(nullptr);
    }

    return m_fIsBGAvail; 
};

void CImgDisp::InitDC(CPaintDC& PaintDC)
{
    static bool fNeedFirstInit = true;

    if (fNeedFirstInit)
    {
        m_MainDC = new CDC;
        m_ImageDC = new CDC;

        m_MainDC->CreateCompatibleDC(&PaintDC);
        m_ImageDC->CreateCompatibleDC(&PaintDC);

        fNeedFirstInit = false;

        ModifyClRect();
        ModifySrcRect();

        //ResizeMainBitmap(rCtrlRct.Width(), rCtrlRct.Height());
        m_MainDC->SelectObject(m_hBmp); //OnSize should be called first

        UpdateCtrl(FALSE);
    }
}

void CImgDisp::ModifySrcRect()
{
    sImageDimensions CtrlDimensions = { m_rCtrlRct.right,  m_rCtrlRct.bottom };

    if (CtrlDimensions.width > m_ImgDimensions.width)
    {
        m_MainLayout.width = CtrlDimensions.width * 2 - m_ImgDimensions.width;
    }
    else
    {
        m_MainLayout.width = m_ImgDimensions.width;
    }

    if (CtrlDimensions.height > m_ImgDimensions.height)
    {
        m_MainLayout.height = CtrlDimensions.height * 2 - m_ImgDimensions.height;
    }
    else
    {
        m_MainLayout.height = m_ImgDimensions.height;
    }

    m_rSrcRct.top = (m_MainLayout.height / 2) - static_cast<int>(static_cast<double>(CtrlDimensions.height / 2) / m_Settings.dPreviewZoom);
    m_rSrcRct.left = (m_MainLayout.width / 2) - static_cast<int>(static_cast<double>(CtrlDimensions.width / 2) / m_Settings.dPreviewZoom);
    m_rSrcRct.bottom = m_rSrcRct.top + static_cast<int>(static_cast<double>(CtrlDimensions.height) / m_Settings.dPreviewZoom);
    m_rSrcRct.right = m_rSrcRct.left + static_cast<int>(static_cast<double>(CtrlDimensions.width) / m_Settings.dPreviewZoom);

    m_rImgRct.left = -(m_ImgDimensions.width / 2) + (m_MainLayout.width / 2);
    m_rImgRct.right = (m_ImgDimensions.width / 2) + (m_MainLayout.width / 2);
    m_rImgRct.top = -(m_ImgDimensions.height / 2) + (m_MainLayout.height / 2);
    m_rImgRct.bottom = (m_ImgDimensions.height / 2) + (m_MainLayout.height / 2);
}

void CImgDisp::ModifyClRect()
{
    GetClientRect(&m_rCtrlRct);
}

void CImgDisp::DrawMainBG()
{
    if (m_MainDC)
    {
        if (m_Settings.fTileBG && !m_Settings.fUseBGCol && CanForceBGBitmapAvailable())
        {
            m_MainDC->FillRect(CRect(0, 0, m_MainLayout.width, m_MainLayout.height), &m_BGBrush);
        }
        else
        {
            m_MainDC->FillSolidRect(CRect(0, 0, m_MainLayout.width, m_MainLayout.height), m_Settings.prev_bgcol);
        }

        if (!m_Settings.fTileBG && !m_Settings.fUseBGCol && CanForceBGBitmapAvailable())
        {
            m_ImageDC->SelectObject(&m_BGBitmap);

            m_MainDC->BitBlt(
                (m_MainLayout.width / 2) - (m_BGBmpDimensions.width / 2) + m_Settings.nBGBMPOffsets.x,
                (m_MainLayout.height / 2) - (m_BGBmpDimensions.height / 2) + m_Settings.nBGBMPOffsets.y,
                m_BGBmpDimensions.width, m_BGBmpDimensions.height,
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
                m_ptOffs[nImgCtr].x + m_rImgRct.left + abs(m_ImageOffsets.x),
                m_ptOffs[nImgCtr].y + m_rImgRct.top + abs(m_ImageOffsets.y),
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
    _ResizeMainBitmap();

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
        m_vSpriteOverrideTextures.at(nIndex).pixels.size());
}

void CImgDisp::_CompositeTexture(std::vector<uint8_t> vNewOverrideTexture, UINT nPositionToLoadTo, int nSuggestedHeight, int nSuggestedWidth, SpriteImportDirection direction, SpriteImportCompositionStyle compositionStyle)
{
    const int nOldHeight = m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height;
    const int nOldWidth = m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width;
    std::vector<uint8_t> vOldOverrideTexture = m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels;
    m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.clear();
    const int nIncomingFileSize = nSuggestedHeight * nSuggestedWidth;
    int nCompositedFileSize;

    if (compositionStyle == SpriteImportCompositionStyle::Replace)
    {
        ResetCustomSpriteOverride(nPositionToLoadTo);

        m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width = nSuggestedWidth;
        m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height = nSuggestedHeight;
        nCompositedFileSize = nIncomingFileSize;
    }
    else // Merge options
    {
        if (vOldOverrideTexture.size())
        {
            m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width = max(nSuggestedWidth, m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width);
            m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height = max(nSuggestedHeight, m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height);
        }
        else
        {
            m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width = max(nSuggestedWidth, m_pImgBuffer[nPositionToLoadTo]->dimensions.width);
            m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height = max(nSuggestedHeight, m_pImgBuffer[nPositionToLoadTo]->dimensions.height);
        }

        nCompositedFileSize = m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height;
    }

    CString strInfo;
    strInfo.Format(L"CImgDisp::CompositeTexture: texture file is: %u x %u\n", m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width, m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height);
    OutputDebugString(strInfo);

    // Now composite the data
    if (compositionStyle == SpriteImportCompositionStyle::Replace)
    {
        vOldOverrideTexture.resize(nIncomingFileSize);

        m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels = vNewOverrideTexture;
    }
    else // if ((compositionStyle == SpriteImportCompositionStyle::MergeAbove) || (compositionStyle == SpriteImportCompositionStyle::MergeBelow))
    {
        if (vOldOverrideTexture.size())
        {
            const int nMergedFileSize = m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width;
            m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.resize(nMergedFileSize);

            strInfo.Format(L"\tMerging Above: %u x %u source image with the existing custom %u x %u image, for a %u x %u composited image.\r\n", nSuggestedHeight, nSuggestedWidth, nOldHeight, nOldWidth, m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height, m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width);
            OutputDebugString(strInfo.GetString());

            for (int iCurrentLine = 0; (iCurrentLine * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width) < nMergedFileSize; iCurrentLine++)
            {
                for (int iCurrentLinePos = 0; iCurrentLinePos < m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width; iCurrentLinePos++)
                {
                    if ((iCurrentLine >= nOldHeight) || (iCurrentLinePos >= nOldWidth))
                    {
                        // We only have the incoming sprite for this pixel
                        m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.at((iCurrentLine * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width) + iCurrentLinePos) = vNewOverrideTexture.at((iCurrentLine * nSuggestedWidth) + iCurrentLinePos);
                    }
                    else if ((iCurrentLine >= nSuggestedHeight) || (iCurrentLinePos >= nSuggestedWidth))
                    {
                        // We only have the old sprite for this pixel
                        m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.at((iCurrentLine * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width) + iCurrentLinePos) = vOldOverrideTexture.at((iCurrentLine * nOldWidth) + iCurrentLinePos);
                    }
                    else
                    {
                        // We have both!
                        if (compositionStyle == SpriteImportCompositionStyle::MergeAbove)
                        {
                            m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.at((iCurrentLine * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width) + iCurrentLinePos) = vNewOverrideTexture.at((iCurrentLine * nSuggestedWidth) + iCurrentLinePos) ? vNewOverrideTexture.at((iCurrentLine * nSuggestedWidth) + iCurrentLinePos) : vOldOverrideTexture.at((iCurrentLine * nOldWidth) + iCurrentLinePos);
                        }
                        else
                        {
                            m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.at((iCurrentLine * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width) + iCurrentLinePos) = vOldOverrideTexture.at((iCurrentLine * nOldWidth) + iCurrentLinePos) ? vOldOverrideTexture.at((iCurrentLine * nOldWidth) + iCurrentLinePos) : vNewOverrideTexture.at((iCurrentLine * nSuggestedWidth) + iCurrentLinePos);
                        }
                    }
                }
            }
        }
        else if (m_pImgBuffer[nPositionToLoadTo])
        {
            const int nMergedFileSize = m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width;
            m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.resize(nMergedFileSize);

            strInfo.Format(L"\tMerging Above: %u x %u source image with the existing internal %u x %u image, for a %u %u composited image.\r\n", nSuggestedHeight, nSuggestedWidth, m_pImgBuffer[nPositionToLoadTo]->dimensions.height, m_pImgBuffer[nPositionToLoadTo]->dimensions.width, 
                m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.height, m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width);
            OutputDebugString(strInfo.GetString());

            for (int iCurrentLine = 0; (iCurrentLine * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width) < nMergedFileSize; iCurrentLine++)
            {
                for (int iCurrentLinePos = 0; iCurrentLinePos < m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width; iCurrentLinePos++)
                {
                    if ((iCurrentLine >= m_pImgBuffer[nPositionToLoadTo]->dimensions.height) || (iCurrentLinePos >= m_pImgBuffer[nPositionToLoadTo]->dimensions.width))
                    {
                        // We only have the incoming sprite for this pixel
                        m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.at((iCurrentLine * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width) + iCurrentLinePos) = vNewOverrideTexture.at((iCurrentLine * nSuggestedWidth) + iCurrentLinePos);
                    }
                    else if ((iCurrentLine >= nSuggestedHeight) || (iCurrentLinePos >= nSuggestedWidth))
                    {
                        // We only have the old sprite for this pixel
                        m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.at((iCurrentLine * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width) + iCurrentLinePos) = m_pImgBuffer[nPositionToLoadTo]->pImgData[(iCurrentLine * m_pImgBuffer[nPositionToLoadTo]->dimensions.width) + iCurrentLinePos];
                    }
                    else
                    {
                        // We have both!
                        if (compositionStyle == SpriteImportCompositionStyle::MergeAbove)
                        {
                            m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.at((iCurrentLine * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width) + iCurrentLinePos) = vNewOverrideTexture.at((iCurrentLine * nSuggestedWidth) + iCurrentLinePos) ? vNewOverrideTexture.at((iCurrentLine * nSuggestedWidth) + iCurrentLinePos) : m_pImgBuffer[nPositionToLoadTo]->pImgData[(iCurrentLine * m_pImgBuffer[nPositionToLoadTo]->dimensions.width) + iCurrentLinePos];
                        }
                        else
                        {
                            m_vSpriteOverrideTextures.at(nPositionToLoadTo).pixels.at((iCurrentLine * m_vSpriteOverrideTextures.at(nPositionToLoadTo).dimensions.width) + iCurrentLinePos) = m_pImgBuffer[nPositionToLoadTo]->pImgData[(iCurrentLine * m_pImgBuffer[nPositionToLoadTo]->dimensions.width) + iCurrentLinePos] ? m_pImgBuffer[nPositionToLoadTo]->pImgData[(iCurrentLine * m_pImgBuffer[nPositionToLoadTo]->dimensions.width) + iCurrentLinePos] : vNewOverrideTexture.at((iCurrentLine * nSuggestedWidth) + iCurrentLinePos);
                        }
                    }
                }
            }
        }
    }
}

bool CImgDisp::LoadExternalRAWSprite(UINT nPositionToLoadTo, SpriteImportDirection direction, wchar_t* pszTextureLocation, bool fMustShowAdvancedOptions /*= true */)
{
    {
        CWaitCursor wait; // Show a wait cursor in this scope since this can be a lot of parsing
        GetHost()->GetPalModDlg()->SetStatusText(L"Analyzing this preview...");

        SpriteImportCompositionStyle compositionStyle = SpriteImportCompositionStyle::Replace;
        sImageDimensions suggestedImageSize;

        uint8_t* pNewOverrideTexture = LoadTextureFromRAWSprite(pszTextureLocation, suggestedImageSize,
                                                                m_nImgAmt, m_pImgBuffer, m_vSpriteOverrideTextures,
                                                                nPositionToLoadTo, direction, compositionStyle, m_pImgBuffer, fMustShowAdvancedOptions);

        if (pNewOverrideTexture)
        {
            std::vector<uint8_t> vOverrideTexture(&pNewOverrideTexture[0], &pNewOverrideTexture[suggestedImageSize.height * suggestedImageSize.width]);

            _CompositeTexture(vOverrideTexture, nPositionToLoadTo, suggestedImageSize.height, suggestedImageSize.width, direction, compositionStyle);

            CString strMsg;
            strMsg.Format(L"Loaded %u x %u RAW as a preview.", suggestedImageSize.width, suggestedImageSize.height);
            GetHost()->GetPalModDlg()->SetStatusText(strMsg.GetString());

            _UpdatePreviewForExternalSprite(&nPositionToLoadTo);

            safe_delete_array(pNewOverrideTexture);

            return true;
        }
    }
    
    CString strError;
    if (strError.LoadString(IDS_ERROR_TEXTURE_LOAD))
    {
        MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
    }
    return false;
}

void CImgDisp::_FlipImageDataIfNeeded(SpriteImportDirection direction, std::vector<uint8_t>& vImageData, int nWidth, int nHeight)
{
    switch (direction)
    {
        default:
        case SpriteImportDirection::TopDown:
            return;
        case SpriteImportDirection::UpsideDown:
        {
            const int nTotalLength = nWidth * nHeight;
            std::vector<uint8_t> vFlippedBuffer;
            vFlippedBuffer.resize(nTotalLength);

            // We need to flip this line by line
            int iPos = 0;
            for (int nLinePosition = 0; nLinePosition < nHeight; nLinePosition++)
            {
                int nLineStart = (nTotalLength - ((nLinePosition + 1) * nWidth));

                for (int nColumnPosition = 0; nColumnPosition < nWidth; nColumnPosition++)
                {
                    vFlippedBuffer.at(iPos++) = vImageData.at(nLineStart++);
                }
            }

            vImageData = vFlippedBuffer;
            return;
        }
        case SpriteImportDirection::FlipHorizontal:
        {
            const int nTotalLength = nWidth * nHeight;
            std::vector<uint8_t> vFlippedBuffer;
            vFlippedBuffer.resize(nTotalLength);

            for (int iLine = 0; iLine < nHeight; iLine++)
            {
                for (int iLinePos = nWidth; iLinePos > 0; iLinePos--)
                {
                    vFlippedBuffer.at((iLine * nWidth) + (iLinePos - 1)) = vImageData.at((iLine * nWidth) + (nWidth - iLinePos));
                }
            }

            vImageData = vFlippedBuffer;
            return;
        }
    }
}

void CImgDisp::_ImportAndSplitSpriteComposition(SpriteImportDirection direction, UINT* pnPositionToLoadTo, unsigned char* pImageData, unsigned width, unsigned height, size_t nImagePalSize, bool fReverseColorTable /* = false */)
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

    const UINT nLayerToStartWith = pnPositionToLoadTo ? *pnPositionToLoadTo : 0;

    const size_t nDataLen = static_cast<size_t>(width) * static_cast<size_t>(height);

    if ((nTotalPalSize > 0xff) ||
        ((m_nImgAmt == 1) && (nTotalPalSize >= nImagePalSize)))
    {
        // This handles
        // * maximum color table size: at this point we know that the incoming image could not encompass 
        //   the entire sprite set for this composition.  as such, the palette here should be left alone
        // * this is a single preview and the palette sizes match or at least don't use overflowing references.  Don't touch.
        ResetCustomSpriteOverride(nLayerToStartWith);
        m_vSpriteOverrideTextures.at(nLayerToStartWith).pixels.resize(nDataLen);

        for (size_t iPos = 0; iPos < nDataLen; iPos++)
        {
            // Dammit Fighter Factory
            unsigned char nThisIndex = pImageData[iPos];

            if (fReverseColorTable && (nThisIndex < 256))
            {
                nThisIndex = 255 - nThisIndex;
            }

            m_vSpriteOverrideTextures.at(nLayerToStartWith).pixels.at(iPos) = nThisIndex;
        }

        m_vSpriteOverrideTextures.at(nLayerToStartWith).dimensions.width = width;
        m_vSpriteOverrideTextures.at(nLayerToStartWith).dimensions.height = height;

        _FlipImageDataIfNeeded(direction, m_vSpriteOverrideTextures.at(nLayerToStartWith).pixels, m_vSpriteOverrideTextures.at(nLayerToStartWith).dimensions.width, m_vSpriteOverrideTextures.at(nLayerToStartWith).dimensions.height);
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
            m_vSpriteOverrideTextures.at(nPos).pixels.resize(nDataLen);

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

                m_vSpriteOverrideTextures.at(nPos).pixels.at(iPos) = nAdjustedIndex;
            }

            nCurrentPalStart = nCurrentPalEnd;

            m_vSpriteOverrideTextures.at(nPos).dimensions.width = width;
            m_vSpriteOverrideTextures.at(nPos).dimensions.height = height;

            _FlipImageDataIfNeeded(direction, m_vSpriteOverrideTextures.at(nPos).pixels, m_vSpriteOverrideTextures.at(nPos).dimensions.width, m_vSpriteOverrideTextures.at(nPos).dimensions.height);

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
        m_vSpriteOverrideTextures.at(nLayer).pixels.resize(nNewSize);

        if (pnPositionToLoadTo)
        {
            break;
        }
    }
}

// This is run when external images are injected in order to trim absolutely unused whitespace.
// ResizeImageStack handles normalization via padding
// When trimming, fIsFullStackReplacement ensures we trim down to minimum needed image stack size,
// not just trimming each preview down as much as possible.
void CImgDisp::_TrimLoadedCustomImages(bool fIsFullStackReplacement)
{
    if (GetPreviewDropTrim())
    {
        CString strInfo;
        bool fNormalizeForStack = false;
        int nStackLeftMost = 0, nStackFirstLine = 0, nStackRightMost = 0, nStackLastLine = 0;

        // for full stack (RGB PNG) drops we need to ensure that we don't shift the layers due to trim
        if (fIsFullStackReplacement && m_pImgBuffer[0] && (m_nImgAmt > 1))
        {
            fNormalizeForStack = true;
            nStackLeftMost = m_pImgBuffer[0]->dimensions.width;
            nStackFirstLine = m_pImgBuffer[0]->dimensions.height;

            for (int iCurrentPreview = 0; iCurrentPreview < m_nImgAmt; iCurrentPreview++)
            {
                if (m_pImgBuffer[iCurrentPreview])
                {
                    for (int iCurrentLine = 0; iCurrentLine < m_pImgBuffer[iCurrentPreview]->dimensions.height; iCurrentLine++)
                    {
                        bool fThisLineUsed = false;
                        for (int iCurrentRow = 0; iCurrentRow < m_pImgBuffer[iCurrentPreview]->dimensions.width; iCurrentRow++)
                        {
                            const int currentPixel = (iCurrentLine * m_pImgBuffer[iCurrentPreview]->dimensions.width) + iCurrentRow;
                            if (m_pImgBuffer[iCurrentPreview]->pImgData[currentPixel])
                            {
                                nStackLeftMost = min(nStackLeftMost, iCurrentRow);
                                nStackRightMost = max(nStackRightMost, iCurrentRow);
                                fThisLineUsed = true;
                            }
                        }

                        if (fThisLineUsed)
                        {
                            nStackFirstLine = min(nStackFirstLine, iCurrentLine);
                            nStackLastLine = max(nStackLastLine, iCurrentLine);
                        }
                    }
                }
            }
        }
        // for partial stack replacements, just don't trim if the new dimensions match established dimensions
        else if (m_pImgBuffer[0] && (m_nImgAmt > 1))
        {
            nStackRightMost = m_pImgBuffer[0]->dimensions.width;
            nStackLastLine = m_pImgBuffer[0]->dimensions.height;
        }

        for (int iCurrentPreview = 0; iCurrentPreview < m_nImgAmt; iCurrentPreview++)
        {
            if (!m_pImgBuffer[iCurrentPreview]  || m_vSpriteOverrideTextures.at(iCurrentPreview).pixels.empty())
            {
                // We only trim external drops
                continue;
            }

            const int nCurrentWidth = m_pImgBuffer[iCurrentPreview]->dimensions.width;
            const int nCurrentHeight = m_pImgBuffer[iCurrentPreview]->dimensions.height;

            if ((nCurrentWidth == nStackRightMost) && (nCurrentHeight == nStackLastLine))
            {
                strInfo.Format(L"Trimming Analysis: Layer %u matches expected stack size, skipping trim.\r\n", iCurrentPreview);
                OutputDebugString(strInfo.GetString());
                continue;
            }

            int nLeftMost = nCurrentWidth;
            int nFirstLine = nCurrentHeight;
            int nLastLine = 0, nRightMost = 0;

            // Establish max used dimensions
            if (m_pImgBuffer[iCurrentPreview])
            {
                for (int iCurrentLine = 0; iCurrentLine < m_pImgBuffer[iCurrentPreview]->dimensions.height; iCurrentLine++)
                {
                    bool fThisLineUsed = false;
                    for (int iCurrentRow = 0; iCurrentRow < m_pImgBuffer[iCurrentPreview]->dimensions.width; iCurrentRow++)
                    {
                        const int currentPixel = (iCurrentLine * m_pImgBuffer[iCurrentPreview]->dimensions.width) + iCurrentRow;
                        if (m_pImgBuffer[iCurrentPreview]->pImgData[currentPixel])
                        {
                            nLeftMost = min(nLeftMost, iCurrentRow);
                            nRightMost = max(nRightMost, iCurrentRow);
                            fThisLineUsed = true;
                        }
                    }

                    if (fThisLineUsed)
                    {
                        nFirstLine = min(nFirstLine, iCurrentLine);
                        nLastLine = max(nLastLine, iCurrentLine);
                    }
                }

                if (nLastLine && nRightMost)
                {
                    strInfo.Format(L"Trimming Analysis: Layer %u used space is %u to %u and %u to %u (%ux%u).\r\n", iCurrentPreview, nLeftMost, nRightMost, nFirstLine, nLastLine, 1 + nRightMost - nLeftMost, 1 + nLastLine - nFirstLine);
                }
                else
                {
                    strInfo.Format(L"Trimming Analysis: Layer %u is unused.\r\n", iCurrentPreview);
                }
                OutputDebugString(strInfo.GetString());
            }

            if (fNormalizeForStack)
            {
                nLeftMost = min(nLeftMost, nStackLeftMost);
                nRightMost = max(nRightMost, nStackRightMost);
                nFirstLine = min(nFirstLine, nStackFirstLine);
                nLastLine = max(nLastLine, nStackLastLine);
            }

            // Check if things are modified, but add +1 for the 0-based image layout values
            if (nLastLine && nRightMost &&
                (nLeftMost || nFirstLine || (nCurrentWidth != (nRightMost + 1)) || (nCurrentHeight != (nLastLine + 1))))
            {
                // Trim as needed
                const int true_width = 1 + (nRightMost - nLeftMost);
                const int true_height = 1 + (nLastLine - nFirstLine);
                const int trim_length = true_width * true_height;

                strInfo.Format(L"Trimming: converting layer %u's %ux%u image to a %ux%u image.\r\n", iCurrentPreview, m_pImgBuffer[iCurrentPreview]->dimensions.width, m_pImgBuffer[iCurrentPreview]->dimensions.height,
                    true_width, true_height);
                OutputDebugString(strInfo.GetString());

                std::vector<uint8_t> pTrimmedBuffer(trim_length);

                int iFilledPos = 0;
                const int nDataLen = static_cast<int>(m_vSpriteOverrideTextures.at(iCurrentPreview).pixels.size());
                const int width = m_vSpriteOverrideTextures.at(iCurrentPreview).dimensions.width;

                for (int iPos = 0; iPos < nDataLen; iPos++)
                {
                    const int xPos = (iPos % width);
                    const int yPos = static_cast<int>(floor(static_cast<double>(iPos) / width));

                    if ((yPos < nFirstLine) || (xPos < nLeftMost) || (xPos > nRightMost))
                    {
                        continue;
                    }
                    else if (yPos > nLastLine)
                    {
                        break;
                    }

                    pTrimmedBuffer[iFilledPos++] = m_vSpriteOverrideTextures.at(iCurrentPreview).pixels.at(iPos);
                }

                m_vSpriteOverrideTextures.at(iCurrentPreview).pixels = pTrimmedBuffer;

                m_pImgBuffer[iCurrentPreview]->dimensions = m_vSpriteOverrideTextures.at(iCurrentPreview).dimensions = { static_cast<int>(true_width), static_cast<int>(true_height) };
                m_pImgBuffer[iCurrentPreview]->pImgData = m_vSpriteOverrideTextures[iCurrentPreview].pixels.data();

                _UpdateCompositionDisplayRect(iCurrentPreview, { true_width, true_height });

                strInfo.Format(L"Trimmed %ux%u preview down to %ux%u.", nCurrentWidth, nCurrentHeight, true_width, true_height);
                GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());
            }
        }
    }
}

// This is run to normalize image dimensions to ensure best display and export
void CImgDisp::_ResizeImageStack(bool fIsFullStackReplacement)
{
    int nMaxWidth = 0, nMaxHeight = 0;
    bool fNeedsChange = false;

    _TrimLoadedCustomImages(fIsFullStackReplacement);

    for (int iCurrentPreview = 0; iCurrentPreview < m_nImgAmt; iCurrentPreview++)
    {
        if (m_pImgBuffer[iCurrentPreview] && m_pImgBuffer[iCurrentPreview]->dimensions.width)
        {
            if (nMaxWidth && ((nMaxWidth != m_pImgBuffer[iCurrentPreview]->dimensions.width) ||
                              (nMaxHeight != m_pImgBuffer[iCurrentPreview]->dimensions.height)))
            {
                fNeedsChange = true;
                // keep going: we want to establish max max width
            }

            nMaxWidth = max(nMaxWidth, m_pImgBuffer[iCurrentPreview]->dimensions.width);
            nMaxHeight = max(nMaxHeight, m_pImgBuffer[iCurrentPreview]->dimensions.height);
        }
    }

    if (fNeedsChange)
    {
        CString strInfo;

        for (int iCurrentPreview = 0; iCurrentPreview < m_nImgAmt; iCurrentPreview++)
        {
            if (m_pImgBuffer[iCurrentPreview] && m_pImgBuffer[iCurrentPreview]->dimensions.width)
            {
                if ((m_pImgBuffer[iCurrentPreview]->dimensions.width != nMaxWidth) ||
                    (m_pImgBuffer[iCurrentPreview]->dimensions.height != nMaxHeight))
                {
                    // We're just going to brute force shift everything up to upper left.
                    const int nPadWidth = nMaxWidth - m_pImgBuffer[iCurrentPreview]->dimensions.width;
                    const int nPadHeight = nMaxHeight - m_pImgBuffer[iCurrentPreview]->dimensions.height;
                    const int oldwidth = m_pImgBuffer[iCurrentPreview]->dimensions.width;
                    const int oldheight = m_pImgBuffer[iCurrentPreview]->dimensions.height;

                    std::vector<unsigned char> rgNewData(nMaxWidth * nMaxHeight);

                    for (int iCurrentLine = 0; iCurrentLine < m_pImgBuffer[iCurrentPreview]->dimensions.height; iCurrentLine++)
                    {
                        for (int iCurrentRow = 0; iCurrentRow < m_pImgBuffer[iCurrentPreview]->dimensions.width; iCurrentRow++)
                        {
                            rgNewData[(iCurrentLine * nMaxWidth) + iCurrentRow] = m_pImgBuffer[iCurrentPreview]->pImgData[(iCurrentLine * m_pImgBuffer[iCurrentPreview]->dimensions.width) + iCurrentRow];
                        }
                    }

                    // Anything that gets resized (even inbox images) gets converted over to a replacement texture
                    m_vSpriteOverrideTextures[iCurrentPreview].pixels = rgNewData;
                    m_pImgBuffer[iCurrentPreview]->dimensions = m_vSpriteOverrideTextures[iCurrentPreview].dimensions = { nMaxWidth, nMaxHeight };
                    m_pImgBuffer[iCurrentPreview]->pImgData = m_vSpriteOverrideTextures[iCurrentPreview].pixels.data();

                    strInfo.Format(L"Warning: had to resize image at layer %u from %ux%u to %ux%u!\r\n", iCurrentPreview, oldwidth, oldheight, nMaxWidth, nMaxHeight);
                    OutputDebugString(strInfo.GetString());
                }
            }

            _UpdateCompositionDisplayRect(iCurrentPreview, { nMaxWidth, nMaxHeight });
        }

        strInfo.Format(L"Resized previews to match total preview size %ux%u.", nMaxWidth, nMaxHeight);
        GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());
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
    CString strMsg;

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
                    if ((currTransparencyWriteMode == PALWriteOutputOptions::WRITE_16) &&
                        ((nCheckAgainstColor % 16) == 0))
                    {
                        // ignore transparency bytes
                        continue;
                    }

                    if (clrChecking == m_pImgBuffer[nCheckAgainstPalette]->pPalette[nCheckAgainstColor])
                    {
                        fCurrentPaletteIsNotMappingFriendly = true;

                        strMsg.Format(L"This is not a mapping-safe palette.  The colors at palette %u color %u and palette %u color %u (0x%x) are the same.\r\n", nStartCheckPalette, nCheckColor, nCheckAgainstPalette, nCheckAgainstColor, clrChecking);
                        OutputDebugString(strMsg.GetString());

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
    const bool fMayBeCPSSource = currColMode == ColMode::COLMODE_RGB444_BE;
    const bool fMightBeKawaksScreenshot = (fMayBeCPSSource || (currColMode == ColMode::COLMODE_RGB666_NEOGEO));
    // This is loose but currently true for the games we support
    // Kawaks uses skewed CPS1/2 color math.
    // For NeoGeo Kawaks is using a RGB555 sprite layer
    bool fUseWinKawaksShift = fMightBeKawaksScreenshot && GetPreviewDropWinKawaksFirst();

    if (fUseWinKawaksShift)
    {
        OutputDebugString(L"Using WinKawaks math for matching.\r\n");
    }

    const bool fIsARGB = ((static_cast<size_t>(nDataLen) * 4) == nImageSize);
    const bool fIsRGB = ((static_cast<size_t>(nDataLen) * 3) == nImageSize);
    bool fFoundOne = false;
    unsigned nFirstLine = height, nLastLine = 0, nLeftMost = width, nRightMost = 0;

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
            if (fMayBeCPSSource)
            {
                r = (r >> 4) * 17;
                g = (g >> 4) * 17;
                b = (b >> 4) * 17;
            }
            else // NeoGeo confusion
            {
                // they're using RGB555 for RGB666
                // that's a functional collapse of the bright/dark bit, just using the bright colors
                // so just map back to bright NG colors
                r = ColorSystem::GetNEOGEOColorFromWinKawaksRGB555(r);
                g = ColorSystem::GetNEOGEOColorFromWinKawaksRGB555(g);
                b = ColorSystem::GetNEOGEOColorFromWinKawaksRGB555(b);
            }
        }

        // filter each color, sadly
        const COLORREF colThisColor = RGB(r, g, b);

        if (a != 0) // ignore background color
        {
            int nCurrentPalette = pnPositionToLoadTo ? *pnPositionToLoadTo : 0;
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
                        m_vSpriteOverrideTextures.at(nCurrentPalette).pixels.at(iPos) = static_cast<uint8_t>(iPalPos);

                        break;
                    }
                }

                if (pnPositionToLoadTo || fFoundThisColor)
                {
                    break;
                }
            }
        }

        if (((iPos + 1) == nDataLen) && !fFoundOne && !fUseWinKawaksShift && fMightBeKawaksScreenshot)
        {
            fUseWinKawaksShift = true;
            OutputDebugString(L"No color matches found: trying again using WinKawaks math.\r\n");
            iPos = 0;
            _ResizeAndBlankCustomPreviews(pnPositionToLoadTo, nDataLen);
        }
    }

    m_vSpriteOverrideTextures.at(pnPositionToLoadTo ? *pnPositionToLoadTo : 0).dimensions = { static_cast<int>(width), static_cast<int>(height) };

    strMsg.Format(L"Loaded %u x %u RGB PNG preview.", width, height);

    if (!pnPositionToLoadTo)
    {
        for (signed int nCurrentLayer = 0; nCurrentLayer < m_nImgAmt; nCurrentLayer++)
        {
            m_vSpriteOverrideTextures.at(nCurrentLayer).dimensions = m_vSpriteOverrideTextures.at(0).dimensions;

            _FlipImageDataIfNeeded(direction, m_vSpriteOverrideTextures.at(nCurrentLayer).pixels, m_vSpriteOverrideTextures.at(nCurrentLayer).dimensions.width, m_vSpriteOverrideTextures.at(nCurrentLayer).dimensions.height);

            AddImageNode(nCurrentLayer, m_vSpriteOverrideTextures.at(nCurrentLayer).dimensions.width, m_vSpriteOverrideTextures.at(nCurrentLayer).dimensions.height, m_vSpriteOverrideTextures.at(nCurrentLayer).pixels.data(),
                m_pImgBuffer[nCurrentLayer]->pPalette, m_pImgBuffer[nCurrentLayer]->uPalSz, 0, 0);
        }
    }
    else
    {
        _FlipImageDataIfNeeded(direction, m_vSpriteOverrideTextures.at(*pnPositionToLoadTo).pixels, m_vSpriteOverrideTextures.at(*pnPositionToLoadTo).dimensions.width, m_vSpriteOverrideTextures.at(*pnPositionToLoadTo).dimensions.height);

        AddImageNode(*pnPositionToLoadTo, m_vSpriteOverrideTextures.at(*pnPositionToLoadTo).dimensions.width, m_vSpriteOverrideTextures.at(*pnPositionToLoadTo).dimensions.height, m_vSpriteOverrideTextures.at(*pnPositionToLoadTo).pixels.data(),
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

std::vector<uint8_t> CImgDisp::_LoadTextureFromCImageSprite(wchar_t* pszTextureLocation, UINT& nPositionToLoadTo, sImageDimensions& suggestedImageSize, SpriteImportDirection& direction, SpriteImportCompositionStyle& compositionStyle, bool fShowAdvancedOptionsIfNeeded /* = false */)
{
    CImage sprite;
    std::vector<uint8_t> vNewOverrideTexture;

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

        suggestedImageSize.width = sprite.GetWidth();
        suggestedImageSize.height = sprite.GetHeight();

        const size_t nPixelCount = static_cast<size_t>(suggestedImageSize.width) * suggestedImageSize.height;

        vNewOverrideTexture.resize(nPixelCount);

        if (sprite.GetPitch() > 0)
        {
            size_t iPos = 0;

            for (int yPos = 0; yPos < suggestedImageSize.height; yPos++)
            {
                for (int xPos = 0; xPos < suggestedImageSize.width; xPos++)
                {
                    const COLORREF curColor = sprite.GetPixel(xPos, yPos);
                    const uint8_t nColorIndex = (GetRValue(curColor) + GetGValue(curColor) + GetBValue(curColor));

                    vNewOverrideTexture.at(iPos) = nColorIndex;
                    iPos++;
                }
            }
        }
        else
        {
            // We're flipped: flip the logic.
            size_t iPos = nPixelCount - 1;
            for (int yPos = suggestedImageSize.height - 1; yPos >= 0; yPos--)
            {
                for (int xPos = suggestedImageSize.width - 1; xPos >= 0; xPos--)
                {
                    const COLORREF curColor = sprite.GetPixel(xPos, yPos);
                    const uint8_t nColorIndex = (GetRValue(curColor) + GetGValue(curColor) + GetBValue(curColor));

                    vNewOverrideTexture.at(iPos) = nColorIndex;
                    iPos--;
                }
            }
        }

        if (fShowAdvancedOptionsIfNeeded)
        {
            if (!GetUserOptionsForTextureOverride(static_cast<int>(nPixelCount), suggestedImageSize,
                                                  m_nImgAmt, m_pImgBuffer, m_vSpriteOverrideTextures, nPositionToLoadTo, direction, &compositionStyle))
            {
                vNewOverrideTexture.clear();
            }
        }

        if (vNewOverrideTexture.size())
        {
            // Apply flip options if needed
            _FlipImageDataIfNeeded(direction, vNewOverrideTexture, suggestedImageSize.width, suggestedImageSize.height);
        }
    }

    return vNewOverrideTexture;
}

bool CImgDisp::LoadExternalCImageSprite(UINT nPositionToLoadTo, SpriteImportDirection direction, wchar_t* pszTextureLocation, bool fShowAdvancedOptionsIfNeeded /* = true */)
{
    SpriteImportCompositionStyle compositionStyle = SpriteImportCompositionStyle::Replace;
    sImageDimensions imageSize;

    std::vector<uint8_t> vNewOverrideTexture = _LoadTextureFromCImageSprite(pszTextureLocation, nPositionToLoadTo, imageSize, direction, compositionStyle, fShowAdvancedOptionsIfNeeded);

    if (vNewOverrideTexture.size())
    {
        _CompositeTexture(vNewOverrideTexture, nPositionToLoadTo, imageSize.height, imageSize.width, direction, compositionStyle);

        _UpdatePreviewForExternalSprite(&nPositionToLoadTo);

        CString strInfo;
        strInfo.Format(L"Loaded %u x %u image as a preview.", imageSize.width, imageSize.height);
        GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());
        strInfo += "\r\n";
        OutputDebugString(strInfo.GetString());

        return true;
    }
    else
    {
        CString strInfo = L"Failed to load this image.  Animated GIFs are not supported as replacement previews.";
        MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONERROR);
        GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());
        strInfo += "\r\n";
        OutputDebugString(strInfo.GetString());

        return false;
    }
}

bool CImgDisp::LoadExternalPNGSprite(UINT* pnPositionToLoadTo, SpriteImportDirection direction, wchar_t* pszTextureLocation, bool fShowAdvancedOptionsIfNeeded /* = true */, bool fForceNonIndexed /* = false */, bool fReversedColorTable /* = false */)
{
    bool fSuccess = false;
    bool fUserCanceled = false;
    bool fBadDimensions = false;
    std::wstring strErrorText = L"This PNG could not be loaded.";

    {
        CWaitCursor wait; // Show a wait cursor in this scope since this can be a lot of parsing
        GetHost()->GetPalModDlg()->SetStatusText(L"Analyzing this preview...");

        lodepng::State state;

        lodepng_state_init(&state);

        size_t nSize = 0;
        unsigned char* loadedAsFile = nullptr;
        unsigned char* loadedAsPNG = nullptr;

        if (lodepng_load_file(&loadedAsFile, &nSize, pszTextureLocation) == 0)
        {
            unsigned width = 0, height = 0;
            
            if (fForceNonIndexed)
            {
                OutputDebugString(L"Forcing image to be imported as non-indexed!\r\n");
                state.decoder.color_convert = 1;
                state.info_raw.colortype = LodePNGColorType::LCT_RGB;
            }
            else
            {
                state.decoder.color_convert = 0;
            }

            if (lodepng_decode(&loadedAsPNG, &width, &height, &state, loadedAsFile, nSize) == 0)
            {
                // Confusion: why isn't lodepng doing this?
                // Simple test to show the problem here: convert from Indexed to RGB: state.info_png is Indexed @_@ 
                state.info_png.color.colortype = state.info_raw.colortype;

                // We know the gist of this image: let's confirm user options if appropriate
                if (fShowAdvancedOptionsIfNeeded && pnPositionToLoadTo)
                {
                    sImageDimensions imageSize = { static_cast<int>(width), static_cast<int>(height) };
                    fUserCanceled = !GetUserOptionsForTextureOverride(width * height, imageSize, m_nImgAmt, m_pImgBuffer, m_vSpriteOverrideTextures, *pnPositionToLoadTo, direction, nullptr);
                    width = imageSize.width;
                    height = imageSize.height;
                }

                if (!fUserCanceled)
                {
                    // This part commented out since we currently handle this via resizing everything if needed in ResizeImageStack
#ifdef WantToBlockMismatchedDimensions
                    bool fDimensionsAreUnsafe = false;

                    // overly simplified check to avoid crazed autolayouts
                    if (pnPositionToLoadTo)
                    {
                        fDimensionsAreUnsafe = (((*pnPositionToLoadTo != 0) && m_pImgBuffer[0] && m_pImgBuffer[0]->pImgData && ((m_pImgBuffer[0]->dimensions.height != height) || (m_pImgBuffer[0]->dimensions.width != width))) ||
                                                ((*pnPositionToLoadTo == 0) && m_pImgBuffer[1] && m_pImgBuffer[1]->pImgData && ((m_pImgBuffer[1]->dimensions.height != height) || (m_pImgBuffer[1]->dimensions.width != width))));
                    }
                    else if (state.info_png.color.colortype == LodePNGColorType::LCT_PALETTE)
                    {
                        // We are loading an indexed PNG into slot 0, at least.
                    }

                    if (fDimensionsAreUnsafe)
                    {
                        // In theory even if the user injects something here we shouldn't load it, but this at least prevents the bad auto case.
                        OutputDebugString(L"ERROR: custom preview not loaded due to dimensions not matching image 0 and or 1.\r\n");
                        // Note that the status text won't show up during auto-import of a bad preview since we set status to the palette name at end of load.
                        strErrorText = L"Custom preview not loaded due to dimensions not matching the primary preview.";
                        fSuccess = false;
                    }
                    else
#endif
                    {
                        if (state.info_png.color.colortype == LodePNGColorType::LCT_PALETTE)
                        {
                            _ImportAndSplitSpriteComposition(direction, pnPositionToLoadTo, loadedAsPNG, width, height, state.info_png.color.palettesize, fReversedColorTable);

                            // We handle RGB status update inside that logic, since it can be slightly different
                            CString strMsg;
                            if (pnPositionToLoadTo)
                            {
                                strMsg.Format(L"Loaded %u x %u indexed PNG as a preview for palette %u.", width, height, *pnPositionToLoadTo);
                            }
                            else
                            {
                                strMsg.Format(L"Loaded %u x %u indexed PNG as a preview.", width, height);
                            }
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
                }

                free(loadedAsPNG);
            }

            free(loadedAsFile);
        }
    }
    
    if (fSuccess)
    {
        _UpdatePreviewForExternalSprite(pnPositionToLoadTo);

        return true;
    }
    else
    {
        if (!fUserCanceled)
        {
            MessageBox(strErrorText.c_str(), GetHost()->GetAppName(), MB_ICONERROR);
        }

        GetHost()->GetPalModDlg()->SetStatusText(strErrorText.c_str());

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

    // There are two basic paths here:
    // If given a specific position to inject to we just update that slot
    // If not, we presume it's a full stack reset and update all
    for (int iLoadPos = nPositionToLoadTo; iLoadPos < m_nImgAmt; iLoadPos++)
    {
        if (m_pImgBuffer[iLoadPos])
        {
            // Override but use the stock palette
            AddImageNode(iLoadPos, m_vSpriteOverrideTextures.at(iLoadPos).dimensions.width, m_vSpriteOverrideTextures.at(iLoadPos).dimensions.height, m_vSpriteOverrideTextures.at(iLoadPos).pixels.data(),
                m_pImgBuffer[iLoadPos]->pPalette, m_pImgBuffer[iLoadPos]->uPalSz, 0, 0);
        }
        else
        {
            // We really wanted the palette from pImgBuffer, but oh well we'll just use the backup palette
            AddImageNode(iLoadPos, m_vSpriteOverrideTextures.at(iLoadPos).dimensions.width, m_vSpriteOverrideTextures.at(iLoadPos).dimensions.height, m_vSpriteOverrideTextures.at(iLoadPos).pixels.data(),
                m_pBackupPaletteDef->pPal, m_pBackupPaletteDef->uPalSz, 0, 0);
        }

        if (pnPositionToLoadTo)
        {
            // Just stomp this specific layer
            break;
        }
    }

    _ResizeImageStack(pnPositionToLoadTo == nullptr);

    if (!nPositionToLoadTo)
    {
        _ResetForNewImage();
    }
}

BOOL CImgDisp::CustomBlt(int nSrcIndex, int xWidth, int yHeight, bool fUseBlinkPal)
{
    if ((m_MainLayout.width <= 0) || (m_MainLayout.height <= 0))
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
        nWidth = m_pImgBuffer[nSrcIndex]->dimensions.width;
        nHeight = m_pImgBuffer[nSrcIndex]->dimensions.height;
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

    if (m_Settings.eBlendMode != BlendMode::Default)
    {
        eBlendMode = m_Settings.eBlendMode;
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

    if (rBltRct.right > m_MainLayout.width)
    {
        rBltRct.right = m_MainLayout.width;
    }

    if (rBltRct.bottom > m_MainLayout.height)
    {
        rBltRct.bottom = m_MainLayout.height;
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
        const int nStartRow = (rBltRct.top + ((nBltH - 1) - yIndex)) * (m_MainLayout.width * 4) + (rBltRct.left * 4);
        const int nSrcStartRow = ((yIndex + nSrcY) * nWidth) + nSrcX;

        for (int xIndex = 0; xIndex < nBltW * 4; xIndex += 4)
        {
            const uint8_t uPaletteIndex = pImgData[nSrcStartRow + (xIndex / 4)];

            if ((uPaletteIndex % nMaxWritePerTransparency) != nTransparencyPosition)
            {
                int nDstPos = nStartRow + xIndex;
                const int nCurrentColorPosition = uPaletteIndex * 4; // we walk the uint8_t array at COLORREF size strides

                if (nCurrentColorPosition > nPalSizeInUint8)
                {
                    // this is a badly crafted image for this palette.
                    if (!fShownErrorForThisImage)
                    {
                        CString strError;
                        strError.Format(L"ERROR: This %u by %u image at image load index %u has out-of-bound color references and should be fixed.  Requested 0x%x but palette maxes at 0x%x.\r\n",
                                            nWidth, nHeight, nSrcIndex, uPaletteIndex, static_cast<uint16_t>(nPalSizeInUint8 / 4));
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

    m_fpDiffs.x = 0.0f;
    m_fpDiffs.y = 0.0f;

    CWnd::OnLButtonDown(nFlags, point);
}

void CImgDisp::OnMouseMove(UINT nFlags, CPoint point)
{
    if (m_bLButtonDown && (m_nImgAmt || m_bCtrlDown))
    {
        m_fpDiffs.x += (static_cast<double>(m_ptLastMouse.x) - static_cast<double>(point.x)) / m_Settings.dPreviewZoom;
        m_fpDiffs.y += (static_cast<double>(m_ptLastMouse.y) - static_cast<double>(point.y)) / m_Settings.dPreviewZoom;

        int nAdd = 1;

        if (m_fpDiffs.x < 0)
        {
            nAdd = -nAdd;
        }

#ifndef SETIMGPOS

        if (m_bCtrlDown && !m_Settings.fTileBG)
        {
            while (fabs(m_fpDiffs.x) >= 1.0f)
            {
                m_Settings.nBGBMPOffsets.x -= nAdd;
                m_fpDiffs.x -= static_cast<double>(nAdd);
            }
        }
        else
        {
            while (fabs(m_fpDiffs.x) >= 1.0f)
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

                m_fpDiffs.x -= static_cast<double>(nAdd);
            }
        }
#endif
        nAdd = 1;

        if (m_fpDiffs.y < 0)
        {
            nAdd = -nAdd;
        }

#ifndef SETIMGPOS

        if (m_bCtrlDown && !m_Settings.fTileBG)
        {
            while (fabs(m_fpDiffs.y) >= 1.0f)
            {
                m_Settings.nBGBMPOffsets.y -= nAdd;
                m_fpDiffs.y -= static_cast<double>(nAdd);
            }
        }
        else
        {
            while (fabs(m_fpDiffs.y) >= 1.0f)
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

                m_fpDiffs.y -= static_cast<double>(nAdd);
            }
        }

#else

        int nImgIndex = SETIMGINDEX;

        pImgBuffer[nImgIndex]->offsets.x -= static_cast<int>(fpDiffX);
        pImgBuffer[nImgIndex]->offsets.y -= static_cast<int>(fpDiffY);
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
            GetHost()->GetPalModDlg()->SelectMatchingColorsInPalette(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(), m_Settings.prev_bgcol);
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
                GetHost()->GetPalModDlg()->SelectMatchingColorsInPalette(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(point.x, point.y), m_Settings.prev_bgcol);
                break;
            case CUSTOM_COPYCOLOR:
                GetHost()->GetPalModDlg()->CopyColorToClipboard(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(point.x, point.y));
                break;
            case CUSTOM_PASTECOLOR:
                if (GetHost()->GetPalModDlg()->SelectMatchingColorsInPalette(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(point.x, point.y), m_Settings.prev_bgcol))
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
