// ImgOutDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PalMod.h"
#include "ImgOutDlg.h"
#include "atlimage.h"
#include "gdiplus.h"
#include "RegProc.h"
#include "CRC32.h"
#include "lodepng/lodepng.h"

using namespace Gdiplus;

// CImgOutDlg dialog

IMPLEMENT_DYNAMIC(CImgOutDlg, CDialog)
CImgOutDlg::CImgOutDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CImgOutDlg::IDD, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

CImgOutDlg::~CImgOutDlg()
{
}

void CImgOutDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_IMGDBMP, m_DumpBmp);
    DDX_Control(pDX, IDC_AMT, m_CB_Amt);
    DDX_Control(pDX, IDC_PAL, m_CB_Pal);
    DDX_Control(pDX, IDC_ZOOM, m_CB_Zoom); // see also m_zoomSelIndex
    DDX_Text(pDX, IDC_EDIT_BDRSZ, m_border_sz);
    DDX_CBIndex(pDX, IDC_PAL, m_pal);
    DDX_CBIndex(pDX, IDC_ZOOM, m_zoomSelIndex); // see also m_CB_Zoom
    DDX_Control(pDX, IDC_BDRSPN, m_BdrSpn);
}

BOOL CImgOutDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    CGameClass* CurrGame = GetHost()->GetCurrGame();

    //Set dialog data
    pButtonLabelSet = CurrGame->GetButtonDescSet();

    //Set the image controls data
    m_DumpBmp.m_pMainImgCtrl = &GetHost()->GetPreviewDlg()->m_ImgDisp;
    m_DumpBmp.m_pppPalettes = CurrGame->CreateImgOutPal();
    m_DumpBmp.m_nPalAmt = CurrGame->GetImgOutPalAmt();
    m_DumpBmp.DispType = CurrGame->GetImgDispType();

    // Set the icon
    SetIcon(m_hIcon, TRUE);         // Set big icon
    SetIcon(m_hIcon, FALSE);        // Set small icon

    CString tmp_str;
    UpdateData();

    m_nPalAmt = m_DumpBmp.m_nPalAmt;

    m_CB_Amt.AddString(L"1");

    tmp_str.Format(L"CImgOutDlg::OnInitDialog: preparing to show up to %u sprites\n", m_nPalAmt);
    OutputDebugString(tmp_str);

    // Update here as needed to add new division options
    switch (m_nPalAmt)
    {
    default:
        OutputDebugString(L"WARNING BUGBUG: This palette count is not supported in CImgOutDlg::OnInitDialog yet!\n");
        OutputDebugString(L"WARNING BUGBUG: You may want to update CImgDumpBmp::GetMaxImagesPerLine as well!\n");
        __fallthrough;
    case 1:
        // By default, we export out only the one sprite
        m_CB_Amt.EnableWindow(FALSE);
        break;
    case 2: // MSH, XMvSF
        m_CB_Amt.AddString(L"2");
        break;
    case 3: // DanKuGa
        m_CB_Amt.AddString(L"3");
        break;
    case 4: // Garou
        m_CB_Amt.AddString(L"4");
        break;
    case 5: // Jojos & Garou
        if (CurrGame->GetGameFlag() == GGML_P) //Give the option to hide the Mirror palette
        {
            m_CB_Amt.AddString(L"4");
        }
        m_CB_Amt.AddString(L"5");
        break;
    case 6: 
    case 7: // 3S
        if ((CurrGame->GetGameFlag() == SFA2_A) || (CurrGame->GetGameFlag() == GGDS_NDS)) // SFA2's 5-6 colors are only with autoguard on, and likewise GGDS has a natural 4/6 split
        {
            m_CB_Amt.AddString(L"4");
        }
        m_CB_Amt.AddString(L"6");
        // Allow the user to export either the "normal" 6 sprite set or to export
        // the entire 7 sprite set
        m_nPalAmt == 7 ? m_CB_Amt.AddString(L"7") : NULL;
        break;
    case 8: // status effects or cvs2
        m_CB_Amt.AddString(L"6");
        m_CB_Amt.AddString(L"8");
        break;
    case 9: // GBA!
        m_CB_Amt.AddString(L"4");
        m_CB_Amt.AddString(L"8");
        m_CB_Amt.AddString(L"9");
        break;
    case 10: // ST
        m_CB_Amt.AddString(L"6");
        m_CB_Amt.AddString(L"10");
        break;
    case 12:
        m_CB_Amt.AddString(L"4");
        m_CB_Amt.AddString(L"8");
        m_CB_Amt.AddString(L"12");
        break;
    case 16:
        m_CB_Amt.AddString(L"6");
        m_CB_Amt.AddString(L"16");
        break;
    case 20:
        m_CB_Amt.AddString(L"5");
        m_CB_Amt.AddString(L"10");
        m_CB_Amt.AddString(L"15");
        m_CB_Amt.AddString(L"20");
        break;
    case 21: // MAAB
        m_CB_Amt.AddString(L"5");
        m_CB_Amt.AddString(L"10");
        m_CB_Amt.AddString(L"15");
        m_CB_Amt.AddString(L"19");
        m_CB_Amt.AddString(L"21"); // Last two are unused typically
        break;
    case 22:
        m_CB_Amt.AddString(L"5");
        m_CB_Amt.AddString(L"10");
        m_CB_Amt.AddString(L"15");
        m_CB_Amt.AddString(L"20");
        m_CB_Amt.AddString(L"22");
        break;
    case 24:
        m_CB_Amt.AddString(L"6");
        m_CB_Amt.AddString(L"12");
        m_CB_Amt.AddString(L"24");
        break;
    case 25:
        m_CB_Amt.AddString(L"6");
        m_CB_Amt.AddString(L"12");
        m_CB_Amt.AddString(L"24");
        m_CB_Amt.AddString(L"25");
        break;
    case 26:
        m_CB_Amt.AddString(L"6");
        m_CB_Amt.AddString(L"12");
        m_CB_Amt.AddString(L"24");
        m_CB_Amt.AddString(L"26");
        break;
    case 30: // MBTL
        m_CB_Amt.AddString(L"30");
        break;
    case 32:
        m_CB_Amt.AddString(L"4");
        m_CB_Amt.AddString(L"8");
        m_CB_Amt.AddString(L"16");
        m_CB_Amt.AddString(L"32");
        break;
    case 38: // MBTL: Neco
        m_CB_Amt.AddString(L"30");
        m_CB_Amt.AddString(L"38");
        break;
    case 42:
        m_CB_Amt.AddString(L"4");
        m_CB_Amt.AddString(L"8");
        m_CB_Amt.AddString(L"16");
        m_CB_Amt.AddString(L"32");
        m_CB_Amt.AddString(L"42");
        break;
    case 64:
        m_CB_Amt.AddString(L"4");
        m_CB_Amt.AddString(L"8");
        m_CB_Amt.AddString(L"16");
        m_CB_Amt.AddString(L"32");
        m_CB_Amt.AddString(L"36");
        m_CB_Amt.AddString(L"64");
        break;
    }

    FillPalCombo();

    //Cannot get accurate remainder amount

    //Populate Zoom combo box: 1-8x
    for (uint32_t i = 0; i < CPalModZoom::GetZoomListSize(); i++)
    {
        tmp_str.Format(L"%.0fx", CPalModZoom::GetValueAt(i));
        m_CB_Zoom.AddString(tmp_str);
    }

    //Change this if we ever decide to load a default image amount
    m_iSelectedImageAmount = 1;

    m_BdrSpn.SetRange(0, 999);
    m_BdrSpn.SetBuddy(GetDlgItem(IDC_EDIT_BDRSZ));

    //Get the size of the dummy rect so that we offset the preview bitmap correctly
    GetDlgItem(IDC_DUMMY)->GetClientRect(&m_rcDummyRect);

    LoadSettings();

    m_fCanSize = TRUE;

    UpdateData(FALSE);

    UpdImgVar(FALSE);

    m_DumpBmp.InitImgData();

    //Get the rest of the data
    m_fDlgInit = TRUE;
    return TRUE;
}

