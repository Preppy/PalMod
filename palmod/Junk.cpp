#include "StdAfx.h"
#include "junk.h"
#include "PalMod.h"
#include "RegProc.h"
#include "ColorSystem.h"

//This is used for the edit commands
#include "resource.h"

CPen CJunk::m_PIndexHL;
CPen CJunk::m_PIndexSL;
CPen CJunk::m_PIndexMHL;
CPen CJunk::m_PIndexBG;

BOOL CJunk::m_bCreatedPens = CJunk::InitPen();

int GetDpiForScreen()
{
    static int dpiX = -1;

    if (dpiX == -1)
    {
        SetProcessDPIAware();

        HDC screen = GetDC(0);

        dpiX = GetDeviceCaps(screen, LOGPIXELSX);

        ReleaseDC(0, screen);
    }

    return dpiX;
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

int CJunk::GetPaletteSquareSize()
{
    return static_cast<int>(floor((BASE_PALETTE_SQUARE_SIZE * GetDpiForScreen()) / 96.0));
}

UCHAR CJunk::Toggle(UCHAR& tVar)
{
    tVar = !tVar;

    return tVar;
}

void CJunk::ClearSelView()
{
    if (m_SelView)
    {
        for (int iPos = 0; iPos < m_iWorkingAmt; iPos++)
        {
            SetSelViewItem(L"ClearSelView", iPos, FALSE);
        }
    }

    m_iHLAmt = 0;
}

bool CJunk::SelectMatchingColorsInPalette(DWORD dwColorToMatch, DWORD dwBackgroundColor)
{
    bool fFoundColor = false;

    if (m_Selected)
    {
        COLORREF dwordAsColor = RGB(GetBValue(dwColorToMatch), GetGValue(dwColorToMatch), GetRValue(dwColorToMatch));
        COLORREF crBackgroundColor = RGB(GetBValue(dwBackgroundColor), GetGValue(dwBackgroundColor), GetRValue(dwBackgroundColor));

        bool fShouldProcessColor = (dwordAsColor != crBackgroundColor);

        if (!fShouldProcessColor)
        {
            // The clicked color might be the background color: as such only deselect a current selection
            // if we're making a positive selection.
            for (int iIndex = 0; iIndex < m_iWorkingAmt; iIndex++)
            {
                if ((m_BasePal[iIndex] & 0xFFFFFF) == dwordAsColor)
                {
                    fShouldProcessColor = true;
                    break;
                }
            }
        }

        if (fShouldProcessColor)
        {
            for (int iIndex = 1; iIndex < m_iWorkingAmt; iIndex++) // skip the transparent first color
            {
                bool fIsSameColorAtIndex = ((m_BasePal[iIndex] & 0xFFFFFF) == dwordAsColor);
                m_Selected[iIndex] = fIsSameColorAtIndex ? 1 : 0;

                if (fIsSameColorAtIndex)
                {
                    CString strMessage;

                    if (fFoundColor)
                    {
                        strMessage.Format(L"Color #%02x%02x%02x found in multiple locations.", GetRValue(dwordAsColor), GetGValue(dwordAsColor), GetBValue(dwordAsColor));
                    }
                    else
                    {
                        fFoundColor = true;
                        strMessage.Format(L"Color #%02x%02x%02x found at position %u.", GetRValue(dwordAsColor), GetGValue(dwordAsColor), GetBValue(dwordAsColor), iIndex);
                    }

                    GetHost()->GetPalModDlg()->SetStatusText(strMessage.GetString());
                }
            }

            if (!fFoundColor)
            {
                CString strMessage;
                strMessage.Format(L"Color #%02x%02x%02x not present.", GetRValue(dwordAsColor), GetGValue(dwordAsColor), GetBValue(dwordAsColor));
                GetHost()->GetPalModDlg()->SetStatusText(strMessage.GetString());
            }
        }
    }

    UpdateSelAmt();

    return fFoundColor;
}

void CJunk::ClearSelected()
{
    if (m_Selected)
    {
        for (int iPos = 0; iPos < m_iWorkingAmt; iPos++)
        {
            m_Selected[iPos] = 0;
        }
    }

    m_iCurrentIndexIfSingleSelection = -1;

    m_iSelAmt = 0;
}

void CJunk::ClearHighlighted()
{
    if (m_Highlighted)
    {
        for (int iPos = 0; iPos < m_iWorkingAmt; iPos++)
        {
            m_Highlighted[iPos] = 0;
        }
    }

    //m_iHLAmt = 0;
}

void CJunk::SetJunkState(UCHAR* State, LPCWSTR pszFunctionName, int nIndex, UCHAR nValue)
{
    bool fSuccess = false;
    if (State)
    {
        // The user can be mousing over the palette boxes while they are also updating the palettes being
        // shown.  As such, we want to ensure that we aren't processing a message relevant to a larger palette set.
        if ((nIndex >= 0) && (nIndex < m_nAllocationLength))
        {
            State[nIndex] = nValue;
            fSuccess = true;
        }
    }
}

void CJunk::SetHighlighted(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue)
{
    SetJunkState(m_Highlighted, pszFunctionName, nIndex, nValue);
}

void CJunk::SetSelViewItem(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue)
{
    SetJunkState(m_SelView, pszFunctionName, nIndex, nValue);
}

void CJunk::SetSelected(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue)
{
    SetJunkState(m_Selected, pszFunctionName, nIndex, nValue);
}

void CJunk::LoadDefaultPal()
{
    for (int iPos = 0; iPos < (m_iPalH * m_iPalW); iPos++)
    {
        m_BasePal[iPos] = RGB((F_R + 1) * iPos / 13, (F_G + 1) * iPos / 13, (F_B + 1) * iPos / 13);
    }
}

BOOL CJunk::InitNewSize(int nNewAmt, COLORREF* rgNewPal)
{
    //Clear the current variables/pointers/arrays etc
    if (nNewAmt != m_nCurrAmt)
    {
        if (nNewAmt > m_nMaximumColorsPerPage)
        {
            CString strError;
            static bool s_fAlreadyShown = false;
            // You can either slice the palette or add separators so that PalGroup can handle page divisions
            // You can easily have separators added for you automatically by using the new ::CreateDefPal logic
            // that is already in use for SFA3 and MSH and some of the other more recently added games
            strError.Format(L"ERROR: Our color table can only show %u colors per page, but this palette wants %u colors on one page.  This palette is too large and needs to be modified or split.\n\nThis is a bug in PalMod: please report it.\n", m_nMaximumColorsPerPage, nNewAmt);
            OutputDebugString(strError);
            if (!s_fAlreadyShown)
            {
                s_fAlreadyShown = true;
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
            }
            return FALSE;
        }

        if (!m_bFirstInit)
        {
            CleanUp();
        }
        else
        {
            m_bFirstInit = FALSE;
        }

        //Set new width/height
        m_iPalW = (nNewAmt > m_nWidthMax) ? m_nWidthMax : nNewAmt;

        if (nNewAmt > m_nWidthMax)
        {
            m_iPalH = (nNewAmt / m_nWidthMax) + (nNewAmt % m_nWidthMax ? 1 : 0);
        }
        else
        {
            m_iPalH = 1;
        }

        //Set control width/height
        m_iBaseW = (m_iPalW * GetPaletteSquareSize()) + ((m_iPalW * BDR_SZ) + BDR_SZ);
        m_iBaseH = (m_iPalH * GetPaletteSquareSize()) + ((m_iPalH * BDR_SZ) + BDR_SZ);

        //Set the working amount
        m_iWorkingAmt = nNewAmt;
        m_nAllocationLength = m_iPalW * m_iPalH;

        if (m_nAllocationLength != m_iWorkingAmt)
        {
            // This handles non-rectangular layouts, since we allocate a H*W layout
            const int nSrcIndex = (m_iWorkingAmt % m_nWidthMax) + ((m_iPalH - 1) * m_nWidthMax);
            const int nDstIndex = ((m_iPalH * m_nWidthMax) - 1);

            m_rUnused.top = (BDR_SZ * ((nSrcIndex / m_iPalW) + 1)) + ((GetPaletteSquareSize()) * (nSrcIndex / m_iPalW));
            m_rUnused.left = (BDR_SZ * ((nSrcIndex % m_iPalW) + 1)) + ((GetPaletteSquareSize()) * (nSrcIndex % m_iPalW));
            m_rUnused.right = (BDR_SZ * ((nDstIndex % m_iPalW) + 2)) + (GetPaletteSquareSize() * ((nDstIndex % m_iPalW) + 1));
            m_rUnused.bottom = (BDR_SZ * ((nDstIndex / m_iPalW) + 2)) + (GetPaletteSquareSize() * ((nDstIndex / m_iPalW) + 1));
        }

        //Create Selected, Highlighted and SelView
        m_Highlighted = new UCHAR[m_nAllocationLength];
        m_Selected = new UCHAR[m_nAllocationLength];
        m_SelView = new UCHAR[m_nAllocationLength];

        ClearSelView();
        ClearSelected();
        ClearHighlighted();

        ProcBaseBMP();

        //Set the palette
        m_BasePal = rgNewPal;

        UpdateIndexAll();

        m_nCurrAmt = nNewAmt;
    }
    else
    {
        m_BasePal = rgNewPal;

        UpdateIndexAll();
    }

    return TRUE;
}

void CJunk::CleanUp()
{
    //Remove Selected, SelView and Highlighted
    safe_delete_array(m_Selected);
    safe_delete_array(m_SelView);
    safe_delete_array(m_Highlighted);
}

void CJunk::NotifyParent(int iCustomMessage)
{
    static NMHDR myhdr = {};

    myhdr.hwndFrom = GetSafeHwnd();
    myhdr.idFrom = m_nArrayIndex;
    myhdr.code = iCustomMessage;

    GetParent()->PostMessage(WM_NOTIFY, 0, (LPARAM)&myhdr);
}

void CJunk::SetIndexPen(int nIndex, PenOptions pFlag)
{
    switch (pFlag)
    {
    case PenOptions::FLAG_HIGHLIGHT:
        m_dcBaseDC.SelectObject(&m_PIndexHL);
        break;
    case PenOptions::FLAG_SELECTED:
        m_dcBaseDC.SelectObject(&m_PIndexSL);
        break;
    case PenOptions::FLAG_MULTIHIGHLIGHT:
        m_dcBaseDC.SelectObject(&m_PIndexMHL);
        break;
    case PenOptions::FLAG_DEFAULT:
        m_dcBaseDC.SelectObject(&m_PIndexBG);
        break;
    }
}

BOOL CJunk::InitPen()
{
    m_PIndexHL.CreatePen(0, 1, RGB(HL_R, HL_G, HL_B));
    m_PIndexSL.CreatePen(0, 1, RGB(SL_R, SL_G, SL_B));
    m_PIndexMHL.CreatePen(0, 1, RGB(MH_R, MH_G, MH_B));
    m_PIndexBG.CreatePen(0, 1, RGB(BG_R, BG_G, BG_B));

    return TRUE;
}

CJunk::CJunk()
{
    m_nWidthMax = CRegProc::GetColorsPerLine();
    m_nMaximumColorsPerPage = CRegProc::GetMaxPalettePageSize();

    RegisterWindowClass();
}

CJunk::~CJunk()
{
    //delete (dcPaintDC);
    CleanUp();

    if (m_bCreatedPens)
    {
        m_bCreatedPens = FALSE;
        DeleteObject(m_PIndexHL);
        DeleteObject(m_PIndexSL);
        DeleteObject(m_PIndexMHL);
        DeleteObject(m_PIndexBG);
    }
}

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
    if (m_hBmp && !DeleteObject(m_hBmp))
    {
        OutputDebugString(L"ERROR: Could not delete old hBmp\n");
    }

    m_Bmpi.bmiHeader.biWidth = m_iBaseW;
    m_Bmpi.bmiHeader.biHeight = -m_iBaseH;
    m_Bmpi.bmiHeader.biPlanes = 1;
    m_Bmpi.bmiHeader.biBitCount = 32;
    m_Bmpi.bmiHeader.biCompression = BI_RGB;
    m_Bmpi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

    //HBITMAP hTempBmp;
    //dcBaseDC.SelectObject(&hTempBmp);

    m_hBmp = CreateDIBSection(m_dcBaseDC.GetSafeHdc(), &m_Bmpi, DIB_RGB_COLORS, (void**)&m_pBmpData, NULL, 0);

    if (!m_bFirstDCInit)
    {
        m_dcBaseDC.SelectObject(m_hBmp);
        m_dcBaseDC.SelectStockObject(NULL_BRUSH);
    }

    DrawBG();

    return TRUE;
}

