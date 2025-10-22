#pragma once

const std::vector<uint16_t> SSF2T_GBA_IMGIDS_USED =
{
    indexSF2GBASprites_Ryu,         // = 0x20,
    indexSF2GBASprites_EHonda,      // 0x21
    indexSF2GBASprites_Blanka,      // 0x22
    indexSF2GBASprites_Guile,       // 0x23
    indexSF2GBASprites_Ken,         // 0x24
    indexSF2GBASprites_ChunLi,      // 0x25
    indexSF2GBASprites_Zangief,     // 0x26
    indexSF2GBASprites_Dhalsim,     // 0x27
    indexSF2GBASprites_Bison,       // 0x28
    indexSF2GBASprites_Sagat,       // 0x29
    indexSF2GBASprites_Balrog,      // 0x2a
    indexSF2GBASprites_Vega,        // 0x2b
    indexSF2GBASprites_Cammy,       // 0x2c
    indexSF2GBASprites_THawk,       // 0x2d
    indexSF2GBASprites_FeiLong,     // 0x2e
    indexSF2GBASprites_DeeJay,      // 0x2f
    indexSF2GBASprites_Gouki,       // 0x30
    indexSF2GBASprites_ShinGouki,   // 0x31
    indexSF2GBASprites_Bonus,       // 0x32, // GBA_Bonus
    indexSF2GBASprites_Stages,      // 0x33, // GBA_Stages
};

const sGame_PaletteDataset SSF2T_GBA_RYU_BTNA_NODE[] =
{
    { L"Ryu A", 0x7f28e4, 0x7f2904, indexSF2GBASprites_Ryu },
    { L"Ryu L", 0x7f2904, 0x7f2924, indexSF2GBASprites_Ryu },
    { L"Ryu R", 0x7f2924, 0x7f2944, indexSF2GBASprites_Ryu },
    { L"Ryu B", 0x7f2944, 0x7f2964, indexSF2GBASprites_Ryu },
    { L"Ryu Select + A", 0x7f2964, 0x7f2984, indexSF2GBASprites_Ryu },
    { L"Ryu Select + L", 0x7f2984, 0x7f29a4, indexSF2GBASprites_Ryu },
    { L"Ryu Select + R", 0x7f29a4, 0x7f29c4, indexSF2GBASprites_Ryu },
    { L"Ryu Select + B", 0x7f29c4, 0x7f29e4, indexSF2GBASprites_Ryu },
    { L"Ryu Start", 0x7f29e4, 0x7f2a04, indexSF2GBASprites_Ryu },
};

const sGame_PaletteDataset SSF2T_GBA_EHONDA_BTNA_NODE[] =
{
    { L"E.Honda A", 0x7f2a04, 0x7f2a24, indexSF2GBASprites_EHonda },
    { L"E.Honda L", 0x7f2a24, 0x7f2a44, indexSF2GBASprites_EHonda },
    { L"E.Honda R", 0x7f2a44, 0x7f2a64, indexSF2GBASprites_EHonda },
    { L"E.Honda B", 0x7f2a64, 0x7f2a84, indexSF2GBASprites_EHonda },
    { L"E.Honda Select + A", 0x7f2a84, 0x7f2aa4, indexSF2GBASprites_EHonda },
    { L"E.Honda Select + L", 0x7f2aa4, 0x7f2ac4, indexSF2GBASprites_EHonda },
    { L"E.Honda Select + R", 0x7f2ac4, 0x7f2ae4, indexSF2GBASprites_EHonda },
    { L"E.Honda Select + B", 0x7f2ae4, 0x7f2b04, indexSF2GBASprites_EHonda },
    { L"E.Honda Start", 0x7f2b04, 0x7f2b24, indexSF2GBASprites_EHonda },
};

const sGame_PaletteDataset SSF2T_GBA_BLANKA_BTNA_NODE[] =
{
    { L"Blanka A", 0x7f2b24, 0x7f2b44, indexSF2GBASprites_Blanka },
    { L"Blanka L", 0x7f2b44, 0x7f2b64, indexSF2GBASprites_Blanka },
    { L"Blanka R", 0x7f2b64, 0x7f2b84, indexSF2GBASprites_Blanka },
    { L"Blanka B", 0x7f2b84, 0x7f2ba4, indexSF2GBASprites_Blanka },
    { L"Blanka Select + A", 0x7f2ba4, 0x7f2bc4, indexSF2GBASprites_Blanka },
    { L"Blanka Select + L", 0x7f2bc4, 0x7f2be4, indexSF2GBASprites_Blanka },
    { L"Blanka Select + R", 0x7f2be4, 0x7f2c04, indexSF2GBASprites_Blanka },
    { L"Blanka Select + B", 0x7f2c04, 0x7f2c24, indexSF2GBASprites_Blanka },
    { L"Blanka Start", 0x7f2c24, 0x7f2c44, indexSF2GBASprites_Blanka },
};

const sGame_PaletteDataset SSF2T_GBA_GUILE_BTNA_NODE[] =
{
    { L"Guile A", 0x7f2c44, 0x7f2c64, indexSF2GBASprites_Guile },
    { L"Guile L", 0x7f2c64, 0x7F2C84, indexSF2GBASprites_Guile },
    { L"Guile R", 0x7F2C84, 0x7F2CA4, indexSF2GBASprites_Guile },
    { L"Guile B", 0x7F2CA4, 0x7F2CC4, indexSF2GBASprites_Guile },
    { L"Guile Select + A", 0x7F2CC4, 0x7F2CE4, indexSF2GBASprites_Guile },
    { L"Guile Select + L", 0x7F2CE4, 0x7F2D04, indexSF2GBASprites_Guile },
    { L"Guile Select + R", 0x7F2D04, 0x7F2D24, indexSF2GBASprites_Guile },
    { L"Guile Select + B", 0x7F2D24, 0x7F2D44, indexSF2GBASprites_Guile },
    { L"Guile Start", 0x7F2D44, 0x7F2D64, indexSF2GBASprites_Guile },
};

const sGame_PaletteDataset SSF2T_GBA_KEN_BTNA_NODE[] =
{
    { L"Ken A", 0x7F2D64, 0x7F2D84, indexSF2GBASprites_Ken },
    { L"Ken L", 0x7F2D84, 0x7F2Da4, indexSF2GBASprites_Ken },
    { L"Ken R", 0x7F2DA4, 0x7F2DC4, indexSF2GBASprites_Ken },
    { L"Ken B", 0x7F2DC4, 0x7F2DE4, indexSF2GBASprites_Ken },
    { L"Ken Select + A", 0x7F2DE4, 0x7F2E04, indexSF2GBASprites_Ken },
    { L"Ken Select + L", 0x7F2E04, 0x7F2E24, indexSF2GBASprites_Ken },
    { L"Ken Select + R", 0x7F2E24, 0x7F2E44, indexSF2GBASprites_Ken },
    { L"Ken Select + B", 0x7F2E44, 0x7F2E64, indexSF2GBASprites_Ken },
    { L"Ken Start", 0x7F2E64, 0x7F2E84, indexSF2GBASprites_Ken },
};

