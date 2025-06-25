#pragma once

#include "SSF2T_A_DEF.h"

const std::vector<uint16_t> SSF2_A_IMGIDS_USED =
{
    indexSF2Sprites_Ryu,    // 0x00
    indexSF2Sprites_EHonda, // 0x01
    indexSF2Sprites_Blanka, // 0x02
    indexSF2Sprites_Guile,  // 0x03
    indexSF2Sprites_Ken,    // 0x04
    indexSF2Sprites_ChunLi, // 0x05
    indexSF2Sprites_Zangief, // 0x06
    indexSF2Sprites_Dhalsim, // 0x07
    indexSF2Sprites_Bison,  // 0x08
    indexSF2Sprites_Sagat,  // 0x09
    indexSF2Sprites_Balrog, // 0x0a
    indexSF2Sprites_Vega,   // 0x0b
    indexSF2Sprites_Cammy,  // 0x0c
    indexSF2Sprites_THawk,  // 0x0d
    indexSF2Sprites_FeiLong, // 0x0e
    indexSF2Sprites_DeeJay, // 0x0f
    indexSF2Sprites_Gouki,  // 0x10
    indexSF2Sprites_Bonus,  // 0x11
    indexSF2Sprites_Stages, // 0x12
    indexSF2HFSprites_Stages, // 0x34 
};

