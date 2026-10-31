// ImgDisp.cpp : implementation file
//
#include "stdafx.h"
#include <atlimage.h>
#include "ImgDisp.h"
#include "PalMod.h"

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
#ifdef DEBUG
    OutputDebugString(L"CImgDisp::ResetImageCompositionLayout called.\r\n\r\n");
#endif

    memset(m_bUsed, 0, sizeof(uint8_t) * MAX_IMAGES_DISPLAYABLE);
    m_rImgRct.SetRectEmpty();

    m_ImageOffsets.x = 0;
    m_ImageOffsets.y = 0;
    m_PreviewDimensions.width = 0;
    m_PreviewDimensions.height = 0;

    // reset offsets
    for (uint32_t iPos = 0; iPos < ARRAYSIZE(m_ptOffs); iPos++)
    {
        m_ptOffs[iPos].x = m_ptOffs[iPos].y = 0;
    }
}

// Called after preview images are set in place so that we know what the layout rects should be
void CImgDisp::_AdjustLayoutForNewlyLoadedImage()
{
#ifdef DEBUG
    OutputDebugString(L"CImgDisp::_AdjustLayoutForNewlyLoadedImage called.\r\n");
#endif

    m_rImgRct.right += abs(m_rImgRct.left);
    m_rImgRct.left = 0;

    m_rImgRct.bottom += abs(m_rImgRct.top);
    m_rImgRct.top = 0;

    m_PreviewDimensions.width = m_rImgRct.Width();
    m_PreviewDimensions.height = m_rImgRct.Height();

    ModifySrcRect();

    _ResizeMainBitmap();
}

void CImgDisp::ResetCustomSpriteOverride(size_t nLayer)
{
    if (m_vSpriteOverrideTextures.at(nLayer).indexedPixels.size())
    {
#ifdef DEBUG
        CString strMsg;
        strMsg.Format(L"CImgDisp::ResetCustomSpriteOverride: Clearing custom sprite overrides for layer %u.\r\n", nLayer);
        OutputDebugString(strMsg.GetString());
#endif

        if (m_pImgBuffer[nLayer])
        {
            m_pImgBuffer[nLayer]->pImgData = nullptr;
            m_pImgBuffer[nLayer]->dimensions = {};
        }
    }

    m_vSpriteOverrideTextures.at(nLayer).indexedPixels.clear();
    m_vSpriteOverrideTextures.at(nLayer).dimensions = {};
}

bool CImgDisp::GetDisplayedTextureForLayer(size_t nLayer, sTextureData& texture)
{
    if (m_vSpriteOverrideTextures.at(nLayer).indexedPixels.size())
    {
        texture = m_vSpriteOverrideTextures.at(nLayer);
    }
    else if (m_pImgBuffer[nLayer] && m_pImgBuffer[nLayer]->pImgData)
    {
        texture.dimensions = m_pImgBuffer[nLayer]->dimensions;
        texture.indexedPixels = { &m_pImgBuffer[nLayer]->pImgData[0], &m_pImgBuffer[nLayer]->pImgData[texture.dimensions.GetPixelCount()] };
    }

    return !texture.indexedPixels.empty();
}

// This is called when the user is doing a full stack replacement (such as dropping an RGB preview)
void CImgDisp::FlushInternalSprites()
{
    for (int iImageIndex = 0; iImageIndex < m_nImgAmt; iImageIndex++)
    {
        if (m_pImgBuffer[iImageIndex])
        {
            m_pImgBuffer[iImageIndex]->pImgData = nullptr;
            m_pImgBuffer[iImageIndex]->dimensions = {};
        }
    }
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

        _AdjustLayoutForNewlyLoadedImage();
    }

    if (!fKeepImageCache)
    {
        FlushCustomSpriteOverrides();
    }
}

