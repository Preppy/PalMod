#include "stdafx.h"
#include "MVC2_SUPP.h"
#include "ColorScale.h"

CGame_MVC2_D * CurrMVC2 = NULL;
int rgSuppLoc[MVC2_D_NUMUNIT];

UINT8 **_mvc2_data = NULL;

// Create the array of supplemental processing information needed for mvc2 sprites
void prep_supp()
{
	int nIndexCtr = 0;

	//0 each location
	memset(rgSuppLoc, 0, sizeof(int) * MVC2_D_NUMUNIT);

	while(_mvc2_supp_const[nIndexCtr] != SUPP_END)
	{
		if((_mvc2_supp_const[nIndexCtr] & 0xFF00) == SUPP_START)
		{
			rgSuppLoc[_mvc2_supp_const[nIndexCtr] & 0x00FF] = nIndexCtr;
		}

		nIndexCtr++;
	}

	_mvc2_data = (UINT8 **)(CurrMVC2->GetDataBuffer());
}

inline UINT16* get_pal_16(int char_id, int pal_no)
{
	return (UINT16*)&_mvc2_data[char_id][pal_no * 32];
}

void proc_supp(int char_no, int pal_no)
{
	CString strDebugInfo;

	strDebugInfo.Format("proc_supp: Processing supplemental palettes for character 0x%x, palette number 0x%x\n", char_no, pal_no);
	OutputDebugString(strDebugInfo);

	if (!rgSuppLoc[char_no] || !_mvc2_data)
	{
		OutputDebugString("proc_supp: Not applicable here\n");
		return;
	}
	
	UINT8 add = 0;
	UINT8 tint_ctr = 0;

	UINT8 source_palette;
	UINT8 pal_ctr;
	UINT8 destination_palette;

	BOOL isCurrentPaletteABasicPalette = FALSE, isCurrentPaletteAnExtraPalette = FALSE;

	// Load the supplemental data for this character
	UINT16 *curr_data = const_cast<UINT16 *>(&_mvc2_supp_const[rgSuppLoc[char_no]]);
	UINT16 index_data;
	UINT16 index_ctr = 1; //1 to skip the count

	UINT16 index_sz = curr_data[0];

	//SUPP_NODE
	// Node_start: offset within the palette set.
	// Node_inc: the number of palettes to increment within the palette set of interest.  
		// Consider an animation comprised of three sprites: you would want to increment three sprites further 
	// Base_Start: which palette to be copying from if it isn't the main BUTTON palette
	// Base_inc: the number of palettes to increment on the copy side.
	UINT16 node_start = 0, node_inc = 0, base_start = 0, base_inc = 1;

	//pi = palette index
	UINT16 pi_start, pi_amt;

	//MOD
	UINT16 mod_type, mod_amt;

	//Check to see if we are modifying any basic palettes
	index_data = curr_data[index_ctr];

	while ((index_data & 0xF000) != SUPP_START) // SUPP_START marks the beginning of the next character
	{
		isCurrentPaletteABasicPalette = FALSE;
		isCurrentPaletteAnExtraPalette = FALSE;

		// If the current position is SUPP_NODE or SUPP_NODE_*, that indicates the beginning of a new modifier array
			//Possible sources = SUPP_NODE, SUPP_NODE_EX, SUPP_NODE_ABSOL, SUPP_NODE_EX | SUPP_NODE_NOCOPY, SUPP_NODE_EX | SUPP_NODE_ABSOL
		if ((index_data & 0xF000) == SUPP_NODE) //&& index_ctr < index_sz)
		{
			OutputDebugString("\nproc_supp: New modification node encountered\n");

			//Fix later
			add = 3; //count of data provided for a SUPP_NODE entry, which is the minimum.

			UINT16 in_start = curr_data[index_ctr + 1];
			
			if (in_start & MOD_ABS)
			{
				node_start = in_start & 0x7FFF;
			}
			else
			{
				node_start = in_start + ID_MOD;
			}

			node_inc = curr_data[index_ctr + 2];

			//Set the source palette
			source_palette = pal_no;

			if ((index_data & SUPP_NODE_ABSOL) == SUPP_NODE_ABSOL)
			{
				// SUPP_NODE_ABSOL adds two values: the first is the palette to copy from, and the second is the incrementation value
				base_start = curr_data[index_ctr + 3];

				if (base_start & MOD_ABS)
				{
					base_start = base_start & 0x7FFF;
				}
				else
				{
					base_start = base_start + ID_MOD;
				}

				base_inc = curr_data[index_ctr + 4];

				/*
				if((pal_no / base_inc) < k_mvc2_character_coloroption_count && pal_no - ((pal_no / base_inc) * base_inc) == base_start)
					isCurrentPaletteAnExtraPalette = TRUE;
				else if((index_data & SUPP_NODE_NOCOPY) == SUPP_NODE_NOCOPY)
				{
					isCurrentPaletteAnExtraPalette = TRUE;
				}
				*/

				add += 2;
			}
			else
			{
				base_start = 0;
				base_inc = 8; // increment is one character set of 8 palettes
			}

			bool thisNodeForExtraPalettesOnly = ((index_data & EXTRA_NODE_ONLY) == EXTRA_NODE_ONLY);

			// Ensure that this palette comes from one of the first BUTTON_COUNT * NORMAL_PALETTE_COUNT (8 *k_mvc2_character_coloroption_count)
			if ((pal_no / 8) < k_mvc2_character_coloroption_count && (pal_no % 8) == 0)
			{
				isCurrentPaletteABasicPalette = TRUE;
			}
			else
			{
				isCurrentPaletteAnExtraPalette = TRUE;
			}

			bool shouldProcessEffectsForThisNode = true;
			if (thisNodeForExtraPalettesOnly ? !isCurrentPaletteAnExtraPalette : !isCurrentPaletteABasicPalette)
			{
				shouldProcessEffectsForThisNode = false;
				OutputDebugString("proc_supp: This node is being skipped for this palette type.\n");
			}
			
			if (!thisNodeForExtraPalettesOnly)
			{
				pal_ctr = pal_no / base_inc;
				destination_palette = node_start + (node_inc * pal_ctr);

				if ((index_data & SUPP_NODE_ABSOL) == SUPP_NODE_ABSOL)
				{
					//Set the absolute source palette
					source_palette = base_start + (base_inc * pal_ctr);
				}
			}
			else
			{
				// Figure out which character we are on and offset by that.
				// Make sure we both are after the Extra start of interest and at a valid offset given the increment step.
				if ((pal_no >= base_start) && ((pal_no - base_start) % base_inc == 0))
				{
					// Character offset will be a value from 0-5
					pal_ctr = (pal_no - base_start) / base_inc;
				}
				else
				{
					// This isn't an Extras palette, we aren't processing this.
					pal_ctr = k_mvc2_character_coloroption_count;
				}

				destination_palette = node_start + (node_inc * pal_ctr);

				if ((index_data & SUPP_NODE_ABSOL) == SUPP_NODE_ABSOL)
				{
					//Set the absolute source palette
					source_palette = base_start + (base_inc * pal_ctr);
				}

				// We're in Extras space, so make sure we're within the bounds of the character.
				if (pal_ctr > (k_mvc2_character_coloroption_count - 1))
				{
					OutputDebugString("proc_supp: This node is not applicable to this palette range.\n");
					shouldProcessEffectsForThisNode = false;
				}
			}

			//Set the counter past the indexes into the actual actions and reset the step counter
			index_ctr += add;
			add = 0;

			if ((index_data & SUPP_NODE_EX) == SUPP_NODE_EX)
			{
				add = 3;
			}
			
			//if (isCurrentPaletteABasicPalette)
			{
				int copy_start = 0;
				int copy_amt = 16;
				int copy_dst = 0;

				if ((index_data & SUPP_NODE_EX) == SUPP_NODE_EX)
				{
					copy_start = curr_data[index_ctr + 0];
					copy_amt = curr_data[index_ctr + 1];
					copy_dst = curr_data[index_ctr + 2];
				}

				if (shouldProcessEffectsForThisNode)
				{
					strDebugInfo.Format("proc_supp: Preparing to process from palette 0x%x to palette 0x%x\n", source_palette, destination_palette);
				}
				else
				{
					strDebugInfo.Format("proc_supp: Skipping processing from palette 0x%x to palette 0x%x\n", source_palette, destination_palette);
				}

				OutputDebugString(strDebugInfo);

				// Unless we get told otherwise, we do a copy first and then worry about modifying values.
				if (index_data != SUPP_NODE_NOCOPY)
				{
					if (shouldProcessEffectsForThisNode)
					{
						supp_copy_index(char_no, source_palette, destination_palette, copy_dst, copy_start, copy_amt);
					}
				}

				index_ctr += add;	
				index_data = curr_data[index_ctr];

				while ((index_data & 0xF000) != SUPP_NODE && (index_data & 0xF000) != SUPP_START)
				{
					if (shouldProcessEffectsForThisNode)
					{
						OutputDebugString("proc_supp: Processing FX for this node\n");
					}

					pi_start = curr_data[index_ctr+1];
					pi_amt = curr_data[index_ctr+2];

					switch (index_data)
					{
						case MOD_TINT:
							{
								if (shouldProcessEffectsForThisNode)
								{
									supp_mod_tint(char_no, pal_no, destination_palette, curr_data[index_ctr + 3], pi_start, pi_amt,
												curr_data[index_ctr + 4], curr_data[index_ctr + 5], curr_data[index_ctr + 6]);
								}
	                          
								index_ctr += 7;
								break;
							}
						case MOD_WHITE:
							{
								if (shouldProcessEffectsForThisNode)
								{
									supp_mod_white(char_no, destination_palette, pi_start, pi_amt);
								}

								index_ctr += 3;
								break;
							}

						case MOD_COPY:
							{
								if (shouldProcessEffectsForThisNode)
								{
									supp_copy_index(char_no, pal_no, destination_palette, curr_data[index_ctr + 3], pi_start, pi_amt);
								}

								index_ctr += 4;
								break;
							}

						case MOD_LUM:
						case MOD_SAT:
							{
								if (shouldProcessEffectsForThisNode)
								{
									mod_type = curr_data[index_ctr];
									mod_amt = curr_data[index_ctr + 3];

									supp_mod_hsl(char_no, mod_type, mod_amt, destination_palette, pi_start, pi_amt);
								}

								index_ctr += 4;
								break;
							}
					}
				
					index_data = curr_data[index_ctr];
				}
			}
		}
	}

	strDebugInfo.Format("proc_supp: Finished processing supplemental palettes for character 0x%x, palette number 0x%x\n\n", char_no, pal_no);
	OutputDebugString(strDebugInfo);
}

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

