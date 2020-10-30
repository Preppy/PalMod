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
    { _T("Kyo A - Main"),  0x2d97f0, 0x2d9810, indexKOF98_A_Kyo },
    { _T("Kyo A - Extra 1"),  0x2d9810, 0x2d9830, indexKOF98_A_Kyo },
    { _T("Kyo A - Extra 2"),  0x2d9830, 0x2d9850, indexKOF98_A_Kyo },
    { _T("Kyo A - Max Mode"),  0x2d9850, 0x2d9870, indexKOF98_A_Kyo },
    { _T("Kyo A - Extra 3"),  0x2d9870, 0x2d9890, indexKOF98_A_Kyo },
    { _T("Kyo A - Extra 4"),  0x2d9890, 0x2d98b0, indexKOF98_A_Kyo },
    { _T("Kyo A - Order Select"),  0x2d98b0, 0x2d98d0, indexKOFSprites_98OrderSelect, 0x2b },
    { _T("Kyo A - Life Bar Portrait"),  0x2d98d0, 0x2d98f0, indexKOFSprites_98Lifebar, indexKOF98_A_Kyo },
    { _T("Kyo A - Win Screen Portrait/sprite"),  0x2d98f0, 0x2d99f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kyo },
};

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_B[] =
{
    { _T("Kyo B - Main"),  0x2d99f0, 0x2d9a10, indexKOF98_A_Kyo },
    { _T("Kyo B - Extra 1"),  0x2d9a10, 0x2d9a30, indexKOF98_A_Kyo },
    { _T("Kyo B - Extra 2"),  0x2d9a30, 0x2d9a50, indexKOF98_A_Kyo },
    { _T("Kyo B - Max Mode"),  0x2d9a50, 0x2d9a70, indexKOF98_A_Kyo },
    { _T("Kyo B - Extra 3"),  0x2d9a70, 0x2d9a90, indexKOF98_A_Kyo },
    { _T("Kyo B - Extra 4"),  0x2d9a90, 0x2d9ab0, indexKOF98_A_Kyo },
    { _T("Kyo B - Order Select"),  0x2d9ab0, 0x2d9ad0, indexKOFSprites_98OrderSelect, 0x2b },
    { _T("Kyo B - Life Bar Portrait"),  0x2d9ad0, 0x2d9af0, indexKOFSprites_98Lifebar, indexKOF98_A_Kyo },
    { _T("Kyo B - Win Screen Portrait/sprite"),  0x2d9af0, 0x2d9bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kyo },
};

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_C[] =
{
    { _T("Kyo C - Main"),  0x2d9bf0, 0x2d9c10, indexKOF98_A_Kyo },
    { _T("Kyo C - Extra 1"),  0x2d9c10, 0x2d9c30, indexKOF98_A_Kyo },
    { _T("Kyo C - Extra 2"),  0x2d9c30, 0x2d9c50, indexKOF98_A_Kyo },
    { _T("Kyo C - Max Mode"),  0x2d9c50, 0x2d9c70, indexKOF98_A_Kyo },
    { _T("Kyo C - Extra 3"),  0x2d9c70, 0x2d9c90, indexKOF98_A_Kyo },
    { _T("Kyo C - Extra 4"),  0x2d9c90, 0x2d9cb0, indexKOF98_A_Kyo },
    { _T("Kyo C - Order Select"),  0x2d9cb0, 0x2d9cd0, indexKOFSprites_98OrderSelect, 0x2b },
    { _T("Kyo C - Life Bar Portrait"),  0x2d9cd0, 0x2d9cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Kyo },
    { _T("Kyo C - Win Screen Portrait/sprite"),  0x2d9cf0, 0x2d9df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kyo },
};

