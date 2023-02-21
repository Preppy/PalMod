#include "StdAfx.h"
#include "SuppProc.h"
#include "ColorScale.h"
#include "ColorSystem.h"
#include "..\PalMod.h"

// Our supplement palette array parsing doesn't natively handle negative numbers,
// so this function allows us to handle that.
int AdjustNumberForPossibleNegation(int nPossiblyNegativeNumber)
{
    if (nPossiblyNegativeNumber > NEG)
    {
        nPossiblyNegativeNumber -= NEG;
        nPossiblyNegativeNumber *= -1;
    }

    return nPossiblyNegativeNumber;
}

void CSecondaryPaletteProcessing::ProcessSecondaryCopyWithIndex(uint32_t char_id, uint32_t source_palette, uint32_t destination_palette, uint8_t dst_index, uint8_t src_index, uint8_t index_amt)
{
    CString strDebugInfo;
    if ((src_index == 0) && (index_amt == 0))
    {
        strDebugInfo.Format(L"\t\tProcessSecondaryCopyWithIndex being applied: full copy of source palette 0x%x to destination palette 0x%x\n",
            source_palette, destination_palette);
    }
    else
    {
        strDebugInfo.Format(L"\t\tProcessSecondaryCopyWithIndex being applied: copying from source palette 0x%x at index 0x%x to destination palette 0x%x at index 0x%x for 0x%x colors\n",
            source_palette, src_index, destination_palette, dst_index, index_amt);
    }
    OutputDebugString(strDebugInfo);

    COLORREF* pSourcePalette = CreatePal(char_id, source_palette);
    COLORREF* pDestinationPalette = CreatePal(char_id, destination_palette);

    if (pSourcePalette && pDestinationPalette)
    {
        memcpy(&pDestinationPalette[dst_index], &pSourcePalette[src_index], index_amt * sizeof(COLORREF));

        WritePal(char_id, destination_palette, pDestinationPalette, dst_index + index_amt);
    }
    else
    {
        MessageBox(g_appHWnd, L"Warning: invalid secondary palette change requested.  This is a bug in PalMod: please report.", GetHost()->GetAppName(), MB_ICONERROR);
    }

    safe_delete(pSourcePalette);
    safe_delete(pDestinationPalette);
}

void CSecondaryPaletteProcessing::ProcessSecondaryWhite(uint32_t char_id, uint32_t destination_palette, uint8_t index_start, uint8_t index_inc)
{
    OutputDebugString(L"\t\tProcessSecondaryWhite being applied\n");

    COLORREF* pDestinationPalette = CreatePal(char_id, destination_palette);

    if (pDestinationPalette)
    {
        for (int i = index_start; i < (index_start + index_inc); i++)
        {
            pDestinationPalette[i] = 0xFF000000 | RGB(0xff, 0xff, 0xff);
        }

        WritePal(char_id, destination_palette, pDestinationPalette, -1);

        safe_delete(pDestinationPalette);
    }
    else
    {
        MessageBox(g_appHWnd, L"Warning: invalid secondary palette change requested.  This is a bug in PalMod: please report.", GetHost()->GetAppName(), MB_ICONERROR);
    }
}

void CSecondaryPaletteProcessing::ProcessSecondaryHSLEffects(uint32_t char_id, uint16_t mod_type, int mod_amt, uint32_t destination_palette, uint8_t index_start, uint8_t index_inc)
{
    COLORREF* pDestinationPalette = CreatePal(char_id, destination_palette);

    if (pDestinationPalette)
    {
        double src_h, src_s, src_l, /* add_h ,*/ add_s = 0.0, add_l = 0.0;

        mod_amt = AdjustNumberForPossibleNegation(mod_amt);

        CString strDebugInfo;
        strDebugInfo.Format(L"\t\tProcessSecondaryHSLEffects being applied : applying %s at %i to palette 0x%x starting at 0x%x for 0x%x colors\n", (mod_type == MOD_LUM) ? L"MOD_LUM" : L"MOD_SAT", mod_amt, destination_palette, index_start, index_inc);
        OutputDebugString(strDebugInfo);

        switch (mod_type)
        {
            /*
        case MOD_HUE:
            add_h = (double)mod_amt / 360.0;
            */
        case MOD_LUM:
            add_l = (double)mod_amt / 100.0;
            break;
        case MOD_SAT:
            add_s = (double)mod_amt / 255.0;
            break;
        }

        for (int i = index_start; i < (index_start + index_inc); i++)
        {
            COLORREF input_col = pDestinationPalette[i];

            RGBtoHLS(input_col, &src_h, &src_l, &src_s);

            //src_h += add_l;
            src_s += add_s;
            src_l += add_l;

            src_s = LimitHLS(src_s);
            src_l = LimitHLS(src_l);

            // Convert back, forcing alpha on the way.
            pDestinationPalette[i] = 0xFF000000 | HLStoRGB(src_h, src_l, src_s);
        }

        WritePal(char_id, destination_palette, pDestinationPalette, -1);

        safe_delete(pDestinationPalette);
    }
    else
    {
        MessageBox(g_appHWnd, L"Warning: invalid secondary palette change requested.  This is a bug in PalMod: please report.", GetHost()->GetAppName(), MB_ICONERROR);
    }
}

