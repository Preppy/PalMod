
class CPaletteImport
{
private:
    static bool _PaletteIsLikelyUpsideDown(std::vector<uint8_t> rgbaPalette);
    static void _ReversePalette(std::vector<uint8_t>& rgbaPalette);
    static void _ShiftPalette(std::vector<uint8_t>& rgbaPalette, int16_t nShiftLength);

public:
    static bool GetPaletteFromIndexedPNG(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromTrueColorPNG(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);

    // Generic palette types: game-specific types have their own import code over in PalModDlg.h
    static bool GetPaletteFromACT(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromBMP(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromGIF(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromGPL(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromPAL_RIFF(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);
    static bool GetPaletteFromPNG(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette);

    static uint16_t ApplyPaletteToTarget(std::vector<uint8_t> rgbaPalette, uint32_t nTargetPalette, bool fLoopToFill);
    static uint16_t ApplyPalette(std::vector<uint8_t> rgbaPalette, bool fLoopToFill);

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

    static bool LoadPalette(PalFileType palFileType, LPCWSTR pszFileName, bool fForceReadUpsideDown = false, bool fGIMPOffsetByOne = false);
};