void CJunk::ClearBaseBMP()
{
    safe_delete_array(m_pBmpData);
}

void CJunk::InitDC(CPaintDC &PaintDC)
{
    if (m_bFirstDCInit)
    {
        //Init base
        m_dcBaseDC.CreateCompatibleDC(&PaintDC);
        m_dcBaseDC.SelectObject(m_hBmp);
        m_dcBaseDC.SelectStockObject(NULL_BRUSH);

        m_bFirstDCInit = FALSE;

        UpdateIndexAll();
    }
}

void CJunk::DrawBG()
{
    if (!m_bFirstDCInit)
    {
        CRect rBGRect(0, 0, m_iBaseW, m_iBaseH);

        m_dcBaseDC.FillSolidRect(&rBGRect, RGB(BG_R, BG_G, BG_B));

        //Draw the unused palette indexes
        if (m_nAllocationLength != m_iWorkingAmt)
        {
            m_dcBaseDC.FillSolidRect(&m_rUnused, GetSysColor(COLOR_3DFACE));
        }
    }
}

void CJunk::SelectAll()
{
    if (m_Selected)
    {
        for (int iPos = 0; iPos < m_iWorkingAmt; iPos++)
        {
            m_Selected[iPos] = TRUE;
        }
    }

    UpdateSelAmt();
}