BOOL CImgOutDlg::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
    if (zDelta > 0)
    {
        AddZoom();
    }
    else
    {
        SubZoom();
    }

    return TRUE;
}


void CImgOutDlg::AddZoom()
{
    int nCurrZoomIndex = m_CB_Zoom.GetCurSel() + 1;
    if (nCurrZoomIndex < (int)CPalModZoom::GetZoomListSize())
    {
        m_CB_Zoom.SetCurSel(nCurrZoomIndex);
    }

    UpdateImg();
}

void CImgOutDlg::SubZoom()
{
    int nCurrZoomIndex = m_CB_Zoom.GetCurSel() - 1;

    if (nCurrZoomIndex >= m_nZoomSelOptionsMin)
    {
        m_CB_Zoom.SetCurSel(nCurrZoomIndex);
    }

    UpdateImg();
}

afx_msg void CImgOutDlg::OnSize(UINT nType, int cx, int cy)
{
    CDialog::OnSize(nType, cx, cy);

    ResizeBmp();
}

#pragma warning( push )
#pragma warning( disable : 26454 ) // bug in Microsoft headers

BEGIN_MESSAGE_MAP(CImgOutDlg, CDialog)
    ON_WM_SHOWWINDOW()
    ON_WM_SIZE()
    ON_WM_CLOSE()

    ON_BN_CLICKED(IDC_UPDATE, UpdateImg)

    ON_WM_MOUSEWHEEL()

    ON_CBN_SELCHANGE(IDC_AMT, OnCbnSelchangeAmt)
    ON_CBN_SELCHANGE(IDC_PAL, UpdateImg)
    ON_CBN_SELCHANGE(IDC_ZOOM, UpdateImg)
    //ON_EN_CHANGE(IDC_EDIT_BDRSZ, UpdateImg)
    //ON_COMMAND(REQ_VAR, UpdImgVar)
    ON_NOTIFY(UDN_DELTAPOS, IDC_BDRSPN, OnDeltaposBdrspn)
    ON_COMMAND(ID_SETTINGS_IMGOUT_SETBACKGROUNDCOLOR, OnSettingsSetBackgroundColor)
    ON_COMMAND(ID_IMGOUT_SAVE, OnFileSave)
    ON_COMMAND(ID_IMGOUT_CLOSE, OnClose)
    ON_COMMAND(REQ_VAR, UpdateImg)
    ON_EN_CHANGE(IDC_EDIT_BDRSZ, OnEnChangeEditBdrsz)
    ON_WM_GETMINMAXINFO()

    ON_COMMAND(ID_ACC_ADDZOOM, AddZoom)
    ON_COMMAND(ID_ACC_SUBZOOM, SubZoom)
    ON_COMMAND(ID_ACC_ESCAPE, OnClose)
    ON_COMMAND(ID_SETTINGS_USETRANSPARENTPNG, OnSettingsUseTransparentPNG)
    ON_WM_INITMENUPOPUP()