void CImgDisp::_UpdateCompositionDisplayRect(int nLayer, sImageDimensions dimensions, bool fForceThisAsBackmostLayer /* = false */)
{
    if (nLayer)
    {
        if ((abs(m_ptOffs[nLayer].x) + dimensions.width) > m_rImgRct.right)
        {
            m_rImgRct.right = abs(m_ptOffs[nLayer].x) + dimensions.width;
        }

        if ((abs(m_ptOffs[nLayer].y) + dimensions.height) > m_rImgRct.bottom)
        {
            m_rImgRct.bottom = abs(m_ptOffs[nLayer].y) + dimensions.height;
        }
    }
    
    if (!nLayer || ((m_rImgRct.right - m_rImgRct.left) == 0) || fForceThisAsBackmostLayer)
    {
        // 0th position sets the foundation for display
        m_rImgRct.right = abs(m_ptOffs[nLayer].x) + dimensions.width;
        m_rImgRct.bottom = abs(m_ptOffs[nLayer].y) + dimensions.height;
    }

#ifdef DEBUG
    CString strMsg;
    strMsg.Format(L"CImgDisp::_UpdateCompositionDisplayRect: Layer %u: total display rect %u x %u for image dimensions %u x %u with offsets %i x %i\r\n", nLayer, m_rImgRct.right, m_rImgRct.bottom, dimensions.width, dimensions.height, m_ptOffs[nLayer].x, m_ptOffs[nLayer].y);
    OutputDebugString(strMsg.GetString());
#endif
}

void CImgDisp::AddImageNode(int nIndex, int uImgW, int uImgH, uint8_t* pImgData, COLORREF* pPalette, uint16_t uPalSz, int nXOffs, int nYOffs, BlendMode eBlendMode /* = BlendMode::Alpha */)
{
#ifdef DEBUG
    CString strMsg;
#endif

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
        MessageBox(L"ERROR: too many palettes requested.  Please report this issue and what palette you were trying to edit so we can fix this.", GetHost()->GetAppName(), MB_ICONERROR);
        return;
    }

#ifdef DEBUG
    strMsg.Format(L"CImgDisp::AddImageNode: add %i: requested %u x %u, offset by %i x %i.\r\n", nIndex, uImgW, uImgH, nXOffs, nYOffs);
    OutputDebugString(strMsg.GetString());
