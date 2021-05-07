#include "StdAfx.h"
#include "junk.h"
#include "PalMod.h"
#include "RegProc.h"

//This is used for the edit commands
#include "resource.h"

CPen CJunk::PIndexHL;
CPen CJunk::PIndexSL;
CPen CJunk::PIndexMHL;
CPen CJunk::PIndexBG;

BOOL bCreatedPens = CJunk::InitPen();

int GetDpiForScreen()
{
    static int dpiX = -1;

    if (dpiX == -1)
    {
        HDC screen = GetDC(0);

        dpiX = GetDeviceCaps(screen, LOGPIXELSX);

        ReleaseDC(0, screen);
    }

    return dpiX;
}

int CJunk::GetPaletteSquareSize()
{
    return (int)ceil((BASE_PALETTE_SQUARE_SIZE * GetDpiForScreen()) / 96);
}

UCHAR CJunk::Toggle(UCHAR& tVar)
{
    tVar = !tVar;

    return tVar;
}

void CJunk::ClearSelView()
{
    if (SelView)
    {
        for (int i = 0; i < iWorkingAmt; i++)
        {
            SetSelViewItem(L"ClearSelView", i, FALSE);
        }
    }

    iHLAmt = 0;
}

bool CJunk::SelectMatchingColorsInPalette(DWORD dwColorToMatch)
{
    bool fFoundColor = false;
    if (Selected)
    {
        COLORREF dwordAsColor = RGB(GetBValue(dwColorToMatch), GetGValue(dwColorToMatch), GetRValue(dwColorToMatch));

        for (int i = 0; i < iWorkingAmt; i++)
        {
            bool fIsSameColorAtIndex = ((BasePal[i] & 0xFFFFFF) == dwordAsColor);
            Selected[i] = fIsSameColorAtIndex ? 1 : 0;
            fFoundColor = fFoundColor || fIsSameColorAtIndex;
        }
    }

    UpdateSelAmt();

    return fFoundColor;
}

void CJunk::ClearSelected()
{
    if (Selected)
    {
        for (int i = 0; i < iWorkingAmt; i++)
        {
            Selected[i] = 0;
        }
    }

    SingleSelect = -1;

    iSelAmt = 0;
}

void CJunk::ClearHighlighted()
{
    if (Highlighted)
    {
        for (int i = 0; i < iWorkingAmt; i++)
        {
            Highlighted[i] = 0;
        }
    }

    //iHLAmt = 0;
}

void CJunk::SetJunkState(UCHAR* State, LPCWSTR pszFunctionName, int nIndex, UCHAR nValue)
{
    bool fSuccess = false;
    if (State)
    {
        // The user can be mousing over the palette boxes while they are also updating the palettes being
        // shown.  As such, we want to ensure that we aren't processing a message relevant to a larger palette set.
        if ((nIndex >= 0) && (nIndex < nAllocationLength))
        {
            State[nIndex] = nValue;
            fSuccess = true;
        }
    }
}

void CJunk::SetHighlighted(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue)
{
    SetJunkState(Highlighted, pszFunctionName, nIndex, nValue);
}

void CJunk::SetSelViewItem(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue)
{
    SetJunkState(SelView, pszFunctionName, nIndex, nValue);
}

void CJunk::SetSelected(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue)
{
    SetJunkState(Selected, pszFunctionName, nIndex, nValue);
}

void CJunk::LoadDefaultPal()
{
    for (int i = 0; i < (iPalH * iPalW); i++)
    {
        BasePal[i] = RGB((F_R + 1) * i / 13, (F_G + 1) * i / 13, (F_B + 1) * i / 13);
    }
}