void supp_copy_palette(UINT16 char_id, UINT16 destination_palette, UINT16 source_palette)
{
	OutputDebugString("\tsupp_copy_palette being applied\n");

	UINT8 *src = &_mvc2_data[char_id][source_palette * 32];
	UINT8 *dst = &_mvc2_data[char_id][destination_palette * 32];

	memcpy(dst, src, 32);
}

void supp_copy_index(UINT16 char_id, UINT16 source_palette, UINT16 destination_palette, UINT8 dst_index, UINT8 src_index, UINT8 index_amt)
{
	OutputDebugString("\tsupp_copy_index being applied\n");

	UINT16 *src_16, *dst_16;

	src_16 = get_pal_16(char_id, source_palette);
	dst_16 = get_pal_16(char_id, destination_palette);

	memcpy(&dst_16[dst_index], &src_16[src_index], index_amt * sizeof(UINT16));
}

void supp_mod_white(UINT16 char_id, UINT16 destination_palette, UINT8 index_start, UINT8 index_inc)
{
	OutputDebugString("\tsupp_mod_white being applied\n");

	UINT16 *dst_16 = get_pal_16(char_id, destination_palette);

	for(int i = index_start; i < index_start + index_inc; i++)
	{
		dst_16[i] |= 0xFFFF;
	}
}