void CSecondaryPaletteProcessing::ProcessSecondaryTintEffects(uint32_t char_id, uint32_t source_palette, uint32_t destination_palette, uint8_t dst_index, uint8_t src_index, uint8_t index_amt,
    int tint_factor_r, int tint_factor_g, int tint_factor_b)
{
    COLORREF* pSourcePalette = CreatePal(char_id, source_palette);
    COLORREF* pDestinationPalette = CreatePal(char_id, destination_palette);

    if (pSourcePalette && pDestinationPalette)
    {
        tint_factor_r = AdjustNumberForPossibleNegation(tint_factor_r);
        tint_factor_g = AdjustNumberForPossibleNegation(tint_factor_g);
        tint_factor_b = AdjustNumberForPossibleNegation(tint_factor_b);

        CString strDebugInfo;
        strDebugInfo.Format(L"\t\tProcessSecondaryTintEffects being applied : applying tint(%i, %i, %i) from source palette 0x%x at 0x%x to palette 0x%x at 0x%x for 0x%x colors\n",
            tint_factor_r, tint_factor_g, tint_factor_b, source_palette, src_index, destination_palette, dst_index, index_amt);
        OutputDebugString(strDebugInfo);

        for (uint8_t offset = 0; offset < index_amt; offset++)
        {
            COLORREF input_col = pSourcePalette[offset + src_index];

            AddColorStepsToColorValue(input_col, &pDestinationPalette[offset + dst_index],
                tint_factor_r,
                tint_factor_g,
                tint_factor_b,
                0);
        }

        WritePal(char_id, destination_palette, pDestinationPalette, -1);
    }
    else
    {
        MessageBox(g_appHWnd, L"Warning: invalid secondary palette change requested.  This is a bug in PalMod: please report.", GetHost()->GetAppName(), MB_ICONERROR);
    }

    safe_delete(pSourcePalette);
    safe_delete(pDestinationPalette);
}