END_MESSAGE_MAP()

#pragma warning( pop )

// CImgOutDlg message handlers

void CImgOutDlg::OnShowWindow(BOOL fShow, UINT nStatus)
{
    CDialog::OnShowWindow(fShow, nStatus);

    CRegProc sett;

    int nPreferredAmount = sett.GetImageAmountForPalettePreview(m_nPalAmt);
    m_CB_Amt.SetCurSel(nPreferredAmount);
    m_CB_Pal.SetCurSel(0);

    OnCbnSelchangeAmt();

    ResizeBmp();
}

void CImgOutDlg::UpdImgVar(BOOL fResize)
{
    UpdateData();

    m_DumpBmp.m_nTotalImagesToDisplay = m_iSelectedImageAmount;
    m_DumpBmp.m_nPalIndex = m_pal;

    m_zoomSelIndex = min(m_zoomSelIndex, (int)CPalModZoom::GetZoomListSize());
    m_zoomSelIndex = max(m_zoomSelIndex, m_nZoomSelOptionsMin);

    m_DumpBmp.m_flZoomLevel = (float)(1 + m_zoomSelIndex);
    m_DumpBmp.m_outline_sz = 0;
    m_DumpBmp.m_border_sz = m_border_sz;

    m_DumpBmp.GetOutputW();
    m_DumpBmp.GetOutputH();

    if (fResize)
    {
        m_DumpBmp.ResizeMainBmp();
    }

    UpdateData(FALSE);

    //m_DumpBmp.UpdateBltRect(FALSE);
}

void CImgOutDlg::UpdateImg()
{
    UpdImgVar();
    m_DumpBmp.UpdateBltRect(FALSE);
    m_DumpBmp.UpdateClip();
    m_DumpBmp.UpdateCtrl();
}

void CImgOutDlg::OnCbnSelchangeAmt()
{
    UpdateData();

    wchar_t szCount[32];
    if (m_CB_Amt.GetLBText(m_CB_Amt.GetCurSel(), szCount) != CB_ERR)
    {
        _stscanf_s(szCount, L"%u", &m_iSelectedImageAmount);

        m_CB_Pal.EnableWindow(m_iSelectedImageAmount == 1);

        //There's no member variable for the border size edit box
        //But now I decided to just use border size instead of outline

        //GetDlgItem(IDC_BDRSZ)->EnableWindow(!is_basic_amt);

        UpdateData(FALSE);

        //m_DumpBmp.UpdateBltRect(FALSE);

        UpdateImg();
    }
}

void CImgOutDlg::FillPalCombo()
{
    bool fShouldShowMultipleOptions = (m_nPalAmt != 1) && (!pButtonLabelSet.empty());

    if (fShouldShowMultipleOptions && ((uint32_t)m_nPalAmt > pButtonLabelSet.size()))
    {
        MessageBox(L"Error: list of output options doesn't match list size.\n\nPlease report this bug in PalMod and it'll be fixed promptly.", GetHost()->GetAppName(), MB_ICONERROR);
    }

    if (fShouldShowMultipleOptions)
    {
        for (int nNodeIndex = 0; nNodeIndex < m_nPalAmt; nNodeIndex++)
        {
            m_CB_Pal.AddString(pButtonLabelSet[nNodeIndex]);
        }
    }
    else
    {
        m_CB_Pal.AddString(L"Selected");
    }

    m_CB_Pal.SetCurSel(0);
}

void CImgOutDlg::OnDeltaposBdrspn(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);

    m_BdrSpn.SetPos(pNMUpDown->iPos);

    UpdateImg();

    *pResult = 0;
}

void CImgOutDlg::OnSettingsSetBackgroundColor()
{
    CColorDialog c_dlg(m_DumpBmp.m_crBGCol);

    if (c_dlg.DoModal() == IDOK)
    {
        m_DumpBmp.SetBG(c_dlg.GetColor());
        UpdateImg();
    }
}

void CImgOutDlg::LoadSettings()
{
    CRegProc sett;

    sett.LoadReg(eRegistryStoreID::REG_IMGOUT);

    m_DumpBmp.m_crBGCol = sett.imgout_bgcol;

    m_CB_Zoom.SetCurSel(sett.imgout_zoomindex);
    
    UpdateData();

    m_fTransPNG = sett.fTransPNG;
    m_border_sz = sett.imgout_border;

    UpdateData(FALSE);

    RECT window_rect;

    window_rect = sett.imgout_szpos;

    if (window_rect.top != c_badWindowPosValue)
    {
        MoveWindow(&window_rect);
    }
}

