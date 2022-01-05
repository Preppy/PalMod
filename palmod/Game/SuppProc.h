#pragma once

constexpr UINT16 SUPP_START = 0xF000;
constexpr UINT16 SUPP_END   = 0xFFFF;

//Syntax: SUPP_NODE, initial palette, palette increment
constexpr UINT16 SUPP_NODE          = 0x4000;
// All processing does a full copy of the palette first unless you include this flag.
constexpr UINT16 SUPP_NODE_NOCOPY   = 0x4004;

// MOD_COPY is largely used implicitly outside of Jin
constexpr UINT16 MOD_COPY           = 0xA010;
// MOD_TINT is form: start_pos, length_of_copy, dest_pos, r_tint, g_tint, b_tint
// to get negative tinting just use NEG + %val%
constexpr UINT16 MOD_TINT           = 0xA030;

constexpr UINT16 MOD_LUM            = 0xA040;
constexpr UINT16 MOD_SAT            = 0xA041;
constexpr UINT16 MOD_WHITE          = 0xA042;

constexpr UINT16 NEG                = 0x8000;

int AdjustNumberForPossibleNegation(int nPossiblyNegativeNumber);

class CSecondaryPaletteProcessing
{
protected:
    void ProcessSecondaryCopyWithIndex(size_t char_id, size_t source_palette, size_t destination_palette, UINT8 dst_index, UINT8 src_index, UINT8 index_amt);
    void ProcessSecondaryWhite(size_t char_id, size_t destination_palette, UINT8 index_start, UINT8 index_inc);
    void ProcessSecondaryHSLEffects(size_t char_id, UINT16 mod_type, int mod_amt, size_t destination_palette, UINT8 index_start, UINT8 index_inc);
    void ProcessSecondaryTintEffects(size_t char_id, size_t source_palette, size_t destination_palette, UINT8 dst_index, UINT8 src_index, UINT8 index_amt,
        int tint_factor_r, int tint_factor_g, int tint_factor_b);

public:
    virtual UINT16 GetCurrentPaletteSizeInColors() = 0;
    virtual void AddColorStepsToColorValue(COLORREF crSrc, COLORREF* crTarget, int uStepsR, int uStepsG, int uStepsB, int uStepsA) = 0;
    virtual COLORREF* CreatePal(size_t nUnitId, size_t nPalId) = 0;
    virtual void WritePal(size_t nUnitId, size_t nPalId, COLORREF* rgColors, UINT16 nColorCount) = 0;

    void ProcessAdditionalPaletteChangesRequired(const size_t nUnitId, const size_t nChangedPaletteNumber, const std::vector<std::vector<UINT16>> supplementalEffectsData);
};
