// ImgDumpBmp.cpp : implementation file
//

#include "stdafx.h"
#include "ImgDumpBmp.h"
#include "PalMod.h"

#include "windows.h"

// CImgDumpBmp

IMPLEMENT_DYNAMIC(CImgDumpBmp, CWnd)
CImgDumpBmp::CImgDumpBmp()
{
    RegisterWndClass();

    //Fix later
    m_crBGCol = RGB(0, 0, 0);
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
        windowclass.hIcon = nullptr;
        windowclass.hCursor = AfxGetApp()->LoadStandardCursor(IDC_SIZEALL);
        windowclass.hbrBackground = ::GetSysColorBrush(COLOR_WINDOW);
        windowclass.lpszMenuName = nullptr;
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
    m_rgSrcImg = m_pMainImgCtrl->GetImgBuffer();
    m_nImageAmt = m_pMainImgCtrl->GetImgAmt();
    //m_rImgRct = m_pMainImgCtrl->GetImgRct();

    //Init blit data here
    m_rImgRct.SetRect(0, 0, 0, 0);

    for (int nImgCtr = 0; nImgCtr < m_nImageAmt; nImgCtr++)
    {
        int nXOffs = m_rgSrcImg[nImgCtr]->nXOffs;
        // We need to flip the vertical offset since we're drawing upside-down.
        int nYOffs = -1 * m_rgSrcImg[nImgCtr]->nYOffs;

        if (nXOffs < m_rImgRct.left)
        {
            m_rImgRct.left = nXOffs;
        }

        if (nYOffs < m_rImgRct.top)
        {
            m_rImgRct.top = nYOffs;
        }

        if ((nXOffs + m_rgSrcImg[nImgCtr]->uImgW) > m_rImgRct.right)
        {
            m_rImgRct.right = nXOffs + m_rgSrcImg[nImgCtr]->uImgW;
        }

        if ((nYOffs + m_rgSrcImg[nImgCtr]->uImgH) > m_rImgRct.bottom)
        {
            m_rImgRct.bottom = nYOffs + m_rgSrcImg[nImgCtr]->uImgH;
        }

        m_ptOffs[nImgCtr].x = nXOffs;
        m_ptOffs[nImgCtr].y = nYOffs;
    }

    m_blt_w = m_rImgRct.Width();
    m_blt_h = m_rImgRct.Height();

    // Initialize the W/H variables
    GetOutputW();
    GetOutputH();

    ResizeMainBmp();
}

void CImgDumpBmp::OnSize(UINT nType, int cx, int cy)
{
    CWnd::OnSize(nType, cx, cy);

    if (m_fInitialized)
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
    int max = horiz ? m_clip_right : m_clip_bottom;

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
        curr_pos = m_nMainH;
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
        curr_pos = m_nMainW;
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
    if (m_VScroll)
    {
        const int scroll_h = m_VScroll.GetScrollPos();
        const int scroll_w = m_HScroll.GetScrollPos();

        m_main_blt.top = 0 + (scroll_h * reset_flag);
        //m_main_blt.bottom = m_cl_height + scroll_h;

        m_main_blt.left = 0 + (scroll_w * reset_flag);

        if (!reset_flag)
        {
            m_VScroll.SetScrollPos(0, 0);
            m_HScroll.SetScrollPos(0, 0);
        }
        //m_main_blt.right = m_cl_width + scroll_w;
    }
}

void CImgDumpBmp::SetClientSize()
{
    GetClientRect(&m_ctrl_rect);

    m_cl_width = m_ctrl_rect.right - SCROLL_W;
    m_cl_height = m_ctrl_rect.bottom - SCROLL_W;
}

void CImgDumpBmp::UpdateClip()
{
    if (m_HScroll) // functionally this is a FirstRun check
    {
        m_clip_right = m_nMainW - m_cl_width;
        m_clip_bottom = m_nMainH - m_cl_height;

        m_HScroll.SetScrollRange(0, m_clip_right);
        m_VScroll.SetScrollRange(0, m_clip_bottom);

        HScroll_Enabled = m_cl_width < m_nMainW;
        VScroll_Enabled = m_cl_height < m_nMainH;

        m_HScroll.EnableWindow(HScroll_Enabled);
        m_VScroll.EnableWindow(VScroll_Enabled);
    }
}

