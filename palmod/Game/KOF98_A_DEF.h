#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of KOF98_A_KYO_PALETTE_A. 
// * Update every array using KOF98_A_NUMUNIT below
// That should be it.  Good luck.

constexpr auto KOF98_A_NUMUNIT = indexKOF98_A_Last;

#define KOF98_A_EXTRALOC KOF98_A_NUMUNIT

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_A[] =
{
    { "Kyo A - Main",  0x2d97f0, 0x2d9810 },
    { "Kyo A - Extra 1",  0x2d9810, 0x2d9830 },
    { "Kyo A - Extra 2",  0x2d9830, 0x2d9850 },
    { "Kyo A - Max Mode",  0x2d9850, 0x2d9870 },
    { "Kyo A - Extra 3",  0x2d9870, 0x2d9890 },
    { "Kyo A - Extra 4",  0x2d9890, 0x2d98b0 },
    { "Kyo A - Order Select",  0x2d98b0, 0x2d98d0 },
    { "Kyo A - Life Bar Portrait",  0x2d98d0, 0x2d98f0 },
    { "Kyo A - Win Screen Portrait/sprite",  0x2d98f0, 0x2d99f0 },
};

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_B[] =
{
    { "Kyo B - Main",  0x2d99f0, 0x2d9a10 },
    { "Kyo B - Extra 1",  0x2d9a10, 0x2d9a30 },
    { "Kyo B - Extra 2",  0x2d9a30, 0x2d9a50 },
    { "Kyo B - Max Mode",  0x2d9a50, 0x2d9a70 },
    { "Kyo B - Extra 3",  0x2d9a70, 0x2d9a90 },
    { "Kyo B - Extra 4",  0x2d9a90, 0x2d9ab0 },
    { "Kyo B - Order Select",  0x2d9ab0, 0x2d9ad0 },
    { "Kyo B - Life Bar Portrait",  0x2d9ad0, 0x2d9af0 },
    { "Kyo B - Win Screen Portrait/sprite",  0x2d9af0, 0x2d9bf0 },
};

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_C[] =
{
    { "Kyo C - Main",  0x2d9bf0, 0x2d9c10 },
    { "Kyo C - Extra 1",  0x2d9c10, 0x2d9c30 },
    { "Kyo C - Extra 2",  0x2d9c30, 0x2d9c50 },
    { "Kyo C - Max Mode",  0x2d9c50, 0x2d9c70 },
    { "Kyo C - Extra 3",  0x2d9c70, 0x2d9c90 },
    { "Kyo C - Extra 4",  0x2d9c90, 0x2d9cb0 },
    { "Kyo C - Order Select",  0x2d9cb0, 0x2d9cd0 },
    { "Kyo C - Life Bar Portrait",  0x2d9cd0, 0x2d9cf0 },
    { "Kyo C - Win Screen Portrait/sprite",  0x2d9cf0, 0x2d9df0 },
};

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_D[] =
{
    { "Kyo D - Main",  0x2d9df0, 0x2d9e10 },
    { "Kyo D - Extra 1",  0x2d9e10, 0x2d9e30 },
    { "Kyo D - Extra 2",  0x2d9e30, 0x2d9e50 },
    { "Kyo D - Max Mode",  0x2d9e50, 0x2d9e70 },
    { "Kyo D - Extra 3",  0x2d9e70, 0x2d9e90 },
    { "Kyo D - Extra 4",  0x2d9e90, 0x2d9eb0 },
    { "Kyo D - Order Select",  0x2d9eb0, 0x2d9ed0 },
    { "Kyo D - Life Bar Portrait",  0x2d9ed0, 0x2d9ef0 },
    { "Kyo D - Win Screen Portrait/sprite",  0x2d9ef0, 0x2d9ff0 },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_A[] =
{
    { "Benimaru A - Main",  0x2d9ff0, 0x2da010 },
    { "Benimaru A - Extra 1",  0x2da010, 0x2da030 },
    { "Benimaru A - Extra 2",  0x2da030, 0x2da050 },
    { "Benimaru A - Max Mode",  0x2da050, 0x2da070 },
    { "Benimaru A - Extra 3",  0x2da070, 0x2da090 },
    { "Benimaru A - Extra 4",  0x2da090, 0x2da0b0 },
    { "Benimaru A - Order Select",  0x2da0b0, 0x2da0d0 },
    { "Benimaru A - Life Bar Portrait",  0x2da0d0, 0x2da0f0 },
    { "Benimaru A - Win Screen Portrait/sprite",  0x2da0f0, 0x2da1f0 },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_B[] =
{
    { "Benimaru B - Main",  0x2da1f0, 0x2da210 },
    { "Benimaru B - Extra 1",  0x2da210, 0x2da230 },
    { "Benimaru B - Extra 2",  0x2da230, 0x2da250 },
    { "Benimaru B - Max Mode",  0x2da250, 0x2da270 },
    { "Benimaru B - Extra 3",  0x2da270, 0x2da290 },
    { "Benimaru B - Extra 4",  0x2da290, 0x2da2b0 },
    { "Benimaru B - Order Select",  0x2da2b0, 0x2da2d0 },
    { "Benimaru B - Life Bar Portrait",  0x2da2d0, 0x2da2f0 },
    { "Benimaru B - Win Screen Portrait/sprite",  0x2da2f0, 0x2da3f0 },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_C[] =
{
    { "Benimaru C - Main",  0x2da3f0, 0x2da410 },
    { "Benimaru C - Extra 1",  0x2da410, 0x2da430 },
    { "Benimaru C - Extra 2",  0x2da430, 0x2da450 },
    { "Benimaru C - Max Mode",  0x2da450, 0x2da470 },
    { "Benimaru C - Extra 3",  0x2da470, 0x2da490 },
    { "Benimaru C - Extra 4",  0x2da490, 0x2da4b0 },
    { "Benimaru C - Order Select",  0x2da4b0, 0x2da4d0 },
    { "Benimaru C - Life Bar Portrait",  0x2da4d0, 0x2da4f0 },
    { "Benimaru C - Win Screen Portrait/sprite",  0x2da4f0, 0x2da5f0 },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_D[] =
{
    { "Benimaru D - Main",  0x2da5f0, 0x2da610 },
    { "Benimaru D - Extra 1",  0x2da610, 0x2da630 },
    { "Benimaru D - Extra 2",  0x2da630, 0x2da650 },
    { "Benimaru D - Max Mode",  0x2da650, 0x2da670 },
    { "Benimaru D - Extra 3",  0x2da670, 0x2da690 },
    { "Benimaru D - Extra 4",  0x2da690, 0x2da6b0 },
    { "Benimaru D - Order Select",  0x2da6b0, 0x2da6d0 },
    { "Benimaru D - Life Bar Portrait",  0x2da6d0, 0x2da6f0 },
    { "Benimaru D - Win Screen Portrait/sprite",  0x2da6f0, 0x2da7f0 }, 
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_A[] =
{
    { "Daimon A - Main",  0x2da7f0, 0x2da810 },
    { "Daimon A - Extra 1",  0x2da810, 0x2da830 },
    { "Daimon A - Extra 2",  0x2da830, 0x2da850 },
    { "Daimon A - Max Mode",  0x2da850, 0x2da870 },
    { "Daimon A - Extra 3",  0x2da870, 0x2da890 },
    { "Daimon A - Extra 4",  0x2da890, 0x2da8b0 },
    { "Daimon A - Order Select",  0x2da8b0, 0x2da8d0 },
    { "Daimon A - Life Bar Portrait",  0x2da8d0, 0x2da8f0 },
    { "Daimon A - Win Screen Portrait/sprite",  0x2da8f0, 0x2da9f0 },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_B[] =
{
    { "Daimon B - Main",  0x2da9f0, 0x2daa10 },
    { "Daimon B - Extra 1",  0x2daa10, 0x2daa30 },
    { "Daimon B - Extra 2",  0x2daa30, 0x2daa50 },
    { "Daimon B - Max Mode",  0x2daa50, 0x2daa70 },
    { "Daimon B - Extra 3",  0x2daa70, 0x2daa90 },
    { "Daimon B - Extra 4",  0x2daa90, 0x2daab0 },
    { "Daimon B - Order Select",  0x2daab0, 0x2daad0 },
    { "Daimon B - Life Bar Portrait",  0x2daad0, 0x2daaf0 },
    { "Daimon B - Win Screen Portrait/sprite",  0x2daaf0, 0x2dabf0 },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_C[] =
{
    { "Daimon C - Main",  0x2dabf0, 0x2dac10 },
    { "Daimon C - Extra 1",  0x2dac10, 0x2dac30 },
    { "Daimon C - Extra 2",  0x2dac30, 0x2dac50 },
    { "Daimon C - Max Mode",  0x2dac50, 0x2dac70 },
    { "Daimon C - Extra 3",  0x2dac70, 0x2dac90 },
    { "Daimon C - Extra 4",  0x2dac90, 0x2dacb0 },
    { "Daimon C - Order Select",  0x2dacb0, 0x2dacd0 },
    { "Daimon C - Life Bar Portrait",  0x2dacd0, 0x2dacf0 },
    { "Daimon C - Win Screen Portrait/sprite",  0x2dacf0, 0x2dadf0 },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_D[] =
{
    { "Daimon D - Main",  0x2dadf0, 0x2dae10 },
    { "Daimon D - Extra 1",  0x2dae10, 0x2dae30 },
    { "Daimon D - Extra 2",  0x2dae30, 0x2dae50 },
    { "Daimon D - Max Mode",  0x2dae50, 0x2dae70 },
    { "Daimon D - Extra 3",  0x2dae70, 0x2dae90 },
    { "Daimon D - Extra 4",  0x2dae90, 0x2daeb0 },
    { "Daimon D - Order Select",  0x2daeb0, 0x2daed0 },
    { "Daimon D - Life Bar Portrait",  0x2daed0, 0x2daef0 },
    { "Daimon D - Win Screen Portrait/sprite",  0x2daef0, 0x2daff0 },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_A[] =
{
    { "Terry A - Main",  0x2daff0, 0x2db010 },
    { "Terry A - Extra 1",  0x2db010, 0x2db030 },
    { "Terry A - Extra 2",  0x2db030, 0x2db050 },
    { "Terry A - Max Mode",  0x2db050, 0x2db070 },
    { "Terry A - Extra 3",  0x2db070, 0x2db090 },
    { "Terry A - Extra 4",  0x2db090, 0x2db0b0 },
    { "Terry A - Order Select",  0x2db0b0, 0x2db0d0 },
    { "Terry A - Life Bar Portrait",  0x2db0d0, 0x2db0f0 },
    { "Terry A - Win Screen Portrait/sprite",  0x2db0f0, 0x2db1f0 },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_B[] =
{
    { "Terry B - Main",  0x2db1f0, 0x2db210 },
    { "Terry B - Extra 1",  0x2db210, 0x2db230 },
    { "Terry B - Extra 2",  0x2db230, 0x2db250 },
    { "Terry B - Max Mode",  0x2db250, 0x2db270 },
    { "Terry B - Extra 3",  0x2db270, 0x2db290 },
    { "Terry B - Extra 4",  0x2db290, 0x2db2b0 },
    { "Terry B - Order Select",  0x2db2b0, 0x2db2d0 },
    { "Terry B - Life Bar Portrait",  0x2db2d0, 0x2db2f0 },
    { "Terry B - Win Screen Portrait/sprite",  0x2db2f0, 0x2db3f0 },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_C[] =
{
    { "Terry C - Main",  0x2db3f0, 0x2db410 },
    { "Terry C - Extra 1",  0x2db410, 0x2db430 },
    { "Terry C - Extra 2",  0x2db430, 0x2db450 },
    { "Terry C - Max Mode",  0x2db450, 0x2db470 },
    { "Terry C - Extra 3",  0x2db470, 0x2db490 },
    { "Terry C - Extra 4",  0x2db490, 0x2db4b0 },
    { "Terry C - Order Select",  0x2db4b0, 0x2db4d0 },
    { "Terry C - Life Bar Portrait",  0x2db4d0, 0x2db4f0 },
    { "Terry C - Win Screen Portrait/sprite",  0x2db4f0, 0x2db5f0 },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_D[] =
{
    { "Terry D - Main",  0x2db5f0, 0x2db610 },
    { "Terry D - Extra 1",  0x2db610, 0x2db630 },
    { "Terry D - Extra 2",  0x2db630, 0x2db650 },
    { "Terry D - Max Mode",  0x2db650, 0x2db670 },
    { "Terry D - Extra 3",  0x2db670, 0x2db690 },
    { "Terry D - Extra 4",  0x2db690, 0x2db6b0 },
    { "Terry D - Order Select",  0x2db6b0, 0x2db6d0 },
    { "Terry D - Life Bar Portrait",  0x2db6d0, 0x2db6f0 },
    { "Terry D - Win Screen Portrait/sprite",  0x2db6f0, 0x2db7f0 },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_A[] =
{
    { "Andy A - Main",  0x2db7f0, 0x2db810 },
    { "Andy A - Extra 1",  0x2db810, 0x2db830 },
    { "Andy A - Extra 2",  0x2db830, 0x2db850 },
    { "Andy A - Max Mode",  0x2db850, 0x2db870 },
    { "Andy A - Extra 3",  0x2db870, 0x2db890 },
    { "Andy A - Extra 4",  0x2db890, 0x2db8b0 },
    { "Andy A - Order Select",  0x2db8b0, 0x2db8d0 },
    { "Andy A - Life Bar Portrait",  0x2db8d0, 0x2db8f0 },
    { "Andy A - Win Screen Portrait/sprite",  0x2db8f0, 0x2db9f0 },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_B[] =
{
    { "Andy B - Main",  0x2db9f0, 0x2dba10 },
    { "Andy B - Extra 1",  0x2dba10, 0x2dba30 },
    { "Andy B - Extra 2",  0x2dba30, 0x2dba50 },
    { "Andy B - Max Mode",  0x2dba50, 0x2dba70 },
    { "Andy B - Extra 3",  0x2dba70, 0x2dba90 },
    { "Andy B - Extra 4",  0x2dba90, 0x2dbab0 },
    { "Andy B - Order Select",  0x2dbab0, 0x2dbad0 },
    { "Andy B - Life Bar Portrait",  0x2dbad0, 0x2dbaf0 },
    { "Andy B - Win Screen Portrait/sprite",  0x2dbaf0, 0x2dbbf0 },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_C[] =
{
    { "Andy C - Main",  0x2dbbf0, 0x2dbc10 },
    { "Andy C - Extra 1",  0x2dbc10, 0x2dbc30 },
    { "Andy C - Extra 2",  0x2dbc30, 0x2dbc50 },
    { "Andy C - Max Mode",  0x2dbc50, 0x2dbc70 },
    { "Andy C - Extra 3",  0x2dbc70, 0x2dbc90 },
    { "Andy C - Extra 4",  0x2dbc90, 0x2dbcb0 },
    { "Andy C - Order Select",  0x2dbcb0, 0x2dbcd0 },
    { "Andy C - Life Bar Portrait",  0x2dbcd0, 0x2dbcf0 },
    { "Andy C - Win Screen Portrait/sprite",  0x2dbcf0, 0x2dbdf0 },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_D[] =
{
    { "Andy D - Main",  0x2dbdf0, 0x2dbe10 },
    { "Andy D - Extra 1",  0x2dbe10, 0x2dbe30 },
    { "Andy D - Extra 2",  0x2dbe30, 0x2dbe50 },
    { "Andy D - Max Mode",  0x2dbe50, 0x2dbe70 },
    { "Andy D - Extra 3",  0x2dbe70, 0x2dbe90 },
    { "Andy D - Extra 4",  0x2dbe90, 0x2dbeb0 },
    { "Andy D - Order Select",  0x2dbeb0, 0x2dbed0 },
    { "Andy D - Life Bar Portrait",  0x2dbed0, 0x2dbef0 },
    { "Andy D - Win Screen Portrait/sprite",  0x2dbef0, 0x2dbff0 },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_A[] =
{
    { "Joe A - Main",  0x2dbff0, 0x2dc010 },
    { "Joe A - Extra 1",  0x2dc010, 0x2dc030 },
    { "Joe A - Extra 2",  0x2dc030, 0x2dc050 },
    { "Joe A - Max Mode",  0x2dc050, 0x2dc070 },
    { "Joe A - Extra 3",  0x2dc070, 0x2dc090 },
    { "Joe A - Extra 4",  0x2dc090, 0x2dc0b0 },
    { "Joe A - Order Select",  0x2dc0b0, 0x2dc0d0 },
    { "Joe A - Life Bar Portrait",  0x2dc0d0, 0x2dc0f0 },
    { "Joe A - Win Screen Portrait/sprite",  0x2dc0f0, 0x2dc1f0 },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_B[] =
{
    { "Joe B - Main",  0x2dc1f0, 0x2dc210 },
    { "Joe B - Extra 1",  0x2dc210, 0x2dc230 },
    { "Joe B - Extra 2",  0x2dc230, 0x2dc250 },
    { "Joe B - Max Mode",  0x2dc250, 0x2dc270 },
    { "Joe B - Extra 3",  0x2dc270, 0x2dc290 },
    { "Joe B - Extra 4",  0x2dc290, 0x2dc2b0 },
    { "Joe B - Order Select",  0x2dc2b0, 0x2dc2d0 },
    { "Joe B - Life Bar Portrait",  0x2dc2d0, 0x2dc2f0 },
    { "Joe B - Win Screen Portrait/sprite",  0x2dc2f0, 0x2dc3f0 },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_C[] =
{
    { "Joe C - Main",  0x2dc3f0, 0x2dc410 },
    { "Joe C - Extra 1",  0x2dc410, 0x2dc430 },
    { "Joe C - Extra 2",  0x2dc430, 0x2dc450 },
    { "Joe C - Max Mode",  0x2dc450, 0x2dc470 },
    { "Joe C - Extra 3",  0x2dc470, 0x2dc490 },
    { "Joe C - Extra 4",  0x2dc490, 0x2dc4b0 },
    { "Joe C - Order Select",  0x2dc4b0, 0x2dc4d0 },
    { "Joe C - Life Bar Portrait",  0x2dc4d0, 0x2dc4f0 },
    { "Joe C - Win Screen Portrait/sprite",  0x2dc4f0, 0x2dc5f0 },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_D[] =
{
    { "Joe D - Main",  0x2dc5f0, 0x2dc610 },
    { "Joe D - Extra 1",  0x2dc610, 0x2dc630 },
    { "Joe D - Extra 2",  0x2dc630, 0x2dc650 },
    { "Joe D - Max Mode",  0x2dc650, 0x2dc670 },
    { "Joe D - Extra 3",  0x2dc670, 0x2dc690 },
    { "Joe D - Extra 4",  0x2dc690, 0x2dc6b0 },
    { "Joe D - Order Select",  0x2dc6b0, 0x2dc6d0 },
    { "Joe D - Life Bar Portrait",  0x2dc6d0, 0x2dc6f0 },
    { "Joe D - Win Screen Portrait/sprite",  0x2dc6f0, 0x2dc7f0 },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_A[] =
{
    { "Ryo A - Main",  0x2dc7f0, 0x2dc810 },
    { "Ryo A - Extra 1",  0x2dc810, 0x2dc830 },
    { "Ryo A - Extra 2",  0x2dc830, 0x2dc850 },
    { "Ryo A - Max Mode",  0x2dc850, 0x2dc870 },
    { "Ryo A - Extra 3",  0x2dc870, 0x2dc890 },
    { "Ryo A - Extra 4",  0x2dc890, 0x2dc8b0 },
    { "Ryo A - Order Select",  0x2dc8b0, 0x2dc8d0 },
    { "Ryo A - Life Bar Portrait",  0x2dc8d0, 0x2dc8f0 },
    { "Ryo A - Win Screen Portrait/sprite",  0x2dc8f0, 0x2dc9f0 },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_B[] =
{
    { "Ryo B - Main",  0x2dc9f0, 0x2dca10 },
    { "Ryo B - Extra 1",  0x2dca10, 0x2dca30 },
    { "Ryo B - Extra 2",  0x2dca30, 0x2dca50 },
    { "Ryo B - Max Mode",  0x2dca50, 0x2dca70 },
    { "Ryo B - Extra 3",  0x2dca70, 0x2dca90 },
    { "Ryo B - Extra 4",  0x2dca90, 0x2dcab0 },
    { "Ryo B - Order Select",  0x2dcab0, 0x2dcad0 },
    { "Ryo B - Life Bar Portrait",  0x2dcad0, 0x2dcaf0 },
    { "Ryo B - Win Screen Portrait/sprite",  0x2dcaf0, 0x2dcbf0 },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_C[] =
{
    { "Ryo C - Main",  0x2dcbf0, 0x2dcc10 },
    { "Ryo C - Extra 1",  0x2dcc10, 0x2dcc30 },
    { "Ryo C - Extra 2",  0x2dcc30, 0x2dcc50 },
    { "Ryo C - Max Mode",  0x2dcc50, 0x2dcc70 },
    { "Ryo C - Extra 3",  0x2dcc70, 0x2dcc90 },
    { "Ryo C - Extra 4",  0x2dcc90, 0x2dccb0 },
    { "Ryo C - Order Select",  0x2dccb0, 0x2dccd0 },
    { "Ryo C - Life Bar Portrait",  0x2dccd0, 0x2dccf0 },
    { "Ryo C - Win Screen Portrait/sprite",  0x2dccf0, 0x2dcdf0 },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_D[] =
{
    { "Ryo D - Main",  0x2dcdf0, 0x2dce10 },
    { "Ryo D - Extra 1",  0x2dce10, 0x2dce30 },
    { "Ryo D - Extra 2",  0x2dce30, 0x2dce50 },
    { "Ryo D - Max Mode",  0x2dce50, 0x2dce70 },
    { "Ryo D - Extra 3",  0x2dce70, 0x2dce90 },
    { "Ryo D - Extra 4",  0x2dce90, 0x2dceb0 },
    { "Ryo D - Order Select",  0x2dceb0, 0x2dced0 },
    { "Ryo D - Life Bar Portrait",  0x2dced0, 0x2dcef0 },
    { "Ryo D - Win Screen Portrait/sprite",  0x2dcef0, 0x2dcff0 },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_A[] =
{
    { "Robert A - Main",  0x2dcff0, 0x2dd010 },
    { "Robert A - Extra 1",  0x2dd010, 0x2dd030 },
    { "Robert A - Extra 2",  0x2dd030, 0x2dd050 },
    { "Robert A - Max Mode",  0x2dd050, 0x2dd070 },
    { "Robert A - Extra 3",  0x2dd070, 0x2dd090 },
    { "Robert A - Extra 4",  0x2dd090, 0x2dd0b0 },
    { "Robert A - Order Select",  0x2dd0b0, 0x2dd0d0 },
    { "Robert A - Life Bar Portrait",  0x2dd0d0, 0x2dd0f0 },
    { "Robert A - Win Screen Portrait/sprite",  0x2dd0f0, 0x2dd1f0 },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_B[] =
{
    { "Robert B - Main",  0x2dd1f0, 0x2dd210 },
    { "Robert B - Extra 1",  0x2dd210, 0x2dd230 },
    { "Robert B - Extra 2",  0x2dd230, 0x2dd250 },
    { "Robert B - Max Mode",  0x2dd250, 0x2dd270 },
    { "Robert B - Extra 3",  0x2dd270, 0x2dd290 },
    { "Robert B - Extra 4",  0x2dd290, 0x2dd2b0 },
    { "Robert B - Order Select",  0x2dd2b0, 0x2dd2d0 },
    { "Robert B - Life Bar Portrait",  0x2dd2d0, 0x2dd2f0 },
    { "Robert B - Win Screen Portrait/sprite",  0x2dd2f0, 0x2dd3f0 },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_C[] =
{
    { "Robert C - Main",  0x2dd3f0, 0x2dd410 },
    { "Robert C - Extra 1",  0x2dd410, 0x2dd430 },
    { "Robert C - Extra 2",  0x2dd430, 0x2dd450 },
    { "Robert C - Max Mode",  0x2dd450, 0x2dd470 },
    { "Robert C - Extra 3",  0x2dd470, 0x2dd490 },
    { "Robert C - Extra 4",  0x2dd490, 0x2dd4b0 },
    { "Robert C - Order Select",  0x2dd4b0, 0x2dd4d0 },
    { "Robert C - Life Bar Portrait",  0x2dd4d0, 0x2dd4f0 },
    { "Robert C - Win Screen Portrait/sprite",  0x2dd4f0, 0x2dd5f0 },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_D[] =
{
    { "Robert D - Main",  0x2dd5f0, 0x2dd610 },
    { "Robert D - Extra 1",  0x2dd610, 0x2dd630 },
    { "Robert D - Extra 2",  0x2dd630, 0x2dd650 },
    { "Robert D - Max Mode",  0x2dd650, 0x2dd670 },
    { "Robert D - Extra 3",  0x2dd670, 0x2dd690 },
    { "Robert D - Extra 4",  0x2dd690, 0x2dd6b0 },
    { "Robert D - Order Select",  0x2dd6b0, 0x2dd6d0 },
    { "Robert D - Life Bar Portrait",  0x2dd6d0, 0x2dd6f0 },
    { "Robert D - Win Screen Portrait/sprite",  0x2dd6f0, 0x2dd7f0 },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_A[] =
{
    { "Yuri A - Main",  0x2dd7f0, 0x2dd810 },
    { "Yuri A - Extra 1",  0x2dd810, 0x2dd830 },
    { "Yuri A - Extra 2",  0x2dd830, 0x2dd850 },
    { "Yuri A - Max Mode",  0x2dd850, 0x2dd870 },
    { "Yuri A - Extra 3",  0x2dd870, 0x2dd890 },
    { "Yuri A - Extra 4",  0x2dd890, 0x2dd8b0 },
    { "Yuri A - Order Select",  0x2dd8b0, 0x2dd8d0 },
    { "Yuri A - Life Bar Portrait",  0x2dd8d0, 0x2dd8f0 },
    { "Yuri A - Win Screen Portrait/sprite",  0x2dd8f0, 0x2dd9f0 },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_B[] =
{
    { "Yuri B - Main",  0x2dd9f0, 0x2dda10 },
    { "Yuri B - Extra 1",  0x2dda10, 0x2dda30 },
    { "Yuri B - Extra 2",  0x2dda30, 0x2dda50 },
    { "Yuri B - Max Mode",  0x2dda50, 0x2dda70 },
    { "Yuri B - Extra 3",  0x2dda70, 0x2dda90 },
    { "Yuri B - Extra 4",  0x2dda90, 0x2ddab0 },
    { "Yuri B - Order Select",  0x2ddab0, 0x2ddad0 },
    { "Yuri B - Life Bar Portrait",  0x2ddad0, 0x2ddaf0 },
    { "Yuri B - Win Screen Portrait/sprite",  0x2ddaf0, 0x2ddbf0 },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_C[] =
{
    { "Yuri C - Main",  0x2ddbf0, 0x2ddc10 },
    { "Yuri C - Extra 1",  0x2ddc10, 0x2ddc30 },
    { "Yuri C - Extra 2",  0x2ddc30, 0x2ddc50 },
    { "Yuri C - Max Mode",  0x2ddc50, 0x2ddc70 },
    { "Yuri C - Extra 3",  0x2ddc70, 0x2ddc90 },
    { "Yuri C - Extra 4",  0x2ddc90, 0x2ddcb0 },
    { "Yuri C - Order Select",  0x2ddcb0, 0x2ddcd0 },
    { "Yuri C - Life Bar Portrait",  0x2ddcd0, 0x2ddcf0 },
    { "Yuri C - Win Screen Portrait/sprite",  0x2ddcf0, 0x2dddf0 },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_D[] =
{
    { "Yuri D - Main",  0x2dddf0, 0x2dde10 },
    { "Yuri D - Extra 1",  0x2dde10, 0x2dde30 },
    { "Yuri D - Extra 2",  0x2dde30, 0x2dde50 },
    { "Yuri D - Max Mode",  0x2dde50, 0x2dde70 },
    { "Yuri D - Extra 3",  0x2dde70, 0x2dde90 },
    { "Yuri D - Extra 4",  0x2dde90, 0x2ddeb0 },
    { "Yuri D - Order Select",  0x2ddeb0, 0x2dded0 },
    { "Yuri D - Life Bar Portrait",  0x2dded0, 0x2ddef0 },
    { "Yuri D - Win Screen Portrait/sprite",  0x2ddef0, 0x2ddff0 },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_A[] =
{
    { "Leona A - Main",  0x2ddff0, 0x2de010 },
    { "Leona A - Extra 1",  0x2de010, 0x2de030 },
    { "Leona A - Extra 2",  0x2de030, 0x2de050 },
    { "Leona A - Max Mode",  0x2de050, 0x2de070 },
    { "Leona A - Extra 3",  0x2de070, 0x2de090 },
    { "Leona A - Extra 4",  0x2de090, 0x2de0b0 },
    { "Leona A - Order Select",  0x2de0b0, 0x2de0d0 },
    { "Leona A - Life Bar Portrait",  0x2de0d0, 0x2de0f0 },
    { "Leona A - Win Screen Portrait/sprite",  0x2de0f0, 0x2de1f0 },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_B[] =
{
    { "Leona B - Main",  0x2de1f0, 0x2de210 },
    { "Leona B - Extra 1",  0x2de210, 0x2de230 },
    { "Leona B - Extra 2",  0x2de230, 0x2de250 },
    { "Leona B - Max Mode",  0x2de250, 0x2de270 },
    { "Leona B - Extra 3",  0x2de270, 0x2de290 },
    { "Leona B - Extra 4",  0x2de290, 0x2de2b0 },
    { "Leona B - Order Select",  0x2de2b0, 0x2de2d0 },
    { "Leona B - Life Bar Portrait",  0x2de2d0, 0x2de2f0 },
    { "Leona B - Win Screen Portrait/sprite",  0x2de2f0, 0x2de3f0 },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_C[] =
{
    { "Leona C - Main",  0x2de3f0, 0x2de410 },
    { "Leona C - Extra 1",  0x2de410, 0x2de430 },
    { "Leona C - Extra 2",  0x2de430, 0x2de450 },
    { "Leona C - Max Mode",  0x2de450, 0x2de470 },
    { "Leona C - Extra 3",  0x2de470, 0x2de490 },
    { "Leona C - Extra 4",  0x2de490, 0x2de4b0 },
    { "Leona C - Order Select",  0x2de4b0, 0x2de4d0 },
    { "Leona C - Life Bar Portrait",  0x2de4d0, 0x2de4f0 },
    { "Leona C - Win Screen Portrait/sprite",  0x2de4f0, 0x2de5f0 },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_D[] =
{
    { "Leona D - Main",  0x2de5f0, 0x2de610 },
    { "Leona D - Extra 1",  0x2de610, 0x2de630 },
    { "Leona D - Extra 2",  0x2de630, 0x2de650 },
    { "Leona D - Max Mode",  0x2de650, 0x2de670 },
    { "Leona D - Extra 3",  0x2de670, 0x2de690 },
    { "Leona D - Extra 4",  0x2de690, 0x2de6b0 },
    { "Leona D - Order Select",  0x2de6b0, 0x2de6d0 },
    { "Leona D - Life Bar Portrait",  0x2de6d0, 0x2de6f0 },
    { "Leona D - Win Screen Portrait/sprite",  0x2de6f0, 0x2de7f0 },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_A[] =
{
    { "Ralf A - Main",  0x2de7f0, 0x2de810 },
    { "Ralf A - Extra 1",  0x2de810, 0x2de830 },
    { "Ralf A - Extra 2",  0x2de830, 0x2de850 },
    { "Ralf A - Max Mode",  0x2de850, 0x2de870 },
    { "Ralf A - Extra 3",  0x2de870, 0x2de890 },
    { "Ralf A - Extra 4",  0x2de890, 0x2de8b0 },
    { "Ralf A - Order Select",  0x2de8b0, 0x2de8d0 },
    { "Ralf A - Life Bar Portrait",  0x2de8d0, 0x2de8f0 },
    { "Ralf A - Win Screen Portrait/sprite",  0x2de8f0, 0x2de9f0 },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_B[] =
{
    { "Ralf B - Main",  0x2de9f0, 0x2dea10 },
    { "Ralf B - Extra 1",  0x2dea10, 0x2dea30 },
    { "Ralf B - Extra 2",  0x2dea30, 0x2dea50 },
    { "Ralf B - Max Mode",  0x2dea50, 0x2dea70 },
    { "Ralf B - Extra 3",  0x2dea70, 0x2dea90 },
    { "Ralf B - Extra 4",  0x2dea90, 0x2deab0 },
    { "Ralf B - Order Select",  0x2deab0, 0x2dead0 },
    { "Ralf B - Life Bar Portrait",  0x2dead0, 0x2deaf0 },
    { "Ralf B - Win Screen Portrait/sprite",  0x2deaf0, 0x2debf0 },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_C[] =
{
    { "Ralf C - Main",  0x2debf0, 0x2dec10 },
    { "Ralf C - Extra 1",  0x2dec10, 0x2dec30 },
    { "Ralf C - Extra 2",  0x2dec30, 0x2dec50 },
    { "Ralf C - Max Mode",  0x2dec50, 0x2dec70 },
    { "Ralf C - Extra 3",  0x2dec70, 0x2dec90 },
    { "Ralf C - Extra 4",  0x2dec90, 0x2decb0 },
    { "Ralf C - Order Select",  0x2decb0, 0x2decd0 },
    { "Ralf C - Life Bar Portrait",  0x2decd0, 0x2decf0 },
    { "Ralf C - Win Screen Portrait/sprite",  0x2decf0, 0x2dedf0 },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_D[] =
{
    { "Ralf D - Main",  0x2dedf0, 0x2dee10 },
    { "Ralf D - Extra 1",  0x2dee10, 0x2dee30 },
    { "Ralf D - Extra 2",  0x2dee30, 0x2dee50 },
    { "Ralf D - Max Mode",  0x2dee50, 0x2dee70 },
    { "Ralf D - Extra 3",  0x2dee70, 0x2dee90 },
    { "Ralf D - Extra 4",  0x2dee90, 0x2deeb0 },
    { "Ralf D - Order Select",  0x2deeb0, 0x2deed0 },
    { "Ralf D - Life Bar Portrait",  0x2deed0, 0x2deef0 },
    { "Ralf D - Win Screen Portrait/sprite",  0x2deef0, 0x2deff0 },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_A[] =
{
    { "Clark A - Main",  0x2deff0, 0x2df010 },
    { "Clark A - Extra 1",  0x2df010, 0x2df030 },
    { "Clark A - Extra 2",  0x2df030, 0x2df050 },
    { "Clark A - Max Mode",  0x2df050, 0x2df070 },
    { "Clark A - Extra 3",  0x2df070, 0x2df090 },
    { "Clark A - Extra 4",  0x2df090, 0x2df0b0 },
    { "Clark A - Order Select",  0x2df0b0, 0x2df0d0 },
    { "Clark A - Life Bar Portrait",  0x2df0d0, 0x2df0f0 },
    { "Clark A - Win Screen Portrait/sprite",  0x2df0f0, 0x2df1f0 },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_B[] =
{
    { "Clark B - Main",  0x2df1f0, 0x2df210 },
    { "Clark B - Extra 1",  0x2df210, 0x2df230 },
    { "Clark B - Extra 2",  0x2df230, 0x2df250 },
    { "Clark B - Max Mode",  0x2df250, 0x2df270 },
    { "Clark B - Extra 3",  0x2df270, 0x2df290 },
    { "Clark B - Extra 4",  0x2df290, 0x2df2b0 },
    { "Clark B - Order Select",  0x2df2b0, 0x2df2d0 },
    { "Clark B - Life Bar Portrait",  0x2df2d0, 0x2df2f0 },
    { "Clark B - Win Screen Portrait/sprite",  0x2df2f0, 0x2df3f0 },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_C[] =
{
    { "Clark C - Main",  0x2df3f0, 0x2df410 },
    { "Clark C - Extra 1",  0x2df410, 0x2df430 },
    { "Clark C - Extra 2",  0x2df430, 0x2df450 },
    { "Clark C - Max Mode",  0x2df450, 0x2df470 },
    { "Clark C - Extra 3",  0x2df470, 0x2df490 },
    { "Clark C - Extra 4",  0x2df490, 0x2df4b0 },
    { "Clark C - Order Select",  0x2df4b0, 0x2df4d0 },
    { "Clark C - Life Bar Portrait",  0x2df4d0, 0x2df4f0 },
    { "Clark C - Win Screen Portrait/sprite",  0x2df4f0, 0x2df5f0 },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_D[] =
{
    { "Clark D - Main",  0x2df5f0, 0x2df610 },
    { "Clark D - Extra 1",  0x2df610, 0x2df630 },
    { "Clark D - Extra 2",  0x2df630, 0x2df650 },
    { "Clark D - Max Mode",  0x2df650, 0x2df670 },
    { "Clark D - Extra 3",  0x2df670, 0x2df690 },
    { "Clark D - Extra 4",  0x2df690, 0x2df6b0 },
    { "Clark D - Order Select",  0x2df6b0, 0x2df6d0 },
    { "Clark D - Life Bar Portrait",  0x2df6d0, 0x2df6f0 },
    { "Clark D - Win Screen Portrait/sprite",  0x2df6f0, 0x2df7f0 },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_A[] =
{
    { "Athena A - Main",  0x2df7f0, 0x2df810 },
    { "Athena A - Extra 1",  0x2df810, 0x2df830 },
    { "Athena A - Extra 2",  0x2df830, 0x2df850 },
    { "Athena A - Max Mode",  0x2df850, 0x2df870 },
    { "Athena A - Extra 3",  0x2df870, 0x2df890 },
    { "Athena A - Extra 4",  0x2df890, 0x2df8b0 },
    { "Athena A - Order Select",  0x2df8b0, 0x2df8d0 },
    { "Athena A - Life Bar Portrait",  0x2df8d0, 0x2df8f0 },
    { "Athena A - Win Screen Portrait/sprite",  0x2df8f0, 0x2df9f0 },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_B[] =
{
    { "Athena B - Main",  0x2df9f0, 0x2dfa10 },
    { "Athena B - Extra 1",  0x2dfa10, 0x2dfa30 },
    { "Athena B - Extra 2",  0x2dfa30, 0x2dfa50 },
    { "Athena B - Max Mode",  0x2dfa50, 0x2dfa70 },
    { "Athena B - Extra 3",  0x2dfa70, 0x2dfa90 },
    { "Athena B - Extra 4",  0x2dfa90, 0x2dfab0 },
    { "Athena B - Order Select",  0x2dfab0, 0x2dfad0 },
    { "Athena B - Life Bar Portrait",  0x2dfad0, 0x2dfaf0 },
    { "Athena B - Win Screen Portrait/sprite",  0x2dfaf0, 0x2dfbf0 },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_C[] =
{
    { "Athena C - Main",  0x2dfbf0, 0x2dfc10 },
    { "Athena C - Extra 1",  0x2dfc10, 0x2dfc30 },
    { "Athena C - Extra 2",  0x2dfc30, 0x2dfc50 },
    { "Athena C - Max Mode",  0x2dfc50, 0x2dfc70 },
    { "Athena C - Extra 3",  0x2dfc70, 0x2dfc90 },
    { "Athena C - Extra 4",  0x2dfc90, 0x2dfcb0 },
    { "Athena C - Order Select",  0x2dfcb0, 0x2dfcd0 },
    { "Athena C - Life Bar Portrait",  0x2dfcd0, 0x2dfcf0 },
    { "Athena C - Win Screen Portrait/sprite",  0x2dfcf0, 0x2dfdf0 },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_D[] =
{
    { "Athena D - Main",  0x2dfdf0, 0x2dfe10 },
    { "Athena D - Extra 1",  0x2dfe10, 0x2dfe30 },
    { "Athena D - Extra 2",  0x2dfe30, 0x2dfe50 },
    { "Athena D - Max Mode",  0x2dfe50, 0x2dfe70 },
    { "Athena D - Extra 3",  0x2dfe70, 0x2dfe90 },
    { "Athena D - Extra 4",  0x2dfe90, 0x2dfeb0 },
    { "Athena D - Order Select",  0x2dfeb0, 0x2dfed0 },
    { "Athena D - Life Bar Portrait",  0x2dfed0, 0x2dfef0 },
    { "Athena D - Win Screen Portrait/sprite",  0x2dfef0, 0x2dfff0 },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_A[] =
{
    { "Kensou A - Main",  0x2dfff0, 0x2e0010 },
    { "Kensou A - Extra 1",  0x2e0010, 0x2e0030 },
    { "Kensou A - Extra 2",  0x2e0030, 0x2e0050 },
    { "Kensou A - Max Mode",  0x2e0050, 0x2e0070 },
    { "Kensou A - Extra 3",  0x2e0070, 0x2e0090 },
    { "Kensou A - Extra 4",  0x2e0090, 0x2e00b0 },
    { "Kensou A - Order Select",  0x2e00b0, 0x2e00d0 },
    { "Kensou A - Life Bar Portrait",  0x2e00d0, 0x2e00f0 },
    { "Kensou A - Win Screen Portrait/sprite",  0x2e00f0, 0x2e01f0 },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_B[] =
{
    { "Kensou B - Main",  0x2e01f0, 0x2e0210 },
    { "Kensou B - Extra 1",  0x2e0210, 0x2e0230 },
    { "Kensou B - Extra 2",  0x2e0230, 0x2e0250 },
    { "Kensou B - Max Mode",  0x2e0250, 0x2e0270 },
    { "Kensou B - Extra 3",  0x2e0270, 0x2e0290 },
    { "Kensou B - Extra 4",  0x2e0290, 0x2e02b0 },
    { "Kensou B - Order Select",  0x2e02b0, 0x2e02d0 },
    { "Kensou B - Life Bar Portrait",  0x2e02d0, 0x2e02f0 },
    { "Kensou B - Win Screen Portrait/sprite",  0x2e02f0, 0x2e03f0 },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_C[] =
{
    { "Kensou C - Main",  0x2e03f0, 0x2e0410 },
    { "Kensou C - Extra 1",  0x2e0410, 0x2e0430 },
    { "Kensou C - Extra 2",  0x2e0430, 0x2e0450 },
    { "Kensou C - Max Mode",  0x2e0450, 0x2e0470 },
    { "Kensou C - Extra 3",  0x2e0470, 0x2e0490 },
    { "Kensou C - Extra 4",  0x2e0490, 0x2e04b0 },
    { "Kensou C - Order Select",  0x2e04b0, 0x2e04d0 },
    { "Kensou C - Life Bar Portrait",  0x2e04d0, 0x2e04f0 },
    { "Kensou C - Win Screen Portrait/sprite",  0x2e04f0, 0x2e05f0 },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_D[] =
{
    { "Kensou D - Main",  0x2e05f0, 0x2e0610 },
    { "Kensou D - Extra 1",  0x2e0610, 0x2e0630 },
    { "Kensou D - Extra 2",  0x2e0630, 0x2e0650 },
    { "Kensou D - Max Mode",  0x2e0650, 0x2e0670 },
    { "Kensou D - Extra 3",  0x2e0670, 0x2e0690 },
    { "Kensou D - Extra 4",  0x2e0690, 0x2e06b0 },
    { "Kensou D - Order Select",  0x2e06b0, 0x2e06d0 },
    { "Kensou D - Life Bar Portrait",  0x2e06d0, 0x2e06f0 },
    { "Kensou D - Win Screen Portrait/sprite",  0x2e06f0, 0x2e07f0 },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_A[] =
{
    { "Chin A - Main",  0x2e07f0, 0x2e0810 },
    { "Chin A - Extra 1",  0x2e0810, 0x2e0830 },
    { "Chin A - Extra 2",  0x2e0830, 0x2e0850 },
    { "Chin A - Max Mode",  0x2e0850, 0x2e0870 },
    { "Chin A - Extra 3",  0x2e0870, 0x2e0890 },
    { "Chin A - Extra 4",  0x2e0890, 0x2e08b0 },
    { "Chin A - Order Select",  0x2e08b0, 0x2e08d0 },
    { "Chin A - Life Bar Portrait",  0x2e08d0, 0x2e08f0 },
    { "Chin A - Win Screen Portrait/sprite",  0x2e08f0, 0x2e09f0 },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_B[] =
{
    { "Chin B - Main",  0x2e09f0, 0x2e0a10 },
    { "Chin B - Extra 1",  0x2e0a10, 0x2e0a30 },
    { "Chin B - Extra 2",  0x2e0a30, 0x2e0a50 },
    { "Chin B - Max Mode",  0x2e0a50, 0x2e0a70 },
    { "Chin B - Extra 3",  0x2e0a70, 0x2e0a90 },
    { "Chin B - Extra 4",  0x2e0a90, 0x2e0ab0 },
    { "Chin B - Order Select",  0x2e0ab0, 0x2e0ad0 },
    { "Chin B - Life Bar Portrait",  0x2e0ad0, 0x2e0af0 },
    { "Chin B - Win Screen Portrait/sprite",  0x2e0af0, 0x2e0bf0 },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_C[] =
{
    { "Chin C - Main",  0x2e0bf0, 0x2e0c10 },
    { "Chin C - Extra 1",  0x2e0c10, 0x2e0c30 },
    { "Chin C - Extra 2",  0x2e0c30, 0x2e0c50 },
    { "Chin C - Max Mode",  0x2e0c50, 0x2e0c70 },
    { "Chin C - Extra 3",  0x2e0c70, 0x2e0c90 },
    { "Chin C - Extra 4",  0x2e0c90, 0x2e0cb0 },
    { "Chin C - Order Select",  0x2e0cb0, 0x2e0cd0 },
    { "Chin C - Life Bar Portrait",  0x2e0cd0, 0x2e0cf0 },
    { "Chin C - Win Screen Portrait/sprite",  0x2e0cf0, 0x2e0df0 },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_D[] =
{
    { "Chin D - Main",  0x2e0df0, 0x2e0e10 },
    { "Chin D - Extra 1",  0x2e0e10, 0x2e0e30 },
    { "Chin D - Extra 2",  0x2e0e30, 0x2e0e50 },
    { "Chin D - Max Mode",  0x2e0e50, 0x2e0e70 },
    { "Chin D - Extra 3",  0x2e0e70, 0x2e0e90 },
    { "Chin D - Extra 4",  0x2e0e90, 0x2e0eb0 },
    { "Chin D - Order Select",  0x2e0eb0, 0x2e0ed0 },
    { "Chin D - Life Bar Portrait",  0x2e0ed0, 0x2e0ef0 },
    { "Chin D - Win Screen Portrait/sprite",  0x2e0ef0, 0x2e0ff0 },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_A[] =
{
    { "Chizuru A - Main",  0x2e0ff0, 0x2e1010 },
    { "Chizuru A - Extra 1",  0x2e1010, 0x2e1030 },
    { "Chizuru A - Extra 2",  0x2e1030, 0x2e1050 },
    { "Chizuru A - Max Mode",  0x2e1050, 0x2e1070 },
    { "Chizuru A - Extra 3",  0x2e1070, 0x2e1090 },
    { "Chizuru A - Extra 4",  0x2e1090, 0x2e10b0 },
    { "Chizuru A - Order Select",  0x2e10b0, 0x2e10d0 },
    { "Chizuru A - Life Bar Portrait",  0x2e10d0, 0x2e10f0 },
    { "Chizuru A - Win Screen Portrait/sprite",  0x2e10f0, 0x2e11f0 },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_B[] =
{
    { "Chizuru B - Main",  0x2e11f0, 0x2e1210 },
    { "Chizuru B - Extra 1",  0x2e1210, 0x2e1230 },
    { "Chizuru B - Extra 2",  0x2e1230, 0x2e1250 },
    { "Chizuru B - Max Mode",  0x2e1250, 0x2e1270 },
    { "Chizuru B - Extra 3",  0x2e1270, 0x2e1290 },
    { "Chizuru B - Extra 4",  0x2e1290, 0x2e12b0 },
    { "Chizuru B - Order Select",  0x2e12b0, 0x2e12d0 },
    { "Chizuru B - Life Bar Portrait",  0x2e12d0, 0x2e12f0 },
    { "Chizuru B - Win Screen Portrait/sprite",  0x2e12f0, 0x2e13f0 },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_C[] =
{
    { "Chizuru C - Main",  0x2e13f0, 0x2e1410 },
    { "Chizuru C - Extra 1",  0x2e1410, 0x2e1430 },
    { "Chizuru C - Extra 2",  0x2e1430, 0x2e1450 },
    { "Chizuru C - Max Mode",  0x2e1450, 0x2e1470 },
    { "Chizuru C - Extra 3",  0x2e1470, 0x2e1490 },
    { "Chizuru C - Extra 4",  0x2e1490, 0x2e14b0 },
    { "Chizuru C - Order Select",  0x2e14b0, 0x2e14d0 },
    { "Chizuru C - Life Bar Portrait",  0x2e14d0, 0x2e14f0 },
    { "Chizuru C - Win Screen Portrait/sprite",  0x2e14f0, 0x2e15f0 },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_D[] =
{
    { "Chizuru D - Main",  0x2e15f0, 0x2e1610 },
    { "Chizuru D - Extra 1",  0x2e1610, 0x2e1630 },
    { "Chizuru D - Extra 2",  0x2e1630, 0x2e1650 },
    { "Chizuru D - Max Mode",  0x2e1650, 0x2e1670 },
    { "Chizuru D - Extra 3",  0x2e1670, 0x2e1690 },
    { "Chizuru D - Extra 4",  0x2e1690, 0x2e16b0 },
    { "Chizuru D - Order Select",  0x2e16b0, 0x2e16d0 },
    { "Chizuru D - Life Bar Portrait",  0x2e16d0, 0x2e16f0 },
    { "Chizuru D - Win Screen Portrait/sprite",  0x2e16f0, 0x2e17f0 },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_A[] =
{
    { "Mai A - Main",  0x2e17f0, 0x2e1810 },
    { "Mai A - Extra 1",  0x2e1810, 0x2e1830 },
    { "Mai A - Extra 2",  0x2e1830, 0x2e1850 },
    { "Mai A - Max Mode",  0x2e1850, 0x2e1870 },
    { "Mai A - Extra 3",  0x2e1870, 0x2e1890 },
    { "Mai A - Extra 4",  0x2e1890, 0x2e18b0 },
    { "Mai A - Order Select",  0x2e18b0, 0x2e18d0 },
    { "Mai A - Life Bar Portrait",  0x2e18d0, 0x2e18f0 },
    { "Mai A - Win Screen Portrait/sprite",  0x2e18f0, 0x2e19f0 },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_B[] =
{
    { "Mai B - Main",  0x2e19f0, 0x2e1a10 },
    { "Mai B - Extra 1",  0x2e1a10, 0x2e1a30 },
    { "Mai B - Extra 2",  0x2e1a30, 0x2e1a50 },
    { "Mai B - Max Mode",  0x2e1a50, 0x2e1a70 },
    { "Mai B - Extra 3",  0x2e1a70, 0x2e1a90 },
    { "Mai B - Extra 4",  0x2e1a90, 0x2e1ab0 },
    { "Mai B - Order Select",  0x2e1ab0, 0x2e1ad0 },
    { "Mai B - Life Bar Portrait",  0x2e1ad0, 0x2e1af0 },
    { "Mai B - Win Screen Portrait/sprite",  0x2e1af0, 0x2e1bf0 },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_C[] =
{
    { "Mai C - Main",  0x2e1bf0, 0x2e1c10 },
    { "Mai C - Extra 1",  0x2e1c10, 0x2e1c30 },
    { "Mai C - Extra 2",  0x2e1c30, 0x2e1c50 },
    { "Mai C - Max Mode",  0x2e1c50, 0x2e1c70 },
    { "Mai C - Extra 3",  0x2e1c70, 0x2e1c90 },
    { "Mai C - Extra 4",  0x2e1c90, 0x2e1cb0 },
    { "Mai C - Order Select",  0x2e1cb0, 0x2e1cd0 },
    { "Mai C - Life Bar Portrait",  0x2e1cd0, 0x2e1cf0 },
    { "Mai C - Win Screen Portrait/sprite",  0x2e1cf0, 0x2e1df0 },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_D[] =
{
    { "Mai D - Main",  0x2e1df0, 0x2e1e10 },
    { "Mai D - Extra 1",  0x2e1e10, 0x2e1e30 },
    { "Mai D - Extra 2",  0x2e1e30, 0x2e1e50 },
    { "Mai D - Max Mode",  0x2e1e50, 0x2e1e70 },
    { "Mai D - Extra 3",  0x2e1e70, 0x2e1e90 },
    { "Mai D - Extra 4",  0x2e1e90, 0x2e1eb0 },
    { "Mai D - Order Select",  0x2e1eb0, 0x2e1ed0 },
    { "Mai D - Life Bar Portrait",  0x2e1ed0, 0x2e1ef0 },
    { "Mai D - Win Screen Portrait/sprite",  0x2e1ef0, 0x2e1ff0 },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_A[] =
{
    { "King A - Main",  0x2e1ff0, 0x2e2010 },
    { "King A - Extra 1",  0x2e2010, 0x2e2030 },
    { "King A - Extra 2",  0x2e2030, 0x2e2050 },
    { "King A - Max Mode",  0x2e2050, 0x2e2070 },
    { "King A - Extra 3",  0x2e2070, 0x2e2090 },
    { "King A - Extra 4",  0x2e2090, 0x2e20b0 },
    { "King A - Order Select",  0x2e20b0, 0x2e20d0 },
    { "King A - Life Bar Portrait",  0x2e20d0, 0x2e20f0 },
    { "King A - Win Screen Portrait/sprite",  0x2e20f0, 0x2e21f0 },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_B[] =
{
    { "King B - Main",  0x2e21f0, 0x2e2210 },
    { "King B - Extra 1",  0x2e2210, 0x2e2230 },
    { "King B - Extra 2",  0x2e2230, 0x2e2250 },
    { "King B - Max Mode",  0x2e2250, 0x2e2270 },
    { "King B - Extra 3",  0x2e2270, 0x2e2290 },
    { "King B - Extra 4",  0x2e2290, 0x2e22b0 },
    { "King B - Order Select",  0x2e22b0, 0x2e22d0 },
    { "King B - Life Bar Portrait",  0x2e22d0, 0x2e22f0 },
    { "King B - Win Screen Portrait/sprite",  0x2e22f0, 0x2e23f0 },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_C[] =
{
    { "King C - Main",  0x2e23f0, 0x2e2410 },
    { "King C - Extra 1",  0x2e2410, 0x2e2430 },
    { "King C - Extra 2",  0x2e2430, 0x2e2450 },
    { "King C - Max Mode",  0x2e2450, 0x2e2470 },
    { "King C - Extra 3",  0x2e2470, 0x2e2490 },
    { "King C - Extra 4",  0x2e2490, 0x2e24b0 },
    { "King C - Order Select",  0x2e24b0, 0x2e24d0 },
    { "King C - Life Bar Portrait",  0x2e24d0, 0x2e24f0 },
    { "King C - Win Screen Portrait/sprite",  0x2e24f0, 0x2e25f0 },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_D[] =
{
    { "King D - Main",  0x2e25f0, 0x2e2610 },
    { "King D - Extra 1",  0x2e2610, 0x2e2630 },
    { "King D - Extra 2",  0x2e2630, 0x2e2650 },
    { "King D - Max Mode",  0x2e2650, 0x2e2670 },
    { "King D - Extra 3",  0x2e2670, 0x2e2690 },
    { "King D - Extra 4",  0x2e2690, 0x2e26b0 },
    { "King D - Order Select",  0x2e26b0, 0x2e26d0 },
    { "King D - Life Bar Portrait",  0x2e26d0, 0x2e26f0 },
    { "King D - Win Screen Portrait/sprite",  0x2e26f0, 0x2e27f0 },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_A[] =
{
    { "Kim A - Main",  0x2e27f0, 0x2e2810 },
    { "Kim A - Extra 1",  0x2e2810, 0x2e2830 },
    { "Kim A - Extra 2",  0x2e2830, 0x2e2850 },
    { "Kim A - Max Mode",  0x2e2850, 0x2e2870 },
    { "Kim A - Extra 3",  0x2e2870, 0x2e2890 },
    { "Kim A - Extra 4",  0x2e2890, 0x2e28b0 },
    { "Kim A - Order Select",  0x2e28b0, 0x2e28d0 },
    { "Kim A - Life Bar Portrait",  0x2e28d0, 0x2e28f0 },
    { "Kim A - Win Screen Portrait/sprite",  0x2e28f0, 0x2e29f0 },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_B[] =
{
    { "Kim B - Main",  0x2e29f0, 0x2e2a10 },
    { "Kim B - Extra 1",  0x2e2a10, 0x2e2a30 },
    { "Kim B - Extra 2",  0x2e2a30, 0x2e2a50 },
    { "Kim B - Max Mode",  0x2e2a50, 0x2e2a70 },
    { "Kim B - Extra 3",  0x2e2a70, 0x2e2a90 },
    { "Kim B - Extra 4",  0x2e2a90, 0x2e2ab0 },
    { "Kim B - Order Select",  0x2e2ab0, 0x2e2ad0 },
    { "Kim B - Life Bar Portrait",  0x2e2ad0, 0x2e2af0 },
    { "Kim B - Win Screen Portrait/sprite",  0x2e2af0, 0x2e2bf0 },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_C[] =
{
    { "Kim C - Main",  0x2e2bf0, 0x2e2c10 },
    { "Kim C - Extra 1",  0x2e2c10, 0x2e2c30 },
    { "Kim C - Extra 2",  0x2e2c30, 0x2e2c50 },
    { "Kim C - Max Mode",  0x2e2c50, 0x2e2c70 },
    { "Kim C - Extra 3",  0x2e2c70, 0x2e2c90 },
    { "Kim C - Extra 4",  0x2e2c90, 0x2e2cb0 },
    { "Kim C - Order Select",  0x2e2cb0, 0x2e2cd0 },
    { "Kim C - Life Bar Portrait",  0x2e2cd0, 0x2e2cf0 },
    { "Kim C - Win Screen Portrait/sprite",  0x2e2cf0, 0x2e2df0 },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_D[] =
{
    { "Kim D - Main",  0x2e2df0, 0x2e2e10 },
    { "Kim D - Extra 1",  0x2e2e10, 0x2e2e30 },
    { "Kim D - Extra 2",  0x2e2e30, 0x2e2e50 },
    { "Kim D - Max Mode",  0x2e2e50, 0x2e2e70 },
    { "Kim D - Extra 3",  0x2e2e70, 0x2e2e90 },
    { "Kim D - Extra 4",  0x2e2e90, 0x2e2eb0 },
    { "Kim D - Order Select",  0x2e2eb0, 0x2e2ed0 },
    { "Kim D - Life Bar Portrait",  0x2e2ed0, 0x2e2ef0 },
    { "Kim D - Win Screen Portrait/sprite",  0x2e2ef0, 0x2e2ff0 },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_A[] =
{
    { "Chang A - Main",  0x2e2ff0, 0x2e3010 },
    { "Chang A - Extra 1",  0x2e3010, 0x2e3030 },
    { "Chang A - Extra 2",  0x2e3030, 0x2e3050 },
    { "Chang A - Max Mode",  0x2e3050, 0x2e3070 },
    { "Chang A - Extra 3",  0x2e3070, 0x2e3090 },
    { "Chang A - Extra 4",  0x2e3090, 0x2e30b0 },
    { "Chang A - Order Select",  0x2e30b0, 0x2e30d0 },
    { "Chang A - Life Bar Portrait",  0x2e30d0, 0x2e30f0 },
    { "Chang A - Win Screen Portrait/sprite",  0x2e30f0, 0x2e31f0 },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_B[] =
{
    { "Chang B - Main",  0x2e31f0, 0x2e3210 },
    { "Chang B - Extra 1",  0x2e3210, 0x2e3230 },
    { "Chang B - Extra 2",  0x2e3230, 0x2e3250 },
    { "Chang B - Max Mode",  0x2e3250, 0x2e3270 },
    { "Chang B - Extra 3",  0x2e3270, 0x2e3290 },
    { "Chang B - Extra 4",  0x2e3290, 0x2e32b0 },
    { "Chang B - Order Select",  0x2e32b0, 0x2e32d0 },
    { "Chang B - Life Bar Portrait",  0x2e32d0, 0x2e32f0 },
    { "Chang B - Win Screen Portrait/sprite",  0x2e32f0, 0x2e33f0 },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_C[] =
{
    { "Chang C - Main",  0x2e33f0, 0x2e3410 },
    { "Chang C - Extra 1",  0x2e3410, 0x2e3430 },
    { "Chang C - Extra 2",  0x2e3430, 0x2e3450 },
    { "Chang C - Max Mode",  0x2e3450, 0x2e3470 },
    { "Chang C - Extra 3",  0x2e3470, 0x2e3490 },
    { "Chang C - Extra 4",  0x2e3490, 0x2e34b0 },
    { "Chang C - Order Select",  0x2e34b0, 0x2e34d0 },
    { "Chang C - Life Bar Portrait",  0x2e34d0, 0x2e34f0 },
    { "Chang C - Win Screen Portrait/sprite",  0x2e34f0, 0x2e35f0 },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_D[] =
{
    { "Chang D - Main",  0x2e35f0, 0x2e3610 },
    { "Chang D - Extra 1",  0x2e3610, 0x2e3630 },
    { "Chang D - Extra 2",  0x2e3630, 0x2e3650 },
    { "Chang D - Max Mode",  0x2e3650, 0x2e3670 },
    { "Chang D - Extra 3",  0x2e3670, 0x2e3690 },
    { "Chang D - Extra 4",  0x2e3690, 0x2e36b0 },
    { "Chang D - Order Select",  0x2e36b0, 0x2e36d0 },
    { "Chang D - Life Bar Portrait",  0x2e36d0, 0x2e36f0 },
    { "Chang D - Win Screen Portrait/sprite",  0x2e36f0, 0x2e37f0 },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_A[] =
{
    { "Choi A - Main",  0x2e37f0, 0x2e3810 },
    { "Choi A - Extra 1",  0x2e3810, 0x2e3830 },
    { "Choi A - Extra 2",  0x2e3830, 0x2e3850 },
    { "Choi A - Max Mode",  0x2e3850, 0x2e3870 },
    { "Choi A - Extra 3",  0x2e3870, 0x2e3890 },
    { "Choi A - Extra 4",  0x2e3890, 0x2e38b0 },
    { "Choi A - Order Select",  0x2e38b0, 0x2e38d0 },
    { "Choi A - Life Bar Portrait",  0x2e38d0, 0x2e38f0 },
    { "Choi A - Win Screen Portrait/sprite",  0x2e38f0, 0x2e39f0 },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_B[] =
{
    { "Choi B - Main",  0x2e39f0, 0x2e3a10 },
    { "Choi B - Extra 1",  0x2e3a10, 0x2e3a30 },
    { "Choi B - Extra 2",  0x2e3a30, 0x2e3a50 },
    { "Choi B - Max Mode",  0x2e3a50, 0x2e3a70 },
    { "Choi B - Extra 3",  0x2e3a70, 0x2e3a90 },
    { "Choi B - Extra 4",  0x2e3a90, 0x2e3ab0 },
    { "Choi B - Order Select",  0x2e3ab0, 0x2e3ad0 },
    { "Choi B - Life Bar Portrait",  0x2e3ad0, 0x2e3af0 },
    { "Choi B - Win Screen Portrait/sprite",  0x2e3af0, 0x2e3bf0 },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_C[] =
{
    { "Choi C - Main",  0x2e3bf0, 0x2e3c10 },
    { "Choi C - Extra 1",  0x2e3c10, 0x2e3c30 },
    { "Choi C - Extra 2",  0x2e3c30, 0x2e3c50 },
    { "Choi C - Max Mode",  0x2e3c50, 0x2e3c70 },
    { "Choi C - Extra 3",  0x2e3c70, 0x2e3c90 },
    { "Choi C - Extra 4",  0x2e3c90, 0x2e3cb0 },
    { "Choi C - Order Select",  0x2e3cb0, 0x2e3cd0 },
    { "Choi C - Life Bar Portrait",  0x2e3cd0, 0x2e3cf0 },
    { "Choi C - Win Screen Portrait/sprite",  0x2e3cf0, 0x2e3df0 },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_D[] =
{
    { "Choi D - Main",  0x2e3df0, 0x2e3e10 },
    { "Choi D - Extra 1",  0x2e3e10, 0x2e3e30 },
    { "Choi D - Extra 2",  0x2e3e30, 0x2e3e50 },
    { "Choi D - Max Mode",  0x2e3e50, 0x2e3e70 },
    { "Choi D - Extra 3",  0x2e3e70, 0x2e3e90 },
    { "Choi D - Extra 4",  0x2e3e90, 0x2e3eb0 },
    { "Choi D - Order Select",  0x2e3eb0, 0x2e3ed0 },
    { "Choi D - Life Bar Portrait",  0x2e3ed0, 0x2e3ef0 },
    { "Choi D - Win Screen Portrait/sprite",  0x2e3ef0, 0x2e3ff0 },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_A[] =
{
    { "Yashiro A - Main",  0x2e3ff0, 0x2e4010 },
    { "Yashiro A - Extra 1",  0x2e4010, 0x2e4030 },
    { "Yashiro A - Extra 2",  0x2e4030, 0x2e4050 },
    { "Yashiro A - Max Mode",  0x2e4050, 0x2e4070 },
    { "Yashiro A - Extra 3",  0x2e4070, 0x2e4090 },
    { "Yashiro A - Extra 4",  0x2e4090, 0x2e40b0 },
    { "Yashiro A - Order Select",  0x2e40b0, 0x2e40d0 },
    { "Yashiro A - Life Bar Portrait",  0x2e40d0, 0x2e40f0 },
    { "Yashiro A - Win Screen Portrait/sprite",  0x2e40f0, 0x2e41f0 },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_B[] =
{
    { "Yashiro B - Main",  0x2e41f0, 0x2e4210 },
    { "Yashiro B - Extra 1",  0x2e4210, 0x2e4230 },
    { "Yashiro B - Extra 2",  0x2e4230, 0x2e4250 },
    { "Yashiro B - Max Mode",  0x2e4250, 0x2e4270 },
    { "Yashiro B - Extra 3",  0x2e4270, 0x2e4290 },
    { "Yashiro B - Extra 4",  0x2e4290, 0x2e42b0 },
    { "Yashiro B - Order Select",  0x2e42b0, 0x2e42d0 },
    { "Yashiro B - Life Bar Portrait",  0x2e42d0, 0x2e42f0 },
    { "Yashiro B - Win Screen Portrait/sprite",  0x2e42f0, 0x2e43f0 },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_C[] =
{
    { "Yashiro C - Main",  0x2e43f0, 0x2e4410 },
    { "Yashiro C - Extra 1",  0x2e4410, 0x2e4430 },
    { "Yashiro C - Extra 2",  0x2e4430, 0x2e4450 },
    { "Yashiro C - Max Mode",  0x2e4450, 0x2e4470 },
    { "Yashiro C - Extra 3",  0x2e4470, 0x2e4490 },
    { "Yashiro C - Extra 4",  0x2e4490, 0x2e44b0 },
    { "Yashiro C - Order Select",  0x2e44b0, 0x2e44d0 },
    { "Yashiro C - Life Bar Portrait",  0x2e44d0, 0x2e44f0 },
    { "Yashiro C - Win Screen Portrait/sprite",  0x2e44f0, 0x2e45f0 },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_D[] =
{
    { "Yashiro D - Main",  0x2e45f0, 0x2e4610 },
    { "Yashiro D - Extra 1",  0x2e4610, 0x2e4630 },
    { "Yashiro D - Extra 2",  0x2e4630, 0x2e4650 },
    { "Yashiro D - Max Mode",  0x2e4650, 0x2e4670 },
    { "Yashiro D - Extra 3",  0x2e4670, 0x2e4690 },
    { "Yashiro D - Extra 4",  0x2e4690, 0x2e46b0 },
    { "Yashiro D - Order Select",  0x2e46b0, 0x2e46d0 },
    { "Yashiro D - Life Bar Portrait",  0x2e46d0, 0x2e46f0 },
    { "Yashiro D - Win Screen Portrait/sprite",  0x2e46f0, 0x2e47f0 },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_A[] =
{
    { "Shermie A - Main",  0x2e47f0, 0x2e4810 },
    { "Shermie A - Extra 1",  0x2e4810, 0x2e4830 },
    { "Shermie A - Extra 2",  0x2e4830, 0x2e4850 },
    { "Shermie A - Max Mode",  0x2e4850, 0x2e4870 },
    { "Shermie A - Extra 3",  0x2e4870, 0x2e4890 },
    { "Shermie A - Extra 4",  0x2e4890, 0x2e48b0 },
    { "Shermie A - Order Select",  0x2e48b0, 0x2e48d0 },
    { "Shermie A - Life Bar Portrait",  0x2e48d0, 0x2e48f0 },
    { "Shermie A - Win Screen Portrait/sprite",  0x2e48f0, 0x2e49f0 },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_B[] =
{
    { "Shermie B - Main",  0x2e49f0, 0x2e4a10 },
    { "Shermie B - Extra 1",  0x2e4a10, 0x2e4a30 },
    { "Shermie B - Extra 2",  0x2e4a30, 0x2e4a50 },
    { "Shermie B - Max Mode",  0x2e4a50, 0x2e4a70 },
    { "Shermie B - Extra 3",  0x2e4a70, 0x2e4a90 },
    { "Shermie B - Extra 4",  0x2e4a90, 0x2e4ab0 },
    { "Shermie B - Order Select",  0x2e4ab0, 0x2e4ad0 },
    { "Shermie B - Life Bar Portrait",  0x2e4ad0, 0x2e4af0 },
    { "Shermie B - Win Screen Portrait/sprite",  0x2e4af0, 0x2e4bf0 },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_C[] =
{
    { "Shermie C - Main",  0x2e4bf0, 0x2e4c10 },
    { "Shermie C - Extra 1",  0x2e4c10, 0x2e4c30 },
    { "Shermie C - Extra 2",  0x2e4c30, 0x2e4c50 },
    { "Shermie C - Max Mode",  0x2e4c50, 0x2e4c70 },
    { "Shermie C - Extra 3",  0x2e4c70, 0x2e4c90 },
    { "Shermie C - Extra 4",  0x2e4c90, 0x2e4cb0 },
    { "Shermie C - Order Select",  0x2e4cb0, 0x2e4cd0 },
    { "Shermie C - Life Bar Portrait",  0x2e4cd0, 0x2e4cf0 },
    { "Shermie C - Win Screen Portrait/sprite",  0x2e4cf0, 0x2e4df0 },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_D[] =
{
    { "Shermie D - Main",  0x2e4df0, 0x2e4e10 },
    { "Shermie D - Extra 1",  0x2e4e10, 0x2e4e30 },
    { "Shermie D - Extra 2",  0x2e4e30, 0x2e4e50 },
    { "Shermie D - Max Mode",  0x2e4e50, 0x2e4e70 },
    { "Shermie D - Extra 3",  0x2e4e70, 0x2e4e90 },
    { "Shermie D - Extra 4",  0x2e4e90, 0x2e4eb0 },
    { "Shermie D - Order Select",  0x2e4eb0, 0x2e4ed0 },
    { "Shermie D - Life Bar Portrait",  0x2e4ed0, 0x2e4ef0 },
    { "Shermie D - Win Screen Portrait/sprite",  0x2e4ef0, 0x2e4ff0 },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_A[] =
{
    { "Chris A - Main",  0x2e4ff0, 0x2e5010 },
    { "Chris A - Extra 1",  0x2e5010, 0x2e5030 },
    { "Chris A - Extra 2",  0x2e5030, 0x2e5050 },
    { "Chris A - Max Mode",  0x2e5050, 0x2e5070 },
    { "Chris A - Extra 3",  0x2e5070, 0x2e5090 },
    { "Chris A - Extra 4",  0x2e5090, 0x2e50b0 },
    { "Chris A - Order Select",  0x2e50b0, 0x2e50d0 },
    { "Chris A - Life Bar Portrait",  0x2e50d0, 0x2e50f0 },
    { "Chris A - Win Screen Portrait/sprite",  0x2e50f0, 0x2e51f0 },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_B[] =
{
    { "Chris B - Main",  0x2e51f0, 0x2e5210 },
    { "Chris B - Extra 1",  0x2e5210, 0x2e5230 },
    { "Chris B - Extra 2",  0x2e5230, 0x2e5250 },
    { "Chris B - Max Mode",  0x2e5250, 0x2e5270 },
    { "Chris B - Extra 3",  0x2e5270, 0x2e5290 },
    { "Chris B - Extra 4",  0x2e5290, 0x2e52b0 },
    { "Chris B - Order Select",  0x2e52b0, 0x2e52d0 },
    { "Chris B - Life Bar Portrait",  0x2e52d0, 0x2e52f0 },
    { "Chris B - Win Screen Portrait/sprite",  0x2e52f0, 0x2e53f0 },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_C[] =
{
    { "Chris C - Main",  0x2e53f0, 0x2e5410 },
    { "Chris C - Extra 1",  0x2e5410, 0x2e5430 },
    { "Chris C - Extra 2",  0x2e5430, 0x2e5450 },
    { "Chris C - Max Mode",  0x2e5450, 0x2e5470 },
    { "Chris C - Extra 3",  0x2e5470, 0x2e5490 },
    { "Chris C - Extra 4",  0x2e5490, 0x2e54b0 },
    { "Chris C - Order Select",  0x2e54b0, 0x2e54d0 },
    { "Chris C - Life Bar Portrait",  0x2e54d0, 0x2e54f0 },
    { "Chris C - Win Screen Portrait/sprite",  0x2e54f0, 0x2e55f0 },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_D[] =
{
    { "Chris D - Main",  0x2e55f0, 0x2e5610 },
    { "Chris D - Extra 1",  0x2e5610, 0x2e5630 },
    { "Chris D - Extra 2",  0x2e5630, 0x2e5650 },
    { "Chris D - Max Mode",  0x2e5650, 0x2e5670 },
    { "Chris D - Extra 3",  0x2e5670, 0x2e5690 },
    { "Chris D - Extra 4",  0x2e5690, 0x2e56b0 },
    { "Chris D - Order Select",  0x2e56b0, 0x2e56d0 },
    { "Chris D - Life Bar Portrait",  0x2e56d0, 0x2e56f0 },
    { "Chris D - Win Screen Portrait/sprite",  0x2e56f0, 0x2e57f0 },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_A[] =
{
    { "Yamazaki A - Main",  0x2e57f0, 0x2e5810 },
    { "Yamazaki A - Extra 1",  0x2e5810, 0x2e5830 },
    { "Yamazaki A - Extra 2",  0x2e5830, 0x2e5850 },
    { "Yamazaki A - Max Mode",  0x2e5850, 0x2e5870 },
    { "Yamazaki A - Extra 3",  0x2e5870, 0x2e5890 },
    { "Yamazaki A - Extra 4",  0x2e5890, 0x2e58b0 },
    { "Yamazaki A - Order Select",  0x2e58b0, 0x2e58d0 },
    { "Yamazaki A - Life Bar Portrait",  0x2e58d0, 0x2e58f0 },
    { "Yamazaki A - Win Screen Portrait/sprite",  0x2e58f0, 0x2e59f0 },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_B[] =
{
    { "Yamazaki B - Main",  0x2e59f0, 0x2e5a10 },
    { "Yamazaki B - Extra 1",  0x2e5a10, 0x2e5a30 },
    { "Yamazaki B - Extra 2",  0x2e5a30, 0x2e5a50 },
    { "Yamazaki B - Max Mode",  0x2e5a50, 0x2e5a70 },
    { "Yamazaki B - Extra 3",  0x2e5a70, 0x2e5a90 },
    { "Yamazaki B - Extra 4",  0x2e5a90, 0x2e5ab0 },
    { "Yamazaki B - Order Select",  0x2e5ab0, 0x2e5ad0 },
    { "Yamazaki B - Life Bar Portrait",  0x2e5ad0, 0x2e5af0 },
    { "Yamazaki B - Win Screen Portrait/sprite",  0x2e5af0, 0x2e5bf0 },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_C[] =
{
    { "Yamazaki C - Main",  0x2e5bf0, 0x2e5c10 },
    { "Yamazaki C - Extra 1",  0x2e5c10, 0x2e5c30 },
    { "Yamazaki C - Extra 2",  0x2e5c30, 0x2e5c50 },
    { "Yamazaki C - Max Mode",  0x2e5c50, 0x2e5c70 },
    { "Yamazaki C - Extra 3",  0x2e5c70, 0x2e5c90 },
    { "Yamazaki C - Extra 4",  0x2e5c90, 0x2e5cb0 },
    { "Yamazaki C - Order Select",  0x2e5cb0, 0x2e5cd0 },
    { "Yamazaki C - Life Bar Portrait",  0x2e5cd0, 0x2e5cf0 },
    { "Yamazaki C - Win Screen Portrait/sprite",  0x2e5cf0, 0x2e5df0 },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_D[] =
{
    { "Yamazaki D - Main",  0x2e5df0, 0x2e5e10 },
    { "Yamazaki D - Extra 1",  0x2e5e10, 0x2e5e30 },
    { "Yamazaki D - Extra 2",  0x2e5e30, 0x2e5e50 },
    { "Yamazaki D - Max Mode",  0x2e5e50, 0x2e5e70 },
    { "Yamazaki D - Extra 3",  0x2e5e70, 0x2e5e90 },
    { "Yamazaki D - Extra 4",  0x2e5e90, 0x2e5eb0 },
    { "Yamazaki D - Order Select",  0x2e5eb0, 0x2e5ed0 },
    { "Yamazaki D - Life Bar Portrait",  0x2e5ed0, 0x2e5ef0 },
    { "Yamazaki D - Win Screen Portrait/sprite",  0x2e5ef0, 0x2e5ff0 },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_A[] =
{
    { "Blue Mary A - Main",  0x2e5ff0, 0x2e6010 },
    { "Blue Mary A - Extra 1",  0x2e6010, 0x2e6030 },
    { "Blue Mary A - Extra 2",  0x2e6030, 0x2e6050 },
    { "Blue Mary A - Max Mode",  0x2e6050, 0x2e6070 },
    { "Blue Mary A - Extra 3",  0x2e6070, 0x2e6090 },
    { "Blue Mary A - Extra 4",  0x2e6090, 0x2e60b0 },
    { "Blue Mary A - Order Select",  0x2e60b0, 0x2e60d0 },
    { "Blue Mary A - Life Bar Portrait",  0x2e60d0, 0x2e60f0 },
    { "Blue Mary A - Win Screen Portrait/sprite",  0x2e60f0, 0x2e61f0 },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_B[] =
{
    { "Blue Mary B - Main",  0x2e61f0, 0x2e6210 },
    { "Blue Mary B - Extra 1",  0x2e6210, 0x2e6230 },
    { "Blue Mary B - Extra 2",  0x2e6230, 0x2e6250 },
    { "Blue Mary B - Max Mode",  0x2e6250, 0x2e6270 },
    { "Blue Mary B - Extra 3",  0x2e6270, 0x2e6290 },
    { "Blue Mary B - Extra 4",  0x2e6290, 0x2e62b0 },
    { "Blue Mary B - Order Select",  0x2e62b0, 0x2e62d0 },
    { "Blue Mary B - Life Bar Portrait",  0x2e62d0, 0x2e62f0 },
    { "Blue Mary B - Win Screen Portrait/sprite",  0x2e62f0, 0x2e63f0 },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_C[] =
{
    { "Blue Mary C - Main",  0x2e63f0, 0x2e6410 },
    { "Blue Mary C - Extra 1",  0x2e6410, 0x2e6430 },
    { "Blue Mary C - Extra 2",  0x2e6430, 0x2e6450 },
    { "Blue Mary C - Max Mode",  0x2e6450, 0x2e6470 },
    { "Blue Mary C - Extra 3",  0x2e6470, 0x2e6490 },
    { "Blue Mary C - Extra 4",  0x2e6490, 0x2e64b0 },
    { "Blue Mary C - Order Select",  0x2e64b0, 0x2e64d0 },
    { "Blue Mary C - Life Bar Portrait",  0x2e64d0, 0x2e64f0 },
    { "Blue Mary C - Win Screen Portrait/sprite",  0x2e64f0, 0x2e65f0 },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_D[] =
{
    { "Blue Mary D - Main",  0x2e65f0, 0x2e6610 },
    { "Blue Mary D - Extra 1",  0x2e6610, 0x2e6630 },
    { "Blue Mary D - Extra 2",  0x2e6630, 0x2e6650 },
    { "Blue Mary D - Max Mode",  0x2e6650, 0x2e6670 },
    { "Blue Mary D - Extra 3",  0x2e6670, 0x2e6690 },
    { "Blue Mary D - Extra 4",  0x2e6690, 0x2e66b0 },
    { "Blue Mary D - Order Select",  0x2e66b0, 0x2e66d0 },
    { "Blue Mary D - Life Bar Portrait",  0x2e66d0, 0x2e66f0 },
    { "Blue Mary D - Win Screen Portrait/sprite",  0x2e66f0, 0x2e67f0 },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_A[] =
{
    { "Billy A - Main",  0x2e67f0, 0x2e6810 },
    { "Billy A - Extra 1",  0x2e6810, 0x2e6830 },
    { "Billy A - Extra 2",  0x2e6830, 0x2e6850 },
    { "Billy A - Max Mode",  0x2e6850, 0x2e6870 },
    { "Billy A - Extra 3",  0x2e6870, 0x2e6890 },
    { "Billy A - Extra 4",  0x2e6890, 0x2e68b0 },
    { "Billy A - Order Select",  0x2e68b0, 0x2e68d0 },
    { "Billy A - Life Bar Portrait",  0x2e68d0, 0x2e68f0 },
    { "Billy A - Win Screen Portrait/sprite",  0x2e68f0, 0x2e69f0 },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_B[] =
{
    { "Billy B - Main",  0x2e69f0, 0x2e6a10 },
    { "Billy B - Extra 1",  0x2e6a10, 0x2e6a30 },
    { "Billy B - Extra 2",  0x2e6a30, 0x2e6a50 },
    { "Billy B - Max Mode",  0x2e6a50, 0x2e6a70 },
    { "Billy B - Extra 3",  0x2e6a70, 0x2e6a90 },
    { "Billy B - Extra 4",  0x2e6a90, 0x2e6ab0 },
    { "Billy B - Order Select",  0x2e6ab0, 0x2e6ad0 },
    { "Billy B - Life Bar Portrait",  0x2e6ad0, 0x2e6af0 },
    { "Billy B - Win Screen Portrait/sprite",  0x2e6af0, 0x2e6bf0 },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_C[] =
{
    { "Billy C - Main",  0x2e6bf0, 0x2e6c10 },
    { "Billy C - Extra 1",  0x2e6c10, 0x2e6c30 },
    { "Billy C - Extra 2",  0x2e6c30, 0x2e6c50 },
    { "Billy C - Max Mode",  0x2e6c50, 0x2e6c70 },
    { "Billy C - Extra 3",  0x2e6c70, 0x2e6c90 },
    { "Billy C - Extra 4",  0x2e6c90, 0x2e6cb0 },
    { "Billy C - Order Select",  0x2e6cb0, 0x2e6cd0 },
    { "Billy C - Life Bar Portrait",  0x2e6cd0, 0x2e6cf0 },
    { "Billy C - Win Screen Portrait/sprite",  0x2e6cf0, 0x2e6df0 },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_D[] =
{
    { "Billy D - Main",  0x2e6df0, 0x2e6e10 },
    { "Billy D - Extra 1",  0x2e6e10, 0x2e6e30 },
    { "Billy D - Extra 2",  0x2e6e30, 0x2e6e50 },
    { "Billy D - Max Mode",  0x2e6e50, 0x2e6e70 },
    { "Billy D - Extra 3",  0x2e6e70, 0x2e6e90 },
    { "Billy D - Extra 4",  0x2e6e90, 0x2e6eb0 },
    { "Billy D - Order Select",  0x2e6eb0, 0x2e6ed0 },
    { "Billy D - Life Bar Portrait",  0x2e6ed0, 0x2e6ef0 },
    { "Billy D - Win Screen Portrait/sprite",  0x2e6ef0, 0x2e6ff0 },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_A[] =
{
    { "Iori A - Main",  0x2e6ff0, 0x2e7010 },
    { "Iori A - Extra 1",  0x2e7010, 0x2e7030 },
    { "Iori A - Extra 2",  0x2e7030, 0x2e7050 },
    { "Iori A - Max Mode",  0x2e7050, 0x2e7070 },
    { "Iori A - Extra 3",  0x2e7070, 0x2e7090 },
    { "Iori A - Extra 4",  0x2e7090, 0x2e70b0 },
    { "Iori A - Order Select",  0x2e70b0, 0x2e70d0 },
    { "Iori A - Life Bar Portrait",  0x2e70d0, 0x2e70f0 },
    { "Iori A - Win Screen Portrait/sprite",  0x2e70f0, 0x2e71f0 },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_B[] =
{
    { "Iori B - Main",  0x2e71f0, 0x2e7210 },
    { "Iori B - Extra 1",  0x2e7210, 0x2e7230 },
    { "Iori B - Extra 2",  0x2e7230, 0x2e7250 },
    { "Iori B - Max Mode",  0x2e7250, 0x2e7270 },
    { "Iori B - Extra 3",  0x2e7270, 0x2e7290 },
    { "Iori B - Extra 4",  0x2e7290, 0x2e72b0 },
    { "Iori B - Order Select",  0x2e72b0, 0x2e72d0 },
    { "Iori B - Life Bar Portrait",  0x2e72d0, 0x2e72f0 },
    { "Iori B - Win Screen Portrait/sprite",  0x2e72f0, 0x2e73f0 },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_C[] =
{
    { "Iori C - Main",  0x2e73f0, 0x2e7410 },
    { "Iori C - Extra 1",  0x2e7410, 0x2e7430 },
    { "Iori C - Extra 2",  0x2e7430, 0x2e7450 },
    { "Iori C - Max Mode",  0x2e7450, 0x2e7470 },
    { "Iori C - Extra 3",  0x2e7470, 0x2e7490 },
    { "Iori C - Extra 4",  0x2e7490, 0x2e74b0 },
    { "Iori C - Order Select",  0x2e74b0, 0x2e74d0 },
    { "Iori C - Life Bar Portrait",  0x2e74d0, 0x2e74f0 },
    { "Iori C - Win Screen Portrait/sprite",  0x2e74f0, 0x2e75f0 },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_D[] =
{
    { "Iori D - Main",  0x2e75f0, 0x2e7610 },
    { "Iori D - Extra 1",  0x2e7610, 0x2e7630 },
    { "Iori D - Extra 2",  0x2e7630, 0x2e7650 },
    { "Iori D - Max Mode",  0x2e7650, 0x2e7670 },
    { "Iori D - Extra 3",  0x2e7670, 0x2e7690 },
    { "Iori D - Extra 4",  0x2e7690, 0x2e76b0 },
    { "Iori D - Order Select",  0x2e76b0, 0x2e76d0 },
    { "Iori D - Life Bar Portrait",  0x2e76d0, 0x2e76f0 },
    { "Iori D - Win Screen Portrait/sprite",  0x2e76f0, 0x2e77f0 },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_A[] =
{
    { "Mature A - Main",  0x2e77f0, 0x2e7810 },
    { "Mature A - Extra 1",  0x2e7810, 0x2e7830 },
    { "Mature A - Extra 2",  0x2e7830, 0x2e7850 },
    { "Mature A - Max Mode",  0x2e7850, 0x2e7870 },
    { "Mature A - Extra 3",  0x2e7870, 0x2e7890 },
    { "Mature A - Extra 4",  0x2e7890, 0x2e78b0 },
    { "Mature A - Order Select",  0x2e78b0, 0x2e78d0 },
    { "Mature A - Life Bar Portrait",  0x2e78d0, 0x2e78f0 },
    { "Mature A - Win Screen Portrait/sprite",  0x2e78f0, 0x2e79f0 },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_B[] =
{
    { "Mature B - Main",  0x2e79f0, 0x2e7a10 },
    { "Mature B - Extra 1",  0x2e7a10, 0x2e7a30 },
    { "Mature B - Extra 2",  0x2e7a30, 0x2e7a50 },
    { "Mature B - Max Mode",  0x2e7a50, 0x2e7a70 },
    { "Mature B - Extra 3",  0x2e7a70, 0x2e7a90 },
    { "Mature B - Extra 4",  0x2e7a90, 0x2e7ab0 },
    { "Mature B - Order Select",  0x2e7ab0, 0x2e7ad0 },
    { "Mature B - Life Bar Portrait",  0x2e7ad0, 0x2e7af0 },
    { "Mature B - Win Screen Portrait/sprite",  0x2e7af0, 0x2e7bf0 },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_C[] =
{
    { "Mature C - Main",  0x2e7bf0, 0x2e7c10 },
    { "Mature C - Extra 1",  0x2e7c10, 0x2e7c30 },
    { "Mature C - Extra 2",  0x2e7c30, 0x2e7c50 },
    { "Mature C - Max Mode",  0x2e7c50, 0x2e7c70 },
    { "Mature C - Extra 3",  0x2e7c70, 0x2e7c90 },
    { "Mature C - Extra 4",  0x2e7c90, 0x2e7cb0 },
    { "Mature C - Order Select",  0x2e7cb0, 0x2e7cd0 },
    { "Mature C - Life Bar Portrait",  0x2e7cd0, 0x2e7cf0 },
    { "Mature C - Win Screen Portrait/sprite",  0x2e7cf0, 0x2e7df0 },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_D[] =
{
    { "Mature D - Main",  0x2e7df0, 0x2e7e10 },
    { "Mature D - Extra 1",  0x2e7e10, 0x2e7e30 },
    { "Mature D - Extra 2",  0x2e7e30, 0x2e7e50 },
    { "Mature D - Max Mode",  0x2e7e50, 0x2e7e70 },
    { "Mature D - Extra 3",  0x2e7e70, 0x2e7e90 },
    { "Mature D - Extra 4",  0x2e7e90, 0x2e7eb0 },
    { "Mature D - Order Select",  0x2e7eb0, 0x2e7ed0 },
    { "Mature D - Life Bar Portrait",  0x2e7ed0, 0x2e7ef0 },
    { "Mature D - Win Screen Portrait/sprite",  0x2e7ef0, 0x2e7ff0 },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_A[] =
{
    { "Vice A - Main",  0x2e7ff0, 0x2e8010 },
    { "Vice A - Extra 1",  0x2e8010, 0x2e8030 },
    { "Vice A - Extra 2",  0x2e8030, 0x2e8050 },
    { "Vice A - Max Mode",  0x2e8050, 0x2e8070 },
    { "Vice A - Extra 3",  0x2e8070, 0x2e8090 },
    { "Vice A - Extra 4",  0x2e8090, 0x2e80b0 },
    { "Vice A - Order Select",  0x2e80b0, 0x2e80d0 },
    { "Vice A - Life Bar Portrait",  0x2e80d0, 0x2e80f0 },
    { "Vice A - Win Screen Portrait/sprite",  0x2e80f0, 0x2e81f0 },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_B[] =
{
    { "Vice B - Main",  0x2e81f0, 0x2e8210 },
    { "Vice B - Extra 1",  0x2e8210, 0x2e8230 },
    { "Vice B - Extra 2",  0x2e8230, 0x2e8250 },
    { "Vice B - Max Mode",  0x2e8250, 0x2e8270 },
    { "Vice B - Extra 3",  0x2e8270, 0x2e8290 },
    { "Vice B - Extra 4",  0x2e8290, 0x2e82b0 },
    { "Vice B - Order Select",  0x2e82b0, 0x2e82d0 },
    { "Vice B - Life Bar Portrait",  0x2e82d0, 0x2e82f0 },
    { "Vice B - Win Screen Portrait/sprite",  0x2e82f0, 0x2e83f0 },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_C[] =
{
    { "Vice C - Main",  0x2e83f0, 0x2e8410 },
    { "Vice C - Extra 1",  0x2e8410, 0x2e8430 },
    { "Vice C - Extra 2",  0x2e8430, 0x2e8450 },
    { "Vice C - Max Mode",  0x2e8450, 0x2e8470 },
    { "Vice C - Extra 3",  0x2e8470, 0x2e8490 },
    { "Vice C - Extra 4",  0x2e8490, 0x2e84b0 },
    { "Vice C - Order Select",  0x2e84b0, 0x2e84d0 },
    { "Vice C - Life Bar Portrait",  0x2e84d0, 0x2e84f0 },
    { "Vice C - Win Screen Portrait/sprite",  0x2e84f0, 0x2e85f0 },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_D[] =
{
    { "Vice D - Main",  0x2e85f0, 0x2e8610 },
    { "Vice D - Extra 1",  0x2e8610, 0x2e8630 },
    { "Vice D - Extra 2",  0x2e8630, 0x2e8650 },
    { "Vice D - Max Mode",  0x2e8650, 0x2e8670 },
    { "Vice D - Extra 3",  0x2e8670, 0x2e8690 },
    { "Vice D - Extra 4",  0x2e8690, 0x2e86b0 },
    { "Vice D - Order Select",  0x2e86b0, 0x2e86d0 },
    { "Vice D - Life Bar Portrait",  0x2e86d0, 0x2e86f0 },
    { "Vice D - Win Screen Portrait/sprite",  0x2e86f0, 0x2e87f0 },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_A[] =
{
    { "Heidern A - Main",  0x2e87f0, 0x2e8810 },
    { "Heidern A - Extra 1",  0x2e8810, 0x2e8830 },
    { "Heidern A - Extra 2",  0x2e8830, 0x2e8850 },
    { "Heidern A - Max Mode",  0x2e8850, 0x2e8870 },
    { "Heidern A - Extra 3",  0x2e8870, 0x2e8890 },
    { "Heidern A - Extra 4",  0x2e8890, 0x2e88b0 },
    { "Heidern A - Order Select",  0x2e88b0, 0x2e88d0 },
    { "Heidern A - Life Bar Portrait",  0x2e88d0, 0x2e88f0 },
    { "Heidern A - Win Screen Portrait/sprite",  0x2e88f0, 0x2e89f0 },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_B[] =
{
    { "Heidern B - Main",  0x2e89f0, 0x2e8a10 },
    { "Heidern B - Extra 1",  0x2e8a10, 0x2e8a30 },
    { "Heidern B - Extra 2",  0x2e8a30, 0x2e8a50 },
    { "Heidern B - Max Mode",  0x2e8a50, 0x2e8a70 },
    { "Heidern B - Extra 3",  0x2e8a70, 0x2e8a90 },
    { "Heidern B - Extra 4",  0x2e8a90, 0x2e8ab0 },
    { "Heidern B - Order Select",  0x2e8ab0, 0x2e8ad0 },
    { "Heidern B - Life Bar Portrait",  0x2e8ad0, 0x2e8af0 },
    { "Heidern B - Win Screen Portrait/sprite",  0x2e8af0, 0x2e8bf0 },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_C[] =
{
    { "Heidern C - Main",  0x2e8bf0, 0x2e8c10 },
    { "Heidern C - Extra 1",  0x2e8c10, 0x2e8c30 },
    { "Heidern C - Extra 2",  0x2e8c30, 0x2e8c50 },
    { "Heidern C - Max Mode",  0x2e8c50, 0x2e8c70 },
    { "Heidern C - Extra 3",  0x2e8c70, 0x2e8c90 },
    { "Heidern C - Extra 4",  0x2e8c90, 0x2e8cb0 },
    { "Heidern C - Order Select",  0x2e8cb0, 0x2e8cd0 },
    { "Heidern C - Life Bar Portrait",  0x2e8cd0, 0x2e8cf0 },
    { "Heidern C - Win Screen Portrait/sprite",  0x2e8cf0, 0x2e8df0 },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_D[] =
{
    { "Heidern D - Main",  0x2e8df0, 0x2e8e10 },
    { "Heidern D - Extra 1",  0x2e8e10, 0x2e8e30 },
    { "Heidern D - Extra 2",  0x2e8e30, 0x2e8e50 },
    { "Heidern D - Max Mode",  0x2e8e50, 0x2e8e70 },
    { "Heidern D - Extra 3",  0x2e8e70, 0x2e8e90 },
    { "Heidern D - Extra 4",  0x2e8e90, 0x2e8eb0 },
    { "Heidern D - Order Select",  0x2e8eb0, 0x2e8ed0 },
    { "Heidern D - Life Bar Portrait",  0x2e8ed0, 0x2e8ef0 },
    { "Heidern D - Win Screen Portrait/sprite",  0x2e8ef0, 0x2e8ff0 },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_A[] =
{
    { "Takuma A - Main",  0x2e8ff0, 0x2e9010 },
    { "Takuma A - Extra 1",  0x2e9010, 0x2e9030 },
    { "Takuma A - Extra 2",  0x2e9030, 0x2e9050 },
    { "Takuma A - Max Mode",  0x2e9050, 0x2e9070 },
    { "Takuma A - Extra 3",  0x2e9070, 0x2e9090 },
    { "Takuma A - Extra 4",  0x2e9090, 0x2e90b0 },
    { "Takuma A - Order Select",  0x2e90b0, 0x2e90d0 },
    { "Takuma A - Life Bar Portrait",  0x2e90d0, 0x2e90f0 },
    { "Takuma A - Win Screen Portrait/sprite",  0x2e90f0, 0x2e91f0 },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_B[] =
{
    { "Takuma B - Main",  0x2e91f0, 0x2e9210 },
    { "Takuma B - Extra 1",  0x2e9210, 0x2e9230 },
    { "Takuma B - Extra 2",  0x2e9230, 0x2e9250 },
    { "Takuma B - Max Mode",  0x2e9250, 0x2e9270 },
    { "Takuma B - Extra 3",  0x2e9270, 0x2e9290 },
    { "Takuma B - Extra 4",  0x2e9290, 0x2e92b0 },
    { "Takuma B - Order Select",  0x2e92b0, 0x2e92d0 },
    { "Takuma B - Life Bar Portrait",  0x2e92d0, 0x2e92f0 },
    { "Takuma B - Win Screen Portrait/sprite",  0x2e92f0, 0x2e93f0 },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_C[] =
{
    { "Takuma C - Main",  0x2e93f0, 0x2e9410 },
    { "Takuma C - Extra 1",  0x2e9410, 0x2e9430 },
    { "Takuma C - Extra 2",  0x2e9430, 0x2e9450 },
    { "Takuma C - Max Mode",  0x2e9450, 0x2e9470 },
    { "Takuma C - Extra 3",  0x2e9470, 0x2e9490 },
    { "Takuma C - Extra 4",  0x2e9490, 0x2e94b0 },
    { "Takuma C - Order Select",  0x2e94b0, 0x2e94d0 },
    { "Takuma C - Life Bar Portrait",  0x2e94d0, 0x2e94f0 },
    { "Takuma C - Win Screen Portrait/sprite",  0x2e94f0, 0x2e95f0 },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_D[] =
{
    { "Takuma D - Main",  0x2e95f0, 0x2e9610 },
    { "Takuma D - Extra 1",  0x2e9610, 0x2e9630 },
    { "Takuma D - Extra 2",  0x2e9630, 0x2e9650 },
    { "Takuma D - Max Mode",  0x2e9650, 0x2e9670 },
    { "Takuma D - Extra 3",  0x2e9670, 0x2e9690 },
    { "Takuma D - Extra 4",  0x2e9690, 0x2e96b0 },
    { "Takuma D - Order Select",  0x2e96b0, 0x2e96d0 },
    { "Takuma D - Life Bar Portrait",  0x2e96d0, 0x2e96f0 },
    { "Takuma D - Win Screen Portrait/sprite",  0x2e96f0, 0x2e97f0 },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_A[] =
{
    { "Saisyu A - Main",  0x2e97f0, 0x2e9810 },
    { "Saisyu A - Extra 1",  0x2e9810, 0x2e9830 },
    { "Saisyu A - Extra 2",  0x2e9830, 0x2e9850 },
    { "Saisyu A - Max Mode",  0x2e9850, 0x2e9870 },
    { "Saisyu A - Extra 3",  0x2e9870, 0x2e9890 },
    { "Saisyu A - Extra 4",  0x2e9890, 0x2e98b0 },
    { "Saisyu A - Order Select",  0x2e98b0, 0x2e98d0 },
    { "Saisyu A - Life Bar Portrait",  0x2e98d0, 0x2e98f0 },
    { "Saisyu A - Win Screen Portrait/sprite",  0x2e98f0, 0x2e99f0 },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_B[] =
{
    { "Saisyu B - Main",  0x2e99f0, 0x2e9a10 },
    { "Saisyu B - Extra 1",  0x2e9a10, 0x2e9a30 },
    { "Saisyu B - Extra 2",  0x2e9a30, 0x2e9a50 },
    { "Saisyu B - Max Mode",  0x2e9a50, 0x2e9a70 },
    { "Saisyu B - Extra 3",  0x2e9a70, 0x2e9a90 },
    { "Saisyu B - Extra 4",  0x2e9a90, 0x2e9ab0 },
    { "Saisyu B - Order Select",  0x2e9ab0, 0x2e9ad0 },
    { "Saisyu B - Life Bar Portrait",  0x2e9ad0, 0x2e9af0 },
    { "Saisyu B - Win Screen Portrait/sprite",  0x2e9af0, 0x2e9bf0 },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_C[] =
{
    { "Saisyu C - Main",  0x2e9bf0, 0x2e9c10 },
    { "Saisyu C - Extra 1",  0x2e9c10, 0x2e9c30 },
    { "Saisyu C - Extra 2",  0x2e9c30, 0x2e9c50 },
    { "Saisyu C - Max Mode",  0x2e9c50, 0x2e9c70 },
    { "Saisyu C - Extra 3",  0x2e9c70, 0x2e9c90 },
    { "Saisyu C - Extra 4",  0x2e9c90, 0x2e9cb0 },
    { "Saisyu C - Order Select",  0x2e9cb0, 0x2e9cd0 },
    { "Saisyu C - Life Bar Portrait",  0x2e9cd0, 0x2e9cf0 },
    { "Saisyu C - Win Screen Portrait/sprite",  0x2e9cf0, 0x2e9df0 },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_D[] =
{
    { "Saisyu D - Main",  0x2e9df0, 0x2e9e10 },
    { "Saisyu D - Extra 1",  0x2e9e10, 0x2e9e30 },
    { "Saisyu D - Extra 2",  0x2e9e30, 0x2e9e50 },
    { "Saisyu D - Max Mode",  0x2e9e50, 0x2e9e70 },
    { "Saisyu D - Extra 3",  0x2e9e70, 0x2e9e90 },
    { "Saisyu D - Extra 4",  0x2e9e90, 0x2e9eb0 },
    { "Saisyu D - Order Select",  0x2e9eb0, 0x2e9ed0 },
    { "Saisyu D - Life Bar Portrait",  0x2e9ed0, 0x2e9ef0 },
    { "Saisyu D - Win Screen Portrait/sprite",  0x2e9ef0, 0x2e9ff0 },
};

const sGame_PaletteDataset KOF98_A_Heavy_PALETTE_A[] =
{
    { "Heavy D! A - Main",  0x2e9ff0, 0x2ea010 },
    { "Heavy D! A - Extra 1",  0x2ea010, 0x2ea030 },
    { "Heavy D! A - Extra 2",  0x2ea030, 0x2ea050 },
    { "Heavy D! A - Max Mode",  0x2ea050, 0x2ea070 },
    { "Heavy D! A - Extra 3",  0x2ea070, 0x2ea090 },
    { "Heavy D! A - Extra 4",  0x2ea090, 0x2ea0b0 },
    { "Heavy D! A - Order Select",  0x2ea0b0, 0x2ea0d0 },
    { "Heavy D! A - Life Bar Portrait",  0x2ea0d0, 0x2ea0f0 },
    { "Heavy D! A - Win Screen Portrait/sprite",  0x2ea0f0, 0x2ea1f0 },
};

const sGame_PaletteDataset KOF98_A_Heavy_PALETTE_B[] =
{
    { "Heavy D! B - Main",  0x2ea1f0, 0x2ea210 },
    { "Heavy D! B - Extra 1",  0x2ea210, 0x2ea230 },
    { "Heavy D! B - Extra 2",  0x2ea230, 0x2ea250 },
    { "Heavy D! B - Max Mode",  0x2ea250, 0x2ea270 },
    { "Heavy D! B - Extra 3",  0x2ea270, 0x2ea290 },
    { "Heavy D! B - Extra 4",  0x2ea290, 0x2ea2b0 },
    { "Heavy D! B - Order Select",  0x2ea2b0, 0x2ea2d0 },
    { "Heavy D! B - Life Bar Portrait",  0x2ea2d0, 0x2ea2f0 },
    { "Heavy D! B - Win Screen Portrait/sprite",  0x2ea2f0, 0x2ea3f0 },
};

const sGame_PaletteDataset KOF98_A_Heavy_PALETTE_C[] =
{
    { "Heavy D! C - Main",  0x2ea3f0, 0x2ea410 },
    { "Heavy D! C - Extra 1",  0x2ea410, 0x2ea430 },
    { "Heavy D! C - Extra 2",  0x2ea430, 0x2ea450 },
    { "Heavy D! C - Max Mode",  0x2ea450, 0x2ea470 },
    { "Heavy D! C - Extra 3",  0x2ea470, 0x2ea490 },
    { "Heavy D! C - Extra 4",  0x2ea490, 0x2ea4b0 },
    { "Heavy D! C - Order Select",  0x2ea4b0, 0x2ea4d0 },
    { "Heavy D! C - Life Bar Portrait",  0x2ea4d0, 0x2ea4f0 },
    { "Heavy D! C - Win Screen Portrait/sprite",  0x2ea4f0, 0x2ea5f0 },
};

const sGame_PaletteDataset KOF98_A_Heavy_PALETTE_D[] =
{
    { "Heavy D! D - Main",  0x2ea5f0, 0x2ea610 },
    { "Heavy D! D - Extra 1",  0x2ea610, 0x2ea630 },
    { "Heavy D! D - Extra 2",  0x2ea630, 0x2ea650 },
    { "Heavy D! D - Max Mode",  0x2ea650, 0x2ea670 },
    { "Heavy D! D - Extra 3",  0x2ea670, 0x2ea690 },
    { "Heavy D! D - Extra 4",  0x2ea690, 0x2ea6b0 },
    { "Heavy D! D - Order Select",  0x2ea6b0, 0x2ea6d0 },
    { "Heavy D! D - Life Bar Portrait",  0x2ea6d0, 0x2ea6f0 },
    { "Heavy D! D - Win Screen Portrait/sprite",  0x2ea6f0, 0x2ea7f0 },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_A[] =
{
    { "Lucky A - Main",  0x2ea7f0, 0x2ea810 },
    { "Lucky A - Extra 1",  0x2ea810, 0x2ea830 },
    { "Lucky A - Extra 2",  0x2ea830, 0x2ea850 },
    { "Lucky A - Max Mode",  0x2ea850, 0x2ea870 },
    { "Lucky A - Extra 3",  0x2ea870, 0x2ea890 },
    { "Lucky A - Extra 4",  0x2ea890, 0x2ea8b0 },
    { "Lucky A - Order Select",  0x2ea8b0, 0x2ea8d0 },
    { "Lucky A - Life Bar Portrait",  0x2ea8d0, 0x2ea8f0 },
    { "Lucky A - Win Screen Portrait/sprite",  0x2ea8f0, 0x2ea9f0 },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_B[] =
{
    { "Lucky B - Main",  0x2ea9f0, 0x2eaa10 },
    { "Lucky B - Extra 1",  0x2eaa10, 0x2eaa30 },
    { "Lucky B - Extra 2",  0x2eaa30, 0x2eaa50 },
    { "Lucky B - Max Mode",  0x2eaa50, 0x2eaa70 },
    { "Lucky B - Extra 3",  0x2eaa70, 0x2eaa90 },
    { "Lucky B - Extra 4",  0x2eaa90, 0x2eaab0 },
    { "Lucky B - Order Select",  0x2eaab0, 0x2eaad0 },
    { "Lucky B - Life Bar Portrait",  0x2eaad0, 0x2eaaf0 },
    { "Lucky B - Win Screen Portrait/sprite",  0x2eaaf0, 0x2eabf0 },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_C[] =
{
    { "Lucky C - Main",  0x2eabf0, 0x2eac10 },
    { "Lucky C - Extra 1",  0x2eac10, 0x2eac30 },
    { "Lucky C - Extra 2",  0x2eac30, 0x2eac50 },
    { "Lucky C - Max Mode",  0x2eac50, 0x2eac70 },
    { "Lucky C - Extra 3",  0x2eac70, 0x2eac90 },
    { "Lucky C - Extra 4",  0x2eac90, 0x2eacb0 },
    { "Lucky C - Order Select",  0x2eacb0, 0x2eacd0 },
    { "Lucky C - Life Bar Portrait",  0x2eacd0, 0x2eacf0 },
    { "Lucky C - Win Screen Portrait/sprite",  0x2eacf0, 0x2eadf0 },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_D[] =
{
    { "Lucky D - Main",  0x2eadf0, 0x2eae10 },
    { "Lucky D - Extra 1",  0x2eae10, 0x2eae30 },
    { "Lucky D - Extra 2",  0x2eae30, 0x2eae50 },
    { "Lucky D - Max Mode",  0x2eae50, 0x2eae70 },
    { "Lucky D - Extra 3",  0x2eae70, 0x2eae90 },
    { "Lucky D - Extra 4",  0x2eae90, 0x2eaeb0 },
    { "Lucky D - Order Select",  0x2eaeb0, 0x2eaed0 },
    { "Lucky D - Life Bar Portrait",  0x2eaed0, 0x2eaef0 },
    { "Lucky D - Win Screen Portrait/sprite",  0x2eaef0, 0x2eaff0 },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_A[] =
{
    { "Brian A - Main",  0x2eaff0, 0x2eb010 },
    { "Brian A - Extra 1",  0x2eb010, 0x2eb030 },
    { "Brian A - Extra 2",  0x2eb030, 0x2eb050 },
    { "Brian A - Max Mode",  0x2eb050, 0x2eb070 },
    { "Brian A - Extra 3",  0x2eb070, 0x2eb090 },
    { "Brian A - Extra 4",  0x2eb090, 0x2eb0b0 },
    { "Brian A - Order Select",  0x2eb0b0, 0x2eb0d0 },
    { "Brian A - Life Bar Portrait",  0x2eb0d0, 0x2eb0f0 },
    { "Brian A - Win Screen Portrait/sprite",  0x2eb0f0, 0x2eb1f0 },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_B[] =
{
    { "Brian B - Main",  0x2eb1f0, 0x2eb210 },
    { "Brian B - Extra 1",  0x2eb210, 0x2eb230 },
    { "Brian B - Extra 2",  0x2eb230, 0x2eb250 },
    { "Brian B - Max Mode",  0x2eb250, 0x2eb270 },
    { "Brian B - Extra 3",  0x2eb270, 0x2eb290 },
    { "Brian B - Extra 4",  0x2eb290, 0x2eb2b0 },
    { "Brian B - Order Select",  0x2eb2b0, 0x2eb2d0 },
    { "Brian B - Life Bar Portrait",  0x2eb2d0, 0x2eb2f0 },
    { "Brian B - Win Screen Portrait/sprite",  0x2eb2f0, 0x2eb3f0 },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_C[] =
{
    { "Brian C - Main",  0x2eb3f0, 0x2eb410 },
    { "Brian C - Extra 1",  0x2eb410, 0x2eb430 },
    { "Brian C - Extra 2",  0x2eb430, 0x2eb450 },
    { "Brian C - Max Mode",  0x2eb450, 0x2eb470 },
    { "Brian C - Extra 3",  0x2eb470, 0x2eb490 },
    { "Brian C - Extra 4",  0x2eb490, 0x2eb4b0 },
    { "Brian C - Order Select",  0x2eb4b0, 0x2eb4d0 },
    { "Brian C - Life Bar Portrait",  0x2eb4d0, 0x2eb4f0 },
    { "Brian C - Win Screen Portrait/sprite",  0x2eb4f0, 0x2eb5f0 },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_D[] =
{
    { "Brian D - Main",  0x2eb5f0, 0x2eb610 },
    { "Brian D - Extra 1",  0x2eb610, 0x2eb630 },
    { "Brian D - Extra 2",  0x2eb630, 0x2eb650 },
    { "Brian D - Max Mode",  0x2eb650, 0x2eb670 },
    { "Brian D - Extra 3",  0x2eb670, 0x2eb690 },
    { "Brian D - Extra 4",  0x2eb690, 0x2eb6b0 },
    { "Brian D - Order Select",  0x2eb6b0, 0x2eb6d0 },
    { "Brian D - Life Bar Portrait",  0x2eb6d0, 0x2eb6f0 },
    { "Brian D - Win Screen Portrait/sprite",  0x2eb6f0, 0x2eb7f0 },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_A[] =
{
    { "Rugal A - Main",  0x2eb7f0, 0x2eb810 },
    { "Rugal A - Extra 1",  0x2eb810, 0x2eb830 },
    { "Rugal A - Extra 2",  0x2eb830, 0x2eb850 },
    { "Rugal A - Max Mode",  0x2eb850, 0x2eb870 },
    { "Rugal A - Extra 3",  0x2eb870, 0x2eb890 },
    { "Rugal A - Extra 4",  0x2eb890, 0x2eb8b0 },
    { "Rugal A - Order Select",  0x2eb8b0, 0x2eb8d0 },
    { "Rugal A - Life Bar Portrait",  0x2eb8d0, 0x2eb8f0 },
    { "Rugal A - Win Screen Portrait/sprite",  0x2eb8f0, 0x2eb9f0 },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_B[] =
{
    { "Rugal B - Main",  0x2eb9f0, 0x2eba10 },
    { "Rugal B - Extra 1",  0x2eba10, 0x2eba30 },
    { "Rugal B - Extra 2",  0x2eba30, 0x2eba50 },
    { "Rugal B - Max Mode",  0x2eba50, 0x2eba70 },
    { "Rugal B - Extra 3",  0x2eba70, 0x2eba90 },
    { "Rugal B - Extra 4",  0x2eba90, 0x2ebab0 },
    { "Rugal B - Order Select",  0x2ebab0, 0x2ebad0 },
    { "Rugal B - Life Bar Portrait",  0x2ebad0, 0x2ebaf0 },
    { "Rugal B - Win Screen Portrait/sprite",  0x2ebaf0, 0x2ebbf0 },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_C[] =
{
    { "Rugal C - Main",  0x2ebbf0, 0x2ebc10 },
    { "Rugal C - Extra 1",  0x2ebc10, 0x2ebc30 },
    { "Rugal C - Extra 2",  0x2ebc30, 0x2ebc50 },
    { "Rugal C - Max Mode",  0x2ebc50, 0x2ebc70 },
    { "Rugal C - Extra 3",  0x2ebc70, 0x2ebc90 },
    { "Rugal C - Extra 4",  0x2ebc90, 0x2ebcb0 },
    { "Rugal C - Order Select",  0x2ebcb0, 0x2ebcd0 },
    { "Rugal C - Life Bar Portrait",  0x2ebcd0, 0x2ebcf0 },
    { "Rugal C - Win Screen Portrait/sprite",  0x2ebcf0, 0x2ebdf0 },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_D[] =
{
    { "Rugal D - Main",  0x2ebdf0, 0x2ebe10 },
    { "Rugal D - Extra 1",  0x2ebe10, 0x2ebe30 },
    { "Rugal D - Extra 2",  0x2ebe30, 0x2ebe50 },
    { "Rugal D - Max Mode",  0x2ebe50, 0x2ebe70 },
    { "Rugal D - Extra 3",  0x2ebe70, 0x2ebe90 },
    { "Rugal D - Extra 4",  0x2ebe90, 0x2ebeb0 },
    { "Rugal D - Order Select",  0x2ebeb0, 0x2ebed0 },
    { "Rugal D - Life Bar Portrait",  0x2ebed0, 0x2ebef0 },
    { "Rugal D - Win Screen Portrait/sprite",  0x2ebef0, 0x2ebff0 },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_A[] =
{
    { "Shingo A - Main",  0x2ebff0, 0x2ec010 },
    { "Shingo A - Extra 1",  0x2ec010, 0x2ec030 },
    { "Shingo A - Extra 2",  0x2ec030, 0x2ec050 },
    { "Shingo A - Max Mode",  0x2ec050, 0x2ec070 },
    { "Shingo A - Extra 3",  0x2ec070, 0x2ec090 },
    { "Shingo A - Extra 4",  0x2ec090, 0x2ec0b0 },
    { "Shingo A - Order Select",  0x2ec0b0, 0x2ec0d0 },
    { "Shingo A - Life Bar Portrait",  0x2ec0d0, 0x2ec0f0 },
    { "Shingo A - Win Screen Portrait/sprite",  0x2ec0f0, 0x2ec1f0 },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_B[] =
{
    { "Shingo B - Main",  0x2ec1f0, 0x2ec210 },
    { "Shingo B - Extra 1",  0x2ec210, 0x2ec230 },
    { "Shingo B - Extra 2",  0x2ec230, 0x2ec250 },
    { "Shingo B - Max Mode",  0x2ec250, 0x2ec270 },
    { "Shingo B - Extra 3",  0x2ec270, 0x2ec290 },
    { "Shingo B - Extra 4",  0x2ec290, 0x2ec2b0 },
    { "Shingo B - Order Select",  0x2ec2b0, 0x2ec2d0 },
    { "Shingo B - Life Bar Portrait",  0x2ec2d0, 0x2ec2f0 },
    { "Shingo B - Win Screen Portrait/sprite",  0x2ec2f0, 0x2ec3f0 },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_C[] =
{
    { "Shingo C - Main",  0x2ec3f0, 0x2ec410 },
    { "Shingo C - Extra 1",  0x2ec410, 0x2ec430 },
    { "Shingo C - Extra 2",  0x2ec430, 0x2ec450 },
    { "Shingo C - Max Mode",  0x2ec450, 0x2ec470 },
    { "Shingo C - Extra 3",  0x2ec470, 0x2ec490 },
    { "Shingo C - Extra 4",  0x2ec490, 0x2ec4b0 },
    { "Shingo C - Order Select",  0x2ec4b0, 0x2ec4d0 },
    { "Shingo C - Life Bar Portrait",  0x2ec4d0, 0x2ec4f0 },
    { "Shingo C - Win Screen Portrait/sprite",  0x2ec4f0, 0x2ec5f0 },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_D[] =
{
    { "Shingo D - Main",  0x2ec5f0, 0x2ec610 },
    { "Shingo D - Extra 1",  0x2ec610, 0x2ec630 },
    { "Shingo D - Extra 2",  0x2ec630, 0x2ec650 },
    { "Shingo D - Max Mode",  0x2ec650, 0x2ec670 },
    { "Shingo D - Extra 3",  0x2ec670, 0x2ec690 },
    { "Shingo D - Extra 4",  0x2ec690, 0x2ec6b0 },
    { "Shingo D - Order Select",  0x2ec6b0, 0x2ec6d0 },
    { "Shingo D - Life Bar Portrait",  0x2ec6d0, 0x2ec6f0 },
    { "Shingo D - Win Screen Portrait/sprite",  0x2ec6f0, 0x2ec7f0 },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_A[] =
{
    { "O.Yashiro A - Main",  0x2ec7f0, 0x2ec810 },
    { "O.Yashiro A - Extra 1",  0x2ec810, 0x2ec830 },
    { "O.Yashiro A - Extra 2",  0x2ec830, 0x2ec850 },
    { "O.Yashiro A - Max Mode",  0x2ec850, 0x2ec870 },
    { "O.Yashiro A - Extra 3",  0x2ec870, 0x2ec890 },
    { "O.Yashiro A - Extra 4",  0x2ec890, 0x2ec8b0 },
    { "O.Yashiro A - Order Select",  0x2ec8b0, 0x2ec8d0 },
    { "O.Yashiro A - Life Bar Portrait",  0x2ec8d0, 0x2ec8f0 },
    { "O.Yashiro A - Win Screen Portrait/sprite",  0x2ec8f0, 0x2ec9f0 },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_B[] =
{
    { "O.Yashiro B - Main",  0x2ec9f0, 0x2eca10 },
    { "O.Yashiro B - Extra 1",  0x2eca10, 0x2eca30 },
    { "O.Yashiro B - Extra 2",  0x2eca30, 0x2eca50 },
    { "O.Yashiro B - Max Mode",  0x2eca50, 0x2eca70 },
    { "O.Yashiro B - Extra 3",  0x2eca70, 0x2eca90 },
    { "O.Yashiro B - Extra 4",  0x2eca90, 0x2ecab0 },
    { "O.Yashiro B - Order Select",  0x2ecab0, 0x2ecad0 },
    { "O.Yashiro B - Life Bar Portrait",  0x2ecad0, 0x2ecaf0 },
    { "O.Yashiro B - Win Screen Portrait/sprite",  0x2ecaf0, 0x2ecbf0 },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_C[] =
{
    { "O.Yashiro C - Main",  0x2ecbf0, 0x2ecc10 },
    { "O.Yashiro C - Extra 1",  0x2ecc10, 0x2ecc30 },
    { "O.Yashiro C - Extra 2",  0x2ecc30, 0x2ecc50 },
    { "O.Yashiro C - Max Mode",  0x2ecc50, 0x2ecc70 },
    { "O.Yashiro C - Extra 3",  0x2ecc70, 0x2ecc90 },
    { "O.Yashiro C - Extra 4",  0x2ecc90, 0x2eccb0 },
    { "O.Yashiro C - Order Select",  0x2eccb0, 0x2eccd0 },
    { "O.Yashiro C - Life Bar Portrait",  0x2eccd0, 0x2eccf0 },
    { "O.Yashiro C - Win Screen Portrait/sprite",  0x2eccf0, 0x2ecdf0 },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_D[] =
{
    { "O.Yashiro D - Main",  0x2ecdf0, 0x2ece10 },
    { "O.Yashiro D - Extra 1",  0x2ece10, 0x2ece30 },
    { "O.Yashiro D - Extra 2",  0x2ece30, 0x2ece50 },
    { "O.Yashiro D - Max Mode",  0x2ece50, 0x2ece70 },
    { "O.Yashiro D - Extra 3",  0x2ece70, 0x2ece90 },
    { "O.Yashiro D - Extra 4",  0x2ece90, 0x2eceb0 },
    { "O.Yashiro D - Order Select",  0x2eceb0, 0x2eced0 },
    { "O.Yashiro D - Life Bar Portrait",  0x2eced0, 0x2ecef0 },
    { "O.Yashiro D - Win Screen Portrait/sprite",  0x2ecef0, 0x2ecff0 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_A[] =
{
    { "O.Shermie A - Main",  0x2ecff0, 0x2ed010 },
    { "O.Shermie A - Extra 1",  0x2ed010, 0x2ed030 },
    { "O.Shermie A - Extra 2",  0x2ed030, 0x2ed050 },
    { "O.Shermie A - Max Mode",  0x2ed050, 0x2ed070 },
    { "O.Shermie A - Extra 3",  0x2ed070, 0x2ed090 },
    { "O.Shermie A - Extra 4",  0x2ed090, 0x2ed0b0 },
    { "O.Shermie A - Order Select",  0x2ed0b0, 0x2ed0d0 },
    { "O.Shermie A - Life Bar Portrait",  0x2ed0d0, 0x2ed0f0 },
    { "O.Shermie A - Win Screen Portrait/sprite",  0x2ed0f0, 0x2ed1f0 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_B[] =
{
    { "O.Shermie B - Main",  0x2ed1f0, 0x2ed210 },
    { "O.Shermie B - Extra 1",  0x2ed210, 0x2ed230 },
    { "O.Shermie B - Extra 2",  0x2ed230, 0x2ed250 },
    { "O.Shermie B - Max Mode",  0x2ed250, 0x2ed270 },
    { "O.Shermie B - Extra 3",  0x2ed270, 0x2ed290 },
    { "O.Shermie B - Extra 4",  0x2ed290, 0x2ed2b0 },
    { "O.Shermie B - Order Select",  0x2ed2b0, 0x2ed2d0 },
    { "O.Shermie B - Life Bar Portrait",  0x2ed2d0, 0x2ed2f0 },
    { "O.Shermie B - Win Screen Portrait/sprite",  0x2ed2f0, 0x2ed3f0 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_C[] =
{
    { "O.Shermie C - Main",  0x2ed3f0, 0x2ed410 },
    { "O.Shermie C - Extra 1",  0x2ed410, 0x2ed430 },
    { "O.Shermie C - Extra 2",  0x2ed430, 0x2ed450 },
    { "O.Shermie C - Max Mode",  0x2ed450, 0x2ed470 },
    { "O.Shermie C - Extra 3",  0x2ed470, 0x2ed490 },
    { "O.Shermie C - Extra 4",  0x2ed490, 0x2ed4b0 },
    { "O.Shermie C - Order Select",  0x2ed4b0, 0x2ed4d0 },
    { "O.Shermie C - Life Bar Portrait",  0x2ed4d0, 0x2ed4f0 },
    { "O.Shermie C - Win Screen Portrait/sprite",  0x2ed4f0, 0x2ed5f0 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_D[] =
{
    { "O.Shermie D - Main",  0x2ed5f0, 0x2ed610 },
    { "O.Shermie D - Extra 1",  0x2ed610, 0x2ed630 },
    { "O.Shermie D - Extra 2",  0x2ed630, 0x2ed650 },
    { "O.Shermie D - Max Mode",  0x2ed650, 0x2ed670 },
    { "O.Shermie D - Extra 3",  0x2ed670, 0x2ed690 },
    { "O.Shermie D - Extra 4",  0x2ed690, 0x2ed6b0 },
    { "O.Shermie D - Order Select",  0x2ed6b0, 0x2ed6d0 },
    { "O.Shermie D - Life Bar Portrait",  0x2ed6d0, 0x2ed6f0 },
    { "O.Shermie D - Win Screen Portrait/sprite",  0x2ed6f0, 0x2ed7f0 },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_A[] =
{
    { "O.Chris A - Main",  0x2ed7f0, 0x2ed810 },
    { "O.Chris A - Extra 1",  0x2ed810, 0x2ed830 },
    { "O.Chris A - Extra 2",  0x2ed830, 0x2ed850 },
    { "O.Chris A - Max Mode",  0x2ed850, 0x2ed870 },
    { "O.Chris A - Extra 3",  0x2ed870, 0x2ed890 },
    { "O.Chris A - Extra 4",  0x2ed890, 0x2ed8b0 },
    { "O.Chris A - Order Select",  0x2ed8b0, 0x2ed8d0 },
    { "O.Chris A - Life Bar Portrait",  0x2ed8d0, 0x2ed8f0 },
    { "O.Chris A - Win Screen Portrait/sprite",  0x2ed8f0, 0x2ed9f0 },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_B[] =
{
    { "O.Chris B - Main",  0x2ed9f0, 0x2eda10 },
    { "O.Chris B - Extra 1",  0x2eda10, 0x2eda30 },
    { "O.Chris B - Extra 2",  0x2eda30, 0x2eda50 },
    { "O.Chris B - Max Mode",  0x2eda50, 0x2eda70 },
    { "O.Chris B - Extra 3",  0x2eda70, 0x2eda90 },
    { "O.Chris B - Extra 4",  0x2eda90, 0x2edab0 },
    { "O.Chris B - Order Select",  0x2edab0, 0x2edad0 },
    { "O.Chris B - Life Bar Portrait",  0x2edad0, 0x2edaf0 },
    { "O.Chris B - Win Screen Portrait/sprite",  0x2edaf0, 0x2edbf0 },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_C[] =
{
    { "O.Chris C - Main",  0x2edbf0, 0x2edc10 },
    { "O.Chris C - Extra 1",  0x2edc10, 0x2edc30 },
    { "O.Chris C - Extra 2",  0x2edc30, 0x2edc50 },
    { "O.Chris C - Max Mode",  0x2edc50, 0x2edc70 },
    { "O.Chris C - Extra 3",  0x2edc70, 0x2edc90 },
    { "O.Chris C - Extra 4",  0x2edc90, 0x2edcb0 },
    { "O.Chris C - Order Select",  0x2edcb0, 0x2edcd0 },
    { "O.Chris C - Life Bar Portrait",  0x2edcd0, 0x2edcf0 },
    { "O.Chris C - Win Screen Portrait/sprite",  0x2edcf0, 0x2eddf0 },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_D[] =
{
    { "O.Chris D - Main",  0x2eddf0, 0x2ede10 },
    { "O.Chris D - Extra 1",  0x2ede10, 0x2ede30 },
    { "O.Chris D - Extra 2",  0x2ede30, 0x2ede50 },
    { "O.Chris D - Max Mode",  0x2ede50, 0x2ede70 },
    { "O.Chris D - Extra 3",  0x2ede70, 0x2ede90 },
    { "O.Chris D - Extra 4",  0x2ede90, 0x2edeb0 },
    { "O.Chris D - Order Select",  0x2edeb0, 0x2eded0 },
    { "O.Chris D - Life Bar Portrait",  0x2eded0, 0x2edef0 },
    { "O.Chris D - Win Screen Portrait/sprite",  0x2edef0, 0x2edff0 },
};

const sGame_PaletteDataset KOF98_A_Omega_PALETTE_A[] =
{
    { "Omega Rugal A - Main",  0x2edff0, 0x2ee010 },
    { "Omega Rugal A - Extra 1",  0x2ee010, 0x2ee030 },
    { "Omega Rugal A - Extra 2",  0x2ee030, 0x2ee050 },
    { "Omega Rugal A - Max Mode",  0x2ee050, 0x2ee070 },
    { "Omega Rugal A - Extra 3",  0x2ee070, 0x2ee090 },
    { "Omega Rugal A - Extra 4",  0x2ee090, 0x2ee0b0 },
    { "Omega Rugal A - Order Select",  0x2ee0b0, 0x2ee0d0 },
    { "Omega Rugal A - Life Bar Portrait",  0x2ee0d0, 0x2ee0f0 },
    { "Omega Rugal A - Win Screen Portrait/sprite",  0x2ee0f0, 0x2ee1f0 },
};

const sGame_PaletteDataset KOF98_A_Omega_PALETTE_B[] =
{
    { "Omega Rugal B - Main",  0x2ee1f0, 0x2ee210 },
    { "Omega Rugal B - Extra 1",  0x2ee210, 0x2ee230 },
    { "Omega Rugal B - Extra 2",  0x2ee230, 0x2ee250 },
    { "Omega Rugal B - Max Mode",  0x2ee250, 0x2ee270 },
    { "Omega Rugal B - Extra 3",  0x2ee270, 0x2ee290 },
    { "Omega Rugal B - Extra 4",  0x2ee290, 0x2ee2b0 },
    { "Omega Rugal B - Order Select",  0x2ee2b0, 0x2ee2d0 },
    { "Omega Rugal B - Life Bar Portrait",  0x2ee2d0, 0x2ee2f0 },
    { "Omega Rugal B - Win Screen Portrait/sprite",  0x2ee2f0, 0x2ee3f0 },
};

const sGame_PaletteDataset KOF98_A_Omega_PALETTE_C[] =
{
    { "Omega Rugal C - Main",  0x2ee3f0, 0x2ee410 },
    { "Omega Rugal C - Extra 1",  0x2ee410, 0x2ee430 },
    { "Omega Rugal C - Extra 2",  0x2ee430, 0x2ee450 },
    { "Omega Rugal C - Max Mode",  0x2ee450, 0x2ee470 },
    { "Omega Rugal C - Extra 3",  0x2ee470, 0x2ee490 },
    { "Omega Rugal C - Extra 4",  0x2ee490, 0x2ee4b0 },
    { "Omega Rugal C - Order Select",  0x2ee4b0, 0x2ee4d0 },
    { "Omega Rugal C - Life Bar Portrait",  0x2ee4d0, 0x2ee4f0 },
    { "Omega Rugal C - Win Screen Portrait/sprite",  0x2ee4f0, 0x2ee5f0 },
};

const sGame_PaletteDataset KOF98_A_Omega_PALETTE_D[] =
{
    { "Omega Rugal D - Main",  0x2ee5f0, 0x2ee610 },
    { "Omega Rugal D - Extra 1",  0x2ee610, 0x2ee630 },
    { "Omega Rugal D - Extra 2",  0x2ee630, 0x2ee650 },
    { "Omega Rugal D - Max Mode",  0x2ee650, 0x2ee670 },
    { "Omega Rugal D - Extra 3",  0x2ee670, 0x2ee690 },
    { "Omega Rugal D - Extra 4",  0x2ee690, 0x2ee6b0 },
    { "Omega Rugal D - Order Select",  0x2ee6b0, 0x2ee6d0 },
    { "Omega Rugal D - Life Bar Portrait",  0x2ee6d0, 0x2ee6f0 },
    { "Omega Rugal D - Win Screen Portrait/sprite",  0x2ee6f0, 0x2ee7f0 },
};

const sDescTreeNode KOF98_A_KYO_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_A, ARRAYSIZE(KOF98_A_KYO_PALETTE_A) },
    { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_B, ARRAYSIZE(KOF98_A_KYO_PALETTE_B) },
    { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_C, ARRAYSIZE(KOF98_A_KYO_PALETTE_C) },
    { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_D, ARRAYSIZE(KOF98_A_KYO_PALETTE_D) },
};

const sDescTreeNode KOF98_A_BENIMARU_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_A, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_A) },
    { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_B, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_B) },
    { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_C, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_C) },
    { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_D, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_D) },
};

const sDescTreeNode KOF98_A_DAIMON_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_A, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_A) },
    { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_B, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_B) },
    { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_C, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_C) },
    { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_D, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_D) },
};

const sDescTreeNode KOF98_A_TERRY_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_A, ARRAYSIZE(KOF98_A_TERRY_PALETTE_A) },
    { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_B, ARRAYSIZE(KOF98_A_TERRY_PALETTE_B) },
    { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_C, ARRAYSIZE(KOF98_A_TERRY_PALETTE_C) },
    { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_D, ARRAYSIZE(KOF98_A_TERRY_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Andy_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_A, ARRAYSIZE(KOF98_A_Andy_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_B, ARRAYSIZE(KOF98_A_Andy_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_C, ARRAYSIZE(KOF98_A_Andy_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_D, ARRAYSIZE(KOF98_A_Andy_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Joe_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_A, ARRAYSIZE(KOF98_A_Joe_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_B, ARRAYSIZE(KOF98_A_Joe_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_C, ARRAYSIZE(KOF98_A_Joe_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_D, ARRAYSIZE(KOF98_A_Joe_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Ryo_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_A, ARRAYSIZE(KOF98_A_Ryo_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_B, ARRAYSIZE(KOF98_A_Ryo_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_C, ARRAYSIZE(KOF98_A_Ryo_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_D, ARRAYSIZE(KOF98_A_Ryo_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Robert_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_A, ARRAYSIZE(KOF98_A_Robert_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_B, ARRAYSIZE(KOF98_A_Robert_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_C, ARRAYSIZE(KOF98_A_Robert_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_D, ARRAYSIZE(KOF98_A_Robert_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Yuri_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_A, ARRAYSIZE(KOF98_A_Yuri_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_B, ARRAYSIZE(KOF98_A_Yuri_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_C, ARRAYSIZE(KOF98_A_Yuri_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_D, ARRAYSIZE(KOF98_A_Yuri_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Leona_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_A, ARRAYSIZE(KOF98_A_Leona_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_B, ARRAYSIZE(KOF98_A_Leona_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_C, ARRAYSIZE(KOF98_A_Leona_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_D, ARRAYSIZE(KOF98_A_Leona_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Ralf_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_A, ARRAYSIZE(KOF98_A_Ralf_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_B, ARRAYSIZE(KOF98_A_Ralf_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_C, ARRAYSIZE(KOF98_A_Ralf_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_D, ARRAYSIZE(KOF98_A_Ralf_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Clark_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_A, ARRAYSIZE(KOF98_A_Clark_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_B, ARRAYSIZE(KOF98_A_Clark_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_C, ARRAYSIZE(KOF98_A_Clark_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_D, ARRAYSIZE(KOF98_A_Clark_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Athena_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_A, ARRAYSIZE(KOF98_A_Athena_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_B, ARRAYSIZE(KOF98_A_Athena_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_C, ARRAYSIZE(KOF98_A_Athena_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_D, ARRAYSIZE(KOF98_A_Athena_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Kensou_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_A, ARRAYSIZE(KOF98_A_Kensou_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_B, ARRAYSIZE(KOF98_A_Kensou_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_C, ARRAYSIZE(KOF98_A_Kensou_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_D, ARRAYSIZE(KOF98_A_Kensou_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Chin_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_A, ARRAYSIZE(KOF98_A_Chin_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_B, ARRAYSIZE(KOF98_A_Chin_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_C, ARRAYSIZE(KOF98_A_Chin_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_D, ARRAYSIZE(KOF98_A_Chin_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Chizuru_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_A, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_B, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_C, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_D, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Mai_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_A, ARRAYSIZE(KOF98_A_Mai_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_B, ARRAYSIZE(KOF98_A_Mai_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_C, ARRAYSIZE(KOF98_A_Mai_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_D, ARRAYSIZE(KOF98_A_Mai_PALETTE_D) },
};

const sDescTreeNode KOF98_A_King_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_A, ARRAYSIZE(KOF98_A_King_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_B, ARRAYSIZE(KOF98_A_King_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_C, ARRAYSIZE(KOF98_A_King_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_D, ARRAYSIZE(KOF98_A_King_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Kim_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_A, ARRAYSIZE(KOF98_A_Kim_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_B, ARRAYSIZE(KOF98_A_Kim_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_C, ARRAYSIZE(KOF98_A_Kim_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_D, ARRAYSIZE(KOF98_A_Kim_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Chang_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_A, ARRAYSIZE(KOF98_A_Chang_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_B, ARRAYSIZE(KOF98_A_Chang_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_C, ARRAYSIZE(KOF98_A_Chang_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_D, ARRAYSIZE(KOF98_A_Chang_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Choi_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_A, ARRAYSIZE(KOF98_A_Choi_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_B, ARRAYSIZE(KOF98_A_Choi_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_C, ARRAYSIZE(KOF98_A_Choi_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_D, ARRAYSIZE(KOF98_A_Choi_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Yashiro_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_A, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_B, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_C, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_D, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Shermie_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_A, ARRAYSIZE(KOF98_A_Shermie_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_B, ARRAYSIZE(KOF98_A_Shermie_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_C, ARRAYSIZE(KOF98_A_Shermie_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_D, ARRAYSIZE(KOF98_A_Shermie_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Chris_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_A, ARRAYSIZE(KOF98_A_Chris_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_B, ARRAYSIZE(KOF98_A_Chris_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_C, ARRAYSIZE(KOF98_A_Chris_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_D, ARRAYSIZE(KOF98_A_Chris_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Yamazaki_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_A, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_B, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_C, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_D, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Blue_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_A, ARRAYSIZE(KOF98_A_Blue_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_B, ARRAYSIZE(KOF98_A_Blue_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_C, ARRAYSIZE(KOF98_A_Blue_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_D, ARRAYSIZE(KOF98_A_Blue_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Billy_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_A, ARRAYSIZE(KOF98_A_Billy_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_B, ARRAYSIZE(KOF98_A_Billy_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_C, ARRAYSIZE(KOF98_A_Billy_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_D, ARRAYSIZE(KOF98_A_Billy_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Iori_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_A, ARRAYSIZE(KOF98_A_Iori_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_B, ARRAYSIZE(KOF98_A_Iori_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_C, ARRAYSIZE(KOF98_A_Iori_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_D, ARRAYSIZE(KOF98_A_Iori_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Mature_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_A, ARRAYSIZE(KOF98_A_Mature_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_B, ARRAYSIZE(KOF98_A_Mature_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_C, ARRAYSIZE(KOF98_A_Mature_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_D, ARRAYSIZE(KOF98_A_Mature_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Vice_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_A, ARRAYSIZE(KOF98_A_Vice_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_B, ARRAYSIZE(KOF98_A_Vice_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_C, ARRAYSIZE(KOF98_A_Vice_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_D, ARRAYSIZE(KOF98_A_Vice_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Heidern_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_A, ARRAYSIZE(KOF98_A_Heidern_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_B, ARRAYSIZE(KOF98_A_Heidern_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_C, ARRAYSIZE(KOF98_A_Heidern_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_D, ARRAYSIZE(KOF98_A_Heidern_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Takuma_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_A, ARRAYSIZE(KOF98_A_Takuma_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_B, ARRAYSIZE(KOF98_A_Takuma_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_C, ARRAYSIZE(KOF98_A_Takuma_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_D, ARRAYSIZE(KOF98_A_Takuma_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Saisyu_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_A, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_B, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_C, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_D, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Heavy_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Heavy_PALETTE_A, ARRAYSIZE(KOF98_A_Heavy_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Heavy_PALETTE_B, ARRAYSIZE(KOF98_A_Heavy_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Heavy_PALETTE_C, ARRAYSIZE(KOF98_A_Heavy_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Heavy_PALETTE_D, ARRAYSIZE(KOF98_A_Heavy_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Lucky_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_A, ARRAYSIZE(KOF98_A_Lucky_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_B, ARRAYSIZE(KOF98_A_Lucky_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_C, ARRAYSIZE(KOF98_A_Lucky_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_D, ARRAYSIZE(KOF98_A_Lucky_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Brian_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_A, ARRAYSIZE(KOF98_A_Brian_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_B, ARRAYSIZE(KOF98_A_Brian_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_C, ARRAYSIZE(KOF98_A_Brian_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_D, ARRAYSIZE(KOF98_A_Brian_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Rugal_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_A, ARRAYSIZE(KOF98_A_Rugal_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_B, ARRAYSIZE(KOF98_A_Rugal_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_C, ARRAYSIZE(KOF98_A_Rugal_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_D, ARRAYSIZE(KOF98_A_Rugal_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Shingo_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_A, ARRAYSIZE(KOF98_A_Shingo_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_B, ARRAYSIZE(KOF98_A_Shingo_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_C, ARRAYSIZE(KOF98_A_Shingo_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_D, ARRAYSIZE(KOF98_A_Shingo_PALETTE_D) },
};

const sDescTreeNode KOF98_A_OYashiro_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_A, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_B, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_C, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_D, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_D) },
};

const sDescTreeNode KOF98_A_OShermie_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_A, ARRAYSIZE(KOF98_A_OShermie_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_B, ARRAYSIZE(KOF98_A_OShermie_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_C, ARRAYSIZE(KOF98_A_OShermie_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_D, ARRAYSIZE(KOF98_A_OShermie_PALETTE_D) },
};

const sDescTreeNode KOF98_A_OChris_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_A, ARRAYSIZE(KOF98_A_OChris_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_B, ARRAYSIZE(KOF98_A_OChris_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_C, ARRAYSIZE(KOF98_A_OChris_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_D, ARRAYSIZE(KOF98_A_OChris_PALETTE_D) },
};

const sDescTreeNode KOF98_A_Omega_COLLECTION[] =
{
   { "A", DESC_NODETYPE_TREE, (void*)KOF98_A_Omega_PALETTE_A, ARRAYSIZE(KOF98_A_Omega_PALETTE_A) },
   { "B", DESC_NODETYPE_TREE, (void*)KOF98_A_Omega_PALETTE_B, ARRAYSIZE(KOF98_A_Omega_PALETTE_B) },
   { "C", DESC_NODETYPE_TREE, (void*)KOF98_A_Omega_PALETTE_C, ARRAYSIZE(KOF98_A_Omega_PALETTE_C) },
   { "D", DESC_NODETYPE_TREE, (void*)KOF98_A_Omega_PALETTE_D, ARRAYSIZE(KOF98_A_Omega_PALETTE_D) },
};

const UINT8 KOF98_A_UNITSORT[KOF98_A_NUMUNIT + 1] // Plus 1 for extras
{
    indexKOF98_A_Kyo,
    indexKOF98_A_Beniumaru,
    indexKOF98_A_Daimon,
    indexKOF98_A_Terry,
    indexKOF98_A_Andy,
    indexKOF98_A_Joe,
    indexKOF98_A_Ryo,
    indexKOF98_A_Robert,
    indexKOF98_A_Yuri,
    indexKOF98_A_Leona,
    indexKOF98_A_Ralf,
    indexKOF98_A_Clark,
    indexKOF98_A_Athena,
    indexKOF98_A_Kensou,
    indexKOF98_A_Chin,
    indexKOF98_A_Chizuru,
    indexKOF98_A_Mai,
    indexKOF98_A_Kind,
    indexKOF98_A_Kim,
    indexKOF98_A_Chang,
    indexKOF98_A_Choi,
    indexKOF98_A_Yashiro,
    indexKOF98_A_Shermie,
    indexKOF98_A_Chris,
    indexKOF98_A_Yamazaki,
    indexKOF98_A_BlueMary,
    indexKOF98_A_Billy,
    indexKOF98_A_Iori,
    indexKOF98_A_Mature,
    indexKOF98_A_Vice,
    indexKOF98_A_Heidern,
    indexKOF98_A_Takuma,
    indexKOF98_A_Saisyu,
    indexKOF98_A_HeavyD,
    indexKOF98_A_Lucky,
    indexKOF98_A_Brian,
    indexKOF98_A_Rugal,
    indexKOF98_A_Shingo,
    indexKOF98_A_OYashiro,
    indexKOF98_A_OShermie,
    indexKOF98_A_OChris,
    indexKOF98_A_OmegaRugal,

    KOF98_A_EXTRALOC
};

const sDescTreeNode KOF98_A_UNITS[KOF98_A_NUMUNIT] =
{
    { "Kyo", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_COLLECTION, ARRAYSIZE(KOF98_A_KYO_COLLECTION) },
    { "Benimaru", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF98_A_BENIMARU_COLLECTION) },
    { "Daimon", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_COLLECTION, ARRAYSIZE(KOF98_A_DAIMON_COLLECTION) },
    { "Terry", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_COLLECTION, ARRAYSIZE(KOF98_A_TERRY_COLLECTION) },
    { "Andy", DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_COLLECTION, ARRAYSIZE(KOF98_A_Andy_COLLECTION) },
    { "Joe", DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_COLLECTION, ARRAYSIZE(KOF98_A_Joe_COLLECTION) },
    { "Ryo", DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_COLLECTION, ARRAYSIZE(KOF98_A_Ryo_COLLECTION) },
    { "Robert", DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_COLLECTION, ARRAYSIZE(KOF98_A_Robert_COLLECTION) },
    { "Yuri", DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_COLLECTION, ARRAYSIZE(KOF98_A_Yuri_COLLECTION) },
    { "Leona", DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_COLLECTION, ARRAYSIZE(KOF98_A_Leona_COLLECTION) },
    { "Ralf", DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_COLLECTION, ARRAYSIZE(KOF98_A_Ralf_COLLECTION) },
    { "Clark", DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_COLLECTION, ARRAYSIZE(KOF98_A_Clark_COLLECTION) },
    { "Athena", DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_COLLECTION, ARRAYSIZE(KOF98_A_Athena_COLLECTION) },
    { "Kensou", DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_COLLECTION, ARRAYSIZE(KOF98_A_Kensou_COLLECTION) },
    { "Chin", DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_COLLECTION, ARRAYSIZE(KOF98_A_Chin_COLLECTION) },
    { "Chizuru", DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_COLLECTION, ARRAYSIZE(KOF98_A_Chizuru_COLLECTION) },
    { "Mai", DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_COLLECTION, ARRAYSIZE(KOF98_A_Mai_COLLECTION) },
    { "King", DESC_NODETYPE_TREE, (void*)KOF98_A_King_COLLECTION, ARRAYSIZE(KOF98_A_King_COLLECTION) },
    { "Kim", DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_COLLECTION, ARRAYSIZE(KOF98_A_Kim_COLLECTION) },
    { "Chang", DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_COLLECTION, ARRAYSIZE(KOF98_A_Chang_COLLECTION) },
    { "Choi", DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_COLLECTION, ARRAYSIZE(KOF98_A_Choi_COLLECTION) },
    { "Yashiro", DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_COLLECTION, ARRAYSIZE(KOF98_A_Yashiro_COLLECTION) },
    { "Shermie", DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_COLLECTION, ARRAYSIZE(KOF98_A_Shermie_COLLECTION) },
    { "Chris", DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_COLLECTION, ARRAYSIZE(KOF98_A_Chris_COLLECTION) },
    { "Yamazaki", DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_COLLECTION, ARRAYSIZE(KOF98_A_Yamazaki_COLLECTION) },
    { "Blue", DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_COLLECTION, ARRAYSIZE(KOF98_A_Blue_COLLECTION) },
    { "Billy", DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_COLLECTION, ARRAYSIZE(KOF98_A_Billy_COLLECTION) },
    { "Iori", DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_COLLECTION, ARRAYSIZE(KOF98_A_Iori_COLLECTION) },
    { "Mature", DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_COLLECTION, ARRAYSIZE(KOF98_A_Mature_COLLECTION) },
    { "Vice", DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_COLLECTION, ARRAYSIZE(KOF98_A_Vice_COLLECTION) },
    { "Heidern", DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_COLLECTION, ARRAYSIZE(KOF98_A_Heidern_COLLECTION) },
    { "Takuma", DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_COLLECTION, ARRAYSIZE(KOF98_A_Takuma_COLLECTION) },
    { "Saisyu", DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_COLLECTION, ARRAYSIZE(KOF98_A_Saisyu_COLLECTION) },
    { "Heavy", DESC_NODETYPE_TREE, (void*)KOF98_A_Heavy_COLLECTION, ARRAYSIZE(KOF98_A_Heavy_COLLECTION) },
    { "Lucky", DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_COLLECTION, ARRAYSIZE(KOF98_A_Lucky_COLLECTION) },
    { "Brian", DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_COLLECTION, ARRAYSIZE(KOF98_A_Brian_COLLECTION) },
    { "Rugal", DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_COLLECTION, ARRAYSIZE(KOF98_A_Rugal_COLLECTION) },
    { "Shingo", DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_COLLECTION, ARRAYSIZE(KOF98_A_Shingo_COLLECTION) },
    { "O.Yashiro", DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_COLLECTION, ARRAYSIZE(KOF98_A_OYashiro_COLLECTION) },
    { "O.Shermie", DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_COLLECTION, ARRAYSIZE(KOF98_A_OShermie_COLLECTION) },
    { "O.Chris", DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_COLLECTION, ARRAYSIZE(KOF98_A_OChris_COLLECTION) },
    { "Omega", DESC_NODETYPE_TREE, (void*)KOF98_A_Omega_COLLECTION, ARRAYSIZE(KOF98_A_Omega_COLLECTION) },
};

// We extend this array with data groveled from the GarouE.txt extensible extras file, if any.
const stExtraDef KOF98_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
