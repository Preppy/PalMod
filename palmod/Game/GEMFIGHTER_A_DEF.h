#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of GEMFIGHTER_A_RYU_PALETTES_A. 
// * Update every array using GEMFIGHTER_A_NUMUNITS below
// That should be it.  Good luck.

const std::vector<uint16_t> GEMFIGHTER_A_IMGIDS_USED =
{
    indexCPS2Sprites_SPF_Ryu,      // 0x59
    indexCPS2Sprites_SPF_Ken,      // 0x5a
    indexCPS2Sprites_SPF_ChunLi,   // 0x5b
    indexCPS2Sprites_SPF_Sakura,   // 0x5c
    indexCPS2Sprites_SPF_Morrigan, // 0x5d
    indexCPS2Sprites_SPF_HsienKo,  // 0x5e
    indexCPS2Sprites_SPF_Felicia,  // 0x5f
    indexCPS2Sprites_SPF_Tessa,    // 0x60
    indexCPS2Sprites_SPF_Ibuki,    // 0x61
    indexCPS2Sprites_SPF_Zangief,  // 0x62
    indexCPS2Sprites_SPF_Dan,      // 0x63
    indexCPS2Sprites_SPF_Akuma,    // 0x64

    indexCPS2Sprites_SPF_Bonus,    // 0x7d

    indexPuzzleFighter_Akuma,       // 0x96
    indexPuzzleFighter_ChunLi,      // 0x98
    indexPuzzleFighter_Dan,         // 0x99
    indexPuzzleFighter_LeiLei,      // 0x9F
    indexPuzzleFighter_Morrigan,    // 0xA0
    indexPuzzleFighter_Sakura,      // 0xA2
};

