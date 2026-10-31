#include "stdafx.h"
#include "PalMod.h"
#include "PreviewImport.h"
#include "CImageFiles.h"
#include "RAWfiles.h"
#include "PNGfiles.h"
#include "TextureData.h"
#include "Util.h"

IMPLEMENT_DYNAMIC(CPreviewImportManager, CDialog)

void CPreviewImportManager::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_PREVIEWIMPORT_HWOPTIONS, m_lbHWOptions);
    DDX_Control(pDX, IDC_PREVIEWIMPORT_OPTIONS_LAYER, m_lbLayerOptions);
    DDX_Control(pDX, IDC_PREVIEWIMPORT_OPTIONS_READ, m_lbReadOptions);
    DDX_Control(pDX, IDC_PREVIEWIMPORT_OPTIONS_COMPOSITION, m_lbCompositionOptions);

    DDX_Check(pDX, IDC_PREVIEWIMPORT_AUTOPREVIEW, m_fAutoPreview);
    DDX_Check(pDX, IDC_PREVIEWIMPORT_KEEPONSWAP, m_fKeepChangesOnLayerSwap);
    DDX_Check(pDX, IDC_PREVIEWIMPORT_KEEPONFILESWAP, m_fKeepChangesOnFileLoad);
    DDX_Check(pDX, IDC_PREVIEWIMPORT_TRIM, m_fTrim);

    DDX_Text(pDX, IDC_PREVIEWIMPORT_PADDING_WIDTH, m_strTrimWidth);
    DDX_Text(pDX, IDC_PREVIEWIMPORT_PADDING_HEIGHT, m_strTrimHeight);
}

BEGIN_MESSAGE_MAP(CPreviewImportManager, CDialog)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_HWOPTIONS, &OnUpdateCombobox_HW)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_OPTIONS_LAYER, &OnUpdateCombobox_Layer)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_OPTIONS_READ, &OnUpdateCombobox_Read)
    ON_LBN_SELCHANGE(IDC_PREVIEWIMPORT_OPTIONS_COMPOSITION, &OnUpdateCombobox_Composition)

    ON_BN_CLICKED(IDC_PREVIEWIMPORT_ORIGINAL, &ShowOriginal)
    ON_BN_CLICKED(IDC_PREVIEWIMPORT_FROMFILE, &OnLoadFromFile)
    ON_BN_CLICKED(IDC_PREVIEWIMPORT_PREVIEW, &UpdateDisplayedPreview)

    ON_BN_CLICKED(IDC_PREVIEWIMPORT_AUTOPREVIEW, &OnAutoPreviewCheckChange)
    ON_BN_CLICKED(IDC_PREVIEWIMPORT_TRIM, &OnTrimCheckChange)

    ON_EN_CHANGE(IDC_PREVIEWIMPORT_PADDING_WIDTH, &OnUpdatePaddingValues)
    ON_EN_CHANGE(IDC_PREVIEWIMPORT_PADDING_HEIGHT, &OnUpdatePaddingValues)

    ON_NOTIFY(UDN_DELTAPOS, IDC_PREVIEWIMPORT_PADWIDTH_SPIN, &OnSpinPaddingWidth)
    ON_NOTIFY(UDN_DELTAPOS, IDC_PREVIEWIMPORT_PADHEIGHT_SPIN, &OnSpinPaddingHeight)
END_MESSAGE_MAP()

CPreviewImportManager::CPreviewImportManager(CWnd* pParent /* = NULL*/)
                    : CDialog(CPreviewImportManager::IDD, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

    m_fAutoPreview = CRegProc::GetPreviewImport_AutoPreview(TRUE);
    m_fKeepChangesOnLayerSwap = CRegProc::GetPreviewImport_KeepChangesOnLayerSwap(FALSE);
    m_fKeepChangesOnFileLoad = CRegProc::GetPreviewImport_KeepChangesOnFileLoad(FALSE);
    m_fTrim = CRegProc::GetPreviewImport_Trim(TRUE);

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
    _CacheCurrentlyDisplayedLayout();
}

