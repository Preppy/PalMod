#include "stdafx.h"
#include "PalMod.h"
#include "PreviewImport.h"
#include "CImageFiles.h"
#include "RAWfiles.h"
#include "PNGfiles.h"
#include "TextureData.h"
#include "Util.h"

uint8_t BoundPaletteBoxRectSizeValue(uint8_t nVal)
{
    return max(PaletteBox_MinimumRect, min(PaletteBox_MaxmiumRect, nVal));
}

uint16_t BoundPaletteBoxPerLineValue(uint16_t nVal)
{
    return max(PaletteBox_MinimumPerLine, min(PaletteBox_MaxmiumPerLine, nVal));
}

IMPLEMENT_DYNAMIC(CPreviewImportManager, CDialog)

void CPreviewImportManager::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_PREVIEWIMPORT_HWOPTIONS, m_lbDimensionOptions);
    DDX_Control(pDX, IDC_PREVIEWIMPORT_OPTIONS_LAYER, m_lbLayerOptions);
    DDX_Control(pDX, IDC_PREVIEWIMPORT_OPTIONS_READ, m_lbReadOptions);
    DDX_Control(pDX, IDC_PREVIEWIMPORT_OPTIONS_COMPOSITION, m_lbCompositionOptions);
    DDX_Control(pDX, IDC_PREVIEWIMPORT_OPTIONS_MERGE, m_lbMergeOptions);

    DDX_Check(pDX, IDC_PREVIEWIMPORT_ALIGNTOBOTTOM, m_fAlignToBottom);
    DDX_Check(pDX, IDC_PREVIEWIMPORT_AUTOPREVIEW, m_fAutoPreview);
    DDX_Check(pDX, IDC_PREVIEWIMPORT_PALETTEBOXES_DRAW, m_fDrawPaletteBoxes);
    DDX_Check(pDX, IDC_PREVIEWIMPORT_KEEPONSWAP, m_fKeepChangesOnLayerSwap);
    DDX_Check(pDX, IDC_PREVIEWIMPORT_KEEPONFILESWAP, m_fKeepChangesOnFileLoad);
    DDX_Check(pDX, IDC_PREVIEWIMPORT_TRIM, m_fTrim);

    DDX_Text(pDX, IDC_PREVIEWIMPORT_PADDING_WIDTH, m_strPaddingOffsets_Width);
    DDX_Text(pDX, IDC_PREVIEWIMPORT_PADDING_HEIGHT, m_strPaddingOffsets_Height);

    DDX_Text(pDX, IDC_PREVIEWIMPORT_PALETTEBOXES_RECT, m_strPalBoxes_Rect);
    DDX_Text(pDX, IDC_PREVIEWIMPORT_PALETTEBOXES_PERLINE, m_strPalBoxes_PerLine);
    DDX_Text(pDX, IDC_PREVIEWIMPORT_PALETTEBOXES_OFFSET_WIDTH, m_strPalBoxesOffset_Width);
    DDX_Text(pDX, IDC_PREVIEWIMPORT_PALETTEBOXES_OFFSET_HEIGHT, m_strPalBoxesOffset_Height);
}

BEGIN_MESSAGE_MAP(CPreviewImportManager, CDialog)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_HWOPTIONS, &OnUpdateCombobox_HW)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_OPTIONS_LAYER, &OnUpdateCombobox_Layer)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_OPTIONS_READ, &OnUpdateCombobox_Read)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_OPTIONS_COMPOSITION, &OnUpdateCombobox_Composition)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_OPTIONS_MERGE, &OnUpdateCombobox_Merge)

    ON_BN_CLICKED(IDC_PREVIEWIMPORT_ORIGINAL, &LoadAndWorkWithOriginalTextures)
    ON_BN_CLICKED(IDC_PREVIEWIMPORT_FROMFILE, &OnLoadFromFile)
    ON_BN_CLICKED(IDC_PREVIEWIMPORT_PREVIEW, &UpdateDisplayedPreview)

    ON_BN_CLICKED(IDC_PREVIEWIMPORT_ALIGNTOBOTTOM, &OnAlignToBottomCheckChange)
    ON_BN_CLICKED(IDC_PREVIEWIMPORT_AUTOPREVIEW, &OnAutoPreviewCheckChange)
    ON_BN_CLICKED(IDC_PREVIEWIMPORT_TRIM, &OnTrimCheckChange)
    ON_BN_CLICKED(IDC_PREVIEWIMPORT_PALETTEBOXES_DRAW, &OnDrawPalBoxesCheckChange)

    ON_EN_CHANGE(IDC_PREVIEWIMPORT_PADDING_WIDTH, &OnUpdatePaddingValues)
    ON_EN_CHANGE(IDC_PREVIEWIMPORT_PADDING_HEIGHT, &OnUpdatePaddingValues)
        
    ON_EN_CHANGE(IDC_PREVIEWIMPORT_PALETTEBOXES_RECT, &OnUpdatePalBoxesRect)
    ON_EN_CHANGE(IDC_PREVIEWIMPORT_PALETTEBOXES_PERLINE, &OnUpdatePalBoxesPerLine)
    ON_EN_CHANGE(IDC_PREVIEWIMPORT_PALETTEBOXES_OFFSET_WIDTH, &OnUpdatePalBoxesOffsets)
    ON_EN_CHANGE(IDC_PREVIEWIMPORT_PALETTEBOXES_OFFSET_HEIGHT, &OnUpdatePalBoxesOffsets)
    ON_EN_CHANGE(IDC_PREVIEWIMPORT_PALETTEBOXES_RECT, &OnUpdatePalBoxesRect)

    ON_NOTIFY(UDN_DELTAPOS, IDC_PREVIEWIMPORT_PADWIDTH_SPIN, &OnSpinPaddingWidth)
    ON_NOTIFY(UDN_DELTAPOS, IDC_PREVIEWIMPORT_PADHEIGHT_SPIN, &OnSpinPaddingHeight)

    ON_NOTIFY(UDN_DELTAPOS, IDC_PREVIEWIMPORT_PALETTEBOXES_RECT_SPIN, &OnSpinPalBoxesRect)
    ON_NOTIFY(UDN_DELTAPOS, IDC_PREVIEWIMPORT_PALETTEBOXES_PERLINE_SPIN, &OnSpinPalBoxesPerLine)
    ON_NOTIFY(UDN_DELTAPOS, IDC_PREVIEWIMPORT_PALBOXES_WIDTH_SPIN, &OnSpinPalBoxesWidth)
    ON_NOTIFY(UDN_DELTAPOS, IDC_PREVIEWIMPORT_PALBOXES_HEIGHT_SPIN, &OnSpinPalBoxesHeight)
END_MESSAGE_MAP()

CPreviewImportManager::CPreviewImportManager(CWnd* pParent /* = NULL*/)
                    : CDialog(CPreviewImportManager::IDD, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

    m_fAlignToBottom = CRegProc::GetPreviewImport_AlignToBottom(FALSE);
    m_fAutoPreview = CRegProc::GetPreviewImport_AutoPreview(TRUE);
    m_fKeepChangesOnLayerSwap = CRegProc::GetPreviewImport_KeepChangesOnLayerSwap(FALSE);
    m_fKeepChangesOnFileLoad = CRegProc::GetPreviewImport_KeepChangesOnFileLoad(FALSE);
    m_fTrim = CRegProc::GetPreviewImport_Trim(TRUE);

    m_fDrawPaletteBoxes = CRegProc::GetPreviewImport_PalBoxes_Draw(FALSE);
    m_paletteBoxSettings.nRectSize = BoundPaletteBoxRectSizeValue(static_cast<uint8_t>(CRegProc::GetPreviewImport_PalBoxes_Rect(5)));
    m_paletteBoxSettings.nWidthInBoxes = BoundPaletteBoxPerLineValue(static_cast<uint16_t>(CRegProc::GetPreviewImport_PalBoxes_PerLine(16)));

    m_pImgDisp = GetHost()->GetImgDispCtrl();

    m_currTransparencyWriteMode = GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency();
    m_rgrgPaletteSet.resize(m_pImgDisp->GetImgAmt());

    sImgNode** ppImgBuffer = m_pImgDisp->GetImgBuffer();

    for (size_t iLayer = 0; iLayer < m_rgrgPaletteSet.size(); iLayer++)
    {
        m_rgrgPaletteSet.at(iLayer).resize(ppImgBuffer[iLayer]->uPalSz);

        for (size_t iColor = 0; iColor < ppImgBuffer[iLayer]->uPalSz; iColor++)
        {
            m_rgrgPaletteSet.at(iLayer).at(iColor) = ppImgBuffer[iLayer]->pPalette[iColor]; 
        }
    }

    // ensure we have these for slicing
    _CacheOriginalLayout();
}