const sGame_PaletteDataset SSF2T_GBA_CHUNLI_BTNA_NODE[] =
{
    { L"Chun-Li A", 0x7F2E84, 0x7F2EA4, indexSF2GBASprites_ChunLi },
    { L"Chun-Li L", 0x7F2EA4, 0x7F2EC4, indexSF2GBASprites_ChunLi },
    { L"Chun-Li R", 0x7F2EC4, 0x7F2EE4, indexSF2GBASprites_ChunLi },
    { L"Chun-Li B", 0x7F2EE4, 0x7F2F04, indexSF2GBASprites_ChunLi },
    { L"Chun-Li Select + A", 0x7F2F04, 0x7F2F24, indexSF2GBASprites_ChunLi },
    { L"Chun-Li Select + L", 0x7F2F24, 0x7F2F44, indexSF2GBASprites_ChunLi },
    { L"Chun-Li Select + R", 0x7F2F44, 0x7F2F64, indexSF2GBASprites_ChunLi },
    { L"Chun-Li Select + B", 0x7F2F64, 0x7F2F84, indexSF2GBASprites_ChunLi },
    { L"Chun-Li Start", 0x7F2F84, 0x7F2FA4, indexSF2GBASprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_GBA_ZANGIEF_BTNA_NODE[] =
{
    { L"Zangief A", 0x7F2FA4, 0x7F2FC4, indexSF2GBASprites_Zangief },
    { L"Zangief L", 0x7F2FC4, 0x7F2FE4, indexSF2GBASprites_Zangief },
    { L"Zangief R", 0x7F2FE4, 0x7F3004, indexSF2GBASprites_Zangief },
    { L"Zangief B", 0x7F3004, 0x7F3024, indexSF2GBASprites_Zangief },
    { L"Zangief Select + A", 0x7F3024, 0x7F3044, indexSF2GBASprites_Zangief },
    { L"Zangief Select + L", 0x7F3044, 0x7F3064, indexSF2GBASprites_Zangief },
    { L"Zangief Select + R", 0x7F3064, 0x7F3084, indexSF2GBASprites_Zangief },
    { L"Zangief Select + B", 0x7F3084, 0x7F30A4, indexSF2GBASprites_Zangief },
    { L"Zangief Start", 0x7F30A4, 0x7F30C4, indexSF2GBASprites_Zangief },
};

const sGame_PaletteDataset SSF2T_GBA_DHALSIM_BTNA_NODE[] =
{
    { L"Dhalsim A", 0x7F30C4, 0x7F30E4, indexSF2GBASprites_Dhalsim },
    { L"Dhalsim L", 0x7F30E4, 0x7F3104, indexSF2GBASprites_Dhalsim },
    { L"Dhalsim R", 0x7F3104, 0x7F3124, indexSF2GBASprites_Dhalsim },
    { L"Dhalsim B", 0x7F3124, 0x7F3144, indexSF2GBASprites_Dhalsim },
    { L"Dhalsim Select + A", 0x7F3144, 0x7F3164, indexSF2GBASprites_Dhalsim },
    { L"Dhalsim Select + L", 0x7F3164, 0x7F3184, indexSF2GBASprites_Dhalsim },
    { L"Dhalsim Select + R", 0x7F3184, 0x7F31A4, indexSF2GBASprites_Dhalsim },
    { L"Dhalsim Select + B", 0x7F31A4, 0x7F31C4, indexSF2GBASprites_Dhalsim },
    { L"Dhalsim Start", 0x7F31C4, 0x7F31E4, indexSF2GBASprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_GBA_DICTATOR_BTNA_NODE[] =
{
    { L"Dictator A", 0x7F31E4, 0x7F3204, indexSF2GBASprites_Bison, 0x00, &pairNext },
    { L"Psycho fist", 0x4e64a8, 0x4e64c8 },
};

const sGame_PaletteDataset SSF2T_GBA_DICTATOR_BTNL_NODE[] =
{
    { L"Dictator L", 0x7F3204, 0x7F3224, indexSF2GBASprites_Bison, 0x00, &pairNext },
    { L"Psycho fist", 0x4e64c8, 0x4e64e8 },
};

const sGame_PaletteDataset SSF2T_GBA_DICTATOR_BTNR_NODE[] =
{
    { L"Dictator R", 0x7F3224, 0x7F3244, indexSF2GBASprites_Bison, 0x00, &pairNext },
    { L"Psycho fist", 0x4e64e8, 0x4e6508 },
};

const sGame_PaletteDataset SSF2T_GBA_DICTATOR_BTNB_NODE[] =
{
    { L"Dictator B", 0x7F3244, 0x7F3264, indexSF2GBASprites_Bison, 0x00, &pairNext },
    { L"Psycho fist", 0x4e6508, 0x4e6528 },
};

const sGame_PaletteDataset SSF2T_GBA_DICTATOR_BTNSA_NODE[] =
{
    { L"Dictator Select + A", 0x7F3264, 0x7F3284, indexSF2GBASprites_Bison, 0x00, &pairNext },
    { L"Psycho fist", 0x4e6528, 0x4e6548 },
};

const sGame_PaletteDataset SSF2T_GBA_DICTATOR_BTNSL_NODE[] =
{
    { L"Dictator Select + L", 0x7F3284, 0x7F32A4, indexSF2GBASprites_Bison, 0x00, &pairNext },
    { L"Psycho fist", 0x4e6548, 0x4e6568 },
};

const sGame_PaletteDataset SSF2T_GBA_DICTATOR_BTNSR_NODE[] =
{
    { L"Dictator Select + R", 0x7F32A4, 0x7F32C4, indexSF2GBASprites_Bison, 0x00, &pairNext },
    { L"Psycho fist", 0x4e6568, 0x4e6588 },
};

const sGame_PaletteDataset SSF2T_GBA_DICTATOR_BTNSB_NODE[] =
{
    { L"Dictator Select + B", 0x7F32C4, 0x7F32E4, indexSF2GBASprites_Bison, 0x00, &pairNext },
    { L"Psycho fist", 0x4e6588, 0x4e65a8 },
};

const sGame_PaletteDataset SSF2T_GBA_DICTATOR_BTNS_NODE[] =
{
    { L"Dictator Start", 0x7F32E4, 0x7F3304, indexSF2GBASprites_Bison, 0x00, &pairNext },
    { L"Psycho fist", 0x4e65a8, 0x4e65c8 },
};

const sGame_PaletteDataset SSF2T_GBA_SAGAT_BTNA_NODE[] =
{
    { L"Sagat A", 0x7F3304, 0x7F3324, indexSF2GBASprites_Sagat },
    { L"Sagat L", 0x7F3324, 0x7F3344, indexSF2GBASprites_Sagat },
    { L"Sagat R", 0x7F3344, 0x7F3364, indexSF2GBASprites_Sagat },
    { L"Sagat B", 0x7F3364, 0x7F3384, indexSF2GBASprites_Sagat },
    { L"Sagat Select + A", 0x7F3384, 0x7F33A4, indexSF2GBASprites_Sagat },
    { L"Sagat Select + L", 0x7F33A4, 0x7F33C4, indexSF2GBASprites_Sagat },
    { L"Sagat Select + R", 0x7F33C4, 0x7F33E4, indexSF2GBASprites_Sagat },
    { L"Sagat Select + B", 0x7F33E4, 0x7F3404, indexSF2GBASprites_Sagat },
    { L"Sagat Start", 0x7F3404, 0x7F3424, indexSF2GBASprites_Sagat },
};

const sGame_PaletteDataset SSF2T_GBA_BOXER_BTNA_NODE[] =
{
    { L"Boxer A", 0x7F3424, 0x7F3444, indexSF2GBASprites_Balrog },
    { L"Boxer L", 0x7F3444, 0x7F3464, indexSF2GBASprites_Balrog },
    { L"Boxer R", 0x7F3464, 0x7F3484, indexSF2GBASprites_Balrog },
    { L"Boxer B", 0x7F3484, 0x7F34A4, indexSF2GBASprites_Balrog },
    { L"Boxer Select + A", 0x7F34A4, 0x7F34C4, indexSF2GBASprites_Balrog },
    { L"Boxer Select + L", 0x7F34C4, 0x7F34E4, indexSF2GBASprites_Balrog },
    { L"Boxer Select + R", 0x7F34E4, 0x7F3504, indexSF2GBASprites_Balrog },
    { L"Boxer Select + B", 0x7F3504, 0x7F3524, indexSF2GBASprites_Balrog },
    { L"Boxer Start", 0x7F3524, 0x7F3544, indexSF2GBASprites_Balrog },
};

const sGame_PaletteDataset SSF2T_GBA_CLAW_BTNA_NODE[] =
{
    { L"Claw A", 0x7F3544, 0x7F3564, indexSF2GBASprites_Vega },
    { L"Claw L", 0x7F3564, 0x7F3584, indexSF2GBASprites_Vega },
    { L"Claw R", 0x7F3584, 0x7F35A4, indexSF2GBASprites_Vega },
    { L"Claw B", 0x7F35A4, 0x7F35C4, indexSF2GBASprites_Vega },
    { L"Claw Select + A", 0x7F35C4, 0x7F35E4, indexSF2GBASprites_Vega },
    { L"Claw Select + L", 0x7F35E4, 0x7F3604, indexSF2GBASprites_Vega },
    { L"Claw Select + R", 0x7F3604, 0x7F3624, indexSF2GBASprites_Vega },
    { L"Claw Select + B", 0x7F3624, 0x7F3644, indexSF2GBASprites_Vega },
    { L"Claw Start", 0x7F3644, 0x7F3664, indexSF2GBASprites_Vega },
};

const sGame_PaletteDataset SSF2T_GBA_CAMMY_BTNA_NODE[] =
{
    { L"Cammy A", 0x7F3664, 0x7F3684, indexSF2GBASprites_Cammy },
    { L"Cammy L", 0x7F3684, 0x7F36A4, indexSF2GBASprites_Cammy },
    { L"Cammy R", 0x7F36A4, 0x7F36C4, indexSF2GBASprites_Cammy },
    { L"Cammy B", 0x7F36C4, 0x7F36E4, indexSF2GBASprites_Cammy },
    { L"Cammy Select + A", 0x7F36E4, 0x7F3704, indexSF2GBASprites_Cammy },
    { L"Cammy Select + L", 0x7F3704, 0x7F3724, indexSF2GBASprites_Cammy },
    { L"Cammy Select + R", 0x7F3724, 0x7F3744, indexSF2GBASprites_Cammy },
    { L"Cammy Select + B", 0x7F3744, 0x7F3764, indexSF2GBASprites_Cammy },
    { L"Cammy Start", 0x7F3764, 0x7F3784, indexSF2GBASprites_Cammy },
};

const sGame_PaletteDataset SSF2T_GBA_DEEJAY_BTNA_NODE[] =
{
    { L"Dee Jay A", 0x7F39C4, 0x7F39E4, indexSF2GBASprites_DeeJay },
    { L"Dee Jay L", 0x7F39E4, 0x7F3A04, indexSF2GBASprites_DeeJay },
    { L"Dee Jay R", 0x7F3A04, 0x7F3A24, indexSF2GBASprites_DeeJay },
    { L"Dee Jay B", 0x7F3A24, 0x7F3A44, indexSF2GBASprites_DeeJay },
    { L"Dee Jay Select + A", 0x7F3A44, 0x7F3A64, indexSF2GBASprites_DeeJay },
    { L"Dee Jay Select + L", 0x7F3A64, 0x7F3A84, indexSF2GBASprites_DeeJay },
    { L"Dee Jay Select + R", 0x7F3A84, 0x7F3AA4, indexSF2GBASprites_DeeJay },
    { L"Dee Jay Select + B", 0x7F3AA4, 0x7F3AC4, indexSF2GBASprites_DeeJay },
    { L"Dee Jay Start", 0x7F3AC4, 0x7F3AE4, indexSF2GBASprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_GBA_FEILONG_BTNA_NODE[] =
{
    { L"Fei Long A", 0x7F38A4, 0x7F38C4, indexSF2GBASprites_FeiLong },
    { L"Fei Long L", 0x7F38C4, 0x7F38E4, indexSF2GBASprites_FeiLong },
    { L"Fei Long R", 0x7F38E4, 0x7F3904, indexSF2GBASprites_FeiLong },
    { L"Fei Long B", 0x7F3904, 0x7F3924, indexSF2GBASprites_FeiLong },
    { L"Fei Long Select + A", 0x7F3924, 0x7F3944, indexSF2GBASprites_FeiLong },
    { L"Fei Long Select + L", 0x7F3944, 0x7F3964, indexSF2GBASprites_FeiLong },
    { L"Fei Long Select + R", 0x7F3964, 0x7F3984, indexSF2GBASprites_FeiLong },
    { L"Fei Long Select + B", 0x7F3984, 0x7F39A4, indexSF2GBASprites_FeiLong },
    { L"Fei Long Start", 0x7F39A4, 0x7F39C4, indexSF2GBASprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_GBA_GOUKI_BTNA_NODE[] =
{
    { L"Gouki A", 0x7F3AE4, 0x7F3B04, indexSF2GBASprites_Gouki },
    { L"Gouki L", 0x7F3B04, 0x7F3B24, indexSF2GBASprites_Gouki },
    { L"Gouki R", 0x7F3B24, 0x7F3B44, indexSF2GBASprites_Gouki },
    { L"Gouki B", 0x7F3B44, 0x7F3B64, indexSF2GBASprites_Gouki },
    { L"Gouki Select + A", 0x7F3B64, 0x7F3B84, indexSF2GBASprites_Gouki },
    { L"Gouki Select + L", 0x7F3B84, 0x7F3BA4, indexSF2GBASprites_Gouki },
    { L"Gouki Select + R", 0x7F3BA4, 0x7F3BC4, indexSF2GBASprites_Gouki },
    { L"Gouki Select + B", 0x7F3BC4, 0x7F3BE4, indexSF2GBASprites_Gouki },
    { L"Gouki Start", 0x7F3BE4, 0x7F3C04, indexSF2GBASprites_Gouki },
};

const sGame_PaletteDataset SSF2T_GBA_THAWK_BTNA_NODE[] =
{
    { L"T.Hawk A", 0x7F3784, 0x7F37A4, indexSF2GBASprites_THawk },
    { L"T.Hawk L", 0x7F37A4, 0x7F37C4, indexSF2GBASprites_THawk },
    { L"T.Hawk R", 0x7F37C4, 0x7F37E4, indexSF2GBASprites_THawk },
    { L"T.Hawk B", 0x7F37E4, 0x7F3804, indexSF2GBASprites_THawk },
    { L"T.Hawk Select + A", 0x7F3804, 0x7F3824, indexSF2GBASprites_THawk },
    { L"T.Hawk Select + L", 0x7F3824, 0x7F3844, indexSF2GBASprites_THawk },
    { L"T.Hawk Select + R", 0x7F3844, 0x7F3864, indexSF2GBASprites_THawk },
    { L"T.Hawk Select + B", 0x7F3864, 0x7F3884, indexSF2GBASprites_THawk },
    { L"T.Hawk Start", 0x7F3884, 0x7F38A4, indexSF2GBASprites_THawk },
};

const sGame_PaletteDataset SSF2T_GBA_SHINGOUKI_BTNA_NODE[] =
{
    { L"Shin Gouki A", 0x7F3C04, 0x7F3C24, indexSF2GBASprites_Gouki },
    { L"Shin Gouki L", 0x7F3C24, 0x7F3C44, indexSF2GBASprites_Gouki },
    { L"Shin Gouki R", 0x7F3C44, 0x7F3C64, indexSF2GBASprites_Gouki },
    { L"Shin Gouki B", 0x7F3C64, 0x7F3C84, indexSF2GBASprites_Gouki },
    { L"Shin Gouki Select + A", 0x7F3C84, 0x7F3CA4, indexSF2GBASprites_Gouki },
    { L"Shin Gouki Select + L", 0x7F3CA4, 0x7F3CC4, indexSF2GBASprites_Gouki },
    { L"Shin Gouki Select + R", 0x7F3CC4, 0x7F3CE4, indexSF2GBASprites_Gouki },
    { L"Shin Gouki Select + B", 0x7F3CE4, 0x7F3D04, indexSF2GBASprites_Gouki },
    { L"Shin Gouki Start", 0x7F3D04, 0x7F3D24, indexSF2GBASprites_Gouki },
};

// Status effects.  
// Fire is as in the Dhalsim fireball
// Psycho burned as in hit by Dictator psycho attacks
const sGame_PaletteDataset SSF2T_GBA_RYU_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x00 * 0x80), 0x4e7124 + (0x00 * 0x80), indexSF2GBASprites_Ryu },
    { L"Burning 2",         0x4e7124 + (0x00 * 0x80), 0x4e7144 + (0x00 * 0x80), indexSF2GBASprites_Ryu },
    { L"Psycho Burned 1",   0x4e7144 + (0x00 * 0x80), 0x4e7164 + (0x00 * 0x80), indexSF2GBASprites_Ryu },
    { L"Pyscho Burned 2",   0x4e7164 + (0x00 * 0x80), 0x4e7184 + (0x00 * 0x80), indexSF2GBASprites_Ryu },
};

const sGame_PaletteDataset SSF2T_GBA_EHONDA_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x01 * 0x80), 0x4e7124 + (0x01 * 0x80), indexSF2GBASprites_EHonda },
    { L"Burning 2",         0x4e7124 + (0x01 * 0x80), 0x4e7144 + (0x01 * 0x80), indexSF2GBASprites_EHonda },
    { L"Psycho Burned 1",   0x4e7144 + (0x01 * 0x80), 0x4e7164 + (0x01 * 0x80), indexSF2GBASprites_EHonda },
    { L"Pyscho Burned 2",   0x4e7164 + (0x01 * 0x80), 0x4e7184 + (0x01 * 0x80), indexSF2GBASprites_EHonda },
};

const sGame_PaletteDataset SSF2T_GBA_BLANKA_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x02 * 0x80), 0x4e7124 + (0x02 * 0x80), indexSF2GBASprites_Blanka },
    { L"Burning 2",         0x4e7124 + (0x02 * 0x80), 0x4e7144 + (0x02 * 0x80), indexSF2GBASprites_Blanka },
    { L"Psycho Burned 1",   0x4e7144 + (0x02 * 0x80), 0x4e7164 + (0x02 * 0x80), indexSF2GBASprites_Blanka },
    { L"Pyscho Burned 2",   0x4e7164 + (0x02 * 0x80), 0x4e7184 + (0x02 * 0x80), indexSF2GBASprites_Blanka },
};

