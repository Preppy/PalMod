// ImgDumpBmp.cpp : implementation file
//

#include "stdafx.h"
#include "ImgDumpBmp.h"

#include "windows.h"

// CImgDumpBmp

IMPLEMENT_DYNAMIC(CImgDumpBmp, CWnd)
CImgDumpBmp::CImgDumpBmp()
{
    RegisterWndClass();

    //Fix later
    crBGCol = RGB(0, 0, 0);
}

CImgDumpBmp::~CImgDumpBmp()
{
    CleanUp();
}

BEGIN_MESSAGE_MAP(CImgDumpBmp, CWnd)
    ON_WM_SIZE()
    ON_WM_PAINT()
    ON_WM_HSCROLL()
    ON_WM_VSCROLL()
    ON_WM_ERASEBKGND()
    ON_WM_LBUTTONDOWN()
    ON_WM_LBUTTONUP()
    ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

BOOL CImgDumpBmp::RegisterWndClass()
{
    WNDCLASS windowclass;
    HINSTANCE hInst = AfxGetInstanceHandle();

    //Check whether the class is registered already
    if (!(::GetClassInfo(hInst, IMGDUMPBMP, &windowclass)))
    {
        //If not then we have to register the new class
        windowclass.style = CS_DBLCLKS;// | CS_HREDRAW | CS_VREDRAW;

        windowclass.lpfnWndProc = ::DefWindowProc;
        windowclass.cbClsExtra = windowclass.cbWndExtra = 0;
        windowclass.hInstance = hInst;
        windowclass.hIcon = NULL;
        windowclass.hCursor = AfxGetApp()->LoadStandardCursor(IDC_SIZEALL);
        windowclass.hbrBackground = ::GetSysColorBrush(COLOR_WINDOW);
        windowclass.lpszMenuName = NULL;
        windowclass.lpszClassName = IMGDUMPBMP;

        if (!AfxRegisterClass(&windowclass))
        {
            AfxThrowResourceException();
            return FALSE;
        }
    }

    return TRUE;
}

void CImgDumpBmp::InitImgData()
{
    rgSrcImg = pMainImgCtrl->GetImgBuffer();
    img_amt = pMainImgCtrl->GetImgAmt();
    //rImgRct = pMainImgCtrl->GetImgRct();

    //Init blit data here
    rImgRct.SetRect(0, 0, 0, 0);

    for (int nImgCtr = 0; nImgCtr < img_amt; nImgCtr++)
    {
        int nXOffs = rgSrcImg[nImgCtr]->nXOffs;
        int nYOffs = rgSrcImg[nImgCtr]->nYOffs;

        nXOffs = nImgCtr ? (nXOffs + (rgSrcImg[0]->uImgW / 2) - (rgSrcImg[nImgCtr]->uImgW / 2)) : 0;
        nYOffs = nImgCtr ? (nYOffs + (rgSrcImg[0]->uImgH / 2) - (rgSrcImg[nImgCtr]->uImgH / 2)) : 0;

        if (nXOffs < rImgRct.left)
        {
            rImgRct.left = nXOffs;
        }

        if (nYOffs < rImgRct.top)
        {
            rImgRct.top = nYOffs;
        }

        if ((nXOffs + rgSrcImg[nImgCtr]->uImgW) > rImgRct.right)
        {
            rImgRct.right = nXOffs + rgSrcImg[nImgCtr]->uImgW;
        }

        if ((abs(nYOffs) + rgSrcImg[nImgCtr]->uImgH) > rImgRct.bottom)
        {
            rImgRct.bottom = nYOffs + rgSrcImg[nImgCtr]->uImgH;
        }

        ptOffs[nImgCtr].x = nXOffs;
        ptOffs[nImgCtr].y = nYOffs;
    }

    blt_w = rImgRct.Width();
    blt_h = rImgRct.Height();

    // Initialize the W/H variables
    GetOutputW();
    GetOutputH();

    ResizeMainBmp();
}

void CImgDumpBmp::OnSize(UINT nType, int cx, int cy)
{
    CWnd::OnSize(nType, cx, cy);

    if (!FirstRun)
    {
        SetClientSize();
        SizeScroll(TRUE);
        UpdateClip();

        UpdateBltRect();
        ClearCtrlBG();
    }
}