CPreviewImportManager::~CPreviewImportManager()
{
    CRegProc::SetPreviewImport_AlignToBottom(m_fAlignToBottom);
    CRegProc::SetPreviewImport_AutoPreview(m_fAutoPreview);
    CRegProc::SetPreviewImport_KeepChangesOnLayerSwap(m_fKeepChangesOnLayerSwap);
    CRegProc::SetPreviewImport_KeepChangesOnFileLoad(m_fKeepChangesOnFileLoad);
    CRegProc::SetPreviewImport_Trim(m_fTrim);

    CRegProc::SetPreviewImport_PalBoxes_Draw(m_fDrawPaletteBoxes);
    CRegProc::SetPreviewImport_PalBoxes_PerLine(m_paletteBoxSettings.nWidthInBoxes);
    CRegProc::SetPreviewImport_PalBoxes_Rect(m_paletteBoxSettings.nRectSize);
}

void CPreviewImportManager::_CacheCurrentWindowPos()
{
    if (m_fUIIsUp)
    {
        RECT window_rect;

        GetWindowRect(&window_rect);

        CRegProc::SetPreviewImport_WndPos(window_rect);
    }
}

void CPreviewImportManager::OnCancel()
{
    // ensure our destructor has updated variables to read
    UpdateData();

    if (m_fHaveChangedPreview)
    {
        _ResetDisplayToOriginalTextures();
    }

    _CacheCurrentWindowPos();

    CDialog::OnCancel();
}

void CPreviewImportManager::_UpdateDimensionsOptions()
{
    m_lbDimensionOptions.ResetContent();
    m_rgDimensionOptionsList.clear();
    int nSelectionOption = 0;

    if (!m_rgTextureLoadedFromFile.dimensions.IsEmpty())
    {
        CString strDimensionsText;

        if (m_rgTextureLoadedFromFile.DimensionsAreValid())
        {
            m_rgDimensionOptionsList.push_back(m_rgTextureLoadedFromFile.dimensions);
        }
        else // this should only be accessible from RAWs without correct H/W information
        {
            // Arbitrary assumption that image size should be greater than 25px wide if it's not tiny
            // We'll increment this such that we ensure that the image is not "nUnreasonablyTallImage" tall.
            int nMinimumAcceptableWidth = (m_rgTextureLoadedFromFile.indexedPixels.size() > 250) ? 25 : 1;
            const int nUnreasonablyTallImage = 4096;
            const int nActualFileSize = static_cast<int>(m_rgTextureLoadedFromFile.indexedPixels.size());

            while ((nActualFileSize / nMinimumAcceptableWidth) > nUnreasonablyTallImage)
            {
                nMinimumAcceptableWidth++;
            }

            const int nSizeToCheck = static_cast<int>(ceil(nActualFileSize / static_cast<float>(nMinimumAcceptableWidth)));

            for (int nPossibleWidth = nMinimumAcceptableWidth, nFoundMatches = 0; nPossibleWidth < nSizeToCheck; nPossibleWidth++)
            {
                if (nActualFileSize % nPossibleWidth == 0)
                {
                    const int nFoundHeight = static_cast<int>(nActualFileSize / nPossibleWidth);
                    m_rgDimensionOptionsList.push_back({ nPossibleWidth, nFoundHeight });

                    if ((nSelectionOption == 0) &&
                        ((m_rgTextureLoadedFromFile.dimensions.width == nPossibleWidth) ||
                         (m_rgTextureLoadedFromFile.dimensions.height== nFoundHeight)))
                    {
                        nSelectionOption = static_cast<int>(m_rgDimensionOptionsList.size() - 1);
                    }

                    nFoundMatches++;
                }
            }
        }

        for (size_t iLayoutOptions = 0; iLayoutOptions < m_rgDimensionOptionsList.size(); iLayoutOptions++)
        {
            strDimensionsText.Format(L"%u x %u", m_rgDimensionOptionsList[iLayoutOptions].width, m_rgDimensionOptionsList[iLayoutOptions].height);
            m_lbDimensionOptions.AddString(strDimensionsText);
        }

        m_lbDimensionOptions.SetCurSel(nSelectionOption);
    }
}

int CPreviewImportManager::_GetCurrentLayerSelectionForCListBox()
{
    if (m_optCurrentSel_Layer.has_value())
    {
        if (m_rgrgPaletteSet.size() > 1)
        {
            // offset by leading Full
            return m_optCurrentSel_Layer.value() + 1;
        }
        else
        {
            // we're just showing 0
            return 0;
        }
    }
    else
    {
        // Full
        return 0;
    }
}

std::optional<int> CPreviewImportManager::_GetCurrentLayerSelectionFromUI()
{
    if (m_fUIIsUp)
    {
        UpdateData();

        const int nCurrentLayerSelection = m_lbLayerOptions.GetCurSel();

        if (nCurrentLayerSelection == 0) // Full
        {
            // Full
            m_optCurrentSel_Layer.reset();
        }
        else if (nCurrentLayerSelection != -1) // invalid selection
        {
            // we're offset by Full
            m_optCurrentSel_Layer = (nCurrentLayerSelection - 1);
        }
    }

    return m_optCurrentSel_Layer;
}

// Called from OnInit and on texture load
void CPreviewImportManager::_UpdateInfoText()
{
    if (m_fUIIsUp)
    {
        sImageDimensions dimensionsOfSelectedLayer;
        std::optional<int> optCurrentLayerSelection = _GetCurrentLayerSelectionFromUI();

        const int nCurrentLayerSelection = optCurrentLayerSelection.value_or(0);

        if (nCurrentLayerSelection < static_cast<int>(m_rgWorkingTexturesNoBoxes.size()))
        {
            dimensionsOfSelectedLayer = m_rgWorkingTexturesNoBoxes.at(nCurrentLayerSelection).dimensions;
        }

        CString strInfo;

        if (!dimensionsOfSelectedLayer.IsEmpty())
        {
            strInfo.Format(L"The current preview is %u x %u.  ", dimensionsOfSelectedLayer.width, dimensionsOfSelectedLayer.height);
        }

        if (!m_rgTextureLoadedFromFile.indexedPixels.empty())
        {
            strInfo += L"We should read your new preview as:";
        }

        GetDlgItem(IDC_PREVIEWIMPORT_IMAGEINFO)->SetWindowText(strInfo.GetString());

        GetDlgItem(IDOK)->EnableWindow(!m_rgTextureLoadedFromFile.dimensions.IsEmpty());
        GetDlgItem(IDC_PREVIEWIMPORT_PREVIEW)->EnableWindow(!m_fAutoPreview && !m_rgTextureLoadedFromFile.dimensions.IsEmpty());

        // update dimensions
        _UpdateDimensionsOptions();
    }
}

void CPreviewImportManager::_CacheOriginalLayout()
{
    OutputDebugString(L"CPreviewImportManager::_CacheOriginalLayout: caching original display now.\r\n");

    m_rgOriginalTextures.resize(m_pImgDisp->GetImgAmt());

    for (size_t iTexture = 0; iTexture < m_rgOriginalTextures.size(); iTexture++)
    {
        if (!m_pImgDisp->GetDisplayedTextureForLayer(iTexture, m_rgOriginalTextures[iTexture]))
        {
            // empty layer
            m_rgOriginalTextures.at(iTexture).indexedPixels.clear();
            m_rgOriginalTextures.at(iTexture).dimensions = { 0, 0 };
        }
    }

    m_rgWorkingTexturesNoBoxes = m_rgUserConfirmedTextures = m_rgOriginalTextures;
}