BOOL CJunk::InitNewSize(int nNewAmt, COLORREF* rgNewPal)
{
    //Clear the current variables/pointers/arrays etc
    if (nNewAmt != nCurrAmt)
    {
        if (nNewAmt > nMaximumColorsPerPage)
        {
            CString strError;
            static bool s_fAlreadyShown = false;
            // You can either slice the palette or add separators so that PalGroup can handle page divisions
            // You can easily have separators added for you automatically by using the new ::CreateDefPal logic
            // that is already in use for SFA3 and MSH and some of the other more recently added games
            strError.Format(L"ERROR: Our color table can only show %u colors per page, but this palette wants %u colors on one page.  This palette is too large and needs to be modified or split.\n\nThis is a bug in PalMod: please report it.\n", nMaximumColorsPerPage, nNewAmt);
            OutputDebugString(strError);
            if (!s_fAlreadyShown)
            {
                s_fAlreadyShown = true;
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
            }
            return FALSE;
        }

        if (!bFirstInit)
        {
            CleanUp();
        }
        else
        {
            bFirstInit = FALSE;
        }

        //Set new width/height
        iPalW = (nNewAmt > nWidthMax) ? nWidthMax : nNewAmt;

        if (nNewAmt > nWidthMax)
        {
            iPalH = (nNewAmt / nWidthMax) + (nNewAmt % nWidthMax ? 1 : 0);
        }
        else
        {
            iPalH = 1;
        }

        //Set control width/height
        iBaseW = (iPalW * GetPaletteSquareSize()) + ((iPalW * BDR_SZ) + BDR_SZ);
        iBaseH = (iPalH * GetPaletteSquareSize()) + ((iPalH * BDR_SZ) + BDR_SZ);

        //Set the working amount
        iWorkingAmt = nNewAmt;
        nAllocationLength = iPalW * iPalH;

        if (nAllocationLength != iWorkingAmt)
        {
            // This handles non-rectangular layouts, since we allocate a H*W layout
            int nSrcIndex = (iWorkingAmt % nWidthMax) + ((iPalH - 1) * nWidthMax);
            int nDstIndex = ((iPalH * nWidthMax) - 1);

            rUnused.top = (BDR_SZ * ((nSrcIndex / iPalW) + 1)) + ((GetPaletteSquareSize()) * (nSrcIndex / iPalW));
            rUnused.left = (BDR_SZ * ((nSrcIndex % iPalW) + 1)) + ((GetPaletteSquareSize()) * (nSrcIndex % iPalW));
            rUnused.right = (BDR_SZ * ((nDstIndex % iPalW) + 2)) + (GetPaletteSquareSize() * ((nDstIndex % iPalW) + 1));
            rUnused.bottom = (BDR_SZ * ((nDstIndex / iPalW) + 2)) + (GetPaletteSquareSize() * ((nDstIndex / iPalW) + 1));
        }

        //Create Selected, Highlighted and SelView
        Highlighted = new UCHAR[nAllocationLength];
        Selected = new UCHAR[nAllocationLength];
        SelView = new UCHAR[nAllocationLength];

        ClearSelView();
        ClearSelected();
        ClearHighlighted();

        ProcBaseBMP();

        //Set the palette
        BasePal = rgNewPal;

        UpdateIndexAll();

        nCurrAmt = nNewAmt;
    }
    else
    {
        BasePal = rgNewPal;

        UpdateIndexAll();
    }

    return TRUE;
}

void CJunk::CleanUp()
{
    //Remove Selected, SelView and Highlighted
    safe_delete_array(Selected);
    safe_delete_array(SelView);
    safe_delete_array(Highlighted);
}

void CJunk::NotifyParent(int iCustomMessage)
{
    static NMHDR myhdr = {};

    myhdr.hwndFrom = GetSafeHwnd();
    myhdr.idFrom = nArrayIndex;
    myhdr.code = iCustomMessage;

    GetParent()->PostMessage(WM_NOTIFY, 0, (LPARAM)&myhdr);
}

void CJunk::SetIndexPen(int nIndex, int pFlag)
{
    switch (pFlag)
    {
    case FLAG_HIGHLIGHT:
        dcBaseDC.SelectObject(&PIndexHL);
        break;
    case FLAG_SELECTED:
        dcBaseDC.SelectObject(&PIndexSL);
        break;
    case FLAG_MULTIHIGHLIGHT:
        dcBaseDC.SelectObject(&PIndexMHL);
        break;
    case FLAG_DEFAULT:
        dcBaseDC.SelectObject(&PIndexBG);
        break;
    }
}