const sGame_PaletteDataset SSF2T_GBA_GUILE_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x03 * 0x80), 0x4e7124 + (0x03 * 0x80), indexSF2GBASprites_Guile },
    { L"Burning 2",         0x4e7124 + (0x03 * 0x80), 0x4e7144 + (0x03 * 0x80), indexSF2GBASprites_Guile },
    { L"Psycho Burned 1",   0x4e7144 + (0x03 * 0x80), 0x4e7164 + (0x03 * 0x80), indexSF2GBASprites_Guile },
    { L"Pyscho Burned 2",   0x4e7164 + (0x03 * 0x80), 0x4e7184 + (0x03 * 0x80), indexSF2GBASprites_Guile },
};

const sGame_PaletteDataset SSF2T_GBA_KEN_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x04 * 0x80), 0x4e7124 + (0x04 * 0x80), indexSF2GBASprites_Ken },
    { L"Burning 2",         0x4e7124 + (0x04 * 0x80), 0x4e7144 + (0x04 * 0x80), indexSF2GBASprites_Ken },
    { L"Psycho Burned 1",   0x4e7144 + (0x04 * 0x80), 0x4e7164 + (0x04 * 0x80), indexSF2GBASprites_Ken },
    { L"Pyscho Burned 2",   0x4e7164 + (0x04 * 0x80), 0x4e7184 + (0x04 * 0x80), indexSF2GBASprites_Ken },
};

const sGame_PaletteDataset SSF2T_GBA_CHUNLI_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x05 * 0x80), 0x4e7124 + (0x05 * 0x80), indexSF2GBASprites_ChunLi },
    { L"Burning 2",         0x4e7124 + (0x05 * 0x80), 0x4e7144 + (0x05 * 0x80), indexSF2GBASprites_ChunLi },
    { L"Psycho Burned 1",   0x4e7144 + (0x05 * 0x80), 0x4e7164 + (0x05 * 0x80), indexSF2GBASprites_ChunLi },
    { L"Pyscho Burned 2",   0x4e7164 + (0x05 * 0x80), 0x4e7184 + (0x05 * 0x80), indexSF2GBASprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_GBA_ZANGIEF_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x06 * 0x80), 0x4e7124 + (0x06 * 0x80), indexSF2GBASprites_Zangief },
    { L"Burning 2",         0x4e7124 + (0x06 * 0x80), 0x4e7144 + (0x06 * 0x80), indexSF2GBASprites_Zangief },
    { L"Psycho Burned 1",   0x4e7144 + (0x06 * 0x80), 0x4e7164 + (0x06 * 0x80), indexSF2GBASprites_Zangief },
    { L"Pyscho Burned 2",   0x4e7164 + (0x06 * 0x80), 0x4e7184 + (0x06 * 0x80), indexSF2GBASprites_Zangief },
};

const sGame_PaletteDataset SSF2T_GBA_DHALSIM_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x07 * 0x80), 0x4e7124 + (0x07 * 0x80), indexSF2GBASprites_Dhalsim },
    { L"Burning 2",         0x4e7124 + (0x07 * 0x80), 0x4e7144 + (0x07 * 0x80), indexSF2GBASprites_Dhalsim },
    { L"Psycho Burned 1",   0x4e7144 + (0x07 * 0x80), 0x4e7164 + (0x07 * 0x80), indexSF2GBASprites_Dhalsim },
    { L"Pyscho Burned 2",   0x4e7164 + (0x07 * 0x80), 0x4e7184 + (0x07 * 0x80), indexSF2GBASprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_GBA_DICTATOR_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x08 * 0x80), 0x4e7124 + (0x08 * 0x80), indexSF2GBASprites_Bison },
    { L"Burning 2",         0x4e7124 + (0x08 * 0x80), 0x4e7144 + (0x08 * 0x80), indexSF2GBASprites_Bison },
    { L"Psycho Burned 1",   0x4e7144 + (0x08 * 0x80), 0x4e7164 + (0x08 * 0x80), indexSF2GBASprites_Bison },
    { L"Pyscho Burned 2",   0x4e7164 + (0x08 * 0x80), 0x4e7184 + (0x08 * 0x80), indexSF2GBASprites_Bison },
};

const sGame_PaletteDataset SSF2T_GBA_SAGAT_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x09 * 0x80), 0x4e7124 + (0x09 * 0x80), indexSF2GBASprites_Sagat },
    { L"Burning 2",         0x4e7124 + (0x09 * 0x80), 0x4e7144 + (0x09 * 0x80), indexSF2GBASprites_Sagat },
    { L"Psycho Burned 1",   0x4e7144 + (0x09 * 0x80), 0x4e7164 + (0x09 * 0x80), indexSF2GBASprites_Sagat },
    { L"Pyscho Burned 2",   0x4e7164 + (0x09 * 0x80), 0x4e7184 + (0x09 * 0x80), indexSF2GBASprites_Sagat },
};

const sGame_PaletteDataset SSF2T_GBA_BOXER_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x0a * 0x80), 0x4e7124 + (0x0a * 0x80), indexSF2GBASprites_Balrog },
    { L"Burning 2",         0x4e7124 + (0x0a * 0x80), 0x4e7144 + (0x0a * 0x80), indexSF2GBASprites_Balrog },
    { L"Psycho Burned 1",   0x4e7144 + (0x0a * 0x80), 0x4e7164 + (0x0a * 0x80), indexSF2GBASprites_Balrog },
    { L"Pyscho Burned 2",   0x4e7164 + (0x0a * 0x80), 0x4e7184 + (0x0a * 0x80), indexSF2GBASprites_Balrog },
};

const sGame_PaletteDataset SSF2T_GBA_CLAW_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x0b * 0x80), 0x4e7124 + (0x0b * 0x80), indexSF2GBASprites_Vega },
    { L"Burning 2",         0x4e7124 + (0x0b * 0x80), 0x4e7144 + (0x0b * 0x80), indexSF2GBASprites_Vega },
    { L"Psycho Burned 1",   0x4e7144 + (0x0b * 0x80), 0x4e7164 + (0x0b * 0x80), indexSF2GBASprites_Vega },
    { L"Pyscho Burned 2",   0x4e7164 + (0x0b * 0x80), 0x4e7184 + (0x0b * 0x80), indexSF2GBASprites_Vega },
};

const sGame_PaletteDataset SSF2T_GBA_CAMMY_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x0c * 0x80), 0x4e7124 + (0x0c * 0x80), indexSF2GBASprites_Cammy },
    { L"Burning 2",         0x4e7124 + (0x0c * 0x80), 0x4e7144 + (0x0c * 0x80), indexSF2GBASprites_Cammy },
    { L"Psycho Burned 1",   0x4e7144 + (0x0c * 0x80), 0x4e7164 + (0x0c * 0x80), indexSF2GBASprites_Cammy },
    { L"Pyscho Burned 2",   0x4e7164 + (0x0c * 0x80), 0x4e7184 + (0x0c * 0x80), indexSF2GBASprites_Cammy },
};

const sGame_PaletteDataset SSF2T_GBA_THAWK_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x0d * 0x80), 0x4e7124 + (0x0d * 0x80), indexSF2GBASprites_THawk },
    { L"Burning 2",         0x4e7124 + (0x0d * 0x80), 0x4e7144 + (0x0d * 0x80), indexSF2GBASprites_THawk },
    { L"Psycho Burned 1",   0x4e7144 + (0x0d * 0x80), 0x4e7164 + (0x0d * 0x80), indexSF2GBASprites_THawk },
    { L"Pyscho Burned 2",   0x4e7164 + (0x0d * 0x80), 0x4e7184 + (0x0d * 0x80), indexSF2GBASprites_THawk },
};