const sGame_PaletteDataset SSF2_A_RYU_PORTRAITS_JAB[] =
{
    { L"Ryu Portrait - Jab 1/2", 0x2e370, 0x2e3f0, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Jab 2/2", 0x323a0, 0x32420, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2_A_RYU_PORTRAITS_STRONG[] =
{
    { L"Ryu Portrait - Strong 1/2", 0x2e3f0, 0x2e470, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Strong 2/2", 0x32420, 0x324a0, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2_A_RYU_PORTRAITS_FIERCE[] =
{
    { L"Ryu Portrait - Fierce 1/2", 0x2e470, 0x2e4f0, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Fierce 2/2", 0x324a0, 0x32520, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2_A_RYU_PORTRAITS_SHORT[] =
{
    { L"Ryu Portrait - Short 1/2", 0x2e4f0, 0x2e570, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Short 2/2", 0x32520, 0x325a0, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2_A_RYU_PORTRAITS_FORWARD[] =
{
    { L"Ryu Portrait - Forward 1/2", 0x2e570, 0x2e5f0, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Forward 2/2", 0x325a0, 0x32620, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2_A_RYU_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Ryu Portrait - Roundhouse 1/2", 0x2e5f0, 0x2e670, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Roundhouse 2/2", 0x32620, 0x326a0, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2_A_RYU_PORTRAITS_START[] =
{
    { L"Ryu Portrait - Start 1/2", 0x2e670, 0x2e6f0, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Start 2/2", 0x326a0, 0x32720, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2_A_RYU_PORTRAITS_HOLD[] =
{
    { L"Ryu Portrait - Hold 1/2", 0x2e6f0, 0x2e770, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Hold 2/2", 0x32720, 0x327a0, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PORTRAITS_JAB[] =
{
    { L"E. Honda Portrait - Jab 1/2", 0x2e770, 0x2e7f0, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Jab 2/2", 0x327a0, 0x32820, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PORTRAITS_STRONG[] =
{
    { L"E. Honda Portrait - Strong 1/2", 0x2e7f0, 0x2e870, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Strong 2/2", 0x32820, 0x328a0, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PORTRAITS_FIERCE[] =
{
    { L"E. Honda Portrait - Fierce 1/2", 0x2e870, 0x2e8f0, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Fierce 2/2", 0x328a0, 0x32920, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PORTRAITS_SHORT[] =
{
    { L"E. Honda Portrait - Short 1/2", 0x2e8f0, 0x2e970, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Short 2/2", 0x32920, 0x329a0, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PORTRAITS_FORWARD[] =
{
    { L"E. Honda Portrait - Forward 1/2", 0x2e970, 0x2e9f0, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Forward 2/2", 0x329a0, 0x32a20, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PORTRAITS_ROUNDHOUSE[] =
{
    { L"E. Honda Portrait - Roundhouse 1/2", 0x2e9f0, 0x2ea70, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Roundhouse 2/2", 0x32a20, 0x32aa0, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PORTRAITS_START[] =
{
    { L"E. Honda Portrait - Start 1/2", 0x2ea70, 0x2eaf0, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Start 2/2", 0x32aa0, 0x32b20, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PORTRAITS_HOLD[] =
{
    { L"E. Honda Portrait - Hold 1/2", 0x2eaf0, 0x2eb70, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Hold 2/2", 0x32b20, 0x32ba0, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PORTRAITS_JAB[] =
{
    { L"Blanka Portrait - Jab 1/2", 0x2eb70, 0x2ebf0, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Jab 2/2", 0x32ba0, 0x32c20, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PORTRAITS_STRONG[] =
{
    { L"Blanka Portrait - Strong 1/2", 0x2ebf0, 0x2ec70, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Strong 2/2", 0x32c20, 0x32ca0, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PORTRAITS_FIERCE[] =
{
    { L"Blanka Portrait - Fierce 1/2", 0x2ec70, 0x2ecf0, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Fierce 2/2", 0x32ca0, 0x32d20, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PORTRAITS_SHORT[] =
{
    { L"Blanka Portrait - Short 1/2", 0x2ecf0, 0x2ed70, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Short 2/2", 0x32d20, 0x32da0, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PORTRAITS_FORWARD[] =
{
    { L"Blanka Portrait - Forward 1/2", 0x2ed70, 0x2edf0, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Forward 2/2", 0x32da0, 0x32e20, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Blanka Portrait - Roundhouse 1/2", 0x2edf0, 0x2ee70, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Roundhouse 2/2", 0x32e20, 0x32ea0, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PORTRAITS_START[] =
{
    { L"Blanka Portrait - Start 1/2", 0x2ee70, 0x2eef0, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Start 2/2", 0x32ea0, 0x32f20, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PORTRAITS_HOLD[] =
{
    { L"Blanka Portrait - Hold 1/2", 0x2eef0, 0x2ef70, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Hold 2/2", 0x32f20, 0x32fa0, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PORTRAITS_JAB[] =
{
    { L"Guile Portrait - Jab 1/2", 0x2ef70, 0x2eff0, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Jab 2/2", 0x32fa0, 0x33020, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PORTRAITS_STRONG[] =
{
    { L"Guile Portrait - Strong 1/2", 0x2eff0, 0x2f070, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Strong 2/2", 0x33020, 0x330a0, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PORTRAITS_FIERCE[] =
{
    { L"Guile Portrait - Fierce 1/2", 0x2f070, 0x2f0f0, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Fierce 2/2", 0x330a0, 0x33120, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PORTRAITS_SHORT[] =
{
    { L"Guile Portrait - Short 1/2", 0x2f0f0, 0x2f170, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Short 2/2", 0x33120, 0x331a0, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PORTRAITS_FORWARD[] =
{
    { L"Guile Portrait - Forward 1/2", 0x2f170, 0x2f1f0, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Forward 2/2", 0x331a0, 0x33220, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Guile Portrait - Roundhouse 1/2", 0x2f1f0, 0x2f270, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Roundhouse 2/2", 0x33220, 0x332a0, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PORTRAITS_START[] =
{
    { L"Guile Portrait - Start 1/2", 0x2f270, 0x2f2f0, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Start 2/2", 0x332a0, 0x33320, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PORTRAITS_HOLD[] =
{
    { L"Guile Portrait - Hold 1/2", 0x2f2f0, 0x2f370, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Hold 2/2", 0x33320, 0x333a0, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2_A_KEN_PORTRAITS_JAB[] =
{
    { L"Ken Portrait - Jab 1/2", 0x2f370, 0x2f3f0, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Jab 2/2", 0x333a0, 0x33420, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2_A_KEN_PORTRAITS_STRONG[] =
{
    { L"Ken Portrait - Strong 1/2", 0x2f3f0, 0x2f470, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Strong 2/2", 0x33420, 0x334a0, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2_A_KEN_PORTRAITS_FIERCE[] =
{
    { L"Ken Portrait - Fierce 1/2", 0x2f470, 0x2f4f0, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Fierce 2/2", 0x334a0, 0x33520, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2_A_KEN_PORTRAITS_SHORT[] =
{
    { L"Ken Portrait - Short 1/2", 0x2f4f0, 0x2f570, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Short 2/2", 0x33520, 0x335a0, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2_A_KEN_PORTRAITS_FORWARD[] =
{
    { L"Ken Portrait - Forward 1/2", 0x2f570, 0x2f5f0, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Forward 2/2", 0x335a0, 0x33620, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2_A_KEN_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Ken Portrait - Roundhouse 1/2", 0x2f5f0, 0x2f670, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Roundhouse 2/2", 0x33620, 0x336a0, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2_A_KEN_PORTRAITS_START[] =
{
    { L"Ken Portrait - Start 1/2", 0x2f670, 0x2f6f0, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Start 2/2", 0x336a0, 0x33720, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2_A_KEN_PORTRAITS_HOLD[] =
{
    { L"Ken Portrait - Hold 1/2", 0x2f6f0, 0x2f770, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Hold 2/2", 0x33720, 0x337a0, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PORTRAITS_JAB[] =
{
    { L"Chun-Li Portrait - Jab 1/2", 0x2f770, 0x2f7f0, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li Portrait - Jab 2/2", 0x337a0, 0x33820, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PORTRAITS_STRONG[] =
{
    { L"Chun-Li Portrait - Strong 1/2", 0x2f7f0, 0x2f870, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li Portrait - Strong 2/2", 0x33820, 0x338a0, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PORTRAITS_FIERCE[] =
{
    { L"Chun-Li Portrait - Fierce 1/2", 0x2f870, 0x2f8f0, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li Portrait - Fierce 2/2", 0x338a0, 0x33920, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PORTRAITS_SHORT[] =
{
    { L"Chun-Li Portrait - Short 1/2", 0x2f8f0, 0x2f970, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li Portrait - Short 2/2", 0x33920, 0x339a0, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PORTRAITS_FORWARD[] =
{
    { L"Chun-Li Portrait - Forward 1/2", 0x2f970, 0x2f9f0, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li Portrait - Forward 2/2", 0x339a0, 0x33a20, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Chun-Li Portrait - Roundhouse 1/2", 0x2f9f0, 0x2fa70, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li Portrait - Roundhouse 2/2", 0x33a20, 0x33aa0, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PORTRAITS_START[] =
{
    { L"Chun-Li Portrait - Start 1/2", 0x2fa70, 0x2faf0, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li Portrait - Start 2/2", 0x33aa0, 0x33b20, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PORTRAITS_HOLD[] =
{
    { L"Chun-Li Portrait - Hold 1/2", 0x2faf0, 0x2fb70, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li Portrait - Hold 2/2", 0x33b20, 0x33ba0, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PORTRAITS_JAB[] =
{
    { L"Zangief Portrait - Jab 1/2", 0x2fb70, 0x2fbf0, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Jab 2/2", 0x33ba0, 0x33c20, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PORTRAITS_STRONG[] =
{
    { L"Zangief Portrait - Strong 1/2", 0x2fbf0, 0x2fc70, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Strong 2/2", 0x33c20, 0x33ca0, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PORTRAITS_FIERCE[] =
{
    { L"Zangief Portrait - Fierce 1/2", 0x2fc70, 0x2fcf0, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Fierce 2/2", 0x33ca0, 0x33d20, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PORTRAITS_SHORT[] =
{
    { L"Zangief Portrait - Short 1/2", 0x2fcf0, 0x2fd70, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Short 2/2", 0x33d20, 0x33da0, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PORTRAITS_FORWARD[] =
{
    { L"Zangief Portrait - Forward 1/2", 0x2fd70, 0x2fdf0, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Forward 2/2", 0x33da0, 0x33e20, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Zangief Portrait - Roundhouse 1/2", 0x2fdf0, 0x2fe70, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Roundhouse 2/2", 0x33e20, 0x33ea0, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PORTRAITS_START[] =
{
    { L"Zangief Portrait - Start 1/2", 0x2fe70, 0x2fef0, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Start 2/2", 0x33ea0, 0x33f20, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PORTRAITS_HOLD[] =
{
    { L"Zangief Portrait - Hold 1/2", 0x2fef0, 0x2ff70, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Hold 2/2", 0x33f20, 0x33fa0, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PORTRAITS_JAB[] =
{
    { L"Dhalsim Portrait - Jab 1/2", 0x2ff70, 0x2fff0, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Jab 2/2", 0x33fa0, 0x34020, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PORTRAITS_STRONG[] =
{
    { L"Dhalsim Portrait - Strong 1/2", 0x2fff0, 0x30070, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Strong 2/2", 0x34020, 0x340a0, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PORTRAITS_FIERCE[] =
{
    { L"Dhalsim Portrait - Fierce 1/2", 0x30070, 0x300f0, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Fierce 2/2", 0x340a0, 0x34120, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PORTRAITS_SHORT[] =
{
    { L"Dhalsim Portrait - Short 1/2", 0x300f0, 0x30170, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Short 2/2", 0x34120, 0x341a0, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PORTRAITS_FORWARD[] =
{
    { L"Dhalsim Portrait - Forward 1/2", 0x30170, 0x301f0, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Forward 2/2", 0x341a0, 0x34220, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Dhalsim Portrait - Roundhouse 1/2", 0x301f0, 0x30270, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Roundhouse 2/2", 0x34220, 0x342a0, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PORTRAITS_START[] =
{
    { L"Dhalsim Portrait - Start 1/2", 0x30270, 0x302f0, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Start 2/2", 0x342a0, 0x34320, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PORTRAITS_HOLD[] =
{
    { L"Dhalsim Portrait - Hold 1/2", 0x302f0, 0x30370, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Hold 2/2", 0x34320, 0x343a0, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PORTRAITS_JAB[] =
{
    { L"M. Bison Portrait - Jab 1/2", 0x30370, 0x303f0, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Jab 2/2", 0x343a0, 0x34420, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PORTRAITS_STRONG[] =
{
    { L"M. Bison Portrait - Strong 1/2", 0x303f0, 0x30470, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Strong 2/2", 0x34420, 0x344a0, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PORTRAITS_FIERCE[] =
{
    { L"M. Bison Portrait - Fierce 1/2", 0x30470, 0x304f0, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Fierce 2/2", 0x344a0, 0x34520, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PORTRAITS_SHORT[] =
{
    { L"M. Bison Portrait - Short 1/2", 0x304f0, 0x30570, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Short 2/2", 0x34520, 0x345a0, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PORTRAITS_FORWARD[] =
{
    { L"M. Bison Portrait - Forward 1/2", 0x30570, 0x305f0, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Forward 2/2", 0x345a0, 0x34620, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PORTRAITS_ROUNDHOUSE[] =
{
    { L"M. Bison Portrait - Roundhouse 1/2", 0x305f0, 0x30670, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Roundhouse 2/2", 0x34620, 0x346a0, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PORTRAITS_START[] =
{
    { L"M. Bison Portrait - Start 1/2", 0x30670, 0x306f0, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Start 2/2", 0x346a0, 0x34720, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PORTRAITS_HOLD[] =
{
    { L"M. Bison Portrait - Hold 1/2", 0x306f0, 0x30770, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Hold 2/2", 0x34720, 0x347a0, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PORTRAITS_JAB[] =
{
    { L"Sagat Portrait - Jab 1/2", 0x30770, 0x307f0, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Jab 2/2", 0x347a0, 0x34820, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PORTRAITS_STRONG[] =
{
    { L"Sagat Portrait - Strong 1/2", 0x307f0, 0x30870, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Strong 2/2", 0x34820, 0x348a0, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PORTRAITS_FIERCE[] =
{
    { L"Sagat Portrait - Fierce 1/2", 0x30870, 0x308f0, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Fierce 2/2", 0x348a0, 0x34920, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PORTRAITS_SHORT[] =
{
    { L"Sagat Portrait - Short 1/2", 0x308f0, 0x30970, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Short 2/2", 0x34920, 0x349a0, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PORTRAITS_FORWARD[] =
{
    { L"Sagat Portrait - Forward 1/2", 0x30970, 0x309f0, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Forward 2/2", 0x349a0, 0x34a20, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Sagat Portrait - Roundhouse 1/2", 0x309f0, 0x30a70, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Roundhouse 2/2", 0x34a20, 0x34aa0, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PORTRAITS_START[] =
{
    { L"Sagat Portrait - Start 1/2", 0x30a70, 0x30af0, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Start 2/2", 0x34aa0, 0x34b20, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PORTRAITS_HOLD[] =
{
    { L"Sagat Portrait - Hold 1/2", 0x30af0, 0x30b70, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Hold 2/2", 0x34b20, 0x34ba0, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PORTRAITS_JAB[] =
{
    { L"Balrog Portrait - Jab 1/2", 0x30b70, 0x30bf0, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Jab 2/2", 0x34ba0, 0x34c20, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PORTRAITS_STRONG[] =
{
    { L"Balrog Portrait - Strong 1/2", 0x30bf0, 0x30c70, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Strong 2/2", 0x34c20, 0x34ca0, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PORTRAITS_FIERCE[] =
{
    { L"Balrog Portrait - Fierce 1/2", 0x30c70, 0x30cf0, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Fierce 2/2", 0x34ca0, 0x34d20, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PORTRAITS_SHORT[] =
{
    { L"Balrog Portrait - Short 1/2", 0x30cf0, 0x30d70, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Short 2/2", 0x34d20, 0x34da0, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PORTRAITS_FORWARD[] =
{
    { L"Balrog Portrait - Forward 1/2", 0x30d70, 0x30df0, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Forward 2/2", 0x34da0, 0x34e20, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Balrog Portrait - Roundhouse 1/2", 0x30df0, 0x30e70, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Roundhouse 2/2", 0x34e20, 0x34ea0, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PORTRAITS_START[] =
{
    { L"Balrog Portrait - Start 1/2", 0x30e70, 0x30ef0, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Start 2/2", 0x34ea0, 0x34f20, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PORTRAITS_HOLD[] =
{
    { L"Balrog Portrait - Hold 1/2", 0x30ef0, 0x30f70, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Hold 2/2", 0x34f20, 0x34fa0, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PORTRAITS_JAB[] =
{
    { L"Vega Portrait - Jab 1/2", 0x30f70, 0x30ff0, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Jab 2/2", 0x34fa0, 0x35020, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PORTRAITS_STRONG[] =
{
    { L"Vega Portrait - Strong 1/2", 0x30ff0, 0x31070, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Strong 2/2", 0x35020, 0x350a0, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PORTRAITS_FIERCE[] =
{
    { L"Vega Portrait - Fierce 1/2", 0x31070, 0x310f0, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Fierce 2/2", 0x350a0, 0x35120, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PORTRAITS_SHORT[] =
{
    { L"Vega Portrait - Short 1/2", 0x310f0, 0x31170, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Short 2/2", 0x35120, 0x351a0, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PORTRAITS_FORWARD[] =
{
    { L"Vega Portrait - Forward 1/2", 0x31170, 0x311f0, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Forward 2/2", 0x351a0, 0x35220, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Vega Portrait - Roundhouse 1/2", 0x311f0, 0x31270, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Roundhouse 2/2", 0x35220, 0x352a0, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PORTRAITS_START[] =
{
    { L"Vega Portrait - Start 1/2", 0x31270, 0x312f0, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Start 2/2", 0x352a0, 0x35320, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PORTRAITS_HOLD[] =
{
    { L"Vega Portrait - Hold 1/2", 0x312f0, 0x31370, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Hold 2/2", 0x35320, 0x353a0, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PORTRAITS_JAB[] =
{
    { L"Cammy Portrait - Jab 1/2", 0x31370, 0x313f0, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Jab 2/2", 0x353a0, 0x35420, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PORTRAITS_STRONG[] =
{
    { L"Cammy Portrait - Strong 1/2", 0x313f0, 0x31470, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Strong 2/2", 0x35420, 0x354a0, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PORTRAITS_FIERCE[] =
{
    { L"Cammy Portrait - Fierce 1/2", 0x31470, 0x314f0, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Fierce 2/2", 0x354a0, 0x35520, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PORTRAITS_SHORT[] =
{
    { L"Cammy Portrait - Short 1/2", 0x314f0, 0x31570, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Short 2/2", 0x35520, 0x355a0, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PORTRAITS_FORWARD[] =
{
    { L"Cammy Portrait - Forward 1/2", 0x31570, 0x315f0, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Forward 2/2", 0x355a0, 0x35620, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Cammy Portrait - Roundhouse 1/2", 0x315f0, 0x31670, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Roundhouse 2/2", 0x35620, 0x356a0, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PORTRAITS_START[] =
{
    { L"Cammy Portrait - Start 1/2", 0x31670, 0x316f0, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Start 2/2", 0x356a0, 0x35720, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PORTRAITS_HOLD[] =
{
    { L"Cammy Portrait - Hold 1/2", 0x316f0, 0x31770, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Hold 2/2", 0x35720, 0x357a0, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PORTRAITS_JAB[] =
{
    { L"T-Hawk Portrait - Jab 1/2", 0x31770, 0x317f0, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Jab 2/2", 0x357a0, 0x35820, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PORTRAITS_STRONG[] =
{
    { L"T-Hawk Portrait - Strong 1/2", 0x317f0, 0x31870, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Strong 2/2", 0x35820, 0x358a0, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PORTRAITS_FIERCE[] =
{
    { L"T-Hawk Portrait - Fierce 1/2", 0x31870, 0x318f0, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Fierce 2/2", 0x358a0, 0x35920, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PORTRAITS_SHORT[] =
{
    { L"T-Hawk Portrait - Short 1/2", 0x318f0, 0x31970, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Short 2/2", 0x35920, 0x359a0, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PORTRAITS_FORWARD[] =
{
    { L"T-Hawk Portrait - Forward 1/2", 0x31970, 0x319f0, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Forward 2/2", 0x359a0, 0x35a20, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PORTRAITS_ROUNDHOUSE[] =
{
    { L"T-Hawk Portrait - Roundhouse 1/2", 0x319f0, 0x31a70, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Roundhouse 2/2", 0x35a20, 0x35aa0, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PORTRAITS_START[] =
{
    { L"T-Hawk Portrait - Start 1/2", 0x31a70, 0x31af0, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Start 2/2", 0x35aa0, 0x35b20, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PORTRAITS_HOLD[] =
{
    { L"T-Hawk Portrait - Hold 1/2", 0x31af0, 0x31b70, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Hold 2/2", 0x35b20, 0x35ba0, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PORTRAITS_JAB[] =
{
    { L"Fei Long Portrait - Jab 1/2", 0x31b70, 0x31bf0, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Jab 2/2", 0x35ba0, 0x35c20, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PORTRAITS_STRONG[] =
{
    { L"Fei Long Portrait - Strong 1/2", 0x31bf0, 0x31c70, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Strong 2/2", 0x35c20, 0x35ca0, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PORTRAITS_FIERCE[] =
{
    { L"Fei Long Portrait - Fierce 1/2", 0x31c70, 0x31cf0, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Fierce 2/2", 0x35ca0, 0x35d20, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PORTRAITS_SHORT[] =
{
    { L"Fei Long Portrait - Short 1/2", 0x31cf0, 0x31d70, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Short 2/2", 0x35d20, 0x35da0, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PORTRAITS_FORWARD[] =
{
    { L"Fei Long Portrait - Forward 1/2", 0x31d70, 0x31df0, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Forward 2/2", 0x35da0, 0x35e20, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Fei Long Portrait - Roundhouse 1/2", 0x31df0, 0x31e70, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Roundhouse 2/2", 0x35e20, 0x35ea0, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PORTRAITS_START[] =
{
    { L"Fei Long Portrait - Start 1/2", 0x31e70, 0x31ef0, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Start 2/2", 0x35ea0, 0x35f20, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PORTRAITS_HOLD[] =
{
    { L"Fei Long Portrait - Hold 1/2", 0x31ef0, 0x31f70, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Hold 2/2", 0x35f20, 0x35fa0, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PORTRAITS_JAB[] =
{
    { L"Dee Jay Portrait - Jab 1/2", 0x31f70, 0x31ff0, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Jab 2/2", 0x35fa0, 0x36020, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PORTRAITS_STRONG[] =
{
    { L"Dee Jay Portrait - Strong 1/2", 0x31ff0, 0x32070, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Strong 2/2", 0x36020, 0x360a0, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PORTRAITS_FIERCE[] =
{
    { L"Dee Jay Portrait - Fierce 1/2", 0x32070, 0x320f0, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Fierce 2/2", 0x360a0, 0x36120, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PORTRAITS_SHORT[] =
{
    { L"Dee Jay Portrait - Short 1/2", 0x320f0, 0x32170, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Short 2/2", 0x36120, 0x361a0, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PORTRAITS_FORWARD[] =
{
    { L"Dee Jay Portrait - Forward 1/2", 0x32170, 0x321f0, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Forward 2/2", 0x361a0, 0x36220, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Dee Jay Portrait - Roundhouse 1/2", 0x321f0, 0x32270, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Roundhouse 2/2", 0x36220, 0x362a0, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PORTRAITS_START[] =
{
    { L"Dee Jay Portrait - Start 1/2", 0x32270, 0x322f0, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Start 2/2", 0x362a0, 0x36320, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PORTRAITS_HOLD[] =
{
    { L"Dee Jay Portrait - Hold 1/2", 0x322f0, 0x32370, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Hold 2/2", 0x36320, 0x363a0, indexSF2Sprites_DeeJay, 0x11 },
};

const sDescTreeNode SSF2_A_RYU_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_RYU_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_RYU_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_RYU_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_RYU_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_RYU_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_RYU_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PORTRAITS_START,    ARRAYSIZE(SSF2_A_RYU_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_RYU_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_EHONDA_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_EHONDA_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_EHONDA_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_EHONDA_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_EHONDA_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_EHONDA_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_EHONDA_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PORTRAITS_START,    ARRAYSIZE(SSF2_A_EHONDA_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_EHONDA_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_BLANKA_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_BLANKA_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_BLANKA_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_BLANKA_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_BLANKA_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_BLANKA_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_BLANKA_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PORTRAITS_START,    ARRAYSIZE(SSF2_A_BLANKA_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_BLANKA_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_GUILE_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_GUILE_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_GUILE_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_GUILE_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_GUILE_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_GUILE_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_GUILE_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PORTRAITS_START,    ARRAYSIZE(SSF2_A_GUILE_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_GUILE_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_KEN_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_KEN_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_KEN_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_KEN_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_KEN_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_KEN_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_KEN_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PORTRAITS_START,    ARRAYSIZE(SSF2_A_KEN_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_KEN_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_CHUNLI_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_CHUNLI_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_CHUNLI_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_CHUNLI_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_CHUNLI_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_CHUNLI_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_CHUNLI_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PORTRAITS_START,    ARRAYSIZE(SSF2_A_CHUNLI_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_CHUNLI_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_ZANGIEF_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_ZANGIEF_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_ZANGIEF_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_ZANGIEF_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_ZANGIEF_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_ZANGIEF_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_ZANGIEF_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PORTRAITS_START,    ARRAYSIZE(SSF2_A_ZANGIEF_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_ZANGIEF_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_DHALSIM_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_DHALSIM_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_DHALSIM_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_DHALSIM_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_DHALSIM_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_DHALSIM_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_DHALSIM_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PORTRAITS_START,    ARRAYSIZE(SSF2_A_DHALSIM_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_DHALSIM_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_MBISON_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_MBISON_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_MBISON_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_MBISON_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_MBISON_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_MBISON_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_MBISON_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PORTRAITS_START,    ARRAYSIZE(SSF2_A_MBISON_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_MBISON_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_SAGAT_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_SAGAT_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_SAGAT_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_SAGAT_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_SAGAT_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_SAGAT_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_SAGAT_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PORTRAITS_START,    ARRAYSIZE(SSF2_A_SAGAT_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_SAGAT_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_BALROG_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PORTRAITS_JAB,    ARRAYSIZE(SSF2_A_BALROG_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PORTRAITS_STRONG,    ARRAYSIZE(SSF2_A_BALROG_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2_A_BALROG_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PORTRAITS_SHORT,    ARRAYSIZE(SSF2_A_BALROG_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_BALROG_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_BALROG_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PORTRAITS_START,    ARRAYSIZE(SSF2_A_BALROG_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PORTRAITS_HOLD,    ARRAYSIZE(SSF2_A_BALROG_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_VEGA_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PORTRAITS_JAB,        ARRAYSIZE(SSF2_A_VEGA_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PORTRAITS_STRONG,     ARRAYSIZE(SSF2_A_VEGA_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2_A_VEGA_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PORTRAITS_SHORT,      ARRAYSIZE(SSF2_A_VEGA_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_VEGA_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_VEGA_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PORTRAITS_START,      ARRAYSIZE(SSF2_A_VEGA_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PORTRAITS_HOLD,       ARRAYSIZE(SSF2_A_VEGA_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_CAMMY_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PORTRAITS_JAB,        ARRAYSIZE(SSF2_A_CAMMY_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PORTRAITS_STRONG,     ARRAYSIZE(SSF2_A_CAMMY_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2_A_CAMMY_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PORTRAITS_SHORT,      ARRAYSIZE(SSF2_A_CAMMY_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_CAMMY_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_CAMMY_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PORTRAITS_START,      ARRAYSIZE(SSF2_A_CAMMY_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PORTRAITS_HOLD,       ARRAYSIZE(SSF2_A_CAMMY_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_THAWK_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PORTRAITS_JAB,        ARRAYSIZE(SSF2_A_THAWK_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PORTRAITS_STRONG,     ARRAYSIZE(SSF2_A_THAWK_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2_A_THAWK_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PORTRAITS_SHORT,      ARRAYSIZE(SSF2_A_THAWK_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_THAWK_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_THAWK_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PORTRAITS_START,      ARRAYSIZE(SSF2_A_THAWK_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PORTRAITS_HOLD,       ARRAYSIZE(SSF2_A_THAWK_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_FEILONG_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PORTRAITS_JAB,        ARRAYSIZE(SSF2_A_FEILONG_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PORTRAITS_STRONG,     ARRAYSIZE(SSF2_A_FEILONG_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2_A_FEILONG_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PORTRAITS_SHORT,      ARRAYSIZE(SSF2_A_FEILONG_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_FEILONG_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_FEILONG_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PORTRAITS_START,      ARRAYSIZE(SSF2_A_FEILONG_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PORTRAITS_HOLD,       ARRAYSIZE(SSF2_A_FEILONG_PORTRAITS_HOLD) },
};

const sDescTreeNode SSF2_A_DEEJAY_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PORTRAITS_JAB,        ARRAYSIZE(SSF2_A_DEEJAY_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PORTRAITS_STRONG,     ARRAYSIZE(SSF2_A_DEEJAY_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2_A_DEEJAY_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PORTRAITS_SHORT,      ARRAYSIZE(SSF2_A_DEEJAY_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2_A_DEEJAY_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2_A_DEEJAY_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PORTRAITS_START,      ARRAYSIZE(SSF2_A_DEEJAY_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PORTRAITS_HOLD,       ARRAYSIZE(SSF2_A_DEEJAY_PORTRAITS_HOLD) },
};

const sGame_PaletteDataset SSF2_A_03_BONUS_NODE[] =
{
    { L"Character Select icons", 0x5a390, 0x5a590, indexSF2Sprites_Bonus, 0x23 },
};

const sDescTreeNode SSF2_A_03_BONUS_COLLECTION[] =
{
    { L"Palettes",          DESC_NODETYPE_TREE, (void*)SSF2_A_03_BONUS_NODE,          ARRAYSIZE(SSF2_A_03_BONUS_NODE) },
};

//////////////// Main sprite previews

const sGame_PaletteDataset SSF2_A_RYU_PALETTES_JAB[] =
{
    { L"Main Color", 0x13d0c, 0x13d2c, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x13d2c, 0x13d4c },
    { L"Hadoken", 0x13d4c, 0x13d6c },
};

const sGame_PaletteDataset SSF2_A_RYU_PALETTES_STRONG[] =
{
    { L"Main Color", 0x13d6e, 0x13d8e, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x13d8e, 0x13dae },
    { L"Hadoken", 0x13dae, 0x13dce },
};

const sGame_PaletteDataset SSF2_A_RYU_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x13dd0, 0x13df0, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x13df0, 0x13e10 },
    { L"Hadoken", 0x13e10, 0x13e30 },
};

const sGame_PaletteDataset SSF2_A_RYU_PALETTES_SHORT[] =
{
    { L"Main Color", 0x13e32, 0x13e52, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x13e52, 0x13e72 },
    { L"Hadoken", 0x13e72, 0x13e92 },
};

const sGame_PaletteDataset SSF2_A_RYU_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x13e94, 0x13eb4, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x13eb4, 0x13ed4 },
    { L"Hadoken", 0x13ed4, 0x13ef4 },
};

const sGame_PaletteDataset SSF2_A_RYU_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x13ef6, 0x13f16, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x13f16, 0x13f36 },
    { L"Hadoken", 0x13f36, 0x13f56 },
};

const sGame_PaletteDataset SSF2_A_RYU_PALETTES_START[] =
{
    { L"Main Color", 0x13f58, 0x13f78, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x13f78, 0x13f98 },
    { L"Hadoken", 0x13f98, 0x13fb8 },
};

const sGame_PaletteDataset SSF2_A_RYU_PALETTES_HOLD[] =
{
    { L"Main Color", 0x13fba, 0x13fda, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x13fda, 0x13ffa },
    { L"Hadoken", 0x13ffa, 0x1401a },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PALETTES_JAB[] =
{
    { L"Main Color", 0x1402c, 0x1404c, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PALETTES_STRONG[] =
{
    { L"Main Color", 0x1404e, 0x1406e, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x14070, 0x14090, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PALETTES_SHORT[] =
{
    { L"Main Color", 0x14092, 0x140b2, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x140b4, 0x140d4, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x140d6, 0x140f6, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PALETTES_START[] =
{
    { L"Main Color", 0x140f8, 0x14118, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2_A_EHONDA_PALETTES_HOLD[] =
{
    { L"Main Color", 0x1411a, 0x1413a, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PALETTES_JAB[] =
{
    { L"Main Color", 0x1414c, 0x1416c, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PALETTES_STRONG[] =
{
    { L"Main Color", 0x1416e, 0x1418e, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x14190, 0x141b0, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PALETTES_SHORT[] =
{
    { L"Main Color", 0x141b2, 0x141d2, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x141d4, 0x141f4, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x141f6, 0x14216, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PALETTES_START[] =
{
    { L"Main Color", 0x14218, 0x14238, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_PALETTES_HOLD[] =
{
    { L"Main Color", 0x1423a, 0x1425a, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PALETTES_JAB[] =
{
    { L"Main Color", 0x1426c, 0x1428c, indexSF2Sprites_Guile, 0x00 },
    // Unused { L"Extra 00", 0x1428c, 0x142ac },
    { L"Sonic Boom", 0x142ac, 0x142cc, indexSF2Sprites_Guile, 0x01 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PALETTES_STRONG[] =
{
    { L"Main Color", 0x142ce, 0x142ee, indexSF2Sprites_Guile, 0x00 },
    // Unused { L"Extra 00", 0x142ee, 0x1430e },
    { L"Sonic Boom", 0x1430e, 0x1432e, indexSF2Sprites_Guile, 0x01 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x14330, 0x14350, indexSF2Sprites_Guile, 0x00 },
    // Unused { L"Extra 00", 0x14350, 0x14370 },
    { L"Sonic Boom", 0x14370, 0x14390, indexSF2Sprites_Guile, 0x01 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PALETTES_SHORT[] =
{
    { L"Main Color", 0x14392, 0x143b2, indexSF2Sprites_Guile, 0x00 },
    // Unused { L"Extra 00", 0x143b2, 0x143d2 },
    { L"Sonic Boom", 0x143d2, 0x143f2, indexSF2Sprites_Guile, 0x01 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x143f4, 0x14414, indexSF2Sprites_Guile, 0x00 },
    // Unused { L"Extra 00", 0x14414, 0x14434 },
    { L"Sonic Boom", 0x14434, 0x14454, indexSF2Sprites_Guile, 0x01 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x14456, 0x14476, indexSF2Sprites_Guile, 0x00 },
    // Unused { L"Extra 00", 0x14476, 0x14496 },
    { L"Sonic Boom", 0x14496, 0x144b6, indexSF2Sprites_Guile, 0x01 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PALETTES_START[] =
{
    { L"Main Color", 0x144b8, 0x144d8, indexSF2Sprites_Guile, 0x00 },
    // Unused { L"Extra 00", 0x144d8, 0x144f8 },
    { L"Sonic Boom", 0x144f8, 0x14518, indexSF2Sprites_Guile, 0x01 },
};

const sGame_PaletteDataset SSF2_A_GUILE_PALETTES_HOLD[] =
{
    { L"Main Color", 0x1451a, 0x1453a, indexSF2Sprites_Guile, 0x00 },
    // Unused { L"Extra 00", 0x1453a, 0x1455a },
    { L"Sonic Boom", 0x1455a, 0x1457a, indexSF2Sprites_Guile, 0x01 },
};

const sGame_PaletteDataset SSF2_A_KEN_PALETTES_JAB[] =
{
    { L"Main Color", 0x1458c, 0x145ac, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x145ac, 0x145cc },
    { L"Hadoken", 0x145cc, 0x145ec },
};

const sGame_PaletteDataset SSF2_A_KEN_PALETTES_STRONG[] =
{
    { L"Main Color", 0x145ee, 0x1460e, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x1460e, 0x1462e },
    { L"Hadoken", 0x1462e, 0x1464e },
};

const sGame_PaletteDataset SSF2_A_KEN_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x14650, 0x14670, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x14670, 0x14690 },
    { L"Hadoken", 0x14690, 0x146b0 },
};

const sGame_PaletteDataset SSF2_A_KEN_PALETTES_SHORT[] =
{
    { L"Main Color", 0x146b2, 0x146d2, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x146d2, 0x146f2 },
    { L"Hadoken", 0x146f2, 0x14712 },
};

const sGame_PaletteDataset SSF2_A_KEN_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x14714, 0x14734, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x14734, 0x14754 },
    { L"Hadoken", 0x14754, 0x14774 },
};

const sGame_PaletteDataset SSF2_A_KEN_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x14776, 0x14796, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x14796, 0x147b6 },
    { L"Hadoken", 0x147b6, 0x147d6 },
};

const sGame_PaletteDataset SSF2_A_KEN_PALETTES_START[] =
{
    { L"Main Color", 0x147d8, 0x147f8, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x147f8, 0x14818 },
    { L"Hadoken", 0x14818, 0x14838 },
};

const sGame_PaletteDataset SSF2_A_KEN_PALETTES_HOLD[] =
{
    { L"Main Color", 0x1483a, 0x1485a, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x1485a, 0x1487a },
    { L"Hadoken", 0x1487a, 0x1489a },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PALETTES_JAB[] =
{
    { L"Main Color", 0x148ac, 0x148cc, indexSF2Sprites_ChunLi, 0x00 },
    // Unused { L"Extra 00", 0x148cc, 0x148ec },
    { L"Kikouken", 0x148ec, 0x1490c, indexSF2Sprites_ChunLi, 0x01 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PALETTES_STRONG[] =
{
    { L"Main Color", 0x1490e, 0x1492e, indexSF2Sprites_ChunLi, 0x00 },
    // Unused { L"Extra 00", 0x1492e, 0x1494e },
    { L"Kikouken", 0x1494e, 0x1496e, indexSF2Sprites_ChunLi, 0x01 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x14970, 0x14990, indexSF2Sprites_ChunLi, 0x00 },
    // Unused { L"Extra 00", 0x14990, 0x149b0 },
    { L"Kikouken", 0x149b0, 0x149d0, indexSF2Sprites_ChunLi, 0x01 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PALETTES_SHORT[] =
{
    { L"Main Color", 0x149d2, 0x149f2, indexSF2Sprites_ChunLi, 0x00 },
    // Unused { L"Extra 00", 0x149f2, 0x14a12 },
    { L"Kikouken", 0x14a12, 0x14a32, indexSF2Sprites_ChunLi, 0x01 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x14a34, 0x14a54, indexSF2Sprites_ChunLi, 0x00 },
    // Unused { L"Extra 00", 0x14a54, 0x14a74 },
    { L"Kikouken", 0x14a74, 0x14a94, indexSF2Sprites_ChunLi, 0x01 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x14a96, 0x14ab6, indexSF2Sprites_ChunLi, 0x00 },
    // Unused { L"Extra 00", 0x14ab6, 0x14ad6 },
    { L"Kikouken", 0x14ad6, 0x14af6, indexSF2Sprites_ChunLi, 0x01 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PALETTES_START[] =
{
    { L"Main Color", 0x14af8, 0x14b18, indexSF2Sprites_ChunLi, 0x00 },
    // Unused { L"Extra 00", 0x14b18, 0x14b38 },
    { L"Kikouken", 0x14b38, 0x14b58, indexSF2Sprites_ChunLi, 0x01 },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_PALETTES_HOLD[] =
{
    { L"Main Color", 0x14b5a, 0x14b7a, indexSF2Sprites_ChunLi, 0x00 },
    // Unused { L"Extra 00", 0x14b7a, 0x14b9a },
    { L"Kikouken", 0x14b9a, 0x14bba, indexSF2Sprites_ChunLi, 0x01 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PALETTES_JAB[] =
{
    { L"Main Color", 0x14bcc, 0x14bec, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PALETTES_STRONG[] =
{
    { L"Main Color", 0x14bee, 0x14c0e, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x14c10, 0x14c30, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PALETTES_SHORT[] =
{
    { L"Main Color", 0x14c32, 0x14c52, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x14c54, 0x14c74, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x14c76, 0x14c96, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PALETTES_START[] =
{
    { L"Main Color", 0x14c98, 0x14cb8, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2_A_ZANGIEF_PALETTES_HOLD[] =
{
    { L"Main Color", 0x14cba, 0x14cda, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PALETTES_JAB[] =
{
    { L"Main Color", 0x14cec, 0x14d0c, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PALETTES_STRONG[] =
{
    { L"Main Color", 0x14d0e, 0x14d2e, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x14d30, 0x14d50, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PALETTES_SHORT[] =
{
    { L"Main Color", 0x14d52, 0x14d72, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x14d74, 0x14d94, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x14d96, 0x14db6, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PALETTES_START[] =
{
    { L"Main Color", 0x14db8, 0x14dd8, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_PALETTES_HOLD[] =
{
    { L"Main Color", 0x14dda, 0x14dfa, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PALETTES_JAB[] =
{
    { L"Main Color", 0x14e0c, 0x14e2c, indexSF2Sprites_Bison, 0x00, &pairNext3 },
    { L"Cape", 0x14e2c, 0x14e4c, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Crusher", 0x14e4c, 0x14e8c, indexSF2Sprites_Bison, 0x03 },
    { L"Psycho Attacks", 0x14e8c, 0x14eac, indexSF2Sprites_Bison, 0x02, &pairPrevious3 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PALETTES_STRONG[] =
{
    { L"Main Color", 0x14f0e, 0x14f2e, indexSF2Sprites_Bison, 0x00, &pairNext3 },
    { L"Cape", 0x14f2e, 0x14f4e, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Crusher", 0x14f4e, 0x14f8e, indexSF2Sprites_Bison, 0x03 },
    { L"Psycho Attacks", 0x14f8e, 0x14fae, indexSF2Sprites_Bison, 0x02, &pairPrevious3 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x15010, 0x15030, indexSF2Sprites_Bison, 0x00, &pairNext3 },
    { L"Cape", 0x15030, 0x15050, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Crusher", 0x15050, 0x15090, indexSF2Sprites_Bison, 0x03 },
    { L"Psycho Attacks", 0x15090, 0x150b0, indexSF2Sprites_Bison, 0x02, &pairPrevious3 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PALETTES_SHORT[] =
{
    { L"Main Color", 0x15112, 0x15132, indexSF2Sprites_Bison, 0x00, &pairNext3 },
    { L"Cape", 0x15132, 0x15152, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Crusher", 0x15152, 0x15192, indexSF2Sprites_Bison, 0x03 },
    { L"Psycho Attacks", 0x15192, 0x151b2, indexSF2Sprites_Bison, 0x02, &pairPrevious3 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x15214, 0x15234, indexSF2Sprites_Bison, 0x00, &pairNext3 },
    { L"Cape", 0x15234, 0x15254, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Crusher", 0x15254, 0x15294, indexSF2Sprites_Bison, 0x03 },
    { L"Psycho Attacks", 0x15294, 0x152b4, indexSF2Sprites_Bison, 0x02, &pairPrevious3 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x15316, 0x15336, indexSF2Sprites_Bison, 0x00, &pairNext3 },
    { L"Cape", 0x15336, 0x15356, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Crusher", 0x15356, 0x15396, indexSF2Sprites_Bison, 0x03 },
    { L"Psycho Attacks", 0x15396, 0x153b6, indexSF2Sprites_Bison, 0x02, &pairPrevious3 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PALETTES_START[] =
{
    { L"Main Color", 0x15418, 0x15438, indexSF2Sprites_Bison, 0x00, &pairNext3 },
    { L"Cape", 0x15438, 0x15458, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Crusher", 0x15458, 0x15498, indexSF2Sprites_Bison, 0x03 },
    { L"Psycho Attacks", 0x15498, 0x154b8, indexSF2Sprites_Bison, 0x02, &pairPrevious3 },
};

const sGame_PaletteDataset SSF2_A_MBISON_PALETTES_HOLD[] =
{
    { L"Main Color", 0x1551a, 0x1553a, indexSF2Sprites_Bison, 0x00, &pairNext3 },
    { L"Cape", 0x1553a, 0x1555a, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Crusher", 0x1555a, 0x1559a, indexSF2Sprites_Bison, 0x03 },
    { L"Psycho Attacks", 0x1559a, 0x155ba, indexSF2Sprites_Bison, 0x02, &pairPrevious3 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PALETTES_JAB[] =
{
    { L"Main Color", 0x1562c, 0x1564c, indexSF2Sprites_Sagat, 0x00 },
    // Unused { L"Extra 00", 0x1564c, 0x1566c },
    { L"Tiger Shot", 0x1566c, 0x1568c, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PALETTES_STRONG[] =
{
    { L"Main Color", 0x1568e, 0x156ae, indexSF2Sprites_Sagat, 0x00 },
    // Unused { L"Extra 00", 0x156ae, 0x156ce },
    { L"Tiger Shot", 0x156ce, 0x156ee, indexSF2Sprites_Sagat, 0x01 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x156f0, 0x15710, indexSF2Sprites_Sagat, 0x00 },
    // Unused { L"Extra 00", 0x15710, 0x15730 },
    { L"Tiger Shot", 0x15730, 0x15750, indexSF2Sprites_Sagat, 0x01 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PALETTES_SHORT[] =
{
    { L"Main Color", 0x15752, 0x15772, indexSF2Sprites_Sagat, 0x00 },
    // Unused { L"Extra 00", 0x15772, 0x15792 },
    { L"Tiger Shot", 0x15792, 0x157b2, indexSF2Sprites_Sagat, 0x01 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x157b4, 0x157d4, indexSF2Sprites_Sagat, 0x00 },
    // Unused { L"Extra 00", 0x157d4, 0x157f4 },
    { L"Tiger Shot", 0x157f4, 0x15814, indexSF2Sprites_Sagat, 0x01 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x15816, 0x15836, indexSF2Sprites_Sagat, 0x00 },
    // Unused { L"Extra 00", 0x15836, 0x15856 },
    { L"Tiger Shot", 0x15856, 0x15876, indexSF2Sprites_Sagat, 0x01 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PALETTES_START[] =
{
    { L"Main Color", 0x15878, 0x15898, indexSF2Sprites_Sagat, 0x00 },
    // Unused { L"Extra 00", 0x15898, 0x158b8 },
    { L"Tiger Shot", 0x158b8, 0x158d8, indexSF2Sprites_Sagat, 0x01 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_PALETTES_HOLD[] =
{
    { L"Main Color", 0x158da, 0x158fa, indexSF2Sprites_Sagat, 0x00 },
    // Unused { L"Extra 00", 0x158fa, 0x1591a },
    { L"Tiger Shot", 0x1591a, 0x1593a, indexSF2Sprites_Sagat, 0x01 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PALETTES_JAB[] =
{
    { L"Main Color", 0x1594c, 0x1596c, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PALETTES_STRONG[] =
{
    { L"Main Color", 0x1596e, 0x1598e, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x15990, 0x159b0, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PALETTES_SHORT[] =
{
    { L"Main Color", 0x159b2, 0x159d2, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x159d4, 0x159f4, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x159f6, 0x15a16, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PALETTES_START[] =
{
    { L"Main Color", 0x15a18, 0x15a38, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2_A_BALROG_PALETTES_HOLD[] =
{
    { L"Main Color", 0x15a3a, 0x15a5a, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PALETTES_JAB[] =
{
    { L"Main Color", 0x15a6c, 0x15a8c, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PALETTES_STRONG[] =
{
    { L"Main Color", 0x15a8e, 0x15aae, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x15ab0, 0x15ad0, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PALETTES_SHORT[] =
{
    { L"Main Color", 0x15ad2, 0x15af2, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x15af4, 0x15b14, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x15b16, 0x15b36, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PALETTES_START[] =
{
    { L"Main Color", 0x15b38, 0x15b58, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2_A_VEGA_PALETTES_HOLD[] =
{
    { L"Main Color", 0x15b5a, 0x15b7a, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PALETTES_JAB[] =
{
    { L"Main Color", 0x15b8c, 0x15bac, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PALETTES_STRONG[] =
{
    { L"Main Color", 0x15bae, 0x15bce, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x15bd0, 0x15bf0, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PALETTES_SHORT[] =
{
    { L"Main Color", 0x15bf2, 0x15c12, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x15c14, 0x15c34, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x15c36, 0x15c56, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PALETTES_START[] =
{
    { L"Main Color", 0x15c58, 0x15c78, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_PALETTES_HOLD[] =
{
    { L"Main Color", 0x15c7a, 0x15c9a, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PALETTES_JAB[] =
{
    { L"Main Color", 0x15cac, 0x15ccc, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PALETTES_STRONG[] =
{
    { L"Main Color", 0x15cce, 0x15cee, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x15cf0, 0x15d10, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PALETTES_SHORT[] =
{
    { L"Main Color", 0x15d12, 0x15d32, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x15d34, 0x15d54, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x15d56, 0x15d76, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PALETTES_START[] =
{
    { L"Main Color", 0x15d78, 0x15d98, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2_A_THAWK_PALETTES_HOLD[] =
{
    { L"Main Color", 0x15d9a, 0x15dba, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PALETTES_JAB[] =
{
    { L"Main Color", 0x15dcc, 0x15dec, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PALETTES_STRONG[] =
{
    { L"Main Color", 0x15dee, 0x15e0e, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x15e10, 0x15e30, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PALETTES_SHORT[] =
{
    { L"Main Color", 0x15e32, 0x15e52, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x15e54, 0x15e74, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x15e76, 0x15e96, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PALETTES_START[] =
{
    { L"Main Color", 0x15e98, 0x15eb8, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_PALETTES_HOLD[] =
{
    { L"Main Color", 0x15eba, 0x15eda, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PALETTES_JAB[] =
{
    { L"Main Color", 0x15eec, 0x15f0c, indexSF2Sprites_DeeJay, 0x00 },
    // Unused { L"Extra 00", 0x15f0c, 0x15f2c },
    { L"Air Slasher", 0x15f2c, 0x15f4c, indexSF2Sprites_DeeJay, 0x01 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PALETTES_STRONG[] =
{
    { L"Main Color", 0x15f4e, 0x15f6e, indexSF2Sprites_DeeJay, 0x00 },
    // Unused { L"Extra 00", 0x15f6e, 0x15f8e },
    { L"Air Slasher", 0x15f8e, 0x15fae, indexSF2Sprites_DeeJay, 0x01 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PALETTES_FIERCE[] =
{
    { L"Main Color", 0x15fb0, 0x15fd0, indexSF2Sprites_DeeJay, 0x00 },
    // Unused { L"Extra 00", 0x15fd0, 0x15ff0 },
    { L"Air Slasher", 0x15ff0, 0x16010, indexSF2Sprites_DeeJay, 0x01 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PALETTES_SHORT[] =
{
    { L"Main Color", 0x16012, 0x16032, indexSF2Sprites_DeeJay, 0x00 },
    // Unused { L"Extra 00", 0x16032, 0x16052 },
    { L"Air Slasher", 0x16052, 0x16072, indexSF2Sprites_DeeJay, 0x01 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PALETTES_FORWARD[] =
{
    { L"Main Color", 0x16074, 0x16094, indexSF2Sprites_DeeJay, 0x00 },
    // Unused { L"Extra 00", 0x16094, 0x160b4 },
    { L"Air Slasher", 0x160b4, 0x160d4, indexSF2Sprites_DeeJay, 0x01 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PALETTES_ROUNDHOUSE[] =
{
    { L"Main Color", 0x160d6, 0x160f6, indexSF2Sprites_DeeJay, 0x00 },
    // Unused { L"Extra 00", 0x160f6, 0x16116 },
    { L"Air Slasher", 0x16116, 0x16136, indexSF2Sprites_DeeJay, 0x01 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PALETTES_START[] =
{
    { L"Main Color", 0x16138, 0x16158, indexSF2Sprites_DeeJay, 0x00 },
    // Unused { L"Extra 00", 0x16158, 0x16178 },
    { L"Air Slasher", 0x16178, 0x16198, indexSF2Sprites_DeeJay, 0x01 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_PALETTES_HOLD[] =
{
    { L"Main Color", 0x1619a, 0x161ba, indexSF2Sprites_DeeJay, 0x00 },
    // Unused { L"Extra 00", 0x161ba, 0x161da },
    { L"Air Slasher", 0x161da, 0x161fa, indexSF2Sprites_DeeJay, 0x01 },
};

// 07 Stages: these are adapted from the SSF2T 08 stages

const sGame_PaletteDataset SSF2_A_RYU_STAGE_NODE_07[] =
{
    { L"Sky",           0x03c0 - 0x02, 0x03e0 - 0x02, indexSF2Sprites_Stages, 0x08, &pairFullyLinkedNode },
    { L"Wall",          0xfffe, 0x1009e, indexSF2Sprites_Stages, 0x09 },
    { L"Foreground",    0x8000 - 0x02, 0x8120 - 0x02, indexSF2Sprites_Stages, 0x0a },
};

const sGame_PaletteDataset SSF2_A_EHONDA_STAGE_NODE_07[] =
{
    { L"floor", 0x8400 - 0x02, 0x8400 + 0x1e, indexSF2Sprites_Stages, 0x7d, &pairFullyLinkedNode },
    { L"ceiling", 0x8420 - 0x02, 0x8420 + 0x1e, indexSF2Sprites_Stages, 0x7e },
    { L"floor, background", 0x8440 - 0x02, 0x8440 + 0x1e, indexSF2Sprites_Stages, 0x7f },

    // additional shift of -0x400
    { L"wall painting", 0x103fe, 0x1041e, indexSF2Sprites_Stages, 0x81 },
    { L"wall tiling (3rd row)", 0x1041e, 0x1043e, indexSF2Sprites_Stages, 0x82 },
    { L"wall color (above door)", 0x1043e, 0x1045e, indexSF2Sprites_Stages, 0x83 },
    { L"wall tiling (1st row) + wall color (around the door) + step near the wall", 0x105fe, 0x1061e, indexSF2Sprites_Stages, 0x85 },
    { L"wall tiling (2nd row)", 0x1061e, 0x1063e, indexSF2Sprites_Stages, 0x86 },
    { L"wall tiling (4th row)", 0x1063e, 0x1065e, indexSF2Sprites_Stages, 0x87 },
    { L"step near wall (parts with the wood props)", 0x1065e, 0x1067e, indexSF2Sprites_Stages, 0x88 },
    { L"step near wall", 0x1067e, 0x1069e, indexSF2Sprites_Stages, 0x89 },
    { L"door (upper part of the red area)", 0x106de, 0x106fe, indexSF2Sprites_Stages, 0x8a },
    { L"door (lower part of the red area)", 0x106fe, 0x1071e, indexSF2Sprites_Stages, 0x8b },
    { L"door (glass area - upper part)", 0x1071e, 0x1073e, indexSF2Sprites_Stages, 0x8c },
    { L"door (between red area and glass part)", 0x1073e, 0x1075e, indexSF2Sprites_Stages, 0x8d },

    // later in the rom, but here for layering
        { L"wall painting (end round animation - frame 1)", 0x1055e, 0x1057e, indexSF2Sprites_Stages, 0x84 },
        { L"wall painting (end round animation - frame 2)", 0x1057e, 0x1059e, indexSF2Sprites_Stages, 0x84 },
    { L"wall painting (top)", 0x105de, 0x105fe, indexSF2Sprites_Stages, 0x84 },

        { L"wall painting (end round animation - frame 1)", 0x1075e, 0x1077e, indexSF2Sprites_Stages, 0x8e },
        { L"wall painting (end round animation - frame 2)", 0x1077e, 0x1079e, indexSF2Sprites_Stages, 0x8e },
    { L"wall painting (center)", 0x107de, 0x107fe, indexSF2Sprites_Stages, 0x8e },

    { L"side of the pool", 0x0600 - 0x02, 0x0600 + 0x1e, indexSF2Sprites_Stages, 0x7c },
    { L"pool (+water dripping animation)", 0x8480 - 0x02, 0x8480 + 0x1e, indexSF2Sprites_Stages, 0x80 },
};

const sGame_PaletteDataset SSF2_A_BLANKA_STAGE_NODE_07[] =
{
    { L"Blanka Stage 1/6", 0x07de, 0x083e, indexSF2Sprites_Stages, 0xab, &pairFullyLinkedNode },

    { L"Blanka Stage 2/6", 0x87fe, 0x895e, indexSF2Sprites_Stages, 0xac },

    { L"Blanka Stage 3/6 left water sparkle 1/3", 0x89fe, 0x8a1e, indexSF2Sprites_Stages, 0xad },
        { L"Blanka Stage 3/6 left water sparkle 2/3", 0x8a1e, 0x8a3e, indexSF2Sprites_Stages, 0xad },
        { L"Blanka Stage 3/6 left water sparkle 3/3", 0x8a3e, 0x8a5e, indexSF2Sprites_Stages, 0xad },

    { L"Blanka Stage 4/6 right water sparkle 1/4", 0x8a5e, 0x8a7e, indexSF2Sprites_Stages, 0x27 },
        { L"Blanka Stage 4/6 right water sparkle 2/4", 0x8a7e, 0x8a9e, indexSF2Sprites_Stages, 0x27 },
        { L"Blanka Stage 4/6 right water sparkle 3/4", 0x8a9e, 0x8abe, indexSF2Sprites_Stages, 0x27 },
        { L"Blanka Stage 4/6 right water sparkle 4/4", 0x8abe, 0x8ade, indexSF2Sprites_Stages, 0x27 },

    { L"Blanka Stage 5/6 tree and right side stuff", 0x107fe, 0x109fe, indexSF2Sprites_Stages, 0x28 },

    { L"Blanka Stage 6/6", 0x109fe, 0x10a3e, indexSF2Sprites_Stages, 0xae },
};

const sGame_PaletteDataset SSF2_A_GUILE_STAGE_NODE_07[] =
{
    { L"Guile Stage 1/8", 0x0bfe, 0x0cde, indexSF2Sprites_Stages, 0x95, &pairFullyLinkedNode },

    { L"Guile Stage 2/8", 0x8bfe, 0x8cde, indexSF2Sprites_Stages, 0x96 },
    { L"Guile Stage 3/8 ground tiles", 0x8cde, 0x8d1e, indexSF2Sprites_Stages, 0x97 },
    { L"Guile Stage 4/8 plane bits", 0x8d3e, 0x8d5e, indexSF2Sprites_Stages, 0x98 },
    { L"Guile Stage 5/8 sky", 0x8dfe, 0x8e1e, indexSF2Sprites_Stages, 0x99 },

    { L"Guile Stage 6/8", 0x10bfe, 0x10c7e, indexSF2Sprites_Stages, 0x9a },
    { L"Guile Stage 7/8", 0x10c7e, 0x10dbe, indexSF2Sprites_Stages, 0x9b },
    { L"Guile Stage 8/8 stereo", 0x10fbe, 0x10ffe, indexSF2Sprites_Stages, 0x9c },
};

const sGame_PaletteDataset SSF2_A_KEN_STAGE_NODE_07[] =
{
    { L"Ken Background/Foreground", 0x8FFE, 0x91fe, indexSF2Sprites_Stages, 0x15 },
    { L"Ken Boat 1/2", 0x10ffe, 0x111fe, indexSF2Sprites_Stages, 0x16, &pairNext },
    { L"Ken Boat 2/2", 0x111fe, 0x113be, indexSF2Sprites_Stages, 0x17, &pairPrevious },
};

const sGame_PaletteDataset SSF2_A_CHUNLI_STAGE_NODE_07[] =
{
    { L"Chun-Li's Stage 1/5", 0x113fe, 0x1155e, indexSF2Sprites_Stages, 0x2c, &pairFullyLinkedNode },
    { L"Chun-Li's Stage 2/5", 0x115fe, 0x1161e, indexSF2Sprites_Stages, 0x2d },
    { L"Chun-Li's Stage 3/5", 0x93fe, 0x95fe, indexSF2Sprites_Stages, 0x2e },
    { L"Chun-Li's Stage 4/5", 0x95fe, 0x979e, indexSF2Sprites_Stages, 0x2f },
    { L"Chun-Li's Stage 5/5", 0x97de, 0x97fe, indexSF2Sprites_Stages, 0x30 },
};

const sGame_PaletteDataset SSF2_A_GIEF_STAGE_NODE_07[] =
{
    { L"Zangief's Stage 1/4", 0x117fe, 0x1199e, indexSF2Sprites_Stages, 0xa7, &pairFullyLinkedNode },
    { L"Zangief's Stage 2/4", 0x97fe, 0x995e, indexSF2Sprites_Stages, 0xa8 },
    { L"Zangief's Stage 3/4", 0x9a5e, 0x9bfe, indexSF2Sprites_Stages, 0xa9 },
    { L"Zangief's Stage 4/4", 0x17de, 0x185e, indexSF2Sprites_Stages, 0xaa },
};

const sGame_PaletteDataset SSF2_A_DHALSIM_STAGE_NODE_07[] =
{
    { L"BG wall painting", 0x9C00 - 0x2, 0x9C00 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x59, &pairFullyLinkedNode },
    { L"BG curtains + lamp", 0x9C20 - 0x2, 0x9C20 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x5a },
    { L"BG columns", 0x9C40 - 0x2, 0x9C40 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x5b },
    { L"BG elephant (static part)", 0x9C60 - 0x2, 0x9C60 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x5c },
    { L"BG topmost curtain + column piece", 0x9C80 - 0x2, 0x9C80 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x5d },
    { L"BG stairs", 0x9CA0 - 0x2, 0x9CA0 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x5e },
    { L"parallaxed ground, stones", 0x9CC0 - 0x2, 0x9CC0 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x5f },
    { L"BG curtains + BG elephant ivory fangs (static part)", 0x9CE0 - 0x2, 0x9CE0 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x60 },
    { L"BG purpley grid", 0x9D00 - 0x2, 0x9D00 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x61 },
    { L"BG elephant feet", 0x9D20 - 0x2, 0x9D20 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x62 },
    { L"?", 0x9D40 - 0x2, 0x9D40 + 0x20 - 0x2 },
    { L"BG wall, after the purple grid", 0x9D60 - 0x2, 0x9D60 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x63 },

    { L"BG elephant head + curtain 1", 0x9D80 - 0x2, 0x9D80 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x64 },
    { L"BG elephant head + curtain 2", 0x9DA0 - 0x2, 0x9DA0 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x65 },
    { L"BG elephant head + curtain 3", 0x9DC0 - 0x2, 0x9DC0 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x66 },
    { L"BG elephant head + curtain 4", 0x9DE0 - 0x2, 0x9DE0 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x67 },
    { L"BG elephant head + curtain 5", 0x9E00 - 0x2, 0x9E00 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x68 },
    { L"BG elephant trunk + curtain", 0x9E20 - 0x2, 0x9E20 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x69 },
    { L"BG elephant back + purpley grid", 0x9E40 - 0x2, 0x9E40 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x6a },
    { L"BG elephant back + purpley grid", 0x9E60 - 0x2, 0x9E60 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x6b },
    { L"BG elephant back + purpley grid", 0x9E80 - 0x2, 0x9E80 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x6c },
    { L"BG wall, after the purple grid, but on the footer", 0x9EA0 - 0x2, 0x9EA0 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x6d },

    { L"parallaxed ground, carpet", 0x9EC0 - 0x2, 0x9EC0 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x6e },
    { L"parallaxed ground, border between carpet and stones", 0x9EE0 - 0x2, 0x9EE0 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x6f },
    { L"parallaxed ground, border between carpet and stones, topmost part", 0x9F00 - 0x2, 0x9F00 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x70 },
    { L"BG wall painting, frame/border", 0x9F20 - 0x2, 0x9F20 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x71 },
    { L"BG wall painting, topmost part", 0x9F40 - 0x2, 0x9F40 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x72 },
    { L"BG curtains above the wall painting", 0x9F60 - 0x2, 0x9F60 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x73 },
    { L"BG wall painting, frame/border, topmost part", 0x9F80 - 0x2, 0x9F80 + 0x20 - 0x2, indexSF2Sprites_Stages, 0x74 },
            { L"BG elephant trunk, when it's raised (in front of column)", 0x9FA0 - 0x2, 0x9FA0 + 0x20 - 0x2 },
            { L"BG elephant trunk, when it's raised (in front of curtain)", 0x9FC0 - 0x2, 0x9FC0 + 0x20 - 0x2 },
            { L"BG elephant trunk, when it's raised (in front of foremost column)", 0x9FE0 - 0x2, 0x9FE0 + 0x20 - 0x2 },

    { L"Mid layer elephant", 0x11bfe, 0x11c1e, indexSF2Sprites_Stages, 0x75 },
    { L"Mid layer elephant, legs/shadow", 0x11c1e, 0x11c3e, indexSF2Sprites_Stages, 0x76 },

    { L"Front layer elephant", 0x1c00, 0x1c40, indexSF2Sprites_Stages, 0x77 },
};

const sGame_PaletteDataset SSF2_A_MBISON_STAGE_NODE_07[] =
{
    { L"M.Bison Stage 1/5", 0x9ffe, 0xa1fe, indexSF2Sprites_Stages, 0x9d, &pairFullyLinkedNode },
    { L"M.Bison Stage 2/5", 0xa1fe, 0xa3fe, indexSF2Sprites_Stages, 0x9e },
    { L"M.Bison Stage 3/5 Bell", 0x1201e, 0x1221e, indexSF2Sprites_Stages, 0x9f },
    { L"M.Bison Stage 4/5", 0x1221e, 0x123fe, indexSF2Sprites_Stages, 0xa0 },
    { L"M.Bison Stage 5/5 Statue", 0x1fe0, 0x2060, indexSF2Sprites_Stages, 0xa1 },
};

const sGame_PaletteDataset SSF2_A_SAGAT_STAGE_NODE_07[] =
{
    { L"Background",    0x123fe, 0x1251e, indexSF2Sprites_Stages, 0x00, &pairFullyLinkedNode },
    { L"Midground",     0x2600 - 0x02, 0x2800 - 0x02, indexSF2Sprites_Stages, 0x01 },
    { L"Buddha 1",      0xA400 - 0x02, 0xA600 - 0x02, indexSF2Sprites_Stages, 0x04 },
    { L"Buddha 2",      0xA600 - 0x02, 0xA760 - 0x02, indexSF2Sprites_Stages, 0x03 },
};

const sGame_PaletteDataset SSF2_A_BALROG_STAGE_NODE_07[] =
{
    { L"Wedding Chapel background 1/2", 0x28de, 0x295e, indexSF2Sprites_Stages, 0x1d, &pairFullyLinkedNode },
    // We only have coverage for one line here
    { L"Wedding Chapel background 2/2", 0x2A9e, 0x2B5e, indexSF2Sprites_Stages, 0x1e },
    //{ L"Unused? 1/5", 0x62Abe, 0x62ade },
    //{ L"Unused? 2/5", 0x62Ade, 0x62afe },
    //{ L"Unused? 3/5", 0x62Afe, 0x62B1e },
    //{ L"Unused? 4/5", 0x62b1e, 0x62B3e },
    //{ L"Unused? 5/5", 0x62b3e, 0x62B5e },

    { L"Street", 0x27fe, 0x281e, indexSF2Sprites_Stages, 0x25 },
    // This also should be chopped up: there's multiple animation cycles here
    { L"Casino signs", 0xA91e, 0xaabe, indexSF2Sprites_Stages, 0x1f },
    // This also should be chopped up: there's multiple animation cycles here
    { L"Ground / casinos", 0xaade, 0xabfe, indexSF2Sprites_Stages, 0x20 },
    { L"Cars / people", 0x1287e, 0x129fe, indexSF2Sprites_Stages, 0x21 },
    { L"Guy's torso", 0x12a7e, 0x12a9e, indexSF2Sprites_Stages, 0x22 },
    { L"Green car hood", 0x12afe, 0x12b1e, indexSF2Sprites_Stages, 0x23 },
    { L"Blue car hood", 0x12b3e, 0x12b5e, indexSF2Sprites_Stages, 0x24 },
    { L"Unused? 1/2", 0x12b5e, 0x12b7e },
    { L"Unused? 2/2", 0x12bbe, 0x12bde  },
    // This also should be chopped up: there's multiple animation cycles here
    { L"Side casino signs", 0xA7Fe, 0xA8Fe, indexSF2Sprites_Stages, 0x1c },
};

const sGame_PaletteDataset SSF2_A_VEGA_STAGE_NODE_07[] =
{
    { L"Wall sign, part 1 (\"Meson\")", 0xAC00 - 0x02, 0xAC20 - 0x02, indexSF2Sprites_Stages, 0x32, &pairFullyLinkedNode },
        { L"Wall sign, part 2 (\"Meson de\")", 0xAC20 - 0x02, 0xAC40 - 0x02, indexSF2Sprites_Stages, 0x32 },
        { L"Wall sign, part 3 (\"Meson de la\")", 0xAC40 - 0x02, 0xAC60 - 0x02, indexSF2Sprites_Stages, 0x32 },
        { L"Wall sign, part 5 (blank)", 0xAC80 - 0x02, 0xACA0 - 0x02, indexSF2Sprites_Stages, 0x32 },
        // putting last for layering
        { L"Wall sign, part 4 (\"Meson de la Taberna\")", 0xAC60 - 0x02, 0xAC80 - 0x02, indexSF2Sprites_Stages, 0x32 },
    { L"Foreground wall, stairs (darkest shade)", 0xACA0 - 0x02, 0xACC0 - 0x02, indexSF2Sprites_Stages, 0x33 },
        { L"Foreground wall, stairs (middle shade)", 0xACC0 - 0x02, 0xACE0 - 0x02, indexSF2Sprites_Stages, 0x33 },
        { L"Foreground wall, stairs (lightest shade)", 0xACE0 - 0x02, 0xAD00 - 0x02, indexSF2Sprites_Stages, 0x33 },
    { L"Background wall, lamp wall (middle shade)", 0xAD00 - 0x02, 0xAD20 - 0x02, indexSF2Sprites_Stages, 0x34 },
        { L"Background wall, lamp wall (lightest shade)", 0xAD20 - 0x02, 0xAD40 - 0x02, indexSF2Sprites_Stages, 0x34 },
        { L"Background wall, lamp wall (darkest shade)", 0xAD40 - 0x02, 0xAD60 - 0x02, indexSF2Sprites_Stages, 0x34 },
        // { L"Unused", 0xAD60 - 0x02, 0xAD80 - 0x02 },
    { L"Foreground wall, lamp wall (darkest shade)", 0xAD80 - 0x02, 0xADA0 - 0x02, indexSF2Sprites_Stages, 0x35 },
        { L"Foreground wall, lamp wall (middle shade)", 0xADA0 - 0x02, 0xADC0 - 0x02, indexSF2Sprites_Stages, 0x35 },
        { L"Foreground wall, lamp wall (lightest shade)", 0xADC0 - 0x02, 0xADE0 - 0x02, indexSF2Sprites_Stages, 0x35 },
    { L"Foreground wall, footer + ground", 0xADE0 - 0x02, 0xAE00 - 0x02, indexSF2Sprites_Stages, 0x36 },
        { L"????", 0xAE00 - 0x02, 0xAE20 - 0x02 },
        { L"????", 0xAE20 - 0x02, 0xAE40 - 0x02 },
        // { L"Unused", 0xAE40 - 0x02, 0xAE60 - 0x02 },
        // { L"Unused", 0xAE60 - 0x02, 0xAE80 - 0x02 },
        // { L"Unused", 0xAE80 - 0x02, 0xAEA0 - 0x02 },
        // { L"Unused", 0xAEA0 - 0x02, 0xAEC0 - 0x02 },
        // { L"Unused", 0xAEC0 - 0x02, 0xAEE0 - 0x02 },
    { L"Background wall, archway lower part + people + red trimming on top of Foreground wall", 0xAEE0 - 0x02, 0xAF00 - 0x02, indexSF2Sprites_Stages, 0x37 },
    { L"Background wall, archway upper part", 0xAF00 - 0x02, 0xAF20 - 0x02, indexSF2Sprites_Stages, 0x38 },
    { L"Background wall, torero & bull painting", 0xAF20 - 0x02, 0xAF40 - 0x02, indexSF2Sprites_Stages, 0x39 },
    { L"Unused, but in ram it will have the values of palettes 8, 9 & A (BG lamp wall)", 0xAF40 - 0x02, 0xAF60 - 0x02 },
    { L"Background wall, torero & bull painting (footer) + red trimming on top of Foreground wall + side wall pieces", 0xAF60 - 0x02, 0xAF80 - 0x02, indexSF2Sprites_Stages, 0x3a },
        { L"Unused, but in ram it will have the values of palettes 0 - 0x02, 1, 2, 3 & 4 (Wall sign)", 0xAF80 - 0x02, 0xAFA0 - 0x02 },
        { L"Unused", 0xAFA0 - 0x02, 0xAFC0 - 0x02 },
        { L"Unused from CPS1", 0xAFC0 - 0x02, 0xAFE0 - 0x02 },
    { L"Parallaxed ground", 0xAFE0 - 0x02, 0xB000 - 0x02, indexSF2Sprites_Stages, 0x3b },
        //{ L"Unused", 0xB000 - 0x02, 0xB020 - 0x02 },
        //{ L"Unused", 0xB020 - 0x02, 0xB040 - 0x02 },
        //{ L"Unused", 0xB040 - 0x02, 0xB060 - 0x02 },
        //{ L"Unused", 0xB060 - 0x02, 0xB080 - 0x02 },

        // { L"Unused", 0x13000 - 0x02, 0x13020 - 0x02 },
        // { L"Unused", 0x13020 - 0x02, 0x13040 - 0x02 },
        // { L"Unused", 0x13040 - 0x02, 0x13060 - 0x02 },
        // { L"Unused", 0x13060 - 0x02, 0x13080 - 0x02 },

    { L"Middle layer, neon footer + feet of dancers/guitar players, part 1", 0x12c7e, 0x12c9e, indexSF2Sprites_Stages, 0x3c },
        { L"Middle layer, neon footer + feet of dancers/guitar players, part 2", 0x12c9e, 0x12cbe, indexSF2Sprites_Stages, 0x3c },
        { L"Middle layer, neon footer + feet of dancers/guitar players, part 3", 0x12cbe, 0x12cde, indexSF2Sprites_Stages, 0x3c },
        // { L"Unused", 0x130E0 - 0x02, 0x13100 - 0x02 },
        { L"Middle layer, people cheering on the table", 0x12cfe, 0x12d1e, indexSF2Sprites_Stages, 0x3d },
        { L"Middle layer, dancers", 0x12d1e, 0x12d3e, indexSF2Sprites_Stages, 0x3e },
        { L"Middle layer, guitar players", 0x12d3e, 0x12d5e, indexSF2Sprites_Stages, 0x3f },
        // { L"Unused", 0x13160 - 0x02, 0x13180 - 0x02 },
        // { L"Unused", 0x13180 - 0x02, 0x131A0 - 0x02 },
        { L"Middle layer, people cheering on the table", 0x12d9e, 0x12dbe, indexSF2Sprites_Stages, 0x40 },
        { L"Middle layer, people cheering on the table + pink waiter", 0x12dbe, 0x12dde, indexSF2Sprites_Stages, 0x41 },
        { L"Middle layer, red waiter", 0x12dde, 0x12dfe, indexSF2Sprites_Stages, 0x42 },
        { L"Cage + Brown wall on the sides", 0x2C00 - 0x02, 0x2C20 - 0x02, indexSF2Sprites_Stages, 0x31 },
};

const sGame_PaletteDataset SSF2_A_CAMMY_STAGE_NODE_07[] =
{
    { L"Cammy Town BG", 0x12ffe, 0x131fe, indexSF2Sprites_Stages, 0x0e, &pairFullyLinkedNode },
    { L"Cammy Town BG - mansions", 0x131fe, 0x133fe, indexSF2Sprites_Stages, 0x0d },
    { L"Cammy Bridge", 0xB000 - 0x02, 0xB200 - 0x02, indexSF2Sprites_Stages, 0x10 },
    { L"Cammy Sky", 0xB200 - 0x02, 0xB400 - 0x02, indexSF2Sprites_Stages, 0x0f },
    { L"Cammy Castle", 0x3000 - 0x02, 0x3200 - 0x02, indexSF2Sprites_Stages, 0x12 },
    { L"Cammy Castle", 0x3200 - 0x02, 0x3400 - 0x02, indexSF2Sprites_Stages, 0x11 },
};

const sGame_PaletteDataset SSF2_A_THAWK_STAGE_NODE_07[] =
{
    { L"T-Hawk Stage 1/4 background", 0x33fe, 0x357e, indexSF2Sprites_Stages, 0xa2, &pairFullyLinkedNode },
    { L"T-Hawk Stage 2/4 market and people", 0x133fe, 0x1353e, indexSF2Sprites_Stages, 0xa3 },
    { L"T Hawk Stage 3/4 NPCs and ground 1/2", 0xb3fe, 0xb5fe, indexSF2Sprites_Stages, 0xa4 },
    { L"T Hawk Stage 4/4 NPCs 2/2", 0xb5fe, 0xb79e, indexSF2Sprites_Stages, 0xa5 },
};

const sGame_PaletteDataset SSF2_A_FEILONG_STAGE_NODE_07[] =
{
    { L"Fei Long Stage 1/4 background 1/2", 0x137fe, 0x139fe, indexSF2Sprites_Stages, 0x90, &pairFullyLinkedNode },
    { L"Fei Long Stage 2/4 background 2/2", 0x139fe, 0x13bfe, indexSF2Sprites_Stages, 0x91 },
    { L"Fei Long Stage 3/4 tree", 0x37fe, 0x38de, indexSF2Sprites_Stages, 0x92 },
    { L"Fei Long Stage 4/4 ring ", 0xb7fe, 0xb83e, indexSF2Sprites_Stages, 0x93 },
};

const sGame_PaletteDataset SSF2_A_DEEJAY_STAGE_NODE_07[] =
{
    { L"Dee Jay Stage Sky And Mid Foreground", 0x3bfe, 0x3cbe, indexSF2Sprites_Stages, 0x52, &pairFullyLinkedNode },
    { L"Dee Jay Stage Front Water 1/5", 0x3dfe, 0x3e1e, indexSF2Sprites_Stages, 0x53 },
        { L"Dee Jay Stage Front Water 2/5", 0x3e1e, 0x3e3e, indexSF2Sprites_Stages, 0x53 },
        { L"Dee Jay Stage Front Water 3/5", 0x3e3e, 0x3e5e, indexSF2Sprites_Stages, 0x53 },
        { L"Dee Jay Stage Front Water 4/5", 0x3e5e, 0x3e7e, indexSF2Sprites_Stages, 0x53 },
        { L"Dee Jay Stage Front Water 5/5", 0x3e7e, 0x3e9e, indexSF2Sprites_Stages, 0x53 },
    { L"Dee Jay Stage BG Water 1/5", 0x3ebe, 0x3ede, indexSF2Sprites_Stages, 0x54 },
        { L"Dee Jay Stage BG Water 2/5", 0x3ede, 0x3efe, indexSF2Sprites_Stages, 0x54 },
        { L"Dee Jay Stage BG Water 3/5", 0x3efe, 0x3f1e, indexSF2Sprites_Stages, 0x54 },
        { L"Dee Jay Stage BG Water 4/5", 0x3f1e, 0x3f3e, indexSF2Sprites_Stages, 0x54 },
        { L"Dee Jay Stage BG Water 5/5", 0x3f3e, 0x3f5e, indexSF2Sprites_Stages, 0x54 },
    { L"Dee Jay Stage Gazebo and palm trees", 0x13bfe, 0x13c7e, indexSF2Sprites_Stages, 0x55 },

    { L"Dee Jay Stage Grass right gazebo and people 1/2", 0xbdbe, 0xbfbe, indexSF2Sprites_Stages, 0x56 },
    { L"Dee Jay Stage Grass right gazebo and people 2/2", 0xbfbe, 0xbffe, indexSF2Sprites_Stages, 0x57 },
};

const sGame_PaletteDataset SSF2_A_07_BONUS_NODE[] =
{
    { L"Intro Ryu Part 1",          0xd0be, 0xd1fe, indexSF2Sprites_Bonus, 0x31 },
    { L"Intro Ryu Part 2",          0xd2be, 0xd37e, indexSF2Sprites_Bonus, 0x32 },
    { L"Intro Ryu Part 3",          0xd3be, 0xd3de },
    { L"Intro Ryu Hadouken Blast",  0xd27e, 0xd29e },

    { L"Super KO 1",  0x17020 - 0x02, 0x17040 - 0x02 },
    { L"Super KO 2",  0x17040 - 0x02, 0x17060 - 0x02 },
    { L"Super KO 3",  0x17060 - 0x02, 0x17080 - 0x02 },
    { L"Super KO 4",  0x17080 - 0x02, 0x170A0 - 0x02 },
    { L"Super KO 5",  0x170A0 - 0x02, 0x170C0 - 0x02 },
    { L"Super KO 6",  0x170C0 - 0x02, 0x170E0 - 0x02 },
    { L"Super KO 7",  0x170E0 - 0x02, 0x17100 - 0x02 },
    { L"Super KO 8",  0x17100 - 0x02, 0x17120 - 0x02 },
    { L"Super KO 9",  0x17120 - 0x02, 0x17140 - 0x02 },
    { L"Super KO 10", 0x17140 - 0x02, 0x17160 - 0x02 },
    { L"Super KO 11", 0x17160 - 0x02, 0x17180 - 0x02 },
    { L"Super KO 12", 0x17180 - 0x02, 0x171A0 - 0x02 },
    { L"Super KO 13", 0x171A0 - 0x02, 0x171C0 - 0x02 },
    { L"Super KO 14", 0x171C0 - 0x02, 0x171E0 - 0x02 },
    { L"Super KO 15", 0x171E0 - 0x02, 0x17200 - 0x02 },

    // This is shifted
    { L"World Tour Huds", 0x153fe, 0x155fe },

    { L"Ryu Ending Portrait 1 Winners Poster",  0xd7fe, 0xd81e },
    { L"Ryu Ending Portrait 2",                 0xd81e, 0xd83e },
    { L"Ryu Ending Portrait Sunset Bg",         0xd840, 0xd860 },
    { L"Cammy Ending 1 Section (Delta Red)",    0xe000, 0xe020 },
    { L"M.Bison Ending Fade In",                0xe5fe, 0xe61e },
};

const sDescTreeNode SSF2_A_RYU_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PALETTES_JAB,    ARRAYSIZE(SSF2_A_RYU_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_RYU_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_RYU_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_RYU_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_RYU_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_RYU_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PALETTES_START,    ARRAYSIZE(SSF2_A_RYU_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_RYU_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_RYU_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_EHONDA_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PALETTES_JAB,    ARRAYSIZE(SSF2_A_EHONDA_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_EHONDA_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_EHONDA_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_EHONDA_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_EHONDA_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_EHONDA_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PALETTES_START,    ARRAYSIZE(SSF2_A_EHONDA_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_EHONDA_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_EHONDA_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_BLANKA_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PALETTES_JAB,    ARRAYSIZE(SSF2_A_BLANKA_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_BLANKA_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_BLANKA_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_BLANKA_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_BLANKA_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_BLANKA_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PALETTES_START,    ARRAYSIZE(SSF2_A_BLANKA_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_BLANKA_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_BLANKA_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_GUILE_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PALETTES_JAB,    ARRAYSIZE(SSF2_A_GUILE_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_GUILE_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_GUILE_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_GUILE_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_GUILE_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_GUILE_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PALETTES_START,    ARRAYSIZE(SSF2_A_GUILE_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_GUILE_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_GUILE_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_KEN_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PALETTES_JAB,    ARRAYSIZE(SSF2_A_KEN_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_KEN_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_KEN_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_KEN_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_KEN_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_KEN_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PALETTES_START,    ARRAYSIZE(SSF2_A_KEN_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_KEN_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_KEN_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_CHUNLI_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PALETTES_JAB,    ARRAYSIZE(SSF2_A_CHUNLI_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_CHUNLI_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_CHUNLI_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_CHUNLI_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_CHUNLI_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_CHUNLI_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PALETTES_START,    ARRAYSIZE(SSF2_A_CHUNLI_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_CHUNLI_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_CHUNLI_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_ZANGIEF_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PALETTES_JAB,    ARRAYSIZE(SSF2_A_ZANGIEF_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_ZANGIEF_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_ZANGIEF_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_ZANGIEF_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_ZANGIEF_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_ZANGIEF_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PALETTES_START,    ARRAYSIZE(SSF2_A_ZANGIEF_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_ZANGIEF_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_ZANGIEF_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_DHALSIM_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PALETTES_JAB,    ARRAYSIZE(SSF2_A_DHALSIM_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_DHALSIM_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_DHALSIM_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_DHALSIM_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_DHALSIM_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_DHALSIM_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PALETTES_START,    ARRAYSIZE(SSF2_A_DHALSIM_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_DHALSIM_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_DHALSIM_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_MBISON_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PALETTES_JAB,    ARRAYSIZE(SSF2_A_MBISON_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_MBISON_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_MBISON_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_MBISON_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_MBISON_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_MBISON_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PALETTES_START,    ARRAYSIZE(SSF2_A_MBISON_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_MBISON_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_MBISON_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_SAGAT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PALETTES_JAB,    ARRAYSIZE(SSF2_A_SAGAT_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_SAGAT_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_SAGAT_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_SAGAT_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_SAGAT_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_SAGAT_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PALETTES_START,    ARRAYSIZE(SSF2_A_SAGAT_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_SAGAT_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_SAGAT_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_BALROG_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PALETTES_JAB,    ARRAYSIZE(SSF2_A_BALROG_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PALETTES_STRONG,    ARRAYSIZE(SSF2_A_BALROG_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PALETTES_FIERCE,    ARRAYSIZE(SSF2_A_BALROG_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PALETTES_SHORT,    ARRAYSIZE(SSF2_A_BALROG_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_BALROG_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_BALROG_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PALETTES_START,    ARRAYSIZE(SSF2_A_BALROG_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_BALROG_PALETTES_HOLD,    ARRAYSIZE(SSF2_A_BALROG_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_VEGA_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PALETTES_JAB,        ARRAYSIZE(SSF2_A_VEGA_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PALETTES_STRONG,     ARRAYSIZE(SSF2_A_VEGA_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PALETTES_FIERCE,     ARRAYSIZE(SSF2_A_VEGA_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PALETTES_SHORT,      ARRAYSIZE(SSF2_A_VEGA_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_VEGA_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_VEGA_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PALETTES_START,      ARRAYSIZE(SSF2_A_VEGA_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_VEGA_PALETTES_HOLD,       ARRAYSIZE(SSF2_A_VEGA_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_CAMMY_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PALETTES_JAB,        ARRAYSIZE(SSF2_A_CAMMY_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PALETTES_STRONG,     ARRAYSIZE(SSF2_A_CAMMY_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PALETTES_FIERCE,     ARRAYSIZE(SSF2_A_CAMMY_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PALETTES_SHORT,      ARRAYSIZE(SSF2_A_CAMMY_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_CAMMY_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_CAMMY_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PALETTES_START,      ARRAYSIZE(SSF2_A_CAMMY_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_CAMMY_PALETTES_HOLD,       ARRAYSIZE(SSF2_A_CAMMY_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_THAWK_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PALETTES_JAB,        ARRAYSIZE(SSF2_A_THAWK_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PALETTES_STRONG,     ARRAYSIZE(SSF2_A_THAWK_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PALETTES_FIERCE,     ARRAYSIZE(SSF2_A_THAWK_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PALETTES_SHORT,      ARRAYSIZE(SSF2_A_THAWK_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_THAWK_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_THAWK_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PALETTES_START,      ARRAYSIZE(SSF2_A_THAWK_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_THAWK_PALETTES_HOLD,       ARRAYSIZE(SSF2_A_THAWK_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_FEILONG_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PALETTES_JAB,        ARRAYSIZE(SSF2_A_FEILONG_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PALETTES_STRONG,     ARRAYSIZE(SSF2_A_FEILONG_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PALETTES_FIERCE,     ARRAYSIZE(SSF2_A_FEILONG_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PALETTES_SHORT,      ARRAYSIZE(SSF2_A_FEILONG_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_FEILONG_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_FEILONG_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PALETTES_START,      ARRAYSIZE(SSF2_A_FEILONG_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_FEILONG_PALETTES_HOLD,       ARRAYSIZE(SSF2_A_FEILONG_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_DEEJAY_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PALETTES_JAB,        ARRAYSIZE(SSF2_A_DEEJAY_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PALETTES_STRONG,     ARRAYSIZE(SSF2_A_DEEJAY_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PALETTES_FIERCE,     ARRAYSIZE(SSF2_A_DEEJAY_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PALETTES_SHORT,      ARRAYSIZE(SSF2_A_DEEJAY_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PALETTES_FORWARD,    ARRAYSIZE(SSF2_A_DEEJAY_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2_A_DEEJAY_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PALETTES_START,      ARRAYSIZE(SSF2_A_DEEJAY_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2_A_DEEJAY_PALETTES_HOLD,       ARRAYSIZE(SSF2_A_DEEJAY_PALETTES_HOLD) },
};

const sDescTreeNode SSF2_A_UNITS_03[] =
{
    { L"Ryu",               DESC_NODETYPE_TREE, (void*)SSF2_A_RYU_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2_A_RYU_PORTRAIT_COLLECTION) },
    { L"E. Honda",          DESC_NODETYPE_TREE, (void*)SSF2_A_EHONDA_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_EHONDA_PORTRAIT_COLLECTION) },
    { L"Blanka",            DESC_NODETYPE_TREE, (void*)SSF2_A_BLANKA_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_BLANKA_PORTRAIT_COLLECTION) },
    { L"Guile",             DESC_NODETYPE_TREE, (void*)SSF2_A_GUILE_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2_A_GUILE_PORTRAIT_COLLECTION) },
    { L"Ken",               DESC_NODETYPE_TREE, (void*)SSF2_A_KEN_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2_A_KEN_PORTRAIT_COLLECTION) },
    { L"Chun-Li",           DESC_NODETYPE_TREE, (void*)SSF2_A_CHUNLI_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_CHUNLI_PORTRAIT_COLLECTION) },
    { L"Zangief",           DESC_NODETYPE_TREE, (void*)SSF2_A_ZANGIEF_PORTRAIT_COLLECTION,  ARRAYSIZE(SSF2_A_ZANGIEF_PORTRAIT_COLLECTION) },
    { L"Dhalsim",           DESC_NODETYPE_TREE, (void*)SSF2_A_DHALSIM_PORTRAIT_COLLECTION,  ARRAYSIZE(SSF2_A_DHALSIM_PORTRAIT_COLLECTION) },
    { L"M. Bison",          DESC_NODETYPE_TREE, (void*)SSF2_A_MBISON_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_MBISON_PORTRAIT_COLLECTION) },
    { L"Sagat",             DESC_NODETYPE_TREE, (void*)SSF2_A_SAGAT_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2_A_SAGAT_PORTRAIT_COLLECTION) },

    { L"Balrog",            DESC_NODETYPE_TREE, (void*)SSF2_A_BALROG_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_BALROG_PORTRAIT_COLLECTION) },
    { L"Vega",              DESC_NODETYPE_TREE, (void*)SSF2_A_VEGA_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2_A_VEGA_PORTRAIT_COLLECTION) },
    { L"Cammy",             DESC_NODETYPE_TREE, (void*)SSF2_A_CAMMY_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2_A_CAMMY_PORTRAIT_COLLECTION) },
    { L"T-Hawk",            DESC_NODETYPE_TREE, (void*)SSF2_A_THAWK_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2_A_THAWK_PORTRAIT_COLLECTION) },
    { L"Fei Long",          DESC_NODETYPE_TREE, (void*)SSF2_A_FEILONG_PORTRAIT_COLLECTION,  ARRAYSIZE(SSF2_A_FEILONG_PORTRAIT_COLLECTION) },
    { L"Dee Jay",           DESC_NODETYPE_TREE, (void*)SSF2_A_DEEJAY_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_DEEJAY_PORTRAIT_COLLECTION) },

    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SSF2_A_03_BONUS_COLLECTION,          ARRAYSIZE(SSF2_A_03_BONUS_COLLECTION) },
}; 

const sDescTreeNode SSF2_A_UNITS_04[] =
{
    { L"Ryu",         DESC_NODETYPE_TREE, (void*)SSF2_A_RYU_COLLECTION,        ARRAYSIZE(SSF2_A_RYU_COLLECTION) },
    { L"E. Honda",    DESC_NODETYPE_TREE, (void*)SSF2_A_EHONDA_COLLECTION,     ARRAYSIZE(SSF2_A_EHONDA_COLLECTION) },
    { L"Blanka",      DESC_NODETYPE_TREE, (void*)SSF2_A_BLANKA_COLLECTION,     ARRAYSIZE(SSF2_A_BLANKA_COLLECTION) },
    { L"Guile",       DESC_NODETYPE_TREE, (void*)SSF2_A_GUILE_COLLECTION,      ARRAYSIZE(SSF2_A_GUILE_COLLECTION) },
    { L"Ken",         DESC_NODETYPE_TREE, (void*)SSF2_A_KEN_COLLECTION,        ARRAYSIZE(SSF2_A_KEN_COLLECTION) },
    { L"Chun-Li",     DESC_NODETYPE_TREE, (void*)SSF2_A_CHUNLI_COLLECTION,     ARRAYSIZE(SSF2_A_CHUNLI_COLLECTION) },
    { L"Zangief",     DESC_NODETYPE_TREE, (void*)SSF2_A_ZANGIEF_COLLECTION,    ARRAYSIZE(SSF2_A_ZANGIEF_COLLECTION) },
    { L"Dhalsim",     DESC_NODETYPE_TREE, (void*)SSF2_A_DHALSIM_COLLECTION,    ARRAYSIZE(SSF2_A_DHALSIM_COLLECTION) },
    { L"M. Bison",    DESC_NODETYPE_TREE, (void*)SSF2_A_MBISON_COLLECTION,     ARRAYSIZE(SSF2_A_MBISON_COLLECTION) },
    { L"Sagat",       DESC_NODETYPE_TREE, (void*)SSF2_A_SAGAT_COLLECTION,      ARRAYSIZE(SSF2_A_SAGAT_COLLECTION) },
    { L"Balrog",      DESC_NODETYPE_TREE, (void*)SSF2_A_BALROG_COLLECTION,     ARRAYSIZE(SSF2_A_BALROG_COLLECTION) },
    { L"Vega",        DESC_NODETYPE_TREE, (void*)SSF2_A_VEGA_COLLECTION,       ARRAYSIZE(SSF2_A_VEGA_COLLECTION) },
    { L"Cammy",       DESC_NODETYPE_TREE, (void*)SSF2_A_CAMMY_COLLECTION,      ARRAYSIZE(SSF2_A_CAMMY_COLLECTION) },
    { L"T-Hawk",      DESC_NODETYPE_TREE, (void*)SSF2_A_THAWK_COLLECTION,      ARRAYSIZE(SSF2_A_THAWK_COLLECTION) },
    { L"Fei Long",    DESC_NODETYPE_TREE, (void*)SSF2_A_FEILONG_COLLECTION,    ARRAYSIZE(SSF2_A_FEILONG_COLLECTION) },
    { L"Dee Jay",     DESC_NODETYPE_TREE, (void*)SSF2_A_DEEJAY_COLLECTION,     ARRAYSIZE(SSF2_A_DEEJAY_COLLECTION) },
    // Not added yet, but the Ryu stage 04 parts begins at 0x22bac and the stage area extends to 0x2aa6e
    // The general design is the Stage HUD and Extras palettes, the per-stage Insert Coin bonus palette,
    // and then the rest is the stage.  They're nearly exactly the same as the ST palettes.
    // The DeeJay gazebo stage is at 0x18f6e to around 0x194a2
};

const sGame_PaletteDataset SSF2_A_BONUSCAR_STAGE_NODE_07[] =
{
    { L"Car 1", 0x3ffe, 0x407e, indexSF2HFSprites_Stages, 0x4e, &pairFullyLinkedNode },
    { L"Car 2", 0x409e, 0x40be, indexSF2HFSprites_Stages, 0x4f },
};

const sDescTreeNode SSF2_A_07_STAGES_COLLECTION[] =
{
    { L"Ryu's Stage",                       DESC_NODETYPE_TREE, (void*)SSF2_A_RYU_STAGE_NODE_07,        ARRAYSIZE(SSF2_A_RYU_STAGE_NODE_07) },
    { L"E. Honda's Stage (07 parts)",       DESC_NODETYPE_TREE, (void*)SSF2_A_EHONDA_STAGE_NODE_07,     ARRAYSIZE(SSF2_A_EHONDA_STAGE_NODE_07) },
    { L"Blanka's Stage (07 parts)",         DESC_NODETYPE_TREE, (void*)SSF2_A_BLANKA_STAGE_NODE_07,     ARRAYSIZE(SSF2_A_BLANKA_STAGE_NODE_07) },
    { L"Guile's Stage (07 parts)",          DESC_NODETYPE_TREE, (void*)SSF2_A_GUILE_STAGE_NODE_07,      ARRAYSIZE(SSF2_A_GUILE_STAGE_NODE_07) },
    { L"Ken's Stage (07 parts)",            DESC_NODETYPE_TREE, (void*)SSF2_A_KEN_STAGE_NODE_07,        ARRAYSIZE(SSF2_A_KEN_STAGE_NODE_07) },
    { L"Chun-Li's Stage (07 parts)",        DESC_NODETYPE_TREE, (void*)SSF2_A_CHUNLI_STAGE_NODE_07,     ARRAYSIZE(SSF2_A_CHUNLI_STAGE_NODE_07) },
    { L"Zangief's Stage (07 parts)",        DESC_NODETYPE_TREE, (void*)SSF2_A_GIEF_STAGE_NODE_07,       ARRAYSIZE(SSF2_A_GIEF_STAGE_NODE_07) },
    { L"Dhalsim's Stage (07 parts)",        DESC_NODETYPE_TREE, (void*)SSF2_A_DHALSIM_STAGE_NODE_07,    ARRAYSIZE(SSF2_A_DHALSIM_STAGE_NODE_07) },
    { L"M. Bison's Stage",                  DESC_NODETYPE_TREE, (void*)SSF2_A_MBISON_STAGE_NODE_07,     ARRAYSIZE(SSF2_A_MBISON_STAGE_NODE_07) },
    { L"Sagat's Stage",                     DESC_NODETYPE_TREE, (void*)SSF2_A_SAGAT_STAGE_NODE_07,      ARRAYSIZE(SSF2_A_SAGAT_STAGE_NODE_07) },
    { L"Balrog's Casino Stage (07 parts)",  DESC_NODETYPE_TREE, (void*)SSF2_A_BALROG_STAGE_NODE_07,     ARRAYSIZE(SSF2_A_BALROG_STAGE_NODE_07) },
    { L"Vega's Stage",                      DESC_NODETYPE_TREE, (void*)SSF2_A_VEGA_STAGE_NODE_07,       ARRAYSIZE(SSF2_A_VEGA_STAGE_NODE_07) },
    { L"Cammy's Stage",                     DESC_NODETYPE_TREE, (void*)SSF2_A_CAMMY_STAGE_NODE_07,      ARRAYSIZE(SSF2_A_CAMMY_STAGE_NODE_07) },
    { L"T-Hawk's Stage (07 parts)",         DESC_NODETYPE_TREE, (void*)SSF2_A_THAWK_STAGE_NODE_07,      ARRAYSIZE(SSF2_A_THAWK_STAGE_NODE_07) },
    { L"Fei Long's Stage (07 parts)",       DESC_NODETYPE_TREE, (void*)SSF2_A_FEILONG_STAGE_NODE_07,    ARRAYSIZE(SSF2_A_FEILONG_STAGE_NODE_07) },
    { L"Dee Jay's Stage (07 parts)",        DESC_NODETYPE_TREE, (void*)SSF2_A_DEEJAY_STAGE_NODE_07,     ARRAYSIZE(SSF2_A_DEEJAY_STAGE_NODE_07) },

    { L"Bonus Car Stage (07 Parts)",        DESC_NODETYPE_TREE, (void*)SSF2_A_BONUSCAR_STAGE_NODE_07,   ARRAYSIZE(SSF2_A_BONUSCAR_STAGE_NODE_07) },
};

const sDescTreeNode SSF2_A_07_BONUS_COLLECTION[] =
{
    { L"Palettes",          DESC_NODETYPE_TREE, (void*)SSF2_A_07_BONUS_NODE,   ARRAYSIZE(SSF2_A_07_BONUS_NODE) },
};

const sDescTreeNode SSF2_A_UNITS_07[] =
{
    { L"Stages",            DESC_NODETYPE_TREE, (void*)SSF2_A_07_STAGES_COLLECTION,     ARRAYSIZE(SSF2_A_07_STAGES_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SSF2_A_07_BONUS_COLLECTION,      ARRAYSIZE(SSF2_A_07_BONUS_COLLECTION) },
};


const sDescTreeNode SSF2_A_UNITS_MONO[] =
{
    { L"Ryu",         DESC_NODETYPE_TREE, (void*)SSF2_A_RYU_COLLECTION,        ARRAYSIZE(SSF2_A_RYU_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"E. Honda",    DESC_NODETYPE_TREE, (void*)SSF2_A_EHONDA_COLLECTION,     ARRAYSIZE(SSF2_A_EHONDA_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Blanka",      DESC_NODETYPE_TREE, (void*)SSF2_A_BLANKA_COLLECTION,     ARRAYSIZE(SSF2_A_BLANKA_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Guile",       DESC_NODETYPE_TREE, (void*)SSF2_A_GUILE_COLLECTION,      ARRAYSIZE(SSF2_A_GUILE_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Ken",         DESC_NODETYPE_TREE, (void*)SSF2_A_KEN_COLLECTION,        ARRAYSIZE(SSF2_A_KEN_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Chun-Li",     DESC_NODETYPE_TREE, (void*)SSF2_A_CHUNLI_COLLECTION,     ARRAYSIZE(SSF2_A_CHUNLI_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Zangief",     DESC_NODETYPE_TREE, (void*)SSF2_A_ZANGIEF_COLLECTION,    ARRAYSIZE(SSF2_A_ZANGIEF_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Dhalsim",     DESC_NODETYPE_TREE, (void*)SSF2_A_DHALSIM_COLLECTION,    ARRAYSIZE(SSF2_A_DHALSIM_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"M. Bison",    DESC_NODETYPE_TREE, (void*)SSF2_A_MBISON_COLLECTION,     ARRAYSIZE(SSF2_A_MBISON_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Sagat",       DESC_NODETYPE_TREE, (void*)SSF2_A_SAGAT_COLLECTION,      ARRAYSIZE(SSF2_A_SAGAT_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Balrog",      DESC_NODETYPE_TREE, (void*)SSF2_A_BALROG_COLLECTION,     ARRAYSIZE(SSF2_A_BALROG_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Vega",        DESC_NODETYPE_TREE, (void*)SSF2_A_VEGA_COLLECTION,       ARRAYSIZE(SSF2_A_VEGA_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Cammy",       DESC_NODETYPE_TREE, (void*)SSF2_A_CAMMY_COLLECTION,      ARRAYSIZE(SSF2_A_CAMMY_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"T-Hawk",      DESC_NODETYPE_TREE, (void*)SSF2_A_THAWK_COLLECTION,      ARRAYSIZE(SSF2_A_THAWK_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Fei Long",    DESC_NODETYPE_TREE, (void*)SSF2_A_FEILONG_COLLECTION,    ARRAYSIZE(SSF2_A_FEILONG_COLLECTION), 0x925f5d7 - 0x13d0c },
    { L"Dee Jay",     DESC_NODETYPE_TREE, (void*)SSF2_A_DEEJAY_COLLECTION,     ARRAYSIZE(SSF2_A_DEEJAY_COLLECTION), 0x925f5d7 - 0x13d0c },

    { L"Portraits: Ryu",               DESC_NODETYPE_TREE, (void*)SSF2_A_RYU_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2_A_RYU_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: E. Honda",          DESC_NODETYPE_TREE, (void*)SSF2_A_EHONDA_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_EHONDA_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Blanka",            DESC_NODETYPE_TREE, (void*)SSF2_A_BLANKA_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_BLANKA_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Guile",             DESC_NODETYPE_TREE, (void*)SSF2_A_GUILE_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2_A_GUILE_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Ken",               DESC_NODETYPE_TREE, (void*)SSF2_A_KEN_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2_A_KEN_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Chun-Li",           DESC_NODETYPE_TREE, (void*)SSF2_A_CHUNLI_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_CHUNLI_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Zangief",           DESC_NODETYPE_TREE, (void*)SSF2_A_ZANGIEF_PORTRAIT_COLLECTION,  ARRAYSIZE(SSF2_A_ZANGIEF_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Dhalsim",           DESC_NODETYPE_TREE, (void*)SSF2_A_DHALSIM_PORTRAIT_COLLECTION,  ARRAYSIZE(SSF2_A_DHALSIM_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: M. Bison",          DESC_NODETYPE_TREE, (void*)SSF2_A_MBISON_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_MBISON_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Sagat",             DESC_NODETYPE_TREE, (void*)SSF2_A_SAGAT_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2_A_SAGAT_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },

    { L"Portraits: Balrog",            DESC_NODETYPE_TREE, (void*)SSF2_A_BALROG_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_BALROG_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Vega",              DESC_NODETYPE_TREE, (void*)SSF2_A_VEGA_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2_A_VEGA_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Cammy",             DESC_NODETYPE_TREE, (void*)SSF2_A_CAMMY_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2_A_CAMMY_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: T-Hawk",            DESC_NODETYPE_TREE, (void*)SSF2_A_THAWK_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2_A_THAWK_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Fei Long",          DESC_NODETYPE_TREE, (void*)SSF2_A_FEILONG_PORTRAIT_COLLECTION,  ARRAYSIZE(SSF2_A_FEILONG_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },
    { L"Portraits: Dee Jay",           DESC_NODETYPE_TREE, (void*)SSF2_A_DEEJAY_PORTRAIT_COLLECTION,   ARRAYSIZE(SSF2_A_DEEJAY_PORTRAIT_COLLECTION), 0x91f9c3b - 0x2e370 },

    { L"Bonus Palettes (ROM03)",    DESC_NODETYPE_TREE, (void*)SSF2_A_03_BONUS_COLLECTION,      ARRAYSIZE(SSF2_A_03_BONUS_COLLECTION), 0x91f9c3b - 0x2e370 },


    { L"Stages",                    DESC_NODETYPE_TREE, (void*)SSF2_A_07_STAGES_COLLECTION,     ARRAYSIZE(SSF2_A_07_STAGES_COLLECTION), 0x93db8c9 - 0xfffe },
    { L"Bonus Palettes (ROM07)",    DESC_NODETYPE_TREE, (void*)SSF2_A_07_BONUS_COLLECTION,      ARRAYSIZE(SSF2_A_07_BONUS_COLLECTION), 0x93db8c9 - 0xfffe },
};