const sGame_PaletteDataset KOF98_A_KYO_PALETTE_D[] =
{
    { _T("Kyo D - Main"),  0x2d9df0, 0x2d9e10, indexKOF98_A_Kyo },
    { _T("Kyo D - Extra 1"),  0x2d9e10, 0x2d9e30, indexKOF98_A_Kyo },
    { _T("Kyo D - Extra 2"),  0x2d9e30, 0x2d9e50, indexKOF98_A_Kyo },
    { _T("Kyo D - Max Mode"),  0x2d9e50, 0x2d9e70, indexKOF98_A_Kyo },
    { _T("Kyo D - Extra 3"),  0x2d9e70, 0x2d9e90, indexKOF98_A_Kyo },
    { _T("Kyo D - Extra 4"),  0x2d9e90, 0x2d9eb0, indexKOF98_A_Kyo },
    { _T("Kyo D - Order Select"),  0x2d9eb0, 0x2d9ed0, indexKOFSprites_98OrderSelect, 0x2b },
    { _T("Kyo D - Life Bar Portrait"),  0x2d9ed0, 0x2d9ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Kyo },
    { _T("Kyo D - Win Screen Portrait/sprite"),  0x2d9ef0, 0x2d9ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kyo },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_A[] =
{
    { _T("Benimaru A - Main"),  0x2d9ff0, 0x2da010, indexKOF98_A_Benimaru },
    { _T("Benimaru A - Extra 1"),  0x2da010, 0x2da030, indexKOF98_A_Benimaru },
    { _T("Benimaru A - Extra 2"),  0x2da030, 0x2da050, indexKOF98_A_Benimaru },
    { _T("Benimaru A - Max Mode"),  0x2da050, 0x2da070, indexKOF98_A_Benimaru },
    { _T("Benimaru A - Extra 3"),  0x2da070, 0x2da090, indexKOF98_A_Benimaru },
    { _T("Benimaru A - Extra 4"),  0x2da090, 0x2da0b0, indexKOF98_A_Benimaru },
    { _T("Benimaru A - Order Select"),  0x2da0b0, 0x2da0d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Benimaru },
    { _T("Benimaru A - Life Bar Portrait"),  0x2da0d0, 0x2da0f0, indexKOFSprites_98Lifebar, indexKOF98_A_Benimaru },
    { _T("Benimaru A - Win Screen Portrait/sprite"),  0x2da0f0, 0x2da1f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Benimaru },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_B[] =
{
    { _T("Benimaru B - Main"),  0x2da1f0, 0x2da210, indexKOF98_A_Benimaru },
    { _T("Benimaru B - Extra 1"),  0x2da210, 0x2da230, indexKOF98_A_Benimaru },
    { _T("Benimaru B - Extra 2"),  0x2da230, 0x2da250, indexKOF98_A_Benimaru },
    { _T("Benimaru B - Max Mode"),  0x2da250, 0x2da270, indexKOF98_A_Benimaru },
    { _T("Benimaru B - Extra 3"),  0x2da270, 0x2da290, indexKOF98_A_Benimaru },
    { _T("Benimaru B - Extra 4"),  0x2da290, 0x2da2b0, indexKOF98_A_Benimaru },
    { _T("Benimaru B - Order Select"),  0x2da2b0, 0x2da2d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Benimaru },
    { _T("Benimaru B - Life Bar Portrait"),  0x2da2d0, 0x2da2f0, indexKOFSprites_98Lifebar, indexKOF98_A_Benimaru },
    { _T("Benimaru B - Win Screen Portrait/sprite"),  0x2da2f0, 0x2da3f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Benimaru },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_C[] =
{
    { _T("Benimaru C - Main"),  0x2da3f0, 0x2da410, indexKOF98_A_Benimaru },
    { _T("Benimaru C - Extra 1"),  0x2da410, 0x2da430, indexKOF98_A_Benimaru },
    { _T("Benimaru C - Extra 2"),  0x2da430, 0x2da450, indexKOF98_A_Benimaru },
    { _T("Benimaru C - Max Mode"),  0x2da450, 0x2da470, indexKOF98_A_Benimaru },
    { _T("Benimaru C - Extra 3"),  0x2da470, 0x2da490, indexKOF98_A_Benimaru },
    { _T("Benimaru C - Extra 4"),  0x2da490, 0x2da4b0, indexKOF98_A_Benimaru },
    { _T("Benimaru C - Order Select"),  0x2da4b0, 0x2da4d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Benimaru },
    { _T("Benimaru C - Life Bar Portrait"),  0x2da4d0, 0x2da4f0, indexKOFSprites_98Lifebar, indexKOF98_A_Benimaru },
    { _T("Benimaru C - Win Screen Portrait/sprite"),  0x2da4f0, 0x2da5f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Benimaru },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_PALETTE_D[] =
{
    { _T("Benimaru D - Main"),  0x2da5f0, 0x2da610, indexKOF98_A_Benimaru },
    { _T("Benimaru D - Extra 1"),  0x2da610, 0x2da630, indexKOF98_A_Benimaru },
    { _T("Benimaru D - Extra 2"),  0x2da630, 0x2da650, indexKOF98_A_Benimaru },
    { _T("Benimaru D - Max Mode"),  0x2da650, 0x2da670, indexKOF98_A_Benimaru },
    { _T("Benimaru D - Extra 3"),  0x2da670, 0x2da690, indexKOF98_A_Benimaru },
    { _T("Benimaru D - Extra 4"),  0x2da690, 0x2da6b0, indexKOF98_A_Benimaru },
    { _T("Benimaru D - Order Select"),  0x2da6b0, 0x2da6d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Benimaru },
    { _T("Benimaru D - Life Bar Portrait"),  0x2da6d0, 0x2da6f0, indexKOFSprites_98Lifebar, indexKOF98_A_Benimaru },
    { _T("Benimaru D - Win Screen Portrait/sprite"),  0x2da6f0, 0x2da7f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Benimaru },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_A[] =
{
    { _T("Daimon A - Main"),  0x2da7f0, 0x2da810, indexKOF98_A_Daimon },
    { _T("Daimon A - Extra 1"),  0x2da810, 0x2da830, indexKOF98_A_Daimon },
    { _T("Daimon A - Extra 2"),  0x2da830, 0x2da850, indexKOF98_A_Daimon },
    { _T("Daimon A - Max Mode"),  0x2da850, 0x2da870, indexKOF98_A_Daimon },
    { _T("Daimon A - Extra 3"),  0x2da870, 0x2da890, indexKOF98_A_Daimon },
    { _T("Daimon A - Extra 4"),  0x2da890, 0x2da8b0, indexKOF98_A_Daimon },
    { _T("Daimon A - Order Select"),  0x2da8b0, 0x2da8d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Daimon },
    { _T("Daimon A - Life Bar Portrait"),  0x2da8d0, 0x2da8f0, indexKOFSprites_98Lifebar, indexKOF98_A_Daimon },
    { _T("Daimon A - Win Screen Portrait/sprite"),  0x2da8f0, 0x2da9f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Daimon },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_B[] =
{
    { _T("Daimon B - Main"),  0x2da9f0, 0x2daa10, indexKOF98_A_Daimon },
    { _T("Daimon B - Extra 1"),  0x2daa10, 0x2daa30, indexKOF98_A_Daimon },
    { _T("Daimon B - Extra 2"),  0x2daa30, 0x2daa50, indexKOF98_A_Daimon },
    { _T("Daimon B - Max Mode"),  0x2daa50, 0x2daa70, indexKOF98_A_Daimon },
    { _T("Daimon B - Extra 3"),  0x2daa70, 0x2daa90, indexKOF98_A_Daimon },
    { _T("Daimon B - Extra 4"),  0x2daa90, 0x2daab0, indexKOF98_A_Daimon },
    { _T("Daimon B - Order Select"),  0x2daab0, 0x2daad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Daimon },
    { _T("Daimon B - Life Bar Portrait"),  0x2daad0, 0x2daaf0, indexKOFSprites_98Lifebar, indexKOF98_A_Daimon },
    { _T("Daimon B - Win Screen Portrait/sprite"),  0x2daaf0, 0x2dabf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Daimon },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_C[] =
{
    { _T("Daimon C - Main"),  0x2dabf0, 0x2dac10, indexKOF98_A_Daimon },
    { _T("Daimon C - Extra 1"),  0x2dac10, 0x2dac30, indexKOF98_A_Daimon },
    { _T("Daimon C - Extra 2"),  0x2dac30, 0x2dac50, indexKOF98_A_Daimon },
    { _T("Daimon C - Max Mode"),  0x2dac50, 0x2dac70, indexKOF98_A_Daimon },
    { _T("Daimon C - Extra 3"),  0x2dac70, 0x2dac90, indexKOF98_A_Daimon },
    { _T("Daimon C - Extra 4"),  0x2dac90, 0x2dacb0, indexKOF98_A_Daimon },
    { _T("Daimon C - Order Select"),  0x2dacb0, 0x2dacd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Daimon },
    { _T("Daimon C - Life Bar Portrait"),  0x2dacd0, 0x2dacf0, indexKOFSprites_98Lifebar, indexKOF98_A_Daimon },
    { _T("Daimon C - Win Screen Portrait/sprite"),  0x2dacf0, 0x2dadf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Daimon },
};

const sGame_PaletteDataset KOF98_A_DAIMON_PALETTE_D[] =
{
    { _T("Daimon D - Main"),  0x2dadf0, 0x2dae10, indexKOF98_A_Daimon },
    { _T("Daimon D - Extra 1"),  0x2dae10, 0x2dae30, indexKOF98_A_Daimon },
    { _T("Daimon D - Extra 2"),  0x2dae30, 0x2dae50, indexKOF98_A_Daimon },
    { _T("Daimon D - Max Mode"),  0x2dae50, 0x2dae70, indexKOF98_A_Daimon },
    { _T("Daimon D - Extra 3"),  0x2dae70, 0x2dae90, indexKOF98_A_Daimon },
    { _T("Daimon D - Extra 4"),  0x2dae90, 0x2daeb0, indexKOF98_A_Daimon },
    { _T("Daimon D - Order Select"),  0x2daeb0, 0x2daed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Daimon },
    { _T("Daimon D - Life Bar Portrait"),  0x2daed0, 0x2daef0, indexKOFSprites_98Lifebar, indexKOF98_A_Daimon },
    { _T("Daimon D - Win Screen Portrait/sprite"),  0x2daef0, 0x2daff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Daimon },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_A[] =
{
    { _T("Terry A - Main"),  0x2daff0, 0x2db010, indexKOF98_A_Terry },
    { _T("Terry A - Extra 1"),  0x2db010, 0x2db030, indexKOF98_A_Terry },
    { _T("Terry A - Extra 2"),  0x2db030, 0x2db050, indexKOF98_A_Terry },
    { _T("Terry A - Max Mode"),  0x2db050, 0x2db070, indexKOF98_A_Terry },
    { _T("Terry A - Extra 3"),  0x2db070, 0x2db090, indexKOF98_A_Terry },
    { _T("Terry A - Extra 4"),  0x2db090, 0x2db0b0, indexKOF98_A_Terry },
    { _T("Terry A - Order Select"),  0x2db0b0, 0x2db0d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Terry },
    { _T("Terry A - Life Bar Portrait"),  0x2db0d0, 0x2db0f0, indexKOFSprites_98Lifebar, indexKOF98_A_Terry },
    { _T("Terry A - Win Screen Portrait/sprite"),  0x2db0f0, 0x2db1f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Terry },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_B[] =
{
    { _T("Terry B - Main"),  0x2db1f0, 0x2db210, indexKOF98_A_Terry },
    { _T("Terry B - Extra 1"),  0x2db210, 0x2db230, indexKOF98_A_Terry },
    { _T("Terry B - Extra 2"),  0x2db230, 0x2db250, indexKOF98_A_Terry },
    { _T("Terry B - Max Mode"),  0x2db250, 0x2db270, indexKOF98_A_Terry },
    { _T("Terry B - Extra 3"),  0x2db270, 0x2db290, indexKOF98_A_Terry },
    { _T("Terry B - Extra 4"),  0x2db290, 0x2db2b0, indexKOF98_A_Terry },
    { _T("Terry B - Order Select"),  0x2db2b0, 0x2db2d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Terry },
    { _T("Terry B - Life Bar Portrait"),  0x2db2d0, 0x2db2f0, indexKOFSprites_98Lifebar, indexKOF98_A_Terry },
    { _T("Terry B - Win Screen Portrait/sprite"),  0x2db2f0, 0x2db3f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Terry },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_C[] =
{
    { _T("Terry C - Main"),  0x2db3f0, 0x2db410, indexKOF98_A_Terry },
    { _T("Terry C - Extra 1"),  0x2db410, 0x2db430, indexKOF98_A_Terry },
    { _T("Terry C - Extra 2"),  0x2db430, 0x2db450, indexKOF98_A_Terry },
    { _T("Terry C - Max Mode"),  0x2db450, 0x2db470, indexKOF98_A_Terry },
    { _T("Terry C - Extra 3"),  0x2db470, 0x2db490, indexKOF98_A_Terry },
    { _T("Terry C - Extra 4"),  0x2db490, 0x2db4b0, indexKOF98_A_Terry },
    { _T("Terry C - Order Select"),  0x2db4b0, 0x2db4d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Terry },
    { _T("Terry C - Life Bar Portrait"),  0x2db4d0, 0x2db4f0, indexKOFSprites_98Lifebar, indexKOF98_A_Terry },
    { _T("Terry C - Win Screen Portrait/sprite"),  0x2db4f0, 0x2db5f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Terry },
};

const sGame_PaletteDataset KOF98_A_TERRY_PALETTE_D[] =
{
    { _T("Terry D - Main"),  0x2db5f0, 0x2db610, indexKOF98_A_Terry },
    { _T("Terry D - Extra 1"),  0x2db610, 0x2db630, indexKOF98_A_Terry },
    { _T("Terry D - Extra 2"),  0x2db630, 0x2db650, indexKOF98_A_Terry },
    { _T("Terry D - Max Mode"),  0x2db650, 0x2db670, indexKOF98_A_Terry },
    { _T("Terry D - Extra 3"),  0x2db670, 0x2db690, indexKOF98_A_Terry },
    { _T("Terry D - Extra 4"),  0x2db690, 0x2db6b0, indexKOF98_A_Terry },
    { _T("Terry D - Order Select"),  0x2db6b0, 0x2db6d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Terry },
    { _T("Terry D - Life Bar Portrait"),  0x2db6d0, 0x2db6f0, indexKOFSprites_98Lifebar, indexKOF98_A_Terry },
    { _T("Terry D - Win Screen Portrait/sprite"),  0x2db6f0, 0x2db7f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Terry },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_A[] =
{
    { _T("Andy A - Main"),  0x2db7f0, 0x2db810, indexKOF98_A_Andy },
    { _T("Andy A - Extra 1"),  0x2db810, 0x2db830, indexKOF98_A_Andy },
    { _T("Andy A - Extra 2"),  0x2db830, 0x2db850, indexKOF98_A_Andy },
    { _T("Andy A - Max Mode"),  0x2db850, 0x2db870, indexKOF98_A_Andy },
    { _T("Andy A - Extra 3"),  0x2db870, 0x2db890, indexKOF98_A_Andy },
    { _T("Andy A - Extra 4"),  0x2db890, 0x2db8b0, indexKOF98_A_Andy },
    { _T("Andy A - Order Select"),  0x2db8b0, 0x2db8d0, indexKOFSprites_98OrderSelect, 0x48 },
    { _T("Andy A - Life Bar Portrait"),  0x2db8d0, 0x2db8f0, indexKOFSprites_98Lifebar, indexKOF98_A_Andy },
    { _T("Andy A - Win Screen Portrait/sprite"),  0x2db8f0, 0x2db9f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Andy },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_B[] =
{
    { _T("Andy B - Main"),  0x2db9f0, 0x2dba10, indexKOF98_A_Andy },
    { _T("Andy B - Extra 1"),  0x2dba10, 0x2dba30, indexKOF98_A_Andy },
    { _T("Andy B - Extra 2"),  0x2dba30, 0x2dba50, indexKOF98_A_Andy },
    { _T("Andy B - Max Mode"),  0x2dba50, 0x2dba70, indexKOF98_A_Andy },
    { _T("Andy B - Extra 3"),  0x2dba70, 0x2dba90, indexKOF98_A_Andy },
    { _T("Andy B - Extra 4"),  0x2dba90, 0x2dbab0, indexKOF98_A_Andy },
    { _T("Andy B - Order Select"),  0x2dbab0, 0x2dbad0, indexKOFSprites_98OrderSelect, 0x48 },
    { _T("Andy B - Life Bar Portrait"),  0x2dbad0, 0x2dbaf0, indexKOFSprites_98Lifebar, indexKOF98_A_Andy },
    { _T("Andy B - Win Screen Portrait/sprite"),  0x2dbaf0, 0x2dbbf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Andy },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_C[] =
{
    { _T("Andy C - Main"),  0x2dbbf0, 0x2dbc10, indexKOF98_A_Andy },
    { _T("Andy C - Extra 1"),  0x2dbc10, 0x2dbc30, indexKOF98_A_Andy },
    { _T("Andy C - Extra 2"),  0x2dbc30, 0x2dbc50, indexKOF98_A_Andy },
    { _T("Andy C - Max Mode"),  0x2dbc50, 0x2dbc70, indexKOF98_A_Andy },
    { _T("Andy C - Extra 3"),  0x2dbc70, 0x2dbc90, indexKOF98_A_Andy },
    { _T("Andy C - Extra 4"),  0x2dbc90, 0x2dbcb0, indexKOF98_A_Andy },
    { _T("Andy C - Order Select"),  0x2dbcb0, 0x2dbcd0, indexKOFSprites_98OrderSelect, 0x48 },
    { _T("Andy C - Life Bar Portrait"),  0x2dbcd0, 0x2dbcf0, indexKOFSprites_98Lifebar, indexKOF98_A_Andy },
    { _T("Andy C - Win Screen Portrait/sprite"),  0x2dbcf0, 0x2dbdf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Andy },
};

const sGame_PaletteDataset KOF98_A_Andy_PALETTE_D[] =
{
    { _T("Andy D - Main"),  0x2dbdf0, 0x2dbe10, indexKOF98_A_Andy },
    { _T("Andy D - Extra 1"),  0x2dbe10, 0x2dbe30, indexKOF98_A_Andy },
    { _T("Andy D - Extra 2"),  0x2dbe30, 0x2dbe50, indexKOF98_A_Andy },
    { _T("Andy D - Max Mode"),  0x2dbe50, 0x2dbe70, indexKOF98_A_Andy },
    { _T("Andy D - Extra 3"),  0x2dbe70, 0x2dbe90, indexKOF98_A_Andy },
    { _T("Andy D - Extra 4"),  0x2dbe90, 0x2dbeb0, indexKOF98_A_Andy },
    { _T("Andy D - Order Select"),  0x2dbeb0, 0x2dbed0, indexKOFSprites_98OrderSelect, 0x48 },
    { _T("Andy D - Life Bar Portrait"),  0x2dbed0, 0x2dbef0, indexKOFSprites_98Lifebar, indexKOF98_A_Andy },
    { _T("Andy D - Win Screen Portrait/sprite"),  0x2dbef0, 0x2dbff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Andy },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_A[] =
{
    { _T("Joe A - Main"),  0x2dbff0, 0x2dc010, indexKOF98_A_Joe },
    { _T("Joe A - Extra 1"),  0x2dc010, 0x2dc030, indexKOF98_A_Joe },
    { _T("Joe A - Extra 2"),  0x2dc030, 0x2dc050, indexKOF98_A_Joe },
    { _T("Joe A - Max Mode"),  0x2dc050, 0x2dc070, indexKOF98_A_Joe },
    { _T("Joe A - Extra 3"),  0x2dc070, 0x2dc090, indexKOF98_A_Joe },
    { _T("Joe A - Extra 4"),  0x2dc090, 0x2dc0b0, indexKOF98_A_Joe },
    { _T("Joe A - Order Select"),  0x2dc0b0, 0x2dc0d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Joe },
    { _T("Joe A - Life Bar Portrait"),  0x2dc0d0, 0x2dc0f0, indexKOFSprites_98Lifebar, indexKOF98_A_Joe },
    { _T("Joe A - Win Screen Portrait/sprite"),  0x2dc0f0, 0x2dc1f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Joe },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_B[] =
{
    { _T("Joe B - Main"),  0x2dc1f0, 0x2dc210, indexKOF98_A_Joe },
    { _T("Joe B - Extra 1"),  0x2dc210, 0x2dc230, indexKOF98_A_Joe },
    { _T("Joe B - Extra 2"),  0x2dc230, 0x2dc250, indexKOF98_A_Joe },
    { _T("Joe B - Max Mode"),  0x2dc250, 0x2dc270, indexKOF98_A_Joe },
    { _T("Joe B - Extra 3"),  0x2dc270, 0x2dc290, indexKOF98_A_Joe },
    { _T("Joe B - Extra 4"),  0x2dc290, 0x2dc2b0, indexKOF98_A_Joe },
    { _T("Joe B - Order Select"),  0x2dc2b0, 0x2dc2d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Joe },
    { _T("Joe B - Life Bar Portrait"),  0x2dc2d0, 0x2dc2f0, indexKOFSprites_98Lifebar, indexKOF98_A_Joe },
    { _T("Joe B - Win Screen Portrait/sprite"),  0x2dc2f0, 0x2dc3f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Joe },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_C[] =
{
    { _T("Joe C - Main"),  0x2dc3f0, 0x2dc410, indexKOF98_A_Joe },
    { _T("Joe C - Extra 1"),  0x2dc410, 0x2dc430, indexKOF98_A_Joe },
    { _T("Joe C - Extra 2"),  0x2dc430, 0x2dc450, indexKOF98_A_Joe },
    { _T("Joe C - Max Mode"),  0x2dc450, 0x2dc470, indexKOF98_A_Joe },
    { _T("Joe C - Extra 3"),  0x2dc470, 0x2dc490, indexKOF98_A_Joe },
    { _T("Joe C - Extra 4"),  0x2dc490, 0x2dc4b0, indexKOF98_A_Joe },
    { _T("Joe C - Order Select"),  0x2dc4b0, 0x2dc4d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Joe },
    { _T("Joe C - Life Bar Portrait"),  0x2dc4d0, 0x2dc4f0, indexKOFSprites_98Lifebar, indexKOF98_A_Joe },
    { _T("Joe C - Win Screen Portrait/sprite"),  0x2dc4f0, 0x2dc5f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Joe },
};

const sGame_PaletteDataset KOF98_A_Joe_PALETTE_D[] =
{
    { _T("Joe D - Main"),  0x2dc5f0, 0x2dc610, indexKOF98_A_Joe },
    { _T("Joe D - Extra 1"),  0x2dc610, 0x2dc630, indexKOF98_A_Joe },
    { _T("Joe D - Extra 2"),  0x2dc630, 0x2dc650, indexKOF98_A_Joe },
    { _T("Joe D - Max Mode"),  0x2dc650, 0x2dc670, indexKOF98_A_Joe },
    { _T("Joe D - Extra 3"),  0x2dc670, 0x2dc690, indexKOF98_A_Joe },
    { _T("Joe D - Extra 4"),  0x2dc690, 0x2dc6b0, indexKOF98_A_Joe },
    { _T("Joe D - Order Select"),  0x2dc6b0, 0x2dc6d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Joe },
    { _T("Joe D - Life Bar Portrait"),  0x2dc6d0, 0x2dc6f0, indexKOFSprites_98Lifebar, indexKOF98_A_Joe },
    { _T("Joe D - Win Screen Portrait/sprite"),  0x2dc6f0, 0x2dc7f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Joe },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_A[] =
{
    { _T("Ryo A - Main"),  0x2dc7f0, 0x2dc810, indexKOF98_A_Ryo },
    { _T("Ryo A - Extra 1"),  0x2dc810, 0x2dc830, indexKOF98_A_Ryo },
    { _T("Ryo A - Extra 2"),  0x2dc830, 0x2dc850, indexKOF98_A_Ryo },
    { _T("Ryo A - Max Mode"),  0x2dc850, 0x2dc870, indexKOF98_A_Ryo },
    { _T("Ryo A - Extra 3"),  0x2dc870, 0x2dc890, indexKOF98_A_Ryo },
    { _T("Ryo A - Extra 4"),  0x2dc890, 0x2dc8b0, indexKOF98_A_Ryo },
    { _T("Ryo A - Order Select"),  0x2dc8b0, 0x2dc8d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Ryo },
    { _T("Ryo A - Life Bar Portrait"),  0x2dc8d0, 0x2dc8f0, indexKOFSprites_98Lifebar, indexKOF98_A_Ryo },
    { _T("Ryo A - Win Screen Portrait/sprite"),  0x2dc8f0, 0x2dc9f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Ryo },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_B[] =
{
    { _T("Ryo B - Main"),  0x2dc9f0, 0x2dca10, indexKOF98_A_Ryo },
    { _T("Ryo B - Extra 1"),  0x2dca10, 0x2dca30, indexKOF98_A_Ryo },
    { _T("Ryo B - Extra 2"),  0x2dca30, 0x2dca50, indexKOF98_A_Ryo },
    { _T("Ryo B - Max Mode"),  0x2dca50, 0x2dca70, indexKOF98_A_Ryo },
    { _T("Ryo B - Extra 3"),  0x2dca70, 0x2dca90, indexKOF98_A_Ryo },
    { _T("Ryo B - Extra 4"),  0x2dca90, 0x2dcab0, indexKOF98_A_Ryo },
    { _T("Ryo B - Order Select"),  0x2dcab0, 0x2dcad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Ryo },
    { _T("Ryo B - Life Bar Portrait"),  0x2dcad0, 0x2dcaf0, indexKOFSprites_98Lifebar, indexKOF98_A_Ryo },
    { _T("Ryo B - Win Screen Portrait/sprite"),  0x2dcaf0, 0x2dcbf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Ryo },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_C[] =
{
    { _T("Ryo C - Main"),  0x2dcbf0, 0x2dcc10, indexKOF98_A_Ryo },
    { _T("Ryo C - Extra 1"),  0x2dcc10, 0x2dcc30, indexKOF98_A_Ryo },
    { _T("Ryo C - Extra 2"),  0x2dcc30, 0x2dcc50, indexKOF98_A_Ryo },
    { _T("Ryo C - Max Mode"),  0x2dcc50, 0x2dcc70, indexKOF98_A_Ryo },
    { _T("Ryo C - Extra 3"),  0x2dcc70, 0x2dcc90, indexKOF98_A_Ryo },
    { _T("Ryo C - Extra 4"),  0x2dcc90, 0x2dccb0, indexKOF98_A_Ryo },
    { _T("Ryo C - Order Select"),  0x2dccb0, 0x2dccd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Ryo },
    { _T("Ryo C - Life Bar Portrait"),  0x2dccd0, 0x2dccf0, indexKOFSprites_98Lifebar, indexKOF98_A_Ryo },
    { _T("Ryo C - Win Screen Portrait/sprite"),  0x2dccf0, 0x2dcdf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Ryo },
};

const sGame_PaletteDataset KOF98_A_Ryo_PALETTE_D[] =
{
    { _T("Ryo D - Main"),  0x2dcdf0, 0x2dce10, indexKOF98_A_Ryo },
    { _T("Ryo D - Extra 1"),  0x2dce10, 0x2dce30, indexKOF98_A_Ryo },
    { _T("Ryo D - Extra 2"),  0x2dce30, 0x2dce50, indexKOF98_A_Ryo },
    { _T("Ryo D - Max Mode"),  0x2dce50, 0x2dce70, indexKOF98_A_Ryo },
    { _T("Ryo D - Extra 3"),  0x2dce70, 0x2dce90, indexKOF98_A_Ryo },
    { _T("Ryo D - Extra 4"),  0x2dce90, 0x2dceb0, indexKOF98_A_Ryo },
    { _T("Ryo D - Order Select"),  0x2dceb0, 0x2dced0, indexKOFSprites_98OrderSelect, indexKOF98_A_Ryo },
    { _T("Ryo D - Life Bar Portrait"),  0x2dced0, 0x2dcef0, indexKOFSprites_98Lifebar, indexKOF98_A_Ryo },
    { _T("Ryo D - Win Screen Portrait/sprite"),  0x2dcef0, 0x2dcff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Ryo },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_A[] =
{
    { _T("Robert A - Main"),  0x2dcff0, 0x2dd010, indexKOF98_A_Robert },
    { _T("Robert A - Extra 1"),  0x2dd010, 0x2dd030, indexKOF98_A_Robert },
    { _T("Robert A - Extra 2"),  0x2dd030, 0x2dd050, indexKOF98_A_Robert },
    { _T("Robert A - Max Mode"),  0x2dd050, 0x2dd070, indexKOF98_A_Robert },
    { _T("Robert A - Extra 3"),  0x2dd070, 0x2dd090, indexKOF98_A_Robert },
    { _T("Robert A - Extra 4"),  0x2dd090, 0x2dd0b0, indexKOF98_A_Robert },
    { _T("Robert A - Order Select"),  0x2dd0b0, 0x2dd0d0, indexKOFSprites_98OrderSelect, 0x4b },
    { _T("Robert A - Life Bar Portrait"),  0x2dd0d0, 0x2dd0f0, indexKOFSprites_98Lifebar, indexKOF98_A_Robert },
    { _T("Robert A - Win Screen Portrait/sprite"),  0x2dd0f0, 0x2dd1f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Robert },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_B[] =
{
    { _T("Robert B - Main"),  0x2dd1f0, 0x2dd210, indexKOF98_A_Robert },
    { _T("Robert B - Extra 1"),  0x2dd210, 0x2dd230, indexKOF98_A_Robert },
    { _T("Robert B - Extra 2"),  0x2dd230, 0x2dd250, indexKOF98_A_Robert },
    { _T("Robert B - Max Mode"),  0x2dd250, 0x2dd270, indexKOF98_A_Robert },
    { _T("Robert B - Extra 3"),  0x2dd270, 0x2dd290, indexKOF98_A_Robert },
    { _T("Robert B - Extra 4"),  0x2dd290, 0x2dd2b0, indexKOF98_A_Robert },
    { _T("Robert B - Order Select"),  0x2dd2b0, 0x2dd2d0, indexKOFSprites_98OrderSelect, 0x4b },
    { _T("Robert B - Life Bar Portrait"),  0x2dd2d0, 0x2dd2f0, indexKOFSprites_98Lifebar, indexKOF98_A_Robert },
    { _T("Robert B - Win Screen Portrait/sprite"),  0x2dd2f0, 0x2dd3f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Robert },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_C[] =
{
    { _T("Robert C - Main"),  0x2dd3f0, 0x2dd410, indexKOF98_A_Robert },
    { _T("Robert C - Extra 1"),  0x2dd410, 0x2dd430, indexKOF98_A_Robert },
    { _T("Robert C - Extra 2"),  0x2dd430, 0x2dd450, indexKOF98_A_Robert },
    { _T("Robert C - Max Mode"),  0x2dd450, 0x2dd470, indexKOF98_A_Robert },
    { _T("Robert C - Extra 3"),  0x2dd470, 0x2dd490, indexKOF98_A_Robert },
    { _T("Robert C - Extra 4"),  0x2dd490, 0x2dd4b0, indexKOF98_A_Robert },
    { _T("Robert C - Order Select"),  0x2dd4b0, 0x2dd4d0, indexKOFSprites_98OrderSelect, 0x4b },
    { _T("Robert C - Life Bar Portrait"),  0x2dd4d0, 0x2dd4f0, indexKOFSprites_98Lifebar, indexKOF98_A_Robert },
    { _T("Robert C - Win Screen Portrait/sprite"),  0x2dd4f0, 0x2dd5f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Robert },
};

const sGame_PaletteDataset KOF98_A_Robert_PALETTE_D[] =
{
    { _T("Robert D - Main"),  0x2dd5f0, 0x2dd610, indexKOF98_A_Robert },
    { _T("Robert D - Extra 1"),  0x2dd610, 0x2dd630, indexKOF98_A_Robert },
    { _T("Robert D - Extra 2"),  0x2dd630, 0x2dd650, indexKOF98_A_Robert },
    { _T("Robert D - Max Mode"),  0x2dd650, 0x2dd670, indexKOF98_A_Robert },
    { _T("Robert D - Extra 3"),  0x2dd670, 0x2dd690, indexKOF98_A_Robert },
    { _T("Robert D - Extra 4"),  0x2dd690, 0x2dd6b0, indexKOF98_A_Robert },
    { _T("Robert D - Order Select"),  0x2dd6b0, 0x2dd6d0, indexKOFSprites_98OrderSelect, 0x4b },
    { _T("Robert D - Life Bar Portrait"),  0x2dd6d0, 0x2dd6f0, indexKOFSprites_98Lifebar, indexKOF98_A_Robert },
    { _T("Robert D - Win Screen Portrait/sprite"),  0x2dd6f0, 0x2dd7f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Robert },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_A[] =
{
    { _T("Yuri A - Main"),  0x2dd7f0, 0x2dd810, indexKOF98_A_Yuri },
    { _T("Yuri A - Extra 1"),  0x2dd810, 0x2dd830, indexKOF98_A_Yuri },
    { _T("Yuri A - Extra 2"),  0x2dd830, 0x2dd850, indexKOF98_A_Yuri },
    { _T("Yuri A - Max Mode"),  0x2dd850, 0x2dd870, indexKOF98_A_Yuri },
    { _T("Yuri A - Extra 3"),  0x2dd870, 0x2dd890, indexKOF98_A_Yuri },
    { _T("Yuri A - Extra 4"),  0x2dd890, 0x2dd8b0, indexKOF98_A_Yuri },
    { _T("Yuri A - Order Select"),  0x2dd8b0, 0x2dd8d0, indexKOFSprites_98OrderSelect, 0x4c },
    { _T("Yuri A - Life Bar Portrait"),  0x2dd8d0, 0x2dd8f0, indexKOFSprites_98Lifebar, indexKOF98_A_Yuri },
    { _T("Yuri A - Win Screen Portrait/sprite"),  0x2dd8f0, 0x2dd9f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yuri },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_B[] =
{
    { _T("Yuri B - Main"),  0x2dd9f0, 0x2dda10, indexKOF98_A_Yuri },
    { _T("Yuri B - Extra 1"),  0x2dda10, 0x2dda30, indexKOF98_A_Yuri },
    { _T("Yuri B - Extra 2"),  0x2dda30, 0x2dda50, indexKOF98_A_Yuri },
    { _T("Yuri B - Max Mode"),  0x2dda50, 0x2dda70, indexKOF98_A_Yuri },
    { _T("Yuri B - Extra 3"),  0x2dda70, 0x2dda90, indexKOF98_A_Yuri },
    { _T("Yuri B - Extra 4"),  0x2dda90, 0x2ddab0, indexKOF98_A_Yuri },
    { _T("Yuri B - Order Select"),  0x2ddab0, 0x2ddad0, indexKOFSprites_98OrderSelect, 0x4c },
    { _T("Yuri B - Life Bar Portrait"),  0x2ddad0, 0x2ddaf0, indexKOFSprites_98Lifebar, indexKOF98_A_Yuri },
    { _T("Yuri B - Win Screen Portrait/sprite"),  0x2ddaf0, 0x2ddbf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yuri },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_C[] =
{
    { _T("Yuri C - Main"),  0x2ddbf0, 0x2ddc10, indexKOF98_A_Yuri },
    { _T("Yuri C - Extra 1"),  0x2ddc10, 0x2ddc30, indexKOF98_A_Yuri },
    { _T("Yuri C - Extra 2"),  0x2ddc30, 0x2ddc50, indexKOF98_A_Yuri },
    { _T("Yuri C - Max Mode"),  0x2ddc50, 0x2ddc70, indexKOF98_A_Yuri },
    { _T("Yuri C - Extra 3"),  0x2ddc70, 0x2ddc90, indexKOF98_A_Yuri },
    { _T("Yuri C - Extra 4"),  0x2ddc90, 0x2ddcb0, indexKOF98_A_Yuri },
    { _T("Yuri C - Order Select"),  0x2ddcb0, 0x2ddcd0, indexKOFSprites_98OrderSelect, 0x4c },
    { _T("Yuri C - Life Bar Portrait"),  0x2ddcd0, 0x2ddcf0, indexKOFSprites_98Lifebar, indexKOF98_A_Yuri },
    { _T("Yuri C - Win Screen Portrait/sprite"),  0x2ddcf0, 0x2dddf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yuri },
};

const sGame_PaletteDataset KOF98_A_Yuri_PALETTE_D[] =
{
    { _T("Yuri D - Main"),  0x2dddf0, 0x2dde10, indexKOF98_A_Yuri },
    { _T("Yuri D - Extra 1"),  0x2dde10, 0x2dde30, indexKOF98_A_Yuri },
    { _T("Yuri D - Extra 2"),  0x2dde30, 0x2dde50, indexKOF98_A_Yuri },
    { _T("Yuri D - Max Mode"),  0x2dde50, 0x2dde70, indexKOF98_A_Yuri },
    { _T("Yuri D - Extra 3"),  0x2dde70, 0x2dde90, indexKOF98_A_Yuri },
    { _T("Yuri D - Extra 4"),  0x2dde90, 0x2ddeb0, indexKOF98_A_Yuri },
    { _T("Yuri D - Order Select"),  0x2ddeb0, 0x2dded0, indexKOFSprites_98OrderSelect, 0x4c },
    { _T("Yuri D - Life Bar Portrait"),  0x2dded0, 0x2ddef0, indexKOFSprites_98Lifebar, indexKOF98_A_Yuri },
    { _T("Yuri D - Win Screen Portrait/sprite"),  0x2ddef0, 0x2ddff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yuri },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_A[] =
{
    { _T("Leona A - Main"),  0x2ddff0, 0x2de010, indexKOF98_A_Leona },
    { _T("Leona A - Extra 1"),  0x2de010, 0x2de030, indexKOF98_A_Leona },
    { _T("Leona A - Extra 2"),  0x2de030, 0x2de050, indexKOF98_A_Leona },
    { _T("Leona A - Max Mode"),  0x2de050, 0x2de070, indexKOF98_A_Leona },
    { _T("Leona A - Extra 3"),  0x2de070, 0x2de090, indexKOF98_A_Leona },
    { _T("Leona A - Extra 4"),  0x2de090, 0x2de0b0, indexKOF98_A_Leona },
    { _T("Leona A - Order Select"),  0x2de0b0, 0x2de0d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Leona },
    { _T("Leona A - Life Bar Portrait"),  0x2de0d0, 0x2de0f0, indexKOFSprites_98Lifebar, indexKOF98_A_Leona },
    { _T("Leona A - Win Screen Portrait/sprite"),  0x2de0f0, 0x2de1f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Leona },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_B[] =
{
    { _T("Leona B - Main"),  0x2de1f0, 0x2de210, indexKOF98_A_Leona },
    { _T("Leona B - Extra 1"),  0x2de210, 0x2de230, indexKOF98_A_Leona },
    { _T("Leona B - Extra 2"),  0x2de230, 0x2de250, indexKOF98_A_Leona },
    { _T("Leona B - Max Mode"),  0x2de250, 0x2de270, indexKOF98_A_Leona },
    { _T("Leona B - Extra 3"),  0x2de270, 0x2de290, indexKOF98_A_Leona },
    { _T("Leona B - Extra 4"),  0x2de290, 0x2de2b0, indexKOF98_A_Leona },
    { _T("Leona B - Order Select"),  0x2de2b0, 0x2de2d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Leona },
    { _T("Leona B - Life Bar Portrait"),  0x2de2d0, 0x2de2f0, indexKOFSprites_98Lifebar, indexKOF98_A_Leona },
    { _T("Leona B - Win Screen Portrait/sprite"),  0x2de2f0, 0x2de3f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Leona },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_C[] =
{
    { _T("Leona C - Main"),  0x2de3f0, 0x2de410, indexKOF98_A_Leona },
    { _T("Leona C - Extra 1"),  0x2de410, 0x2de430, indexKOF98_A_Leona },
    { _T("Leona C - Extra 2"),  0x2de430, 0x2de450, indexKOF98_A_Leona },
    { _T("Leona C - Max Mode"),  0x2de450, 0x2de470, indexKOF98_A_Leona },
    { _T("Leona C - Extra 3"),  0x2de470, 0x2de490, indexKOF98_A_Leona },
    { _T("Leona C - Extra 4"),  0x2de490, 0x2de4b0, indexKOF98_A_Leona },
    { _T("Leona C - Order Select"),  0x2de4b0, 0x2de4d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Leona },
    { _T("Leona C - Life Bar Portrait"),  0x2de4d0, 0x2de4f0, indexKOFSprites_98Lifebar, indexKOF98_A_Leona },
    { _T("Leona C - Win Screen Portrait/sprite"),  0x2de4f0, 0x2de5f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Leona },
};

const sGame_PaletteDataset KOF98_A_Leona_PALETTE_D[] =
{
    { _T("Leona D - Main"),  0x2de5f0, 0x2de610, indexKOF98_A_Leona },
    { _T("Leona D - Extra 1"),  0x2de610, 0x2de630, indexKOF98_A_Leona },
    { _T("Leona D - Extra 2"),  0x2de630, 0x2de650, indexKOF98_A_Leona },
    { _T("Leona D - Max Mode"),  0x2de650, 0x2de670, indexKOF98_A_Leona },
    { _T("Leona D - Extra 3"),  0x2de670, 0x2de690, indexKOF98_A_Leona },
    { _T("Leona D - Extra 4"),  0x2de690, 0x2de6b0, indexKOF98_A_Leona },
    { _T("Leona D - Order Select"),  0x2de6b0, 0x2de6d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Leona },
    { _T("Leona D - Life Bar Portrait"),  0x2de6d0, 0x2de6f0, indexKOFSprites_98Lifebar, indexKOF98_A_Leona },
    { _T("Leona D - Win Screen Portrait/sprite"),  0x2de6f0, 0x2de7f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Leona },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_A[] =
{
    { _T("Ralf A - Main"),  0x2de7f0, 0x2de810, indexKOF98_A_Ralf },
    { _T("Ralf A - Extra 1: Bandana"),  0x2de810, 0x2de830 },
    { _T("Ralf A - Extra 2"),  0x2de830, 0x2de850, indexKOF98_A_Ralf },
    { _T("Ralf A - Max Mode"),  0x2de850, 0x2de870, indexKOF98_A_Ralf },
    { _T("Ralf A - Extra 3"),  0x2de870, 0x2de890, indexKOF98_A_Ralf },
    { _T("Ralf A - Extra 4"),  0x2de890, 0x2de8b0, indexKOF98_A_Ralf },
    { _T("Ralf A - Order Select"),  0x2de8b0, 0x2de8d0, indexKOFSprites_98OrderSelect, 0x2e },
    { _T("Ralf A - Life Bar Portrait"),  0x2de8d0, 0x2de8f0, indexKOFSprites_98Lifebar, indexKOF98_A_Ralf },
    { _T("Ralf A - Win Screen Portrait/sprite"),  0x2de8f0, 0x2de9f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Ralf },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_B[] =
{
    { _T("Ralf B - Main"),  0x2de9f0, 0x2dea10, indexKOF98_A_Ralf },
    { _T("Ralf B - Extra 1: Bandana"),  0x2dea10, 0x2dea30 },
    { _T("Ralf B - Extra 2"),  0x2dea30, 0x2dea50, indexKOF98_A_Ralf },
    { _T("Ralf B - Max Mode"),  0x2dea50, 0x2dea70, indexKOF98_A_Ralf },
    { _T("Ralf B - Extra 3"),  0x2dea70, 0x2dea90, indexKOF98_A_Ralf },
    { _T("Ralf B - Extra 4"),  0x2dea90, 0x2deab0, indexKOF98_A_Ralf },
    { _T("Ralf B - Order Select"),  0x2deab0, 0x2dead0, indexKOFSprites_98OrderSelect, 0x2e },
    { _T("Ralf B - Life Bar Portrait"),  0x2dead0, 0x2deaf0, indexKOFSprites_98Lifebar, indexKOF98_A_Ralf },
    { _T("Ralf B - Win Screen Portrait/sprite"),  0x2deaf0, 0x2debf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Ralf },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_C[] =
{
    { _T("Ralf C - Main"),  0x2debf0, 0x2dec10, indexKOF98_A_Ralf },
    { _T("Ralf C - Extra 1: Bandana"),  0x2dec10, 0x2dec30 },
    { _T("Ralf C - Extra 2"),  0x2dec30, 0x2dec50, indexKOF98_A_Ralf },
    { _T("Ralf C - Max Mode"),  0x2dec50, 0x2dec70, indexKOF98_A_Ralf },
    { _T("Ralf C - Extra 3"),  0x2dec70, 0x2dec90, indexKOF98_A_Ralf },
    { _T("Ralf C - Extra 4"),  0x2dec90, 0x2decb0, indexKOF98_A_Ralf },
    { _T("Ralf C - Order Select"),  0x2decb0, 0x2decd0, indexKOFSprites_98OrderSelect, 0x2e },
    { _T("Ralf C - Life Bar Portrait"),  0x2decd0, 0x2decf0, indexKOFSprites_98Lifebar, indexKOF98_A_Ralf },
    { _T("Ralf C - Win Screen Portrait/sprite"),  0x2decf0, 0x2dedf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Ralf },
};

const sGame_PaletteDataset KOF98_A_Ralf_PALETTE_D[] =
{
    { _T("Ralf D - Main"),  0x2dedf0, 0x2dee10, indexKOF98_A_Ralf },
    { _T("Ralf D - Extra 1: Bandana"),  0x2dee10, 0x2dee30 },
    { _T("Ralf D - Extra 2"),  0x2dee30, 0x2dee50, indexKOF98_A_Ralf },
    { _T("Ralf D - Max Mode"),  0x2dee50, 0x2dee70, indexKOF98_A_Ralf },
    { _T("Ralf D - Extra 3"),  0x2dee70, 0x2dee90, indexKOF98_A_Ralf },
    { _T("Ralf D - Extra 4"),  0x2dee90, 0x2deeb0, indexKOF98_A_Ralf },
    { _T("Ralf D - Order Select"),  0x2deeb0, 0x2deed0, indexKOFSprites_98OrderSelect, 0x2e },
    { _T("Ralf D - Life Bar Portrait"),  0x2deed0, 0x2deef0, indexKOFSprites_98Lifebar, indexKOF98_A_Ralf },
    { _T("Ralf D - Win Screen Portrait/sprite"),  0x2deef0, 0x2deff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Ralf },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_A[] =
{
    { _T("Clark A - Main"),  0x2deff0, 0x2df010, indexKOF98_A_Clark },
    { _T("Clark A - Extra 1"),  0x2df010, 0x2df030, indexKOF98_A_Clark },
    { _T("Clark A - Extra 2"),  0x2df030, 0x2df050, indexKOF98_A_Clark },
    { _T("Clark A - Max Mode"),  0x2df050, 0x2df070, indexKOF98_A_Clark },
    { _T("Clark A - Extra 3"),  0x2df070, 0x2df090, indexKOF98_A_Clark },
    { _T("Clark A - Extra 4"),  0x2df090, 0x2df0b0, indexKOF98_A_Clark },
    { _T("Clark A - Order Select"),  0x2df0b0, 0x2df0d0, indexKOFSprites_98OrderSelect, 0x28 },
    { _T("Clark A - Life Bar Portrait"),  0x2df0d0, 0x2df0f0, indexKOFSprites_98Lifebar, indexKOF98_A_Clark },
    { _T("Clark A - Win Screen Portrait/sprite"),  0x2df0f0, 0x2df1f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Clark },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_B[] =
{
    { _T("Clark B - Main"),  0x2df1f0, 0x2df210, indexKOF98_A_Clark },
    { _T("Clark B - Extra 1"),  0x2df210, 0x2df230, indexKOF98_A_Clark },
    { _T("Clark B - Extra 2"),  0x2df230, 0x2df250, indexKOF98_A_Clark },
    { _T("Clark B - Max Mode"),  0x2df250, 0x2df270, indexKOF98_A_Clark },
    { _T("Clark B - Extra 3"),  0x2df270, 0x2df290, indexKOF98_A_Clark },
    { _T("Clark B - Extra 4"),  0x2df290, 0x2df2b0, indexKOF98_A_Clark },
    { _T("Clark B - Order Select"),  0x2df2b0, 0x2df2d0, indexKOFSprites_98OrderSelect, 0x28 },
    { _T("Clark B - Life Bar Portrait"),  0x2df2d0, 0x2df2f0, indexKOFSprites_98Lifebar, indexKOF98_A_Clark },
    { _T("Clark B - Win Screen Portrait/sprite"),  0x2df2f0, 0x2df3f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Clark },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_C[] =
{
    { _T("Clark C - Main"),  0x2df3f0, 0x2df410, indexKOF98_A_Clark },
    { _T("Clark C - Extra 1"),  0x2df410, 0x2df430, indexKOF98_A_Clark },
    { _T("Clark C - Extra 2"),  0x2df430, 0x2df450, indexKOF98_A_Clark },
    { _T("Clark C - Max Mode"),  0x2df450, 0x2df470, indexKOF98_A_Clark },
    { _T("Clark C - Extra 3"),  0x2df470, 0x2df490, indexKOF98_A_Clark },
    { _T("Clark C - Extra 4"),  0x2df490, 0x2df4b0, indexKOF98_A_Clark },
    { _T("Clark C - Order Select"),  0x2df4b0, 0x2df4d0, indexKOFSprites_98OrderSelect, 0x28 },
    { _T("Clark C - Life Bar Portrait"),  0x2df4d0, 0x2df4f0, indexKOFSprites_98Lifebar, indexKOF98_A_Clark },
    { _T("Clark C - Win Screen Portrait/sprite"),  0x2df4f0, 0x2df5f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Clark },
};

const sGame_PaletteDataset KOF98_A_Clark_PALETTE_D[] =
{
    { _T("Clark D - Main"),  0x2df5f0, 0x2df610, indexKOF98_A_Clark },
    { _T("Clark D - Extra 1"),  0x2df610, 0x2df630, indexKOF98_A_Clark },
    { _T("Clark D - Extra 2"),  0x2df630, 0x2df650, indexKOF98_A_Clark },
    { _T("Clark D - Max Mode"),  0x2df650, 0x2df670, indexKOF98_A_Clark },
    { _T("Clark D - Extra 3"),  0x2df670, 0x2df690, indexKOF98_A_Clark },
    { _T("Clark D - Extra 4"),  0x2df690, 0x2df6b0, indexKOF98_A_Clark },
    { _T("Clark D - Order Select"),  0x2df6b0, 0x2df6d0, indexKOFSprites_98OrderSelect, 0x28 },
    { _T("Clark D - Life Bar Portrait"),  0x2df6d0, 0x2df6f0, indexKOFSprites_98Lifebar, indexKOF98_A_Clark },
    { _T("Clark D - Win Screen Portrait/sprite"),  0x2df6f0, 0x2df7f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Clark },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_A[] =
{
    { _T("Athena A - Main"),  0x2df7f0, 0x2df810, indexKOF98_A_Athena },
    { _T("Athena A - Extra 1"),  0x2df810, 0x2df830, indexKOF98_A_Athena },
    { _T("Athena A - Extra 2"),  0x2df830, 0x2df850, indexKOF98_A_Athena },
    { _T("Athena A - Max Mode"),  0x2df850, 0x2df870, indexKOF98_A_Athena },
    { _T("Athena A - Extra 3"),  0x2df870, 0x2df890, indexKOF98_A_Athena },
    { _T("Athena A - Extra 4"),  0x2df890, 0x2df8b0, indexKOF98_A_Athena },
    { _T("Athena A - Order Select"),  0x2df8b0, 0x2df8d0, indexKOFSprites_98OrderSelect, 0x27 },
    { _T("Athena A - Life Bar Portrait"),  0x2df8d0, 0x2df8f0, indexKOFSprites_98Lifebar, indexKOF98_A_Athena },
    { _T("Athena A - Win Screen Portrait/sprite"),  0x2df8f0, 0x2df9f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Athena },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_B[] =
{
    { _T("Athena B - Main"),  0x2df9f0, 0x2dfa10, indexKOF98_A_Athena },
    { _T("Athena B - Extra 1"),  0x2dfa10, 0x2dfa30, indexKOF98_A_Athena },
    { _T("Athena B - Extra 2"),  0x2dfa30, 0x2dfa50, indexKOF98_A_Athena },
    { _T("Athena B - Max Mode"),  0x2dfa50, 0x2dfa70, indexKOF98_A_Athena },
    { _T("Athena B - Extra 3"),  0x2dfa70, 0x2dfa90, indexKOF98_A_Athena },
    { _T("Athena B - Extra 4"),  0x2dfa90, 0x2dfab0, indexKOF98_A_Athena },
    { _T("Athena B - Order Select"),  0x2dfab0, 0x2dfad0, indexKOFSprites_98OrderSelect, 0x27 },
    { _T("Athena B - Life Bar Portrait"),  0x2dfad0, 0x2dfaf0, indexKOFSprites_98Lifebar, indexKOF98_A_Athena },
    { _T("Athena B - Win Screen Portrait/sprite"),  0x2dfaf0, 0x2dfbf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Athena },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_C[] =
{
    { _T("Athena C - Main"),  0x2dfbf0, 0x2dfc10, indexKOF98_A_Athena },
    { _T("Athena C - Extra 1"),  0x2dfc10, 0x2dfc30, indexKOF98_A_Athena },
    { _T("Athena C - Extra 2"),  0x2dfc30, 0x2dfc50, indexKOF98_A_Athena },
    { _T("Athena C - Max Mode"),  0x2dfc50, 0x2dfc70, indexKOF98_A_Athena },
    { _T("Athena C - Extra 3"),  0x2dfc70, 0x2dfc90, indexKOF98_A_Athena },
    { _T("Athena C - Extra 4"),  0x2dfc90, 0x2dfcb0, indexKOF98_A_Athena },
    { _T("Athena C - Order Select"),  0x2dfcb0, 0x2dfcd0, indexKOFSprites_98OrderSelect, 0x27 },
    { _T("Athena C - Life Bar Portrait"),  0x2dfcd0, 0x2dfcf0, indexKOFSprites_98Lifebar, indexKOF98_A_Athena },
    { _T("Athena C - Win Screen Portrait/sprite"),  0x2dfcf0, 0x2dfdf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Athena },
};

const sGame_PaletteDataset KOF98_A_Athena_PALETTE_D[] =
{
    { _T("Athena D - Main"),  0x2dfdf0, 0x2dfe10, indexKOF98_A_Athena },
    { _T("Athena D - Extra 1"),  0x2dfe10, 0x2dfe30, indexKOF98_A_Athena },
    { _T("Athena D - Extra 2"),  0x2dfe30, 0x2dfe50, indexKOF98_A_Athena },
    { _T("Athena D - Max Mode"),  0x2dfe50, 0x2dfe70, indexKOF98_A_Athena },
    { _T("Athena D - Extra 3"),  0x2dfe70, 0x2dfe90, indexKOF98_A_Athena },
    { _T("Athena D - Extra 4"),  0x2dfe90, 0x2dfeb0, indexKOF98_A_Athena },
    { _T("Athena D - Order Select"),  0x2dfeb0, 0x2dfed0, indexKOFSprites_98OrderSelect, 0x27 },
    { _T("Athena D - Life Bar Portrait"),  0x2dfed0, 0x2dfef0, indexKOFSprites_98Lifebar, indexKOF98_A_Athena },
    { _T("Athena D - Win Screen Portrait/sprite"),  0x2dfef0, 0x2dfff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Athena },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_A[] =
{
    { _T("Kensou A - Main"),  0x2dfff0, 0x2e0010, indexKOF98_A_Kensou },
    { _T("Kensou A - Extra 1"),  0x2e0010, 0x2e0030, indexKOF98_A_Kensou },
    { _T("Kensou A - Extra 2"),  0x2e0030, 0x2e0050, indexKOF98_A_Kensou },
    { _T("Kensou A - Max Mode"),  0x2e0050, 0x2e0070, indexKOF98_A_Kensou },
    { _T("Kensou A - Extra 3"),  0x2e0070, 0x2e0090, indexKOF98_A_Kensou },
    { _T("Kensou A - Extra 4"),  0x2e0090, 0x2e00b0, indexKOF98_A_Kensou },
    { _T("Kensou A - Order Select"),  0x2e00b0, 0x2e00d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Kensou },
    { _T("Kensou A - Life Bar Portrait"),  0x2e00d0, 0x2e00f0, indexKOFSprites_98Lifebar, indexKOF98_A_Kensou },
    { _T("Kensou A - Win Screen Portrait/sprite"),  0x2e00f0, 0x2e01f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kensou },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_B[] =
{
    { _T("Kensou B - Main"),  0x2e01f0, 0x2e0210, indexKOF98_A_Kensou },
    { _T("Kensou B - Extra 1"),  0x2e0210, 0x2e0230, indexKOF98_A_Kensou },
    { _T("Kensou B - Extra 2"),  0x2e0230, 0x2e0250, indexKOF98_A_Kensou },
    { _T("Kensou B - Max Mode"),  0x2e0250, 0x2e0270, indexKOF98_A_Kensou },
    { _T("Kensou B - Extra 3"),  0x2e0270, 0x2e0290, indexKOF98_A_Kensou },
    { _T("Kensou B - Extra 4"),  0x2e0290, 0x2e02b0, indexKOF98_A_Kensou },
    { _T("Kensou B - Order Select"),  0x2e02b0, 0x2e02d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Kensou },
    { _T("Kensou B - Life Bar Portrait"),  0x2e02d0, 0x2e02f0, indexKOFSprites_98Lifebar, indexKOF98_A_Kensou },
    { _T("Kensou B - Win Screen Portrait/sprite"),  0x2e02f0, 0x2e03f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kensou },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_C[] =
{
    { _T("Kensou C - Main"),  0x2e03f0, 0x2e0410, indexKOF98_A_Kensou },
    { _T("Kensou C - Extra 1"),  0x2e0410, 0x2e0430, indexKOF98_A_Kensou },
    { _T("Kensou C - Extra 2"),  0x2e0430, 0x2e0450, indexKOF98_A_Kensou },
    { _T("Kensou C - Max Mode"),  0x2e0450, 0x2e0470, indexKOF98_A_Kensou },
    { _T("Kensou C - Extra 3"),  0x2e0470, 0x2e0490, indexKOF98_A_Kensou },
    { _T("Kensou C - Extra 4"),  0x2e0490, 0x2e04b0, indexKOF98_A_Kensou },
    { _T("Kensou C - Order Select"),  0x2e04b0, 0x2e04d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Kensou },
    { _T("Kensou C - Life Bar Portrait"),  0x2e04d0, 0x2e04f0, indexKOFSprites_98Lifebar, indexKOF98_A_Kensou },
    { _T("Kensou C - Win Screen Portrait/sprite"),  0x2e04f0, 0x2e05f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kensou },
};

const sGame_PaletteDataset KOF98_A_Kensou_PALETTE_D[] =
{
    { _T("Kensou D - Main"),  0x2e05f0, 0x2e0610, indexKOF98_A_Kensou },
    { _T("Kensou D - Extra 1"),  0x2e0610, 0x2e0630, indexKOF98_A_Kensou },
    { _T("Kensou D - Extra 2"),  0x2e0630, 0x2e0650, indexKOF98_A_Kensou },
    { _T("Kensou D - Max Mode"),  0x2e0650, 0x2e0670, indexKOF98_A_Kensou },
    { _T("Kensou D - Extra 3"),  0x2e0670, 0x2e0690, indexKOF98_A_Kensou },
    { _T("Kensou D - Extra 4"),  0x2e0690, 0x2e06b0, indexKOF98_A_Kensou },
    { _T("Kensou D - Order Select"),  0x2e06b0, 0x2e06d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Kensou },
    { _T("Kensou D - Life Bar Portrait"),  0x2e06d0, 0x2e06f0, indexKOFSprites_98Lifebar, indexKOF98_A_Kensou },
    { _T("Kensou D - Win Screen Portrait/sprite"),  0x2e06f0, 0x2e07f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kensou },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_A[] =
{
    { _T("Chin A - Main"),  0x2e07f0, 0x2e0810, indexKOF98_A_Chin },
    { _T("Chin A - Extra 1"),  0x2e0810, 0x2e0830, indexKOF98_A_Chin },
    { _T("Chin A - Extra 2"),  0x2e0830, 0x2e0850, indexKOF98_A_Chin },
    { _T("Chin A - Max Mode"),  0x2e0850, 0x2e0870, indexKOF98_A_Chin },
    { _T("Chin A - Extra 3"),  0x2e0870, 0x2e0890, indexKOF98_A_Chin },
    { _T("Chin A - Extra 4"),  0x2e0890, 0x2e08b0, indexKOF98_A_Chin },
    { _T("Chin A - Order Select"),  0x2e08b0, 0x2e08d0, indexKOFSprites_98OrderSelect, 0x49 },
    { _T("Chin A - Life Bar Portrait"),  0x2e08d0, 0x2e08f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chin },
    { _T("Chin A - Win Screen Portrait/sprite"),  0x2e08f0, 0x2e09f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chin },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_B[] =
{
    { _T("Chin B - Main"),  0x2e09f0, 0x2e0a10, indexKOF98_A_Chin },
    { _T("Chin B - Extra 1"),  0x2e0a10, 0x2e0a30, indexKOF98_A_Chin },
    { _T("Chin B - Extra 2"),  0x2e0a30, 0x2e0a50, indexKOF98_A_Chin },
    { _T("Chin B - Max Mode"),  0x2e0a50, 0x2e0a70, indexKOF98_A_Chin },
    { _T("Chin B - Extra 3"),  0x2e0a70, 0x2e0a90, indexKOF98_A_Chin },
    { _T("Chin B - Extra 4"),  0x2e0a90, 0x2e0ab0, indexKOF98_A_Chin },
    { _T("Chin B - Order Select"),  0x2e0ab0, 0x2e0ad0, indexKOFSprites_98OrderSelect, 0x49 },
    { _T("Chin B - Life Bar Portrait"),  0x2e0ad0, 0x2e0af0, indexKOFSprites_98Lifebar, indexKOF98_A_Chin },
    { _T("Chin B - Win Screen Portrait/sprite"),  0x2e0af0, 0x2e0bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chin },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_C[] =
{
    { _T("Chin C - Main"),  0x2e0bf0, 0x2e0c10, indexKOF98_A_Chin },
    { _T("Chin C - Extra 1"),  0x2e0c10, 0x2e0c30, indexKOF98_A_Chin },
    { _T("Chin C - Extra 2"),  0x2e0c30, 0x2e0c50, indexKOF98_A_Chin },
    { _T("Chin C - Max Mode"),  0x2e0c50, 0x2e0c70, indexKOF98_A_Chin },
    { _T("Chin C - Extra 3"),  0x2e0c70, 0x2e0c90, indexKOF98_A_Chin },
    { _T("Chin C - Extra 4"),  0x2e0c90, 0x2e0cb0, indexKOF98_A_Chin },
    { _T("Chin C - Order Select"),  0x2e0cb0, 0x2e0cd0, indexKOFSprites_98OrderSelect, 0x49 },
    { _T("Chin C - Life Bar Portrait"),  0x2e0cd0, 0x2e0cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Chin },
    { _T("Chin C - Win Screen Portrait/sprite"),  0x2e0cf0, 0x2e0df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chin },
};

const sGame_PaletteDataset KOF98_A_Chin_PALETTE_D[] =
{
    { _T("Chin D - Main"),  0x2e0df0, 0x2e0e10, indexKOF98_A_Chin },
    { _T("Chin D - Extra 1"),  0x2e0e10, 0x2e0e30, indexKOF98_A_Chin },
    { _T("Chin D - Extra 2"),  0x2e0e30, 0x2e0e50, indexKOF98_A_Chin },
    { _T("Chin D - Max Mode"),  0x2e0e50, 0x2e0e70, indexKOF98_A_Chin },
    { _T("Chin D - Extra 3"),  0x2e0e70, 0x2e0e90, indexKOF98_A_Chin },
    { _T("Chin D - Extra 4"),  0x2e0e90, 0x2e0eb0, indexKOF98_A_Chin },
    { _T("Chin D - Order Select"),  0x2e0eb0, 0x2e0ed0, indexKOFSprites_98OrderSelect, 0x49 },
    { _T("Chin D - Life Bar Portrait"),  0x2e0ed0, 0x2e0ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Chin },
    { _T("Chin D - Win Screen Portrait/sprite"),  0x2e0ef0, 0x2e0ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chin },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_A[] =
{
    { _T("Chizuru A - Main"),  0x2e0ff0, 0x2e1010, indexKOF98_A_Chizuru },
    { _T("Chizuru A - Extra 1"),  0x2e1010, 0x2e1030, indexKOF98_A_Chizuru },
    { _T("Chizuru A - Extra 2"),  0x2e1030, 0x2e1050, indexKOF98_A_Chizuru },
    { _T("Chizuru A - Max Mode"),  0x2e1050, 0x2e1070, indexKOF98_A_Chizuru },
    { _T("Chizuru A - Extra 3"),  0x2e1070, 0x2e1090, indexKOF98_A_Chizuru },
    { _T("Chizuru A - Extra 4"),  0x2e1090, 0x2e10b0, indexKOF98_A_Chizuru },
    { _T("Chizuru A - Order Select"),  0x2e10b0, 0x2e10d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chizuru },
    { _T("Chizuru A - Life Bar Portrait"),  0x2e10d0, 0x2e10f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chizuru },
    { _T("Chizuru A - Win Screen Portrait/sprite"),  0x2e10f0, 0x2e11f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chizuru },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_B[] =
{
    { _T("Chizuru B - Main"),  0x2e11f0, 0x2e1210, indexKOF98_A_Chizuru },
    { _T("Chizuru B - Extra 1"),  0x2e1210, 0x2e1230, indexKOF98_A_Chizuru },
    { _T("Chizuru B - Extra 2"),  0x2e1230, 0x2e1250, indexKOF98_A_Chizuru },
    { _T("Chizuru B - Max Mode"),  0x2e1250, 0x2e1270, indexKOF98_A_Chizuru },
    { _T("Chizuru B - Extra 3"),  0x2e1270, 0x2e1290, indexKOF98_A_Chizuru },
    { _T("Chizuru B - Extra 4"),  0x2e1290, 0x2e12b0, indexKOF98_A_Chizuru },
    { _T("Chizuru B - Order Select"),  0x2e12b0, 0x2e12d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chizuru },
    { _T("Chizuru B - Life Bar Portrait"),  0x2e12d0, 0x2e12f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chizuru },
    { _T("Chizuru B - Win Screen Portrait/sprite"),  0x2e12f0, 0x2e13f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chizuru },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_C[] =
{
    { _T("Chizuru C - Main"),  0x2e13f0, 0x2e1410, indexKOF98_A_Chizuru },
    { _T("Chizuru C - Extra 1"),  0x2e1410, 0x2e1430, indexKOF98_A_Chizuru },
    { _T("Chizuru C - Extra 2"),  0x2e1430, 0x2e1450, indexKOF98_A_Chizuru },
    { _T("Chizuru C - Max Mode"),  0x2e1450, 0x2e1470, indexKOF98_A_Chizuru },
    { _T("Chizuru C - Extra 3"),  0x2e1470, 0x2e1490, indexKOF98_A_Chizuru },
    { _T("Chizuru C - Extra 4"),  0x2e1490, 0x2e14b0, indexKOF98_A_Chizuru },
    { _T("Chizuru C - Order Select"),  0x2e14b0, 0x2e14d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chizuru },
    { _T("Chizuru C - Life Bar Portrait"),  0x2e14d0, 0x2e14f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chizuru },
    { _T("Chizuru C - Win Screen Portrait/sprite"),  0x2e14f0, 0x2e15f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chizuru },
};

const sGame_PaletteDataset KOF98_A_Chizuru_PALETTE_D[] =
{
    { _T("Chizuru D - Main"),  0x2e15f0, 0x2e1610, indexKOF98_A_Chizuru },
    { _T("Chizuru D - Extra 1"),  0x2e1610, 0x2e1630, indexKOF98_A_Chizuru },
    { _T("Chizuru D - Extra 2"),  0x2e1630, 0x2e1650, indexKOF98_A_Chizuru },
    { _T("Chizuru D - Max Mode"),  0x2e1650, 0x2e1670, indexKOF98_A_Chizuru },
    { _T("Chizuru D - Extra 3"),  0x2e1670, 0x2e1690, indexKOF98_A_Chizuru },
    { _T("Chizuru D - Extra 4"),  0x2e1690, 0x2e16b0, indexKOF98_A_Chizuru },
    { _T("Chizuru D - Order Select"),  0x2e16b0, 0x2e16d0 , indexKOFSprites_98OrderSelect, indexKOF98_A_Chizuru},
    { _T("Chizuru D - Life Bar Portrait"),  0x2e16d0, 0x2e16f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chizuru },
    { _T("Chizuru D - Win Screen Portrait/sprite"),  0x2e16f0, 0x2e17f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chizuru },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_A[] =
{
    { _T("Mai A - Main"),  0x2e17f0, 0x2e1810, indexKOF98_A_Mai },
    { _T("Mai A - Extra 1"),  0x2e1810, 0x2e1830, indexKOF98_A_Mai },
    { _T("Mai A - Extra 2"),  0x2e1830, 0x2e1850, indexKOF98_A_Mai },
    { _T("Mai A - Max Mode"),  0x2e1850, 0x2e1870, indexKOF98_A_Mai },
    { _T("Mai A - Extra 3"),  0x2e1870, 0x2e1890, indexKOF98_A_Mai },
    { _T("Mai A - Extra 4"),  0x2e1890, 0x2e18b0, indexKOF98_A_Mai },
    { _T("Mai A - Order Select"),  0x2e18b0, 0x2e18d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Mai },
    { _T("Mai A - Life Bar Portrait"),  0x2e18d0, 0x2e18f0, indexKOFSprites_98Lifebar, indexKOF98_A_Mai },
    { _T("Mai A - Win Screen Portrait/sprite"),  0x2e18f0, 0x2e19f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Mai },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_B[] =
{
    { _T("Mai B - Main"),  0x2e19f0, 0x2e1a10, indexKOF98_A_Mai },
    { _T("Mai B - Extra 1"),  0x2e1a10, 0x2e1a30, indexKOF98_A_Mai },
    { _T("Mai B - Extra 2"),  0x2e1a30, 0x2e1a50, indexKOF98_A_Mai },
    { _T("Mai B - Max Mode"),  0x2e1a50, 0x2e1a70, indexKOF98_A_Mai },
    { _T("Mai B - Extra 3"),  0x2e1a70, 0x2e1a90, indexKOF98_A_Mai },
    { _T("Mai B - Extra 4"),  0x2e1a90, 0x2e1ab0, indexKOF98_A_Mai },
    { _T("Mai B - Order Select"),  0x2e1ab0, 0x2e1ad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Mai },
    { _T("Mai B - Life Bar Portrait"),  0x2e1ad0, 0x2e1af0, indexKOFSprites_98Lifebar, indexKOF98_A_Mai },
    { _T("Mai B - Win Screen Portrait/sprite"),  0x2e1af0, 0x2e1bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Mai },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_C[] =
{
    { _T("Mai C - Main"),  0x2e1bf0, 0x2e1c10, indexKOF98_A_Mai },
    { _T("Mai C - Extra 1"),  0x2e1c10, 0x2e1c30, indexKOF98_A_Mai },
    { _T("Mai C - Extra 2"),  0x2e1c30, 0x2e1c50, indexKOF98_A_Mai },
    { _T("Mai C - Max Mode"),  0x2e1c50, 0x2e1c70, indexKOF98_A_Mai },
    { _T("Mai C - Extra 3"),  0x2e1c70, 0x2e1c90, indexKOF98_A_Mai },
    { _T("Mai C - Extra 4"),  0x2e1c90, 0x2e1cb0, indexKOF98_A_Mai },
    { _T("Mai C - Order Select"),  0x2e1cb0, 0x2e1cd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Mai },
    { _T("Mai C - Life Bar Portrait"),  0x2e1cd0, 0x2e1cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Mai },
    { _T("Mai C - Win Screen Portrait/sprite"),  0x2e1cf0, 0x2e1df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Mai },
};

const sGame_PaletteDataset KOF98_A_Mai_PALETTE_D[] =
{
    { _T("Mai D - Main"),  0x2e1df0, 0x2e1e10, indexKOF98_A_Mai },
    { _T("Mai D - Extra 1"),  0x2e1e10, 0x2e1e30, indexKOF98_A_Mai },
    { _T("Mai D - Extra 2"),  0x2e1e30, 0x2e1e50, indexKOF98_A_Mai },
    { _T("Mai D - Max Mode"),  0x2e1e50, 0x2e1e70, indexKOF98_A_Mai },
    { _T("Mai D - Extra 3"),  0x2e1e70, 0x2e1e90, indexKOF98_A_Mai },
    { _T("Mai D - Extra 4"),  0x2e1e90, 0x2e1eb0, indexKOF98_A_Mai },
    { _T("Mai D - Order Select"),  0x2e1eb0, 0x2e1ed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Mai },
    { _T("Mai D - Life Bar Portrait"),  0x2e1ed0, 0x2e1ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Mai },
    { _T("Mai D - Win Screen Portrait/sprite"),  0x2e1ef0, 0x2e1ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Mai },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_A[] =
{
    { _T("King A - Main"),  0x2e1ff0, 0x2e2010, indexKOF98_A_King },
    { _T("King A - Extra 1"),  0x2e2010, 0x2e2030, indexKOF98_A_King },
    { _T("King A - Extra 2"),  0x2e2030, 0x2e2050, indexKOF98_A_King },
    { _T("King A - Max Mode"),  0x2e2050, 0x2e2070, indexKOF98_A_King },
    { _T("King A - Extra 3"),  0x2e2070, 0x2e2090, indexKOF98_A_King },
    { _T("King A - Extra 4"),  0x2e2090, 0x2e20b0, indexKOF98_A_King },
    { _T("King A - Order Select"),  0x2e20b0, 0x2e20d0, indexKOFSprites_98OrderSelect, 0x35 },
    { _T("King A - Life Bar Portrait"),  0x2e20d0, 0x2e20f0, indexKOFSprites_98Lifebar, indexKOF98_A_King },
    { _T("King A - Win Screen Portrait/sprite"),  0x2e20f0, 0x2e21f0, indexKOFSprites_98WinPortrait, indexKOF98_A_King },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_B[] =
{
    { _T("King B - Main"),  0x2e21f0, 0x2e2210, indexKOF98_A_King },
    { _T("King B - Extra 1"),  0x2e2210, 0x2e2230, indexKOF98_A_King },
    { _T("King B - Extra 2"),  0x2e2230, 0x2e2250, indexKOF98_A_King },
    { _T("King B - Max Mode"),  0x2e2250, 0x2e2270, indexKOF98_A_King },
    { _T("King B - Extra 3"),  0x2e2270, 0x2e2290, indexKOF98_A_King },
    { _T("King B - Extra 4"),  0x2e2290, 0x2e22b0, indexKOF98_A_King },
    { _T("King B - Order Select"),  0x2e22b0, 0x2e22d0, indexKOFSprites_98OrderSelect, 0x35 },
    { _T("King B - Life Bar Portrait"),  0x2e22d0, 0x2e22f0, indexKOFSprites_98Lifebar, indexKOF98_A_King },
    { _T("King B - Win Screen Portrait/sprite"),  0x2e22f0, 0x2e23f0, indexKOFSprites_98WinPortrait, indexKOF98_A_King },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_C[] =
{
    { _T("King C - Main"),  0x2e23f0, 0x2e2410, indexKOF98_A_King },
    { _T("King C - Extra 1"),  0x2e2410, 0x2e2430, indexKOF98_A_King },
    { _T("King C - Extra 2"),  0x2e2430, 0x2e2450, indexKOF98_A_King },
    { _T("King C - Max Mode"),  0x2e2450, 0x2e2470, indexKOF98_A_King },
    { _T("King C - Extra 3"),  0x2e2470, 0x2e2490, indexKOF98_A_King },
    { _T("King C - Extra 4"),  0x2e2490, 0x2e24b0, indexKOF98_A_King },
    { _T("King C - Order Select"),  0x2e24b0, 0x2e24d0, indexKOFSprites_98OrderSelect, 0x35 },
    { _T("King C - Life Bar Portrait"),  0x2e24d0, 0x2e24f0, indexKOFSprites_98Lifebar, indexKOF98_A_King },
    { _T("King C - Win Screen Portrait/sprite"),  0x2e24f0, 0x2e25f0, indexKOFSprites_98WinPortrait, indexKOF98_A_King },
};

const sGame_PaletteDataset KOF98_A_King_PALETTE_D[] =
{
    { _T("King D - Main"),  0x2e25f0, 0x2e2610, indexKOF98_A_King },
    { _T("King D - Extra 1"),  0x2e2610, 0x2e2630, indexKOF98_A_King },
    { _T("King D - Extra 2"),  0x2e2630, 0x2e2650, indexKOF98_A_King },
    { _T("King D - Max Mode"),  0x2e2650, 0x2e2670, indexKOF98_A_King },
    { _T("King D - Extra 3"),  0x2e2670, 0x2e2690, indexKOF98_A_King },
    { _T("King D - Extra 4"),  0x2e2690, 0x2e26b0, indexKOF98_A_King },
    { _T("King D - Order Select"),  0x2e26b0, 0x2e26d0, indexKOFSprites_98OrderSelect, 0x35 },
    { _T("King D - Life Bar Portrait"),  0x2e26d0, 0x2e26f0, indexKOFSprites_98Lifebar, indexKOF98_A_King },
    { _T("King D - Win Screen Portrait/sprite"),  0x2e26f0, 0x2e27f0, indexKOFSprites_98WinPortrait, indexKOF98_A_King },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_A[] =
{
    { _T("Kim A - Main"),  0x2e27f0, 0x2e2810, indexKOF98_A_Kim },
    { _T("Kim A - Extra 1"),  0x2e2810, 0x2e2830, indexKOF98_A_Kim },
    { _T("Kim A - Extra 2"),  0x2e2830, 0x2e2850, indexKOF98_A_Kim },
    { _T("Kim A - Max Mode"),  0x2e2850, 0x2e2870, indexKOF98_A_Kim },
    { _T("Kim A - Extra 3"),  0x2e2870, 0x2e2890, indexKOF98_A_Kim },
    { _T("Kim A - Extra 4"),  0x2e2890, 0x2e28b0, indexKOF98_A_Kim },
    { _T("Kim A - Order Select"),  0x2e28b0, 0x2e28d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Kim },
    { _T("Kim A - Life Bar Portrait"),  0x2e28d0, 0x2e28f0, indexKOFSprites_98Lifebar, indexKOF98_A_Kim },
    { _T("Kim A - Win Screen Portrait/sprite"),  0x2e28f0, 0x2e29f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kim },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_B[] =
{
    { _T("Kim B - Main"),  0x2e29f0, 0x2e2a10, indexKOF98_A_Kim },
    { _T("Kim B - Extra 1"),  0x2e2a10, 0x2e2a30, indexKOF98_A_Kim },
    { _T("Kim B - Extra 2"),  0x2e2a30, 0x2e2a50, indexKOF98_A_Kim },
    { _T("Kim B - Max Mode"),  0x2e2a50, 0x2e2a70, indexKOF98_A_Kim },
    { _T("Kim B - Extra 3"),  0x2e2a70, 0x2e2a90, indexKOF98_A_Kim },
    { _T("Kim B - Extra 4"),  0x2e2a90, 0x2e2ab0, indexKOF98_A_Kim },
    { _T("Kim B - Order Select"),  0x2e2ab0, 0x2e2ad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Kim },
    { _T("Kim B - Life Bar Portrait"),  0x2e2ad0, 0x2e2af0, indexKOFSprites_98Lifebar, indexKOF98_A_Kim },
    { _T("Kim B - Win Screen Portrait/sprite"),  0x2e2af0, 0x2e2bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kim },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_C[] =
{
    { _T("Kim C - Main"),  0x2e2bf0, 0x2e2c10, indexKOF98_A_Kim },
    { _T("Kim C - Extra 1"),  0x2e2c10, 0x2e2c30, indexKOF98_A_Kim },
    { _T("Kim C - Extra 2"),  0x2e2c30, 0x2e2c50, indexKOF98_A_Kim },
    { _T("Kim C - Max Mode"),  0x2e2c50, 0x2e2c70, indexKOF98_A_Kim },
    { _T("Kim C - Extra 3"),  0x2e2c70, 0x2e2c90, indexKOF98_A_Kim },
    { _T("Kim C - Extra 4"),  0x2e2c90, 0x2e2cb0, indexKOF98_A_Kim },
    { _T("Kim C - Order Select"),  0x2e2cb0, 0x2e2cd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Kim },
    { _T("Kim C - Life Bar Portrait"),  0x2e2cd0, 0x2e2cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Kim },
    { _T("Kim C - Win Screen Portrait/sprite"),  0x2e2cf0, 0x2e2df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kim },
};

const sGame_PaletteDataset KOF98_A_Kim_PALETTE_D[] =
{
    { _T("Kim D - Main"),  0x2e2df0, 0x2e2e10, indexKOF98_A_Kim },
    { _T("Kim D - Extra 1"),  0x2e2e10, 0x2e2e30, indexKOF98_A_Kim },
    { _T("Kim D - Extra 2"),  0x2e2e30, 0x2e2e50, indexKOF98_A_Kim },
    { _T("Kim D - Max Mode"),  0x2e2e50, 0x2e2e70, indexKOF98_A_Kim },
    { _T("Kim D - Extra 3"),  0x2e2e70, 0x2e2e90, indexKOF98_A_Kim },
    { _T("Kim D - Extra 4"),  0x2e2e90, 0x2e2eb0, indexKOF98_A_Kim },
    { _T("Kim D - Order Select"),  0x2e2eb0, 0x2e2ed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Kim },
    { _T("Kim D - Life Bar Portrait"),  0x2e2ed0, 0x2e2ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Kim },
    { _T("Kim D - Win Screen Portrait/sprite"),  0x2e2ef0, 0x2e2ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Kim },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_A[] =
{
    { _T("Chang A - Main"),  0x2e2ff0, 0x2e3010, indexKOF98_A_Chang },
    { _T("Chang A - Extra 1"),  0x2e3010, 0x2e3030, indexKOF98_A_Chang },
    { _T("Chang A - Extra 2"),  0x2e3030, 0x2e3050, indexKOF98_A_Chang },
    { _T("Chang A - Max Mode"),  0x2e3050, 0x2e3070, indexKOF98_A_Chang },
    { _T("Chang A - Extra 3"),  0x2e3070, 0x2e3090, indexKOF98_A_Chang },
    { _T("Chang A - Extra 4"),  0x2e3090, 0x2e30b0, indexKOF98_A_Chang },
    { _T("Chang A - Order Select"),  0x2e30b0, 0x2e30d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chang },
    { _T("Chang A - Life Bar Portrait"),  0x2e30d0, 0x2e30f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chang },
    { _T("Chang A - Win Screen Portrait/sprite"),  0x2e30f0, 0x2e31f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chang },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_B[] =
{
    { _T("Chang B - Main"),  0x2e31f0, 0x2e3210, indexKOF98_A_Chang },
    { _T("Chang B - Extra 1"),  0x2e3210, 0x2e3230, indexKOF98_A_Chang },
    { _T("Chang B - Extra 2"),  0x2e3230, 0x2e3250, indexKOF98_A_Chang },
    { _T("Chang B - Max Mode"),  0x2e3250, 0x2e3270, indexKOF98_A_Chang },
    { _T("Chang B - Extra 3"),  0x2e3270, 0x2e3290, indexKOF98_A_Chang },
    { _T("Chang B - Extra 4"),  0x2e3290, 0x2e32b0, indexKOF98_A_Chang },
    { _T("Chang B - Order Select"),  0x2e32b0, 0x2e32d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chang },
    { _T("Chang B - Life Bar Portrait"),  0x2e32d0, 0x2e32f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chang },
    { _T("Chang B - Win Screen Portrait/sprite"),  0x2e32f0, 0x2e33f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chang },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_C[] =
{
    { _T("Chang C - Main"),  0x2e33f0, 0x2e3410, indexKOF98_A_Chang },
    { _T("Chang C - Extra 1"),  0x2e3410, 0x2e3430, indexKOF98_A_Chang },
    { _T("Chang C - Extra 2"),  0x2e3430, 0x2e3450, indexKOF98_A_Chang },
    { _T("Chang C - Max Mode"),  0x2e3450, 0x2e3470, indexKOF98_A_Chang },
    { _T("Chang C - Extra 3"),  0x2e3470, 0x2e3490, indexKOF98_A_Chang },
    { _T("Chang C - Extra 4"),  0x2e3490, 0x2e34b0, indexKOF98_A_Chang },
    { _T("Chang C - Order Select"),  0x2e34b0, 0x2e34d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chang },
    { _T("Chang C - Life Bar Portrait"),  0x2e34d0, 0x2e34f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chang },
    { _T("Chang C - Win Screen Portrait/sprite"),  0x2e34f0, 0x2e35f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chang },
};

const sGame_PaletteDataset KOF98_A_Chang_PALETTE_D[] =
{
    { _T("Chang D - Main"),  0x2e35f0, 0x2e3610, indexKOF98_A_Chang },
    { _T("Chang D - Extra 1"),  0x2e3610, 0x2e3630, indexKOF98_A_Chang },
    { _T("Chang D - Extra 2"),  0x2e3630, 0x2e3650, indexKOF98_A_Chang },
    { _T("Chang D - Max Mode"),  0x2e3650, 0x2e3670, indexKOF98_A_Chang },
    { _T("Chang D - Extra 3"),  0x2e3670, 0x2e3690, indexKOF98_A_Chang },
    { _T("Chang D - Extra 4"),  0x2e3690, 0x2e36b0, indexKOF98_A_Chang },
    { _T("Chang D - Order Select"),  0x2e36b0, 0x2e36d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chang },
    { _T("Chang D - Life Bar Portrait"),  0x2e36d0, 0x2e36f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chang },
    { _T("Chang D - Win Screen Portrait/sprite"),  0x2e36f0, 0x2e37f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chang },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_A[] =
{
    { _T("Choi A - Main"),  0x2e37f0, 0x2e3810, indexKOF98_A_Choi },
    { _T("Choi A - Extra 1"),  0x2e3810, 0x2e3830, indexKOF98_A_Choi },
    { _T("Choi A - Extra 2"),  0x2e3830, 0x2e3850, indexKOF98_A_Choi },
    { _T("Choi A - Max Mode"),  0x2e3850, 0x2e3870, indexKOF98_A_Choi },
    { _T("Choi A - Extra 3"),  0x2e3870, 0x2e3890, indexKOF98_A_Choi },
    { _T("Choi A - Extra 4"),  0x2e3890, 0x2e38b0, indexKOF98_A_Choi },
    { _T("Choi A - Order Select"),  0x2e38b0, 0x2e38d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Choi },
    { _T("Choi A - Life Bar Portrait"),  0x2e38d0, 0x2e38f0, indexKOFSprites_98Lifebar, indexKOF98_A_Choi },
    { _T("Choi A - Win Screen Portrait/sprite"),  0x2e38f0, 0x2e39f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Choi },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_B[] =
{
    { _T("Choi B - Main"),  0x2e39f0, 0x2e3a10, indexKOF98_A_Choi },
    { _T("Choi B - Extra 1"),  0x2e3a10, 0x2e3a30, indexKOF98_A_Choi },
    { _T("Choi B - Extra 2"),  0x2e3a30, 0x2e3a50, indexKOF98_A_Choi },
    { _T("Choi B - Max Mode"),  0x2e3a50, 0x2e3a70, indexKOF98_A_Choi },
    { _T("Choi B - Extra 3"),  0x2e3a70, 0x2e3a90, indexKOF98_A_Choi },
    { _T("Choi B - Extra 4"),  0x2e3a90, 0x2e3ab0, indexKOF98_A_Choi },
    { _T("Choi B - Order Select"),  0x2e3ab0, 0x2e3ad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Choi },
    { _T("Choi B - Life Bar Portrait"),  0x2e3ad0, 0x2e3af0, indexKOFSprites_98Lifebar, indexKOF98_A_Choi },
    { _T("Choi B - Win Screen Portrait/sprite"),  0x2e3af0, 0x2e3bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Choi },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_C[] =
{
    { _T("Choi C - Main"),  0x2e3bf0, 0x2e3c10, indexKOF98_A_Choi },
    { _T("Choi C - Extra 1"),  0x2e3c10, 0x2e3c30, indexKOF98_A_Choi },
    { _T("Choi C - Extra 2"),  0x2e3c30, 0x2e3c50, indexKOF98_A_Choi },
    { _T("Choi C - Max Mode"),  0x2e3c50, 0x2e3c70, indexKOF98_A_Choi },
    { _T("Choi C - Extra 3"),  0x2e3c70, 0x2e3c90, indexKOF98_A_Choi },
    { _T("Choi C - Extra 4"),  0x2e3c90, 0x2e3cb0, indexKOF98_A_Choi },
    { _T("Choi C - Order Select"),  0x2e3cb0, 0x2e3cd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Choi },
    { _T("Choi C - Life Bar Portrait"),  0x2e3cd0, 0x2e3cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Choi },
    { _T("Choi C - Win Screen Portrait/sprite"),  0x2e3cf0, 0x2e3df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Choi },
};

const sGame_PaletteDataset KOF98_A_Choi_PALETTE_D[] =
{
    { _T("Choi D - Main"),  0x2e3df0, 0x2e3e10, indexKOF98_A_Choi },
    { _T("Choi D - Extra 1"),  0x2e3e10, 0x2e3e30, indexKOF98_A_Choi },
    { _T("Choi D - Extra 2"),  0x2e3e30, 0x2e3e50, indexKOF98_A_Choi },
    { _T("Choi D - Max Mode"),  0x2e3e50, 0x2e3e70, indexKOF98_A_Choi },
    { _T("Choi D - Extra 3"),  0x2e3e70, 0x2e3e90, indexKOF98_A_Choi },
    { _T("Choi D - Extra 4"),  0x2e3e90, 0x2e3eb0, indexKOF98_A_Choi },
    { _T("Choi D - Order Select"),  0x2e3eb0, 0x2e3ed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Choi },
    { _T("Choi D - Life Bar Portrait"),  0x2e3ed0, 0x2e3ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Choi },
    { _T("Choi D - Win Screen Portrait/sprite"),  0x2e3ef0, 0x2e3ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Choi },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_A[] =
{
    { _T("Yashiro A - Main"),  0x2e3ff0, 0x2e4010, indexKOF98_A_Yashiro },
    { _T("Yashiro A - Extra 1"),  0x2e4010, 0x2e4030, indexKOF98_A_Yashiro },
    { _T("Yashiro A - Extra 2"),  0x2e4030, 0x2e4050, indexKOF98_A_Yashiro },
    { _T("Yashiro A - Max Mode"),  0x2e4050, 0x2e4070, indexKOF98_A_Yashiro },
    { _T("Yashiro A - Extra 3"),  0x2e4070, 0x2e4090, indexKOF98_A_Yashiro },
    { _T("Yashiro A - Extra 4"),  0x2e4090, 0x2e40b0, indexKOF98_A_Yashiro },
    { _T("Yashiro A - Order Select"),  0x2e40b0, 0x2e40d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Yashiro },
    { _T("Yashiro A - Life Bar Portrait"),  0x2e40d0, 0x2e40f0, indexKOFSprites_98Lifebar, indexKOF98_A_Yashiro },
    { _T("Yashiro A - Win Screen Portrait/sprite"),  0x2e40f0, 0x2e41f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yashiro },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_B[] =
{
    { _T("Yashiro B - Main"),  0x2e41f0, 0x2e4210, indexKOF98_A_Yashiro },
    { _T("Yashiro B - Extra 1"),  0x2e4210, 0x2e4230, indexKOF98_A_Yashiro },
    { _T("Yashiro B - Extra 2"),  0x2e4230, 0x2e4250, indexKOF98_A_Yashiro },
    { _T("Yashiro B - Max Mode"),  0x2e4250, 0x2e4270, indexKOF98_A_Yashiro },
    { _T("Yashiro B - Extra 3"),  0x2e4270, 0x2e4290, indexKOF98_A_Yashiro },
    { _T("Yashiro B - Extra 4"),  0x2e4290, 0x2e42b0, indexKOF98_A_Yashiro },
    { _T("Yashiro B - Order Select"),  0x2e42b0, 0x2e42d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Yashiro },
    { _T("Yashiro B - Life Bar Portrait"),  0x2e42d0, 0x2e42f0, indexKOFSprites_98Lifebar, indexKOF98_A_Yashiro },
    { _T("Yashiro B - Win Screen Portrait/sprite"),  0x2e42f0, 0x2e43f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yashiro },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_C[] =
{
    { _T("Yashiro C - Main"),  0x2e43f0, 0x2e4410, indexKOF98_A_Yashiro },
    { _T("Yashiro C - Extra 1"),  0x2e4410, 0x2e4430, indexKOF98_A_Yashiro },
    { _T("Yashiro C - Extra 2"),  0x2e4430, 0x2e4450, indexKOF98_A_Yashiro },
    { _T("Yashiro C - Max Mode"),  0x2e4450, 0x2e4470, indexKOF98_A_Yashiro },
    { _T("Yashiro C - Extra 3"),  0x2e4470, 0x2e4490, indexKOF98_A_Yashiro },
    { _T("Yashiro C - Extra 4"),  0x2e4490, 0x2e44b0, indexKOF98_A_Yashiro },
    { _T("Yashiro C - Order Select"),  0x2e44b0, 0x2e44d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Yashiro },
    { _T("Yashiro C - Life Bar Portrait"),  0x2e44d0, 0x2e44f0, indexKOFSprites_98Lifebar, indexKOF98_A_Yashiro },
    { _T("Yashiro C - Win Screen Portrait/sprite"),  0x2e44f0, 0x2e45f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yashiro },
};

const sGame_PaletteDataset KOF98_A_Yashiro_PALETTE_D[] =
{
    { _T("Yashiro D - Main"),  0x2e45f0, 0x2e4610, indexKOF98_A_Yashiro },
    { _T("Yashiro D - Extra 1"),  0x2e4610, 0x2e4630, indexKOF98_A_Yashiro },
    { _T("Yashiro D - Extra 2"),  0x2e4630, 0x2e4650, indexKOF98_A_Yashiro },
    { _T("Yashiro D - Max Mode"),  0x2e4650, 0x2e4670, indexKOF98_A_Yashiro },
    { _T("Yashiro D - Extra 3"),  0x2e4670, 0x2e4690, indexKOF98_A_Yashiro },
    { _T("Yashiro D - Extra 4"),  0x2e4690, 0x2e46b0, indexKOF98_A_Yashiro },
    { _T("Yashiro D - Order Select"),  0x2e46b0, 0x2e46d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Yashiro },
    { _T("Yashiro D - Life Bar Portrait"),  0x2e46d0, 0x2e46f0, indexKOFSprites_98Lifebar, indexKOF98_A_Yashiro },
    { _T("Yashiro D - Win Screen Portrait/sprite"),  0x2e46f0, 0x2e47f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yashiro },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_A[] =
{
    { _T("Shermie A - Main"),  0x2e47f0, 0x2e4810, indexKOF98_A_Shermie },
    { _T("Shermie A - Extra 1"),  0x2e4810, 0x2e4830, indexKOF98_A_Shermie },
    { _T("Shermie A - Extra 2"),  0x2e4830, 0x2e4850, indexKOF98_A_Shermie },
    { _T("Shermie A - Max Mode"),  0x2e4850, 0x2e4870, indexKOF98_A_Shermie },
    { _T("Shermie A - Extra 3"),  0x2e4870, 0x2e4890, indexKOF98_A_Shermie },
    { _T("Shermie A - Extra 4"),  0x2e4890, 0x2e48b0, indexKOF98_A_Shermie },
    { _T("Shermie A - Order Select"),  0x2e48b0, 0x2e48d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Shermie },
    { _T("Shermie A - Life Bar Portrait"),  0x2e48d0, 0x2e48f0, indexKOFSprites_98Lifebar, indexKOF98_A_Shermie },
    { _T("Shermie A - Win Screen Portrait/sprite"),  0x2e48f0, 0x2e49f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Shermie },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_B[] =
{
    { _T("Shermie B - Main"),  0x2e49f0, 0x2e4a10, indexKOF98_A_Shermie },
    { _T("Shermie B - Extra 1"),  0x2e4a10, 0x2e4a30, indexKOF98_A_Shermie },
    { _T("Shermie B - Extra 2"),  0x2e4a30, 0x2e4a50, indexKOF98_A_Shermie },
    { _T("Shermie B - Max Mode"),  0x2e4a50, 0x2e4a70, indexKOF98_A_Shermie },
    { _T("Shermie B - Extra 3"),  0x2e4a70, 0x2e4a90, indexKOF98_A_Shermie },
    { _T("Shermie B - Extra 4"),  0x2e4a90, 0x2e4ab0, indexKOF98_A_Shermie },
    { _T("Shermie B - Order Select"),  0x2e4ab0, 0x2e4ad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Shermie },
    { _T("Shermie B - Life Bar Portrait"),  0x2e4ad0, 0x2e4af0, indexKOFSprites_98Lifebar, indexKOF98_A_Shermie },
    { _T("Shermie B - Win Screen Portrait/sprite"),  0x2e4af0, 0x2e4bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Shermie },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_C[] =
{
    { _T("Shermie C - Main"),  0x2e4bf0, 0x2e4c10, indexKOF98_A_Shermie },
    { _T("Shermie C - Extra 1"),  0x2e4c10, 0x2e4c30, indexKOF98_A_Shermie },
    { _T("Shermie C - Extra 2"),  0x2e4c30, 0x2e4c50, indexKOF98_A_Shermie },
    { _T("Shermie C - Max Mode"),  0x2e4c50, 0x2e4c70, indexKOF98_A_Shermie },
    { _T("Shermie C - Extra 3"),  0x2e4c70, 0x2e4c90, indexKOF98_A_Shermie },
    { _T("Shermie C - Extra 4"),  0x2e4c90, 0x2e4cb0, indexKOF98_A_Shermie },
    { _T("Shermie C - Order Select"),  0x2e4cb0, 0x2e4cd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Shermie },
    { _T("Shermie C - Life Bar Portrait"),  0x2e4cd0, 0x2e4cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Shermie },
    { _T("Shermie C - Win Screen Portrait/sprite"),  0x2e4cf0, 0x2e4df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Shermie },
};

const sGame_PaletteDataset KOF98_A_Shermie_PALETTE_D[] =
{
    { _T("Shermie D - Main"),  0x2e4df0, 0x2e4e10, indexKOF98_A_Shermie },
    { _T("Shermie D - Extra 1"),  0x2e4e10, 0x2e4e30, indexKOF98_A_Shermie },
    { _T("Shermie D - Extra 2"),  0x2e4e30, 0x2e4e50, indexKOF98_A_Shermie },
    { _T("Shermie D - Max Mode"),  0x2e4e50, 0x2e4e70, indexKOF98_A_Shermie },
    { _T("Shermie D - Extra 3"),  0x2e4e70, 0x2e4e90, indexKOF98_A_Shermie },
    { _T("Shermie D - Extra 4"),  0x2e4e90, 0x2e4eb0, indexKOF98_A_Shermie },
    { _T("Shermie D - Order Select"),  0x2e4eb0, 0x2e4ed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Shermie },
    { _T("Shermie D - Life Bar Portrait"),  0x2e4ed0, 0x2e4ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Shermie },
    { _T("Shermie D - Win Screen Portrait/sprite"),  0x2e4ef0, 0x2e4ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Shermie },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_A[] =
{
    { _T("Chris A - Main"),  0x2e4ff0, 0x2e5010, indexKOF98_A_Chris },
    { _T("Chris A - Extra 1"),  0x2e5010, 0x2e5030, indexKOF98_A_Chris },
    { _T("Chris A - Extra 2"),  0x2e5030, 0x2e5050, indexKOF98_A_Chris },
    { _T("Chris A - Max Mode"),  0x2e5050, 0x2e5070, indexKOF98_A_Chris },
    { _T("Chris A - Extra 3"),  0x2e5070, 0x2e5090, indexKOF98_A_Chris },
    { _T("Chris A - Extra 4"),  0x2e5090, 0x2e50b0, indexKOF98_A_Chris },
    { _T("Chris A - Order Select"),  0x2e50b0, 0x2e50d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chris },
    { _T("Chris A - Life Bar Portrait"),  0x2e50d0, 0x2e50f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chris },
    { _T("Chris A - Win Screen Portrait/sprite"),  0x2e50f0, 0x2e51f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chris },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_B[] =
{
    { _T("Chris B - Main"),  0x2e51f0, 0x2e5210, indexKOF98_A_Chris },
    { _T("Chris B - Extra 1"),  0x2e5210, 0x2e5230, indexKOF98_A_Chris },
    { _T("Chris B - Extra 2"),  0x2e5230, 0x2e5250, indexKOF98_A_Chris },
    { _T("Chris B - Max Mode"),  0x2e5250, 0x2e5270, indexKOF98_A_Chris },
    { _T("Chris B - Extra 3"),  0x2e5270, 0x2e5290, indexKOF98_A_Chris },
    { _T("Chris B - Extra 4"),  0x2e5290, 0x2e52b0, indexKOF98_A_Chris },
    { _T("Chris B - Order Select"),  0x2e52b0, 0x2e52d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chris },
    { _T("Chris B - Life Bar Portrait"),  0x2e52d0, 0x2e52f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chris },
    { _T("Chris B - Win Screen Portrait/sprite"),  0x2e52f0, 0x2e53f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chris },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_C[] =
{
    { _T("Chris C - Main"),  0x2e53f0, 0x2e5410, indexKOF98_A_Chris },
    { _T("Chris C - Extra 1"),  0x2e5410, 0x2e5430, indexKOF98_A_Chris },
    { _T("Chris C - Extra 2"),  0x2e5430, 0x2e5450, indexKOF98_A_Chris },
    { _T("Chris C - Max Mode"),  0x2e5450, 0x2e5470, indexKOF98_A_Chris },
    { _T("Chris C - Extra 3"),  0x2e5470, 0x2e5490, indexKOF98_A_Chris },
    { _T("Chris C - Extra 4"),  0x2e5490, 0x2e54b0, indexKOF98_A_Chris },
    { _T("Chris C - Order Select"),  0x2e54b0, 0x2e54d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chris },
    { _T("Chris C - Life Bar Portrait"),  0x2e54d0, 0x2e54f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chris },
    { _T("Chris C - Win Screen Portrait/sprite"),  0x2e54f0, 0x2e55f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chris },
};

const sGame_PaletteDataset KOF98_A_Chris_PALETTE_D[] =
{
    { _T("Chris D - Main"),  0x2e55f0, 0x2e5610, indexKOF98_A_Chris },
    { _T("Chris D - Extra 1"),  0x2e5610, 0x2e5630, indexKOF98_A_Chris },
    { _T("Chris D - Extra 2"),  0x2e5630, 0x2e5650, indexKOF98_A_Chris },
    { _T("Chris D - Max Mode"),  0x2e5650, 0x2e5670, indexKOF98_A_Chris },
    { _T("Chris D - Extra 3"),  0x2e5670, 0x2e5690, indexKOF98_A_Chris },
    { _T("Chris D - Extra 4"),  0x2e5690, 0x2e56b0, indexKOF98_A_Chris },
    { _T("Chris D - Order Select"),  0x2e56b0, 0x2e56d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Chris },
    { _T("Chris D - Life Bar Portrait"),  0x2e56d0, 0x2e56f0, indexKOFSprites_98Lifebar, indexKOF98_A_Chris },
    { _T("Chris D - Win Screen Portrait/sprite"),  0x2e56f0, 0x2e57f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Chris },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_A[] =
{
    { _T("Yamazaki A - Main"),  0x2e57f0, 0x2e5810, indexKOF98_A_Yamazaki },
    { _T("Yamazaki A - Extra 1"),  0x2e5810, 0x2e5830, indexKOF98_A_Yamazaki },
    { _T("Yamazaki A - Extra 2"),  0x2e5830, 0x2e5850, indexKOF98_A_Yamazaki },
    { _T("Yamazaki A - Max Mode"),  0x2e5850, 0x2e5870, indexKOF98_A_Yamazaki },
    { _T("Yamazaki A - Extra 3"),  0x2e5870, 0x2e5890, indexKOF98_A_Yamazaki },
    { _T("Yamazaki A - Extra 4"),  0x2e5890, 0x2e58b0, indexKOF98_A_Yamazaki },
    { _T("Yamazaki A - Order Select"),  0x2e58b0, 0x2e58d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Yamazaki },
    { _T("Yamazaki A - Life Bar Portrait"),  0x2e58d0, 0x2e58f0, indexKOFSprites_98Lifebar, indexKOF98_A_Yamazaki },
    { _T("Yamazaki A - Win Screen Portrait/sprite"),  0x2e58f0, 0x2e59f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yamazaki },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_B[] =
{
    { _T("Yamazaki B - Main"),  0x2e59f0, 0x2e5a10, indexKOF98_A_Yamazaki },
    { _T("Yamazaki B - Extra 1"),  0x2e5a10, 0x2e5a30, indexKOF98_A_Yamazaki },
    { _T("Yamazaki B - Extra 2"),  0x2e5a30, 0x2e5a50, indexKOF98_A_Yamazaki },
    { _T("Yamazaki B - Max Mode"),  0x2e5a50, 0x2e5a70, indexKOF98_A_Yamazaki },
    { _T("Yamazaki B - Extra 3"),  0x2e5a70, 0x2e5a90, indexKOF98_A_Yamazaki },
    { _T("Yamazaki B - Extra 4"),  0x2e5a90, 0x2e5ab0, indexKOF98_A_Yamazaki },
    { _T("Yamazaki B - Order Select"),  0x2e5ab0, 0x2e5ad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Yamazaki },
    { _T("Yamazaki B - Life Bar Portrait"),  0x2e5ad0, 0x2e5af0, indexKOFSprites_98Lifebar, indexKOF98_A_Yamazaki },
    { _T("Yamazaki B - Win Screen Portrait/sprite"),  0x2e5af0, 0x2e5bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yamazaki },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_C[] =
{
    { _T("Yamazaki C - Main"),  0x2e5bf0, 0x2e5c10, indexKOF98_A_Yamazaki },
    { _T("Yamazaki C - Extra 1"),  0x2e5c10, 0x2e5c30, indexKOF98_A_Yamazaki },
    { _T("Yamazaki C - Extra 2"),  0x2e5c30, 0x2e5c50, indexKOF98_A_Yamazaki },
    { _T("Yamazaki C - Max Mode"),  0x2e5c50, 0x2e5c70, indexKOF98_A_Yamazaki },
    { _T("Yamazaki C - Extra 3"),  0x2e5c70, 0x2e5c90, indexKOF98_A_Yamazaki },
    { _T("Yamazaki C - Extra 4"),  0x2e5c90, 0x2e5cb0, indexKOF98_A_Yamazaki },
    { _T("Yamazaki C - Order Select"),  0x2e5cb0, 0x2e5cd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Yamazaki },
    { _T("Yamazaki C - Life Bar Portrait"),  0x2e5cd0, 0x2e5cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Yamazaki },
    { _T("Yamazaki C - Win Screen Portrait/sprite"),  0x2e5cf0, 0x2e5df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yamazaki },
};

const sGame_PaletteDataset KOF98_A_Yamazaki_PALETTE_D[] =
{
    { _T("Yamazaki D - Main"),  0x2e5df0, 0x2e5e10, indexKOF98_A_Yamazaki },
    { _T("Yamazaki D - Extra 1"),  0x2e5e10, 0x2e5e30, indexKOF98_A_Yamazaki },
    { _T("Yamazaki D - Extra 2"),  0x2e5e30, 0x2e5e50, indexKOF98_A_Yamazaki },
    { _T("Yamazaki D - Max Mode"),  0x2e5e50, 0x2e5e70, indexKOF98_A_Yamazaki },
    { _T("Yamazaki D - Extra 3"),  0x2e5e70, 0x2e5e90, indexKOF98_A_Yamazaki },
    { _T("Yamazaki D - Extra 4"),  0x2e5e90, 0x2e5eb0, indexKOF98_A_Yamazaki },
    { _T("Yamazaki D - Order Select"),  0x2e5eb0, 0x2e5ed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Yamazaki },
    { _T("Yamazaki D - Life Bar Portrait"),  0x2e5ed0, 0x2e5ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Yamazaki },
    { _T("Yamazaki D - Win Screen Portrait/sprite"),  0x2e5ef0, 0x2e5ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Yamazaki },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_A[] =
{
    { _T("Blue Mary A - Main"),  0x2e5ff0, 0x2e6010, indexKOF98_A_BlueMary },
    { _T("Blue Mary A - Extra 1"),  0x2e6010, 0x2e6030, indexKOF98_A_BlueMary },
    { _T("Blue Mary A - Extra 2"),  0x2e6030, 0x2e6050, indexKOF98_A_BlueMary },
    { _T("Blue Mary A - Max Mode"),  0x2e6050, 0x2e6070, indexKOF98_A_BlueMary },
    { _T("Blue Mary A - Extra 3"),  0x2e6070, 0x2e6090, indexKOF98_A_BlueMary },
    { _T("Blue Mary A - Extra 4"),  0x2e6090, 0x2e60b0, indexKOF98_A_BlueMary },
    { _T("Blue Mary A - Order Select"),  0x2e60b0, 0x2e60d0, indexKOFSprites_98OrderSelect, indexKOF98_A_BlueMary },
    { _T("Blue Mary A - Life Bar Portrait"),  0x2e60d0, 0x2e60f0, indexKOFSprites_98Lifebar, indexKOF98_A_BlueMary },
    { _T("Blue Mary A - Win Screen Portrait/sprite"),  0x2e60f0, 0x2e61f0, indexKOFSprites_98WinPortrait, indexKOF98_A_BlueMary },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_B[] =
{
    { _T("Blue Mary B - Main"),  0x2e61f0, 0x2e6210, indexKOF98_A_BlueMary },
    { _T("Blue Mary B - Extra 1"),  0x2e6210, 0x2e6230, indexKOF98_A_BlueMary },
    { _T("Blue Mary B - Extra 2"),  0x2e6230, 0x2e6250, indexKOF98_A_BlueMary },
    { _T("Blue Mary B - Max Mode"),  0x2e6250, 0x2e6270, indexKOF98_A_BlueMary },
    { _T("Blue Mary B - Extra 3"),  0x2e6270, 0x2e6290, indexKOF98_A_BlueMary },
    { _T("Blue Mary B - Extra 4"),  0x2e6290, 0x2e62b0, indexKOF98_A_BlueMary },
    { _T("Blue Mary B - Order Select"),  0x2e62b0, 0x2e62d0, indexKOFSprites_98OrderSelect, indexKOF98_A_BlueMary },
    { _T("Blue Mary B - Life Bar Portrait"),  0x2e62d0, 0x2e62f0, indexKOFSprites_98Lifebar, indexKOF98_A_BlueMary },
    { _T("Blue Mary B - Win Screen Portrait/sprite"),  0x2e62f0, 0x2e63f0, indexKOFSprites_98WinPortrait, indexKOF98_A_BlueMary },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_C[] =
{
    { _T("Blue Mary C - Main"),  0x2e63f0, 0x2e6410, indexKOF98_A_BlueMary },
    { _T("Blue Mary C - Extra 1"),  0x2e6410, 0x2e6430, indexKOF98_A_BlueMary },
    { _T("Blue Mary C - Extra 2"),  0x2e6430, 0x2e6450, indexKOF98_A_BlueMary },
    { _T("Blue Mary C - Max Mode"),  0x2e6450, 0x2e6470, indexKOF98_A_BlueMary },
    { _T("Blue Mary C - Extra 3"),  0x2e6470, 0x2e6490, indexKOF98_A_BlueMary },
    { _T("Blue Mary C - Extra 4"),  0x2e6490, 0x2e64b0, indexKOF98_A_BlueMary },
    { _T("Blue Mary C - Order Select"),  0x2e64b0, 0x2e64d0, indexKOFSprites_98OrderSelect, indexKOF98_A_BlueMary },
    { _T("Blue Mary C - Life Bar Portrait"),  0x2e64d0, 0x2e64f0, indexKOFSprites_98Lifebar, indexKOF98_A_BlueMary },
    { _T("Blue Mary C - Win Screen Portrait/sprite"),  0x2e64f0, 0x2e65f0, indexKOFSprites_98WinPortrait, indexKOF98_A_BlueMary },
};

const sGame_PaletteDataset KOF98_A_Blue_PALETTE_D[] =
{
    { _T("Blue Mary D - Main"),  0x2e65f0, 0x2e6610, indexKOF98_A_BlueMary },
    { _T("Blue Mary D - Extra 1"),  0x2e6610, 0x2e6630, indexKOF98_A_BlueMary },
    { _T("Blue Mary D - Extra 2"),  0x2e6630, 0x2e6650, indexKOF98_A_BlueMary },
    { _T("Blue Mary D - Max Mode"),  0x2e6650, 0x2e6670, indexKOF98_A_BlueMary },
    { _T("Blue Mary D - Extra 3"),  0x2e6670, 0x2e6690, indexKOF98_A_BlueMary },
    { _T("Blue Mary D - Extra 4"),  0x2e6690, 0x2e66b0, indexKOF98_A_BlueMary },
    { _T("Blue Mary D - Order Select"),  0x2e66b0, 0x2e66d0, indexKOFSprites_98OrderSelect, indexKOF98_A_BlueMary },
    { _T("Blue Mary D - Life Bar Portrait"),  0x2e66d0, 0x2e66f0, indexKOFSprites_98Lifebar, indexKOF98_A_BlueMary },
    { _T("Blue Mary D - Win Screen Portrait/sprite"),  0x2e66f0, 0x2e67f0, indexKOFSprites_98WinPortrait, indexKOF98_A_BlueMary },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_A[] =
{
    { _T("Billy A - Main"),  0x2e67f0, 0x2e6810, indexKOF98_A_Billy },
    { _T("Billy A - Extra 1"),  0x2e6810, 0x2e6830, indexKOF98_A_Billy },
    { _T("Billy A - Extra 2"),  0x2e6830, 0x2e6850, indexKOF98_A_Billy },
    { _T("Billy A - Max Mode"),  0x2e6850, 0x2e6870, indexKOF98_A_Billy },
    { _T("Billy A - Extra 3"),  0x2e6870, 0x2e6890, indexKOF98_A_Billy },
    { _T("Billy A - Extra 4"),  0x2e6890, 0x2e68b0, indexKOF98_A_Billy },
    { _T("Billy A - Order Select"),  0x2e68b0, 0x2e68d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Billy },
    { _T("Billy A - Life Bar Portrait"),  0x2e68d0, 0x2e68f0, indexKOFSprites_98Lifebar, indexKOF98_A_Billy },
    { _T("Billy A - Win Screen Portrait/sprite"),  0x2e68f0, 0x2e69f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Billy },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_B[] =
{
    { _T("Billy B - Main"),  0x2e69f0, 0x2e6a10, indexKOF98_A_Billy },
    { _T("Billy B - Extra 1"),  0x2e6a10, 0x2e6a30, indexKOF98_A_Billy },
    { _T("Billy B - Extra 2"),  0x2e6a30, 0x2e6a50, indexKOF98_A_Billy },
    { _T("Billy B - Max Mode"),  0x2e6a50, 0x2e6a70, indexKOF98_A_Billy },
    { _T("Billy B - Extra 3"),  0x2e6a70, 0x2e6a90, indexKOF98_A_Billy },
    { _T("Billy B - Extra 4"),  0x2e6a90, 0x2e6ab0, indexKOF98_A_Billy },
    { _T("Billy B - Order Select"),  0x2e6ab0, 0x2e6ad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Billy },
    { _T("Billy B - Life Bar Portrait"),  0x2e6ad0, 0x2e6af0, indexKOFSprites_98Lifebar, indexKOF98_A_Billy },
    { _T("Billy B - Win Screen Portrait/sprite"),  0x2e6af0, 0x2e6bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Billy },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_C[] =
{
    { _T("Billy C - Main"),  0x2e6bf0, 0x2e6c10, indexKOF98_A_Billy },
    { _T("Billy C - Extra 1"),  0x2e6c10, 0x2e6c30, indexKOF98_A_Billy },
    { _T("Billy C - Extra 2"),  0x2e6c30, 0x2e6c50, indexKOF98_A_Billy },
    { _T("Billy C - Max Mode"),  0x2e6c50, 0x2e6c70, indexKOF98_A_Billy },
    { _T("Billy C - Extra 3"),  0x2e6c70, 0x2e6c90, indexKOF98_A_Billy },
    { _T("Billy C - Extra 4"),  0x2e6c90, 0x2e6cb0, indexKOF98_A_Billy },
    { _T("Billy C - Order Select"),  0x2e6cb0, 0x2e6cd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Billy },
    { _T("Billy C - Life Bar Portrait"),  0x2e6cd0, 0x2e6cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Billy },
    { _T("Billy C - Win Screen Portrait/sprite"),  0x2e6cf0, 0x2e6df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Billy },
};

const sGame_PaletteDataset KOF98_A_Billy_PALETTE_D[] =
{
    { _T("Billy D - Main"),  0x2e6df0, 0x2e6e10, indexKOF98_A_Billy },
    { _T("Billy D - Extra 1"),  0x2e6e10, 0x2e6e30, indexKOF98_A_Billy },
    { _T("Billy D - Extra 2"),  0x2e6e30, 0x2e6e50, indexKOF98_A_Billy },
    { _T("Billy D - Max Mode"),  0x2e6e50, 0x2e6e70, indexKOF98_A_Billy },
    { _T("Billy D - Extra 3"),  0x2e6e70, 0x2e6e90, indexKOF98_A_Billy },
    { _T("Billy D - Extra 4"),  0x2e6e90, 0x2e6eb0, indexKOF98_A_Billy },
    { _T("Billy D - Order Select"),  0x2e6eb0, 0x2e6ed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Billy },
    { _T("Billy D - Life Bar Portrait"),  0x2e6ed0, 0x2e6ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Billy },
    { _T("Billy D - Win Screen Portrait/sprite"),  0x2e6ef0, 0x2e6ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Billy },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_A[] =
{
    { _T("Iori A - Main"),  0x2e6ff0, 0x2e7010, indexKOF98_A_Iori },
    { _T("Iori A - Extra 1"),  0x2e7010, 0x2e7030, indexKOF98_A_Iori },
    { _T("Iori A - Extra 2"),  0x2e7030, 0x2e7050, indexKOF98_A_Iori },
    { _T("Iori A - Max Mode"),  0x2e7050, 0x2e7070, indexKOF98_A_Iori },
    { _T("Iori A - Extra 3"),  0x2e7070, 0x2e7090, indexKOF98_A_Iori },
    { _T("Iori A - Extra 4"),  0x2e7090, 0x2e70b0, indexKOF98_A_Iori },
    { _T("Iori A - Order Select"),  0x2e70b0, 0x2e70d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Iori },
    { _T("Iori A - Life Bar Portrait"),  0x2e70d0, 0x2e70f0, indexKOFSprites_98Lifebar, indexKOF98_A_Iori },
    { _T("Iori A - Win Screen Portrait/sprite"),  0x2e70f0, 0x2e71f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Iori },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_B[] =
{
    { _T("Iori B - Main"),  0x2e71f0, 0x2e7210, indexKOF98_A_Iori },
    { _T("Iori B - Extra 1"),  0x2e7210, 0x2e7230, indexKOF98_A_Iori },
    { _T("Iori B - Extra 2"),  0x2e7230, 0x2e7250, indexKOF98_A_Iori },
    { _T("Iori B - Max Mode"),  0x2e7250, 0x2e7270, indexKOF98_A_Iori },
    { _T("Iori B - Extra 3"),  0x2e7270, 0x2e7290, indexKOF98_A_Iori },
    { _T("Iori B - Extra 4"),  0x2e7290, 0x2e72b0, indexKOF98_A_Iori },
    { _T("Iori B - Order Select"),  0x2e72b0, 0x2e72d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Iori },
    { _T("Iori B - Life Bar Portrait"),  0x2e72d0, 0x2e72f0, indexKOFSprites_98Lifebar, indexKOF98_A_Iori },
    { _T("Iori B - Win Screen Portrait/sprite"),  0x2e72f0, 0x2e73f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Iori },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_C[] =
{
    { _T("Iori C - Main"),  0x2e73f0, 0x2e7410, indexKOF98_A_Iori },
    { _T("Iori C - Extra 1"),  0x2e7410, 0x2e7430, indexKOF98_A_Iori },
    { _T("Iori C - Extra 2"),  0x2e7430, 0x2e7450, indexKOF98_A_Iori },
    { _T("Iori C - Max Mode"),  0x2e7450, 0x2e7470, indexKOF98_A_Iori },
    { _T("Iori C - Extra 3"),  0x2e7470, 0x2e7490, indexKOF98_A_Iori },
    { _T("Iori C - Extra 4"),  0x2e7490, 0x2e74b0, indexKOF98_A_Iori },
    { _T("Iori C - Order Select"),  0x2e74b0, 0x2e74d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Iori },
    { _T("Iori C - Life Bar Portrait"),  0x2e74d0, 0x2e74f0, indexKOFSprites_98Lifebar, indexKOF98_A_Iori },
    { _T("Iori C - Win Screen Portrait/sprite"),  0x2e74f0, 0x2e75f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Iori },
};

const sGame_PaletteDataset KOF98_A_Iori_PALETTE_D[] =
{
    { _T("Iori D - Main"),  0x2e75f0, 0x2e7610, indexKOF98_A_Iori },
    { _T("Iori D - Extra 1"),  0x2e7610, 0x2e7630, indexKOF98_A_Iori },
    { _T("Iori D - Extra 2"),  0x2e7630, 0x2e7650, indexKOF98_A_Iori },
    { _T("Iori D - Max Mode"),  0x2e7650, 0x2e7670, indexKOF98_A_Iori },
    { _T("Iori D - Extra 3"),  0x2e7670, 0x2e7690, indexKOF98_A_Iori },
    { _T("Iori D - Extra 4"),  0x2e7690, 0x2e76b0, indexKOF98_A_Iori },
    { _T("Iori D - Order Select"),  0x2e76b0, 0x2e76d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Iori },
    { _T("Iori D - Life Bar Portrait"),  0x2e76d0, 0x2e76f0, indexKOFSprites_98Lifebar, indexKOF98_A_Iori },
    { _T("Iori D - Win Screen Portrait/sprite"),  0x2e76f0, 0x2e77f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Iori },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_A[] =
{
    { _T("Mature A - Main"),  0x2e77f0, 0x2e7810, indexKOF98_A_Mature },
    { _T("Mature A - Extra 1"),  0x2e7810, 0x2e7830, indexKOF98_A_Mature },
    { _T("Mature A - Extra 2"),  0x2e7830, 0x2e7850, indexKOF98_A_Mature },
    { _T("Mature A - Max Mode"),  0x2e7850, 0x2e7870, indexKOF98_A_Mature },
    { _T("Mature A - Extra 3"),  0x2e7870, 0x2e7890, indexKOF98_A_Mature },
    { _T("Mature A - Extra 4"),  0x2e7890, 0x2e78b0, indexKOF98_A_Mature },
    { _T("Mature A - Order Select"),  0x2e78b0, 0x2e78d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Mature },
    { _T("Mature A - Life Bar Portrait"),  0x2e78d0, 0x2e78f0, indexKOFSprites_98Lifebar, indexKOF98_A_Mature },
    { _T("Mature A - Win Screen Portrait/sprite"),  0x2e78f0, 0x2e79f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Mature },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_B[] =
{
    { _T("Mature B - Main"),  0x2e79f0, 0x2e7a10, indexKOF98_A_Mature },
    { _T("Mature B - Extra 1"),  0x2e7a10, 0x2e7a30, indexKOF98_A_Mature },
    { _T("Mature B - Extra 2"),  0x2e7a30, 0x2e7a50, indexKOF98_A_Mature },
    { _T("Mature B - Max Mode"),  0x2e7a50, 0x2e7a70, indexKOF98_A_Mature },
    { _T("Mature B - Extra 3"),  0x2e7a70, 0x2e7a90, indexKOF98_A_Mature },
    { _T("Mature B - Extra 4"),  0x2e7a90, 0x2e7ab0, indexKOF98_A_Mature },
    { _T("Mature B - Order Select"),  0x2e7ab0, 0x2e7ad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Mature },
    { _T("Mature B - Life Bar Portrait"),  0x2e7ad0, 0x2e7af0, indexKOFSprites_98Lifebar, indexKOF98_A_Mature },
    { _T("Mature B - Win Screen Portrait/sprite"),  0x2e7af0, 0x2e7bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Mature },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_C[] =
{
    { _T("Mature C - Main"),  0x2e7bf0, 0x2e7c10, indexKOF98_A_Mature },
    { _T("Mature C - Extra 1"),  0x2e7c10, 0x2e7c30, indexKOF98_A_Mature },
    { _T("Mature C - Extra 2"),  0x2e7c30, 0x2e7c50, indexKOF98_A_Mature },
    { _T("Mature C - Max Mode"),  0x2e7c50, 0x2e7c70, indexKOF98_A_Mature },
    { _T("Mature C - Extra 3"),  0x2e7c70, 0x2e7c90, indexKOF98_A_Mature },
    { _T("Mature C - Extra 4"),  0x2e7c90, 0x2e7cb0, indexKOF98_A_Mature },
    { _T("Mature C - Order Select"),  0x2e7cb0, 0x2e7cd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Mature },
    { _T("Mature C - Life Bar Portrait"),  0x2e7cd0, 0x2e7cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Mature },
    { _T("Mature C - Win Screen Portrait/sprite"),  0x2e7cf0, 0x2e7df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Mature },
};

const sGame_PaletteDataset KOF98_A_Mature_PALETTE_D[] =
{
    { _T("Mature D - Main"),  0x2e7df0, 0x2e7e10, indexKOF98_A_Mature },
    { _T("Mature D - Extra 1"),  0x2e7e10, 0x2e7e30, indexKOF98_A_Mature },
    { _T("Mature D - Extra 2"),  0x2e7e30, 0x2e7e50, indexKOF98_A_Mature },
    { _T("Mature D - Max Mode"),  0x2e7e50, 0x2e7e70, indexKOF98_A_Mature },
    { _T("Mature D - Extra 3"),  0x2e7e70, 0x2e7e90, indexKOF98_A_Mature },
    { _T("Mature D - Extra 4"),  0x2e7e90, 0x2e7eb0, indexKOF98_A_Mature },
    { _T("Mature D - Order Select"),  0x2e7eb0, 0x2e7ed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Mature },
    { _T("Mature D - Life Bar Portrait"),  0x2e7ed0, 0x2e7ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Mature },
    { _T("Mature D - Win Screen Portrait/sprite"),  0x2e7ef0, 0x2e7ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Mature },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_A[] =
{
    { _T("Vice A - Main"),  0x2e7ff0, 0x2e8010, indexKOF98_A_Vice },
    { _T("Vice A - Extra 1"),  0x2e8010, 0x2e8030, indexKOF98_A_Vice },
    { _T("Vice A - Extra 2"),  0x2e8030, 0x2e8050, indexKOF98_A_Vice },
    { _T("Vice A - Max Mode"),  0x2e8050, 0x2e8070, indexKOF98_A_Vice },
    { _T("Vice A - Extra 3"),  0x2e8070, 0x2e8090, indexKOF98_A_Vice },
    { _T("Vice A - Extra 4"),  0x2e8090, 0x2e80b0, indexKOF98_A_Vice },
    { _T("Vice A - Order Select"),  0x2e80b0, 0x2e80d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Vice },
    { _T("Vice A - Life Bar Portrait"),  0x2e80d0, 0x2e80f0, indexKOFSprites_98Lifebar, indexKOF98_A_Vice },
    { _T("Vice A - Win Screen Portrait/sprite"),  0x2e80f0, 0x2e81f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Vice },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_B[] =
{
    { _T("Vice B - Main"),  0x2e81f0, 0x2e8210, indexKOF98_A_Vice },
    { _T("Vice B - Extra 1"),  0x2e8210, 0x2e8230, indexKOF98_A_Vice },
    { _T("Vice B - Extra 2"),  0x2e8230, 0x2e8250, indexKOF98_A_Vice },
    { _T("Vice B - Max Mode"),  0x2e8250, 0x2e8270, indexKOF98_A_Vice },
    { _T("Vice B - Extra 3"),  0x2e8270, 0x2e8290, indexKOF98_A_Vice },
    { _T("Vice B - Extra 4"),  0x2e8290, 0x2e82b0, indexKOF98_A_Vice },
    { _T("Vice B - Order Select"),  0x2e82b0, 0x2e82d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Vice },
    { _T("Vice B - Life Bar Portrait"),  0x2e82d0, 0x2e82f0, indexKOFSprites_98Lifebar, indexKOF98_A_Vice },
    { _T("Vice B - Win Screen Portrait/sprite"),  0x2e82f0, 0x2e83f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Vice },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_C[] =
{
    { _T("Vice C - Main"),  0x2e83f0, 0x2e8410, indexKOF98_A_Vice },
    { _T("Vice C - Extra 1"),  0x2e8410, 0x2e8430, indexKOF98_A_Vice },
    { _T("Vice C - Extra 2"),  0x2e8430, 0x2e8450, indexKOF98_A_Vice },
    { _T("Vice C - Max Mode"),  0x2e8450, 0x2e8470, indexKOF98_A_Vice },
    { _T("Vice C - Extra 3"),  0x2e8470, 0x2e8490, indexKOF98_A_Vice },
    { _T("Vice C - Extra 4"),  0x2e8490, 0x2e84b0, indexKOF98_A_Vice },
    { _T("Vice C - Order Select"),  0x2e84b0, 0x2e84d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Vice },
    { _T("Vice C - Life Bar Portrait"),  0x2e84d0, 0x2e84f0, indexKOFSprites_98Lifebar, indexKOF98_A_Vice },
    { _T("Vice C - Win Screen Portrait/sprite"),  0x2e84f0, 0x2e85f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Vice },
};

const sGame_PaletteDataset KOF98_A_Vice_PALETTE_D[] =
{
    { _T("Vice D - Main"),  0x2e85f0, 0x2e8610, indexKOF98_A_Vice },
    { _T("Vice D - Extra 1"),  0x2e8610, 0x2e8630, indexKOF98_A_Vice },
    { _T("Vice D - Extra 2"),  0x2e8630, 0x2e8650, indexKOF98_A_Vice },
    { _T("Vice D - Max Mode"),  0x2e8650, 0x2e8670, indexKOF98_A_Vice },
    { _T("Vice D - Extra 3"),  0x2e8670, 0x2e8690, indexKOF98_A_Vice },
    { _T("Vice D - Extra 4"),  0x2e8690, 0x2e86b0, indexKOF98_A_Vice },
    { _T("Vice D - Order Select"),  0x2e86b0, 0x2e86d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Vice },
    { _T("Vice D - Life Bar Portrait"),  0x2e86d0, 0x2e86f0, indexKOFSprites_98Lifebar, indexKOF98_A_Vice },
    { _T("Vice D - Win Screen Portrait/sprite"),  0x2e86f0, 0x2e87f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Vice },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_A[] =
{
    { _T("Heidern A - Main"),  0x2e87f0, 0x2e8810, indexKOF98_A_Heidern },
    { _T("Heidern A - Extra 1"),  0x2e8810, 0x2e8830, indexKOF98_A_Heidern },
    { _T("Heidern A - Extra 2"),  0x2e8830, 0x2e8850, indexKOF98_A_Heidern },
    { _T("Heidern A - Max Mode"),  0x2e8850, 0x2e8870, indexKOF98_A_Heidern },
    { _T("Heidern A - Extra 3"),  0x2e8870, 0x2e8890, indexKOF98_A_Heidern },
    { _T("Heidern A - Extra 4"),  0x2e8890, 0x2e88b0, indexKOF98_A_Heidern },
    { _T("Heidern A - Order Select"),  0x2e88b0, 0x2e88d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Heidern },
    { _T("Heidern A - Life Bar Portrait"),  0x2e88d0, 0x2e88f0, indexKOFSprites_98Lifebar, indexKOF98_A_Heidern },
    { _T("Heidern A - Win Screen Portrait/sprite"),  0x2e88f0, 0x2e89f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Heidern },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_B[] =
{
    { _T("Heidern B - Main"),  0x2e89f0, 0x2e8a10, indexKOF98_A_Heidern },
    { _T("Heidern B - Extra 1"),  0x2e8a10, 0x2e8a30, indexKOF98_A_Heidern },
    { _T("Heidern B - Extra 2"),  0x2e8a30, 0x2e8a50, indexKOF98_A_Heidern },
    { _T("Heidern B - Max Mode"),  0x2e8a50, 0x2e8a70, indexKOF98_A_Heidern },
    { _T("Heidern B - Extra 3"),  0x2e8a70, 0x2e8a90, indexKOF98_A_Heidern },
    { _T("Heidern B - Extra 4"),  0x2e8a90, 0x2e8ab0, indexKOF98_A_Heidern },
    { _T("Heidern B - Order Select"),  0x2e8ab0, 0x2e8ad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Heidern },
    { _T("Heidern B - Life Bar Portrait"),  0x2e8ad0, 0x2e8af0, indexKOFSprites_98Lifebar, indexKOF98_A_Heidern },
    { _T("Heidern B - Win Screen Portrait/sprite"),  0x2e8af0, 0x2e8bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Heidern },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_C[] =
{
    { _T("Heidern C - Main"),  0x2e8bf0, 0x2e8c10, indexKOF98_A_Heidern },
    { _T("Heidern C - Extra 1"),  0x2e8c10, 0x2e8c30, indexKOF98_A_Heidern },
    { _T("Heidern C - Extra 2"),  0x2e8c30, 0x2e8c50, indexKOF98_A_Heidern },
    { _T("Heidern C - Max Mode"),  0x2e8c50, 0x2e8c70, indexKOF98_A_Heidern },
    { _T("Heidern C - Extra 3"),  0x2e8c70, 0x2e8c90, indexKOF98_A_Heidern },
    { _T("Heidern C - Extra 4"),  0x2e8c90, 0x2e8cb0, indexKOF98_A_Heidern },
    { _T("Heidern C - Order Select"),  0x2e8cb0, 0x2e8cd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Heidern },
    { _T("Heidern C - Life Bar Portrait"),  0x2e8cd0, 0x2e8cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Heidern },
    { _T("Heidern C - Win Screen Portrait/sprite"),  0x2e8cf0, 0x2e8df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Heidern },
};

const sGame_PaletteDataset KOF98_A_Heidern_PALETTE_D[] =
{
    { _T("Heidern D - Main"),  0x2e8df0, 0x2e8e10, indexKOF98_A_Heidern },
    { _T("Heidern D - Extra 1"),  0x2e8e10, 0x2e8e30, indexKOF98_A_Heidern },
    { _T("Heidern D - Extra 2"),  0x2e8e30, 0x2e8e50, indexKOF98_A_Heidern },
    { _T("Heidern D - Max Mode"),  0x2e8e50, 0x2e8e70, indexKOF98_A_Heidern },
    { _T("Heidern D - Extra 3"),  0x2e8e70, 0x2e8e90, indexKOF98_A_Heidern },
    { _T("Heidern D - Extra 4"),  0x2e8e90, 0x2e8eb0, indexKOF98_A_Heidern },
    { _T("Heidern D - Order Select"),  0x2e8eb0, 0x2e8ed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Heidern },
    { _T("Heidern D - Life Bar Portrait"),  0x2e8ed0, 0x2e8ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Heidern },
    { _T("Heidern D - Win Screen Portrait/sprite"),  0x2e8ef0, 0x2e8ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Heidern },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_A[] =
{
    { _T("Takuma A - Main"),  0x2e8ff0, 0x2e9010, indexKOF98_A_Takuma },
    { _T("Takuma A - Extra 1"),  0x2e9010, 0x2e9030, indexKOF98_A_Takuma },
    { _T("Takuma A - Extra 2"),  0x2e9030, 0x2e9050, indexKOF98_A_Takuma },
    { _T("Takuma A - Max Mode"),  0x2e9050, 0x2e9070, indexKOF98_A_Takuma },
    { _T("Takuma A - Extra 3"),  0x2e9070, 0x2e9090, indexKOF98_A_Takuma },
    { _T("Takuma A - Extra 4"),  0x2e9090, 0x2e90b0, indexKOF98_A_Takuma },
    { _T("Takuma A - Order Select"),  0x2e90b0, 0x2e90d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Takuma },
    { _T("Takuma A - Life Bar Portrait"),  0x2e90d0, 0x2e90f0, indexKOFSprites_98Lifebar, indexKOF98_A_Takuma },
    { _T("Takuma A - Win Screen Portrait/sprite"),  0x2e90f0, 0x2e91f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Takuma },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_B[] =
{
    { _T("Takuma B - Main"),  0x2e91f0, 0x2e9210, indexKOF98_A_Takuma },
    { _T("Takuma B - Extra 1"),  0x2e9210, 0x2e9230, indexKOF98_A_Takuma },
    { _T("Takuma B - Extra 2"),  0x2e9230, 0x2e9250, indexKOF98_A_Takuma },
    { _T("Takuma B - Max Mode"),  0x2e9250, 0x2e9270, indexKOF98_A_Takuma },
    { _T("Takuma B - Extra 3"),  0x2e9270, 0x2e9290, indexKOF98_A_Takuma },
    { _T("Takuma B - Extra 4"),  0x2e9290, 0x2e92b0, indexKOF98_A_Takuma },
    { _T("Takuma B - Order Select"),  0x2e92b0, 0x2e92d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Takuma },
    { _T("Takuma B - Life Bar Portrait"),  0x2e92d0, 0x2e92f0, indexKOFSprites_98Lifebar, indexKOF98_A_Takuma },
    { _T("Takuma B - Win Screen Portrait/sprite"),  0x2e92f0, 0x2e93f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Takuma },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_C[] =
{
    { _T("Takuma C - Main"),  0x2e93f0, 0x2e9410, indexKOF98_A_Takuma },
    { _T("Takuma C - Extra 1"),  0x2e9410, 0x2e9430, indexKOF98_A_Takuma },
    { _T("Takuma C - Extra 2"),  0x2e9430, 0x2e9450, indexKOF98_A_Takuma },
    { _T("Takuma C - Max Mode"),  0x2e9450, 0x2e9470, indexKOF98_A_Takuma },
    { _T("Takuma C - Extra 3"),  0x2e9470, 0x2e9490, indexKOF98_A_Takuma },
    { _T("Takuma C - Extra 4"),  0x2e9490, 0x2e94b0, indexKOF98_A_Takuma },
    { _T("Takuma C - Order Select"),  0x2e94b0, 0x2e94d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Takuma },
    { _T("Takuma C - Life Bar Portrait"),  0x2e94d0, 0x2e94f0, indexKOFSprites_98Lifebar, indexKOF98_A_Takuma },
    { _T("Takuma C - Win Screen Portrait/sprite"),  0x2e94f0, 0x2e95f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Takuma },
};

const sGame_PaletteDataset KOF98_A_Takuma_PALETTE_D[] =
{
    { _T("Takuma D - Main"),  0x2e95f0, 0x2e9610, indexKOF98_A_Takuma },
    { _T("Takuma D - Extra 1"),  0x2e9610, 0x2e9630, indexKOF98_A_Takuma },
    { _T("Takuma D - Extra 2"),  0x2e9630, 0x2e9650, indexKOF98_A_Takuma },
    { _T("Takuma D - Max Mode"),  0x2e9650, 0x2e9670, indexKOF98_A_Takuma },
    { _T("Takuma D - Extra 3"),  0x2e9670, 0x2e9690, indexKOF98_A_Takuma },
    { _T("Takuma D - Extra 4"),  0x2e9690, 0x2e96b0, indexKOF98_A_Takuma },
    { _T("Takuma D - Order Select"),  0x2e96b0, 0x2e96d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Takuma },
    { _T("Takuma D - Life Bar Portrait"),  0x2e96d0, 0x2e96f0, indexKOFSprites_98Lifebar, indexKOF98_A_Takuma },
    { _T("Takuma D - Win Screen Portrait/sprite"),  0x2e96f0, 0x2e97f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Takuma },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_A[] =
{
    { _T("Saisyu A - Main"),  0x2e97f0, 0x2e9810, indexKOF98_A_Saisyu },
    { _T("Saisyu A - Extra 1"),  0x2e9810, 0x2e9830, indexKOF98_A_Saisyu },
    { _T("Saisyu A - Extra 2"),  0x2e9830, 0x2e9850, indexKOF98_A_Saisyu },
    { _T("Saisyu A - Max Mode"),  0x2e9850, 0x2e9870, indexKOF98_A_Saisyu },
    { _T("Saisyu A - Extra 3"),  0x2e9870, 0x2e9890, indexKOF98_A_Saisyu },
    { _T("Saisyu A - Extra 4"),  0x2e9890, 0x2e98b0, indexKOF98_A_Saisyu },
    { _T("Saisyu A - Order Select"),  0x2e98b0, 0x2e98d0, indexKOFSprites_98OrderSelect, 0x30 },
    { _T("Saisyu A - Life Bar Portrait"),  0x2e98d0, 0x2e98f0, indexKOFSprites_98Lifebar, indexKOF98_A_Saisyu },
    { _T("Saisyu A - Win Screen Portrait/sprite"),  0x2e98f0, 0x2e99f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Saisyu },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_B[] =
{
    { _T("Saisyu B - Main"),  0x2e99f0, 0x2e9a10, indexKOF98_A_Saisyu },
    { _T("Saisyu B - Extra 1"),  0x2e9a10, 0x2e9a30, indexKOF98_A_Saisyu },
    { _T("Saisyu B - Extra 2"),  0x2e9a30, 0x2e9a50, indexKOF98_A_Saisyu },
    { _T("Saisyu B - Max Mode"),  0x2e9a50, 0x2e9a70, indexKOF98_A_Saisyu },
    { _T("Saisyu B - Extra 3"),  0x2e9a70, 0x2e9a90, indexKOF98_A_Saisyu },
    { _T("Saisyu B - Extra 4"),  0x2e9a90, 0x2e9ab0, indexKOF98_A_Saisyu },
    { _T("Saisyu B - Order Select"),  0x2e9ab0, 0x2e9ad0, indexKOFSprites_98OrderSelect, 0x30 },
    { _T("Saisyu B - Life Bar Portrait"),  0x2e9ad0, 0x2e9af0, indexKOFSprites_98Lifebar, indexKOF98_A_Saisyu },
    { _T("Saisyu B - Win Screen Portrait/sprite"),  0x2e9af0, 0x2e9bf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Saisyu },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_C[] =
{
    { _T("Saisyu C - Main"),  0x2e9bf0, 0x2e9c10, indexKOF98_A_Saisyu },
    { _T("Saisyu C - Extra 1"),  0x2e9c10, 0x2e9c30, indexKOF98_A_Saisyu },
    { _T("Saisyu C - Extra 2"),  0x2e9c30, 0x2e9c50, indexKOF98_A_Saisyu },
    { _T("Saisyu C - Max Mode"),  0x2e9c50, 0x2e9c70, indexKOF98_A_Saisyu },
    { _T("Saisyu C - Extra 3"),  0x2e9c70, 0x2e9c90, indexKOF98_A_Saisyu },
    { _T("Saisyu C - Extra 4"),  0x2e9c90, 0x2e9cb0, indexKOF98_A_Saisyu },
    { _T("Saisyu C - Order Select"),  0x2e9cb0, 0x2e9cd0, indexKOFSprites_98OrderSelect, 0x30 },
    { _T("Saisyu C - Life Bar Portrait"),  0x2e9cd0, 0x2e9cf0, indexKOFSprites_98Lifebar, indexKOF98_A_Saisyu },
    { _T("Saisyu C - Win Screen Portrait/sprite"),  0x2e9cf0, 0x2e9df0, indexKOFSprites_98WinPortrait, indexKOF98_A_Saisyu },
};

const sGame_PaletteDataset KOF98_A_Saisyu_PALETTE_D[] =
{
    { _T("Saisyu D - Main"),  0x2e9df0, 0x2e9e10, indexKOF98_A_Saisyu },
    { _T("Saisyu D - Extra 1"),  0x2e9e10, 0x2e9e30, indexKOF98_A_Saisyu },
    { _T("Saisyu D - Extra 2"),  0x2e9e30, 0x2e9e50, indexKOF98_A_Saisyu },
    { _T("Saisyu D - Max Mode"),  0x2e9e50, 0x2e9e70, indexKOF98_A_Saisyu },
    { _T("Saisyu D - Extra 3"),  0x2e9e70, 0x2e9e90, indexKOF98_A_Saisyu },
    { _T("Saisyu D - Extra 4"),  0x2e9e90, 0x2e9eb0, indexKOF98_A_Saisyu },
    { _T("Saisyu D - Order Select"),  0x2e9eb0, 0x2e9ed0, indexKOFSprites_98OrderSelect, 0x30 },
    { _T("Saisyu D - Life Bar Portrait"),  0x2e9ed0, 0x2e9ef0, indexKOFSprites_98Lifebar, indexKOF98_A_Saisyu },
    { _T("Saisyu D - Win Screen Portrait/sprite"),  0x2e9ef0, 0x2e9ff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Saisyu },
};

const sGame_PaletteDataset KOF98_A_HeavyD_PALETTE_A[] =
{
    { _T("Heavy D! A - Main"),  0x2e9ff0, 0x2ea010, indexKOF98_A_HeavyD },
    { _T("Heavy D! A - Extra 1"),  0x2ea010, 0x2ea030, indexKOF98_A_HeavyD },
    { _T("Heavy D! A - Extra 2"),  0x2ea030, 0x2ea050, indexKOF98_A_HeavyD },
    { _T("Heavy D! A - Max Mode"),  0x2ea050, 0x2ea070, indexKOF98_A_HeavyD },
    { _T("Heavy D! A - Extra 3"),  0x2ea070, 0x2ea090, indexKOF98_A_HeavyD },
    { _T("Heavy D! A - Extra 4"),  0x2ea090, 0x2ea0b0, indexKOF98_A_HeavyD },
    { _T("Heavy D! A - Order Select"),  0x2ea0b0, 0x2ea0d0, indexKOFSprites_98OrderSelect, indexKOF98_A_HeavyD },
    { _T("Heavy D! A - Life Bar Portrait"),  0x2ea0d0, 0x2ea0f0, indexKOFSprites_98Lifebar, indexKOF98_A_HeavyD },
    { _T("Heavy D! A - Win Screen Portrait/sprite"),  0x2ea0f0, 0x2ea1f0, indexKOFSprites_98WinPortrait, indexKOF98_A_HeavyD },
};

const sGame_PaletteDataset KOF98_A_HeavyD_PALETTE_B[] =
{
    { _T("Heavy D! B - Main"),  0x2ea1f0, 0x2ea210, indexKOF98_A_HeavyD },
    { _T("Heavy D! B - Extra 1"),  0x2ea210, 0x2ea230, indexKOF98_A_HeavyD },
    { _T("Heavy D! B - Extra 2"),  0x2ea230, 0x2ea250, indexKOF98_A_HeavyD },
    { _T("Heavy D! B - Max Mode"),  0x2ea250, 0x2ea270, indexKOF98_A_HeavyD },
    { _T("Heavy D! B - Extra 3"),  0x2ea270, 0x2ea290, indexKOF98_A_HeavyD },
    { _T("Heavy D! B - Extra 4"),  0x2ea290, 0x2ea2b0, indexKOF98_A_HeavyD },
    { _T("Heavy D! B - Order Select"),  0x2ea2b0, 0x2ea2d0, indexKOFSprites_98OrderSelect, indexKOF98_A_HeavyD },
    { _T("Heavy D! B - Life Bar Portrait"),  0x2ea2d0, 0x2ea2f0, indexKOFSprites_98Lifebar, indexKOF98_A_HeavyD },
    { _T("Heavy D! B - Win Screen Portrait/sprite"),  0x2ea2f0, 0x2ea3f0, indexKOFSprites_98WinPortrait, indexKOF98_A_HeavyD },
};

const sGame_PaletteDataset KOF98_A_HeavyD_PALETTE_C[] =
{
    { _T("Heavy D! C - Main"),  0x2ea3f0, 0x2ea410, indexKOF98_A_HeavyD },
    { _T("Heavy D! C - Extra 1"),  0x2ea410, 0x2ea430, indexKOF98_A_HeavyD },
    { _T("Heavy D! C - Extra 2"),  0x2ea430, 0x2ea450, indexKOF98_A_HeavyD },
    { _T("Heavy D! C - Max Mode"),  0x2ea450, 0x2ea470, indexKOF98_A_HeavyD },
    { _T("Heavy D! C - Extra 3"),  0x2ea470, 0x2ea490, indexKOF98_A_HeavyD },
    { _T("Heavy D! C - Extra 4"),  0x2ea490, 0x2ea4b0, indexKOF98_A_HeavyD },
    { _T("Heavy D! C - Order Select"),  0x2ea4b0, 0x2ea4d0, indexKOFSprites_98OrderSelect, indexKOF98_A_HeavyD },
    { _T("Heavy D! C - Life Bar Portrait"),  0x2ea4d0, 0x2ea4f0, indexKOFSprites_98Lifebar, indexKOF98_A_HeavyD },
    { _T("Heavy D! C - Win Screen Portrait/sprite"),  0x2ea4f0, 0x2ea5f0, indexKOFSprites_98WinPortrait, indexKOF98_A_HeavyD },
};

const sGame_PaletteDataset KOF98_A_HeavyD_PALETTE_D[] =
{
    { _T("Heavy D! D - Main"),  0x2ea5f0, 0x2ea610, indexKOF98_A_HeavyD },
    { _T("Heavy D! D - Extra 1"),  0x2ea610, 0x2ea630, indexKOF98_A_HeavyD },
    { _T("Heavy D! D - Extra 2"),  0x2ea630, 0x2ea650, indexKOF98_A_HeavyD },
    { _T("Heavy D! D - Max Mode"),  0x2ea650, 0x2ea670, indexKOF98_A_HeavyD },
    { _T("Heavy D! D - Extra 3"),  0x2ea670, 0x2ea690, indexKOF98_A_HeavyD },
    { _T("Heavy D! D - Extra 4"),  0x2ea690, 0x2ea6b0, indexKOF98_A_HeavyD },
    { _T("Heavy D! D - Order Select"),  0x2ea6b0, 0x2ea6d0, indexKOFSprites_98OrderSelect, indexKOF98_A_HeavyD },
    { _T("Heavy D! D - Life Bar Portrait"),  0x2ea6d0, 0x2ea6f0, indexKOFSprites_98Lifebar, indexKOF98_A_HeavyD },
    { _T("Heavy D! D - Win Screen Portrait/sprite"),  0x2ea6f0, 0x2ea7f0, indexKOFSprites_98WinPortrait, indexKOF98_A_HeavyD },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_A[] =
{
    { _T("Lucky A - Main"),  0x2ea7f0, 0x2ea810, indexKOF98_A_Lucky },
    { _T("Lucky A - Extra 1"),  0x2ea810, 0x2ea830, indexKOF98_A_Lucky },
    { _T("Lucky A - Extra 2"),  0x2ea830, 0x2ea850, indexKOF98_A_Lucky },
    { _T("Lucky A - Max Mode"),  0x2ea850, 0x2ea870, indexKOF98_A_Lucky },
    { _T("Lucky A - Extra 3"),  0x2ea870, 0x2ea890, indexKOF98_A_Lucky },
    { _T("Lucky A - Extra 4"),  0x2ea890, 0x2ea8b0, indexKOF98_A_Lucky },
    { _T("Lucky A - Order Select"),  0x2ea8b0, 0x2ea8d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Lucky },
    { _T("Lucky A - Life Bar Portrait"),  0x2ea8d0, 0x2ea8f0, indexKOFSprites_98Lifebar, indexKOF98_A_Lucky },
    { _T("Lucky A - Win Screen Portrait/sprite"),  0x2ea8f0, 0x2ea9f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Lucky },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_B[] =
{
    { _T("Lucky B - Main"),  0x2ea9f0, 0x2eaa10, indexKOF98_A_Lucky },
    { _T("Lucky B - Extra 1"),  0x2eaa10, 0x2eaa30, indexKOF98_A_Lucky },
    { _T("Lucky B - Extra 2"),  0x2eaa30, 0x2eaa50, indexKOF98_A_Lucky },
    { _T("Lucky B - Max Mode"),  0x2eaa50, 0x2eaa70, indexKOF98_A_Lucky },
    { _T("Lucky B - Extra 3"),  0x2eaa70, 0x2eaa90, indexKOF98_A_Lucky },
    { _T("Lucky B - Extra 4"),  0x2eaa90, 0x2eaab0, indexKOF98_A_Lucky },
    { _T("Lucky B - Order Select"),  0x2eaab0, 0x2eaad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Lucky },
    { _T("Lucky B - Life Bar Portrait"),  0x2eaad0, 0x2eaaf0, indexKOFSprites_98Lifebar, indexKOF98_A_Lucky },
    { _T("Lucky B - Win Screen Portrait/sprite"),  0x2eaaf0, 0x2eabf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Lucky },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_C[] =
{
    { _T("Lucky C - Main"),  0x2eabf0, 0x2eac10, indexKOF98_A_Lucky },
    { _T("Lucky C - Extra 1"),  0x2eac10, 0x2eac30, indexKOF98_A_Lucky },
    { _T("Lucky C - Extra 2"),  0x2eac30, 0x2eac50, indexKOF98_A_Lucky },
    { _T("Lucky C - Max Mode"),  0x2eac50, 0x2eac70, indexKOF98_A_Lucky },
    { _T("Lucky C - Extra 3"),  0x2eac70, 0x2eac90, indexKOF98_A_Lucky },
    { _T("Lucky C - Extra 4"),  0x2eac90, 0x2eacb0, indexKOF98_A_Lucky },
    { _T("Lucky C - Order Select"),  0x2eacb0, 0x2eacd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Lucky },
    { _T("Lucky C - Life Bar Portrait"),  0x2eacd0, 0x2eacf0, indexKOFSprites_98Lifebar, indexKOF98_A_Lucky },
    { _T("Lucky C - Win Screen Portrait/sprite"),  0x2eacf0, 0x2eadf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Lucky },
};

const sGame_PaletteDataset KOF98_A_Lucky_PALETTE_D[] =
{
    { _T("Lucky D - Main"),  0x2eadf0, 0x2eae10, indexKOF98_A_Lucky },
    { _T("Lucky D - Extra 1"),  0x2eae10, 0x2eae30, indexKOF98_A_Lucky },
    { _T("Lucky D - Extra 2"),  0x2eae30, 0x2eae50, indexKOF98_A_Lucky },
    { _T("Lucky D - Max Mode"),  0x2eae50, 0x2eae70, indexKOF98_A_Lucky },
    { _T("Lucky D - Extra 3"),  0x2eae70, 0x2eae90, indexKOF98_A_Lucky },
    { _T("Lucky D - Extra 4"),  0x2eae90, 0x2eaeb0, indexKOF98_A_Lucky },
    { _T("Lucky D - Order Select"),  0x2eaeb0, 0x2eaed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Lucky },
    { _T("Lucky D - Life Bar Portrait"),  0x2eaed0, 0x2eaef0, indexKOFSprites_98Lifebar, indexKOF98_A_Lucky },
    { _T("Lucky D - Win Screen Portrait/sprite"),  0x2eaef0, 0x2eaff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Lucky },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_A[] =
{
    { _T("Brian A - Main"),  0x2eaff0, 0x2eb010, indexKOF98_A_Brian },
    { _T("Brian A - Extra 1"),  0x2eb010, 0x2eb030, indexKOF98_A_Brian },
    { _T("Brian A - Extra 2"),  0x2eb030, 0x2eb050, indexKOF98_A_Brian },
    { _T("Brian A - Max Mode"),  0x2eb050, 0x2eb070, indexKOF98_A_Brian },
    { _T("Brian A - Extra 3"),  0x2eb070, 0x2eb090, indexKOF98_A_Brian },
    { _T("Brian A - Extra 4"),  0x2eb090, 0x2eb0b0, indexKOF98_A_Brian },
    { _T("Brian A - Order Select"),  0x2eb0b0, 0x2eb0d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Brian },
    { _T("Brian A - Life Bar Portrait"),  0x2eb0d0, 0x2eb0f0, indexKOFSprites_98Lifebar, indexKOF98_A_Brian },
    { _T("Brian A - Win Screen Portrait/sprite"),  0x2eb0f0, 0x2eb1f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Brian },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_B[] =
{
    { _T("Brian B - Main"),  0x2eb1f0, 0x2eb210, indexKOF98_A_Brian },
    { _T("Brian B - Extra 1"),  0x2eb210, 0x2eb230, indexKOF98_A_Brian },
    { _T("Brian B - Extra 2"),  0x2eb230, 0x2eb250, indexKOF98_A_Brian },
    { _T("Brian B - Max Mode"),  0x2eb250, 0x2eb270, indexKOF98_A_Brian },
    { _T("Brian B - Extra 3"),  0x2eb270, 0x2eb290, indexKOF98_A_Brian },
    { _T("Brian B - Extra 4"),  0x2eb290, 0x2eb2b0, indexKOF98_A_Brian },
    { _T("Brian B - Order Select"),  0x2eb2b0, 0x2eb2d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Brian },
    { _T("Brian B - Life Bar Portrait"),  0x2eb2d0, 0x2eb2f0, indexKOFSprites_98Lifebar, indexKOF98_A_Brian },
    { _T("Brian B - Win Screen Portrait/sprite"),  0x2eb2f0, 0x2eb3f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Brian },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_C[] =
{
    { _T("Brian C - Main"),  0x2eb3f0, 0x2eb410, indexKOF98_A_Brian },
    { _T("Brian C - Extra 1"),  0x2eb410, 0x2eb430, indexKOF98_A_Brian },
    { _T("Brian C - Extra 2"),  0x2eb430, 0x2eb450, indexKOF98_A_Brian },
    { _T("Brian C - Max Mode"),  0x2eb450, 0x2eb470, indexKOF98_A_Brian },
    { _T("Brian C - Extra 3"),  0x2eb470, 0x2eb490, indexKOF98_A_Brian },
    { _T("Brian C - Extra 4"),  0x2eb490, 0x2eb4b0, indexKOF98_A_Brian },
    { _T("Brian C - Order Select"),  0x2eb4b0, 0x2eb4d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Brian },
    { _T("Brian C - Life Bar Portrait"),  0x2eb4d0, 0x2eb4f0, indexKOFSprites_98Lifebar, indexKOF98_A_Brian },
    { _T("Brian C - Win Screen Portrait/sprite"),  0x2eb4f0, 0x2eb5f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Brian },
};

const sGame_PaletteDataset KOF98_A_Brian_PALETTE_D[] =
{
    { _T("Brian D - Main"),  0x2eb5f0, 0x2eb610, indexKOF98_A_Brian },
    { _T("Brian D - Extra 1"),  0x2eb610, 0x2eb630, indexKOF98_A_Brian },
    { _T("Brian D - Extra 2"),  0x2eb630, 0x2eb650, indexKOF98_A_Brian },
    { _T("Brian D - Max Mode"),  0x2eb650, 0x2eb670, indexKOF98_A_Brian },
    { _T("Brian D - Extra 3"),  0x2eb670, 0x2eb690, indexKOF98_A_Brian },
    { _T("Brian D - Extra 4"),  0x2eb690, 0x2eb6b0, indexKOF98_A_Brian },
    { _T("Brian D - Order Select"),  0x2eb6b0, 0x2eb6d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Brian },
    { _T("Brian D - Life Bar Portrait"),  0x2eb6d0, 0x2eb6f0, indexKOFSprites_98Lifebar, indexKOF98_A_Brian },
    { _T("Brian D - Win Screen Portrait/sprite"),  0x2eb6f0, 0x2eb7f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Brian },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_A[] =
{
    { _T("Rugal A - Main"),  0x2eb7f0, 0x2eb810, indexKOF98_A_Rugal },
    { _T("Rugal A - Extra 1"),  0x2eb810, 0x2eb830, indexKOF98_A_Rugal },
    { _T("Rugal A - Extra 2"),  0x2eb830, 0x2eb850, indexKOF98_A_Rugal },
    { _T("Rugal A - Max Mode"),  0x2eb850, 0x2eb870, indexKOF98_A_Rugal },
    { _T("Rugal A - Extra 3"),  0x2eb870, 0x2eb890, indexKOF98_A_Rugal },
    { _T("Rugal A - Extra 4"),  0x2eb890, 0x2eb8b0, indexKOF98_A_Rugal },
    { _T("Rugal A - Order Select"),  0x2eb8b0, 0x2eb8d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Rugal },
    { _T("Rugal A - Life Bar Portrait"),  0x2eb8d0, 0x2eb8f0, indexKOFSprites_98Lifebar, indexKOF98_A_Rugal },
    { _T("Rugal A - Win Screen Portrait/sprite"),  0x2eb8f0, 0x2eb9f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Rugal },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_B[] =
{
    { _T("Rugal B - Main"),  0x2eb9f0, 0x2eba10, indexKOF98_A_Rugal },
    { _T("Rugal B - Extra 1"),  0x2eba10, 0x2eba30, indexKOF98_A_Rugal },
    { _T("Rugal B - Extra 2"),  0x2eba30, 0x2eba50, indexKOF98_A_Rugal },
    { _T("Rugal B - Max Mode"),  0x2eba50, 0x2eba70, indexKOF98_A_Rugal },
    { _T("Rugal B - Extra 3"),  0x2eba70, 0x2eba90, indexKOF98_A_Rugal },
    { _T("Rugal B - Extra 4"),  0x2eba90, 0x2ebab0, indexKOF98_A_Rugal },
    { _T("Rugal B - Order Select"),  0x2ebab0, 0x2ebad0, indexKOFSprites_98OrderSelect, indexKOF98_A_Rugal },
    { _T("Rugal B - Life Bar Portrait"),  0x2ebad0, 0x2ebaf0, indexKOFSprites_98Lifebar, indexKOF98_A_Rugal },
    { _T("Rugal B - Win Screen Portrait/sprite"),  0x2ebaf0, 0x2ebbf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Rugal },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_C[] =
{
    { _T("Rugal C - Main"),  0x2ebbf0, 0x2ebc10, indexKOF98_A_Rugal },
    { _T("Rugal C - Extra 1"),  0x2ebc10, 0x2ebc30, indexKOF98_A_Rugal },
    { _T("Rugal C - Extra 2"),  0x2ebc30, 0x2ebc50, indexKOF98_A_Rugal },
    { _T("Rugal C - Max Mode"),  0x2ebc50, 0x2ebc70, indexKOF98_A_Rugal },
    { _T("Rugal C - Extra 3"),  0x2ebc70, 0x2ebc90, indexKOF98_A_Rugal },
    { _T("Rugal C - Extra 4"),  0x2ebc90, 0x2ebcb0, indexKOF98_A_Rugal },
    { _T("Rugal C - Order Select"),  0x2ebcb0, 0x2ebcd0, indexKOFSprites_98OrderSelect, indexKOF98_A_Rugal },
    { _T("Rugal C - Life Bar Portrait"),  0x2ebcd0, 0x2ebcf0, indexKOFSprites_98Lifebar, indexKOF98_A_Rugal },
    { _T("Rugal C - Win Screen Portrait/sprite"),  0x2ebcf0, 0x2ebdf0, indexKOFSprites_98WinPortrait, indexKOF98_A_Rugal },
};

const sGame_PaletteDataset KOF98_A_Rugal_PALETTE_D[] =
{
    { _T("Rugal D - Main"),  0x2ebdf0, 0x2ebe10, indexKOF98_A_Rugal },
    { _T("Rugal D - Extra 1"),  0x2ebe10, 0x2ebe30, indexKOF98_A_Rugal },
    { _T("Rugal D - Extra 2"),  0x2ebe30, 0x2ebe50, indexKOF98_A_Rugal },
    { _T("Rugal D - Max Mode"),  0x2ebe50, 0x2ebe70, indexKOF98_A_Rugal },
    { _T("Rugal D - Extra 3"),  0x2ebe70, 0x2ebe90, indexKOF98_A_Rugal },
    { _T("Rugal D - Extra 4"),  0x2ebe90, 0x2ebeb0, indexKOF98_A_Rugal },
    { _T("Rugal D - Order Select"),  0x2ebeb0, 0x2ebed0, indexKOFSprites_98OrderSelect, indexKOF98_A_Rugal },
    { _T("Rugal D - Life Bar Portrait"),  0x2ebed0, 0x2ebef0, indexKOFSprites_98Lifebar, indexKOF98_A_Rugal },
    { _T("Rugal D - Win Screen Portrait/sprite"),  0x2ebef0, 0x2ebff0, indexKOFSprites_98WinPortrait, indexKOF98_A_Rugal },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_A[] =
{
    { _T("Shingo A - Main"),  0x2ebff0, 0x2ec010, indexKOF98_A_Shingo },
    { _T("Shingo A - Extra 1"),  0x2ec010, 0x2ec030, indexKOF98_A_Shingo },
    { _T("Shingo A - Extra 2"),  0x2ec030, 0x2ec050, indexKOF98_A_Shingo },
    { _T("Shingo A - Max Mode"),  0x2ec050, 0x2ec070, indexKOF98_A_Shingo },
    { _T("Shingo A - Extra 3"),  0x2ec070, 0x2ec090, indexKOF98_A_Shingo },
    { _T("Shingo A - Extra 4"),  0x2ec090, 0x2ec0b0, indexKOF98_A_Shingo },
    { _T("Shingo A - Order Select"),  0x2ec0b0, 0x2ec0d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Shingo },
    { _T("Shingo A - Life Bar Portrait"),  0x2ec0d0, 0x2ec0f0, indexKOFSprites_98Lifebar, indexKOF98_A_Shingo },
    { _T("Shingo A - Win Screen Portrait/sprite"),  0x2ec0f0, 0x2ec1f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Shingo },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_B[] =
{
    { _T("Shingo B - Main"),  0x2ec1f0, 0x2ec210, indexKOF98_A_Shingo },
    { _T("Shingo B - Extra 1"),  0x2ec210, 0x2ec230, indexKOF98_A_Shingo },
    { _T("Shingo B - Extra 2"),  0x2ec230, 0x2ec250, indexKOF98_A_Shingo },
    { _T("Shingo B - Max Mode"),  0x2ec250, 0x2ec270, indexKOF98_A_Shingo },
    { _T("Shingo B - Extra 3"),  0x2ec270, 0x2ec290, indexKOF98_A_Shingo },
    { _T("Shingo B - Extra 4"),  0x2ec290, 0x2ec2b0, indexKOF98_A_Shingo },
    { _T("Shingo B - Order Select"),  0x2ec2b0, 0x2ec2d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Shingo },
    { _T("Shingo B - Life Bar Portrait"),  0x2ec2d0, 0x2ec2f0, indexKOFSprites_98Lifebar, indexKOF98_A_Shingo },
    { _T("Shingo B - Win Screen Portrait/sprite"),  0x2ec2f0, 0x2ec3f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Shingo },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_C[] =
{
    { _T("Shingo C - Main"),  0x2ec3f0, 0x2ec410, indexKOF98_A_Shingo },
    { _T("Shingo C - Extra 1"),  0x2ec410, 0x2ec430, indexKOF98_A_Shingo },
    { _T("Shingo C - Extra 2"),  0x2ec430, 0x2ec450, indexKOF98_A_Shingo },
    { _T("Shingo C - Max Mode"),  0x2ec450, 0x2ec470, indexKOF98_A_Shingo },
    { _T("Shingo C - Extra 3"),  0x2ec470, 0x2ec490, indexKOF98_A_Shingo },
    { _T("Shingo C - Extra 4"),  0x2ec490, 0x2ec4b0, indexKOF98_A_Shingo },
    { _T("Shingo C - Order Select"),  0x2ec4b0, 0x2ec4d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Shingo },
    { _T("Shingo C - Life Bar Portrait"),  0x2ec4d0, 0x2ec4f0, indexKOFSprites_98Lifebar, indexKOF98_A_Shingo },
    { _T("Shingo C - Win Screen Portrait/sprite"),  0x2ec4f0, 0x2ec5f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Shingo },
};

const sGame_PaletteDataset KOF98_A_Shingo_PALETTE_D[] =
{
    { _T("Shingo D - Main"),  0x2ec5f0, 0x2ec610, indexKOF98_A_Shingo },
    { _T("Shingo D - Extra 1"),  0x2ec610, 0x2ec630, indexKOF98_A_Shingo },
    { _T("Shingo D - Extra 2"),  0x2ec630, 0x2ec650, indexKOF98_A_Shingo },
    { _T("Shingo D - Max Mode"),  0x2ec650, 0x2ec670, indexKOF98_A_Shingo },
    { _T("Shingo D - Extra 3"),  0x2ec670, 0x2ec690, indexKOF98_A_Shingo },
    { _T("Shingo D - Extra 4"),  0x2ec690, 0x2ec6b0, indexKOF98_A_Shingo },
    { _T("Shingo D - Order Select"),  0x2ec6b0, 0x2ec6d0, indexKOFSprites_98OrderSelect, indexKOF98_A_Shingo },
    { _T("Shingo D - Life Bar Portrait"),  0x2ec6d0, 0x2ec6f0, indexKOFSprites_98Lifebar, indexKOF98_A_Shingo },
    { _T("Shingo D - Win Screen Portrait/sprite"),  0x2ec6f0, 0x2ec7f0, indexKOFSprites_98WinPortrait, indexKOF98_A_Shingo },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_A[] =
{
    { _T("O.Yashiro A - Main"),  0x2ec7f0, 0x2ec810, indexKOF98_A_Yashiro },
    { _T("O.Yashiro A - Extra 1"),  0x2ec810, 0x2ec830 },
    { _T("O.Yashiro A - Extra 2"),  0x2ec830, 0x2ec850 },
    { _T("O.Yashiro A - Max Mode"),  0x2ec850, 0x2ec870, indexKOF98_A_Yashiro },
    { _T("O.Yashiro A - Extra 3"),  0x2ec870, 0x2ec890 },
    { _T("O.Yashiro A - Extra 4"),  0x2ec890, 0x2ec8b0 },
    { _T("O.Yashiro A - Order Select"),  0x2ec8b0, 0x2ec8d0, indexKOFSprites_98OrderSelect, 0x51 },
    { _T("O.Yashiro A - Life Bar Portrait"),  0x2ec8d0, 0x2ec8f0, indexKOFSprites_98Lifebar, 0x51 },
    { _T("O.Yashiro A - Win Screen Portrait/sprite"),  0x2ec8f0, 0x2ec9f0, indexKOFSprites_98WinPortrait, 0x51 },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_B[] =
{
    { _T("O.Yashiro B - Main"),  0x2ec9f0, 0x2eca10, indexKOF98_A_Yashiro },
    { _T("O.Yashiro B - Extra 1"),  0x2eca10, 0x2eca30 },
    { _T("O.Yashiro B - Extra 2"),  0x2eca30, 0x2eca50 },
    { _T("O.Yashiro B - Max Mode"),  0x2eca50, 0x2eca70, indexKOF98_A_Yashiro },
    { _T("O.Yashiro B - Extra 3"),  0x2eca70, 0x2eca90 },
    { _T("O.Yashiro B - Extra 4"),  0x2eca90, 0x2ecab0 },
    { _T("O.Yashiro B - Order Select"),  0x2ecab0, 0x2ecad0, indexKOFSprites_98OrderSelect, 0x51 },
    { _T("O.Yashiro B - Life Bar Portrait"),  0x2ecad0, 0x2ecaf0, indexKOFSprites_98Lifebar, 0x51 },
    { _T("O.Yashiro B - Win Screen Portrait/sprite"),  0x2ecaf0, 0x2ecbf0, indexKOFSprites_98WinPortrait, 0x51 },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_C[] =
{
    { _T("O.Yashiro C - Main"),  0x2ecbf0, 0x2ecc10, indexKOF98_A_Yashiro },
    { _T("O.Yashiro C - Extra 1"),  0x2ecc10, 0x2ecc30 },
    { _T("O.Yashiro C - Extra 2"),  0x2ecc30, 0x2ecc50 },
    { _T("O.Yashiro C - Max Mode"),  0x2ecc50, 0x2ecc70, indexKOF98_A_Yashiro },
    { _T("O.Yashiro C - Extra 3"),  0x2ecc70, 0x2ecc90 },
    { _T("O.Yashiro C - Extra 4"),  0x2ecc90, 0x2eccb0 },
    { _T("O.Yashiro C - Order Select"),  0x2eccb0, 0x2eccd0, indexKOFSprites_98OrderSelect, 0x51 },
    { _T("O.Yashiro C - Life Bar Portrait"),  0x2eccd0, 0x2eccf0, indexKOFSprites_98Lifebar, 0x51 },
    { _T("O.Yashiro C - Win Screen Portrait/sprite"),  0x2eccf0, 0x2ecdf0, indexKOFSprites_98WinPortrait, 0x51 },
};

const sGame_PaletteDataset KOF98_A_OYashiro_PALETTE_D[] =
{
    { _T("O.Yashiro D - Main"),  0x2ecdf0, 0x2ece10, indexKOF98_A_Yashiro },
    { _T("O.Yashiro D - Extra 1"),  0x2ece10, 0x2ece30 },
    { _T("O.Yashiro D - Extra 2"),  0x2ece30, 0x2ece50 },
    { _T("O.Yashiro D - Max Mode"),  0x2ece50, 0x2ece70, indexKOF98_A_Yashiro },
    { _T("O.Yashiro D - Extra 3"),  0x2ece70, 0x2ece90 },
    { _T("O.Yashiro D - Extra 4"),  0x2ece90, 0x2eceb0 },
    { _T("O.Yashiro D - Order Select"),  0x2eceb0, 0x2eced0, indexKOFSprites_98OrderSelect, 0x51 },
    { _T("O.Yashiro D - Life Bar Portrait"),  0x2eced0, 0x2ecef0, indexKOFSprites_98Lifebar, 0x51 },
    { _T("O.Yashiro D - Win Screen Portrait/sprite"),  0x2ecef0, 0x2ecff0, indexKOFSprites_98WinPortrait, 0x51 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_A[] =
{
    { _T("O.Shermie A - Main"),  0x2ecff0, 0x2ed010, indexKOF98_A_Shermie },
    { _T("O.Shermie A - Extra 1"),  0x2ed010, 0x2ed030, indexKOF98_A_Shermie },
    { _T("O.Shermie A - Extra 2"),  0x2ed030, 0x2ed050, indexKOF98_A_Shermie },
    { _T("O.Shermie A - Max Mode"),  0x2ed050, 0x2ed070, indexKOF98_A_Shermie },
    { _T("O.Shermie A - Extra 3"),  0x2ed070, 0x2ed090, indexKOF98_A_Shermie },
    { _T("O.Shermie A - Extra 4"),  0x2ed090, 0x2ed0b0, indexKOF98_A_Shermie },
    { _T("O.Shermie A - Order Select"),  0x2ed0b0, 0x2ed0d0, indexKOFSprites_98OrderSelect, 0x50 },
    { _T("O.Shermie A - Life Bar Portrait"),  0x2ed0d0, 0x2ed0f0, indexKOFSprites_98Lifebar, 0x50 },
    { _T("O.Shermie A - Win Screen Portrait/sprite"),  0x2ed0f0, 0x2ed1f0, indexKOFSprites_98WinPortrait, 0x50 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_B[] =
{
    { _T("O.Shermie B - Main"),  0x2ed1f0, 0x2ed210, indexKOF98_A_Shermie },
    { _T("O.Shermie B - Extra 1"),  0x2ed210, 0x2ed230, indexKOF98_A_Shermie },
    { _T("O.Shermie B - Extra 2"),  0x2ed230, 0x2ed250, indexKOF98_A_Shermie },
    { _T("O.Shermie B - Max Mode"),  0x2ed250, 0x2ed270, indexKOF98_A_Shermie },
    { _T("O.Shermie B - Extra 3"),  0x2ed270, 0x2ed290, indexKOF98_A_Shermie },
    { _T("O.Shermie B - Extra 4"),  0x2ed290, 0x2ed2b0, indexKOF98_A_Shermie },
    { _T("O.Shermie B - Order Select"),  0x2ed2b0, 0x2ed2d0, indexKOFSprites_98OrderSelect, 0x50 },
    { _T("O.Shermie B - Life Bar Portrait"),  0x2ed2d0, 0x2ed2f0, indexKOFSprites_98Lifebar, 0x50 },
    { _T("O.Shermie B - Win Screen Portrait/sprite"),  0x2ed2f0, 0x2ed3f0, indexKOFSprites_98WinPortrait, 0x50 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_C[] =
{
    { _T("O.Shermie C - Main"),  0x2ed3f0, 0x2ed410, indexKOF98_A_Shermie },
    { _T("O.Shermie C - Extra 1"),  0x2ed410, 0x2ed430, indexKOF98_A_Shermie },
    { _T("O.Shermie C - Extra 2"),  0x2ed430, 0x2ed450, indexKOF98_A_Shermie },
    { _T("O.Shermie C - Max Mode"),  0x2ed450, 0x2ed470, indexKOF98_A_Shermie },
    { _T("O.Shermie C - Extra 3"),  0x2ed470, 0x2ed490, indexKOF98_A_Shermie },
    { _T("O.Shermie C - Extra 4"),  0x2ed490, 0x2ed4b0, indexKOF98_A_Shermie },
    { _T("O.Shermie C - Order Select"),  0x2ed4b0, 0x2ed4d0, indexKOFSprites_98OrderSelect, 0x50 },
    { _T("O.Shermie C - Life Bar Portrait"),  0x2ed4d0, 0x2ed4f0, indexKOFSprites_98Lifebar, 0x50 },
    { _T("O.Shermie C - Win Screen Portrait/sprite"),  0x2ed4f0, 0x2ed5f0, indexKOFSprites_98WinPortrait, 0x50 },
};

const sGame_PaletteDataset KOF98_A_OShermie_PALETTE_D[] =
{
    { _T("O.Shermie D - Main"),  0x2ed5f0, 0x2ed610, indexKOF98_A_Shermie },
    { _T("O.Shermie D - Extra 1"),  0x2ed610, 0x2ed630, indexKOF98_A_Shermie },
    { _T("O.Shermie D - Extra 2"),  0x2ed630, 0x2ed650, indexKOF98_A_Shermie },
    { _T("O.Shermie D - Max Mode"),  0x2ed650, 0x2ed670, indexKOF98_A_Shermie },
    { _T("O.Shermie D - Extra 3"),  0x2ed670, 0x2ed690, indexKOF98_A_Shermie },
    { _T("O.Shermie D - Extra 4"),  0x2ed690, 0x2ed6b0, indexKOF98_A_Shermie },
    { _T("O.Shermie D - Order Select"),  0x2ed6b0, 0x2ed6d0, indexKOFSprites_98OrderSelect, 0x50 },
    { _T("O.Shermie D - Life Bar Portrait"),  0x2ed6d0, 0x2ed6f0, indexKOFSprites_98Lifebar, 0x50 },
    { _T("O.Shermie D - Win Screen Portrait/sprite"),  0x2ed6f0, 0x2ed7f0, indexKOFSprites_98WinPortrait, 0x50 },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_A[] =
{
    { _T("O.Chris A - Main"),  0x2ed7f0, 0x2ed810, indexKOF98_A_Chris },
    { _T("O.Chris A - Extra 1"),  0x2ed810, 0x2ed830 },
    { _T("O.Chris A - Extra 2"),  0x2ed830, 0x2ed850 },
    { _T("O.Chris A - Max Mode"),  0x2ed850, 0x2ed870, indexKOF98_A_Chris },
    { _T("O.Chris A - Extra 3"),  0x2ed870, 0x2ed890 },
    { _T("O.Chris A - Extra 4"),  0x2ed890, 0x2ed8b0 },
    { _T("O.Chris A - Order Select"),  0x2ed8b0, 0x2ed8d0, indexKOFSprites_98OrderSelect, 0x4f },
    { _T("O.Chris A - Life Bar Portrait"),  0x2ed8d0, 0x2ed8f0, indexKOFSprites_98Lifebar, 0x4f },
    { _T("O.Chris A - Win Screen Portrait/sprite"),  0x2ed8f0, 0x2ed9f0, indexKOFSprites_98WinPortrait, 0x4f },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_B[] =
{
    { _T("O.Chris B - Main"),  0x2ed9f0, 0x2eda10, indexKOF98_A_Chris },
    { _T("O.Chris B - Extra 1"),  0x2eda10, 0x2eda30 },
    { _T("O.Chris B - Extra 2"),  0x2eda30, 0x2eda50 },
    { _T("O.Chris B - Max Mode"),  0x2eda50, 0x2eda70, indexKOF98_A_Chris },
    { _T("O.Chris B - Extra 3"),  0x2eda70, 0x2eda90 },
    { _T("O.Chris B - Extra 4"),  0x2eda90, 0x2edab0 },
    { _T("O.Chris B - Order Select"),  0x2edab0, 0x2edad0, indexKOFSprites_98OrderSelect, 0x4f },
    { _T("O.Chris B - Life Bar Portrait"),  0x2edad0, 0x2edaf0, indexKOFSprites_98Lifebar, 0x4f },
    { _T("O.Chris B - Win Screen Portrait/sprite"),  0x2edaf0, 0x2edbf0, indexKOFSprites_98WinPortrait, 0x4f },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_C[] =
{
    { _T("O.Chris C - Main"),  0x2edbf0, 0x2edc10, indexKOF98_A_Chris },
    { _T("O.Chris C - Extra 1"),  0x2edc10, 0x2edc30 },
    { _T("O.Chris C - Extra 2"),  0x2edc30, 0x2edc50 },
    { _T("O.Chris C - Max Mode"),  0x2edc50, 0x2edc70, indexKOF98_A_Chris },
    { _T("O.Chris C - Extra 3"),  0x2edc70, 0x2edc90 },
    { _T("O.Chris C - Extra 4"),  0x2edc90, 0x2edcb0 },
    { _T("O.Chris C - Order Select"),  0x2edcb0, 0x2edcd0, indexKOFSprites_98OrderSelect, 0x4f },
    { _T("O.Chris C - Life Bar Portrait"),  0x2edcd0, 0x2edcf0, indexKOFSprites_98Lifebar, 0x4f },
    { _T("O.Chris C - Win Screen Portrait/sprite"),  0x2edcf0, 0x2eddf0, indexKOFSprites_98WinPortrait, 0x4f },
};

const sGame_PaletteDataset KOF98_A_OChris_PALETTE_D[] =
{
    { _T("O.Chris D - Main"),  0x2eddf0, 0x2ede10, indexKOF98_A_Chris },
    { _T("O.Chris D - Extra 1"),  0x2ede10, 0x2ede30 },
    { _T("O.Chris D - Extra 2"),  0x2ede30, 0x2ede50 },
    { _T("O.Chris D - Max Mode"),  0x2ede50, 0x2ede70, indexKOF98_A_Chris },
    { _T("O.Chris D - Extra 3"),  0x2ede70, 0x2ede90 },
    { _T("O.Chris D - Extra 4"),  0x2ede90, 0x2edeb0 },
    { _T("O.Chris D - Order Select"),  0x2edeb0, 0x2eded0, indexKOFSprites_98OrderSelect, 0x4f },
    { _T("O.Chris D - Life Bar Portrait"),  0x2eded0, 0x2edef0, indexKOFSprites_98Lifebar, 0x4f },
    { _T("O.Chris D - Win Screen Portrait/sprite"),  0x2edef0, 0x2edff0, indexKOFSprites_98WinPortrait, 0x4f },
};

const sGame_PaletteDataset KOF98_A_OmegaRugal_PALETTE_A[] =
{
    { _T("Omega Rugal A - Main"),  0x2edff0, 0x2ee010, indexKOF98_A_Rugal },
    { _T("Omega Rugal A - Extra 1"),  0x2ee010, 0x2ee030 },
    { _T("Omega Rugal A - Extra 2"),  0x2ee030, 0x2ee050 },
    { _T("Omega Rugal A - Max Mode"),  0x2ee050, 0x2ee070, indexKOF98_A_Rugal },
    { _T("Omega Rugal A - Extra 3"),  0x2ee070, 0x2ee090 },
    { _T("Omega Rugal A - Extra 4"),  0x2ee090, 0x2ee0b0 },
    { _T("Omega Rugal A - Order Select"),  0x2ee0b0, 0x2ee0d0, indexKOFSprites_98OrderSelect, 0x52 },
    { _T("Omega Rugal A - Life Bar Portrait"),  0x2ee0d0, 0x2ee0f0, indexKOFSprites_98Lifebar, 0x52 },
    { _T("Omega Rugal A - Win Screen Portrait/sprite"),  0x2ee0f0, 0x2ee1f0, indexKOFSprites_98WinPortrait, 0x52 },
};

const sGame_PaletteDataset KOF98_A_OmegaRugal_PALETTE_B[] =
{
    { _T("Omega Rugal B - Main"),  0x2ee1f0, 0x2ee210, indexKOF98_A_Rugal },
    { _T("Omega Rugal B - Extra 1"),  0x2ee210, 0x2ee230 },
    { _T("Omega Rugal B - Extra 2"),  0x2ee230, 0x2ee250 },
    { _T("Omega Rugal B - Max Mode"),  0x2ee250, 0x2ee270, indexKOF98_A_Rugal },
    { _T("Omega Rugal B - Extra 3"),  0x2ee270, 0x2ee290 },
    { _T("Omega Rugal B - Extra 4"),  0x2ee290, 0x2ee2b0 },
    { _T("Omega Rugal B - Order Select"),  0x2ee2b0, 0x2ee2d0, indexKOFSprites_98OrderSelect, 0x52 },
    { _T("Omega Rugal B - Life Bar Portrait"),  0x2ee2d0, 0x2ee2f0, indexKOFSprites_98Lifebar, 0x52 },
    { _T("Omega Rugal B - Win Screen Portrait/sprite"),  0x2ee2f0, 0x2ee3f0, indexKOFSprites_98WinPortrait, 0x52 },
};

const sGame_PaletteDataset KOF98_A_OmegaRugal_PALETTE_C[] =
{
    { _T("Omega Rugal C - Main"),  0x2ee3f0, 0x2ee410, indexKOF98_A_Rugal },
    { _T("Omega Rugal C - Extra 1"),  0x2ee410, 0x2ee430 },
    { _T("Omega Rugal C - Extra 2"),  0x2ee430, 0x2ee450 },
    { _T("Omega Rugal C - Max Mode"),  0x2ee450, 0x2ee470, indexKOF98_A_Rugal },
    { _T("Omega Rugal C - Extra 3"),  0x2ee470, 0x2ee490 },
    { _T("Omega Rugal C - Extra 4"),  0x2ee490, 0x2ee4b0 },
    { _T("Omega Rugal C - Order Select"),  0x2ee4b0, 0x2ee4d0, indexKOFSprites_98OrderSelect, 0x52 },
    { _T("Omega Rugal C - Life Bar Portrait"),  0x2ee4d0, 0x2ee4f0, indexKOFSprites_98Lifebar, 0x52 },
    { _T("Omega Rugal C - Win Screen Portrait/sprite"),  0x2ee4f0, 0x2ee5f0, indexKOFSprites_98WinPortrait, 0x52 },
};

const sGame_PaletteDataset KOF98_A_OmegaRugal_PALETTE_D[] =
{
    { _T("Omega Rugal D - Main"),  0x2ee5f0, 0x2ee610, indexKOF98_A_Rugal },
    { _T("Omega Rugal D - Extra 1"),  0x2ee610, 0x2ee630 },
    { _T("Omega Rugal D - Extra 2"),  0x2ee630, 0x2ee650 },
    { _T("Omega Rugal D - Max Mode"),  0x2ee650, 0x2ee670, indexKOF98_A_Rugal },
    { _T("Omega Rugal D - Extra 3"),  0x2ee670, 0x2ee690 },
    { _T("Omega Rugal D - Extra 4"),  0x2ee690, 0x2ee6b0 },
    { _T("Omega Rugal D - Order Select"),  0x2ee6b0, 0x2ee6d0, indexKOFSprites_98OrderSelect, 0x52 },
    { _T("Omega Rugal D - Life Bar Portrait"),  0x2ee6d0, 0x2ee6f0, indexKOFSprites_98Lifebar, 0x52 },
    { _T("Omega Rugal D - Win Screen Portrait/sprite"),  0x2ee6f0, 0x2ee7f0, indexKOFSprites_98WinPortrait, 0x52 },
};

const sGame_PaletteDataset KOF98_A_KYO_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2ee7f0, 0x2ee810 },
    { _T("Effect 1"), 0x2ee810, 0x2ee830 },
    { _T("Effect 2"), 0x2ee830, 0x2ee850 },
    { _T("Effect 4"), 0x2ee870, 0x2ee890 },
    { _T("Effect 5"), 0x2ee890, 0x2ee8b0 },
    { _T("Effect 6"), 0x2ee8b0, 0x2ee8d0 },
    { _T("Zap Effect 1"), 0x2ee950, 0x2ee970, indexKOF98_A_Kyo },
    { _T("Zap Effect 2"), 0x2ee970, 0x2ee990, indexKOF98_A_Kyo },
    { _T("Super Trail 1"), 0x2ee990, 0x2ee9b0, indexKOF98_A_Kyo },
    { _T("Super Trail 2"), 0x2ee9b0, 0x2ee9d0, indexKOF98_A_Kyo },
    { _T("Super Trail 3"), 0x2ee9d0, 0x2ee9f0, indexKOF98_A_Kyo },
};

const sGame_PaletteDataset KOF98_A_BENIMARU_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2ee9f0, 0x2eea10 },
    { _T("Effect 1"), 0x2eea10, 0x2eea30 },
    { _T("Effect 2"), 0x2eea30, 0x2eea50 },
    { _T("Effect 3"), 0x2eea50, 0x2eea70 },
    { _T("Zap Effect 1"), 0x2eeb50, 0x2eeb70, indexKOF98_A_Benimaru },
    { _T("Zap Effect 2"), 0x2eeb70, 0x2eeb90, indexKOF98_A_Benimaru },
    { _T("Super Trail 1"), 0x2eeb90, 0x2eebb0, indexKOF98_A_Benimaru },
    { _T("Super Trail 2"), 0x2eebb0, 0x2eebd0, indexKOF98_A_Benimaru },
    { _T("Super Trail 3"), 0x2eebd0, 0x2eebf0, indexKOF98_A_Benimaru },
};

const sGame_PaletteDataset KOF98_A_DAIMON_EFFECT_PALETTES[] =
{
    { _T("Zap Effect 1"), 0x2eed50, 0x2eed70, indexKOF98_A_Daimon },
    { _T("Zap Effect 2"), 0x2eed70, 0x2eed90, indexKOF98_A_Daimon },
    { _T("Super Trail 1"), 0x2eed90, 0x2eedb0, indexKOF98_A_Daimon },
    { _T("Super Trail 2"), 0x2eedb0, 0x2eedd0, indexKOF98_A_Daimon },
    { _T("Super Trail 3"), 0x2eedd0, 0x2eedf0, indexKOF98_A_Daimon },
};

const sGame_PaletteDataset KOF98_A_TERRY_EFFECT_PALETTES[] =
{
    { _T("Burn Knuckle"), 0x2eedf0, 0x2eee10, indexKOF98_A_Terry, 0x2 },
    { _T("Power Dunk"), 0x2eee10, 0x2eee30, indexKOF98_A_Terry, 0x3 },
    { _T("All Super Geysers (Max)"), 0x2eee30, 0x2eee50, indexKOF98_A_Terry, 0x4 },
    { _T("Power Wave"), 0x2eee50, 0x2eee70, indexKOF98_A_Terry, 0x5 },
    { _T("EX Power Wave"), 0x2eee70, 0x2eee90, indexKOF98_A_Terry, 0x6 },
    { _T("EX PW Hit Spark"), 0x2eee90, 0x2eeeb0, indexKOF98_A_Terry, 07 },
    { _T("Zap Effect 1"), 0x2eef50, 0x2eef70, indexKOF98_A_Terry },
    { _T("Zap Effect 2"), 0x2eef70, 0x2eef90, indexKOF98_A_Terry },
    { _T("Super Trail 1"), 0x2eef90, 0x2eefb0, indexKOF98_A_Terry },
    { _T("Super Trail 2"), 0x2eefb0, 0x2eefd0, indexKOF98_A_Terry },
    { _T("Super Trail 3"), 0x2eefd0, 0x2eeff0, indexKOF98_A_Terry },
};

const sGame_PaletteDataset KOF98_A_ANDY_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2eeff0, 0x2ef010 },
    { _T("Effect 1"), 0x2ef010, 0x2ef030 },
    { _T("Effect 2"), 0x2ef030, 0x2ef050 },
    { _T("Effect 3"), 0x2ef050, 0x2ef070 },
    { _T("Effect 4"), 0x2ef070, 0x2ef090 },
    { _T("Effect 5"), 0x2ef090, 0x2ef0b0 },
    { _T("Effect 6"), 0x2ef0b0, 0x2ef0d0 },
    { _T("Effect 7"), 0x2ef0d0, 0x2ef0f0 },
    { _T("Effect 8"), 0x2ef0f0, 0x2ef110 },
    { _T("Effect 9"), 0x2ef110, 0x2ef130 },
    { _T("Zap Effect 1"), 0x2ef150, 0x2ef170, indexKOF98_A_Andy },
    { _T("Zap Effect 2"), 0x2ef170, 0x2ef190, indexKOF98_A_Andy },
    { _T("Super Trail 1"), 0x2ef190, 0x2ef1b0, indexKOF98_A_Andy },
    { _T("Super Trail 2"), 0x2ef1b0, 0x2ef1d0, indexKOF98_A_Andy },
    { _T("Super Trail 3"), 0x2ef1d0, 0x2ef1f0, indexKOF98_A_Andy },
};

const sGame_PaletteDataset KOF98_A_JOE_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2ef1f0, 0x2ef210 },
    { _T("Effect 1"), 0x2ef210, 0x2ef230 },
    { _T("Effect 2"), 0x2ef230, 0x2ef250 },
    { _T("Effect 3"), 0x2ef250, 0x2ef270 },
    { _T("Effect 4"), 0x2ef270, 0x2ef290 },
    { _T("Effect 5"), 0x2ef290, 0x2ef2b0 },
    { _T("Zap Effect 1"), 0x2ef350, 0x2ef370, indexKOF98_A_Joe },
    { _T("Zap Effect 2"), 0x2ef370, 0x2ef390, indexKOF98_A_Joe },
    { _T("Super Trail 1"), 0x2ef390, 0x2ef3b0, indexKOF98_A_Joe },
    { _T("Super Trail 2"), 0x2ef3b0, 0x2ef3d0, indexKOF98_A_Joe },
    { _T("Super Trail 3"), 0x2ef3d0, 0x2ef3f0, indexKOF98_A_Joe },
};

const sGame_PaletteDataset KOF98_A_RYO_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2ef3f0, 0x2ef410 },
    { _T("Effect 1"), 0x2ef410, 0x2ef430 },
    { _T("Effect 2"), 0x2ef430, 0x2ef450 },
    { _T("Effect 3"), 0x2ef450, 0x2ef470 },
    { _T("Effect 4"), 0x2ef470, 0x2ef490 },
    { _T("Effect 5"), 0x2ef490, 0x2ef4b0 },
    { _T("Effect 6"), 0x2ef4b0, 0x2ef4d0 },
    { _T("Zap Effect 1"), 0x2ef550, 0x2ef570, indexKOF98_A_Ryo },
    { _T("Zap Effect 2"), 0x2ef570, 0x2ef590, indexKOF98_A_Ryo },
    { _T("Super Trail 1"), 0x2ef590, 0x2ef5b0, indexKOF98_A_Ryo },
    { _T("Super Trail 2"), 0x2ef5b0, 0x2ef5d0, indexKOF98_A_Ryo },
    { _T("Super Trail 3"), 0x2ef5d0, 0x2ef5f0, indexKOF98_A_Ryo },
};

const sGame_PaletteDataset KOF98_A_ROBERT_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2ef5f0, 0x2ef610 },
    { _T("Effect 1"), 0x2ef610, 0x2ef630 },
    { _T("Effect 2"), 0x2ef630, 0x2ef650 },
    { _T("Effect 3"), 0x2ef650, 0x2ef670 },
    { _T("Effect 4"), 0x2ef670, 0x2ef690 },
    { _T("Effect 5"), 0x2ef690, 0x2ef6b0 },
    { _T("Zap Effect 1"), 0x2ef750, 0x2ef770, indexKOF98_A_Robert },
    { _T("Zap Effect 2"), 0x2ef770, 0x2ef790, indexKOF98_A_Robert },
    { _T("Super Trail 1"), 0x2ef790, 0x2ef7b0, indexKOF98_A_Robert },
    { _T("Super Trail 2"), 0x2ef7b0, 0x2ef7d0, indexKOF98_A_Robert },
    { _T("Super Trail 3"), 0x2ef7d0, 0x2ef7f0, indexKOF98_A_Robert },
};

const sGame_PaletteDataset KOF98_A_YURI_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2ef7f0, 0x2ef810 },
    { _T("Effect 1"), 0x2ef810, 0x2ef830 },
    { _T("Effect 2"), 0x2ef830, 0x2ef850 },
    { _T("Effect 3"), 0x2ef850, 0x2ef870 },
    { _T("Effect 4"), 0x2ef870, 0x2ef890 },
    { _T("Effect 5"), 0x2ef890, 0x2ef8b0 },
    { _T("Effect 6"), 0x2ef8b0, 0x2ef8d0 },
    { _T("Effect 7"), 0x2ef8d0, 0x2ef8f0 },
    { _T("Effect 8"), 0x2ef8f0, 0x2ef910 },
    { _T("Zap Effect 1"), 0x2ef950, 0x2ef970, indexKOF98_A_Yuri },
    { _T("Zap Effect 2"), 0x2ef970, 0x2ef990, indexKOF98_A_Yuri },
    { _T("Super Trail 1"), 0x2ef990, 0x2ef9b0, indexKOF98_A_Yuri },
    { _T("Super Trail 2"), 0x2ef9b0, 0x2ef9d0, indexKOF98_A_Yuri },
    { _T("Super Trail 3"), 0x2ef9d0, 0x2ef9f0, indexKOF98_A_Yuri },
};

const sGame_PaletteDataset KOF98_A_LEONA_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2ef9f0, 0x2efa10 },
    { _T("Effect 1"), 0x2efa10, 0x2efa30 },
    { _T("Effect 2"), 0x2efa30, 0x2efa50 },
    { _T("Effect 3"), 0x2efa50, 0x2efa70 },
    { _T("Effect 4"), 0x2efa70, 0x2efa90 },
    { _T("Effect 5"), 0x2efa90, 0x2efab0 },
    { _T("Effect 6"), 0x2efab0, 0x2efad0 },
    { _T("Zap Effect 1"), 0x2efb50, 0x2efb70, indexKOF98_A_Leona },
    { _T("Zap Effect 2"), 0x2efb70, 0x2efb90, indexKOF98_A_Leona },
    { _T("Super Trail 1"), 0x2efb90, 0x2efbb0, indexKOF98_A_Leona },
    { _T("Super Trail 2"), 0x2efbb0, 0x2efbd0, indexKOF98_A_Leona },
    { _T("Super Trail 3"), 0x2efbd0, 0x2efbf0, indexKOF98_A_Leona },
};

const sGame_PaletteDataset KOF98_A_RALF_EFFECT_PALETTES[] =
{
    { _T("Zap Effect 1"), 0x2efd50, 0x2efd70, indexKOF98_A_Ralf },
    { _T("Zap Effect 2"), 0x2efd70, 0x2efd90, indexKOF98_A_Ralf },
    { _T("Super Trail 1"), 0x2efd90, 0x2efdb0, indexKOF98_A_Ralf },
    { _T("Super Trail 2"), 0x2efdb0, 0x2efdd0, indexKOF98_A_Ralf },
    { _T("Super Trail 3"), 0x2efdd0, 0x2efdf0, indexKOF98_A_Ralf },
};

const sGame_PaletteDataset KOF98_A_CLARK_EFFECT_PALETTES[] =
{
    { _T("Zap Effect 1"), 0x2eff50, 0x2eff70, indexKOF98_A_Clark },
    { _T("Zap Effect 2"), 0x2eff70, 0x2eff90, indexKOF98_A_Clark },
    { _T("Super Trail 1"), 0x2eff90, 0x2effb0, indexKOF98_A_Clark },
    { _T("Super Trail 2"), 0x2effb0, 0x2effd0, indexKOF98_A_Clark },
    { _T("Super Trail 3"), 0x2effd0, 0x2efff0, indexKOF98_A_Clark },
};

const sGame_PaletteDataset KOF98_A_ATHENA_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2efff0, 0x2f0010 },
    { _T("Effect 1"), 0x2f0010, 0x2f0030 },
    { _T("Effect 2"), 0x2f0030, 0x2f0050 },
    { _T("Effect 3"), 0x2f0050, 0x2f0070 },
    { _T("Effect 4"), 0x2f0070, 0x2f0090 },
    { _T("Effect 5"), 0x2f0090, 0x2f00b0 },
    { _T("Effect 6"), 0x2f00b0, 0x2f00d0 },
    { _T("Effect 7"), 0x2f00d0, 0x2f00f0 },
    { _T("Effect 8"), 0x2f00f0, 0x2f0110 },
    { _T("Zap Effect 1"), 0x2f0150, 0x2f0170, indexKOF98_A_Athena },
    { _T("Zap Effect 2"), 0x2f0170, 0x2f0190, indexKOF98_A_Athena },
    { _T("Super Trail 1"), 0x2f0190, 0x2f01b0, indexKOF98_A_Athena },
    { _T("Super Trail 2"), 0x2f01b0, 0x2f01d0, indexKOF98_A_Athena },
    { _T("Super Trail 3"), 0x2f01d0, 0x2f01f0, indexKOF98_A_Athena },
};

const sGame_PaletteDataset KOF98_A_KENSOU_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f01f0, 0x2f0210 },
    { _T("Effect 1"), 0x2f0210, 0x2f0230 },
    { _T("Effect 2"), 0x2f0230, 0x2f0250 },
    { _T("Effect 3"), 0x2f0250, 0x2f0270 },
    { _T("Zap Effect 1"), 0x2f0350, 0x2f0370, indexKOF98_A_Kensou },
    { _T("Zap Effect 2"), 0x2f0370, 0x2f0390, indexKOF98_A_Kensou },
    { _T("Super Trail 1"), 0x2f0390, 0x2f03b0, indexKOF98_A_Kensou },
    { _T("Super Trail 2"), 0x2f03b0, 0x2f03d0, indexKOF98_A_Kensou },
    { _T("Super Trail 3"), 0x2f03d0, 0x2f03f0, indexKOF98_A_Kensou },
};

const sGame_PaletteDataset KOF98_A_CHIN_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f03f0, 0x2f0410 },
    { _T("Effect 2"), 0x2f0430, 0x2f0450 },
    { _T("Effect 3"), 0x2f0450, 0x2f0470 },
    { _T("Effect 4"), 0x2f0470, 0x2f0490 },
    { _T("Effect 5"), 0x2f0490, 0x2f04b0 },
    { _T("Zap Effect 1"), 0x2f0550, 0x2f0570, indexKOF98_A_Chin },
    { _T("Zap Effect 2"), 0x2f0570, 0x2f0590, indexKOF98_A_Chin },
    { _T("Super Trail 1"), 0x2f0590, 0x2f05b0, indexKOF98_A_Chin },
    { _T("Super Trail 2"), 0x2f05b0, 0x2f05d0, indexKOF98_A_Chin },
    { _T("Super Trail 3"), 0x2f05d0, 0x2f05f0, indexKOF98_A_Chin },
};

const sGame_PaletteDataset KOF98_A_CHIZURU_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f05f0, 0x2f0610 },
    { _T("Zap Effect 1"), 0x2f0750, 0x2f0770, indexKOF98_A_Chizuru },
    { _T("Zap Effect 2"), 0x2f0770, 0x2f0790, indexKOF98_A_Chizuru },
    { _T("Super Trail 1"), 0x2f0790, 0x2f07b0, indexKOF98_A_Chizuru },
    { _T("Super Trail 2"), 0x2f07b0, 0x2f07d0, indexKOF98_A_Chizuru },
    { _T("Super Trail 3"), 0x2f07d0, 0x2f07f0, indexKOF98_A_Chizuru },
};

const sGame_PaletteDataset KOF98_A_MAI_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f07f0, 0x2f0810 },
    { _T("Effect 1"), 0x2f0810, 0x2f0830 },
    { _T("Effect 2"), 0x2f0830, 0x2f0850 },
    { _T("Effect 3"), 0x2f0850, 0x2f0870 },
    { _T("Effect 4"), 0x2f0870, 0x2f0890 },
    { _T("Effect 5"), 0x2f0890, 0x2f08b0 },
    { _T("Effect 6"), 0x2f08b0, 0x2f08d0 },
    { _T("Effect 9"), 0x2f0910, 0x2f0930 },
    { _T("Zap Effect 1"), 0x2f0950, 0x2f0970, indexKOF98_A_Mai },
    { _T("Zap Effect 2"), 0x2f0970, 0x2f0990, indexKOF98_A_Mai },
    { _T("Super Trail 1"), 0x2f0990, 0x2f09b0, indexKOF98_A_Mai },
    { _T("Super Trail 2"), 0x2f09b0, 0x2f09d0, indexKOF98_A_Mai },
    { _T("Super Trail 3"), 0x2f09d0, 0x2f09f0, indexKOF98_A_Mai },
};

const sGame_PaletteDataset KOF98_A_KING_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f09f0, 0x2f0a10 },
    { _T("Effect 1"), 0x2f0a10, 0x2f0a30 },
    { _T("Zap Effect 1"), 0x2f0b50, 0x2f0b70, indexKOF98_A_King },
    { _T("Zap Effect 2"), 0x2f0b70, 0x2f0b90, indexKOF98_A_King },
    { _T("Super Trail 1"), 0x2f0b90, 0x2f0bb0, indexKOF98_A_King },
    { _T("Super Trail 2"), 0x2f0bb0, 0x2f0bd0, indexKOF98_A_King },
    { _T("Super Trail 3"), 0x2f0bd0, 0x2f0bf0, indexKOF98_A_King },
};

const sGame_PaletteDataset KOF98_A_KIM_EFFECT_PALETTES[] =
{
    { _T("Zap Effect 1"), 0x2f0d50, 0x2f0d70, indexKOF98_A_Kim },
    { _T("Zap Effect 2"), 0x2f0d70, 0x2f0d90, indexKOF98_A_Kim },
    { _T("Super Trail 1"), 0x2f0d90, 0x2f0db0, indexKOF98_A_Kim },
    { _T("Super Trail 2"), 0x2f0db0, 0x2f0dd0, indexKOF98_A_Kim },
    { _T("Super Trail 3"), 0x2f0dd0, 0x2f0df0, indexKOF98_A_Kim },
};

const sGame_PaletteDataset KOF98_A_CHANG_EFFECT_PALETTES[] =
{
    { _T("Zap Effect 1"), 0x2f0f50, 0x2f0f70, indexKOF98_A_Chang },
    { _T("Zap Effect 2"), 0x2f0f70, 0x2f0f90, indexKOF98_A_Chang },
    { _T("Super Trail 1"), 0x2f0f90, 0x2f0fb0, indexKOF98_A_Chang },
    { _T("Super Trail 2"), 0x2f0fb0, 0x2f0fd0, indexKOF98_A_Chang },
    { _T("Super Trail 3"), 0x2f0fd0, 0x2f0ff0, indexKOF98_A_Chang },
};

const sGame_PaletteDataset KOF98_A_CHOI_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f0ff0, 0x2f1010 },
    { _T("Effect 1"), 0x2f1010, 0x2f1030 },
    { _T("Effect 2"), 0x2f1030, 0x2f1050 },
    { _T("Zap Effect 1"), 0x2f1150, 0x2f1170, indexKOF98_A_Choi },
    { _T("Zap Effect 2"), 0x2f1170, 0x2f1190, indexKOF98_A_Choi },
    { _T("Super Trail 1"), 0x2f1190, 0x2f11b0, indexKOF98_A_Choi },
    { _T("Super Trail 2"), 0x2f11b0, 0x2f11d0, indexKOF98_A_Choi },
    { _T("Super Trail 3"), 0x2f11d0, 0x2f11f0, indexKOF98_A_Choi },
};

const sGame_PaletteDataset KOF98_A_YASHIRO_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f11f0, 0x2f1210 },
    { _T("Effect 1"), 0x2f1210, 0x2f1230 },
    { _T("Effect 2"), 0x2f1230, 0x2f1250 },
    { _T("Effect 3"), 0x2f1250, 0x2f1270 },
    { _T("Effect 4"), 0x2f1270, 0x2f1290 },
    { _T("Zap Effect 1"), 0x2f1350, 0x2f1370, indexKOF98_A_Yashiro },
    { _T("Zap Effect 2"), 0x2f1370, 0x2f1390, indexKOF98_A_Yashiro },
    { _T("Super Trail 1"), 0x2f1390, 0x2f13b0, indexKOF98_A_Yashiro },
    { _T("Super Trail 2"), 0x2f13b0, 0x2f13d0, indexKOF98_A_Yashiro },
    { _T("Super Trail 3"), 0x2f13d0, 0x2f13f0, indexKOF98_A_Yashiro },
};

const sGame_PaletteDataset KOF98_A_SHERMIE_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f13f0, 0x2f1410 },
    { _T("Effect 1"), 0x2f1410, 0x2f1430 },
    { _T("Effect 2"), 0x2f1430, 0x2f1450 },
    { _T("Effect 3"), 0x2f1450, 0x2f1470 },
    { _T("Effect 4"), 0x2f1470, 0x2f1490 },
    { _T("Effect 5"), 0x2f1490, 0x2f14b0 },
    { _T("Effect 6"), 0x2f14b0, 0x2f14d0 },
    { _T("Effect 7"), 0x2f14d0, 0x2f14f0 },
    { _T("Effect 10"), 0x2f1530, 0x2f1550 },
    { _T("Zap Effect 1"), 0x2f1550, 0x2f1570, indexKOF98_A_Shermie },
    { _T("Zap Effect 2"), 0x2f1570, 0x2f1590, indexKOF98_A_Shermie },
    { _T("Super Trail 1"), 0x2f1590, 0x2f15b0, indexKOF98_A_Shermie },
    { _T("Super Trail 2"), 0x2f15b0, 0x2f15d0, indexKOF98_A_Shermie },
    { _T("Super Trail 3"), 0x2f15d0, 0x2f15f0, indexKOF98_A_Shermie },
};

const sGame_PaletteDataset KOF98_A_CHRIS_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f15f0, 0x2f1610 },
    { _T("Effect 1"), 0x2f1610, 0x2f1630 },
    { _T("Effect 2"), 0x2f1630, 0x2f1650 },
    { _T("Effect 3"), 0x2f1650, 0x2f1670 },
    { _T("Effect 4"), 0x2f1670, 0x2f1690 },
    { _T("Effect 5"), 0x2f1690, 0x2f16b0 },
    { _T("Effect 6"), 0x2f16b0, 0x2f16d0 },
    { _T("Effect 7"), 0x2f16d0, 0x2f16f0 },
    { _T("Effect 8"), 0x2f16f0, 0x2f1710 },
    { _T("Effect 9"), 0x2f1710, 0x2f1730 },
    { _T("Effect 10"), 0x2f1730, 0x2f1750 },
    { _T("Zap Effect 1"), 0x2f1750, 0x2f1770, indexKOF98_A_Chris },
    { _T("Zap Effect 2"), 0x2f1770, 0x2f1790, indexKOF98_A_Chris },
    { _T("Super Trail 1"), 0x2f1790, 0x2f17b0, indexKOF98_A_Chris },
    { _T("Super Trail 2"), 0x2f17b0, 0x2f17d0, indexKOF98_A_Chris },
    { _T("Super Trail 3"), 0x2f17d0, 0x2f17f0, indexKOF98_A_Chris },
};

const sGame_PaletteDataset KOF98_A_YAMAZAKI_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f17f0, 0x2f1810 },
    { _T("Effect 1"), 0x2f1810, 0x2f1830 },
    { _T("Effect 2"), 0x2f1830, 0x2f1850 },
    { _T("Effect 3"), 0x2f1850, 0x2f1870 },
    { _T("Zap Effect 1"), 0x2f1950, 0x2f1970, indexKOF98_A_Yamazaki },
    { _T("Zap Effect 2"), 0x2f1970, 0x2f1990, indexKOF98_A_Yamazaki },
    { _T("Super Trail 1"), 0x2f1990, 0x2f19b0, indexKOF98_A_Yamazaki },
    { _T("Super Trail 2"), 0x2f19b0, 0x2f19d0, indexKOF98_A_Yamazaki },
    { _T("Super Trail 3"), 0x2f19d0, 0x2f19f0, indexKOF98_A_Yamazaki },
};

const sGame_PaletteDataset KOF98_A_BLUEMARY_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f19f0, 0x2f1a10 },
    { _T("Effect 1"), 0x2f1a10, 0x2f1a30 },
    { _T("Effect 2"), 0x2f1a30, 0x2f1a50 },
    { _T("Zap Effect 1"), 0x2f1b50, 0x2f1b70, indexKOF98_A_BlueMary },
    { _T("Zap Effect 2"), 0x2f1b70, 0x2f1b90, indexKOF98_A_BlueMary },
    { _T("Super Trail 1"), 0x2f1b90, 0x2f1bb0, indexKOF98_A_BlueMary },
    { _T("Super Trail 2"), 0x2f1bb0, 0x2f1bd0, indexKOF98_A_BlueMary },
    { _T("Super Trail 3"), 0x2f1bd0, 0x2f1bf0, indexKOF98_A_BlueMary },
};

const sGame_PaletteDataset KOF98_A_BILLY_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f1bf0, 0x2f1c10 },
    { _T("Effect 1"), 0x2f1c10, 0x2f1c30 },
    { _T("Effect 2"), 0x2f1c30, 0x2f1c50 },
    { _T("Effect 3"), 0x2f1c50, 0x2f1c70 },
    { _T("Effect 4"), 0x2f1c70, 0x2f1c90 },
    { _T("Effect 10"), 0x2f1d30, 0x2f1d50 },
    { _T("Zap Effect 1"), 0x2f1d50, 0x2f1d70, indexKOF98_A_Billy },
    { _T("Zap Effect 2"), 0x2f1d70, 0x2f1d90, indexKOF98_A_Billy },
    { _T("Super Trail 1"), 0x2f1d90, 0x2f1db0, indexKOF98_A_Billy },
    { _T("Super Trail 2"), 0x2f1db0, 0x2f1dd0, indexKOF98_A_Billy },
    { _T("Super Trail 3"), 0x2f1dd0, 0x2f1df0, indexKOF98_A_Billy },
};

const sGame_PaletteDataset KOF98_A_IORI_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f1df0, 0x2f1e10 },
    { _T("Effect 1"), 0x2f1e10, 0x2f1e30 },
    { _T("Effect 3"), 0x2f1e50, 0x2f1e70 },
    { _T("Effect 4"), 0x2f1e70, 0x2f1e90 },
    { _T("Zap Effect 1"), 0x2f1f50, 0x2f1f70, indexKOF98_A_Iori },
    { _T("Zap Effect 2"), 0x2f1f70, 0x2f1f90, indexKOF98_A_Iori },
    { _T("Super Trail 1"), 0x2f1f90, 0x2f1fb0, indexKOF98_A_Iori },
    { _T("Super Trail 2"), 0x2f1fb0, 0x2f1fd0, indexKOF98_A_Iori },
    { _T("Super Trail 3"), 0x2f1fd0, 0x2f1ff0, indexKOF98_A_Iori },
};

const sGame_PaletteDataset KOF98_A_MATURE_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f1ff0, 0x2f2010 },
    { _T("Effect 1"), 0x2f2010, 0x2f2030 },
    { _T("Effect 2"), 0x2f2030, 0x2f2050 },
    { _T("Effect 3"), 0x2f2050, 0x2f2070 },
    { _T("Effect 4"), 0x2f2070, 0x2f2090 },
    { _T("Effect 5"), 0x2f2090, 0x2f20b0 },
    { _T("Zap Effect 1"), 0x2f2150, 0x2f2170, indexKOF98_A_Mature },
    { _T("Zap Effect 2"), 0x2f2170, 0x2f2190, indexKOF98_A_Mature },
    { _T("Super Trail 1"), 0x2f2190, 0x2f21b0, indexKOF98_A_Mature },
    { _T("Super Trail 2"), 0x2f21b0, 0x2f21d0, indexKOF98_A_Mature },
    { _T("Super Trail 3"), 0x2f21d0, 0x2f21f0, indexKOF98_A_Mature },
};

const sGame_PaletteDataset KOF98_A_VICE_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f21f0, 0x2f2210 },
    { _T("Effect 1"), 0x2f2210, 0x2f2230 },
    { _T("Effect 2"), 0x2f2230, 0x2f2250 },
    { _T("Effect 3"), 0x2f2250, 0x2f2270 },
    { _T("Effect 10"), 0x2f2330, 0x2f2350 },
    { _T("Zap Effect 1"), 0x2f2350, 0x2f2370, indexKOF98_A_Vice },
    { _T("Zap Effect 2"), 0x2f2370, 0x2f2390, indexKOF98_A_Vice },
    { _T("Super Trail 1"), 0x2f2390, 0x2f23b0, indexKOF98_A_Vice },
    { _T("Super Trail 2"), 0x2f23b0, 0x2f23d0, indexKOF98_A_Vice },
    { _T("Super Trail 3"), 0x2f23d0, 0x2f23f0, indexKOF98_A_Vice },
};

const sGame_PaletteDataset KOF98_A_HEIDERN_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f23f0, 0x2f2410 },
    { _T("Effect 1"), 0x2f2410, 0x2f2430 },
    { _T("Effect 2"), 0x2f2430, 0x2f2450 },
    { _T("Effect 3"), 0x2f2450, 0x2f2470 },
    { _T("Effect 4"), 0x2f2470, 0x2f2490 },
    { _T("Effect 5"), 0x2f2490, 0x2f24b0 },
    { _T("Effect 6"), 0x2f24b0, 0x2f24d0 },
    { _T("Effect 7"), 0x2f24d0, 0x2f24f0 },
    { _T("Effect 8"), 0x2f24f0, 0x2f2510 },
    { _T("Effect 9"), 0x2f2510, 0x2f2530 },
    { _T("Effect 10"), 0x2f2530, 0x2f2550 },
    { _T("Zap Effect 1"), 0x2f2550, 0x2f2570, indexKOF98_A_Heidern },
    { _T("Zap Effect 2"), 0x2f2570, 0x2f2590, indexKOF98_A_Heidern },
    { _T("Super Trail 1"), 0x2f2590, 0x2f25b0, indexKOF98_A_Heidern },
    { _T("Super Trail 2"), 0x2f25b0, 0x2f25d0, indexKOF98_A_Heidern },
    { _T("Super Trail 3"), 0x2f25d0, 0x2f25f0, indexKOF98_A_Heidern },
};

const sGame_PaletteDataset KOF98_A_TAKUMA_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f25f0, 0x2f2610 },
    { _T("Effect 1"), 0x2f2610, 0x2f2630 },
    { _T("Effect 2"), 0x2f2630, 0x2f2650 },
    { _T("Effect 3"), 0x2f2650, 0x2f2670 },
    { _T("Effect 4"), 0x2f2670, 0x2f2690 },
    { _T("Effect 5"), 0x2f2690, 0x2f26b0 },
    { _T("Effect 6"), 0x2f26b0, 0x2f26d0 },
    { _T("Zap Effect 1"), 0x2f2750, 0x2f2770, indexKOF98_A_Takuma },
    { _T("Zap Effect 2"), 0x2f2770, 0x2f2790, indexKOF98_A_Takuma },
    { _T("Super Trail 1"), 0x2f2790, 0x2f27b0, indexKOF98_A_Takuma },
    { _T("Super Trail 2"), 0x2f27b0, 0x2f27d0, indexKOF98_A_Takuma },
    { _T("Super Trail 3"), 0x2f27d0, 0x2f27f0, indexKOF98_A_Takuma },
};

const sGame_PaletteDataset KOF98_A_SAISYU_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f27f0, 0x2f2810 },
    { _T("Effect 1"), 0x2f2810, 0x2f2830 },
    { _T("Effect 2"), 0x2f2830, 0x2f2850 },
    { _T("Effect 4"), 0x2f2870, 0x2f2890 },
    { _T("Effect 5"), 0x2f2890, 0x2f28b0 },
    { _T("Effect 6"), 0x2f28b0, 0x2f28d0 },
    { _T("Effect 7"), 0x2f28d0, 0x2f28f0 },
    { _T("Zap Effect 1"), 0x2f2950, 0x2f2970, indexKOF98_A_Saisyu },
    { _T("Zap Effect 2"), 0x2f2970, 0x2f2990, indexKOF98_A_Saisyu },
    { _T("Super Trail 1"), 0x2f2990, 0x2f29b0, indexKOF98_A_Saisyu },
    { _T("Super Trail 2"), 0x2f29b0, 0x2f29d0, indexKOF98_A_Saisyu },
    { _T("Super Trail 3"), 0x2f29d0, 0x2f29f0, indexKOF98_A_Saisyu },
};

const sGame_PaletteDataset KOF98_A_HEAVYD_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f29f0, 0x2f2a10 },
    { _T("Effect 1"), 0x2f2a10, 0x2f2a30 },
    { _T("Effect 2"), 0x2f2a30, 0x2f2a50 },
    { _T("Effect 3"), 0x2f2a50, 0x2f2a70 },
    { _T("Effect 4"), 0x2f2a70, 0x2f2a90 },
    { _T("Effect 5"), 0x2f2a90, 0x2f2ab0 },
    { _T("Effect 6"), 0x2f2ab0, 0x2f2ad0 },
    { _T("Zap Effect 1"), 0x2f2b50, 0x2f2b70, indexKOF98_A_HeavyD },
    { _T("Zap Effect 2"), 0x2f2b70, 0x2f2b90, indexKOF98_A_HeavyD },
    { _T("Super Trail 1"), 0x2f2b90, 0x2f2bb0, indexKOF98_A_HeavyD },
    { _T("Super Trail 2"), 0x2f2bb0, 0x2f2bd0, indexKOF98_A_HeavyD },
    { _T("Super Trail 3"), 0x2f2bd0, 0x2f2bf0, indexKOF98_A_HeavyD },
};

const sGame_PaletteDataset KOF98_A_LUCKY_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f2bf0, 0x2f2c10 },
    { _T("Effect 1"), 0x2f2c10, 0x2f2c30 },
    { _T("Effect 2"), 0x2f2c30, 0x2f2c50 },
    { _T("Effect 3"), 0x2f2c50, 0x2f2c70 },
    { _T("Effect 4"), 0x2f2c70, 0x2f2c90 },
    { _T("Zap Effect 1"), 0x2f2d50, 0x2f2d70, indexKOF98_A_Lucky },
    { _T("Zap Effect 2"), 0x2f2d70, 0x2f2d90, indexKOF98_A_Lucky },
    { _T("Super Trail 1"), 0x2f2d90, 0x2f2db0, indexKOF98_A_Lucky },
    { _T("Super Trail 2"), 0x2f2db0, 0x2f2dd0, indexKOF98_A_Lucky },
    { _T("Super Trail 3"), 0x2f2dd0, 0x2f2df0, indexKOF98_A_Lucky },
};

const sGame_PaletteDataset KOF98_A_BRIAN_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f2df0, 0x2f2e10 },
    { _T("Effect 1"), 0x2f2e10, 0x2f2e30 },
    { _T("Effect 2"), 0x2f2e30, 0x2f2e50 },
    { _T("Effect 3"), 0x2f2e50, 0x2f2e70 },
    { _T("Effect 4"), 0x2f2e70, 0x2f2e90 },
    { _T("Effect 5"), 0x2f2e90, 0x2f2eb0 },
    { _T("Zap Effect 1"), 0x2f2f50, 0x2f2f70, indexKOF98_A_Brian },
    { _T("Zap Effect 2"), 0x2f2f70, 0x2f2f90, indexKOF98_A_Brian },
    { _T("Super Trail 1"), 0x2f2f90, 0x2f2fb0, indexKOF98_A_Brian },
    { _T("Super Trail 2"), 0x2f2fb0, 0x2f2fd0, indexKOF98_A_Brian },
    { _T("Super Trail 3"), 0x2f2fd0, 0x2f2ff0, indexKOF98_A_Brian },
};

const sGame_PaletteDataset KOF98_A_RUGAL_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f2ff0, 0x2f3010 },
    { _T("Effect 1"), 0x2f3010, 0x2f3030 },
    { _T("Effect 2"), 0x2f3030, 0x2f3050 },
    { _T("Effect 3"), 0x2f3050, 0x2f3070 },
    { _T("Effect 5"), 0x2f3090, 0x2f30b0 },
    { _T("Effect 7"), 0x2f30d0, 0x2f30f0 },
    { _T("Effect 9"), 0x2f3110, 0x2f3130 },
    { _T("Zap Effect 1"), 0x2f3150, 0x2f3170, indexKOF98_A_Rugal },
    { _T("Zap Effect 2"), 0x2f3170, 0x2f3190, indexKOF98_A_Rugal },
    { _T("Super Trail 1"), 0x2f3190, 0x2f31b0, indexKOF98_A_Rugal },
    { _T("Super Trail 2"), 0x2f31b0, 0x2f31d0, indexKOF98_A_Rugal },
    { _T("Super Trail 3"), 0x2f31d0, 0x2f31f0, indexKOF98_A_Rugal },
};

const sGame_PaletteDataset KOF98_A_SHINGO_EFFECT_PALETTES[] =
{
    { _T("Zap Effect 1"), 0x2f3350, 0x2f3370, indexKOF98_A_Shingo },
    { _T("Zap Effect 2"), 0x2f3370, 0x2f3390, indexKOF98_A_Shingo },
    { _T("Super Trail 1"), 0x2f3390, 0x2f33b0, indexKOF98_A_Shingo },
    { _T("Super Trail 2"), 0x2f33b0, 0x2f33d0, indexKOF98_A_Shingo },
    { _T("Super Trail 3"), 0x2f33d0, 0x2f33f0, indexKOF98_A_Shingo },
};

const sGame_PaletteDataset KOF98_A_OMEGARUGAL_EFFECT_PALETTES[] =
{
    { _T("Effect 0"), 0x2f33f0, 0x2f3410 },
    { _T("Effect 1"), 0x2f3410, 0x2f3430 },
    { _T("Effect 3"), 0x2f3450, 0x2f3470 },
    { _T("Effect 7"), 0x2f34d0, 0x2f34f0 },
    { _T("Effect 8"), 0x2f34f0, 0x2f3510 },
    { _T("Effect 10"), 0x2f3530, 0x2f3550 },
    { _T("Zap Effect 1"), 0x2f3550, 0x2f3570, indexKOF98_A_Rugal },
    { _T("Zap Effect 2"), 0x2f3570, 0x2f3590, indexKOF98_A_Rugal },
    { _T("Super Trail 1"), 0x2f3590, 0x2f35b0, indexKOF98_A_Rugal },
    { _T("Super Trail 2"), 0x2f35b0, 0x2f35d0, indexKOF98_A_Rugal },
    { _T("Super Trail 3"), 0x2f35d0, 0x2f35f0, indexKOF98_A_Rugal },
};

const sDescTreeNode KOF98_A_KYO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_A, ARRAYSIZE(KOF98_A_KYO_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_B, ARRAYSIZE(KOF98_A_KYO_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_C, ARRAYSIZE(KOF98_A_KYO_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_PALETTE_D, ARRAYSIZE(KOF98_A_KYO_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_KYO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_BENIMARU_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_A, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_B, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_C, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_PALETTE_D, ARRAYSIZE(KOF98_A_BENIMARU_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_BENIMARU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_DAIMON_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_A, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_B, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_C, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_PALETTE_D, ARRAYSIZE(KOF98_A_DAIMON_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_DAIMON_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_TERRY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_A, ARRAYSIZE(KOF98_A_TERRY_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_B, ARRAYSIZE(KOF98_A_TERRY_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_C, ARRAYSIZE(KOF98_A_TERRY_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_PALETTE_D, ARRAYSIZE(KOF98_A_TERRY_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_TERRY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Andy_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_A, ARRAYSIZE(KOF98_A_Andy_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_B, ARRAYSIZE(KOF98_A_Andy_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_C, ARRAYSIZE(KOF98_A_Andy_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_PALETTE_D, ARRAYSIZE(KOF98_A_Andy_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_ANDY_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_ANDY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Joe_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_A, ARRAYSIZE(KOF98_A_Joe_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_B, ARRAYSIZE(KOF98_A_Joe_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_C, ARRAYSIZE(KOF98_A_Joe_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_PALETTE_D, ARRAYSIZE(KOF98_A_Joe_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_JOE_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_JOE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Ryo_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_A, ARRAYSIZE(KOF98_A_Ryo_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_B, ARRAYSIZE(KOF98_A_Ryo_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_C, ARRAYSIZE(KOF98_A_Ryo_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_PALETTE_D, ARRAYSIZE(KOF98_A_Ryo_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_RYO_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_RYO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Robert_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_A, ARRAYSIZE(KOF98_A_Robert_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_B, ARRAYSIZE(KOF98_A_Robert_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_C, ARRAYSIZE(KOF98_A_Robert_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_PALETTE_D, ARRAYSIZE(KOF98_A_Robert_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_ROBERT_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_ROBERT_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Yuri_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_A, ARRAYSIZE(KOF98_A_Yuri_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_B, ARRAYSIZE(KOF98_A_Yuri_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_C, ARRAYSIZE(KOF98_A_Yuri_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_PALETTE_D, ARRAYSIZE(KOF98_A_Yuri_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_YURI_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_YURI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Leona_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_A, ARRAYSIZE(KOF98_A_Leona_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_B, ARRAYSIZE(KOF98_A_Leona_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_C, ARRAYSIZE(KOF98_A_Leona_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_PALETTE_D, ARRAYSIZE(KOF98_A_Leona_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_LEONA_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_LEONA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Ralf_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_A, ARRAYSIZE(KOF98_A_Ralf_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_B, ARRAYSIZE(KOF98_A_Ralf_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_C, ARRAYSIZE(KOF98_A_Ralf_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_PALETTE_D, ARRAYSIZE(KOF98_A_Ralf_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_RALF_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_RALF_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Clark_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_A, ARRAYSIZE(KOF98_A_Clark_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_B, ARRAYSIZE(KOF98_A_Clark_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_C, ARRAYSIZE(KOF98_A_Clark_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_PALETTE_D, ARRAYSIZE(KOF98_A_Clark_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_CLARK_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CLARK_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Athena_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_A, ARRAYSIZE(KOF98_A_Athena_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_B, ARRAYSIZE(KOF98_A_Athena_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_C, ARRAYSIZE(KOF98_A_Athena_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_PALETTE_D, ARRAYSIZE(KOF98_A_Athena_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_ATHENA_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_ATHENA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Kensou_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_A, ARRAYSIZE(KOF98_A_Kensou_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_B, ARRAYSIZE(KOF98_A_Kensou_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_C, ARRAYSIZE(KOF98_A_Kensou_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_PALETTE_D, ARRAYSIZE(KOF98_A_Kensou_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_KENSOU_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_KENSOU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Chin_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_A, ARRAYSIZE(KOF98_A_Chin_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_B, ARRAYSIZE(KOF98_A_Chin_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_C, ARRAYSIZE(KOF98_A_Chin_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_PALETTE_D, ARRAYSIZE(KOF98_A_Chin_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_CHIN_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CHIN_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Chizuru_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_A, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_B, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_C, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_PALETTE_D, ARRAYSIZE(KOF98_A_Chizuru_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_CHIZURU_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CHIZURU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Mai_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_A, ARRAYSIZE(KOF98_A_Mai_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_B, ARRAYSIZE(KOF98_A_Mai_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_C, ARRAYSIZE(KOF98_A_Mai_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_PALETTE_D, ARRAYSIZE(KOF98_A_Mai_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_MAI_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_MAI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_King_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_A, ARRAYSIZE(KOF98_A_King_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_B, ARRAYSIZE(KOF98_A_King_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_C, ARRAYSIZE(KOF98_A_King_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_King_PALETTE_D, ARRAYSIZE(KOF98_A_King_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_KING_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_KING_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Kim_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_A, ARRAYSIZE(KOF98_A_Kim_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_B, ARRAYSIZE(KOF98_A_Kim_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_C, ARRAYSIZE(KOF98_A_Kim_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_PALETTE_D, ARRAYSIZE(KOF98_A_Kim_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_KIM_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_KIM_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Chang_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_A, ARRAYSIZE(KOF98_A_Chang_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_B, ARRAYSIZE(KOF98_A_Chang_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_C, ARRAYSIZE(KOF98_A_Chang_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_PALETTE_D, ARRAYSIZE(KOF98_A_Chang_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_CHANG_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CHANG_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Choi_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_A, ARRAYSIZE(KOF98_A_Choi_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_B, ARRAYSIZE(KOF98_A_Choi_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_C, ARRAYSIZE(KOF98_A_Choi_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_PALETTE_D, ARRAYSIZE(KOF98_A_Choi_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_CHOI_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CHOI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Yashiro_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_A, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_B, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_C, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_PALETTE_D, ARRAYSIZE(KOF98_A_Yashiro_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_YASHIRO_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_YASHIRO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Shermie_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_A, ARRAYSIZE(KOF98_A_Shermie_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_B, ARRAYSIZE(KOF98_A_Shermie_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_C, ARRAYSIZE(KOF98_A_Shermie_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_PALETTE_D, ARRAYSIZE(KOF98_A_Shermie_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_SHERMIE_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_SHERMIE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Chris_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_A, ARRAYSIZE(KOF98_A_Chris_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_B, ARRAYSIZE(KOF98_A_Chris_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_C, ARRAYSIZE(KOF98_A_Chris_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_PALETTE_D, ARRAYSIZE(KOF98_A_Chris_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_CHRIS_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_CHRIS_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Yamazaki_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_A, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_B, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_C, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_PALETTE_D, ARRAYSIZE(KOF98_A_Yamazaki_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_YAMAZAKI_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_YAMAZAKI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Blue_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_A, ARRAYSIZE(KOF98_A_Blue_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_B, ARRAYSIZE(KOF98_A_Blue_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_C, ARRAYSIZE(KOF98_A_Blue_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_PALETTE_D, ARRAYSIZE(KOF98_A_Blue_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_BLUEMARY_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_BLUEMARY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Billy_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_A, ARRAYSIZE(KOF98_A_Billy_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_B, ARRAYSIZE(KOF98_A_Billy_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_C, ARRAYSIZE(KOF98_A_Billy_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_PALETTE_D, ARRAYSIZE(KOF98_A_Billy_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_BILLY_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_BILLY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Iori_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_A, ARRAYSIZE(KOF98_A_Iori_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_B, ARRAYSIZE(KOF98_A_Iori_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_C, ARRAYSIZE(KOF98_A_Iori_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_PALETTE_D, ARRAYSIZE(KOF98_A_Iori_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_IORI_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_IORI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Mature_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_A, ARRAYSIZE(KOF98_A_Mature_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_B, ARRAYSIZE(KOF98_A_Mature_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_C, ARRAYSIZE(KOF98_A_Mature_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_PALETTE_D, ARRAYSIZE(KOF98_A_Mature_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_MATURE_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_MATURE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Vice_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_A, ARRAYSIZE(KOF98_A_Vice_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_B, ARRAYSIZE(KOF98_A_Vice_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_C, ARRAYSIZE(KOF98_A_Vice_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_PALETTE_D, ARRAYSIZE(KOF98_A_Vice_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_VICE_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_VICE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Heidern_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_A, ARRAYSIZE(KOF98_A_Heidern_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_B, ARRAYSIZE(KOF98_A_Heidern_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_C, ARRAYSIZE(KOF98_A_Heidern_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_PALETTE_D, ARRAYSIZE(KOF98_A_Heidern_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_HEIDERN_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_HEIDERN_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Takuma_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_A, ARRAYSIZE(KOF98_A_Takuma_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_B, ARRAYSIZE(KOF98_A_Takuma_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_C, ARRAYSIZE(KOF98_A_Takuma_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_PALETTE_D, ARRAYSIZE(KOF98_A_Takuma_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_TAKUMA_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_TAKUMA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Saisyu_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_A, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_B, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_C, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_PALETTE_D, ARRAYSIZE(KOF98_A_Saisyu_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_SAISYU_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_SAISYU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_HeavyD_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_HeavyD_PALETTE_A, ARRAYSIZE(KOF98_A_HeavyD_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_HeavyD_PALETTE_B, ARRAYSIZE(KOF98_A_HeavyD_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_HeavyD_PALETTE_C, ARRAYSIZE(KOF98_A_HeavyD_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_HeavyD_PALETTE_D, ARRAYSIZE(KOF98_A_HeavyD_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_HEAVYD_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_HEAVYD_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Lucky_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_A, ARRAYSIZE(KOF98_A_Lucky_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_B, ARRAYSIZE(KOF98_A_Lucky_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_C, ARRAYSIZE(KOF98_A_Lucky_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_PALETTE_D, ARRAYSIZE(KOF98_A_Lucky_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_LUCKY_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_LUCKY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Brian_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_A, ARRAYSIZE(KOF98_A_Brian_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_B, ARRAYSIZE(KOF98_A_Brian_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_C, ARRAYSIZE(KOF98_A_Brian_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_PALETTE_D, ARRAYSIZE(KOF98_A_Brian_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_BRIAN_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_BRIAN_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Rugal_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_A, ARRAYSIZE(KOF98_A_Rugal_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_B, ARRAYSIZE(KOF98_A_Rugal_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_C, ARRAYSIZE(KOF98_A_Rugal_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_PALETTE_D, ARRAYSIZE(KOF98_A_Rugal_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_RUGAL_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_RUGAL_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_Shingo_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_A, ARRAYSIZE(KOF98_A_Shingo_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_B, ARRAYSIZE(KOF98_A_Shingo_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_C, ARRAYSIZE(KOF98_A_Shingo_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_PALETTE_D, ARRAYSIZE(KOF98_A_Shingo_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_SHINGO_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_SHINGO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF98_A_OYashiro_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_A, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_B, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_C, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_PALETTE_D, ARRAYSIZE(KOF98_A_OYashiro_PALETTE_D) },
};

const sDescTreeNode KOF98_A_OShermie_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_A, ARRAYSIZE(KOF98_A_OShermie_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_B, ARRAYSIZE(KOF98_A_OShermie_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_C, ARRAYSIZE(KOF98_A_OShermie_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_PALETTE_D, ARRAYSIZE(KOF98_A_OShermie_PALETTE_D) },
};

const sDescTreeNode KOF98_A_OChris_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_A, ARRAYSIZE(KOF98_A_OChris_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_B, ARRAYSIZE(KOF98_A_OChris_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_C, ARRAYSIZE(KOF98_A_OChris_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_PALETTE_D, ARRAYSIZE(KOF98_A_OChris_PALETTE_D) },
};

const sDescTreeNode KOF98_A_OmegaRugal_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF98_A_OmegaRugal_PALETTE_A, ARRAYSIZE(KOF98_A_OmegaRugal_PALETTE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF98_A_OmegaRugal_PALETTE_B, ARRAYSIZE(KOF98_A_OmegaRugal_PALETTE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF98_A_OmegaRugal_PALETTE_C, ARRAYSIZE(KOF98_A_OmegaRugal_PALETTE_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF98_A_OmegaRugal_PALETTE_D, ARRAYSIZE(KOF98_A_OmegaRugal_PALETTE_D) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)KOF98_A_OMEGARUGAL_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_OMEGARUGAL_EFFECT_PALETTES) },
};

const UINT8 KOF98_A_UNITSORT[KOF98_A_NUMUNIT + 1] // Plus 1 for extras
{
    indexKOF98_A_Kyo,
    indexKOF98_A_Benimaru,
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
    indexKOF98_A_King,
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
    { _T("Kyo"), DESC_NODETYPE_TREE, (void*)KOF98_A_KYO_COLLECTION, ARRAYSIZE(KOF98_A_KYO_COLLECTION) },
    { _T("Benimaru"), DESC_NODETYPE_TREE, (void*)KOF98_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF98_A_BENIMARU_COLLECTION) },
    { _T("Daimon"), DESC_NODETYPE_TREE, (void*)KOF98_A_DAIMON_COLLECTION, ARRAYSIZE(KOF98_A_DAIMON_COLLECTION) },
    { _T("Terry"), DESC_NODETYPE_TREE, (void*)KOF98_A_TERRY_COLLECTION, ARRAYSIZE(KOF98_A_TERRY_COLLECTION) },
    { _T("Andy"), DESC_NODETYPE_TREE, (void*)KOF98_A_Andy_COLLECTION, ARRAYSIZE(KOF98_A_Andy_COLLECTION) },
    { _T("Joe"), DESC_NODETYPE_TREE, (void*)KOF98_A_Joe_COLLECTION, ARRAYSIZE(KOF98_A_Joe_COLLECTION) },
    { _T("Ryo"), DESC_NODETYPE_TREE, (void*)KOF98_A_Ryo_COLLECTION, ARRAYSIZE(KOF98_A_Ryo_COLLECTION) },
    { _T("Robert"), DESC_NODETYPE_TREE, (void*)KOF98_A_Robert_COLLECTION, ARRAYSIZE(KOF98_A_Robert_COLLECTION) },
    { _T("Yuri"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yuri_COLLECTION, ARRAYSIZE(KOF98_A_Yuri_COLLECTION) },
    { _T("Leona"), DESC_NODETYPE_TREE, (void*)KOF98_A_Leona_COLLECTION, ARRAYSIZE(KOF98_A_Leona_COLLECTION) },
    { _T("Ralf"), DESC_NODETYPE_TREE, (void*)KOF98_A_Ralf_COLLECTION, ARRAYSIZE(KOF98_A_Ralf_COLLECTION) },
    { _T("Clark"), DESC_NODETYPE_TREE, (void*)KOF98_A_Clark_COLLECTION, ARRAYSIZE(KOF98_A_Clark_COLLECTION) },
    { _T("Athena"), DESC_NODETYPE_TREE, (void*)KOF98_A_Athena_COLLECTION, ARRAYSIZE(KOF98_A_Athena_COLLECTION) },
    { _T("Kensou"), DESC_NODETYPE_TREE, (void*)KOF98_A_Kensou_COLLECTION, ARRAYSIZE(KOF98_A_Kensou_COLLECTION) },
    { _T("Chin"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chin_COLLECTION, ARRAYSIZE(KOF98_A_Chin_COLLECTION) },
    { _T("Chizuru"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chizuru_COLLECTION, ARRAYSIZE(KOF98_A_Chizuru_COLLECTION) },
    { _T("Mai"), DESC_NODETYPE_TREE, (void*)KOF98_A_Mai_COLLECTION, ARRAYSIZE(KOF98_A_Mai_COLLECTION) },
    { _T("King"), DESC_NODETYPE_TREE, (void*)KOF98_A_King_COLLECTION, ARRAYSIZE(KOF98_A_King_COLLECTION) },
    { _T("Kim"), DESC_NODETYPE_TREE, (void*)KOF98_A_Kim_COLLECTION, ARRAYSIZE(KOF98_A_Kim_COLLECTION) },
    { _T("Chang"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chang_COLLECTION, ARRAYSIZE(KOF98_A_Chang_COLLECTION) },
    { _T("Choi"), DESC_NODETYPE_TREE, (void*)KOF98_A_Choi_COLLECTION, ARRAYSIZE(KOF98_A_Choi_COLLECTION) },
    { _T("Yashiro"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yashiro_COLLECTION, ARRAYSIZE(KOF98_A_Yashiro_COLLECTION) },
    { _T("Shermie"), DESC_NODETYPE_TREE, (void*)KOF98_A_Shermie_COLLECTION, ARRAYSIZE(KOF98_A_Shermie_COLLECTION) },
    { _T("Chris"), DESC_NODETYPE_TREE, (void*)KOF98_A_Chris_COLLECTION, ARRAYSIZE(KOF98_A_Chris_COLLECTION) },
    { _T("Yamazaki"), DESC_NODETYPE_TREE, (void*)KOF98_A_Yamazaki_COLLECTION, ARRAYSIZE(KOF98_A_Yamazaki_COLLECTION) },
    { _T("Blue Mary"), DESC_NODETYPE_TREE, (void*)KOF98_A_Blue_COLLECTION, ARRAYSIZE(KOF98_A_Blue_COLLECTION) },
    { _T("Billy"), DESC_NODETYPE_TREE, (void*)KOF98_A_Billy_COLLECTION, ARRAYSIZE(KOF98_A_Billy_COLLECTION) },
    { _T("Iori"), DESC_NODETYPE_TREE, (void*)KOF98_A_Iori_COLLECTION, ARRAYSIZE(KOF98_A_Iori_COLLECTION) },
    { _T("Mature"), DESC_NODETYPE_TREE, (void*)KOF98_A_Mature_COLLECTION, ARRAYSIZE(KOF98_A_Mature_COLLECTION) },
    { _T("Vice"), DESC_NODETYPE_TREE, (void*)KOF98_A_Vice_COLLECTION, ARRAYSIZE(KOF98_A_Vice_COLLECTION) },
    { _T("Heidern"), DESC_NODETYPE_TREE, (void*)KOF98_A_Heidern_COLLECTION, ARRAYSIZE(KOF98_A_Heidern_COLLECTION) },
    { _T("Takuma"), DESC_NODETYPE_TREE, (void*)KOF98_A_Takuma_COLLECTION, ARRAYSIZE(KOF98_A_Takuma_COLLECTION) },
    { _T("Saisyu"), DESC_NODETYPE_TREE, (void*)KOF98_A_Saisyu_COLLECTION, ARRAYSIZE(KOF98_A_Saisyu_COLLECTION) },
    { _T("Heavy D!"), DESC_NODETYPE_TREE, (void*)KOF98_A_HeavyD_COLLECTION, ARRAYSIZE(KOF98_A_HeavyD_COLLECTION) },
    { _T("Lucky"), DESC_NODETYPE_TREE, (void*)KOF98_A_Lucky_COLLECTION, ARRAYSIZE(KOF98_A_Lucky_COLLECTION) },
    { _T("Brian"), DESC_NODETYPE_TREE, (void*)KOF98_A_Brian_COLLECTION, ARRAYSIZE(KOF98_A_Brian_COLLECTION) },
    { _T("Rugal"), DESC_NODETYPE_TREE, (void*)KOF98_A_Rugal_COLLECTION, ARRAYSIZE(KOF98_A_Rugal_COLLECTION) },
    { _T("Shingo"), DESC_NODETYPE_TREE, (void*)KOF98_A_Shingo_COLLECTION, ARRAYSIZE(KOF98_A_Shingo_COLLECTION) },
    { _T("O.Yashiro"), DESC_NODETYPE_TREE, (void*)KOF98_A_OYashiro_COLLECTION, ARRAYSIZE(KOF98_A_OYashiro_COLLECTION) },
    { _T("O.Shermie"), DESC_NODETYPE_TREE, (void*)KOF98_A_OShermie_COLLECTION, ARRAYSIZE(KOF98_A_OShermie_COLLECTION) },
    { _T("O.Chris"), DESC_NODETYPE_TREE, (void*)KOF98_A_OChris_COLLECTION, ARRAYSIZE(KOF98_A_OChris_COLLECTION) },
    { _T("Omega Rugal"), DESC_NODETYPE_TREE, (void*)KOF98_A_OmegaRugal_COLLECTION, ARRAYSIZE(KOF98_A_OmegaRugal_COLLECTION) },
};

// We extend this array with data groveled from the GarouE.txt extensible extras file, if any.
const stExtraDef KOF98_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
