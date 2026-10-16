#include "PalTool.h"

class CPaletteImport
{
public:
    static bool PaletteIsLikelyUpsideDown(std::vector<uint8_t> rgbaPalette);
    static void ReversePalette(std::vector<uint8_t>& rgbaPalette);

    enum class PalWrapType
    {
        Normal,
        ShiftHorizontal,
        ShiftByRow,
    };

    static void ShiftPalette(std::vector<uint8_t>& rgbaPalette, int16_t nShiftLength, PalWrapType wrapType = PalWrapType::Normal);

    static bool GetPaletteFromIndexedPNG(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromTrueColorPNG(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);

    // Generic palette types: game-specific types have their own import code over in PalModDlg.h
    static bool GetPaletteFromACT(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromBMP(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromGIF(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromGPL(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromPAL_RIFF(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromPNG(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);

    static uint16_t ApplyPaletteToTarget(std::vector<uint8_t> rgbaPalette, uint32_t nTargetPalette, BOOL fLoopToFill);
    static uint16_t ApplyPalette(std::vector<uint8_t> rgbaPalette, BOOL fLoopToFill);

    enum class PalFileType
    {
        // if you add a new palette type here, please update the CPalDropTarget support in DropTarget.cpp

        ACT,
        BMP,
        //CFPL,
        //HPAL,
        //IMPL,
        GPL,
        GIF,
        PAL_RIFF,
        PNG,
        //PRPL,
        //SF3OETXT_PS3,
        
        // if you add a new palette type here, please update the CPalDropTarget support in DropTarget.cpp
    };

    static bool LoadPalette(PalFileType palFileType, LPCWSTR pszFileName, bool fShowAdvancedOptions = false, bool fForceReadUpsideDown = false, bool fGIMPOffsetByOne = false);
};

class CPaletteImportDialog : public CDialog
{
    DECLARE_DYNAMIC(CPaletteImportDialog)

public:
    CPaletteImportDialog(std::vector<uint8_t> rgPalette, CWnd* pParent = nullptr);
    ~CPaletteImportDialog();

    BOOL OnInitDialog();
    void OnOK();
    void OnCancel();

    enum { IDD = IDD_PALETTEIMPORT };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);

    // ONLOADFILE

    CScrollBar m_ScrollLeftRight;
    CScrollBar m_ScrollUpDown;

    CListBox m_lbTargetLayer;

    CPalTool m_PalHost;
    COLORREF m_rgColorArray[256] = {};

    afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
    afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
    afx_msg void OnUpdateLayerTarget();
    afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);

    void OnApplyPalette();
    void OnPreviewPalette();
    void OnReversePalette();
    void OnRevertPalette();
    
    void LoadFromFile();
    void UseMapping();
    void Favorites();

    // initialized in constructor
    BOOL m_fAutoPreview;
    BOOL m_fWrapToNext;
    BOOL m_fRepeatToFill;
    BOOL m_fScrollByColumn;
    BOOL m_fKeepChangesOnLayerSwap;

    // This can change based upon linewrap handling
    int16_t m_nCurrentHorizontalBounds = 16;
    // This changes based upon palette size
    int16_t m_nCurrentVerticalBounds = 16;

    DECLARE_MESSAGE_MAP()

private:
    // The palette from before we started here
    std::vector<std::vector<uint8_t>> m_rgrgOriginalPalettes;
    // Either passed to us OR loaded from file
    std::vector<uint8_t> m_rgLoadedPalette;
    std::vector<uint8_t> m_rgMappingPalette;
    // Our temp palette that the user works with
    std::vector<uint8_t> m_rgWorkingPalette;

    std::vector<bool> m_rgfMadeChanges;

    CString strPaletteName = L"Loaded Palette";

    void _ResetPreview();
    bool _MadeAnyChanges();
    void _UpdateAllowVerticalScrolling(bool fAllow);

    bool m_fAllowingVerticalScrolling = true;

};