#endif

    if (m_pImgBuffer[nIndex])
    {
        FlushImageNode(nIndex);
    }

    m_pImgBuffer[nIndex] = pNewNode;

    //Set used
    m_bUsed[nIndex] = 1;

    // The zero image defines the bounding rect
    int nMaxWidth = uImgW, nMaxHeight = uImgH;

    bool fThisIsLikelyBackmostPreview = (nIndex == 0);

    if (!fThisIsLikelyBackmostPreview)
    {
        // double-check we've established the layout
        if ((m_rImgRct.right - m_rImgRct.left) == 0)
        {
            fThisIsLikelyBackmostPreview = true;
        }            
    }

    if (fThisIsLikelyBackmostPreview)
    {
        // If the user custom loads an unexpectedly sized image for layer 0, we do weird things in terms of offset.
        // Without this logic, image 0 is centered, and then further images are drawn within that specific bounding rect.
        // That results in most of their content being shown in the upper right of the composition.
        // We can do a quick pass here to ensure that the bounding rect for 0 is optimized.
        // Note that mismatched image sizes is a bad plan in general, but this should make it slightly less annoying.
        // The logic here isn't perfect, but it at least is a more presentable preview.
        // Note that mismatched preview sizes is going to cause problems, so avoid that.
        if (m_vSpriteOverrideTextures.at(nIndex).indexedPixels.size())
        {
            for (int iLayer = nIndex + 1; iLayer < MAX_IMAGES_DISPLAYABLE; iLayer++)
            {
                if (m_pImgBuffer[iLayer])
                {
                    sImageDimensions& dimensionsToUse = m_vSpriteOverrideTextures.at(iLayer).indexedPixels.size() ? m_vSpriteOverrideTextures.at(iLayer).dimensions : m_pImgBuffer[iLayer]->dimensions;

#ifdef DEBUG
                    strMsg.Format(L"CImgDisp::AddImageNode: custom layer override %u: requested %u x %u.\r\n", iLayer, dimensionsToUse.width, dimensionsToUse.height);
                    OutputDebugString(strMsg.GetString());
#endif

                    nMaxWidth = max(nMaxWidth, dimensionsToUse.width);
                    nMaxHeight = max(nMaxHeight, dimensionsToUse.height);
                }
            }

#ifdef DEBUG
            strMsg.Format(L"CImgDisp::AddImageNode: custom layer override: set %u x %u as layout.\r\n", nMaxWidth, nMaxHeight);
            OutputDebugString(strMsg.GetString());
#endif
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

    // set this so we can composite correctly
    m_ptOffs[nIndex].x = nXOffs;
    m_ptOffs[nIndex].y = nYOffs;

    _UpdateCompositionDisplayRect(nIndex, { nMaxWidth, nMaxHeight }, fThisIsLikelyBackmostPreview);

#ifdef DEBUG
    strMsg.Format(L"\tCImgDisp::AddImageNode: add %i: set display offset to %i x %i\r\n", nIndex, m_ptOffs[nIndex].x, m_ptOffs[nIndex].y);
    OutputDebugString(strMsg.GetString());
#endif

    //Add image amount
    m_nImgAmt++;
}

void CImgDisp::UpdateImgPalette(int nIndex, COLORREF* pPalette, uint16_t nPalSz)
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
    sImageDimensions ViewportDimensions = { m_rViewportRct.right,  m_rViewportRct.bottom };

    if (ViewportDimensions.width > m_PreviewDimensions.width)
    {
        m_MainLayout.width = ViewportDimensions.width * 2 - m_PreviewDimensions.width;
    }
    else
    {
        m_MainLayout.width = m_PreviewDimensions.width;
    }

    if (ViewportDimensions.height > m_PreviewDimensions.height)
    {
        m_MainLayout.height = ViewportDimensions.height * 2 - m_PreviewDimensions.height;
    }
    else
    {
        m_MainLayout.height = m_PreviewDimensions.height;
    }

    m_rSrcRct.top = (m_MainLayout.height / 2) - static_cast<int>(static_cast<double>(ViewportDimensions.height / 2) / m_Settings.dPreviewZoom);
    m_rSrcRct.left = (m_MainLayout.width / 2) - static_cast<int>(static_cast<double>(ViewportDimensions.width / 2) / m_Settings.dPreviewZoom);
    m_rSrcRct.bottom = m_rSrcRct.top + static_cast<int>(static_cast<double>(ViewportDimensions.height) / m_Settings.dPreviewZoom);
    m_rSrcRct.right = m_rSrcRct.left + static_cast<int>(static_cast<double>(ViewportDimensions.width) / m_Settings.dPreviewZoom);

    m_rImgRct.left = -(m_PreviewDimensions.width / 2) + (m_MainLayout.width / 2);
    m_rImgRct.right = (m_PreviewDimensions.width / 2) + (m_MainLayout.width / 2);
    m_rImgRct.top = -(m_PreviewDimensions.height / 2) + (m_MainLayout.height / 2);
    m_rImgRct.bottom = (m_PreviewDimensions.height / 2) + (m_MainLayout.height / 2);

#ifdef DEBUG
    CString strMsg;

    // start with the ingredients
    strMsg.Format(L"CImgDisp::ModifySrcRect:\r\n\tViewportDimensions: %u x %u\r\n", ViewportDimensions.width, ViewportDimensions.height);
    OutputDebugString(strMsg.GetString());
    strMsg.Format(L"\tImageOffsets: %i x %i\r\n", m_ImageOffsets.x, m_ImageOffsets.y);
    OutputDebugString(strMsg.GetString());
    strMsg.Format(L"\tPreviewDimensions: %u x %u\r\n", m_PreviewDimensions.width, m_PreviewDimensions.height);
    OutputDebugString(strMsg.GetString());
    strMsg.Format(L"\tZoom: %f\r\n", m_Settings.dPreviewZoom);
    OutputDebugString(strMsg.GetString());
    // then the calculated values
    // viewport is negatively scaled by zoom
    strMsg.Format(L"\tSrcRect: w %u to %u, h %u to %u. Scaled viewport dimensions %u x %u\r\n", m_rSrcRct.left, m_rSrcRct.right, m_rSrcRct.top, m_rSrcRct.bottom, (m_rSrcRct.right - m_rSrcRct.left), (m_rSrcRct.bottom - m_rSrcRct.top));
    OutputDebugString(strMsg.GetString());
    strMsg.Format(L"\tImgRect: w %u to %u, h %u to %u. Preview dimensions %u x %u\r\n", m_rImgRct.left, m_rImgRct.right, m_rImgRct.top, m_rImgRct.bottom, (m_rImgRct.right - m_rImgRct.left), (m_rImgRct.bottom - m_rImgRct.top));
    OutputDebugString(strMsg.GetString());
    strMsg.Format(L"\tMainLayout: %u x %u\r\n", m_MainLayout.width, m_MainLayout.height);
    OutputDebugString(strMsg.GetString());
#endif
}