void CJunk::MovePaletteSelection(SelectionMovement nOption)
{
    if (m_bEnabled)
    {
        switch (nOption)
        {
            case SelectionMovement::Left:
            {
                if (m_Selected && m_iWorkingAmt)
                {
                    BOOL fPreviousState;
                    BOOL fNextState = m_Selected[0];

                    for (int iPos = m_iWorkingAmt - 1; iPos > 0 ; iPos--)
                    {
                        fPreviousState = m_Selected[iPos];
                        m_Selected[iPos] = fNextState;
                        fNextState = fPreviousState;
                    }

                    m_Selected[0] = fNextState;
                }
                break;
            }
            case SelectionMovement::Up:
            {
                // We want multiple full rows.  SKip partially rowed palettes
                if (m_Selected && m_iWorkingAmt && (m_iPalH > 1) && (m_iWorkingAmt % m_iPalW == 0))
                {
                    std::vector<BOOL> rgfShiftedLayout;
                    rgfShiftedLayout.resize(m_iPalW);

                    for (int iPos = 0; iPos < m_iPalW; iPos++)
                    {
                        rgfShiftedLayout.at(iPos) = m_Selected[iPos];
                    }

                    for (int iPos = 0; iPos < (m_iWorkingAmt - m_iPalW); iPos++)
                    {
                        m_Selected[iPos] = m_Selected[iPos + m_iPalW];
                    }

                    for (int iPos = 0; iPos < m_iPalW; iPos++)
                    {
                        m_Selected[iPos + (m_iWorkingAmt - m_iPalW)] = rgfShiftedLayout.at(iPos);
                    }
                }
                break;
            }
            case SelectionMovement::Down:
            {
                // We want multiple full rows.  SKip partially rowed palettes
                if (m_Selected && m_iWorkingAmt && (m_iPalH > 1) && (m_iWorkingAmt % m_iPalW == 0))
                {
                    std::vector<BOOL> rgfShiftedLayout;
                    rgfShiftedLayout.resize(m_iWorkingAmt);

                    for (int iPos = 0; iPos < m_iPalW; iPos++)
                    {
                        rgfShiftedLayout.at(iPos) = m_Selected[(m_iWorkingAmt - m_iPalW) + iPos];
                    }

                    for (int iPos = m_iPalW; iPos < m_iWorkingAmt; iPos++)
                    {
                        rgfShiftedLayout.at(iPos) = m_Selected[iPos - m_iPalW];
                    }

                    for (int iPos = 0; iPos < m_iWorkingAmt; iPos++)
                    {
                        m_Selected[iPos] = rgfShiftedLayout.at(iPos);
                    }
                }
                break;
            }
            case SelectionMovement::Right:
            {
                if (m_Selected && m_iWorkingAmt)
                {
                    BOOL fPreviousState;
                    BOOL fNextState = m_Selected[m_iWorkingAmt - 1];

                    for (int iPos = 0; iPos < m_iWorkingAmt; iPos++)
                    {
                        fPreviousState = m_Selected[iPos];
                        m_Selected[iPos] = fNextState;
                        fNextState = fPreviousState;
                    }
                }
                break;
            }
            case SelectionMovement::Plus:
            {
                if (m_Selected && m_iWorkingAmt)
                {
                    BOOL fFoundAPositive = m_Selected[m_iWorkingAmt - 1];

                    // find the first FALSE entry and flip that
                    for (int iPos = 0; iPos < m_iWorkingAmt; iPos++)
                    {
                        if (!m_Selected[iPos] && fFoundAPositive)
                        {
                            m_Selected[iPos] = TRUE;
                            break;
                        }

                        if (m_Selected[iPos])
                        {
                            fFoundAPositive = TRUE;
                        }
                    }

                    if (!fFoundAPositive)
                    {
                        m_Selected[0] = TRUE;
                    }
                }
                break;
            }
            case SelectionMovement::Minus:
            {
                if (m_Selected && m_iWorkingAmt)
                {
                    BOOL fFoundAPositive = m_Selected[0];

                    // find the last FALSE entry and flip that
                    for (int iPos = m_iWorkingAmt - 1; iPos >= 0; iPos--)
                    {
                        if (!m_Selected[iPos] && fFoundAPositive)
                        {
                            m_Selected[iPos] = TRUE;
                            break;
                        }

                        if (m_Selected[iPos])
                        {
                            fFoundAPositive = TRUE;
                        }
                    }

                    if (!fFoundAPositive)
                    {
                        m_Selected[m_iWorkingAmt - 1] = TRUE;
                    }
                }
                break;
            }
            default:
                break;
        }

        // Figure out what our single/multi select index is
        UpdateSelAmt();

        // Redraw highlights
        UpdateCtrl();
        
        if (m_iSelAmt == 1)
        {
            NotifyParent(CUSTOM_SS);
        }
        else
        {
            NotifyParent(CUSTOM_MS);
        }
    }
}