BOOL CPreviewImportManager::OnInitDialog()
{
    CDialog::OnInitDialog();

    m_fUIIsUp = true;
    m_fBusyComposing = true;

    SetIcon(m_hIcon, TRUE);     // Set big icon
    SetIcon(m_hIcon, FALSE);    // Set small icon

    // Import direction options
    m_lbReadOptions.InsertString(0, L"Normal");
    m_lbReadOptions.InsertString(1, L"Flip Vertical");
    m_lbReadOptions.InsertString(2, L"Flip Horizontal");
    m_lbReadOptions.SetCurSel(static_cast<int>(m_importOptions.direction));

    // Merge options
    m_lbMergeOptions.InsertString(0, L"Replace");
    m_lbMergeOptions.InsertString(1, L"Foreground");
    m_lbMergeOptions.InsertString(2, L"Background");
    m_lbMergeOptions.SetCurSel(static_cast<int>(m_importOptions.mergeStyle));

    // Composition options
    m_lbCompositionOptions.InsertString(0, L"Normal");
    m_lbCompositionOptions.InsertString(1, L"Side: Left");
    m_lbCompositionOptions.InsertString(2, L"Side: Right");
    m_lbCompositionOptions.InsertString(3, L"Side: Above");
    m_lbCompositionOptions.InsertString(4, L"Side: Below");
    m_lbCompositionOptions.SetCurSel(static_cast<int>(m_importOptions.compositionStyle));

    const std::optional<int> optCurrentLayerSel = _GetCurrentLayerSelectionFromUI();
    const int nLayerToCheckForDimensions = optCurrentLayerSel.value_or(0);

    // disable composition options if there's no layout there to work with
    if ((nLayerToCheckForDimensions >= static_cast<int>(m_rgUserConfirmedTextures.size())) ||
         m_rgUserConfirmedTextures.at(nLayerToCheckForDimensions).dimensions.IsEmpty())
    {
        // we need to update this as the user changes layers
        m_lbMergeOptions.EnableWindow(FALSE);
        m_lbCompositionOptions.EnableWindow(FALSE);
    }
    else
    {
        m_lbCompositionOptions.EnableWindow(m_importOptions.mergeStyle != SpriteImportMergeStyle::Replace);
    }

    CString strInfo;

    if (!m_rgUserConfirmedTextures.empty())
    {
        int nLayer = 0;

        if (m_rgUserConfirmedTextures.size() > 1)
        {
            m_lbLayerOptions.InsertString(nLayer++, L"All");
        }

        for (size_t iEntry = 0; iEntry < m_rgUserConfirmedTextures.size(); iEntry++)
        {
            strInfo.Format(L"%zu", iEntry);
            m_lbLayerOptions.InsertString(nLayer++, strInfo.GetString());
        }
    }
    else
    {
        m_lbLayerOptions.AddString(L"0");
    }

    m_lbLayerOptions.SetCurSel(_GetCurrentLayerSelectionForCListBox());

    _UpdateInfoText();

    strInfo.Format(L"%i", m_importOptions.offsets.width);
    GetDlgItem(IDC_PREVIEWIMPORT_PADDING_WIDTH)->SetWindowText(strInfo.GetString());
    strInfo.Format(L"%i", m_importOptions.offsets.height);
    GetDlgItem(IDC_PREVIEWIMPORT_PADDING_HEIGHT)->SetWindowText(strInfo.GetString());

    strInfo.Format(L"%i", m_paletteBoxSettings.nRectSize);
    GetDlgItem(IDC_PREVIEWIMPORT_PALETTEBOXES_RECT)->SetWindowText(strInfo.GetString());

    // turn back on now: next message will have us update the preview window
    // this should in theory get us compositing just once.  not that multiple times is 
    // bad, just a little wasteful
    m_fBusyComposing = false;

    strInfo.Format(L"%i", m_paletteBoxSettings.nWidthInBoxes);
    GetDlgItem(IDC_PREVIEWIMPORT_PALETTEBOXES_PERLINE)->SetWindowText(strInfo.GetString());

    GetDlgItem(IDC_PREVIEWIMPORT_KEEPONSWAP)->EnableWindow(m_rgUserConfirmedTextures.size() > 1);

    _SyncEnabledControls();

    RECT window_rect;
    RECT old_window_rect;

    GetWindowRect(&old_window_rect);

    if (CRegProc::GetPreviewImport_WndPos(window_rect, old_window_rect))
    {
        MoveWindow(&window_rect);
    }

    UpdateData(FALSE);

    return TRUE;
}

void CPreviewImportManager::SetTargetLayer(std::optional<int> optTargetLayer)
{
    if (m_fUIIsUp)
    {
        UpdateData();
    }

    m_optCurrentSel_Layer = m_pImgDisp->SanitizeRequestedImageLayer(optTargetLayer);
    m_optPaletteTargetsAreMappingSafe.reset();

    if (m_fUIIsUp)
    {
        m_lbLayerOptions.SetCurSel(_GetCurrentLayerSelectionForCListBox());
        UpdateData(FALSE);
    }
}

bool CPreviewImportManager::LoadCustomSpriteFromPath(LPCWSTR pszPath, PNGImportSpecialOptions importOptions /* = {} */)
{
    CWaitCursor wait; // Show a wait cursor in this scope since this can be a lot of parsing
    GetHost()->GetPalModDlg()->SetStatusText(L"Analyzing this preview...");

    CString strInfo;
    strInfo.Format(L"CPreviewImportManager::LoadCustomSpriteFromPath: importing '%s'.\r\n", pszPath);
    OutputDebugString(strInfo.GetString());

    LPCWSTR pszExt = wcsrchr(pszPath, L'.');

    if (pszExt &&
        ((_wcsicmp(pszExt, L".gif") == 0) ||
         (_wcsicmp(pszExt, L".bmp") == 0)))
    {
        m_textureSourceType = TextureSourceFileType::CImage;
    }
    else if (pszExt && (_wcsicmp(pszExt, L".png") == 0))
    {
        m_textureSourceType = TextureSourceFileType::PNG;
    }
    else
    {
        m_textureSourceType = TextureSourceFileType::RAW;
    }

    // If we have been given a layer value use if valid.
    // If we have not been given a layer value try from filename.
    std::optional<int> optDubiousLayerToUse = GetTargetLayerFromFileName(pszPath);
    std::optional<int> optConfirmedLayerToUse = m_pImgDisp->SanitizeRequestedImageLayer(optDubiousLayerToUse);

    sTextureData newTexture;

    bool fCouldLoadData = false;

    switch (m_textureSourceType)
    {
        default:
        case TextureSourceFileType::PNG:
            fCouldLoadData = LoadTextureFromPNG(pszPath, newTexture, importOptions);
            break;
        case TextureSourceFileType::RAW:
        {
            // Let RAW loading handle the custom sprite overrides as it may or may not need to establish w/h
            bool fHaveConfirmedDimensions = false;

            fCouldLoadData = LoadTextureFromRAWSprite(pszPath, newTexture, fHaveConfirmedDimensions);

            if (!fHaveConfirmedDimensions)
            {
                m_fShouldShowUI = true;
            }
            break;
        }
        case TextureSourceFileType::CImage:
            fCouldLoadData = LoadTextureFromCImageSprite(pszPath, newTexture);
            break;
    }

    if (fCouldLoadData)
    {
        SetTargetLayer(optConfirmedLayerToUse);
        SetTextureToUse(newTexture);

        _UpdateInfoText();
    }
    else
    {
        if (m_textureSourceType == TextureSourceFileType::RAW)
        {
            // RAW has unique restrictions so show them just in case it helps
            if (strInfo.LoadString(IDS_ERROR_TEXTURE_LOAD))
            {
                MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
        else if (m_textureSourceType == TextureSourceFileType::CImage)
        {
            strInfo = L"Failed to load this image.  Animated GIFs are not supported as replacement previews.";
            MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONERROR);
            GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());
            strInfo += "\r\n";
            OutputDebugString(strInfo.GetString());
        }
        else
        {
            MessageBox(L"Error loading preview file.", GetHost()->GetAppName(), MB_ICONERROR);
        }
    }

    return fCouldLoadData;
}

bool CPreviewImportManager::LoadFromFile()
{
    if (m_fUIIsUp)
    {
        UpdateData();
    }

    bool fLoaded = false;

    CFileDialog OpenDialog(TRUE, NULL, NULL, NULL,
                                L"Supported texture files|*-W-*-H-*.*;*.png;*.gif|"     // 0
                                L"RAW Texture file|*-W-*-H-*.*|"                        // 1
                                L"PNG|*.png|"                                           // 2
                                L"GIF|*.gif|"                                           // 3
                                L"Truecolor PNG (read as non-indexed)|*.png|"           // 4
                                L"Indexed PNG (upside-down color table)|*.png|"         // 5
                                L"Indexed PNG (GIMP wrong-offset color table)|*.png|"   // 6
                                L"|");

    OpenDialog.GetOFN().nFilterIndex = CRegProc::GetOFNIndexForLoadCustomSprite();

    if (OpenDialog.DoModal() == IDOK)
    {
        PNGImportSpecialOptions importOptions = { (OpenDialog.GetOFN().nFilterIndex == 5),   // force non-indexed?
                                                  (OpenDialog.GetOFN().nFilterIndex == 6),   // reversed color table?
                                                  (OpenDialog.GetOFN().nFilterIndex != 7) }; // use gimp offset?

        if (m_fKeepChangesOnFileLoad && !m_rgTextureLoadedFromFile.indexedPixels.empty())
        {
            m_rgUserConfirmedTextures = m_rgWorkingTexturesNoBoxes;
        }

        fLoaded = LoadCustomSpriteFromPath(OpenDialog.GetPathName().GetBuffer(), importOptions);

        CRegProc::StoreOFNIndexForLoadCustomSprite(OpenDialog.GetOFN().nFilterIndex);
    }

    return fLoaded;
}