void supp_mod_hsl(UINT16 char_id, UINT16 mod_type, int mod_amt, UINT16 destination_palette, UINT8 index_start, UINT8 index_inc)
{
	OutputDebugString("\tsupp_mod_hsl being applied\n");

	COLORREF input_col;

	double src_h, src_s, src_l, /* add_h ,*/ add_s = 0.0, add_l = 0.0;
	
	UINT16 *dst_16 = get_pal_16(char_id, destination_palette);

	mod_amt = AdjustNumberForPossibleNegation(mod_amt);

	switch(mod_type)
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

	for(int i = index_start; i < index_start + index_inc; i++)
	{
		input_col = CurrMVC2->ConvPal(dst_16[i]);

		RGBtoHLS(input_col, &src_h, &src_l, &src_s);

		//src_h += add_l;
		src_s += add_s;
		src_l += add_l;

		//LimitHLS(src_h);
		src_s = CurrMVC2->GetPalGroup()->LimitHLS(src_s);
		src_l = CurrMVC2->GetPalGroup()->LimitHLS(src_l);

		dst_16[i] &= 0xF000;
		dst_16[i] |= CurrMVC2->ConvCol(HLStoRGB(src_h, src_l, src_s));
	}
}

void supp_mod_tint(UINT16 char_id, UINT16 source_palette, UINT16 destination_palette, UINT8 dst_index, UINT8 src_index, UINT8 index_amt,
				int tint_factor_r, int tint_factor_g, int tint_factor_b)
{
	OutputDebugString("\tsupp_mod_tint being applied\n");

	UINT16 *src_16 = get_pal_16(char_id, source_palette);
	UINT16 *dst_16 = get_pal_16(char_id, destination_palette);

	tint_factor_r = AdjustNumberForPossibleNegation(tint_factor_r);
	tint_factor_g = AdjustNumberForPossibleNegation(tint_factor_g);
	tint_factor_b = AdjustNumberForPossibleNegation(tint_factor_b);

	for (UINT8 offset = 0; offset < index_amt; offset++)
	{
		COLORREF input_col = CurrMVC2->ConvPal(src_16[offset + src_index]);

		BYTE newR = min(255, max(0, (int)GetRValue(input_col) + ((int)17 * tint_factor_r)));
		BYTE newG = min(255, max(0, (int)GetGValue(input_col) + ((int)17 * tint_factor_g)));
		BYTE newB = min(255, max(0, (int)GetBValue(input_col) + ((int)17 * tint_factor_b)));

		newR /= 17;
		newG /= 17;
		newB /= 17;

		dst_16[offset + dst_index] = 0xF000 | (newR << 8) | (newG << 4) | newB;
	}
}