int CImgDumpBmp::ScrollBounds(int in_val, BOOL horiz)
{
    int min = 0;
    int max = horiz ? clip_right : clip_bottom;

    if (in_val < min)
    {
        return min;
    }

    if (in_val > max)
    {
        return max;
    }

    return in_val;
}

void CImgDumpBmp::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
    int curr_pos = m_VScroll.GetScrollPos();
    int old_pos = curr_pos;

    switch (nSBCode)
    {
    case SB_BOTTOM:
        curr_pos = nMainH;
        break;
    case SB_ENDSCROLL:
        break;
    case SB_LINEDOWN:
        curr_pos += 1;
        break;
    case SB_LINEUP:
        curr_pos -= 1;
        break;
    case SB_PAGEDOWN:
        curr_pos += SCROLL_PAGE_AMT;
        break;
    case SB_PAGEUP:
        curr_pos -= SCROLL_PAGE_AMT;
        break;
    case SB_THUMBPOSITION:
        m_VScroll.SetScrollPos(nPos);
        break;
    case SB_THUMBTRACK:
        m_VScroll.SetScrollPos(nPos);
        break;
    case SB_TOP:
        curr_pos = 0;
        break;
    }

    curr_pos = ScrollBounds(curr_pos, FALSE);

    if (curr_pos != old_pos)
    {
        m_VScroll.SetScrollPos(curr_pos);
    }

    UpdateBltRect();
    UpdateCtrl();

    CWnd::OnVScroll(nSBCode, nPos, pScrollBar);
}

void CImgDumpBmp::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
    int curr_pos = m_HScroll.GetScrollPos();
    int old_pos = curr_pos;

    switch (nSBCode)
    {
    case SB_LEFT:
        curr_pos = 0;
        break;
    case SB_ENDSCROLL:
        break;
    case SB_LINELEFT:
        curr_pos -= 1;
        break;
    case SB_LINERIGHT:
        curr_pos += 1;
        break;
    case SB_PAGELEFT:
        curr_pos -= SCROLL_PAGE_AMT;
        break;
    case SB_PAGERIGHT:
        curr_pos += SCROLL_PAGE_AMT;
        break;
    case SB_RIGHT:
        curr_pos = nMainW;
        break;
    case SB_THUMBPOSITION:
        m_HScroll.SetScrollPos(nPos);
        break;
    case SB_THUMBTRACK:
        m_HScroll.SetScrollPos(nPos);
        break;
    }

    curr_pos = ScrollBounds(curr_pos, TRUE);

    if (curr_pos != old_pos)
    {
        m_HScroll.SetScrollPos(curr_pos);
    }

    UpdateBltRect();
    UpdateCtrl();

    CWnd::OnHScroll(nSBCode, nPos, pScrollBar);
}

void CImgDumpBmp::UpdateBltRect(BOOL reset_flag)
{
    if (m_VScroll) // functionally, this is a FirstRun check
    {
        int scroll_h = m_VScroll.GetScrollPos();
        int scroll_w = m_HScroll.GetScrollPos();

        main_blt.top = 0 + (scroll_h * reset_flag);
        //main_blt.bottom = cl_height + scroll_h;

        main_blt.left = 0 + (scroll_w * reset_flag);

        if (!reset_flag)
        {
            m_VScroll.SetScrollPos(0, 0);
            m_HScroll.SetScrollPos(0, 0);
        }
        //main_blt.right = cl_width + scroll_w;
    }
}

void CImgDumpBmp::SetClientSize()
{
    GetClientRect(&ctrl_rect);

    cl_width = ctrl_rect.right - SCROLL_W;
    cl_height = ctrl_rect.bottom - SCROLL_W;
}

void CImgDumpBmp::UpdateClip()
{
    if (m_HScroll) // functionally this is a FirstRun check
    {
        clip_right = nMainW - cl_width;
        clip_bottom = nMainH - cl_height;

        m_HScroll.SetScrollRange(0, clip_right);
        m_VScroll.SetScrollRange(0, clip_bottom);

        HScroll_Enabled = cl_width < nMainW;
        VScroll_Enabled = cl_height < nMainH;

        m_HScroll.EnableWindow(HScroll_Enabled);
        m_VScroll.EnableWindow(VScroll_Enabled);
    }
}