BOOL CJunk::InitPen()
{
    PIndexHL.CreatePen(0, 1, RGB(HL_R, HL_G, HL_B));
    PIndexSL.CreatePen(0, 1, RGB(SL_R, SL_G, SL_B));
    PIndexMHL.CreatePen(0, 1, RGB(MH_R, MH_G, MH_B));
    PIndexBG.CreatePen(0, 1, RGB(BG_R, BG_G, BG_B));

    return TRUE;
}

CJunk::CJunk()
{
    nWidthMax = CRegProc::GetColorsPerLine();
    nMaximumColorsPerPage = CRegProc::GetMaxPalettePageSize();

    RegisterWindowClass();
}

CJunk::~CJunk(void)
{
    //delete (dcPaintDC);
    CleanUp();

    if (bCreatedPens)
    {
        bCreatedPens = FALSE;
        DeleteObject(PIndexHL);
        DeleteObject(PIndexSL);
        DeleteObject(PIndexMHL);
        DeleteObject(PIndexBG);
    }
}

BEGIN_MESSAGE_MAP(CJunk, CWnd)
    ON_WM_PAINT()
    ON_WM_ERASEBKGND()
    ON_WM_MOUSEMOVE()
    ON_WM_LBUTTONDOWN()
    ON_WM_LBUTTONUP()
    ON_WM_TIMER()
    ON_WM_KEYDOWN()
    ON_WM_KEYUP()
    ON_WM_COPYDATA()
    ON_WM_CREATE()
    ON_WM_RBUTTONDOWN()
    ON_WM_INITMENUPOPUP()
    ON_WM_MENUSELECT()
END_MESSAGE_MAP()

BOOL CJunk::RegisterWindowClass()
{
    WNDCLASS wndcls;
    HINSTANCE hInst = AfxGetInstanceHandle();

    if (!(::GetClassInfo(hInst, JUNK_CLASSNAME, &wndcls)))
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
        wndcls.lpszClassName = JUNK_CLASSNAME;

        if (!AfxRegisterClass(&wndcls))
        {
            AfxThrowResourceException();
            return FALSE;
        }
    }

    return TRUE;
}

void CJunk::OnPaint()
{
    CPaintDC* PaintDC = new CPaintDC(this);

    InitDC(*PaintDC);
    UpdateCtrl(FALSE);

    CWnd::OnPaint();

    safe_delete(PaintDC);
}

BOOL CJunk::OnEraseBkgnd(CDC* pDC)
{
    return FALSE;
}

BOOL CJunk::ProcBaseBMP()
{
    if (hBmp && !DeleteObject(hBmp))
    {
        OutputDebugString(L"ERROR: Could not delete old hBmp\n");
    }

    Bmpi.bmiHeader.biWidth = iBaseW;
    Bmpi.bmiHeader.biHeight = -iBaseH;
    Bmpi.bmiHeader.biPlanes = 1;
    Bmpi.bmiHeader.biBitCount = 32;
    Bmpi.bmiHeader.biCompression = BI_RGB;
    Bmpi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

    //HBITMAP hTempBmp;
    //dcBaseDC.SelectObject(&hTempBmp);

    hBmp = CreateDIBSection(dcBaseDC.GetSafeHdc(), &Bmpi, DIB_RGB_COLORS, (void**)&pBmpData, NULL, 0);

    if (!bFirstDCInit)
    {
        dcBaseDC.SelectObject(hBmp);
        dcBaseDC.SelectStockObject(NULL_BRUSH);
    }

    DrawBG();

    return TRUE;
}

void CJunk::ClearBaseBMP()
{
    safe_delete_array(pBmpData);
}