void CJunk::UpdateIndex(int index)
{
    if (m_bEnabled && !m_bFirstDCInit)
    {
        if (index < m_iWorkingAmt)
        {
            m_rIndexRect.top =    (BDR_SZ * ((index / m_iPalW) + 1)) + (GetPaletteSquareSize() * (index / m_iPalW));
            m_rIndexRect.left =   (BDR_SZ * ((index % m_iPalW) + 1)) + (GetPaletteSquareSize() * (index % m_iPalW));
            m_rIndexRect.right =  (BDR_SZ * ((index % m_iPalW) + 1)) + (GetPaletteSquareSize() * ((index % m_iPalW) + 1));
            m_rIndexRect.bottom = (BDR_SZ * ((index / m_iPalW) + 1)) + (GetPaletteSquareSize() * ((index / m_iPalW) + 1));

            BlendMode bm = BlendMode::Default;

            CGameClass* CurrGame = GetHost()->GetCurrGame();

            if (CurrGame)
            {
                bm = CurrGame->GetGameSpecificBlendMode();
            }

            CustomFillRect(&m_rIndexRect, reinterpret_cast<uint8_t*>(&m_BasePal[index]), bm);
        }
    }
}

void CJunk::UpdateFace()
{
    static int nNewCt = 0;
    static int nDelCt = 0;

    if (m_bEnabled)
    {
        RECT* rSqRct = new RECT[m_iWorkingAmt];

        nNewCt++;

        for (int index = 0; index < m_iWorkingAmt; index++)
        {
            SetIndexPen(index, PenOptions::FLAG_DEFAULT);

            rSqRct[index].top = (BDR_SZ * ((index / m_iPalW) + 1)) + ((GetPaletteSquareSize()) * (index / m_iPalW));
            rSqRct[index].left = (BDR_SZ * ((index % m_iPalW) + 1)) + ((GetPaletteSquareSize()) * (index % m_iPalW));
            rSqRct[index].right = (BDR_SZ * ((index % m_iPalW) + 1)) + (GetPaletteSquareSize() * ((index % m_iPalW) + 1));
            rSqRct[index].bottom = (BDR_SZ * ((index / m_iPalW) + 1)) + (GetPaletteSquareSize() * ((index / m_iPalW) + 1));

            InflateRect(&rSqRct[index], 1, 1);

            m_dcBaseDC.Rectangle(&rSqRct[index]);
        }

        for (int index = 0; index < m_iWorkingAmt; index++)
        {
            if (m_Selected[index])
            {
                SetIndexPen(index, PenOptions::FLAG_SELECTED);
                m_dcBaseDC.Rectangle(&rSqRct[index]);
            }
        }

        for (int index = 0; index < m_iWorkingAmt; index++)
        {
            if (m_SelView && m_SelView[index])
            {
                SetIndexPen(index, PenOptions::FLAG_MULTIHIGHLIGHT);
                m_dcBaseDC.Rectangle(&rSqRct[index]);
            }
        }

        for (int index = 0; index < m_iWorkingAmt; index++)
        {
            if (m_Highlighted[index])
            {
                SetIndexPen(index, PenOptions::FLAG_HIGHLIGHT);
                m_dcBaseDC.Rectangle(&rSqRct[index]);
            }
        }

        delete[] rSqRct;
        nDelCt++;
    }
}