void CImgDisp::ModifyClRect()
{
    GetClientRect(&m_rViewportRct);
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
            m_rViewportRct.left,
            m_rViewportRct.top,
            m_rViewportRct.right,
            m_rViewportRct.bottom,
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

BOOL CImgDisp::OnEraseBkgnd(CDC* /* pDC */ )
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
             m_vSpriteOverrideTextures.at(nIndex).indexedPixels.size());
}

// TODO: since PreviewImport is the sole consumer, it might make a lot of sense to move this logic there
void CImgDisp::CompositeTexture(sTextureData incomingTexture, int nLayerToLoadTo, sSpriteImportOptions importPreviewOptions)
{
    CString strInfo;

    incomingTexture.FlipIfNeeded(importPreviewOptions.direction);

    // If it's Replace OR there's nothing to merge with
    if ((importPreviewOptions.compositionStyle == SpriteImportCompositionStyle::Replace) ||
        (m_vSpriteOverrideTextures.at(nLayerToLoadTo).indexedPixels.empty() && !m_pImgBuffer[nLayerToLoadTo]))
    {
        ResetCustomSpriteOverride(nLayerToLoadTo);

        m_vSpriteOverrideTextures.at(nLayerToLoadTo) = incomingTexture;

        strInfo.Format(L"CImgDisp::CompositeTexture: texture file for layer %u is: %u x %u\n", nLayerToLoadTo, m_vSpriteOverrideTextures.at(nLayerToLoadTo).dimensions.width, m_vSpriteOverrideTextures.at(nLayerToLoadTo).dimensions.height);
        OutputDebugString(strInfo.GetString());
        strInfo.Format(L"\tReplaced layer.\r\n");
        OutputDebugString(strInfo.GetString());
    }
    else // Merge options
    {
        // Cache old
        sTextureData previousOverrideTexture = m_vSpriteOverrideTextures.at(nLayerToLoadTo);
        const bool fHavePreviousOverride = previousOverrideTexture.indexedPixels.size();

        if (!fHavePreviousOverride)
        {
            previousOverrideTexture.indexedPixels = { &m_pImgBuffer[nLayerToLoadTo]->pImgData[0], &m_pImgBuffer[nLayerToLoadTo]->pImgData[m_pImgBuffer[nLayerToLoadTo]->dimensions.GetPixelCount()] };
            previousOverrideTexture.dimensions = m_pImgBuffer[nLayerToLoadTo]->dimensions;
        }

        m_vSpriteOverrideTextures.at(nLayerToLoadTo).dimensions.width = max(incomingTexture.dimensions.width, previousOverrideTexture.dimensions.width);
        m_vSpriteOverrideTextures.at(nLayerToLoadTo).dimensions.height = max(incomingTexture.dimensions.height, previousOverrideTexture.dimensions.height);

        if (previousOverrideTexture.indexedPixels.size())
        {
            strInfo.Format(L"CImgDisp::CompositeTexture:\r\n\tMerging: %u x %u source image with the %s %u x %u image.\r\n", incomingTexture.dimensions.width, incomingTexture.dimensions.height, fHavePreviousOverride ? L"custom" : L"in-box",
                                                    previousOverrideTexture.dimensions.width, previousOverrideTexture.dimensions.height);
            OutputDebugString(strInfo.GetString());

            switch (importPreviewOptions.compositionStyle)
            {
                case SpriteImportCompositionStyle::MergeAbove:
                    previousOverrideTexture.Merge(incomingTexture, importPreviewOptions.offsets);
                    m_vSpriteOverrideTextures.at(nLayerToLoadTo) = previousOverrideTexture;
                    break;
                case SpriteImportCompositionStyle::MergeBelow:
                    incomingTexture.Merge(previousOverrideTexture, { -importPreviewOptions.offsets.width, -importPreviewOptions.offsets.height });
                    m_vSpriteOverrideTextures.at(nLayerToLoadTo) = incomingTexture;
                    break;
                case SpriteImportCompositionStyle::FlushLeft:
                    previousOverrideTexture.Merge(incomingTexture, { -incomingTexture.dimensions.width - importPreviewOptions.offsets.width, -importPreviewOptions.offsets.height });
                    m_vSpriteOverrideTextures.at(nLayerToLoadTo) = previousOverrideTexture;
                    break;
                case SpriteImportCompositionStyle::FlushRight:
                    previousOverrideTexture.Merge(incomingTexture, { previousOverrideTexture.dimensions.width + importPreviewOptions.offsets.width, importPreviewOptions.offsets.height });
                    m_vSpriteOverrideTextures.at(nLayerToLoadTo) = previousOverrideTexture;
                    break;
                case SpriteImportCompositionStyle::FlushTop:
                    previousOverrideTexture.Merge(incomingTexture, { -importPreviewOptions.offsets.width, -incomingTexture.dimensions.height - importPreviewOptions.offsets.height });
                    m_vSpriteOverrideTextures.at(nLayerToLoadTo) = previousOverrideTexture;
                    break;
                case SpriteImportCompositionStyle::FlushBottom:
                    previousOverrideTexture.Merge(incomingTexture, { importPreviewOptions.offsets.width, previousOverrideTexture.dimensions.height + importPreviewOptions.offsets.height });
                    m_vSpriteOverrideTextures.at(nLayerToLoadTo) = previousOverrideTexture;
                    break;
            }

            strInfo.Format(L"\tMerged: accounting for offsets leads to a %u x %u composited image.\r\n", m_vSpriteOverrideTextures.at(nLayerToLoadTo).dimensions.width, m_vSpriteOverrideTextures.at(nLayerToLoadTo).dimensions.height);
            OutputDebugString(strInfo.GetString());
        }
        else
        {
            strInfo.Format(L"\tNothing to merge with: skipping.\r\n");
            OutputDebugString(strInfo.GetString());
        }
    }
}