const sGame_PaletteDataset SSF2T_GBA_DEEJAY_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x0e * 0x80), 0x4e7124 + (0x0e * 0x80), indexSF2GBASprites_DeeJay },
    { L"Burning 2",         0x4e7124 + (0x0e * 0x80), 0x4e7144 + (0x0e * 0x80), indexSF2GBASprites_DeeJay },
    { L"Psycho Burned 1",   0x4e7144 + (0x0e * 0x80), 0x4e7164 + (0x0e * 0x80), indexSF2GBASprites_DeeJay },
    { L"Pyscho Burned 2",   0x4e7164 + (0x0e * 0x80), 0x4e7184 + (0x0e * 0x80), indexSF2GBASprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_GBA_FEILONG_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x0f * 0x80), 0x4e7124 + (0x0f * 0x80), indexSF2GBASprites_FeiLong },
    { L"Burning 2",         0x4e7124 + (0x0f * 0x80), 0x4e7144 + (0x0f * 0x80), indexSF2GBASprites_FeiLong },
    { L"Psycho Burned 1",   0x4e7144 + (0x0f * 0x80), 0x4e7164 + (0x0f * 0x80), indexSF2GBASprites_FeiLong },
    { L"Pyscho Burned 2",   0x4e7164 + (0x0f * 0x80), 0x4e7184 + (0x0f * 0x80), indexSF2GBASprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_GBA_GOUKI_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e7104 + (0x10 * 0x80), 0x4e7124 + (0x10 * 0x80), indexSF2GBASprites_Gouki },
    { L"Burning 2",         0x4e7124 + (0x10 * 0x80), 0x4e7144 + (0x10 * 0x80), indexSF2GBASprites_Gouki },
    { L"Psycho Burned 1",   0x4e7144 + (0x10 * 0x80), 0x4e7164 + (0x10 * 0x80), indexSF2GBASprites_Gouki },
    { L"Pyscho Burned 2",   0x4e7164 + (0x10 * 0x80), 0x4e7184 + (0x10 * 0x80), indexSF2GBASprites_Gouki },
    { L"? 1",               0x4e7984, 0x4e79a4, indexSF2GBASprites_Gouki },
    { L"? 2",               0x4e79a4, 0x4e79c4, indexSF2GBASprites_Gouki },
};

const sGame_PaletteDataset SSF2T_GBA_SHINGOUKI_STATUSEFFECTS_NODE[] =
{
    { L"Burning 1",         0x4e79c4, 0x4e79e4, indexSF2GBASprites_Gouki },
    { L"Burning 2",         0x4e79e4, 0x4e7a04, indexSF2GBASprites_Gouki },
    { L"Psycho Burned 1",   0x4e7a04, 0x4e7a24, indexSF2GBASprites_Gouki },
    { L"Pyscho Burned 2",   0x4e7a24, 0x4e7a44, indexSF2GBASprites_Gouki },
    { L"? 1",               0x4e7a44, 0x4e7a64, indexSF2GBASprites_Gouki },
    { L"? 2",               0x4e7a64, 0x4e7a84, indexSF2GBASprites_Gouki },
};

const sDescTreeNode SSF2T_GBA_RYU_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_RYU_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_RYU_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_RYU_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_RYU_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_EHONDA_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_EHONDA_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_EHONDA_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_EHONDA_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_EHONDA_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_BLANKA_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_BLANKA_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_BLANKA_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_BLANKA_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_BLANKA_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_GUILE_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_GUILE_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_GUILE_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_GUILE_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_GUILE_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_KEN_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_KEN_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_KEN_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_KEN_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_KEN_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_CHUNLI_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_CHUNLI_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_CHUNLI_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_CHUNLI_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_CHUNLI_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_ZANGIEF_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_ZANGIEF_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_ZANGIEF_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_ZANGIEF_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_ZANGIEF_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_DHALSIM_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DHALSIM_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_DHALSIM_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DHALSIM_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_DHALSIM_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_DICTATOR_COLLECTION[] =
{
    { L"A",                 DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_DICTATOR_BTNA_NODE) },
    { L"L",                 DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_BTNL_NODE, ARRAYSIZE(SSF2T_GBA_DICTATOR_BTNL_NODE) },
    { L"R",                 DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_BTNR_NODE, ARRAYSIZE(SSF2T_GBA_DICTATOR_BTNR_NODE) },
    { L"B",                 DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_BTNB_NODE, ARRAYSIZE(SSF2T_GBA_DICTATOR_BTNB_NODE) },
    { L"Select + A",        DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_BTNSA_NODE, ARRAYSIZE(SSF2T_GBA_DICTATOR_BTNSA_NODE) },
    { L"Select + L",        DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_BTNSL_NODE, ARRAYSIZE(SSF2T_GBA_DICTATOR_BTNSL_NODE) },
    { L"Select + R",        DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_BTNSR_NODE, ARRAYSIZE(SSF2T_GBA_DICTATOR_BTNSR_NODE) },
    { L"Select + B",        DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_BTNSB_NODE, ARRAYSIZE(SSF2T_GBA_DICTATOR_BTNSB_NODE) },
    { L"Start",             DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_BTNS_NODE, ARRAYSIZE(SSF2T_GBA_DICTATOR_BTNS_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_DICTATOR_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_SAGAT_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_SAGAT_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_SAGAT_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_SAGAT_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_SAGAT_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_BOXER_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_BOXER_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_BOXER_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_BOXER_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_BOXER_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_CLAW_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_CLAW_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_CLAW_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_CLAW_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_CLAW_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_CAMMY_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_CAMMY_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_CAMMY_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_CAMMY_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_CAMMY_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_THAWK_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_THAWK_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_THAWK_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_THAWK_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_THAWK_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_DEEJAY_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DEEJAY_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_DEEJAY_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DEEJAY_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_DEEJAY_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_FEILONG_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_FEILONG_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_FEILONG_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_FEILONG_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_FEILONG_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_GOUKI_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_GOUKI_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_GOUKI_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_GOUKI_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_GOUKI_STATUSEFFECTS_NODE) },
};

const sDescTreeNode SSF2T_GBA_SHINGOUKI_COLLECTION[] =
{
    { L"Colors",            DESC_NODETYPE_TREE, (void*)SSF2T_GBA_SHINGOUKI_BTNA_NODE, ARRAYSIZE(SSF2T_GBA_SHINGOUKI_BTNA_NODE) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_SHINGOUKI_STATUSEFFECTS_NODE, ARRAYSIZE(SSF2T_GBA_SHINGOUKI_STATUSEFFECTS_NODE) },
};

const sGame_PaletteDataset SSF2T_GBA_PORTRAITS_VS_NODE[] =
{
    { L"Ryu",       0x4b114c, 0x4b124c, indexSF2GBASprites_Bonus, 0x02 },
    { L"E.Honda",   0x4b124c, 0x4b134c, indexSF2GBASprites_Bonus, 0x03 },
    { L"Blanka",    0x4b134c, 0x4b144c, indexSF2GBASprites_Bonus, 0x04 },
    { L"Guile",     0x4b144c, 0x4b154c, indexSF2GBASprites_Bonus, 0x05 },

    { L"Ken",       0x4b154c, 0x4b164c, indexSF2GBASprites_Bonus, 0x06 },
    { L"Chun-Li",   0x4b164c, 0x4b174c, indexSF2GBASprites_Bonus, 0x07 },
    { L"Zangief",   0x4b174c, 0x4b184c, indexSF2GBASprites_Bonus, 0x08 },
    { L"Dhalsim",   0x4b184c, 0x4b194c, indexSF2GBASprites_Bonus, 0x09 },

    { L"Dictator",  0x4b194c, 0x4b1a4c, indexSF2GBASprites_Bonus, 0x0a },
    { L"Sagat",     0x4b1a4c, 0x4b1b4c, indexSF2GBASprites_Bonus, 0x0b },
    { L"Boxer",     0x4b1b4c, 0x4b1c4c, indexSF2GBASprites_Bonus, 0x0c },
    { L"Claw",      0x4b1c4c, 0x4b1d4c, indexSF2GBASprites_Bonus, 0x0d },

    { L"Cammy",     0x4b1d4c, 0x4b1e4c, indexSF2GBASprites_Bonus, 0x0e },
    { L"T.Hawk",    0x4b1e4c, 0x4b1f4c, indexSF2GBASprites_Bonus, 0x0f },
    { L"Dee Jay",   0x4b1f4c, 0x4b204c, indexSF2GBASprites_Bonus, 0x10 },
    { L"Fei Long",  0x4b204c, 0x4b214c, indexSF2GBASprites_Bonus, 0x11 },

    { L"Gouki",     0x4b214c, 0x4b224c, indexSF2GBASprites_Bonus, 0x12 },
};

// These are slightly quirky.  The visible palette in the mGBA palette viewer is exactly 0x7f4c20, BUT
// the exported palette is clearly 0x7f4c1e *and* the color at 0x7f4c20 is absolutely used.  So account for
// that weird logic as you would expect by stepping back to 0x7f4c1e
const sGame_PaletteDataset SSF2T_GBA_PORTRAITS_WIN_NODE[] =
{
    { L"Ryu",       0x7f4c20 - 0x02, 0x7f4e20 - 0x02, indexSF2GBASprites_Bonus, 0x42 },
    { L"E.Honda",   0x7f5228 - 0x02, 0x7f5428 - 0x02, indexSF2GBASprites_Bonus, 0x3d },
    { L"Blanka",    0x7f5830 - 0x02, 0x7f5a30 - 0x02, indexSF2GBASprites_Bonus, 0x37 },
    { L"Guile",     0x7f5e58 - 0x02, 0x7f6058 - 0x02, indexSF2GBASprites_Bonus, 0x40 },

    { L"Ken",       0x7f6448 - 0x02, 0x7f6648 - 0x02, indexSF2GBASprites_Bonus, 0x41 },
    { L"Chun-Li",   0x7f69e0 - 0x02, 0x7f6be0 - 0x02, indexSF2GBASprites_Bonus, 0x39 },
    { L"Zangief",   0x7f6f9c - 0x02, 0x7f719c - 0x02, indexSF2GBASprites_Bonus, 0x46 },
    { L"Dhalsim",   0x7f7514 - 0x02, 0x7f7714 - 0x02, indexSF2GBASprites_Bonus, 0x3b },

    { L"Dictator",  0x7f7a34 - 0x02, 0x7f7c34 - 0x02, indexSF2GBASprites_Bonus, 0x3c },
    { L"Sagat",     0x7f80a0 - 0x02, 0x7f82a0 - 0x02, indexSF2GBASprites_Bonus, 0x43 },
    { L"Boxer",     0x7f85f0 - 0x02, 0x7f87f0 - 0x02, indexSF2GBASprites_Bonus, 0x36 },
    { L"Claw",      0x7f8bc4 - 0x02, 0x7f8dc4 - 0x02, indexSF2GBASprites_Bonus, 0x45 },

    { L"Cammy",     0x7f9180 - 0x02, 0x7f9380 - 0x02, indexSF2GBASprites_Bonus, 0x38 },
    { L"T.Hawk",    0x7f96a0 - 0x02, 0x7f98a0 - 0x02, indexSF2GBASprites_Bonus, 0x44 },
    { L"Dee Jay",   0x7fa208 - 0x02, 0x7fa408 - 0x02, indexSF2GBASprites_Bonus, 0x3a },
    { L"Fei Long",  0x7f9cc0 - 0x02, 0x7f9ec0 - 0x02, indexSF2GBASprites_Bonus, 0x3e },

    { L"Gouki",     0x7fa780 - 0x02, 0x7fa980 - 0x02, indexSF2GBASprites_Bonus, 0x3f },
};