void CImgDumpBmp::OnMouseMove(UINT nFlags, CPoint point)
{
    CWnd::OnMouseMove(nFlags, point);

    if (LButtonDown)
    {
        POINT diff = { 0 };

        diff.x = point.x - old_pt.x;
        diff.y = point.y - old_pt.y;

        if (diff.x || diff.y)
        {
            int hscroll_pos = m_HScroll.GetScrollPos();
            int vscroll_pos = m_VScroll.GetScrollPos();

            hscroll_pos -= diff.x;
            vscroll_pos -= diff.y;

            if (HScroll_Enabled)
            {
                m_HScroll.SetScrollPos(hscroll_pos);
            }

            if (VScroll_Enabled)
            {
                m_VScroll.SetScrollPos(vscroll_pos);
            }

            UpdateBltRect();

            old_pt = point;

            Draw();
            //UpdateCtrl();
        }
    }
}

void CImgDumpBmp::OnLButtonDown(UINT nFlags, CPoint point)
{
    LButtonDown = TRUE;

    SetCapture();

    old_pt.x = point.x;
    old_pt.y = point.y;

    CWnd::OnLButtonDown(nFlags, point);
}

void CImgDumpBmp::OnLButtonUp(UINT nFlags, CPoint point)
{
    LButtonDown = FALSE;

    ReleaseCapture();

    CWnd::OnLButtonUp(nFlags, point);
}

void CImgDumpBmp::OnPaint()
{
    if (FirstRun)
    {
        CPaintDC cdc(this);

        MainDC.CreateCompatibleDC(&cdc);
        MainDC.SelectObject(MainHBmp);

        //Get the control size
        SetClientSize();

        SetBG(crBGCol);

        //Create the scroll bars.
        SizeScroll();

        m_HScroll.Create(SBS_HORZ | SBS_TOPALIGN | WS_CHILD, h_rect, this, 100);
        m_HScroll.ShowScrollBar();

        m_VScroll.Create(SBS_VERT | SBS_TOPALIGN | WS_CHILD, v_rect, this, 100);
        m_VScroll.ShowScrollBar();

        CanSizeScroll = TRUE;

        UpdateBltRect();

        FirstRun = FALSE;

        //Update
        UpdateCtrl();
    }

    SizeScroll(TRUE);

    Draw();

    CWnd::OnPaint();
}

BOOL CImgDumpBmp::OnEraseBkgnd(CDC* pDC)
{
    return TRUE;//CWnd::OnEraseBkgnd(pDC);
}

void CImgDumpBmp::SizeScroll(BOOL resize)
{
    v_rect.top = ctrl_rect.top; v_rect.bottom = cl_height;
    v_rect.left = cl_width; v_rect.right = ctrl_rect.right;

    h_rect.top = cl_height; h_rect.bottom = ctrl_rect.bottom;
    h_rect.left = ctrl_rect.left; h_rect.right = cl_width;

    if (resize && CanSizeScroll)
    {
        m_HScroll.MoveWindow(&h_rect);
        m_VScroll.MoveWindow(&v_rect);
    }
}

void CImgDumpBmp::SetBG(COLORREF new_crBGCol)
{
    crBGCol = new_crBGCol;
}

void CImgDumpBmp::ClearCtrlBG()
{
    if (MainDC)
    {
        CClientDC* cdc = new CClientDC(this);

        COLORREF crCol = GetSysColor(COLOR_3DFACE);
        if (cl_width > nMainW)
        {
            cdc->FillSolidRect(CRect(nMainW, 0, cl_width, cl_height), crCol);
        }

        if (cl_height > nMainH)
        {
            cdc->FillSolidRect(CRect(0, nMainH, cl_width, cl_height), crCol);
        }

        cdc->FillSolidRect(CRect(ctrl_rect.right - SCROLL_W, ctrl_rect.bottom - SCROLL_W, ctrl_rect.right, ctrl_rect.bottom), crCol);

        safe_delete(cdc);
    }
}

