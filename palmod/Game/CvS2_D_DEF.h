#pragma once

#include "CvS2_A_DEF.h"

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D =
{
    // Use the parent's default preview for main sprite, and explicitly turn off previews for the Extras
    { L"Main Sprite", 0x00 },
    { L"Extra 1", 0x20, INVALID_UNIT_VALUE_16 },
    { L"Extra 2", 0x40, INVALID_UNIT_VALUE_16 },
    { L"Extra 3", 0x60, INVALID_UNIT_VALUE_16 },
    { L"Extra 4", 0x80, INVALID_UNIT_VALUE_16 },
    { L"Extra 5", 0xa0, INVALID_UNIT_VALUE_16 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_Ken =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Ken, 0x00 },
    { L"Extra 1", 0x20 },
    { L"Extra 2: Shoryuken Flames", 0x40, indexCVS2Sprites_Ken, 0x02 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_Chun =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Extra 1: Cheek Blush", 0x20, indexCVS2Sprites_ChunLi, 0x01 },
    { L"Extra 2: Kikouken / Kikoushou", 0x40, indexCVS2Sprites_ChunLi, 0x02 },
    { L"Extra 3: Hon Fu", 0x60, indexCVS2Sprites_ChunLi, 0x03 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_Blanka =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Blanka, 0x00, &pairNext },
    { L"Extra 1", 0x20, indexCVS2Sprites_Blanka, 0x01 },
    { L"Extra 2", 0x40 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_Vega =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Vega, 0x00, &pairNext },
    { L"Extra 1: Claw", 0x20, indexCVS2Sprites_Vega, 0x01 },
    { L"Extra 2", 0x40 },
    { L"Extra 3: SNake Win Pose", 0x60, indexCVS2Sprites_Vega, 0x03 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_Bison =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_MBison },
    { L"Extra 1", 0x20 },
    { L"Extra 2", 0x40, indexCVS2Sprites_MBison, 0x02 },
    { L"Extra 3", 0x60, indexCVS2Sprites_MBison, 0x03 },
    { L"Extra 4", 0x80, indexCVS2Sprites_MBison, 0x04 },
    { L"Extra 5", 0xa0},
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_Akuma =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Akuma },
    { L"Hadouken", 0x20, indexCVS2Sprites_Akuma, 0x01 },
    { L"Shakunetsu", 0x40, indexCVS2Sprites_Akuma, 0x02 },
    { L"Dictator Smoke", 0x60, indexCVS2Sprites_Akuma, 0x03 },
    { L"Power Up", 0x80, indexCVS2Sprites_Akuma, 0x04 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_EvilRyu =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_EvilRyu },
    { L"Extra 1: Hadouken / Shinkuu Hadouken", 0x20, indexCVS2Sprites_Bonus, 0x00 },
    { L"Extra 2: Shakunetsu", 0x40, indexCVS2Sprites_Akuma, 0x02 },
    { L"Extra 3: Kanji Smoke", 0x60, indexCVS2Sprites_EvilRyu, 0x03 },
    { L"Extra 4: Metsu Hadouken", 0x80, indexCVS2Sprites_EvilRyu, 0x04 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_Kyo =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Kyo },
    { L"Extra 1: Shiki", 0x20, indexCVS2Sprites_Kyo, 0x01 },
    { L"Extra 2", 0x40, indexCVS2Sprites_Kyo, 0x02 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_IORI =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Iori, 0x00, &pairNext },
    { L"Extra 1: Teeth", 0x20, indexCVS2Sprites_Iori, 0x01 },
    { L"Extra 2: One for the Road Ground Effect", 0x40, indexCVS2Sprites_Iori, 0x02 },
    { L"Extra 3: Dark Thrust", 0x60, indexCVS2Sprites_Iori, 0x03 },
    { L"Extra 4: One for the Road Blast", 0x80, indexCVS2Sprites_Iori, 0x04 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_TERRY =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Terry },
    { L"Extra 1: Buster Wolf", 0x20, indexCVS2Sprites_Terry, 0x01 },
    { L"Extra 2: Crack Shoot", 0x40, indexCVS2Sprites_Terry, 0x02 },
    { L"Extra 3: Power Wave", 0x60, indexCVS2Sprites_Terry, 0x03 },
    { L"Extra 4: Burning Knuckle", 0x80, indexCVS2Sprites_Terry, 0x04 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_RYO =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Ryo },
    { L"Extra 1", 0x20, indexCVS2Sprites_Ryo, 0x01 },
    { L"Extra 2", 0x40, indexCVS2Sprites_Ryo, 0x02 },
    { L"Extra 3", 0x60, indexCVS2Sprites_Ryo, 0x03 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_MAI =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Mai },
    { L"Extra 1: Ryuuenbu", 0x20, indexCVS2Sprites_Mai, 0x01 },
    { L"Extra 2: Chun-Li Outfit", 0x40, indexCVS2Sprites_Mai, 0x02 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_KIM =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Kim, 0, &pairNext },
    { L"Extra 1: Sparkles and board", 0x20, indexCVS2Sprites_Kim, 0x01 },
    { L"Extra 2", 0x40 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_GEESE =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Geese, 0, &pairNext3 },
    { L"Extra 1", 0x20, indexCVS2Sprites_Geese, 0x01 },
    { L"Extra 2", 0x40, indexCVS2Sprites_Geese, 0x02 },
    { L"Extra 3: Coat", 0x60, indexCVS2Sprites_Geese, 0x03 },
    { L"Extra 4", 0x80, indexCVS2Sprites_Geese, 0x04 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_YAMAZAKI =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_RyujiYamazaki, 0, &pairNext },
    { L"Extra 1", 0x20, indexCVS2Sprites_RyujiYamazaki, 0x01 },
    { L"Extra 2", 0x40 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_RUGAL =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Rugal },
    { L"Extra 1: Kaiser Wave", 0x20, indexCVS2Sprites_Rugal, 0x01 },
    { L"Extra 2: Green Stuff", 0x40, indexCVS2Sprites_Rugal, 0x08 },
    { L"Extra 3: Statue", 0x60, indexCVS2Sprites_Rugal, 0x09 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_VICE =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Vice, 0x00, &pairNextAndNext },
    { L"Extra 1: Mature", 0x20, indexCVS2Sprites_Vice, 0x01 },
    { L"Extra 2", 0x40, indexCVS2Sprites_Vice, 0x02 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_BENIMARU =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Benimaru, 0x00, &pairNext },
    { L"Extra 1: Heart and Rose", 0x20, indexCVS2Sprites_Benimaru, 0x01 },
    { L"Extra 2", 0x40 },
    { L"Extra 3: Lightning Fist", 0x60, indexCVS2Sprites_Benimaru, 0x03 },
    { L"Extra 4: Daimon", 0x80, indexCVS2Sprites_Benimaru, 0x04 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_YURI =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Yuri },
    { L"Extra 1", 0x20 },
    { L"Extra 2: Haoh Shoko Ken", 0x40, indexCVS2Sprites_Yuri, 0x02 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_NAKORURU =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Nakoruru, 0, &pairNextAndNext },
    { L"Slashes", 0x20, indexCVS2Sprites_Nakoruru, 0x01 },
    { L"Mamahaha", 0x40, indexCVS2Sprites_Nakoruru, 0x02 },
    { L"Fireball", 0x60, indexCVS2Sprites_Nakoruru, 0x03 },
    { L"Energy Attacks", 0x80, indexCVS2Sprites_Nakoruru, 0x04 },
    { L"Falling", 0xa0, indexCVS2Sprites_Nakoruru, 0x05 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_OROCHIIORI =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_OrochiIori, 0, &pairNext },
    { L"Extra 1: Teeth", 0x20, indexCVS2Sprites_OrochiIori, 0x01 },
    { L"Extra 2: One for the Road Ground Effect", 0x40, indexCVS2Sprites_Iori, 0x02 },
    { L"Extra 3: Dark Thrust", 0x60, indexCVS2Sprites_Iori, 0x03 },
    { L"Extra 4: One for the Road Blast", 0x80, indexCVS2Sprites_Iori, 0x04 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_BALROG =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Balrog, 0x00, &pairNext },
    { L"Extra 1: Punching Bag", 0x20, indexCVS2Sprites_Balrog, 0x01 },
    { L"Extra 2", 0x40 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_DAN =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Dan },
    { L"Extra 1", 0x20, indexCVS2Sprites_Dan, 0x01 },
    { L"Extra 2", 0x40, indexCVS2Sprites_Dan, 0x02 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_Joe =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Joe },
    { L"Extra 1: Screw Upper", 0x20, indexCVS2Sprites_Joe, 0x01 },
    { L"Extra 2", 0x40 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_KYOSUKE =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Kyosuke },
    { L"Extra 1", 0x20, indexCVS2Sprites_Kyosuke, 0x01 },
    { L"Extra 2: Batsu", 0x40, indexCVS2Sprites_Kyosuke, 0x02 },
    { L"Extra 3: Hinata", 0x60, indexCVS2Sprites_Kyosuke, 0x03, &pairNext },
    { L"Extra 4: Hinata's Gloves", 0x80, indexCVS2Sprites_Kyosuke, 0x04 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_ATHENA =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Athena, 0x00, &pairNextSkippedAndNextSkipped },
    { L"Pink Energy", 0x20, indexCVS2Sprites_Athena, 0x01, &pairNext2 },
    { L"School Outfit 1", 0x40, indexCVS2Sprites_Athena, 0x02 },
    { L"Blue Energy", 0x60, indexCVS2Sprites_Athena, 0x03 },
    { L"School Outfit 2", 0x80, indexCVS2Sprites_Athena, 0x04 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_CHANG =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Chang, 0, &pairNextAndNext },
    { L"Extra 1: Wrecking Ball", 0x20, indexCVS2Sprites_Chang, 0x01 },
    { L"Extra 2: Choi", 0x40, indexCVS2Sprites_Chang, 0x02 },
    { L"Extra 3", 0x60, indexCVS2Sprites_Chang, 0x02 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_TODOH =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_RyuhakuTodoh, 0x00, &pairNext },
    { L"Extra 1: Kasumi", 0x20, indexCVS2Sprites_RyuhakuTodoh, 0x01 },
    { L"Extra 2", 0x40 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_ROCK =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Rock },
    { L"Extra 1: Hard Edge", 0x20, indexCVS2Sprites_Rock, 0x01 },
    { L"Extra 2", 0x40 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_HIBIKI =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Hibiki, 0, &pairNext },
    { L"Extra 1", 0x20, indexCVS2Sprites_Hibiki, 0x01 },
    { L"Extra 2", 0x40 },
    { L"Extra 3: Red Slashes", 0x60, indexCVS2Sprites_Hibiki, 0x03 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_HAOHMARU =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Haohmaru, 0, &pairNextAndNext },
    { L"Extra 1: Sword", 0x20, indexCVS2Sprites_Haohmaru, 0x01 },
    { L"Extra 2: Dust", 0x40, indexCVS2Sprites_Haohmaru, 0x02 },
    { L"Extra 3: Kougetsu Zan", 0x60, indexCVS2Sprites_Haohmaru, 0x03 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_YUN =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_Yun, 0x00, &pairNext2 },
    { L"Extra 1", 0x20 },
    { L"Extra 2", 0x40, indexCVS2Sprites_Yun, 0x02 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5", 0xa0 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_SHINAKUMA =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_ShinAkuma },
    { L"Purple Fireball", 0x20, indexCVS2Sprites_ShinAkuma, 0x01 },
    { L"Red Fireball", 0x40, indexCVS2Sprites_ShinAkuma, 0x01 },
    { L"Dictator Smoke", 0x60, indexCVS2Sprites_ShinAkuma, 0x03 },
    { L"Power Up", 0x80, indexCVS2Sprites_ShinAkuma, 0x04 },
    { L"Extra 5", 0xa0, indexCVS2Sprites_ShinAkuma, 0x05 },
};

const std::vector<sGCBUPF_RelativePaletteData> CVS2CorePalettes_D_GODRUGAL =
{
    { L"Main Sprite", 0x00, indexCVS2Sprites_GodRugal },
    { L"Extra 1: Kaiser Wave", 0x20, indexCVS2Sprites_Rugal, 0x01 },
    { L"Extra 2: Green Stuff", 0x40, indexCVS2Sprites_Rugal, 0x08 },
    { L"Extra 3", 0x60 },
    { L"Extra 4", 0x80 },
    { L"Extra 5: Defeated Akuma", 0xa0, indexCVS2Sprites_Akuma, 0x00 },
};

const sGCBUPF_BasicNodeData CVS2_NormalNode =
{
    DEF_BUTTONLABEL_CVS2, 0xc0, DEF_BUTTONLABEL_CVS2,
};

const std::vector<sGCBUPF_BasicFileData> CVS2_D_CharacterData =
{
    // ryu extends to 0xe49c0
    { L"PL00PAK.BIN",    L"Ryu",            0xe49c0, CVS2_NormalNode, CVS2CorePalettes_D, 0xe43c0, indexCVS2Sprites_Ryu, 0x00 },
    { L"PL01PAK.BIN",    L"Ken",            829056, CVS2_NormalNode, CVS2CorePalettes_D_Ken, 829056 - 0x600 },
    { L"PL02PAK.BIN",    L"Chun-Li",        0x11bc40, CVS2_NormalNode, CVS2CorePalettes_D_Chun, 0x11bc40 - 0x600 },
    { L"PL03PAK.BIN",    L"Guile",          1084576, CVS2_NormalNode, CVS2CorePalettes_D, 1084576 - 0x600, indexCVS2Sprites_Guile, 0x00 },
    { L"PL04PAK.BIN",    L"Zangief",        1083936, CVS2_NormalNode, CVS2CorePalettes_D, 1083936 - 0x600, indexCVS2Sprites_Zangief, 0x00 },
    { L"PL05PAK.BIN",    L"Dhalsim",        1238880, CVS2_NormalNode, CVS2CorePalettes_D, 1238880 - 0x600, indexCVS2Sprites_Dhalsim, 0x00 },
    { L"PL06PAK.BIN",    L"E.Honda",        542112, CVS2_NormalNode, CVS2CorePalettes_D, 542112 - 0x600, indexCVS2Sprites_EHonda, 0x00 },
    { L"PL07PAK.BIN",    L"Blanka",         1044576, CVS2_NormalNode, CVS2CorePalettes_D_Blanka, 1044576 - 0x600 },
    { L"PL08PAK.BIN",    L"Vega",           834560, CVS2_NormalNode, CVS2CorePalettes_D_Vega, 834560 - 0x600 },
    { L"PL09PAK.BIN",    L"Sagat",          644544, CVS2_NormalNode, CVS2CorePalettes_D, 644544 - 0x600, indexCVS2Sprites_Sagat, 0x00 },
    { L"PL0APAK.BIN",    L"M.Bison",        877376, CVS2_NormalNode, CVS2CorePalettes_D_Bison, 877376 - 0x600 },
    { L"PL0BPAK.BIN",    L"Sakura",         1197888, CVS2_NormalNode, CVS2CorePalettes_D, 1197888 - 0x600, indexCVS2Sprites_Sakura, 0x00 },
    { L"PL0CPAK.BIN",    L"Cammy",          891584, CVS2_NormalNode, CVS2CorePalettes_D, 891584 - 0x600, indexCVS2Sprites_Cammy, 0x00 },
    { L"PL0DPAK.BIN",    L"Akuma",          1072480, CVS2_NormalNode, CVS2CorePalettes_D_Akuma, 1072480 - 0x600 },
    { L"PL0EPAK.BIN",    L"Morrigan",       1277792, CVS2_NormalNode, CVS2CorePalettes_D, 1277792 - 0x600, indexCVS2Sprites_Morrigan, 0x00 },
    { L"PL0FPAK.BIN",    L"Evil Ryu",       1011424, CVS2_NormalNode, CVS2CorePalettes_D_EvilRyu, 1011424 - 0x600 },
    { L"PL10PAK.BIN",    L"Kyo",            1051008, CVS2_NormalNode, CVS2CorePalettes_D_Kyo, 1051008 - 0x600 },
    { L"PL11PAK.BIN",    L"Iori",           959712, CVS2_NormalNode, CVS2CorePalettes_D_IORI, 959712 - 0x600 },
    { L"PL12PAK.BIN",    L"Terry Bogard",   961792, CVS2_NormalNode, CVS2CorePalettes_D_TERRY, 961792 - 0x600 },
    { L"PL13PAK.BIN",    L"Ryo",            926304, CVS2_NormalNode, CVS2CorePalettes_D_RYO, 926304 - 0x600 },
    { L"PL14PAK.BIN",    L"Mai",            939808, CVS2_NormalNode, CVS2CorePalettes_D_MAI, 939808 - 0x600 },
    { L"PL15PAK.BIN",    L"Kim",            615360, CVS2_NormalNode, CVS2CorePalettes_D_KIM, 615360 - 0x600 },
    { L"PL16PAK.BIN",    L"Geese",          1117760, CVS2_NormalNode, CVS2CorePalettes_D_GEESE, 1117760 - 0x600 },
    { L"PL17PAK.BIN",    L"Yamazaki",       1130080, CVS2_NormalNode, CVS2CorePalettes_D_YAMAZAKI, 1130080 - 0x600 },
    { L"PL18PAK.BIN",    L"Raiden",         1019104, CVS2_NormalNode, CVS2CorePalettes_D, 1019104 - 0x600, indexCVS2Sprites_Raiden, 0x00 },
    { L"PL19PAK.BIN",    L"Rugal",          1256512, CVS2_NormalNode, CVS2CorePalettes_D_RUGAL, 1256512 - 0x600 },
    { L"PL1APAK.BIN",    L"Vice",           981920, CVS2_NormalNode, CVS2CorePalettes_D_VICE, 981920 - 0x600 },
    { L"PL1BPAK.BIN",    L"Benimaru",       1179904, CVS2_NormalNode, CVS2CorePalettes_D_BENIMARU, 1179904 - 0x600 },
    { L"PL1CPAK.BIN",    L"Yuri",           685536, CVS2_NormalNode, CVS2CorePalettes_D_YURI, 685536 - 0x600 },
    { L"PL1DPAK.BIN",    L"King",           616544, CVS2_NormalNode, CVS2CorePalettes_D, 616544 - 0x600, indexCVS2Sprites_King, 0x00 },
    { L"PL1EPAK.BIN",    L"Nakoruru",       996672, CVS2_NormalNode, CVS2CorePalettes_D_NAKORURU, 996672 - 0x600 },
    { L"PL1FPAK.BIN",    L"Orochi Iori",    925472, CVS2_NormalNode, CVS2CorePalettes_D_OROCHIIORI, 925472 - 0x600 },
    { L"PL20PAK.BIN",    L"Balrog",         556416, CVS2_NormalNode, CVS2CorePalettes_D_BALROG, 556416 - 0x600 },
    { L"PL21PAK.BIN",    L"Dan",            759360, CVS2_NormalNode, CVS2CorePalettes_D_DAN, 759360 - 0x600 },
    { L"PL22PAK.BIN",    L"Joe",            752832, CVS2_NormalNode, CVS2CorePalettes_D_Joe, 752832 - 0x600 },
    { L"PL23PAK.BIN",    L"Eagle",          963328, CVS2_NormalNode, CVS2CorePalettes_D, 963328 - 0x600, indexCVS2Sprites_Eagle, 0x00 },
    { L"PL24PAK.BIN",    L"Maki",           817280, CVS2_NormalNode, CVS2CorePalettes_D, 817280 - 0x600, indexCVS2Sprites_Maki, 0x00 },
    { L"PL25PAK.BIN",    L"Kyosuke",        1164032, CVS2_NormalNode, CVS2CorePalettes_D_KYOSUKE, 1164032 - 0x600 },
    { L"PL26PAK.BIN",    L"Athena",         857088, CVS2_NormalNode, CVS2CorePalettes_D_ATHENA, 857088 - 0x600 },
    { L"PL27PAK.BIN",    L"Chang and Choi", 1231104, CVS2_NormalNode, CVS2CorePalettes_D_CHANG, 1231104 - 0x600 },
    { L"PL28PAK.BIN",    L"Todoh",          962464, CVS2_NormalNode, CVS2CorePalettes_D_TODOH, 962464 - 0x600 },
    { L"PL29PAK.BIN",    L"Rock Howard",    1281376, CVS2_NormalNode, CVS2CorePalettes_D_ROCK, 1281376 - 0x600 },
    { L"PL2APAK.BIN",    L"Hibiki",         925472, CVS2_NormalNode, CVS2CorePalettes_D_HIBIKI, 925472 - 0x600 },
    { L"PL2BPAK.BIN",    L"Haohmaru",       1277888, CVS2_NormalNode, CVS2CorePalettes_D_HAOHMARU, 1277888 - 0x600 },
    { L"PL2CPAK.BIN",    L"Yun",            1064096, CVS2_NormalNode, CVS2CorePalettes_D_YUN, 1064096 - 0x600 },
    { L"PL2DPAK.BIN",    L"Shin Akuma",     1192032, CVS2_NormalNode, CVS2CorePalettes_D_SHINAKUMA, 1192032 - 0x600 },
    { L"PL2EPAK.BIN",    L"God Rugal",      1267872, CVS2_NormalNode, CVS2CorePalettes_D_GODRUGAL, 1267872 - 0x600 },
    { L"PL2FPAK.BIN",    L"Rolento",        1226368, CVS2_NormalNode, CVS2CorePalettes_D, 1226368 - 0x600, indexCVS2Sprites_Rolento, 0x00 },
};

const std::vector<sGCBUPF_BasicFileData> CVS2_P_CharacterData =
{
    { L"PL00PAK.BIN",    L"Ryu",            968020, CVS2_NormalNode, CVS2CorePalettes_D, 968020 - 0x600, indexCVS2Sprites_Ryu, 0x00 },
    { L"PL01PAK.BIN",    L"Ken",            872356, CVS2_NormalNode, CVS2CorePalettes_D_Ken, 872356 - 0x600 },
    { L"PL02PAK.BIN",    L"Chun-Li",        1202576, CVS2_NormalNode, CVS2CorePalettes_D_Chun, 1202576 - 0x600 },
    { L"PL03PAK.BIN",    L"Guile",          974620, CVS2_NormalNode, CVS2CorePalettes_D, 974620 - 0x600, indexCVS2Sprites_Guile, 0x00 },
    { L"PL04PAK.BIN",    L"Zangief",        1118260, CVS2_NormalNode, CVS2CorePalettes_D, 1118260 - 0x600, indexCVS2Sprites_Zangief, 0x00 },
    { L"PL05PAK.BIN",    L"Dhalsim",        1169212, CVS2_NormalNode, CVS2CorePalettes_D, 1169212 - 0x600, indexCVS2Sprites_Dhalsim, 0x00 },
    { L"PL06PAK.BIN",    L"E.Honda",        566112, CVS2_NormalNode, CVS2CorePalettes_D, 566112 - 0x600, indexCVS2Sprites_EHonda, 0x00 },
    { L"PL07PAK.BIN",    L"Blanka",         1080488, CVS2_NormalNode, CVS2CorePalettes_D_Blanka, 1080488 - 0x600 },
    { L"PL08PAK.BIN",    L"Vega",           843440, CVS2_NormalNode, CVS2CorePalettes_D_Vega, 843440 - 0x600 },
    { L"PL09PAK.BIN",    L"Sagat",          660940, CVS2_NormalNode, CVS2CorePalettes_D, 660940 - 0x600, indexCVS2Sprites_Sagat, 0x00 },
    { L"PL0APAK.BIN",    L"M.Bison",        888952, CVS2_NormalNode, CVS2CorePalettes_D_Bison, 888952 - 0x600 },
    { L"PL0BPAK.BIN",    L"Sakura",         1100740, CVS2_NormalNode, CVS2CorePalettes_D, 1100740 - 0x600, indexCVS2Sprites_Sakura, 0x00 },
    { L"PL0CPAK.BIN",    L"Cammy",          836668, CVS2_NormalNode, CVS2CorePalettes_D, 836668 - 0x600, indexCVS2Sprites_Cammy, 0x00 },
    { L"PL0DPAK.BIN",    L"Akuma",          1111416, CVS2_NormalNode, CVS2CorePalettes_D_Akuma, 1111416 - 0x600 },
    { L"PL0EPAK.BIN",    L"Morrigan",       1190424, CVS2_NormalNode, CVS2CorePalettes_D, 1190424 - 0x600, indexCVS2Sprites_Morrigan, 0x00 },
    { L"PL0FPAK.BIN",    L"Evil Ryu",       1043112, CVS2_NormalNode, CVS2CorePalettes_D_EvilRyu, 1043112 - 0x600 },
    { L"PL10PAK.BIN",    L"Kyo",            1084220, CVS2_NormalNode, CVS2CorePalettes_D_Kyo, 1084220 - 0x600 },
    { L"PL11PAK.BIN",    L"Iori",           994804, CVS2_NormalNode, CVS2CorePalettes_D_IORI, 994804 - 0x600 },
    { L"PL12PAK.BIN",    L"Terry Bogard",   1001096, CVS2_NormalNode, CVS2CorePalettes_D_TERRY, 1001096 - 0x600 },
    { L"PL13PAK.BIN",    L"Ryo",            972588, CVS2_NormalNode, CVS2CorePalettes_D_RYO, 972588 - 0x600 },
    { L"PL14PAK.BIN",    L"Mai",            958676, CVS2_NormalNode, CVS2CorePalettes_D_MAI, 958676 - 0x600 },
    { L"PL15PAK.BIN",    L"Kim",            635308, CVS2_NormalNode, CVS2CorePalettes_D_KIM, 635308 - 0x600 },
    { L"PL16PAK.BIN",    L"Geese",          1203408, CVS2_NormalNode, CVS2CorePalettes_D_GEESE, 1203408 - 0x600 },
    { L"PL17PAK.BIN",    L"Yamazaki",       1184620, CVS2_NormalNode, CVS2CorePalettes_D_YAMAZAKI, 1184620 - 0x600 },
    { L"PL18PAK.BIN",    L"Raiden",         1065716, CVS2_NormalNode, CVS2CorePalettes_D, 1065716 - 0x600, indexCVS2Sprites_Raiden, 0x00 },
    { L"PL19PAK.BIN",    L"Rugal",          1330620, CVS2_NormalNode, CVS2CorePalettes_D_RUGAL, 1330620 - 0x600 },
    { L"PL1APAK.BIN",    L"Vice",           1061152, CVS2_NormalNode, CVS2CorePalettes_D_VICE, 1061152 - 0x600 },
    { L"PL1BPAK.BIN",    L"Benimaru",       1198196, CVS2_NormalNode, CVS2CorePalettes_D_BENIMARU, 1198196 - 0x600 },
    { L"PL1CPAK.BIN",    L"Yuri",           697180, CVS2_NormalNode, CVS2CorePalettes_D_YURI, 697180 - 0x600 },
    { L"PL1DPAK.BIN",    L"King",           627524, CVS2_NormalNode, CVS2CorePalettes_D, 627524 - 0x600, indexCVS2Sprites_King, 0x00 },
    { L"PL1EPAK.BIN",    L"Nakoruru",       1024964, CVS2_NormalNode, CVS2CorePalettes_D_NAKORURU, 1024964 - 0x600 },
    { L"PL1FPAK.BIN",    L"Orochi Iori",    959184, CVS2_NormalNode, CVS2CorePalettes_D_OROCHIIORI, 959184 - 0x600 },
    { L"PL20PAK.BIN",    L"Balrog",         576684, CVS2_NormalNode, CVS2CorePalettes_D_BALROG, 576684 - 0x600 },
    { L"PL21PAK.BIN",    L"Dan",            717260, CVS2_NormalNode, CVS2CorePalettes_D_DAN, 717260 - 0x600 },
    { L"PL22PAK.BIN",    L"Joe",            764260, CVS2_NormalNode, CVS2CorePalettes_D_Joe, 764260 - 0x600 },
    { L"PL23PAK.BIN",    L"Eagle",          1005168, CVS2_NormalNode, CVS2CorePalettes_D, 1005168 - 0x600, indexCVS2Sprites_Eagle, 0x00 },
    { L"PL24PAK.BIN",    L"Maki",           817920, CVS2_NormalNode, CVS2CorePalettes_D, 817920 - 0x600, indexCVS2Sprites_Maki, 0x00 },
    { L"PL25PAK.BIN",    L"Kyosuke",        1225180, CVS2_NormalNode, CVS2CorePalettes_D_KYOSUKE, 1225180 - 0x600 },
    { L"PL26PAK.BIN",    L"Athena",         859252, CVS2_NormalNode, CVS2CorePalettes_D_ATHENA, 859252 - 0x600 },
    { L"PL27PAK.BIN",    L"Chang and Choi", 1264848, CVS2_NormalNode, CVS2CorePalettes_D_CHANG, 1264848 - 0x600 },
    { L"PL28PAK.BIN",    L"Todoh",          1042352, CVS2_NormalNode, CVS2CorePalettes_D_TODOH, 1042352 - 0x600 },
    { L"PL29PAK.BIN",    L"Rock Howard",    1306548, CVS2_NormalNode, CVS2CorePalettes_D_ROCK, 1306548 - 0x600 },
    { L"PL2APAK.BIN",    L"Hibiki",         951256, CVS2_NormalNode, CVS2CorePalettes_D_HIBIKI, 951256 - 0x600 },
    { L"PL2BPAK.BIN",    L"Haohmaru",       1312048, CVS2_NormalNode, CVS2CorePalettes_D_HAOHMARU, 1312048 - 0x600 },
    { L"PL2CPAK.BIN",    L"Yun",            1080152, CVS2_NormalNode, CVS2CorePalettes_D_YUN, 1080152 - 0x600 },
    { L"PL2DPAK.BIN",    L"Shin Akuma",     1235760, CVS2_NormalNode, CVS2CorePalettes_D_SHINAKUMA, 1235760 - 0x600 },
    { L"PL2EPAK.BIN",    L"God Rugal",      1338104, CVS2_NormalNode, CVS2CorePalettes_D_GODRUGAL, 1338104 - 0x600 },
    { L"PL2FPAK.BIN",    L"Rolento",        1112336, CVS2_NormalNode, CVS2CorePalettes_D, 1112336 - 0x600, indexCVS2Sprites_Rolento, 0x00 },
};