void CImgOutDlg::SaveSettings()
{
    CRegProc sett;

    sett.imgout_bgcol = m_DumpBmp.m_crBGCol;

    sett.imgout_border = m_border_sz;
    sett.imgout_zoomindex = m_CB_Zoom.GetCurSel();
    sett.fTransPNG = m_fTransPNG;

    RECT window_rect;

    GetWindowRect(&window_rect);
    sett.imgout_szpos = window_rect;

    sett.SetImageAmountForPalettePreview(m_nPalAmt, m_CB_Amt.GetCurSel());

    sett.SaveReg(eRegistryStoreID::REG_IMGOUT);
}

void CImgOutDlg::ResizeBmp()
{
    if (m_fCanSize)
    {
        RECT new_sz;
        GetClientRect(&new_sz);

        new_sz.left += m_rcDummyRect.right;

        GetDlgItem(IDC_IMGDBMP)->MoveWindow(&new_sz);

        UpdateImg();
    }
}

void CImgOutDlg::ExportToIndexedPNG(CString save_str, CString output_str, CString output_ext)
{
    const bool fShowingSingleVersion = (m_DumpBmp.m_nTotalImagesToDisplay == 1);
    const int nImageCount = m_DumpBmp.m_pMainImgCtrl->GetImgAmt();
    sImgNode** rgSrcImg = m_DumpBmp.m_pMainImgCtrl->GetImgBuffer();

    const uint8_t currentZoom = (uint8_t)m_DumpBmp.m_flZoomLevel;

    // We want to ensure filename syntax, so strip the extension in order to rebuild it below
    save_str.Replace(output_ext.GetString(), L"");

    bool fShouldExportAsIndexed = true;

    // Establish the raw image data
    uint32_t nTotalPaletteSize = 0;

    RECT rectCompleteDimensions = {};

    for (int nImageIndex = 0; nImageIndex < nImageCount; nImageIndex++)
    {
        // this represents the maximum rect, establishing needed skew
        rectCompleteDimensions.left = min(rectCompleteDimensions.left, 0 + rgSrcImg[nImageIndex]->nXOffs);
        rectCompleteDimensions.right = max(rectCompleteDimensions.right, rgSrcImg[nImageIndex]->uImgW + rgSrcImg[nImageIndex]->nXOffs);
        rectCompleteDimensions.top = min(rectCompleteDimensions.top, 0 + rgSrcImg[nImageIndex]->nYOffs);
        rectCompleteDimensions.bottom = max(rectCompleteDimensions.bottom, rgSrcImg[nImageIndex]->uImgH + rgSrcImg[nImageIndex]->nYOffs);

        nTotalPaletteSize += m_DumpBmp.m_rgSrcImg[nImageIndex]->uPalSz;
    }

    unsigned maxSrcWidth = rectCompleteDimensions.right - rectCompleteDimensions.left;
    unsigned maxSrcHeight = rectCompleteDimensions.bottom - rectCompleteDimensions.top;

    int nXSkew = abs(rectCompleteDimensions.left);
    int nYSkew = abs(rectCompleteDimensions.top);

    bool fTooManyColorsForSingleIndexedPNG = (nTotalPaletteSize > 256);

    if (!fShowingSingleVersion || fTooManyColorsForSingleIndexedPNG)
    {
        CString strWarning = L"This preview is not suited for indexed PNG.  This is because:\n";

        if (fTooManyColorsForSingleIndexedPNG)
        {
            strWarning.Append(L"* Indexed PNGs can only use up to 256 colors.  PalMod will need to export each image to its own indexed PNG file.\n");
        }
        else
        {
            strWarning.Append(L"* The preview is showing multiple versions of this sprite.  PalMod will need to export each of those versions to its own indexed PNG file.\n");
        }

        strWarning.Append(L"\nIf you wish to continue, click OK.  Otherwise, click Cancel and then export as normal PNG.");

        fShouldExportAsIndexed = (MessageBox(strWarning, GetHost()->GetAppName(), MB_OKCANCEL | MB_ICONWARNING) == IDOK);
    }

    if (fShouldExportAsIndexed)
    {
        uint16_t nTransparencyPosition = GetHost()->GetCurrGame()->GetTransparencyColorPosition();
#ifdef ALLOW_MULTIPLE_TRANSPARENCY_COLORS
        // It's technically correct for our purposes to allow for this, but also problematic since Photoshop
        // only wants one transparency per indexed image.  So let's just turn this off for now.
        uint16_t nMaxWritePerTransparency = GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency();
#endif

        // Indexed PNG: use the lodePNG encoder
        int nImageIndex = 0;

        for (int nNodeIndex = 0; (nNodeIndex < m_DumpBmp.m_nTotalImagesToDisplay) ||
                                 (fTooManyColorsForSingleIndexedPNG && (nImageIndex < nImageCount));
             nNodeIndex++)
        {
            CString strCurrentNodeName = L"";
            
            if (fShowingSingleVersion)
            {
                if (fTooManyColorsForSingleIndexedPNG)
                {
                    strCurrentNodeName.Format(L"%02u", nImageIndex);
                }
            }
            else
            {
                strCurrentNodeName = pButtonLabelSet[nNodeIndex];
            }

            int nCurrentPalIndex = (m_DumpBmp.m_nTotalImagesToDisplay == 1) ? m_DumpBmp.m_nPalIndex : nNodeIndex;

            const unsigned destWidth = (maxSrcWidth * currentZoom) + (2 * m_DumpBmp.m_border_sz);
            const unsigned destHeight = (maxSrcHeight * currentZoom) + (2 * m_DumpBmp.m_border_sz);

            std::vector<unsigned char> image(destWidth * destHeight);
            lodepng::State state;

            unsigned nPaletteOffset = 0;
            bool fWrittenTheOneTransparencyColor = false;

            if (!fTooManyColorsForSingleIndexedPNG)
            {
                nImageIndex = 0;
            }

            // This section writes the image to rgSrcImg
            // For single-png output, we glom together the palette tables and thus adjust the indexes of the 
            // secondary images
            for (; nImageIndex < nImageCount; nImageIndex++)
            {
                const unsigned srcWidth = rgSrcImg[nImageIndex]->uImgW;
                const unsigned srcHeight = rgSrcImg[nImageIndex]->uImgH;
                const unsigned srcSize = srcWidth * srcHeight;

                unsigned skewYForImage = nYSkew + rgSrcImg[nImageIndex]->nYOffs;
                unsigned skewXForImage = nXSkew + rgSrcImg[nImageIndex]->nXOffs;

                // Handle zoom stretching inline
                for (unsigned destY = 0; destY < (srcHeight * currentZoom); destY += currentZoom)
                {
                    unsigned adjustedY = skewYForImage + destY;

                    for (unsigned zoomY = 0; zoomY < currentZoom; zoomY++)
                    {
                        for (unsigned destX = 0; destX < (srcWidth * currentZoom); destX += currentZoom)
                        {
                            unsigned adjustedX = skewXForImage + destX;

                            for (unsigned zoomX = 0; zoomX < currentZoom; zoomX++)
                            {
                                int destIndex = ((m_DumpBmp.m_border_sz + adjustedY + zoomY) * destWidth) + (m_DumpBmp.m_border_sz + adjustedX + zoomX);
                                // this is the upside-down version:
                                //int srcIndex = srcSize + (destX / currentZoom) - (((destY / currentZoom) + 1) * srcWidth);
                                // and this is the rightside-up version:
                                int srcIndex = (destX / currentZoom) + ((destY / currentZoom) * srcWidth);

                                // only write used pixels
                                if (rgSrcImg[nImageIndex]->pImgData[srcIndex] != 0)
                                {
                                    image[destIndex] = rgSrcImg[nImageIndex]->pImgData[srcIndex] + nPaletteOffset;
                                }
                            }
                        }
                    }
                }

                // Establish the PLTE header data.
                uint8_t* pCurrPal = (uint8_t*)m_DumpBmp.m_pppPalettes[nImageIndex][nCurrentPalIndex];
                CGameClass* CurrGame = GetHost()->GetCurrGame();
                // the PNG PLTE section goes up to 256 colors, so use that as our initial cap
                for (uint32_t iCurrentColor = 0; iCurrentColor < 256; iCurrentColor++)
                {
#ifdef ALLOW_MULTIPLE_TRANSPARENCY_COLORS
                    if ((iCurrentColor % nMaxWritePerTransparency) == nTransparencyPosition)
#else
                    if (iCurrentColor == nTransparencyPosition) // transparency color
#endif
                    {
                        if (m_fTransPNG)
                        {
                            if (!fWrittenTheOneTransparencyColor)
                            {
                                fWrittenTheOneTransparencyColor = true;
                                lodepng_palette_add(&state.info_png.color, 0, 0, 0, 0);
                                lodepng_palette_add(&state.info_raw, 0, 0, 0, 0);
                            }
                            else
                            {
                                // Force alpha so that photoshop understands this PNG is indexed instead of RBG:
                                // Photoshop only accepts single-transparency indexed PNGs
                                lodepng_palette_add(&state.info_png.color, 0, 0, 0, 0xFF);
                                lodepng_palette_add(&state.info_raw, 0, 0, 0, 0xFF);
                            }
                        }
                        else
                        {
                            // Use the background color, but be sure to force alpha
                            lodepng_palette_add(&state.info_png.color, GetRValue(m_DumpBmp.m_crBGCol), GetGValue(m_DumpBmp.m_crBGCol), GetBValue(m_DumpBmp.m_crBGCol), 0xFF);
                            lodepng_palette_add(&state.info_raw, GetRValue(m_DumpBmp.m_crBGCol), GetGValue(m_DumpBmp.m_crBGCol), GetBValue(m_DumpBmp.m_crBGCol), 0xFF);
                        }
                    }
                    else if (iCurrentColor < (uint32_t)m_DumpBmp.m_rgSrcImg[nImageIndex]->uPalSz) // actual colors
                    {
                        uint32_t nCurrentPosition = iCurrentColor * 4;
                        const uint8_t currAVal = pCurrPal[nCurrentPosition + 3];
                        const uint8_t currBVal = pCurrPal[nCurrentPosition + 2];
                        const uint8_t currGVal = pCurrPal[nCurrentPosition + 1];
                        const uint8_t currRVal = pCurrPal[nCurrentPosition];
                        lodepng_palette_add(&state.info_png.color, currRVal, currGVal, currBVal, currAVal);
                        lodepng_palette_add(&state.info_raw, currRVal, currGVal, currBVal, currAVal);
                    }
                    else
                    {
                        break;
                    }
                }

                if (fTooManyColorsForSingleIndexedPNG)
                {
                    // Only need one preview per file: break now and generate the PNG
                    break;
                }
                else
                {
                    nPaletteOffset += m_DumpBmp.m_rgSrcImg[nImageIndex]->uPalSz;
                }
            }

#ifdef DEBUG
            // If we want to add metadata, this is what is needed.
            // But currently, I don't know what metadata I would want, so I'm leaving it alone for now.
            state.encoder.text_compression = 0; // use tExt
            LodePNGInfo& info = state.info_png;
            CStringA astrText;
            astrText.Format("%S", GetHost()->GetAppName(false).GetString());
            lodepng_add_text(&info, "Software", astrText.GetString());
            // What should title be?  Node name plus current palette name...?
            lodepng_add_text(&info, "Title", "...");
#endif      

            // lodepng options: going from RAW to indexed PNG
            state.info_png.color.colortype = state.info_raw.colortype = LCT_PALETTE;
            state.info_png.color.bitdepth = state.info_raw.bitdepth = 8;
            if (!fTooManyColorsForSingleIndexedPNG)
            {
                state.info_png.color.palettesize = state.info_raw.palettesize = nTotalPaletteSize;
            }
            else
            {
                state.info_png.color.palettesize = state.info_raw.palettesize = m_DumpBmp.m_rgSrcImg[nImageIndex]->uPalSz;
            }

            state.encoder.auto_convert = 0;

            //encode and save
            std::vector<unsigned char> buffer;
            unsigned error = lodepng::encode(buffer, &image[0], destWidth, destHeight, state);
            if (error)
            {
                CString strError;
                strError.Format(L"PNG encoder error: %u - %S\n", error, lodepng_error_text(error));
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
                OutputDebugString(strError);
            }
            else
            {
                output_str.Format(L"%s%s%s", save_str.GetString(), strCurrentNodeName.GetString(), output_ext.GetString());
                lodepng::save_file(buffer, output_str.GetString());
            }

            if (fTooManyColorsForSingleIndexedPNG)
            {
                nImageIndex++;
            }
        }
    }
}