void CImgDumpBmp::UpdateCtrl(BOOL bDraw, UINT8* pDstData)
{
    if (!FirstRun)
    {
        ClearCtrlBG();

        MainDC.FillSolidRect(CRect(0, 0, nMainW, nMainH), crBGCol);

        int row_ctr = 0;
        int nPal = 0;
        int nTargetX = 0, nTargetY = 0;

        UINT8* pMainData;

        if (pDstData)
        {
            pMainData = (UINT8*)pMainBmpData;
            pMainBmpData = (UINT32*)pDstData;
        }

        const int nImageCountOnFirstLine = GetImageCountForFirstLine();
        const int nMaxImagesPerLine = GetMaxImagesPerLine();

        for (int iCurrentImage = 0; iCurrentImage < m_nTotalImagesToDisplay; iCurrentImage++)
        {
            nPal = (m_nTotalImagesToDisplay > 1) ? iCurrentImage : nPalIndex;

            if (DispType == eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT)
            {
                if (iCurrentImage >= nImageCountOnFirstLine)
                {
                    row_ctr = max(1, (int)floor(iCurrentImage / nMaxImagesPerLine));
                }

                nTargetX = (iCurrentImage - (row_ctr * nImageCountOnFirstLine));
            }
            else if (DispType == eImageOutputSpriteDisplay::DISPLAY_SPRITES_TOPTOBOTTOM)
            {
                if (iCurrentImage % 2)
                {
                    row_ctr = 1;
                }
                else
                {
                    row_ctr = 0;
                }

                nTargetX = (iCurrentImage / 2);
            }

            for (int nImgCtr = 0; nImgCtr < img_amt; nImgCtr++)
            {
                CustomBlt(nImgCtr, nPal,

                    //Left
                    (int)((nTargetX * (blt_w * zoom))
                    + border_sz + (border_sz * nTargetX) + abs(rImgRct.left * zoom) + (ptOffs[nImgCtr].x * zoom)),

                    //Top
                    (int)((row_ctr * (blt_h * zoom))
                    + border_sz + (border_sz * row_ctr) + abs(rImgRct.top * zoom) + (ptOffs[nImgCtr].y * zoom)),

                    zoom, (pDstData != nullptr)
                );
            }
        }

        if (pDstData)
        {
            pMainBmpData = (UINT32*)pMainData;
        }

        bDraw ? Draw() : NULL;
        UpdateClip();
    }
}