void CSecondaryPaletteProcessing::ProcessBlendEffects(uint32_t char_id, uint32_t source_palette, uint32_t destination_palette, uint8_t dst_index, uint8_t src_index, uint8_t index_amt,
    uint8_t blending_r, uint8_t blending_g, uint8_t blending_b)
{
    COLORREF* pSourcePalette = CreatePal(char_id, source_palette);
    COLORREF* pDestinationPalette = CreatePal(char_id, destination_palette);

    if (pSourcePalette && pDestinationPalette)
    {
        CString strDebugInfo;
        strDebugInfo.Format(L"\t\tProcessBlendEffects being applied : applying rgb(%i, %i, %i) from source palette 0x%x at 0x%x to palette 0x%x at 0x%x for 0x%x colors\n",
            blending_r, blending_g, blending_b, source_palette, src_index, destination_palette, dst_index, index_amt);
        OutputDebugString(strDebugInfo);

        const double dlBlendPercent = 0.4;

        for (uint8_t offset = 0; offset < index_amt; offset++)
        {
            COLORREF input_col = pSourcePalette[offset + src_index];

            uint8_t alpha =  (pSourcePalette[offset + src_index] & 0xff000000) >> 24;
            uint16_t blue =  (pSourcePalette[offset + src_index] & 0x00ff0000) >> 16;
            uint16_t green = (pSourcePalette[offset + src_index] & 0x0000ff00) >> 8;
            uint16_t red =   (pSourcePalette[offset + src_index] & 0x000000ff);

            red =   static_cast<uint16_t>(ceil((static_cast<double>(red)   + (static_cast<double>(blending_r) * dlBlendPercent)) / 2.0));
            green = static_cast<uint16_t>(ceil((static_cast<double>(green) + (static_cast<double>(blending_g) * dlBlendPercent)) / 2.0));
            blue =  static_cast<uint16_t>(ceil((static_cast<double>(blue)  + (static_cast<double>(blending_b) * dlBlendPercent)) / 2.0));

            if (red > 255) { red = 255; }
            if (green > 255) { green = 255; }
            if (blue > 255) { blue = 255; }

            red =   GetNearestLegal8BitColorValue_RGB_impl(red);
            green = GetNearestLegal8BitColorValue_RGB_impl(green);
            blue = GetNearestLegal8BitColorValue_RGB_impl(blue);

            COLORREF blended_col = RGB(red, green, blue) | (alpha << 24);

            pDestinationPalette[offset + dst_index] = blended_col;
        }

        WritePal(char_id, destination_palette, pDestinationPalette, -1);
    }
    else
    {
        MessageBox(g_appHWnd, L"Warning: invalid secondary palette change requested.  This is a bug in PalMod: please report.", GetHost()->GetAppName(), MB_ICONERROR);
    }

    safe_delete(pSourcePalette);
    safe_delete(pDestinationPalette);
}

