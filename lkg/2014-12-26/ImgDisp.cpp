// ImgDisp.cpp : implementation file
//

#include "stdafx.h"
#include "ImgDisp.h"

#include "resource.h"

// CImgDisp

CImgDisp::CImgDisp()
: crBGCol(0x00FF0000)
, crBlinkCol(0x00FFFFFF)
, PaintDC(NULL)
, MainDC(NULL)
, ImageDC(NULL)
, pBmpData(NULL)
, fpZoom(DEF_ZOOM)
, bFirstInit(TRUE)
//, bFillBGBmp(FALSE)
, bBGAvail(FALSE)
, bLButtonDown(FALSE)
, bCtrlDown(FALSE)
, fpPrevX(0.0f)
, fpPrevY(0.0f)
, fpDiffX(0.0f)
, fpDiffY(0.0f)
, bTileBGBmp(FALSE)
, nBGXOffs (0)
, nBGYOffs (0)
, nBGBmpW (0)
, nBGBmpH (0)
, nImgAmt(0)
, MAIN_W(0)
, MAIN_H(0)
, bUseBGCol(0)
, nImgRctW(0)
, nImgRctH(0)
{
	
	InitImgBuffer();

	RegisterWindowClass();

}

CImgDisp::~CImgDisp()
{
	FlushImages();

	if(PaintDC)
	{
		delete PaintDC;
	}
	if(MainDC)
	{
		delete MainDC;
	}

	if(ImageDC)
	{
		delete ImageDC;
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
        wndcls.style            = CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;
        wndcls.lpfnWndProc      = ::DefWindowProc;
        wndcls.cbClsExtra       = wndcls.cbWndExtra = 0;
        wndcls.hInstance        = hInst;
        wndcls.hIcon            = NULL;
        wndcls.hCursor          = AfxGetApp()->LoadStandardCursor(IDC_ARROW);
        wndcls.hbrBackground    = (HBRUSH) (COLOR_3DFACE + 1);
        wndcls.lpszMenuName     = NULL;
        wndcls.lpszClassName    = IMGDISP_CLASSNAME;

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
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

void CImgDisp::InitImgBuffer()
{
	for(int i = 0; i < MAX_IMG; i++)
	{
		pImgBuffer[i] = NULL;
	}

	rImgRct.SetRectEmpty();
}

void CImgDisp::ResizeMainBitmap()
{
	DeleteObject(hBmp);

	Bmpi.bmiHeader.biWidth = MAIN_W;
	Bmpi.bmiHeader.biHeight = -MAIN_H;
	Bmpi.bmiHeader.biPlanes = 1;
	Bmpi.bmiHeader.biBitCount = 32;
	Bmpi.bmiHeader.biCompression = BI_RGB;
	Bmpi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

	
	hBmp = CreateDIBSection(MainDC->GetSafeHdc(), &Bmpi, DIB_RGB_COLORS, (void **)&pBmpData, NULL, 0);

	if(!bFirstInit)
	{
		MainDC->SelectObject(hBmp); //FIX LATER, we might not need th is
	}

}

/*
void CImgDisp::CreateImgBitmap(int nIndex, int nWidth, int nHeight)
{
	BITMAPINFO * currInfo = &pImgBuffer[nIndex]->Bmpi;
	HBITMAP * currBmp = &pImgBuffer[nIndex]->hBmp;

	//pImgBuffer[nIndex]->pBmpData = new UINT32[nWidth * nHeight];

	currInfo->bmiHeader.biWidth = nWidth;
	currInfo->bmiHeader.biHeight = -nHeight;
	currInfo->bmiHeader.biPlanes = 1;
	currInfo->bmiHeader.biBitCount = 32;
	currInfo->bmiHeader.biCompression = BI_RGB;
	currInfo->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

	*currBmp = CreateDIBSection(ImageDC->GetSafeHdc(), currInfo, DIB_RGB_COLORS, (void **)&pImgBuffer[nIndex]->pBmpData, NULL, 0);



}
*/

void CImgDisp::ClearUsed()
{
	memset(bUsed, 0, sizeof(UINT8) * MAX_IMG); 
	rImgRct.SetRectEmpty(); 
	bFirstImage = FALSE;

	nXOffsTop = 0;
	nYOffsTop = 0;
	nImgRctW =  0;
	nImgRctH =  0;

}

void CImgDisp::FlushUnused()
{
	if(nImgAmt)
	{
		for(int i = 0; i < MAX_IMG; i++)
		{
			if(!bUsed[i])
			{
				FlushImageNode(i);
			}
		}

		
		rImgRct.right += abs(rImgRct.left);
		rImgRct.left = 0;

		rImgRct.bottom += abs(rImgRct.top);
		rImgRct.top = 0;

		//int nRW = rImgRct.Width();
		//int nRH = rImgRct.Height();

		//rImgRct.left -= (nRW);
		//rImgRct.right -= (nRW);

		//rImgRct.top-= (nRH);
		//rImgRct.bottom -= (nRH);

		nImgRctW = rImgRct.Width();
		nImgRctH = rImgRct.Height();

		

		ModifySrcRect();

		ResizeMainBitmap();
		
		
	}

}
void CImgDisp::AddImageNode(int nIndex, UINT16 uImgW, UINT16 uImgH, UINT8 * pImgData, COLORREF * pPalette, UINT8 uPalSz, int nXOffs, int nYOffs)
{
	sImgNode * pNewNode = new sImgNode;

	pNewNode->uImgW = uImgW;
	pNewNode->uImgH = uImgH;
	pNewNode->nXOffs = nXOffs;
	pNewNode->nYOffs = nYOffs;

	pNewNode->pImgData = pImgData;
	pNewNode->pPalette = pPalette;

	if(pImgBuffer[nIndex])
	{
		FlushImageNode(nIndex);
	}

	
	pImgBuffer[nIndex] = pNewNode;
	//Set used
	bUsed[nIndex] = 1;
	
	//rImgRct.SetRect(0, 0, 0, 0);

	nXOffs = nImgAmt ? nXOffs + (pImgBuffer[0]->uImgW / 2) - (uImgW / 2) : 0;
	nYOffs = nImgAmt ? nYOffs + (pImgBuffer[0]->uImgH / 2) - (uImgH / 2) : 0;

	if(nXOffs < rImgRct.left)
	{
		rImgRct.left = nXOffs;
		nXOffsTop = nXOffs;
	}

	if(nYOffs < rImgRct.top)
	{
		rImgRct.top = nYOffs;
		nYOffsTop = nYOffs;
	}

	if(nXOffs + uImgW > rImgRct.right)
	{
		rImgRct.right = nXOffs + uImgW;
	}

	if(nYOffs + uImgH > rImgRct.bottom)
	{
		rImgRct.bottom = nYOffs + uImgH;
	}

	ptOffs[nImgAmt].x = nXOffs;
	ptOffs[nImgAmt].y = nYOffs;
	

	//Add image amount
	nImgAmt ++;
	
}

void CImgDisp::UpdateImgPalette(int nIndex, COLORREF * pPalette, int nPalSz)
{
	if(pImgBuffer[nIndex])
	{
		pImgBuffer[nIndex]->pPalette = pPalette;
		pImgBuffer[nIndex]->uPalSz = nPalSz;
		bUsed[nIndex] = 1;
	}
}

void CImgDisp::FlushImageNode(int nIndex)
{
	if(pImgBuffer[nIndex])
	{
		delete pImgBuffer[nIndex];

		nImgAmt--;
	}
	
	pImgBuffer[nIndex] = NULL;
}

void CImgDisp::FlushImages()
{
	for(int i = 0; i < MAX_IMG; i++)
	{
		FlushImageNode(i);
	}
}

BOOL CImgDisp::LoadBGBmp(CHAR * szBmpLoc)
{
	if(hBGBitmap = (HBITMAP)::LoadImage(NULL, szBmpLoc, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE|LR_CREATEDIBSECTION))
	{
		bBGAvail = TRUE;

		BGBitmap.DeleteObject();
		BGBitmap.Attach(hBGBitmap);

		BGBrush.DeleteObject();
		BGBrush.CreatePatternBrush(&BGBitmap);

		//Get the bitmap dimensions
		BITMAP bmp;
		
		if(GetObject(hBGBitmap, sizeof(BITMAP), (BITMAP *)&bmp))
		{
			nBGBmpW = bmp.bmWidth;
			nBGBmpH = bmp.bmHeight;
		}
		

		return TRUE;
	}
	else
	{
		bBGAvail = FALSE;
		bTileBGBmp = FALSE;
		return FALSE;
	}
	

}

void CImgDisp::InitDC()
{
	if(bFirstInit)
	{

		PaintDC = new CPaintDC(this);
		MainDC = new CDC;
		ImageDC = new CDC;

		MainDC->CreateCompatibleDC(PaintDC);
		ImageDC->CreateCompatibleDC(PaintDC);

		bFirstInit =  FALSE;

		ModifyClRect();
		ModifySrcRect();
		
		//ResizeMainBitmap(rCtrlRct.Width(), rCtrlRct.Height());
		MainDC->SelectObject(hBmp); //OnSize should be called first

		UpdateCtrl();
	}
}

void CImgDisp::ModifySrcRect()
{
	int nCtrlW = rCtrlRct.right;
	int nCtrlH = rCtrlRct.bottom;

	if(nCtrlW > nImgRctW)
	{
		MAIN_W = nCtrlW*2 - nImgRctW;
	}
	else
	{
		MAIN_W = nImgRctW;
	}
	
	if(nCtrlH > nImgRctH)
	{
		MAIN_H = nCtrlH*2 - nImgRctH;
	}
	else
	{
		MAIN_H = nImgRctH;
	}

	rSrcRct.top = (MAIN_H / 2) - (int)((double)(nCtrlH / 2) / fpZoom);
	rSrcRct.left = (MAIN_W / 2) - (int)((double)(nCtrlW / 2) / fpZoom);
	rSrcRct.bottom = rSrcRct.top + (int)((double)nCtrlH / fpZoom);
	rSrcRct.right = rSrcRct.left + (int)((double)nCtrlW / fpZoom);

	rImgRct.left = -(nImgRctW / 2);
	rImgRct.right = nImgRctW / 2;
	rImgRct.top = -(nImgRctH / 2);
	rImgRct.bottom = nImgRctH / 2;

	rImgRct.left += MAIN_W / 2;
	rImgRct.right+= MAIN_W / 2;
	rImgRct.top  += MAIN_H / 2;
	rImgRct.bottom+=MAIN_H / 2;
}

void CImgDisp::ModifyClRect()
{
	GetClientRect(&rCtrlRct);
}

//void CImgDisp::FillIndexes(int nIndex)
//{
//
//	
//	sImgNode * currImg = pImgBuffer[nIndex];
//	sImgIndex * currIndex = &currImg->ImgIndex;
//	UINT8 * pData = currImg->pImgData;
//	UINT8 uCurrData;
//	UINT16 uImgW = currImg->uImgW, uImgH = currImg->uImgH;
//
//
//	UINT32 * pIndexAmt = currIndex->pIndexAmt;
//
//	for(int nYCtr = uImgH - 1; nYCtr > 0; nYCtr--)
//	{
//		for(int nXCtr = 0; nXCtr < uImgW; nXCtr++)
//		{
//			uCurrData = pData[uImgW * nYCtr + nXCtr];
//
//			if(uCurrData)
//			{
//				
//				currIndex->ppIndexes[uCurrData][pIndexAmt[uCurrData]].x = nXCtr;
//				currIndex->ppIndexes[uCurrData][pIndexAmt[uCurrData]].y = (uImgH - 1) - nYCtr;
//
//				pIndexAmt[uCurrData]++;
//			}
//		}
//
//		
//	}
//
//}

void CImgDisp::DrawMainBG()
{
	bTileBGBmp * bBGAvail * !bUseBGCol ? MainDC->FillRect(CRect(0, 0, MAIN_W, MAIN_H), &BGBrush ) : MainDC->FillSolidRect(CRect(0, 0, MAIN_W, MAIN_H), crBGCol );

	if(!bTileBGBmp && bBGAvail && !bUseBGCol)
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

void CImgDisp::UpdateCtrl(BOOL bRedraw, int bUseAltPal)
{
	//Do nothing on a hidden window
	if(!IsWindowVisible())
	{
		return;
	}

	RECT rTmpRct;

	int nXOffs = 0;
	int nYOffs = 0;

	int nWidth = 0;
	int nHeight = 0;

	//RECT rDstBlt;
	//RECT rSrcBlt;

	//Clear the background
	DrawMainBG();

	//Reset the BLT rect
	//memset(&rBlt, 0, sizof(RECT));

	int nAltPalIndex = (bUseAltPal ? (bUseAltPal & 0x00FF) : MAX_IMG);

	BOOL bFirst = TRUE;

	

	for(int nImgCtr = 0; nImgCtr < MAX_IMG; nImgCtr++)
	{
		
		if(pImgBuffer[nImgCtr])
		{
			

			nXOffs = pImgBuffer[nImgCtr]->nXOffs;
			nYOffs = pImgBuffer[nImgCtr]->nYOffs;
			nWidth = pImgBuffer[nImgCtr]->uImgW;
		    nHeight = pImgBuffer[nImgCtr]->uImgH;

			

			//Draw the img
			CustomBlt(
				nImgCtr, 
				//(MAIN_W / 2) - (nWidth / 2) + nXOffs, 
				//(MAIN_H / 2) - (nHeight / 2) + nYOffs,
				ptOffs[nImgCtr].x + rImgRct.left + abs(nXOffsTop),
				ptOffs[nImgCtr].y + rImgRct.top + abs(nYOffsTop),
				(nAltPalIndex == nImgCtr ? TRUE : FALSE)
				);
			
			

		}
	}

	
	//Repaint

	if(bRedraw)
		Redraw();
}

void CImgDisp::Redraw()
{
	PaintDC->StretchBlt(
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
}
void CImgDisp::OnPaint()
{
	InitDC();

	Redraw();

	CWnd::OnPaint();
}
BOOL CImgDisp::OnEraseBkgnd(CDC* pDC)
{
	// TODO: Add your message handler code here and/or call default

	//return CWnd::OnEraseBkgnd(pDC);
	return TRUE;
}
void CImgDisp::OnSize(UINT nType, int cx, int cy)
{
	CWnd::OnSize(nType, cx, cy);

	
	ModifyClRect();
	ModifySrcRect();

	//Handle the bitmap resize
	ResizeMainBitmap();

	if(IsWindowVisible())
	{
		UpdateCtrl();
		//Redraw();
	}
	// TODO: Add your message handler code here
}

BOOL CImgDisp::CustomBlt(int nSrcIndex, int x, int y, int bAltPal)
{
	if(MAIN_W <= 0 || MAIN_H <= 0)
	{
		return TRUE;
	}

	int nWidth = pImgBuffer[nSrcIndex]->uImgW;
	int nHeight = pImgBuffer[nSrcIndex]->uImgH;
	int nBltW, nBltH;
	int nSrcX = 0, nSrcY = 0;

	UINT8 uIndex;

	UINT8 * pCurrPal = (UINT8 *)(bAltPal ? pImgBuffer[nSrcIndex]->pAltPal : pImgBuffer[nSrcIndex]->pPalette);
	UINT8 * pImgData = (UINT8 *)pImgBuffer[nSrcIndex]->pImgData;
	UINT8 * pDstBmpData = (UINT8 *)pBmpData;

	int nStartRow;
	int nSrcStartRow;
	int nSrcPos;
	int nDstPos;

	double fpDstA1, fpDstA2;

	CRect rBltRct(x, y, x + nWidth, y + nHeight);

	if(x < 0)
	{
		rBltRct.left = 0;
		nSrcX = abs(x);
	}

	if(y < 0)
	{
		rBltRct.top = 0;
		nSrcY = abs(y);
	}

	if(rBltRct.right > MAIN_W)
	{
		rBltRct.right = MAIN_W;
	}

	if(rBltRct.bottom > MAIN_H)
	{
		rBltRct.bottom = MAIN_H;
	}

	nBltW = rBltRct.right - rBltRct.left;
	nBltH = rBltRct.bottom - rBltRct.top;

	int nRightBlt = rBltRct.right * 4;

	UINT8 * uDstR, * uDstG, * uDstB;

	for(int y = 0; y < nBltH; y++)
	{
	
		
		nStartRow = (rBltRct.top + ((nBltH - 1) - y)) * (MAIN_W*4) + (rBltRct.left*4);
		nSrcStartRow = ((y + nSrcY) * nWidth) + nSrcX;

		for(int x = 0; x < nBltW*4; x+=4)
		{
			

			uIndex = pImgData[nSrcStartRow + (x / 4)];

			if(uIndex)
			{
				nDstPos = nStartRow + x;

				fpDstA2 = (1.0f - (pCurrPal[(uIndex * 4) + 3]) / 255.0f);
				fpDstA1 = 1.0f - fpDstA2;

				uDstR = &pDstBmpData[nDstPos + 2];
				uDstG = &pDstBmpData[nDstPos + 1];
				uDstB = &pDstBmpData[nDstPos];

				
				*uDstR = (UINT8)aadd((fpDstA1 * (double)pCurrPal[(uIndex * 4)]), (fpDstA2 * (double)*uDstR));
				*uDstG = (UINT8)aadd((fpDstA1 * (double)pCurrPal[(uIndex * 4) + 1]),  (fpDstA2 * (double)*uDstG));
				*uDstB = (UINT8)aadd((fpDstA1 * (double)pCurrPal[(uIndex * 4) + 2]), (fpDstA2 * (double)*uDstB));
			}
		}
		

	}

	return TRUE;


}
void CImgDisp::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	bLButtonDown = TRUE;
	bCtrlDown = (GetAsyncKeyState(VK_CONTROL) & 0x8000) ? TRUE : FALSE;
	SetCapture();

	fpPrevX = (double)point.x;
	fpPrevY = (double)point.y;

	fpDiffX = 0.0f;
	fpDiffY = 0.0f;

	CWnd::OnLButtonDown(nFlags, point);
}

void CImgDisp::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default


	if(bLButtonDown && (nImgAmt || bCtrlDown))
	{
		int nAdd;// = 1;
		
		fpDiffX += (fpPrevX - (double)point.x) / fpZoom;
		fpDiffY += (fpPrevY - (double)point.y) / fpZoom;

		nAdd = 1;

		if(fpDiffX < 0)
			nAdd = -nAdd;

#ifndef SETIMGPOS
		

		if(bCtrlDown && !bTileBGBmp)
		{
			while(fabs(fpDiffX) >= 1.0f)
			{
				nBGXOffs -= nAdd;
				fpDiffX -= (double)nAdd;
			}
		}
		else
		{
			while(fabs(fpDiffX) >= 1.0f)
			{

			
				rSrcRct.left += nAdd;
				rSrcRct.right += nAdd;

				if(rSrcRct.Width() > rImgRct.Width())
				{
					if(rSrcRct.left > rImgRct.left || rSrcRct.right < rImgRct.right)
					{
						rSrcRct.left -= nAdd;
						rSrcRct.right -= nAdd;
					}
				}
				else
				{
					if(rSrcRct.left < rImgRct.left || rSrcRct.right > rImgRct.right)
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

		if(fpDiffY < 0)
			nAdd = -nAdd;

#ifndef SETIMGPOS

		if(bCtrlDown && !bTileBGBmp)
		{
			while(fabs(fpDiffY) >= 1.0f)
			{
				nBGYOffs -= nAdd;
				fpDiffY -= (double)nAdd;
			}
		}
		else
		{
			while(fabs(fpDiffY) >= 1.0f)
			{

				rSrcRct.top += nAdd;
				rSrcRct.bottom += nAdd;

				if(rSrcRct.Height() > rImgRct.Height())
				{
					if(rSrcRct.top > rImgRct.top || rSrcRct.bottom < rImgRct.bottom)
					{
						rSrcRct.top -= nAdd;
						rSrcRct.bottom -= nAdd;
					}
				}
				else
				{
					if(rSrcRct.top < rImgRct.top || rSrcRct.bottom > rImgRct.bottom)
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

		if(bCtrlDown && !bTileBGBmp)
		{
			UpdateCtrl();
		}
		else
		{
			Redraw();
		}

		fpPrevX = (double)point.x;
		fpPrevY = (double)point.y;
	}

	CWnd::OnMouseMove(nFlags, point);
}

void CImgDisp::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	bLButtonDown = FALSE;
	ReleaseCapture();

#ifdef SETIMGPOS

	int nImgIndex = SETIMGINDEX;

	CString szTemp;
	szTemp.Format("x: %d, y: %d", pImgBuffer[nImgIndex]->nXOffs, pImgBuffer[nImgIndex]->nYOffs);
	MessageBox(szTemp);

#endif

	CWnd::OnLButtonUp(nFlags, point);
}

void CImgDisp::SetAltPal(int nIndex, COLORREF * pAltPal)
{
	pImgBuffer[nIndex]->pAltPal = pAltPal;
}