// Handle our Load File button
void CPreviewImportManager::OnLoadFromFile()
{
    if (LoadFromFile() && m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

std::vector<sTextureData> CPreviewImportManager::_GetSlicesFromLoadedTexture()
{
    std::vector<sTextureData> rgLayerSlices;

    if (m_rgTextureLoadedFromFile.dataType == TextureDataType::RGBA)
    {
        OutputDebugString(L"\tslicing as RGB...\r\n");
        GetHost()->GetPalModDlg()->SetStatusText(L"Calculating RGBA->Indexed math based upon loaded palettes...");

        // hard mode.  slice the RGBA preview up based upon palettes
        const ColMode currColMode = GetHost()->GetCurrGame()->GetColorMode();
        const bool fMayBeCPSSource = currColMode == ColMode::COLMODE_RGB444_BE;
        const bool fMightBeKawaksScreenshot = (fMayBeCPSSource || (currColMode == ColMode::COLMODE_RGB666_NEOGEO_CLUT));
        // This is loose but currently true for the games we support
        // Kawaks uses skewed CPS1/2 color math.
        // For NeoGeo Kawaks is using a RGB555 sprite layer
        const bool fUseWinKawaksShiftFirst = fMightBeKawaksScreenshot && CRegProc::GetPreviewImport_WinKawaksFirst(FALSE);

        // This bit is because CPS3 display is rgb777, but some emulators use rgb888 representations.
        const bool fGameIsCPS3 = (currColMode == ColMode::COLMODE_RGB555_LE_CPS3) || (currColMode == ColMode::COLMODE_RGB555_BE_CPS3);
        const bool fUseDifferingCPS3LogicFirst = fGameIsCPS3 && CRegProc::GetPreviewImport_UseFullCPS3(FALSE);
        m_rgbaMathQuirkInUse = RGBAImportMathQuirk::None;

        std::vector<std::vector<COLORREF>> rgrgPaletteSetToUse = m_rgrgPaletteSet;

        if (m_optCurrentSel_Layer.has_value() &&
            (static_cast<size_t>(m_optCurrentSel_Layer.value()) < m_rgrgPaletteSet.size()))
        {
            for (size_t iLayer = 0; iLayer < m_rgrgPaletteSet.size(); iLayer++)
            {
                if (static_cast<size_t>(m_optCurrentSel_Layer.value()) != iLayer)
                {
                    // blank this line
                    rgrgPaletteSetToUse[iLayer].clear();
                }
            }
        }

        if (fUseWinKawaksShiftFirst)
        {
            OutputDebugString(L"CPreviewImportManager::_GetSlicesFromLoadedTexture: RGBA import: Using WinKawaks math for matching to start.\r\n");
            if (currColMode == ColMode::COLMODE_RGB666_NEOGEO_CLUT)
            {
                m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_WinKawaks_NeoGeo;
            }
            else
            {
                m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_WinKawaks_CPS;
            }
        }

        std::vector<std::vector<COLORREF>> rgrgAltCPS3Palettes(rgrgPaletteSetToUse.size());

        if (fGameIsCPS3)
        {
            for (size_t iPalette = 0; iPalette < rgrgPaletteSetToUse.size(); iPalette++)
            {
                rgrgAltCPS3Palettes[iPalette].resize(rgrgPaletteSetToUse[iPalette].size());

                for (size_t iCurColor = 0; iCurColor < rgrgAltCPS3Palettes[iPalette].size(); iCurColor++)
                {
                    const uint16_t rgb555Val = ColorSystem::CONV_32_xRGB1555LE_CPS3(rgrgPaletteSetToUse[iPalette][iCurColor], 0xffff);

                    rgrgAltCPS3Palettes[iPalette][iCurColor] = ColorSystem::CONV_xRGB1555LE_32_NORMAL(rgb555Val);
                }
            }

            if (fUseDifferingCPS3LogicFirst)
            {
                OutputDebugString(L"CPreviewImportManager::_GetSlicesFromLoadedTexture: RGBA import: Using FBNeo quirked math for matching to start.\r\n");
                m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_FBNeo_CPS3;
            }
        }

        rgLayerSlices = m_rgTextureLoadedFromFile.GetSlicesFromRGBA(m_currTransparencyWriteMode, fUseDifferingCPS3LogicFirst ? rgrgAltCPS3Palettes : rgrgPaletteSetToUse, m_rgbaMathQuirkInUse);

        bool fFoundAnyTextureData = false;

        for (size_t iLayer = 0; iLayer < rgLayerSlices.size(); iLayer++)
        {
            fFoundAnyTextureData = fFoundAnyTextureData || rgLayerSlices[iLayer].textureHasColorData;
        }

        if (!fFoundAnyTextureData)
        {
            bool fHaveFurtherOptions = fMayBeCPSSource || fGameIsCPS3;

            if (fHaveFurtherOptions)
            {
                OutputDebugString(L"CPreviewImportManager::_GetSlicesFromLoadedTexture: No color matches found: trying alt logic.\r\n");

                // invert prior quirks
                if (fMayBeCPSSource)
                {
                    if (!fUseWinKawaksShiftFirst)
                    {
                        if (currColMode == ColMode::COLMODE_RGB666_NEOGEO_CLUT)
                        {
                            GetHost()->GetPalModDlg()->SetStatusText(L"No palette matches, trying quirked WinKawaks NeoGeo math...");
                            m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_WinKawaks_NeoGeo;
                        }
                        else
                        {
                            GetHost()->GetPalModDlg()->SetStatusText(L"No palette matches, trying quirked WinKawaks CPS math...");
                            m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_WinKawaks_CPS;
                        }
                    }
                    else if (fMightBeKawaksScreenshot)
                    {
                        GetHost()->GetPalModDlg()->SetStatusText(L"No palette matches, trying normal math...");
                        m_rgbaMathQuirkInUse = RGBAImportMathQuirk::None;
                    }

                    rgLayerSlices = m_rgTextureLoadedFromFile.GetSlicesFromRGBA(m_currTransparencyWriteMode, rgrgPaletteSetToUse, m_rgbaMathQuirkInUse);
                }
                else // if fGameIsCPS3
                {
                    if (!fUseDifferingCPS3LogicFirst)
                    {
                        GetHost()->GetPalModDlg()->SetStatusText(L"No palette matches, trying quirked FBNeo math...");
                        m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_FBNeo_CPS3;
                    }
                    else
                    {
                        GetHost()->GetPalModDlg()->SetStatusText(L"No palette matches, trying normal math...");
                        m_rgbaMathQuirkInUse = RGBAImportMathQuirk::None;
                    }

                    rgLayerSlices = m_rgTextureLoadedFromFile.GetSlicesFromRGBA(m_currTransparencyWriteMode, !fUseDifferingCPS3LogicFirst ? rgrgAltCPS3Palettes : rgrgPaletteSetToUse, m_rgbaMathQuirkInUse);
                }
            }
        }
    }
    else
    {
        OutputDebugString(L"\tslicing as Indexed...\r\n");
        rgLayerSlices = m_rgTextureLoadedFromFile.SliceToLayers(m_rgrgPaletteSet, m_optCurrentSel_Layer);
    }

    return rgLayerSlices;
 }

bool CPreviewImportManager::ImportNow()
{
    bool fShowingNewPreview = false;
    const bool fHaveFileLoaded = m_rgTextureLoadedFromFile.HaveAnyData();

    if (fHaveFileLoaded || LoadFromFile())
    {
        if (m_fShouldShowUI)
        {
            if (DoModal() == IDOK)
            {
                fShowingNewPreview = true;
            }
            else
            {
                GetHost()->GetPalModDlg()->SetStatusText(L"Preview load canceled.");
            }
        }
        else
        {
            fShowingNewPreview = true;
            UpdateDisplayedPreview();
        }
    }
    else
    {
        GetHost()->GetPalModDlg()->SetStatusText(L"Preview load failed.");
    }

    return fShowingNewPreview;
}

bool CPreviewImportManager::_CompositeToDisplay(bool& fHaveAnyPaletteMatches, std::optional<sImageDimensions>& optTrimmedDimensions)
{
    CWaitCursor wait;
    bool fChangesMade = false;

    if (!m_fBusyComposing)
    {
        CString strInfo;
        std::vector<sTextureData> rgTextureSlices;
        sImageDisplayOffsets groundingoffset;

        if (!m_rgTextureLoadedFromFile.dimensions.IsEmpty())
        {
            // If we're loading a custom user image
            if (m_fUIIsUp)
            {
                _ResetToWorkingTextures();

                UpdateData();

                const int nDimensionSelect = m_lbDimensionOptions.GetCurSel();

                if ((nDimensionSelect != -1) &&
                    (nDimensionSelect < static_cast<int>(m_rgDimensionOptionsList.size())))
                {
                    m_rgTextureLoadedFromFile.dimensions = m_rgDimensionOptionsList[nDimensionSelect];
                }
            }

            // if we have a texture list and it's not valid, reset
            if (m_optCurrentSel_Layer.has_value() &&
                (static_cast<int>(m_rgUserConfirmedTextures.size()) <= m_optCurrentSel_Layer.value()))
            {
                // full stack replacement
                m_optCurrentSel_Layer.reset();
            }

            // get our slices
            strInfo.Format(L"CPreviewImportManager::_CompositeToDisplay: slicing that to %zu layers...\r\n", m_rgrgPaletteSet.size());
            OutputDebugString(strInfo.GetString());
            // We only need to re-slice on new file load or changing to different layer target
            if (m_rgLoadedIndexedTextureSlices.empty())
            {
                m_rgLoadedIndexedTextureSlices = _GetSlicesFromLoadedTexture();
            }

            rgTextureSlices = m_rgLoadedIndexedTextureSlices;
        }
        else
        {
            // use original slices
            OutputDebugString(L"CPreviewImportManager::_CompositeToDisplay: using original composition.\r\n");
            rgTextureSlices = m_rgOriginalTextures;
        }

        // handle all the config options if any
        if (rgTextureSlices.size())
        {
            // trim by image
            if (m_fTrim)
            {
                const RECT nOriginalRect = { 0, 0, rgTextureSlices.at(0).dimensions.width, rgTextureSlices.at(0).dimensions.height };
                RECT nUsedRect = { rgTextureSlices.at(0).dimensions.width, rgTextureSlices.at(0).dimensions.height, 0, 0 };
                sImageDimensions oldDimensions = rgTextureSlices.at(0).dimensions;

                for (size_t iLayer = 0; iLayer < rgTextureSlices.size(); iLayer++)
                {
                    RECT nUsedRectThisLayer = rgTextureSlices.at(iLayer).GetUsedRect();

                    if (nUsedRectThisLayer.right && nUsedRectThisLayer.bottom)
                    {
                        nUsedRect.left = min(nUsedRect.left, nUsedRectThisLayer.left);
                        nUsedRect.top = min(nUsedRect.top, nUsedRectThisLayer.top);
                        nUsedRect.right = max(nUsedRect.right, nUsedRectThisLayer.right);
                        nUsedRect.bottom = max(nUsedRect.bottom, nUsedRectThisLayer.bottom);
                    }
                }

                if (nUsedRect.right && nUsedRect.bottom &&
                    ((nOriginalRect.left != nUsedRect.left) ||
                     (nOriginalRect.top != nUsedRect.top) ||
                     (nOriginalRect.right != nUsedRect.right) ||
                     (nOriginalRect.bottom != nUsedRect.bottom)))
                {
                    strInfo.Format(L"CPreviewImportManager::_CompositeToDisplay: trimming: source is %u to %u.\r\n", rgTextureSlices.at(0).dimensions.width,
                        rgTextureSlices.at(0).dimensions.height);
                    OutputDebugString(strInfo);

                    for (size_t iLayer = 0; iLayer < rgTextureSlices.size(); iLayer++)
                    {
                        rgTextureSlices.at(iLayer).Clip(nUsedRect);
                    }

                    strInfo.Format(L"CPreviewImportManager::_CompositeToDisplay: trimmed to %u to %u.\r\n", rgTextureSlices.at(0).dimensions.width,
                        rgTextureSlices.at(0).dimensions.height);
                    OutputDebugString(strInfo.GetString());

                    optTrimmedDimensions = rgTextureSlices.at(0).dimensions;
                }
                else
                {
                    OutputDebugString(L"CPreviewImportManager::_CompositeToDisplay: no trimming needed.\r\n");
                }
            }

            for (size_t iLayer = 0; iLayer < rgTextureSlices.size(); iLayer++)
            {
                rgTextureSlices.at(iLayer).FlipIfNeeded(m_importOptions.direction);
            }

            if (m_fAlignToBottom)
            {
                // Figure out what the baseline for this new image set is
                RECT nMaxRect = { 0, 0, 0, 0 };

                for (size_t iLayer = 0; iLayer < rgTextureSlices.size(); iLayer++)
                {
                    RECT usedRect = rgTextureSlices.at(iLayer).GetUsedRect();

                    nMaxRect.bottom = max(nMaxRect.bottom, usedRect.bottom);
                }

                if (nMaxRect.bottom && m_rgUserConfirmedTextures.size())
                {
                    groundingoffset.y = m_rgUserConfirmedTextures[0].dimensions.height - (nMaxRect.bottom + 1);
                }
            }
        }

        // merge slices if needed
        if (m_importOptions.mergeStyle != SpriteImportMergeStyle::Replace)
        {
            sTextureData emptyMatchingTexture = rgTextureSlices[0];
            emptyMatchingTexture.indexedPixels.clear();
            emptyMatchingTexture.indexedPixels.resize(rgTextureSlices[0].indexedPixels.size());

            for (size_t iLayer = 0; (iLayer < rgTextureSlices.size()) && (iLayer < m_rgUserConfirmedTextures.size()); iLayer++)
            {
                sTextureData* pTextureToUse = &emptyMatchingTexture;

                if (m_optCurrentSel_Layer.value_or(static_cast<int>(iLayer)) == static_cast<int>(iLayer))
                {
                    pTextureToUse = &rgTextureSlices.at(iLayer);
                }

                if (pTextureToUse->indexedPixels.size())
                {
                    sTextureData* pBackgroundTexture = nullptr;
                    // we want to be careful since foreground will get modified
                    sTextureData* pForegroundTexture = nullptr;
                    sTextureData tempForegroundIfNeeded;
                    int nLeftShiftNeeded = 0, nRightShiftNeeded = 0, nTopShiftNeeded = 0, nBottomShiftNeeded = 0;

                    switch (m_importOptions.mergeStyle)
                    {
                        case SpriteImportMergeStyle::MergeBelow:
                        default:
                            pBackgroundTexture = &m_rgUserConfirmedTextures[iLayer];
                            pForegroundTexture = pTextureToUse;

                            nLeftShiftNeeded = pTextureToUse->dimensions.width;
                            nRightShiftNeeded = -m_rgUserConfirmedTextures[iLayer].dimensions.width;
                            nTopShiftNeeded = pTextureToUse->dimensions.height;
                            nBottomShiftNeeded = -m_rgUserConfirmedTextures[iLayer].dimensions.height; // background below trim / align is wrong

                            // reverse the logic since we're reversing layering
                            groundingoffset.y = (groundingoffset.y * -1);

                            break;
                        case SpriteImportMergeStyle::MergeAbove:
                            pBackgroundTexture = pTextureToUse;
                            tempForegroundIfNeeded = m_rgUserConfirmedTextures[iLayer];
                            pForegroundTexture = &tempForegroundIfNeeded;

                            nLeftShiftNeeded = -pTextureToUse->dimensions.width;
                            nRightShiftNeeded = m_rgUserConfirmedTextures[iLayer].dimensions.width;
                            nTopShiftNeeded = -pTextureToUse->dimensions.height; /// this is wrong due to trim?
                            nBottomShiftNeeded = m_rgUserConfirmedTextures[iLayer].dimensions.height;
                            break;
                    }

                    switch (m_importOptions.compositionStyle)
                    {
                        // we default to always merge Above for anything other than merge below.  it might be useful
                        case SpriteImportCompositionStyle::Center:
                            pForegroundTexture->Merge(*pBackgroundTexture, { -m_importOptions.offsets.width, -m_importOptions.offsets.height + groundingoffset.y });
                            rgTextureSlices.at(iLayer) = *pForegroundTexture;
                            break;
                        case SpriteImportCompositionStyle::FlushLeft:
                            pForegroundTexture->Merge(*pBackgroundTexture, { nLeftShiftNeeded - m_importOptions.offsets.width, -m_importOptions.offsets.height + groundingoffset.y });
                            rgTextureSlices.at(iLayer) = *pForegroundTexture;
                            break;
                        case SpriteImportCompositionStyle::FlushRight:
                            pForegroundTexture->Merge(*pBackgroundTexture, { nRightShiftNeeded + m_importOptions.offsets.width, m_importOptions.offsets.height + groundingoffset.y });
                            rgTextureSlices.at(iLayer) = *pForegroundTexture;
                            break;
                        case SpriteImportCompositionStyle::FlushTop:
                            pForegroundTexture->Merge(*pBackgroundTexture, { -m_importOptions.offsets.width, nTopShiftNeeded - m_importOptions.offsets.height });
                            rgTextureSlices.at(iLayer) = *pForegroundTexture;
                            break;
                        case SpriteImportCompositionStyle::FlushBottom:
                            pForegroundTexture->Merge(*pBackgroundTexture, { m_importOptions.offsets.width, nBottomShiftNeeded + m_importOptions.offsets.height });
                            rgTextureSlices.at(iLayer) = *pForegroundTexture;
                            break;
                        }

                    strInfo.Format(L"\tMerged: accounting for offsets leads to a %u x %u composited image.\r\n", rgTextureSlices.at(iLayer).dimensions.width, rgTextureSlices.at(iLayer).dimensions.height);
                    OutputDebugString(strInfo.GetString());
                }
            }
        }

        std::vector<sTextureData> rgAssembledTextures(m_rgrgPaletteSet.size());

        // blend replacements and existing into the full stack
        sImageDimensions aggregateDimensions = {};

        // assign slots, get max dimensions
        for (size_t iLayer = 0; iLayer < rgAssembledTextures.size(); iLayer++)
        {
            // if we are merging in any capacity we have to replace the full stack.
            // otherwise we can just use the old image
            if ((m_importOptions.mergeStyle != SpriteImportMergeStyle::Replace) ||
                 (m_optCurrentSel_Layer.value_or(static_cast<int>(iLayer)) == static_cast<int>(iLayer)))
            {
                rgAssembledTextures.at(iLayer) = rgTextureSlices.at(iLayer);

                strInfo.Format(L"\tLayer %zu: Using the incoming/custom preview.\r\n", iLayer);
                OutputDebugString(strInfo.GetString());
            }
            else
            {
                rgAssembledTextures.at(iLayer) = m_rgUserConfirmedTextures.at(iLayer);

                strInfo.Format(L"\tLayer %zu: Using the previously loaded preview.\r\n", iLayer);
                OutputDebugString(strInfo.GetString());
            }

            aggregateDimensions.width = max(aggregateDimensions.width, rgAssembledTextures.at(iLayer).dimensions.width);
            aggregateDimensions.height = max(aggregateDimensions.height, rgAssembledTextures.at(iLayer).dimensions.height);
        }

        strInfo.Format(L"CPreviewImportManager::_CompositeToDisplay: aligning dimensions to %u x %u\r\n", aggregateDimensions.width, aggregateDimensions.height);
        OutputDebugString(strInfo.GetString());

        // ensure size alignment
        for (size_t iLayer = 0; iLayer < rgAssembledTextures.size(); iLayer++)
        {
            // There's some interesting wrinkles as regards Merge Left/Above as regards 0,0
            // shifts where we might want to pad the non-target layer.  But if you use
            // the All layer option it does that for you.
            rgAssembledTextures.at(iLayer).Resize(aggregateDimensions);

            if (m_fUIIsUp)
            {
                m_rgWorkingTexturesNoBoxes.at(iLayer) = rgAssembledTextures.at(iLayer);
            }
        }

        if (m_fUIIsUp && m_fDrawPaletteBoxes)
        {
            // note that in this design the palette boxes potentially occlude the desired preview.
            // while we could push it to someplace safe/unused, that potentially changes their target design.
            // so let the user use the Offset options to move it where they want.
            OutputDebugString(L"CPreviewImportManager::_CompositeToDisplay: adding palette boxes...\r\n");
            std::vector<sTextureData> boxTextures = GetPaletteBoxesForPaletteSet(m_rgrgPaletteSet, m_paletteBoxSettings.nWidthInBoxes, m_paletteBoxSettings.nRectSize);

            for (size_t iLayer = 0; iLayer < boxTextures.size(); iLayer++)
            {
                rgAssembledTextures.at(iLayer).Merge(boxTextures.at(iLayer), m_paletteBoxSettings.offsets);
            }
        }

        OutputDebugString(L"CPreviewImportManager::_CompositeToDisplay: updating display...\r\n");

        // apply / composite
        sSpriteImportOptions tweakedInputOptions = m_importOptions;

        for (size_t iLayer = 0; iLayer < rgTextureSlices.size(); iLayer++)
        {
            m_pImgDisp->SetOverrideTextureForLayer(rgAssembledTextures.at(iLayer), static_cast<int>(iLayer));
            fHaveAnyPaletteMatches = fHaveAnyPaletteMatches || rgAssembledTextures.at(iLayer).DoesTextureHaveColorData();
            m_fHaveChangedPreview = true;
            strInfo.Format(L"\tUpdated layer %zu (%u x %u).\r\n", iLayer, rgAssembledTextures.at(iLayer).dimensions.width, rgAssembledTextures.at(iLayer).dimensions.height);
            OutputDebugString(strInfo.GetString());
        }

        // Note we are telling imgdisp to update *everything* since we're touching all layers as part of resizing stack and etc
        m_pImgDisp->UpdatePreviewForExternalSprite(std::nullopt);

        // redraw
        m_pImgDisp->UpdateCtrl();

        fChangesMade = true;
    }

    return fChangesMade;
}

// This is a full revert / delete all changes
void CPreviewImportManager::_ResetDisplayToOriginalTextures()
{
    // If we've loaded a custom file
    if (!m_rgTextureLoadedFromFile.dimensions.IsEmpty() ||
        // or we're making changes to something else such as the original source
        (!m_rgUserConfirmedTextures.empty() &&
         !m_rgUserConfirmedTextures.at(0).dimensions.IsEmpty()))
    {
        // reset all
        for (size_t iLayer = 0; iLayer < m_rgOriginalTextures.size(); iLayer++)
        {
            m_pImgDisp->SetOverrideTextureForLayer(m_rgOriginalTextures[iLayer], static_cast<int>(iLayer));
        }

        // update full stack
        m_pImgDisp->UpdatePreviewForExternalSprite(std::nullopt);

        // redraw
        m_pImgDisp->UpdateCtrl();
    }
}

void CPreviewImportManager::LoadAndWorkWithOriginalTextures()
{
    // update working cache
    m_rgWorkingTexturesNoBoxes = m_rgUserConfirmedTextures = m_rgOriginalTextures;
    m_rgTextureLoadedFromFile.rgbaPixels.clear();
    m_rgTextureLoadedFromFile.indexedPixels.clear();
    m_rgTextureLoadedFromFile.dimensions = {};
    m_rgLoadedIndexedTextureSlices.clear();

    UpdateDisplayedPreview();
}

void CPreviewImportManager::_ResetToWorkingTextures()
{
    OutputDebugString(L"CPreviewImportManager::_ResetToWorkingTextures: Reverting to last known good textures.\r\n");

    for (size_t iLayer = 0; iLayer < m_rgUserConfirmedTextures.size(); iLayer++)
    {
        m_pImgDisp->SetOverrideTextureForLayer(m_rgUserConfirmedTextures[iLayer], static_cast<int>(iLayer));
    }

    // update full stack
    m_pImgDisp->UpdatePreviewForExternalSprite(std::nullopt);
}

void CPreviewImportManager::UpdateDisplayedPreview()
{
    OutputDebugString(L"CPreviewImportManager::UpdateDisplayedPreview: updating display now.\r\n"); 

    CString strInfo;
    bool fHaveAnyPaletteMatches = false;
    std::optional<sImageDimensions> optTrimmedDimensions;
   
    if (_CompositeToDisplay(fHaveAnyPaletteMatches, optTrimmedDimensions))
    {
        // let the user / debugout know
        CString strAddendum;
        CString strDataType;
        CString strFileType;
        CString strLayerTarget;

        switch (m_importOptions.mergeStyle)
        {
            case SpriteImportMergeStyle::Replace:
            default:
                strInfo = L"Loaded ";
                break;
            case SpriteImportMergeStyle::MergeAbove:
            case SpriteImportMergeStyle::MergeBelow:
                strInfo = L"Merged ";
                break;
        }

        if (m_rgTextureLoadedFromFile.dataType == TextureDataType::RGBA)
        {
            strDataType = L"RGB ";
        }

        switch (m_textureSourceType)
        {
            case TextureSourceFileType::CImage:
                strFileType = L"GIF";
                break;
            case TextureSourceFileType::PNG:
                strFileType = L"PNG";
                break;
            case TextureSourceFileType::RAW:
                strFileType = L"RAW";
                break;
        }

        if (m_optCurrentSel_Layer.has_value() && (m_rgrgPaletteSet.size() > 1))
        {
            strLayerTarget.Format(L" to layer %u", m_optCurrentSel_Layer.value());
        }

        strAddendum.Format(L"%u x %u %s%s preview%s.", m_rgTextureLoadedFromFile.dimensions.width, m_rgTextureLoadedFromFile.dimensions.height,
                                                        strDataType.GetString(),
                                                        strFileType.GetString(),
                                                        strLayerTarget.GetString());
        strInfo += strAddendum;

        if (fHaveAnyPaletteMatches)
        {
            switch (m_rgbaMathQuirkInUse)
            {
                case RGBAImportMathQuirk::Quirked_WinKawaks_CPS:
                case RGBAImportMathQuirk::Quirked_WinKawaks_NeoGeo:
                    strInfo += " Using WinKawaks math.";
                    break;
                case RGBAImportMathQuirk::Quirked_FBNeo_CPS3:
                    strInfo += " Using FBNeo math.";
                    break;
            }
        }
        else
        {
            if (m_rgTextureLoadedFromFile.dataType == TextureDataType::RGBA)
            {
                strInfo += "  Palette doesn't match.";
            }
            else
            {
                // This is superawkward, mostly true, and helps provide a slightly better visual cookie
                // so I can track failing usage scenarios
                strInfo += "  Palette doesn't align.";
            }
        }

        if (m_rgTextureLoadedFromFile.dataType == TextureDataType::RGBA)
        {
            PaletteMapErrorDetails mappingErrorDetails;

            bool fHaveNewMappingFailure = false;

            if (!m_optPaletteTargetsAreMappingSafe.has_value())
            {
                m_optPaletteTargetsAreMappingSafe = PaletteSetIsMappingSafe(GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency(),
                                                                            m_rgrgPaletteSet,
                                                                            m_optCurrentSel_Layer,
                                                                            mappingErrorDetails);

                if (!m_optPaletteTargetsAreMappingSafe.value())
                {
                    fHaveNewMappingFailure = true;
                }
            }

            if (!m_optPaletteTargetsAreMappingSafe.value())
            {
                strInfo += "  Use a mapping palette!";

                if (fHaveNewMappingFailure)
                {
                    CString strMistake;

                    if (mappingErrorDetails.nCheckAgainstPalette == 0)
                    {
                        strMistake.Format(L"Please note that the active palette set is not ideal for use as a mapping palette.  This is because it has multiple instances of the same color. "
                            L"That color may originally have intended to be index %u or index %u, but since we lose all that context we can only ever map it as index %u.\n\n"
                            L"To avoid this problem, please use mapping palettes or use indexed image types.", mappingErrorDetails.nCheckColor, mappingErrorDetails.nCheckAgainstColor, mappingErrorDetails.nCheckColor);
                    }
                    else
                    {
                        strMistake.Format(L"Please note that the active palette set is not ideal for use as a mapping palette.  This is because it has multiple instances of the same color. "
                            L"That color may originally have intended to be palette %u index %u or palette %u index %u, but since we lose all that context we can only ever map it as palette %u index %u.\n\n"
                            L"To avoid this problem, please use mapping palettes or use indexed image types.", mappingErrorDetails.nStartCheckPalette, mappingErrorDetails.nCheckColor, mappingErrorDetails.nCheckAgainstPalette, mappingErrorDetails.nCheckAgainstColor, mappingErrorDetails.nStartCheckPalette, mappingErrorDetails.nCheckColor);
                    }

                    SafeSHMessageBoxCheck(g_appHWnd, strMistake, GetHost()->GetAppName(), MB_ICONEXCLAMATION | MB_OK, IDOK, L"{11BFAD2C-42CA-40e2-967C-1017C1B2676A}");
                }
            }
        }

        if (optTrimmedDimensions.has_value())
        {
            strAddendum.Format(L"  Trimmed to %u x %u.", optTrimmedDimensions.value().width, optTrimmedDimensions.value().height);
            strInfo += strAddendum;
        }

        GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());

        strInfo += "\r\n";
        OutputDebugString(strInfo.GetString());
    }
}

void CPreviewImportManager::OnUpdateCombobox_HW()
{
    UpdateData();

    m_nCurrentSel_Dimensions = m_lbDimensionOptions.GetCurSel();

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnUpdateCombobox_Layer()
{
    UpdateData();
    // we can skip redoing RGBA->Indexed math if our starting point remains 0.
    // if not, we need to redo the math because we let layers occlude later layers
    const bool fWasTargetingZeroBased = !m_optCurrentSel_Layer.has_value() || m_optCurrentSel_Layer.value() == 0;

    if (m_fKeepChangesOnLayerSwap && !m_rgTextureLoadedFromFile.indexedPixels.empty())
    {
        // save the previous layer writes
        for (size_t iLayer = 0; iLayer < m_rgWorkingTexturesNoBoxes.size(); iLayer++)
        {
            if (m_optCurrentSel_Layer.value_or(static_cast<int>(iLayer)) == static_cast<int>(iLayer))
            {
                m_rgUserConfirmedTextures.at(iLayer) = m_rgWorkingTexturesNoBoxes.at(iLayer);
            }
        }
    }

    int nCurSel = m_lbLayerOptions.GetCurSel();

    switch (nCurSel)
    {
        case -1: // invalid selection, default to full stack
        case 0: // always full stack
            // we can analyze off of first selection
            nCurSel = 0;
            m_optCurrentSel_Layer.reset();
            break;
        default:
            nCurSel = nCurSel - 1;
            m_optCurrentSel_Layer = static_cast<int>(nCurSel);
            break;
    }

    const bool fCanKeepRGBAMath = fWasTargetingZeroBased && (nCurSel == 0);

    if (!m_rgUserConfirmedTextures.at(nCurSel).dimensions.IsEmpty())
    {
        m_lbMergeOptions.EnableWindow(TRUE);
        m_lbCompositionOptions.EnableWindow(m_importOptions.mergeStyle != SpriteImportMergeStyle::Replace);
    }
    else
    {
        m_lbMergeOptions.EnableWindow(FALSE);
        m_lbCompositionOptions.EnableWindow(FALSE);
        m_lbCompositionOptions.SetCurSel(0);
    }

    // reset our 'is palette mapping safe check' if useful
    m_optPaletteTargetsAreMappingSafe.reset();

    if (!fCanKeepRGBAMath)
    {
        // reset our rgba->indexed translations if any
        m_rgLoadedIndexedTextureSlices.clear();
    }

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnUpdateCombobox_Read()
{
    UpdateData();

    m_importOptions.direction = static_cast<SpriteImportDirection>(m_lbReadOptions.GetCurSel());

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnUpdateCombobox_Composition()
{
    UpdateData();

    m_importOptions.compositionStyle = static_cast<SpriteImportCompositionStyle>(m_lbCompositionOptions.GetCurSel());

    _SyncEnabledControls();

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnUpdateCombobox_Merge()
{
    UpdateData();

    m_importOptions.mergeStyle = static_cast<SpriteImportMergeStyle>(m_lbMergeOptions.GetCurSel());

    m_lbCompositionOptions.EnableWindow(m_importOptions.mergeStyle != SpriteImportMergeStyle::Replace);

    _SyncEnabledControls();

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnTrimCheckChange()
{
    UpdateData();

    CRegProc::SetPreviewImport_Trim(m_fTrim);

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::_SyncEnabledControls()
{
    const BOOL fCanGroundImage = (m_importOptions.mergeStyle != SpriteImportMergeStyle::Replace) &&
        (m_importOptions.compositionStyle != SpriteImportCompositionStyle::FlushTop) &&
        (m_importOptions.compositionStyle != SpriteImportCompositionStyle::FlushBottom);

    GetDlgItem(IDC_PREVIEWIMPORT_ALIGNTOBOTTOM)->EnableWindow(fCanGroundImage);

    const BOOL fShouldAllowPadding = (m_importOptions.mergeStyle != SpriteImportMergeStyle::Replace);

    GetDlgItem(IDC_PREVIEWIMPORT_PADDING_WIDTH)->EnableWindow(fShouldAllowPadding);
    GetDlgItem(IDC_PREVIEWIMPORT_PADDING_HEIGHT)->EnableWindow(fShouldAllowPadding);

    GetDlgItem(IDC_PREVIEWIMPORT_PALETTEBOXES_RECT)->EnableWindow(m_fDrawPaletteBoxes);
    GetDlgItem(IDC_PREVIEWIMPORT_PALETTEBOXES_PERLINE)->EnableWindow(m_fDrawPaletteBoxes);
    GetDlgItem(IDC_PREVIEWIMPORT_PALETTEBOXES_OFFSET_WIDTH)->EnableWindow(m_fDrawPaletteBoxes);
    GetDlgItem(IDC_PREVIEWIMPORT_PALETTEBOXES_OFFSET_HEIGHT)->EnableWindow(m_fDrawPaletteBoxes);
    GetDlgItem(IDC_PREVIEWIMPORT_PALBOXES_WIDTH_SPIN)->EnableWindow(m_fDrawPaletteBoxes);
    GetDlgItem(IDC_PREVIEWIMPORT_PALBOXES_HEIGHT_SPIN)->EnableWindow(m_fDrawPaletteBoxes);
}

void CPreviewImportManager::OnDrawPalBoxesCheckChange()
{
    UpdateData();

    CRegProc::SetPreviewImport_PalBoxes_Draw(m_fDrawPaletteBoxes);

    _SyncEnabledControls();

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnAlignToBottomCheckChange()
{
    UpdateData();

    CRegProc::SetPreviewImport_AlignToBottom(m_fAlignToBottom);

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnAutoPreviewCheckChange()
{
    UpdateData();
    
    GetDlgItem(IDC_PREVIEWIMPORT_KEEPONSWAP)->EnableWindow(!m_fAutoPreview);
    GetDlgItem(IDC_PREVIEWIMPORT_PREVIEW)->EnableWindow(!m_fAutoPreview);

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnUpdatePaddingValues()
{
    UpdateData();

    m_importOptions.offsets.width = max(-1000, min(1000, _wtoi(m_strPaddingOffsets_Width.GetString())));
    m_importOptions.offsets.height = max(-1000, min(1000, _wtoi(m_strPaddingOffsets_Height.GetString())));

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnSpinPaddingWidth(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    *pResult = 0;

    UpdateData();

    // Adjust by amount, but correct the orientation
    // Handle the conversion
    const int nCurrentStep = (-1 * pNMUpDown->iDelta);
    m_importOptions.offsets.width = max(-1000, min(1000, m_importOptions.offsets.width + nCurrentStep));

    m_strPaddingOffsets_Width.Format(L"%i", m_importOptions.offsets.width);

    UpdateData(FALSE);

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnSpinPaddingHeight(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    *pResult = 0;

    UpdateData();

    // Adjust by amount, but correct the orientation
    // Handle the conversion
    const int nCurrentStep = (-1 * pNMUpDown->iDelta);
    m_importOptions.offsets.height = max(-1000, min(1000, m_importOptions.offsets.height + nCurrentStep));

    m_strPaddingOffsets_Height.Format(L"%i", m_importOptions.offsets.height);

    UpdateData(FALSE);

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnUpdatePalBoxesOffsets()
{
    UpdateData();

    m_paletteBoxSettings.offsets.x = max(-1000, min(1000, _wtoi(m_strPalBoxesOffset_Width.GetString())));
    m_paletteBoxSettings.offsets.y = max(-1000, min(1000, _wtoi(m_strPalBoxesOffset_Height.GetString())));

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnSpinPalBoxesWidth(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    *pResult = 0;

    UpdateData();

    // Adjust by amount, but correct the orientation
    // Handle the conversion
    const int nCurrentStep = (-1 * pNMUpDown->iDelta);
    m_paletteBoxSettings.offsets.x = max(-1000, min(1000, m_paletteBoxSettings.offsets.x + nCurrentStep));

    m_strPalBoxesOffset_Width.Format(L"%i", m_paletteBoxSettings.offsets.x);

    UpdateData(FALSE);

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnSpinPalBoxesHeight(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    *pResult = 0;

    UpdateData();

    // Adjust by amount, but correct the orientation
    // Handle the conversion
    const int nCurrentStep = (-1 * pNMUpDown->iDelta);
    m_paletteBoxSettings.offsets.y = max(-1000, min(1000, m_paletteBoxSettings.offsets.y + nCurrentStep));

    m_strPalBoxesOffset_Height.Format(L"%i", m_paletteBoxSettings.offsets.y);

    UpdateData(FALSE);

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnUpdatePalBoxesRect()
{
    UpdateData();

    m_paletteBoxSettings.nRectSize = BoundPaletteBoxRectSizeValue(static_cast<uint8_t>(_wtoi(m_strPalBoxes_Rect.GetString())));

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnSpinPalBoxesRect(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    *pResult = 0;

    UpdateData();

    // Adjust by amount, but correct the orientation
    // Handle the conversion
    const int nCurrentStep = (-1 * pNMUpDown->iDelta);
    m_paletteBoxSettings.nRectSize = BoundPaletteBoxRectSizeValue(static_cast<uint8_t>(m_paletteBoxSettings.nRectSize + nCurrentStep));

    m_strPalBoxes_Rect.Format(L"%i", m_paletteBoxSettings.nRectSize);

    UpdateData(FALSE);

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnUpdatePalBoxesPerLine()
{
    UpdateData();

    m_paletteBoxSettings.nWidthInBoxes = BoundPaletteBoxPerLineValue(static_cast<uint16_t>(_wtoi(m_strPalBoxes_PerLine.GetString())));

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnSpinPalBoxesPerLine(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    *pResult = 0;

    UpdateData();

    // Adjust by amount, but correct the orientation
    // Handle the conversion
    const int nCurrentStep = (-1 * pNMUpDown->iDelta);
    m_paletteBoxSettings.nWidthInBoxes = BoundPaletteBoxPerLineValue(static_cast<uint16_t>(m_paletteBoxSettings.nWidthInBoxes + nCurrentStep));

    m_strPalBoxes_PerLine.Format(L"%i", m_paletteBoxSettings.nWidthInBoxes);

    UpdateData(FALSE);

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnOK()
{
    if (m_importOptions.mergeStyle != SpriteImportMergeStyle::Replace)
    {
        CString strInfo;

        GetDlgItemText(IDC_PREVIEWIMPORT_PADDING_WIDTH, strInfo);
        int nOffsetW = _wtol(strInfo.GetString());
        GetDlgItemText(IDC_PREVIEWIMPORT_PADDING_HEIGHT, strInfo);
        int nOffsetH = _wtol(strInfo.GetString());

        // Stop things from getting too degenerate
        if (abs(nOffsetW) > 1000)
        {
            nOffsetW = 0;
        }

        if (abs(nOffsetH) > 1000)
        {
            nOffsetH = 0;
        }

        m_importOptions.offsets = { nOffsetW, nOffsetH };
    }

    UpdateDisplayedPreview();

    _CacheCurrentWindowPos();

    CDialog::OnOK();
}

// called from the drag/drop options
bool PreviewImport::LoadCustomSpriteFromPath(LPCWSTR pszPath, bool fShowAdvancedOptions)
{
    CPreviewImportManager importManager;

    importManager.SetShouldShowUI(fShowAdvancedOptions);

    bool fCouldLoadData = importManager.LoadCustomSpriteFromPath(pszPath);

    if (fCouldLoadData)
    {
        fCouldLoadData = importManager.ImportNow();
    }

    return fCouldLoadData;
}

// run for replacement previews
// this path has to have a targeted layer as we're assigning each image by preview name
bool PreviewImport::LoadExternalPreviewQuietly(TextureSourceFileType allowedType, int nTargetLayer, LPCWSTR pszPath)
{
    bool fLoadedImage = false;
    sTextureData newTexture;

    switch (allowedType)
    {
        case TextureSourceFileType::PNG:
            fLoadedImage = LoadTextureFromPNG(pszPath, newTexture);
            break;
        case TextureSourceFileType::RAW:
        {
            bool fHaveConfirmedDimensions = false;

            fLoadedImage = LoadTextureFromRAWSprite(pszPath, newTexture, fHaveConfirmedDimensions);

            if (!fHaveConfirmedDimensions)
            {
                newTexture.indexedPixels.clear();
            }

            break;
        }
        default:
            break;
    }

    if (!newTexture.indexedPixels.empty())
    {
        CPreviewImportManager importManager;

        importManager.SetTextureSourceType(allowedType);
        importManager.SetTargetLayer(nTargetLayer);
        importManager.SetTextureToUse(newTexture);
        importManager.SetShouldShowUI(false);

        fLoadedImage = importManager.ImportNow();
    }

    return fLoadedImage;
}

// Called from the menu options, allows layer targeting
void PreviewImport::OnLoadCustomSprite(std::optional<int> optSuggestedLayerToLoadTo,
                                        bool fMustShowAdvancedOptions /* = false */)
{
    CPreviewImportManager importManager(GetHost()->GetPreviewDlg());

    importManager.SetTargetLayer(optSuggestedLayerToLoadTo);
    importManager.SetShouldShowUI(fMustShowAdvancedOptions);

    importManager.ImportNow();
}