const sGame_PaletteDataset SSF2T_GBA_PORTRAITS_HUD_NODE[] =
{
    { L"Ryu",                   0x4b2380, 0x4b23a0, indexSF2GBASprites_Bonus, 0x32 },
    { L"E.Honda",               0x4b24e8, 0x4b2508, indexSF2GBASprites_Bonus, 0x2d },
    { L"Blanka",                0x4b262c, 0x4b264c, indexSF2GBASprites_Bonus, 0x25 },
    { L"Guile",                 0x4b2770, 0x4b2790, indexSF2GBASprites_Bonus, 0x30 },
    { L"Ken",                   0x4b28b4, 0x4b28d4, indexSF2GBASprites_Bonus, 0x31 },
    { L"Chun-Li",               0x4b29f8, 0x4b2a18, indexSF2GBASprites_Bonus, 0x28 },
    { L"Zangief",               0x4b2b3c, 0x4b2b5c, indexSF2GBASprites_Bonus, 0x35 },
    { L"Dhalsim",               0x4b2c80, 0x4b2ca0, indexSF2GBASprites_Bonus, 0x2b },
    { L"Dictator",              0x4b2dc4, 0x4b2de4, indexSF2GBASprites_Bonus, 0x2c },
    { L"Sagat",                 0x4b2f08, 0x4b2f28, indexSF2GBASprites_Bonus, 0x33 },
    { L"Boxer",                 0x4b304c, 0x4b306c, indexSF2GBASprites_Bonus, 0x26 },
    { L"Claw",                  0x4b3190, 0x4b31b0, indexSF2GBASprites_Bonus, 0x29 },
    { L"Cammy",                 0x4b32d4, 0x4b32f4, indexSF2GBASprites_Bonus, 0x27 },
    { L"T.Hawk",                0x4b3418, 0x4b3438, indexSF2GBASprites_Bonus, 0x34 },
    { L"Fei Long",              0x4b355c, 0x4b357c, indexSF2GBASprites_Bonus, 0x2e },
    { L"Dee Jay",               0x4b36a0, 0x4b36c0, indexSF2GBASprites_Bonus, 0x2a },
    { L"Gouki",                 0x4b37e4, 0x4b3804, indexSF2GBASprites_Bonus, 0x2f },
    { L"Shin Gouki (Unused)",   0x4b39e4, 0x4b3a04, indexSF2GBASprites_Bonus, 0x2f },
};

const sGame_PaletteDataset SSF2T_GBA_PORTRAITS_CHARSEL_NODE[] =
{
    { L"Frame",         0x4af2dc, 0x4af2fc },
    { L"Ryu",           0x7e81d0, 0x7e81f0, indexSF2GBASprites_Bonus, 0x20 },
    { L"E.Honda",       0x7e8aa0, 0x7e8ac0, indexSF2GBASprites_Bonus, 0x1b },
    { L"Blanka",        0x7e913c, 0x7e915c, indexSF2GBASprites_Bonus, 0x13 },
    { L"Guile",         0x7e886c, 0x7e888c, indexSF2GBASprites_Bonus, 0x1e },
    { L"Ken",           0x7e8404, 0x7e8424, indexSF2GBASprites_Bonus, 0x1f },
    { L"Chun-Li",       0x7e8638, 0x7e8658, indexSF2GBASprites_Bonus, 0x16 },
    { L"Zangief",       0x7e8cd4, 0x7e8cf4, indexSF2GBASprites_Bonus, 0x24 },
    { L"Dhalsim",       0x7e8f08, 0x7e8f28, indexSF2GBASprites_Bonus, 0x19 },
    { L"Dictator",      0x7ea2dc, 0x7ea2fc, indexSF2GBASprites_Bonus, 0x1a },
    { L"Sagat",         0x7ea0a8, 0x7ea0c8, indexSF2GBASprites_Bonus, 0x21 },
    { L"Boxer",         0x7e9c40, 0x7e9c60, indexSF2GBASprites_Bonus, 0x14 },
    { L"Claw",          0x7e9e74, 0x7e9e94, indexSF2GBASprites_Bonus, 0x17 },
    { L"Cammy",         0x7e9370, 0x7e9390, indexSF2GBASprites_Bonus, 0x15 },
    { L"T.Hawk",        0x7e9a0c, 0x7e9a2c, indexSF2GBASprites_Bonus, 0x23 },
    { L"Fei Long",      0x7e95a4, 0x7e95c4, indexSF2GBASprites_Bonus, 0x1c },
    { L"Dee Jay",       0x7e97d8, 0x7e97f8, indexSF2GBASprites_Bonus, 0x18 },
    { L"Gouki",         0x7ea510, 0x7ea530, indexSF2GBASprites_Bonus, 0x1d },
    { L"Shin Gouki",    0x7ea710, 0x7ea730, indexSF2GBASprites_Bonus, 0x22 },

    { L"Inactive",      0x4aefac, 0x4af02c },
};

