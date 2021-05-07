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
    BGBitmap.DeleteObject();
    BGBrush.DeleteObject();

    FlushImages();

    safe_delete(MainDC);
    safe_delete(ImageDC);

    for (int iPos = 0; iPos < MAX_IMAGES_DISPLAYABLE; iPos++)
    {
        safe_delete_array(m_ppSpriteOverrideTexture[iPos]);
    }

    DeleteObject(hBmp);
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
    for (int i = 0; i < MAX_IMAGES_DISPLAYABLE; i++)
    {
        pImgBuffer[i] = NULL;
    }

    rImgRct.SetRectEmpty();
}

void CImgDisp::ResizeMainBitmap()
{
    if (MainDC)
    {
        DeleteObject(hBmp);

        Bmpi.bmiHeader.biWidth = MAIN_W;
        Bmpi.bmiHeader.biHeight = MAIN_H;
        Bmpi.bmiHeader.biPlanes = 1;
        Bmpi.bmiHeader.biBitCount = 32;
        Bmpi.bmiHeader.biCompression = BI_RGB;
        Bmpi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

        hBmp = CreateDIBSection(MainDC->GetSafeHdc(), &Bmpi, DIB_RGB_COLORS, (void**)&pBmpData, NULL, 0);

        MainDC->SelectObject(hBmp);
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
    memset(bUsed, 0, sizeof(UINT8) * MAX_IMAGES_DISPLAYABLE);
    rImgRct.SetRectEmpty();

    nXOffsTop = 0;
    nYOffsTop = 0;
    nImgRctW = 0;
    nImgRctH = 0;

    for (int iPos = 0; iPos < MAX_IMAGES_DISPLAYABLE; iPos++)
    {
        safe_delete_array(m_ppSpriteOverrideTexture[iPos]);
    }
}

void CImgDisp::ResetForNewImage()
{
    rImgRct.right += abs(rImgRct.left);
    rImgRct.left = 0;

    rImgRct.bottom += abs(rImgRct.top);
    rImgRct.top = 0;

    nImgRctW = rImgRct.Width();
    nImgRctH = rImgRct.Height();

    ModifySrcRect();

    ResizeMainBitmap();
}

void CImgDisp::FlushUnused()
{
    if (nImgAmt)
    {
        for (int i = 0; i < MAX_IMAGES_DISPLAYABLE; i++)
        {
            if (!bUsed[i])
            {
                FlushImageNode(i);
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

    if (pImgBuffer[nIndex])
    {
        FlushImageNode(nIndex);
    }

    pImgBuffer[nIndex] = pNewNode;

    //Set used
    bUsed[nIndex] = 1;

    //rImgRct.SetRect(0, 0, 0, 0);

    nXOffs = nImgAmt ? nXOffs + (pImgBuffer[0]->uImgW / 2) - (uImgW / 2) : 0;
    nYOffs = nImgAmt ? nYOffs + (pImgBuffer[0]->uImgH / 2) - (uImgH / 2) : 0;

    if (nXOffs < rImgRct.left)
    {
        rImgRct.left = nXOffs;
        nXOffsTop = nXOffs;
    }

    if (nYOffs < rImgRct.top)
    {
        rImgRct.top = nYOffs;
        nYOffsTop = nYOffs;
    }

    if (nXOffs + uImgW > rImgRct.right)
    {
        rImgRct.right = nXOffs + uImgW;
    }

    if (nYOffs + uImgH > rImgRct.bottom)
    {
        rImgRct.bottom = nYOffs + uImgH;
    }

    ptOffs[nImgAmt].x = nXOffs;
    ptOffs[nImgAmt].y = nYOffs;

    //Add image amount
    nImgAmt++;
}

void CImgDisp::UpdateImgPalette(int nIndex, COLORREF* pPalette, int nPalSz)
{
    if (pImgBuffer[nIndex])
    {
        pImgBuffer[nIndex]->pPalette = pPalette;
        pImgBuffer[nIndex]->uPalSz = nPalSz;
        bUsed[nIndex] = 1;
    }
}

void CImgDisp::FlushImageNode(int nIndex)
{
    if (pImgBuffer[nIndex])
    {
        safe_delete(pImgBuffer[nIndex]);

        nImgAmt--;
    }
}

void CImgDisp::FlushImages()
{
    for (int i = 0; i < MAX_IMAGES_DISPLAYABLE; i++)
    {
        FlushImageNode(i);
    }
}

BOOL CImgDisp::LoadBGBmp(WCHAR* szBmpLoc)
{
    CImage backgroundImage;

    if (szBmpLoc != nullptr)
    {
        m_strBackgroundLoc = szBmpLoc;
    }

    if (SUCCEEDED(backgroundImage.Load(m_strBackgroundLoc)))
    {
        hBGBitmap = backgroundImage.Detach();
            
        m_fIsBGAvail = TRUE;

        BGBitmap.DeleteObject();
        BGBitmap.Attach(hBGBitmap);

        BGBrush.DeleteObject();
        BGBrush.CreatePatternBrush(&BGBitmap);

        //Get the bitmap dimensions
        BITMAP bmp = {};

        if (GetObject(hBGBitmap, sizeof(BITMAP), (BITMAP*)&bmp))
        {
            nBGBmpW = bmp.bmWidth;
            nBGBmpH = bmp.bmHeight;
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
        MainDC = new CDC;
        ImageDC = new CDC;

        MainDC->CreateCompatibleDC(&PaintDC);
        ImageDC->CreateCompatibleDC(&PaintDC);

        m_fNeedFirstInit = FALSE;

        ModifyClRect();
        ModifySrcRect();

        //ResizeMainBitmap(rCtrlRct.Width(), rCtrlRct.Height());
        MainDC->SelectObject(hBmp); //OnSize should be called first

        UpdateCtrl(FALSE);
    }
}

void CImgDisp::ModifySrcRect()
{
    int nCtrlW = rCtrlRct.right;
    int nCtrlH = rCtrlRct.bottom;

    if (nCtrlW > nImgRctW)
    {
        MAIN_W = nCtrlW * 2 - nImgRctW;
    }
    else
    {
        MAIN_W = nImgRctW;
    }

    if (nCtrlH > nImgRctH)
    {
        MAIN_H = nCtrlH * 2 - nImgRctH;
    }
    else
    {
        MAIN_H = nImgRctH;
    }

    rSrcRct.top = (MAIN_H / 2) - (int)((double)(nCtrlH / 2) / fpZoom);
    rSrcRct.left = (MAIN_W / 2) - (int)((double)(nCtrlW / 2) / fpZoom);
    rSrcRct.bottom = rSrcRct.top + (int)((double)nCtrlH / fpZoom);
    rSrcRct.right = rSrcRct.left + (int)((double)nCtrlW / fpZoom);

    rImgRct.left = -(nImgRctW / 2) + (MAIN_W / 2);
    rImgRct.right = (nImgRctW / 2) + (MAIN_W / 2);
    rImgRct.top = -(nImgRctH / 2) + (MAIN_H / 2);
    rImgRct.bottom = (nImgRctH / 2) + (MAIN_H / 2);
}

void CImgDisp::ModifyClRect()
{
    GetClientRect(&rCtrlRct);
}

void CImgDisp::DrawMainBG()
{
    if (MainDC)
    {
        if (m_fShouldTileBGBmp && !m_fShouldUseBGCol && CanForceBGBitmapAvailable())
        {
            MainDC->FillRect(CRect(0, 0, MAIN_W, MAIN_H), &BGBrush);
        }
        else
        {
            MainDC->FillSolidRect(CRect(0, 0, MAIN_W, MAIN_H), crBGCol);
        }

        if (!m_fShouldTileBGBmp && !m_fShouldUseBGCol && CanForceBGBitmapAvailable())
        {
            ImageDC->SelectObject(&BGBitmap);

            MainDC->BitBlt(
                (MAIN_W / 2) - (nBGBmpW / 2) + nBGXOffs,
                (MAIN_H / 2) - (nBGBmpH / 2) + nBGYOffs,
                nBGBmpW, nBGBmpH,
                ImageDC,
                0, 0, SRCCOPY);
        }
    }
}

void CImgDisp::UpdateCtrl(BOOL bRedraw /* = TRUE */, int nUseAltPal /* = 0 */)
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

    int nAltPalIndex = (nUseAltPal ? (nUseAltPal & 0x00FF) : MAX_IMAGES_DISPLAYABLE);

    BOOL bFirst = TRUE;
    bool fImageFound = false;

    for (int nImgCtr = 0; nImgCtr < MAX_IMAGES_DISPLAYABLE; nImgCtr++)
    {
        if (pImgBuffer[nImgCtr])
        {
            //Draw the img
            CustomBlt(
                nImgCtr,
                ptOffs[nImgCtr].x + rImgRct.left + abs(nXOffsTop),
                ptOffs[nImgCtr].y + rImgRct.top + abs(nYOffsTop),
                (nAltPalIndex == nImgCtr)
            );

            fImageFound = true;
        }
    }

    if (!fImageFound)
    {
        for (int nImgCtr = 0; nImgCtr < MAX_IMAGES_DISPLAYABLE; nImgCtr++)
        {
            if (m_ppSpriteOverrideTexture[nImgCtr])
            {
                //Draw the img
                CustomBlt(
                    nImgCtr,
                    -1, // overridden 
                    -1, // overridden 
                    (nAltPalIndex == nImgCtr)
                );

                fImageFound = true;
            }
        }

        if (fImageFound)
        {
            OutputDebugString(L"Loaded alternate sprite for character with no sprite... \n");
        }
    }

    //Repaint
    if (bRedraw)
    {
        Redraw();
    }
}

void CImgDisp::Redraw()
{
    if (MainDC)
    {
        CClientDC* cdc = new CClientDC(this);

        cdc->StretchBlt(
            rCtrlRct.left,
            rCtrlRct.top,
            rCtrlRct.right,
            rCtrlRct.bottom,
            MainDC,
            rSrcRct.left,
            rSrcRct.top,
            rSrcRct.right - rSrcRct.left,
            rSrcRct.bottom - rSrcRct.top,
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
    m_pBackupAltPalette = nullptr;
}

bool CImgDisp::DoWeHaveImageForIndex(int nIndex)
{
    if (pImgBuffer && pImgBuffer[nIndex])
    {
        return true;
    }
    else if (m_ppSpriteOverrideTexture[nIndex])
    {
        return true;
    }

    return false;
}

bool CImgDisp::LoadExternalSprite(UINT nPositionToLoadTo, SpriteImportDirection direction, WCHAR* pszTextureLocation)
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

            if (_stscanf_s(pszDataW, L"%u", &m_nTextureOverrideW[nPositionToLoadTo]) &&
                _stscanf_s(pszDataH, L"%u", &m_nTextureOverrideH[nPositionToLoadTo]))
            {
                if ((m_nTextureOverrideW[nPositionToLoadTo] > 0) && (m_nTextureOverrideW[nPositionToLoadTo] < 10000) &&
                    (m_nTextureOverrideH[nPositionToLoadTo] > 0) && (m_nTextureOverrideH[nPositionToLoadTo] < 10000))
                {
                    if (((3 * m_nTextureOverrideW[nPositionToLoadTo] * m_nTextureOverrideH[nPositionToLoadTo])) == nSizeToRead)
                    {
                        // This is an RGB RAW...
                        MessageBox(L"This RAW is not using indexed color.  Please recreate it using indexed colors.  This will not look right.", GetHost()->GetAppName(), MB_ICONERROR);
                    }
                    else if (((2 * m_nTextureOverrideW[nPositionToLoadTo] * m_nTextureOverrideH[nPositionToLoadTo])) == nSizeToRead)
                    {
                        // I think it's GIMP that doubles the RAW for no apparent reason
                        GetHost()->GetPalModDlg()->SetStatusText(IDS_RAW_EXTRADATA);
                    }
                    else if ((m_nTextureOverrideW[nPositionToLoadTo] * m_nTextureOverrideH[nPositionToLoadTo]) != nSizeToRead)
                    {
                        MessageBox(L"The W and H values specified in the RAW filename are wrong.  This will not look right.", GetHost()->GetAppName(), MB_ICONERROR);
                    }

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

                    if (pImgBuffer[nPositionToLoadTo])
                    {
                        AddImageNode(nPositionToLoadTo, m_nTextureOverrideW[nPositionToLoadTo], m_nTextureOverrideH[nPositionToLoadTo], m_ppSpriteOverrideTexture[nPositionToLoadTo], pImgBuffer[nPositionToLoadTo]->pPalette, pImgBuffer[nPositionToLoadTo]->uPalSz, 0, 0);
                    }
                    else
                    {
                        // We really wanted the palette from pImgBuffer, but oh well we'll just use the backup palette
                        AddImageNode(nPositionToLoadTo, m_nTextureOverrideW[nPositionToLoadTo], m_nTextureOverrideH[nPositionToLoadTo], m_ppSpriteOverrideTexture[nPositionToLoadTo], m_pBackupPaletteDef->pPal, m_pBackupPaletteDef->uPalSz, 0, 0);
                    }

                    ResetForNewImage();

                    return true;
                }
            }
        }
    }

    return false;
}

BOOL CImgDisp::CustomBlt(int nSrcIndex, int xWidth, int yHeight, bool fUseAltPal)
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
    UINT8* pDstBmpData = (UINT8*)pBmpData;

    if ((nSrcIndex != -1) && pImgBuffer && pImgBuffer[nSrcIndex])
    {
        pImgData = (UINT8*)pImgBuffer[nSrcIndex]->pImgData;
        pCurrPal = (UINT8*)(fUseAltPal ? pImgBuffer[nSrcIndex]->pAltPal : pImgBuffer[nSrcIndex]->pPalette);
        nWidth = pImgBuffer[nSrcIndex]->uImgW;
        nHeight = pImgBuffer[nSrcIndex]->uImgH;
    }
    else
    {
        if (m_pBackupPaletteDef != nullptr)
        {
            pCurrPal = (UINT8*)(fUseAltPal ? m_pBackupAltPalette : m_pBackupPaletteDef->pPal);
        }
        else
        {
            OutputDebugString(L"CImgDisp::CustomBlt: No image available and no backup palette available. No image will be loaded.\n");
            return FALSE;
        }
    }

    if (m_ppSpriteOverrideTexture[nSrcIndex])
    {
        CString strInfo;
        strInfo.Format(L"CImgDisp::CustomBlt: Loading alternate sprite for sprite %u\n", nSrcIndex);
        OutputDebugString(strInfo.GetString());
        pImgData = m_ppSpriteOverrideTexture[nSrcIndex];
        nWidth = m_nTextureOverrideW[nSrcIndex];
        nHeight = m_nTextureOverrideH[nSrcIndex];

        // Reset the rect now that W/H have changed...
        rImgRct.left = -(m_nTextureOverrideW[nSrcIndex] / 2) + (MAIN_W / 2);
        rImgRct.right = (m_nTextureOverrideW[nSrcIndex] / 2) + (MAIN_W / 2);
        rImgRct.top = -(m_nTextureOverrideH[nSrcIndex] / 2) + (MAIN_H / 2);
        rImgRct.bottom = (m_nTextureOverrideH[nSrcIndex] / 2) + (MAIN_H / 2);

        xWidth = ptOffs[nSrcIndex].x + rImgRct.left + abs(nXOffsTop);
        yHeight = ptOffs[nSrcIndex].y + rImgRct.top + abs(nYOffsTop);
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

    for (int yIndex = 0; yIndex < nBltH; yIndex++)
    {
        int nStartRow = (rBltRct.top + ((nBltH - 1) - yIndex)) * (MAIN_W * 4) + (rBltRct.left * 4);
        int nSrcStartRow = ((yIndex + nSrcY) * nWidth) + nSrcX;

        for (int xIndex = 0; xIndex < nBltW * 4; xIndex += 4)
        {
            UINT8 uIndex = pImgData[nSrcStartRow + (xIndex / 4)];

            if (uIndex)
            {
                int nDstPos = nStartRow + xIndex;

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

    return TRUE;
}

void CImgDisp::OnLButtonDown(UINT nFlags, CPoint point)
{
    bLButtonDown = TRUE;
    bCtrlDown = (GetAsyncKeyState(VK_CONTROL) & 0x8000);
    SetCapture();

    fpPrevX = (double)point.x;
    fpPrevY = (double)point.y;

    fpDiffX = 0.0f;
    fpDiffY = 0.0f;

    CWnd::OnLButtonDown(nFlags, point);
}

void CImgDisp::OnMouseMove(UINT nFlags, CPoint point)
{
    if (bLButtonDown && (nImgAmt || bCtrlDown))
    {
        fpDiffX += (fpPrevX - (double)point.x) / fpZoom;
        fpDiffY += (fpPrevY - (double)point.y) / fpZoom;

        int nAdd = 1;

        if (fpDiffX < 0)
        {
            nAdd = -nAdd;
        }

#ifndef SETIMGPOS

        if (bCtrlDown && !m_fShouldTileBGBmp)
        {
            while (fabs(fpDiffX) >= 1.0f)
            {
                nBGXOffs -= nAdd;
                fpDiffX -= (double)nAdd;
            }
        }
        else
        {
            while (fabs(fpDiffX) >= 1.0f)
            {
                rSrcRct.left += nAdd;
                rSrcRct.right += nAdd;

                if (rSrcRct.Width() > rImgRct.Width())
                {
                    if ((rSrcRct.left > rImgRct.left) || (rSrcRct.right < rImgRct.right))
                    {
                        rSrcRct.left -= nAdd;
                        rSrcRct.right -= nAdd;
                    }
                }
                else
                {
                    if ((rSrcRct.left < rImgRct.left) || (rSrcRct.right > rImgRct.right))
                    {
                        rSrcRct.left -= nAdd;
                        rSrcRct.right -= nAdd;
                    }
                }

                fpDiffX -= (double)nAdd;
            }
        }
#endif
        nAdd = 1;

        if (fpDiffY < 0)
        {
            nAdd = -nAdd;
        }

#ifndef SETIMGPOS

        if (bCtrlDown && !m_fShouldTileBGBmp)
        {
            while (fabs(fpDiffY) >= 1.0f)
            {
                nBGYOffs -= nAdd;
                fpDiffY -= (double)nAdd;
            }
        }
        else
        {
            while (fabs(fpDiffY) >= 1.0f)
            {
                rSrcRct.top += nAdd;
                rSrcRct.bottom += nAdd;

                if (rSrcRct.Height() > rImgRct.Height())
                {
                    if ((rSrcRct.top > rImgRct.top) || (rSrcRct.bottom < rImgRct.bottom))
                    {
                        rSrcRct.top -= nAdd;
                        rSrcRct.bottom -= nAdd;
                    }
                }
                else
                {
                    if ((rSrcRct.top < rImgRct.top) || (rSrcRct.bottom > rImgRct.bottom))
                    {
                        rSrcRct.top -= nAdd;
                        rSrcRct.bottom -= nAdd;
                    }
                }

                fpDiffY -= (double)nAdd;
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

        fpPrevX = (double)point.x;
        fpPrevY = (double)point.y;
    }

    CWnd::OnMouseMove(nFlags, point);
}

void CImgDisp::OnLButtonUp(UINT nFlags, CPoint point)
{
    bLButtonDown = FALSE;
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
        GetHost()->GetPalModDlg()->SelectMatchingColorsInPalette(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition());
    }

    CWnd::OnLButtonUp(nFlags, point);
}

void CImgDisp::SetAltPal(int nIndex, COLORREF* pAltPal)
{
    if (pImgBuffer[nIndex])
    {
        pImgBuffer[nIndex]->pAltPal = pAltPal;
    }

    m_pBackupAltPalette = pAltPal;
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

            bool canPasteFromCliboard = IsPasteSupported();

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
                GetHost()->GetPalModDlg()->SelectMatchingColorsInPalette(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(point.x, point.y));
                break;
            case CUSTOM_COPYCOLOR:
                GetHost()->GetPalModDlg()->CopyColorToClipboard(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(point.x, point.y));
                break;
            case CUSTOM_PASTECOLOR:
                if (GetHost()->GetPalModDlg()->SelectMatchingColorsInPalette(GetHost()->GetPalModDlg()->GetColorAtCurrentMouseCursorPosition(point.x, point.y)))
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