void CImgOutDlg::ExportToRAW(CString save_str, CString output_ext, LPCWSTR pszSuggestedFileName)
{
    // raw
    const int nImageCount = m_DumpBmp.m_pMainImgCtrl->GetImgAmt();
    bool fShouldExport = true;

    if (nImageCount > 1)
    {
        CString strWarning;

        strWarning = L"This preview is not suited for export to RAW.  This is because this preview uses multiple RAWs.\n";
        strWarning.Append(L"PalMod will need to export each of those RAWs to its own RAW file.\n");
        strWarning.Append(L"\nIf you wish to continue, click OK.");

        fShouldExport = (MessageBox(strWarning, GetHost()->GetAppName(), MB_OKCANCEL | MB_ICONWARNING) == IDOK);
    }

    if (fShouldExport)
    {
        CString strOutputFilename;
        CString strDimensions;
        const bool fShowingSingleVersion = (m_DumpBmp.m_nTotalImagesToDisplay == 1);
        sImgNode** rgSrcImg = m_DumpBmp.m_pMainImgCtrl->GetImgBuffer();

        const uint8_t currentZoom = (uint8_t)m_DumpBmp.m_flZoomLevel;

        // We want to ensure filename syntax, so strip the extension in order to rebuild it below
        save_str.Replace(output_ext.GetString(), L"");

        for (int nImageIndex = 0; nImageIndex < nImageCount; nImageIndex++)
        {
            strDimensions.Format(L"-w-%u-h-%u", rgSrcImg[nImageIndex]->uImgW, rgSrcImg[nImageIndex]->uImgH);

            // Ensure that the filename includes the W/H values so the RAW is usable
            const bool fNeedDimensions = (wcsstr(pszSuggestedFileName, strDimensions.GetString()) == nullptr);

            // RAW export
            if (nImageCount == 1)
            {
                strOutputFilename.Format(L"%s%s%s", save_str.GetString(), fNeedDimensions ? strDimensions.GetString() : L"", output_ext.GetString());
            }
            else
            {
                strOutputFilename.Format(L"%s-%02x%s%s", save_str.GetString(), nImageIndex, fNeedDimensions ? strDimensions.GetString() : L"", output_ext.GetString());
            }

            bool fHasErrorAndShouldFix = false;

            std::vector<bool> rgIsIndexUsed;
            rgIsIndexUsed.resize(rgSrcImg[nImageIndex]->uPalSz);

            for (int nImgIndex = 0; nImgIndex < rgSrcImg[nImageIndex]->uImgH * rgSrcImg[nImageIndex]->uImgW; nImgIndex++)
            {
                if (rgSrcImg[nImageIndex]->pImgData[nImgIndex] < rgSrcImg[nImageIndex]->uPalSz)
                {
                    rgIsIndexUsed.at(rgSrcImg[nImageIndex]->pImgData[nImgIndex]) = true;
                }
                else
                {
                    fHasErrorAndShouldFix = true;
                }
            }

            if (fHasErrorAndShouldFix)
            {
                CString strMsg = L"This preview uses non-standard color references.  Do you want PalMod to export it using normalized and recommended color references instead?";
                fHasErrorAndShouldFix = (MessageBox(strMsg.GetString(), GetHost()->GetAppName(), MB_YESNO) == IDYES);
            }

            if (fHasErrorAndShouldFix)
            {
                // Default to the last color in the palette: we'll optimize to an actually unused color index if possible.
                uint8_t nUnusedPaletteIndex = static_cast<uint8_t>(rgSrcImg[nImageIndex]->uPalSz - 1);

                for (uint8_t nColorUsageIndex = 1; nColorUsageIndex < rgIsIndexUsed.size(); nColorUsageIndex++)
                {
                    if (!rgIsIndexUsed.at(nColorUsageIndex))
                    {
                        nUnusedPaletteIndex = nColorUsageIndex;
                        break;
                    }
                }

                bool fShownError = false;

                for (size_t iImgIndex = 0; iImgIndex < static_cast<size_t>(rgSrcImg[nImageIndex]->uImgH * rgSrcImg[nImageIndex]->uImgW); iImgIndex++)
                {
                    // Validate that all color references are within the bounds of the current palette
                    if (rgSrcImg[nImageIndex]->pImgData[iImgIndex] > rgSrcImg[nImageIndex]->uPalSz)
                    {
                        uint8_t nOldColor = rgSrcImg[nImageIndex]->pImgData[iImgIndex];
                        uint8_t nNewColor;

                        // In some specific cases people were using out-of-bounds colors to color "shadow" / inferred sprites
                        // Adjust those to something *in* the palette.  This is still "wrong" but at least more 
                        // technically correct.
                        if (rgSrcImg[nImageIndex]->pImgData[iImgIndex] == 0xfe)
                        {
                            nNewColor = nUnusedPaletteIndex;
                        }
                        else
                        {
                            // this is likely a paired palette that is indexed to be using colors from the second palette.
                            // for purposes of RAW, that is incorrect: this should be referencing the palette as color[0]
                            nNewColor = nOldColor % rgSrcImg[nImageIndex]->uPalSz;
                        }

                        if (!fShownError)
                        {
                            fShownError = true;
                            CString strError;
                            strError.Format(L"WARNING: adjusting image to make it actually functional! 0x%x to 0x%x (out of 0x%x)\r\n",
                                nOldColor, nNewColor, rgSrcImg[nImageIndex]->uPalSz);
                            OutputDebugString(strError.GetString());
                        }

                        rgSrcImg[nImageIndex]->pImgData[iImgIndex] = nNewColor;
                    }
                }
            }

            CFile rawFile;
            if (rawFile.Open(strOutputFilename, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
            {
                rawFile.Write(rgSrcImg[nImageIndex]->pImgData, rgSrcImg[nImageIndex]->uImgH * rgSrcImg[nImageIndex]->uImgW);
                rawFile.Abort();
            }
        }
    }
}

void CImgOutDlg::ExportToCImageType(CString output_str, GUID img_format, DWORD dwExportFlags)
{
    if ((img_format == ImageFormatGIF) &&
        (m_iSelectedImageAmount == 1))
    {
        if (GetFileAttributes(output_str) != INVALID_FILE_ATTRIBUTES)
        {
            CString strMessage = L"A file with this name already exists: do you wish to update the existing GIF's palette instead of creating a new GIF preview?";
            if (MessageBox(strMessage, GetHost()->GetAppName(), MB_YESNO) == IDYES)
            {
                UpdatePaletteInGIF(output_str);
                return;
            }
        }
    }

    CImage out_img;
    int output_width = m_DumpBmp.GetOutputW();
    int output_height = m_DumpBmp.GetOutputH();

    // Pass negative height in order to indicate that this is top-down
    if (out_img.Create(output_width, -output_height, 32, dwExportFlags))
    {
        const bool fUsingAlphaChannel = dwExportFlags == CImage::createAlphaChannel;
        if (fUsingAlphaChannel)
        {
            m_DumpBmp.UpdateCtrl(FALSE, (uint8_t*)out_img.GetBits());
        }
        else
        {
            CDC* output_DC = CDC::FromHandle(out_img.GetDC());
            output_DC->BitBlt(0, 0, output_width, output_height, &m_DumpBmp.m_MainDC, 0, 0, SRCCOPY);
        }

        HRESULT hr = out_img.Save(output_str, img_format);

        if (FAILED(hr))
        {
            CString strInfo;
            strInfo.Format(L"Image export to file '%s' failed.\n\nThe error code is 0x%x", output_str.GetString(), hr);
            MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONERROR);
        }

        if (!fUsingAlphaChannel)
        {
            out_img.ReleaseDC();
        }
        else
        {
            m_DumpBmp.UpdateCtrl();
        }
    }
    else
    {
        MessageBox(L"Image export failed: Failed to create the image file.", GetHost()->GetAppName(), MB_ICONERROR);
    }
}

void CImgOutDlg::OnFileSave()
{
    static LPCWSTR szSaveFilter[] =
    {
        L"Indexed PNG|*.png|"
        L"PNG Image|*.png|"
        L"GIF Image|*.gif|"
        L"BMP Image|*.bmp|"
        L"JPEG Image|*.jpg|"
        L"RAW texture|*.raw|"
        L"HTML|*.html|"
        L"|"
    };

    CFileDialog sfd(
        FALSE,
        NULL,
        NULL,
        OFN_OVERWRITEPROMPT | OFN_HIDEREADONLY,
        *szSaveFilter
    );

    OPENFILENAME& pOFN = sfd.GetOFN();

    pOFN.nFilterIndex = CRegProc::GetOFNIndexForImageExport();

    if (sfd.DoModal() == IDOK)
    {
        CString output_ext = L".png";
        GUID img_format = ImageFormatPNG;
        DWORD dwExportFlags = 0;

        switch (sfd.GetOFN().nFilterIndex)
        {
            default:
            case 1:
            {
                img_format = ImageFormatUndefined;
                output_ext = L".png";
                break;
            }
            case 2:
            {
                img_format = ImageFormatPNG;
                output_ext = L".png";
                dwExportFlags = m_fTransPNG ? CImage::createAlphaChannel : 0;
                break;
            }
            case 3:
            {
                img_format = ImageFormatGIF;
                output_ext = L".gif";
                break;
            }
            case 4:
            {
                img_format = ImageFormatBMP;
                output_ext = L".bmp";
                break;
            }
            case 5:
            {
                img_format = ImageFormatJPEG;
                output_ext = L".jpg";
                break;
            }
            case 6:
            {
                img_format = ImageFormatUndefined;
                output_ext = L".raw";
                break;
            }
            case 7:
            {
                img_format = ImageFormatUndefined;
                output_ext = L".html";
                break;
            }
        }

        OPENFILENAME sfd_ofn = sfd.GetOFN();

        CString output_str;

        CString save_str = sfd_ofn.lpstrFile;

        // Do a quick to confirm if we have the file extension in the supplied filename
        CString strExtCheck = save_str;
        strExtCheck.MakeLower();
        if (strExtCheck.Find(output_ext) == (strExtCheck.GetLength() - output_ext.GetLength()))
        {
            output_str = save_str;
        }
        else
        {
            // Force the correct file extension
            output_str.Format(L"%s%s", sfd_ofn.lpstrFile, output_ext.GetString());
        }

        if (img_format == ImageFormatUndefined) // this path is RAW, HTML, and indexed PNG using custom encoders
        {
            if (output_ext.CompareNoCase(L".png") == 0)
            {
                ExportToIndexedPNG(save_str, output_str, output_ext);
            }
            else if (output_ext.CompareNoCase(L".html") == 0)
            {
                ExportToHTML(save_str, output_ext, sfd_ofn.lpstrFile);
            }
            else
            {
                ExportToRAW(save_str, output_ext, sfd_ofn.lpstrFile);
            }
        }
        else // specific image type guid available
        {
            ExportToCImageType(output_str, img_format, dwExportFlags);
        }

        CRegProc::StoreOFNIndexForImageExport(pOFN.nFilterIndex);
    }
}

void CImgOutDlg::OnClose()
{
    SaveSettings();

    CDialog::EndDialog(0);
}

void CImgOutDlg::OnEnChangeEditBdrsz()
{
    // TODO:  If this is a RICHEDIT control, the control will not
    // send this notification unless you override the CDialog::OnInitDialog()
    // function and call CRichEditCtrl().SetEventMask()
    // with the ENM_CHANGE flag ORed into the mask.

    static BOOL fFirstSet = TRUE;

    if (fFirstSet)
    {
        fFirstSet = FALSE;
    }
    else
    {
        UpdateData();
        m_BdrSpn.SetPos(m_border_sz);
        UpdateData(FALSE);
        UpdateImg();
    }
}

BOOL CImgOutDlg::PreTranslateMessage(MSG* pMsg)
{
    if (g_hAccelTable)
    {
        if (::TranslateAccelerator(GetSafeHwnd(), g_hAccelTable, pMsg))
        {
            return(TRUE);
        }
    }

    if (pMsg->message == WM_KEYDOWN)
    {
        if ((pMsg->wParam == VK_RETURN) || (pMsg->wParam == VK_ESCAPE))
        {
            pMsg->wParam = NULL;
        }
    }

    return CDialog::PreTranslateMessage(pMsg);
}

void CImgOutDlg::OnGetMinMaxInfo(MINMAXINFO* lpMMI)
{
    if (m_fDlgInit)
    {
        RECT rDummy;
        GetDlgItem(IDC_DUMMY)->GetWindowRect(&rDummy);

        lpMMI->ptMinTrackSize.x = (rDummy.right - rDummy.left) + (SCROLL_W * 4);
        lpMMI->ptMinTrackSize.y = (rDummy.bottom - rDummy.top) + (SCROLL_W * (2 + 1));
    }

    CWnd::OnGetMinMaxInfo(lpMMI);
}

void CImgOutDlg::OnSettingsUseTransparentPNG()
{
    m_fTransPNG = !m_fTransPNG;
}

void CImgOutDlg::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL fSysMenu)
{
    CDialog::OnInitMenuPopup(pPopupMenu, nIndex, fSysMenu);

    CMenu* SettMenu = GetMenu()->GetSubMenu(1); //1 == Settings Menu

    if (pPopupMenu == SettMenu)
    {
        pPopupMenu->CheckMenuItem(ID_SETTINGS_USETRANSPARENTPNG, MF_CHECKED * m_fTransPNG);
    }
}