int CSecondaryPaletteProcessing::ProcessAdditionalPaletteChangesRequired(const uint32_t nUnitId, const uint32_t nChangedPaletteNumber, const std::vector<std::vector<uint16_t>> supplementalEffectsData)
{
    CString strDebugInfo;
    strDebugInfo.Format(L"\tProcessAdditionalPaletteChangesRequired: Processing supplemental palettes for unit 0x%02x palette number 0x%x. %u effects to apply.\n", nUnitId, nChangedPaletteNumber,
        static_cast<uint32_t>(supplementalEffectsData.size()));
    OutputDebugString(strDebugInfo);

    uint32_t nLastDestinationPalette = 0;
    std::vector<LPCWSTR> vstrModifiedPaletteNames;

    for (const std::vector<uint16_t>& currentEffectsData : supplementalEffectsData)
    {
        uint16_t indexCounterForEffects = 0;
        uint16_t currentEffectsToken = currentEffectsData[indexCounterForEffects++];

        // Some variant of SUPP_NODE or SUPP_NODE_* indicates the beginning of a new modifier array
            //Possible sources = SUPP_NODE, SUPP_NODE_EX, SUPP_NODE_ABSOL, SUPP_NODE_EX | SUPP_NODE_NOCOPY, SUPP_NODE_EX | SUPP_NODE_ABSOL
        // The _EX syntax is unique to MVC2 where MVC2 crosses nodes from core button colors to the shared extra nodes.
        while ((currentEffectsToken & SUPP_NODE) &&
               (indexCounterForEffects < currentEffectsData.size())) // allow an otherwise empty SUPP: the first tokenized bit will simply copy the source palette to dest
        {
            OutputDebugString(L"\tProcessAdditionalPaletteChangesRequired: New modification node encountered\n");

            uint16_t in_start = currentEffectsData[indexCounterForEffects++];

            // Figure out what palettes we're going to be modifying
            uint32_t destination_palette = nChangedPaletteNumber + (in_start & 0x7FFF);

            // Need to have information available to poststepal for the active palette, so make sure it's loaded
            LoadSpecificPaletteData(nUnitId, destination_palette);

            if (destination_palette != nLastDestinationPalette)
            {
                vstrModifiedPaletteNames.push_back(GetCurrentPaletteName());
            }

            strDebugInfo.Format(L"\t\tPreparing to process from palette 0x%x to palette 0x%x (\"%s\")\n", nChangedPaletteNumber, destination_palette, vstrModifiedPaletteNames.back());
            OutputDebugString(strDebugInfo);

            MarkPaletteDirty(nUnitId, destination_palette);

            const uint16_t copy_amt_max = GetCurrentPaletteSizeInColors();

            // Unless we get told otherwise, we do a copy first and then worry about modifying values.
            if (currentEffectsToken != SUPP_NODE_NOCOPY)
            {
                int copy_start = 0;
                int copy_dst = 0;

                ProcessSecondaryCopyWithIndex(nUnitId, nChangedPaletteNumber, destination_palette, copy_dst, copy_start, static_cast<uint8_t>(copy_amt_max));
            }

            // Minimum set of data for a SUPP_NODE entry: <node_type>, <palette distance>, <unused>
            indexCounterForEffects++; // walk past the token that's only used for mvc2
            // We're now past the indexes into the actual actions

            while (indexCounterForEffects < currentEffectsData.size())
            {
                currentEffectsToken = currentEffectsData[indexCounterForEffects];

                if (currentEffectsToken & SUPP_NODE)
                {
                    // continue into next node
                    indexCounterForEffects++;
                    break;
                }

                OutputDebugString(L"\t\t\tProcessing FX for this node\n");

                //pi = palette index - value should be from 0 to <palette length>, maxing at 255.
                uint8_t pi_start = static_cast<uint8_t>(currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 1]);
                uint8_t pi_amt = static_cast<uint8_t>(currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 2]);

                // While this would normally be error-checking, this also has the side effect of allowing us to 
                // specify max palette size possible for variable length portrait/stage/csi palettes that we want to
                // tint using generic logic
                if (copy_amt_max > pi_start)
                {
                    pi_amt = min(copy_amt_max - pi_start, pi_amt);
                }

                switch (currentEffectsToken)
                {
                case MOD_TINT:
                {
                    ProcessSecondaryTintEffects(nUnitId, nChangedPaletteNumber, destination_palette, static_cast<uint8_t>(currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 3]), pi_start, pi_amt,
                        currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 4], currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 5], currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 6]);

                    indexCounterForEffects += 7;
                    break;
                }

                case MOD_BLEND:
                {
                    ProcessBlendEffects(nUnitId, nChangedPaletteNumber, destination_palette, static_cast<uint8_t>(currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 3]), pi_start, pi_amt,
                        static_cast<uint8_t>(currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 4]), static_cast<uint8_t>(currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 5]), static_cast<uint8_t>(currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 6]));

                    indexCounterForEffects += 7;
                    break;
                }

                case MOD_WHITE:
                {
                    ProcessSecondaryWhite(nUnitId, destination_palette, pi_start, pi_amt);

                    indexCounterForEffects += 3;
                    break;
                }

                case MOD_COPY:
                {
                    ProcessSecondaryCopyWithIndex(nUnitId, nChangedPaletteNumber, destination_palette, static_cast<uint8_t>(currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 3]), pi_start, pi_amt);

                    indexCounterForEffects += 4;
                    break;
                }

                case MOD_LUM:
                case MOD_SAT:
                {
                    // We have first done a full copy of the source palette to dest palette here, and now we apply desired LUM/SAT tweaks.
                    uint16_t mod_type = currentEffectsData[indexCounterForEffects];
                    uint16_t mod_amt = currentEffectsData[static_cast<size_t>(indexCounterForEffects) + 3];

                    ProcessSecondaryHSLEffects(nUnitId, mod_type, mod_amt, destination_palette, pi_start, pi_amt);

                    indexCounterForEffects += 4;
                    break;
                }
                default:
                    OutputDebugString(L"Error: bogus token in supp_proc commands.\n");
                    indexCounterForEffects++;
                    break;
                }
            }
        }
    }

    if (vstrModifiedPaletteNames.size())
    {
        CString strMessage;
        if (vstrModifiedPaletteNames.size() == 1)
        {
            strMessage.Format(L"Updated.  Also updated the \"%s\" palette.", vstrModifiedPaletteNames.front());
        }
        else
        {
            strMessage.Format(L"Updated.  Also updated \"%s\" and other palettes.", vstrModifiedPaletteNames.front());
        }
        GetHost()->GetPalModDlg()->SetStatusText(strMessage.GetString());
    }

    strDebugInfo.Format(L"ProcessAdditionalPaletteChangesRequired: Finished processing supplemental palettes for character 0x%02x, palette number 0x%x\n\n", nUnitId, nChangedPaletteNumber);
    OutputDebugString(strDebugInfo);

    return static_cast<int>(vstrModifiedPaletteNames.size());
}