void CJunk::CustomFillRect(RECT* lpRect, uint8_t* crSrcCol, BlendMode bm)
{
    int nSqW = lpRect->right - lpRect->left;
    int nSqH = lpRect->top - lpRect->bottom;

    uint8_t* pDstImgData = reinterpret_cast<uint8_t*>(m_pBmpData);

    const uint8_t nAdjustedAlpha = ColorSystem::GetAlphaValueForBlendType(bm, crSrcCol[3], crSrcCol[0], crSrcCol[1], crSrcCol[2]);

    double fpDstA2 = (1.0f - (static_cast<double>(nAdjustedAlpha) / 255.0f));
    double fpDstA1 = 1.0f - fpDstA2;

    for (int y = lpRect->top * 4; y < lpRect->bottom * 4; y += 4)
    {
        for (int x = lpRect->left * 4; x < lpRect->right * 4; x += 4)
        {
            const uint8_t* crDstCol = reinterpret_cast<const uint8_t*>(&JUNK_BG[(y % JUNK_BG_H) * JUNK_BG_W + (x % JUNK_BG_W)]);

            pDstImgData[(y * m_iBaseW) + x + 2] = static_cast<uint8_t>(min(255.0, (fpDstA1 * static_cast<double>(crSrcCol[0])) + (fpDstA2 * static_cast<double>(crDstCol[0]))));
            pDstImgData[(y * m_iBaseW) + x + 1] = static_cast<uint8_t>(min(255.0, (fpDstA1 * static_cast<double>(crSrcCol[1])) + (fpDstA2 * static_cast<double>(crDstCol[1]))));
            pDstImgData[(y * m_iBaseW) + x]     = static_cast<uint8_t>(min(255.0, (fpDstA1 * static_cast<double>(crSrcCol[2])) + (fpDstA2 * static_cast<double>(crDstCol[2]))));
        }
    }
}

