#pragma once
const UINT16 KOF98ae_A_IMG_UNITS[] =
{
    indexKOFSprites_98Kyo,
    indexKOFSprites_98Benimaru,
    indexKOFSprites_98Daimon,
    indexKOFSprites_98Terry,
    indexKOFSprites_98Andy,
    indexKOFSprites_98Joe,
    indexKOFSprites_98Ryo,
    indexKOFSprites_98Robert,
    indexKOFSprites_98Yuri,
    indexKOFSprites_98Leona,
    indexKOFSprites_98Ralf,
    indexKOFSprites_98Clark,
    indexKOFSprites_98Athena,
    indexKOFSprites_98Kensou,
    indexKOFSprites_98Chin,
    indexKOFSprites_98Chizuru,
    indexKOFSprites_98Mai,
    indexKOFSprites_98King,
    indexKOFSprites_98Kim,
    indexKOFSprites_98Chang,
    indexKOFSprites_98Choi,
    indexKOFSprites_98Yashiro,
    indexKOFSprites_98Shermie,
    indexKOFSprites_98Chris,
    indexKOFSprites_98Yamazaki,
    indexKOFSprites_98BlueMary,
    indexKOFSprites_98Billy,
    indexKOFSprites_98Iori,
    indexKOFSprites_98Mature,
    indexKOFSprites_98Vice,
    indexKOFSprites_98Heidern,
    indexKOFSprites_98Takuma,
    indexKOFSprites_98Saisyu,
    indexKOFSprites_98HeavyD,
    indexKOFSprites_98Lucky,
    indexKOFSprites_98Brian,
    indexKOFSprites_98Rugal,
    indexKOFSprites_98Shingo, // 25

    //Used for KOF98AE2016 Romhack
    indexKOFSprites_02Goenitz,
    indexKOFSprites_02Geese,
    //indexKOF98Sprites_Krauzer,
    //indexKOF98Sprites_MrBig,
    indexKOFSprites_00Kasumi,
    indexKOF97Sprites_Orochi,
    indexKOF97Sprites_IoriOrochi,   // 0x1F7
    indexKOF97Sprites_LeonaOrochi,  // 0x1F8
    indexKOFSprites_02UM_KyoKusa,
    indexKOFSprites_02Robert,

    indexKOFSprites_98OrderSelect,
    indexKOFSprites_98Lifebar,      // 77
    indexKOFSprites_98WinPortrait,  // 78
};

const sGame_PaletteDataset KOF98AE2016_A_Kyo_A[] =
{
    { L"Kyo A - Main", 0x4d97f0, 0x4d9810, indexKOFSprites_02UM_KyoKusa },
    { L"Extra 1", 0x4d9810, 0x4d9830 },
    { L"Extra 2", 0x4d9830, 0x4d9850 },
    { L"Max Mode", 0x4d9850, 0x4d9870, indexKOFSprites_02UM_KyoKusa },
    { L"Extra 3", 0x4d9870, 0x4d9890 },
    { L"Extra 4", 0x4d9890, 0x4d98b0 },
    { L"Order Select", 0x4d98b0, 0x4d98d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kyo },
    { L"Life Bar Portrait", 0x4d98d0, 0x4d98f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo  },
    { L"Win Screen Portrait", 0x4d98f0, 0x4d99f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kyo  },

};

const sGame_PaletteDataset KOF98AE2016_A_Kyo_B[] =
{
    { L"Kyo B - Main", 0x4d99f0, 0x4d9a10, indexKOFSprites_02UM_KyoKusa },
    { L"Extra 1", 0x4d9a10, 0x4d9a30 },
    { L"Extra 2", 0x4d9a30, 0x4d9a50 },
    { L"Max Mode", 0x4d9a50, 0x4d9a70, indexKOFSprites_02UM_KyoKusa },
    { L"Extra 3", 0x4d9a70, 0x4d9a90 },
    { L"Extra 4", 0x4d9a90, 0x4d9ab0 },
    { L"Order Select", 0x4d9ab0, 0x4d9ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kyo },
    { L"Life Bar Portrait", 0x4d9ad0, 0x4d9af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo  },
    { L"Win Screen Portrait ", 0x4d9af0, 0x4d9bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kyo  },

};

const sGame_PaletteDataset KOF98AE2016_A_Kyo_C[] =
{
    { L"Kyo C - Main", 0x4d9bf0, 0x4d9c10, indexKOFSprites_02UM_KyoKusa },
    { L"Extra 1", 0x4d9c10, 0x4d9c30 },
    { L"Extra 2", 0x4d9c30, 0x4d9c50 },
    { L"Max Mode", 0x4d9c50, 0x4d9c70, indexKOFSprites_02UM_KyoKusa },
    { L"Extra 3", 0x4d9c70, 0x4d9c90 },
    { L"Extra 4", 0x4d9c90, 0x4d9cb0 },
    { L"Order Select", 0x4d9cb0, 0x4d9cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kyo },
    { L"Life Bar Portrait", 0x4d9cd0, 0x4d9cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo  },
    { L"Win Screen Portrait", 0x4d9cf0, 0x4d9df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kyo  },

};

const sGame_PaletteDataset KOF98AE2016_A_Kyo_D[] =
{
    { L"Kyo D - Main", 0x4d9df0, 0x4d9e10, indexKOFSprites_02UM_KyoKusa },
    { L"Extra 1", 0x4d9e10, 0x4d9e30 },
    { L"Extra 2", 0x4d9e30, 0x4d9e50 },
    { L"Max Mode", 0x4d9e50, 0x4d9e70, indexKOFSprites_02UM_KyoKusa },
    { L"Extra 3", 0x4d9e70, 0x4d9e90 },
    { L"Extra 4", 0x4d9e90, 0x4d9eb0 },
    { L"Order Select", 0x4d9eb0, 0x4d9ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kyo },
    { L"Life Bar Portrait", 0x4d9ed0, 0x4d9ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo  },
    { L"Win Screen Portrait", 0x4d9ef0, 0x4d9ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kyo  },

};

const sGame_PaletteDataset KOF98AE2016_A_Benimaru_A[] =
{
    { L"Benimaru A - Main", 0x4d9ff0, 0x4da010, indexKOFSprites_98Benimaru },
    { L"Extra 1", 0x4da010, 0x4da030 },
    { L"Extra 2", 0x4da030, 0x4da050 },
    { L"Max Mode", 0x4da050, 0x4da070, indexKOFSprites_98Benimaru },
    { L"Extra 3", 0x4da070, 0x4da090 },
    { L"Extra 4", 0x4da090, 0x4da0b0 },
    { L"Order Select", 0x4da0b0, 0x4da0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Benimaru },
    { L"Life Bar Portrait", 0x4da0d0, 0x4da0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Benimaru },
    { L"Win Screen Portrait", 0x4da0f0, 0x4da1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Benimaru },

};

const sGame_PaletteDataset KOF98AE2016_A_Benimaru_B[] =
{
    { L"Benimaru B - Main", 0x4da1f0, 0x4da210, indexKOFSprites_98Benimaru },
    { L"Extra 1", 0x4da210, 0x4da230 },
    { L"Extra 2", 0x4da230, 0x4da250 },
    { L"Max Mode", 0x4da250, 0x4da270, indexKOFSprites_98Benimaru },
    { L"Extra 3", 0x4da270, 0x4da290 },
    { L"Extra 4", 0x4da290, 0x4da2b0 },
    { L"Order Select", 0x4da2b0, 0x4da2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Benimaru },
    { L"Life Bar Portrait", 0x4da2d0, 0x4da2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Benimaru },
    { L"Win Screen Portrait", 0x4da2f0, 0x4da3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Benimaru },

};

const sGame_PaletteDataset KOF98AE2016_A_Benimaru_C[] =
{
    { L"Benimaru C - Main", 0x4da3f0, 0x4da410, indexKOFSprites_98Benimaru },
    { L"Extra 1", 0x4da410, 0x4da430 },
    { L"Extra 2", 0x4da430, 0x4da450 },
    { L"Max Mode", 0x4da450, 0x4da470, indexKOFSprites_98Benimaru },
    { L"Extra 3", 0x4da470, 0x4da490 },
    { L"Extra 4", 0x4da490, 0x4da4b0 },
    { L"Order Select", 0x4da4b0, 0x4da4d0,indexKOFSprites_98OrderSelect, indexKOFSprites_98Benimaru },
    { L"Life Bar Portrait", 0x4da4d0, 0x4da4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Benimaru },
    { L"Win Screen Portrait", 0x4da4f0, 0x4da5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Benimaru },

};

const sGame_PaletteDataset KOF98AE2016_A_Benimaru_D[] =
{
    { L"Benimaru D - Main", 0x4da5f0, 0x4da610, indexKOFSprites_98Benimaru },
    { L"Extra 1", 0x4da610, 0x4da630 },
    { L"Extra 2", 0x4da630, 0x4da650 },
    { L"Max Mode", 0x4da650, 0x4da670, indexKOFSprites_98Benimaru },
    { L"Extra 3", 0x4da670, 0x4da690 },
    { L"Extra 4", 0x4da690, 0x4da6b0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Benimaru },
    { L"Order Select", 0x4da6b0, 0x4da6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Benimaru },
    { L"Life Bar Portrait", 0x4da6d0, 0x4da6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Benimaru },
    { L"Win Screen Portrait", 0x4da6f0, 0x4da7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Benimaru },

};