void CImgDisp::_ResizeAndBlankCustomPreviews(std::optional<int> optLayerToLoadTo, size_t nNewSize)
{
    for (int nLayer = optLayerToLoadTo.value_or(0); nLayer < static_cast<int>(m_nImgAmt); nLayer++)
    {
        ResetCustomSpriteOverride(nLayer);
        m_vSpriteOverrideTextures.at(nLayer).indexedPixels.resize(nNewSize);

        if (optLayerToLoadTo.has_value())
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
    if (GetTrimImportedPreviews())
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

        bool fToldOfTrimOnce = false;

        for (int iCurrentPreview = 0; iCurrentPreview < m_nImgAmt; iCurrentPreview++)
        {
            if (!m_pImgBuffer[iCurrentPreview]  || m_vSpriteOverrideTextures.at(iCurrentPreview).indexedPixels.empty())
            {
                // We only trim external drops
                continue;
            }

            const int nCurrentWidth = m_pImgBuffer[iCurrentPreview]->dimensions.width;
            const int nCurrentHeight = m_pImgBuffer[iCurrentPreview]->dimensions.height;

            if ((nCurrentWidth == nStackRightMost) && (nCurrentHeight == nStackLastLine))
            {
                strInfo.Format(L"CImgDisp::_TrimLoaded: Trimming Analysis: Layer %u matches expected stack size, skipping trim.\r\n", iCurrentPreview);
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
                    strInfo.Format(L"CImgDisp::_TrimLoaded: Trimming Analysis: Layer %u used space is %u to %u and %u to %u (%u x %u).\r\n", iCurrentPreview, nLeftMost, nRightMost, nFirstLine, nLastLine, 1 + nRightMost - nLeftMost, 1 + nLastLine - nFirstLine);
                }
                else
                {
                    strInfo.Format(L"CImgDisp::_TrimLoaded: Trimming Analysis: Layer %u is unused.\r\n", iCurrentPreview);
                }
                OutputDebugString(strInfo.GetString());
            }

            if (fNormalizeForStack)
            {
                nLeftMost = min(nLeftMost, nStackLeftMost);
                nRightMost = max(nRightMost, nStackRightMost);
                nFirstLine = min(nFirstLine, nStackFirstLine);
                nLastLine = max(nLastLine, nStackLastLine);

                strInfo.Format(L"\tWith normalization layer %u will be %u to %u and %u to %u (%u x %u).\r\n", iCurrentPreview, nLeftMost, nRightMost, nFirstLine, nLastLine, 1 + nRightMost - nLeftMost, 1 + nLastLine - nFirstLine);
                OutputDebugString(strInfo.GetString());
            }

            // Check if things are modified, but add +1 for the 0-based image layout values
            // Trim as needed
            if (m_vSpriteOverrideTextures.at(iCurrentPreview).Clip({ nLeftMost, nFirstLine, nRightMost, nLastLine }))
            {
                m_pImgBuffer[iCurrentPreview]->dimensions = m_vSpriteOverrideTextures.at(iCurrentPreview).dimensions;
                m_pImgBuffer[iCurrentPreview]->pImgData = m_vSpriteOverrideTextures[iCurrentPreview].indexedPixels.data();

                _UpdateCompositionDisplayRect(iCurrentPreview, m_vSpriteOverrideTextures.at(iCurrentPreview).dimensions);

                if (!fToldOfTrimOnce)
                {
                    // Don't just keep wildly appending.
                    strInfo.Format(L"  Resized to %u x %u.", m_vSpriteOverrideTextures.at(iCurrentPreview).dimensions.width,
                                                             m_vSpriteOverrideTextures.at(iCurrentPreview).dimensions.height);
                    GetHost()->GetPalModDlg()->AppendStatusText(strInfo.GetString());
                    fToldOfTrimOnce = true;
                }
            }
        }
    }
}