void CJunk::UpdateIndexAll()
{
    for (int nCtr = 0; nCtr < m_iWorkingAmt; nCtr++)
    {
        UpdateIndex(nCtr);
    }
}

BOOL CJunk::UpdateCtrl(BOOL fUpdFace)
{
    if (m_dcBaseDC)
    {
        CClientDC* cdc = new CClientDC(this);

        if (fUpdFace)
        {
            UpdateFace();
        }

        cdc->BitBlt(0, 0, m_iBaseW, m_iBaseH, &m_dcBaseDC, 0, 0, SRCCOPY);

        safe_delete(cdc);
    }

    return TRUE;
}

void CJunk::OnMouseMove(UINT nFlags, CPoint point)
{
    if (!m_bEnabled)
    {
        return;
    }

    if ((m_xHLOld != -1 ) && (m_yHLOld != -1))
    {
        SetHighlighted(L"OnMouseMove", (m_yHLOld * m_iPalW) + m_xHLOld, FALSE);
    }

    if (!m_bOverControl)
    {
        m_bOverControl = TRUE;

        SetTimer(10, 100, NULL);
    }

    CPoint PalIndex;

    if (!m_LButtonDown)
    {
        //bMulHL = FALSE;

        if (ProcessHovered(point, PalIndex))
        {
            if (!((PalIndex.y >= m_iPalH) || (PalIndex.x >= m_iPalW)))
            {
                SetHighlighted(L"OnMouseMove Hover", (PalIndex.y * m_iPalW) + PalIndex.x, TRUE);
            }

            if (PalIndex.y != m_yHLOld || PalIndex.x != m_xHLOld)
            {
                m_iHighlightIndex = (PalIndex.x) + (PalIndex.y * m_iPalW);
                m_iHighlightx = PalIndex.x;
                m_iHighlighty = PalIndex.y;

                m_iHLAmt = 1;

                NotifyParent(CUSTOM_HLCHANGE);

                UpdateCtrl();
            }

            m_yHLOld = PalIndex.y;
            m_xHLOld = PalIndex.x;
        }
        else
        {
            if ((m_xHLOld != -1) && (m_yHLOld != -1))
            {
                SetHighlighted(L"OnMouseMove", (m_yHLOld * m_iPalW) + m_xHLOld, FALSE);
            }
        }
    }
    else
    {
        if (ProcessHovered(point, PalIndex))
        {
            if ((m_yHLOld != PalIndex.y) || (m_xHLOld != PalIndex.x))
            {
                //bMulHL = TRUE;
                ClearSelView();

                if ((PalIndex.y == m_yInSelStart) && (PalIndex.x == m_xInSelStart))
                {
                    SetHighlighted(L"OnMouseMove", (PalIndex.y * m_iPalW) + PalIndex.x, TRUE);
                    m_iHLAmt = 1;
                }
                else
                {
                    //Multiple selection of palette entries are based on lines instead of boxes
                    int ix, iy, jx, jy, x, y;
                    int ks, ke, kt;

                    ix = iy = jx = jy = x = y = ks = ke = kt = 0;

                    ks = (m_yInSelStart * m_iPalW) + m_xInSelStart;
                    ke = (PalIndex.y * m_iPalW) + PalIndex.x;

                    if (ks > ke)
                    {
                        kt = ks;
                        ks = ke;
                        ke = kt;
                    }

                    for (y = ks; y <= ke; y++)
                    {
                        SetSelViewItem(L"OnMouseMove::ProcessHovered", y, TRUE);
                        m_iHLAmt++;
                    }
                }

                NotifyParent(CUSTOM_HLCHANGE);

                m_xHLOld = PalIndex.x;
                m_yHLOld = PalIndex.y;

                UpdateCtrl();
            }
        }
    }

    CWnd::OnMouseMove(nFlags, point);
}