const sGame_PaletteDataset GEMFIGHTER_A_RYU_PALETTES_A[] =
{
    { L"Ryu A", 0x99e6, 0x9a06, indexCPS2Sprites_SPF_Ryu, 0x00 },
    { L"Ryu A: Extras", 0x002b15a, 0x002b17a, indexCPS2Sprites_SPF_Ryu, 0x06 },
    { L"Ryu A: Boxing Gloves", 0x002b1da, 0x002b1fa, indexCPS2Sprites_SPF_Ryu, 0x02 },
    { L"Ryu A: Traffic Signal", 0x002b25a, 0x002b27a, indexCPS2Sprites_SPF_Ryu, 0x07 },
    { L"Ryu A: Geta Shoes & Mangual", 0x002b2da, 0x002b2fa, indexCPS2Sprites_SPF_Ryu, 0x03 },
    { L"Ryu A: Hadouken", 0x002b35a, 0x002b37a, indexCPS2Sprites_SPF_Ryu, 0x05 },
    { L"Ryu A: Fire Hadouken (Unused)", 0x002b3da, 0x002b3fa, indexCPS2Sprites_SPF_Ryu, 0x05 },
    { L"Ryu A: Level 3 Hadouken", 0x002b45a, 0x002b47a, indexCPS2Sprites_SPF_Ryu, 0x04 },
    { L"Ryu A: Portrait", 0xc226, 0xc286, indexCPS2Sprites_SPF_Ryu, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_RYU_PALETTES_B[] =
{
    { L"Ryu B", 0x9a86, 0x9aa6, indexCPS2Sprites_SPF_Ryu, 0x00 },
    { L"Ryu B: Extras", 0x002b17a, 0x002b19a, indexCPS2Sprites_SPF_Ryu, 0x06 },
    { L"Ryu B: Boxing Gloves", 0x002b1fa, 0x002b21a, indexCPS2Sprites_SPF_Ryu, 0x02 },
    { L"Ryu B: Traffic Signal", 0x002b27a, 0x002b29a, indexCPS2Sprites_SPF_Ryu, 0x07 },
    { L"Ryu B: Geta Shoes & Mangual", 0x002b2fa, 0x002b31a, indexCPS2Sprites_SPF_Ryu, 0x03 },
    { L"Ryu B: Hadouken", 0x002b37a, 0x002b39a, indexCPS2Sprites_SPF_Ryu, 0x05 },
    { L"Ryu B: Fire Hadouken (Unused)", 0x002b3fa, 0x002b41a, indexCPS2Sprites_SPF_Ryu, 0x05 },
    { L"Ryu B: Level 3 Hadouken", 0x002b47a, 0x002b49a, indexCPS2Sprites_SPF_Ryu, 0x04 },
    { L"Ryu B: Portrait", 0xc286, 0xc2e6, indexCPS2Sprites_SPF_Ryu, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_RYU_PALETTES_C[] =
{
    { L"Ryu C", 0x9b26, 0x9b46, indexCPS2Sprites_SPF_Ryu, 0x00 },
    { L"Ryu C: Extras", 0x002b19a, 0x002b1ba, indexCPS2Sprites_SPF_Ryu, 0x06 },
    { L"Ryu C: Boxing Gloves", 0x002b21a, 0x002b23a, indexCPS2Sprites_SPF_Ryu, 0x02 },
    { L"Ryu C: Traffic Signal", 0x002b29a, 0x002b2ba, indexCPS2Sprites_SPF_Ryu, 0x07 },
    { L"Ryu C: Geta Shoes & Mangual", 0x002b31a, 0x002b33a, indexCPS2Sprites_SPF_Ryu, 0x03 },
    { L"Ryu C: Hadouken", 0x002b39a, 0x002b3ba, indexCPS2Sprites_SPF_Ryu, 0x05 },
    { L"Ryu C: Fire Hadouken (Unused)", 0x002b41a, 0x002b43a, indexCPS2Sprites_SPF_Ryu, 0x05 },
    { L"Ryu C: Level 3 Hadouken", 0x002b49a, 0x002b4ba, indexCPS2Sprites_SPF_Ryu, 0x04 },
    { L"Ryu C: Portrait", 0xc2e6, 0xc346, indexCPS2Sprites_SPF_Ryu, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_RYU_PALETTES_X3[] =
{
    { L"Ryu X3", 0x9bc6, 0x9be6, indexCPS2Sprites_SPF_Ryu, 0x00 },
    { L"Ryu X3: Extras", 0x002b1ba, 0x002b1da, indexCPS2Sprites_SPF_Ryu, 0x06 },
    { L"Ryu X3: Boxing Gloves", 0x002b23a, 0x002b25a, indexCPS2Sprites_SPF_Ryu, 0x02 },
    { L"Ryu X3: Traffic Signal", 0x002b2ba, 0x002b2da, indexCPS2Sprites_SPF_Ryu, 0x07 },
    { L"Ryu X3: Geta Shoes & Mangual", 0x002b33a, 0x002b35a, indexCPS2Sprites_SPF_Ryu, 0x03 },
    { L"Ryu X3: Hadouken", 0x002b3ba, 0x002b3da, indexCPS2Sprites_SPF_Ryu, 0x05 },
    { L"Ryu X3: Fire Hadouken (Unused)", 0x002b43a, 0x002b45a, indexCPS2Sprites_SPF_Ryu, 0x05 },
    { L"Ryu X3: Level 3 Hadouken", 0x002b4ba, 0x002b4da, indexCPS2Sprites_SPF_Ryu, 0x04 },
    { L"Ryu X3: Portrait", 0xc346, 0xc3a6, indexCPS2Sprites_SPF_Ryu, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_RYU_PALETTES_SHARED[] =
{
    { L"Ryu: Burning Effect", 0x002b4da, 0x002b4fa, indexCPS2Sprites_SPF_Ryu, 0x00 },
    { L"Ryu: Zap Effect", 0x002b4fa, 0x002b51a, indexCPS2Sprites_SPF_Ryu, 0x00 },
    // unknown
    { L"Ryu: Poisoned Effect", 0x002b53a, 0x002b55a, indexCPS2Sprites_SPF_Ryu, 0x00 },
    { L"Ryu: Hayate Effect", 0x002b55a, 0x002b57a, indexCPS2Sprites_SPF_Ryu, 0x00 },
    // unknown
    { L"Ryu: Stone Effect", 0x002b59a, 0x002b5ba, indexCPS2Sprites_SPF_Ryu, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Ryu: Blue-Burning Effect", 0x002b65a, 0x002b67a, indexCPS2Sprites_SPF_Ryu, 0x00 },
    // unknown
    { L"Ryu: Counter Effect", 0x002b69a, 0x002b6ba, indexCPS2Sprites_SPF_Ryu, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_KEN_PALETTES_A[] =
{
    { L"Ken A", 0x9c66, 0x9c86, indexCPS2Sprites_SPF_Ken, 0x00 },

    // unknown first four: 0x2b75a-0x2b7da
    { L"Ken A: Soccer Suit", 0x2b7da, 0x2b7fa },
    { L"Ken A: Bronco", 0x2b85a, 0x2b87a },
    { L"Ken A: 100 ton hammer", 0x2b8da, 0x2b8fa },
    { L"Ken A: Cowboy", 0x2b95a, 0x2b97a },
    { L"Ken A: Mace", 0x2b9da, 0x2b9fa },
    { L"Ken A: Soccer ball", 0x2ba5a, 0x2ba7a },
    { L"Ken A: Hadoken", 0x2bada, 0x2bafa },
    { L"Ken A: Fire Hadoken", 0x2bb5a, 0x2bb7a },
    { L"Ken A: Shoryuken", 0x2bc5a, 0x2bc7a },
    // ?  unknown @ 0x2bbda-0x2bc5a

    { L"Ken A: Portrait", 0xc406, 0xc466, indexCPS2Sprites_SPF_Ken, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_KEN_PALETTES_B[] =
{
    { L"Ken B", 0x9d06, 0x9d26, indexCPS2Sprites_SPF_Ken, 0x00 },
    { L"Ken B: Soccer Suit", 0x2b7fa, 0x2b81a },
    { L"Ken B: Bronco", 0x2b87a, 0x2b89a },
    { L"Ken B: 100 ton hammer", 0x2b8fa, 0x2b91a },
    { L"Ken B: Cowboy", 0x2b97a, 0x2b99a },
    { L"Ken B: Mace", 0x2b9fa, 0x2ba1a },
    { L"Ken B: Soccer ball", 0x2ba7a, 0x2ba9a },
    { L"Ken B: Hadoken", 0x2bafa, 0x2bb1a },
    { L"Ken B: Fire Hadoken", 0x2bb7a, 0x2bb9a },
    { L"Ken B: Shoryuken", 0x2bc7a, 0x2bc9a },

    { L"Ken B: Portrait", 0xc466, 0xc4c6, indexCPS2Sprites_SPF_Ken, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_KEN_PALETTES_C[] =
{
    { L"Ken C", 0x9da6, 0x9dc6, indexCPS2Sprites_SPF_Ken, 0x00 },
    { L"Ken C: Soccer Suit", 0x2b81a, 0x2b83a },
    { L"Ken C: Bronco", 0x2b89a, 0x2b8ba },
    { L"Ken C: 100 ton hammer", 0x2b91a, 0x2b93a },
    { L"Ken C: Cowboy", 0x2b99a, 0x2b9ba },
    { L"Ken C: Mace", 0x2ba1a, 0x2ba3a },
    { L"Ken C: Soccer ball", 0x2ba9a, 0x2baba },
    { L"Ken C: Hadoken", 0x2bb1a, 0x2bb3a },
    { L"Ken C: Fire Hadoken", 0x2bb9a, 0x2bbba },
    { L"Ken C: Shoryuken", 0x2bc9a, 0x2bcba },

    { L"Ken C: Portrait", 0xc4c6, 0xc526, indexCPS2Sprites_SPF_Ken, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_KEN_PALETTES_X3[] =
{
    { L"Ken X3", 0x9e46, 0x9e66, indexCPS2Sprites_SPF_Ken, 0x00 },
    { L"Ken X3: Soccer Suit", 0x2b83a, 0x2b85a },
    { L"Ken X3: Bronco", 0x2b8ba, 0x2b8da },
    { L"Ken X3: 100 ton hammer", 0x2b93a, 0x2b95a },
    { L"Ken X3: Cowboy", 0x2b9ba, 0x2b9da },
    { L"Ken X3: Mace", 0x2ba3a, 0x2ba5a },
    { L"Ken X3: Soccer ball", 0x2baba, 0x2bada },
    { L"Ken X3: Hadoken", 0x2bb3a, 0x2bb5a },
    { L"Ken X3: Fire Hadoken", 0x2bbba, 0x2bbda },
    { L"Ken X3: Shoryuken", 0x2bcba, 0x2bcda },

    { L"Ken X3: Portrait", 0xc526, 0xc586, indexCPS2Sprites_SPF_Ken, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_CHUNLI_PALETTES_A[] =
{
    { L"Chun-Li A", 0x9ee6, 0x9f06, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li A: Kikou Shou", 0x9f26, 0x9f46, indexPuzzleFighter_ChunLi, 0x01 },
    { L"Chun-Li A: Kikouken", 0x9f46, 0x9f66 },
    { L"Chun-Li A: Circus suit", 0x2beba, 0x2beda, -1, -1, &pairNext },
    { L"Chun-Li A: Circus suit Extra", 0x2bf3a, 0x2bf5a },
    { L"Chun-Li A: Student/Golfer", 0x2bfba, 0x2bfda, -1, -1, &pairNext },
    { L"Chun-Li A: Student/Golfer Extra", 0x2c03a, 0x2c05a },
    { L"Chun-Li A: Jill Suit", 0x2c0ba, 0x2c0da, -1, -1, &pairNext },
    { L"Chun-Li A: Jill Guns", 0x2c13a, 0x2c15a },
    { L"Chun-Li A: Cheerleader suit", 0x2c1ba, 0x2c1da, -1, -1, &pairNext },
    { L"Chun-Li A: Cheerleader suit extra", 0x2c23a, 0x2c25a },
    { L"Chun-Li A: Traffic Suit", 0x2c2ba, 0x2c2da, -1, -1, &pairNextAndNext },
    { L"Chun-Li A: Traffic Spot", 0x2c33a, 0x2c35a },
    { L"Chun-Li A: Bikers", 0x2c3ba, 0x2c3da },
    { L"Chun-Li A: After-4s Suit", 0x2c43a, 0x2c45a, -1, -1, &pairNext },
    { L"Chun-Li A: 4s Flower thing", 0x2c4ba, 0x2c4da },
    { L"Chun-Li A: Portrait", 0xc586, 0xc5e6, indexCPS2Sprites_SPF_ChunLi, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_CHUNLI_PALETTES_B[] =
{
    { L"Chun-Li B", 0x9f86, 0x9fa6, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li B: Kikou Shou", 0x9fc6, 0x9fe6, indexPuzzleFighter_ChunLi, 0x01 },
    { L"Chun-Li B: Kikouken", 0x9fe6, 0xa006 },
    { L"Chun-Li B: Circus suit", 0x2beda, 0x2befa, -1, -1, &pairNext },
    { L"Chun-Li B: Circus suit Extra", 0x2bf5a, 0x2bf7a },
    { L"Chun-Li B: Student/Golfer", 0x2bfda, 0x2bffa, -1, -1, &pairNext },
    { L"Chun-Li B: Student/Golfer Extra", 0x2c05a, 0x2c07a },
    { L"Chun-Li B: Jill Suit", 0x2c0da, 0x2c0fa, -1, -1, &pairNext },
    { L"Chun-Li B: Jill Guns", 0x2c15a, 0x2c17a },
    { L"Chun-Li B: Cheerleader suit", 0x2c1da, 0x2c1fa, -1, -1, &pairNext },
    { L"Chun-Li B: Cheerleader suit extra", 0x2c25a, 0x2c27a },
    { L"Chun-Li B: Traffic Suit", 0x2c2da, 0x2c2fa, -1, -1, &pairNextAndNext },
    { L"Chun-Li B: Traffic Spot", 0x2c35a, 0x2c37a },
    { L"Chun-Li B: Bikers", 0x2c3da, 0x2c3fa },
    { L"Chun-Li B: After-4s Suit", 0x2c45a, 0x2c47a, -1, -1, &pairNext },
    { L"Chun-Li B: 4s Flower thing", 0x2c4da, 0x2c4fa },
    { L"Chun-Li B: Portrait", 0xc5e6, 0xc646, indexCPS2Sprites_SPF_ChunLi, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_CHUNLI_PALETTES_C[] =
{
    { L"Chun-Li C", 0xa026, 0xa046, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li C: Kikou Shou", 0xa066, 0xa086, indexPuzzleFighter_ChunLi, 0x01 },
    { L"Chun-Li C: Kikouken", 0xa086, 0xa0a6 },
    { L"Chun-Li C: Circus suit", 0x2befa, 0x2bf1a, -1, -1, &pairNext },
    { L"Chun-Li C: Circus suit Extra", 0x2bf7a, 0x2bf9a },
    { L"Chun-Li C: Student/Golfer", 0x2bffa, 0x2c01a, -1, -1, &pairNext },
    { L"Chun-Li C: Student/Golfer Extra", 0x2c07a, 0x2c09a },
    { L"Chun-Li C: Jill Suit", 0x2c0fa, 0x2c11a, -1, -1, &pairNext },
    { L"Chun-Li C: Jill Guns", 0x2c17a, 0x2c19a },
    { L"Chun-Li C: Cheerleader suit", 0x2c1fa, 0x2c21a, -1, -1, &pairNext },
    { L"Chun-Li C: Cheerleader suit extra", 0x2c27a, 0x2c29a },
    { L"Chun-Li C: Traffic Suit", 0x2c2fa, 0x2c31a, -1, -1, &pairNextAndNext },
    { L"Chun-Li C: Traffic Spot", 0x2c37a, 0x2c39a },
    { L"Chun-Li C: Bikers", 0x2c3fa, 0x2c41a },
    { L"Chun-Li C: After-4s Suit", 0x2c47a, 0x2c49a, -1, -1, &pairNext },
    { L"Chun-Li C: 4s Flower thing", 0x2c4fa, 0x2c51a },
    { L"Chun-Li C: Portrait", 0xc646, 0xc6a6, indexCPS2Sprites_SPF_ChunLi, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_CHUNLI_PALETTES_X3[] =
{
    { L"Chun-Li X3", 0xa0c6, 0xa0e6, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li X3: Kikou Shou", 0xa106, 0xa126, indexPuzzleFighter_ChunLi, 0x01 },
    { L"Chun-Li X3: Kikouken", 0xa126, 0xa146 },
    { L"Chun-Li X3: Circus suit", 0x2bf1a, 0x2bf3a, -1, -1, &pairNext },
    { L"Chun-Li X3: Circus suit Extra", 0x2bf9a, 0x2bfba },
    { L"Chun-Li X3: Student/Golfer", 0x2c01a, 0x2c03a, -1, -1, &pairNext },
    { L"Chun-Li X3: Student/Golfer Extra", 0x2c09a, 0x2c0ba },
    { L"Chun-Li X3: Jill Suit", 0x2c11a, 0x2c13a, -1, -1, &pairNext },
    { L"Chun-Li X3: Jill Guns", 0x2c19a, 0x2c1ba },
    { L"Chun-Li X3: Cheerleader suit", 0x2c21a, 0x2c23a, -1, -1, &pairNext },
    { L"Chun-Li X3: Cheerleader suit extra", 0x2c29a, 0x2c2ba },
    { L"Chun-Li X3: Traffic Suit", 0x2c31a, 0x2c33a, -1, -1, &pairNextAndNext },
    { L"Chun-Li X3: Traffic Spot", 0x2c39a, 0x2c3ba },
    { L"Chun-Li X3: Bikers", 0x2c41a, 0x2c43a },
    { L"Chun-Li X3: After-4s Suit", 0x2c49a, 0x2c4ba, -1, -1, &pairNext },
    { L"Chun-Li X3: 4s Flower thing", 0x2c51a, 0x2c53a },
    { L"Chun-Li X3: Portrait", 0xc6a6, 0xc706, indexCPS2Sprites_SPF_ChunLi, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_SAKURA_PALETTES_A[] =
{
    { L"Sakura A", 0xa166, 0xa186, indexCPS2Sprites_SPF_Sakura },
    { L"Sakura A: Samurai Suit", 0x2c85a, 0x2c87a, indexCPS2Sprites_SPF_Sakura, 0x05 },
    { L"Sakura A: Bunny Suit", 0x2c8da, 0x2c8fa, indexCPS2Sprites_SPF_Sakura, 0x06 },
    { L"Sakura A: Swim Suit", 0x2c95a, 0x2c97a, indexCPS2Sprites_SPF_Sakura, 0x04 },
    { L"Sakura A: Tennis Player", 0x2c9da, 0x2c9fa, indexCPS2Sprites_SPF_Sakura, 0x03 },
    { L"Sakura A: Watermelon/Motorcycle", 0x2cada, 0x2cafa, indexCPS2Sprites_SPF_Sakura, 0x02 },
    { L"Sakura A: Umbrella", 0x2cb5a, 0x2cb7a },
    { L"Sakura A: Bodybuilders", 0x2cbda, 0x2cbfa },
    { L"Sakura A: Bottle Pop Effect", 0x2cc5a, 0x2cc7a },
    { L"Sakura A: Hadouken", 0x2ccda, 0x2ccfa, indexPuzzleFighter_Sakura, 0x01 },
    { L"Sakura A: Shinku Hadouken", 0x2cd5a, 0x2cd7a, indexPuzzleFighter_Sakura, 0x01 },

    // Unused { L"Unknown A", 0x2ca5a, 0x2ca7a },

    { L"Sakura A: Portrait", 0xc706, 0xc766, indexCPS2Sprites_SPF_Sakura, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_SAKURA_PALETTES_B[] =
{
    { L"Sakura B", 0xa206, 0xa226, indexCPS2Sprites_SPF_Sakura },
    { L"Sakura B: Samurai Suit", 0x2c87a, 0x2c89a, indexCPS2Sprites_SPF_Sakura, 0x05 },
    { L"Sakura B: Bunny Suit", 0x2c8fa, 0x2c91a, indexCPS2Sprites_SPF_Sakura, 0x06 },
    { L"Sakura B: Swim Suit", 0x2c97a, 0x2c99a, indexCPS2Sprites_SPF_Sakura, 0x04 },
    { L"Sakura B: Tennis Player", 0x2c9fa, 0x2ca1a, indexCPS2Sprites_SPF_Sakura, 0x03 },
    { L"Sakura B: Watermelon/Motorcycle", 0x2cafa, 0x2cb1a, indexCPS2Sprites_SPF_Sakura, 0x02 },
    { L"Sakura B: Umbrella", 0x2cb7a, 0x2cb9a },
    { L"Sakura B: Bodybuilders", 0x2cbfa, 0x2cc1a },
    { L"Sakura B: Bottle Pop Effect", 0x2cc7a, 0x2cc9a },
    { L"Sakura B: Hadouken", 0x2ccfa, 0x2cd1a, indexPuzzleFighter_Sakura, 0x01 },
    { L"Sakura B: Shinku Hadouken", 0x2cd7a, 0x2cd9a, indexPuzzleFighter_Sakura, 0x01 },

    // Unused { L"Unknown B", 0x2ca7a, 0x2ca9a },

    { L"Sakura B: Portrait", 0xc766, 0xc7c6, indexCPS2Sprites_SPF_Sakura, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_SAKURA_PALETTES_C[] =
{
    { L"Sakura C", 0xa2a6, 0xa2c6, indexCPS2Sprites_SPF_Sakura },
    { L"Sakura C: Samurai Suit", 0x2c89a, 0x2c8ba, indexCPS2Sprites_SPF_Sakura, 0x05 },
    { L"Sakura C: Bunny Suit", 0x2c91a, 0x2c93a, indexCPS2Sprites_SPF_Sakura, 0x06 },
    { L"Sakura C: Swim Suit", 0x2c99a, 0x2c9ba, indexCPS2Sprites_SPF_Sakura, 0x04 },
    { L"Sakura C: Tennis Player", 0x2ca1a, 0x2ca3a, indexCPS2Sprites_SPF_Sakura, 0x03 },
    { L"Sakura C: Watermelon/Motorcycle", 0x2cb1a, 0x2cb3a, indexCPS2Sprites_SPF_Sakura, 0x02 },
    { L"Sakura C: Umbrella", 0x2cb9a, 0x2cbba },
    { L"Sakura C: Bodybuilders", 0x2cc1a, 0x2cc3a },
    { L"Sakura C: Bottle Pop Effect", 0x2cc9a, 0x2ccba },
    { L"Sakura C: Hadouken", 0x2cd1a, 0x2cd3a },
    { L"Sakura C: Shinku Hadouken", 0x2cd9a, 0x2cdba },

    // Unused { L"Unknown C", 0x2ca9a, 0x2caba },

    { L"Sakura C: Portrait", 0xc7c6, 0xc826, indexCPS2Sprites_SPF_Sakura, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_SAKURA_PALETTES_X3[] =
{
    { L"Sakura X3", 0xa346, 0xa366, indexCPS2Sprites_SPF_Sakura },
    { L"Sakura X3: Samurai Suit", 0x2c8ba, 0x2c8da, indexCPS2Sprites_SPF_Sakura, 0x05 },
    { L"Sakura X3: Bunny Suit", 0x2c93a, 0x2c95a, indexCPS2Sprites_SPF_Sakura, 0x06 },
    { L"Sakura X3: Swim Suit", 0x2c9ba, 0x2c9da, indexCPS2Sprites_SPF_Sakura, 0x04 },
    { L"Sakura X3: Tennis Player", 0x2ca3a, 0x2ca5a, indexCPS2Sprites_SPF_Sakura, 0x03 },
    { L"Sakura X3: Watermelon/Motorcycle", 0x2cb3a, 0x2cb5a, indexCPS2Sprites_SPF_Sakura, 0x02 },
    { L"Sakura X3: Umbrella", 0x2cbba, 0x2cbda },
    { L"Sakura X3: Bodybuilders", 0x2cc3a, 0x2cc5a },
    { L"Sakura X3: Bottle Pop Effect", 0x2ccba, 0x2ccda },
    { L"Sakura X3: Hadouken", 0x2cd3a, 0x2cd5a },
    { L"Sakura X3: Shinku Hadouken", 0x2cdba, 0x2cdda },

    // Unused { L"Unknown X3", 0x2caba, 0x2cada },

    { L"Sakura X3: Portrait", 0xc826, 0xc886, indexCPS2Sprites_SPF_Sakura, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_MORRIGAN_PALETTES_A[] =
{
    { L"Morrigan A", 0xa3e6, 0xa406, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan A: Nurse", 0x2cfba, 0x2cfda },
    { L"Morrigan A: Waitress", 0x2d03a, 0x2d05a },
    { L"Morrigan A: Maid", 0x2d0ba, 0x2d0da },
    { L"Morrigan A: Kimono", 0x2d13a, 0x2d15a },
    { L"Morrigan A: Golfer", 0x2d1ba, 0x2d1da },
    { L"Morrigan A: Soul Fist", 0x2d23a, 0x2d25a },
    { L"Morrigan A: Lilith", 0x2d2ba, 0x2d2da, -1, -1, &pairNextAndNext },
    { L"Morrigan A: Lilith Aura", 0x2d33a, 0x2d35a },
    { L"Morrigan A: Darkness Illusion Effect", 0x2d3ba, 0x2d3da },
    { L"Morrigan A: 3P Bamboo", 0x2d43a, 0x2d45a },

    { L"Morrigan A: Portrait", 0xc886, 0xc8e6, indexCPS2Sprites_SPF_Morrigan, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_MORRIGAN_PALETTES_B[] =
{
    { L"Morrigan B", 0xa486, 0xa4a6, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan B: Nurse", 0x2cfda, 0x2cffa },
    { L"Morrigan B: Waitress", 0x2d05a, 0x2d07a },
    { L"Morrigan B: Maid", 0x2d0da, 0x2d0fa },
    { L"Morrigan B: Kimono", 0x2d15a, 0x2d17a },
    { L"Morrigan B: Golfer", 0x2d1da, 0x2d1fa },
    { L"Morrigan B: Soul Fist", 0x2d25a, 0x2d27a },
    { L"Morrigan B: Lilith", 0x2d2da, 0x2d2fa, -1, -1, &pairNextAndNext },
    { L"Morrigan B: Lilith Aura", 0x2d35a, 0x2d37a },
    { L"Morrigan B: Darkness Illusion Effect", 0x2d3da, 0x2d3fa },
    { L"Morrigan B: 3P Bamboo", 0x2d45a, 0x2d47a },

    { L"Morrigan B: Portrait", 0xc8e6, 0xc946, indexCPS2Sprites_SPF_Morrigan, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_MORRIGAN_PALETTES_C[] =
{
    { L"Morrigan C", 0xa526, 0xa546, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan C: Nurse", 0x2cffa, 0x2d01a },
    { L"Morrigan C: Waitress", 0x2d07a, 0x2d09a },
    { L"Morrigan C: Maid", 0x2d0fa, 0x2d11a },
    { L"Morrigan C: Kimono", 0x2d17a, 0x2d19a },
    { L"Morrigan C: Golfer", 0x2d1fa, 0x2d21a },
    { L"Morrigan C: Soul Fist", 0x2d27a, 0x2d29a },
    { L"Morrigan C: Lilith", 0x2d2fa, 0x2d31a, -1, -1, &pairNextAndNext },
    { L"Morrigan C: Lilith Aura", 0x2d37a, 0x2d39a },
    { L"Morrigan C: Darkness Illusion Effect", 0x2d3fa, 0x2d41a },
    { L"Morrigan C: 3P Bamboo", 0x2d47a, 0x2d49a },

    { L"Morrigan C: Portrait", 0xc946, 0xc9a6, indexCPS2Sprites_SPF_Morrigan, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_MORRIGAN_PALETTES_X3[] =
{
    { L"Morrigan X3", 0xa5c6, 0xa5e6, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan X3: Nurse", 0x2d01a, 0x2d03a },
    { L"Morrigan X3: Waitress", 0x2d09a, 0x2d0ba },
    { L"Morrigan X3: Maid", 0x2d11a, 0x2d13a },
    { L"Morrigan X3: Kimono", 0x2d19a, 0x2d1ba },
    { L"Morrigan X3: Golfer", 0x2d21a, 0x2d23a },
    { L"Morrigan X3: Soul Fist", 0x2d29a, 0x2d2ba },
    { L"Morrigan X3: Lilith", 0x2d31a, 0x2d33a, -1, -1, &pairNextAndNext },
    { L"Morrigan X3: Lilith Aura", 0x2d39a, 0x2d3ba },
    { L"Morrigan X3: Darkness Illusion Effect", 0x2d41a, 0x2d43a },
    { L"Morrigan X3: 3P Bamboo", 0x2d49a, 0x2d4ba },

    { L"Morrigan X3: Portrait", 0xc9a6, 0xca06, indexCPS2Sprites_SPF_Morrigan, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_HSIENKO_PALETTES_A[] =
{
    { L"Hsien-Ko A", 0xa666, 0xa686, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Hsien-Ko A: Weapons & Extras", 0xa686, 0xa6a6, indexPuzzleFighter_LeiLei, 0x01 },

    { L"Hsien-Ko A: Chef", 0x2d73a, 0x2d75a },
    { L"Hsien-Ko A: Pajama", 0x2d7ba, 0x2d7da },
    { L"Hsien-Ko A: Son Goku", 0x2d83a, 0x2d85a, -1, -1, &pairNext },
    { L"Hsien-Ko A: Son Goku Extra", 0x2d8ba, 0x2d8da },
    { L"Hsien-Ko A: Dash Chef", 0x2d93a, 0x2d95a, -1, -1, &pairNext },
    { L"Hsien-Ko A: Dash Chef Extras", 0x2d9ba, 0x2d9da },
    { L"Hsien-Ko A: Bowling Items", 0x2da3a, 0x2da5a },

    { L"Hsien-Ko A: Portrait", 0xca06, 0xca66, indexCPS2Sprites_SPF_HsienKo, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_HSIENKO_PALETTES_B[] =
{
    { L"Hsien-Ko B", 0xa706, 0xa726, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Hsien-Ko B: Weapons & Extras", 0xa726, 0xa746, indexPuzzleFighter_LeiLei, 0x01 },

    { L"Hsien-Ko B: Chef", 0x2d75a, 0x2d77a },
    { L"Hsien-Ko B: Pajama", 0x2d7da, 0x2d7fa },
    { L"Hsien-Ko B: Son Goku", 0x2d85a, 0x2d87a, -1, -1, &pairNext },
    { L"Hsien-Ko B: Son Goku Extra", 0x2d8da, 0x2d8fa },
    { L"Hsien-Ko B: Dash Chef", 0x2d95a, 0x2d97a, -1, -1, &pairNext },
    { L"Hsien-Ko B: Dash Chef Extras", 0x2d9da, 0x2d9fa },
    { L"Hsien-Ko B: Bowling Items", 0x2da5a, 0x2da7a },

    { L"Hsien-Ko B: Portrait", 0xca66, 0xcac6, indexCPS2Sprites_SPF_HsienKo, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_HSIENKO_PALETTES_C[] =
{
    { L"Hsien-Ko C", 0xa7a6, 0xa7c6, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Hsien-Ko C: Weapons & Extras", 0xa7c6, 0xa7e6, indexPuzzleFighter_LeiLei, 0x01 },

    { L"Hsien-Ko C: Chef", 0x2d77a, 0x2d79a },
    { L"Hsien-Ko C: Pajama", 0x2d7fa, 0x2d81a },
    { L"Hsien-Ko C: Son Goku", 0x2d87a, 0x2d89a, -1, -1, &pairNext },
    { L"Hsien-Ko C: Son Goku Extra", 0x2d8fa, 0x2d91a },
    { L"Hsien-Ko C: Dash Chef", 0x2d97a, 0x2d99a, -1, -1, &pairNext },
    { L"Hsien-Ko C: Dash Chef Extras", 0x2d9fa, 0x2da1a },
    { L"Hsien-Ko C: Bowling Items", 0x2da7a, 0x2da9a },

    { L"Hsien-Ko C: Portrait", 0xcac6, 0xcb26, indexCPS2Sprites_SPF_HsienKo, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_HSIENKO_PALETTES_X3[] =
{
    { L"Hsien-Ko X3", 0xa846, 0xa866, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Hsien-Ko X3: Weapons & Extras", 0xa866, 0xa886, indexPuzzleFighter_LeiLei, 0x01 },

    { L"Hsien-Ko X3: Chef", 0x2d79a, 0x2d7ba },
    { L"Hsien-Ko X3: Pajama", 0x2d81a, 0x2d83a },
    { L"Hsien-Ko X3: Son Goku", 0x2d89a, 0x2d8ba, -1, -1, &pairNext },
    { L"Hsien-Ko X3: Son Goku Extra", 0x2d91a, 0x2d93a },
    { L"Hsien-Ko X3: Dash Chef", 0x2d99a, 0x2d9ba, -1, -1, &pairNext },
    { L"Hsien-Ko X3: Dash Chef Extras", 0x2da1a, 0x2da3a },
    { L"Hsien-Ko X3: Bowling Items", 0x2da9a, 0x2daba },

    { L"Hsien-Ko X3: Portrait", 0xcb26, 0xcb86, indexCPS2Sprites_SPF_HsienKo, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_FELICIA_PALETTES_A[] =
{
    { L"Felicia A", 0xa8e6, 0xa906, indexCPS2Sprites_SPF_Felicia, 0x00 },
    // a906-a926: unused / black
    { L"Felicia A: Rolling Buckler & Claws", 0xa926, 0xa946 },
    { L"Felicia A: Megaman Shot & Sand Splash", 0xa946, 0xa966, indexCPS2Sprites_SPF_Felicia , -1, &pairNext5 },

    { L"Felicia A: Gallon", 0x2de1a, 0x2de3a },
    { L"Felicia A: Aulbath", 0x2de9a, 0x2deba },
    { L"Felicia A: Yo Kai", 0x2df1a, 0x2df3a },
    { L"Felicia A: Umbrella", 0x2df9a, 0x2dfba },
    { L"Felicia A: Megaman", 0x2e01a, 0x2e03a },
    { L"Felicia A: Star Gladiator", 0x2e09a, 0x2e0ba },
    { L"Felicia A: Phobos", 0x2e11a, 0x2e13a },
    { L"Felicia A: Dinosaur", 0x2e19a, 0x2e1ba },
    { L"Felicia A: Dancers", 0x2e21a, 0x2e23a },

    { L"Felicia A: Portrait", 0xcb86, 0xcbe6, indexCPS2Sprites_SPF_Felicia, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_FELICIA_PALETTES_B[] =
{
    { L"Felicia B", 0xa986, 0xa9a6, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia B: Rolling Buckler & Claws", 0xa9c6, 0xa9e6 },
    { L"Felicia B: Megaman Shot & Sand Splash", 0xa9e6, 0xaa06, indexCPS2Sprites_SPF_Felicia , -1, &pairNext5 },

    { L"Felicia B: Gallon", 0x2de3a, 0x2de5a },
    { L"Felicia B: Aulbath", 0x2deba, 0x2deda },
    { L"Felicia B: Yo Kai", 0x2df3a, 0x2df5a },
    { L"Felicia B: Umbrella", 0x2dfba, 0x2dfda },
    { L"Felicia B: Megaman", 0x2e03a, 0x2e05a },
    { L"Felicia B: Star Gladiator", 0x2e0ba, 0x2e0da },
    { L"Felicia B: Phobos", 0x2e13a, 0x2e15a },
    { L"Felicia B: Dinosaur", 0x2e1ba, 0x2e1da },
    { L"Felicia B: Felicia Dancers", 0x2e23a, 0x2e25a },

    { L"Felicia B: Portrait", 0xcbe6, 0xcc46, indexCPS2Sprites_SPF_Felicia, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_FELICIA_PALETTES_C[] =
{
    { L"Felicia C", 0xaa26, 0xaa46, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia C: Rolling Buckler & Claws", 0xaa66, 0xaa86 },
    { L"Felicia C: Megaman Shot & Sand Splash", 0xaa86, 0xaaa6, indexCPS2Sprites_SPF_Felicia , -1, &pairNext5 },

    { L"Felicia C: Gallon", 0x2de5a, 0x2de7a },
    { L"Felicia C: Aulbath", 0x2deda, 0x2defa },
    { L"Felicia C: Yo Kai", 0x2df5a, 0x2df7a },
    { L"Felicia C: Umbrella", 0x2dfda, 0x2dffa },
    { L"Felicia C: Megaman", 0x2e05a, 0x2e07a },
    { L"Felicia C: Star Gladiator", 0x2e0da, 0x2e0fa },
    { L"Felicia C: Phobos", 0x2e15a, 0x2e17a },
    { L"Felicia C: Dinosaur", 0x2e1da, 0x2e1fa },
    { L"Felicia C: Dancers", 0x2e25a, 0x2e27a },

    { L"Felicia C: Portrait", 0xcc46, 0xcca6, indexCPS2Sprites_SPF_Felicia, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_FELICIA_PALETTES_X3[] =
{
    { L"Felicia X3", 0xaac6, 0xaae6, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia X3: Rolling Buckler & Claws", 0xab06, 0xab26 },
    { L"Felicia X3: Megaman Shot & Sand Splash", 0xab26, 0xab46, indexCPS2Sprites_SPF_Felicia , -1, &pairNext5 },

    { L"Felicia X3: Gallon", 0x2de7a, 0x2de9a },
    { L"Felicia X3: Aulbath", 0x2defa, 0x2df1a },
    { L"Felicia X3: Yo Kai", 0x2df7a, 0x2df9a },
    { L"Felicia X3: Umbrella", 0x2dffa, 0x2e01a },
    { L"Felicia X3: Megaman", 0x2e07a, 0x2e09a },
    { L"Felicia X3: Star Gladiator", 0x2e0fa, 0x2e11a },
    { L"Felicia X3: Phobos", 0x2e17a, 0x2e19a },
    { L"Felicia X3: Dinosaur", 0x2e1fa, 0x2e21a },
    { L"Felicia X3: Dancers", 0x2e27a, 0x2e29a },

    { L"Felicia X3: Portrait", 0xcca6, 0xcd06, indexCPS2Sprites_SPF_Felicia, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_TESSA_PALETTES_A[] =
{
    { L"Tessa A", 0xab66, 0xab86, indexCPS2Sprites_SPF_Tessa, 0x00 },
    { L"Tessa A: Dragon Attacks", 0xab86, 0xaba6, indexCPS2Sprites_SPF_Tessa, 0x01 },
    { L"Tessa A: Broom Attacks", 0xaba6, 0xabc6 },
    { L"Tessa A: Special Effects", 0xabc6, 0xabe6 },

    { L"Tessa A: Cat Left", 0x2e47a, 0x2e49a },
    { L"Tessa A: Cat Left Smear", 0x2e4fa, 0x2e51a },
    { L"Tessa A: Cat Right", 0x2e57a, 0x2e59a },
    { L"Tessa A: Cat Right Smear", 0x2e5fa, 0x2e61a },
    { L"Tessa A: Unknown", 0x2e67a, 0x2e69a },
    { L"Tessa A: Genie", 0x2e6fa, 0x2e71a },
    { L"Tessa A: Unknown", 0x2e77a, 0x2e79a },
    { L"Tessa A: Robo-Tessa", 0x2e7fa, 0x2e81a },
    { L"Tessa A: Various Suits", 0x2e87a, 0x2e89a },
    { L"Tessa A: Unknown", 0x2e8fa, 0x2e91a },
    { L"Tessa A: Mai Lin", 0x2e97a, 0x2e99a, -1, -1, &pairNext },
    { L"Tessa A: Mai Lin 2", 0x2e9fa, 0x2ea1a },
    { L"Tessa A: Snake", 0x2ea7a, 0x2ea9a },
    { L"Tessa A: Dolphin", 0x2eafa, 0x2eb1a },
    { L"Tessa A: Rocket", 0x2eb7a, 0x2eb9a },
    { L"Tessa A: Super Dragon", 0x2ebfa, 0x2ec1a },
    { L"Tessa A: DP Blade", 0x2ec7a, 0x2ec9a },
    { L"Tessa A: Unknown", 0x2ecfa, 0x2ed1a },
    { L"Tessa A: Shocked", 0x2ed7a, 0x2ed9a },
    { L"Tessa A: Unknown", 0x2ee7a, 0x2ee9a },
    { L"Tessa A: Unknown", 0x2eefa, 0x2ef1a },
    { L"Tessa A: Unknown", 0x2f07a, 0x2f09a },
    { L"Tessa A: Laser", 0x2ef7a, 0x2ef9a },
    { L"Tessa A: Robots Startup", 0x2f0fa, 0x2f11a },
    { L"Tessa A: Grappler Robot", 0x2f17a, 0x2f19a },
    { L"Tessa A: Laser Robot", 0x2f1fa, 0x2f21a },

    { L"Tessa A: Unused Super Trail", 0xabe6, 0xac06, indexCPS2Sprites_SPF_Tessa, 0x00 },
    { L"Tessa A: Portrait", 0xcd06, 0xcd66, indexCPS2Sprites_SPF_Tessa, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_TESSA_PALETTES_B[] =
{
    { L"Tessa B", 0xac06, 0xac26, indexCPS2Sprites_SPF_Tessa, 0x00 },
    { L"Tessa B: Dragon Attacks", 0xac26, 0xac46, indexCPS2Sprites_SPF_Tessa, 0x01 },
    { L"Tessa B: Broom Attacks", 0xac46, 0xac66 },
    { L"Tessa B: Special Effects", 0xac66, 0xac86 },

    { L"Tessa B: Cat Left", 0x2e49a, 0x2e4ba },
    { L"Tessa B: Cat Left Smear", 0x2e51a, 0x2e53a },
    { L"Tessa B: Cat Right", 0x2e59a, 0x2e5ba },
    { L"Tessa B: Cat Right Smear", 0x2e61a, 0x2e63a },
    { L"Tessa B: Unknown", 0x2e69a, 0x2e6ba },
    { L"Tessa B: Genie", 0x2e71a, 0x2e73a },
    { L"Tessa B: Unknown", 0x2e79a, 0x2e7ba },
    { L"Tessa B: Robo-Tessa", 0x2e81a, 0x2e83a },
    { L"Tessa B: Various Suits", 0x2e89a, 0x2e8ba },
    { L"Tessa B: Unknown", 0x2e91a, 0x2e93a },
    { L"Tessa B: Mai Lin", 0x2e99a, 0x2e9ba, -1, -1, &pairNext },
    { L"Tessa B: Mai Lin 2", 0x2ea1a, 0x2ea3a },
    { L"Tessa B: Snake", 0x2ea9a, 0x2eaba },
    { L"Tessa B: Dolphin", 0x2eb1a, 0x2eb3a },
    { L"Tessa B: Rocket", 0x2eb9a, 0x2ebba },
    { L"Tessa B: Super Dragon", 0x2ec1a, 0x2ec3a },
    { L"Tessa B: DP Blade", 0x2ec9a, 0x2ecba },
    { L"Tessa B: Unknown", 0x2ed1a, 0x2ed3a },
    { L"Tessa B: Shocked", 0x2ed9a, 0x2edba },
    { L"Tessa B: Unknown", 0x2ee9a, 0x2eeba },
    { L"Tessa B: Unknown", 0x2ef1a, 0x2ef3a },
    { L"Tessa B: Unknown", 0x2f09a, 0x2f0ba },
    { L"Tessa B: Laser", 0x2ef9a, 0x2efba },
    { L"Tessa B: Robots Startup", 0x2f11a, 0x2f13a },
    { L"Tessa B: Grappler Robot", 0x2f19a, 0x2f1ba },
    { L"Tessa B: Laser Robot", 0x2f21a, 0x2f23a },

    { L"Tessa B: Unused Super Trail", 0xac86, 0xaca6, indexCPS2Sprites_SPF_Tessa, 0x00 },
    { L"Tessa B: Portrait", 0xcd66, 0xcdc6, indexCPS2Sprites_SPF_Tessa, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_TESSA_PALETTES_C[] =
{
    { L"Tessa C", 0xaca6, 0xacc6, indexCPS2Sprites_SPF_Tessa, 0x00 },
    { L"Tessa C: Dragon Attacks", 0xacc6, 0xace6, indexCPS2Sprites_SPF_Tessa, 0x01 },
    { L"Tessa C: Broom Attacks", 0xace6, 0xad06 },
    { L"Tessa C: Special Effects", 0xad06, 0xad26 },

    { L"Tessa C: Cat Left", 0x2e4ba, 0x2e4da },
    { L"Tessa C: Cat Left Smear", 0x2e53a, 0x2e55a },
    { L"Tessa C: Cat Right", 0x2e5ba, 0x2e5da },
    { L"Tessa C: Cat Right Smear", 0x2e63a, 0x2e65a },
    { L"Tessa C: Unknown", 0x2e6ba, 0x2e6da },
    { L"Tessa C: Genie", 0x2e73a, 0x2e75a },
    { L"Tessa C: Unknown", 0x2e7ba, 0x2e7da },
    { L"Tessa C: Robo-Tessa", 0x2e83a, 0x2e85a },
    { L"Tessa C: Various Suits", 0x2e8ba, 0x2e8da },
    { L"Tessa C: Unknown", 0x2e93a, 0x2e95a },
    { L"Tessa C: Mai Lin", 0x2e9ba, 0x2e9da, -1, -1, &pairNext },
    { L"Tessa C: Mai Lin 2", 0x2ea3a, 0x2ea5a },
    { L"Tessa C: Snake", 0x2eaba, 0x2eada },
    { L"Tessa C: Dolphin", 0x2eb3a, 0x2eb5a },
    { L"Tessa C: Rocket", 0x2ebba, 0x2ebda },
    { L"Tessa C: Super Dragon", 0x2ec3a, 0x2ec5a },
    { L"Tessa C: DP Blade", 0x2ecba, 0x2ecda },
    { L"Tessa C: Unknown", 0x2ed3a, 0x2ed5a },
    { L"Tessa C: Shocked", 0x2edba, 0x2edda },
    { L"Tessa C: Unknown", 0x2eeba, 0x2eeda },
    { L"Tessa C: Unknown", 0x2ef3a, 0x2ef5a },
    { L"Tessa C: Unknown", 0x2f0ba, 0x2f0da },
    { L"Tessa C: Laser", 0x2efba, 0x2efda },
    { L"Tessa C: Robots Startup", 0x2f13a, 0x2f15a },
    { L"Tessa C: Grappler Robot", 0x2f1ba, 0x2f1da },
    { L"Tessa C: Laser Robot", 0x2f23a, 0x2f25a },

    { L"Tessa C: Unused Super Trail", 0xad26, 0xad46, indexCPS2Sprites_SPF_Tessa, 0x00 },
    { L"Tessa C: Portrait", 0xcdc6, 0xce26, indexCPS2Sprites_SPF_Tessa, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_TESSA_PALETTES_X3[] =
{
    { L"Tessa X3", 0xad46, 0xad66, indexCPS2Sprites_SPF_Tessa, 0x00 },
    { L"Tessa X3: Dragon Attacks", 0xad66, 0xad86, indexCPS2Sprites_SPF_Tessa, 0x01 },
    { L"Tessa X3: Broom Attacks", 0xad86, 0xada6 },
    { L"Tessa X3: Special Effects", 0xada6, 0xadc6 },

    { L"Tessa X3: Cat Left", 0x2e4da, 0x2e4fa },
    { L"Tessa X3: Cat Left Smear", 0x2e55a, 0x2e57a },
    { L"Tessa X3: Cat Right", 0x2e5da, 0x2e5fa },
    { L"Tessa X3: Cat Right Smear", 0x2e65a, 0x2e67a },
    { L"Tessa X3: Unknown", 0x2e6da, 0x2e6fa },
    { L"Tessa X3: Genie", 0x2e75a, 0x2e77a },
    { L"Tessa X3: Unknown", 0x2e7da, 0x2e7fa },
    { L"Tessa X3: Robo-Tessa", 0x2e85a, 0x2e87a },
    { L"Tessa X3: Various Suits", 0x2e8da, 0x2e8fa },
    { L"Tessa X3: Unknown", 0x2e95a, 0x2e97a },
    { L"Tessa X3: Mai Lin", 0x2e9da, 0x2e9fa, -1, -1, &pairNext },
    { L"Tessa X3: Mai Lin 2", 0x2ea5a, 0x2ea7a },
    { L"Tessa X3: Snake", 0x2eada, 0x2eafa },
    { L"Tessa X3: Dolphin", 0x2eb5a, 0x2eb7a },
    { L"Tessa X3: Rocket", 0x2ebda, 0x2ebfa },
    { L"Tessa X3: Super Dragon", 0x2ec5a, 0x2ec7a },
    { L"Tessa X3: DP Blade", 0x2ecda, 0x2ecfa },
    { L"Tessa X3: Unknown", 0x2ed5a, 0x2ed7a },
    { L"Tessa X3: Shocked", 0x2edda, 0x2edfa },
    { L"Tessa X3: Unknown", 0x2eeda, 0x2eefa },
    { L"Tessa X3: Unknown", 0x2ef5a, 0x2ef7a },
    { L"Tessa X3: Laser", 0x2efda, 0x2effa },
    { L"Tessa X3: Unknown", 0x2f0da, 0x2f0fa },
    { L"Tessa X3: Robots Startup", 0x2f15a, 0x2f17a },
    { L"Tessa X3: Grappler Robot", 0x2f1da, 0x2f1fa },
    { L"Tessa X3: Laser Robot", 0x2f25a, 0x2f27a },

    { L"Tessa X3: Unused Super Trail", 0xadc6, 0xade6, indexCPS2Sprites_SPF_Tessa, 0x00 },
    { L"Tessa X3: Portrait", 0xce26, 0xce86, indexCPS2Sprites_SPF_Tessa, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_IBUKI_PALETTES_A[] =
{
    { L"Ibuki A", 0xade6, 0xae06, indexCPS2Sprites_SPF_Ibuki, 0x00 },
    { L"Ibuki A: Extras 1", 0xae26, 0xae46 },
    { L"Ibuki A: Extras 2", 0xae46, 0xae66 },
    { L"Ibuki A: Unused Super Trail", 0xae66, 0xae86, indexCPS2Sprites_SPF_Ibuki, 0x00 },

    { L"Ibuki A: Rolento", 0x2f45a, 0x2f47a },
    { L"Ibuki A: Penguin", 0x2f4da, 0x2f4fa },
    // unknown 1: 0x2f55a-0x2f5da
    // unknown 2: 0x2f5da-0x2f65a
    { L"Ibuki A: Calligraphy and cooking", 0x2f65a, 0x2f67a },
    { L"Ibuki A: Kimono", 0x2f6da, 0x2f6fa },
    { L"Ibuki A: Geisha and Prince", 0x2f75a, 0x2f77a },
    { L"Ibuki A: Cultural Training", 0x2f7da, 0x2f7fa },
    { L"Ibuki A: Hayate", 0x2f85a, 0x2f87a },
    { L"Ibuki A: Evil schemer", 0x2f8da, 0x2f8fa },

    { L"Ibuki A: Portrait", 0xce86, 0xcee6, indexCPS2Sprites_SPF_Ibuki, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_IBUKI_PALETTES_B[] =
{
    { L"Ibuki B", 0xae86, 0xaea6, indexCPS2Sprites_SPF_Ibuki, 0x00 },
    { L"Ibuki B: Extras 1", 0xaec6, 0xaee6 },
    { L"Ibuki B: Extras 2", 0xaee6, 0xaf06 },
    { L"Ibuki B: Unused Super Trail", 0xaf06, 0xaf26, indexCPS2Sprites_SPF_Ibuki, 0x00 },

    { L"Ibuki B: Rolento", 0x2f47a, 0x2f49a },
    { L"Ibuki B: Penguin", 0x2f4fa, 0x2f51a },
    { L"Ibuki B: Calligraphy and cooking", 0x2f67a, 0x2f69a },
    { L"Ibuki B: Kimono", 0x2f6fa, 0x2f71a },
    { L"Ibuki B: Geisha and Prince", 0x2f77a, 0x2f79a },
    { L"Ibuki B: Cultural Training", 0x2f7fa, 0x2f81a },
    { L"Ibuki B: Hayate", 0x2f87a, 0x2f89a },
    { L"Ibuki B: Evil schemer", 0x2f8fa, 0x2f91a },

    { L"Ibuki B: Portrait", 0xcee6, 0xcf46, indexCPS2Sprites_SPF_Ibuki, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_IBUKI_PALETTES_C[] =
{
    { L"Ibuki C", 0xaf26, 0xaf46, indexCPS2Sprites_SPF_Ibuki, 0x00 },
    { L"Ibuki C: Extras 1", 0xaf66, 0xaf86 },
    { L"Ibuki C: Extras 2", 0xaf86, 0xafa6 },
    { L"Ibuki C: Unused Super Trail", 0xafa6, 0xafc6, indexCPS2Sprites_SPF_Ibuki, 0x00 },

    { L"Ibuki C: Rolento", 0x2f49a, 0x2f4ba },
    { L"Ibuki C: Penguin", 0x2f51a, 0x2f53a },
    { L"Ibuki C: Calligraphy and cooking", 0x2f69a, 0x2f6ba },
    { L"Ibuki C: Kimono", 0x2f71a, 0x2f73a },
    { L"Ibuki C: Geisha and Prince", 0x2f79a, 0x2f7ba },
    { L"Ibuki C: Cultural Training", 0x2f81a, 0x2f83a },
    { L"Ibuki C: Hayate", 0x2f89a, 0x2f8ba },
    { L"Ibuki C: Evil schemer", 0x2f91a, 0x2f93a },

    { L"Ibuki C: Portrait", 0xcf46, 0xcfa6, indexCPS2Sprites_SPF_Ibuki, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_IBUKI_PALETTES_X3[] =
{
    { L"Ibuki X3", 0xafc6, 0xafe6, indexCPS2Sprites_SPF_Ibuki, 0x00 },
    { L"Ibuki X3: Extras 1", 0xb006, 0xb026 },
    { L"Ibuki X3: Extras 2", 0xb026, 0xb046 },
    { L"Ibuki X3: Unused Super Trail", 0xb046, 0xb066, indexCPS2Sprites_SPF_Ibuki, 0x00 },

    { L"Ibuki X3: Rolento", 0x2f4ba, 0x2f4da },
    { L"Ibuki X3: Penguin", 0x2f53a, 0x2f55a },
    { L"Ibuki X3: Calligraphy and cooking", 0x2f6ba, 0x2f6da },
    { L"Ibuki X3: Kimono", 0x2f73a, 0x2f75a },
    { L"Ibuki X3: Geisha and Prince", 0x2f7ba, 0x2f7da },
    { L"Ibuki X3: Cultural Training", 0x2f83a, 0x2f85a },
    { L"Ibuki X3: Hayate", 0x2f8ba, 0x2f8da },
    { L"Ibuki X3: Evil schemer", 0x2f93a, 0x2f95a },

    { L"Ibuki X3: Portrait", 0xcfa6, 0xd006, indexCPS2Sprites_SPF_Ibuki, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_ZANGIEF_PALETTES_A[] =
{
    { L"Zangief A", 0xb066, 0xb086, indexCPS2Sprites_SPF_Zangief, 0x00 },

    { L"Zangief A: Unknown 1", 0x2fb3a, 0x2fb5a },
    { L"Zangief A: Hardhat", 0x2fbba, 0x2fbda },
    { L"Zangief A: Gorilla", 0x2fc3a, 0x2fc5a },
    { L"Zangief A: Neanderthal", 0x2fcba, 0x2fcda },

    { L"Zangief A: Caveman", 0x2fd3a, 0x2fd5a },
    { L"Zangief A: Dinner suit", 0x2fdba, 0x2fdda },
    { L"Zangief A: Unknown 2", 0x2fe3a, 0x2fe5a },
    { L"Zangief A: Drilling line", 0x2feba, 0x2feda },

    { L"Zangief A: Unknown 3", 0x2ff3a, 0x2ff5a },
    { L"Zangief A: Wrestling items", 0x2ffba, 0x2ffda },
    { L"Zangief A: Caveman fire / dinner table", 0x3003a, 0x3005a },
    { L"Zangief A: Newspaper", 0x300ba, 0x300da },

    { L"Zangief A: Banishing Fist", 0x3013a, 0x3015a },
    { L"Zangief A: Unknown 4", 0x301ba, 0x301da },
    { L"Zangief A: Unknown 5", 0x3023a, 0x3025a },
    { L"Zangief A: Unknown 6", 0x302ba, 0x302da },

    { L"Zangief A: Portrait", 0xd006, 0xd066, indexCPS2Sprites_SPF_Zangief, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_ZANGIEF_PALETTES_B[] =
{
    { L"Zangief B", 0xb106, 0xb126, indexCPS2Sprites_SPF_Zangief, 0x00 },

    { L"Zangief B: Unknown 1", 0x2fb5a, 0x2fb7a },
    { L"Zangief B: Hardhat", 0x2fbda, 0x2fbfa },
    { L"Zangief B: Gorilla", 0x2fc5a, 0x2fc7a },
    { L"Zangief B: Neanderthal", 0x2fcda, 0x2fcfa },

    { L"Zangief B: Caveman", 0x2fd5a, 0x2fd7a },
    { L"Zangief B: Dinner suit", 0x2fdda, 0x2fdfa },
    { L"Zangief B: Unknown 2", 0x2fe5a, 0x2fe7a },
    { L"Zangief B: Drilling line", 0x2feda, 0x2fefa },

    { L"Zangief B: Unknown 3", 0x2ff5a, 0x2ff7a },
    { L"Zangief B: Wrestling items", 0x2ffda, 0x2fffa },
    { L"Zangief B: Caveman fire / dinner table", 0x3005a, 0x3007a },
    { L"Zangief B: Newspaper", 0x300da, 0x300fa },

    { L"Zangief B: Banishing Fist", 0x3015a, 0x3017a },
    { L"Zangief B: Unknown 4", 0x301da, 0x301fa },
    { L"Zangief B: Unknown 5", 0x3025a, 0x3027a },
    { L"Zangief B: Unknown 6", 0x302da, 0x302fa },

    { L"Zangief B: Portrait", 0xd066, 0xd0c6, indexCPS2Sprites_SPF_Zangief, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_ZANGIEF_PALETTES_C[] =
{
    { L"Zangief C", 0xb1a6, 0xb1c6, indexCPS2Sprites_SPF_Zangief, 0x00 },

    { L"Zangief C: Unknown 1", 0x2fb7a, 0x2fb9a },
    { L"Zangief C: Hardhat", 0x2fbfa, 0x2fc1a },
    { L"Zangief C: Gorilla", 0x2fc7a, 0x2fc9a },
    { L"Zangief C: Neanderthal", 0x2fcfa, 0x2fd1a },

    { L"Zangief C: Caveman", 0x2fd7a, 0x2fd9a },
    { L"Zangief C: Dinner suit", 0x2fdfa, 0x2fe1a },
    { L"Zangief C: Unknown 2", 0x2fe7a, 0x2fe9a },
    { L"Zangief C: Drilling line", 0x2fefa, 0x2ff1a },

    { L"Zangief C: Unknown 3", 0x2ff7a, 0x2ff9a },
    { L"Zangief C: Wrestling items", 0x2fffa, 0x3001a },
    { L"Zangief C: Caveman fire / dinner table", 0x3007a, 0x3009a },
    { L"Zangief C: Newspaper", 0x300fa, 0x3011a },

    { L"Zangief C: Banishing Fist", 0x3017a, 0x3019a },
    { L"Zangief C: Unknown 4", 0x301fa, 0x3021a },
    { L"Zangief C: Unknown 5", 0x3027a, 0x3029a },
    { L"Zangief C: Unknown 6", 0x302fa, 0x3031a },

    { L"Zangief C: Portrait", 0xd0c6, 0xd126, indexCPS2Sprites_SPF_Zangief, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_ZANGIEF_PALETTES_X3[] =
{
    { L"Zangief X3", 0xb246, 0xb266, indexCPS2Sprites_SPF_Zangief, 0x00 },

    { L"Zangief X3: Unknown 1", 0x2fb9a, 0x2fbba },
    { L"Zangief X3: Hardhat", 0x2fc1a, 0x2fc3a },
    { L"Zangief X3: Gorilla", 0x2fc9a, 0x2fcba },
    { L"Zangief X3: Neanderthal", 0x2fd1a, 0x2fd3a },

    { L"Zangief X3: Caveman", 0x2fd9a, 0x2fdba },
    { L"Zangief X3: Dinner suit", 0x2fe1a, 0x2fe3a },
    { L"Zangief X3: Unknown 2", 0x2fe9a, 0x2feba },
    { L"Zangief X3: Drilling line", 0x2ff1a, 0x2ff3a },

    { L"Zangief X3: Unknown 3", 0x2ff9a, 0x2ffba },
    { L"Zangief X3: Wrestling items", 0x3001a, 0x3003a },
    { L"Zangief X3: Caveman fire / dinner table", 0x3009a, 0x300ba },
    { L"Zangief X3: Newspaper", 0x3011a, 0x3013a },

    { L"Zangief X3: Banishing Fist", 0x3019a, 0x301ba },
    { L"Zangief X3: Unknown 4", 0x3021a, 0x3023a },
    { L"Zangief X3: Unknown 5", 0x3029a, 0x302ba },
    { L"Zangief X3: Unknown 6", 0x3031a, 0x3033a },

    { L"Zangief X3: Portrait", 0xd126, 0xd186, indexCPS2Sprites_SPF_Zangief, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_DAN_PALETTES_A[] =
{
    { L"Dan A", 0xb2e6, 0xb306, indexPuzzleFighter_Dan, 0x00 },

    { L"Dan A: Elvis", 0x3059a, 0x305ba },
    { L"Dan A: Enka / Folk Singer", 0x3061a, 0x3063a },
    { L"Dan A: Street sign", 0x3069a, 0x306ba },
    // one unknown palette here
    { L"Dan A: Go Hibiki", 0x3079a, 0x307ba, indexPuzzleFighter_Dan, 0x02, &pairNext2 },
    { L"Dan A: Gadouken", 0x3081a, 0x3083a },
    { L"Dan A: Go Laser", 0x3089a, 0x308ba },
    { L"Dan A: Unknown", 0x3091a, 0x3093a },
    { L"Dan A: Super Trail", 0xb366, 0xb386, indexPuzzleFighter_Dan, 0x00 },

    { L"Dan A: Portrait", 0xd186, 0xd1e6, indexCPS2Sprites_SPF_Dan, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_DAN_PALETTES_B[] =
{
    { L"Dan B", 0xb386, 0xb3a6, indexPuzzleFighter_Dan, 0x00 },
    { L"Dan B: Elvis", 0x305ba, 0x305da },
    { L"Dan B: Enka / Folk Singer", 0x3063a, 0x3065a },
    { L"Dan B: Street sign", 0x306ba, 0x306da },
    { L"Dan B: Go Hibiki", 0x307ba, 0x307da, indexPuzzleFighter_Dan, 0x02, &pairNext2 },
    { L"Dan B: Gadouken", 0x3083a, 0x3085a },
    { L"Dan B: Go Laser", 0x308ba, 0x308da },
    { L"Dan B: Unknown", 0x3093a, 0x3095a },
    { L"Dan B: Super Trail", 0xb406, 0xb426, indexPuzzleFighter_Dan, 0x00 },
    { L"Dan B: Portrait", 0xd1e6, 0xd246, indexCPS2Sprites_SPF_Dan, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_DAN_PALETTES_C[] =
{
    { L"Dan C", 0xb426, 0xb446, indexPuzzleFighter_Dan, 0x00 },
    { L"Dan C: Elvis", 0x305da, 0x305fa },
    { L"Dan C: Enka / Folk Singer", 0x3065a, 0x3067a },
    { L"Dan C: Street sign", 0x306da, 0x306fa },
    { L"Dan C: Go Hibiki", 0x307da, 0x307fa, indexPuzzleFighter_Dan, 0x02, &pairNext2 },
    { L"Dan C: Gadouken", 0x3085a, 0x3087a },
    { L"Dan C: Go Laser", 0x308da, 0x308fa },
    { L"Dan C: Unknown", 0x3095a, 0x3097a },
    { L"Dan C: Super Trail", 0xb4a6, 0xb4c6, indexPuzzleFighter_Dan, 0x00 },
    { L"Dan C: Portrait", 0xd246, 0xd2a6, indexCPS2Sprites_SPF_Dan, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_DAN_PALETTES_X3[] =
{
    { L"Dan X3", 0xb4c6, 0xb4e6, indexPuzzleFighter_Dan, 0x00 },
    { L"Dan X3: Elvis", 0x305fa, 0x3061a },
    { L"Dan X3: Enka / Folk Singer", 0x3067a, 0x3069a },
    { L"Dan X3: Street sign", 0x306fa, 0x3071a },
    { L"Dan X3: Go Hibiki", 0x307fa, 0x3081a, indexPuzzleFighter_Dan, 0x02, &pairNext2 },
    { L"Dan X3: Gadouken", 0x3087a, 0x3089a },
    { L"Dan X3: Go Laser", 0x308fa, 0x3091a },
    { L"Dan X3: Unknown", 0x3097a, 0x3099a },
    { L"Dan X3: Super Trail", 0xb546, 0xb566, indexPuzzleFighter_Dan, 0x00 },
    { L"Dan X3: Portrait", 0xd2a6, 0xd306, indexCPS2Sprites_SPF_Dan, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_AKUMA_PALETTES_A[] =
{
    { L"Akuma A", 0xb566, 0xb586, indexPuzzleFighter_Akuma, 0x00, &pairNext2346Palettes },
    { L"Akuma A: Swimsuit", 0x30c1a, 0x30c3a }, // punch autochain
    { L"Akuma A: Leo", 0x30c9a, 0x30cba }, // from the LEO RUSH
    { L"Akuma A: Lumberjack", 0x30d1a, 0x30d3a }, // throw
    { L"Akuma A: Kimono", 0x30d9a, 0x30dba }, // from the JUDGMENT TIME autocombo
    { L"Akuma A: Jacket?", 0x30e1a, 0x30e3a }, //?
    { L"Akuma A: Items", 0x30e9a, 0x30eba }, //?
    { L"Akuma A: Unknown", 0x30f1a, 0x30f3a }, //?

    { L"Akuma A: Hadouken", 0x30f9a, 0x30fba }, // fireball
    { L"Akuma A: Fire Hadouken", 0x3101a, 0x3103a }, //?

    { L"Akuma A: Super Trail", 0xb5e6, 0xb606, indexPuzzleFighter_Akuma, 0x00 },
    { L"Akuma A: Portrait", 0xd306, 0xd366, indexCPS2Sprites_SPF_Akuma, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_AKUMA_PALETTES_B[] =
{
    { L"Akuma B", 0xb606, 0xb626, indexPuzzleFighter_Akuma, 0x00, &pairNext2346Palettes },
    { L"Akuma B: Swimsuit", 0x30c3a, 0x30c5a },
    { L"Akuma B: Leo", 0x30cba, 0x30cda },
    { L"Akuma B: Lumberjack", 0x30d3a, 0x30d5a },
    { L"Akuma B: Kimono", 0x30dba, 0x30dda },
    { L"Akuma B: Jacket?", 0x30e3a, 0x30e5a },
    { L"Akuma B: Items", 0x30eba, 0x30eda },
    { L"Akuma B: Unknown", 0x30f3a, 0x30f5a },

    { L"Akuma B: Hadouken", 0x30fba, 0x30fda },
    { L"Akuma B: Fire Hadouken", 0x3103a, 0x3105a },

    { L"Akuma B: Super Trail", 0xb686, 0xb6a6, indexPuzzleFighter_Akuma, 0x00 },
    { L"Akuma B: Portrait", 0xd366, 0xd3c6, indexCPS2Sprites_SPF_Akuma, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_AKUMA_PALETTES_C[] =
{
    { L"Akuma C", 0xb6a6, 0xb6c6, indexPuzzleFighter_Akuma, 0x00, &pairNext2346Palettes },
    { L"Akuma C: Swimsuit", 0x30c5a, 0x30c7a },
    { L"Akuma C: Leo", 0x30cda, 0x30cfa },
    { L"Akuma C: Lumberjack", 0x30d5a, 0x30d7a },
    { L"Akuma C: Kimono", 0x30dda, 0x30dfa },
    { L"Akuma C: Jacket?", 0x30e5a, 0x30e7a },
    { L"Akuma C: Items", 0x30eda, 0x30efa },
    { L"Akuma C: Unknown", 0x30f5a, 0x30f7a },

    { L"Akuma C: Hadouken", 0x30fda, 0x30ffa },
    { L"Akuma C: Fire Hadouken", 0x3105a, 0x3107a },

    { L"Akuma C: Super Trail", 0xb726, 0xb746, indexPuzzleFighter_Akuma, 0x00 },
    { L"Akuma C: Portrait", 0xd3c6, 0xd426, indexCPS2Sprites_SPF_Akuma, 0x40 },
};

const sGame_PaletteDataset GEMFIGHTER_A_AKUMA_PALETTES_X3[] =
{
    { L"Akuma X3", 0xb746, 0xb766, indexPuzzleFighter_Akuma, 0x00, &pairNext2346Palettes },
    { L"Akuma X3: Swimsuit", 0x30c7a, 0x30c9a },
    { L"Akuma X3: Leo", 0x30cfa, 0x30d1a },
    { L"Akuma X3: Lumberjack", 0x30d7a, 0x30d9a },
    { L"Akuma X3: Kimono", 0x30dfa, 0x30e1a },
    { L"Akuma X3: Jacket?", 0x30e7a, 0x30e9a },
    { L"Akuma X3: Items", 0x30efa, 0x30f1a },
    { L"Akuma X3: Unknown", 0x30f7a, 0x30f9a },

    { L"Akuma X3: Hadouken", 0x30ffa, 0x3101a },
    { L"Akuma X3: Fire Hadouken", 0x3107a, 0x3109a },

    { L"Akuma X3: Super Trail", 0xb7c6, 0xb7e6, indexPuzzleFighter_Akuma, 0x00 },
    { L"Akuma X3: Portrait", 0xd426, 0xd486, indexCPS2Sprites_SPF_Akuma, 0x40 },
};

// All the special effects other than for Ryu
const sGame_PaletteDataset GEMFIGHTER_A_KEN_PALETTES_SHARED[] =
{
    { L"Ken: Burning Effect",   0x2bcda, 0x2bcda + (1 * 0x20), indexCPS2Sprites_SPF_Ken, 0x00 },
    { L"Ken: Zap Effect",       0x2bcda + (1 * 0x20), 0x2bcda + (2 * 0x20), indexCPS2Sprites_SPF_Ken, 0x00 },
    // unknown
    { L"Ken: Poisoned Effect",  0x2bcda + (3 * 0x20), 0x2bcda + (4 * 0x20), indexCPS2Sprites_SPF_Ken, 0x00 },
    { L"Ken: Hayate Effect",    0x2bcda + (4 * 0x20), 0x2bcda + (5 * 0x20), indexCPS2Sprites_SPF_Ken, 0x00 },
    // unknown
    { L"Ken: Stone Effect",     0x2bcda + (6 * 0x20), 0x2bcda + (7 * 0x20), indexCPS2Sprites_SPF_Ken, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Ken: Blue-Burning Effect", 0x2bcda + (12 * 0x20), 0x2bcda + (13 * 0x20), indexCPS2Sprites_SPF_Ken, 0x00 },
    // unknown
    { L"Ken: Counter Effect",   0x2bcda + (14 * 0x20), 0x2bcda + (15 * 0x20), indexCPS2Sprites_SPF_Ken, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_CHUNLI_PALETTES_SHARED[] =
{
    { L"Chun-Li: Burning Effect",   0x2c67a, 0x2c67a + (1 * 0x20), indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li: Zap Effect",       0x2c67a + (1 * 0x20), 0x2c67a + (2 * 0x20), indexPuzzleFighter_ChunLi, 0x00 },
    // unknown
    { L"Chun-Li: Poisoned Effect",  0x2c67a + (3 * 0x20), 0x2c67a + (4 * 0x20), indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li: Hayate Effect",    0x2c67a + (4 * 0x20), 0x2c67a + (5 * 0x20), indexPuzzleFighter_ChunLi, 0x00 },
    // unknown
    { L"Chun-Li: Stone Effect",     0x2c67a + (6 * 0x20), 0x2c67a + (7 * 0x20), indexPuzzleFighter_ChunLi, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Chun-Li: Blue-Burning Effect", 0x2c67a + (12 * 0x20), 0x2c67a + (13 * 0x20), indexPuzzleFighter_ChunLi, 0x00 },
    // unknown
    { L"Chun-Li: Counter Effect",   0x2c67a + (14 * 0x20), 0x2c67a + (15 * 0x20), indexPuzzleFighter_ChunLi, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_SAKURA_PALETTES_SHARED[] =
{
    { L"Sakura: Burning Effect",   0x2cdda, 0x2cdda + (1 * 0x20), indexCPS2Sprites_SPF_Sakura, 0x00 },
    { L"Sakura: Zap Effect",       0x2cdda + (1 * 0x20), 0x2cdda + (2 * 0x20), indexCPS2Sprites_SPF_Sakura, 0x00 },
    // unknown
    { L"Sakura: Poisoned Effect",  0x2cdda + (3 * 0x20), 0x2cdda + (4 * 0x20), indexCPS2Sprites_SPF_Sakura, 0x00 },
    { L"Sakura: Hayate Effect",    0x2cdda + (4 * 0x20), 0x2cdda + (5 * 0x20), indexCPS2Sprites_SPF_Sakura, 0x00 },
    // unknown
    { L"Sakura: Stone Effect",     0x2cdda + (6 * 0x20), 0x2cdda + (7 * 0x20), indexCPS2Sprites_SPF_Sakura, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Sakura: Blue-Burning Effect", 0x2cdda + (12 * 0x20), 0x2cdda + (13 * 0x20), indexCPS2Sprites_SPF_Sakura, 0x00 },
    // unknown
    { L"Sakura: Counter Effect",   0x2cdda + (14 * 0x20), 0x2cdda + (15 * 0x20), indexCPS2Sprites_SPF_Sakura, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_MORRIGAN_PALETTES_SHARED[] =
{
    { L"Morrigan: Burning Effect",   0x2d53a, 0x2d53a + (1 * 0x20), indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan: Zap Effect",       0x2d53a + (1 * 0x20), 0x2d53a + (2 * 0x20), indexPuzzleFighter_Morrigan, 0x00 },
    // unknown
    { L"Morrigan: Poisoned Effect",  0x2d53a + (3 * 0x20), 0x2d53a + (4 * 0x20), indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan: Hayate Effect",    0x2d53a + (4 * 0x20), 0x2d53a + (5 * 0x20), indexPuzzleFighter_Morrigan, 0x00 },
    // unknown
    { L"Morrigan: Stone Effect",     0x2d53a + (6 * 0x20), 0x2d53a + (7 * 0x20), indexPuzzleFighter_Morrigan, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Morrigan: Blue-Burning Effect", 0x2d53a + (12 * 0x20), 0x2d53a + (13 * 0x20), indexPuzzleFighter_Morrigan, 0x00 },
    // unknown
    { L"Morrigan: Counter Effect",   0x2d53a + (14 * 0x20), 0x2d53a + (15 * 0x20), indexPuzzleFighter_Morrigan, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_HSIENKO_PALETTES_SHARED[] =
{
    { L"Hsien-Ko: Burning Effect",   0x2dc3a, 0x2dc3a + (1 * 0x20), indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Hsien-Ko: Zap Effect",       0x2dc3a + (1 * 0x20), 0x2dc3a + (2 * 0x20), indexCPS2Sprites_SPF_HsienKo, 0x00 },
    // unknown
    { L"Hsien-Ko: Poisoned Effect",  0x2dc3a + (3 * 0x20), 0x2dc3a + (4 * 0x20), indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Hsien-Ko: Hayate Effect",    0x2dc3a + (4 * 0x20), 0x2dc3a + (5 * 0x20), indexCPS2Sprites_SPF_HsienKo, 0x00 },
    // unknown
    { L"Hsien-Ko: Stone Effect",     0x2dc3a + (6 * 0x20), 0x2dc3a + (7 * 0x20), indexCPS2Sprites_SPF_HsienKo, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Hsien-Ko: Blue-Burning Effect", 0x2dc3a + (12 * 0x20), 0x2dc3a + (13 * 0x20), indexCPS2Sprites_SPF_HsienKo, 0x00 },
    // unknown
    { L"Hsien-Ko: Counter Effect",   0x2dc3a + (14 * 0x20), 0x2dc3a + (15 * 0x20), indexCPS2Sprites_SPF_HsienKo, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_FELICIA_PALETTES_SHARED[] =
{
    { L"Felicia: Burning Effect",   0x2e29a, 0x2e29a + (1 * 0x20), indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia: Zap Effect",       0x2e29a + (1 * 0x20), 0x2e29a + (2 * 0x20), indexCPS2Sprites_SPF_Felicia, 0x00 },
    // unknown
    { L"Felicia: Poisoned Effect",  0x2e29a + (3 * 0x20), 0x2e29a + (4 * 0x20), indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia: Hayate Effect",    0x2e29a + (4 * 0x20), 0x2e29a + (5 * 0x20), indexCPS2Sprites_SPF_Felicia, 0x00 },
    // unknown
    { L"Felicia: Stone Effect",     0x2e29a + (6 * 0x20), 0x2e29a + (7 * 0x20), indexCPS2Sprites_SPF_Felicia, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Felicia: Blue-Burning Effect", 0x2e29a + (12 * 0x20), 0x2e29a + (13 * 0x20), indexCPS2Sprites_SPF_Felicia, 0x00 },
    // unknown
    { L"Felicia: Counter Effect",   0x2e29a + (14 * 0x20), 0x2e29a + (15 * 0x20), indexCPS2Sprites_SPF_Felicia, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_TESSA_PALETTES_SHARED[] =
{
    { L"Tessa: Burning Effect",   0x2f27a, 0x2f27a + (1 * 0x20), indexCPS2Sprites_SPF_Tessa, 0x00 },
    { L"Tessa: Zap Effect",       0x2f27a + (1 * 0x20), 0x2f27a + (2 * 0x20), indexCPS2Sprites_SPF_Tessa, 0x00 },
    // unknown
    { L"Tessa: Poisoned Effect",  0x2f27a + (3 * 0x20), 0x2f27a + (4 * 0x20), indexCPS2Sprites_SPF_Tessa, 0x00 },
    { L"Tessa: Hayate Effect",    0x2f27a + (4 * 0x20), 0x2f27a + (5 * 0x20), indexCPS2Sprites_SPF_Tessa, 0x00 },
    // unknown
    { L"Tessa: Stone Effect",     0x2f27a + (6 * 0x20), 0x2f27a + (7 * 0x20), indexCPS2Sprites_SPF_Tessa, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Tessa: Blue-Burning Effect", 0x2f27a + (12 * 0x20), 0x2f27a + (13 * 0x20), indexCPS2Sprites_SPF_Tessa, 0x00 },
    // unknown
    { L"Tessa: Counter Effect",   0x2f27a + (14 * 0x20), 0x2f27a + (15 * 0x20), indexCPS2Sprites_SPF_Tessa, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_IBUKI_PALETTES_SHARED[] =
{
    { L"Ibuki: Burning Effect",   0x2f95a, 0x2f95a + (1 * 0x20), indexCPS2Sprites_SPF_Ibuki, 0x00 },
    { L"Ibuki: Zap Effect",       0x2f95a + (1 * 0x20), 0x2f95a + (2 * 0x20), indexCPS2Sprites_SPF_Ibuki, 0x00 },
    // unknown
    { L"Ibuki: Poisoned Effect",  0x2f95a + (3 * 0x20), 0x2f95a + (4 * 0x20), indexCPS2Sprites_SPF_Ibuki, 0x00 },
    { L"Ibuki: Hayate Effect",    0x2f95a + (4 * 0x20), 0x2f95a + (5 * 0x20), indexCPS2Sprites_SPF_Ibuki, 0x00 },
    // unknown
    { L"Ibuki: Stone Effect",     0x2f95a + (6 * 0x20), 0x2f95a + (7 * 0x20), indexCPS2Sprites_SPF_Ibuki, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Ibuki: Blue-Burning Effect", 0x2f95a + (12 * 0x20), 0x2f95a + (13 * 0x20), indexCPS2Sprites_SPF_Ibuki, 0x00 },
    // unknown
    { L"Ibuki: Cooking and Counter Effect",   0x2f95a + (14 * 0x20), 0x2f95a + (15 * 0x20), indexCPS2Sprites_SPF_Ibuki, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_ZANGIEF_PALETTES_SHARED[] =
{
    { L"Zangief: Burning Effect",   0x303ba, 0x303ba + (1 * 0x20), indexCPS2Sprites_SPF_Zangief, 0x00 },
    { L"Zangief: Zap Effect",       0x303ba + (1 * 0x20), 0x303ba + (2 * 0x20), indexCPS2Sprites_SPF_Zangief, 0x00 },
    // unknown
    { L"Zangief: Poisoned Effect",  0x303ba + (3 * 0x20), 0x303ba + (4 * 0x20), indexCPS2Sprites_SPF_Zangief, 0x00 },
    { L"Zangief: Hayate Effect",    0x303ba + (4 * 0x20), 0x303ba + (5 * 0x20), indexCPS2Sprites_SPF_Zangief, 0x00 },
    // unknown
    { L"Zangief: Stone Effect",     0x303ba + (6 * 0x20), 0x303ba + (7 * 0x20), indexCPS2Sprites_SPF_Zangief, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Zangief: Blue-Burning Effect", 0x303ba + (12 * 0x20), 0x303ba + (13 * 0x20), indexCPS2Sprites_SPF_Zangief, 0x00 },
    // unknown
    { L"Zangief: Counter Effect",   0x303ba + (14 * 0x20), 0x303ba + (15 * 0x20), indexCPS2Sprites_SPF_Zangief, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_DAN_PALETTES_SHARED[] =
{
    { L"Dan: Burning Effect",   0x3099a, 0x3099a + (1 * 0x20), indexPuzzleFighter_Dan, 0x00 },
    { L"Dan: Zap Effect",       0x3099a + (1 * 0x20), 0x3099a + (2 * 0x20), indexPuzzleFighter_Dan, 0x00 },
    // unknown
    { L"Dan: Poisoned Effect",  0x3099a + (3 * 0x20), 0x3099a + (4 * 0x20), indexPuzzleFighter_Dan, 0x00 },
    { L"Dan: Hayate Effect",    0x3099a + (4 * 0x20), 0x3099a + (5 * 0x20), indexPuzzleFighter_Dan, 0x00 },
    // unknown
    { L"Dan: Stone Effect",     0x3099a + (6 * 0x20), 0x3099a + (7 * 0x20), indexPuzzleFighter_Dan, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Dan: Blue-Burning Effect", 0x3099a + (12 * 0x20), 0x3099a + (13 * 0x20), indexPuzzleFighter_Dan, 0x00 },
    // unknown
    { L"Dan: Counter Effect",   0x3099a + (14 * 0x20), 0x3099a + (15 * 0x20), indexPuzzleFighter_Dan, 0x00 },
};

const sGame_PaletteDataset GEMFIGHTER_A_AKUMA_PALETTES_SHARED[] =
{
    { L"Akuma: Burning Effect",   0x3121a, 0x3121a + (1 * 0x20), indexPuzzleFighter_Akuma, 0x00 },
    { L"Akuma: Zap Effect",       0x3121a + (1 * 0x20), 0x3121a + (2 * 0x20), indexPuzzleFighter_Akuma, 0x00 },
    // unknown
    { L"Akuma: Poisoned Effect",  0x3121a + (3 * 0x20), 0x3121a + (4 * 0x20), indexPuzzleFighter_Akuma, 0x00 },
    { L"Akuma: Hayate Effect",    0x3121a + (4 * 0x20), 0x3121a + (5 * 0x20), indexPuzzleFighter_Akuma, 0x00 },
    // unknown
    { L"Akuma: Stone Effect",     0x3121a + (6 * 0x20), 0x3121a + (7 * 0x20), indexPuzzleFighter_Akuma, 0x00 },
    // unknown
    // unknown
    // unknown
    // unknown
    // unknown
    { L"Akuma: Blue-Burning Effect", 0x3121a + (12 * 0x20), 0x3121a + (13 * 0x20), indexPuzzleFighter_Akuma, 0x00 },
    // unknown
    { L"Akuma: Counter Effect",   0x3121a + (14 * 0x20), 0x3121a + (15 * 0x20), indexPuzzleFighter_Akuma, 0x00 },
};

const sDescTreeNode GEMFIGHTER_A_RYU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_RYU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_RYU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_RYU_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_RYU_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_RYU_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_KEN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_KEN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_KEN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_KEN_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_KEN_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_KEN_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_CHUNLI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_SAKURA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_SAKURA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_SAKURA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_SAKURA_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_SAKURA_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_SAKURA_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_MORRIGAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_HSIENKO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_FELICIA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_FELICIA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_FELICIA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_FELICIA_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_FELICIA_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_FELICIA_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_TESSA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_TESSA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_TESSA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_TESSA_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_TESSA_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_TESSA_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_IBUKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_IBUKI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_IBUKI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_IBUKI_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_IBUKI_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_IBUKI_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_ZANGIEF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_DAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_DAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_DAN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_DAN_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_DAN_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_DAN_PALETTES_SHARED) },
};

const sDescTreeNode GEMFIGHTER_A_AKUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_AKUMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_AKUMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_AKUMA_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_AKUMA_PALETTES_X3) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_PALETTES_SHARED, ARRAYSIZE(GEMFIGHTER_A_AKUMA_PALETTES_SHARED) },
};

const sGame_PaletteDataset GEMFIGHTER_A_CARDS_ARCADE_PALETTES[] =
{
    { L"Ryu Arcade Card", 0xd4e6, 0xd506 },
    { L"Ken Arcade Card", 0xd506, 0xd526 },
    { L"Chun-Li Arcade Card", 0xd526, 0xd546 },
    { L"Sakura Arcade Card", 0xd546, 0xd566 },
    { L"Morrigan Arcade Card", 0xd566, 0xd586 },
    { L"Hsien-Ko Arcade Card", 0xd586, 0xd5a6 },
    { L"Felicia Arcade Card", 0xd5a6, 0xd5c6 },
    { L"Tessa Arcade Card", 0xd5c6, 0xd5e6 },
    { L"Ibuki Arcade Card", 0xd5e6, 0xd606 },
    { L"Zangief Arcade Card", 0xd606, 0xd626 },
    { L"Dan Arcade Card", 0xd626, 0xd646 },
    { L"Akuma Arcade Card", 0xd646, 0xd666 }, 
};

const sGame_PaletteDataset GEMFIGHTER_A_CARDS_DEFEATED_PALETTES[] =
{
    { L"Ryu Defeated Card", 0xd926, 0xd946 },
    { L"Ken Defeated Card", 0xd946, 0xd966 },
    { L"Chun-Li Defeated Card", 0xd966, 0xd986 },
    { L"Sakura Defeated Card", 0xd986, 0xd9a6 },
    { L"Morrigan Defeated Card", 0xd9a6, 0xd9c6 },
    { L"Hsien-Ko Defeated Card", 0xd9c6, 0xd9e6 },
    { L"Felicia Defeated Card", 0xd9e6, 0xda06 },
    { L"Tessa Defeated Card", 0xda06, 0xda26 },
    { L"Ibuki Defeated Card", 0xda26, 0xda46 },
    { L"Zangief Defeated Card", 0xda46, 0xda66 },
    { L"Dan Defeated Card", 0xda66, 0xda86 },
    { L"Akuma Defeated Card", 0xda86, 0xdaa6 },
};

const sDescTreeNode GEMFIGHTER_A_CARDS_COLLECTION[] =
{
    { L"Arcade Cards", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CARDS_ARCADE_PALETTES, ARRAYSIZE(GEMFIGHTER_A_CARDS_ARCADE_PALETTES) },
    { L"Defeated Cards", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CARDS_DEFEATED_PALETTES, ARRAYSIZE(GEMFIGHTER_A_CARDS_DEFEATED_PALETTES) },
};

const sGame_PaletteDataset GEMFIGHTER_A_INTRO_PALETTES[] =
{
    { L"Intro/Menu/??? Text", 0xe042, 0xe102 },
    { L"Intro Big Gem", 0xe102, 0xe142 },
    { L"Ken Intro", 0xe142, 0xe1a2 },
    { L"Ryu Intro", 0xe242, 0xe2a2 },
    { L"Blue Ken 1/2 Intro", 0xe1a2, 0xe1e2 },
    { L"Blue Ken 2/2 Intro", 0xe2a2, 0xe2c2 },
    { L"Blue Ryu Intro", 0xe1e2, 0xe242 },
    { L"Intro Bars", 0xe2c2, 0xe2e2 },
    { L"Lightning Intro", 0xe2e2, 0xe302 },
    { L"Morrigan 1 Intro", 0xe302, 0xe362 },
    { L"Morrigan Bats & Effects Intro", 0xe6c2, 0xe702 },
    { L"Geisha Morrigan Intro", 0xe362, 0xe402 },
    { L"Pastry Chef Morrigan Intro", 0xe402, 0xe4a2 },
    { L"Maid Morrigan Intro", 0xe4a2, 0xe562 },
    { L"Nurse Morrigan Intro", 0xe562, 0xe6c2 },
    { L"Ibuki 1/2 Intro", 0xe702, 0xe7a2 },
    { L"Ibuki 2/2 Intro", 0xe802, 0xe822 },
    { L"Chun-Li Intro", 0xe7a2, 0xe802 },
    { L"Bench Chair Intro", 0xe862, 0xe882 },
    { L"Felicia Intro", 0xe822, 0xe862 },
    { L"Tessa Gem Intro", 0xe882, 0xe8a2 },
    { L"Hsien-Ko Intro", 0xe8a2, 0xe8e2 },
    { L"Ibuki & Hsien-Ko Shadow Intro", 0xe902, 0xe922 },
    { L"Chun-Li & Felicia Shadow Intro", 0xe922, 0xe942 },
    { L"NO MERCY Text Intro", 0xea82, 0xeb02 },

    { L"Ryu End Intro", 0xeb02, 0xeb62 },
    { L"Ken End Intro", 0xeb62, 0xebc2 },
    { L"Chun-Li End Intro", 0xebc2, 0xec22 },
    { L"Sakura End Intro", 0xec22, 0xec82 },
    { L"Morrigan End Intro", 0xec82, 0xece2 },
    { L"Hsien-Ko End Intro", 0xece2, 0xed42 },
    { L"Felicia End Intro", 0xed42, 0xeda2 },
    { L"Tessa End Intro", 0xeda2, 0xee02 },
    { L"Ibuki End Intro", 0xee02, 0xee62 },
    { L"Zangief End Intro", 0xee62, 0xeec2 },
    { L"Bikini Sakura Intro", 0xef02, 0xefa2 },
    { L"Sun's Light", 0xefa2, 0xefc2 },
    { L"??? Intro", 0xea42, 0xea82 },
    { L"??? 2 Intro", 0xeec2, 0xef02 },
    { L"??? 3 Intro", 0xefc2, 0xefe2 },
};

const sDescTreeNode GEMFIGHTER_A_INTROS_COLLECTION[] =
{
    { L"Intro Palettes", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_INTRO_PALETTES, ARRAYSIZE(GEMFIGHTER_A_INTRO_PALETTES) },
};

const sGame_PaletteDataset GEMFIGHTER_A_BONUS_PALETTES[] =
{
    { L"Insert Coin / Char Names / After Battle Text / Timer Numbers", 0xbde6, 0xbe06 },
    { L"HUD", 0xbe66, 0xbe86 },
    { L"Intro Cascade Gems", 0xbf26, 0xbf66 },

    { L"Char Select Back Card", 0xd7a6, 0xd7c6 },
    { L"Player Select Text", 0xd806, 0xd826 },
    { L"Character Names Select/VS", 0xd826, 0xd846, indexCPS2Sprites_SPF_Bonus, 0x00 },

    { L"Logo G 1", 0xdd02, 0xdd22 },
    { L"Logo E 1", 0xdd82, 0xdda2 },
    { L"Logo T", 0xdda2, 0xddc2 },
    { L"Logo M", 0xddc2, 0xdde2 },
    { L"Logo F", 0xdde2, 0xde02 },
    { L"Logo E 2", 0xde02, 0xde22 },
    { L"Logo R", 0xde22, 0xde42 },
    { L"Logo 'Boom'", 0xde42, 0xde62 },
    { L"Logo Sign", 0xde62, 0xde82 },
    { L"Logo Kunai", 0xde82, 0xdea2 },
    { L"Logo G 2", 0xdea2, 0xdec2 },
    { L"Logo H", 0xdec2, 0xdee2 },
    { L"Logo Sun", 0xdf02, 0xdf22 },
    //{ L"???", 0xdf22, 0xdf42 },
    //{ L"Unknown Part 3", 0xdf42, 0xdf62 },
    //{ L"Unknown too", 0xdf62, 0xdf82 },
    //{ L"Unknown", 0xdf82, 0xdfa2 },
    { L"Logo Paw", 0xdfa2, 0xdfc2 },
    { L"Logo Super", 0xdfc2, 0xdfe2 },
    { L"Intro Felicia Rock", 0xdfe2, 0xe002 },
    { L"Intro Felicia ", 0xe002, 0xe022, indexCPS2Sprites_SPF_Felicia, 0x00 },
};

const sDescTreeNode GEMFIGHTER_A_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_BONUS_PALETTES, ARRAYSIZE(GEMFIGHTER_A_BONUS_PALETTES) },
};

const sDescTreeNode GEMFIGHTER_A_UNITS[] =
{
    { L"Akuma", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_AKUMA_COLLECTION) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_COLLECTION) },
    { L"Dan", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_DAN_COLLECTION) },
    { L"Felicia", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_FELICIA_COLLECTION) },
    { L"Hsien-Ko", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_COLLECTION) },
    { L"Ibuki", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_IBUKI_COLLECTION) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_KEN_COLLECTION) },
    { L"Morrigan", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_COLLECTION) },
    { L"Sakura", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_SAKURA_COLLECTION) },
    { L"Ryu", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_RYU_COLLECTION) },
    { L"Tessa", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_TESSA_COLLECTION) },
    { L"Zangief", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_COLLECTION) },

    { L"Cards", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CARDS_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_CARDS_COLLECTION) },

    { L"Intros", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_INTROS_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_INTROS_COLLECTION) },

    { L"Bonus Stuff", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_BONUS_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_BONUS_COLLECTION) },
};