void CJunk::InitDC(CPaintDC &PaintDC)
{
    if (bFirstDCInit)
    {
        //Init base
        dcBaseDC.CreateCompatibleDC(&PaintDC);
        dcBaseDC.SelectObject(hBmp);
        dcBaseDC.SelectStockObject(NULL_BRUSH);

        bFirstDCInit = FALSE;

        UpdateIndexAll();
    }
}

void CJunk::DrawBG()
{
    if (!bFirstDCInit)
    {
        CRect rBGRect(0, 0, iBaseW, iBaseH);

        dcBaseDC.FillSolidRect(&rBGRect, RGB(BG_R, BG_G, BG_B));

        //Draw the unused palette indexes
        if (nAllocationLength != iWorkingAmt)
        {
            dcBaseDC.FillSolidRect(&rUnused, GetSysColor(COLOR_3DFACE));
        }
    }
}

void CJunk::SelectAll()
{
    if (Selected)
    {
        for (int i = 0; i < iWorkingAmt; i++)
        {
            Selected[i] = TRUE;
        }
    }

    UpdateSelAmt();
}

void CJunk::UpdateIndex(int index)
{
    if (bEnabled && !bFirstDCInit)
    {
        if (index < iWorkingAmt)
        {
            rIndexRect.top = (BDR_SZ * ((index / iPalW) + 1)) + ((GetPaletteSquareSize()) * (index / iPalW));
            rIndexRect.left = (BDR_SZ * ((index % iPalW) + 1)) + ((GetPaletteSquareSize()) * (index % iPalW));
            rIndexRect.right = (BDR_SZ * ((index % iPalW) + 1)) + (GetPaletteSquareSize() * ((index % iPalW) + 1));
            rIndexRect.bottom = (BDR_SZ * ((index / iPalW) + 1)) + (GetPaletteSquareSize() * ((index / iPalW) + 1));

            CustomFillRect(&rIndexRect, (UINT8*)&BasePal[index]);
        }
    }
}

void CJunk::UpdateFace()
{
    static int nNewCt = 0;
    static int nDelCt = 0;

    if (bEnabled)
    {
        RECT* rSqRct = new RECT[iWorkingAmt];

        nNewCt++;

        for (int index = 0; index < iWorkingAmt; index++)
        {
            SetIndexPen(index, FLAG_DEFAULT);

            rSqRct[index].top = (BDR_SZ * ((index / iPalW) + 1)) + ((GetPaletteSquareSize()) * (index / iPalW));
            rSqRct[index].left = (BDR_SZ * ((index % iPalW) + 1)) + ((GetPaletteSquareSize()) * (index % iPalW));
            rSqRct[index].right = (BDR_SZ * ((index % iPalW) + 1)) + (GetPaletteSquareSize() * ((index % iPalW) + 1));
            rSqRct[index].bottom = (BDR_SZ * ((index / iPalW) + 1)) + (GetPaletteSquareSize() * ((index / iPalW) + 1));

            InflateRect(&rSqRct[index], 1, 1);

            dcBaseDC.Rectangle(&rSqRct[index]);
        }

        for (int index = 0; index < iWorkingAmt; index++)
        {
            if (Selected[index])
            {
                SetIndexPen(index, FLAG_SELECTED);
                dcBaseDC.Rectangle(&rSqRct[index]);
            }
        }

        for (int index = 0; index < iWorkingAmt; index++)
        {
            if (SelView && SelView[index])
            {
                SetIndexPen(index, FLAG_MULTIHIGHLIGHT);
                dcBaseDC.Rectangle(&rSqRct[index]);
            }
        }

        for (int index = 0; index < iWorkingAmt; index++)
        {
            if (Highlighted[index])
            {
                SetIndexPen(index, FLAG_HIGHLIGHT);
                dcBaseDC.Rectangle(&rSqRct[index]);
            }
        }

        delete[] rSqRct;
        nDelCt++;
    }
}