// This is run to normalize image dimensions to ensure best display and export
void CImgDisp::_ResizeImageStack(bool fIsFullStackReplacement)
{
    int nMaxWidth = 0, nMaxHeight = 0;
    bool fNeedsChange = false;
    bool fHasImageLayer0 = false;

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

            if (iCurrentPreview == 0)
            {
                fHasImageLayer0 = true;
            }
        }
    }

    if (!fHasImageLayer0 && (nMaxWidth != 0))
    {
        // we always want to stub in layer0 so that preview export works.
        // otherwise if you have an unused palette at the front of a stack you can't export
        std::vector<unsigned char> rgNewData(nMaxWidth * nMaxHeight);

        m_vSpriteOverrideTextures[0].indexedPixels = rgNewData;
        m_pImgBuffer[0]->dimensions = m_vSpriteOverrideTextures[0].dimensions = { nMaxWidth, nMaxHeight };
        m_pImgBuffer[0]->pImgData = m_vSpriteOverrideTextures[0].indexedPixels.data();

        OutputDebugString(L"CImgDisp::_ResizeImageStack: No image for layer 0 found, inserting dummy image.\r\n");
    }

    if (fNeedsChange)
    {
        CString strInfo;

        strInfo.Format(L"CImgDisp::_ResizeImageStack: Warning: mismatched presentation stack.  All images will be resized to %ux%u!\r\n", nMaxWidth, nMaxHeight);
        OutputDebugString(strInfo.GetString());

        for (int iCurrentPreview = 0; iCurrentPreview < m_nImgAmt; iCurrentPreview++)
        {
            if (m_pImgBuffer[iCurrentPreview] && m_pImgBuffer[iCurrentPreview]->dimensions.width)
            {
                if ((m_pImgBuffer[iCurrentPreview]->dimensions.width != nMaxWidth) ||
                    (m_pImgBuffer[iCurrentPreview]->dimensions.height != nMaxHeight))
                {
                    // We're just going to brute force shift everything up to upper left.
                    //const int nPadWidth = nMaxWidth - m_pImgBuffer[iCurrentPreview]->dimensions.width;
                    //const int nPadHeight = nMaxHeight - m_pImgBuffer[iCurrentPreview]->dimensions.height;
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
                    m_vSpriteOverrideTextures[iCurrentPreview].indexedPixels = rgNewData;
                    m_pImgBuffer[iCurrentPreview]->dimensions = m_vSpriteOverrideTextures[iCurrentPreview].dimensions = { nMaxWidth, nMaxHeight };
                    m_pImgBuffer[iCurrentPreview]->pImgData = m_vSpriteOverrideTextures[iCurrentPreview].indexedPixels.data();

                    strInfo.Format(L"\tWarning: had to resize image at layer %u from %ux%u to %ux%u!\r\n", iCurrentPreview, oldwidth, oldheight, nMaxWidth, nMaxHeight);
                    OutputDebugString(strInfo.GetString());
                }
            }

            _UpdateCompositionDisplayRect(iCurrentPreview, { nMaxWidth, nMaxHeight });
        }

        strInfo.Format(L"Resized previews to match total preview size %ux%u.", nMaxWidth, nMaxHeight);
        GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());
    }
}

