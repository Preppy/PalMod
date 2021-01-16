#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of KOF98_A_KYO_PALETTE_A. 
// * Update every array using KOF98_A_NUMUNIT below
// That should be it.  Good luck.

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_A[] =
{
    { L"Kyo A - Main",  0x2d97f0, 0x2d9810, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 1",  0x2d9810, 0x2d9830, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 2",  0x2d9830, 0x2d9850, indexKOFSprites_98Kyo },
    { L"Kyo A - Max Mode",  0x2d9850, 0x2d9870, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 3",  0x2d9870, 0x2d9890, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 4",  0x2d9890, 0x2d98b0, indexKOFSprites_98Kyo },
    { L"Kyo A - Order Select",  0x2d98b0, 0x2d98d0, indexKOFSprites_98OrderSelect, 0x2b },
    { L"Kyo A - Life Bar Portrait",  0x2d98d0, 0x2d98f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo },
    { L"Kyo A - Win Screen Portrait/sprite",  0x2d98f0, 0x2d99f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_B[] =
{
    { L"Kyo B - Main",  0x2d99f0, 0x2d9a10, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 1",  0x2d9a10, 0x2d9a30, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 2",  0x2d9a30, 0x2d9a50, indexKOFSprites_98Kyo },
    { L"Kyo B - Max Mode",  0x2d9a50, 0x2d9a70, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 3",  0x2d9a70, 0x2d9a90, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 4",  0x2d9a90, 0x2d9ab0, indexKOFSprites_98Kyo },
    { L"Kyo B - Order Select",  0x2d9ab0, 0x2d9ad0, indexKOFSprites_98OrderSelect, 0x2b },
    { L"Kyo B - Life Bar Portrait",  0x2d9ad0, 0x2d9af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo },
    { L"Kyo B - Win Screen Portrait/sprite",  0x2d9af0, 0x2d9bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_C[] =
{
    { L"Kyo C - Main",  0x2d9bf0, 0x2d9c10, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 1",  0x2d9c10, 0x2d9c30, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 2",  0x2d9c30, 0x2d9c50, indexKOFSprites_98Kyo },
    { L"Kyo C - Max Mode",  0x2d9c50, 0x2d9c70, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 3",  0x2d9c70, 0x2d9c90, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 4",  0x2d9c90, 0x2d9cb0, indexKOFSprites_98Kyo },
    { L"Kyo C - Order Select",  0x2d9cb0, 0x2d9cd0, indexKOFSprites_98OrderSelect, 0x2b },
    { L"Kyo C - Life Bar Portrait",  0x2d9cd0, 0x2d9cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo },
    { L"Kyo C - Win Screen Portrait/sprite",  0x2d9cf0, 0x2d9df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_D[] =
{
    { L"Kyo D - Main",  0x2d9df0, 0x2d9e10, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 1",  0x2d9e10, 0x2d9e30, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 2",  0x2d9e30, 0x2d9e50, indexKOFSprites_98Kyo },
    { L"Kyo D - Max Mode",  0x2d9e50, 0x2d9e70, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 3",  0x2d9e70, 0x2d9e90, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 4",  0x2d9e90, 0x2d9eb0, indexKOFSprites_98Kyo },
    { L"Kyo D - Order Select",  0x2d9eb0, 0x2d9ed0, indexKOFSprites_98OrderSelect, 0x2b },
    { L"Kyo D - Life Bar Portrait",  0x2d9ed0, 0x2d9ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo },
    { L"Kyo D - Win Screen Portrait/sprite",  0x2d9ef0, 0x2d9ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_A[] =
{
    { L"Benimaru A - Main",  0x2d9ff0, 0x2da010, indexKOFSprites_98Benimaru },
    { L"Benimaru A - Extra 1",  0x2da010, 0x2da030, indexKOFSprites_98Benimaru },
    { L"Benimaru A - Extra 2",  0x2da030, 0x2da050, indexKOFSprites_98Benimaru },
    { L"Benimaru A - Max Mode",  0x2da050, 0x2da070, indexKOFSprites_98Benimaru },
    { L"Benimaru A - Extra 3",  0x2da070, 0x2da090, indexKOFSprites_98Benimaru },
    { L"Benimaru A - Extra 4",  0x2da090, 0x2da0b0, indexKOFSprites_98Benimaru },
    { L"Benimaru A - Order Select",  0x2da0b0, 0x2da0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Benimaru },
    { L"Benimaru A - Life Bar Portrait",  0x2da0d0, 0x2da0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Benimaru },
    { L"Benimaru A - Win Screen Portrait/sprite",  0x2da0f0, 0x2da1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_B[] =
{
    { L"Benimaru B - Main",  0x2da1f0, 0x2da210, indexKOFSprites_98Benimaru },
    { L"Benimaru B - Extra 1",  0x2da210, 0x2da230, indexKOFSprites_98Benimaru },
    { L"Benimaru B - Extra 2",  0x2da230, 0x2da250, indexKOFSprites_98Benimaru },
    { L"Benimaru B - Max Mode",  0x2da250, 0x2da270, indexKOFSprites_98Benimaru },
    { L"Benimaru B - Extra 3",  0x2da270, 0x2da290, indexKOFSprites_98Benimaru },
    { L"Benimaru B - Extra 4",  0x2da290, 0x2da2b0, indexKOFSprites_98Benimaru },
    { L"Benimaru B - Order Select",  0x2da2b0, 0x2da2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Benimaru },
    { L"Benimaru B - Life Bar Portrait",  0x2da2d0, 0x2da2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Benimaru },
    { L"Benimaru B - Win Screen Portrait/sprite",  0x2da2f0, 0x2da3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_C[] =
{
    { L"Benimaru C - Main",  0x2da3f0, 0x2da410, indexKOFSprites_98Benimaru },
    { L"Benimaru C - Extra 1",  0x2da410, 0x2da430, indexKOFSprites_98Benimaru },
    { L"Benimaru C - Extra 2",  0x2da430, 0x2da450, indexKOFSprites_98Benimaru },
    { L"Benimaru C - Max Mode",  0x2da450, 0x2da470, indexKOFSprites_98Benimaru },
    { L"Benimaru C - Extra 3",  0x2da470, 0x2da490, indexKOFSprites_98Benimaru },
    { L"Benimaru C - Extra 4",  0x2da490, 0x2da4b0, indexKOFSprites_98Benimaru },
    { L"Benimaru C - Order Select",  0x2da4b0, 0x2da4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Benimaru },
    { L"Benimaru C - Life Bar Portrait",  0x2da4d0, 0x2da4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Benimaru },
    { L"Benimaru C - Win Screen Portrait/sprite",  0x2da4f0, 0x2da5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_D[] =
{
    { L"Benimaru D - Main",  0x2da5f0, 0x2da610, indexKOFSprites_98Benimaru },
    { L"Benimaru D - Extra 1",  0x2da610, 0x2da630, indexKOFSprites_98Benimaru },
    { L"Benimaru D - Extra 2",  0x2da630, 0x2da650, indexKOFSprites_98Benimaru },
    { L"Benimaru D - Max Mode",  0x2da650, 0x2da670, indexKOFSprites_98Benimaru },
    { L"Benimaru D - Extra 3",  0x2da670, 0x2da690, indexKOFSprites_98Benimaru },
    { L"Benimaru D - Extra 4",  0x2da690, 0x2da6b0, indexKOFSprites_98Benimaru },
    { L"Benimaru D - Order Select",  0x2da6b0, 0x2da6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Benimaru },
    { L"Benimaru D - Life Bar Portrait",  0x2da6d0, 0x2da6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Benimaru },
    { L"Benimaru D - Win Screen Portrait/sprite",  0x2da6f0, 0x2da7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_A[] =
{
    { L"Daimon A - Main",  0x2da7f0, 0x2da810, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 1",  0x2da810, 0x2da830, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 2",  0x2da830, 0x2da850, indexKOFSprites_98Daimon },
    { L"Daimon A - Max Mode",  0x2da850, 0x2da870, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 3",  0x2da870, 0x2da890, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 4",  0x2da890, 0x2da8b0, indexKOFSprites_98Daimon },
    { L"Daimon A - Order Select",  0x2da8b0, 0x2da8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Daimon },
    { L"Daimon A - Life Bar Portrait",  0x2da8d0, 0x2da8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Daimon A - Win Screen Portrait/sprite",  0x2da8f0, 0x2da9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_B[] =
{
    { L"Daimon B - Main",  0x2da9f0, 0x2daa10, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 1",  0x2daa10, 0x2daa30, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 2",  0x2daa30, 0x2daa50, indexKOFSprites_98Daimon },
    { L"Daimon B - Max Mode",  0x2daa50, 0x2daa70, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 3",  0x2daa70, 0x2daa90, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 4",  0x2daa90, 0x2daab0, indexKOFSprites_98Daimon },
    { L"Daimon B - Order Select",  0x2daab0, 0x2daad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Daimon },
    { L"Daimon B - Life Bar Portrait",  0x2daad0, 0x2daaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Daimon B - Win Screen Portrait/sprite",  0x2daaf0, 0x2dabf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_C[] =
{
    { L"Daimon C - Main",  0x2dabf0, 0x2dac10, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 1",  0x2dac10, 0x2dac30, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 2",  0x2dac30, 0x2dac50, indexKOFSprites_98Daimon },
    { L"Daimon C - Max Mode",  0x2dac50, 0x2dac70, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 3",  0x2dac70, 0x2dac90, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 4",  0x2dac90, 0x2dacb0, indexKOFSprites_98Daimon },
    { L"Daimon C - Order Select",  0x2dacb0, 0x2dacd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Daimon },
    { L"Daimon C - Life Bar Portrait",  0x2dacd0, 0x2dacf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Daimon C - Win Screen Portrait/sprite",  0x2dacf0, 0x2dadf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_D[] =
{
    { L"Daimon D - Main",  0x2dadf0, 0x2dae10, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 1",  0x2dae10, 0x2dae30, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 2",  0x2dae30, 0x2dae50, indexKOFSprites_98Daimon },
    { L"Daimon D - Max Mode",  0x2dae50, 0x2dae70, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 3",  0x2dae70, 0x2dae90, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 4",  0x2dae90, 0x2daeb0, indexKOFSprites_98Daimon },
    { L"Daimon D - Order Select",  0x2daeb0, 0x2daed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Daimon },
    { L"Daimon D - Life Bar Portrait",  0x2daed0, 0x2daef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Daimon D - Win Screen Portrait/sprite",  0x2daef0, 0x2daff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_A[] =
{
    { L"Terry A - Main",  0x2daff0, 0x2db010, indexKOFSprites_98Terry },
    { L"Terry A - Extra 1",  0x2db010, 0x2db030, indexKOFSprites_98Terry },
    { L"Terry A - Extra 2",  0x2db030, 0x2db050, indexKOFSprites_98Terry },
    { L"Terry A - Max Mode",  0x2db050, 0x2db070, indexKOFSprites_98Terry },
    { L"Terry A - Extra 3",  0x2db070, 0x2db090, indexKOFSprites_98Terry },
    { L"Terry A - Extra 4",  0x2db090, 0x2db0b0, indexKOFSprites_98Terry },
    { L"Terry A - Order Select",  0x2db0b0, 0x2db0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Terry },
    { L"Terry A - Life Bar Portrait",  0x2db0d0, 0x2db0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Terry A - Win Screen Portrait/sprite",  0x2db0f0, 0x2db1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_B[] =
{
    { L"Terry B - Main",  0x2db1f0, 0x2db210, indexKOFSprites_98Terry },
    { L"Terry B - Extra 1",  0x2db210, 0x2db230, indexKOFSprites_98Terry },
    { L"Terry B - Extra 2",  0x2db230, 0x2db250, indexKOFSprites_98Terry },
    { L"Terry B - Max Mode",  0x2db250, 0x2db270, indexKOFSprites_98Terry },
    { L"Terry B - Extra 3",  0x2db270, 0x2db290, indexKOFSprites_98Terry },
    { L"Terry B - Extra 4",  0x2db290, 0x2db2b0, indexKOFSprites_98Terry },
    { L"Terry B - Order Select",  0x2db2b0, 0x2db2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Terry },
    { L"Terry B - Life Bar Portrait",  0x2db2d0, 0x2db2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Terry B - Win Screen Portrait/sprite",  0x2db2f0, 0x2db3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_C[] =
{
    { L"Terry C - Main",  0x2db3f0, 0x2db410, indexKOFSprites_98Terry },
    { L"Terry C - Extra 1",  0x2db410, 0x2db430, indexKOFSprites_98Terry },
    { L"Terry C - Extra 2",  0x2db430, 0x2db450, indexKOFSprites_98Terry },
    { L"Terry C - Max Mode",  0x2db450, 0x2db470, indexKOFSprites_98Terry },
    { L"Terry C - Extra 3",  0x2db470, 0x2db490, indexKOFSprites_98Terry },
    { L"Terry C - Extra 4",  0x2db490, 0x2db4b0, indexKOFSprites_98Terry },
    { L"Terry C - Order Select",  0x2db4b0, 0x2db4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Terry },
    { L"Terry C - Life Bar Portrait",  0x2db4d0, 0x2db4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Terry C - Win Screen Portrait/sprite",  0x2db4f0, 0x2db5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_D[] =
{
    { L"Terry D - Main",  0x2db5f0, 0x2db610, indexKOFSprites_98Terry },
    { L"Terry D - Extra 1",  0x2db610, 0x2db630, indexKOFSprites_98Terry },
    { L"Terry D - Extra 2",  0x2db630, 0x2db650, indexKOFSprites_98Terry },
    { L"Terry D - Max Mode",  0x2db650, 0x2db670, indexKOFSprites_98Terry },
    { L"Terry D - Extra 3",  0x2db670, 0x2db690, indexKOFSprites_98Terry },
    { L"Terry D - Extra 4",  0x2db690, 0x2db6b0, indexKOFSprites_98Terry },
    { L"Terry D - Order Select",  0x2db6b0, 0x2db6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Terry },
    { L"Terry D - Life Bar Portrait",  0x2db6d0, 0x2db6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Terry D - Win Screen Portrait/sprite",  0x2db6f0, 0x2db7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_A[] =
{
    { L"Andy A - Main",  0x2db7f0, 0x2db810, indexKOFSprites_98Andy },
    { L"Andy A - Extra 1",  0x2db810, 0x2db830, indexKOFSprites_98Andy },
    { L"Andy A - Extra 2",  0x2db830, 0x2db850, indexKOFSprites_98Andy },
    { L"Andy A - Max Mode",  0x2db850, 0x2db870, indexKOFSprites_98Andy },
    { L"Andy A - Extra 3",  0x2db870, 0x2db890, indexKOFSprites_98Andy },
    { L"Andy A - Extra 4",  0x2db890, 0x2db8b0, indexKOFSprites_98Andy },
    { L"Andy A - Order Select",  0x2db8b0, 0x2db8d0, indexKOFSprites_98OrderSelect, 0x48 },
    { L"Andy A - Life Bar Portrait",  0x2db8d0, 0x2db8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Andy },
    { L"Andy A - Win Screen Portrait/sprite",  0x2db8f0, 0x2db9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Andy },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_B[] =
{
    { L"Andy B - Main",  0x2db9f0, 0x2dba10, indexKOFSprites_98Andy },
    { L"Andy B - Extra 1",  0x2dba10, 0x2dba30, indexKOFSprites_98Andy },
    { L"Andy B - Extra 2",  0x2dba30, 0x2dba50, indexKOFSprites_98Andy },
    { L"Andy B - Max Mode",  0x2dba50, 0x2dba70, indexKOFSprites_98Andy },
    { L"Andy B - Extra 3",  0x2dba70, 0x2dba90, indexKOFSprites_98Andy },
    { L"Andy B - Extra 4",  0x2dba90, 0x2dbab0, indexKOFSprites_98Andy },
    { L"Andy B - Order Select",  0x2dbab0, 0x2dbad0, indexKOFSprites_98OrderSelect, 0x48 },
    { L"Andy B - Life Bar Portrait",  0x2dbad0, 0x2dbaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Andy },
    { L"Andy B - Win Screen Portrait/sprite",  0x2dbaf0, 0x2dbbf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Andy },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_C[] =
{
    { L"Andy C - Main",  0x2dbbf0, 0x2dbc10, indexKOFSprites_98Andy },
    { L"Andy C - Extra 1",  0x2dbc10, 0x2dbc30, indexKOFSprites_98Andy },
    { L"Andy C - Extra 2",  0x2dbc30, 0x2dbc50, indexKOFSprites_98Andy },
    { L"Andy C - Max Mode",  0x2dbc50, 0x2dbc70, indexKOFSprites_98Andy },
    { L"Andy C - Extra 3",  0x2dbc70, 0x2dbc90, indexKOFSprites_98Andy },
    { L"Andy C - Extra 4",  0x2dbc90, 0x2dbcb0, indexKOFSprites_98Andy },
    { L"Andy C - Order Select",  0x2dbcb0, 0x2dbcd0, indexKOFSprites_98OrderSelect, 0x48 },
    { L"Andy C - Life Bar Portrait",  0x2dbcd0, 0x2dbcf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Andy },
    { L"Andy C - Win Screen Portrait/sprite",  0x2dbcf0, 0x2dbdf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Andy },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_D[] =
{
    { L"Andy D - Main",  0x2dbdf0, 0x2dbe10, indexKOFSprites_98Andy },
    { L"Andy D - Extra 1",  0x2dbe10, 0x2dbe30, indexKOFSprites_98Andy },
    { L"Andy D - Extra 2",  0x2dbe30, 0x2dbe50, indexKOFSprites_98Andy },
    { L"Andy D - Max Mode",  0x2dbe50, 0x2dbe70, indexKOFSprites_98Andy },
    { L"Andy D - Extra 3",  0x2dbe70, 0x2dbe90, indexKOFSprites_98Andy },
    { L"Andy D - Extra 4",  0x2dbe90, 0x2dbeb0, indexKOFSprites_98Andy },
    { L"Andy D - Order Select",  0x2dbeb0, 0x2dbed0, indexKOFSprites_98OrderSelect, 0x48 },
    { L"Andy D - Life Bar Portrait",  0x2dbed0, 0x2dbef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Andy },
    { L"Andy D - Win Screen Portrait/sprite",  0x2dbef0, 0x2dbff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Andy },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_A[] =
{
    { L"Joe A - Main",  0x2dbff0, 0x2dc010, indexKOFSprites_98Joe },
    { L"Joe A - Extra 1",  0x2dc010, 0x2dc030, indexKOFSprites_98Joe },
    { L"Joe A - Extra 2",  0x2dc030, 0x2dc050, indexKOFSprites_98Joe },
    { L"Joe A - Max Mode",  0x2dc050, 0x2dc070, indexKOFSprites_98Joe },
    { L"Joe A - Extra 3",  0x2dc070, 0x2dc090, indexKOFSprites_98Joe },
    { L"Joe A - Extra 4",  0x2dc090, 0x2dc0b0, indexKOFSprites_98Joe },
    { L"Joe A - Order Select",  0x2dc0b0, 0x2dc0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Joe },
    { L"Joe A - Life Bar Portrait",  0x2dc0d0, 0x2dc0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Joe A - Win Screen Portrait/sprite",  0x2dc0f0, 0x2dc1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_B[] =
{
    { L"Joe B - Main",  0x2dc1f0, 0x2dc210, indexKOFSprites_98Joe },
    { L"Joe B - Extra 1",  0x2dc210, 0x2dc230, indexKOFSprites_98Joe },
    { L"Joe B - Extra 2",  0x2dc230, 0x2dc250, indexKOFSprites_98Joe },
    { L"Joe B - Max Mode",  0x2dc250, 0x2dc270, indexKOFSprites_98Joe },
    { L"Joe B - Extra 3",  0x2dc270, 0x2dc290, indexKOFSprites_98Joe },
    { L"Joe B - Extra 4",  0x2dc290, 0x2dc2b0, indexKOFSprites_98Joe },
    { L"Joe B - Order Select",  0x2dc2b0, 0x2dc2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Joe },
    { L"Joe B - Life Bar Portrait",  0x2dc2d0, 0x2dc2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Joe B - Win Screen Portrait/sprite",  0x2dc2f0, 0x2dc3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_C[] =
{
    { L"Joe C - Main",  0x2dc3f0, 0x2dc410, indexKOFSprites_98Joe },
    { L"Joe C - Extra 1",  0x2dc410, 0x2dc430, indexKOFSprites_98Joe },
    { L"Joe C - Extra 2",  0x2dc430, 0x2dc450, indexKOFSprites_98Joe },
    { L"Joe C - Max Mode",  0x2dc450, 0x2dc470, indexKOFSprites_98Joe },
    { L"Joe C - Extra 3",  0x2dc470, 0x2dc490, indexKOFSprites_98Joe },
    { L"Joe C - Extra 4",  0x2dc490, 0x2dc4b0, indexKOFSprites_98Joe },
    { L"Joe C - Order Select",  0x2dc4b0, 0x2dc4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Joe },
    { L"Joe C - Life Bar Portrait",  0x2dc4d0, 0x2dc4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Joe C - Win Screen Portrait/sprite",  0x2dc4f0, 0x2dc5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_D[] =
{
    { L"Joe D - Main",  0x2dc5f0, 0x2dc610, indexKOFSprites_98Joe },
    { L"Joe D - Extra 1",  0x2dc610, 0x2dc630, indexKOFSprites_98Joe },
    { L"Joe D - Extra 2",  0x2dc630, 0x2dc650, indexKOFSprites_98Joe },
    { L"Joe D - Max Mode",  0x2dc650, 0x2dc670, indexKOFSprites_98Joe },
    { L"Joe D - Extra 3",  0x2dc670, 0x2dc690, indexKOFSprites_98Joe },
    { L"Joe D - Extra 4",  0x2dc690, 0x2dc6b0, indexKOFSprites_98Joe },
    { L"Joe D - Order Select",  0x2dc6b0, 0x2dc6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Joe },
    { L"Joe D - Life Bar Portrait",  0x2dc6d0, 0x2dc6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Joe D - Win Screen Portrait/sprite",  0x2dc6f0, 0x2dc7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_A[] =
{
    { L"Ryo A - Main",  0x2dc7f0, 0x2dc810, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 1",  0x2dc810, 0x2dc830, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 2",  0x2dc830, 0x2dc850, indexKOFSprites_98Ryo },
    { L"Ryo A - Max Mode",  0x2dc850, 0x2dc870, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 3",  0x2dc870, 0x2dc890, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 4",  0x2dc890, 0x2dc8b0, indexKOFSprites_98Ryo },
    { L"Ryo A - Order Select",  0x2dc8b0, 0x2dc8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ryo },
    { L"Ryo A - Life Bar Portrait",  0x2dc8d0, 0x2dc8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Ryo A - Win Screen Portrait/sprite",  0x2dc8f0, 0x2dc9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_B[] =
{
    { L"Ryo B - Main",  0x2dc9f0, 0x2dca10, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 1",  0x2dca10, 0x2dca30, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 2",  0x2dca30, 0x2dca50, indexKOFSprites_98Ryo },
    { L"Ryo B - Max Mode",  0x2dca50, 0x2dca70, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 3",  0x2dca70, 0x2dca90, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 4",  0x2dca90, 0x2dcab0, indexKOFSprites_98Ryo },
    { L"Ryo B - Order Select",  0x2dcab0, 0x2dcad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ryo },
    { L"Ryo B - Life Bar Portrait",  0x2dcad0, 0x2dcaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Ryo B - Win Screen Portrait/sprite",  0x2dcaf0, 0x2dcbf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_C[] =
{
    { L"Ryo C - Main",  0x2dcbf0, 0x2dcc10, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 1",  0x2dcc10, 0x2dcc30, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 2",  0x2dcc30, 0x2dcc50, indexKOFSprites_98Ryo },
    { L"Ryo C - Max Mode",  0x2dcc50, 0x2dcc70, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 3",  0x2dcc70, 0x2dcc90, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 4",  0x2dcc90, 0x2dccb0, indexKOFSprites_98Ryo },
    { L"Ryo C - Order Select",  0x2dccb0, 0x2dccd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ryo },
    { L"Ryo C - Life Bar Portrait",  0x2dccd0, 0x2dccf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Ryo C - Win Screen Portrait/sprite",  0x2dccf0, 0x2dcdf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_D[] =
{
    { L"Ryo D - Main",  0x2dcdf0, 0x2dce10, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 1",  0x2dce10, 0x2dce30, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 2",  0x2dce30, 0x2dce50, indexKOFSprites_98Ryo },
    { L"Ryo D - Max Mode",  0x2dce50, 0x2dce70, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 3",  0x2dce70, 0x2dce90, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 4",  0x2dce90, 0x2dceb0, indexKOFSprites_98Ryo },
    { L"Ryo D - Order Select",  0x2dceb0, 0x2dced0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ryo },
    { L"Ryo D - Life Bar Portrait",  0x2dced0, 0x2dcef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Ryo D - Win Screen Portrait/sprite",  0x2dcef0, 0x2dcff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_A[] =
{
    { L"Robert A - Main",  0x2dcff0, 0x2dd010, indexKOFSprites_98Robert },
    { L"Robert A - Extra 1",  0x2dd010, 0x2dd030, indexKOFSprites_98Robert },
    { L"Robert A - Extra 2",  0x2dd030, 0x2dd050, indexKOFSprites_98Robert },
    { L"Robert A - Max Mode",  0x2dd050, 0x2dd070, indexKOFSprites_98Robert },
    { L"Robert A - Extra 3",  0x2dd070, 0x2dd090, indexKOFSprites_98Robert },
    { L"Robert A - Extra 4",  0x2dd090, 0x2dd0b0, indexKOFSprites_98Robert },
    { L"Robert A - Order Select",  0x2dd0b0, 0x2dd0d0, indexKOFSprites_98OrderSelect, 0x4b },
    { L"Robert A - Life Bar Portrait",  0x2dd0d0, 0x2dd0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Robert A - Win Screen Portrait/sprite",  0x2dd0f0, 0x2dd1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Robert },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_B[] =
{
    { L"Robert B - Main",  0x2dd1f0, 0x2dd210, indexKOFSprites_98Robert },
    { L"Robert B - Extra 1",  0x2dd210, 0x2dd230, indexKOFSprites_98Robert },
    { L"Robert B - Extra 2",  0x2dd230, 0x2dd250, indexKOFSprites_98Robert },
    { L"Robert B - Max Mode",  0x2dd250, 0x2dd270, indexKOFSprites_98Robert },
    { L"Robert B - Extra 3",  0x2dd270, 0x2dd290, indexKOFSprites_98Robert },
    { L"Robert B - Extra 4",  0x2dd290, 0x2dd2b0, indexKOFSprites_98Robert },
    { L"Robert B - Order Select",  0x2dd2b0, 0x2dd2d0, indexKOFSprites_98OrderSelect, 0x4b },
    { L"Robert B - Life Bar Portrait",  0x2dd2d0, 0x2dd2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Robert B - Win Screen Portrait/sprite",  0x2dd2f0, 0x2dd3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Robert },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_C[] =
{
    { L"Robert C - Main",  0x2dd3f0, 0x2dd410, indexKOFSprites_98Robert },
    { L"Robert C - Extra 1",  0x2dd410, 0x2dd430, indexKOFSprites_98Robert },
    { L"Robert C - Extra 2",  0x2dd430, 0x2dd450, indexKOFSprites_98Robert },
    { L"Robert C - Max Mode",  0x2dd450, 0x2dd470, indexKOFSprites_98Robert },
    { L"Robert C - Extra 3",  0x2dd470, 0x2dd490, indexKOFSprites_98Robert },
    { L"Robert C - Extra 4",  0x2dd490, 0x2dd4b0, indexKOFSprites_98Robert },
    { L"Robert C - Order Select",  0x2dd4b0, 0x2dd4d0, indexKOFSprites_98OrderSelect, 0x4b },
    { L"Robert C - Life Bar Portrait",  0x2dd4d0, 0x2dd4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Robert C - Win Screen Portrait/sprite",  0x2dd4f0, 0x2dd5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Robert },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_D[] =
{
    { L"Robert D - Main",  0x2dd5f0, 0x2dd610, indexKOFSprites_98Robert },
    { L"Robert D - Extra 1",  0x2dd610, 0x2dd630, indexKOFSprites_98Robert },
    { L"Robert D - Extra 2",  0x2dd630, 0x2dd650, indexKOFSprites_98Robert },
    { L"Robert D - Max Mode",  0x2dd650, 0x2dd670, indexKOFSprites_98Robert },
    { L"Robert D - Extra 3",  0x2dd670, 0x2dd690, indexKOFSprites_98Robert },
    { L"Robert D - Extra 4",  0x2dd690, 0x2dd6b0, indexKOFSprites_98Robert },
    { L"Robert D - Order Select",  0x2dd6b0, 0x2dd6d0, indexKOFSprites_98OrderSelect, 0x4b },
    { L"Robert D - Life Bar Portrait",  0x2dd6d0, 0x2dd6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Robert D - Win Screen Portrait/sprite",  0x2dd6f0, 0x2dd7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Robert },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_A[] =
{
    { L"Yuri A - Main",  0x2dd7f0, 0x2dd810, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 1",  0x2dd810, 0x2dd830, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 2",  0x2dd830, 0x2dd850, indexKOFSprites_98Yuri },
    { L"Yuri A - Max Mode",  0x2dd850, 0x2dd870, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 3",  0x2dd870, 0x2dd890, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 4",  0x2dd890, 0x2dd8b0, indexKOFSprites_98Yuri },
    { L"Yuri A - Order Select",  0x2dd8b0, 0x2dd8d0, indexKOFSprites_98OrderSelect, 0x4c },
    { L"Yuri A - Life Bar Portrait",  0x2dd8d0, 0x2dd8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Yuri A - Win Screen Portrait/sprite",  0x2dd8f0, 0x2dd9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yuri },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_B[] =
{
    { L"Yuri B - Main",  0x2dd9f0, 0x2dda10, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 1",  0x2dda10, 0x2dda30, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 2",  0x2dda30, 0x2dda50, indexKOFSprites_98Yuri },
    { L"Yuri B - Max Mode",  0x2dda50, 0x2dda70, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 3",  0x2dda70, 0x2dda90, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 4",  0x2dda90, 0x2ddab0, indexKOFSprites_98Yuri },
    { L"Yuri B - Order Select",  0x2ddab0, 0x2ddad0, indexKOFSprites_98OrderSelect, 0x4c },
    { L"Yuri B - Life Bar Portrait",  0x2ddad0, 0x2ddaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Yuri B - Win Screen Portrait/sprite",  0x2ddaf0, 0x2ddbf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yuri },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_C[] =
{
    { L"Yuri C - Main",  0x2ddbf0, 0x2ddc10, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 1",  0x2ddc10, 0x2ddc30, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 2",  0x2ddc30, 0x2ddc50, indexKOFSprites_98Yuri },
    { L"Yuri C - Max Mode",  0x2ddc50, 0x2ddc70, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 3",  0x2ddc70, 0x2ddc90, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 4",  0x2ddc90, 0x2ddcb0, indexKOFSprites_98Yuri },
    { L"Yuri C - Order Select",  0x2ddcb0, 0x2ddcd0, indexKOFSprites_98OrderSelect, 0x4c },
    { L"Yuri C - Life Bar Portrait",  0x2ddcd0, 0x2ddcf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Yuri C - Win Screen Portrait/sprite",  0x2ddcf0, 0x2dddf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yuri },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_D[] =
{
    { L"Yuri D - Main",  0x2dddf0, 0x2dde10, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 1",  0x2dde10, 0x2dde30, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 2",  0x2dde30, 0x2dde50, indexKOFSprites_98Yuri },
    { L"Yuri D - Max Mode",  0x2dde50, 0x2dde70, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 3",  0x2dde70, 0x2dde90, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 4",  0x2dde90, 0x2ddeb0, indexKOFSprites_98Yuri },
    { L"Yuri D - Order Select",  0x2ddeb0, 0x2dded0, indexKOFSprites_98OrderSelect, 0x4c },
    { L"Yuri D - Life Bar Portrait",  0x2dded0, 0x2ddef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Yuri D - Win Screen Portrait/sprite",  0x2ddef0, 0x2ddff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yuri },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_A[] =
{
    { L"Leona A - Main",  0x2ddff0, 0x2de010, indexKOFSprites_98Leona },
    { L"Leona A - Extra 1",  0x2de010, 0x2de030, indexKOFSprites_98Leona },
    { L"Leona A - Extra 2",  0x2de030, 0x2de050, indexKOFSprites_98Leona },
    { L"Leona A - Max Mode",  0x2de050, 0x2de070, indexKOFSprites_98Leona },
    { L"Leona A - Extra 3",  0x2de070, 0x2de090, indexKOFSprites_98Leona },
    { L"Leona A - Extra 4",  0x2de090, 0x2de0b0, indexKOFSprites_98Leona },
    { L"Leona A - Order Select",  0x2de0b0, 0x2de0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Leona },
    { L"Leona A - Life Bar Portrait",  0x2de0d0, 0x2de0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Leona A - Win Screen Portrait/sprite",  0x2de0f0, 0x2de1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_B[] =
{
    { L"Leona B - Main",  0x2de1f0, 0x2de210, indexKOFSprites_98Leona },
    { L"Leona B - Extra 1",  0x2de210, 0x2de230, indexKOFSprites_98Leona },
    { L"Leona B - Extra 2",  0x2de230, 0x2de250, indexKOFSprites_98Leona },
    { L"Leona B - Max Mode",  0x2de250, 0x2de270, indexKOFSprites_98Leona },
    { L"Leona B - Extra 3",  0x2de270, 0x2de290, indexKOFSprites_98Leona },
    { L"Leona B - Extra 4",  0x2de290, 0x2de2b0, indexKOFSprites_98Leona },
    { L"Leona B - Order Select",  0x2de2b0, 0x2de2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Leona },
    { L"Leona B - Life Bar Portrait",  0x2de2d0, 0x2de2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Leona B - Win Screen Portrait/sprite",  0x2de2f0, 0x2de3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_C[] =
{
    { L"Leona C - Main",  0x2de3f0, 0x2de410, indexKOFSprites_98Leona },
    { L"Leona C - Extra 1",  0x2de410, 0x2de430, indexKOFSprites_98Leona },
    { L"Leona C - Extra 2",  0x2de430, 0x2de450, indexKOFSprites_98Leona },
    { L"Leona C - Max Mode",  0x2de450, 0x2de470, indexKOFSprites_98Leona },
    { L"Leona C - Extra 3",  0x2de470, 0x2de490, indexKOFSprites_98Leona },
    { L"Leona C - Extra 4",  0x2de490, 0x2de4b0, indexKOFSprites_98Leona },
    { L"Leona C - Order Select",  0x2de4b0, 0x2de4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Leona },
    { L"Leona C - Life Bar Portrait",  0x2de4d0, 0x2de4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Leona C - Win Screen Portrait/sprite",  0x2de4f0, 0x2de5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_D[] =
{
    { L"Leona D - Main",  0x2de5f0, 0x2de610, indexKOFSprites_98Leona },
    { L"Leona D - Extra 1",  0x2de610, 0x2de630, indexKOFSprites_98Leona },
    { L"Leona D - Extra 2",  0x2de630, 0x2de650, indexKOFSprites_98Leona },
    { L"Leona D - Max Mode",  0x2de650, 0x2de670, indexKOFSprites_98Leona },
    { L"Leona D - Extra 3",  0x2de670, 0x2de690, indexKOFSprites_98Leona },
    { L"Leona D - Extra 4",  0x2de690, 0x2de6b0, indexKOFSprites_98Leona },
    { L"Leona D - Order Select",  0x2de6b0, 0x2de6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Leona },
    { L"Leona D - Life Bar Portrait",  0x2de6d0, 0x2de6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Leona D - Win Screen Portrait/sprite",  0x2de6f0, 0x2de7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_A[] =
{
    { L"Ralf A - Main",  0x2de7f0, 0x2de810, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Ralf A - Extra 1",  0x2de810, 0x2de830, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf A - Extra 2",  0x2de830, 0x2de850, indexKOFSprites_98Ralf },
    { L"Ralf A - Max Mode",  0x2de850, 0x2de870, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Ralf A - Extra 3",  0x2de870, 0x2de890, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf A - Extra 4",  0x2de890, 0x2de8b0, indexKOFSprites_98Ralf },
    { L"Ralf A - Order Select",  0x2de8b0, 0x2de8d0, indexKOFSprites_98OrderSelect, 0x2e },
    { L"Ralf A - Life Bar Portrait",  0x2de8d0, 0x2de8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Ralf A - Win Screen Portrait/sprite",  0x2de8f0, 0x2de9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ralf },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_B[] =
{
    { L"Ralf B - Main",  0x2de9f0, 0x2dea10, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Ralf B - Extra 1",  0x2dea10, 0x2dea30, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf B - Extra 2",  0x2dea30, 0x2dea50, indexKOFSprites_98Ralf },
    { L"Ralf B - Max Mode",  0x2dea50, 0x2dea70, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Ralf B - Extra 3",  0x2dea70, 0x2dea90, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf B - Extra 4",  0x2dea90, 0x2deab0, indexKOFSprites_98Ralf },
    { L"Ralf B - Order Select",  0x2deab0, 0x2dead0, indexKOFSprites_98OrderSelect, 0x2e },
    { L"Ralf B - Life Bar Portrait",  0x2dead0, 0x2deaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Ralf B - Win Screen Portrait/sprite",  0x2deaf0, 0x2debf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ralf },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_C[] =
{
    { L"Ralf C - Main",  0x2debf0, 0x2dec10, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Ralf C - Extra 1",  0x2dec10, 0x2dec30, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf C - Extra 2",  0x2dec30, 0x2dec50, indexKOFSprites_98Ralf },
    { L"Ralf C - Max Mode",  0x2dec50, 0x2dec70, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Ralf C - Extra 3",  0x2dec70, 0x2dec90, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf C - Extra 4",  0x2dec90, 0x2decb0, indexKOFSprites_98Ralf },
    { L"Ralf C - Order Select",  0x2decb0, 0x2decd0, indexKOFSprites_98OrderSelect, 0x2e },
    { L"Ralf C - Life Bar Portrait",  0x2decd0, 0x2decf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Ralf C - Win Screen Portrait/sprite",  0x2decf0, 0x2dedf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ralf },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_D[] =
{
    { L"Ralf D - Main",  0x2dedf0, 0x2dee10, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Ralf D - Extra 1",  0x2dee10, 0x2dee30, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf D - Extra 2",  0x2dee30, 0x2dee50, indexKOFSprites_98Ralf },
    { L"Ralf D - Max Mode",  0x2dee50, 0x2dee70, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Ralf D - Extra 3",  0x2dee70, 0x2dee90, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf D - Extra 4",  0x2dee90, 0x2deeb0, indexKOFSprites_98Ralf },
    { L"Ralf D - Order Select",  0x2deeb0, 0x2deed0, indexKOFSprites_98OrderSelect, 0x2e },
    { L"Ralf D - Life Bar Portrait",  0x2deed0, 0x2deef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Ralf D - Win Screen Portrait/sprite",  0x2deef0, 0x2deff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ralf },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_A[] =
{
    { L"Clark A - Main",  0x2deff0, 0x2df010, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Clark A - Extra 1",  0x2df010, 0x2df030, indexKOFSprites_98Clark, 0x01 },
    { L"Clark A - Extra 2",  0x2df030, 0x2df050, indexKOFSprites_98Clark },
    { L"Clark A - Max Mode",  0x2df050, 0x2df070, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Clark A - Extra 3",  0x2df070, 0x2df090, indexKOFSprites_98Clark, 0x01 },
    { L"Clark A - Extra 4",  0x2df090, 0x2df0b0, indexKOFSprites_98Clark },
    { L"Clark A - Order Select",  0x2df0b0, 0x2df0d0, indexKOFSprites_98OrderSelect, 0x28 },
    { L"Clark A - Life Bar Portrait",  0x2df0d0, 0x2df0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Clark A - Win Screen Portrait/sprite",  0x2df0f0, 0x2df1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Clark },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_B[] =
{
    { L"Clark B - Main",  0x2df1f0, 0x2df210, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Clark B - Extra 1",  0x2df210, 0x2df230, indexKOFSprites_98Clark, 0x01 },
    { L"Clark B - Extra 2",  0x2df230, 0x2df250, indexKOFSprites_98Clark },
    { L"Clark B - Max Mode",  0x2df250, 0x2df270, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Clark B - Extra 3",  0x2df270, 0x2df290, indexKOFSprites_98Clark, 0x01 },
    { L"Clark B - Extra 4",  0x2df290, 0x2df2b0, indexKOFSprites_98Clark },
    { L"Clark B - Order Select",  0x2df2b0, 0x2df2d0, indexKOFSprites_98OrderSelect, 0x28 },
    { L"Clark B - Life Bar Portrait",  0x2df2d0, 0x2df2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Clark B - Win Screen Portrait/sprite",  0x2df2f0, 0x2df3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Clark },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_C[] =
{
    { L"Clark C - Main",  0x2df3f0, 0x2df410, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Clark C - Extra 1",  0x2df410, 0x2df430, indexKOFSprites_98Clark, 0x01 },
    { L"Clark C - Extra 2",  0x2df430, 0x2df450, indexKOFSprites_98Clark },
    { L"Clark C - Max Mode",  0x2df450, 0x2df470, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Clark C - Extra 3",  0x2df470, 0x2df490, indexKOFSprites_98Clark, 0x01 },
    { L"Clark C - Extra 4",  0x2df490, 0x2df4b0, indexKOFSprites_98Clark },
    { L"Clark C - Order Select",  0x2df4b0, 0x2df4d0, indexKOFSprites_98OrderSelect, 0x28 },
    { L"Clark C - Life Bar Portrait",  0x2df4d0, 0x2df4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Clark C - Win Screen Portrait/sprite",  0x2df4f0, 0x2df5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Clark },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_D[] =
{
    { L"Clark D - Main",  0x2df5f0, 0x2df610, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Clark D - Extra 1",  0x2df610, 0x2df630, indexKOFSprites_98Clark, 0x01 },
    { L"Clark D - Extra 2",  0x2df630, 0x2df650, indexKOFSprites_98Clark },
    { L"Clark D - Max Mode",  0x2df650, 0x2df670, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Clark D - Extra 3",  0x2df670, 0x2df690, indexKOFSprites_98Clark, 0x01 },
    { L"Clark D - Extra 4",  0x2df690, 0x2df6b0, indexKOFSprites_98Clark },
    { L"Clark D - Order Select",  0x2df6b0, 0x2df6d0, indexKOFSprites_98OrderSelect, 0x28 },
    { L"Clark D - Life Bar Portrait",  0x2df6d0, 0x2df6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Clark D - Win Screen Portrait/sprite",  0x2df6f0, 0x2df7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Clark },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_A[] =
{
    { L"Athena A - Main",  0x2df7f0, 0x2df810, indexKOFSprites_98Athena },
    { L"Athena A - Extra 1",  0x2df810, 0x2df830, indexKOFSprites_98Athena },
    { L"Athena A - Extra 2",  0x2df830, 0x2df850, indexKOFSprites_98Athena },
    { L"Athena A - Max Mode",  0x2df850, 0x2df870, indexKOFSprites_98Athena },
    { L"Athena A - Extra 3",  0x2df870, 0x2df890, indexKOFSprites_98Athena },
    { L"Athena A - Extra 4",  0x2df890, 0x2df8b0, indexKOFSprites_98Athena },
    { L"Athena A - Order Select",  0x2df8b0, 0x2df8d0, indexKOFSprites_98OrderSelect, 0x27 },
    { L"Athena A - Life Bar Portrait",  0x2df8d0, 0x2df8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Athena },
    { L"Athena A - Win Screen Portrait/sprite",  0x2df8f0, 0x2df9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Athena },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_B[] =
{
    { L"Athena B - Main",  0x2df9f0, 0x2dfa10, indexKOFSprites_98Athena },
    { L"Athena B - Extra 1",  0x2dfa10, 0x2dfa30, indexKOFSprites_98Athena },
    { L"Athena B - Extra 2",  0x2dfa30, 0x2dfa50, indexKOFSprites_98Athena },
    { L"Athena B - Max Mode",  0x2dfa50, 0x2dfa70, indexKOFSprites_98Athena },
    { L"Athena B - Extra 3",  0x2dfa70, 0x2dfa90, indexKOFSprites_98Athena },
    { L"Athena B - Extra 4",  0x2dfa90, 0x2dfab0, indexKOFSprites_98Athena },
    { L"Athena B - Order Select",  0x2dfab0, 0x2dfad0, indexKOFSprites_98OrderSelect, 0x27 },
    { L"Athena B - Life Bar Portrait",  0x2dfad0, 0x2dfaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Athena },
    { L"Athena B - Win Screen Portrait/sprite",  0x2dfaf0, 0x2dfbf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Athena },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_C[] =
{
    { L"Athena C - Main",  0x2dfbf0, 0x2dfc10, indexKOFSprites_98Athena },
    { L"Athena C - Extra 1",  0x2dfc10, 0x2dfc30, indexKOFSprites_98Athena },
    { L"Athena C - Extra 2",  0x2dfc30, 0x2dfc50, indexKOFSprites_98Athena },
    { L"Athena C - Max Mode",  0x2dfc50, 0x2dfc70, indexKOFSprites_98Athena },
    { L"Athena C - Extra 3",  0x2dfc70, 0x2dfc90, indexKOFSprites_98Athena },
    { L"Athena C - Extra 4",  0x2dfc90, 0x2dfcb0, indexKOFSprites_98Athena },
    { L"Athena C - Order Select",  0x2dfcb0, 0x2dfcd0, indexKOFSprites_98OrderSelect, 0x27 },
    { L"Athena C - Life Bar Portrait",  0x2dfcd0, 0x2dfcf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Athena },
    { L"Athena C - Win Screen Portrait/sprite",  0x2dfcf0, 0x2dfdf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Athena },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_D[] =
{
    { L"Athena D - Main",  0x2dfdf0, 0x2dfe10, indexKOFSprites_98Athena },
    { L"Athena D - Extra 1",  0x2dfe10, 0x2dfe30, indexKOFSprites_98Athena },
    { L"Athena D - Extra 2",  0x2dfe30, 0x2dfe50, indexKOFSprites_98Athena },
    { L"Athena D - Max Mode",  0x2dfe50, 0x2dfe70, indexKOFSprites_98Athena },
    { L"Athena D - Extra 3",  0x2dfe70, 0x2dfe90, indexKOFSprites_98Athena },
    { L"Athena D - Extra 4",  0x2dfe90, 0x2dfeb0, indexKOFSprites_98Athena },
    { L"Athena D - Order Select",  0x2dfeb0, 0x2dfed0, indexKOFSprites_98OrderSelect, 0x27 },
    { L"Athena D - Life Bar Portrait",  0x2dfed0, 0x2dfef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Athena },
    { L"Athena D - Win Screen Portrait/sprite",  0x2dfef0, 0x2dfff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Athena },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_A[] =
{
    { L"Kensou A - Main",  0x2dfff0, 0x2e0010, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 1",  0x2e0010, 0x2e0030, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 2",  0x2e0030, 0x2e0050, indexKOFSprites_98Kensou },
    { L"Kensou A - Max Mode",  0x2e0050, 0x2e0070, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 3",  0x2e0070, 0x2e0090, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 4",  0x2e0090, 0x2e00b0, indexKOFSprites_98Kensou },
    { L"Kensou A - Order Select",  0x2e00b0, 0x2e00d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kensou },
    { L"Kensou A - Life Bar Portrait",  0x2e00d0, 0x2e00f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Kensou A - Win Screen Portrait/sprite",  0x2e00f0, 0x2e01f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_B[] =
{
    { L"Kensou B - Main",  0x2e01f0, 0x2e0210, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 1",  0x2e0210, 0x2e0230, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 2",  0x2e0230, 0x2e0250, indexKOFSprites_98Kensou },
    { L"Kensou B - Max Mode",  0x2e0250, 0x2e0270, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 3",  0x2e0270, 0x2e0290, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 4",  0x2e0290, 0x2e02b0, indexKOFSprites_98Kensou },
    { L"Kensou B - Order Select",  0x2e02b0, 0x2e02d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kensou },
    { L"Kensou B - Life Bar Portrait",  0x2e02d0, 0x2e02f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Kensou B - Win Screen Portrait/sprite",  0x2e02f0, 0x2e03f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_C[] =
{
    { L"Kensou C - Main",  0x2e03f0, 0x2e0410, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 1",  0x2e0410, 0x2e0430, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 2",  0x2e0430, 0x2e0450, indexKOFSprites_98Kensou },
    { L"Kensou C - Max Mode",  0x2e0450, 0x2e0470, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 3",  0x2e0470, 0x2e0490, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 4",  0x2e0490, 0x2e04b0, indexKOFSprites_98Kensou },
    { L"Kensou C - Order Select",  0x2e04b0, 0x2e04d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kensou },
    { L"Kensou C - Life Bar Portrait",  0x2e04d0, 0x2e04f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Kensou C - Win Screen Portrait/sprite",  0x2e04f0, 0x2e05f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_D[] =
{
    { L"Kensou D - Main",  0x2e05f0, 0x2e0610, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 1",  0x2e0610, 0x2e0630, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 2",  0x2e0630, 0x2e0650, indexKOFSprites_98Kensou },
    { L"Kensou D - Max Mode",  0x2e0650, 0x2e0670, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 3",  0x2e0670, 0x2e0690, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 4",  0x2e0690, 0x2e06b0, indexKOFSprites_98Kensou },
    { L"Kensou D - Order Select",  0x2e06b0, 0x2e06d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kensou },
    { L"Kensou D - Life Bar Portrait",  0x2e06d0, 0x2e06f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Kensou D - Win Screen Portrait/sprite",  0x2e06f0, 0x2e07f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_A[] =
{
    { L"Chin A - Main",  0x2e07f0, 0x2e0810, indexKOFSprites_98Chin },
    { L"Chin A - Extra 1",  0x2e0810, 0x2e0830, indexKOFSprites_98Chin },
    { L"Chin A - Extra 2",  0x2e0830, 0x2e0850, indexKOFSprites_98Chin },
    { L"Chin A - Max Mode",  0x2e0850, 0x2e0870, indexKOFSprites_98Chin },
    { L"Chin A - Extra 3",  0x2e0870, 0x2e0890, indexKOFSprites_98Chin },
    { L"Chin A - Extra 4",  0x2e0890, 0x2e08b0, indexKOFSprites_98Chin },
    { L"Chin A - Order Select",  0x2e08b0, 0x2e08d0, indexKOFSprites_98OrderSelect, 0x49 },
    { L"Chin A - Life Bar Portrait",  0x2e08d0, 0x2e08f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Chin A - Win Screen Portrait/sprite",  0x2e08f0, 0x2e09f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chin },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_B[] =
{
    { L"Chin B - Main",  0x2e09f0, 0x2e0a10, indexKOFSprites_98Chin },
    { L"Chin B - Extra 1",  0x2e0a10, 0x2e0a30, indexKOFSprites_98Chin },
    { L"Chin B - Extra 2",  0x2e0a30, 0x2e0a50, indexKOFSprites_98Chin },
    { L"Chin B - Max Mode",  0x2e0a50, 0x2e0a70, indexKOFSprites_98Chin },
    { L"Chin B - Extra 3",  0x2e0a70, 0x2e0a90, indexKOFSprites_98Chin },
    { L"Chin B - Extra 4",  0x2e0a90, 0x2e0ab0, indexKOFSprites_98Chin },
    { L"Chin B - Order Select",  0x2e0ab0, 0x2e0ad0, indexKOFSprites_98OrderSelect, 0x49 },
    { L"Chin B - Life Bar Portrait",  0x2e0ad0, 0x2e0af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Chin B - Win Screen Portrait/sprite",  0x2e0af0, 0x2e0bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chin },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_C[] =
{
    { L"Chin C - Main",  0x2e0bf0, 0x2e0c10, indexKOFSprites_98Chin },
    { L"Chin C - Extra 1",  0x2e0c10, 0x2e0c30, indexKOFSprites_98Chin },
    { L"Chin C - Extra 2",  0x2e0c30, 0x2e0c50, indexKOFSprites_98Chin },
    { L"Chin C - Max Mode",  0x2e0c50, 0x2e0c70, indexKOFSprites_98Chin },
    { L"Chin C - Extra 3",  0x2e0c70, 0x2e0c90, indexKOFSprites_98Chin },
    { L"Chin C - Extra 4",  0x2e0c90, 0x2e0cb0, indexKOFSprites_98Chin },
    { L"Chin C - Order Select",  0x2e0cb0, 0x2e0cd0, indexKOFSprites_98OrderSelect, 0x49 },
    { L"Chin C - Life Bar Portrait",  0x2e0cd0, 0x2e0cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Chin C - Win Screen Portrait/sprite",  0x2e0cf0, 0x2e0df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chin },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_D[] =
{
    { L"Chin D - Main",  0x2e0df0, 0x2e0e10, indexKOFSprites_98Chin },
    { L"Chin D - Extra 1",  0x2e0e10, 0x2e0e30, indexKOFSprites_98Chin },
    { L"Chin D - Extra 2",  0x2e0e30, 0x2e0e50, indexKOFSprites_98Chin },
    { L"Chin D - Max Mode",  0x2e0e50, 0x2e0e70, indexKOFSprites_98Chin },
    { L"Chin D - Extra 3",  0x2e0e70, 0x2e0e90, indexKOFSprites_98Chin },
    { L"Chin D - Extra 4",  0x2e0e90, 0x2e0eb0, indexKOFSprites_98Chin },
    { L"Chin D - Order Select",  0x2e0eb0, 0x2e0ed0, indexKOFSprites_98OrderSelect, 0x49 },
    { L"Chin D - Life Bar Portrait",  0x2e0ed0, 0x2e0ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Chin D - Win Screen Portrait/sprite",  0x2e0ef0, 0x2e0ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chin },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_A[] =
{
    { L"Chizuru A - Main",  0x2e0ff0, 0x2e1010, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 1",  0x2e1010, 0x2e1030, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 2",  0x2e1030, 0x2e1050, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Max Mode",  0x2e1050, 0x2e1070, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 3",  0x2e1070, 0x2e1090, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 4",  0x2e1090, 0x2e10b0, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Order Select",  0x2e10b0, 0x2e10d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Life Bar Portrait",  0x2e10d0, 0x2e10f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Win Screen Portrait/sprite",  0x2e10f0, 0x2e11f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chizuru },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_B[] =
{
    { L"Chizuru B - Main",  0x2e11f0, 0x2e1210, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 1",  0x2e1210, 0x2e1230, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 2",  0x2e1230, 0x2e1250, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Max Mode",  0x2e1250, 0x2e1270, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 3",  0x2e1270, 0x2e1290, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 4",  0x2e1290, 0x2e12b0, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Order Select",  0x2e12b0, 0x2e12d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Life Bar Portrait",  0x2e12d0, 0x2e12f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Win Screen Portrait/sprite",  0x2e12f0, 0x2e13f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chizuru },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_C[] =
{
    { L"Chizuru C - Main",  0x2e13f0, 0x2e1410, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 1",  0x2e1410, 0x2e1430, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 2",  0x2e1430, 0x2e1450, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Max Mode",  0x2e1450, 0x2e1470, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 3",  0x2e1470, 0x2e1490, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 4",  0x2e1490, 0x2e14b0, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Order Select",  0x2e14b0, 0x2e14d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Life Bar Portrait",  0x2e14d0, 0x2e14f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Win Screen Portrait/sprite",  0x2e14f0, 0x2e15f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chizuru },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_D[] =
{
    { L"Chizuru D - Main",  0x2e15f0, 0x2e1610, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 1",  0x2e1610, 0x2e1630, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 2",  0x2e1630, 0x2e1650, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Max Mode",  0x2e1650, 0x2e1670, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 3",  0x2e1670, 0x2e1690, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 4",  0x2e1690, 0x2e16b0, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Order Select",  0x2e16b0, 0x2e16d0 , indexKOFSprites_98OrderSelect, indexKOFSprites_98Chizuru},
    { L"Chizuru D - Life Bar Portrait",  0x2e16d0, 0x2e16f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Win Screen Portrait/sprite",  0x2e16f0, 0x2e17f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chizuru },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_A[] =
{
    { L"Mai A - Main",  0x2e17f0, 0x2e1810, indexKOFSprites_98Mai },
    { L"Mai A - Extra 1",  0x2e1810, 0x2e1830, indexKOFSprites_98Mai },
    { L"Mai A - Extra 2",  0x2e1830, 0x2e1850, indexKOFSprites_98Mai },
    { L"Mai A - Max Mode",  0x2e1850, 0x2e1870, indexKOFSprites_98Mai },
    { L"Mai A - Extra 3",  0x2e1870, 0x2e1890, indexKOFSprites_98Mai },
    { L"Mai A - Extra 4",  0x2e1890, 0x2e18b0, indexKOFSprites_98Mai },
    { L"Mai A - Order Select",  0x2e18b0, 0x2e18d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mai },
    { L"Mai A - Life Bar Portrait",  0x2e18d0, 0x2e18f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Mai A - Win Screen Portrait/sprite",  0x2e18f0, 0x2e19f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_B[] =
{
    { L"Mai B - Main",  0x2e19f0, 0x2e1a10, indexKOFSprites_98Mai },
    { L"Mai B - Extra 1",  0x2e1a10, 0x2e1a30, indexKOFSprites_98Mai },
    { L"Mai B - Extra 2",  0x2e1a30, 0x2e1a50, indexKOFSprites_98Mai },
    { L"Mai B - Max Mode",  0x2e1a50, 0x2e1a70, indexKOFSprites_98Mai },
    { L"Mai B - Extra 3",  0x2e1a70, 0x2e1a90, indexKOFSprites_98Mai },
    { L"Mai B - Extra 4",  0x2e1a90, 0x2e1ab0, indexKOFSprites_98Mai },
    { L"Mai B - Order Select",  0x2e1ab0, 0x2e1ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mai },
    { L"Mai B - Life Bar Portrait",  0x2e1ad0, 0x2e1af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Mai B - Win Screen Portrait/sprite",  0x2e1af0, 0x2e1bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_C[] =
{
    { L"Mai C - Main",  0x2e1bf0, 0x2e1c10, indexKOFSprites_98Mai },
    { L"Mai C - Extra 1",  0x2e1c10, 0x2e1c30, indexKOFSprites_98Mai },
    { L"Mai C - Extra 2",  0x2e1c30, 0x2e1c50, indexKOFSprites_98Mai },
    { L"Mai C - Max Mode",  0x2e1c50, 0x2e1c70, indexKOFSprites_98Mai },
    { L"Mai C - Extra 3",  0x2e1c70, 0x2e1c90, indexKOFSprites_98Mai },
    { L"Mai C - Extra 4",  0x2e1c90, 0x2e1cb0, indexKOFSprites_98Mai },
    { L"Mai C - Order Select",  0x2e1cb0, 0x2e1cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mai },
    { L"Mai C - Life Bar Portrait",  0x2e1cd0, 0x2e1cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Mai C - Win Screen Portrait/sprite",  0x2e1cf0, 0x2e1df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_D[] =
{
    { L"Mai D - Main",  0x2e1df0, 0x2e1e10, indexKOFSprites_98Mai },
    { L"Mai D - Extra 1",  0x2e1e10, 0x2e1e30, indexKOFSprites_98Mai },
    { L"Mai D - Extra 2",  0x2e1e30, 0x2e1e50, indexKOFSprites_98Mai },
    { L"Mai D - Max Mode",  0x2e1e50, 0x2e1e70, indexKOFSprites_98Mai },
    { L"Mai D - Extra 3",  0x2e1e70, 0x2e1e90, indexKOFSprites_98Mai },
    { L"Mai D - Extra 4",  0x2e1e90, 0x2e1eb0, indexKOFSprites_98Mai },
    { L"Mai D - Order Select",  0x2e1eb0, 0x2e1ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mai },
    { L"Mai D - Life Bar Portrait",  0x2e1ed0, 0x2e1ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Mai D - Win Screen Portrait/sprite",  0x2e1ef0, 0x2e1ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_A[] =
{
    { L"King A - Main",  0x2e1ff0, 0x2e2010, indexKOFSprites_98King },
    { L"King A - Extra 1",  0x2e2010, 0x2e2030, indexKOFSprites_98King },
    { L"King A - Extra 2",  0x2e2030, 0x2e2050, indexKOFSprites_98King },
    { L"King A - Max Mode",  0x2e2050, 0x2e2070, indexKOFSprites_98King },
    { L"King A - Extra 3",  0x2e2070, 0x2e2090, indexKOFSprites_98King },
    { L"King A - Extra 4",  0x2e2090, 0x2e20b0, indexKOFSprites_98King },
    { L"King A - Order Select",  0x2e20b0, 0x2e20d0, indexKOFSprites_98OrderSelect, 0x35 },
    { L"King A - Life Bar Portrait",  0x2e20d0, 0x2e20f0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"King A - Win Screen Portrait/sprite",  0x2e20f0, 0x2e21f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98King },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_B[] =
{
    { L"King B - Main",  0x2e21f0, 0x2e2210, indexKOFSprites_98King },
    { L"King B - Extra 1",  0x2e2210, 0x2e2230, indexKOFSprites_98King },
    { L"King B - Extra 2",  0x2e2230, 0x2e2250, indexKOFSprites_98King },
    { L"King B - Max Mode",  0x2e2250, 0x2e2270, indexKOFSprites_98King },
    { L"King B - Extra 3",  0x2e2270, 0x2e2290, indexKOFSprites_98King },
    { L"King B - Extra 4",  0x2e2290, 0x2e22b0, indexKOFSprites_98King },
    { L"King B - Order Select",  0x2e22b0, 0x2e22d0, indexKOFSprites_98OrderSelect, 0x35 },
    { L"King B - Life Bar Portrait",  0x2e22d0, 0x2e22f0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"King B - Win Screen Portrait/sprite",  0x2e22f0, 0x2e23f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98King },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_C[] =
{
    { L"King C - Main",  0x2e23f0, 0x2e2410, indexKOFSprites_98King },
    { L"King C - Extra 1",  0x2e2410, 0x2e2430, indexKOFSprites_98King },
    { L"King C - Extra 2",  0x2e2430, 0x2e2450, indexKOFSprites_98King },
    { L"King C - Max Mode",  0x2e2450, 0x2e2470, indexKOFSprites_98King },
    { L"King C - Extra 3",  0x2e2470, 0x2e2490, indexKOFSprites_98King },
    { L"King C - Extra 4",  0x2e2490, 0x2e24b0, indexKOFSprites_98King },
    { L"King C - Order Select",  0x2e24b0, 0x2e24d0, indexKOFSprites_98OrderSelect, 0x35 },
    { L"King C - Life Bar Portrait",  0x2e24d0, 0x2e24f0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"King C - Win Screen Portrait/sprite",  0x2e24f0, 0x2e25f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98King },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_D[] =
{
    { L"King D - Main",  0x2e25f0, 0x2e2610, indexKOFSprites_98King },
    { L"King D - Extra 1",  0x2e2610, 0x2e2630, indexKOFSprites_98King },
    { L"King D - Extra 2",  0x2e2630, 0x2e2650, indexKOFSprites_98King },
    { L"King D - Max Mode",  0x2e2650, 0x2e2670, indexKOFSprites_98King },
    { L"King D - Extra 3",  0x2e2670, 0x2e2690, indexKOFSprites_98King },
    { L"King D - Extra 4",  0x2e2690, 0x2e26b0, indexKOFSprites_98King },
    { L"King D - Order Select",  0x2e26b0, 0x2e26d0, indexKOFSprites_98OrderSelect, 0x35 },
    { L"King D - Life Bar Portrait",  0x2e26d0, 0x2e26f0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"King D - Win Screen Portrait/sprite",  0x2e26f0, 0x2e27f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98King },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_A[] =
{
    { L"Kim A - Main",  0x2e27f0, 0x2e2810, indexKOFSprites_98Kim },
    { L"Kim A - Extra 1",  0x2e2810, 0x2e2830, indexKOFSprites_98Kim },
    { L"Kim A - Extra 2",  0x2e2830, 0x2e2850, indexKOFSprites_98Kim },
    { L"Kim A - Max Mode",  0x2e2850, 0x2e2870, indexKOFSprites_98Kim },
    { L"Kim A - Extra 3",  0x2e2870, 0x2e2890, indexKOFSprites_98Kim },
    { L"Kim A - Extra 4",  0x2e2890, 0x2e28b0, indexKOFSprites_98Kim },
    { L"Kim A - Order Select",  0x2e28b0, 0x2e28d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kim },
    { L"Kim A - Life Bar Portrait",  0x2e28d0, 0x2e28f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Kim A - Win Screen Portrait/sprite",  0x2e28f0, 0x2e29f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_B[] =
{
    { L"Kim B - Main",  0x2e29f0, 0x2e2a10, indexKOFSprites_98Kim },
    { L"Kim B - Extra 1",  0x2e2a10, 0x2e2a30, indexKOFSprites_98Kim },
    { L"Kim B - Extra 2",  0x2e2a30, 0x2e2a50, indexKOFSprites_98Kim },
    { L"Kim B - Max Mode",  0x2e2a50, 0x2e2a70, indexKOFSprites_98Kim },
    { L"Kim B - Extra 3",  0x2e2a70, 0x2e2a90, indexKOFSprites_98Kim },
    { L"Kim B - Extra 4",  0x2e2a90, 0x2e2ab0, indexKOFSprites_98Kim },
    { L"Kim B - Order Select",  0x2e2ab0, 0x2e2ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kim },
    { L"Kim B - Life Bar Portrait",  0x2e2ad0, 0x2e2af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Kim B - Win Screen Portrait/sprite",  0x2e2af0, 0x2e2bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_C[] =
{
    { L"Kim C - Main",  0x2e2bf0, 0x2e2c10, indexKOFSprites_98Kim },
    { L"Kim C - Extra 1",  0x2e2c10, 0x2e2c30, indexKOFSprites_98Kim },
    { L"Kim C - Extra 2",  0x2e2c30, 0x2e2c50, indexKOFSprites_98Kim },
    { L"Kim C - Max Mode",  0x2e2c50, 0x2e2c70, indexKOFSprites_98Kim },
    { L"Kim C - Extra 3",  0x2e2c70, 0x2e2c90, indexKOFSprites_98Kim },
    { L"Kim C - Extra 4",  0x2e2c90, 0x2e2cb0, indexKOFSprites_98Kim },
    { L"Kim C - Order Select",  0x2e2cb0, 0x2e2cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kim },
    { L"Kim C - Life Bar Portrait",  0x2e2cd0, 0x2e2cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Kim C - Win Screen Portrait/sprite",  0x2e2cf0, 0x2e2df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_D[] =
{
    { L"Kim D - Main",  0x2e2df0, 0x2e2e10, indexKOFSprites_98Kim },
    { L"Kim D - Extra 1",  0x2e2e10, 0x2e2e30, indexKOFSprites_98Kim },
    { L"Kim D - Extra 2",  0x2e2e30, 0x2e2e50, indexKOFSprites_98Kim },
    { L"Kim D - Max Mode",  0x2e2e50, 0x2e2e70, indexKOFSprites_98Kim },
    { L"Kim D - Extra 3",  0x2e2e70, 0x2e2e90, indexKOFSprites_98Kim },
    { L"Kim D - Extra 4",  0x2e2e90, 0x2e2eb0, indexKOFSprites_98Kim },
    { L"Kim D - Order Select",  0x2e2eb0, 0x2e2ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kim },
    { L"Kim D - Life Bar Portrait",  0x2e2ed0, 0x2e2ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Kim D - Win Screen Portrait/sprite",  0x2e2ef0, 0x2e2ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_A[] =
{
    { L"Chang A - Main",  0x2e2ff0, 0x2e3010, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Chang A - Extra 1: Wrecking Ball",  0x2e3010, 0x2e3030, indexKOFSprites_98Chang, 0x01 },
    { L"Chang A - Extra 2",  0x2e3030, 0x2e3050, indexKOFSprites_98Chang },
    { L"Chang A - Max Mode",  0x2e3050, 0x2e3070, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Chang A - Extra 3: Wrecking Ball",  0x2e3070, 0x2e3090, indexKOFSprites_98Chang, 0x01 },
    { L"Chang A - Extra 4",  0x2e3090, 0x2e30b0, indexKOFSprites_98Chang },
    { L"Chang A - Order Select",  0x2e30b0, 0x2e30d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chang },
    { L"Chang A - Life Bar Portrait",  0x2e30d0, 0x2e30f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Chang A - Win Screen Portrait/sprite",  0x2e30f0, 0x2e31f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_B[] =
{
    { L"Chang B - Main",  0x2e31f0, 0x2e3210, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Chang B - Extra 1: Wrecking Ball",  0x2e3210, 0x2e3230, indexKOFSprites_98Chang, 0x01 },
    { L"Chang B - Extra 2",  0x2e3230, 0x2e3250, indexKOFSprites_98Chang },
    { L"Chang B - Max Mode",  0x2e3250, 0x2e3270, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Chang B - Extra 3: Wrecking Ball",  0x2e3270, 0x2e3290, indexKOFSprites_98Chang, 0x01 },
    { L"Chang B - Extra 4",  0x2e3290, 0x2e32b0, indexKOFSprites_98Chang },
    { L"Chang B - Order Select",  0x2e32b0, 0x2e32d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chang },
    { L"Chang B - Life Bar Portrait",  0x2e32d0, 0x2e32f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Chang B - Win Screen Portrait/sprite",  0x2e32f0, 0x2e33f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_C[] =
{
    { L"Chang C - Main",  0x2e33f0, 0x2e3410, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Chang C - Extra 1: Wrecking Ball",  0x2e3410, 0x2e3430, indexKOFSprites_98Chang, 0x01 },
    { L"Chang C - Extra 2",  0x2e3430, 0x2e3450, indexKOFSprites_98Chang },
    { L"Chang C - Max Mode",  0x2e3450, 0x2e3470, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Chang C - Extra 3: Wrecking Ball",  0x2e3470, 0x2e3490, indexKOFSprites_98Chang, 0x01 },
    { L"Chang C - Extra 4",  0x2e3490, 0x2e34b0, indexKOFSprites_98Chang },
    { L"Chang C - Order Select",  0x2e34b0, 0x2e34d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chang },
    { L"Chang C - Life Bar Portrait",  0x2e34d0, 0x2e34f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Chang C - Win Screen Portrait/sprite",  0x2e34f0, 0x2e35f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_D[] =
{
    { L"Chang D - Main",  0x2e35f0, 0x2e3610, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Chang D - Extra 1: Wrecking Ball",  0x2e3610, 0x2e3630, indexKOFSprites_98Chang, 0x01 },
    { L"Chang D - Extra 2",  0x2e3630, 0x2e3650, indexKOFSprites_98Chang },
    { L"Chang D - Max Mode",  0x2e3650, 0x2e3670, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Chang D - Extra 3: Wrecking Ball",  0x2e3670, 0x2e3690, indexKOFSprites_98Chang, 0x01 },
    { L"Chang D - Extra 4",  0x2e3690, 0x2e36b0, indexKOFSprites_98Chang },
    { L"Chang D - Order Select",  0x2e36b0, 0x2e36d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chang },
    { L"Chang D - Life Bar Portrait",  0x2e36d0, 0x2e36f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Chang D - Win Screen Portrait/sprite",  0x2e36f0, 0x2e37f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_A[] =
{
    { L"Choi A - Main",  0x2e37f0, 0x2e3810, indexKOFSprites_98Choi },
    { L"Choi A - Extra 1",  0x2e3810, 0x2e3830, indexKOFSprites_98Choi },
    { L"Choi A - Extra 2",  0x2e3830, 0x2e3850, indexKOFSprites_98Choi },
    { L"Choi A - Max Mode",  0x2e3850, 0x2e3870, indexKOFSprites_98Choi },
    { L"Choi A - Extra 3",  0x2e3870, 0x2e3890, indexKOFSprites_98Choi },
    { L"Choi A - Extra 4",  0x2e3890, 0x2e38b0, indexKOFSprites_98Choi },
    { L"Choi A - Order Select",  0x2e38b0, 0x2e38d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Choi },
    { L"Choi A - Life Bar Portrait",  0x2e38d0, 0x2e38f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Choi A - Win Screen Portrait/sprite",  0x2e38f0, 0x2e39f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_B[] =
{
    { L"Choi B - Main",  0x2e39f0, 0x2e3a10, indexKOFSprites_98Choi },
    { L"Choi B - Extra 1",  0x2e3a10, 0x2e3a30, indexKOFSprites_98Choi },
    { L"Choi B - Extra 2",  0x2e3a30, 0x2e3a50, indexKOFSprites_98Choi },
    { L"Choi B - Max Mode",  0x2e3a50, 0x2e3a70, indexKOFSprites_98Choi },
    { L"Choi B - Extra 3",  0x2e3a70, 0x2e3a90, indexKOFSprites_98Choi },
    { L"Choi B - Extra 4",  0x2e3a90, 0x2e3ab0, indexKOFSprites_98Choi },
    { L"Choi B - Order Select",  0x2e3ab0, 0x2e3ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Choi },
    { L"Choi B - Life Bar Portrait",  0x2e3ad0, 0x2e3af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Choi B - Win Screen Portrait/sprite",  0x2e3af0, 0x2e3bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_C[] =
{
    { L"Choi C - Main",  0x2e3bf0, 0x2e3c10, indexKOFSprites_98Choi },
    { L"Choi C - Extra 1",  0x2e3c10, 0x2e3c30, indexKOFSprites_98Choi },
    { L"Choi C - Extra 2",  0x2e3c30, 0x2e3c50, indexKOFSprites_98Choi },
    { L"Choi C - Max Mode",  0x2e3c50, 0x2e3c70, indexKOFSprites_98Choi },
    { L"Choi C - Extra 3",  0x2e3c70, 0x2e3c90, indexKOFSprites_98Choi },
    { L"Choi C - Extra 4",  0x2e3c90, 0x2e3cb0, indexKOFSprites_98Choi },
    { L"Choi C - Order Select",  0x2e3cb0, 0x2e3cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Choi },
    { L"Choi C - Life Bar Portrait",  0x2e3cd0, 0x2e3cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Choi C - Win Screen Portrait/sprite",  0x2e3cf0, 0x2e3df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_D[] =
{
    { L"Choi D - Main",  0x2e3df0, 0x2e3e10, indexKOFSprites_98Choi },
    { L"Choi D - Extra 1",  0x2e3e10, 0x2e3e30, indexKOFSprites_98Choi },
    { L"Choi D - Extra 2",  0x2e3e30, 0x2e3e50, indexKOFSprites_98Choi },
    { L"Choi D - Max Mode",  0x2e3e50, 0x2e3e70, indexKOFSprites_98Choi },
    { L"Choi D - Extra 3",  0x2e3e70, 0x2e3e90, indexKOFSprites_98Choi },
    { L"Choi D - Extra 4",  0x2e3e90, 0x2e3eb0, indexKOFSprites_98Choi },
    { L"Choi D - Order Select",  0x2e3eb0, 0x2e3ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Choi },
    { L"Choi D - Life Bar Portrait",  0x2e3ed0, 0x2e3ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Choi D - Win Screen Portrait/sprite",  0x2e3ef0, 0x2e3ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_A[] =
{
    { L"Yashiro A - Main",  0x2e3ff0, 0x2e4010, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 1",  0x2e4010, 0x2e4030, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 2",  0x2e4030, 0x2e4050, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Max Mode",  0x2e4050, 0x2e4070, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 3",  0x2e4070, 0x2e4090, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 4",  0x2e4090, 0x2e40b0, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Order Select",  0x2e40b0, 0x2e40d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Life Bar Portrait",  0x2e40d0, 0x2e40f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Win Screen Portrait/sprite",  0x2e40f0, 0x2e41f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_B[] =
{
    { L"Yashiro B - Main",  0x2e41f0, 0x2e4210, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 1",  0x2e4210, 0x2e4230, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 2",  0x2e4230, 0x2e4250, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Max Mode",  0x2e4250, 0x2e4270, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 3",  0x2e4270, 0x2e4290, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 4",  0x2e4290, 0x2e42b0, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Order Select",  0x2e42b0, 0x2e42d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Life Bar Portrait",  0x2e42d0, 0x2e42f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Win Screen Portrait/sprite",  0x2e42f0, 0x2e43f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_C[] =
{
    { L"Yashiro C - Main",  0x2e43f0, 0x2e4410, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 1",  0x2e4410, 0x2e4430, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 2",  0x2e4430, 0x2e4450, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Max Mode",  0x2e4450, 0x2e4470, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 3",  0x2e4470, 0x2e4490, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 4",  0x2e4490, 0x2e44b0, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Order Select",  0x2e44b0, 0x2e44d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Life Bar Portrait",  0x2e44d0, 0x2e44f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Win Screen Portrait/sprite",  0x2e44f0, 0x2e45f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_D[] =
{
    { L"Yashiro D - Main",  0x2e45f0, 0x2e4610, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 1",  0x2e4610, 0x2e4630, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 2",  0x2e4630, 0x2e4650, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Max Mode",  0x2e4650, 0x2e4670, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 3",  0x2e4670, 0x2e4690, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 4",  0x2e4690, 0x2e46b0, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Order Select",  0x2e46b0, 0x2e46d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Life Bar Portrait",  0x2e46d0, 0x2e46f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Win Screen Portrait/sprite",  0x2e46f0, 0x2e47f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_A[] =
{
    { L"Shermie A - Main",  0x2e47f0, 0x2e4810, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 1",  0x2e4810, 0x2e4830, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 2",  0x2e4830, 0x2e4850, indexKOFSprites_98Shermie },
    { L"Shermie A - Max Mode",  0x2e4850, 0x2e4870, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 3",  0x2e4870, 0x2e4890, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 4",  0x2e4890, 0x2e48b0, indexKOFSprites_98Shermie },
    { L"Shermie A - Order Select",  0x2e48b0, 0x2e48d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shermie },
    { L"Shermie A - Life Bar Portrait",  0x2e48d0, 0x2e48f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Shermie A - Win Screen Portrait/sprite",  0x2e48f0, 0x2e49f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_B[] =
{
    { L"Shermie B - Main",  0x2e49f0, 0x2e4a10, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 1",  0x2e4a10, 0x2e4a30, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 2",  0x2e4a30, 0x2e4a50, indexKOFSprites_98Shermie },
    { L"Shermie B - Max Mode",  0x2e4a50, 0x2e4a70, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 3",  0x2e4a70, 0x2e4a90, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 4",  0x2e4a90, 0x2e4ab0, indexKOFSprites_98Shermie },
    { L"Shermie B - Order Select",  0x2e4ab0, 0x2e4ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shermie },
    { L"Shermie B - Life Bar Portrait",  0x2e4ad0, 0x2e4af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Shermie B - Win Screen Portrait/sprite",  0x2e4af0, 0x2e4bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_C[] =
{
    { L"Shermie C - Main",  0x2e4bf0, 0x2e4c10, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 1",  0x2e4c10, 0x2e4c30, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 2",  0x2e4c30, 0x2e4c50, indexKOFSprites_98Shermie },
    { L"Shermie C - Max Mode",  0x2e4c50, 0x2e4c70, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 3",  0x2e4c70, 0x2e4c90, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 4",  0x2e4c90, 0x2e4cb0, indexKOFSprites_98Shermie },
    { L"Shermie C - Order Select",  0x2e4cb0, 0x2e4cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shermie },
    { L"Shermie C - Life Bar Portrait",  0x2e4cd0, 0x2e4cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Shermie C - Win Screen Portrait/sprite",  0x2e4cf0, 0x2e4df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_D[] =
{
    { L"Shermie D - Main",  0x2e4df0, 0x2e4e10, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 1",  0x2e4e10, 0x2e4e30, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 2",  0x2e4e30, 0x2e4e50, indexKOFSprites_98Shermie },
    { L"Shermie D - Max Mode",  0x2e4e50, 0x2e4e70, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 3",  0x2e4e70, 0x2e4e90, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 4",  0x2e4e90, 0x2e4eb0, indexKOFSprites_98Shermie },
    { L"Shermie D - Order Select",  0x2e4eb0, 0x2e4ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shermie },
    { L"Shermie D - Life Bar Portrait",  0x2e4ed0, 0x2e4ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Shermie D - Win Screen Portrait/sprite",  0x2e4ef0, 0x2e4ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_A[] =
{
    { L"Chris A - Main",  0x2e4ff0, 0x2e5010, indexKOFSprites_98Chris },
    { L"Chris A - Extra 1",  0x2e5010, 0x2e5030, indexKOFSprites_98Chris },
    { L"Chris A - Extra 2",  0x2e5030, 0x2e5050, indexKOFSprites_98Chris },
    { L"Chris A - Max Mode",  0x2e5050, 0x2e5070, indexKOFSprites_98Chris },
    { L"Chris A - Extra 3",  0x2e5070, 0x2e5090, indexKOFSprites_98Chris },
    { L"Chris A - Extra 4",  0x2e5090, 0x2e50b0, indexKOFSprites_98Chris },
    { L"Chris A - Order Select",  0x2e50b0, 0x2e50d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chris },
    { L"Chris A - Life Bar Portrait",  0x2e50d0, 0x2e50f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Chris A - Win Screen Portrait/sprite",  0x2e50f0, 0x2e51f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_B[] =
{
    { L"Chris B - Main",  0x2e51f0, 0x2e5210, indexKOFSprites_98Chris },
    { L"Chris B - Extra 1",  0x2e5210, 0x2e5230, indexKOFSprites_98Chris },
    { L"Chris B - Extra 2",  0x2e5230, 0x2e5250, indexKOFSprites_98Chris },
    { L"Chris B - Max Mode",  0x2e5250, 0x2e5270, indexKOFSprites_98Chris },
    { L"Chris B - Extra 3",  0x2e5270, 0x2e5290, indexKOFSprites_98Chris },
    { L"Chris B - Extra 4",  0x2e5290, 0x2e52b0, indexKOFSprites_98Chris },
    { L"Chris B - Order Select",  0x2e52b0, 0x2e52d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chris },
    { L"Chris B - Life Bar Portrait",  0x2e52d0, 0x2e52f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Chris B - Win Screen Portrait/sprite",  0x2e52f0, 0x2e53f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_C[] =
{
    { L"Chris C - Main",  0x2e53f0, 0x2e5410, indexKOFSprites_98Chris },
    { L"Chris C - Extra 1",  0x2e5410, 0x2e5430, indexKOFSprites_98Chris },
    { L"Chris C - Extra 2",  0x2e5430, 0x2e5450, indexKOFSprites_98Chris },
    { L"Chris C - Max Mode",  0x2e5450, 0x2e5470, indexKOFSprites_98Chris },
    { L"Chris C - Extra 3",  0x2e5470, 0x2e5490, indexKOFSprites_98Chris },
    { L"Chris C - Extra 4",  0x2e5490, 0x2e54b0, indexKOFSprites_98Chris },
    { L"Chris C - Order Select",  0x2e54b0, 0x2e54d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chris },
    { L"Chris C - Life Bar Portrait",  0x2e54d0, 0x2e54f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Chris C - Win Screen Portrait/sprite",  0x2e54f0, 0x2e55f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_D[] =
{
    { L"Chris D - Main",  0x2e55f0, 0x2e5610, indexKOFSprites_98Chris },
    { L"Chris D - Extra 1",  0x2e5610, 0x2e5630, indexKOFSprites_98Chris },
    { L"Chris D - Extra 2",  0x2e5630, 0x2e5650, indexKOFSprites_98Chris },
    { L"Chris D - Max Mode",  0x2e5650, 0x2e5670, indexKOFSprites_98Chris },
    { L"Chris D - Extra 3",  0x2e5670, 0x2e5690, indexKOFSprites_98Chris },
    { L"Chris D - Extra 4",  0x2e5690, 0x2e56b0, indexKOFSprites_98Chris },
    { L"Chris D - Order Select",  0x2e56b0, 0x2e56d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chris },
    { L"Chris D - Life Bar Portrait",  0x2e56d0, 0x2e56f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Chris D - Win Screen Portrait/sprite",  0x2e56f0, 0x2e57f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_A[] =
{
    { L"Yamazaki A - Main",  0x2e57f0, 0x2e5810, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 1",  0x2e5810, 0x2e5830, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 2",  0x2e5830, 0x2e5850, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Max Mode",  0x2e5850, 0x2e5870, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 3",  0x2e5870, 0x2e5890, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 4",  0x2e5890, 0x2e58b0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Order Select",  0x2e58b0, 0x2e58d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Life Bar Portrait",  0x2e58d0, 0x2e58f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Win Screen Portrait/sprite",  0x2e58f0, 0x2e59f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_B[] =
{
    { L"Yamazaki B - Main",  0x2e59f0, 0x2e5a10, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 1",  0x2e5a10, 0x2e5a30, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 2",  0x2e5a30, 0x2e5a50, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Max Mode",  0x2e5a50, 0x2e5a70, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 3",  0x2e5a70, 0x2e5a90, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 4",  0x2e5a90, 0x2e5ab0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Order Select",  0x2e5ab0, 0x2e5ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Life Bar Portrait",  0x2e5ad0, 0x2e5af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Win Screen Portrait/sprite",  0x2e5af0, 0x2e5bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_C[] =
{
    { L"Yamazaki C - Main",  0x2e5bf0, 0x2e5c10, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 1",  0x2e5c10, 0x2e5c30, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 2",  0x2e5c30, 0x2e5c50, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Max Mode",  0x2e5c50, 0x2e5c70, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 3",  0x2e5c70, 0x2e5c90, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 4",  0x2e5c90, 0x2e5cb0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Order Select",  0x2e5cb0, 0x2e5cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Life Bar Portrait",  0x2e5cd0, 0x2e5cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Win Screen Portrait/sprite",  0x2e5cf0, 0x2e5df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_D[] =
{
    { L"Yamazaki D - Main",  0x2e5df0, 0x2e5e10, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 1",  0x2e5e10, 0x2e5e30, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 2",  0x2e5e30, 0x2e5e50, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Max Mode",  0x2e5e50, 0x2e5e70, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 3",  0x2e5e70, 0x2e5e90, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 4",  0x2e5e90, 0x2e5eb0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Order Select",  0x2e5eb0, 0x2e5ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Life Bar Portrait",  0x2e5ed0, 0x2e5ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Win Screen Portrait/sprite",  0x2e5ef0, 0x2e5ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_A[] =
{
    { L"Blue Mary A - Main",  0x2e5ff0, 0x2e6010, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 1",  0x2e6010, 0x2e6030, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 2",  0x2e6030, 0x2e6050, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Max Mode",  0x2e6050, 0x2e6070, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 3",  0x2e6070, 0x2e6090, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 4",  0x2e6090, 0x2e60b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Order Select",  0x2e60b0, 0x2e60d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Life Bar Portrait",  0x2e60d0, 0x2e60f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Win Screen Portrait/sprite",  0x2e60f0, 0x2e61f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_B[] =
{
    { L"Blue Mary B - Main",  0x2e61f0, 0x2e6210, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 1",  0x2e6210, 0x2e6230, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 2",  0x2e6230, 0x2e6250, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Max Mode",  0x2e6250, 0x2e6270, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 3",  0x2e6270, 0x2e6290, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 4",  0x2e6290, 0x2e62b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Order Select",  0x2e62b0, 0x2e62d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Life Bar Portrait",  0x2e62d0, 0x2e62f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Win Screen Portrait/sprite",  0x2e62f0, 0x2e63f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_C[] =
{
    { L"Blue Mary C - Main",  0x2e63f0, 0x2e6410, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 1",  0x2e6410, 0x2e6430, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 2",  0x2e6430, 0x2e6450, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Max Mode",  0x2e6450, 0x2e6470, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 3",  0x2e6470, 0x2e6490, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 4",  0x2e6490, 0x2e64b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Order Select",  0x2e64b0, 0x2e64d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Life Bar Portrait",  0x2e64d0, 0x2e64f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Win Screen Portrait/sprite",  0x2e64f0, 0x2e65f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_D[] =
{
    { L"Blue Mary D - Main",  0x2e65f0, 0x2e6610, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 1",  0x2e6610, 0x2e6630, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 2",  0x2e6630, 0x2e6650, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Max Mode",  0x2e6650, 0x2e6670, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 3",  0x2e6670, 0x2e6690, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 4",  0x2e6690, 0x2e66b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Order Select",  0x2e66b0, 0x2e66d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Life Bar Portrait",  0x2e66d0, 0x2e66f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Win Screen Portrait/sprite",  0x2e66f0, 0x2e67f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_A[] =
{
    { L"Billy A - Main",  0x2e67f0, 0x2e6810, indexKOFSprites_98Billy },
    { L"Billy A - Extra 1",  0x2e6810, 0x2e6830, indexKOFSprites_98Billy },
    { L"Billy A - Extra 2",  0x2e6830, 0x2e6850, indexKOFSprites_98Billy },
    { L"Billy A - Max Mode",  0x2e6850, 0x2e6870, indexKOFSprites_98Billy },
    { L"Billy A - Extra 3",  0x2e6870, 0x2e6890, indexKOFSprites_98Billy },
    { L"Billy A - Extra 4",  0x2e6890, 0x2e68b0, indexKOFSprites_98Billy },
    { L"Billy A - Order Select",  0x2e68b0, 0x2e68d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Billy },
    { L"Billy A - Life Bar Portrait",  0x2e68d0, 0x2e68f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Billy A - Win Screen Portrait/sprite",  0x2e68f0, 0x2e69f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_B[] =
{
    { L"Billy B - Main",  0x2e69f0, 0x2e6a10, indexKOFSprites_98Billy },
    { L"Billy B - Extra 1",  0x2e6a10, 0x2e6a30, indexKOFSprites_98Billy },
    { L"Billy B - Extra 2",  0x2e6a30, 0x2e6a50, indexKOFSprites_98Billy },
    { L"Billy B - Max Mode",  0x2e6a50, 0x2e6a70, indexKOFSprites_98Billy },
    { L"Billy B - Extra 3",  0x2e6a70, 0x2e6a90, indexKOFSprites_98Billy },
    { L"Billy B - Extra 4",  0x2e6a90, 0x2e6ab0, indexKOFSprites_98Billy },
    { L"Billy B - Order Select",  0x2e6ab0, 0x2e6ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Billy },
    { L"Billy B - Life Bar Portrait",  0x2e6ad0, 0x2e6af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Billy B - Win Screen Portrait/sprite",  0x2e6af0, 0x2e6bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_C[] =
{
    { L"Billy C - Main",  0x2e6bf0, 0x2e6c10, indexKOFSprites_98Billy },
    { L"Billy C - Extra 1",  0x2e6c10, 0x2e6c30, indexKOFSprites_98Billy },
    { L"Billy C - Extra 2",  0x2e6c30, 0x2e6c50, indexKOFSprites_98Billy },
    { L"Billy C - Max Mode",  0x2e6c50, 0x2e6c70, indexKOFSprites_98Billy },
    { L"Billy C - Extra 3",  0x2e6c70, 0x2e6c90, indexKOFSprites_98Billy },
    { L"Billy C - Extra 4",  0x2e6c90, 0x2e6cb0, indexKOFSprites_98Billy },
    { L"Billy C - Order Select",  0x2e6cb0, 0x2e6cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Billy },
    { L"Billy C - Life Bar Portrait",  0x2e6cd0, 0x2e6cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Billy C - Win Screen Portrait/sprite",  0x2e6cf0, 0x2e6df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_D[] =
{
    { L"Billy D - Main",  0x2e6df0, 0x2e6e10, indexKOFSprites_98Billy },
    { L"Billy D - Extra 1",  0x2e6e10, 0x2e6e30, indexKOFSprites_98Billy },
    { L"Billy D - Extra 2",  0x2e6e30, 0x2e6e50, indexKOFSprites_98Billy },
    { L"Billy D - Max Mode",  0x2e6e50, 0x2e6e70, indexKOFSprites_98Billy },
    { L"Billy D - Extra 3",  0x2e6e70, 0x2e6e90, indexKOFSprites_98Billy },
    { L"Billy D - Extra 4",  0x2e6e90, 0x2e6eb0, indexKOFSprites_98Billy },
    { L"Billy D - Order Select",  0x2e6eb0, 0x2e6ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Billy },
    { L"Billy D - Life Bar Portrait",  0x2e6ed0, 0x2e6ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Billy D - Win Screen Portrait/sprite",  0x2e6ef0, 0x2e6ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_A[] =
{
    { L"Iori A - Main",  0x2e6ff0, 0x2e7010, indexKOFSprites_98Iori },
    { L"Iori A - Extra 1",  0x2e7010, 0x2e7030, indexKOFSprites_98Iori },
    { L"Iori A - Extra 2",  0x2e7030, 0x2e7050, indexKOFSprites_98Iori },
    { L"Iori A - Max Mode",  0x2e7050, 0x2e7070, indexKOFSprites_98Iori },
    { L"Iori A - Extra 3",  0x2e7070, 0x2e7090, indexKOFSprites_98Iori },
    { L"Iori A - Extra 4",  0x2e7090, 0x2e70b0, indexKOFSprites_98Iori },
    { L"Iori A - Order Select",  0x2e70b0, 0x2e70d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Iori },
    { L"Iori A - Life Bar Portrait",  0x2e70d0, 0x2e70f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Iori A - Win Screen Portrait/sprite",  0x2e70f0, 0x2e71f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_B[] =
{
    { L"Iori B - Main",  0x2e71f0, 0x2e7210, indexKOFSprites_98Iori },
    { L"Iori B - Extra 1",  0x2e7210, 0x2e7230, indexKOFSprites_98Iori },
    { L"Iori B - Extra 2",  0x2e7230, 0x2e7250, indexKOFSprites_98Iori },
    { L"Iori B - Max Mode",  0x2e7250, 0x2e7270, indexKOFSprites_98Iori },
    { L"Iori B - Extra 3",  0x2e7270, 0x2e7290, indexKOFSprites_98Iori },
    { L"Iori B - Extra 4",  0x2e7290, 0x2e72b0, indexKOFSprites_98Iori },
    { L"Iori B - Order Select",  0x2e72b0, 0x2e72d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Iori },
    { L"Iori B - Life Bar Portrait",  0x2e72d0, 0x2e72f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Iori B - Win Screen Portrait/sprite",  0x2e72f0, 0x2e73f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_C[] =
{
    { L"Iori C - Main",  0x2e73f0, 0x2e7410, indexKOFSprites_98Iori },
    { L"Iori C - Extra 1",  0x2e7410, 0x2e7430, indexKOFSprites_98Iori },
    { L"Iori C - Extra 2",  0x2e7430, 0x2e7450, indexKOFSprites_98Iori },
    { L"Iori C - Max Mode",  0x2e7450, 0x2e7470, indexKOFSprites_98Iori },
    { L"Iori C - Extra 3",  0x2e7470, 0x2e7490, indexKOFSprites_98Iori },
    { L"Iori C - Extra 4",  0x2e7490, 0x2e74b0, indexKOFSprites_98Iori },
    { L"Iori C - Order Select",  0x2e74b0, 0x2e74d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Iori },
    { L"Iori C - Life Bar Portrait",  0x2e74d0, 0x2e74f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Iori C - Win Screen Portrait/sprite",  0x2e74f0, 0x2e75f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_D[] =
{
    { L"Iori D - Main",  0x2e75f0, 0x2e7610, indexKOFSprites_98Iori },
    { L"Iori D - Extra 1",  0x2e7610, 0x2e7630, indexKOFSprites_98Iori },
    { L"Iori D - Extra 2",  0x2e7630, 0x2e7650, indexKOFSprites_98Iori },
    { L"Iori D - Max Mode",  0x2e7650, 0x2e7670, indexKOFSprites_98Iori },
    { L"Iori D - Extra 3",  0x2e7670, 0x2e7690, indexKOFSprites_98Iori },
    { L"Iori D - Extra 4",  0x2e7690, 0x2e76b0, indexKOFSprites_98Iori },
    { L"Iori D - Order Select",  0x2e76b0, 0x2e76d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Iori },
    { L"Iori D - Life Bar Portrait",  0x2e76d0, 0x2e76f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Iori D - Win Screen Portrait/sprite",  0x2e76f0, 0x2e77f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_A[] =
{
    { L"Mature A - Main",  0x2e77f0, 0x2e7810, indexKOFSprites_98Mature },
    { L"Mature A - Extra 1",  0x2e7810, 0x2e7830, indexKOFSprites_98Mature },
    { L"Mature A - Extra 2",  0x2e7830, 0x2e7850, indexKOFSprites_98Mature },
    { L"Mature A - Max Mode",  0x2e7850, 0x2e7870, indexKOFSprites_98Mature },
    { L"Mature A - Extra 3",  0x2e7870, 0x2e7890, indexKOFSprites_98Mature },
    { L"Mature A - Extra 4",  0x2e7890, 0x2e78b0, indexKOFSprites_98Mature },
    { L"Mature A - Order Select",  0x2e78b0, 0x2e78d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mature },
    { L"Mature A - Life Bar Portrait",  0x2e78d0, 0x2e78f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mature },
    { L"Mature A - Win Screen Portrait/sprite",  0x2e78f0, 0x2e79f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_B[] =
{
    { L"Mature B - Main",  0x2e79f0, 0x2e7a10, indexKOFSprites_98Mature },
    { L"Mature B - Extra 1",  0x2e7a10, 0x2e7a30, indexKOFSprites_98Mature },
    { L"Mature B - Extra 2",  0x2e7a30, 0x2e7a50, indexKOFSprites_98Mature },
    { L"Mature B - Max Mode",  0x2e7a50, 0x2e7a70, indexKOFSprites_98Mature },
    { L"Mature B - Extra 3",  0x2e7a70, 0x2e7a90, indexKOFSprites_98Mature },
    { L"Mature B - Extra 4",  0x2e7a90, 0x2e7ab0, indexKOFSprites_98Mature },
    { L"Mature B - Order Select",  0x2e7ab0, 0x2e7ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mature },
    { L"Mature B - Life Bar Portrait",  0x2e7ad0, 0x2e7af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mature },
    { L"Mature B - Win Screen Portrait/sprite",  0x2e7af0, 0x2e7bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_C[] =
{
    { L"Mature C - Main",  0x2e7bf0, 0x2e7c10, indexKOFSprites_98Mature },
    { L"Mature C - Extra 1",  0x2e7c10, 0x2e7c30, indexKOFSprites_98Mature },
    { L"Mature C - Extra 2",  0x2e7c30, 0x2e7c50, indexKOFSprites_98Mature },
    { L"Mature C - Max Mode",  0x2e7c50, 0x2e7c70, indexKOFSprites_98Mature },
    { L"Mature C - Extra 3",  0x2e7c70, 0x2e7c90, indexKOFSprites_98Mature },
    { L"Mature C - Extra 4",  0x2e7c90, 0x2e7cb0, indexKOFSprites_98Mature },
    { L"Mature C - Order Select",  0x2e7cb0, 0x2e7cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mature },
    { L"Mature C - Life Bar Portrait",  0x2e7cd0, 0x2e7cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mature },
    { L"Mature C - Win Screen Portrait/sprite",  0x2e7cf0, 0x2e7df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_D[] =
{
    { L"Mature D - Main",  0x2e7df0, 0x2e7e10, indexKOFSprites_98Mature },
    { L"Mature D - Extra 1",  0x2e7e10, 0x2e7e30, indexKOFSprites_98Mature },
    { L"Mature D - Extra 2",  0x2e7e30, 0x2e7e50, indexKOFSprites_98Mature },
    { L"Mature D - Max Mode",  0x2e7e50, 0x2e7e70, indexKOFSprites_98Mature },
    { L"Mature D - Extra 3",  0x2e7e70, 0x2e7e90, indexKOFSprites_98Mature },
    { L"Mature D - Extra 4",  0x2e7e90, 0x2e7eb0, indexKOFSprites_98Mature },
    { L"Mature D - Order Select",  0x2e7eb0, 0x2e7ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mature },
    { L"Mature D - Life Bar Portrait",  0x2e7ed0, 0x2e7ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mature },
    { L"Mature D - Win Screen Portrait/sprite",  0x2e7ef0, 0x2e7ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_A[] =
{
    { L"Vice A - Main",  0x2e7ff0, 0x2e8010, indexKOFSprites_98Vice },
    { L"Vice A - Extra 1",  0x2e8010, 0x2e8030, indexKOFSprites_98Vice },
    { L"Vice A - Extra 2",  0x2e8030, 0x2e8050, indexKOFSprites_98Vice },
    { L"Vice A - Max Mode",  0x2e8050, 0x2e8070, indexKOFSprites_98Vice },
    { L"Vice A - Extra 3",  0x2e8070, 0x2e8090, indexKOFSprites_98Vice },
    { L"Vice A - Extra 4",  0x2e8090, 0x2e80b0, indexKOFSprites_98Vice },
    { L"Vice A - Order Select",  0x2e80b0, 0x2e80d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Vice },
    { L"Vice A - Life Bar Portrait",  0x2e80d0, 0x2e80f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Vice },
    { L"Vice A - Win Screen Portrait/sprite",  0x2e80f0, 0x2e81f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_B[] =
{
    { L"Vice B - Main",  0x2e81f0, 0x2e8210, indexKOFSprites_98Vice },
    { L"Vice B - Extra 1",  0x2e8210, 0x2e8230, indexKOFSprites_98Vice },
    { L"Vice B - Extra 2",  0x2e8230, 0x2e8250, indexKOFSprites_98Vice },
    { L"Vice B - Max Mode",  0x2e8250, 0x2e8270, indexKOFSprites_98Vice },
    { L"Vice B - Extra 3",  0x2e8270, 0x2e8290, indexKOFSprites_98Vice },
    { L"Vice B - Extra 4",  0x2e8290, 0x2e82b0, indexKOFSprites_98Vice },
    { L"Vice B - Order Select",  0x2e82b0, 0x2e82d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Vice },
    { L"Vice B - Life Bar Portrait",  0x2e82d0, 0x2e82f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Vice },
    { L"Vice B - Win Screen Portrait/sprite",  0x2e82f0, 0x2e83f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_C[] =
{
    { L"Vice C - Main",  0x2e83f0, 0x2e8410, indexKOFSprites_98Vice },
    { L"Vice C - Extra 1",  0x2e8410, 0x2e8430, indexKOFSprites_98Vice },
    { L"Vice C - Extra 2",  0x2e8430, 0x2e8450, indexKOFSprites_98Vice },
    { L"Vice C - Max Mode",  0x2e8450, 0x2e8470, indexKOFSprites_98Vice },
    { L"Vice C - Extra 3",  0x2e8470, 0x2e8490, indexKOFSprites_98Vice },
    { L"Vice C - Extra 4",  0x2e8490, 0x2e84b0, indexKOFSprites_98Vice },
    { L"Vice C - Order Select",  0x2e84b0, 0x2e84d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Vice },
    { L"Vice C - Life Bar Portrait",  0x2e84d0, 0x2e84f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Vice },
    { L"Vice C - Win Screen Portrait/sprite",  0x2e84f0, 0x2e85f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_D[] =
{
    { L"Vice D - Main",  0x2e85f0, 0x2e8610, indexKOFSprites_98Vice },
    { L"Vice D - Extra 1",  0x2e8610, 0x2e8630, indexKOFSprites_98Vice },
    { L"Vice D - Extra 2",  0x2e8630, 0x2e8650, indexKOFSprites_98Vice },
    { L"Vice D - Max Mode",  0x2e8650, 0x2e8670, indexKOFSprites_98Vice },
    { L"Vice D - Extra 3",  0x2e8670, 0x2e8690, indexKOFSprites_98Vice },
    { L"Vice D - Extra 4",  0x2e8690, 0x2e86b0, indexKOFSprites_98Vice },
    { L"Vice D - Order Select",  0x2e86b0, 0x2e86d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Vice },
    { L"Vice D - Life Bar Portrait",  0x2e86d0, 0x2e86f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Vice },
    { L"Vice D - Win Screen Portrait/sprite",  0x2e86f0, 0x2e87f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_A[] =
{
    { L"Heidern A - Main",  0x2e87f0, 0x2e8810, indexKOFSprites_98Heidern },
    { L"Heidern A - Extra 1",  0x2e8810, 0x2e8830, indexKOFSprites_98Heidern },
    { L"Heidern A - Extra 2",  0x2e8830, 0x2e8850, indexKOFSprites_98Heidern },
    { L"Heidern A - Max Mode",  0x2e8850, 0x2e8870, indexKOFSprites_98Heidern },
    { L"Heidern A - Extra 3",  0x2e8870, 0x2e8890, indexKOFSprites_98Heidern },
    { L"Heidern A - Extra 4",  0x2e8890, 0x2e88b0, indexKOFSprites_98Heidern },
    { L"Heidern A - Order Select",  0x2e88b0, 0x2e88d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Heidern },
    { L"Heidern A - Life Bar Portrait",  0x2e88d0, 0x2e88f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Heidern },
    { L"Heidern A - Win Screen Portrait/sprite",  0x2e88f0, 0x2e89f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Heidern },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_B[] =
{
    { L"Heidern B - Main",  0x2e89f0, 0x2e8a10, indexKOFSprites_98Heidern },
    { L"Heidern B - Extra 1",  0x2e8a10, 0x2e8a30, indexKOFSprites_98Heidern },
    { L"Heidern B - Extra 2",  0x2e8a30, 0x2e8a50, indexKOFSprites_98Heidern },
    { L"Heidern B - Max Mode",  0x2e8a50, 0x2e8a70, indexKOFSprites_98Heidern },
    { L"Heidern B - Extra 3",  0x2e8a70, 0x2e8a90, indexKOFSprites_98Heidern },
    { L"Heidern B - Extra 4",  0x2e8a90, 0x2e8ab0, indexKOFSprites_98Heidern },
    { L"Heidern B - Order Select",  0x2e8ab0, 0x2e8ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Heidern },
    { L"Heidern B - Life Bar Portrait",  0x2e8ad0, 0x2e8af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Heidern },
    { L"Heidern B - Win Screen Portrait/sprite",  0x2e8af0, 0x2e8bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Heidern },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_C[] =
{
    { L"Heidern C - Main",  0x2e8bf0, 0x2e8c10, indexKOFSprites_98Heidern },
    { L"Heidern C - Extra 1",  0x2e8c10, 0x2e8c30, indexKOFSprites_98Heidern },
    { L"Heidern C - Extra 2",  0x2e8c30, 0x2e8c50, indexKOFSprites_98Heidern },
    { L"Heidern C - Max Mode",  0x2e8c50, 0x2e8c70, indexKOFSprites_98Heidern },
    { L"Heidern C - Extra 3",  0x2e8c70, 0x2e8c90, indexKOFSprites_98Heidern },
    { L"Heidern C - Extra 4",  0x2e8c90, 0x2e8cb0, indexKOFSprites_98Heidern },
    { L"Heidern C - Order Select",  0x2e8cb0, 0x2e8cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Heidern },
    { L"Heidern C - Life Bar Portrait",  0x2e8cd0, 0x2e8cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Heidern },
    { L"Heidern C - Win Screen Portrait/sprite",  0x2e8cf0, 0x2e8df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Heidern },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_D[] =
{
    { L"Heidern D - Main",  0x2e8df0, 0x2e8e10, indexKOFSprites_98Heidern },
    { L"Heidern D - Extra 1",  0x2e8e10, 0x2e8e30, indexKOFSprites_98Heidern },
    { L"Heidern D - Extra 2",  0x2e8e30, 0x2e8e50, indexKOFSprites_98Heidern },
    { L"Heidern D - Max Mode",  0x2e8e50, 0x2e8e70, indexKOFSprites_98Heidern },
    { L"Heidern D - Extra 3",  0x2e8e70, 0x2e8e90, indexKOFSprites_98Heidern },
    { L"Heidern D - Extra 4",  0x2e8e90, 0x2e8eb0, indexKOFSprites_98Heidern },
    { L"Heidern D - Order Select",  0x2e8eb0, 0x2e8ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Heidern },
    { L"Heidern D - Life Bar Portrait",  0x2e8ed0, 0x2e8ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Heidern },
    { L"Heidern D - Win Screen Portrait/sprite",  0x2e8ef0, 0x2e8ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Heidern },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_A[] =
{
    { L"Takuma A - Main",  0x2e8ff0, 0x2e9010, indexKOFSprites_98Takuma },
    { L"Takuma A - Extra 1",  0x2e9010, 0x2e9030, indexKOFSprites_98Takuma },
    { L"Takuma A - Extra 2",  0x2e9030, 0x2e9050, indexKOFSprites_98Takuma },
    { L"Takuma A - Max Mode",  0x2e9050, 0x2e9070, indexKOFSprites_98Takuma },
    { L"Takuma A - Extra 3",  0x2e9070, 0x2e9090, indexKOFSprites_98Takuma },
    { L"Takuma A - Extra 4",  0x2e9090, 0x2e90b0, indexKOFSprites_98Takuma },
    { L"Takuma A - Order Select",  0x2e90b0, 0x2e90d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Takuma },
    { L"Takuma A - Life Bar Portrait",  0x2e90d0, 0x2e90f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Takuma },
    { L"Takuma A - Win Screen Portrait/sprite",  0x2e90f0, 0x2e91f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_B[] =
{
    { L"Takuma B - Main",  0x2e91f0, 0x2e9210, indexKOFSprites_98Takuma },
    { L"Takuma B - Extra 1",  0x2e9210, 0x2e9230, indexKOFSprites_98Takuma },
    { L"Takuma B - Extra 2",  0x2e9230, 0x2e9250, indexKOFSprites_98Takuma },
    { L"Takuma B - Max Mode",  0x2e9250, 0x2e9270, indexKOFSprites_98Takuma },
    { L"Takuma B - Extra 3",  0x2e9270, 0x2e9290, indexKOFSprites_98Takuma },
    { L"Takuma B - Extra 4",  0x2e9290, 0x2e92b0, indexKOFSprites_98Takuma },
    { L"Takuma B - Order Select",  0x2e92b0, 0x2e92d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Takuma },
    { L"Takuma B - Life Bar Portrait",  0x2e92d0, 0x2e92f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Takuma },
    { L"Takuma B - Win Screen Portrait/sprite",  0x2e92f0, 0x2e93f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_C[] =
{
    { L"Takuma C - Main",  0x2e93f0, 0x2e9410, indexKOFSprites_98Takuma },
    { L"Takuma C - Extra 1",  0x2e9410, 0x2e9430, indexKOFSprites_98Takuma },
    { L"Takuma C - Extra 2",  0x2e9430, 0x2e9450, indexKOFSprites_98Takuma },
    { L"Takuma C - Max Mode",  0x2e9450, 0x2e9470, indexKOFSprites_98Takuma },
    { L"Takuma C - Extra 3",  0x2e9470, 0x2e9490, indexKOFSprites_98Takuma },
    { L"Takuma C - Extra 4",  0x2e9490, 0x2e94b0, indexKOFSprites_98Takuma },
    { L"Takuma C - Order Select",  0x2e94b0, 0x2e94d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Takuma },
    { L"Takuma C - Life Bar Portrait",  0x2e94d0, 0x2e94f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Takuma },
    { L"Takuma C - Win Screen Portrait/sprite",  0x2e94f0, 0x2e95f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_D[] =
{
    { L"Takuma D - Main",  0x2e95f0, 0x2e9610, indexKOFSprites_98Takuma },
    { L"Takuma D - Extra 1",  0x2e9610, 0x2e9630, indexKOFSprites_98Takuma },
    { L"Takuma D - Extra 2",  0x2e9630, 0x2e9650, indexKOFSprites_98Takuma },
    { L"Takuma D - Max Mode",  0x2e9650, 0x2e9670, indexKOFSprites_98Takuma },
    { L"Takuma D - Extra 3",  0x2e9670, 0x2e9690, indexKOFSprites_98Takuma },
    { L"Takuma D - Extra 4",  0x2e9690, 0x2e96b0, indexKOFSprites_98Takuma },
    { L"Takuma D - Order Select",  0x2e96b0, 0x2e96d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Takuma },
    { L"Takuma D - Life Bar Portrait",  0x2e96d0, 0x2e96f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Takuma },
    { L"Takuma D - Win Screen Portrait/sprite",  0x2e96f0, 0x2e97f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_A[] =
{
    { L"Saisyu A - Main",  0x2e97f0, 0x2e9810, indexKOFSprites_98Saisyu },
    { L"Saisyu A - Extra 1",  0x2e9810, 0x2e9830, indexKOFSprites_98Saisyu },
    { L"Saisyu A - Extra 2",  0x2e9830, 0x2e9850, indexKOFSprites_98Saisyu },
    { L"Saisyu A - Max Mode",  0x2e9850, 0x2e9870, indexKOFSprites_98Saisyu },
    { L"Saisyu A - Extra 3",  0x2e9870, 0x2e9890, indexKOFSprites_98Saisyu },
    { L"Saisyu A - Extra 4",  0x2e9890, 0x2e98b0, indexKOFSprites_98Saisyu },
    { L"Saisyu A - Order Select",  0x2e98b0, 0x2e98d0, indexKOFSprites_98OrderSelect, 0x30 },
    { L"Saisyu A - Life Bar Portrait",  0x2e98d0, 0x2e98f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Saisyu },
    { L"Saisyu A - Win Screen Portrait/sprite",  0x2e98f0, 0x2e99f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Saisyu },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_B[] =
{
    { L"Saisyu B - Main",  0x2e99f0, 0x2e9a10, indexKOFSprites_98Saisyu },
    { L"Saisyu B - Extra 1",  0x2e9a10, 0x2e9a30, indexKOFSprites_98Saisyu },
    { L"Saisyu B - Extra 2",  0x2e9a30, 0x2e9a50, indexKOFSprites_98Saisyu },
    { L"Saisyu B - Max Mode",  0x2e9a50, 0x2e9a70, indexKOFSprites_98Saisyu },
    { L"Saisyu B - Extra 3",  0x2e9a70, 0x2e9a90, indexKOFSprites_98Saisyu },
    { L"Saisyu B - Extra 4",  0x2e9a90, 0x2e9ab0, indexKOFSprites_98Saisyu },
    { L"Saisyu B - Order Select",  0x2e9ab0, 0x2e9ad0, indexKOFSprites_98OrderSelect, 0x30 },
    { L"Saisyu B - Life Bar Portrait",  0x2e9ad0, 0x2e9af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Saisyu },
    { L"Saisyu B - Win Screen Portrait/sprite",  0x2e9af0, 0x2e9bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Saisyu },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_C[] =
{
    { L"Saisyu C - Main",  0x2e9bf0, 0x2e9c10, indexKOFSprites_98Saisyu },
    { L"Saisyu C - Extra 1",  0x2e9c10, 0x2e9c30, indexKOFSprites_98Saisyu },
    { L"Saisyu C - Extra 2",  0x2e9c30, 0x2e9c50, indexKOFSprites_98Saisyu },
    { L"Saisyu C - Max Mode",  0x2e9c50, 0x2e9c70, indexKOFSprites_98Saisyu },
    { L"Saisyu C - Extra 3",  0x2e9c70, 0x2e9c90, indexKOFSprites_98Saisyu },
    { L"Saisyu C - Extra 4",  0x2e9c90, 0x2e9cb0, indexKOFSprites_98Saisyu },
    { L"Saisyu C - Order Select",  0x2e9cb0, 0x2e9cd0, indexKOFSprites_98OrderSelect, 0x30 },
    { L"Saisyu C - Life Bar Portrait",  0x2e9cd0, 0x2e9cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Saisyu },
    { L"Saisyu C - Win Screen Portrait/sprite",  0x2e9cf0, 0x2e9df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Saisyu },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_D[] =
{
    { L"Saisyu D - Main",  0x2e9df0, 0x2e9e10, indexKOFSprites_98Saisyu },
    { L"Saisyu D - Extra 1",  0x2e9e10, 0x2e9e30, indexKOFSprites_98Saisyu },
    { L"Saisyu D - Extra 2",  0x2e9e30, 0x2e9e50, indexKOFSprites_98Saisyu },
    { L"Saisyu D - Max Mode",  0x2e9e50, 0x2e9e70, indexKOFSprites_98Saisyu },
    { L"Saisyu D - Extra 3",  0x2e9e70, 0x2e9e90, indexKOFSprites_98Saisyu },
    { L"Saisyu D - Extra 4",  0x2e9e90, 0x2e9eb0, indexKOFSprites_98Saisyu },
    { L"Saisyu D - Order Select",  0x2e9eb0, 0x2e9ed0, indexKOFSprites_98OrderSelect, 0x30 },
    { L"Saisyu D - Life Bar Portrait",  0x2e9ed0, 0x2e9ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Saisyu },
    { L"Saisyu D - Win Screen Portrait/sprite",  0x2e9ef0, 0x2e9ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Saisyu },
};

const sGame_PaletteDataset KOF98_A_HeavyD_PALETTE_A[] =
{
    { L"Heavy D! A - Main",  0x2e9ff0, 0x2ea010, indexKOFSprites_98HeavyD },
    { L"Heavy D! A - Extra 1",  0x2ea010, 0x2ea030, indexKOFSprites_98HeavyD },
    { L"Heavy D! A - Extra 2",  0x2ea030, 0x2ea050, indexKOFSprites_98HeavyD },
    { L"Heavy D! A - Max Mode",  0x2ea050, 0x2ea070, indexKOFSprites_98HeavyD },
    { L"Heavy D! A - Extra 3",  0x2ea070, 0x2ea090, indexKOFSprites_98HeavyD },
    { L"Heavy D! A - Extra 4",  0x2ea090, 0x2ea0b0, indexKOFSprites_98HeavyD },
    { L"Heavy D! A - Order Select",  0x2ea0b0, 0x2ea0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98HeavyD },
    { L"Heavy D! A - Life Bar Portrait",  0x2ea0d0, 0x2ea0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98HeavyD },
    { L"Heavy D! A - Win Screen Portrait/sprite",  0x2ea0f0, 0x2ea1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98HeavyD },
};

const sGame_PaletteDataset KOF98_A_HeavyD_PALETTE_B[] =
{
    { L"Heavy D! B - Main",  0x2ea1f0, 0x2ea210, indexKOFSprites_98HeavyD },
    { L"Heavy D! B - Extra 1",  0x2ea210, 0x2ea230, indexKOFSprites_98HeavyD },
    { L"Heavy D! B - Extra 2",  0x2ea230, 0x2ea250, indexKOFSprites_98HeavyD },
    { L"Heavy D! B - Max Mode",  0x2ea250, 0x2ea270, indexKOFSprites_98HeavyD },
    { L"Heavy D! B - Extra 3",  0x2ea270, 0x2ea290, indexKOFSprites_98HeavyD },
    { L"Heavy D! B - Extra 4",  0x2ea290, 0x2ea2b0, indexKOFSprites_98HeavyD },
    { L"Heavy D! B - Order Select",  0x2ea2b0, 0x2ea2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98HeavyD },
    { L"Heavy D! B - Life Bar Portrait",  0x2ea2d0, 0x2ea2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98HeavyD },
    { L"Heavy D! B - Win Screen Portrait/sprite",  0x2ea2f0, 0x2ea3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98HeavyD },
};

const sGame_PaletteDataset KOF98_A_HeavyD_PALETTE_C[] =
{
    { L"Heavy D! C - Main",  0x2ea3f0, 0x2ea410, indexKOFSprites_98HeavyD },
    { L"Heavy D! C - Extra 1",  0x2ea410, 0x2ea430, indexKOFSprites_98HeavyD },
    { L"Heavy D! C - Extra 2",  0x2ea430, 0x2ea450, indexKOFSprites_98HeavyD },
    { L"Heavy D! C - Max Mode",  0x2ea450, 0x2ea470, indexKOFSprites_98HeavyD },
    { L"Heavy D! C - Extra 3",  0x2ea470, 0x2ea490, indexKOFSprites_98HeavyD },
    { L"Heavy D! C - Extra 4",  0x2ea490, 0x2ea4b0, indexKOFSprites_98HeavyD },
    { L"Heavy D! C - Order Select",  0x2ea4b0, 0x2ea4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98HeavyD },
    { L"Heavy D! C - Life Bar Portrait",  0x2ea4d0, 0x2ea4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98HeavyD },
    { L"Heavy D! C - Win Screen Portrait/sprite",  0x2ea4f0, 0x2ea5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98HeavyD },
};

const sGame_PaletteDataset KOF98_A_HeavyD_PALETTE_D[] =
{
    { L"Heavy D! D - Main",  0x2ea5f0, 0x2ea610, indexKOFSprites_98HeavyD },
    { L"Heavy D! D - Extra 1",  0x2ea610, 0x2ea630, indexKOFSprites_98HeavyD },
    { L"Heavy D! D - Extra 2",  0x2ea630, 0x2ea650, indexKOFSprites_98HeavyD },
    { L"Heavy D! D - Max Mode",  0x2ea650, 0x2ea670, indexKOFSprites_98HeavyD },
    { L"Heavy D! D - Extra 3",  0x2ea670, 0x2ea690, indexKOFSprites_98HeavyD },
    { L"Heavy D! D - Extra 4",  0x2ea690, 0x2ea6b0, indexKOFSprites_98HeavyD },
    { L"Heavy D! D - Order Select",  0x2ea6b0, 0x2ea6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98HeavyD },
    { L"Heavy D! D - Life Bar Portrait",  0x2ea6d0, 0x2ea6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98HeavyD },
    { L"Heavy D! D - Win Screen Portrait/sprite",  0x2ea6f0, 0x2ea7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98HeavyD },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_A[] =
{
    { L"Lucky A - Main",  0x2ea7f0, 0x2ea810, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Lucky A - Extra 1: Basketball",  0x2ea810, 0x2ea830, indexKOFSprites_98Lucky, 0x01 },
    { L"Lucky A - Extra 2",  0x2ea830, 0x2ea850, indexKOFSprites_98Lucky },
    { L"Lucky A - Max Mode",  0x2ea850, 0x2ea870, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Lucky A - Extra 3: Basketball",  0x2ea870, 0x2ea890, indexKOFSprites_98Lucky, 0x01 },
    { L"Lucky A - Extra 4",  0x2ea890, 0x2ea8b0, indexKOFSprites_98Lucky },
    { L"Lucky A - Order Select",  0x2ea8b0, 0x2ea8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Lucky },
    { L"Lucky A - Life Bar Portrait",  0x2ea8d0, 0x2ea8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Lucky },
    { L"Lucky A - Win Screen Portrait/sprite",  0x2ea8f0, 0x2ea9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Lucky },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_B[] =
{
    { L"Lucky B - Main",  0x2ea9f0, 0x2eaa10, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Lucky B - Extra 1: Basketball",  0x2eaa10, 0x2eaa30, indexKOFSprites_98Lucky, 0x01 },
    { L"Lucky B - Extra 2",  0x2eaa30, 0x2eaa50, indexKOFSprites_98Lucky },
    { L"Lucky B - Max Mode",  0x2eaa50, 0x2eaa70, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Lucky B - Extra 3: Basketball",  0x2eaa70, 0x2eaa90, indexKOFSprites_98Lucky, 0x01 },
    { L"Lucky B - Extra 4",  0x2eaa90, 0x2eaab0, indexKOFSprites_98Lucky },
    { L"Lucky B - Order Select",  0x2eaab0, 0x2eaad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Lucky },
    { L"Lucky B - Life Bar Portrait",  0x2eaad0, 0x2eaaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Lucky },
    { L"Lucky B - Win Screen Portrait/sprite",  0x2eaaf0, 0x2eabf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Lucky },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_C[] =
{
    { L"Lucky C - Main",  0x2eabf0, 0x2eac10, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Lucky C - Extra 1: Basketball",  0x2eac10, 0x2eac30, indexKOFSprites_98Lucky, 0x01 },
    { L"Lucky C - Extra 2",  0x2eac30, 0x2eac50, indexKOFSprites_98Lucky },
    { L"Lucky C - Max Mode",  0x2eac50, 0x2eac70, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Lucky C - Extra 3: Basketball",  0x2eac70, 0x2eac90, indexKOFSprites_98Lucky, 0x01 },
    { L"Lucky C - Extra 4",  0x2eac90, 0x2eacb0, indexKOFSprites_98Lucky },
    { L"Lucky C - Order Select",  0x2eacb0, 0x2eacd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Lucky },
    { L"Lucky C - Life Bar Portrait",  0x2eacd0, 0x2eacf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Lucky },
    { L"Lucky C - Win Screen Portrait/sprite",  0x2eacf0, 0x2eadf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Lucky },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_D[] =
{
    { L"Lucky D - Main",  0x2eadf0, 0x2eae10, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Lucky D - Extra 1: Basketball",  0x2eae10, 0x2eae30, indexKOFSprites_98Lucky, 0x01 },
    { L"Lucky D - Extra 2",  0x2eae30, 0x2eae50, indexKOFSprites_98Lucky },
    { L"Lucky D - Max Mode",  0x2eae50, 0x2eae70, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Lucky D - Extra 3: Basketball",  0x2eae70, 0x2eae90, indexKOFSprites_98Lucky, 0x01 },
    { L"Lucky D - Extra 4",  0x2eae90, 0x2eaeb0, indexKOFSprites_98Lucky },
    { L"Lucky D - Order Select",  0x2eaeb0, 0x2eaed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Lucky },
    { L"Lucky D - Life Bar Portrait",  0x2eaed0, 0x2eaef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Lucky },
    { L"Lucky D - Win Screen Portrait/sprite",  0x2eaef0, 0x2eaff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Lucky },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_A[] =
{
    { L"Brian A - Main",  0x2eaff0, 0x2eb010, indexKOFSprites_98Brian },
    { L"Brian A - Extra 1",  0x2eb010, 0x2eb030, indexKOFSprites_98Brian },
    { L"Brian A - Extra 2",  0x2eb030, 0x2eb050, indexKOFSprites_98Brian },
    { L"Brian A - Max Mode",  0x2eb050, 0x2eb070, indexKOFSprites_98Brian },
    { L"Brian A - Extra 3",  0x2eb070, 0x2eb090, indexKOFSprites_98Brian },
    { L"Brian A - Extra 4",  0x2eb090, 0x2eb0b0, indexKOFSprites_98Brian },
    { L"Brian A - Order Select",  0x2eb0b0, 0x2eb0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Brian },
    { L"Brian A - Life Bar Portrait",  0x2eb0d0, 0x2eb0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Brian },
    { L"Brian A - Win Screen Portrait/sprite",  0x2eb0f0, 0x2eb1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Brian },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_B[] =
{
    { L"Brian B - Main",  0x2eb1f0, 0x2eb210, indexKOFSprites_98Brian },
    { L"Brian B - Extra 1",  0x2eb210, 0x2eb230, indexKOFSprites_98Brian },
    { L"Brian B - Extra 2",  0x2eb230, 0x2eb250, indexKOFSprites_98Brian },
    { L"Brian B - Max Mode",  0x2eb250, 0x2eb270, indexKOFSprites_98Brian },
    { L"Brian B - Extra 3",  0x2eb270, 0x2eb290, indexKOFSprites_98Brian },
    { L"Brian B - Extra 4",  0x2eb290, 0x2eb2b0, indexKOFSprites_98Brian },
    { L"Brian B - Order Select",  0x2eb2b0, 0x2eb2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Brian },
    { L"Brian B - Life Bar Portrait",  0x2eb2d0, 0x2eb2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Brian },
    { L"Brian B - Win Screen Portrait/sprite",  0x2eb2f0, 0x2eb3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Brian },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_C[] =
{
    { L"Brian C - Main",  0x2eb3f0, 0x2eb410, indexKOFSprites_98Brian },
    { L"Brian C - Extra 1",  0x2eb410, 0x2eb430, indexKOFSprites_98Brian },
    { L"Brian C - Extra 2",  0x2eb430, 0x2eb450, indexKOFSprites_98Brian },
    { L"Brian C - Max Mode",  0x2eb450, 0x2eb470, indexKOFSprites_98Brian },
    { L"Brian C - Extra 3",  0x2eb470, 0x2eb490, indexKOFSprites_98Brian },
    { L"Brian C - Extra 4",  0x2eb490, 0x2eb4b0, indexKOFSprites_98Brian },
    { L"Brian C - Order Select",  0x2eb4b0, 0x2eb4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Brian },
    { L"Brian C - Life Bar Portrait",  0x2eb4d0, 0x2eb4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Brian },
    { L"Brian C - Win Screen Portrait/sprite",  0x2eb4f0, 0x2eb5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Brian },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_D[] =
{
    { L"Brian D - Main",  0x2eb5f0, 0x2eb610, indexKOFSprites_98Brian },
    { L"Brian D - Extra 1",  0x2eb610, 0x2eb630, indexKOFSprites_98Brian },
    { L"Brian D - Extra 2",  0x2eb630, 0x2eb650, indexKOFSprites_98Brian },
    { L"Brian D - Max Mode",  0x2eb650, 0x2eb670, indexKOFSprites_98Brian },
    { L"Brian D - Extra 3",  0x2eb670, 0x2eb690, indexKOFSprites_98Brian },
    { L"Brian D - Extra 4",  0x2eb690, 0x2eb6b0, indexKOFSprites_98Brian },
    { L"Brian D - Order Select",  0x2eb6b0, 0x2eb6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Brian },
    { L"Brian D - Life Bar Portrait",  0x2eb6d0, 0x2eb6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Brian },
    { L"Brian D - Win Screen Portrait/sprite",  0x2eb6f0, 0x2eb7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Brian },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_A[] =
{
    { L"Rugal A - Main",  0x2eb7f0, 0x2eb810, indexKOFSprites_98Rugal },
    { L"Rugal A - Extra 1",  0x2eb810, 0x2eb830, indexKOFSprites_98Rugal },
    { L"Rugal A - Extra 2",  0x2eb830, 0x2eb850, indexKOFSprites_98Rugal },
    { L"Rugal A - Max Mode",  0x2eb850, 0x2eb870, indexKOFSprites_98Rugal },
    { L"Rugal A - Extra 3",  0x2eb870, 0x2eb890, indexKOFSprites_98Rugal },
    { L"Rugal A - Extra 4",  0x2eb890, 0x2eb8b0, indexKOFSprites_98Rugal },
    { L"Rugal A - Order Select",  0x2eb8b0, 0x2eb8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Rugal },
    { L"Rugal A - Life Bar Portrait",  0x2eb8d0, 0x2eb8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Rugal },
    { L"Rugal A - Win Screen Portrait/sprite",  0x2eb8f0, 0x2eb9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_B[] =
{
    { L"Rugal B - Main",  0x2eb9f0, 0x2eba10, indexKOFSprites_98Rugal },
    { L"Rugal B - Extra 1",  0x2eba10, 0x2eba30, indexKOFSprites_98Rugal },
    { L"Rugal B - Extra 2",  0x2eba30, 0x2eba50, indexKOFSprites_98Rugal },
    { L"Rugal B - Max Mode",  0x2eba50, 0x2eba70, indexKOFSprites_98Rugal },
    { L"Rugal B - Extra 3",  0x2eba70, 0x2eba90, indexKOFSprites_98Rugal },
    { L"Rugal B - Extra 4",  0x2eba90, 0x2ebab0, indexKOFSprites_98Rugal },
    { L"Rugal B - Order Select",  0x2ebab0, 0x2ebad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Rugal },
    { L"Rugal B - Life Bar Portrait",  0x2ebad0, 0x2ebaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Rugal },
    { L"Rugal B - Win Screen Portrait/sprite",  0x2ebaf0, 0x2ebbf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_C[] =
{
    { L"Rugal C - Main",  0x2ebbf0, 0x2ebc10, indexKOFSprites_98Rugal },
    { L"Rugal C - Extra 1",  0x2ebc10, 0x2ebc30, indexKOFSprites_98Rugal },
    { L"Rugal C - Extra 2",  0x2ebc30, 0x2ebc50, indexKOFSprites_98Rugal },
    { L"Rugal C - Max Mode",  0x2ebc50, 0x2ebc70, indexKOFSprites_98Rugal },
    { L"Rugal C - Extra 3",  0x2ebc70, 0x2ebc90, indexKOFSprites_98Rugal },
    { L"Rugal C - Extra 4",  0x2ebc90, 0x2ebcb0, indexKOFSprites_98Rugal },
    { L"Rugal C - Order Select",  0x2ebcb0, 0x2ebcd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Rugal },
    { L"Rugal C - Life Bar Portrait",  0x2ebcd0, 0x2ebcf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Rugal },
    { L"Rugal C - Win Screen Portrait/sprite",  0x2ebcf0, 0x2ebdf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_D[] =
{
    { L"Rugal D - Main",  0x2ebdf0, 0x2ebe10, indexKOFSprites_98Rugal },
    { L"Rugal D - Extra 1",  0x2ebe10, 0x2ebe30, indexKOFSprites_98Rugal },
    { L"Rugal D - Extra 2",  0x2ebe30, 0x2ebe50, indexKOFSprites_98Rugal },
    { L"Rugal D - Max Mode",  0x2ebe50, 0x2ebe70, indexKOFSprites_98Rugal },
    { L"Rugal D - Extra 3",  0x2ebe70, 0x2ebe90, indexKOFSprites_98Rugal },
    { L"Rugal D - Extra 4",  0x2ebe90, 0x2ebeb0, indexKOFSprites_98Rugal },
    { L"Rugal D - Order Select",  0x2ebeb0, 0x2ebed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Rugal },
    { L"Rugal D - Life Bar Portrait",  0x2ebed0, 0x2ebef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Rugal },
    { L"Rugal D - Win Screen Portrait/sprite",  0x2ebef0, 0x2ebff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_A[] =
{
    { L"Shingo A - Main",  0x2ebff0, 0x2ec010, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 1",  0x2ec010, 0x2ec030, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 2",  0x2ec030, 0x2ec050, indexKOFSprites_98Shingo },
    { L"Shingo A - Max Mode",  0x2ec050, 0x2ec070, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 3",  0x2ec070, 0x2ec090, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 4",  0x2ec090, 0x2ec0b0, indexKOFSprites_98Shingo },
    { L"Shingo A - Order Select",  0x2ec0b0, 0x2ec0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shingo },
    { L"Shingo A - Life Bar Portrait",  0x2ec0d0, 0x2ec0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Shingo A - Win Screen Portrait/sprite",  0x2ec0f0, 0x2ec1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shingo },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_B[] =
{
    { L"Shingo B - Main",  0x2ec1f0, 0x2ec210, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 1",  0x2ec210, 0x2ec230, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 2",  0x2ec230, 0x2ec250, indexKOFSprites_98Shingo },
    { L"Shingo B - Max Mode",  0x2ec250, 0x2ec270, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 3",  0x2ec270, 0x2ec290, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 4",  0x2ec290, 0x2ec2b0, indexKOFSprites_98Shingo },
    { L"Shingo B - Order Select",  0x2ec2b0, 0x2ec2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shingo },
    { L"Shingo B - Life Bar Portrait",  0x2ec2d0, 0x2ec2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Shingo B - Win Screen Portrait/sprite",  0x2ec2f0, 0x2ec3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shingo },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_C[] =
{
    { L"Shingo C - Main",  0x2ec3f0, 0x2ec410, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 1",  0x2ec410, 0x2ec430, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 2",  0x2ec430, 0x2ec450, indexKOFSprites_98Shingo },
    { L"Shingo C - Max Mode",  0x2ec450, 0x2ec470, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 3",  0x2ec470, 0x2ec490, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 4",  0x2ec490, 0x2ec4b0, indexKOFSprites_98Shingo },
    { L"Shingo C - Order Select",  0x2ec4b0, 0x2ec4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shingo },
    { L"Shingo C - Life Bar Portrait",  0x2ec4d0, 0x2ec4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Shingo C - Win Screen Portrait/sprite",  0x2ec4f0, 0x2ec5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shingo },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_D[] =
{
    { L"Shingo D - Main",  0x2ec5f0, 0x2ec610, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 1",  0x2ec610, 0x2ec630, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 2",  0x2ec630, 0x2ec650, indexKOFSprites_98Shingo },
    { L"Shingo D - Max Mode",  0x2ec650, 0x2ec670, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 3",  0x2ec670, 0x2ec690, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 4",  0x2ec690, 0x2ec6b0, indexKOFSprites_98Shingo },
    { L"Shingo D - Order Select",  0x2ec6b0, 0x2ec6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shingo },
    { L"Shingo D - Life Bar Portrait",  0x2ec6d0, 0x2ec6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Shingo D - Win Screen Portrait/sprite",  0x2ec6f0, 0x2ec7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shingo },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_A[] =
{
    { L"O.Yashiro A - Main",  0x2ec7f0, 0x2ec810, indexKOFSprites_98Yashiro },
    { L"O.Yashiro A - Extra 1",  0x2ec810, 0x2ec830 },
    { L"O.Yashiro A - Extra 2",  0x2ec830, 0x2ec850 },
    { L"O.Yashiro A - Max Mode",  0x2ec850, 0x2ec870, indexKOFSprites_98Yashiro },
    { L"O.Yashiro A - Extra 3",  0x2ec870, 0x2ec890 },
    { L"O.Yashiro A - Extra 4",  0x2ec890, 0x2ec8b0 },
    { L"O.Yashiro A - Order Select",  0x2ec8b0, 0x2ec8d0, indexKOFSprites_98OrderSelect, 0x51 },
    { L"O.Yashiro A - Life Bar Portrait",  0x2ec8d0, 0x2ec8f0, indexKOFSprites_98Lifebar, 0x51 },
    { L"O.Yashiro A - Win Screen Portrait/sprite",  0x2ec8f0, 0x2ec9f0, indexKOFSprites_98WinPortrait, 0x51 },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_B[] =
{
    { L"O.Yashiro B - Main",  0x2ec9f0, 0x2eca10, indexKOFSprites_98Yashiro },
    { L"O.Yashiro B - Extra 1",  0x2eca10, 0x2eca30 },
    { L"O.Yashiro B - Extra 2",  0x2eca30, 0x2eca50 },
    { L"O.Yashiro B - Max Mode",  0x2eca50, 0x2eca70, indexKOFSprites_98Yashiro },
    { L"O.Yashiro B - Extra 3",  0x2eca70, 0x2eca90 },
    { L"O.Yashiro B - Extra 4",  0x2eca90, 0x2ecab0 },
    { L"O.Yashiro B - Order Select",  0x2ecab0, 0x2ecad0, indexKOFSprites_98OrderSelect, 0x51 },
    { L"O.Yashiro B - Life Bar Portrait",  0x2ecad0, 0x2ecaf0, indexKOFSprites_98Lifebar, 0x51 },
    { L"O.Yashiro B - Win Screen Portrait/sprite",  0x2ecaf0, 0x2ecbf0, indexKOFSprites_98WinPortrait, 0x51 },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_C[] =
{
    { L"O.Yashiro C - Main",  0x2ecbf0, 0x2ecc10, indexKOFSprites_98Yashiro },
    { L"O.Yashiro C - Extra 1",  0x2ecc10, 0x2ecc30 },
    { L"O.Yashiro C - Extra 2",  0x2ecc30, 0x2ecc50 },
    { L"O.Yashiro C - Max Mode",  0x2ecc50, 0x2ecc70, indexKOFSprites_98Yashiro },
    { L"O.Yashiro C - Extra 3",  0x2ecc70, 0x2ecc90 },
    { L"O.Yashiro C - Extra 4",  0x2ecc90, 0x2eccb0 },
    { L"O.Yashiro C - Order Select",  0x2eccb0, 0x2eccd0, indexKOFSprites_98OrderSelect, 0x51 },
    { L"O.Yashiro C - Life Bar Portrait",  0x2eccd0, 0x2eccf0, indexKOFSprites_98Lifebar, 0x51 },
    { L"O.Yashiro C - Win Screen Portrait/sprite",  0x2eccf0, 0x2ecdf0, indexKOFSprites_98WinPortrait, 0x51 },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_D[] =
{
    { L"O.Yashiro D - Main",  0x2ecdf0, 0x2ece10, indexKOFSprites_98Yashiro },
    { L"O.Yashiro D - Extra 1",  0x2ece10, 0x2ece30 },
    { L"O.Yashiro D - Extra 2",  0x2ece30, 0x2ece50 },
    { L"O.Yashiro D - Max Mode",  0x2ece50, 0x2ece70, indexKOFSprites_98Yashiro },
    { L"O.Yashiro D - Extra 3",  0x2ece70, 0x2ece90 },
    { L"O.Yashiro D - Extra 4",  0x2ece90, 0x2eceb0 },
    { L"O.Yashiro D - Order Select",  0x2eceb0, 0x2eced0, indexKOFSprites_98OrderSelect, 0x51 },
    { L"O.Yashiro D - Life Bar Portrait",  0x2eced0, 0x2ecef0, indexKOFSprites_98Lifebar, 0x51 },
    { L"O.Yashiro D - Win Screen Portrait/sprite",  0x2ecef0, 0x2ecff0, indexKOFSprites_98WinPortrait, 0x51 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_A[] =
{
    { L"O.Shermie A - Main",  0x2ecff0, 0x2ed010, indexKOFSprites_98Shermie },
    { L"O.Shermie A - Extra 1",  0x2ed010, 0x2ed030, indexKOFSprites_98Shermie },
    { L"O.Shermie A - Extra 2",  0x2ed030, 0x2ed050, indexKOFSprites_98Shermie },
    { L"O.Shermie A - Max Mode",  0x2ed050, 0x2ed070, indexKOFSprites_98Shermie },
    { L"O.Shermie A - Extra 3",  0x2ed070, 0x2ed090, indexKOFSprites_98Shermie },
    { L"O.Shermie A - Extra 4",  0x2ed090, 0x2ed0b0, indexKOFSprites_98Shermie },
    { L"O.Shermie A - Order Select",  0x2ed0b0, 0x2ed0d0, indexKOFSprites_98OrderSelect, 0x50 },
    { L"O.Shermie A - Life Bar Portrait",  0x2ed0d0, 0x2ed0f0, indexKOFSprites_98Lifebar, 0x50 },
    { L"O.Shermie A - Win Screen Portrait/sprite",  0x2ed0f0, 0x2ed1f0, indexKOFSprites_98WinPortrait, 0x50 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_B[] =
{
    { L"O.Shermie B - Main",  0x2ed1f0, 0x2ed210, indexKOFSprites_98Shermie },
    { L"O.Shermie B - Extra 1",  0x2ed210, 0x2ed230, indexKOFSprites_98Shermie },
    { L"O.Shermie B - Extra 2",  0x2ed230, 0x2ed250, indexKOFSprites_98Shermie },
    { L"O.Shermie B - Max Mode",  0x2ed250, 0x2ed270, indexKOFSprites_98Shermie },
    { L"O.Shermie B - Extra 3",  0x2ed270, 0x2ed290, indexKOFSprites_98Shermie },
    { L"O.Shermie B - Extra 4",  0x2ed290, 0x2ed2b0, indexKOFSprites_98Shermie },
    { L"O.Shermie B - Order Select",  0x2ed2b0, 0x2ed2d0, indexKOFSprites_98OrderSelect, 0x50 },
    { L"O.Shermie B - Life Bar Portrait",  0x2ed2d0, 0x2ed2f0, indexKOFSprites_98Lifebar, 0x50 },
    { L"O.Shermie B - Win Screen Portrait/sprite",  0x2ed2f0, 0x2ed3f0, indexKOFSprites_98WinPortrait, 0x50 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_C[] =
{
    { L"O.Shermie C - Main",  0x2ed3f0, 0x2ed410, indexKOFSprites_98Shermie },
    { L"O.Shermie C - Extra 1",  0x2ed410, 0x2ed430, indexKOFSprites_98Shermie },
    { L"O.Shermie C - Extra 2",  0x2ed430, 0x2ed450, indexKOFSprites_98Shermie },
    { L"O.Shermie C - Max Mode",  0x2ed450, 0x2ed470, indexKOFSprites_98Shermie },
    { L"O.Shermie C - Extra 3",  0x2ed470, 0x2ed490, indexKOFSprites_98Shermie },
    { L"O.Shermie C - Extra 4",  0x2ed490, 0x2ed4b0, indexKOFSprites_98Shermie },
    { L"O.Shermie C - Order Select",  0x2ed4b0, 0x2ed4d0, indexKOFSprites_98OrderSelect, 0x50 },
    { L"O.Shermie C - Life Bar Portrait",  0x2ed4d0, 0x2ed4f0, indexKOFSprites_98Lifebar, 0x50 },
    { L"O.Shermie C - Win Screen Portrait/sprite",  0x2ed4f0, 0x2ed5f0, indexKOFSprites_98WinPortrait, 0x50 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_D[] =
{
    { L"O.Shermie D - Main",  0x2ed5f0, 0x2ed610, indexKOFSprites_98Shermie },
    { L"O.Shermie D - Extra 1",  0x2ed610, 0x2ed630, indexKOFSprites_98Shermie },
    { L"O.Shermie D - Extra 2",  0x2ed630, 0x2ed650, indexKOFSprites_98Shermie },
    { L"O.Shermie D - Max Mode",  0x2ed650, 0x2ed670, indexKOFSprites_98Shermie },
    { L"O.Shermie D - Extra 3",  0x2ed670, 0x2ed690, indexKOFSprites_98Shermie },
    { L"O.Shermie D - Extra 4",  0x2ed690, 0x2ed6b0, indexKOFSprites_98Shermie },
    { L"O.Shermie D - Order Select",  0x2ed6b0, 0x2ed6d0, indexKOFSprites_98OrderSelect, 0x50 },
    { L"O.Shermie D - Life Bar Portrait",  0x2ed6d0, 0x2ed6f0, indexKOFSprites_98Lifebar, 0x50 },
    { L"O.Shermie D - Win Screen Portrait/sprite",  0x2ed6f0, 0x2ed7f0, indexKOFSprites_98WinPortrait, 0x50 },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_A[] =
{
    { L"O.Chris A - Main",  0x2ed7f0, 0x2ed810, indexKOFSprites_98Chris },
    { L"O.Chris A - Extra 1",  0x2ed810, 0x2ed830 },
    { L"O.Chris A - Extra 2",  0x2ed830, 0x2ed850 },
    { L"O.Chris A - Max Mode",  0x2ed850, 0x2ed870, indexKOFSprites_98Chris },
    { L"O.Chris A - Extra 3",  0x2ed870, 0x2ed890 },
    { L"O.Chris A - Extra 4",  0x2ed890, 0x2ed8b0 },
    { L"O.Chris A - Order Select",  0x2ed8b0, 0x2ed8d0, indexKOFSprites_98OrderSelect, 0x4f },
    { L"O.Chris A - Life Bar Portrait",  0x2ed8d0, 0x2ed8f0, indexKOFSprites_98Lifebar, 0x4f },
    { L"O.Chris A - Win Screen Portrait/sprite",  0x2ed8f0, 0x2ed9f0, indexKOFSprites_98WinPortrait, 0x4f },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_B[] =
{
    { L"O.Chris B - Main",  0x2ed9f0, 0x2eda10, indexKOFSprites_98Chris },
    { L"O.Chris B - Extra 1",  0x2eda10, 0x2eda30 },
    { L"O.Chris B - Extra 2",  0x2eda30, 0x2eda50 },
    { L"O.Chris B - Max Mode",  0x2eda50, 0x2eda70, indexKOFSprites_98Chris },
    { L"O.Chris B - Extra 3",  0x2eda70, 0x2eda90 },
    { L"O.Chris B - Extra 4",  0x2eda90, 0x2edab0 },
    { L"O.Chris B - Order Select",  0x2edab0, 0x2edad0, indexKOFSprites_98OrderSelect, 0x4f },
    { L"O.Chris B - Life Bar Portrait",  0x2edad0, 0x2edaf0, indexKOFSprites_98Lifebar, 0x4f },
    { L"O.Chris B - Win Screen Portrait/sprite",  0x2edaf0, 0x2edbf0, indexKOFSprites_98WinPortrait, 0x4f },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_C[] =
{
    { L"O.Chris C - Main",  0x2edbf0, 0x2edc10, indexKOFSprites_98Chris },
    { L"O.Chris C - Extra 1",  0x2edc10, 0x2edc30 },
    { L"O.Chris C - Extra 2",  0x2edc30, 0x2edc50 },
    { L"O.Chris C - Max Mode",  0x2edc50, 0x2edc70, indexKOFSprites_98Chris },
    { L"O.Chris C - Extra 3",  0x2edc70, 0x2edc90 },
    { L"O.Chris C - Extra 4",  0x2edc90, 0x2edcb0 },
    { L"O.Chris C - Order Select",  0x2edcb0, 0x2edcd0, indexKOFSprites_98OrderSelect, 0x4f },
    { L"O.Chris C - Life Bar Portrait",  0x2edcd0, 0x2edcf0, indexKOFSprites_98Lifebar, 0x4f },
    { L"O.Chris C - Win Screen Portrait/sprite",  0x2edcf0, 0x2eddf0, indexKOFSprites_98WinPortrait, 0x4f },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_D[] =
{
    { L"O.Chris D - Main",  0x2eddf0, 0x2ede10, indexKOFSprites_98Chris },
    { L"O.Chris D - Extra 1",  0x2ede10, 0x2ede30 },
    { L"O.Chris D - Extra 2",  0x2ede30, 0x2ede50 },
    { L"O.Chris D - Max Mode",  0x2ede50, 0x2ede70, indexKOFSprites_98Chris },
    { L"O.Chris D - Extra 3",  0x2ede70, 0x2ede90 },
    { L"O.Chris D - Extra 4",  0x2ede90, 0x2edeb0 },
    { L"O.Chris D - Order Select",  0x2edeb0, 0x2eded0, indexKOFSprites_98OrderSelect, 0x4f },
    { L"O.Chris D - Life Bar Portrait",  0x2eded0, 0x2edef0, indexKOFSprites_98Lifebar, 0x4f },
    { L"O.Chris D - Win Screen Portrait/sprite",  0x2edef0, 0x2edff0, indexKOFSprites_98WinPortrait, 0x4f },
};

const sGame_PaletteDataset KOF98_A_OmegaRugal_PALETTE_A[] =
{
    { L"Omega Rugal A - Main",  0x2edff0, 0x2ee010, indexKOFSprites_98Rugal },
    { L"Omega Rugal A - Extra 1",  0x2ee010, 0x2ee030 },
    { L"Omega Rugal A - Extra 2",  0x2ee030, 0x2ee050 },
    { L"Omega Rugal A - Max Mode",  0x2ee050, 0x2ee070, indexKOFSprites_98Rugal },
    { L"Omega Rugal A - Extra 3",  0x2ee070, 0x2ee090 },
    { L"Omega Rugal A - Extra 4",  0x2ee090, 0x2ee0b0 },
    { L"Omega Rugal A - Order Select",  0x2ee0b0, 0x2ee0d0, indexKOFSprites_98OrderSelect, 0x52 },
    { L"Omega Rugal A - Life Bar Portrait",  0x2ee0d0, 0x2ee0f0, indexKOFSprites_98Lifebar, 0x52 },
    { L"Omega Rugal A - Win Screen Portrait/sprite",  0x2ee0f0, 0x2ee1f0, indexKOFSprites_98WinPortrait, 0x52 },
};

const sGame_PaletteDataset KOF98_A_OmegaRugal_PALETTE_B[] =
{
    { L"Omega Rugal B - Main",  0x2ee1f0, 0x2ee210, indexKOFSprites_98Rugal },
    { L"Omega Rugal B - Extra 1",  0x2ee210, 0x2ee230 },
    { L"Omega Rugal B - Extra 2",  0x2ee230, 0x2ee250 },
    { L"Omega Rugal B - Max Mode",  0x2ee250, 0x2ee270, indexKOFSprites_98Rugal },
    { L"Omega Rugal B - Extra 3",  0x2ee270, 0x2ee290 },
    { L"Omega Rugal B - Extra 4",  0x2ee290, 0x2ee2b0 },
    { L"Omega Rugal B - Order Select",  0x2ee2b0, 0x2ee2d0, indexKOFSprites_98OrderSelect, 0x52 },
    { L"Omega Rugal B - Life Bar Portrait",  0x2ee2d0, 0x2ee2f0, indexKOFSprites_98Lifebar, 0x52 },
    { L"Omega Rugal B - Win Screen Portrait/sprite",  0x2ee2f0, 0x2ee3f0, indexKOFSprites_98WinPortrait, 0x52 },
};

const sGame_PaletteDataset KOF98_A_OmegaRugal_PALETTE_C[] =
{
    { L"Omega Rugal C - Main",  0x2ee3f0, 0x2ee410, indexKOFSprites_98Rugal },
    { L"Omega Rugal C - Extra 1",  0x2ee410, 0x2ee430 },
    { L"Omega Rugal C - Extra 2",  0x2ee430, 0x2ee450 },
    { L"Omega Rugal C - Max Mode",  0x2ee450, 0x2ee470, indexKOFSprites_98Rugal },
    { L"Omega Rugal C - Extra 3",  0x2ee470, 0x2ee490 },
    { L"Omega Rugal C - Extra 4",  0x2ee490, 0x2ee4b0 },
    { L"Omega Rugal C - Order Select",  0x2ee4b0, 0x2ee4d0, indexKOFSprites_98OrderSelect, 0x52 },
    { L"Omega Rugal C - Life Bar Portrait",  0x2ee4d0, 0x2ee4f0, indexKOFSprites_98Lifebar, 0x52 },
    { L"Omega Rugal C - Win Screen Portrait/sprite",  0x2ee4f0, 0x2ee5f0, indexKOFSprites_98WinPortrait, 0x52 },
};

const sGame_PaletteDataset KOF98_A_OmegaRugal_PALETTE_D[] =
{
    { L"Omega Rugal D - Main",  0x2ee5f0, 0x2ee610, indexKOFSprites_98Rugal },
    { L"Omega Rugal D - Extra 1",  0x2ee610, 0x2ee630 },
    { L"Omega Rugal D - Extra 2",  0x2ee630, 0x2ee650 },
    { L"Omega Rugal D - Max Mode",  0x2ee650, 0x2ee670, indexKOFSprites_98Rugal },
    { L"Omega Rugal D - Extra 3",  0x2ee670, 0x2ee690 },
    { L"Omega Rugal D - Extra 4",  0x2ee690, 0x2ee6b0 },
    { L"Omega Rugal D - Order Select",  0x2ee6b0, 0x2ee6d0, indexKOFSprites_98OrderSelect, 0x52 },
    { L"Omega Rugal D - Life Bar Portrait",  0x2ee6d0, 0x2ee6f0, indexKOFSprites_98Lifebar, 0x52 },
    { L"Omega Rugal D - Win Screen Portrait/sprite",  0x2ee6f0, 0x2ee7f0, indexKOFSprites_98WinPortrait, 0x52 },
};

const sGame_PaletteDataset KOF98_A_KYO_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2ee7f0, 0x2ee810 },
    { L"Effect 1", 0x2ee810, 0x2ee830 },
    { L"Effect 2", 0x2ee830, 0x2ee850 },
    { L"Effect 4", 0x2ee870, 0x2ee890 },
    { L"Effect 5", 0x2ee890, 0x2ee8b0 },
    { L"Effect 6", 0x2ee8b0, 0x2ee8d0 },
    { L"Zap Effect 1", 0x2ee950, 0x2ee970, indexKOFSprites_98Kyo },
    { L"Zap Effect 2", 0x2ee970, 0x2ee990, indexKOFSprites_98Kyo },
    { L"Super Trail 1", 0x2ee990, 0x2ee9b0, indexKOFSprites_98Kyo },
    { L"Super Trail 2", 0x2ee9b0, 0x2ee9d0, indexKOFSprites_98Kyo },
    { L"Super Trail 3", 0x2ee9d0, 0x2ee9f0, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2ee9f0, 0x2eea10 },
    { L"Effect 1", 0x2eea10, 0x2eea30 },
    { L"Effect 2", 0x2eea30, 0x2eea50 },
    { L"Effect 3", 0x2eea50, 0x2eea70 },
    { L"Zap Effect 1", 0x2eeb50, 0x2eeb70, indexKOFSprites_98Benimaru },
    { L"Zap Effect 2", 0x2eeb70, 0x2eeb90, indexKOFSprites_98Benimaru },
    { L"Super Trail 1", 0x2eeb90, 0x2eebb0, indexKOFSprites_98Benimaru },
    { L"Super Trail 2", 0x2eebb0, 0x2eebd0, indexKOFSprites_98Benimaru },
    { L"Super Trail 3", 0x2eebd0, 0x2eebf0, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF98_A_DAIMON_EFFECT_PALETTES[] =
{
    { L"Zap Effect 1", 0x2eed50, 0x2eed70, indexKOFSprites_98Daimon },
    { L"Zap Effect 2", 0x2eed70, 0x2eed90, indexKOFSprites_98Daimon },
    { L"Super Trail 1", 0x2eed90, 0x2eedb0, indexKOFSprites_98Daimon },
    { L"Super Trail 2", 0x2eedb0, 0x2eedd0, indexKOFSprites_98Daimon },
    { L"Super Trail 3", 0x2eedd0, 0x2eedf0, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF98_A_TERRY_EFFECT_PALETTES[] =
{
    { L"Burn Knuckle", 0x2eedf0, 0x2eee10, indexKOFSprites_98Terry, 0x2 },
    { L"Power Dunk", 0x2eee10, 0x2eee30, indexKOFSprites_98Terry, 0x3 },
    { L"All Super Geysers (Max)", 0x2eee30, 0x2eee50, indexKOFSprites_98Terry, 0x4 },
    { L"Power Wave", 0x2eee50, 0x2eee70, indexKOFSprites_98Terry, 0x5 },
    { L"EX Power Wave", 0x2eee70, 0x2eee90, indexKOFSprites_98Terry, 0x6 },
    { L"EX PW Hit Spark", 0x2eee90, 0x2eeeb0, indexKOFSprites_98Terry, 07 },
    { L"Zap Effect 1", 0x2eef50, 0x2eef70, indexKOFSprites_98Terry },
    { L"Zap Effect 2", 0x2eef70, 0x2eef90, indexKOFSprites_98Terry },
    { L"Super Trail 1", 0x2eef90, 0x2eefb0, indexKOFSprites_98Terry },
    { L"Super Trail 2", 0x2eefb0, 0x2eefd0, indexKOFSprites_98Terry },
    { L"Super Trail 3", 0x2eefd0, 0x2eeff0, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF98_A_ANDY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2eeff0, 0x2ef010 },
    { L"Effect 1", 0x2ef010, 0x2ef030 },
    { L"Effect 2", 0x2ef030, 0x2ef050 },
    { L"Effect 3", 0x2ef050, 0x2ef070 },
    { L"Effect 4", 0x2ef070, 0x2ef090 },
    { L"Effect 5", 0x2ef090, 0x2ef0b0 },
    { L"Effect 6", 0x2ef0b0, 0x2ef0d0 },
    { L"Effect 7", 0x2ef0d0, 0x2ef0f0 },
    { L"Effect 8", 0x2ef0f0, 0x2ef110 },
    { L"Effect 9", 0x2ef110, 0x2ef130 },
    { L"Zap Effect 1", 0x2ef150, 0x2ef170, indexKOFSprites_98Andy },
    { L"Zap Effect 2", 0x2ef170, 0x2ef190, indexKOFSprites_98Andy },
    { L"Super Trail 1", 0x2ef190, 0x2ef1b0, indexKOFSprites_98Andy },
    { L"Super Trail 2", 0x2ef1b0, 0x2ef1d0, indexKOFSprites_98Andy },
    { L"Super Trail 3", 0x2ef1d0, 0x2ef1f0, indexKOFSprites_98Andy },
};

const sGame_PaletteDataset KOF98_A_JOE_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2ef1f0, 0x2ef210 },
    { L"Effect 1", 0x2ef210, 0x2ef230 },
    { L"Effect 2", 0x2ef230, 0x2ef250 },
    { L"Effect 3", 0x2ef250, 0x2ef270 },
    { L"Effect 4", 0x2ef270, 0x2ef290 },
    { L"Effect 5", 0x2ef290, 0x2ef2b0 },
    { L"Zap Effect 1", 0x2ef350, 0x2ef370, indexKOFSprites_98Joe },
    { L"Zap Effect 2", 0x2ef370, 0x2ef390, indexKOFSprites_98Joe },
    { L"Super Trail 1", 0x2ef390, 0x2ef3b0, indexKOFSprites_98Joe },
    { L"Super Trail 2", 0x2ef3b0, 0x2ef3d0, indexKOFSprites_98Joe },
    { L"Super Trail 3", 0x2ef3d0, 0x2ef3f0, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF98_A_RYO_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2ef3f0, 0x2ef410 },
    { L"Effect 1", 0x2ef410, 0x2ef430 },
    { L"Effect 2", 0x2ef430, 0x2ef450 },
    { L"Effect 3", 0x2ef450, 0x2ef470 },
    { L"Effect 4", 0x2ef470, 0x2ef490 },
    { L"Effect 5", 0x2ef490, 0x2ef4b0 },
    { L"Effect 6", 0x2ef4b0, 0x2ef4d0 },
    { L"Zap Effect 1", 0x2ef550, 0x2ef570, indexKOFSprites_98Ryo },
    { L"Zap Effect 2", 0x2ef570, 0x2ef590, indexKOFSprites_98Ryo },
    { L"Super Trail 1", 0x2ef590, 0x2ef5b0, indexKOFSprites_98Ryo },
    { L"Super Trail 2", 0x2ef5b0, 0x2ef5d0, indexKOFSprites_98Ryo },
    { L"Super Trail 3", 0x2ef5d0, 0x2ef5f0, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF98_A_ROBERT_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2ef5f0, 0x2ef610 },
    { L"Effect 1", 0x2ef610, 0x2ef630 },
    { L"Effect 2", 0x2ef630, 0x2ef650 },
    { L"Effect 3", 0x2ef650, 0x2ef670 },
    { L"Effect 4", 0x2ef670, 0x2ef690 },
    { L"Effect 5", 0x2ef690, 0x2ef6b0 },
    { L"Zap Effect 1", 0x2ef750, 0x2ef770, indexKOFSprites_98Robert },
    { L"Zap Effect 2", 0x2ef770, 0x2ef790, indexKOFSprites_98Robert },
    { L"Super Trail 1", 0x2ef790, 0x2ef7b0, indexKOFSprites_98Robert },
    { L"Super Trail 2", 0x2ef7b0, 0x2ef7d0, indexKOFSprites_98Robert },
    { L"Super Trail 3", 0x2ef7d0, 0x2ef7f0, indexKOFSprites_98Robert },
};

const sGame_PaletteDataset KOF98_A_YURI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2ef7f0, 0x2ef810 },
    { L"Effect 1", 0x2ef810, 0x2ef830 },
    { L"Effect 2", 0x2ef830, 0x2ef850 },
    { L"Effect 3", 0x2ef850, 0x2ef870 },
    { L"Effect 4", 0x2ef870, 0x2ef890 },
    { L"Effect 5", 0x2ef890, 0x2ef8b0 },
    { L"Effect 6", 0x2ef8b0, 0x2ef8d0 },
    { L"Effect 7", 0x2ef8d0, 0x2ef8f0 },
    { L"Effect 8", 0x2ef8f0, 0x2ef910 },
    { L"Zap Effect 1", 0x2ef950, 0x2ef970, indexKOFSprites_98Yuri },
    { L"Zap Effect 2", 0x2ef970, 0x2ef990, indexKOFSprites_98Yuri },
    { L"Super Trail 1", 0x2ef990, 0x2ef9b0, indexKOFSprites_98Yuri },
    { L"Super Trail 2", 0x2ef9b0, 0x2ef9d0, indexKOFSprites_98Yuri },
    { L"Super Trail 3", 0x2ef9d0, 0x2ef9f0, indexKOFSprites_98Yuri },
};

const sGame_PaletteDataset KOF98_A_LEONA_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2ef9f0, 0x2efa10 },
    { L"Effect 1", 0x2efa10, 0x2efa30 },
    { L"Effect 2", 0x2efa30, 0x2efa50 },
    { L"Effect 3", 0x2efa50, 0x2efa70 },
    { L"Effect 4", 0x2efa70, 0x2efa90 },
    { L"Effect 5", 0x2efa90, 0x2efab0 },
    { L"Effect 6", 0x2efab0, 0x2efad0 },
    { L"Zap Effect 1", 0x2efb50, 0x2efb70, indexKOFSprites_98Leona },
    { L"Zap Effect 2", 0x2efb70, 0x2efb90, indexKOFSprites_98Leona },
    { L"Super Trail 1", 0x2efb90, 0x2efbb0, indexKOFSprites_98Leona },
    { L"Super Trail 2", 0x2efbb0, 0x2efbd0, indexKOFSprites_98Leona },
    { L"Super Trail 3", 0x2efbd0, 0x2efbf0, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF98_A_RALF_EFFECT_PALETTES[] =
{
    { L"Zap Effect 1", 0x2efd50, 0x2efd70, indexKOFSprites_98Ralf },
    { L"Zap Effect 2", 0x2efd70, 0x2efd90, indexKOFSprites_98Ralf },
    { L"Super Trail 1", 0x2efd90, 0x2efdb0, indexKOFSprites_98Ralf },
    { L"Super Trail 2", 0x2efdb0, 0x2efdd0, indexKOFSprites_98Ralf },
    { L"Super Trail 3", 0x2efdd0, 0x2efdf0, indexKOFSprites_98Ralf },
};

const sGame_PaletteDataset KOF98_A_CLARK_EFFECT_PALETTES[] =
{
    { L"Zap Effect 1", 0x2eff50, 0x2eff70, indexKOFSprites_98Clark },
    { L"Zap Effect 2", 0x2eff70, 0x2eff90, indexKOFSprites_98Clark },
    { L"Super Trail 1", 0x2eff90, 0x2effb0, indexKOFSprites_98Clark },
    { L"Super Trail 2", 0x2effb0, 0x2effd0, indexKOFSprites_98Clark },
    { L"Super Trail 3", 0x2effd0, 0x2efff0, indexKOFSprites_98Clark },
};

const sGame_PaletteDataset KOF98_A_ATHENA_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2efff0, 0x2f0010 },
    { L"Effect 1", 0x2f0010, 0x2f0030 },
    { L"Effect 2", 0x2f0030, 0x2f0050 },
    { L"Effect 3", 0x2f0050, 0x2f0070 },
    { L"Effect 4", 0x2f0070, 0x2f0090 },
    { L"Effect 5", 0x2f0090, 0x2f00b0 },
    { L"Effect 6", 0x2f00b0, 0x2f00d0 },
    { L"Effect 7", 0x2f00d0, 0x2f00f0 },
    { L"Effect 8", 0x2f00f0, 0x2f0110 },
    { L"Zap Effect 1", 0x2f0150, 0x2f0170, indexKOFSprites_98Athena },
    { L"Zap Effect 2", 0x2f0170, 0x2f0190, indexKOFSprites_98Athena },
    { L"Super Trail 1", 0x2f0190, 0x2f01b0, indexKOFSprites_98Athena },
    { L"Super Trail 2", 0x2f01b0, 0x2f01d0, indexKOFSprites_98Athena },
    { L"Super Trail 3", 0x2f01d0, 0x2f01f0, indexKOFSprites_98Athena },
};

const sGame_PaletteDataset KOF98_A_KENSOU_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f01f0, 0x2f0210 },
    { L"Effect 1", 0x2f0210, 0x2f0230 },
    { L"Effect 2", 0x2f0230, 0x2f0250 },
    { L"Effect 3", 0x2f0250, 0x2f0270 },
    { L"Zap Effect 1", 0x2f0350, 0x2f0370, indexKOFSprites_98Kensou },
    { L"Zap Effect 2", 0x2f0370, 0x2f0390, indexKOFSprites_98Kensou },
    { L"Super Trail 1", 0x2f0390, 0x2f03b0, indexKOFSprites_98Kensou },
    { L"Super Trail 2", 0x2f03b0, 0x2f03d0, indexKOFSprites_98Kensou },
    { L"Super Trail 3", 0x2f03d0, 0x2f03f0, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF98_A_CHIN_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f03f0, 0x2f0410 },
    { L"Effect 2", 0x2f0430, 0x2f0450 },
    { L"Effect 3", 0x2f0450, 0x2f0470 },
    { L"Effect 4", 0x2f0470, 0x2f0490 },
    { L"Effect 5", 0x2f0490, 0x2f04b0 },
    { L"Zap Effect 1", 0x2f0550, 0x2f0570, indexKOFSprites_98Chin },
    { L"Zap Effect 2", 0x2f0570, 0x2f0590, indexKOFSprites_98Chin },
    { L"Super Trail 1", 0x2f0590, 0x2f05b0, indexKOFSprites_98Chin },
    { L"Super Trail 2", 0x2f05b0, 0x2f05d0, indexKOFSprites_98Chin },
    { L"Super Trail 3", 0x2f05d0, 0x2f05f0, indexKOFSprites_98Chin },
};

const sGame_PaletteDataset KOF98_A_CHIZURU_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f05f0, 0x2f0610 },
    { L"Zap Effect 1", 0x2f0750, 0x2f0770, indexKOFSprites_98Chizuru },
    { L"Zap Effect 2", 0x2f0770, 0x2f0790, indexKOFSprites_98Chizuru },
    { L"Super Trail 1", 0x2f0790, 0x2f07b0, indexKOFSprites_98Chizuru },
    { L"Super Trail 2", 0x2f07b0, 0x2f07d0, indexKOFSprites_98Chizuru },
    { L"Super Trail 3", 0x2f07d0, 0x2f07f0, indexKOFSprites_98Chizuru },
};

const sGame_PaletteDataset KOF98_A_MAI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f07f0, 0x2f0810 },
    { L"Effect 1", 0x2f0810, 0x2f0830 },
    { L"Effect 2", 0x2f0830, 0x2f0850 },
    { L"Effect 3", 0x2f0850, 0x2f0870 },
    { L"Effect 4", 0x2f0870, 0x2f0890 },
    { L"Effect 5", 0x2f0890, 0x2f08b0 },
    { L"Effect 6", 0x2f08b0, 0x2f08d0 },
    { L"Effect 9", 0x2f0910, 0x2f0930 },
    { L"Zap Effect 1", 0x2f0950, 0x2f0970, indexKOFSprites_98Mai },
    { L"Zap Effect 2", 0x2f0970, 0x2f0990, indexKOFSprites_98Mai },
    { L"Super Trail 1", 0x2f0990, 0x2f09b0, indexKOFSprites_98Mai },
    { L"Super Trail 2", 0x2f09b0, 0x2f09d0, indexKOFSprites_98Mai },
    { L"Super Trail 3", 0x2f09d0, 0x2f09f0, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF98_A_KING_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f09f0, 0x2f0a10 },
    { L"Effect 1", 0x2f0a10, 0x2f0a30 },
    { L"Zap Effect 1", 0x2f0b50, 0x2f0b70, indexKOFSprites_98King },
    { L"Zap Effect 2", 0x2f0b70, 0x2f0b90, indexKOFSprites_98King },
    { L"Super Trail 1", 0x2f0b90, 0x2f0bb0, indexKOFSprites_98King },
    { L"Super Trail 2", 0x2f0bb0, 0x2f0bd0, indexKOFSprites_98King },
    { L"Super Trail 3", 0x2f0bd0, 0x2f0bf0, indexKOFSprites_98King },
};

const sGame_PaletteDataset KOF98_A_KIM_EFFECT_PALETTES[] =
{
    { L"Zap Effect 1", 0x2f0d50, 0x2f0d70, indexKOFSprites_98Kim },
    { L"Zap Effect 2", 0x2f0d70, 0x2f0d90, indexKOFSprites_98Kim },
    { L"Super Trail 1", 0x2f0d90, 0x2f0db0, indexKOFSprites_98Kim },
    { L"Super Trail 2", 0x2f0db0, 0x2f0dd0, indexKOFSprites_98Kim },
    { L"Super Trail 3", 0x2f0dd0, 0x2f0df0, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF98_A_CHANG_EFFECT_PALETTES[] =
{
    { L"Zap Effect 1", 0x2f0f50, 0x2f0f70, indexKOFSprites_98Chang },
    { L"Zap Effect 2", 0x2f0f70, 0x2f0f90, indexKOFSprites_98Chang },
    { L"Super Trail 1", 0x2f0f90, 0x2f0fb0, indexKOFSprites_98Chang },
    { L"Super Trail 2", 0x2f0fb0, 0x2f0fd0, indexKOFSprites_98Chang },
    { L"Super Trail 3", 0x2f0fd0, 0x2f0ff0, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF98_A_CHOI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f0ff0, 0x2f1010 },
    { L"Effect 1", 0x2f1010, 0x2f1030 },
    { L"Effect 2", 0x2f1030, 0x2f1050 },
    { L"Zap Effect 1", 0x2f1150, 0x2f1170, indexKOFSprites_98Choi },
    { L"Zap Effect 2", 0x2f1170, 0x2f1190, indexKOFSprites_98Choi },
    { L"Super Trail 1", 0x2f1190, 0x2f11b0, indexKOFSprites_98Choi },
    { L"Super Trail 2", 0x2f11b0, 0x2f11d0, indexKOFSprites_98Choi },
    { L"Super Trail 3", 0x2f11d0, 0x2f11f0, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF98_A_YASHIRO_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f11f0, 0x2f1210 },
    { L"Effect 1", 0x2f1210, 0x2f1230 },
    { L"Effect 2", 0x2f1230, 0x2f1250 },
    { L"Effect 3", 0x2f1250, 0x2f1270 },
    { L"Effect 4", 0x2f1270, 0x2f1290 },
    { L"Zap Effect 1", 0x2f1350, 0x2f1370, indexKOFSprites_98Yashiro },
    { L"Zap Effect 2", 0x2f1370, 0x2f1390, indexKOFSprites_98Yashiro },
    { L"Super Trail 1", 0x2f1390, 0x2f13b0, indexKOFSprites_98Yashiro },
    { L"Super Trail 2", 0x2f13b0, 0x2f13d0, indexKOFSprites_98Yashiro },
    { L"Super Trail 3", 0x2f13d0, 0x2f13f0, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF98_A_SHERMIE_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f13f0, 0x2f1410 },
    { L"Effect 1", 0x2f1410, 0x2f1430 },
    { L"Effect 2", 0x2f1430, 0x2f1450 },
    { L"Effect 3", 0x2f1450, 0x2f1470 },
    { L"Effect 4", 0x2f1470, 0x2f1490 },
    { L"Effect 5", 0x2f1490, 0x2f14b0 },
    { L"Effect 6", 0x2f14b0, 0x2f14d0 },
    { L"Effect 7", 0x2f14d0, 0x2f14f0 },
    { L"Effect 10", 0x2f1530, 0x2f1550 },
    { L"Zap Effect 1", 0x2f1550, 0x2f1570, indexKOFSprites_98Shermie },
    { L"Zap Effect 2", 0x2f1570, 0x2f1590, indexKOFSprites_98Shermie },
    { L"Super Trail 1", 0x2f1590, 0x2f15b0, indexKOFSprites_98Shermie },
    { L"Super Trail 2", 0x2f15b0, 0x2f15d0, indexKOFSprites_98Shermie },
    { L"Super Trail 3", 0x2f15d0, 0x2f15f0, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF98_A_CHRIS_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f15f0, 0x2f1610 },
    { L"Effect 1", 0x2f1610, 0x2f1630 },
    { L"Effect 2", 0x2f1630, 0x2f1650 },
    { L"Effect 3", 0x2f1650, 0x2f1670 },
    { L"Effect 4", 0x2f1670, 0x2f1690 },
    { L"Effect 5", 0x2f1690, 0x2f16b0 },
    { L"Effect 6", 0x2f16b0, 0x2f16d0 },
    { L"Effect 7", 0x2f16d0, 0x2f16f0 },
    { L"Effect 8", 0x2f16f0, 0x2f1710 },
    { L"Effect 9", 0x2f1710, 0x2f1730 },
    { L"Effect 10", 0x2f1730, 0x2f1750 },
    { L"Zap Effect 1", 0x2f1750, 0x2f1770, indexKOFSprites_98Chris },
    { L"Zap Effect 2", 0x2f1770, 0x2f1790, indexKOFSprites_98Chris },
    { L"Super Trail 1", 0x2f1790, 0x2f17b0, indexKOFSprites_98Chris },
    { L"Super Trail 2", 0x2f17b0, 0x2f17d0, indexKOFSprites_98Chris },
    { L"Super Trail 3", 0x2f17d0, 0x2f17f0, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF98_A_YAMAZAKI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f17f0, 0x2f1810 },
    { L"Effect 1", 0x2f1810, 0x2f1830 },
    { L"Effect 2", 0x2f1830, 0x2f1850 },
    { L"Effect 3", 0x2f1850, 0x2f1870 },
    { L"Zap Effect 1", 0x2f1950, 0x2f1970, indexKOFSprites_98Yamazaki },
    { L"Zap Effect 2", 0x2f1970, 0x2f1990, indexKOFSprites_98Yamazaki },
    { L"Super Trail 1", 0x2f1990, 0x2f19b0, indexKOFSprites_98Yamazaki },
    { L"Super Trail 2", 0x2f19b0, 0x2f19d0, indexKOFSprites_98Yamazaki },
    { L"Super Trail 3", 0x2f19d0, 0x2f19f0, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF98_A_BLUEMARY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f19f0, 0x2f1a10 },
    { L"Effect 1", 0x2f1a10, 0x2f1a30 },
    { L"Effect 2", 0x2f1a30, 0x2f1a50 },
    { L"Zap Effect 1", 0x2f1b50, 0x2f1b70, indexKOFSprites_98BlueMary },
    { L"Zap Effect 2", 0x2f1b70, 0x2f1b90, indexKOFSprites_98BlueMary },
    { L"Super Trail 1", 0x2f1b90, 0x2f1bb0, indexKOFSprites_98BlueMary },
    { L"Super Trail 2", 0x2f1bb0, 0x2f1bd0, indexKOFSprites_98BlueMary },
    { L"Super Trail 3", 0x2f1bd0, 0x2f1bf0, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF98_A_BILLY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f1bf0, 0x2f1c10 },
    { L"Effect 1", 0x2f1c10, 0x2f1c30 },
    { L"Effect 2", 0x2f1c30, 0x2f1c50 },
    { L"Effect 3", 0x2f1c50, 0x2f1c70 },
    { L"Effect 4", 0x2f1c70, 0x2f1c90 },
    { L"Effect 10", 0x2f1d30, 0x2f1d50 },
    { L"Zap Effect 1", 0x2f1d50, 0x2f1d70, indexKOFSprites_98Billy },
    { L"Zap Effect 2", 0x2f1d70, 0x2f1d90, indexKOFSprites_98Billy },
    { L"Super Trail 1", 0x2f1d90, 0x2f1db0, indexKOFSprites_98Billy },
    { L"Super Trail 2", 0x2f1db0, 0x2f1dd0, indexKOFSprites_98Billy },
    { L"Super Trail 3", 0x2f1dd0, 0x2f1df0, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF98_A_IORI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f1df0, 0x2f1e10 },
    { L"Effect 1", 0x2f1e10, 0x2f1e30 },
    { L"Effect 3", 0x2f1e50, 0x2f1e70 },
    { L"Effect 4", 0x2f1e70, 0x2f1e90 },
    { L"Zap Effect 1", 0x2f1f50, 0x2f1f70, indexKOFSprites_98Iori },
    { L"Zap Effect 2", 0x2f1f70, 0x2f1f90, indexKOFSprites_98Iori },
    { L"Super Trail 1", 0x2f1f90, 0x2f1fb0, indexKOFSprites_98Iori },
    { L"Super Trail 2", 0x2f1fb0, 0x2f1fd0, indexKOFSprites_98Iori },
    { L"Super Trail 3", 0x2f1fd0, 0x2f1ff0, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF98_A_MATURE_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f1ff0, 0x2f2010 },
    { L"Effect 1", 0x2f2010, 0x2f2030 },
    { L"Effect 2", 0x2f2030, 0x2f2050 },
    { L"Effect 3", 0x2f2050, 0x2f2070 },
    { L"Effect 4", 0x2f2070, 0x2f2090 },
    { L"Effect 5", 0x2f2090, 0x2f20b0 },
    { L"Zap Effect 1", 0x2f2150, 0x2f2170, indexKOFSprites_98Mature },
    { L"Zap Effect 2", 0x2f2170, 0x2f2190, indexKOFSprites_98Mature },
    { L"Super Trail 1", 0x2f2190, 0x2f21b0, indexKOFSprites_98Mature },
    { L"Super Trail 2", 0x2f21b0, 0x2f21d0, indexKOFSprites_98Mature },
    { L"Super Trail 3", 0x2f21d0, 0x2f21f0, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF98_A_VICE_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f21f0, 0x2f2210 },
    { L"Effect 1", 0x2f2210, 0x2f2230 },
    { L"Effect 2", 0x2f2230, 0x2f2250 },
    { L"Effect 3", 0x2f2250, 0x2f2270 },
    { L"Effect 10", 0x2f2330, 0x2f2350 },
    { L"Zap Effect 1", 0x2f2350, 0x2f2370, indexKOFSprites_98Vice },
    { L"Zap Effect 2", 0x2f2370, 0x2f2390, indexKOFSprites_98Vice },
    { L"Super Trail 1", 0x2f2390, 0x2f23b0, indexKOFSprites_98Vice },
    { L"Super Trail 2", 0x2f23b0, 0x2f23d0, indexKOFSprites_98Vice },
    { L"Super Trail 3", 0x2f23d0, 0x2f23f0, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF98_A_HEIDERN_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f23f0, 0x2f2410 },
    { L"Effect 1", 0x2f2410, 0x2f2430 },
    { L"Effect 2", 0x2f2430, 0x2f2450 },
    { L"Effect 3", 0x2f2450, 0x2f2470 },
    { L"Effect 4", 0x2f2470, 0x2f2490 },
    { L"Effect 5", 0x2f2490, 0x2f24b0 },
    { L"Effect 6", 0x2f24b0, 0x2f24d0 },
    { L"Effect 7", 0x2f24d0, 0x2f24f0 },
    { L"Effect 8", 0x2f24f0, 0x2f2510 },
    { L"Effect 9", 0x2f2510, 0x2f2530 },
    { L"Effect 10", 0x2f2530, 0x2f2550 },
    { L"Zap Effect 1", 0x2f2550, 0x2f2570, indexKOFSprites_98Heidern },
    { L"Zap Effect 2", 0x2f2570, 0x2f2590, indexKOFSprites_98Heidern },
    { L"Super Trail 1", 0x2f2590, 0x2f25b0, indexKOFSprites_98Heidern },
    { L"Super Trail 2", 0x2f25b0, 0x2f25d0, indexKOFSprites_98Heidern },
    { L"Super Trail 3", 0x2f25d0, 0x2f25f0, indexKOFSprites_98Heidern },
};

const sGame_PaletteDataset KOF98_A_TAKUMA_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f25f0, 0x2f2610 },
    { L"Effect 1", 0x2f2610, 0x2f2630 },
    { L"Effect 2", 0x2f2630, 0x2f2650 },
    { L"Effect 3", 0x2f2650, 0x2f2670 },
    { L"Effect 4", 0x2f2670, 0x2f2690 },
    { L"Effect 5", 0x2f2690, 0x2f26b0 },
    { L"Effect 6", 0x2f26b0, 0x2f26d0 },
    { L"Zap Effect 1", 0x2f2750, 0x2f2770, indexKOFSprites_98Takuma },
    { L"Zap Effect 2", 0x2f2770, 0x2f2790, indexKOFSprites_98Takuma },
    { L"Super Trail 1", 0x2f2790, 0x2f27b0, indexKOFSprites_98Takuma },
    { L"Super Trail 2", 0x2f27b0, 0x2f27d0, indexKOFSprites_98Takuma },
    { L"Super Trail 3", 0x2f27d0, 0x2f27f0, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF98_A_SAISYU_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f27f0, 0x2f2810 },
    { L"Effect 1", 0x2f2810, 0x2f2830 },
    { L"Effect 2", 0x2f2830, 0x2f2850 },
    { L"Effect 4", 0x2f2870, 0x2f2890 },
    { L"Effect 5", 0x2f2890, 0x2f28b0 },
    { L"Effect 6", 0x2f28b0, 0x2f28d0 },
    { L"Effect 7", 0x2f28d0, 0x2f28f0 },
    { L"Zap Effect 1", 0x2f2950, 0x2f2970, indexKOFSprites_98Saisyu },
    { L"Zap Effect 2", 0x2f2970, 0x2f2990, indexKOFSprites_98Saisyu },
    { L"Super Trail 1", 0x2f2990, 0x2f29b0, indexKOFSprites_98Saisyu },
    { L"Super Trail 2", 0x2f29b0, 0x2f29d0, indexKOFSprites_98Saisyu },
    { L"Super Trail 3", 0x2f29d0, 0x2f29f0, indexKOFSprites_98Saisyu },
};

const sGame_PaletteDataset KOF98_A_HEAVYD_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f29f0, 0x2f2a10 },
    { L"Effect 1", 0x2f2a10, 0x2f2a30 },
    { L"Effect 2", 0x2f2a30, 0x2f2a50 },
    { L"Effect 3", 0x2f2a50, 0x2f2a70 },
    { L"Effect 4", 0x2f2a70, 0x2f2a90 },
    { L"Effect 5", 0x2f2a90, 0x2f2ab0 },
    { L"Effect 6", 0x2f2ab0, 0x2f2ad0 },
    { L"Zap Effect 1", 0x2f2b50, 0x2f2b70, indexKOFSprites_98HeavyD },
    { L"Zap Effect 2", 0x2f2b70, 0x2f2b90, indexKOFSprites_98HeavyD },
    { L"Super Trail 1", 0x2f2b90, 0x2f2bb0, indexKOFSprites_98HeavyD },
    { L"Super Trail 2", 0x2f2bb0, 0x2f2bd0, indexKOFSprites_98HeavyD },
    { L"Super Trail 3", 0x2f2bd0, 0x2f2bf0, indexKOFSprites_98HeavyD },
};

const sGame_PaletteDataset KOF98_A_LUCKY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f2bf0, 0x2f2c10 },
    { L"Effect 1", 0x2f2c10, 0x2f2c30 },
    { L"Effect 2", 0x2f2c30, 0x2f2c50 },
    { L"Effect 3", 0x2f2c50, 0x2f2c70 },
    { L"Effect 4", 0x2f2c70, 0x2f2c90 },
    { L"Zap Effect 1", 0x2f2d50, 0x2f2d70, indexKOFSprites_98Lucky },
    { L"Zap Effect 2", 0x2f2d70, 0x2f2d90, indexKOFSprites_98Lucky },
    { L"Super Trail 1", 0x2f2d90, 0x2f2db0, indexKOFSprites_98Lucky },
    { L"Super Trail 2", 0x2f2db0, 0x2f2dd0, indexKOFSprites_98Lucky },
    { L"Super Trail 3", 0x2f2dd0, 0x2f2df0, indexKOFSprites_98Lucky },
};

const sGame_PaletteDataset KOF98_A_BRIAN_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f2df0, 0x2f2e10 },
    { L"Effect 1", 0x2f2e10, 0x2f2e30 },
    { L"Effect 2", 0x2f2e30, 0x2f2e50 },
    { L"Effect 3", 0x2f2e50, 0x2f2e70 },
    { L"Effect 4", 0x2f2e70, 0x2f2e90 },
    { L"Effect 5", 0x2f2e90, 0x2f2eb0 },
    { L"Zap Effect 1", 0x2f2f50, 0x2f2f70, indexKOFSprites_98Brian },
    { L"Zap Effect 2", 0x2f2f70, 0x2f2f90, indexKOFSprites_98Brian },
    { L"Super Trail 1", 0x2f2f90, 0x2f2fb0, indexKOFSprites_98Brian },
    { L"Super Trail 2", 0x2f2fb0, 0x2f2fd0, indexKOFSprites_98Brian },
    { L"Super Trail 3", 0x2f2fd0, 0x2f2ff0, indexKOFSprites_98Brian },
};

const sGame_PaletteDataset KOF98_A_RUGAL_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f2ff0, 0x2f3010 },
    { L"Effect 1", 0x2f3010, 0x2f3030 },
    { L"Effect 2", 0x2f3030, 0x2f3050 },
    { L"Effect 3", 0x2f3050, 0x2f3070 },
    { L"Effect 5", 0x2f3090, 0x2f30b0 },
    { L"Effect 7", 0x2f30d0, 0x2f30f0 },
    { L"Effect 9", 0x2f3110, 0x2f3130 },
    { L"Zap Effect 1", 0x2f3150, 0x2f3170, indexKOFSprites_98Rugal },
    { L"Zap Effect 2", 0x2f3170, 0x2f3190, indexKOFSprites_98Rugal },
    { L"Super Trail 1", 0x2f3190, 0x2f31b0, indexKOFSprites_98Rugal },
    { L"Super Trail 2", 0x2f31b0, 0x2f31d0, indexKOFSprites_98Rugal },
    { L"Super Trail 3", 0x2f31d0, 0x2f31f0, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF98_A_SHINGO_EFFECT_PALETTES[] =
{
    { L"Zap Effect 1", 0x2f3350, 0x2f3370, indexKOFSprites_98Shingo },
    { L"Zap Effect 2", 0x2f3370, 0x2f3390, indexKOFSprites_98Shingo },
    { L"Super Trail 1", 0x2f3390, 0x2f33b0, indexKOFSprites_98Shingo },
    { L"Super Trail 2", 0x2f33b0, 0x2f33d0, indexKOFSprites_98Shingo },
    { L"Super Trail 3", 0x2f33d0, 0x2f33f0, indexKOFSprites_98Shingo },
};

const sGame_PaletteDataset KOF98_A_OMEGARUGAL_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2f33f0, 0x2f3410 },
    { L"Effect 1", 0x2f3410, 0x2f3430 },
    { L"Effect 3", 0x2f3450, 0x2f3470 },
    { L"Effect 7", 0x2f34d0, 0x2f34f0 },
    { L"Effect 8", 0x2f34f0, 0x2f3510 },
    { L"Effect 10", 0x2f3530, 0x2f3550 },
    { L"Zap Effect 1", 0x2f3550, 0x2f3570, indexKOFSprites_98Rugal },
    { L"Zap Effect 2", 0x2f3570, 0x2f3590, indexKOFSprites_98Rugal },
    { L"Super Trail 1", 0x2f3590, 0x2f35b0, indexKOFSprites_98Rugal },
    { L"Super Trail 2", 0x2f35b0, 0x2f35d0, indexKOFSprites_98Rugal },
    { L"Super Trail 3", 0x2f35d0, 0x2f35f0, indexKOFSprites_98Rugal },
};

const sDescTreeNode KOF98_A_KYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_A, ARRAYSIZE(KOF98_A_KYO_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_B, ARRAYSIZE(KOF98_A_KYO_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_C, ARRAYSIZE(KOF98_A_KYO_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_D, ARRAYSIZE(KOF98_A_KYO_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_KYO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_BENIMARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_A, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_B, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_C, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_D, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_BENIMARU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_DAIMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_A, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_B, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_C, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_D, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_DAIMON_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_A, ARRAYSIZE(KOF98_A_TERRY_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_B, ARRAYSIZE(KOF98_A_TERRY_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_C, ARRAYSIZE(KOF98_A_TERRY_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_D, ARRAYSIZE(KOF98_A_TERRY_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_TERRY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Andy_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_A, ARRAYSIZE(KOF98_A_Andy_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_B, ARRAYSIZE(KOF98_A_Andy_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_C, ARRAYSIZE(KOF98_A_Andy_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_D, ARRAYSIZE(KOF98_A_Andy_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_ANDY_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_ANDY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Joe_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_A, ARRAYSIZE(KOF98_A_Joe_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_B, ARRAYSIZE(KOF98_A_Joe_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_C, ARRAYSIZE(KOF98_A_Joe_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_D, ARRAYSIZE(KOF98_A_Joe_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_JOE_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_JOE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Ryo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_A, ARRAYSIZE(KOF98_A_Ryo_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_B, ARRAYSIZE(KOF98_A_Ryo_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_C, ARRAYSIZE(KOF98_A_Ryo_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_D, ARRAYSIZE(KOF98_A_Ryo_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_RYO_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_RYO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Robert_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_A, ARRAYSIZE(KOF98_A_Robert_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_B, ARRAYSIZE(KOF98_A_Robert_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_C, ARRAYSIZE(KOF98_A_Robert_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_D, ARRAYSIZE(KOF98_A_Robert_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_ROBERT_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_ROBERT_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Yuri_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_A, ARRAYSIZE(KOF98_A_Yuri_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_B, ARRAYSIZE(KOF98_A_Yuri_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_C, ARRAYSIZE(KOF98_A_Yuri_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_D, ARRAYSIZE(KOF98_A_Yuri_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_YURI_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_YURI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Leona_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_A, ARRAYSIZE(KOF98_A_Leona_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_B, ARRAYSIZE(KOF98_A_Leona_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_C, ARRAYSIZE(KOF98_A_Leona_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_D, ARRAYSIZE(KOF98_A_Leona_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_LEONA_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_LEONA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Ralf_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_A, ARRAYSIZE(KOF98_A_Ralf_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_B, ARRAYSIZE(KOF98_A_Ralf_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_C, ARRAYSIZE(KOF98_A_Ralf_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_D, ARRAYSIZE(KOF98_A_Ralf_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_RALF_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_RALF_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Clark_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_A, ARRAYSIZE(KOF98_A_Clark_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_B, ARRAYSIZE(KOF98_A_Clark_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_C, ARRAYSIZE(KOF98_A_Clark_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_D, ARRAYSIZE(KOF98_A_Clark_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_CLARK_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CLARK_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Athena_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_A, ARRAYSIZE(KOF98_A_Athena_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_B, ARRAYSIZE(KOF98_A_Athena_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_C, ARRAYSIZE(KOF98_A_Athena_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_D, ARRAYSIZE(KOF98_A_Athena_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_ATHENA_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_ATHENA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Kensou_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_A, ARRAYSIZE(KOF98_A_Kensou_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_B, ARRAYSIZE(KOF98_A_Kensou_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_C, ARRAYSIZE(KOF98_A_Kensou_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_D, ARRAYSIZE(KOF98_A_Kensou_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_KENSOU_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_KENSOU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Chin_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_A, ARRAYSIZE(KOF98_A_Chin_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_B, ARRAYSIZE(KOF98_A_Chin_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_C, ARRAYSIZE(KOF98_A_Chin_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_D, ARRAYSIZE(KOF98_A_Chin_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_CHIN_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CHIN_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Chizuru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_A, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_B, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_C, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_D, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_CHIZURU_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CHIZURU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Mai_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_A, ARRAYSIZE(KOF98_A_Mai_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_B, ARRAYSIZE(KOF98_A_Mai_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_C, ARRAYSIZE(KOF98_A_Mai_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_D, ARRAYSIZE(KOF98_A_Mai_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_MAI_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_MAI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_King_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_A, ARRAYSIZE(KOF98_A_King_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_B, ARRAYSIZE(KOF98_A_King_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_C, ARRAYSIZE(KOF98_A_King_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_D, ARRAYSIZE(KOF98_A_King_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_KING_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_KING_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Kim_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_A, ARRAYSIZE(KOF98_A_Kim_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_B, ARRAYSIZE(KOF98_A_Kim_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_C, ARRAYSIZE(KOF98_A_Kim_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_D, ARRAYSIZE(KOF98_A_Kim_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_KIM_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_KIM_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Chang_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_A, ARRAYSIZE(KOF98_A_Chang_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_B, ARRAYSIZE(KOF98_A_Chang_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_C, ARRAYSIZE(KOF98_A_Chang_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_D, ARRAYSIZE(KOF98_A_Chang_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_CHANG_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CHANG_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Choi_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_A, ARRAYSIZE(KOF98_A_Choi_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_B, ARRAYSIZE(KOF98_A_Choi_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_C, ARRAYSIZE(KOF98_A_Choi_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_D, ARRAYSIZE(KOF98_A_Choi_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_CHOI_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CHOI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Yashiro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_A, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_B, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_C, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_D, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_YASHIRO_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_YASHIRO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Shermie_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_A, ARRAYSIZE(KOF98_A_Shermie_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_B, ARRAYSIZE(KOF98_A_Shermie_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_C, ARRAYSIZE(KOF98_A_Shermie_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_D, ARRAYSIZE(KOF98_A_Shermie_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_SHERMIE_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_SHERMIE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Chris_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_A, ARRAYSIZE(KOF98_A_Chris_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_B, ARRAYSIZE(KOF98_A_Chris_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_C, ARRAYSIZE(KOF98_A_Chris_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_D, ARRAYSIZE(KOF98_A_Chris_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_CHRIS_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CHRIS_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Yamazaki_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_A, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_B, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_C, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_D, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_YAMAZAKI_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_YAMAZAKI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Blue_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_A, ARRAYSIZE(KOF98_A_Blue_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_B, ARRAYSIZE(KOF98_A_Blue_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_C, ARRAYSIZE(KOF98_A_Blue_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_D, ARRAYSIZE(KOF98_A_Blue_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_BLUEMARY_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_BLUEMARY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Billy_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_A, ARRAYSIZE(KOF98_A_Billy_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_B, ARRAYSIZE(KOF98_A_Billy_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_C, ARRAYSIZE(KOF98_A_Billy_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_D, ARRAYSIZE(KOF98_A_Billy_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_BILLY_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_BILLY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Iori_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_A, ARRAYSIZE(KOF98_A_Iori_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_B, ARRAYSIZE(KOF98_A_Iori_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_C, ARRAYSIZE(KOF98_A_Iori_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_D, ARRAYSIZE(KOF98_A_Iori_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_IORI_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_IORI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Mature_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_A, ARRAYSIZE(KOF98_A_Mature_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_B, ARRAYSIZE(KOF98_A_Mature_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_C, ARRAYSIZE(KOF98_A_Mature_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_D, ARRAYSIZE(KOF98_A_Mature_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_MATURE_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_MATURE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Vice_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_A, ARRAYSIZE(KOF98_A_Vice_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_B, ARRAYSIZE(KOF98_A_Vice_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_C, ARRAYSIZE(KOF98_A_Vice_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_D, ARRAYSIZE(KOF98_A_Vice_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_VICE_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_VICE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Heidern_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_A, ARRAYSIZE(KOF98_A_Heidern_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_B, ARRAYSIZE(KOF98_A_Heidern_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_C, ARRAYSIZE(KOF98_A_Heidern_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_D, ARRAYSIZE(KOF98_A_Heidern_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_HEIDERN_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_HEIDERN_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Takuma_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_A, ARRAYSIZE(KOF98_A_Takuma_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_B, ARRAYSIZE(KOF98_A_Takuma_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_C, ARRAYSIZE(KOF98_A_Takuma_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_D, ARRAYSIZE(KOF98_A_Takuma_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_TAKUMA_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_TAKUMA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Saisyu_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_A, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_B, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_C, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_D, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_SAISYU_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_SAISYU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_HeavyD_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_HeavyD_PALETTE_A, ARRAYSIZE(KOF98_A_HeavyD_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_HeavyD_PALETTE_B, ARRAYSIZE(KOF98_A_HeavyD_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_HeavyD_PALETTE_C, ARRAYSIZE(KOF98_A_HeavyD_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_HeavyD_PALETTE_D, ARRAYSIZE(KOF98_A_HeavyD_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_HEAVYD_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_HEAVYD_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Lucky_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_A, ARRAYSIZE(KOF98_A_Lucky_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_B, ARRAYSIZE(KOF98_A_Lucky_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_C, ARRAYSIZE(KOF98_A_Lucky_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_D, ARRAYSIZE(KOF98_A_Lucky_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_LUCKY_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_LUCKY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Brian_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_A, ARRAYSIZE(KOF98_A_Brian_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_B, ARRAYSIZE(KOF98_A_Brian_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_C, ARRAYSIZE(KOF98_A_Brian_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_D, ARRAYSIZE(KOF98_A_Brian_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_BRIAN_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_BRIAN_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Rugal_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_A, ARRAYSIZE(KOF98_A_Rugal_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_B, ARRAYSIZE(KOF98_A_Rugal_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_C, ARRAYSIZE(KOF98_A_Rugal_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_D, ARRAYSIZE(KOF98_A_Rugal_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_RUGAL_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_RUGAL_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Shingo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_A, ARRAYSIZE(KOF98_A_Shingo_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_B, ARRAYSIZE(KOF98_A_Shingo_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_C, ARRAYSIZE(KOF98_A_Shingo_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_D, ARRAYSIZE(KOF98_A_Shingo_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_SHINGO_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_SHINGO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_OYashiro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_A, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_B, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_C, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_D, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_D) },
};

const sDescTreeNode KOF98_A_OShermie_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_A, ARRAYSIZE(KOF98_A_OShermie_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_B, ARRAYSIZE(KOF98_A_OShermie_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_C, ARRAYSIZE(KOF98_A_OShermie_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_D, ARRAYSIZE(KOF98_A_OShermie_PALETTE_D) },
};

const sDescTreeNode KOF98_A_OChris_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_A, ARRAYSIZE(KOF98_A_OChris_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_B, ARRAYSIZE(KOF98_A_OChris_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_C, ARRAYSIZE(KOF98_A_OChris_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_D, ARRAYSIZE(KOF98_A_OChris_PALETTE_D) },
};

const sDescTreeNode KOF98_A_OmegaRugal_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98_A_OmegaRugal_PALETTE_A, ARRAYSIZE(KOF98_A_OmegaRugal_PALETTE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98_A_OmegaRugal_PALETTE_B, ARRAYSIZE(KOF98_A_OmegaRugal_PALETTE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98_A_OmegaRugal_PALETTE_C, ARRAYSIZE(KOF98_A_OmegaRugal_PALETTE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98_A_OmegaRugal_PALETTE_D, ARRAYSIZE(KOF98_A_OmegaRugal_PALETTE_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF98_A_OMEGARUGAL_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_OMEGARUGAL_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_UNITS[] =
{
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_COLLECTION, ARRAYSIZE(KOF98_A_KYO_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF98_A_BENIMARU_COLLECTION) },
    { L"Daimon", DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_COLLECTION, ARRAYSIZE(KOF98_A_DAIMON_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_COLLECTION, ARRAYSIZE(KOF98_A_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_COLLECTION, ARRAYSIZE(KOF98_A_Andy_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_COLLECTION, ARRAYSIZE(KOF98_A_Joe_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_COLLECTION, ARRAYSIZE(KOF98_A_Ryo_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_COLLECTION, ARRAYSIZE(KOF98_A_Robert_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_COLLECTION, ARRAYSIZE(KOF98_A_Yuri_COLLECTION) },
    { L"Leona", DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_COLLECTION, ARRAYSIZE(KOF98_A_Leona_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_COLLECTION, ARRAYSIZE(KOF98_A_Ralf_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_COLLECTION, ARRAYSIZE(KOF98_A_Clark_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_COLLECTION, ARRAYSIZE(KOF98_A_Athena_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_COLLECTION, ARRAYSIZE(KOF98_A_Kensou_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_COLLECTION, ARRAYSIZE(KOF98_A_Chin_COLLECTION) },
    { L"Chizuru", DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_COLLECTION, ARRAYSIZE(KOF98_A_Chizuru_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_COLLECTION, ARRAYSIZE(KOF98_A_Mai_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF98_A_King_COLLECTION, ARRAYSIZE(KOF98_A_King_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_COLLECTION, ARRAYSIZE(KOF98_A_Kim_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_COLLECTION, ARRAYSIZE(KOF98_A_Chang_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_COLLECTION, ARRAYSIZE(KOF98_A_Choi_COLLECTION) },
    { L"Yashiro", DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_COLLECTION, ARRAYSIZE(KOF98_A_Yashiro_COLLECTION) },
    { L"Shermie", DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_COLLECTION, ARRAYSIZE(KOF98_A_Shermie_COLLECTION) },
    { L"Chris", DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_COLLECTION, ARRAYSIZE(KOF98_A_Chris_COLLECTION) },
    { L"Yamazaki", DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_COLLECTION, ARRAYSIZE(KOF98_A_Yamazaki_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_COLLECTION, ARRAYSIZE(KOF98_A_Blue_COLLECTION) },
    { L"Billy", DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_COLLECTION, ARRAYSIZE(KOF98_A_Billy_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_COLLECTION, ARRAYSIZE(KOF98_A_Iori_COLLECTION) },
    { L"Mature", DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_COLLECTION, ARRAYSIZE(KOF98_A_Mature_COLLECTION) },
    { L"Vice", DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_COLLECTION, ARRAYSIZE(KOF98_A_Vice_COLLECTION) },
    { L"Heidern", DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_COLLECTION, ARRAYSIZE(KOF98_A_Heidern_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_COLLECTION, ARRAYSIZE(KOF98_A_Takuma_COLLECTION) },
    { L"Saisyu", DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_COLLECTION, ARRAYSIZE(KOF98_A_Saisyu_COLLECTION) },
    { L"Heavy D!", DESC_NODETYPE_TREE, (void*)KOF98_A_HeavyD_COLLECTION, ARRAYSIZE(KOF98_A_HeavyD_COLLECTION) },
    { L"Lucky", DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_COLLECTION, ARRAYSIZE(KOF98_A_Lucky_COLLECTION) },
    { L"Brian", DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_COLLECTION, ARRAYSIZE(KOF98_A_Brian_COLLECTION) },
    { L"Rugal", DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_COLLECTION, ARRAYSIZE(KOF98_A_Rugal_COLLECTION) },
    { L"Shingo", DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_COLLECTION, ARRAYSIZE(KOF98_A_Shingo_COLLECTION) },
    { L"O.Yashiro", DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_COLLECTION, ARRAYSIZE(KOF98_A_OYashiro_COLLECTION) },
    { L"O.Shermie", DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_COLLECTION, ARRAYSIZE(KOF98_A_OShermie_COLLECTION) },
    { L"O.Chris", DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_COLLECTION, ARRAYSIZE(KOF98_A_OChris_COLLECTION) },
    { L"Omega Rugal", DESC_NODETYPE_TREE, (void*)KOF98_A_OmegaRugal_COLLECTION, ARRAYSIZE(KOF98_A_OmegaRugal_COLLECTION) },
};

constexpr auto KOF98_A_NUMUNIT = ARRAYSIZE(KOF98_A_UNITS);

#define KOF98_A_EXTRALOC KOF98_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF98_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