void CJunk::CustomFillRect(RECT* lpRect, UINT8* crSrcCol)
{
    int nSqW = lpRect->right - lpRect->left;
    int nSqH = lpRect->top - lpRect->bottom;

    UINT8* pDstImgData = (UINT8*)pBmpData;

    double fpDstA2 = (1.0f - ((double)crSrcCol[3]) / 255.0f);
    double fpDstA1 = 1.0f - fpDstA2;

    for (int y = lpRect->top * 4; y < lpRect->bottom * 4; y += 4)
    {
        for (int x = lpRect->left * 4; x < lpRect->right * 4; x += 4)
        {
            UINT8* crDstCol = const_cast<UINT8*>((UINT8*)&JUNK_BG[(y % JUNK_BG_H) * JUNK_BG_W + (x % JUNK_BG_W)]);

            pDstImgData[(y * iBaseW) + x + 2] = aaadd((fpDstA1 * (double)crSrcCol[0]), (fpDstA2 * (double)crDstCol[0]));
            pDstImgData[(y * iBaseW) + x + 1] = aaadd((fpDstA1 * (double)crSrcCol[1]), (fpDstA2 * (double)crDstCol[1]));
            pDstImgData[(y * iBaseW) + x] =     aaadd((fpDstA1 * (double)crSrcCol[2]), (fpDstA2 * (double)crDstCol[2]));
        }
    }
}

void CJunk::UpdateIndexAll()
{
    for (int nCtr = 0; nCtr < iWorkingAmt; nCtr++)
    {
        UpdateIndex(nCtr);
    }
}

BOOL CJunk::UpdateCtrl(BOOL bUpdFace)
{
    if (dcBaseDC)
    {
        CClientDC* cdc = new CClientDC(this);

        if (bUpdFace)
        {
            UpdateFace();
        }

        cdc->BitBlt(0, 0, iBaseW, iBaseH, &dcBaseDC, 0, 0, SRCCOPY);

        safe_delete(cdc);
    }

    return TRUE;
}

void CJunk::OnMouseMove(UINT nFlags, CPoint point)
{
    if (!bEnabled)
    {
        return;
    }

    if ((xHLOld != -1 ) && (yHLOld != -1))
    {
        SetHighlighted(L"OnMouseMove", (yHLOld * iPalW) + xHLOld, FALSE);
    }

    if (!bOverControl)
    {
        bOverControl = TRUE;

        SetTimer(10, 100, NULL);
    }

    CPoint PalIndex;

    if (!LButtonDown)
    {
        //bMulHL = FALSE;

        if (ProcessHovered(point, PalIndex))
        {
            if (!((PalIndex.y >= iPalH) || (PalIndex.x >= iPalW)))
            {
                SetHighlighted(L"OnMouseMove Hover", (PalIndex.y * iPalW) + PalIndex.x, TRUE);
            }

            if (PalIndex.y != yHLOld || PalIndex.x != xHLOld)
            {
                iHighlightIndex = (PalIndex.x) + (PalIndex.y * iPalW);
                iHighlightx = PalIndex.x;
                iHighlighty = PalIndex.y;

                iHLAmt = 1;

                NotifyParent(CUSTOM_HLCHANGE);

                UpdateCtrl();
            }

            yHLOld = PalIndex.y;
            xHLOld = PalIndex.x;
        }
        else
        {
            if ((xHLOld != -1) && (yHLOld != -1))
            {
                SetHighlighted(L"OnMouseMove", (yHLOld * iPalW) + xHLOld, FALSE);
            }
        }
    }
    else
    {
        if (ProcessHovered(point, PalIndex))
        {
            if ((yHLOld != PalIndex.y) || (xHLOld != PalIndex.x))
            {
                //bMulHL = TRUE;
                ClearSelView();

                if ((PalIndex.y == yInSelStart) && (PalIndex.x == xInSelStart))
                {
                    SetHighlighted(L"OnMouseMove", (PalIndex.y * iPalW) + PalIndex.x, TRUE);
                    iHLAmt = 1;
                }
                else
                {
                    //Multiple selection of palette entries are based on lines instead of boxes
                    int ix, iy, jx, jy, x, y;
                    int ks, ke, kt;

                    ix = iy = jx = jy = x = y = ks = ke = kt = 0;

                    ks = (yInSelStart * iPalW) + xInSelStart;
                    ke = (PalIndex.y * iPalW) + PalIndex.x;

                    if (ks > ke)
                    {
                        kt = ks;
                        ks = ke;
                        ke = kt;
                    }

                    for (y = ks; y <= ke; y++)
                    {
                        SetSelViewItem(L"OnMouseMove::ProcessHovered", y, TRUE);
                        iHLAmt++;
                    }
                }

                NotifyParent(CUSTOM_HLCHANGE);

                xHLOld = PalIndex.x;
                yHLOld = PalIndex.y;

                UpdateCtrl();
            }
        }
    }

    CWnd::OnMouseMove(nFlags, point);
}