const sDescTreeNode SSF2T_GBA_PORTRAITS_COLLECTION[] =
{
    { L"Vs",                DESC_NODETYPE_TREE, (void*)SSF2T_GBA_PORTRAITS_VS_NODE, ARRAYSIZE(SSF2T_GBA_PORTRAITS_VS_NODE) },
    { L"Win",               DESC_NODETYPE_TREE, (void*)SSF2T_GBA_PORTRAITS_WIN_NODE, ARRAYSIZE(SSF2T_GBA_PORTRAITS_WIN_NODE) },
    { L"Character Select",  DESC_NODETYPE_TREE, (void*)SSF2T_GBA_PORTRAITS_CHARSEL_NODE, ARRAYSIZE(SSF2T_GBA_PORTRAITS_CHARSEL_NODE) },
    { L"HUD Portraits",     DESC_NODETYPE_TREE, (void*)SSF2T_GBA_PORTRAITS_HUD_NODE, ARRAYSIZE(SSF2T_GBA_PORTRAITS_HUD_NODE) },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_RYU_NODE[] =
{
    { L"Background Sky",        0x7e7c48, 0x7e7c88, indexSF2GBASprites_Stages, 0x46, &pairNext3Palettes },
    { L"Mid Left Temple",       0x7e7ba8, 0x7e7c28, indexSF2GBASprites_Stages, 0x47 },
    { L"Front Right Temple",    0x7e7c28, 0x7e7c48, indexSF2GBASprites_Stages, 0x48 },
    { L"Front Floor",           0x7e7b88, 0x7e7ba8, indexSF2GBASprites_Stages, 0x49 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_EHONDA_NODE[] =
{
    { L"Normal: Part 1",    0x4ddf90, 0x4de010, indexSF2GBASprites_Stages, 0x2f, &pairNext4Palettes },
    { L"Normal: Part 2",    0x4de030, 0x4de090, indexSF2GBASprites_Stages, 0x30 },
    { L"Normal: Front Tub", 0x4de010, 0x4de030, indexSF2GBASprites_Stages, 0x31 },
    { L"Right lantern",     0x4dd19c, 0x4dd1bc, indexSF2GBASprites_Stages, 0x32 },
    { L"Left Floor 1/2",    0x4b076a, 0x4b078a, indexSF2GBASprites_Stages, 0x33 },
        { L"Left Floor 2/2",    0x4b078a, 0x4b07aa, indexSF2GBASprites_Stages, 0x33 },

    { L"Flashing Mural 1/2: Part 1",    0x4de190, 0x4de210, indexSF2GBASprites_Stages, 0x2f, &pairNextAndNext },
    { L"Flashing Mural 1/2: Part 2",    0x4de230, 0x4de290, indexSF2GBASprites_Stages, 0x30 },
    { L"Flashing Mural 1/2: Front Tub", 0x4de210, 0x4de230, indexSF2GBASprites_Stages, 0x31 },

    { L"Flashing Mural 2/2: Part 1",    0x4de390, 0x4de410, indexSF2GBASprites_Stages, 0x2f, &pairNextAndNext },
    { L"Flashing Mural 2/2: Part 2",    0x4de430, 0x4de490, indexSF2GBASprites_Stages, 0x30 },
    { L"Flashing Mural 2/2: Front Tub", 0x4de410, 0x4de430, indexSF2GBASprites_Stages, 0x31 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_BLANKA_NODE[] =
{
    { L"Sky",               0x4abb20, 0x4abb80, indexSF2GBASprites_Stages, 0x01, &pairNextAndNext },
    { L"Foreground 1/2",    0x4abd20, 0x4abe20, indexSF2GBASprites_Stages, 0x02 },
    { L"Fish",              0x7e7f88, 0x7e7fa8, indexSF2GBASprites_Stages, 0x03 },
    { L"Foreground 2/2",    0x4abf20, 0x4ac020, indexSF2GBASprites_Stages, 0x02 },
    { L"Water?",            0x4abe60, 0x4abea0, indexSF2GBASprites_Stages, 0x00 },
    { L"Water?",            0x4ac040, 0x4ac060 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_GUILE_NODE[] =
{
    { L"Palette 1/3: Background",   0x4dcb50, 0x4dcbd0, indexSF2GBASprites_Stages, 0x3e, &pairNextAndNext },
    { L"Palette 1/3: Jet",          0x4dcb30, 0x4dcb50, indexSF2GBASprites_Stages, 0x3f },
    { L"Palette 1/3: Foreground",   0x4dcad0, 0x4dcb30, indexSF2GBASprites_Stages, 0x40 },


    { L"Palette 2/3: Background",   0x4dcd50, 0x4dcdd0, indexSF2GBASprites_Stages, 0x3e, &pairNextAndNext },
    { L"Palette 2/3: Jet",          0x4dcd30, 0x4dcd50, indexSF2GBASprites_Stages, 0x3f },
    { L"Palette 2/3: Foreground",   0x4dccd0, 0x4dcd30, indexSF2GBASprites_Stages, 0x40 },

    { L"Palette 3/3: Background",   0x4dcf50, 0x4dcfd0, indexSF2GBASprites_Stages, 0x3e, &pairNextAndNext },
    { L"Palette 3/3: Jet",          0x4dcf30, 0x4dcf50, indexSF2GBASprites_Stages, 0x3f },
    { L"Palette 3/3: Foreground",   0x4dced0, 0x4dcf30, indexSF2GBASprites_Stages, 0x40 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_KEN_NODE[] =
{
    { L"Background",           0x4df88c, 0x4df8cc, indexSF2GBASprites_Stages, 0x41, &pairNext1245Palettes },
    { L"Background Buildings", 0x4df8cc, 0x4df96c, indexSF2GBASprites_Stages, 0x42 },
    { L"Building Inset 1/2",   0x4df96c, 0x4df98c, indexSF2GBASprites_Stages, 0x43 },
        { L"Building Inset 2/2",   0x4df9ac, 0x4df9cc, indexSF2GBASprites_Stages, 0x43 },
    { L"Foreground",           0x4df68c, 0x4df76c, indexSF2GBASprites_Stages, 0x44 },
    { L"Stop Sign",            0x4dfa8c, 0x4dfaac, indexSF2GBASprites_Stages, 0x45 },
    { L"Unused?",              0x4df84c, 0x4df86c },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_CHUNLI_NODE[] =
{
    { L"Sky",                   0x4af0ac, 0x4af0cc, indexSF2GBASprites_Stages, 0x18, &pairNext3Palettes },
    { L"Bright Buildings",      0x4af04c, 0x4af0ac, indexSF2GBASprites_Stages, 0x19 },
    { L"Buildings and Ground",  0x4af0cc, 0x4af10c, indexSF2GBASprites_Stages, 0x1a },
    { L"Bikers",                0x4af10c, 0x4af12c, indexSF2GBASprites_Stages, 0x1b },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_ZANGIEF_NODE[] =
{
    { L"Background 1/2: Light", 0x7fd9b0, 0x7fd9f0, indexSF2GBASprites_Stages, 0x52, &pairNext5Palettes },
    { L"Background 2/2: Dark",  0x7fdbb0, 0x7fdbf0, indexSF2GBASprites_Stages, 0x53 },

    { L"Factory",               0x7fd7b0, 0x7fd830, indexSF2GBASprites_Stages, 0x54 },
    { L"People",                0x7fd850, 0x7fd890, indexSF2GBASprites_Stages, 0x55 },
    { L"Chain",                 0x7fd830, 0x7fd850, indexSF2GBASprites_Stages, 0x56 },
    // FINAL BIT
    { L"Mechanism and Legs",    0x7fd890, 0x7fd8b0, indexSF2GBASprites_Stages, 0x57 },

    { L"Unused?",               0x7fd9f0, 0x7fda10 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_DHALSIM_NODE[] =
{
    { L"Background",            0x4af3f4, 0x4af4b4, indexSF2GBASprites_Stages, 0x2a, &pairNextAndNext },
    { L"Mid Elephant",          0x4af3d4, 0x4af3f4, indexSF2GBASprites_Stages, 0x2b },
    { L"Foreground Elephant",   0x4af4b4, 0x4af4d4, indexSF2GBASprites_Stages, 0x2c },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_DICTATOR_NODE[] =
{
    { L"Background",            0x4aa9d8, 0x4aaab8, indexSF2GBASprites_Stages, 0x2d, &pairNext },
    { L"Foreground 1/3",        0x4aa7d8, 0x4aa858, indexSF2GBASprites_Stages, 0x2e },
        { L"Foreground 2/3",        0x4aa898, 0x4aa918, indexSF2GBASprites_Stages, 0x2e },
        { L"Foreground 3/3",        0x4aa938, 0x4aa9b8, indexSF2GBASprites_Stages, 0x2e },
    { L"Unused?",               0x4aa918, 0x4aa938 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_SAGAT_NODE[] =
{
    { L"Background",            0x7e7de8, 0x7e7e08, indexSF2GBASprites_Stages, 0x4a, &pairNextAndNext },
    { L"Statue",                0x7e7da8, 0x7e7de8, indexSF2GBASprites_Stages, 0x4b },
    { L"Foreground",            0x7e7e08, 0x7e7e88, indexSF2GBASprites_Stages, 0x4c },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_BOXER_NODE[] =
{
    { L"Background 1/3: Bunny",         0x4aae38, 0x4aae58, indexSF2GBASprites_Stages, 0x09, &pairNext8Palettes },
    { L"Background 1/3: Stars",         0x4aae78, 0x4aae98, indexSF2GBASprites_Stages, 0x0a },
    { L"Background 1/3: Sky",           0x4aaeb8, 0x4aaed8, indexSF2GBASprites_Stages, 0x0b },

    { L"Ground 2/3",                    0x4aaed8, 0x4aaf18, indexSF2GBASprites_Stages, 0x0c, &pairNext },
    { L"Middle 1/3: Sign",              0x4aae18, 0x4aae38, indexSF2GBASprites_Stages, 0x0d },
    { L"Middle 1/3: Lower Signage",     0x4aae58, 0x4aae78, indexSF2GBASprites_Stages, 0x0e },
    { L"Middle 1/3: Ground",            0x4aae98, 0x4aaeb8, indexSF2GBASprites_Stages, 0x0f },

    { L"Crowd 1/2",                     0x4aac18, 0x4aacd8, indexSF2GBASprites_Stages, 0x10, &pairNext },
    { L"Crowd feet",                    0x4aacd8, 0x4aacf8, indexSF2GBASprites_Stages, 0x11 },
    { L"Crowd 2/2",                     0x4aaf58, 0x4ab018, indexSF2GBASprites_Stages, 0x10, &pairPrevious },

    { L"Background 2/3: Bunny",         0x4ab038, 0x4ab058, indexSF2GBASprites_Stages, 0x09, &pairNext6Palettes },
    { L"Background 2/3: Stars",         0x4ab078, 0x4ab098, indexSF2GBASprites_Stages, 0x0a },
    { L"Background 2/3: Sky",           0x4ab0b8, 0x4ab0d8, indexSF2GBASprites_Stages, 0x0b },
    { L"Ground 1/3",                    0x4aad18, 0x4aad58, indexSF2GBASprites_Stages, 0x0c },
    { L"Middle 2/3: Sign",              0x4ab018, 0x4ab038, indexSF2GBASprites_Stages, 0x0d },
    { L"Middle 2/3: Lower Signage",     0x4ab058, 0x4ab078, indexSF2GBASprites_Stages, 0x0e },
    { L"Middle 2/3: Ground",            0x4ab098, 0x4ab0b8, indexSF2GBASprites_Stages, 0x0f },

    { L"Background 3/3: Bunny",         0x4ab158, 0x4ab178, indexSF2GBASprites_Stages, 0x09, &pairNext6Palettes },
    { L"Background 3/3: Stars",         0x4ab198, 0x4ab1b8, indexSF2GBASprites_Stages, 0x0a },
    { L"Background 3/3: Sky",           0x4ab1d8, 0x4ab1f8, indexSF2GBASprites_Stages, 0x0b },
    { L"Ground 3/3",                    0x4ab0d8, 0x4ab118, indexSF2GBASprites_Stages, 0x0c },
    { L"Middle 3/3: Sign",              0x4ab138, 0x4ab158, indexSF2GBASprites_Stages, 0x0d },
    { L"Middle 3/3: Lower Signage",     0x4ab178, 0x4ab198, indexSF2GBASprites_Stages, 0x0e },
    { L"Middle 3/3: Ground",            0x4ab1b8, 0x4ab1d8, indexSF2GBASprites_Stages, 0x0f },
    
    { L"Unused?",                       0x4aacf8, 0x4aad18 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_CLAW_NODE[] =
{
    { L"1/3: Back Walls",               0x4aa498, 0x4aa4b8, indexSF2GBASprites_Stages, 0x1c, &pairNext7Palettes },
    { L"1/3: Mural",                    0x4aa4b8, 0x4aa4d8, indexSF2GBASprites_Stages, 0x1d },
    { L"1/3: Stand",                    0x4aa3f8, 0x4aa418, indexSF2GBASprites_Stages, 0x1e },
    { L"1/3: Customers",                0x4aa418, 0x4aa438, indexSF2GBASprites_Stages, 0x1f },
    { L"1/3: Waiters",                  0x4aa458, 0x4aa478, indexSF2GBASprites_Stages, 0x20 },
    { L"1/3: Floor and Fencing",        0x4aa438, 0x4aa458, indexSF2GBASprites_Stages, 0x21 },
    { L"Dancers",                       0x4af310, 0x4af330, indexSF2GBASprites_Stages, 0x23 },
    { L"1/3: Fence and Left of Tables", 0x4aa478, 0x4aa498, indexSF2GBASprites_Stages, 0x22 },


    { L"2/3: Back Walls",               0x4aa698, 0x4aa6b8, indexSF2GBASprites_Stages, 0x1c, &pairNext6Palettes },
    { L"2/3: Mural",                    0x4aa6b8, 0x4aa6d8, indexSF2GBASprites_Stages, 0x1d },
    { L"2/3: Stand",                    0x4aa5f8, 0x4aa618, indexSF2GBASprites_Stages, 0x1e },
    { L"2/3: Customers",                0x4aa618, 0x4aa638, indexSF2GBASprites_Stages, 0x1f },
    { L"2/3: Waiters",                  0x4aa658, 0x4aa678, indexSF2GBASprites_Stages, 0x20 },
    { L"2/3: Floor and Fencing",        0x4aa638, 0x4aa658, indexSF2GBASprites_Stages, 0x21 },
    { L"2/3: Fence and Left of Tables", 0x4aa678, 0x4aa698, indexSF2GBASprites_Stages, 0x22 },

    { L"3/3: Back Walls",               0x4aa798, 0x4aa7b8, indexSF2GBASprites_Stages, 0x1c, &pairNext6Palettes },
    { L"3/3: Mural",                    0x4aa7b8, 0x4aa7d8, indexSF2GBASprites_Stages, 0x1d },
    { L"3/3: Stand",                    0x4aa6f8, 0x4aa718, indexSF2GBASprites_Stages, 0x1e },
    { L"3/3: Customers",                0x4aa718, 0x4aa738, indexSF2GBASprites_Stages, 0x1f },
    { L"3/3: Waiters",                  0x4aa758, 0x4aa778, indexSF2GBASprites_Stages, 0x20 },
    { L"3/3: Floor and Fencing",        0x4aa738, 0x4aa758, indexSF2GBASprites_Stages, 0x21 },
    { L"3/3: Fence and Left of Tables", 0x4aa778, 0x4aa798, indexSF2GBASprites_Stages, 0x22 },

    { L"Stand? 1/3",                    0x4aa4d8, 0x4aa4f8, indexSF2GBASprites_Stages, 0x1e },
    { L"Stand? 2/3",                    0x4aa4f8, 0x4aa518, indexSF2GBASprites_Stages, 0x1e },
    { L"Stand? 3/3",                    0x4aa518, 0x4aa538, indexSF2GBASprites_Stages, 0x1e },

    { L"Wall sign part 1/5 (\"Meson\")",                0x4aa538, 0x4aa558, indexSF2GBASprites_Stages, 0x1c },
    { L"Wall sign part 2/5 (\"Meson de\")",             0x4aa558, 0x4aa578, indexSF2GBASprites_Stages, 0x1c },
    { L"Wall sign part 3/5 (\"Meson de la\")",          0x4aa578, 0x4aa598, indexSF2GBASprites_Stages, 0x1c },
    { L"Wall sign part 4/5 (\"Meson de la Taberna\")",  0x4aa598, 0x4aa5b8, indexSF2GBASprites_Stages, 0x1c },
    { L"Wall sign part 5/5 (blank)",                    0x4aa5b8, 0x4aa5d8, indexSF2GBASprites_Stages, 0x1c },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_CAMMY_NODE[] =
{
    { L"Background 1/2",                0x4ad63c, 0x4ad6fc, indexSF2GBASprites_Stages, 0x12, &pairNext5Palettes},
    { L"Cycle 1/8: Sparkles 1/8",       0x4ac71c, 0x4ac73c, indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 1/8: Aurora",             0x4ac67c, 0x4ac69c, indexSF2GBASprites_Stages, 0x14 },
    { L"Cycle 1/8: Castles",            0x4ac69c, 0x4ac6fc, indexSF2GBASprites_Stages, 0x15 },
    { L"Cycle 1/8: Bridge",             0x4ac63c, 0x4ac67c, indexSF2GBASprites_Stages, 0x16 },
    { L"Crow",                          0x4af228, 0x4af248, indexSF2GBASprites_Stages, 0x17 },

    { L"Cycle 1/8: Sparkles 2/8",       0x4ac73c, 0x4ac75c, indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 1/8: Sparkles 3/8",       0x4ac75c, 0x4ac77c, indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 1/8: Sparkles 4/8",       0x4ac77c, 0x4ac79c, indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 1/8: Sparkles 5/8",       0x4ac79c, 0x4ac7bc, indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 1/8: Sparkles 6/8",       0x4ac7bc, 0x4ac7dc, indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 1/8: Sparkles 7/8",       0x4ac7dc, 0x4ac7fc, indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 1/8: Sparkles 8/8",       0x4ac7fc, 0x4ac81c, indexSF2GBASprites_Stages, 0x13 },

    // no sparkle palettes for cycle 2
    { L"Cycle 2/8: Aurora",             0x4ac87c, 0x4ac89c, indexSF2GBASprites_Stages, 0x14, &pairNextAndNext },
    { L"Cycle 2/8: Castles",            0x4ac89c, 0x4ac8fc, indexSF2GBASprites_Stages, 0x15 },
    { L"Cycle 2/8: Bridge",             0x4ac83c, 0x4ac87c, indexSF2GBASprites_Stages, 0x16 },

    { L"Cycle 3/8: Aurora",             0x4ac67c + (2 * 0x200), 0x4ac69c + (2 * 0x200), indexSF2GBASprites_Stages, 0x14, &pairNext3Palettes },
    { L"Cycle 3/8: Castles",            0x4ac69c + (2 * 0x200), 0x4ac6fc + (2 * 0x200), indexSF2GBASprites_Stages, 0x15 },
    { L"Cycle 3/8: Bridge",             0x4ac63c + (2 * 0x200), 0x4ac67c + (2 * 0x200), indexSF2GBASprites_Stages, 0x16 },
    { L"Cycle 3/8: Sparkles 1/4",       0x4ac71c + (2 * 0x200), 0x4ac73c + (2 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 3/8: Sparkles 2/8",       0x4ac73c + (2 * 0x200), 0x4ac75c + (2 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 3/8: Sparkles 3/8",       0x4ac75c + (2 * 0x200), 0x4ac77c + (2 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 3/8: Sparkles 4/8",       0x4ac77c + (2 * 0x200), 0x4ac79c + (2 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 3/8: Sparkles 5/8",       0x4ac79c + (2 * 0x200), 0x4ac7bc + (2 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 3/8: Sparkles 6/8",       0x4ac7bc + (2 * 0x200), 0x4ac7dc + (2 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 3/8: Sparkles 7/8",       0x4ac7dc + (2 * 0x200), 0x4ac7fc + (2 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 3/8: Sparkles 8/8",       0x4ac7fc + (2 * 0x200), 0x4ac81c + (2 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 4/8: Aurora",             0x4ac67c + (3 * 0x200), 0x4ac69c + (3 * 0x200), indexSF2GBASprites_Stages, 0x14, &pairNext3Palettes },
    { L"Cycle 4/8: Castles",            0x4ac69c + (3 * 0x200), 0x4ac6fc + (3 * 0x200), indexSF2GBASprites_Stages, 0x15 },
    { L"Cycle 4/8: Bridge",             0x4ac63c + (3 * 0x200), 0x4ac67c + (3 * 0x200), indexSF2GBASprites_Stages, 0x16 },
    { L"Cycle 4/8: Sparkles 1/8",       0x4ac71c + (3 * 0x200), 0x4ac73c + (3 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 4/8: Sparkles 2/8",       0x4ac73c + (3 * 0x200), 0x4ac75c + (3 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 4/8: Sparkles 3/8",       0x4ac75c + (3 * 0x200), 0x4ac77c + (3 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 4/8: Sparkles 4/8",       0x4ac77c + (3 * 0x200), 0x4ac79c + (3 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 4/8: Sparkles 5/8",       0x4ac79c + (3 * 0x200), 0x4ac7bc + (3 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 4/8: Sparkles 6/8",       0x4ac7bc + (3 * 0x200), 0x4ac7dc + (3 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 4/8: Sparkles 7/8",       0x4ac7dc + (3 * 0x200), 0x4ac7fc + (3 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 4/8: Sparkles 8/8",       0x4ac7fc + (3 * 0x200), 0x4ac81c + (3 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 5/8: Aurora",             0x4ac67c + (4 * 0x200), 0x4ac69c + (4 * 0x200), indexSF2GBASprites_Stages, 0x14, &pairNext3Palettes },
    { L"Cycle 5/8: Castles",            0x4ac69c + (4 * 0x200), 0x4ac6fc + (4 * 0x200), indexSF2GBASprites_Stages, 0x15 },
    { L"Cycle 5/8: Bridges",            0x4ac63c + (4 * 0x200), 0x4ac67c + (4 * 0x200), indexSF2GBASprites_Stages, 0x16 },
    { L"Cycle 5/8: Sparkles 1/8",       0x4ac71c + (4 * 0x200), 0x4ac73c + (4 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 5/8: Sparkles 2/8",       0x4ac73c + (4 * 0x200), 0x4ac75c + (4 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 5/8: Sparkles 3/8",       0x4ac75c + (4 * 0x200), 0x4ac77c + (4 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 5/8: Sparkles 4/8",       0x4ac77c + (4 * 0x200), 0x4ac79c + (4 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 5/8: Sparkles 5/8",       0x4ac79c + (4 * 0x200), 0x4ac7bc + (4 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 5/8: Sparkles 6/8",       0x4ac7bc + (4 * 0x200), 0x4ac7dc + (4 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 5/8: Sparkles 7/8",       0x4ac7dc + (4 * 0x200), 0x4ac7fc + (4 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 5/8: Sparkles 8/8",       0x4ac7fc + (4 * 0x200), 0x4ac81c + (4 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 6/8: Aurora",             0x4ac67c + (5 * 0x200), 0x4ac69c + (5 * 0x200), indexSF2GBASprites_Stages, 0x14, &pairNext3Palettes },
    { L"Cycle 6/8: Castles",            0x4ac69c + (5 * 0x200), 0x4ac6fc + (5 * 0x200), indexSF2GBASprites_Stages, 0x15 },
    { L"Cycle 6/8: Bridges",            0x4ac63c + (5 * 0x200), 0x4ac67c + (5 * 0x200), indexSF2GBASprites_Stages, 0x16 },
    { L"Cycle 6/8: Sparkles 1/8",       0x4ac71c + (5 * 0x200), 0x4ac73c + (5 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 6/8: Sparkles 2/8",       0x4ac73c + (5 * 0x200), 0x4ac75c + (5 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 6/8: Sparkles 3/8",       0x4ac75c + (5 * 0x200), 0x4ac77c + (5 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 6/8: Sparkles 4/8",       0x4ac77c + (5 * 0x200), 0x4ac79c + (5 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 6/8: Sparkles 5/8",       0x4ac79c + (5 * 0x200), 0x4ac7bc + (5 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 6/8: Sparkles 6/8",       0x4ac7bc + (5 * 0x200), 0x4ac7dc + (5 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 6/8: Sparkles 7/8",       0x4ac7dc + (5 * 0x200), 0x4ac7fc + (5 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 6/8: Sparkles 8/8",       0x4ac7fc + (5 * 0x200), 0x4ac81c + (5 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 7/8: Aurora",             0x4ac67c + (6 * 0x200), 0x4ac69c + (6 * 0x200), indexSF2GBASprites_Stages, 0x14, &pairNext3Palettes },
    { L"Cycle 7/8: Castles",            0x4ac69c + (6 * 0x200), 0x4ac6fc + (6 * 0x200), indexSF2GBASprites_Stages, 0x15 },
    { L"Cycle 7/8: Bridges",            0x4ac63c + (6 * 0x200), 0x4ac67c + (6 * 0x200), indexSF2GBASprites_Stages, 0x16 },
    { L"Cycle 7/8: Sparkles 1/8",       0x4ac71c + (6 * 0x200), 0x4ac73c + (6 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 7/8: Sparkles 2/8",       0x4ac73c + (6 * 0x200), 0x4ac75c + (6 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 7/8: Sparkles 3/8",       0x4ac75c + (6 * 0x200), 0x4ac77c + (6 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 7/8: Sparkles 4/8",       0x4ac77c + (6 * 0x200), 0x4ac79c + (6 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 7/8: Sparkles 5/8",       0x4ac79c + (6 * 0x200), 0x4ac7bc + (6 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 7/8: Sparkles 6/8",       0x4ac7bc + (6 * 0x200), 0x4ac7dc + (6 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 7/8: Sparkles 7/8",       0x4ac7dc + (6 * 0x200), 0x4ac7fc + (6 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 7/8: Sparkles 8/8",       0x4ac7fc + (6 * 0x200), 0x4ac81c + (6 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 8/8: Aurora",             0x4ac67c + (7 * 0x200), 0x4ac69c + (7 * 0x200), indexSF2GBASprites_Stages, 0x14, &pairNext3Palettes },
    { L"Cycle 8/8: Castles",            0x4ac69c + (7 * 0x200), 0x4ac6fc + (7 * 0x200), indexSF2GBASprites_Stages, 0x15 },
    { L"Cycle 8/8: Bridges",            0x4ac63c + (7 * 0x200), 0x4ac67c + (7 * 0x200), indexSF2GBASprites_Stages, 0x16 },
    { L"Cycle 8/8: Sparkles 1/8",       0x4ac71c + (7 * 0x200), 0x4ac73c + (7 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Cycle 8/8: Sparkles 2/8",       0x4ac73c + (7 * 0x200), 0x4ac75c + (7 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 8/8: Sparkles 3/8",       0x4ac75c + (7 * 0x200), 0x4ac77c + (7 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 8/8: Sparkles 4/8",       0x4ac77c + (7 * 0x200), 0x4ac79c + (7 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 8/8: Sparkles 5/8",       0x4ac79c + (7 * 0x200), 0x4ac7bc + (7 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 8/8: Sparkles 6/8",       0x4ac7bc + (7 * 0x200), 0x4ac7dc + (7 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 8/8: Sparkles 7/8",       0x4ac7dc + (7 * 0x200), 0x4ac7fc + (7 * 0x200), indexSF2GBASprites_Stages, 0x13 },
    { L"Cycle 8/8: Sparkles 8/8",       0x4ac7fc + (7 * 0x200), 0x4ac81c + (7 * 0x200), indexSF2GBASprites_Stages, 0x13 },

    { L"Background 2/2",                0x4ad83c, 0x4ad8fc, indexSF2GBASprites_Stages, 0x12 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_THAWK_NODE[] =
{
    { L"Background: Building",      0x7f24ec, 0x7f250c, indexSF2GBASprites_Stages, 0x4d, &pairNext4Palettes },
    { L"Ground",                    0x7f252c, 0x7f254c, indexSF2GBASprites_Stages, 0x4e },
    { L"Tent 1/2",                  0x7f250c, 0x7f252c, indexSF2GBASprites_Stages, 0x4f },
    { L"People",                    0x7f246c, 0x7f24ec, indexSF2GBASprites_Stages, 0x50 },
    { L"Birds and Dancer",          0x4ddf1c, 0x4ddf3c, indexSF2GBASprites_Stages, 0x51 },

        { L"Tent 2/2",                  0x7f25ac, 0x7f25cc, indexSF2GBASprites_Stages, 0x4f },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_DEEJAY_NODE[] =
{
    { L"Sky 1/5",               0x4af9d4, 0x4afa34, indexSF2GBASprites_Stages, 0x24, &pairNext5Palettes },
    { L"Ground 1/3",            0x4af634, 0x4af654, indexSF2GBASprites_Stages, 0x25 },
    { L"Trees and people 1/2",  0x4af5d4, 0x4af634, indexSF2GBASprites_Stages, 0x26 },
    { L"Gazebo and grass 1/2",  0x4af654, 0x4af694, indexSF2GBASprites_Stages, 0x27 },
    { L"Dancers",               0x4b03d4, 0x4b03f4, indexSF2GBASprites_Stages, 0x28 },
    { L"Left Torch",            0x4b06a8, 0x4b06c8, indexSF2GBASprites_Stages, 0x29 },

    { L"Sky 2/5",               0x4afbd4, 0x4afc34, indexSF2GBASprites_Stages, 0x24, &pairNext3Palettes },
    { L"Ground 2/3",            0x4af834, 0x4af854, indexSF2GBASprites_Stages, 0x25 },
    { L"Trees and people 2/2",  0x4af7d4, 0x4af834, indexSF2GBASprites_Stages, 0x26 },
    { L"Gazebo and grass 2/2",  0x4af854, 0x4af894, indexSF2GBASprites_Stages, 0x27 },

    { L"Sky 3/5",               0x4afdd4, 0x4afe34, indexSF2GBASprites_Stages, 0x24 },
    { L"Sky 4/5",               0x4affd4, 0x4b0034, indexSF2GBASprites_Stages, 0x24 },
    { L"Sky 5/5",               0x4b01d4, 0x4b0234, indexSF2GBASprites_Stages, 0x24 },

    { L"Ground 3/3",            0x4afa34, 0x4afa54, indexSF2GBASprites_Stages, 0x25 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_FEILONG_NODE[] =
{
    { L"Normal: Background Upper Left",             0x4b3e24, 0x4b3e44, indexSF2GBASprites_Stages, 0x34, &pairNext5Palettes },
    { L"Normal: Background, Ring, Right Dragon",    0x4b3e64, 0x4b3ee4, indexSF2GBASprites_Stages, 0x35 },
    { L"Normal: Middle Dragon",                     0x4b3e04, 0x4b3e24, indexSF2GBASprites_Stages, 0x36 },
    { L"Normal: Left Dragon",                       0x4b3e44, 0x4b3e64, indexSF2GBASprites_Stages, 0x37 },
    { L"Post Caps",                                 0x4dd268, 0x4dd288, indexSF2GBASprites_Stages, 0x38 },
    { L"Ring Corners",                              0x4dd288, 0x4dd2a8, indexSF2GBASprites_Stages, 0x39 },

    { L"Light: Background Upper Left",              0x4b3c24, 0x4b3c44, indexSF2GBASprites_Stages, 0x34, &pairNext3Palettes },
    { L"Light: Background, Ring, Right Dragon",     0x4b3c64, 0x4b3ce4, indexSF2GBASprites_Stages, 0x35 },
    { L"Light: Middle Dragon",                      0x4b3c04, 0x4b3c24, indexSF2GBASprites_Stages, 0x36 },
    { L"Light: Left Dragon",                        0x4b3c44, 0x4b3c64, indexSF2GBASprites_Stages, 0x37 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_GOUKI_NODE[] =
{
    { L"Sky",           0x4dc990, 0x4dc9d0, indexSF2GBASprites_Stages, 0x3a, &pairNext3Palettes },
    { L"Left temple",   0x4dc970, 0x4dc990, indexSF2GBASprites_Stages, 0x3b },
    { L"Right temple",  0x4dc8f0, 0x4dc970, indexSF2GBASprites_Stages, 0x3c },
    { L"Flooring 1/2",  0x4dc8d0, 0x4dc8f0, indexSF2GBASprites_Stages, 0x3d },
        { L"Flooring 2/2?", 0x4dc9f0, 0x4dca10, indexSF2GBASprites_Stages, 0x3d },
    { L"Unused?",       0x4dca30, 0x4dcab0 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_BONUSCAR_NODE[] =
{
    { L"Background",        0x4ab618, 0x4ab6d8, indexSF2GBASprites_Stages, 0x04, &pairNext3Palettes },

    { L"Car Undercarriage", 0x4ab2f8, 0x4ab318, indexSF2GBASprites_Stages, 0x05, &pairNextAndNext },
    { L"Car Frame",         0x4ab278, 0x4ab2b8, indexSF2GBASprites_Stages, 0x06 },
    { L"Car Body",          0x4ab218, 0x4ab278, indexSF2GBASprites_Stages, 0x07 },

    { L"Version 2: Car Undercarriage", 0x4ab4f8, 0x4ab518, indexSF2GBASprites_Stages, 0x05, &pairNextAndNext},
    { L"Version 2: Car Frame",         0x4ab478, 0x4ab4b8, indexSF2GBASprites_Stages, 0x06 },
    { L"Version 2: Car Body",          0x4ab418, 0x4ab478, indexSF2GBASprites_Stages, 0x07 },
};

const sGame_PaletteDataset SSF2T_GBA_STAGES_BONUSCASKS_NODE[] =
{
    { L"Stage", 0x7f2168, 0x7f2268, indexSF2GBASprites_Stages, 0x08 },
};

const sDescTreeNode SSF2T_GBA_STAGES_COLLECTION[] =
{
    { L"Ryu",       DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_RYU_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_RYU_NODE) },
    { L"E.Honda",   DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_EHONDA_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_EHONDA_NODE) },
    { L"Blanka",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_BLANKA_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_BLANKA_NODE) },
    { L"Guile",     DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_GUILE_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_GUILE_NODE) },
    { L"Ken",       DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_KEN_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_KEN_NODE) },
    { L"Chun-Li",   DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_CHUNLI_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_CHUNLI_NODE) },
    { L"Zangief",   DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_ZANGIEF_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_ZANGIEF_NODE) },
    { L"Dhalsim",   DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_DHALSIM_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_DHALSIM_NODE) },
    { L"Dictator",  DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_DICTATOR_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_DICTATOR_NODE) },
    { L"Sagat",     DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_SAGAT_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_SAGAT_NODE) },
    { L"Boxer",     DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_BOXER_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_BOXER_NODE) },
    { L"Claw",      DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_CLAW_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_CLAW_NODE) },
    { L"Cammy",     DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_CAMMY_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_CAMMY_NODE) },
    { L"T.Hawk",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_THAWK_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_THAWK_NODE) },
    { L"Dee Jay",   DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_DEEJAY_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_DEEJAY_NODE) },
    { L"Fei Long",  DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_FEILONG_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_FEILONG_NODE) },

    { L"Gouki",     DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_GOUKI_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_GOUKI_NODE) },

    { L"Bonus Stage: Car",      DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_BONUSCAR_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_BONUSCAR_NODE) },
    { L"Bonus Stage: Casks",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_BONUSCASKS_NODE, ARRAYSIZE(SSF2T_GBA_STAGES_BONUSCASKS_NODE) },
};

const sGame_PaletteDataset SSF2T_GBA_BONUS_NODE[] =
{
    { L"HUD",       0x4aabd8, 0x4aabf8,indexSF2GBASprites_Bonus, 0x00, &pairNext },
    { L"HUD Text",  0x4e5af6, 0x4e5b16, indexSF2GBASprites_Bonus, 0x01 },
};

const sDescTreeNode SSF2T_GBA_BONUS_COLLECTION[] =
{
    { L"Bonus",     DESC_NODETYPE_TREE, (void*)SSF2T_GBA_BONUS_NODE, ARRAYSIZE(SSF2T_GBA_BONUS_NODE) },
};

const sDescTreeNode SSF2T_GBA_UNITS[] =
{
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SSF2T_GBA_RYU_COLLECTION, ARRAYSIZE(SSF2T_GBA_RYU_COLLECTION) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_EHONDA_COLLECTION, ARRAYSIZE(SSF2T_GBA_EHONDA_COLLECTION) },
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SSF2T_GBA_BLANKA_COLLECTION, ARRAYSIZE(SSF2T_GBA_BLANKA_COLLECTION) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SSF2T_GBA_GUILE_COLLECTION, ARRAYSIZE(SSF2T_GBA_GUILE_COLLECTION) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SSF2T_GBA_KEN_COLLECTION, ARRAYSIZE(SSF2T_GBA_KEN_COLLECTION) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_CHUNLI_COLLECTION, ARRAYSIZE(SSF2T_GBA_CHUNLI_COLLECTION) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_ZANGIEF_COLLECTION, ARRAYSIZE(SSF2T_GBA_ZANGIEF_COLLECTION) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DHALSIM_COLLECTION, ARRAYSIZE(SSF2T_GBA_DHALSIM_COLLECTION) },
    { L"Dictator",   DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DICTATOR_COLLECTION, ARRAYSIZE(SSF2T_GBA_DICTATOR_COLLECTION) },
    { L"Sagat",      DESC_NODETYPE_TREE, (void*)SSF2T_GBA_SAGAT_COLLECTION, ARRAYSIZE(SSF2T_GBA_SAGAT_COLLECTION) },
    { L"Boxer",      DESC_NODETYPE_TREE, (void*)SSF2T_GBA_BOXER_COLLECTION, ARRAYSIZE(SSF2T_GBA_BOXER_COLLECTION) },
    { L"Claw",       DESC_NODETYPE_TREE, (void*)SSF2T_GBA_CLAW_COLLECTION, ARRAYSIZE(SSF2T_GBA_CLAW_COLLECTION) },
    { L"Cammy",      DESC_NODETYPE_TREE, (void*)SSF2T_GBA_CAMMY_COLLECTION, ARRAYSIZE(SSF2T_GBA_CAMMY_COLLECTION) },
    { L"T.Hawk",     DESC_NODETYPE_TREE, (void*)SSF2T_GBA_THAWK_COLLECTION, ARRAYSIZE(SSF2T_GBA_THAWK_COLLECTION) },
    { L"Dee Jay",    DESC_NODETYPE_TREE, (void*)SSF2T_GBA_DEEJAY_COLLECTION, ARRAYSIZE(SSF2T_GBA_DEEJAY_COLLECTION) },
    { L"Fei Long",   DESC_NODETYPE_TREE, (void*)SSF2T_GBA_FEILONG_COLLECTION, ARRAYSIZE(SSF2T_GBA_FEILONG_COLLECTION) },

    { L"Gouki",      DESC_NODETYPE_TREE, (void*)SSF2T_GBA_GOUKI_COLLECTION, ARRAYSIZE(SSF2T_GBA_GOUKI_COLLECTION) },

    { L"Shin Gouki", DESC_NODETYPE_TREE, (void*)SSF2T_GBA_SHINGOUKI_COLLECTION, ARRAYSIZE(SSF2T_GBA_SHINGOUKI_COLLECTION) },

    { L"Portraits",  DESC_NODETYPE_TREE, (void*)SSF2T_GBA_PORTRAITS_COLLECTION, ARRAYSIZE(SSF2T_GBA_PORTRAITS_COLLECTION) },
    { L"Stages",     DESC_NODETYPE_TREE, (void*)SSF2T_GBA_STAGES_COLLECTION, ARRAYSIZE(SSF2T_GBA_STAGES_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_GBA_BONUS_COLLECTION, ARRAYSIZE(SSF2T_GBA_BONUS_COLLECTION) },
};