std::optional<int> CImgDisp::SanitizeRequestedImageLayer(std::optional<int> optLayerToLoadTo)
{
    std::optional<int> optConfirmedLayerValue = optLayerToLoadTo;

    if (optLayerToLoadTo.has_value())
    {
        int nConfirmedLayerToLoadTo = optLayerToLoadTo.value();

        // Since we're using ON_COMMAND_RANGE, we need to remove the command mask to use the value if it came from the Load Layout submenus
        nConfirmedLayerToLoadTo = (nConfirmedLayerToLoadTo >= k_nTextureLoadCommandMask) ? nConfirmedLayerToLoadTo - k_nTextureLoadCommandMask : nConfirmedLayerToLoadTo;

        // A MAX_IMAGES_DISPLAYABLE value indicates a full stack replacement
        if (nConfirmedLayerToLoadTo == MAX_IMAGES_DISPLAYABLE)
        {
            optConfirmedLayerValue.reset();
        }
        else
        {
            if (m_nImgAmt > 1) // If they're targeting a single layer stack just ignore
            {
                if (nConfirmedLayerToLoadTo > static_cast<int>(m_nImgAmt - 1))
                {
                    optConfirmedLayerValue = 0;
                    OutputDebugString(L"CImgDisp::SanitizeRequestedImageLayer: ERROR: invalid layer specified.  Overriding to 0.\r\n");
                }
            }
            else
            {
                optConfirmedLayerValue = 0;
                OutputDebugString(L"CImgDisp::SanitizeRequestedImageLayer: Only one layer present.  Target layer is 0.\r\n");
            }
        }
    }

    return optConfirmedLayerValue;
}

void CImgDisp::UpdatePreviewForExternalSprite(std::optional<int> optLayerToLoadTo)
{
    std::optional<int> optConfirmedLayerToLoadTo;
    int nLayerToLoadTo = 0;

    optConfirmedLayerToLoadTo = SanitizeRequestedImageLayer(optLayerToLoadTo);

    if (!optConfirmedLayerToLoadTo.has_value() || (optConfirmedLayerToLoadTo.value() == 0))
    {
        // always need to reset our layout when we're replacing the 0th image
        ResetImageCompositionLayout();

        // Full stack replacement: have to nuke the inbox options if any
        FlushInternalSprites();

        nLayerToLoadTo = 0;
    }
    else
    {
        nLayerToLoadTo = optConfirmedLayerToLoadTo.value();
    }

    bool fTreatAsBackmostImageReplacement = !optLayerToLoadTo.has_value() ||
                                            (optLayerToLoadTo.value() == 0) ||
                                            (m_nImgAmt == 1) ||
                                            ((m_rImgRct.right - m_rImgRct.left) == 0);

    // There are two basic paths here:
    // If given a specific position to inject to we just update that slot
    // If not, we presume it's a full stack reset and update all
    for (int iLoadPos = nLayerToLoadTo; iLoadPos < m_nImgAmt; iLoadPos++)
    {
        if (m_pImgBuffer[iLoadPos])
        {
            // Override but use the stock palette
            AddImageNode(iLoadPos, m_vSpriteOverrideTextures.at(iLoadPos).dimensions.width, m_vSpriteOverrideTextures.at(iLoadPos).dimensions.height, m_vSpriteOverrideTextures.at(iLoadPos).indexedPixels.data(),
                m_pImgBuffer[iLoadPos]->pPalette, m_pImgBuffer[iLoadPos]->uPalSz, 0, 0);
        }
        else
        {
            // We really wanted the palette from pImgBuffer, but oh well we'll just use the backup palette
            AddImageNode(iLoadPos, m_vSpriteOverrideTextures.at(iLoadPos).dimensions.width, m_vSpriteOverrideTextures.at(iLoadPos).dimensions.height, m_vSpriteOverrideTextures.at(iLoadPos).indexedPixels.data(),
                m_pBackupPaletteDef->pPal, m_pBackupPaletteDef->uPalSz, 0, 0);
        }

        if (optLayerToLoadTo.has_value())
        {
            // Just stomp this specific layer
            break;
        }
    }

    _ResizeImageStack(!optLayerToLoadTo.has_value());

    if (fTreatAsBackmostImageReplacement)
    {
        _AdjustLayoutForNewlyLoadedImage();
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

    //int nRightBlt = rBltRct.right * 4;

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