void CJunk::OnLButtonDown(UINT nFlags, CPoint point)
{
    if (!bEnabled)
    {
        return;
    }

    SetCapture();

    LButtonDown = TRUE;

    CPoint PalIndex;

    if (ProcessHovered(point, PalIndex))
    {
        yInSelStart = PalIndex.y;
        xInSelStart = PalIndex.x;

        int nNewSingleSel = (yInSelStart * iPalW) + (xInSelStart);

        if (!(nFlags & MK_CONTROL))
        {
            if (nNewSingleSel != SingleSelect)
            {
                ClearSelected();
            }
            else
            {
                if (iSelAmt > 1)
                {
                    ClearSelected();
                }
            }
        }

        SingleSelect = nNewSingleSel;

        UpdateCtrl();

        bInCtrl = TRUE;
    }
    else
    {
        bInCtrl = FALSE;
    }

    CWnd::OnLButtonDown(nFlags, point);
}

void CJunk::UpdateSelAmt()
{
    iSelAmt = 0;

    for (int iy = 0; iy < iPalH; iy++)
    {
        for (int ix = 0; ix < iPalW; ix++)
        {
            const int iSelIndex = (iy * iPalW) + ix;

            if ((iSelIndex < iWorkingAmt) && Selected[iSelIndex])
            {
                iSelAmt++;
            }
        }
    }
}

void CJunk::OnLButtonUp(UINT nFlags, CPoint point)
{
    if (!bEnabled)
    {
        return;
    }

    ReleaseCapture();

    LButtonDown = FALSE;

    if (bInCtrl)
    {
        if (iHLAmt > 1)
        {
            for (int iy = 0; iy < iPalH; iy++)
            {
                for (int ix = 0; ix < iPalW; ix++)
                {
                    if (SelView[(iy * iPalW) + ix])
                    {
                        if (!Selected[(iy * iPalW) + ix])
                        {
                            SetSelected(L"OnLButtonUp", (iy * iPalW) + ix, TRUE);
                        }

                        SetSelViewItem(L"OnLButtonUp::HLAmt > 1", (iy * iPalW) + ix, FALSE);
                    }
                }
            }

            iHLAmt = 0;

            NotifyParent(CUSTOM_MS);
        }
        else
        {
            if (Toggle(Selected[(yInSelStart * iPalW) + xInSelStart]))
            {
                iSelAmt++;
            }
            else
            {
                iSelAmt--;
            }

            SetSelViewItem(L"OnLButtonUp::HLAmt == 1", (yInSelStart * iPalW) + xInSelStart, FALSE);

            NotifyParent(CUSTOM_SS);
        }

        UpdateSelAmt();
    }

    UpdateCtrl();

    CWnd::OnLButtonUp(nFlags, point);
}