CPreviewImportManager::~CPreviewImportManager()
{
     CRegProc::SetPreviewImport_AutoPreview(m_fAutoPreview);
     CRegProc::SetPreviewImport_KeepChangesOnLayerSwap(m_fKeepChangesOnLayerSwap);
     CRegProc::SetPreviewImport_KeepChangesOnFileLoad(m_fKeepChangesOnFileLoad);
     CRegProc::SetPreviewImport_Trim(m_fTrim);
}

void CPreviewImportManager::OnCancel()
{
    // ensure our destructor has updated variables to read
    UpdateData();

    if (m_fHaveChangedPreview)
    {
        ShowOriginal();
    }

    CDialog::OnCancel();
}

void CPreviewImportManager::_UpdateDimensionsOptions()
{
    m_lbHWOptions.ResetContent();
    m_rgHWOptionsList.clear();
    int nSelectionOption = 0;

    if (!m_rgTextureLoadedFromFile.dimensions.IsEmpty())
    {
        CString strDimensionsText;

        if (m_rgTextureLoadedFromFile.dimensions.GetPixelCount() == static_cast<int>(m_rgTextureLoadedFromFile.indexedPixels.size()))
        {
            m_rgHWOptionsList.push_back(m_rgTextureLoadedFromFile.dimensions);
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
                    m_rgHWOptionsList.push_back({ nPossibleWidth, nFoundHeight });

                    if ((nSelectionOption == 0) &&
                        ((m_rgTextureLoadedFromFile.dimensions.width == nPossibleWidth) ||
                         (m_rgTextureLoadedFromFile.dimensions.height== nFoundHeight)))
                    {
                        nSelectionOption = static_cast<int>(m_rgHWOptionsList.size() - 1);
                    }

                    nFoundMatches++;
                }
            }
        }

        for (size_t iLayoutOptions = 0; iLayoutOptions < m_rgHWOptionsList.size(); iLayoutOptions++)
        {
            strDimensionsText.Format(L"%u x %u", m_rgHWOptionsList[iLayoutOptions].width, m_rgHWOptionsList[iLayoutOptions].height);
            m_lbHWOptions.AddString(strDimensionsText);
        }

        m_lbHWOptions.SetCurSel(nSelectionOption);
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

        if (nCurrentLayerSelection < static_cast<int>(m_rgWorkingTextures.size()))
        {
            dimensionsOfSelectedLayer = m_rgWorkingTextures.at(nCurrentLayerSelection).dimensions;
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

void CPreviewImportManager::_CacheCurrentlyDisplayedLayout()
{
    OutputDebugString(L"CPreviewImportManager::_CacheCurrentlyDisplayedLayout: caching current display now.\r\n");

    m_rgWorkingTextures.resize(m_pImgDisp->GetImgAmt());

    for (size_t iTexture = 0; iTexture < m_rgWorkingTextures.size(); iTexture++)
    {
        if (!m_pImgDisp->GetDisplayedTextureForLayer(iTexture, m_rgWorkingTextures[iTexture]))
        {
            // empty layer
            m_rgWorkingTextures.at(iTexture).indexedPixels.clear();
            m_rgWorkingTextures.at(iTexture).dimensions = { 0, 0 };
        }
    }

    if (m_rgOriginalTextures.empty())
    {
        m_rgOriginalTextures = m_rgWorkingTextures;
    }
}

BOOL CPreviewImportManager::OnInitDialog()
{
    CDialog::OnInitDialog();

    m_fUIIsUp = true;

    SetIcon(m_hIcon, TRUE);     // Set big icon
    SetIcon(m_hIcon, FALSE);    // Set small icon

    // Import direction options
    m_lbReadOptions.InsertString(0, L"Normal");
    m_lbReadOptions.InsertString(1, L"Flip Vertical");
    m_lbReadOptions.InsertString(2, L"Flip Horizontal");
    m_lbReadOptions.SetCurSel(static_cast<int>(m_importOptions.direction));

    // Composition options
    m_lbCompositionOptions.InsertString(0, L"Replace");
    m_lbCompositionOptions.InsertString(1, L"Blend (Foreground)");
    m_lbCompositionOptions.InsertString(2, L"Blend (Background)");
    m_lbCompositionOptions.InsertString(3, L"Side: Left");
    m_lbCompositionOptions.InsertString(4, L"Side: Right");
    m_lbCompositionOptions.InsertString(5, L"Side: Above");
    m_lbCompositionOptions.InsertString(6, L"Side: Below");
    m_lbCompositionOptions.SetCurSel(static_cast<int>(m_importOptions.compositionStyle));

    const std::optional<int> optCurrentLayerSel = _GetCurrentLayerSelectionFromUI();
    const int nLayerToCheckForDimensions = optCurrentLayerSel.value_or(0);

    // disable composition options if there's no layout there to work with
    if ((nLayerToCheckForDimensions >= static_cast<int>(m_rgWorkingTextures.size())) ||
         m_rgWorkingTextures.at(nLayerToCheckForDimensions).dimensions.IsEmpty())
    {
        // we need to update this as the user changes layers
        m_lbCompositionOptions.EnableWindow(FALSE);
    }

    CString strInfo;

    if (!m_rgWorkingTextures.empty())
    {
        int nLayer = 0;

        if (m_rgWorkingTextures.size() > 1)
        {
            m_lbLayerOptions.InsertString(nLayer++, L"All");
        }

        for (size_t iEntry = 0; iEntry < m_rgWorkingTextures.size(); iEntry++)
        {
            strInfo.Format(L"%u", iEntry);
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

    GetDlgItem(IDC_PREVIEWIMPORT_KEEPONSWAP)->EnableWindow(m_rgWorkingTextures.size() > 1);

    _UpdatePaddingEnableState();

    UpdateData(FALSE);

    return TRUE;
}

void CPreviewImportManager::SetTargetLayer(std::optional<int> optTargetLayer)
{
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
    std::optional<int> optDubiousLayerToUse = GetDropLayerFromFileName(pszPath);
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
            CString strError;
            if (strError.LoadString(IDS_ERROR_TEXTURE_LOAD))
            {
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
            }
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
            _CacheCurrentlyDisplayedLayout();
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

// this should handle all assignment as it handles math quirks
void CPreviewImportManager::SetTextureToUse(sTextureData newTexture)
{
    m_rgTextureLoadedFromFile = newTexture;

    if (newTexture.dataType == TextureDataType::RGBA)
    {
        const ColMode currColMode = GetHost()->GetCurrGame()->GetColorMode();
        const bool fMayBeCPSSource = currColMode == ColMode::COLMODE_RGB444_BE;
        const bool fMightBeKawaksScreenshot = (fMayBeCPSSource || (currColMode == ColMode::COLMODE_RGB666_NEOGEO));
        // This is loose but currently true for the games we support
        // Kawaks uses skewed CPS1/2 color math.
        // For NeoGeo Kawaks is using a RGB555 sprite layer
        const bool fUseWinKawaksShiftFirst = fMightBeKawaksScreenshot && CRegProc::GetPreviewImport_WinKawaksFirst(FALSE);

        // This bit is because CPS3 display is rgb777, but some emulators use rgb888 representations.
        const bool fGameIsCPS3 = (currColMode == ColMode::COLMODE_RGB555_LE_CPS3);
        const bool fUseDifferingCPS3LogicFirst = fGameIsCPS3 && CRegProc::GetPreviewImport_UseFullCPS3(FALSE);
        m_rgbaMathQuirkInUse = RGBAImportMathQuirk::None;

        if (fUseWinKawaksShiftFirst)
        {
            OutputDebugString(L"CPreviewImportManager::SetTextureToUse: RGBA import: Using WinKawaks math for matching to start.\r\n");
            if (currColMode == ColMode::COLMODE_RGB666_NEOGEO)
            {
                m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_WinKawaks_NeoGeo;
            }
            else
            {
                m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_WinKawaks_CPS;
            }
        }
        
        std::vector<std::vector<COLORREF>> rgrgAltCPS3Palettes(m_rgrgPaletteSet.size());
        
        if (fGameIsCPS3)
        {
            for (size_t iPalette = 0; iPalette < m_rgrgPaletteSet.size(); iPalette++)
            {
                rgrgAltCPS3Palettes[iPalette].resize(m_rgrgPaletteSet[iPalette].size());

                for (size_t iCurColor = 0; iCurColor < rgrgAltCPS3Palettes[iPalette].size(); iCurColor++)
                {
                    const uint16_t rgb555Val = ColorSystem::CONV_32_xRGB1555LE_CPS3(m_rgrgPaletteSet[iPalette][iCurColor], 0xffff);

                    rgrgAltCPS3Palettes[iPalette][iCurColor] = ColorSystem::CONV_xRGB1555LE_32_NORMAL(rgb555Val);
                }
            }

            if (fUseDifferingCPS3LogicFirst)
            {
                OutputDebugString(L"CPreviewImportManager::SetTextureToUse: RGBA import: Using FBNeo quirked math for matching to start.\r\n");
                m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_FBNeo_CPS3;
            }
        }

        m_rgTextureLoadedFromFile.ConvertFromRGBAIfNeeded(m_currTransparencyWriteMode, fUseDifferingCPS3LogicFirst ? rgrgAltCPS3Palettes : m_rgrgPaletteSet, m_rgbaMathQuirkInUse);

        if (!m_rgTextureLoadedFromFile.textureHasColorData)
        {
            bool fHaveFurtherOptions = fMayBeCPSSource || fGameIsCPS3;

            if (fHaveFurtherOptions)
            {
                OutputDebugString(L"CPreviewImportManager::SetTextureToUse: No color matches found: trying alt logic.\r\n");

                // invert prior quirks
                if (fMayBeCPSSource)
                {
                    if (!fUseWinKawaksShiftFirst)
                    {
                        if (currColMode == ColMode::COLMODE_RGB666_NEOGEO)
                        {
                            m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_WinKawaks_NeoGeo;
                        }
                        else
                        {
                            m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_WinKawaks_CPS;
                        }
                    }
                    else if (fMightBeKawaksScreenshot)
                    {
                        m_rgbaMathQuirkInUse = RGBAImportMathQuirk::None;
                    }

                    m_rgTextureLoadedFromFile.ConvertFromRGBAIfNeeded(m_currTransparencyWriteMode, m_rgrgPaletteSet, m_rgbaMathQuirkInUse);

                }
                else // if fGameIsCPS3
                {
                    if (!fUseDifferingCPS3LogicFirst)
                    {
                        m_rgbaMathQuirkInUse = RGBAImportMathQuirk::Quirked_FBNeo_CPS3;
                    }
                    else
                    {
                        m_rgbaMathQuirkInUse = RGBAImportMathQuirk::None;
                    }

                    m_rgTextureLoadedFromFile.ConvertFromRGBAIfNeeded(m_currTransparencyWriteMode, !fUseDifferingCPS3LogicFirst ? rgrgAltCPS3Palettes : m_rgrgPaletteSet, m_rgbaMathQuirkInUse);
                }
            }
        }
    }
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

void CPreviewImportManager::_ResetToOriginalTextures()
{
    // This might be naive
    if (!m_rgTextureLoadedFromFile.dimensions.IsEmpty())
    {
        // reset all
        for (size_t iLayer = 0; iLayer < m_rgOriginalTextures.size(); iLayer++)
        {
            m_pImgDisp->CompositeTexture(m_rgOriginalTextures[iLayer], static_cast<int>(iLayer), {});
        }

        // update full stack
        m_pImgDisp->UpdatePreviewForExternalSprite(std::nullopt);
    }
}

void CPreviewImportManager::_ResetToWorkingTextures()
{
    OutputDebugString(L"CPreviewImportManager::_ResetToWorkingTextures: Reverting to last known good textures.\r\n");

    for (size_t iLayer = 0; iLayer < m_rgWorkingTextures.size(); iLayer++)
    {
        m_pImgDisp->CompositeTexture(m_rgWorkingTextures[iLayer], static_cast<int>(iLayer), {});
    }

    // update full stack
    m_pImgDisp->UpdatePreviewForExternalSprite(std::nullopt);
}

// This is a full revert / delete all changes
void CPreviewImportManager::ShowOriginal()
{
    _ResetToOriginalTextures();
    // redraw
    m_pImgDisp->UpdateCtrl();
}

void CPreviewImportManager::UpdateDisplayedPreview()
{
    OutputDebugString(L"CPreviewImportManager::UpdateDisplayedPreview: updating display now.\r\n");    

    if (!m_rgTextureLoadedFromFile.dimensions.IsEmpty())
    {
        CString strInfo;

        if (m_fUIIsUp)
        {
            _ResetToWorkingTextures();

            UpdateData();

            const int nDimensionSelect = m_lbHWOptions.GetCurSel();

            if ((nDimensionSelect != -1) &&
                (nDimensionSelect < static_cast<int>(m_rgHWOptionsList.size())))
            {
                m_rgTextureLoadedFromFile.dimensions = m_rgHWOptionsList[nDimensionSelect];
            }
        }

        // if we have a texture list and it's not valid, reset
        if (m_optCurrentSel_Layer.has_value() &&
            (static_cast<int>(m_rgWorkingTextures.size()) <= m_optCurrentSel_Layer.value()))
        {
            // full stack replacement
            m_optCurrentSel_Layer.reset();
        }

        // if we're assigning to a layer, we need the other layers to display together
        if (m_optCurrentSel_Layer.has_value() && (m_rgrgPaletteSet.size() > 1))
        {
            _CacheCurrentlyDisplayedLayout();
        }

        bool fHaveAnyPaletteMatches = false;
        bool fHadToTrim = false;

        sTextureData rgEditableWorkingTexture = m_rgTextureLoadedFromFile;

        // trim by image
        if (m_fTrim)
        {
            strInfo.Format(L"CPreviewImportManager::UpdateDisplayedPreview: trimming: source is %u to %u.\r\n", rgEditableWorkingTexture.dimensions.width, 
                                                                                                               rgEditableWorkingTexture.dimensions.height);
            OutputDebugString(strInfo);
            rgEditableWorkingTexture.ClipUnused();

            strInfo.Format(L"CPreviewImportManager::UpdateDisplayedPreview: trimmed to %u to %u.\r\n", rgEditableWorkingTexture.dimensions.width,
                                                                                                      rgEditableWorkingTexture.dimensions.height);
            OutputDebugString(strInfo.GetString());
        }

        // get our slices
        strInfo.Format(L"CPreviewImportManager::UpdateDisplayedPreview: slicing that to %u layers...\r\n", m_rgrgPaletteSet.size());
        OutputDebugString(strInfo.GetString());
        std::vector<sTextureData> rgTextureSlices = rgEditableWorkingTexture.SliceToLayers(m_rgrgPaletteSet, m_optCurrentSel_Layer);

        std::vector<sTextureData> rgAssembledTextures(m_rgrgPaletteSet.size());

        // blend replacements and existing into the full stack
        sImageDimensions aggregateDimensions = {};

        // assign slots, get max dimensions
        for (size_t iLayer = 0; iLayer < rgAssembledTextures.size(); iLayer++)
        {
            if (m_optCurrentSel_Layer.value_or(static_cast<int>(iLayer)) == static_cast<int>(iLayer))
            {
                rgAssembledTextures.at(iLayer) = rgTextureSlices.at(iLayer);

                strInfo.Format(L"\tLayer %u: Using NEW.\r\n", iLayer);
                OutputDebugString(strInfo.GetString());
            }
            else
            {
                rgAssembledTextures.at(iLayer) = m_rgWorkingTextures.at(iLayer);

                strInfo.Format(L"\tLayer %u: Using PREVIOUS.\r\n", iLayer);
                OutputDebugString(strInfo.GetString());
            }

            aggregateDimensions.width = max(aggregateDimensions.width, rgAssembledTextures.at(iLayer).dimensions.width);
            aggregateDimensions.height = max(aggregateDimensions.height, rgAssembledTextures.at(iLayer).dimensions.height);
        }
        
        strInfo.Format(L"CPreviewImportManager::UpdateDisplayedPreview: aligning dimensions to %u x %u\r\n", aggregateDimensions.width, aggregateDimensions.height);
        OutputDebugString(strInfo.GetString());

        // ensure size alignment
        for (size_t iLayer = 0; iLayer < rgAssembledTextures.size(); iLayer++)
        {
            // There's some interesting wrinkles as regards Merge Left/Above as regards 0,0
            // shifts where we might want to pad the non-target layer.  But if you use
            // the All layer option it does that for you.
            rgAssembledTextures.at(iLayer).Resize(aggregateDimensions);
        }

        OutputDebugString(L"CPreviewImportManager::UpdateDisplayedPreview: updating display...\r\n");

        // apply / composite
        sSpriteImportOptions tweakedInputOptions = m_importOptions;

        for (size_t iLayer = 0; iLayer < rgTextureSlices.size(); iLayer++)
        {
            // We might want to optimize to only touch size-changed or texture-changed options
            
            // if we're not touching this layer, just replace with previous, don't remerge with itself
            if (m_optCurrentSel_Layer.has_value() && 
                (m_optCurrentSel_Layer != static_cast<int>(iLayer)))
            {
                tweakedInputOptions.compositionStyle = SpriteImportCompositionStyle::Replace;
            }
            else
            {
                tweakedInputOptions.compositionStyle = m_importOptions.compositionStyle;
            }

            m_pImgDisp->CompositeTexture(rgAssembledTextures.at(iLayer), static_cast<int>(iLayer), tweakedInputOptions);
            fHaveAnyPaletteMatches = fHaveAnyPaletteMatches || rgAssembledTextures.at(iLayer).DoesTextureHaveColorData();
            m_fHaveChangedPreview = true;
            strInfo.Format(L"\tUpdated layer %u (%u x %u).\r\n", iLayer, rgAssembledTextures.at(iLayer).dimensions.width, rgAssembledTextures.at(iLayer).dimensions.height);
            OutputDebugString(strInfo.GetString());
        }

        // tell imgdisp to update its knowledge
        // // We could optimize to only do this for actually changed layers
        //m_pImgDisp->UpdatePreviewForExternalSprite(m_optCurrentSel_Layer);
        m_pImgDisp->UpdatePreviewForExternalSprite(std::nullopt);

        // redraw
        m_pImgDisp->UpdateCtrl();

        // let the user / debugout know
        CString strAddendum;
        CString strDataType;
        CString strFileType;
        CString strLayerTarget;

        switch (m_importOptions.compositionStyle)
        {
            case SpriteImportCompositionStyle::Replace:
            default:
                strInfo = L"Loaded ";
                break;
            case SpriteImportCompositionStyle::MergeAbove:
            case SpriteImportCompositionStyle::MergeBelow:
                strInfo = L"Merged ";
                break;
            case SpriteImportCompositionStyle::FlushLeft:
            case SpriteImportCompositionStyle::FlushRight:
            case SpriteImportCompositionStyle::FlushTop:
            case SpriteImportCompositionStyle::FlushBottom:
                strInfo = L"Joined ";
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

        if (m_optCurrentSel_Layer.has_value())
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
            if (!m_optPaletteTargetsAreMappingSafe.has_value())
            {
                m_optPaletteTargetsAreMappingSafe = PaletteSetIsMappingSafe(GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency(),
                                                                            m_rgrgPaletteSet,
                                                                            m_optCurrentSel_Layer);
            }

            if (!m_optPaletteTargetsAreMappingSafe.value())
            {
                strInfo += "  Use a mapping palette!";
            }

#ifdef OLD_WARNING_STUFF
            // This deprecated code is clearly non-functional at this point.  It was shown from ImgDisp on palette import.
            // It might be worthwhile to resurrect it to help with user confusion
            if (fCurrentPaletteIsNotMappingFriendly)
            {
                CString strMistake;

                if (nCheckAgainstPalette == 0)
                {
                    strMistake.Format(L"Please note that the active palette set is not ideal for use as a mapping palette.  This is because it has multiple instances of the same color. "
                        L"That color may originally have intended to be index %u or index %u, but since we lose all that context we can only ever map it as index %u.\n\n"
                        L"To avoid this problem, please use mapping palettes.", nCheckColor, nCheckAgainstColor, nCheckColor);
                }
                else
                {
                    strMistake.Format(L"Please note that the active palette set is not ideal for use as a mapping palette.  This is because it has multiple instances of the same color. "
                        L"That color may originally have intended to be palette %u index %u or palette %u index %u, but since we lose all that context we can only ever map it as palette %u index %u.\n\n"
                        L"To avoid this problem, please use mapping palettes.", nStartCheckPalette, nCheckColor, nCheckAgainstPalette, nCheckAgainstColor, nStartCheckPalette, nCheckColor);
                }

                SafeSHMessageBoxCheck(g_appHWnd, strMistake, GetHost()->GetAppName(), MB_ICONEXCLAMATION | MB_OK, IDOK, L"{11BFAD2C-42CA-40e2-967C-1017C1B2676A}");
            }
#endif
        }

        if (fHadToTrim)
        {
            strAddendum.Format(L"  Trimmed to %u x %u.", aggregateDimensions.width, aggregateDimensions.height);
            strInfo += strAddendum;
        }

        GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());

        strInfo += "\r\n";
        OutputDebugString(strInfo.GetString());
    }
}

void CPreviewImportManager::_UpdatePaddingEnableState()
{
    UpdateData();

    const BOOL fShouldAllowPadding = (m_importOptions.compositionStyle != SpriteImportCompositionStyle::Replace);

    GetDlgItem(IDC_PREVIEWIMPORT_PADDING_WIDTH)->EnableWindow(fShouldAllowPadding);
    GetDlgItem(IDC_PREVIEWIMPORT_PADDING_HEIGHT)->EnableWindow(fShouldAllowPadding);
}

void CPreviewImportManager::OnUpdateCombobox_HW()
{
    UpdateData();

    m_nCurrentSel_HW = m_lbHWOptions.GetCurSel();

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnUpdateCombobox_Layer()
{
    UpdateData();

    if (m_fKeepChangesOnLayerSwap && !m_rgTextureLoadedFromFile.indexedPixels.empty())
    {
        _CacheCurrentlyDisplayedLayout();
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

    if (!m_rgWorkingTextures.at(nCurSel).dimensions.IsEmpty())
    {
        m_lbCompositionOptions.EnableWindow(TRUE);
    }
    else
    {
        m_lbCompositionOptions.EnableWindow(FALSE);
        m_lbCompositionOptions.SetCurSel(0);
    }

    // reset our 'is palette mapping safe check' if useful
    m_optPaletteTargetsAreMappingSafe.reset();

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

    _UpdatePaddingEnableState();

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

    m_importOptions.offsets.width = max(-1000, min(1000, _wtoi(m_strTrimWidth.GetString())));
    m_importOptions.offsets.height = max(-1000, min(1000, _wtoi(m_strTrimHeight.GetString())));

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

    m_strTrimWidth.Format(L"%i", m_importOptions.offsets.width);

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

    m_strTrimHeight.Format(L"%i", m_importOptions.offsets.height);

    UpdateData(FALSE);

    if (m_fAutoPreview)
    {
        UpdateDisplayedPreview();
    }
}

void CPreviewImportManager::OnOK()
{
    if (m_importOptions.compositionStyle != SpriteImportCompositionStyle::Replace)
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
    CPreviewImportManager importManager;

    importManager.SetTargetLayer(optSuggestedLayerToLoadTo);
    importManager.SetShouldShowUI(fMustShowAdvancedOptions);

    importManager.ImportNow();
}