const sGame_PaletteDataset KOF98AE2016_A_Daimon_A[] =
{
    { L"Daimon A - Main", 0x4da7f0, 0x4da810, indexKOFSprites_98Daimon },
    { L"Extra 1", 0x4da810, 0x4da830 },
    { L"Extra 2", 0x4da830, 0x4da850 },
    { L"Max Mode", 0x4da850, 0x4da870, indexKOFSprites_98Daimon },
    { L"Extra 3", 0x4da870, 0x4da890 },
    { L"Extra 4", 0x4da890, 0x4da8b0 },
    { L"Order Select", 0x4da8b0, 0x4da8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Daimon },
    { L"Life Bar Portrait", 0x4da8d0, 0x4da8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Win Screen Portrait", 0x4da8f0, 0x4da9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Daimon },

};

const sGame_PaletteDataset KOF98AE2016_A_Daimon_B[] =
{
    { L"Daimon B - Main", 0x4da9f0, 0x4daa10, indexKOFSprites_98Daimon },
    { L"Extra 1", 0x4daa10, 0x4daa30 },
    { L"Extra 2", 0x4daa30, 0x4daa50 },
    { L"Max Mode", 0x4daa50, 0x4daa70, indexKOFSprites_98Daimon },
    { L"Extra 3", 0x4daa70, 0x4daa90 },
    { L"Extra 4", 0x4daa90, 0x4daab0 },
    { L"Order Select", 0x4daab0, 0x4daad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Daimon },
    { L"Life Bar Portrait", 0x4daad0, 0x4daaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Win Screen Portrait", 0x4daaf0, 0x4dabf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Daimon },

};

const sGame_PaletteDataset KOF98AE2016_A_Daimon_C[] =
{
    { L"Daimon C - Main", 0x4dabf0, 0x4dac10, indexKOFSprites_98Daimon },
    { L"Extra 1", 0x4dac10, 0x4dac30 },
    { L"Extra 2", 0x4dac30, 0x4dac50 },
    { L"Max Mode", 0x4dac50, 0x4dac70, indexKOFSprites_98Daimon },
    { L"Extra 3", 0x4dac70, 0x4dac90 },
    { L"Extra 4", 0x4dac90, 0x4dacb0 },
    { L"Order Select", 0x4dacb0, 0x4dacd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Daimon },
    { L"Life Bar Portrait", 0x4dacd0, 0x4dacf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Win Screen Portrait", 0x4dacf0, 0x4dadf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Daimon },

};

const sGame_PaletteDataset KOF98AE2016_A_Daimon_D[] =
{
    { L"Daimon D - Main", 0x4dadf0, 0x4dae10, indexKOFSprites_98Daimon },
    { L"Extra 1", 0x4dae10, 0x4dae30 },
    { L"Extra 2", 0x4dae30, 0x4dae50 },
    { L"Max Mode", 0x4dae50, 0x4dae70, indexKOFSprites_98Daimon },
    { L"Extra 3", 0x4dae70, 0x4dae90 },
    { L"Extra 4", 0x4dae90, 0x4daeb0 },
    { L"Order Select", 0x4daeb0, 0x4daed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Daimon },
    { L"Life Bar Portrait", 0x4daed0, 0x4daef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Win Screen Portrait", 0x4daef0, 0x4daff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Daimon },

};

const sGame_PaletteDataset KOF98AE2016_A_Terry_A[] =
{
    { L"Terry A - Main", 0x4daff0, 0x4db010, indexKOFSprites_98Terry },
    { L"Extra 1", 0x4db010, 0x4db030 },
    { L"Extra 2", 0x4db030, 0x4db050 },
    { L"Max Mode", 0x4db050, 0x4db070, indexKOFSprites_98Terry },
    { L"Extra 3", 0x4db070, 0x4db090 },
    { L"Extra 4", 0x4db090, 0x4db0b0 },
    { L"Order Select", 0x4db0b0, 0x4db0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Terry },
    { L"Life Bar Portrait", 0x4db0d0, 0x4db0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Win Screen Portrait", 0x4db0f0, 0x4db1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Terry },

};

const sGame_PaletteDataset KOF98AE2016_A_Terry_B[] =
{
    { L"Terry B - Main", 0x4db1f0, 0x4db210, indexKOFSprites_98Terry },
    { L"Extra 1", 0x4db210, 0x4db230 },
    { L"Extra 2", 0x4db230, 0x4db250 },
    { L"Max Mode", 0x4db250, 0x4db270, indexKOFSprites_98Terry },
    { L"Extra 3", 0x4db270, 0x4db290 },
    { L"Extra 4", 0x4db290, 0x4db2b0 },
    { L"Order Select", 0x4db2b0, 0x4db2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Terry },
    { L"Life Bar Portrait", 0x4db2d0, 0x4db2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Win Screen Portrait", 0x4db2f0, 0x4db3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Terry },

};

const sGame_PaletteDataset KOF98AE2016_A_Terry_C[] =
{
    { L"Terry C - Main", 0x4db3f0, 0x4db410, indexKOFSprites_98Terry },
    { L"Extra 1", 0x4db410, 0x4db430 },
    { L"Extra 2", 0x4db430, 0x4db450 },
    { L"Max Mode", 0x4db450, 0x4db470, indexKOFSprites_98Terry },
    { L"Extra 3", 0x4db470, 0x4db490 },
    { L"Extra 4", 0x4db490, 0x4db4b0 },
    { L"Order Select", 0x4db4b0, 0x4db4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Terry },
    { L"Life Bar Portrait", 0x4db4d0, 0x4db4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Win Screen Portrait", 0x4db4f0, 0x4db5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Terry },

};

const sGame_PaletteDataset KOF98AE2016_A_Terry_D[] =
{
    { L"Terry D - Main", 0x4db5f0, 0x4db610, indexKOFSprites_98Terry },
    { L"Extra 1", 0x4db610, 0x4db630 },
    { L"Extra 2", 0x4db630, 0x4db650 },
    { L"Max Mode", 0x4db650, 0x4db670, indexKOFSprites_98Terry },
    { L"Extra 3", 0x4db670, 0x4db690 },
    { L"Extra 4", 0x4db690, 0x4db6b0 },
    { L"Order Select", 0x4db6b0, 0x4db6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Terry },
    { L"Life Bar Portrait", 0x4db6d0, 0x4db6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Win Screen Portrait", 0x4db6f0, 0x4db7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Terry },

};

const sGame_PaletteDataset KOF98AE2016_A_Andy_A[] =
{
    { L"Andy A - Main", 0x4db7f0, 0x4db810, indexKOFSprites_98Andy },
    { L"Extra 1", 0x4db810, 0x4db830 },
    { L"Extra 2", 0x4db830, 0x4db850 },
    { L"Max Mode", 0x4db850, 0x4db870, indexKOFSprites_98Andy },
    { L"Extra 3", 0x4db870, 0x4db890 },
    { L"Extra 4", 0x4db890, 0x4db8b0 },
    { L"Order Select", 0x4db8b0, 0x4db8d0, indexKOFSprites_98OrderSelect, 0x48 },
    { L"Life Bar Portrait", 0x4db8d0, 0x4db8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Andy },
    { L"Win Screen Portrait", 0x4db8f0, 0x4db9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Andy },

};

const sGame_PaletteDataset KOF98AE2016_A_Andy_B[] =
{
    { L"Andy B - Main", 0x4db9f0, 0x4dba10, indexKOFSprites_98Andy },
    { L"Extra 1", 0x4dba10, 0x4dba30 },
    { L"Extra 2", 0x4dba30, 0x4dba50 },
    { L"Max Mode", 0x4dba50, 0x4dba70, indexKOFSprites_98Andy },
    { L"Extra 3", 0x4dba70, 0x4dba90 },
    { L"Extra 4", 0x4dba90, 0x4dbab0 },
    { L"Order Select", 0x4dbab0, 0x4dbad0, indexKOFSprites_98OrderSelect, 0x48 },
    { L"Life Bar Portrait", 0x4dbad0, 0x4dbaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Andy },
    { L"Win Screen Portrait", 0x4dbaf0, 0x4dbbf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Andy },

};

const sGame_PaletteDataset KOF98AE2016_A_Andy_C[] =
{
    { L"Andy C - Main", 0x4dbbf0, 0x4dbc10, indexKOFSprites_98Andy },
    { L"Extra 1", 0x4dbc10, 0x4dbc30 },
    { L"Extra 2", 0x4dbc30, 0x4dbc50 },
    { L"Max Mode", 0x4dbc50, 0x4dbc70, indexKOFSprites_98Andy },
    { L"Extra 3", 0x4dbc70, 0x4dbc90 },
    { L"Extra 4", 0x4dbc90, 0x4dbcb0 },
    { L"Order Select", 0x4dbcb0, 0x4dbcd0, indexKOFSprites_98OrderSelect, 0x48 },
    { L"Life Bar Portrait", 0x4dbcd0, 0x4dbcf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Andy },
    { L"Win Screen Portrait", 0x4dbcf0, 0x4dbdf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Andy },

};

const sGame_PaletteDataset KOF98AE2016_A_Andy_D[] =
{
    { L"Andy D - Main", 0x4dbdf0, 0x4dbe10, indexKOFSprites_98Andy },
    { L"Extra 1", 0x4dbe10, 0x4dbe30 },
    { L"Extra 2", 0x4dbe30, 0x4dbe50 },
    { L"Max Mode", 0x4dbe50, 0x4dbe70, indexKOFSprites_98Andy },
    { L"Extra 3", 0x4dbe70, 0x4dbe90 },
    { L"Extra 4", 0x4dbe90, 0x4dbeb0 },
    { L"Order Select", 0x4dbeb0, 0x4dbed0, indexKOFSprites_98OrderSelect, 0x48 },
    { L"Life Bar Portrait", 0x4dbed0, 0x4dbef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Andy },
    { L"Win Screen Portrait", 0x4dbef0, 0x4dbff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Andy },

};

const sGame_PaletteDataset KOF98AE2016_A_Joe_A[] =
{
    { L"Joe A - Main", 0x4dbff0, 0x4dc010, indexKOFSprites_98Joe },
    { L"Extra 1", 0x4dc010, 0x4dc030 },
    { L"Extra 2", 0x4dc030, 0x4dc050 },
    { L"Max Mode", 0x4dc050, 0x4dc070, indexKOFSprites_98Joe },
    { L"Extra 3", 0x4dc070, 0x4dc090 },
    { L"Extra 4", 0x4dc090, 0x4dc0b0 },
    { L"Order Select", 0x4dc0b0, 0x4dc0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Joe },
    { L"Life Bar Portrait", 0x4dc0d0, 0x4dc0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Win Screen Portrait", 0x4dc0f0, 0x4dc1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Joe },

};

const sGame_PaletteDataset KOF98AE2016_A_Joe_B[] =
{
    { L"Joe B - Main", 0x4dc1f0, 0x4dc210, indexKOFSprites_98Joe },
    { L"Extra 1", 0x4dc210, 0x4dc230 },
    { L"Extra 2", 0x4dc230, 0x4dc250 },
    { L"Max Mode", 0x4dc250, 0x4dc270, indexKOFSprites_98Joe },
    { L"Extra 3", 0x4dc270, 0x4dc290 },
    { L"Extra 4", 0x4dc290, 0x4dc2b0 },
    { L"Order Select", 0x4dc2b0, 0x4dc2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Joe },
    { L"Life Bar Portrait", 0x4dc2d0, 0x4dc2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Win Screen Portrait", 0x4dc2f0, 0x4dc3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Joe },

};

const sGame_PaletteDataset KOF98AE2016_A_Joe_C[] =
{
    { L"Joe C - Main", 0x4dc3f0, 0x4dc410, indexKOFSprites_98Joe },
    { L"Extra 1", 0x4dc410, 0x4dc430 },
    { L"Extra 2", 0x4dc430, 0x4dc450 },
    { L"Max Mode", 0x4dc450, 0x4dc470, indexKOFSprites_98Joe },
    { L"Extra 3", 0x4dc470, 0x4dc490 },
    { L"Extra 4", 0x4dc490, 0x4dc4b0 },
    { L"Order Select", 0x4dc4b0, 0x4dc4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Joe },
    { L"Life Bar Portrait", 0x4dc4d0, 0x4dc4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Win Screen Portrait", 0x4dc4f0, 0x4dc5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Joe },

};

const sGame_PaletteDataset KOF98AE2016_A_Joe_D[] =
{
    { L"Joe D - Main", 0x4dc5f0, 0x4dc610, indexKOFSprites_98Joe },
    { L"Extra 1", 0x4dc610, 0x4dc630 },
    { L"Extra 2", 0x4dc630, 0x4dc650 },
    { L"Max Mode", 0x4dc650, 0x4dc670, indexKOFSprites_98Joe },
    { L"Extra 3", 0x4dc670, 0x4dc690 },
    { L"Extra 4", 0x4dc690, 0x4dc6b0 },
    { L"Order Select", 0x4dc6b0, 0x4dc6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Joe },
    { L"Life Bar Portrait", 0x4dc6d0, 0x4dc6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Win Screen Portrait", 0x4dc6f0, 0x4dc7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Joe },

};

const sGame_PaletteDataset KOF98AE2016_A_Ryo_A[] =
{
    { L"Ryo A - Main", 0x4dc7f0, 0x4dc810, indexKOFSprites_98Ryo},
    { L"Extra 1", 0x4dc810, 0x4dc830 },
    { L"Extra 2", 0x4dc830, 0x4dc850 },
    { L"Max Mode", 0x4dc850, 0x4dc870, indexKOFSprites_98Ryo },
    { L"Extra 3", 0x4dc870, 0x4dc890 },
    { L"Extra 4", 0x4dc890, 0x4dc8b0 },
    { L"Order Select", 0x4dc8b0, 0x4dc8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ryo },
    { L"Life Bar Portrait", 0x4dc8d0, 0x4dc8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Win Screen Portrait", 0x4dc8f0, 0x4dc9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ryo },

};

const sGame_PaletteDataset KOF98AE2016_A_Ryo_B[] =
{
    { L"Ryo B - Main", 0x4dc9f0, 0x4dca10, indexKOFSprites_98Ryo},
    { L"Extra 1", 0x4dca10, 0x4dca30 },
    { L"Extra 2", 0x4dca30, 0x4dca50 },
    { L"Max Mode", 0x4dca50, 0x4dca70, indexKOFSprites_98Ryo},
    { L"Extra 3", 0x4dca70, 0x4dca90 },
    { L"Extra 4", 0x4dca90, 0x4dcab0 },
    { L"Order Select", 0x4dcab0, 0x4dcad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ryo },
    { L"Life Bar Portrait", 0x4dcad0, 0x4dcaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Win Screen Portrait", 0x4dcaf0, 0x4dcbf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ryo },

};

const sGame_PaletteDataset KOF98AE2016_A_Ryo_C[] =
{
    { L"Ryo C - Main", 0x4dcbf0, 0x4dcc10, indexKOFSprites_98Ryo},
    { L"Extra 1", 0x4dcc10, 0x4dcc30 },
    { L"Extra 2", 0x4dcc30, 0x4dcc50 },
    { L"Max Mode", 0x4dcc50, 0x4dcc70, indexKOFSprites_98Ryo},
    { L"Extra 3", 0x4dcc70, 0x4dcc90 },
    { L"Extra 4", 0x4dcc90, 0x4dccb0 },
    { L"Order Select", 0x4dccb0, 0x4dccd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ryo },
    { L"Life Bar Portrait", 0x4dccd0, 0x4dccf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Win Screen Portrait", 0x4dccf0, 0x4dcdf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ryo },

};

const sGame_PaletteDataset KOF98AE2016_A_Ryo_D[] =
{
    { L"Ryo D - Main", 0x4dcdf0, 0x4dce10, indexKOFSprites_98Ryo},
    { L"Extra 1", 0x4dce10, 0x4dce30 },
    { L"Extra 2", 0x4dce30, 0x4dce50 },
    { L"Max Mode", 0x4dce50, 0x4dce70, indexKOFSprites_98Ryo},
    { L"Extra 3", 0x4dce70, 0x4dce90 },
    { L"Extra 4", 0x4dce90, 0x4dceb0 },
    { L"Order Select", 0x4dceb0, 0x4dced0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ryo },
    { L"Life Bar Portrait", 0x4dced0, 0x4dcef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Win Screen Portrait", 0x4dcef0, 0x4dcff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF98AE2016_A_Robert_A[] =
{
    { L"Robert A - Main", 0x4dcff0, 0x4dd010, indexKOFSprites_98Robert },
    { L"Extra 1", 0x4dd010, 0x4dd030 },
    { L"Extra 2", 0x4dd030, 0x4dd050 },
    { L"Max Mode", 0x4dd050, 0x4dd070, indexKOFSprites_98Robert },
    { L"Extra 3", 0x4dd070, 0x4dd090 },
    { L"Extra 4", 0x4dd090, 0x4dd0b0 },
    { L"Order Select", 0x4dd0b0, 0x4dd0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Robert },
    { L"Life Bar Portrait", 0x4dd0d0, 0x4dd0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Win Screen Portrait", 0x4dd0f0, 0x4dd1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Robert },

};

const sGame_PaletteDataset KOF98AE2016_A_Robert_B[] =
{
    { L"Robert B - Main", 0x4dd1f0, 0x4dd210, indexKOFSprites_98Robert },
    { L"Extra 1", 0x4dd210, 0x4dd230 },
    { L"Extra 2", 0x4dd230, 0x4dd250 },
    { L"Max Mode", 0x4dd250, 0x4dd270, indexKOFSprites_98Robert },
    { L"Extra 3", 0x4dd270, 0x4dd290 },
    { L"Extra 4", 0x4dd290, 0x4dd2b0 },
    { L"Order Select", 0x4dd2b0, 0x4dd2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Robert },
    { L"Life Bar Portrait", 0x4dd2d0, 0x4dd2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Win Screen Portrait", 0x4dd2f0, 0x4dd3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Robert },

};

const sGame_PaletteDataset KOF98AE2016_A_Robert_C[] =
{
    { L"Robert C - Main", 0x4dd3f0, 0x4dd410, indexKOFSprites_98Robert },
    { L"Extra 1", 0x4dd410, 0x4dd430 },
    { L"Extra 2", 0x4dd430, 0x4dd450 },
    { L"Max Mode", 0x4dd450, 0x4dd470, indexKOFSprites_98Robert },
    { L"Extra 3", 0x4dd470, 0x4dd490 },
    { L"Extra 4", 0x4dd490, 0x4dd4b0 },
    { L"Order Select", 0x4dd4b0, 0x4dd4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Robert },
    { L"Life Bar Portrait", 0x4dd4d0, 0x4dd4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Win Screen Portrait", 0x4dd4f0, 0x4dd5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Robert },

};

const sGame_PaletteDataset KOF98AE2016_A_Robert_D[] =
{
    { L"Robert D - Main", 0x4dd5f0, 0x4dd610, indexKOFSprites_98Robert },
    { L"Extra 1", 0x4dd610, 0x4dd630 },
    { L"Extra 2", 0x4dd630, 0x4dd650 },
    { L"Max Mode", 0x4dd650, 0x4dd670, indexKOFSprites_98Robert },
    { L"Extra 3", 0x4dd670, 0x4dd690 },
    { L"Extra 4", 0x4dd690, 0x4dd6b0 },
    { L"Order Select", 0x4dd6b0, 0x4dd6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Robert },
    { L"Life Bar Portrait", 0x4dd6d0, 0x4dd6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Win Screen Portrait", 0x4dd6f0, 0x4dd7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Robert },

};

const sGame_PaletteDataset KOF98AE2016_A_Yuri_A[] =
{
    { L"Yuri A - Main", 0x4dd7f0, 0x4dd810, indexKOFSprites_98Yuri },
    { L"Extra 1", 0x4dd810, 0x4dd830 },
    { L"Extra 2", 0x4dd830, 0x4dd850 },
    { L"Max Mode", 0x4dd850, 0x4dd870, indexKOFSprites_98Yuri },
    { L"Extra 3", 0x4dd870, 0x4dd890 },
    { L"Extra 4", 0x4dd890, 0x4dd8b0 },
    { L"Order Select", 0x4dd8b0, 0x4dd8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yuri },
    { L"Life Bar Portrait", 0x4dd8d0, 0x4dd8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Win Screen Portrait", 0x4dd8f0, 0x4dd9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yuri },

};

const sGame_PaletteDataset KOF98AE2016_A_Yuri_B[] =
{
    { L"Yuri B - Main", 0x4dd9f0, 0x4dda10, indexKOFSprites_98Yuri },
    { L"Extra 1", 0x4dda10, 0x4dda30 },
    { L"Extra 2", 0x4dda30, 0x4dda50 },
    { L"Max Mode", 0x4dda50, 0x4dda70, indexKOFSprites_98Yuri },
    { L"Extra 3", 0x4dda70, 0x4dda90 },
    { L"Extra 4", 0x4dda90, 0x4ddab0 },
    { L"Order Select", 0x4ddab0, 0x4ddad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yuri },
    { L"Life Bar Portrait", 0x4ddad0, 0x4ddaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Win Screen Portrait", 0x4ddaf0, 0x4ddbf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yuri },

};

const sGame_PaletteDataset KOF98AE2016_A_Yuri_C[] =
{
    { L"Yuri C - Main", 0x4ddbf0, 0x4ddc10, indexKOFSprites_98Yuri },
    { L"Extra 1", 0x4ddc10, 0x4ddc30 },
    { L"Extra 2", 0x4ddc30, 0x4ddc50 },
    { L"Max Mode", 0x4ddc50, 0x4ddc70, indexKOFSprites_98Yuri },
    { L"Extra 3", 0x4ddc70, 0x4ddc90 },
    { L"Extra 4", 0x4ddc90, 0x4ddcb0 },
    { L"Order Select", 0x4ddcb0, 0x4ddcd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yuri },
    { L"Life Bar Portrait", 0x4ddcd0, 0x4ddcf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Win Screen Portrait", 0x4ddcf0, 0x4dddf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yuri },

};

const sGame_PaletteDataset KOF98AE2016_A_Yuri_D[] =
{
    { L"Yuri D - Main", 0x4dddf0, 0x4dde10, indexKOFSprites_98Yuri },
    { L"Extra 1", 0x4dde10, 0x4dde30 },
    { L"Extra 2", 0x4dde30, 0x4dde50 },
    { L"Max Mode", 0x4dde50, 0x4dde70, indexKOFSprites_98Yuri },
    { L"Extra 3", 0x4dde70, 0x4dde90 },
    { L"Extra 4", 0x4dde90, 0x4ddeb0 },
    { L"Order Select", 0x4ddeb0, 0x4dded0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yuri },
    { L"Life Bar Portrait", 0x4dded0, 0x4ddef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Win Screen Portrait", 0x4ddef0, 0x4ddff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yuri },

};

const sGame_PaletteDataset KOF98AE2016_A_Leona_A[] =
{
    { L"Leona A - Main", 0x4ddff0, 0x4de010, indexKOFSprites_98Leona },
    { L"Extra 1", 0x4de010, 0x4de030 },
    { L"Extra 2", 0x4de030, 0x4de050 },
    { L"Max Mode", 0x4de050, 0x4de070, indexKOFSprites_98Leona },
    { L"Extra 3", 0x4de070, 0x4de090 },
    { L"Extra 4", 0x4de090, 0x4de0b0 },
    { L"Order Select", 0x4de0b0, 0x4de0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Leona },
    { L"Life Bar Portrait", 0x4de0d0, 0x4de0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Win Screen Portrait", 0x4de0f0, 0x4de1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Leona },

};

const sGame_PaletteDataset KOF98AE2016_A_Leona_B[] =
{
    { L"Leona B - Main", 0x4de1f0, 0x4de210, indexKOFSprites_98Leona },
    { L"Extra 1", 0x4de210, 0x4de230 },
    { L"Extra 2", 0x4de230, 0x4de250 },
    { L"Max Mode", 0x4de250, 0x4de270, indexKOFSprites_98Leona },
    { L"Extra 3", 0x4de270, 0x4de290 },
    { L"Extra 4", 0x4de290, 0x4de2b0 },
    { L"Order Select", 0x4de2b0, 0x4de2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Leona },
    { L"Life Bar Portrait", 0x4de2d0, 0x4de2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Win Screen Portrait", 0x4de2f0, 0x4de3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Leona },

};

const sGame_PaletteDataset KOF98AE2016_A_Leona_C[] =
{
    { L"Leona C - Main", 0x4de3f0, 0x4de410, indexKOFSprites_98Leona },
    { L"Extra 1", 0x4de410, 0x4de430 },
    { L"Extra 2", 0x4de430, 0x4de450 },
    { L"Max Mode", 0x4de450, 0x4de470, indexKOFSprites_98Leona },
    { L"Extra 3", 0x4de470, 0x4de490 },
    { L"Extra 4", 0x4de490, 0x4de4b0 },
    { L"Order Select", 0x4de4b0, 0x4de4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Leona },
    { L"Life Bar Portrait", 0x4de4d0, 0x4de4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Win Screen Portrait", 0x4de4f0, 0x4de5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Leona },

};

const sGame_PaletteDataset KOF98AE2016_A_Leona_D[] =
{
    { L"Leona D - Main", 0x4de5f0, 0x4de610, indexKOFSprites_98Leona },
    { L"Extra 1", 0x4de610, 0x4de630 },
    { L"Extra 2", 0x4de630, 0x4de650 },
    { L"Max Mode", 0x4de650, 0x4de670, indexKOFSprites_98Leona },
    { L"Extra 3", 0x4de670, 0x4de690 },
    { L"Extra 4", 0x4de690, 0x4de6b0 },
    { L"Order Select", 0x4de6b0, 0x4de6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Leona },
    { L"Life Bar Portrait", 0x4de6d0, 0x4de6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Win Screen Portrait", 0x4de6f0, 0x4de7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Leona },

};

const sGame_PaletteDataset KOF98AE2016_A_Ralf_A[] =
{
    { L"Ralf A - Main", 0x4de7f0, 0x4de810, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Extra 1", 0x4de810, 0x4de830, indexKOFSprites_98Ralf, 0x01 },
    { L"Extra 2", 0x4de830, 0x4de850 },
    { L"Max Mode", 0x4de850, 0x4de870, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Extra 3", 0x4de870, 0x4de890, indexKOFSprites_98Ralf, 0x01 },
    { L"Extra 4", 0x4de890, 0x4de8b0 },
    { L"Order Select", 0x4de8b0, 0x4de8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ralf },
    { L"Life Bar Portrait", 0x4de8d0, 0x4de8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Win Screen Portrait", 0x4de8f0, 0x4de9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ralf },

};

const sGame_PaletteDataset KOF98AE2016_A_Ralf_B[] =
{
    { L"Ralf B - Main", 0x4de9f0, 0x4dea10, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Extra 1", 0x4dea10, 0x4dea30, indexKOFSprites_98Ralf, 0x01 },
    { L"Extra 2", 0x4dea30, 0x4dea50 },
    { L"Max Mode", 0x4dea50, 0x4dea70, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Extra 3", 0x4dea70, 0x4dea90, indexKOFSprites_98Ralf, 0x01 },
    { L"Extra 4", 0x4dea90, 0x4deab0 },
    { L"Order Select", 0x4deab0, 0x4dead0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ralf },
    { L"Life Bar Portrait", 0x4dead0, 0x4deaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Win Screen Portrait", 0x4deaf0, 0x4debf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ralf },

};

const sGame_PaletteDataset KOF98AE2016_A_Ralf_C[] =
{
    { L"Ralf C - Main", 0x4debf0, 0x4dec10, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Extra 1", 0x4dec10, 0x4dec30, indexKOFSprites_98Ralf, 0x01 },
    { L"Extra 2", 0x4dec30, 0x4dec50 },
    { L"Max Mode", 0x4dec50, 0x4dec70, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Extra 3", 0x4dec70, 0x4dec90, indexKOFSprites_98Ralf, 0x01 },
    { L"Extra 4", 0x4dec90, 0x4decb0 },
    { L"Order Select", 0x4decb0, 0x4decd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ralf },
    { L"Life Bar Portrait", 0x4decd0, 0x4decf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Win Screen Portrait", 0x4decf0, 0x4dedf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ralf },

};

const sGame_PaletteDataset KOF98AE2016_A_Ralf_D[] =
{
    { L"Ralf D - Main", 0x4dedf0, 0x4dee10, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Extra 1", 0x4dee10, 0x4dee30, indexKOFSprites_98Ralf, 0x01 },
    { L"Extra 2", 0x4dee30, 0x4dee50 },
    { L"Max Mode", 0x4dee50, 0x4dee70, indexKOFSprites_98Ralf, 0, &pairNext },
    { L"Extra 3", 0x4dee70, 0x4dee90, indexKOFSprites_98Ralf, 0x01 },
    { L"Extra 4", 0x4dee90, 0x4deeb0 },
    { L"Order Select", 0x4deeb0, 0x4deed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Ralf },
    { L"Life Bar Portrait", 0x4deed0, 0x4deef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Win Screen Portrait", 0x4deef0, 0x4deff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Ralf },

};

const sGame_PaletteDataset KOF98AE2016_A_Clark_A[] =
{
    { L"Clark A - Main", 0x4deff0, 0x4df010, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Extra 1", 0x4df010, 0x4df030, indexKOFSprites_98Clark, 0x01 },
    { L"Extra 2", 0x4df030, 0x4df050 },
    { L"Max Mode", 0x4df050, 0x4df070, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Extra 3", 0x4df070, 0x4df090, indexKOFSprites_98Clark, 0x01 },
    { L"Extra 4", 0x4df090, 0x4df0b0 },
    { L"Order Select", 0x4df0b0, 0x4df0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Clark },
    { L"Life Bar Portrait", 0x4df0d0, 0x4df0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Win Screen Portrait", 0x4df0f0, 0x4df1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Clark },

};

const sGame_PaletteDataset KOF98AE2016_A_Clark_B[] =
{
    { L"Clark B - Main", 0x4df1f0, 0x4df210, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Extra 1", 0x4df210, 0x4df230, indexKOFSprites_98Clark, 0x01 },
    { L"Extra 2", 0x4df230, 0x4df250 },
    { L"Max Mode", 0x4df250, 0x4df270, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Extra 3", 0x4df270, 0x4df290, indexKOFSprites_98Clark, 0x01 },
    { L"Extra 4", 0x4df290, 0x4df2b0 },
    { L"Order Select", 0x4df2b0, 0x4df2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Clark },
    { L"Life Bar Portrait", 0x4df2d0, 0x4df2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Win Screen Portrait", 0x4df2f0, 0x4df3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Clark },

};

const sGame_PaletteDataset KOF98AE2016_A_Clark_C[] =
{
    { L"Clark C - Main", 0x4df3f0, 0x4df410, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Extra 1", 0x4df410, 0x4df430, indexKOFSprites_98Clark, 0x01 },
    { L"Extra 2", 0x4df430, 0x4df450 },
    { L"Max Mode", 0x4df450, 0x4df470, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Extra 3", 0x4df470, 0x4df490, indexKOFSprites_98Clark, 0x01 },
    { L"Extra 4", 0x4df490, 0x4df4b0 },
    { L"Order Select", 0x4df4b0, 0x4df4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Clark },
    { L"Life Bar Portrait", 0x4df4d0, 0x4df4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Win Screen Portrait", 0x4df4f0, 0x4df5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Clark },

};

const sGame_PaletteDataset KOF98AE2016_A_Clark_D[] =
{
    { L"Clark D - Main", 0x4df5f0, 0x4df610, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Extra 1", 0x4df610, 0x4df630, indexKOFSprites_98Clark, 0x01 },
    { L"Extra 2", 0x4df630, 0x4df650 },
    { L"Max Mode", 0x4df650, 0x4df670, indexKOFSprites_98Clark, 0, &pairNext },
    { L"Extra 3", 0x4df670, 0x4df690, indexKOFSprites_98Clark, 0x01 },
    { L"Extra 4", 0x4df690, 0x4df6b0 },
    { L"Order Select", 0x4df6b0, 0x4df6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Clark },
    { L"Life Bar Portrait", 0x4df6d0, 0x4df6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Win Screen Portrait", 0x4df6f0, 0x4df7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Clark },

};

const sGame_PaletteDataset KOF98AE2016_A_Athena_A[] =
{
    { L"Athena A - Main", 0x4df7f0, 0x4df810, indexKOFSprites_98Athena },
    { L"Extra 1", 0x4df810, 0x4df830 },
    { L"Extra 2", 0x4df830, 0x4df850 },
    { L"Max Mode", 0x4df850, 0x4df870, indexKOFSprites_98Athena },
    { L"Extra 3", 0x4df870, 0x4df890 },
    { L"Extra 4", 0x4df890, 0x4df8b0 },
    { L"Order Select", 0x4df8b0, 0x4df8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Athena },
    { L"Life Bar Portrait", 0x4df8d0, 0x4df8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Athena },
    { L"Win Screen Portrait", 0x4df8f0, 0x4df9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Athena },

};

const sGame_PaletteDataset KOF98AE2016_A_Athena_B[] =
{
    { L"Athena B - Main", 0x4df9f0, 0x4dfa10, indexKOFSprites_98Athena },
    { L"Extra 1", 0x4dfa10, 0x4dfa30 },
    { L"Extra 2", 0x4dfa30, 0x4dfa50 },
    { L"Max Mode", 0x4dfa50, 0x4dfa70, indexKOFSprites_98Athena },
    { L"Extra 3", 0x4dfa70, 0x4dfa90 },
    { L"Extra 4", 0x4dfa90, 0x4dfab0 },
    { L"Order Select", 0x4dfab0, 0x4dfad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Athena },
    { L"Life Bar Portrait", 0x4dfad0, 0x4dfaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Athena },
    { L"Win Screen Portrait", 0x4dfaf0, 0x4dfbf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Athena },

};

const sGame_PaletteDataset KOF98AE2016_A_Athena_C[] =
{
    { L"Athena C - Main", 0x4dfbf0, 0x4dfc10, indexKOFSprites_98Athena },
    { L"Extra 1", 0x4dfc10, 0x4dfc30 },
    { L"Extra 2", 0x4dfc30, 0x4dfc50 },
    { L"Max Mode", 0x4dfc50, 0x4dfc70, indexKOFSprites_98Athena },
    { L"Extra 3", 0x4dfc70, 0x4dfc90 },
    { L"Extra 4", 0x4dfc90, 0x4dfcb0 },
    { L"Order Select", 0x4dfcb0, 0x4dfcd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Athena },
    { L"Life Bar Portrait", 0x4dfcd0, 0x4dfcf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Athena },
    { L"Win Screen Portrait", 0x4dfcf0, 0x4dfdf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Athena },

};

const sGame_PaletteDataset KOF98AE2016_A_Athena_D[] =
{
    { L"Athena D - Main", 0x4dfdf0, 0x4dfe10, indexKOFSprites_98Athena },
    { L"Extra 1", 0x4dfe10, 0x4dfe30 },
    { L"Extra 2", 0x4dfe30, 0x4dfe50 },
    { L"Max Mode", 0x4dfe50, 0x4dfe70, indexKOFSprites_98Athena },
    { L"Extra 3", 0x4dfe70, 0x4dfe90 },
    { L"Extra 4", 0x4dfe90, 0x4dfeb0 },
    { L"Order Select", 0x4dfeb0, 0x4dfed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Athena },
    { L"Life Bar Portrait", 0x4dfed0, 0x4dfef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Athena },
    { L"Win Screen Portrait", 0x4dfef0, 0x4dfff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Athena },

};

const sGame_PaletteDataset KOF98AE2016_A_Kensou_A[] =
{
    { L"Kensou A - Main", 0x4dfff0, 0x4e0010, indexKOFSprites_98Kensou },
    { L"Extra 1", 0x4e0010, 0x4e0030 },
    { L"Extra 2", 0x4e0030, 0x4e0050 },
    { L"Max Mode", 0x4e0050, 0x4e0070, indexKOFSprites_98Kensou },
    { L"Extra 3", 0x4e0070, 0x4e0090 },
    { L"Extra 4", 0x4e0090, 0x4e00b0 },
    { L"Order Select", 0x4e00b0, 0x4e00d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kensou },
    { L"Life Bar Portrait", 0x4e00d0, 0x4e00f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Win Screen Portrait", 0x4e00f0, 0x4e01f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kensou },

};

const sGame_PaletteDataset KOF98AE2016_A_Kensou_B[] =
{
    { L"Kensou B - Main", 0x4e01f0, 0x4e0210, indexKOFSprites_98Kensou },
    { L"Extra 1", 0x4e0210, 0x4e0230 },
    { L"Extra 2", 0x4e0230, 0x4e0250 },
    { L"Max Mode", 0x4e0250, 0x4e0270, indexKOFSprites_98Kensou },
    { L"Extra 3", 0x4e0270, 0x4e0290 },
    { L"Extra 4", 0x4e0290, 0x4e02b0 },
    { L"Order Select", 0x4e02b0, 0x4e02d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kensou },
    { L"Life Bar Portrait", 0x4e02d0, 0x4e02f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Win Screen Portrait", 0x4e02f0, 0x4e03f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kensou },

};

const sGame_PaletteDataset KOF98AE2016_A_Kensou_C[] =
{
    { L"Kensou C - Main", 0x4e03f0, 0x4e0410, indexKOFSprites_98Kensou },
    { L"Extra 1", 0x4e0410, 0x4e0430 },
    { L"Extra 2", 0x4e0430, 0x4e0450 },
    { L"Max Mode", 0x4e0450, 0x4e0470, indexKOFSprites_98Kensou },
    { L"Extra 3", 0x4e0470, 0x4e0490 },
    { L"Extra 4", 0x4e0490, 0x4e04b0 },
    { L"Order Select", 0x4e04b0, 0x4e04d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kensou },
    { L"Life Bar Portrait", 0x4e04d0, 0x4e04f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Win Screen Portrait", 0x4e04f0, 0x4e05f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kensou },

};

const sGame_PaletteDataset KOF98AE2016_A_Kensou_D[] =
{
    { L"Kensou D - Main", 0x4e05f0, 0x4e0610, indexKOFSprites_98Kensou },
    { L"Extra 1", 0x4e0610, 0x4e0630 },
    { L"Extra 2", 0x4e0630, 0x4e0650 },
    { L"Max Mode", 0x4e0650, 0x4e0670, indexKOFSprites_98Kensou },
    { L"Extra 3", 0x4e0670, 0x4e0690 },
    { L"Extra 4", 0x4e0690, 0x4e06b0 },
    { L"Order Select", 0x4e06b0, 0x4e06d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kensou },
    { L"Life Bar Portrait", 0x4e06d0, 0x4e06f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Win Screen Portrait", 0x4e06f0, 0x4e07f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kensou },

};

const sGame_PaletteDataset KOF98AE2016_A_Chin_A[] =
{
    { L"Chin A - Main", 0x4e07f0, 0x4e0810, indexKOFSprites_98Chin },
    { L"Extra 1", 0x4e0810, 0x4e0830 },
    { L"Extra 2", 0x4e0830, 0x4e0850 },
    { L"Max Mode", 0x4e0850, 0x4e0870, indexKOFSprites_98Chin },
    { L"Extra 3", 0x4e0870, 0x4e0890 },
    { L"Extra 4", 0x4e0890, 0x4e08b0 },
    { L"Order Select", 0x4e08b0, 0x4e08d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chin },
    { L"Life Bar Portrait", 0x4e08d0, 0x4e08f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Win Screen Portrait", 0x4e08f0, 0x4e09f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chin },

};

const sGame_PaletteDataset KOF98AE2016_A_Chin_B[] =
{
    { L"Chin B - Main", 0x4e09f0, 0x4e0a10, indexKOFSprites_98Chin },
    { L"Extra 1", 0x4e0a10, 0x4e0a30 },
    { L"Extra 2", 0x4e0a30, 0x4e0a50 },
    { L"Max Mode", 0x4e0a50, 0x4e0a70, indexKOFSprites_98Chin },
    { L"Extra 3", 0x4e0a70, 0x4e0a90 },
    { L"Extra 4", 0x4e0a90, 0x4e0ab0 },
    { L"Order Select", 0x4e0ab0, 0x4e0ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chin },
    { L"Life Bar Portrait", 0x4e0ad0, 0x4e0af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Win Screen Portrait", 0x4e0af0, 0x4e0bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chin },

};

const sGame_PaletteDataset KOF98AE2016_A_Chin_C[] =
{
    { L"Chin C - Main", 0x4e0bf0, 0x4e0c10, indexKOFSprites_98Chin },
    { L"Extra 1", 0x4e0c10, 0x4e0c30 },
    { L"Extra 2", 0x4e0c30, 0x4e0c50 },
    { L"Max Mode", 0x4e0c50, 0x4e0c70, indexKOFSprites_98Chin },
    { L"Extra 3", 0x4e0c70, 0x4e0c90 },
    { L"Extra 4", 0x4e0c90, 0x4e0cb0 },
    { L"Order Select", 0x4e0cb0, 0x4e0cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chin },
    { L"Life Bar Portrait", 0x4e0cd0, 0x4e0cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Win Screen Portrait", 0x4e0cf0, 0x4e0df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chin },

};

const sGame_PaletteDataset KOF98AE2016_A_Chin_D[] =
{
    { L"Chin D - Main", 0x4e0df0, 0x4e0e10, indexKOFSprites_98Chin },
    { L"Extra 1", 0x4e0e10, 0x4e0e30 },
    { L"Extra 2", 0x4e0e30, 0x4e0e50 },
    { L"Max Mode", 0x4e0e50, 0x4e0e70, indexKOFSprites_98Chin },
    { L"Extra 3", 0x4e0e70, 0x4e0e90 },
    { L"Extra 4", 0x4e0e90, 0x4e0eb0 },
    { L"Order Select", 0x4e0eb0, 0x4e0ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chin },
    { L"Life Bar Portrait", 0x4e0ed0, 0x4e0ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Win Screen Portrait", 0x4e0ef0, 0x4e0ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chin },

};

const sGame_PaletteDataset KOF98AE2016_A_Chizuru_A[] =
{
    { L"Chizuru A - Main", 0x4e0ff0, 0x4e1010, indexKOFSprites_98Chizuru },
    { L"Extra 1", 0x4e1010, 0x4e1030 },
    { L"Extra 2", 0x4e1030, 0x4e1050 },
    { L"Max Mode", 0x4e1050, 0x4e1070, indexKOFSprites_98Chizuru },
    { L"Extra 3", 0x4e1070, 0x4e1090 },
    { L"Extra 4", 0x4e1090, 0x4e10b0 },
    { L"Order Select", 0x4e10b0, 0x4e10d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chizuru },
    { L"Life Bar Portrait", 0x4e10d0, 0x4e10f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Win Screen Portrait", 0x4e10f0, 0x4e11f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chizuru },

};

const sGame_PaletteDataset KOF98AE2016_A_Chizuru_B[] =
{
    { L"Chizuru B - Main", 0x4e11f0, 0x4e1210, indexKOFSprites_98Chizuru },
    { L"Extra 1", 0x4e1210, 0x4e1230 },
    { L"Extra 2", 0x4e1230, 0x4e1250 },
    { L"Max Mode", 0x4e1250, 0x4e1270, indexKOFSprites_98Chizuru },
    { L"Extra 3", 0x4e1270, 0x4e1290 },
    { L"Extra 4", 0x4e1290, 0x4e12b0 },
    { L"Order Select", 0x4e12b0, 0x4e12d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chizuru },
    { L"Life Bar Portrait", 0x4e12d0, 0x4e12f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Win Screen Portrait", 0x4e12f0, 0x4e13f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chizuru },

};

const sGame_PaletteDataset KOF98AE2016_A_Chizuru_C[] =
{
    { L"Chizuru C - Main", 0x4e13f0, 0x4e1410, indexKOFSprites_98Chizuru },
    { L"Extra 1", 0x4e1410, 0x4e1430 },
    { L"Extra 2", 0x4e1430, 0x4e1450 },
    { L"Max Mode", 0x4e1450, 0x4e1470, indexKOFSprites_98Chizuru },
    { L"Extra 3", 0x4e1470, 0x4e1490 },
    { L"Extra 4", 0x4e1490, 0x4e14b0 },
    { L"Order Select", 0x4e14b0, 0x4e14d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chizuru },
    { L"Life Bar Portrait", 0x4e14d0, 0x4e14f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Win Screen Portrait", 0x4e14f0, 0x4e15f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chizuru },

};

const sGame_PaletteDataset KOF98AE2016_A_Chizuru_D[] =
{
    { L"Chizuru D - Main", 0x4e15f0, 0x4e1610, indexKOFSprites_98Chizuru },
    { L"Extra 1", 0x4e1610, 0x4e1630 },
    { L"Extra 2", 0x4e1630, 0x4e1650 },
    { L"Max Mode", 0x4e1650, 0x4e1670, indexKOFSprites_98Chizuru },
    { L"Extra 3", 0x4e1670, 0x4e1690 },
    { L"Extra 4", 0x4e1690, 0x4e16b0 },
    { L"Order Select", 0x4e16b0, 0x4e16d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chizuru },
    { L"Life Bar Portrait", 0x4e16d0, 0x4e16f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Win Screen Portrait", 0x4e16f0, 0x4e17f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chizuru },

};

const sGame_PaletteDataset KOF98AE2016_A_Mai_A[] =
{
    { L"Mai A - Main", 0x4e17f0, 0x4e1810, indexKOFSprites_98Mai },
    { L"Extra 1", 0x4e1810, 0x4e1830 },
    { L"Extra 2", 0x4e1830, 0x4e1850 },
    { L"Max Mode", 0x4e1850, 0x4e1870, indexKOFSprites_98Mai },
    { L"Extra 3", 0x4e1870, 0x4e1890 },
    { L"Extra 4", 0x4e1890, 0x4e18b0 },
    { L"Order Select", 0x4e18b0, 0x4e18d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mai },
    { L"Life Bar Portrait", 0x4e18d0, 0x4e18f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Win Screen Portrait", 0x4e18f0, 0x4e19f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mai },

};

const sGame_PaletteDataset KOF98AE2016_A_Mai_B[] =
{
    { L"Mai B - Main", 0x4e19f0, 0x4e1a10, indexKOFSprites_98Mai },
    { L"Extra 1", 0x4e1a10, 0x4e1a30 },
    { L"Extra 2", 0x4e1a30, 0x4e1a50 },
    { L"Max Mode", 0x4e1a50, 0x4e1a70, indexKOFSprites_98Mai },
    { L"Extra 3", 0x4e1a70, 0x4e1a90 },
    { L"Extra 4", 0x4e1a90, 0x4e1ab0 },
    { L"Order Select", 0x4e1ab0, 0x4e1ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mai },
    { L"Life Bar Portrait", 0x4e1ad0, 0x4e1af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Win Screen Portrait", 0x4e1af0, 0x4e1bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mai },

};

const sGame_PaletteDataset KOF98AE2016_A_Mai_C[] =
{
    { L"Mai C - Main", 0x4e1bf0, 0x4e1c10, indexKOFSprites_98Mai },
    { L"Extra 1", 0x4e1c10, 0x4e1c30 },
    { L"Extra 2", 0x4e1c30, 0x4e1c50 },
    { L"Max Mode", 0x4e1c50, 0x4e1c70, indexKOFSprites_98Mai },
    { L"Extra 3", 0x4e1c70, 0x4e1c90 },
    { L"Extra 4", 0x4e1c90, 0x4e1cb0 },
    { L"Order Select", 0x4e1cb0, 0x4e1cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mai },
    { L"Life Bar Portrait", 0x4e1cd0, 0x4e1cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Win Screen Portrait", 0x4e1cf0, 0x4e1d10, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mai },

};

const sGame_PaletteDataset KOF98AE2016_A_Mai_D[] =
{
    { L"Mai D - Main", 0x4e1df0, 0x4e1e10, indexKOFSprites_98Mai },
    { L"Extra 1", 0x4e1e10, 0x4e1e30 },
    { L"Extra 2", 0x4e1e30, 0x4e1e50 },
    { L"Max Mode", 0x4e1e50, 0x4e1e70, indexKOFSprites_98Mai },
    { L"Extra 3", 0x4e1e70, 0x4e1e90 },
    { L"Extra 4", 0x4e1e90, 0x4e1eb0 },
    { L"Order Select", 0x4e1eb0, 0x4e1ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mai },
    { L"Life Bar Portrait", 0x4e1ed0, 0x4e1ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Win Screen Portrait", 0x4e1ef0, 0x4e1f10, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mai },

};

const sGame_PaletteDataset KOF98AE2016_A_King_A[] =
{
    { L"King A - Main", 0x4e1ff0, 0x4e2010, indexKOFSprites_98King },
    { L"Extra 1", 0x4e2010, 0x4e2030 },
    { L"Extra 2", 0x4e2030, 0x4e2050 },
    { L"Max Mode", 0x4e2050, 0x4e2070, indexKOFSprites_98King },
    { L"Extra 3", 0x4e2070, 0x4e2090 },
    { L"Extra 4", 0x4e2090, 0x4e20b0 },
    { L"Order Select", 0x4e20b0, 0x4e20d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98King },
    { L"Life Bar Portrait", 0x4e20d0, 0x4e20f0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"Win Screen Portrait", 0x4e20f0, 0x4e2110, indexKOFSprites_98WinPortrait, indexKOFSprites_98King },

};

const sGame_PaletteDataset KOF98AE2016_A_King_B[] =
{
    { L"King B - Main", 0x4e21f0, 0x4e2210, indexKOFSprites_98King },
    { L"Extra 1", 0x4e2210, 0x4e2230 },
    { L"Extra 2", 0x4e2230, 0x4e2250 },
    { L"Max Mode", 0x4e2250, 0x4e2270, indexKOFSprites_98King },
    { L"Extra 3", 0x4e2270, 0x4e2290 },
    { L"Extra 4", 0x4e2290, 0x4e22b0 },
    { L"Order Select", 0x4e22b0, 0x4e22d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98King },
    { L"Life Bar Portrait", 0x4e22d0, 0x4e22f0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"Win Screen Portrait", 0x4e22f0, 0x4e23f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98King },

};

const sGame_PaletteDataset KOF98AE2016_A_King_C[] =
{
    { L"King C - Main", 0x4e23f0, 0x4e2410, indexKOFSprites_98King },
    { L"Extra 1", 0x4e2410, 0x4e2430 },
    { L"Extra 2", 0x4e2430, 0x4e2450 },
    { L"Max Mode", 0x4e2450, 0x4e2470, indexKOFSprites_98King },
    { L"Extra 3", 0x4e2470, 0x4e2490 },
    { L"Extra 4", 0x4e2490, 0x4e24b0 },
    { L"Order Select", 0x4e24b0, 0x4e24d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98King },
    { L"Life Bar Portrait", 0x4e24d0, 0x4e24f0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"Win Screen Portrait", 0x4e24f0, 0x4e25f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98King },

};

const sGame_PaletteDataset KOF98AE2016_A_King_D[] =
{
    { L"King D - Main", 0x4e25f0, 0x4e2610, indexKOFSprites_98King },
    { L"Extra 1", 0x4e2610, 0x4e2630 },
    { L"Extra 2", 0x4e2630, 0x4e2650 },
    { L"Max Mode", 0x4e2650, 0x4e2670, indexKOFSprites_98King },
    { L"Extra 3", 0x4e2670, 0x4e2690 },
    { L"Extra 4", 0x4e2690, 0x4e26b0 },
    { L"Order Select", 0x4e26b0, 0x4e26d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98King },
    { L"Life Bar Portrait", 0x4e26d0, 0x4e26f0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"Win Screen Portrait", 0x4e26f0, 0x4e27f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98King },

};

const sGame_PaletteDataset KOF98AE2016_A_Kim_A[] =
{
    { L"Kim A - Main", 0x4e27f0, 0x4e2810, indexKOFSprites_98Kim },
    { L"Extra 1", 0x4e2810, 0x4e2830 },
    { L"Extra 2", 0x4e2830, 0x4e2850 },
    { L"Max Mode", 0x4e2850, 0x4e2870, indexKOFSprites_98Kim },
    { L"Extra 3", 0x4e2870, 0x4e2890 },
    { L"Extra 4", 0x4e2890, 0x4e28b0 },
    { L"Order Select", 0x4e28b0, 0x4e28d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kim },
    { L"Life Bar Portrait", 0x4e28d0, 0x4e28f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Win Screen Portrait", 0x4e28f0, 0x4e29f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kim },

};

const sGame_PaletteDataset KOF98AE2016_A_Kim_B[] =
{
    { L"Kim B - Main", 0x4e29f0, 0x4e2a10, indexKOFSprites_98Kim },
    { L"Extra 1", 0x4e2a10, 0x4e2a30 },
    { L"Extra 2", 0x4e2a30, 0x4e2a50 },
    { L"Max Mode", 0x4e2a50, 0x4e2a70, indexKOFSprites_98Kim },
    { L"Extra 3", 0x4e2a70, 0x4e2a90 },
    { L"Extra 4", 0x4e2a90, 0x4e2ab0 },
    { L"Order Select", 0x4e2ab0, 0x4e2ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kim },
    { L"Life Bar Portrait", 0x4e2ad0, 0x4e2af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Win Screen Portrait", 0x4e2af0, 0x4e2bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kim },

};

const sGame_PaletteDataset KOF98AE2016_A_Kim_C[] =
{
    { L"Kim C - Main", 0x4e2bf0, 0x4e2c10, indexKOFSprites_98Kim },
    { L"Extra 1", 0x4e2c10, 0x4e2c30 },
    { L"Extra 2", 0x4e2c30, 0x4e2c50 },
    { L"Max Mode", 0x4e2c50, 0x4e2c70, indexKOFSprites_98Kim },
    { L"Extra 3", 0x4e2c70, 0x4e2c90 },
    { L"Extra 4", 0x4e2c90, 0x4e2cb0 },
    { L"Order Select", 0x4e2cb0, 0x4e2cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kim },
    { L"Life Bar Portrait", 0x4e2cd0, 0x4e2cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Win Screen Portrait", 0x4e2cf0, 0x4e2df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kim },

};

const sGame_PaletteDataset KOF98AE2016_A_Kim_D[] =
{
    { L"Kim D - Main", 0x4e2df0, 0x4e2e10, indexKOFSprites_98Kim },
    { L"Extra 1", 0x4e2e10, 0x4e2e30 },
    { L"Extra 2", 0x4e2e30, 0x4e2e50 },
    { L"Max Mode", 0x4e2e50, 0x4e2e70, indexKOFSprites_98Kim },
    { L"Extra 3", 0x4e2e70, 0x4e2e90 },
    { L"Extra 4", 0x4e2e90, 0x4e2eb0 },
    { L"Order Select", 0x4e2eb0, 0x4e2ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Kim },
    { L"Life Bar Portrait", 0x4e2ed0, 0x4e2ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Win Screen Portrait", 0x4e2ef0, 0x4e2ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Kim },

};

const sGame_PaletteDataset KOF98AE2016_A_Chang_A[] =
{
    { L"Chang A - Main", 0x4e2ff0, 0x4e3010, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Extra 1", 0x4e3010, 0x4e3030, indexKOFSprites_98Chang, 0x01 },
    { L"Extra 2", 0x4e3030, 0x4e3050 },
    { L"Max Mode", 0x4e3050, 0x4e3070, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Extra 3", 0x4e3070, 0x4e3090, indexKOFSprites_98Chang, 0x01 },
    { L"Extra 4", 0x4e3090, 0x4e30b0 },
    { L"Order Select", 0x4e30b0, 0x4e30d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chang },
    { L"Life Bar Portrait", 0x4e30d0, 0x4e30f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Win Screen Portrait", 0x4e30f0, 0x4e31f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chang },

};

const sGame_PaletteDataset KOF98AE2016_A_Chang_B[] =
{
    { L"Chang B - Main", 0x4e31f0, 0x4e3210, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Extra 1", 0x4e3210, 0x4e3230, indexKOFSprites_98Chang, 0x01 },
    { L"Extra 2", 0x4e3230, 0x4e3250 },
    { L"Max Mode", 0x4e3250, 0x4e3270, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Extra 3", 0x4e3270, 0x4e3290, indexKOFSprites_98Chang, 0x01 },
    { L"Extra 4", 0x4e3290, 0x4e32b0 },
    { L"Order Select", 0x4e32b0, 0x4e32d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chang },
    { L"Life Bar Portrait", 0x4e32d0, 0x4e32f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Win Screen Portrait", 0x4e32f0, 0x4e33f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chang },

};

const sGame_PaletteDataset KOF98AE2016_A_Chang_C[] =
{
    { L"Chang C - Main", 0x4e33f0, 0x4e3410, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Extra 1", 0x4e3410, 0x4e3430, indexKOFSprites_98Chang, 0x01 },
    { L"Extra 2", 0x4e3430, 0x4e3450 },
    { L"Max Mode", 0x4e3450, 0x4e3470, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Extra 3", 0x4e3470, 0x4e3490, indexKOFSprites_98Chang, 0x01 },
    { L"Extra 4", 0x4e3490, 0x4e34b0 },
    { L"Order Select", 0x4e34b0, 0x4e34d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chang },
    { L"Life Bar Portrait", 0x4e34d0, 0x4e34f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Win Screen Portrait", 0x4e34f0, 0x4e35f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chang },

};

const sGame_PaletteDataset KOF98AE2016_A_Chang_D[] =
{
    { L"Chang D - Main", 0x4e35f0, 0x4e3610, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Extra 1", 0x4e3610, 0x4e3630, indexKOFSprites_98Chang, 0x01 },
    { L"Extra 2", 0x4e3630, 0x4e3650 },
    { L"Max Mode", 0x4e3650, 0x4e3670, indexKOFSprites_98Chang, 0, &pairNext },
    { L"Extra 3", 0x4e3670, 0x4e3690, indexKOFSprites_98Chang, 0x01 },
    { L"Extra 4", 0x4e3690, 0x4e36b0 },
    { L"Order Select", 0x4e36b0, 0x4e36d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chang },
    { L"Life Bar Portrait", 0x4e36d0, 0x4e36f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Win Screen Portrait", 0x4e36f0, 0x4e37f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chang },

};

const sGame_PaletteDataset KOF98AE2016_A_Choi_A[] =
{
    { L"Choi A - Main", 0x4e37f0, 0x4e3810, indexKOFSprites_98Choi },
    { L"Extra 1", 0x4e3810, 0x4e3830 },
    { L"Extra 2", 0x4e3830, 0x4e3850 },
    { L"Max Mode", 0x4e3850, 0x4e3870, indexKOFSprites_98Choi },
    { L"Extra 3", 0x4e3870, 0x4e3890 },
    { L"Extra 4", 0x4e3890, 0x4e38b0 },
    { L"Order Select", 0x4e38b0, 0x4e38d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Choi },
    { L"Life Bar Portrait", 0x4e38d0, 0x4e38f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Win Screen Portrait", 0x4e38f0, 0x4e39f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Choi },

};

const sGame_PaletteDataset KOF98AE2016_A_Choi_B[] =
{
    { L"Choi B - Main", 0x4e39f0, 0x4e3a10, indexKOFSprites_98Choi },
    { L"Extra 1", 0x4e3a10, 0x4e3a30 },
    { L"Extra 2", 0x4e3a30, 0x4e3a50 },
    { L"Max Mode", 0x4e3a50, 0x4e3a70, indexKOFSprites_98Choi },
    { L"Extra 3", 0x4e3a70, 0x4e3a90 },
    { L"Extra 4", 0x4e3a90, 0x4e3ab0 },
    { L"Order Select", 0x4e3ab0, 0x4e3ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Choi },
    { L"Life Bar Portrait", 0x4e3ad0, 0x4e3af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Win Screen Portrait", 0x4e3af0, 0x4e3bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Choi },

};

const sGame_PaletteDataset KOF98AE2016_A_Choi_C[] =
{
    { L"Choi C - Main", 0x4e3bf0, 0x4e3c10, indexKOFSprites_98Choi },
    { L"Extra 1", 0x4e3c10, 0x4e3c30 },
    { L"Extra 2", 0x4e3c30, 0x4e3c50 },
    { L"Max Mode", 0x4e3c50, 0x4e3c70, indexKOFSprites_98Choi },
    { L"Extra 3", 0x4e3c70, 0x4e3c90 },
    { L"Extra 4", 0x4e3c90, 0x4e3cb0 },
    { L"Order Select", 0x4e3cb0, 0x4e3cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Choi },
    { L"Life Bar Portrait", 0x4e3cd0, 0x4e3cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Win Screen Portrait", 0x4e3cf0, 0x4e3df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Choi },

};

const sGame_PaletteDataset KOF98AE2016_A_Choi_D[] =
{
    { L"Choi D - Main", 0x4e3df0, 0x4e3e10, indexKOFSprites_98Choi },
    { L"Extra 1", 0x4e3e10, 0x4e3e30 },
    { L"Extra 2", 0x4e3e30, 0x4e3e50 },
    { L"Max Mode", 0x4e3e50, 0x4e3e70, indexKOFSprites_98Choi },
    { L"Extra 3", 0x4e3e70, 0x4e3e90 },
    { L"Extra 4", 0x4e3e90, 0x4e3eb0 },
    { L"Order Select", 0x4e3eb0, 0x4e3ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Choi },
    { L"Life Bar Portrait", 0x4e3ed0, 0x4e3ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Win Screen Portrait", 0x4e3ef0, 0x4e3ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Choi },

};

const sGame_PaletteDataset KOF98AE2016_A_Yashiro_A[] =
{
    { L"Yashiro A - Main", 0x4e3ff0, 0x4e4010, indexKOFSprites_98Yashiro },
    { L"Extra 1", 0x4e4010, 0x4e4030 },
    { L"Extra 2", 0x4e4030, 0x4e4050 },
    { L"Max Mode", 0x4e4050, 0x4e4070, indexKOFSprites_98Yashiro },
    { L"Extra 3", 0x4e4070, 0x4e4090 },
    { L"Extra 4", 0x4e4090, 0x4e40b0 },
    { L"Order Select", 0x4e40b0, 0x4e40d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yashiro },
    { L"Life Bar Portrait", 0x4e40d0, 0x4e40f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Win Screen Portrait", 0x4e40f0, 0x4e41f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yashiro },

};

const sGame_PaletteDataset KOF98AE2016_A_Yashiro_B[] =
{
    { L"Yashiro B - Main", 0x4e41f0, 0x4e4210, indexKOFSprites_98Yashiro },
    { L"Extra 1", 0x4e4210, 0x4e4230 },
    { L"Extra 2", 0x4e4230, 0x4e4250 },
    { L"Max Mode", 0x4e4250, 0x4e4270, indexKOFSprites_98Yashiro },
    { L"Extra 3", 0x4e4270, 0x4e4290 },
    { L"Extra 4", 0x4e4290, 0x4e42b0 },
    { L"Order Select", 0x4e42b0, 0x4e42d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yashiro },
    { L"Life Bar Portrait", 0x4e42d0, 0x4e42f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Win Screen Portrait", 0x4e42f0, 0x4e43f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yashiro },

};

const sGame_PaletteDataset KOF98AE2016_A_Yashiro_C[] =
{
    { L"Yashiro C - Main", 0x4e43f0, 0x4e4410, indexKOFSprites_98Yashiro },
    { L"Extra 1", 0x4e4410, 0x4e4430 },
    { L"Extra 2", 0x4e4430, 0x4e4450 },
    { L"Max Mode", 0x4e4450, 0x4e4470, indexKOFSprites_98Yashiro },
    { L"Extra 3", 0x4e4470, 0x4e4490 },
    { L"Extra 4", 0x4e4490, 0x4e44b0 },
    { L"Order Select", 0x4e44b0, 0x4e44d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yashiro },
    { L"Life Bar Portrait", 0x4e44d0, 0x4e44f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Win Screen Portrait", 0x4e44f0, 0x4e45f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yashiro },

};

const sGame_PaletteDataset KOF98AE2016_A_Yashiro_D[] =
{
    { L"Yashiro D - Main", 0x4e45f0, 0x4e4610, indexKOFSprites_98Yashiro },
    { L"Extra 1", 0x4e4610, 0x4e4630 },
    { L"Extra 2", 0x4e4630, 0x4e4650 },
    { L"Max Mode", 0x4e4650, 0x4e4670, indexKOFSprites_98Yashiro },
    { L"Extra 3", 0x4e4670, 0x4e4690 },
    { L"Extra 4", 0x4e4690, 0x4e46b0 },
    { L"Order Select", 0x4e46b0, 0x4e46d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yashiro },
    { L"Life Bar Portrait", 0x4e46d0, 0x4e46f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Win Screen Portrait", 0x4e46f0, 0x4e47f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yashiro },

};

const sGame_PaletteDataset KOF98AE2016_A_Shermie_A[] =
{
    { L"Shermie A - Main", 0x4e47f0, 0x4e4810, indexKOFSprites_98Shermie },
    { L"Extra 1", 0x4e4810, 0x4e4830 },
    { L"Extra 2", 0x4e4830, 0x4e4850 },
    { L"Max Mode", 0x4e4850, 0x4e4870, indexKOFSprites_98Shermie },
    { L"Extra 3", 0x4e4870, 0x4e4890 },
    { L"Extra 4", 0x4e4890, 0x4e48b0 },
    { L"Order Select", 0x4e48b0, 0x4e48d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shermie },
    { L"Life Bar Portrait", 0x4e48d0, 0x4e48f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Win Screen Portrait", 0x4e48f0, 0x4e49f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shermie },

};

const sGame_PaletteDataset KOF98AE2016_A_Shermie_B[] =
{
    { L"Shermie B - Main", 0x4e49f0, 0x4e4a10, indexKOFSprites_98Shermie },
    { L"Extra 1", 0x4e4a10, 0x4e4a30 },
    { L"Extra 2", 0x4e4a30, 0x4e4a50 },
    { L"Max Mode", 0x4e4a50, 0x4e4a70, indexKOFSprites_98Shermie },
    { L"Extra 3", 0x4e4a70, 0x4e4a90 },
    { L"Extra 4", 0x4e4a90, 0x4e4ab0 },
    { L"Order Select", 0x4e4ab0, 0x4e4ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shermie },
    { L"Life Bar Portrait", 0x4e4ad0, 0x4e4af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Win Screen Portrait", 0x4e4af0, 0x4e4bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shermie },

};

const sGame_PaletteDataset KOF98AE2016_A_Shermie_C[] =
{
    { L"Shermie C - Main", 0x4e4bf0, 0x4e4c10, indexKOFSprites_98Shermie },
    { L"Extra 1", 0x4e4c10, 0x4e4c30 },
    { L"Extra 2", 0x4e4c30, 0x4e4c50 },
    { L"Max Mode", 0x4e4c50, 0x4e4c70, indexKOFSprites_98Shermie },
    { L"Extra 3", 0x4e4c70, 0x4e4c90 },
    { L"Extra 4", 0x4e4c90, 0x4e4cb0 },
    { L"Order Select", 0x4e4cb0, 0x4e4cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shermie },
    { L"Life Bar Portrait", 0x4e4cd0, 0x4e4cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Win Screen Portrait", 0x4e4cf0, 0x4e4df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shermie },

};

const sGame_PaletteDataset KOF98AE2016_A_Shermie_D[] =
{
    { L"Shermie D - Main", 0x4e4df0, 0x4e4e10, indexKOFSprites_98Shermie },
    { L"Extra 1", 0x4e4e10, 0x4e4e30 },
    { L"Extra 2", 0x4e4e30, 0x4e4e50 },
    { L"Max Mode", 0x4e4e50, 0x4e4e70, indexKOFSprites_98Shermie },
    { L"Extra 3", 0x4e4e70, 0x4e4e90 },
    { L"Extra 4", 0x4e4e90, 0x4e4eb0 },
    { L"Order Select", 0x4e4eb0, 0x4e4ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shermie },
    { L"Life Bar Portrait", 0x4e4ed0, 0x4e4ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Win Screen Portrait", 0x4e4ef0, 0x4e4ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shermie },

};

const sGame_PaletteDataset KOF98AE2016_A_Chris_A[] =
{
    { L"Chris A - Main", 0x4e4ff0, 0x4e5010, indexKOFSprites_98Chris },
    { L"Extra 1", 0x4e5010, 0x4e5030 },
    { L"Extra 2", 0x4e5030, 0x4e5050 },
    { L"Max Mode", 0x4e5050, 0x4e5070, indexKOFSprites_98Chris },
    { L"Extra 3", 0x4e5070, 0x4e5090 },
    { L"Extra 4", 0x4e5090, 0x4e50b0 },
    { L"Order Select", 0x4e50b0, 0x4e50d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chris },
    { L"Life Bar Portrait", 0x4e50d0, 0x4e50f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Win Screen Portrait", 0x4e50f0, 0x4e51f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chris },

};

const sGame_PaletteDataset KOF98AE2016_A_Chris_B[] =
{
    { L"Chris B - Main", 0x4e51f0, 0x4e5210, indexKOFSprites_98Chris },
    { L"Extra 1", 0x4e5210, 0x4e5230 },
    { L"Extra 2", 0x4e5230, 0x4e5250 },
    { L"Max Mode", 0x4e5250, 0x4e5270, indexKOFSprites_98Chris },
    { L"Extra 3", 0x4e5270, 0x4e5290 },
    { L"Extra 4", 0x4e5290, 0x4e52b0 },
    { L"Order Select", 0x4e52b0, 0x4e52d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chris },
    { L"Life Bar Portrait", 0x4e52d0, 0x4e52f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Win Screen Portrait", 0x4e52f0, 0x4e53f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chris },

};

const sGame_PaletteDataset KOF98AE2016_A_Chris_C[] =
{
    { L"Chris C - Main", 0x4e53f0, 0x4e5410, indexKOFSprites_98Chris },
    { L"Extra 1", 0x4e5410, 0x4e5430 },
    { L"Extra 2", 0x4e5430, 0x4e5450 },
    { L"Max Mode", 0x4e5450, 0x4e5470, indexKOFSprites_98Chris },
    { L"Extra 3", 0x4e5470, 0x4e5490 },
    { L"Extra 4", 0x4e5490, 0x4e54b0 },
    { L"Order Select", 0x4e54b0, 0x4e54d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chris },
    { L"Life Bar Portrait", 0x4e54d0, 0x4e54f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Win Screen Portrait", 0x4e54f0, 0x4e55f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chris },

};

const sGame_PaletteDataset KOF98AE2016_A_Chris_D[] =
{
    { L"Chris D - Main", 0x4e55f0, 0x4e5610, indexKOFSprites_98Chris },
    { L"Extra 1", 0x4e5610, 0x4e5630 },
    { L"Extra 2", 0x4e5630, 0x4e5650 },
    { L"Max Mode", 0x4e5650, 0x4e5670, indexKOFSprites_98Chris },
    { L"Extra 3", 0x4e5670, 0x4e5690 },
    { L"Extra 4", 0x4e5690, 0x4e56b0 },
    { L"Order Select", 0x4e56b0, 0x4e56d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Chris },
    { L"Life Bar Portrait", 0x4e56d0, 0x4e56f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Win Screen Portrait", 0x4e56f0, 0x4e57f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Chris },

};

const sGame_PaletteDataset KOF98AE2016_A_Yamazaki_A[] =
{
    { L"Yamazaki A - Main", 0x4e57f0, 0x4e5810, indexKOFSprites_98Yamazaki },
    { L"Extra 1", 0x4e5810, 0x4e5830 },
    { L"Extra 2", 0x4e5830, 0x4e5850 },
    { L"Max Mode", 0x4e5850, 0x4e5870, indexKOFSprites_98Yamazaki },
    { L"Extra 3", 0x4e5870, 0x4e5890 },
    { L"Extra 4", 0x4e5890, 0x4e58b0 },
    { L"Order Select", 0x4e58b0, 0x4e58d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yamazaki },
    { L"Life Bar Portrait", 0x4e58d0, 0x4e58f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Win Screen Portrait", 0x4e58f0, 0x4e59f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yamazaki },

};

const sGame_PaletteDataset KOF98AE2016_A_Yamazaki_B[] =
{
    { L"Yamazaki B - Main", 0x4e59f0, 0x4e5a10, indexKOFSprites_98Yamazaki },
    { L"Extra 1", 0x4e5a10, 0x4e5a30 },
    { L"Extra 2", 0x4e5a30, 0x4e5a50 },
    { L"Max Mode", 0x4e5a50, 0x4e5a70, indexKOFSprites_98Yamazaki },
    { L"Extra 3", 0x4e5a70, 0x4e5a90 },
    { L"Extra 4", 0x4e5a90, 0x4e5ab0 },
    { L"Order Select", 0x4e5ab0, 0x4e5ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yamazaki },
    { L"Life Bar Portrait", 0x4e5ad0, 0x4e5af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Win Screen Portrait", 0x4e5af0, 0x4e5bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yamazaki },

};

const sGame_PaletteDataset KOF98AE2016_A_Yamazaki_C[] =
{
    { L"Yamazaki C - Main", 0x4e5bf0, 0x4e5c10, indexKOFSprites_98Yamazaki },
    { L"Extra 1", 0x4e5c10, 0x4e5c30 },
    { L"Extra 2", 0x4e5c30, 0x4e5c50 },
    { L"Max Mode", 0x4e5c50, 0x4e5c70, indexKOFSprites_98Yamazaki },
    { L"Extra 3", 0x4e5c70, 0x4e5c90 },
    { L"Extra 4", 0x4e5c90, 0x4e5cb0 },
    { L"Order Select", 0x4e5cb0, 0x4e5cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yamazaki },
    { L"Life Bar Portrait", 0x4e5cd0, 0x4e5cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Win Screen Portrait", 0x4e5cf0, 0x4e5df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yamazaki },

};

const sGame_PaletteDataset KOF98AE2016_A_Yamazaki_D[] =
{
    { L"Yamazaki D - Main", 0x4e5df0, 0x4e5e10, indexKOFSprites_98Yamazaki },
    { L"Extra 1", 0x4e5e10, 0x4e5e30 },
    { L"Extra 2", 0x4e5e30, 0x4e5e50 },
    { L"Max Mode", 0x4e5e50, 0x4e5e70, indexKOFSprites_98Yamazaki },
    { L"Extra 3", 0x4e5e70, 0x4e5e90 },
    { L"Extra 4", 0x4e5e90, 0x4e5eb0 },
    { L"Order Select", 0x4e5eb0, 0x4e5ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Yamazaki },
    { L"Life Bar Portrait", 0x4e5ed0, 0x4e5ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Win Screen Portrait", 0x4e5ef0, 0x4e5ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Yamazaki },

};

const sGame_PaletteDataset KOF98AE2016_A_BlueMary_A[] =
{
    { L"Blue Mary A - Main", 0x4e5ff0, 0x4e6010, indexKOFSprites_98BlueMary },
    { L"Extra 1", 0x4e6010, 0x4e6030 },
    { L"Extra 2", 0x4e6030, 0x4e6050 },
    { L"Max Mode", 0x4e6050, 0x4e6070, indexKOFSprites_98BlueMary },
    { L"Extra 3", 0x4e6070, 0x4e6090 },
    { L"Extra 4", 0x4e6090, 0x4e60b0 },
    { L"Order Select", 0x4e60b0, 0x4e60d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98BlueMary },
    { L"Life Bar Portrait", 0x4e60d0, 0x4e60f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Win Screen Portrait", 0x4e60f0, 0x4e61f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98BlueMary },

};

const sGame_PaletteDataset KOF98AE2016_A_BlueMary_B[] =
{
    { L"Blue Mary B - Main", 0x4e61f0, 0x4e6210, indexKOFSprites_98BlueMary },
    { L"Extra 1", 0x4e6210, 0x4e6230 },
    { L"Extra 2", 0x4e6230, 0x4e6250 },
    { L"Max Mode", 0x4e6250, 0x4e6270, indexKOFSprites_98BlueMary },
    { L"Extra 3", 0x4e6270, 0x4e6290 },
    { L"Extra 4", 0x4e6290, 0x4e62b0 },
    { L"Order Select", 0x4e62b0, 0x4e62d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98BlueMary },
    { L"Life Bar Portrait", 0x4e62d0, 0x4e62f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Win Screen Portrait", 0x4e62f0, 0x4e63f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98BlueMary },

};

const sGame_PaletteDataset KOF98AE2016_A_BlueMary_C[] =
{
    { L"Blue Mary C - Main", 0x4e63f0, 0x4e6410, indexKOFSprites_98BlueMary },
    { L"Extra 1", 0x4e6410, 0x4e6430 },
    { L"Extra 2", 0x4e6430, 0x4e6450 },
    { L"Max Mode", 0x4e6450, 0x4e6470, indexKOFSprites_98BlueMary },
    { L"Extra 3", 0x4e6470, 0x4e6490 },
    { L"Extra 4", 0x4e6490, 0x4e64b0 },
    { L"Order Select", 0x4e64b0, 0x4e64d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98BlueMary },
    { L"Life Bar Portrait", 0x4e64d0, 0x4e64f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Win Screen Portrait", 0x4e64f0, 0x4e65f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98BlueMary },

};

const sGame_PaletteDataset KOF98AE2016_A_BlueMary_D[] =
{
    { L"Blue Mary D - Main", 0x4e65f0, 0x4e6610, indexKOFSprites_98BlueMary },
    { L"Extra 1", 0x4e6610, 0x4e6630 },
    { L"Extra 2", 0x4e6630, 0x4e6650 },
    { L"Max Mode", 0x4e6650, 0x4e6670, indexKOFSprites_98BlueMary },
    { L"Extra 3", 0x4e6670, 0x4e6690 },
    { L"Extra 4", 0x4e6690, 0x4e66b0 },
    { L"Order Select", 0x4e66b0, 0x4e66d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98BlueMary },
    { L"Life Bar Portrait", 0x4e66d0, 0x4e66f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Win Screen Portrait", 0x4e66f0, 0x4e67f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98BlueMary },

};

const sGame_PaletteDataset KOF98AE2016_A_Billy_A[] =
{
    { L"Billy A - Main", 0x4e67f0, 0x4e6810, indexKOFSprites_98Billy },
    { L"Extra 1", 0x4e6810, 0x4e6830 },
    { L"Extra 2", 0x4e6830, 0x4e6850 },
    { L"Max Mode", 0x4e6850, 0x4e6870, indexKOFSprites_98Billy },
    { L"Extra 3", 0x4e6870, 0x4e6890 },
    { L"Extra 4", 0x4e6890, 0x4e68b0 },
    { L"Order Select", 0x4e68b0, 0x4e68d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Billy },
    { L"Life Bar Portrait", 0x4e68d0, 0x4e68f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Win Screen Portrait", 0x4e68f0, 0x4e69f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Billy },

};

const sGame_PaletteDataset KOF98AE2016_A_Billy_B[] =
{
    { L"Billy B - Main", 0x4e69f0, 0x4e6a10, indexKOFSprites_98Billy  },
    { L"Extra 1", 0x4e6a10, 0x4e6a30 },
    { L"Extra 2", 0x4e6a30, 0x4e6a50 },
    { L"Max Mode", 0x4e6a50, 0x4e6a70, indexKOFSprites_98Billy },
    { L"Extra 3", 0x4e6a70, 0x4e6a90 },
    { L"Extra 4", 0x4e6a90, 0x4e6ab0 },
    { L"Order Select", 0x4e6ab0, 0x4e6ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Billy },
    { L"Life Bar Portrait", 0x4e6ad0, 0x4e6af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Win Screen Portrait", 0x4e6af0, 0x4e6bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Billy },

};

const sGame_PaletteDataset KOF98AE2016_A_Billy_C[] =
{
    { L"Billy C - Main", 0x4e6bf0, 0x4e6c10, indexKOFSprites_98Billy },
    { L"Extra 1", 0x4e6c10, 0x4e6c30 },
    { L"Extra 2", 0x4e6c30, 0x4e6c50 },
    { L"Max Mode", 0x4e6c50, 0x4e6c70, indexKOFSprites_98Billy },
    { L"Extra 3", 0x4e6c70, 0x4e6c90 },
    { L"Extra 4", 0x4e6c90, 0x4e6cb0 },
    { L"Order Select", 0x4e6cb0, 0x4e6cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Billy },
    { L"Life Bar Portrait", 0x4e6cd0, 0x4e6cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Win Screen Portrait", 0x4e6cf0, 0x4e6df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Billy },

};

const sGame_PaletteDataset KOF98AE2016_A_Billy_D[] =
{
    { L"Billy D - Main", 0x4e6df0, 0x4e6e10, indexKOFSprites_98Billy },
    { L"Extra 1", 0x4e6e10, 0x4e6e30 },
    { L"Extra 2", 0x4e6e30, 0x4e6e50 },
    { L"Max Mode", 0x4e6e50, 0x4e6e70 , indexKOFSprites_98Billy },
    { L"Extra 3", 0x4e6e70, 0x4e6e90 },
    { L"Extra 4", 0x4e6e90, 0x4e6eb0 },
    { L"Order Select", 0x4e6eb0, 0x4e6ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Billy },
    { L"Life Bar Portrait", 0x4e6ed0, 0x4e6ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Win Screen Portrait", 0x4e6ef0, 0x4e6ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Billy },

};

const sGame_PaletteDataset KOF98AE2016_A_Iori_A[] =
{
    { L"Iori A - Main", 0x4e6ff0, 0x4e7010, indexKOFSprites_98Iori },
    { L"Extra 1", 0x4e7010, 0x4e7030 },
    { L"Extra 2", 0x4e7030, 0x4e7050 },
    { L"Max Mode", 0x4e7050, 0x4e7070, indexKOFSprites_98Iori },
    { L"Extra 3", 0x4e7070, 0x4e7090 },
    { L"Extra 4", 0x4e7090, 0x4e70b0 },
    { L"Order Select", 0x4e70b0, 0x4e70d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Iori },
    { L"Life Bar Portrait", 0x4e70d0, 0x4e70f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Win Screen Portrait", 0x4e70f0, 0x4e71f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Iori },

};

const sGame_PaletteDataset KOF98AE2016_A_Iori_B[] =
{
    { L"Iori B - Main", 0x4e71f0, 0x4e7210, indexKOFSprites_98Iori },
    { L"Extra 1", 0x4e7210, 0x4e7230 },
    { L"Extra 2", 0x4e7230, 0x4e7250 },
    { L"Max Mode", 0x4e7250, 0x4e7270, indexKOFSprites_98Iori },
    { L"Extra 3", 0x4e7270, 0x4e7290 },
    { L"Extra 4", 0x4e7290, 0x4e72b0 },
    { L"Order Select", 0x4e72b0, 0x4e72d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Iori },
    { L"Life Bar Portrait", 0x4e72d0, 0x4e72f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Win Screen Portrait", 0x4e72f0, 0x4e73f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Iori },

};

const sGame_PaletteDataset KOF98AE2016_A_Iori_C[] =
{
    { L"Iori C - Main", 0x4e73f0, 0x4e7410, indexKOFSprites_98Iori },
    { L"Extra 1", 0x4e7410, 0x4e7430 },
    { L"Extra 2", 0x4e7430, 0x4e7450 },
    { L"Max Mode", 0x4e7450, 0x4e7470, indexKOFSprites_98Iori },
    { L"Extra 3", 0x4e7470, 0x4e7490 },
    { L"Extra 4", 0x4e7490, 0x4e74b0 },
    { L"Order Select", 0x4e74b0, 0x4e74d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Iori },
    { L"Life Bar Portrait", 0x4e74d0, 0x4e74f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Win Screen Portrait", 0x4e74f0, 0x4e75f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Iori },

};

const sGame_PaletteDataset KOF98AE2016_A_Iori_D[] =
{
    { L"Iori D - Main", 0x4e75f0, 0x4e7610, indexKOFSprites_98Iori },
    { L"Extra 1", 0x4e7610, 0x4e7630 },
    { L"Extra 2", 0x4e7630, 0x4e7650 },
    { L"Max Mode", 0x4e7650, 0x4e7670, indexKOFSprites_98Iori },
    { L"Extra 3", 0x4e7670, 0x4e7690 },
    { L"Extra 4", 0x4e7690, 0x4e76b0 },
    { L"Order Select", 0x4e76b0, 0x4e76d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Iori },
    { L"Life Bar Portrait", 0x4e76d0, 0x4e76f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Win Screen Portrait", 0x4e76f0, 0x4e77f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Iori },

};

const sGame_PaletteDataset KOF98AE2016_A_Mature_A[] =
{
    { L"Mature A - Main", 0x4e77f0, 0x4e7810, indexKOFSprites_98Mature },
    { L"Extra 1", 0x4e7810, 0x4e7830 },
    { L"Extra 2", 0x4e7830, 0x4e7850 },
    { L"Max Mode", 0x4e7850, 0x4e7870, indexKOFSprites_98Mature },
    { L"Extra 3", 0x4e7870, 0x4e7890 },
    { L"Extra 4", 0x4e7890, 0x4e78b0 },
    { L"Order Select", 0x4e78b0, 0x4e78d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mature },
    { L"Life Bar Portrait", 0x4e78d0, 0x4e78f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mature },
    { L"Win Screen Portrait", 0x4e78f0, 0x4e79f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mature },

};

const sGame_PaletteDataset KOF98AE2016_A_Mature_B[] =
{
    { L"Mature B - Main", 0x4e79f0, 0x4e7a10, indexKOFSprites_98Mature },
    { L"Extra 1", 0x4e7a10, 0x4e7a30 },
    { L"Extra 2", 0x4e7a30, 0x4e7a50 },
    { L"Max Mode", 0x4e7a50, 0x4e7a70, indexKOFSprites_98Mature },
    { L"Extra 3", 0x4e7a70, 0x4e7a90 },
    { L"Extra 4", 0x4e7a90, 0x4e7ab0 },
    { L"Order Select", 0x4e7ab0, 0x4e7ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mature },
    { L"Life Bar Portrait", 0x4e7ad0, 0x4e7af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mature },
    { L"Win Screen Portrait", 0x4e7af0, 0x4e7bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mature },

};

const sGame_PaletteDataset KOF98AE2016_A_Mature_C[] =
{
    { L"Mature C - Main", 0x4e7bf0, 0x4e7c10, indexKOFSprites_98Mature },
    { L"Extra 1", 0x4e7c10, 0x4e7c30 },
    { L"Extra 2", 0x4e7c30, 0x4e7c50 },
    { L"Max Mode", 0x4e7c50, 0x4e7c70, indexKOFSprites_98Mature },
    { L"Extra 3", 0x4e7c70, 0x4e7c90 },
    { L"Extra 4", 0x4e7c90, 0x4e7cb0 },
    { L"Order Select", 0x4e7cb0, 0x4e7cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mature },
    { L"Life Bar Portrait", 0x4e7cd0, 0x4e7cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mature },
    { L"Win Screen Portrait", 0x4e7cf0, 0x4e7df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mature },

};

const sGame_PaletteDataset KOF98AE2016_A_Mature_D[] =
{
    { L"Mature D - Main", 0x4e7df0, 0x4e7e10, indexKOFSprites_98Mature },
    { L"Extra 1", 0x4e7e10, 0x4e7e30 },
    { L"Extra 2", 0x4e7e30, 0x4e7e50 },
    { L"Max Mode", 0x4e7e50, 0x4e7e70, indexKOFSprites_98Mature },
    { L"Extra 3", 0x4e7e70, 0x4e7e90 },
    { L"Extra 4", 0x4e7e90, 0x4e7eb0 },
    { L"Order Select", 0x4e7eb0, 0x4e7ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Mature },
    { L"Life Bar Portrait", 0x4e7ed0, 0x4e7ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mature },
    { L"Win Screen Portrait", 0x4e7ef0, 0x4e7ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Mature },

};

const sGame_PaletteDataset KOF98AE2016_A_Vice_A[] =
{
    { L"Vice A - Main", 0x4e7ff0, 0x4e8010, indexKOFSprites_98Vice },
    { L"Extra 1", 0x4e8010, 0x4e8030 },
    { L"Extra 2", 0x4e8030, 0x4e8050 },
    { L"Max Mode", 0x4e8050, 0x4e8070, indexKOFSprites_98Vice },
    { L"Extra 3", 0x4e8070, 0x4e8090 },
    { L"Extra 4", 0x4e8090, 0x4e80b0 },
    { L"Order Select", 0x4e80b0, 0x4e80d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Vice },
    { L"Life Bar Portrait", 0x4e80d0, 0x4e80f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Vice },
    { L"Win Screen Portrait", 0x4e80f0, 0x4e81f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Vice },

};

const sGame_PaletteDataset KOF98AE2016_A_Vice_B[] =
{
    { L"Vice B - Main", 0x4e81f0, 0x4e8210, indexKOFSprites_98Vice },
    { L"Extra 1", 0x4e8210, 0x4e8230 },
    { L"Extra 2", 0x4e8230, 0x4e8250 },
    { L"Max Mode", 0x4e8250, 0x4e8270, indexKOFSprites_98Vice },
    { L"Extra 3", 0x4e8270, 0x4e8290 },
    { L"Extra 4", 0x4e8290, 0x4e82b0 },
    { L"Order Select", 0x4e82b0, 0x4e82d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Vice },
    { L"Life Bar Portrait", 0x4e82d0, 0x4e82f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Vice },
    { L"Win Screen Portrait", 0x4e82f0, 0x4e83f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Vice },

};

const sGame_PaletteDataset KOF98AE2016_A_Vice_C[] =
{
    { L"Vice C - Main", 0x4e83f0, 0x4e8410, indexKOFSprites_98Vice },
    { L"Extra 1", 0x4e8410, 0x4e8430 },
    { L"Extra 2", 0x4e8430, 0x4e8450 },
    { L"Max Mode", 0x4e8450, 0x4e8470, indexKOFSprites_98Vice },
    { L"Extra 3", 0x4e8470, 0x4e8490 },
    { L"Extra 4", 0x4e8490, 0x4e84b0 },
    { L"Order Select", 0x4e84b0, 0x4e84d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Vice },
    { L"Life Bar Portrait", 0x4e84d0, 0x4e84f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Vice },
    { L"Win Screen Portrait", 0x4e84f0, 0x4e85f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Vice },

};

const sGame_PaletteDataset KOF98AE2016_A_Vice_D[] =
{
    { L"Vice D - Main", 0x4e85f0, 0x4e8610, indexKOFSprites_98Vice },
    { L"Extra 1", 0x4e8610, 0x4e8630 },
    { L"Extra 2", 0x4e8630, 0x4e8650 },
    { L"Max Mode", 0x4e8650, 0x4e8670, indexKOFSprites_98Vice },
    { L"Extra 3", 0x4e8670, 0x4e8690 },
    { L"Extra 4", 0x4e8690, 0x4e86b0 },
    { L"Order Select", 0x4e86b0, 0x4e86d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Vice },
    { L"Life Bar Portrait", 0x4e86d0, 0x4e86f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Vice },
    { L"Win Screen Portrait", 0x4e86f0, 0x4e87f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Vice },

};

const sGame_PaletteDataset KOF98AE2016_A_Heidern_A[] =
{
    { L"Heidern A - Main", 0x4e87f0, 0x4e8810, indexKOFSprites_98Heidern },
    { L"Extra 1", 0x4e8810, 0x4e8830 },
    { L"Extra 2", 0x4e8830, 0x4e8850 },
    { L"Max Mode", 0x4e8850, 0x4e8870, indexKOFSprites_98Heidern },
    { L"Extra 3", 0x4e8870, 0x4e8890 },
    { L"Extra 4", 0x4e8890, 0x4e88b0 },
    { L"Order Select", 0x4e88b0, 0x4e88d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Heidern },
    { L"Life Bar Portrait", 0x4e88d0, 0x4e88f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Heidern },
    { L"Win Screen Portrait", 0x4e88f0, 0x4e89f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Heidern },

};

const sGame_PaletteDataset KOF98AE2016_A_Heidern_B[] =
{
    { L"Heidern B - Main", 0x4e89f0, 0x4e8a10, indexKOFSprites_98Heidern },
    { L"Extra 1", 0x4e8a10, 0x4e8a30 },
    { L"Extra 2", 0x4e8a30, 0x4e8a50 },
    { L"Max Mode", 0x4e8a50, 0x4e8a70, indexKOFSprites_98Heidern },
    { L"Extra 3", 0x4e8a70, 0x4e8a90 },
    { L"Extra 4", 0x4e8a90, 0x4e8ab0 },
    { L"Order Select", 0x4e8ab0, 0x4e8ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Heidern },
    { L"Life Bar Portrait", 0x4e8ad0, 0x4e8af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Heidern },
    { L"Win Screen Portrait", 0x4e8af0, 0x4e8bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Heidern },

};

const sGame_PaletteDataset KOF98AE2016_A_Heidern_C[] =
{
    { L"Heidern C - Main", 0x4e8bf0, 0x4e8c10, indexKOFSprites_98Heidern },
    { L"Extra 1", 0x4e8c10, 0x4e8c30 },
    { L"Extra 2", 0x4e8c30, 0x4e8c50 },
    { L"Max Mode", 0x4e8c50, 0x4e8c70, indexKOFSprites_98Heidern },
    { L"Extra 3", 0x4e8c70, 0x4e8c90 },
    { L"Extra 4", 0x4e8c90, 0x4e8cb0 },
    { L"Order Select", 0x4e8cb0, 0x4e8cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Heidern },
    { L"Life Bar Portrait", 0x4e8cd0, 0x4e8cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Heidern },
    { L"Win Screen Portrait", 0x4e8cf0, 0x4e8df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Heidern },

};

const sGame_PaletteDataset KOF98AE2016_A_Heidern_D[] =
{
    { L"Heidern D - Main", 0x4e8df0, 0x4e8e10, indexKOFSprites_98Heidern },
    { L"Extra 1", 0x4e8e10, 0x4e8e30 },
    { L"Extra 2", 0x4e8e30, 0x4e8e50 },
    { L"Max Mode", 0x4e8e50, 0x4e8e70, indexKOFSprites_98Heidern },
    { L"Extra 3", 0x4e8e70, 0x4e8e90 },
    { L"Extra 4", 0x4e8e90, 0x4e8eb0 },
    { L"Order Select", 0x4e8eb0, 0x4e8ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Heidern },
    { L"Life Bar Portrait", 0x4e8ed0, 0x4e8ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Heidern },
    { L"Win Screen Portrait", 0x4e8ef0, 0x4e8ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Heidern },

};

const sGame_PaletteDataset KOF98AE2016_A_Takuma_A[] =
{
    { L"Takuma A - Main", 0x4e8ff0, 0x4e9010, indexKOFSprites_98Takuma },
    { L"Extra 1", 0x4e9010, 0x4e9030 },
    { L"Extra 2", 0x4e9030, 0x4e9050 },
    { L"Max Mode", 0x4e9050, 0x4e9070, indexKOFSprites_98Takuma },
    { L"Extra 3", 0x4e9070, 0x4e9090 },
    { L"Extra 4", 0x4e9090, 0x4e90b0 },
    { L"Order Select", 0x4e90b0, 0x4e90d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Takuma },
    { L"Life Bar Portrait", 0x4e90d0, 0x4e90f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Takuma },
    { L"Win Screen Portrait", 0x4e90f0, 0x4e91f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Takuma },

};

const sGame_PaletteDataset KOF98AE2016_A_Takuma_B[] =
{
    { L"Takuma B - Main", 0x4e91f0, 0x4e9210, indexKOFSprites_98Takuma },
    { L"Extra 1", 0x4e9210, 0x4e9230 },
    { L"Extra 2", 0x4e9230, 0x4e9250 },
    { L"Max Mode", 0x4e9250, 0x4e9270, indexKOFSprites_98Takuma },
    { L"Extra 3", 0x4e9270, 0x4e9290 },
    { L"Extra 4", 0x4e9290, 0x4e92b0 },
    { L"Order Select", 0x4e92b0, 0x4e92d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Takuma },
    { L"Life Bar Portrait", 0x4e92d0, 0x4e92f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Takuma },
    { L"Win Screen Portrait", 0x4e92f0, 0x4e93f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Takuma },

};

const sGame_PaletteDataset KOF98AE2016_A_Takuma_C[] =
{
    { L"Takuma C - Main", 0x4e93f0, 0x4e9410, indexKOFSprites_98Takuma },
    { L"Extra 1", 0x4e9410, 0x4e9430 },
    { L"Extra 2", 0x4e9430, 0x4e9450 },
    { L"Max Mode", 0x4e9450, 0x4e9470, indexKOFSprites_98Takuma },
    { L"Extra 3", 0x4e9470, 0x4e9490 },
    { L"Extra 4", 0x4e9490, 0x4e94b0 },
    { L"Order Select", 0x4e94b0, 0x4e94d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Takuma },
    { L"Life Bar Portrait", 0x4e94d0, 0x4e94f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Takuma },
    { L"Win Screen Portrait", 0x4e94f0, 0x4e95f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Takuma },

};

const sGame_PaletteDataset KOF98AE2016_A_Takuma_D[] =
{
    { L"Takuma D - Main", 0x4e95f0, 0x4e9610, indexKOFSprites_98Takuma },
    { L"Extra 1", 0x4e9610, 0x4e9630 },
    { L"Extra 2", 0x4e9630, 0x4e9650 },
    { L"Max Mode", 0x4e9650, 0x4e9670, indexKOFSprites_98Takuma },
    { L"Extra 3", 0x4e9670, 0x4e9690 },
    { L"Extra 4", 0x4e9690, 0x4e96b0 },
    { L"Order Select", 0x4e96b0, 0x4e96d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Takuma },
    { L"Life Bar Portrait", 0x4e96d0, 0x4e96f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Takuma },
    { L"Win Screen Portrait", 0x4e96f0, 0x4e97f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Takuma },

};

const sGame_PaletteDataset KOF98AE2016_A_Saisyu_A[] =
{
    { L"Saisyu A - Main", 0x4e97f0, 0x4e9810, indexKOFSprites_98Saisyu },
    { L"Extra 1", 0x4e9810, 0x4e9830 },
    { L"Extra 2", 0x4e9830, 0x4e9850 },
    { L"Max Mode", 0x4e9850, 0x4e9870, indexKOFSprites_98Saisyu },
    { L"Extra 3", 0x4e9870, 0x4e9890 },
    { L"Extra 4", 0x4e9890, 0x4e98b0 },
    { L"Order Select", 0x4e98b0, 0x4e98d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Saisyu },
    { L"Life Bar Portrait", 0x4e98d0, 0x4e98f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Saisyu },
    { L"Win Screen Portrait", 0x4e98f0, 0x4e99f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Saisyu },

};

const sGame_PaletteDataset KOF98AE2016_A_Saisyu_B[] =
{
    { L"Saisyu B - Main", 0x4e99f0, 0x4e9a10, indexKOFSprites_98Saisyu },
    { L"Extra 1", 0x4e9a10, 0x4e9a30 },
    { L"Extra 2", 0x4e9a30, 0x4e9a50 },
    { L"Max Mode", 0x4e9a50, 0x4e9a70, indexKOFSprites_98Saisyu },
    { L"Extra 3", 0x4e9a70, 0x4e9a90 },
    { L"Extra 4", 0x4e9a90, 0x4e9ab0 },
    { L"Order Select", 0x4e9ab0, 0x4e9ad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Saisyu },
    { L"Life Bar Portrait", 0x4e9ad0, 0x4e9af0, indexKOFSprites_98Lifebar, indexKOFSprites_98Saisyu },
    { L"Win Screen Portrait", 0x4e9af0, 0x4e9bf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Saisyu },

};

const sGame_PaletteDataset KOF98AE2016_A_Saisyu_C[] =
{
    { L"Saisyu C - Main", 0x4e9bf0, 0x4e9c10, indexKOFSprites_98Saisyu },
    { L"Extra 1", 0x4e9c10, 0x4e9c30 },
    { L"Extra 2", 0x4e9c30, 0x4e9c50 },
    { L"Max Mode", 0x4e9c50, 0x4e9c70, indexKOFSprites_98Saisyu },
    { L"Extra 3", 0x4e9c70, 0x4e9c90 },
    { L"Extra 4", 0x4e9c90, 0x4e9cb0 },
    { L"Order Select", 0x4e9cb0, 0x4e9cd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Saisyu },
    { L"Life Bar Portrait", 0x4e9cd0, 0x4e9cf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Saisyu },
    { L"Win Screen Portrait", 0x4e9cf0, 0x4e9df0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Saisyu },

};

const sGame_PaletteDataset KOF98AE2016_A_Saisyu_D[] =
{
    { L"Saisyu D - Main", 0x4e9df0, 0x4e9e10, indexKOFSprites_98Saisyu },
    { L"Extra 1", 0x4e9e10, 0x4e9e30 },
    { L"Extra 2", 0x4e9e30, 0x4e9e50 },
    { L"Max Mode", 0x4e9e50, 0x4e9e70, indexKOFSprites_98Saisyu },
    { L"Extra 3", 0x4e9e70, 0x4e9e90 },
    { L"Extra 4", 0x4e9e90, 0x4e9eb0 },
    { L"Order Select", 0x4e9eb0, 0x4e9ed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Saisyu },
    { L"Life Bar Portrait", 0x4e9ed0, 0x4e9ef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Saisyu },
    { L"Win Screen Portrait", 0x4e9ef0, 0x4e9ff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Saisyu },

};

const sGame_PaletteDataset KOF98AE2016_A_HeavyD_A[] =
{
    { L"Heavy D! A - Main", 0x4e9ff0, 0x4ea010, indexKOFSprites_98HeavyD },
    { L"Extra 1", 0x4ea010, 0x4ea030 },
    { L"Extra 2", 0x4ea030, 0x4ea050 },
    { L"Max Mode", 0x4ea050, 0x4ea070, indexKOFSprites_98HeavyD },
    { L"Extra 3", 0x4ea070, 0x4ea090 },
    { L"Extra 4", 0x4ea090, 0x4ea0b0 },
    { L"Order Select", 0x4ea0b0, 0x4ea0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98HeavyD },
    { L"Life Bar Portrait", 0x4ea0d0, 0x4ea0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98HeavyD },
    { L"Win Screen Portrait", 0x4ea0f0, 0x4ea1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98HeavyD },

};

const sGame_PaletteDataset KOF98AE2016_A_HeavyD_B[] =
{
    { L"Heavy D! B - Main", 0x4ea1f0, 0x4ea210, indexKOFSprites_98HeavyD },
    { L"Extra 1", 0x4ea210, 0x4ea230 },
    { L"Extra 2", 0x4ea230, 0x4ea250 },
    { L"Max Mode", 0x4ea250, 0x4ea270, indexKOFSprites_98HeavyD },
    { L"Extra 3", 0x4ea270, 0x4ea290 },
    { L"Extra 4", 0x4ea290, 0x4ea2b0 },
    { L"Order Select", 0x4ea2b0, 0x4ea2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98HeavyD },
    { L"Life Bar Portrait", 0x4ea2d0, 0x4ea2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98HeavyD },
    { L"Win Screen Portrait", 0x4ea2f0, 0x4ea3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98HeavyD },

};

const sGame_PaletteDataset KOF98AE2016_A_HeavyD_C[] =
{
    { L"Heavy D! C - Main", 0x4ea3f0, 0x4ea410, indexKOFSprites_98HeavyD },
    { L"Extra 1", 0x4ea410, 0x4ea430 },
    { L"Extra 2", 0x4ea430, 0x4ea450 },
    { L"Max Mode", 0x4ea450, 0x4ea470, indexKOFSprites_98HeavyD },
    { L"Extra 3", 0x4ea470, 0x4ea490 },
    { L"Extra 4", 0x4ea490, 0x4ea4b0 },
    { L"Order Select", 0x4ea4b0, 0x4ea4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98HeavyD },
    { L"Life Bar Portrait", 0x4ea4d0, 0x4ea4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98HeavyD },
    { L"Win Screen Portrait", 0x4ea4f0, 0x4ea5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98HeavyD },

};

const sGame_PaletteDataset KOF98AE2016_A_HeavyD_D[] =
{
    { L"Heavy D! D - Main", 0x4ea5f0, 0x4ea610, indexKOFSprites_98HeavyD },
    { L"Extra 1", 0x4ea610, 0x4ea630 },
    { L"Extra 2", 0x4ea630, 0x4ea650 },
    { L"Max Mode", 0x4ea650, 0x4ea670, indexKOFSprites_98HeavyD },
    { L"Extra 3", 0x4ea670, 0x4ea690 },
    { L"Extra 4", 0x4ea690, 0x4ea6b0 },
    { L"Order Select", 0x4ea6b0, 0x4ea6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98HeavyD },
    { L"Life Bar Portrait", 0x4ea6d0, 0x4ea6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98HeavyD },
    { L"Win Screen Portrait", 0x4ea6f0, 0x4ea7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98HeavyD },

};

const sGame_PaletteDataset KOF98AE2016_A_Lucky_A[] =
{
    { L"Lucky A - Main", 0x4ea7f0, 0x4ea810, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Extra 1", 0x4ea810, 0x4ea830, indexKOFSprites_98Lucky, 0x01 },
    { L"Extra 2", 0x4ea830, 0x4ea850 },
    { L"Max Mode", 0x4ea850, 0x4ea870, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Extra 3", 0x4ea870, 0x4ea890, indexKOFSprites_98Lucky, 0x01 },
    { L"Extra 4", 0x4ea890, 0x4ea8b0 },
    { L"Order Select", 0x4ea8b0, 0x4ea8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Lucky },
    { L"Life Bar Portrait", 0x4ea8d0, 0x4ea8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Lucky },
    { L"Win Screen Portrait", 0x4ea8f0, 0x4ea9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Lucky },

};

const sGame_PaletteDataset KOF98AE2016_A_Lucky_B[] =
{
    { L"Lucky B - Main", 0x4ea9f0, 0x4eaa10, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Extra 1", 0x4eaa10, 0x4eaa30, indexKOFSprites_98Lucky, 0x01 },
    { L"Extra 2", 0x4eaa30, 0x4eaa50 },
    { L"Max Mode", 0x4eaa50, 0x4eaa70, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Extra 3", 0x4eaa70, 0x4eaa90, indexKOFSprites_98Lucky, 0x01 },
    { L"Extra 4", 0x4eaa90, 0x4eaab0 },
    { L"Order Select", 0x4eaab0, 0x4eaad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Lucky },
    { L"Life Bar Portrait", 0x4eaad0, 0x4eaaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Lucky },
    { L"Win Screen Portrait", 0x4eaaf0, 0x4eabf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Lucky },

};

const sGame_PaletteDataset KOF98AE2016_A_Lucky_C[] =
{
    { L"Lucky C - Main", 0x4eabf0, 0x4eac10, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Extra 1", 0x4eac10, 0x4eac30, indexKOFSprites_98Lucky, 0x01 },
    { L"Extra 2", 0x4eac30, 0x4eac50 },
    { L"Max Mode", 0x4eac50, 0x4eac70, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Extra 3", 0x4eac70, 0x4eac90, indexKOFSprites_98Lucky, 0x01 },
    { L"Extra 4", 0x4eac90, 0x4eacb0 },
    { L"Order Select", 0x4eacb0, 0x4eacd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Lucky },
    { L"Life Bar Portrait", 0x4eacd0, 0x4eacf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Lucky },
    { L"Win Screen Portrait", 0x4eacf0, 0x4eadf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Lucky },

};

const sGame_PaletteDataset KOF98AE2016_A_Lucky_D[] =
{
    { L"Lucky D - Main", 0x4eadf0, 0x4eae10, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Extra 1", 0x4eae10, 0x4eae30, indexKOFSprites_98Lucky, 0x01 },
    { L"Extra 2", 0x4eae30, 0x4eae50 },
    { L"Max Mode", 0x4eae50, 0x4eae70, indexKOFSprites_98Lucky, 0, &pairNext },
    { L"Extra 3", 0x4eae70, 0x4eae90, indexKOFSprites_98Lucky, 0x01 },
    { L"Extra 4", 0x4eae90, 0x4eaeb0 },
    { L"Order Select", 0x4eaeb0, 0x4eaed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Lucky },
    { L"Life Bar Portrait", 0x4eaed0, 0x4eaef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Lucky },
    { L"Win Screen Portrait", 0x4eaef0, 0x4eaff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Lucky },

};

const sGame_PaletteDataset KOF98AE2016_A_Brian_A[] =
{
    { L"Brian A - Main", 0x4eaff0, 0x4eb010, indexKOFSprites_98Brian },
    { L"Extra 1", 0x4eb010, 0x4eb030 },
    { L"Extra 2", 0x4eb030, 0x4eb050 },
    { L"Max Mode", 0x4eb050, 0x4eb070, indexKOFSprites_98Brian },
    { L"Extra 3", 0x4eb070, 0x4eb090 },
    { L"Extra 4", 0x4eb090, 0x4eb0b0 },
    { L"Order Select", 0x4eb0b0, 0x4eb0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Brian },
    { L"Life Bar Portrait", 0x4eb0d0, 0x4eb0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Brian },
    { L"Win Screen Portrait", 0x4eb0f0, 0x4eb1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Brian },

};

const sGame_PaletteDataset KOF98AE2016_A_Brian_B[] =
{
    { L"Brian B - Main", 0x4eb1f0, 0x4eb210, indexKOFSprites_98Brian },
    { L"Extra 1", 0x4eb210, 0x4eb230 },
    { L"Extra 2", 0x4eb230, 0x4eb250 },
    { L"Max Mode", 0x4eb250, 0x4eb270, indexKOFSprites_98Brian },
    { L"Extra 3", 0x4eb270, 0x4eb290 },
    { L"Extra 4", 0x4eb290, 0x4eb2b0 },
    { L"Order Select", 0x4eb2b0, 0x4eb2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Brian },
    { L"Life Bar Portrait", 0x4eb2d0, 0x4eb2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Brian },
    { L"Win Screen Portrait", 0x4eb2f0, 0x4eb3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Brian },

};

const sGame_PaletteDataset KOF98AE2016_A_Brian_C[] =
{
    { L"Brian C - Main", 0x4eb3f0, 0x4eb410, indexKOFSprites_98Brian },
    { L"Extra 1", 0x4eb410, 0x4eb430 },
    { L"Extra 2", 0x4eb430, 0x4eb450 },
    { L"Max Mode", 0x4eb450, 0x4eb470, indexKOFSprites_98Brian },
    { L"Extra 3", 0x4eb470, 0x4eb490 },
    { L"Extra 4", 0x4eb490, 0x4eb4b0 },
    { L"Order Select", 0x4eb4b0, 0x4eb4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Brian },
    { L"Life Bar Portrait", 0x4eb4d0, 0x4eb4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Brian },
    { L"Win Screen Portrait", 0x4eb4f0, 0x4eb5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Brian },

};

const sGame_PaletteDataset KOF98AE2016_A_Brian_D[] =
{
    { L"Brian D - Main", 0x4eb5f0, 0x4eb610, indexKOFSprites_98Brian },
    { L"Extra 1", 0x4eb610, 0x4eb630 },
    { L"Extra 2", 0x4eb630, 0x4eb650 },
    { L"Max Mode", 0x4eb650, 0x4eb670, indexKOFSprites_98Brian },
    { L"Extra 3", 0x4eb670, 0x4eb690 },
    { L"Extra 4", 0x4eb690, 0x4eb6b0 },
    { L"Order Select", 0x4eb6b0, 0x4eb6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Brian },
    { L"Life Bar Portrait", 0x4eb6d0, 0x4eb6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Brian },
    { L"Win Screen Portrait", 0x4eb6f0, 0x4eb7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Brian },

};

const sGame_PaletteDataset KOF98AE2016_A_Rugal_A[] =
{
    { L"Rugal A - Main", 0x4eb7f0, 0x4eb810, indexKOFSprites_98Rugal },
    { L"Extra 1", 0x4eb810, 0x4eb830 },
    { L"Extra 2", 0x4eb830, 0x4eb850 },
    { L"Max Mode", 0x4eb850, 0x4eb870, indexKOFSprites_98Rugal },
    { L"Extra 3", 0x4eb870, 0x4eb890 },
    { L"Extra 4", 0x4eb890, 0x4eb8b0 },
    { L"Order Select", 0x4eb8b0, 0x4eb8d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Rugal },
    { L"Life Bar Portrait", 0x4eb8d0, 0x4eb8f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Rugal },
    { L"Win Screen Portrait", 0x4eb8f0, 0x4eb9f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Rugal },

};

const sGame_PaletteDataset KOF98AE2016_A_Rugal_B[] =
{
    { L"Rugal B - Main", 0x4eb9f0, 0x4eba10, indexKOFSprites_98Rugal },
    { L"Extra 1", 0x4eba10, 0x4eba30 },
    { L"Extra 2", 0x4eba30, 0x4eba50 },
    { L"Max Mode", 0x4eba50, 0x4eba70, indexKOFSprites_98Rugal },
    { L"Extra 3", 0x4eba70, 0x4eba90 },
    { L"Extra 4", 0x4eba90, 0x4ebab0 },
    { L"Order Select", 0x4ebab0, 0x4ebad0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Rugal },
    { L"Life Bar Portrait", 0x4ebad0, 0x4ebaf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Rugal },
    { L"Win Screen Portrait", 0x4ebaf0, 0x4ebbf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Rugal },

};

const sGame_PaletteDataset KOF98AE2016_A_Rugal_C[] =
{
    { L"Rugal C - Main", 0x4ebbf0, 0x4ebc10, indexKOFSprites_98Rugal },
    { L"Extra 1", 0x4ebc10, 0x4ebc30 },
    { L"Extra 2", 0x4ebc30, 0x4ebc50 },
    { L"Max Mode", 0x4ebc50, 0x4ebc70, indexKOFSprites_98Rugal },
    { L"Extra 3", 0x4ebc70, 0x4ebc90 },
    { L"Extra 4", 0x4ebc90, 0x4ebcb0 },
    { L"Order Select", 0x4ebcb0, 0x4ebcd0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Rugal },
    { L"Life Bar Portrait", 0x4ebcd0, 0x4ebcf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Rugal },
    { L"Win Screen Portrait", 0x4ebcf0, 0x4ebdf0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Rugal },

};

const sGame_PaletteDataset KOF98AE2016_A_Rugal_D[] =
{
    { L"Rugal D - Main", 0x4ebdf0, 0x4ebe10, indexKOFSprites_98Rugal },
    { L"Extra 1", 0x4ebe10, 0x4ebe30 },
    { L"Extra 2", 0x4ebe30, 0x4ebe50 },
    { L"Max Mode", 0x4ebe50, 0x4ebe70, indexKOFSprites_98Rugal },
    { L"Extra 3", 0x4ebe70, 0x4ebe90 },
    { L"Extra 4", 0x4ebe90, 0x4ebeb0 },
    { L"Order Select", 0x4ebeb0, 0x4ebed0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Rugal },
    { L"Life Bar Portrait", 0x4ebed0, 0x4ebef0, indexKOFSprites_98Lifebar, indexKOFSprites_98Rugal },
    { L"Win Screen Portrait", 0x4ebef0, 0x4ebff0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Rugal },

};

const sGame_PaletteDataset KOF98AE2016_A_Shingo_A[] =
{
    { L"Shingo A - Main", 0x4ebff0, 0x4ec010, indexKOFSprites_98Shingo },
    { L"Extra 1", 0x4ec010, 0x4ec030 },
    { L"Extra 2", 0x4ec030, 0x4ec050 },
    { L"Max Mode", 0x4ec050, 0x4ec070, indexKOFSprites_98Shingo },
    { L"Extra 3", 0x4ec070, 0x4ec090 },
    { L"Extra 4", 0x4ec090, 0x4ec0b0 },
    { L"Order Select", 0x4ec0b0, 0x4ec0d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shingo },
    { L"Life Bar Portrait", 0x4ec0d0, 0x4ec0f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Win Screen Portrait", 0x4ec0f0, 0x4ec1f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shingo },

};

const sGame_PaletteDataset KOF98AE2016_A_Shingo_B[] =
{
    { L"Shingo B - Main", 0x4ec1f0, 0x4ec210, indexKOFSprites_98Shingo },
    { L"Extra 1", 0x4ec210, 0x4ec230 },
    { L"Extra 2", 0x4ec230, 0x4ec250 },
    { L"Max Mode", 0x4ec250, 0x4ec270, indexKOFSprites_98Shingo },
    { L"Extra 3", 0x4ec270, 0x4ec290 },
    { L"Extra 4", 0x4ec290, 0x4ec2b0 },
    { L"Order Select", 0x4ec2b0, 0x4ec2d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shingo },
    { L"Life Bar Portrait", 0x4ec2d0, 0x4ec2f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Win Screen Portrait", 0x4ec2f0, 0x4ec3f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shingo },

};

const sGame_PaletteDataset KOF98AE2016_A_Shingo_C[] =
{
    { L"Shingo C - Main", 0x4ec3f0, 0x4ec410, indexKOFSprites_98Shingo },
    { L"Extra 1", 0x4ec410, 0x4ec430 },
    { L"Extra 2", 0x4ec430, 0x4ec450 },
    { L"Max Mode", 0x4ec450, 0x4ec470, indexKOFSprites_98Shingo },
    { L"Extra 3", 0x4ec470, 0x4ec490 },
    { L"Extra 4", 0x4ec490, 0x4ec4b0 },
    { L"Order Select", 0x4ec4b0, 0x4ec4d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shingo },
    { L"Life Bar Portrait", 0x4ec4d0, 0x4ec4f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Win Screen Portrait", 0x4ec4f0, 0x4ec5f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shingo },

};

const sGame_PaletteDataset KOF98AE2016_A_Shingo_D[] =
{
    { L"Shingo D - Main", 0x4ec5f0, 0x4ec610, indexKOFSprites_98Shingo },
    { L"Extra 1", 0x4ec610, 0x4ec630 },
    { L"Extra 2", 0x4ec630, 0x4ec650 },
    { L"Max Mode", 0x4ec650, 0x4ec670, indexKOFSprites_98Shingo },
    { L"Extra 3", 0x4ec670, 0x4ec690 },
    { L"Extra 4", 0x4ec690, 0x4ec6b0 },
    { L"Order Select", 0x4ec6b0, 0x4ec6d0, indexKOFSprites_98OrderSelect, indexKOFSprites_98Shingo },
    { L"Life Bar Portrait", 0x4ec6d0, 0x4ec6f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Win Screen Portrait", 0x4ec6f0, 0x4ec7f0, indexKOFSprites_98WinPortrait, indexKOFSprites_98Shingo },

};

const sGame_PaletteDataset KOF98AE2016_A_OYashiro_A[] =
{
    { L"O.Yashiro A - Main", 0x4ec7f0, 0x4ec810, indexKOFSprites_98Yashiro },
    { L"Extra 1", 0x4ec810, 0x4ec830 },
    { L"Extra 2", 0x4ec830, 0x4ec850 },
    { L"Max Mode", 0x4ec850, 0x4ec870, indexKOFSprites_98Yashiro },
    { L"Extra 3", 0x4ec870, 0x4ec890 },
    { L"Extra 4", 0x4ec890, 0x4ec8b0 },
    { L"Order Select", 0x4ec8b0, 0x4ec8d0, indexKOFSprites_98OrderSelect, 0x51 },
    { L"Life Bar Portrait", 0x4ec8d0, 0x4ec8f0, indexKOFSprites_98Lifebar, 0x51 },
    { L"Win Screen Portrait", 0x4ec8f0, 0x4ec9f0, indexKOFSprites_98WinPortrait, 0x51 },

};

const sGame_PaletteDataset KOF98AE2016_A_OYashiro_B[] =
{
    { L"O.Yashiro B - Main", 0x4ec9f0, 0x4eca10, indexKOFSprites_98Yashiro },
    { L"Extra 1", 0x4eca10, 0x4eca30 },
    { L"Extra 2", 0x4eca30, 0x4eca50 },
    { L"Max Mode", 0x4eca50, 0x4eca70, indexKOFSprites_98Yashiro },
    { L"Extra 3", 0x4eca70, 0x4eca90 },
    { L"Extra 4", 0x4eca90, 0x4ecab0 },
    { L"Order Select", 0x4ecab0, 0x4ecad0, indexKOFSprites_98OrderSelect, 0x51 },
    { L"Life Bar Portrait", 0x4ecad0, 0x4ecaf0, indexKOFSprites_98Lifebar, 0x51 },
    { L"Win Screen Portrait", 0x4ecaf0, 0x4ecbf0, indexKOFSprites_98WinPortrait, 0x51 },

};

const sGame_PaletteDataset KOF98AE2016_A_OYashiro_C[] =
{
    { L"O.Yashiro C - Main", 0x4ecbf0, 0x4ecc10, indexKOFSprites_98Yashiro },
    { L"Extra 1", 0x4ecc10, 0x4ecc30 },
    { L"Extra 2", 0x4ecc30, 0x4ecc50 },
    { L"Max Mode", 0x4ecc50, 0x4ecc70, indexKOFSprites_98Yashiro },
    { L"Extra 3", 0x4ecc70, 0x4ecc90 },
    { L"Extra 4", 0x4ecc90, 0x4eccb0 },
    { L"Order Select", 0x4eccb0, 0x4eccd0, indexKOFSprites_98OrderSelect, 0x51 },
    { L"Life Bar Portrait", 0x4eccd0, 0x4eccf0, indexKOFSprites_98Lifebar, 0x51 },
    { L"Win Screen Portrait", 0x4eccf0, 0x4ecdf0, indexKOFSprites_98WinPortrait, 0x51 },

};

const sGame_PaletteDataset KOF98AE2016_A_OYashiro_D[] =
{
    { L"O.Yashiro D - Main", 0x4ecdf0, 0x4ece10, indexKOFSprites_98Yashiro },
    { L"Extra 1", 0x4ece10, 0x4ece30 },
    { L"Extra 2", 0x4ece30, 0x4ece50 },
    { L"Max Mode", 0x4ece50, 0x4ece70, indexKOFSprites_98Yashiro },
    { L"Extra 3", 0x4ece70, 0x4ece90 },
    { L"Extra 4", 0x4ece90, 0x4eceb0 },
    { L"Order Select", 0x4eceb0, 0x4eced0, indexKOFSprites_98OrderSelect, 0x51 },
    { L"Life Bar Portrait", 0x4eced0, 0x4ecef0, indexKOFSprites_98Lifebar, 0x51 },
    { L"Win Screen Portrait", 0x4ecef0, 0x4ecff0, indexKOFSprites_98WinPortrait, 0x51 },

};

const sGame_PaletteDataset KOF98AE2016_A_OShermie_A[] =
{
    { L"O.Shermie A - Main", 0x4ecff0, 0x4ed010, indexKOFSprites_98Shermie },
    { L"Extra 1", 0x4ed010, 0x4ed030 },
    { L"Extra 2", 0x4ed030, 0x4ed050 },
    { L"Max Mode", 0x4ed050, 0x4ed070, indexKOFSprites_98Shermie },
    { L"Extra 3", 0x4ed070, 0x4ed090 },
    { L"Extra 4", 0x4ed090, 0x4ed0b0 },
    { L"Order Select", 0x4ed0b0, 0x4ed0d0, indexKOFSprites_98OrderSelect, 0x50 },
    { L"Life Bar Portrait", 0x4ed0d0, 0x4ed0f0, indexKOFSprites_98Lifebar, 0x50 },
    { L"Win Screen Portrait", 0x4ed0f0, 0x4ed1f0, indexKOFSprites_98WinPortrait, 0x50 },

};

const sGame_PaletteDataset KOF98AE2016_A_OShermie_B[] =
{
    { L"O.Shermie B - Main", 0x4ed1f0, 0x4ed210, indexKOFSprites_98Shermie },
    { L"Extra 1", 0x4ed210, 0x4ed230 },
    { L"Extra 2", 0x4ed230, 0x4ed250 },
    { L"Max Mode", 0x4ed250, 0x4ed270, indexKOFSprites_98Shermie },
    { L"Extra 3", 0x4ed270, 0x4ed290 },
    { L"Extra 4", 0x4ed290, 0x4ed2b0 },
    { L"Order Select", 0x4ed2b0, 0x4ed2d0, indexKOFSprites_98OrderSelect, 0x50 },
    { L"Life Bar Portrait", 0x4ed2d0, 0x4ed2f0, indexKOFSprites_98Lifebar, 0x50 },
    { L"Win Screen Portrait", 0x4ed2f0, 0x4ed3f0, indexKOFSprites_98WinPortrait, 0x50 },

};

const sGame_PaletteDataset KOF98AE2016_A_OShermie_C[] =
{
    { L"O.Shermie C - Main", 0x4ed3f0, 0x4ed410, indexKOFSprites_98Shermie },
    { L"Extra 1", 0x4ed410, 0x4ed430 },
    { L"Extra 2", 0x4ed430, 0x4ed450 },
    { L"Max Mode", 0x4ed450, 0x4ed470, indexKOFSprites_98Shermie },
    { L"Extra 3", 0x4ed470, 0x4ed490 },
    { L"Extra 4", 0x4ed490, 0x4ed4b0 },
    { L"Order Select", 0x4ed4b0, 0x4ed4d0, indexKOFSprites_98OrderSelect, 0x50 },
    { L"Life Bar Portrait", 0x4ed4d0, 0x4ed4f0, indexKOFSprites_98Lifebar, 0x50 },
    { L"Win Screen Portrait", 0x4ed4f0, 0x4ed5f0, indexKOFSprites_98WinPortrait, 0x50 },

};

const sGame_PaletteDataset KOF98AE2016_A_OShermie_D[] =
{
    { L"O.Shermie D - Main", 0x4ed5f0, 0x4ed610, indexKOFSprites_98Shermie },
    { L"Extra 1", 0x4ed610, 0x4ed630 },
    { L"Extra 2", 0x4ed630, 0x4ed650 },
    { L"Max Mode", 0x4ed650, 0x4ed670, indexKOFSprites_98Shermie },
    { L"Extra 3", 0x4ed670, 0x4ed690 },
    { L"Extra 4", 0x4ed690, 0x4ed6b0 },
    { L"Order Select", 0x4ed6b0, 0x4ed6d0, indexKOFSprites_98OrderSelect, 0x50 },
    { L"Life Bar Portrait", 0x4ed6d0, 0x4ed6f0, indexKOFSprites_98Lifebar, 0x50 },
    { L"Win Screen Portrait", 0x4ed6f0, 0x4ed7f0, indexKOFSprites_98WinPortrait, 0x50 },

};

const sGame_PaletteDataset KOF98AE2016_A_OChris_A[] =
{
    { L"O.Chris A - Main", 0x4ed7f0, 0x4ed810, indexKOFSprites_98Chris },
    { L"Extra 1", 0x4ed810, 0x4ed830 },
    { L"Extra 2", 0x4ed830, 0x4ed850 },
    { L"Max Mode", 0x4ed850, 0x4ed870, indexKOFSprites_98Chris },
    { L"Extra 3", 0x4ed870, 0x4ed890 },
    { L"Extra 4", 0x4ed890, 0x4ed8b0 },
    { L"Order Select", 0x4ed8b0, 0x4ed8d0, indexKOFSprites_98OrderSelect, 0x4f },
    { L"Life Bar Portrait", 0x4ed8d0, 0x4ed8f0, indexKOFSprites_98Lifebar, 0x4f },
    { L"Win Screen Portrait", 0x4ed8f0, 0x4ed9f0, indexKOFSprites_98WinPortrait, 0x4f },

};

const sGame_PaletteDataset KOF98AE2016_A_OChris_B[] =
{
    { L"O.Chris B - Main", 0x4ed9f0, 0x4eda10, indexKOFSprites_98Chris },
    { L"Extra 1", 0x4eda10, 0x4eda30 },
    { L"Extra 2", 0x4eda30, 0x4eda50 },
    { L"Max Mode", 0x4eda50, 0x4eda70, indexKOFSprites_98Chris },
    { L"Extra 3", 0x4eda70, 0x4eda90 },
    { L"Extra 4", 0x4eda90, 0x4edab0 },
    { L"Order Select", 0x4edab0, 0x4edad0, indexKOFSprites_98OrderSelect, 0x4f },
    { L"Life Bar Portrait", 0x4edad0, 0x4edaf0, indexKOFSprites_98Lifebar, 0x4f },
    { L"Win Screen Portrait", 0x4edaf0, 0x4edbf0, indexKOFSprites_98WinPortrait, 0x4f },

};

const sGame_PaletteDataset KOF98AE2016_A_OChris_C[] =
{
    { L"O.Chris C - Main", 0x4edbf0, 0x4edc10, indexKOFSprites_98Chris },
    { L"Extra 1", 0x4edc10, 0x4edc30 },
    { L"Extra 2", 0x4edc30, 0x4edc50 },
    { L"Max Mode", 0x4edc50, 0x4edc70, indexKOFSprites_98Chris },
    { L"Extra 3", 0x4edc70, 0x4edc90 },
    { L"Extra 4", 0x4edc90, 0x4edcb0 },
    { L"Order Select", 0x4edcb0, 0x4edcd0, indexKOFSprites_98OrderSelect, 0x4f },
    { L"Life Bar Portrait", 0x4edcd0, 0x4edcf0, indexKOFSprites_98Lifebar, 0x4f },
    { L"Win Screen Portrait", 0x4edcf0, 0x4eddf0, indexKOFSprites_98WinPortrait, 0x4f },

};

const sGame_PaletteDataset KOF98AE2016_A_OChris_D[] =
{
    { L"O.Chris D - Main", 0x4eddf0, 0x4ede10, indexKOFSprites_98Chris },
    { L"Extra 1", 0x4ede10, 0x4ede30 },
    { L"Extra 2", 0x4ede30, 0x4ede50 },
    { L"Max Mode", 0x4ede50, 0x4ede70, indexKOFSprites_98Chris },
    { L"Extra 3", 0x4ede70, 0x4ede90 },
    { L"Extra 4", 0x4ede90, 0x4edeb0 },
    { L"Order Select", 0x4edeb0, 0x4eded0, indexKOFSprites_98OrderSelect, 0x4f },
    { L"Life Bar Portrait", 0x4eded0, 0x4edef0, indexKOFSprites_98Lifebar, 0x4f },
    { L"Win Screen Portrait", 0x4edef0, 0x4edff0, indexKOFSprites_98WinPortrait, 0x4f },

};

const sGame_PaletteDataset KOF98AE2016_A_OmegaRugal_A[] =
{
    { L"Omega Rugal A - Main", 0x4edff0, 0x4ee010, indexKOFSprites_98Rugal },
    { L"Extra 1", 0x4ee010, 0x4ee030 },
    { L"Extra 2", 0x4ee030, 0x4ee050 },
    { L"Max Mode", 0x4ee050, 0x4ee070, indexKOFSprites_98Rugal },
    { L"Extra 3", 0x4ee070, 0x4ee090 },
    { L"Extra 4", 0x4ee090, 0x4ee0b0 },
    { L"Order Select", 0x4ee0b0, 0x4ee0d0, indexKOFSprites_98OrderSelect, 0x52 },
    { L"Life Bar Portrait", 0x4ee0d0, 0x4ee0f0, indexKOFSprites_98Lifebar, 0x52 },
    { L"Win Screen Portrait", 0x4ee0f0, 0x4ee1f0, indexKOFSprites_98WinPortrait, 0x52 },

};

const sGame_PaletteDataset KOF98AE2016_A_OmegaRugal_B[] =
{
    { L"Omega Rugal B - Main", 0x4ee1f0, 0x4ee210, indexKOFSprites_98Rugal },
    { L"Extra 1", 0x4ee210, 0x4ee230 },
    { L"Extra 2", 0x4ee230, 0x4ee250 },
    { L"Max Mode", 0x4ee250, 0x4ee270, indexKOFSprites_98Rugal },
    { L"Extra 3", 0x4ee270, 0x4ee290 },
    { L"Extra 4", 0x4ee290, 0x4ee2b0 },
    { L"Order Select", 0x4ee2b0, 0x4ee2d0, indexKOFSprites_98OrderSelect, 0x52 },
    { L"Life Bar Portrait", 0x4ee2d0, 0x4ee2f0, indexKOFSprites_98Lifebar, 0x52 },
    { L"Win Screen Portrait", 0x4ee2f0, 0x4ee3f0, indexKOFSprites_98WinPortrait, 0x52 },

};

const sGame_PaletteDataset KOF98AE2016_A_OmegaRugal_C[] =
{
    { L"Omega Rugal C - Main", 0x4ee3f0, 0x4ee410, indexKOFSprites_98Rugal },
    { L"Extra 1", 0x4ee410, 0x4ee430 },
    { L"Extra 2", 0x4ee430, 0x4ee450 },
    { L"Max Mode", 0x4ee450, 0x4ee470, indexKOFSprites_98Rugal },
    { L"Extra 3", 0x4ee470, 0x4ee490 },
    { L"Extra 4", 0x4ee490, 0x4ee4b0 },
    { L"Order Select", 0x4ee4b0, 0x4ee4d0, indexKOFSprites_98OrderSelect, 0x52 },
    { L"Life Bar Portrait", 0x4ee4d0, 0x4ee4f0, indexKOFSprites_98Lifebar, 0x52 },
    { L"Win Screen Portrait", 0x4ee4f0, 0x4ee5f0, indexKOFSprites_98WinPortrait, 0x52 },

};

const sGame_PaletteDataset KOF98AE2016_A_OmegaRugal_D[] =
{
    { L"Omega Rugal D - Main", 0x4ee5f0, 0x4ee610, indexKOFSprites_98Rugal },
    { L"Extra 1", 0x4ee610, 0x4ee630 },
    { L"Extra 2", 0x4ee630, 0x4ee650 },
    { L"Max Mode", 0x4ee650, 0x4ee670, indexKOFSprites_98Rugal },
    { L"Extra 3", 0x4ee670, 0x4ee690 },
    { L"Extra 4", 0x4ee690, 0x4ee6b0 },
    { L"Order Select", 0x4ee6b0, 0x4ee6d0, indexKOFSprites_98OrderSelect, 0x52 },
    { L"Life Bar Portrait", 0x4ee6d0, 0x4ee6f0, indexKOFSprites_98Lifebar, 0x52 },
    { L"Win Screen Portrait", 0x4ee6f0, 0x4ee7f0, indexKOFSprites_98WinPortrait, 0x52 },

};

const sGame_PaletteDataset KOF98AE2016_A_Goenitz_A[] =
{
    { L"Goenitz A - Main", 0x1b97f0, 0x1b9810, indexKOFSprites_02Goenitz },
    { L"Extra 1", 0x1b9810, 0x1b9830 },
    { L"Extra 2", 0x1b9830, 0x1b9850 },
    { L"Max Mode", 0x1b9850, 0x1b9870, indexKOFSprites_02Goenitz },
    { L"Extra 3", 0x1b9870, 0x1b9890 },
    { L"Extra 4", 0x1b9890, 0x1b98b0 },
    { L"Extra 5", 0x1b98b0, 0x1b98d0 },
    { L"Extra 6", 0x1b98d0, 0x1b98f0 },
    { L"Extra 7", 0x1b98f0, 0x1b9910 },
    { L"Extra 8", 0x1b9910, 0x1b9930 },
    { L"Extra 9", 0x1b9930, 0x1b9950 },
    { L"Extra 10", 0x1b9950, 0x1b9970 },
    { L"Extra 11", 0x1b9970, 0x1b9990 },
    { L"Extra 12", 0x1b9990, 0x1b99b0 },
    { L"Order Select", 0x1b99b0, 0x1b99d0 },
    { L"Life Bar Portrait", 0x1b99d0, 0x1b99f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Goenitz_B[] =
{
    { L"Goenitz B - Main", 0x1b99f0, 0x1b9a10, indexKOFSprites_02Goenitz },
    { L"Extra 1", 0x1b9a10, 0x1b9a30 },
    { L"Extra 2", 0x1b9a30, 0x1b9a50 },
    { L"Max Mode", 0x1b9a50, 0x1b9a70, indexKOFSprites_02Goenitz },
    { L"Extra 3", 0x1b9a70, 0x1b9a90 },
    { L"Extra 4", 0x1b9a90, 0x1b9ab0 },
    { L"Extra 5", 0x1b9ab0, 0x1b9ad0 },
    { L"Extra 6", 0x1b9ad0, 0x1b9af0 },
    { L"Extra 7", 0x1b9af0, 0x1b9b10 },
    { L"Extra 8", 0x1b9b10, 0x1b9b30 },
    { L"Extra 9", 0x1b9b30, 0x1b9b50 },
    { L"Extra 10", 0x1b9b50, 0x1b9b70 },
    { L"Extra 11", 0x1b9b70, 0x1b9b90 },
    { L"Extra 12", 0x1b9b90, 0x1b9bb0 },
    { L"Order Select", 0x1b9bb0, 0x1b9bd0 },
    { L"Life Bar Portrait", 0x1b9bd0, 0x1b9bf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Goenitz_C[] =
{
    { L"Goenitz C - Main", 0x1b9bf0, 0x1b9c10, indexKOFSprites_02Goenitz },
    { L"Extra 1", 0x1b9c10, 0x1b9c30 },
    { L"Extra 2", 0x1b9c30, 0x1b9c50 },
    { L"Max Mode", 0x1b9c50, 0x1b9c70, indexKOFSprites_02Goenitz },
    { L"Extra 3", 0x1b9c70, 0x1b9c90 },
    { L"Extra 4", 0x1b9c90, 0x1b9cb0 },
    { L"Extra 5", 0x1b9cb0, 0x1b9cd0 },
    { L"Extra 6", 0x1b9cd0, 0x1b9cf0 },
    { L"Extra 7", 0x1b9cf0, 0x1b9d10 },
    { L"Extra 8", 0x1b9d10, 0x1b9d30 },
    { L"Extra 9", 0x1b9d30, 0x1b9d50 },
    { L"Extra 10", 0x1b9d50, 0x1b9d70 },
    { L"Extra 11", 0x1b9d70, 0x1b9d90 },
    { L"Extra 12", 0x1b9d90, 0x1b9db0 },
    { L"Order Select", 0x1b9db0, 0x1b9dd0 },
    { L"Life Bar Portrait", 0x1b9dd0, 0x1b9df0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Goenitz_D[] =
{
    { L"Goenitz D - Main", 0x1b9df0, 0x1b9e10, indexKOFSprites_02Goenitz },
    { L"Extra 1", 0x1b9e10, 0x1b9e30 },
    { L"Extra 2", 0x1b9e30, 0x1b9e50 },
    { L"Max Mode", 0x1b9e50, 0x1b9e70, indexKOFSprites_02Goenitz },
    { L"Extra 3", 0x1b9e70, 0x1b9e90 },
    { L"Extra 4", 0x1b9e90, 0x1b9eb0 },
    { L"Extra 5", 0x1b9eb0, 0x1b9ed0 },
    { L"Extra 6", 0x1b9ed0, 0x1b9ef0 },
    { L"Extra 7", 0x1b9ef0, 0x1b9f10 },
    { L"Extra 8", 0x1b9f10, 0x1b9f30 },
    { L"Extra 9", 0x1b9f30, 0x1b9f50 },
    { L"Extra 10", 0x1b9f50, 0x1b9f70 },
    { L"Extra 11", 0x1b9f70, 0x1b9f90 },
    { L"Extra 12", 0x1b9f90, 0x1b9fb0 },
    { L"Order Select", 0x1b9fb0, 0x1b9fd0 },
    { L"Life Bar Portrait", 0x1b9fd0, 0x1b9ff0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Geese_A[] =
{
    { L"Geese A - Main", 0x1b9ff0, 0x1ba010, indexKOFSprites_02Geese},
    { L"Extra 1", 0x1ba010, 0x1ba030 },
    { L"Extra 2", 0x1ba030, 0x1ba050 },
    { L"Max Mode", 0x1ba050, 0x1ba070, indexKOFSprites_02Geese },
    { L"Extra 3", 0x1ba070, 0x1ba090 },
    { L"Extra 4", 0x1ba090, 0x1ba0b0 },
    { L"Extra 5", 0x1ba0b0, 0x1ba0d0 },
    { L"Extra 6", 0x1ba0d0, 0x1ba0f0 },
    { L"Extra 7", 0x1ba0f0, 0x1ba110 },
    { L"Extra 8", 0x1ba110, 0x1ba130 },
    { L"Extra 9", 0x1ba130, 0x1ba150 },
    { L"Extra 10", 0x1ba150, 0x1ba170 },
    { L"Extra 11", 0x1ba170, 0x1ba190 },
    { L"Extra 12", 0x1ba190, 0x1ba1b0 },
    { L"Order Select", 0x1ba1b0, 0x1ba1d0 },
    { L"Life Bar Portrait", 0x1ba1d0, 0x1ba1f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Geese_B[] =
{
    { L"Geese B - Main", 0x1ba1f0, 0x1ba210, indexKOFSprites_02Geese },
    { L"Extra 1", 0x1ba210, 0x1ba230 },
    { L"Extra 2", 0x1ba230, 0x1ba250 },
    { L"Max Mode", 0x1ba250, 0x1ba270, indexKOFSprites_02Geese },
    { L"Extra 3", 0x1ba270, 0x1ba290 },
    { L"Extra 4", 0x1ba290, 0x1ba2b0 },
    { L"Extra 5", 0x1ba2b0, 0x1ba2d0 },
    { L"Extra 6", 0x1ba2d0, 0x1ba2f0 },
    { L"Extra 7", 0x1ba2f0, 0x1ba310 },
    { L"Extra 8", 0x1ba310, 0x1ba330 },
    { L"Extra 9", 0x1ba330, 0x1ba350 },
    { L"Extra 10", 0x1ba350, 0x1ba370 },
    { L"Extra 11", 0x1ba370, 0x1ba390 },
    { L"Extra 12", 0x1ba390, 0x1ba3b0 },
    { L"Order Select", 0x1ba3b0, 0x1ba3d0 },
    { L"Life Bar Portrait", 0x1ba3d0, 0x1ba3f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Geese_C[] =
{
    { L"Geese C - Main", 0x1ba3f0, 0x1ba410, indexKOFSprites_02Geese },
    { L"Extra 1", 0x1ba410, 0x1ba430 },
    { L"Extra 2", 0x1ba430, 0x1ba450 },
    { L"Max Mode", 0x1ba450, 0x1ba470, indexKOFSprites_02Geese },
    { L"Extra 3", 0x1ba470, 0x1ba490 },
    { L"Extra 4", 0x1ba490, 0x1ba4b0 },
    { L"Extra 5", 0x1ba4b0, 0x1ba4d0 },
    { L"Extra 6", 0x1ba4d0, 0x1ba4f0 },
    { L"Extra 7", 0x1ba4f0, 0x1ba510 },
    { L"Extra 8", 0x1ba510, 0x1ba530 },
    { L"Extra 9", 0x1ba530, 0x1ba550 },
    { L"Extra 10", 0x1ba550, 0x1ba570 },
    { L"Extra 11", 0x1ba570, 0x1ba590 },
    { L"Extra 12", 0x1ba590, 0x1ba5b0 },
    { L"Order Select", 0x1ba5b0, 0x1ba5d0 },
    { L"Life Bar Portrait", 0x1ba5d0, 0x1ba5f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Geese_D[] =
{
    { L"Geese D - Main", 0x1ba5f0, 0x1ba610, indexKOFSprites_02Geese },
    { L"Extra 1", 0x1ba610, 0x1ba630 },
    { L"Extra 2", 0x1ba630, 0x1ba650 },
    { L"Max Mode", 0x1ba650, 0x1ba670, indexKOFSprites_02Geese },
    { L"Extra 3", 0x1ba670, 0x1ba690 },
    { L"Extra 4", 0x1ba690, 0x1ba6b0 },
    { L"Extra 5", 0x1ba6b0, 0x1ba6d0 },
    { L"Extra 6", 0x1ba6d0, 0x1ba6f0 },
    { L"Extra 7", 0x1ba6f0, 0x1ba710 },
    { L"Extra 8", 0x1ba710, 0x1ba730 },
    { L"Extra 9", 0x1ba730, 0x1ba750 },
    { L"Extra 10", 0x1ba750, 0x1ba770 },
    { L"Extra 11", 0x1ba770, 0x1ba790 },
    { L"Extra 12", 0x1ba790, 0x1ba7b0 },
    { L"Order Select", 0x1ba7b0, 0x1ba7d0 },
    { L"Life Bar Portrait", 0x1ba7d0, 0x1ba7f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Krauzer_A[] =
{
    { L"Krauzer A - Main", 0x1ba7f0, 0x1ba810 },
    { L"Extra 1", 0x1ba810, 0x1ba830 },
    { L"Extra 2", 0x1ba830, 0x1ba850 },
    { L"Max Mode", 0x1ba850, 0x1ba870 },
    { L"Extra 3", 0x1ba870, 0x1ba890 },
    { L"Extra 4", 0x1ba890, 0x1ba8b0 },
    { L"Extra 5", 0x1ba8b0, 0x1ba8d0 },
    { L"Extra 6", 0x1ba8d0, 0x1ba8f0 },
    { L"Extra 7", 0x1ba8f0, 0x1ba910 },
    { L"Extra 8", 0x1ba910, 0x1ba930 },
    { L"Extra 9", 0x1ba930, 0x1ba950 },
    { L"Extra 10", 0x1ba950, 0x1ba970 },
    { L"Extra 11", 0x1ba970, 0x1ba990 },
    { L"Extra 12", 0x1ba990, 0x1ba9b0 },
    { L"Order Select", 0x1ba9b0, 0x1ba9d0 },
    { L"Life Bar Portrait", 0x1ba9d0, 0x1ba9f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Krauzer_B[] =
{
    { L"Krauzer B - Main", 0x1ba9f0, 0x1baa10 },
    { L"Extra 1", 0x1baa10, 0x1baa30 },
    { L"Extra 2", 0x1baa30, 0x1baa50 },
    { L"Max Mode", 0x1baa50, 0x1baa70 },
    { L"Extra 3", 0x1baa70, 0x1baa90 },
    { L"Extra 4", 0x1baa90, 0x1baab0 },
    { L"Extra 5", 0x1baab0, 0x1baad0 },
    { L"Extra 6", 0x1baad0, 0x1baaf0 },
    { L"Extra 7", 0x1baaf0, 0x1bab10 },
    { L"Extra 8", 0x1bab10, 0x1bab30 },
    { L"Extra 9", 0x1bab30, 0x1bab50 },
    { L"Extra 10", 0x1bab50, 0x1bab70 },
    { L"Extra 11", 0x1bab70, 0x1bab90 },
    { L"Extra 12", 0x1bab90, 0x1babb0 },
    { L"Order Select", 0x1babb0, 0x1babd0 },
    { L"Life Bar Portrait", 0x1babd0, 0x1babf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Krauzer_C[] =
{
    { L"Krauzer C - Main", 0x1babf0, 0x1bac10 },
    { L"Extra 1", 0x1bac10, 0x1bac30 },
    { L"Extra 2", 0x1bac30, 0x1bac50 },
    { L"Max Mode", 0x1bac50, 0x1bac70 },
    { L"Extra 3", 0x1bac70, 0x1bac90 },
    { L"Extra 4", 0x1bac90, 0x1bacb0 },
    { L"Extra 5", 0x1bacb0, 0x1bacd0 },
    { L"Extra 6", 0x1bacd0, 0x1bacf0 },
    { L"Extra 7", 0x1bacf0, 0x1bad10 },
    { L"Extra 8", 0x1bad10, 0x1bad30 },
    { L"Extra 9", 0x1bad30, 0x1bad50 },
    { L"Extra 10", 0x1bad50, 0x1bad70 },
    { L"Extra 11", 0x1bad70, 0x1bad90 },
    { L"Extra 12", 0x1bad90, 0x1badb0 },
    { L"Order Select", 0x1badb0, 0x1badd0 },
    { L"Life Bar Portrait", 0x1badd0, 0x1badf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Krauzer_D[] =
{
    { L"Krauzer D - Main", 0x1badf0, 0x1bae10 },
    { L"Extra 1", 0x1bae10, 0x1bae30 },
    { L"Extra 2", 0x1bae30, 0x1bae50 },
    { L"Max Mode", 0x1bae50, 0x1bae70 },
    { L"Extra 3", 0x1bae70, 0x1bae90 },
    { L"Extra 4", 0x1bae90, 0x1baeb0 },
    { L"Extra 5", 0x1baeb0, 0x1baed0 },
    { L"Extra 6", 0x1baed0, 0x1baef0 },
    { L"Extra 7", 0x1baef0, 0x1baf10 },
    { L"Extra 8", 0x1baf10, 0x1baf30 },
    { L"Extra 9", 0x1baf30, 0x1baf50 },
    { L"Extra 10", 0x1baf50, 0x1baf70 },
    { L"Extra 11", 0x1baf70, 0x1baf90 },
    { L"Extra 12", 0x1baf90, 0x1bafb0 },
    { L"Order Select", 0x1bafb0, 0x1bafd0 },
    { L"Life Bar Portrait", 0x1bafd0, 0x1baff0 },

};

const sGame_PaletteDataset KOF98AE2016_A_MrBig_A[] =
{
    { L"Mr.Big A - Main", 0x1baff0, 0x1bb010 },
    { L"Extra 1", 0x1bb010, 0x1bb030 },
    { L"Extra 2", 0x1bb030, 0x1bb050 },
    { L"Max Mode", 0x1bb050, 0x1bb070 },
    { L"Extra 3", 0x1bb070, 0x1bb090 },
    { L"Extra 4", 0x1bb090, 0x1bb0b0 },
    { L"Extra 5", 0x1bb0b0, 0x1bb0d0 },
    { L"Extra 6", 0x1bb0d0, 0x1bb0f0 },
    { L"Extra 7", 0x1bb0f0, 0x1bb110 },
    { L"Extra 8", 0x1bb110, 0x1bb130 },
    { L"Extra 9", 0x1bb130, 0x1bb150 },
    { L"Extra 10", 0x1bb150, 0x1bb170 },
    { L"Extra 11", 0x1bb170, 0x1bb190 },
    { L"Extra 12", 0x1bb190, 0x1bb1b0 },
    { L"Order Select", 0x1bb1b0, 0x1bb1d0 },
    { L"Life Bar Portrait", 0x1bb1d0, 0x1bb1f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_MrBig_B[] =
{
    { L"Mr.Big B - Main", 0x1bb1f0, 0x1bb210 },
    { L"Extra 1", 0x1bb210, 0x1bb230 },
    { L"Extra 2", 0x1bb230, 0x1bb250 },
    { L"Max Mode", 0x1bb250, 0x1bb270 },
    { L"Extra 3", 0x1bb270, 0x1bb290 },
    { L"Extra 4", 0x1bb290, 0x1bb2b0 },
    { L"Extra 5", 0x1bb2b0, 0x1bb2d0 },
    { L"Extra 6", 0x1bb2d0, 0x1bb2f0 },
    { L"Extra 7", 0x1bb2f0, 0x1bb310 },
    { L"Extra 8", 0x1bb310, 0x1bb330 },
    { L"Extra 9", 0x1bb330, 0x1bb350 },
    { L"Extra 10", 0x1bb350, 0x1bb370 },
    { L"Extra 11", 0x1bb370, 0x1bb390 },
    { L"Extra 12", 0x1bb390, 0x1bb3b0 },
    { L"Order Select", 0x1bb3b0, 0x1bb3d0 },
    { L"Life Bar Portrait", 0x1bb3d0, 0x1bb3f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_MrBig_C[] =
{
    { L"Mr.Big C - Main", 0x1bb3f0, 0x1bb410 },
    { L"Extra 1", 0x1bb410, 0x1bb430 },
    { L"Extra 2", 0x1bb430, 0x1bb450 },
    { L"Max Mode", 0x1bb450, 0x1bb470 },
    { L"Extra 3", 0x1bb470, 0x1bb490 },
    { L"Extra 4", 0x1bb490, 0x1bb4b0 },
    { L"Extra 5", 0x1bb4b0, 0x1bb4d0 },
    { L"Extra 6", 0x1bb4d0, 0x1bb4f0 },
    { L"Extra 7", 0x1bb4f0, 0x1bb510 },
    { L"Extra 8", 0x1bb510, 0x1bb530 },
    { L"Extra 9", 0x1bb530, 0x1bb550 },
    { L"Extra 10", 0x1bb550, 0x1bb570 },
    { L"Extra 11", 0x1bb570, 0x1bb590 },
    { L"Extra 12", 0x1bb590, 0x1bb5b0 },
    { L"Order Select", 0x1bb5b0, 0x1bb5d0 },
    { L"Life Bar Portrait", 0x1bb5d0, 0x1bb5f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_MrBig_D[] =
{
    { L"Mr.Big D - Main", 0x1bb5f0, 0x1bb610 },
    { L"Extra 1", 0x1bb610, 0x1bb630 },
    { L"Extra 2", 0x1bb630, 0x1bb650 },
    { L"Max Mode", 0x1bb650, 0x1bb670 },
    { L"Extra 3", 0x1bb670, 0x1bb690 },
    { L"Extra 4", 0x1bb690, 0x1bb6b0 },
    { L"Extra 5", 0x1bb6b0, 0x1bb6d0 },
    { L"Extra 6", 0x1bb6d0, 0x1bb6f0 },
    { L"Extra 7", 0x1bb6f0, 0x1bb710 },
    { L"Extra 8", 0x1bb710, 0x1bb730 },
    { L"Extra 9", 0x1bb730, 0x1bb750 },
    { L"Extra 10", 0x1bb750, 0x1bb770 },
    { L"Extra 11", 0x1bb770, 0x1bb790 },
    { L"Extra 12", 0x1bb790, 0x1bb7b0 },
    { L"Order Select", 0x1bb7b0, 0x1bb7d0 },
    { L"Life Bar Portrait", 0x1bb7d0, 0x1bb7f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Kasumi_A[] =
{
    { L"Kasumi A - Main", 0x1bb7f0, 0x1bb810, indexKOFSprites_00Kasumi },
    { L"Extra 1", 0x1bb810, 0x1bb830 },
    { L"Extra 2", 0x1bb830, 0x1bb850 },
    { L"Max Mode", 0x1bb850, 0x1bb870, indexKOFSprites_00Kasumi },
    { L"Extra 3", 0x1bb870, 0x1bb890 },
    { L"Extra 4", 0x1bb890, 0x1bb8b0 },
    { L"Extra 5", 0x1bb8b0, 0x1bb8d0 },
    { L"Extra 6", 0x1bb8d0, 0x1bb8f0 },
    { L"Extra 7", 0x1bb8f0, 0x1bb910 },
    { L"Extra 8", 0x1bb910, 0x1bb930 },
    { L"Extra 9", 0x1bb930, 0x1bb950 },
    { L"Extra 10", 0x1bb950, 0x1bb970 },
    { L"Extra 11", 0x1bb970, 0x1bb990 },
    { L"Extra 12", 0x1bb990, 0x1bb9b0 },
    { L"Order Select", 0x1bb9b0, 0x1bb9d0 },
    { L"Life Bar Portrait", 0x1bb9d0, 0x1bb9f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Kasumi_B[] =
{
    { L"Kasumi B - Main", 0x1bb9f0, 0x1bba10, indexKOFSprites_00Kasumi },
    { L"Extra 1", 0x1bba10, 0x1bba30 },
    { L"Extra 2", 0x1bba30, 0x1bba50 },
    { L"Max Mode", 0x1bba50, 0x1bba70, indexKOFSprites_00Kasumi },
    { L"Extra 3", 0x1bba70, 0x1bba90 },
    { L"Extra 4", 0x1bba90, 0x1bbab0 },
    { L"Extra 5", 0x1bbab0, 0x1bbad0 },
    { L"Extra 6", 0x1bbad0, 0x1bbaf0 },
    { L"Extra 7", 0x1bbaf0, 0x1bbb10 },
    { L"Extra 8", 0x1bbb10, 0x1bbb30 },
    { L"Extra 9", 0x1bbb30, 0x1bbb50 },
    { L"Extra 10", 0x1bbb50, 0x1bbb70 },
    { L"Extra 11", 0x1bbb70, 0x1bbb90 },
    { L"Extra 12", 0x1bbb90, 0x1bbbb0 },
    { L"Order Select", 0x1bbbb0, 0x1bbbd0 },
    { L"Life Bar Portrait", 0x1bbbd0, 0x1bbbf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Kasumi_C[] =
{
    { L"Kasumi C - Main", 0x1bbbf0, 0x1bbc10, indexKOFSprites_00Kasumi },
    { L"Extra 1", 0x1bbc10, 0x1bbc30 },
    { L"Extra 2", 0x1bbc30, 0x1bbc50 },
    { L"Max Mode", 0x1bbc50, 0x1bbc70, indexKOFSprites_00Kasumi },
    { L"Extra 3", 0x1bbc70, 0x1bbc90 },
    { L"Extra 4", 0x1bbc90, 0x1bbcb0 },
    { L"Extra 5", 0x1bbcb0, 0x1bbcd0 },
    { L"Extra 6", 0x1bbcd0, 0x1bbcf0 },
    { L"Extra 7", 0x1bbcf0, 0x1bbd10 },
    { L"Extra 8", 0x1bbd10, 0x1bbd30 },
    { L"Extra 9", 0x1bbd30, 0x1bbd50 },
    { L"Extra 10", 0x1bbd50, 0x1bbd70 },
    { L"Extra 11", 0x1bbd70, 0x1bbd90 },
    { L"Extra 12", 0x1bbd90, 0x1bbdb0 },
    { L"Order Select", 0x1bbdb0, 0x1bbdd0 },
    { L"Life Bar Portrait", 0x1bbdd0, 0x1bbdf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Kasumi_D[] =
{
    { L"Kasumi D - Main", 0x1bbdf0, 0x1bbe10, indexKOFSprites_00Kasumi },
    { L"Extra 1", 0x1bbe10, 0x1bbe30 },
    { L"Extra 2", 0x1bbe30, 0x1bbe50 },
    { L"Max Mode", 0x1bbe50, 0x1bbe70, indexKOFSprites_00Kasumi },
    { L"Extra 3", 0x1bbe70, 0x1bbe90 },
    { L"Extra 4", 0x1bbe90, 0x1bbeb0 },
    { L"Extra 5", 0x1bbeb0, 0x1bbed0 },
    { L"Extra 6", 0x1bbed0, 0x1bbef0 },
    { L"Extra 7", 0x1bbef0, 0x1bbf10 },
    { L"Extra 8", 0x1bbf10, 0x1bbf30 },
    { L"Extra 9", 0x1bbf30, 0x1bbf50 },
    { L"Extra 10", 0x1bbf50, 0x1bbf70 },
    { L"Extra 11", 0x1bbf70, 0x1bbf90 },
    { L"Extra 12", 0x1bbf90, 0x1bbfb0 },
    { L"Order Select", 0x1bbfb0, 0x1bbfd0 },
    { L"Life Bar Portrait", 0x1bbfd0, 0x1bbff0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Orochi_A[] =
{
    { L"Orochi A - Main", 0x1bbff0, 0x1bc010, indexKOF97Sprites_Orochi },
    { L"Extra 1", 0x1bc010, 0x1bc030 },
    { L"Extra 2", 0x1bc030, 0x1bc050 },
    { L"Max Mode", 0x1bc050, 0x1bc070, indexKOF97Sprites_Orochi },
    { L"Extra 3", 0x1bc070, 0x1bc090 },
    { L"Extra 4", 0x1bc090, 0x1bc0b0 },
    { L"Extra 5", 0x1bc0b0, 0x1bc0d0 },
    { L"Extra 6", 0x1bc0d0, 0x1bc0f0 },
    { L"Extra 7", 0x1bc0f0, 0x1bc110 },
    { L"Extra 8", 0x1bc110, 0x1bc130 },
    { L"Extra 9", 0x1bc130, 0x1bc150 },
    { L"Extra 10", 0x1bc150, 0x1bc170 },
    { L"Extra 11", 0x1bc170, 0x1bc190 },
    { L"Extra 12", 0x1bc190, 0x1bc1b0 },
    { L"Order Select", 0x1bc1b0, 0x1bc1d0 },
    { L"Life Bar Portrait", 0x1bc1d0, 0x1bc1f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Orochi_B[] =
{
    { L"Orochi B - Main", 0x1bc1f0, 0x1bc210, indexKOF97Sprites_Orochi },
    { L"Extra 1", 0x1bc210, 0x1bc230 },
    { L"Extra 2", 0x1bc230, 0x1bc250 },
    { L"Max Mode", 0x1bc250, 0x1bc270, indexKOF97Sprites_Orochi },
    { L"Extra 3", 0x1bc270, 0x1bc290 },
    { L"Extra 4", 0x1bc290, 0x1bc2b0 },
    { L"Extra 5", 0x1bc2b0, 0x1bc2d0 },
    { L"Extra 6", 0x1bc2d0, 0x1bc2f0 },
    { L"Extra 7", 0x1bc2f0, 0x1bc310 },
    { L"Extra 8", 0x1bc310, 0x1bc330 },
    { L"Extra 9", 0x1bc330, 0x1bc350 },
    { L"Extra 10", 0x1bc350, 0x1bc370 },
    { L"Extra 11", 0x1bc370, 0x1bc390 },
    { L"Extra 12", 0x1bc390, 0x1bc3b0 },
    { L"Order Select", 0x1bc3b0, 0x1bc3d0 },
    { L"Life Bar Portrait", 0x1bc3d0, 0x1bc3f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Orochi_C[] =
{
    { L"Orochi C - Main", 0x1bc3f0, 0x1bc410, indexKOF97Sprites_Orochi },
    { L"Extra 1", 0x1bc410, 0x1bc430 },
    { L"Extra 2", 0x1bc430, 0x1bc450 },
    { L"Max Mode", 0x1bc450, 0x1bc470, indexKOF97Sprites_Orochi },
    { L"Extra 3", 0x1bc470, 0x1bc490 },
    { L"Extra 4", 0x1bc490, 0x1bc4b0 },
    { L"Extra 5", 0x1bc4b0, 0x1bc4d0 },
    { L"Extra 6", 0x1bc4d0, 0x1bc4f0 },
    { L"Extra 7", 0x1bc4f0, 0x1bc510 },
    { L"Extra 8", 0x1bc510, 0x1bc530 },
    { L"Extra 9", 0x1bc530, 0x1bc550 },
    { L"Extra 10", 0x1bc550, 0x1bc570 },
    { L"Extra 11", 0x1bc570, 0x1bc590 },
    { L"Extra 12", 0x1bc590, 0x1bc5b0 },
    { L"Order Select", 0x1bc5b0, 0x1bc5d0 },
    { L"Life Bar Portrait", 0x1bc5d0, 0x1bc5f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Orochi_D[] =
{
    { L"Orochi D - Main", 0x1bc5f0, 0x1bc610, indexKOF97Sprites_Orochi },
    { L"Extra 1", 0x1bc610, 0x1bc630 },
    { L"Extra 2", 0x1bc630, 0x1bc650 },
    { L"Max Mode", 0x1bc650, 0x1bc670, indexKOF97Sprites_Orochi },
    { L"Extra 3", 0x1bc670, 0x1bc690 },
    { L"Extra 4", 0x1bc690, 0x1bc6b0 },
    { L"Extra 5", 0x1bc6b0, 0x1bc6d0 },
    { L"Extra 6", 0x1bc6d0, 0x1bc6f0 },
    { L"Extra 7", 0x1bc6f0, 0x1bc710 },
    { L"Extra 8", 0x1bc710, 0x1bc730 },
    { L"Extra 9", 0x1bc730, 0x1bc750 },
    { L"Extra 10", 0x1bc750, 0x1bc770 },
    { L"Extra 11", 0x1bc770, 0x1bc790 },
    { L"Extra 12", 0x1bc790, 0x1bc7b0 },
    { L"Order Select", 0x1bc7b0, 0x1bc7d0 },
    { L"Life Bar Portrait", 0x1bc7d0, 0x1bc7f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Eiji_A[] =
{
    { L"Eiji A - Main", 0x1bc7f0, 0x1bc810 },
    { L"Extra 1", 0x1bc810, 0x1bc830 },
    { L"Extra 2", 0x1bc830, 0x1bc850 },
    { L"Max Mode", 0x1bc850, 0x1bc870 },
    { L"Extra 3", 0x1bc870, 0x1bc890 },
    { L"Extra 4", 0x1bc890, 0x1bc8b0 },
    { L"Extra 5", 0x1bc8b0, 0x1bc8d0 },
    { L"Extra 6", 0x1bc8d0, 0x1bc8f0 },
    { L"Extra 7", 0x1bc8f0, 0x1bc910 },
    { L"Extra 8", 0x1bc910, 0x1bc930 },
    { L"Extra 9", 0x1bc930, 0x1bc950 },
    { L"Extra 10", 0x1bc950, 0x1bc970 },
    { L"Extra 11", 0x1bc970, 0x1bc990 },
    { L"Extra 12", 0x1bc990, 0x1bc9b0 },
    { L"Order Select", 0x1bc9b0, 0x1bc9d0 },
    { L"Life Bar Portrait", 0x1bc9d0, 0x1bc9f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Eiji_B[] =
{
    { L"Eiji B - Main", 0x1bc9f0, 0x1bca10 },
    { L"Extra 1", 0x1bca10, 0x1bca30 },
    { L"Extra 2", 0x1bca30, 0x1bca50 },
    { L"Max Mode", 0x1bca50, 0x1bca70 },
    { L"Extra 3", 0x1bca70, 0x1bca90 },
    { L"Extra 4", 0x1bca90, 0x1bcab0 },
    { L"Extra 5", 0x1bcab0, 0x1bcad0 },
    { L"Extra 6", 0x1bcad0, 0x1bcaf0 },
    { L"Extra 7", 0x1bcaf0, 0x1bcb10 },
    { L"Extra 8", 0x1bcb10, 0x1bcb30 },
    { L"Extra 9", 0x1bcb30, 0x1bcb50 },
    { L"Extra 10", 0x1bcb50, 0x1bcb70 },
    { L"Extra 11", 0x1bcb70, 0x1bcb90 },
    { L"Extra 12", 0x1bcb90, 0x1bcbb0 },
    { L"Order Select", 0x1bcbb0, 0x1bcbd0 },
    { L"Life Bar Portrait", 0x1bcbd0, 0x1bcbf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Eiji_C[] =
{
    { L"Eiji C - Main", 0x1bcbf0, 0x1bcc10 },
    { L"Extra 1", 0x1bcc10, 0x1bcc30 },
    { L"Extra 2", 0x1bcc30, 0x1bcc50 },
    { L"Max Mode", 0x1bcc50, 0x1bcc70 },
    { L"Extra 3", 0x1bcc70, 0x1bcc90 },
    { L"Extra 4", 0x1bcc90, 0x1bccb0 },
    { L"Extra 5", 0x1bccb0, 0x1bccd0 },
    { L"Extra 6", 0x1bccd0, 0x1bccf0 },
    { L"Extra 7", 0x1bccf0, 0x1bcd10 },
    { L"Extra 8", 0x1bcd10, 0x1bcd30 },
    { L"Extra 9", 0x1bcd30, 0x1bcd50 },
    { L"Extra 10", 0x1bcd50, 0x1bcd70 },
    { L"Extra 11", 0x1bcd70, 0x1bcd90 },
    { L"Extra 12", 0x1bcd90, 0x1bcdb0 },
    { L"Order Select", 0x1bcdb0, 0x1bcdd0 },
    { L"Life Bar Portrait", 0x1bcdd0, 0x1bcdf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_Eiji_D[] =
{
    { L"Eiji D - Main", 0x1bcdf0, 0x1bce10 },
    { L"Extra 1", 0x1bce10, 0x1bce30 },
    { L"Extra 2", 0x1bce30, 0x1bce50 },
    { L"Max Mode", 0x1bce50, 0x1bce70 },
    { L"Extra 3", 0x1bce70, 0x1bce90 },
    { L"Extra 4", 0x1bce90, 0x1bceb0 },
    { L"Extra 5", 0x1bceb0, 0x1bced0 },
    { L"Extra 6", 0x1bced0, 0x1bcef0 },
    { L"Extra 7", 0x1bcef0, 0x1bcf10 },
    { L"Extra 8", 0x1bcf10, 0x1bcf30 },
    { L"Extra 9", 0x1bcf30, 0x1bcf50 },
    { L"Extra 10", 0x1bcf50, 0x1bcf70 },
    { L"Extra 11", 0x1bcf70, 0x1bcf90 },
    { L"Extra 12", 0x1bcf90, 0x1bcfb0 },
    { L"Order Select", 0x1bcfb0, 0x1bcfd0 },
    { L"Life Bar Portrait", 0x1bcfd0, 0x1bcff0 },

};

const sGame_PaletteDataset KOF98AE2016_A_RobertEX_A[] =
{
    { L"Robert (EX) A - Main", 0x1bcff0, 0x1bd010, indexKOFSprites_02Robert },
    { L"Extra 1", 0x1bd010, 0x1bd030 },
    { L"Extra 2", 0x1bd030, 0x1bd050 },
    { L"Max Mode", 0x1bd050, 0x1bd070, indexKOFSprites_02Robert },
    { L"Extra 3", 0x1bd070, 0x1bd090 },
    { L"Extra 4", 0x1bd090, 0x1bd0b0 },
    { L"Extra 5", 0x1bd0b0, 0x1bd0d0 },
    { L"Extra 6", 0x1bd0d0, 0x1bd0f0 },
    { L"Extra 7", 0x1bd0f0, 0x1bd110 },
    { L"Extra 8", 0x1bd110, 0x1bd130 },
    { L"Extra 9", 0x1bd130, 0x1bd150 },
    { L"Extra 10", 0x1bd150, 0x1bd170 },
    { L"Extra 11", 0x1bd170, 0x1bd190 },
    { L"Extra 12", 0x1bd190, 0x1bd1b0 },
    { L"Extra 13", 0x1bd1b0, 0x1bd1d0 },
    { L"Extra 14", 0x1bd1d0, 0x1bd1f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_RobertEX_B[] =
{
    { L"Robert (EX) B - Main", 0x1bd1f0, 0x1bd210, indexKOFSprites_02Robert },
    { L"Extra 1", 0x1bd210, 0x1bd230 },
    { L"Extra 2", 0x1bd230, 0x1bd250 },
    { L"Max Mode", 0x1bd250, 0x1bd270, indexKOFSprites_02Robert },
    { L"Extra 3", 0x1bd270, 0x1bd290 },
    { L"Extra 4", 0x1bd290, 0x1bd2b0 },
    { L"Extra 5", 0x1bd2b0, 0x1bd2d0 },
    { L"Extra 6", 0x1bd2d0, 0x1bd2f0 },
    { L"Extra 7", 0x1bd2f0, 0x1bd310 },
    { L"Extra 8", 0x1bd310, 0x1bd330 },
    { L"Extra 9", 0x1bd330, 0x1bd350 },
    { L"Extra 10", 0x1bd350, 0x1bd370 },
    { L"Extra 11", 0x1bd370, 0x1bd390 },
    { L"Extra 12", 0x1bd390, 0x1bd3b0 },
    { L"Extra 13", 0x1bd3b0, 0x1bd3d0 },
    { L"Extra 14", 0x1bd3d0, 0x1bd3f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_RobertEX_C[] =
{
    { L"Robert (EX) C - Main", 0x1bd3f0, 0x1bd410, indexKOFSprites_02Robert },
    { L"Extra 1", 0x1bd410, 0x1bd430 },
    { L"Extra 2", 0x1bd430, 0x1bd450 },
    { L"Max Mode", 0x1bd450, 0x1bd470, indexKOFSprites_02Robert },
    { L"Extra 3", 0x1bd470, 0x1bd490 },
    { L"Extra 4", 0x1bd490, 0x1bd4b0 },
    { L"Extra 5", 0x1bd4b0, 0x1bd4d0 },
    { L"Extra 6", 0x1bd4d0, 0x1bd4f0 },
    { L"Extra 7", 0x1bd4f0, 0x1bd510 },
    { L"Extra 8", 0x1bd510, 0x1bd530 },
    { L"Extra 9", 0x1bd530, 0x1bd550 },
    { L"Extra 10", 0x1bd550, 0x1bd570 },
    { L"Extra 11", 0x1bd570, 0x1bd590 },
    { L"Extra 12", 0x1bd590, 0x1bd5b0 },
    { L"Extra 13", 0x1bd5b0, 0x1bd5d0 },
    { L"Extra 14", 0x1bd5d0, 0x1bd5f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_RobertEX_D[] =
{
    { L"Robert (EX) D - Main", 0x1bd5f0, 0x1bd610, indexKOFSprites_02Robert },
    { L"Extra 1", 0x1bd610, 0x1bd630 },
    { L"Extra 2", 0x1bd630, 0x1bd650 },
    { L"Max Mode", 0x1bd650, 0x1bd670, indexKOFSprites_02Robert },
    { L"Extra 3", 0x1bd670, 0x1bd690 },
    { L"Extra 4", 0x1bd690, 0x1bd6b0 },
    { L"Extra 5", 0x1bd6b0, 0x1bd6d0 },
    { L"Extra 6", 0x1bd6d0, 0x1bd6f0 },
    { L"Extra 7", 0x1bd6f0, 0x1bd710 },
    { L"Extra 8", 0x1bd710, 0x1bd730 },
    { L"Extra 9", 0x1bd730, 0x1bd750 },
    { L"Extra 10", 0x1bd750, 0x1bd770 },
    { L"Extra 11", 0x1bd770, 0x1bd790 },
    { L"Extra 12", 0x1bd790, 0x1bd7b0 },
    { L"Extra 13", 0x1bd7b0, 0x1bd7d0 },
    { L"Extra 14", 0x1bd7d0, 0x1bd7f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_OIori_A[] =
{
    { L"O.Iori A - Main", 0x1bd7f0, 0x1bd810, indexKOF97Sprites_IoriOrochi},
    { L"Extra 1", 0x1bd810, 0x1bd830 },
    { L"Extra 2", 0x1bd830, 0x1bd850 },
    { L"Max Mode", 0x1bd850, 0x1bd870, indexKOF97Sprites_IoriOrochi},
    { L"Extra 3", 0x1bd870, 0x1bd890 },
    { L"Extra 4", 0x1bd890, 0x1bd8b0 },
    { L"Extra 5", 0x1bd8b0, 0x1bd8d0 },
    { L"Extra 6", 0x1bd8d0, 0x1bd8f0 },
    { L"Extra 7", 0x1bd8f0, 0x1bd910 },
    { L"Extra 8", 0x1bd910, 0x1bd930 },
    { L"Extra 9", 0x1bd930, 0x1bd950 },
    { L"Extra 10", 0x1bd950, 0x1bd970 },
    { L"Extra 11", 0x1bd970, 0x1bd990 },
    { L"Extra 12", 0x1bd990, 0x1bd9b0 },
    { L"Order Select", 0x1bd9b0, 0x1bd9d0 },
    { L"Life Bar Portrait", 0x1bd9d0, 0x1bd9f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_OIori_B[] =
{
    { L"O.Iori B - Main", 0x1bd9f0, 0x1bda10, indexKOF97Sprites_IoriOrochi},
    { L"Extra 1", 0x1bda10, 0x1bda30 },
    { L"Extra 2", 0x1bda30, 0x1bda50 },
    { L"Max Mode", 0x1bda50, 0x1bda70, indexKOF97Sprites_IoriOrochi},
    { L"Extra 3", 0x1bda70, 0x1bda90 },
    { L"Extra 4", 0x1bda90, 0x1bdab0 },
    { L"Extra 5", 0x1bdab0, 0x1bdad0 },
    { L"Extra 6", 0x1bdad0, 0x1bdaf0 },
    { L"Extra 7", 0x1bdaf0, 0x1bdb10 },
    { L"Extra 8", 0x1bdb10, 0x1bdb30 },
    { L"Extra 9", 0x1bdb30, 0x1bdb50 },
    { L"Extra 10", 0x1bdb50, 0x1bdb70 },
    { L"Extra 11", 0x1bdb70, 0x1bdb90 },
    { L"Extra 12", 0x1bdb90, 0x1bdbb0 },
    { L"Order Select", 0x1bdbb0, 0x1bdbd0 },
    { L"Life Bar Portrait", 0x1bdbd0, 0x1bdbf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_OIori_C[] =
{
    { L"O.Iori C - Main", 0x1bdbf0, 0x1bdc10, indexKOF97Sprites_IoriOrochi},
    { L"Extra 1", 0x1bdc10, 0x1bdc30 },
    { L"Extra 2", 0x1bdc30, 0x1bdc50 },
    { L"Max Mode", 0x1bdc50, 0x1bdc70, indexKOF97Sprites_IoriOrochi},
    { L"Extra 3", 0x1bdc70, 0x1bdc90 },
    { L"Extra 4", 0x1bdc90, 0x1bdcb0 },
    { L"Extra 5", 0x1bdcb0, 0x1bdcd0 },
    { L"Extra 6", 0x1bdcd0, 0x1bdcf0 },
    { L"Extra 7", 0x1bdcf0, 0x1bdd10 },
    { L"Extra 8", 0x1bdd10, 0x1bdd30 },
    { L"Extra 9", 0x1bdd30, 0x1bdd50 },
    { L"Extra 10", 0x1bdd50, 0x1bdd70 },
    { L"Extra 11", 0x1bdd70, 0x1bdd90 },
    { L"Extra 12", 0x1bdd90, 0x1bddb0 },
    { L"Order Select", 0x1bddb0, 0x1bddd0 },
    { L"Life Bar Portrait", 0x1bddd0, 0x1bddf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_OIori_D[] =
{
    { L"O.Iori D - Main", 0x1bddf0, 0x1bde10, indexKOF97Sprites_IoriOrochi},
    { L"Extra 1", 0x1bde10, 0x1bde30 },
    { L"Extra 2", 0x1bde30, 0x1bde50 },
    { L"Max Mode", 0x1bde50, 0x1bde70, indexKOF97Sprites_IoriOrochi},
    { L"Extra 3", 0x1bde70, 0x1bde90 },
    { L"Extra 4", 0x1bde90, 0x1bdeb0 },
    { L"Extra 5", 0x1bdeb0, 0x1bded0 },
    { L"Extra 6", 0x1bded0, 0x1bdef0 },
    { L"Extra 7", 0x1bdef0, 0x1bdf10 },
    { L"Extra 8", 0x1bdf10, 0x1bdf30 },
    { L"Extra 9", 0x1bdf30, 0x1bdf50 },
    { L"Extra 10", 0x1bdf50, 0x1bdf70 },
    { L"Extra 11", 0x1bdf70, 0x1bdf90 },
    { L"Extra 12", 0x1bdf90, 0x1bdfb0 },
    { L"Order Select", 0x1bdfb0, 0x1bdfd0 },
    { L"Life Bar Portrait", 0x1bdfd0, 0x1bdff0 },

};

const sGame_PaletteDataset KOF98AE2016_A_OLeona_A[] =
{
    { L"O.Leona A - Main", 0x1bdff0, 0x1be010, indexKOF97Sprites_LeonaOrochi },
    { L"Extra 1", 0x1be010, 0x1be030 },
    { L"Extra 2", 0x1be030, 0x1be050 },
    { L"Max Mode", 0x1be050, 0x1be070, indexKOF97Sprites_LeonaOrochi },
    { L"Extra 3", 0x1be070, 0x1be090 },
    { L"Extra 4", 0x1be090, 0x1be0b0 },
    { L"Extra 5", 0x1be0b0, 0x1be0d0 },
    { L"Extra 6", 0x1be0d0, 0x1be0f0 },
    { L"Extra 7", 0x1be0f0, 0x1be110 },
    { L"Extra 8", 0x1be110, 0x1be130 },
    { L"Extra 9", 0x1be130, 0x1be150 },
    { L"Extra 10", 0x1be150, 0x1be170 },
    { L"Extra 11", 0x1be170, 0x1be190 },
    { L"Extra 12", 0x1be190, 0x1be1b0 },
    { L"Order Select", 0x1be1b0, 0x1be1d0 },
    { L"Life Bar Portrait", 0x1be1d0, 0x1be1f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_OLeona_B[] =
{
    { L"O.Leona B - Main", 0x1be1f0, 0x1be210, indexKOF97Sprites_LeonaOrochi },
    { L"Extra 1", 0x1be210, 0x1be230 },
    { L"Extra 2", 0x1be230, 0x1be250 },
    { L"Max Mode", 0x1be250, 0x1be270, indexKOF97Sprites_LeonaOrochi },
    { L"Extra 3", 0x1be270, 0x1be290 },
    { L"Extra 4", 0x1be290, 0x1be2b0 },
    { L"Extra 5", 0x1be2b0, 0x1be2d0 },
    { L"Extra 6", 0x1be2d0, 0x1be2f0 },
    { L"Extra 7", 0x1be2f0, 0x1be310 },
    { L"Extra 8", 0x1be310, 0x1be330 },
    { L"Extra 9", 0x1be330, 0x1be350 },
    { L"Extra 10", 0x1be350, 0x1be370 },
    { L"Extra 11", 0x1be370, 0x1be390 },
    { L"Extra 12", 0x1be390, 0x1be3b0 },
    { L"Order Select", 0x1be3b0, 0x1be3d0 },
    { L"Life Bar Portrait", 0x1be3d0, 0x1be3f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_OLeona_C[] =
{
    { L"O.Leona C - Main", 0x1be3f0, 0x1be410, indexKOF97Sprites_LeonaOrochi },
    { L"Extra 1", 0x1be410, 0x1be430 },
    { L"Extra 2", 0x1be430, 0x1be450 },
    { L"Max Mode", 0x1be450, 0x1be470, indexKOF97Sprites_LeonaOrochi },
    { L"Extra 3", 0x1be470, 0x1be490 },
    { L"Extra 4", 0x1be490, 0x1be4b0 },
    { L"Extra 5", 0x1be4b0, 0x1be4d0 },
    { L"Extra 6", 0x1be4d0, 0x1be4f0 },
    { L"Extra 7", 0x1be4f0, 0x1be510 },
    { L"Extra 8", 0x1be510, 0x1be530 },
    { L"Extra 9", 0x1be530, 0x1be550 },
    { L"Extra 10", 0x1be550, 0x1be570 },
    { L"Extra 11", 0x1be570, 0x1be590 },
    { L"Extra 12", 0x1be590, 0x1be5b0 },
    { L"Order Select", 0x1be5b0, 0x1be5d0 },
    { L"Life Bar Portrait", 0x1be5d0, 0x1be5f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_OLeona_D[] =
{
    { L"O.Leona D - Main", 0x1be5f0, 0x1be610, indexKOF97Sprites_LeonaOrochi },
    { L"Extra 1", 0x1be610, 0x1be630 },
    { L"Extra 2", 0x1be630, 0x1be650 },
    { L"Max Mode", 0x1be650, 0x1be670, indexKOF97Sprites_LeonaOrochi },
    { L"Extra 3", 0x1be670, 0x1be690 },
    { L"Extra 4", 0x1be690, 0x1be6b0 },
    { L"Extra 5", 0x1be6b0, 0x1be6d0 },
    { L"Extra 6", 0x1be6d0, 0x1be6f0 },
    { L"Extra 7", 0x1be6f0, 0x1be710 },
    { L"Extra 8", 0x1be710, 0x1be730 },
    { L"Extra 9", 0x1be730, 0x1be750 },
    { L"Extra 10", 0x1be750, 0x1be770 },
    { L"Extra 11", 0x1be770, 0x1be790 },
    { L"Extra 12", 0x1be790, 0x1be7b0 },
    { L"Order Select", 0x1be7b0, 0x1be7d0 },
    { L"Life Bar Portrait", 0x1be7d0, 0x1be7f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_KyoEX_A[] =
{
    { L"Kyo (EX) A - Main", 0x1be7f0, 0x1be810, indexKOFSprites_98Kyo  },
    { L"Extra 1", 0x1be810, 0x1be830 },
    { L"Extra 2", 0x1be830, 0x1be850 },
    { L"Max Mode", 0x1be850, 0x1be870, indexKOFSprites_98Kyo  },
    { L"Extra 3", 0x1be870, 0x1be890 },
    { L"Extra 4", 0x1be890, 0x1be8b0 },
    { L"Order Select", 0x1be8b0, 0x1be8d0 },
    { L"Life Bar Portrait", 0x1be8d0, 0x1be8f0 },
    { L"Win Screen Portrait", 0x1be8f0, 0x1be9f0 },

};

const sGame_PaletteDataset KOF98AE2016_A_KyoEX_B[] =
{
    { L"Kyo (EX) B - Main", 0x1be9f0, 0x1bea10, indexKOFSprites_98Kyo },
    { L"Extra 1", 0x1bea10, 0x1bea30 },
    { L"Extra 2", 0x1bea30, 0x1bea50 },
    { L"Max Mode", 0x1bea50, 0x1bea70, indexKOFSprites_98Kyo },
    { L"Extra 3", 0x1bea70, 0x1bea90 },
    { L"Extra 4", 0x1bea90, 0x1beab0 },
    { L"Order Select", 0x1beab0, 0x1bead0 },
    { L"Life Bar Portrait", 0x1bead0, 0x1beaf0 },
    { L"Win Screen Portrait", 0x1beaf0, 0x1bebf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_KyoEX_C[] =
{
    { L"Kyo (EX) C - Main", 0x1bebf0, 0x1bec10, indexKOFSprites_98Kyo },
    { L"Extra 1", 0x1bec10, 0x1bec30 },
    { L"Extra 2", 0x1bec30, 0x1bec50 },
    { L"Max Mode", 0x1bec50, 0x1bec70, indexKOFSprites_98Kyo },
    { L"Extra 3", 0x1bec70, 0x1bec90 },
    { L"Extra 4", 0x1bec90, 0x1becb0 },
    { L"Order Select", 0x1becb0, 0x1becd0 },
    { L"Life Bar Portrait", 0x1becd0, 0x1becf0 },
    { L"Win Screen Portrait", 0x1becf0, 0x1bedf0 },

};

const sGame_PaletteDataset KOF98AE2016_A_KyoEX_D[] =
{
    { L"Kyo (EX) D - Main", 0x1bedf0, 0x1bee10, indexKOFSprites_98Kyo },
    { L"Extra 1", 0x1bee10, 0x1bee30 },
    { L"Extra 2", 0x1bee30, 0x1bee50 },
    { L"Max Mode", 0x1bee50, 0x1bee70, indexKOFSprites_98Kyo },
    { L"Extra 3", 0x1bee70, 0x1bee90 },
    { L"Extra 4", 0x1bee90, 0x1beeb0 },
    { L"Order Select", 0x1beeb0, 0x1beed0 },
    { L"Life Bar Portrait", 0x1beed0, 0x1beef0 },
    { L"Win Screen Portrait", 0x1beef0, 0x1beff0 },


};

const sDescTreeNode KOF98AE2016_A_Kyo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kyo_A, ARRAYSIZE(KOF98AE2016_A_Kyo_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kyo_B, ARRAYSIZE(KOF98AE2016_A_Kyo_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kyo_C, ARRAYSIZE(KOF98AE2016_A_Kyo_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kyo_D, ARRAYSIZE(KOF98AE2016_A_Kyo_D) },
};

const sDescTreeNode KOF98AE2016_A_Benimaru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Benimaru_A, ARRAYSIZE(KOF98AE2016_A_Benimaru_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Benimaru_B, ARRAYSIZE(KOF98AE2016_A_Benimaru_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Benimaru_C, ARRAYSIZE(KOF98AE2016_A_Benimaru_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Benimaru_D, ARRAYSIZE(KOF98AE2016_A_Benimaru_D) },
};

const sDescTreeNode KOF98AE2016_A_Daimon_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Daimon_A, ARRAYSIZE(KOF98AE2016_A_Daimon_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Daimon_B, ARRAYSIZE(KOF98AE2016_A_Daimon_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Daimon_C, ARRAYSIZE(KOF98AE2016_A_Daimon_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Daimon_D, ARRAYSIZE(KOF98AE2016_A_Daimon_D) },
};

const sDescTreeNode KOF98AE2016_A_Terry_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Terry_A, ARRAYSIZE(KOF98AE2016_A_Terry_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Terry_B, ARRAYSIZE(KOF98AE2016_A_Terry_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Terry_C, ARRAYSIZE(KOF98AE2016_A_Terry_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Terry_D, ARRAYSIZE(KOF98AE2016_A_Terry_D) },
};

const sDescTreeNode KOF98AE2016_A_Andy_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Andy_A, ARRAYSIZE(KOF98AE2016_A_Andy_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Andy_B, ARRAYSIZE(KOF98AE2016_A_Andy_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Andy_C, ARRAYSIZE(KOF98AE2016_A_Andy_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Andy_D, ARRAYSIZE(KOF98AE2016_A_Andy_D) },
};

const sDescTreeNode KOF98AE2016_A_Joe_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Joe_A, ARRAYSIZE(KOF98AE2016_A_Joe_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Joe_B, ARRAYSIZE(KOF98AE2016_A_Joe_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Joe_C, ARRAYSIZE(KOF98AE2016_A_Joe_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Joe_D, ARRAYSIZE(KOF98AE2016_A_Joe_D) },
};

const sDescTreeNode KOF98AE2016_A_Ryo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Ryo_A, ARRAYSIZE(KOF98AE2016_A_Ryo_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Ryo_B, ARRAYSIZE(KOF98AE2016_A_Ryo_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Ryo_C, ARRAYSIZE(KOF98AE2016_A_Ryo_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Ryo_D, ARRAYSIZE(KOF98AE2016_A_Ryo_D) },
};

const sDescTreeNode KOF98AE2016_A_Robert_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Robert_A, ARRAYSIZE(KOF98AE2016_A_Robert_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Robert_B, ARRAYSIZE(KOF98AE2016_A_Robert_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Robert_C, ARRAYSIZE(KOF98AE2016_A_Robert_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Robert_D, ARRAYSIZE(KOF98AE2016_A_Robert_D) },
};

const sDescTreeNode KOF98AE2016_A_Yuri_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yuri_A, ARRAYSIZE(KOF98AE2016_A_Yuri_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yuri_B, ARRAYSIZE(KOF98AE2016_A_Yuri_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yuri_C, ARRAYSIZE(KOF98AE2016_A_Yuri_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yuri_D, ARRAYSIZE(KOF98AE2016_A_Yuri_D) },
};

const sDescTreeNode KOF98AE2016_A_Leona_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Leona_A, ARRAYSIZE(KOF98AE2016_A_Leona_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Leona_B, ARRAYSIZE(KOF98AE2016_A_Leona_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Leona_C, ARRAYSIZE(KOF98AE2016_A_Leona_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Leona_D, ARRAYSIZE(KOF98AE2016_A_Leona_D) },
};

const sDescTreeNode KOF98AE2016_A_Ralf_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Ralf_A, ARRAYSIZE(KOF98AE2016_A_Ralf_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Ralf_B, ARRAYSIZE(KOF98AE2016_A_Ralf_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Ralf_C, ARRAYSIZE(KOF98AE2016_A_Ralf_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Ralf_D, ARRAYSIZE(KOF98AE2016_A_Ralf_D) },
};

const sDescTreeNode KOF98AE2016_A_Clark_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Clark_A, ARRAYSIZE(KOF98AE2016_A_Clark_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Clark_B, ARRAYSIZE(KOF98AE2016_A_Clark_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Clark_C, ARRAYSIZE(KOF98AE2016_A_Clark_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Clark_D, ARRAYSIZE(KOF98AE2016_A_Clark_D) },
};

const sDescTreeNode KOF98AE2016_A_Athena_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Athena_A, ARRAYSIZE(KOF98AE2016_A_Athena_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Athena_B, ARRAYSIZE(KOF98AE2016_A_Athena_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Athena_C, ARRAYSIZE(KOF98AE2016_A_Athena_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Athena_D, ARRAYSIZE(KOF98AE2016_A_Athena_D) },
};

const sDescTreeNode KOF98AE2016_A_Kensou_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kensou_A, ARRAYSIZE(KOF98AE2016_A_Kensou_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kensou_B, ARRAYSIZE(KOF98AE2016_A_Kensou_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kensou_C, ARRAYSIZE(KOF98AE2016_A_Kensou_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kensou_D, ARRAYSIZE(KOF98AE2016_A_Kensou_D) },
};

const sDescTreeNode KOF98AE2016_A_Chin_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chin_A, ARRAYSIZE(KOF98AE2016_A_Chin_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chin_B, ARRAYSIZE(KOF98AE2016_A_Chin_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chin_C, ARRAYSIZE(KOF98AE2016_A_Chin_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chin_D, ARRAYSIZE(KOF98AE2016_A_Chin_D) },
};

const sDescTreeNode KOF98AE2016_A_Chizuru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chizuru_A, ARRAYSIZE(KOF98AE2016_A_Chizuru_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chizuru_B, ARRAYSIZE(KOF98AE2016_A_Chizuru_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chizuru_C, ARRAYSIZE(KOF98AE2016_A_Chizuru_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chizuru_D, ARRAYSIZE(KOF98AE2016_A_Chizuru_D) },
};

const sDescTreeNode KOF98AE2016_A_Mai_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Mai_A, ARRAYSIZE(KOF98AE2016_A_Mai_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Mai_B, ARRAYSIZE(KOF98AE2016_A_Mai_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Mai_C, ARRAYSIZE(KOF98AE2016_A_Mai_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Mai_D, ARRAYSIZE(KOF98AE2016_A_Mai_D) },
};

const sDescTreeNode KOF98AE2016_A_King_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_King_A, ARRAYSIZE(KOF98AE2016_A_King_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_King_B, ARRAYSIZE(KOF98AE2016_A_King_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_King_C, ARRAYSIZE(KOF98AE2016_A_King_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_King_D, ARRAYSIZE(KOF98AE2016_A_King_D) },
};

const sDescTreeNode KOF98AE2016_A_Kim_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kim_A, ARRAYSIZE(KOF98AE2016_A_Kim_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kim_B, ARRAYSIZE(KOF98AE2016_A_Kim_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kim_C, ARRAYSIZE(KOF98AE2016_A_Kim_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kim_D, ARRAYSIZE(KOF98AE2016_A_Kim_D) },
};

const sDescTreeNode KOF98AE2016_A_Chang_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chang_A, ARRAYSIZE(KOF98AE2016_A_Chang_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chang_B, ARRAYSIZE(KOF98AE2016_A_Chang_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chang_C, ARRAYSIZE(KOF98AE2016_A_Chang_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chang_D, ARRAYSIZE(KOF98AE2016_A_Chang_D) },
};

const sDescTreeNode KOF98AE2016_A_Choi_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Choi_A, ARRAYSIZE(KOF98AE2016_A_Choi_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Choi_B, ARRAYSIZE(KOF98AE2016_A_Choi_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Choi_C, ARRAYSIZE(KOF98AE2016_A_Choi_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Choi_D, ARRAYSIZE(KOF98AE2016_A_Choi_D) },
};

const sDescTreeNode KOF98AE2016_A_Yashiro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yashiro_A, ARRAYSIZE(KOF98AE2016_A_Yashiro_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yashiro_B, ARRAYSIZE(KOF98AE2016_A_Yashiro_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yashiro_C, ARRAYSIZE(KOF98AE2016_A_Yashiro_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yashiro_D, ARRAYSIZE(KOF98AE2016_A_Yashiro_D) },
};

const sDescTreeNode KOF98AE2016_A_Shermie_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Shermie_A, ARRAYSIZE(KOF98AE2016_A_Shermie_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Shermie_B, ARRAYSIZE(KOF98AE2016_A_Shermie_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Shermie_C, ARRAYSIZE(KOF98AE2016_A_Shermie_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Shermie_D, ARRAYSIZE(KOF98AE2016_A_Shermie_D) },
};

const sDescTreeNode KOF98AE2016_A_Chris_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chris_A, ARRAYSIZE(KOF98AE2016_A_Chris_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chris_B, ARRAYSIZE(KOF98AE2016_A_Chris_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chris_C, ARRAYSIZE(KOF98AE2016_A_Chris_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chris_D, ARRAYSIZE(KOF98AE2016_A_Chris_D) },
};

const sDescTreeNode KOF98AE2016_A_Yamazaki_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yamazaki_A, ARRAYSIZE(KOF98AE2016_A_Yamazaki_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yamazaki_B, ARRAYSIZE(KOF98AE2016_A_Yamazaki_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yamazaki_C, ARRAYSIZE(KOF98AE2016_A_Yamazaki_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yamazaki_D, ARRAYSIZE(KOF98AE2016_A_Yamazaki_D) },
};

const sDescTreeNode KOF98AE2016_A_BlueMary_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_BlueMary_A, ARRAYSIZE(KOF98AE2016_A_BlueMary_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_BlueMary_B, ARRAYSIZE(KOF98AE2016_A_BlueMary_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_BlueMary_C, ARRAYSIZE(KOF98AE2016_A_BlueMary_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_BlueMary_D, ARRAYSIZE(KOF98AE2016_A_BlueMary_D) },
};

const sDescTreeNode KOF98AE2016_A_Billy_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Billy_A, ARRAYSIZE(KOF98AE2016_A_Billy_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Billy_B, ARRAYSIZE(KOF98AE2016_A_Billy_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Billy_C, ARRAYSIZE(KOF98AE2016_A_Billy_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Billy_D, ARRAYSIZE(KOF98AE2016_A_Billy_D) },
};

const sDescTreeNode KOF98AE2016_A_Iori_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Iori_A, ARRAYSIZE(KOF98AE2016_A_Iori_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Iori_B, ARRAYSIZE(KOF98AE2016_A_Iori_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Iori_C, ARRAYSIZE(KOF98AE2016_A_Iori_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Iori_D, ARRAYSIZE(KOF98AE2016_A_Iori_D) },
};

const sDescTreeNode KOF98AE2016_A_Mature_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Mature_A, ARRAYSIZE(KOF98AE2016_A_Mature_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Mature_B, ARRAYSIZE(KOF98AE2016_A_Mature_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Mature_C, ARRAYSIZE(KOF98AE2016_A_Mature_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Mature_D, ARRAYSIZE(KOF98AE2016_A_Mature_D) },
};

const sDescTreeNode KOF98AE2016_A_Vice_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Vice_A, ARRAYSIZE(KOF98AE2016_A_Vice_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Vice_B, ARRAYSIZE(KOF98AE2016_A_Vice_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Vice_C, ARRAYSIZE(KOF98AE2016_A_Vice_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Vice_D, ARRAYSIZE(KOF98AE2016_A_Vice_D) },
};

const sDescTreeNode KOF98AE2016_A_Heidern_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Heidern_A, ARRAYSIZE(KOF98AE2016_A_Heidern_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Heidern_B, ARRAYSIZE(KOF98AE2016_A_Heidern_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Heidern_C, ARRAYSIZE(KOF98AE2016_A_Heidern_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Heidern_D, ARRAYSIZE(KOF98AE2016_A_Heidern_D) },
};

const sDescTreeNode KOF98AE2016_A_Takuma_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Takuma_A, ARRAYSIZE(KOF98AE2016_A_Takuma_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Takuma_B, ARRAYSIZE(KOF98AE2016_A_Takuma_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Takuma_C, ARRAYSIZE(KOF98AE2016_A_Takuma_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Takuma_D, ARRAYSIZE(KOF98AE2016_A_Takuma_D) },
};

const sDescTreeNode KOF98AE2016_A_Saisyu_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Saisyu_A, ARRAYSIZE(KOF98AE2016_A_Saisyu_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Saisyu_B, ARRAYSIZE(KOF98AE2016_A_Saisyu_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Saisyu_C, ARRAYSIZE(KOF98AE2016_A_Saisyu_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Saisyu_D, ARRAYSIZE(KOF98AE2016_A_Saisyu_D) },
};

const sDescTreeNode KOF98AE2016_A_HeavyD_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_HeavyD_A, ARRAYSIZE(KOF98AE2016_A_HeavyD_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_HeavyD_B, ARRAYSIZE(KOF98AE2016_A_HeavyD_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_HeavyD_C, ARRAYSIZE(KOF98AE2016_A_HeavyD_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_HeavyD_D, ARRAYSIZE(KOF98AE2016_A_HeavyD_D) },
};

const sDescTreeNode KOF98AE2016_A_Lucky_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Lucky_A, ARRAYSIZE(KOF98AE2016_A_Lucky_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Lucky_B, ARRAYSIZE(KOF98AE2016_A_Lucky_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Lucky_C, ARRAYSIZE(KOF98AE2016_A_Lucky_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Lucky_D, ARRAYSIZE(KOF98AE2016_A_Lucky_D) },
};

const sDescTreeNode KOF98AE2016_A_Brian_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Brian_A, ARRAYSIZE(KOF98AE2016_A_Brian_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Brian_B, ARRAYSIZE(KOF98AE2016_A_Brian_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Brian_C, ARRAYSIZE(KOF98AE2016_A_Brian_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Brian_D, ARRAYSIZE(KOF98AE2016_A_Brian_D) },
};

const sDescTreeNode KOF98AE2016_A_Rugal_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Rugal_A, ARRAYSIZE(KOF98AE2016_A_Rugal_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Rugal_B, ARRAYSIZE(KOF98AE2016_A_Rugal_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Rugal_C, ARRAYSIZE(KOF98AE2016_A_Rugal_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Rugal_D, ARRAYSIZE(KOF98AE2016_A_Rugal_D) },
};

const sDescTreeNode KOF98AE2016_A_Shingo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Shingo_A, ARRAYSIZE(KOF98AE2016_A_Shingo_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Shingo_B, ARRAYSIZE(KOF98AE2016_A_Shingo_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Shingo_C, ARRAYSIZE(KOF98AE2016_A_Shingo_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Shingo_D, ARRAYSIZE(KOF98AE2016_A_Shingo_D) },
};

const sDescTreeNode KOF98AE2016_A_OYashiro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OYashiro_A, ARRAYSIZE(KOF98AE2016_A_OYashiro_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OYashiro_B, ARRAYSIZE(KOF98AE2016_A_OYashiro_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OYashiro_C, ARRAYSIZE(KOF98AE2016_A_OYashiro_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OYashiro_D, ARRAYSIZE(KOF98AE2016_A_OYashiro_D) },
};

const sDescTreeNode KOF98AE2016_A_OShermie_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OShermie_A, ARRAYSIZE(KOF98AE2016_A_OShermie_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OShermie_B, ARRAYSIZE(KOF98AE2016_A_OShermie_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OShermie_C, ARRAYSIZE(KOF98AE2016_A_OShermie_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OShermie_D, ARRAYSIZE(KOF98AE2016_A_OShermie_D) },
};

const sDescTreeNode KOF98AE2016_A_OChris_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OChris_A, ARRAYSIZE(KOF98AE2016_A_OChris_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OChris_B, ARRAYSIZE(KOF98AE2016_A_OChris_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OChris_C, ARRAYSIZE(KOF98AE2016_A_OChris_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OChris_D, ARRAYSIZE(KOF98AE2016_A_OChris_D) },
};

const sDescTreeNode KOF98AE2016_A_OmegaRugal_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OmegaRugal_A, ARRAYSIZE(KOF98AE2016_A_OmegaRugal_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OmegaRugal_B, ARRAYSIZE(KOF98AE2016_A_OmegaRugal_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OmegaRugal_C, ARRAYSIZE(KOF98AE2016_A_OmegaRugal_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OmegaRugal_D, ARRAYSIZE(KOF98AE2016_A_OmegaRugal_D) },
};

const sDescTreeNode KOF98AE2016_A_Goenitz_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Goenitz_A, ARRAYSIZE(KOF98AE2016_A_Goenitz_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Goenitz_B, ARRAYSIZE(KOF98AE2016_A_Goenitz_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Goenitz_C, ARRAYSIZE(KOF98AE2016_A_Goenitz_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Goenitz_D, ARRAYSIZE(KOF98AE2016_A_Goenitz_D) },
};

const sDescTreeNode KOF98AE2016_A_Geese_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Geese_A, ARRAYSIZE(KOF98AE2016_A_Geese_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Geese_B, ARRAYSIZE(KOF98AE2016_A_Geese_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Geese_C, ARRAYSIZE(KOF98AE2016_A_Geese_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Geese_D, ARRAYSIZE(KOF98AE2016_A_Geese_D) },
};

const sDescTreeNode KOF98AE2016_A_Krauzer_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Krauzer_A, ARRAYSIZE(KOF98AE2016_A_Krauzer_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Krauzer_B, ARRAYSIZE(KOF98AE2016_A_Krauzer_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Krauzer_C, ARRAYSIZE(KOF98AE2016_A_Krauzer_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Krauzer_D, ARRAYSIZE(KOF98AE2016_A_Krauzer_D) },
};

const sDescTreeNode KOF98AE2016_A_MrBig_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_MrBig_A, ARRAYSIZE(KOF98AE2016_A_MrBig_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_MrBig_B, ARRAYSIZE(KOF98AE2016_A_MrBig_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_MrBig_C, ARRAYSIZE(KOF98AE2016_A_MrBig_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_MrBig_D, ARRAYSIZE(KOF98AE2016_A_MrBig_D) },
};

const sDescTreeNode KOF98AE2016_A_Kasumi_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kasumi_A, ARRAYSIZE(KOF98AE2016_A_Kasumi_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kasumi_B, ARRAYSIZE(KOF98AE2016_A_Kasumi_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kasumi_C, ARRAYSIZE(KOF98AE2016_A_Kasumi_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kasumi_D, ARRAYSIZE(KOF98AE2016_A_Kasumi_D) },
};

const sDescTreeNode KOF98AE2016_A_Orochi_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Orochi_A, ARRAYSIZE(KOF98AE2016_A_Orochi_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Orochi_B, ARRAYSIZE(KOF98AE2016_A_Orochi_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Orochi_C, ARRAYSIZE(KOF98AE2016_A_Orochi_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Orochi_D, ARRAYSIZE(KOF98AE2016_A_Orochi_D) },
};

const sDescTreeNode KOF98AE2016_A_Eiji_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Eiji_A, ARRAYSIZE(KOF98AE2016_A_Eiji_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Eiji_B, ARRAYSIZE(KOF98AE2016_A_Eiji_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Eiji_C, ARRAYSIZE(KOF98AE2016_A_Eiji_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Eiji_D, ARRAYSIZE(KOF98AE2016_A_Eiji_D) },
};

const sDescTreeNode KOF98AE2016_A_RobertEX_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_RobertEX_A, ARRAYSIZE(KOF98AE2016_A_RobertEX_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_RobertEX_B, ARRAYSIZE(KOF98AE2016_A_RobertEX_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_RobertEX_C, ARRAYSIZE(KOF98AE2016_A_RobertEX_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_RobertEX_D, ARRAYSIZE(KOF98AE2016_A_RobertEX_D) },
};

const sDescTreeNode KOF98AE2016_A_OIori_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OIori_A, ARRAYSIZE(KOF98AE2016_A_OIori_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OIori_B, ARRAYSIZE(KOF98AE2016_A_OIori_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OIori_C, ARRAYSIZE(KOF98AE2016_A_OIori_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OIori_D, ARRAYSIZE(KOF98AE2016_A_OIori_D) },
};

const sDescTreeNode KOF98AE2016_A_OLeona_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OLeona_A, ARRAYSIZE(KOF98AE2016_A_OLeona_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OLeona_B, ARRAYSIZE(KOF98AE2016_A_OLeona_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OLeona_C, ARRAYSIZE(KOF98AE2016_A_OLeona_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OLeona_D, ARRAYSIZE(KOF98AE2016_A_OLeona_D) },
};

const sDescTreeNode KOF98AE2016_A_KyoEX_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_KyoEX_A, ARRAYSIZE(KOF98AE2016_A_KyoEX_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_KyoEX_B, ARRAYSIZE(KOF98AE2016_A_KyoEX_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_KyoEX_C, ARRAYSIZE(KOF98AE2016_A_KyoEX_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_KyoEX_D, ARRAYSIZE(KOF98AE2016_A_KyoEX_D) },
};

const sDescTreeNode KOF98AE2016_A_UNITS[] =
{
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kyo_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Kyo_COLLECTION) },
    { L"Kyo (EX)", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_KyoEX_COLLECTION, ARRAYSIZE(KOF98AE2016_A_KyoEX_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Benimaru_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Benimaru_COLLECTION) },
    { L"Daimon", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Daimon_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Daimon_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Terry_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Terry_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Andy_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Andy_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Joe_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Joe_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Ryo_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Ryo_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Robert_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Robert_COLLECTION) },
    { L"Robert (EX)", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_RobertEX_COLLECTION, ARRAYSIZE(KOF98AE2016_A_RobertEX_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yuri_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Yuri_COLLECTION) },
    { L"Leona", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Leona_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Leona_COLLECTION) },
    { L"O.Leona", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OLeona_COLLECTION, ARRAYSIZE(KOF98AE2016_A_OLeona_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Ralf_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Ralf_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Clark_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Clark_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Athena_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Athena_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kensou_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Kensou_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chin_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Chin_COLLECTION) },
    { L"Chizuru", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chizuru_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Chizuru_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Mai_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Mai_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_King_COLLECTION, ARRAYSIZE(KOF98AE2016_A_King_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kim_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Kim_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chang_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Chang_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Choi_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Choi_COLLECTION) },
    { L"Yashiro", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yashiro_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Yashiro_COLLECTION) },
    { L"O.Yashiro", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OYashiro_COLLECTION, ARRAYSIZE(KOF98AE2016_A_OYashiro_COLLECTION) },
    { L"Shermie", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Shermie_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Shermie_COLLECTION) },
    { L"O.Shermie", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OShermie_COLLECTION, ARRAYSIZE(KOF98AE2016_A_OShermie_COLLECTION) },
    { L"Chris", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Chris_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Chris_COLLECTION) },
    { L"O.Chris", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OChris_COLLECTION, ARRAYSIZE(KOF98AE2016_A_OChris_COLLECTION) },
    { L"Yamazaki", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Yamazaki_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Yamazaki_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_BlueMary_COLLECTION, ARRAYSIZE(KOF98AE2016_A_BlueMary_COLLECTION) },
    { L"Billy", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Billy_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Billy_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Iori_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Iori_COLLECTION) },
    { L"O.Iori", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OIori_COLLECTION, ARRAYSIZE(KOF98AE2016_A_OIori_COLLECTION) },
    { L"Mature", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Mature_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Mature_COLLECTION) },
    { L"Vice", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Vice_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Vice_COLLECTION) },
    { L"Heidern", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Heidern_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Heidern_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Takuma_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Takuma_COLLECTION) },
    { L"Saisyu", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Saisyu_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Saisyu_COLLECTION) },
    { L"Heavy D!", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_HeavyD_COLLECTION, ARRAYSIZE(KOF98AE2016_A_HeavyD_COLLECTION) },
    { L"Lucky", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Lucky_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Lucky_COLLECTION) },
    { L"Brian", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Brian_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Brian_COLLECTION) },
    { L"Rugal", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Rugal_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Rugal_COLLECTION) },
    { L"Shingo", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Shingo_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Shingo_COLLECTION) },
    { L"Omega Rugal", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_OmegaRugal_COLLECTION, ARRAYSIZE(KOF98AE2016_A_OmegaRugal_COLLECTION) },
    { L"Goenitz", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Goenitz_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Goenitz_COLLECTION) },
    { L"Geese", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Geese_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Geese_COLLECTION) },
    { L"Krauzer", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Krauzer_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Krauzer_COLLECTION) },
    { L"Mr.Big", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_MrBig_COLLECTION, ARRAYSIZE(KOF98AE2016_A_MrBig_COLLECTION) },
    { L"Kasumi", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Kasumi_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Kasumi_COLLECTION) },
    { L"Orochi", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Orochi_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Orochi_COLLECTION) },
    { L"Eiji", DESC_NODETYPE_TREE, (void*)KOF98AE2016_A_Eiji_COLLECTION, ARRAYSIZE(KOF98AE2016_A_Eiji_COLLECTION) },
};

constexpr auto KOF98AE2016_A_NUMUNIT = ARRAYSIZE(KOF98AE2016_A_UNITS);

#define KOF98AE2016_A_EXTRALOC KOF98AE2016_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF98AE2016_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};