void CJunk::OnLButtonDown(UINT nFlags, CPoint point)
{
    if (!m_bEnabled)
    {
        return;
    }

    SetCapture();

    m_LButtonDown = TRUE;

    CPoint PalIndex;

    if (ProcessHovered(point, PalIndex))
    {
        m_yInSelStart = PalIndex.y;
        m_xInSelStart = PalIndex.x;

        int nNewSingleSel = (m_yInSelStart * m_iPalW) + (m_xInSelStart);

        if (!(nFlags & MK_CONTROL))
        {
            if (nNewSingleSel != m_iCurrentIndexIfSingleSelection)
            {
                ClearSelected();
            }
            else
            {
                if (m_iSelAmt > 1)
                {
                    ClearSelected();
                }
            }
        }

        m_iCurrentIndexIfSingleSelection = nNewSingleSel;

        UpdateCtrl();

        m_bInCtrl = TRUE;
    }
    else
    {
        m_bInCtrl = FALSE;
    }

    CWnd::OnLButtonDown(nFlags, point);
}

void CJunk::UpdateSelAmt()
{
    m_iSelAmt = 0;

    for (int iy = 0; iy < m_iPalH; iy++)
    {
        for (int ix = 0; ix < m_iPalW; ix++)
        {
            const int iSelIndex = (iy * m_iPalW) + ix;

            if ((iSelIndex < m_iWorkingAmt) && m_Selected[iSelIndex])
            {
                m_iSelAmt++;
                m_iCurrentIndexIfSingleSelection = iSelIndex;
            }
        }
    }

    if (m_iSelAmt != 1)
    {
        m_iCurrentIndexIfSingleSelection = -1;
    }
}

