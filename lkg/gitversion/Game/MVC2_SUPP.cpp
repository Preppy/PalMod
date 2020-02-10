#include "stdafx.h"
#include "MVC2_SUPP.h"
#include "ColorScale.h"

CGame_MVC2_D * CurrMVC2 = NULL;
int rgSuppLoc[MVC2_D_NUMUNIT];

UINT8 **_mvc2_data = NULL;

void prep_supp()
{

	int nIndexCtr = 0;

	//0 each location
	memset(rgSuppLoc, 0, sizeof(int) * MVC2_D_NUMUNIT);

	while(_mvc2_supp_const [nIndexCtr] != SUPP_END)
	{
		if((_mvc2_supp_const [nIndexCtr] & 0xFF00) == SUPP_START)
		{
			rgSuppLoc[_mvc2_supp_const [nIndexCtr] & 0x00FF] = nIndexCtr;
		}

		nIndexCtr++;
	}

	_mvc2_data = (UINT8 **)(CurrMVC2->GetDataBuffer());
}

void proc_supp(int char_no, int pal_no)
{
	if(!rgSuppLoc[char_no] || !_mvc2_data)
		return;
	
	UINT8 add = 0;
	UINT8 tint_ctr= 0;

	UINT8 src_pal;
	UINT8 pal_ctr;
	UINT8 dst_pal;

	

	BOOL supp_basic = FALSE, supp_extra = FALSE;

	UINT16 *curr_data = const_cast<UINT16 *>(&_mvc2_supp_const[rgSuppLoc[char_no]]);
	UINT16 index_data;
	UINT16 index_ctr = 1; //1 to skip the count

	UINT16 index_sz = curr_data[0];

	//SUPP_NODE
	UINT16 node_start = 0, node_inc = 0, base_start = 0, base_inc = 1;

	//pi = palette index
	UINT16 pi_start, pi_amt;

	//MOD
	UINT16 mod_type, mod_amt;

	//Check to see if we are modifying any basic palettes

	

	

	index_data = curr_data[index_ctr];

	while((index_data & 0xF000) != SUPP_START)
	{
		supp_basic = FALSE;
		supp_extra = FALSE;

		if((index_data & 0xF000) == SUPP_NODE) //&& index_ctr < index_sz)
		{
			//Possible sources = SUPP_NODE, SUPP_NODE_EX, SUPP_NODE_ABSOL, SUPP_NODE_EX | SUPP_NODE_NOCOPY, SUPP_NODE_EX | SUPP_NODE_ABSOL
			
			//Fix later

			add = 3; //SUPP_NODE

			UINT16 in_start = curr_data[index_ctr + 1];
			
			if(in_start & MOD_ABS)
				node_start = in_start & 0x7FFF;
			else
				node_start = in_start + ID_MOD;

			node_inc = curr_data[index_ctr + 2];

			//Set the source palette
			src_pal = pal_no;
			
			if ((index_data & SUPP_NODE_ABSOL) == SUPP_NODE_ABSOL)
			{
				base_start = curr_data[index_ctr + 3];

				if(base_start & MOD_ABS)
					base_start = base_start & 0x7FFF;
				else
					base_start = base_start + ID_MOD;

				base_inc = curr_data[index_ctr + 4];

				/*
				if((pal_no / base_inc) < 6 && pal_no - ((pal_no / base_inc) * base_inc) == base_start)
					supp_extra = TRUE;
				else if((index_data & SUPP_NODE_NOCOPY) == SUPP_NODE_NOCOPY)
				{
					supp_extra = TRUE;
				}
				*/

				add+= 2;
			}
			else
			{
				base_start = 0;
				base_inc = 8;
			}
				
			if((pal_no / 8) < 6 && (pal_no % 8) == 0)
			{
				supp_basic = TRUE;
			}
			
			
			
			pal_ctr = pal_no / base_inc;
			dst_pal = node_start + (node_inc * pal_ctr);

			if ((index_data & SUPP_NODE_ABSOL) == SUPP_NODE_ABSOL)
			{
				//Set the absolute source palette
				src_pal = base_start + (base_inc * pal_ctr);

			}

			//Set the counter past the indexes
			index_ctr += add;
			add = 0;

			if((index_data & SUPP_NODE_EX) == SUPP_NODE_EX)
			{
				add= 3;
			}
			
			
			if(supp_basic)
			{
				int copy_start = 0;
				int copy_amt = 16;
				int copy_dst = 0;

				if((index_data & SUPP_NODE_EX) == SUPP_NODE_EX)
				{
					copy_start = curr_data[index_ctr + 0];
					copy_amt = curr_data[index_ctr + 1];
					copy_dst = curr_data[index_ctr + 2];
				}
					
				if(index_data != SUPP_NODE_NOCOPY)
				{
					supp_copy_index(char_no, src_pal, dst_pal, copy_dst, copy_start, copy_amt);
				}
			

				index_ctr += add;	
				index_data = curr_data[index_ctr];

				while((index_data & 0xF000) != SUPP_NODE && (index_data & 0xF000) != SUPP_START)
				{
					pi_start = curr_data[index_ctr+1];
					pi_amt = curr_data[index_ctr+2];


					switch(index_data)
					{
						

						case MOD_TINT:
							{
								//Tint not supported
	                          
								index_ctr += 3;


								break;
							}
						case MOD_WHITE:
							{
								if(supp_basic || supp_extra)
									supp_mod_white(char_no, dst_pal, pi_start, pi_amt);

								index_ctr += 3;

								break;
							}
						case MOD_COPY:
							{
								
								supp_copy_index(char_no, pal_no, dst_pal, curr_data[index_ctr + 3], pi_start, pi_amt);

								index_ctr += 4;
								break;
							}
						case MOD_LUM:
						case MOD_SAT:
							{
								if(supp_basic || supp_extra)
								{
									mod_type = curr_data[index_ctr];
									mod_amt = curr_data[index_ctr + 3];

									supp_mod_hsl(char_no, mod_type, mod_amt, dst_pal, pi_start, pi_amt);
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



}

inline UINT16 * get_pal_16(int char_id, int pal_no)
{
	return (UINT16 *)&_mvc2_data[char_id][pal_no * 32];
}

void supp_copy_palette(UINT16 char_id, UINT16 dst_pal, UINT16 src_pal)
{
	UINT8 *src, *dst;

	src = &_mvc2_data[char_id][src_pal * 32];
	dst = &_mvc2_data[char_id][dst_pal * 32];

	memcpy(dst, src, 32);

}

void supp_copy_index(UINT16 char_id, UINT16 src_pal, UINT16 dst_pal, UINT8 dst_index, UINT8 src_index, UINT8 index_amt)
{
	UINT16 *src_16, *dst_16;

	src_16 = get_pal_16(char_id, src_pal);
	dst_16 = get_pal_16(char_id, dst_pal);

	memcpy(&dst_16[dst_index], &src_16[src_index], index_amt * sizeof(UINT16));
	
}

void supp_mod_white(UINT16 char_id, UINT16 dst_pal, UINT8 index_start, UINT8 index_inc)
{
	UINT16 *dst_16;

	dst_16 = get_pal_16(char_id, dst_pal);

	for(int i = index_start; i < index_start + index_inc; i++)
	{
		dst_16[i] |= 0xFFFF;
	}

}

void supp_mod_hsl(UINT16 char_id, UINT16 mod_type, int mod_amt, UINT16 dst_pal, UINT8 index_start, UINT8 index_inc)
{
	UINT16 *dst_16;

	COLORREF input_col;

	double src_h, src_s, src_l, /* add_h ,*/ add_s = 0.0, add_l = 0.0;
	
	dst_16 = get_pal_16(char_id, dst_pal);

	if(mod_amt > NEG) //Is it negative?
	{
		mod_amt -= NEG;
		mod_amt *= -1;
	}

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



