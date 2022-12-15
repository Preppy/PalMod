#pragma once

constexpr uint16_t SUPP_START = 0xF000;
constexpr uint16_t SUPP_END   = 0xFFFF;

//Syntax: SUPP_NODE, destination palette, palette increment (mvc2-only, 0 for all other games)
// The "Palette increment" value is for MvC2 only.  It indicates the step between each iteration of that particular extra for that character.
// So a palette increment value of 0x10 means that the LP extra is found at (initial + (0 * 0x10)), the LK extra is found at (initial + (1 * 0x10)),
// and so forth.  Just set as 0 or for anything other than mvc2.
// Note that SUPP_NODE does an implicit copy from source to destination: use SUPP_NODE_NOCOPY if you don't want that.
constexpr uint16_t SUPP_NODE          = 0x4000;
// All processing does a full copy of the palette first unless you use this flag.
constexpr uint16_t SUPP_NODE_NOCOPY   = 0x4004;

// MOD_COPY is form: source_start_pos, length_of_copy, dest_start_pos
constexpr uint16_t MOD_COPY           = 0xA010;
// MOD_TINT is form: source_start_pos, length_of_copy, dest_start_pos, r_tint, g_tint, b_tint
// to get negative tinting just use NEG + %val%
constexpr uint16_t MOD_TINT           = 0xA030;

// MOD_LUM modifies the target palette: dest_start_pos, length, lum delta
constexpr uint16_t MOD_LUM            = 0xA040;
// MOD_SAT modifies the target palette: dest_start_pos, length, saturation delta
constexpr uint16_t MOD_SAT            = 0xA041;
constexpr uint16_t MOD_WHITE          = 0xA042;
// MOD_BLEND is form: source_start_pos, length_of_copy, dest_start_pos, blend_r, blend_g, blend_b
constexpr uint16_t MOD_BLEND          = 0xA044;

// NEG is a flag indicating to treat the effect value as negative
constexpr uint16_t NEG                = 0x8000;

int AdjustNumberForPossibleNegation(int nPossiblyNegativeNumber);

class CSecondaryPaletteProcessing
{
protected:
    void ProcessSecondaryCopyWithIndex(uint32_t char_id, uint32_t source_palette, uint32_t destination_palette, uint8_t dst_index, uint8_t src_index, uint8_t index_amt);
    void ProcessSecondaryWhite(uint32_t char_id, uint32_t destination_palette, uint8_t index_start, uint8_t index_inc);
    void ProcessSecondaryHSLEffects(uint32_t char_id, uint16_t mod_type, int mod_amt, uint32_t destination_palette, uint8_t index_start, uint8_t index_inc);
    void ProcessSecondaryTintEffects(uint32_t char_id, uint32_t source_palette, uint32_t destination_palette, uint8_t dst_index, uint8_t src_index, uint8_t index_amt,
        int tint_factor_r, int tint_factor_g, int tint_factor_b);
    void ProcessBlendEffects(uint32_t char_id, uint32_t source_palette, uint32_t destination_palette, uint8_t dst_index, uint8_t src_index, uint8_t index_amt,
        uint8_t blending_r, uint8_t blending_g, uint8_t blending_b);

public:
    virtual uint16_t GetCurrentPaletteSizeInColors() = 0;
    virtual void AddColorStepsToColorValue(COLORREF crSrc, COLORREF* crTarget, int uStepsR, int uStepsG, int uStepsB, int uStepsA) = 0;
    virtual int GetNearestLegal8BitColorValue_RGB_impl(int inCol) = 0;
    virtual COLORREF* CreatePal(uint32_t nUnitId, uint32_t nPalId) = 0;
    virtual void WritePal(uint32_t nUnitId, uint32_t nPalId, COLORREF* rgColors, uint16_t nColorCount) = 0;
    virtual void MarkPaletteDirty(uint32_t nUnit, uint32_t nPaletteId) = 0;
    virtual void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) = 0;
    virtual LPCWSTR GetCurrentPaletteName() = 0;

    int ProcessAdditionalPaletteChangesRequired(const uint32_t nUnitId, const uint32_t nChangedPaletteNumber, const std::vector<std::vector<uint16_t>> supplementalEffectsData);
};