void CJunk::OnLButtonUp(UINT nFlags, CPoint point)
{
    if (!m_bEnabled)
    {
        return;
    }

    ReleaseCapture();

    m_LButtonDown = FALSE;

    if (m_bInCtrl)
    {
        if (m_iHLAmt > 1)
        {
            for (int iy = 0; iy < m_iPalH; iy++)
            {
                for (int ix = 0; ix < m_iPalW; ix++)
                {
                    if (m_SelView[(iy * m_iPalW) + ix])
                    {
                        if (!m_Selected[(iy * m_iPalW) + ix])
                        {
                            SetSelected(L"OnLButtonUp", (iy * m_iPalW) + ix, TRUE);
                        }

                        SetSelViewItem(L"OnLButtonUp::HLAmt > 1", (iy * m_iPalW) + ix, FALSE);
                    }
                }
            }

            m_iHLAmt = 0;

            NotifyParent(CUSTOM_MS);
        }
        else
        {
            if (Toggle(m_Selected[(m_yInSelStart * m_iPalW) + m_xInSelStart]))
            {
                m_iSelAmt++;
            }
            else
            {
                m_iSelAmt--;
            }

            SetSelViewItem(L"OnLButtonUp::HLAmt == 1", (m_yInSelStart * m_iPalW) + m_xInSelStart, FALSE);

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
    if ((xIn >= m_iPalW) || (xIn < 0) ||
        (yIn >= m_iPalH) || (yIn < 0) ||
        (((yIn * m_iPalW) + xIn) >= m_iWorkingAmt))
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

    rect.right = m_iBaseW;
    rect.bottom = m_iBaseH;

    // Check the mouse is inside the control
    if (!rect.PtInRect(p))
    {
        // if not then stop looking...
        m_bOverControl = FALSE;
        KillTimer(10);

        m_yHLOld = -1;
        m_xHLOld = -1;

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

        int nCountColorSelected = 0;

        for (int i = 0; i < m_iWorkingAmt; i++)
        {
            if (m_Selected[i])
            {
                nCountColorSelected++;
            }
        }

        PopupMenu.AppendMenu(nCountColorSelected ? MF_ENABLED : MF_DISABLED, CUSTOM_COPY, L"&Copy");
        PopupMenu.AppendMenu(nCountColorSelected ? MF_ENABLED : MF_DISABLED, CUSTOM_PASTE, L"&Paste");
        PopupMenu.AppendMenu(MF_SEPARATOR, 0, L"");
        PopupMenu.AppendMenu((nCountColorSelected > 1) ? MF_ENABLED : MF_DISABLED, CUSTOM_REVERSE, L"&Reverse");

        CMenu GradientMenu;
        
        GradientMenu.CreatePopupMenu();

        GradientMenu.AppendMenu((nCountColorSelected > 2) ? MF_ENABLED : MF_DISABLED, CUSTOM_GRADIENT_RGB, L"RGB");
        GradientMenu.AppendMenu((nCountColorSelected > 2) ? MF_ENABLED : MF_DISABLED, CUSTOM_GRADIENT_HSL, L"HSL");
        GradientMenu.AppendMenu((nCountColorSelected > 2) ? MF_ENABLED : MF_DISABLED, CUSTOM_GRADIENT_HSV, L"HSV");
        GradientMenu.AppendMenu((nCountColorSelected > 2) ? MF_ENABLED : MF_DISABLED, CUSTOM_GRADIENT_LAB, L"LAB");
        GradientMenu.AppendMenu((nCountColorSelected > 2) ? MF_ENABLED : MF_DISABLED, CUSTOM_GRADIENT_XYZ, L"XYZ");

        PopupMenu.AppendMenu(MF_POPUP | ((nCountColorSelected > 2) ? MF_ENABLED : MF_DISABLED), (UINT_PTR)GradientMenu.m_hMenu, L"Gradient");

        PopupMenu.AppendMenu(MF_SEPARATOR, 0, L"");
        PopupMenu.AppendMenu(MF_ENABLED, CUSTOM_SALL, L"Select &All");
        PopupMenu.AppendMenu(MF_ENABLED, CUSTOM_SNONE, L"Select &None");
        PopupMenu.AppendMenu(MF_SEPARATOR, 0, L"");
        PopupMenu.AppendMenu(m_nAllocationLength ? MF_ENABLED : MF_DISABLED, CUSTOM_COPYOFFSET, L"Copy Offset");

        int result = PopupMenu.TrackPopupMenuEx(TPM_LEFTALIGN | TPM_RETURNCMD, point.x, point.y, this, NULL);

        switch (result)
        {
        case CUSTOM_COPY:
        case CUSTOM_PASTE:
        case CUSTOM_COPYOFFSET:
            NotifyParent(result);
            break;
        case CUSTOM_GRADIENT_HSL:
            GetHost()->GetPalModDlg()->OnBnClickedGradient_HSL();
            break;
        case CUSTOM_GRADIENT_HSV:
            GetHost()->GetPalModDlg()->OnBnClickedGradient_HSV();
            break;
        case CUSTOM_GRADIENT_LAB:
            GetHost()->GetPalModDlg()->OnBnClickedGradient_LAB();
            break;
        case CUSTOM_GRADIENT_RGB:
            GetHost()->GetPalModDlg()->OnBnClickedGradient_RGB();
            break;
        case CUSTOM_GRADIENT_XYZ:
            GetHost()->GetPalModDlg()->OnBnClickedGradient_XYZ();
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

void CJunk::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL fSysMenu)
{
    CWnd::OnInitMenuPopup(pPopupMenu, nIndex, fSysMenu);

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
    case CUSTOM_COPYOFFSET:
    {
        NotifyParent(LOWORD(wParam));
        break;
    }
    }
    return CWnd::OnCommand(wParam, lParam);
}
