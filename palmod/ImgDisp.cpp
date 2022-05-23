// ImgDisp.cpp : implementation file
//

#include "stdafx.h"
#include "ImgDisp.h"

#include "resource.h"
#include "atlimage.h"
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

    //pImgBuffer[nIndex]->pBmpData = new UINT32[nWidth * nHeight];

    currInfo->bmiHeader.biWidth = nWidth;
    currInfo->bmiHeader.biHeight = nHeight;
    currInfo->bmiHeader.biPlanes = 1;
    currInfo->bmiHeader.biBitCount = 32;
    currInfo->bmiHeader.biCompression = BI_RGB;
    currInfo->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

    *currBmp = CreateDIBSection(ImageDC->GetSafeHdc(), currInfo, DIB_RGB_COLORS, (void **)&pImgBuffer[nIndex]->pBmpData, NULL, 0);
}
*/

void CImgDisp::ClearUsed()
{
    memset(m_bUsed, 0, sizeof(UINT8) * MAX_IMAGES_DISPLAYABLE);
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

    for (int iPos = 0; iPos < MAX_IMAGES_DISPLAYABLE; iPos++)
    {
        safe_delete_array(m_ppSpriteOverrideTexture[iPos]);
    }
}

void CImgDisp::AddImageNode(int nIndex, UINT16 uImgW, UINT16 uImgH, UINT8* pImgData, COLORREF* pPalette, int uPalSz, int nXOffs, int nYOffs)
{
    sImgNode* pNewNode = new sImgNode;

    pNewNode->uImgW = uImgW;
    pNewNode->uImgH = uImgH;
    pNewNode->nXOffs = nXOffs;
    pNewNode->nYOffs = nYOffs;

    pNewNode->pImgData = pImgData;
    pNewNode->pPalette = pPalette;
    pNewNode->uPalSz = uPalSz;

    if (m_pImgBuffer[nIndex])
    {
        FlushImageNode(nIndex);
    }

    m_pImgBuffer[nIndex] = pNewNode;

    //Set used
    m_bUsed[nIndex] = 1;

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

    if ((nXOffs + uImgW) > m_rImgRct.right)
    {
        m_rImgRct.right = nXOffs + uImgW;
    }

    if ((nYOffs + uImgH) > m_rImgRct.bottom)
    {
        m_rImgRct.bottom = nYOffs + uImgH;
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

    m_rSrcRct.top = (MAIN_H / 2) - (int)((double)(nCtrlH / 2) / m_fpZoom);
    m_rSrcRct.left = (MAIN_W / 2) - (int)((double)(nCtrlW / 2) / m_fpZoom);
    m_rSrcRct.bottom = m_rSrcRct.top + (int)((double)nCtrlH / m_fpZoom);
    m_rSrcRct.right = m_rSrcRct.left + (int)((double)nCtrlW / m_fpZoom);

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

    int nBlinkImageIndex = (indexOfImageUsingBlinkPalette ? (indexOfImageUsingBlinkPalette & 0x00FF) : MAX_IMAGES_DISPLAYABLE);

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
        else if (m_ppSpriteOverrideTexture[nImgCtr])
        {
            //Draw the img
            CustomBlt(
                nImgCtr,
                -1, // overridden 
                -1, // overridden 
                (nBlinkImageIndex == nImgCtr)
            );

            OutputDebugString(L"Loaded alternate sprite for character with no sprite... \n");
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

bool CImgDisp::LoadExternalRAWSprite(UINT nPositionToLoadTo, SpriteImportDirection direction, WCHAR* pszTextureLocation)
{
    CFile TextureFile;

    if (TextureFile.Open(pszTextureLocation, CFile::modeRead | CFile::typeBinary))
    {
        const int nSizeToRead = (int)TextureFile.GetLength();
        safe_delete_array(m_ppSpriteOverrideTexture[nPositionToLoadTo]);

        // Filename of form: MvC2_D-offset-2230419-W-60-H-98
        _wcslwr(pszTextureLocation);
        WCHAR* pszDataW = wcsstr(pszTextureLocation, L"-w-");
        WCHAR* pszDataH = wcsstr(pszTextureLocation, L"-h-");
        WCHAR* pszTermination = wcsstr(pszTextureLocation, L".data");

        if (pszTermination == nullptr)
        {
            pszTermination = wcsstr(pszTextureLocation, L".raw");
        }

        if ((pszDataW != nullptr) && (pszDataH != nullptr) && (pszTermination != nullptr))
        {
            pszDataW += ARRAYSIZE(L"W-");
            pszDataH[0] = 0;
            pszDataH += ARRAYSIZE(L"H-");
            pszTermination[0] = 0;

            uint32_t nScannedH = 0, nScannedW = 0;

            if (_stscanf_s(pszDataW, L"%u", &nScannedW) && _stscanf_s(pszDataH, L"%u", &nScannedH))
            {
                m_nTextureOverrideW[nPositionToLoadTo] = static_cast<UINT16>(nScannedW);
                m_nTextureOverrideH[nPositionToLoadTo] = static_cast<UINT16>(nScannedH);

                if ((m_nTextureOverrideW[nPositionToLoadTo] > 0) && (m_nTextureOverrideW[nPositionToLoadTo] < 10000) &&
                    (m_nTextureOverrideH[nPositionToLoadTo] > 0) && (m_nTextureOverrideH[nPositionToLoadTo] < 10000))
                {
                    bool fIsDoubleSizeGIMPRAW = false;
                    if (((3 * m_nTextureOverrideW[nPositionToLoadTo] * m_nTextureOverrideH[nPositionToLoadTo])) == nSizeToRead)
                    {
                        // This is an RGB RAW...
                        MessageBox(L"This RAW is not using indexed color.  Please recreate it using indexed colors.  This will not look right.", GetHost()->GetAppName(), MB_ICONERROR);
                    }
                    else if (((2 * m_nTextureOverrideW[nPositionToLoadTo] * m_nTextureOverrideH[nPositionToLoadTo])) == nSizeToRead)
                    {
                        // I think it's GIMP that doubles the RAW for no apparent reason
                        fIsDoubleSizeGIMPRAW = true;
                        GetHost()->GetPalModDlg()->SetStatusText(IDS_RAW_EXTRADATA);
                    }
                    else if ((m_nTextureOverrideW[nPositionToLoadTo] * m_nTextureOverrideH[nPositionToLoadTo]) != nSizeToRead)
                    {
                        MessageBox(L"The W and H values specified in the RAW filename are wrong.  This will not look right.", GetHost()->GetAppName(), MB_ICONERROR);
                    }

                    safe_delete_array(m_ppSpriteOverrideTexture[nPositionToLoadTo]);
                    m_ppSpriteOverrideTexture[nPositionToLoadTo] = new UINT8[nSizeToRead];

                    CString wcsstr;
                    wcsstr.Format(L"CImgDisp::LoadExternalSprite texture file is: %u x %u\n", m_nTextureOverrideW[nPositionToLoadTo], m_nTextureOverrideH[nPositionToLoadTo]);
                    OutputDebugString(wcsstr);

                    TextureFile.SeekToBegin();

                    if (direction == SpriteImportDirection::TopDown)
                    {
                        TextureFile.Read(m_ppSpriteOverrideTexture[nPositionToLoadTo], nSizeToRead);
                    }
                    else
                    {
                        int nCurrentFilePosition = nSizeToRead;

                        if (fIsDoubleSizeGIMPRAW)
                        {
                            nCurrentFilePosition /= 2;
                        }

                        // Skip one line back
                        nCurrentFilePosition -= m_nTextureOverrideW[nPositionToLoadTo];

                        // We need to flip this line by line
                        for (int nLinePosition = 0; nLinePosition < m_nTextureOverrideH[nPositionToLoadTo]; nLinePosition++)
                        {
                            //TextureFile.Read(m_ppSpriteOverrideTexture[nPositionToLoadTo], nSizeToRead);
                            TextureFile.Read(&m_ppSpriteOverrideTexture[nPositionToLoadTo][nCurrentFilePosition], m_nTextureOverrideW[nPositionToLoadTo]);
                            nCurrentFilePosition -= m_nTextureOverrideW[nPositionToLoadTo];
                        }                        
                    }

                    TextureFile.Close();

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

                    ResetForNewImage();

                    return true;
                }
            }
        }
    }

    return false;
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
    UINT8* pImgData = nullptr;
    UINT8* pCurrPal = nullptr;
    UINT8* pDstBmpData = (UINT8*)m_pBmpData;
    int nPalSizeInUint8 = 0;

    if ((nSrcIndex != -1) && m_pImgBuffer[nSrcIndex])
    {
        pImgData = (UINT8*)m_pImgBuffer[nSrcIndex]->pImgData;
        pCurrPal = (UINT8*)(fUseBlinkPal ? m_pImgBuffer[nSrcIndex]->pBlinkPalette : m_pImgBuffer[nSrcIndex]->pPalette);
        nPalSizeInUint8 = m_pImgBuffer[nSrcIndex]->uPalSz * 4;
        nWidth = m_pImgBuffer[nSrcIndex]->uImgW;
        nHeight = m_pImgBuffer[nSrcIndex]->uImgH;
    }
    else if (m_pBackupPaletteDef != nullptr)
    {
        pCurrPal = (UINT8*)(fUseBlinkPal ? m_pBackupBlinkPalette : m_pBackupPaletteDef->pPal);
        nPalSizeInUint8 = m_pBackupPaletteDef->uPalSz * 4;
    }
    else
    {
        OutputDebugString(L"CImgDisp::CustomBlt: No image available and no backup palette available. No image will be loaded.\n");
        return FALSE;
    }

    // The user can override the internal sprite here
    if (m_ppSpriteOverrideTexture[nSrcIndex])
    {
        CString strInfo;
        strInfo.Format(L"CImgDisp::CustomBlt: Displaying alternate sprite for sprite %u\n", nSrcIndex);
        OutputDebugString(strInfo.GetString());
        pImgData = m_ppSpriteOverrideTexture[nSrcIndex];
        nWidth = m_nTextureOverrideW[nSrcIndex];
        nHeight = m_nTextureOverrideH[nSrcIndex];

        // Reset the rect now that W/H have changed...
        m_rImgRct.left = -(m_nTextureOverrideW[nSrcIndex] / 2) + (MAIN_W / 2);
        m_rImgRct.right = (m_nTextureOverrideW[nSrcIndex] / 2) + (MAIN_W / 2);
        m_rImgRct.top = -(m_nTextureOverrideH[nSrcIndex] / 2) + (MAIN_H / 2);
        m_rImgRct.bottom = (m_nTextureOverrideH[nSrcIndex] / 2) + (MAIN_H / 2);

        xWidth = m_ptOffs[nSrcIndex].x + m_rImgRct.left + abs(m_nXOffsTop);
        yHeight = m_ptOffs[nSrcIndex].y + m_rImgRct.top + abs(m_nYOffsTop);
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

    UINT16 nTransparencyPosition = 0;
    UINT16 nMaxWritePerTransparency = 16;

    if (GetHost()->GetCurrGame())
    {
        nTransparencyPosition = GetHost()->GetCurrGame()->GetTransparencyColorPosition();
        nMaxWritePerTransparency = static_cast<UINT16>(GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency());
    }

    bool fShownErrorForThisImage = false;

    for (int yIndex = 0; yIndex < nBltH; yIndex++)
    {
        int nStartRow = (rBltRct.top + ((nBltH - 1) - yIndex)) * (MAIN_W * 4) + (rBltRct.left * 4);
        int nSrcStartRow = ((yIndex + nSrcY) * nWidth) + nSrcX;

        for (int xIndex = 0; xIndex < nBltW * 4; xIndex += 4)
        {
            UINT8 uIndex = pImgData[nSrcStartRow + (xIndex / 4)];

            if ((uIndex % nMaxWritePerTransparency) != nTransparencyPosition)
            {
                int nDstPos = nStartRow + xIndex;
                const int nCurrentColorPosition = uIndex * 4; // we walk the UINT8 array at COLORREF size strides

                if (!fShownErrorForThisImage && (nCurrentColorPosition > nPalSizeInUint8))
                {
                    CString strError;
                    strError.Format(L"ERROR: This %u by %u image has out-of-bound color references and should be fixed.  Requested 0x%x but palette maxes at 0x%x.\r\n", 
                                            nWidth, nHeight, nCurrentColorPosition, nPalSizeInUint8);
                    OutputDebugString(strError.GetString());
                    fShownErrorForThisImage = true;
                }

                double fpDstA2 = (1.0 - (pCurrPal[nCurrentColorPosition + 3]) / 255.0);
                double fpDstA1 = 1.0 - fpDstA2;

                UINT8* uDstR = &pDstBmpData[nDstPos + 2];
                UINT8* uDstG = &pDstBmpData[nDstPos + 1];
                UINT8* uDstB = &pDstBmpData[nDstPos];

                *uDstR = (UINT8)aadd((fpDstA1 * (double)pCurrPal[nCurrentColorPosition]), (fpDstA2 * (double)*uDstR));
                *uDstG = (UINT8)aadd((fpDstA1 * (double)pCurrPal[nCurrentColorPosition + 1]), (fpDstA2 * (double)*uDstG));
                *uDstB = (UINT8)aadd((fpDstA1 * (double)pCurrPal[nCurrentColorPosition + 2]), (fpDstA2 * (double)*uDstB));
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

    m_fpPrevX = (double)point.x;
    m_fpPrevY = (double)point.y;

    m_fpDiffX = 0.0f;
    m_fpDiffY = 0.0f;

    CWnd::OnLButtonDown(nFlags, point);
}

void CImgDisp::OnMouseMove(UINT nFlags, CPoint point)
{
    if (m_bLButtonDown && (m_nImgAmt || m_bCtrlDown))
    {
        m_fpDiffX += (m_fpPrevX - (double)point.x) / m_fpZoom;
        m_fpDiffY += (m_fpPrevY - (double)point.y) / m_fpZoom;

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
                m_fpDiffX -= (double)nAdd;
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

                m_fpDiffX -= (double)nAdd;
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
                m_fpDiffY -= (double)nAdd;
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

                m_fpDiffY -= (double)nAdd;
            }
        }

#else

        int nImgIndex = SETIMGINDEX;

        pImgBuffer[nImgIndex]->nXOffs -= (int)fpDiffX;
        pImgBuffer[nImgIndex]->nYOffs -= (int)fpDiffY;
        UpdateCtrl();

        fpDiffX = 0;
        fpDiffY = 0;

#endif

        UpdateCtrl();

        m_fpPrevX = (double)point.x;
        m_fpPrevY = (double)point.y;
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
        // Update the current palette selections based upon this click
        GetHost()->GetPalModDlg()->SelectMatchingColorsInPalette(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(), m_crBGCol);
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