void CImgDumpBmp::OnMouseMove(UINT nFlags, CPoint point)
{
    CWnd::OnMouseMove(nFlags, point);

    if (m_LButtonDown)
    {
        POINT diff = { 0 };

        diff.x = point.x - m_old_pt.x;
        diff.y = point.y - m_old_pt.y;

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

            m_old_pt = point;

            Draw();
            //UpdateCtrl();
        }
    }
}

void CImgDumpBmp::OnLButtonDown(UINT nFlags, CPoint point)
{
    m_LButtonDown = TRUE;

    SetCapture();

    m_old_pt.x = point.x;
    m_old_pt.y = point.y;

    CWnd::OnLButtonDown(nFlags, point);
}

void CImgDumpBmp::OnLButtonUp(UINT nFlags, CPoint point)
{
    m_LButtonDown = FALSE;

    ReleaseCapture();

    CWnd::OnLButtonUp(nFlags, point);
}

void CImgDumpBmp::OnPaint()
{
    if (!m_fInitialized)
    {
        CPaintDC cdc(this);

        m_MainDC.CreateCompatibleDC(&cdc);
        m_MainDC.SelectObject(m_MainHBmp);

        //Get the control size
        SetClientSize();

        SetBG(m_crBGCol);

        //Create the scroll bars.
        SizeScroll();

        m_HScroll.Create(SBS_HORZ | SBS_TOPALIGN | WS_CHILD, m_h_rect, this, 100);
        m_HScroll.ShowScrollBar();

        m_VScroll.Create(SBS_VERT | SBS_TOPALIGN | WS_CHILD, m_v_rect, this, 100);
        m_VScroll.ShowScrollBar();

        m_fScrollbarIsReady = TRUE;

        UpdateBltRect();

        m_fInitialized = TRUE;

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
    m_v_rect.top = m_ctrl_rect.top; m_v_rect.bottom = m_cl_height;
    m_v_rect.left = m_cl_width; m_v_rect.right = m_ctrl_rect.right;

    m_h_rect.top = m_cl_height; m_h_rect.bottom = m_ctrl_rect.bottom;
    m_h_rect.left = m_ctrl_rect.left; m_h_rect.right = m_cl_width;

    if (resize && m_fScrollbarIsReady)
    {
        m_HScroll.MoveWindow(&m_h_rect);
        m_VScroll.MoveWindow(&m_v_rect);
    }
}

void CImgDumpBmp::SetBG(COLORREF new_crBGCol)
{
    m_crBGCol = new_crBGCol;
}

void CImgDumpBmp::ClearCtrlBG()
{
    if (m_MainDC)
    {
        CClientDC* cdc = new CClientDC(this);

        COLORREF crCol = GetSysColor(COLOR_3DFACE);
        if (m_cl_width > m_nMainW)
        {
            cdc->FillSolidRect(CRect(m_nMainW, 0, m_cl_width, m_cl_height), crCol);
        }

        if (m_cl_height > m_nMainH)
        {
            cdc->FillSolidRect(CRect(0, m_nMainH, m_cl_width, m_cl_height), crCol);
        }

        cdc->FillSolidRect(CRect(m_ctrl_rect.right - SCROLL_W, m_ctrl_rect.bottom - SCROLL_W, m_ctrl_rect.right, m_ctrl_rect.bottom), crCol);

        safe_delete(cdc);
    }
}

void CImgDumpBmp::UpdateCtrl(BOOL fDraw, uint8_t* pDstData)
{
    if (m_fInitialized)
    {
        ClearCtrlBG();

        m_MainDC.FillSolidRect(CRect(0, 0, m_nMainW, m_nMainH), m_crBGCol);

        int row_ctr = 0;
        int nPal = 0;
        int nTargetX = 0, nTargetY = 0;

        uint8_t* pMainData = nullptr;

        if (pDstData)
        {
            pMainData = reinterpret_cast<uint8_t*>(m_pMainBmpData);
            m_pMainBmpData = reinterpret_cast<uint32_t*>(pDstData);
        }

        const int nMaxImagesPerLine = GetMaxImagesPerLine();
        const int nImageCountOnFirstLine = min(GetImageCountForFirstLine(), nMaxImagesPerLine);

        for (int iCurrentImage = 0; iCurrentImage < m_nTotalImagesToDisplay; iCurrentImage++)
        {
            nPal = (m_nTotalImagesToDisplay > 1) ? iCurrentImage : m_nPalIndex;

            if (DispType == eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT)
            {
                if (iCurrentImage >= nImageCountOnFirstLine)
                {
                    row_ctr = max(1, static_cast<int>(floor(iCurrentImage / nMaxImagesPerLine)));
                }

                nTargetX = (iCurrentImage - (row_ctr * nImageCountOnFirstLine));
            }
            else if (DispType == eImageOutputSpriteDisplay::DISPLAY_SPRITES_TOPTOBOTTOM)
            {
                const uint8_t nLinesUsed = static_cast<int8_t>(ceil(m_nTotalImagesToDisplay / nMaxImagesPerLine));

                row_ctr = iCurrentImage % nLinesUsed;

                nTargetX = (iCurrentImage / nLinesUsed);
            }

            for (int nImgCtr = 0; nImgCtr < m_nImageAmt; nImgCtr++)
            {
                CustomBlt(nImgCtr, nPal,

                    //Left
                    static_cast<int>((nTargetX * (m_blt_w * m_flZoomLevel))
                    + m_border_sz + (m_border_sz * nTargetX) + abs(m_rImgRct.left * m_flZoomLevel) + (m_ptOffs[nImgCtr].x * m_flZoomLevel)),

                    //Top
                    static_cast<int>((row_ctr * (m_blt_h * m_flZoomLevel))
                    + m_border_sz + (m_border_sz * row_ctr) + abs(m_rImgRct.top * m_flZoomLevel) + (m_ptOffs[nImgCtr].y * m_flZoomLevel)),

                    m_flZoomLevel, (pDstData != nullptr)
                );
            }
        }

        if (pDstData)
        {
            m_pMainBmpData = reinterpret_cast<uint32_t*>(pMainData);
        }

        if (fDraw)
        {
            Draw();
        }

        UpdateClip();
    }
}

BOOL CImgDumpBmp::CustomBlt(int nSrcIndex, int nPalIndex, int nDstX, int nDstY, double fpZoom, BOOL fTransBG)
{
    uint8_t* pDstBmpData = reinterpret_cast<uint8_t*>(m_pMainBmpData);

    if (pDstBmpData)
    {
        int nWidth = m_rgSrcImg[nSrcIndex]->uImgW;
        int nHeight = m_rgSrcImg[nSrcIndex]->uImgH;
        int nSrcX = 0, nSrcY = 0;

        double fpXDiff = static_cast<double>(nWidth) / (static_cast<double>(nWidth) * fpZoom);
        double fpYDiff = static_cast<double>(nHeight) / (static_cast<double>(nHeight) * fpZoom);

        uint8_t* pImgData = reinterpret_cast<uint8_t*>(m_rgSrcImg[nSrcIndex]->pImgData);
        uint8_t* pCurrPal = reinterpret_cast<uint8_t*>(m_pppPalettes[nSrcIndex][nPalIndex]);

        CRect rBltRct(nDstX, nDstY, nDstX + static_cast<int>(nWidth * fpZoom), nDstY + static_cast<int>(nHeight * fpZoom));

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

        if (rBltRct.right > m_nMainW)
        {
            rBltRct.right = m_nMainW;
        }

        if (rBltRct.bottom > m_nMainH)
        {
            rBltRct.bottom = m_nMainH;
        }

        int nBltW = rBltRct.right - rBltRct.left;
        int nBltH = rBltRct.bottom - rBltRct.top;

        const uint16_t nTransparencyPosition = GetHost()->GetCurrGame()->GetTransparencyColorPosition();
        const uint16_t nMaxWritePerTransparency = static_cast<uint16_t>(GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency());
        const BlendMode bm = GetHost()->GetCurrGame()->GetGameSpecificBlendMode();

        if (fTransBG)
        {
            for (int yIndex = 0; yIndex < nBltH; yIndex++)
            {
                int nYCtr = static_cast<int>(static_cast<double>(yIndex) * fpYDiff);

                int nStartRow = (yIndex + rBltRct.top) * (m_nMainW * 4) + (rBltRct.left * 4);
                int nSrcStartRow = ((nYCtr + nSrcY) * nWidth) + nSrcX;

                for (int xIndex = 0; xIndex < (nBltW * 4); xIndex += 4)
                {
                    int nXCtr = static_cast<int>(static_cast<double>(xIndex) * fpXDiff);

                    uint8_t uIndex = pImgData[nSrcStartRow + (nXCtr / 4)];

                    if ((uIndex % nMaxWritePerTransparency) != nTransparencyPosition)
                    {
                        int nDstPos = nStartRow + xIndex;

#ifdef BLEND_TO_BACKGROUND
                        // zachd 2020/10/02: I am baffled why we would blend to background on a transparent background.  For one image there's nothing to blend to.  For multiple images we break layering and instead
                        // muddle everything together.  I think this was just early experiemental code.  I'll leave it in case it matters, but don't think it's ever correct.
                        double fpAdd = ((double)pCurrPal[(uIndex * 4) + 3] / 255.0);

                        pDstBmpData[nDstPos + 3] += pCurrPal[(uIndex * 4) + 3];

                        pDstBmpData[nDstPos + 2] = static_cast<uint8_t>(pDstBmpData[nDstPos + 2] ? (pDstBmpData[nDstPos + 2] + (static_cast<double>(pCurrPal[(uIndex * 4)]) * fpAdd))     : (pDstBmpData[nDstPos + 2] + pCurrPal[(uIndex * 4)]));
                        pDstBmpData[nDstPos + 1] = static_cast<uint8_t>(pDstBmpData[nDstPos + 1] ? (pDstBmpData[nDstPos + 1] + (static_cast<double>(pCurrPal[(uIndex * 4) + 1]) * fpAdd)) : (pDstBmpData[nDstPos + 1] + pCurrPal[(uIndex * 4) + 1]));
                        pDstBmpData[nDstPos]     = static_cast<uint8_t>(pDstBmpData[nDstPos]     ? (pDstBmpData[nDstPos]     + (static_cast<double>(pCurrPal[(uIndex * 4) + 2]) * fpAdd)) : (pDstBmpData[nDstPos] + pCurrPal[(uIndex * 4) + 2]));
#else
                        const uint8_t nAdjustedAlpha = ColorSystem::GetAlphaValueForBlendType(bm, pCurrPal[(uIndex * 4) + 3], pCurrPal[(uIndex * 4) + 2], pCurrPal[(uIndex * 4) + 1], pCurrPal[(uIndex * 4)]);

                        pDstBmpData[nDstPos + 3] = nAdjustedAlpha;
                        pDstBmpData[nDstPos + 2] = pCurrPal[(uIndex * 4)];
                        pDstBmpData[nDstPos + 1] = pCurrPal[(uIndex * 4) + 1];
                        pDstBmpData[nDstPos] = pCurrPal[(uIndex * 4) + 2];
#endif
                    }
                }
            }
        }
        else // show the background color they've selected
        {
            for (int yIndex = 0; yIndex < nBltH; yIndex++)
            {
                const int nYCtr = static_cast<int>(static_cast<double>(yIndex) * fpYDiff);

                const int nStartRow = (yIndex + rBltRct.top) * (m_nMainW * 4) + (rBltRct.left * 4);
                const int nSrcStartRow = ((nYCtr + nSrcY) * nWidth) + nSrcX;

                for (int xIndex = 0; xIndex < (nBltW * 4); xIndex += 4)
                {
                    const int nXCtr = static_cast<int>(static_cast<double>(xIndex) * fpXDiff);

                    const uint8_t uIndex = pImgData[nSrcStartRow + (nXCtr / 4)];

                    if ((uIndex % nMaxWritePerTransparency) != nTransparencyPosition)
                    {
                        const int nDstPos = nStartRow + xIndex;

                        uint8_t* uDstR = &pDstBmpData[nDstPos + 2];
                        uint8_t* uDstG = &pDstBmpData[nDstPos + 1];
                        uint8_t* uDstB = &pDstBmpData[nDstPos];

                        const uint8_t nAdjustedAlpha = ColorSystem::GetAlphaValueForBlendType(bm, pCurrPal[(uIndex * 4) + 3], *uDstR, *uDstG, *uDstB);

                        const double fpDstA2 = (1.0 - (nAdjustedAlpha / 255.0));
                        const double fpDstA1 = 1.0 - fpDstA2;

                        *uDstR = static_cast<uint8_t>(aadd((fpDstA1 * static_cast<double>(pCurrPal[(uIndex * 4)])), (fpDstA2 * static_cast<double>(*uDstR))));
                        *uDstG = static_cast<uint8_t>(aadd((fpDstA1 * static_cast<double>(pCurrPal[(uIndex * 4) + 1])), (fpDstA2 * static_cast<double>(*uDstG))));
                        *uDstB = static_cast<uint8_t>(aadd((fpDstA1 * static_cast<double>(pCurrPal[(uIndex * 4) + 2])), (fpDstA2 * static_cast<double>(*uDstB))));
                    }
                }
            }
        }
    }

    return TRUE;
}

void CImgDumpBmp::Draw()
{
    if (m_MainDC)
    {
        CClientDC* cdc = new CClientDC(this);

        cdc->BitBlt(0, 0, m_cl_width, m_cl_height, &m_MainDC, m_main_blt.left, m_main_blt.top, SRCCOPY);

        safe_delete(cdc);
    }
}

void CImgDumpBmp::CleanUp()
{
    //Delete the extra palettes
    if (m_pppPalettes)
    {
        for (int iPos = 0; iPos < m_nImageAmt; iPos++)
        {
            if (m_pppPalettes[iPos])
            {
                for (int amt_ctr = 0; amt_ctr < m_nPalAmt; amt_ctr++)
                {
                    safe_delete_array(m_pppPalettes[iPos][amt_ctr]);
                }

                safe_delete_array(m_pppPalettes[iPos]);
            }
        }

        safe_delete_array(m_pppPalettes);
    }

    //Clean main image data
    DeleteObject(m_MainHBmp);
}

int CImgDumpBmp::GetImageCountForFirstLine()
{
    const int nMaxImagesPerLine = GetMaxImagesPerLine();

    if (m_nTotalImagesToDisplay > nMaxImagesPerLine)
    {
        // We want the odd sprites on the second line.
        return min(nMaxImagesPerLine, max(1, static_cast<int>(floor(m_nTotalImagesToDisplay / 2))));
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
    case 30: // MBTL
    case 38: // MBTL: Neco
        w_mul = 2;
        break;
    case 3: // DanKuGa
    case 5: // NEOGEO, Jojos
    case 6:
        w_mul = 3;
        break;
    case 7: // SF3
    case 8: // MBAACC
    case 16: // MBAACC and MvC2's palette expansion
    case 32: // MBAACC
    case 36: // MBAACC
    case 42: // UNICLR
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
    case 19: // MAAB
    case 21: // MAAB
    case 24: // BlazBlueCF
    case 25: // BlazBlueCF
    case 26: // BlazBlueCF
        w_mul = 4;
        break;
    default:
        OutputDebugString(L"CImgDumpBmp::GetImagesPerLine: You need to finish adding in this new output option.\n");
        __fallthrough;
    case 15: // MAAB
    case 20: // GGXXACR ex color sets
    case 22: // GGXXACR core color sets
        w_mul = 5;
        break;
    }

    return w_mul;
}

int CImgDumpBmp::GetOutputW()
{
    const int w_mul = GetMaxImagesPerLine();

    m_nMainW = static_cast<int>(((w_mul * m_border_sz) + m_border_sz) + ((m_blt_w * m_flZoomLevel) * w_mul));

    return m_nMainW;
}

int CImgDumpBmp::GetOutputH()
{
    int h_mul = 0;
    const int nMaxImagesPerLine = GetMaxImagesPerLine();
    
    for (int nImagesHandled = 0; nImagesHandled < m_nTotalImagesToDisplay; nImagesHandled += nMaxImagesPerLine)
    {
        h_mul++;
    }

    m_nMainH = static_cast<int>(((h_mul * m_border_sz) + m_border_sz) + ((m_blt_h * m_flZoomLevel) * h_mul));

    return m_nMainH;
}

void CImgDumpBmp::OnTimer(UINT nIDEvent)
{
    CWnd::OnTimer(nIDEvent);
}

void CImgDumpBmp::ResizeMainBmp()
{
    static int nPrevW = 0;
    static int nPrevH = 0;

    if ((m_nMainW != nPrevW) || (m_nMainH != nPrevH))
    {
        DeleteObject(m_MainHBmp);

        m_MainBmpi.bmiHeader.biWidth = m_nMainW;
        m_MainBmpi.bmiHeader.biHeight = -m_nMainH;
        m_MainBmpi.bmiHeader.biPlanes = 1;
        m_MainBmpi.bmiHeader.biBitCount = 32;
        m_MainBmpi.bmiHeader.biCompression = BI_RGB;
        m_MainBmpi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

        m_MainHBmp = CreateDIBSection(m_MainDC.GetSafeHdc(), &m_MainBmpi, DIB_RGB_COLORS, reinterpret_cast<void**>(&m_pMainBmpData), NULL, 0);

        if (!m_MainHBmp)
        {
            MessageBox(L"Warning: requested image is too large.  Please select a smaller image size.", GetHost()->GetAppName(), MB_ICONERROR);
        }

        if (m_fInitialized)
        {
            m_MainDC.SelectObject(m_MainHBmp);
        }
    }
}