BOOL CJunk::ProcessHovered(CPoint hPoint, CPoint& PalPos)
{
    int x = hPoint.x;
    int y = hPoint.y;

    int posmod = GetPaletteSquareSize() + BDR_SZ;

    int xIn = x / posmod;
    int yIn = y / posmod;

    // Verify the hover is over the control still
    if ((xIn >= iPalW) || (xIn < 0) ||
        (yIn >= iPalH) || (yIn < 0) ||
        (((yIn * iPalW) + xIn) >= iWorkingAmt))
    {
        return FALSE;
    }

    PalPos.x = xIn;
    PalPos.y = yIn;

    return TRUE;

}
void CJunk::OnTimer(UINT_PTR nIDEvent)
{
    CPoint p(GetMessagePos());
    ScreenToClient(&p);

    // Get the bounds of the control (just the client area)
    CRect rect;
    rect.top = 0;
    rect.left = 0;

    rect.right = iBaseW;
    rect.bottom = iBaseH;

    // Check the mouse is inside the control
    if (!rect.PtInRect(p))
    {
        // if not then stop looking...
        bOverControl = FALSE;
        KillTimer(10);

        yHLOld = -1;
        xHLOld = -1;

        ClearHighlighted();
        UpdateCtrl();

        NotifyParent(CUSTOM_HLCHANGE);
    }

    CWnd::OnTimer(nIDEvent);
}

void CJunk::OnRButtonDown(UINT nFlags, CPoint point)
{
    CMenu PopupMenu;

    if (PopupMenu.CreatePopupMenu())
    {
        RECT rWnd; GetWindowRect(&rWnd);
        point.x += rWnd.left;
        point.y += rWnd.top;

        bool canCopyOrPaste = false;
        bool canReverse = false;

        for (int i = 0; i < iWorkingAmt; i++)
        {
            if (!canCopyOrPaste)
            {
                if (Selected[i])
                {
                    canCopyOrPaste = true;
                }
            }
            else
            {
                if (Selected[i])
                {
                    canReverse = true;
                    break;
                }
            }
        }

        PopupMenu.AppendMenu(canCopyOrPaste ? MF_ENABLED : MF_DISABLED, CUSTOM_COPY, L"&Copy");
        PopupMenu.AppendMenu(canCopyOrPaste ? MF_ENABLED : MF_DISABLED, CUSTOM_PASTE, L"&Paste");
        PopupMenu.AppendMenu(MF_SEPARATOR, 0, L"");
        PopupMenu.AppendMenu(canReverse ? MF_ENABLED : MF_DISABLED, CUSTOM_REVERSE, L"&Reverse");
        PopupMenu.AppendMenu(MF_SEPARATOR, 0, L"");
        PopupMenu.AppendMenu(MF_ENABLED, CUSTOM_SALL, L"Select &All");
        PopupMenu.AppendMenu(MF_ENABLED, CUSTOM_SNONE, L"Select &None");

        int result = PopupMenu.TrackPopupMenuEx(TPM_LEFTALIGN | TPM_RETURNCMD, point.x, point.y, this, NULL);

        switch (result)
        {
        case CUSTOM_COPY:
        case CUSTOM_PASTE:
            NotifyParent(result);
            break;
        case CUSTOM_SALL:
            SelectAll();
            UpdateCtrl();
            break;
        case CUSTOM_SNONE:
            ClearSelected();
            UpdateCtrl();
            break;
        case CUSTOM_REVERSE:
            GetHost()->GetPalModDlg()->OnBnClickedReverse();
            break;
        }
    }
    else
    {
        OutputDebugString(L"ERROR: Couldn't create popup menu.\n");
    }

    CWnd::OnRButtonDown(nFlags, point);
}

void CJunk::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu)
{
    CWnd::OnInitMenuPopup(pPopupMenu, nIndex, bSysMenu);

    // TODO: Add your message handler code here
}

void CJunk::OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu)
{
    CWnd::OnMenuSelect(nItemID, nFlags, hSysMenu);

    // TODO: Add your message handler code here
}

BOOL CJunk::OnCommand(WPARAM wParam, LPARAM lParam)
{
    switch (LOWORD(wParam))
    {
    case CUSTOM_COPY:
    case CUSTOM_PASTE:
    case CUSTOM_SALL:
    case CUSTOM_SNONE:
    {
        NotifyParent(LOWORD(wParam));
    }
    break;
    }
    return CWnd::OnCommand(wParam, lParam);
}