BOOL CImgDumpBmp::CustomBlt(int nSrcIndex, int nPalIndex, int nDstX, int nDstY, double fpZoom, BOOL bTransBG)
{
    int nWidth = rgSrcImg[nSrcIndex]->uImgW;
    int nHeight = rgSrcImg[nSrcIndex]->uImgH;
    int nBltW, nBltH;
    int nSrcX = 0, nSrcY = 0;

    UINT8 uIndex;

    int nStartRow;
    int nSrcStartRow;
    int nDstPos;

    double fpXDiff = (double)nWidth / ((double)nWidth * fpZoom);
    double fpYDiff = (double)nHeight / ((double)nHeight * fpZoom);

    int nXCtr = 0;
    int nYCtr = 0;

    UINT8* pDstBmpData = (UINT8*)pMainBmpData;
    UINT8* pImgData = (UINT8*)rgSrcImg[nSrcIndex]->pImgData;
    UINT8* pCurrPal = (UINT8*)pppPalettes[nSrcIndex][nPalIndex];

    CRect rBltRct(nDstX, nDstY, nDstX + (int)(nWidth * fpZoom), nDstY + (int)(nHeight * fpZoom));

    if (nDstX < 0)
    {
        rBltRct.left = 0;
        nSrcX = abs(nDstX);
    }

    if (nDstY < 0)
    {
        rBltRct.top = 0;
        nSrcY = abs(nDstY);
    }

    if (rBltRct.right > nMainW)
    {
        rBltRct.right = nMainW;
    }

    if (rBltRct.bottom > nMainH)
    {
        rBltRct.bottom = nMainH;
    }

    nBltW = rBltRct.right - rBltRct.left;
    nBltH = rBltRct.bottom - rBltRct.top;

    if (bTransBG)
    {
        for (int y = 0; y < nBltH; y++)
        {
            nYCtr = (int)((double)y * fpYDiff);

            nStartRow = (y + rBltRct.top) * (nMainW * 4) + (rBltRct.left * 4);
            nSrcStartRow = ((nYCtr + nSrcY) * nWidth) + nSrcX;

            for (int x = 0; x < (nBltW * 4); x += 4)
            {
                nXCtr = (int)((double)x * fpXDiff);

                uIndex = pImgData[nSrcStartRow + (nXCtr / 4)];

                if (uIndex) // don't draw the background color
                {
                    nDstPos = nStartRow + x;

#ifdef BLEND_TO_BACKGROUND
                    // zachd 2020/10/02: I am baffled why we would blend to background on a transparent background.  For one image there's nothing to blend to.  For multiple images we break layering and instead
                    // muddle everything together.  I think this was just early experiemental code.  I'll leave it in case it matters, but don't think it's ever correct.
                    double fpAdd = ((double)pCurrPal[(uIndex * 4) + 3] / 255.0);

                    pDstBmpData[nDstPos + 3] += pCurrPal[(uIndex * 4) + 3];

                    pDstBmpData[nDstPos + 2] = (UINT8)(pDstBmpData[nDstPos + 2] ? (pDstBmpData[nDstPos + 2] + ((double)pCurrPal[(uIndex * 4)] * fpAdd)    ) : (pDstBmpData[nDstPos + 2] + pCurrPal[(uIndex * 4)]));
                    pDstBmpData[nDstPos + 1] = (UINT8)(pDstBmpData[nDstPos + 1] ? (pDstBmpData[nDstPos + 1] + ((double)pCurrPal[(uIndex * 4) + 1] * fpAdd)) : (pDstBmpData[nDstPos + 1] + pCurrPal[(uIndex * 4) + 1]));
                    pDstBmpData[nDstPos] =     (UINT8)(pDstBmpData[nDstPos]     ? (pDstBmpData[nDstPos]     + ((double)pCurrPal[(uIndex * 4) + 2] * fpAdd)) : (pDstBmpData[nDstPos] + pCurrPal[(uIndex * 4) + 2]));
#else
                    pDstBmpData[nDstPos + 3] = pCurrPal[(uIndex * 4) + 3];
                    pDstBmpData[nDstPos + 2] = pCurrPal[(uIndex * 4)];
                    pDstBmpData[nDstPos + 1] = pCurrPal[(uIndex * 4) + 1];
                    pDstBmpData[nDstPos]     = pCurrPal[(uIndex * 4) + 2];
#endif
                }
            }
        }
    }
    else
    {
        for (int y = 0; y < nBltH; y++)
        {
            nYCtr = (int)((double)y * fpYDiff);

            nStartRow = (rBltRct.top + (((nBltH - 1) - y))) * (nMainW * 4) + (rBltRct.left * 4);
            nSrcStartRow = ((nYCtr + nSrcY) * nWidth) + nSrcX;

            for (int x = 0; x < (nBltW * 4); x += 4)
            {
                nXCtr = (int)((double)x * fpXDiff);

                uIndex = pImgData[nSrcStartRow + (nXCtr / 4)];

                if (uIndex) // don't draw the background color
                {
                    nDstPos = nStartRow + x;

                    double fpDstA2 = (1.0 - (pCurrPal[(uIndex * 4) + 3]) / 255.0);
                    double fpDstA1 = 1.0 - fpDstA2;

                    UINT8* uDstR = &pDstBmpData[nDstPos + 2];
                    UINT8* uDstG = &pDstBmpData[nDstPos + 1];
                    UINT8* uDstB = &pDstBmpData[nDstPos];

                    *uDstR = (UINT8)aadd((fpDstA1 * (double)pCurrPal[(uIndex * 4)]), (fpDstA2 * (double)*uDstR));
                    *uDstG = (UINT8)aadd((fpDstA1 * (double)pCurrPal[(uIndex * 4) + 1]), (fpDstA2 * (double)*uDstG));
                    *uDstB = (UINT8)aadd((fpDstA1 * (double)pCurrPal[(uIndex * 4) + 2]), (fpDstA2 * (double)*uDstB));
                }
            }
        }
    }

    return TRUE;
}

void CImgDumpBmp::Draw()
{
    if (MainDC)
    {
        CClientDC* cdc = new CClientDC(this);

        cdc->BitBlt(0, 0, cl_width, cl_height, &MainDC, main_blt.left, main_blt.top, SRCCOPY);

        safe_delete(cdc);
    }
}

void CImgDumpBmp::CleanUp()
{
    //Delete the extra palettes
    if (pppPalettes)
    {
        for (int i = 0; i < img_amt; i++)
        {
            if (pppPalettes[i])
            {
                for (int amt_ctr = 0; amt_ctr < (nPalAmt); amt_ctr++)
                {
                    safe_delete_array(pppPalettes[i][amt_ctr]);
                }

                safe_delete_array(pppPalettes[i]);
            }
        }

        safe_delete_array(pppPalettes);
    }

    //Clean main image data
    DeleteObject(MainHBmp);
}

int CImgDumpBmp::GetImageCountForFirstLine()
{
    int nMaxImagesPerLine = GetMaxImagesPerLine();

    if (m_nTotalImagesToDisplay > nMaxImagesPerLine)
    {
        // We want the odd sprites on the second line.
        return min(nMaxImagesPerLine, max(1, (int)floor(m_nTotalImagesToDisplay / 2)));
    }
    else
    {
        return m_nTotalImagesToDisplay;
    }
}

int CImgDumpBmp::GetMaxImagesPerLine()
{
    int w_mul = 0;

    switch (m_nTotalImagesToDisplay)
    {
    case 1:
        w_mul = 1;
        break;
    case 2: // SVC
    case 4: // Garou
        w_mul = 2;
        break;
    case 5: // NEOGEO, Jojos
    case 6:
        w_mul = 3;
        break;
    case 7: // SF3
    case 8: // MBAACC
    case 16: // MBAACC
    case 32: // MBAACC
    case 36: // MBAACC
    case 64: // MBAACC
        w_mul = 4;
        break;
    case 9:
    case 10:
        w_mul = 5;
        break;
    case 12:
        w_mul = 6;
        break;
    default:
        OutputDebugString(L"CImgDumpBmp::GetImagesPerLine: You need to finish adding in this new output option.");
        __fallthrough;
    case 15:
    case 20: // GGXXACR ex color sets
    case 22: // GGXXACR core color sets
        w_mul = 5;
        break;
    }

    return w_mul;
}

int CImgDumpBmp::GetOutputW()
{
    int w_mul = GetMaxImagesPerLine();

    nMainW = (int)(((w_mul * border_sz) + border_sz) + ((blt_w * zoom) * w_mul));

    return nMainW;
}

int CImgDumpBmp::GetOutputH()
{
    int h_mul = 0;
    int nMaxImagesPerLine = GetMaxImagesPerLine();
    
    for (int nImagesHandled = 0; nImagesHandled < m_nTotalImagesToDisplay; nImagesHandled += nMaxImagesPerLine)
    {
        h_mul++;
    }

    nMainH = (int)(((h_mul * border_sz) + border_sz) + ((blt_h * zoom) * h_mul));

    return nMainH;
}

void CImgDumpBmp::OnTimer(UINT nIDEvent)
{
    CWnd::OnTimer(nIDEvent);
}

void CImgDumpBmp::ResizeMainBmp()
{
    static int nPrevW = 0;
    static int nPrevH = 0;

    if ((nMainW != nPrevW) || (nMainH != nPrevH))
    {
        DeleteObject(MainHBmp);

        MainBmpi.bmiHeader.biWidth = nMainW;
        MainBmpi.bmiHeader.biHeight = nMainH;
        MainBmpi.bmiHeader.biPlanes = 1;
        MainBmpi.bmiHeader.biBitCount = 32;
        MainBmpi.bmiHeader.biCompression = BI_RGB;
        MainBmpi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

        MainHBmp = CreateDIBSection(MainDC.GetSafeHdc(), &MainBmpi, DIB_RGB_COLORS, (void**)&pMainBmpData, NULL, 0);

        if (!FirstRun)
        {
            MainDC.SelectObject(MainHBmp);
        }
    }
}
