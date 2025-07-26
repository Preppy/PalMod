#pragma once

#include "GGXXACR_Common.h"

constexpr auto k_strSidebarPortraits_TypeA = L"Type A";
constexpr auto k_strSidebarPortraits_TypeB = L"Type B";
constexpr auto k_strSidebarPortraits_TypeC = L"Type C";
constexpr auto k_strSidebarPortraits_TypeD = L"Type D";
constexpr auto k_strTitleScreen      = L"Title Screen";

const std::vector<sGCBUPF_RelativePaletteData> GGXXACRCorePalettes_S =
{
    { L"Punch" },
    { L"Kick", 0x10 },
    { L"Slash", 0x20 },
    { L"Heavy Slash", 0x30 },
    { L"Dust", 0x40 },

    { L"EX Punch", 0x50 },
    { L"EX Kick", 0x60 },
    { L"EX Slash", 0x70 },
    { L"EX Heavy Slash", 0x80 },
    { L"EX Dust", 0x90 },

    { L"Slash Punch", 0xa0 },
    { L"Slash Kick", 0xb0 },
    { L"Slash Slash", 0xc0 },
    { L"Slash Heavy Slash", 0xd0 },
    { L"Slash Dust", 0x1940 },

    { L"Reload Punch", 0xf0 },
    { L"Reload Kick", 0x100 },
    { L"Reload Slash", 0x110 },
    { L"Reload Heavy Slash", 0x120 },
    { L"Reload Dust", 0x950 },

    { L"Gold", -0x1720 },
    { L"Shadow", -0x6D0 },

    //we mangle the math with s.dust/r.dust and shadow/gold so that we get a better order, but internally it is:
    //default   p k s h d 
    //ex        p k s h d 
    //slash     p k s h, gold
    //reload    p k s h, shadow
    //slash dust, reload dust
};

// Sort order for CFPL is different, so provide a map to help us get back to what the user wants to apply to
const std::vector<std::pair<std::wstring, std::wstring>> GGXXACR_CFPL_ButtonColorMap =
{
    { L"None",      L"" },
    { L"Default P", L"Punch" },
    { L"Default K", L"Kick" },
    { L"Default S", L"Slash" },
    { L"Default H", L"Heavy Slash" },
    { L"Default D", L"Dust" },
    { L"EX P",      L"EX Punch" },
    { L"EX K",      L"EX Kick" },
    { L"EX S",      L"EX Slash" },
    { L"EX H",      L"EX Heavy Slash" },
    { L"EX D",      L"EX Dust" },
    { L"Slash P",   L"Slash Punch" },
    { L"Slash K",   L"Slash Kick" },
    { L"Slash S",   L"Slash Slash" },
    { L"Slash H",   L"Slash Heavy Slash" },
    { L"Golden",    L"Gold" },
    { L"Reload P",  L"Reload Punch" },
    { L"Reload K",  L"Reload Kick" },
    { L"Reload S",  L"Reload Slash" },
    { L"Reload H",  L"Reload Heavy Slash" },
    { L"Shadow",    L"Shadow" },
    { L"Slash D",   L"Slash Dust" },
    { L"Reload D",  L"Reload Dust" },
};

const std::vector<sGCBUPF_RelativePaletteData> GGXXACRCorePalettesEx_S =
{
    { L"Punch" },
    { L"Kick", 0x10 },
    { L"Slash", 0x20 },
    { L"Heavy Slash", 0x30 },
    { L"Dust", 0x40 },

    { L"EX Punch", 0x50 },
    { L"EX Kick", 0x60 },
    { L"EX Slash", 0x70 },
    { L"EX Heavy Slash", 0x80 },
    { L"EX Dust", 0x90 },

    { L"Slash Punch", 0xa0 },
    { L"Slash Kick", 0xb0 },
    { L"Slash Slash", 0xc0 },
    { L"Slash Heavy Slash", 0xd0 },
    { L"Gold", 0xe0 },

    { L"Reload Punch", 0xf0 },
    { L"Reload Kick", 0x100 },
    { L"Reload Slash", 0x110 },
    { L"Reload Heavy Slash", 0x120 },
    { L"Shadow", 0x130 },
};

const sGCBUPF_ExtrasCollection GGXXACR_S_AB_EXTRAS = // A.B.A
{
    L"Extras",
    {
        //General
        { L"Moroha Eyes",               0x5213b0, 0x5213f0, indexGGXXSprites_ACR_ABA, 0x04, &pairNext, &effects_AdditiveBlend },
        { L"Moroha Eyes (Trails)",      0x521340, 0x521380, indexGGXXSprites_ACR_ABA, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Goku Moroha Eyes",          0x521630, 0x521670, indexGGXXSprites_ACR_ABA, 0x04, &pairNext, &effects_AdditiveBlend },
        { L"Goku Moroha Eyes (Trails)", 0x5214f0, 0x521530, indexGGXXSprites_ACR_ABA, 0x03, nullptr, &effects_AdditiveBlend },

        //Normals

        //Specials
        { L"Ketsugou (1/3)",    0x4dc0f0, 0x4dc130, indexGGXXSprites_ACR_ABA, 0x0a, &pairNextAndNext },
        { L"Ketsugou (2/3)",    0x4e03a0, 0x4e03e0, indexGGXXSprites_ACR_ABA, 0x0b },
        { L"Ketsugou (3/3)",    0x4e6aa0, 0x4e6ae0, indexGGXXSprites_ACR_ABA, 0x0c, nullptr, &effects_AdditiveBlend },

        { L"Shoukyaku",         0x4ad7f0, 0x4ad830, indexGGXXSprites_ACR_ABA, 0x12, nullptr, &effects_AdditiveBlend },
        { L"Kihi",              0x4ae050, 0x4ae090, indexGGXXSprites_ACR_ABA, 0x0d },
        { L"Shousei",           0x51b240, 0x51b280, indexGGXXSprites_ACR_ABA, 0x13 },

        //Moroha Normals
        { L"(Moroha) 6H",       0x492d80, 0x492dc0, indexGGXXSprites_ACR_ABA, 0x10, nullptr, &effects_AdditiveBlend },

        //Moroha Specials
        { L"Masshou",       0x499b40, 0x499b80, indexGGXXSprites_ACR_ABA, 0x0f, nullptr, &effects_AdditiveBlend },
        { L"Fukumetsu",     0x49dcd0, 0x49dd10, indexGGXXSprites_ACR_ABA, 0x05, nullptr, &effects_AdditiveBlend },
        { L"Dangoku (1/2)", 0x4a0820, 0x4a0860, indexGGXXSprites_ACR_ABA, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Dangoku (2/2)", 0x4aa220, 0x4aa260, indexGGXXSprites_ACR_ABA, 0x01, nullptr, &effects_AdditiveBlend },

        { L"Danzai (1/2)",  0x4b4670, 0x4b46b0, indexGGXXSprites_ACR_ABA, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Danzai (2/2)",  0x4be190, 0x4be1d0, indexGGXXSprites_ACR_ABA, 0x02, nullptr, &effects_AdditiveBlend },

        { L"Kashitsu",      0x4c8e30, 0x4c8e70, indexGGXXSprites_ACR_ABA, 0x09, nullptr, &effects_AdditiveBlend },

        { L"Konzetsu (1/2)", 0x4d09a0, 0x4d09e0, indexGGXXSprites_ACR_ABA, 0x0e, nullptr, &effects_AdditiveBlend },
        { L"Konzetsu (2/2)", 0x4d67b0, 0x4d67f0, indexGGXXSprites_ACR_ABA, 0x0e, nullptr, &effects_AdditiveBlend },

        //Forcebreaks

        //Overdrives
        { L"Shouko: Intoku (1/3)", 0x4ed940, 0x4ed980, indexGGXXSprites_ACR_ABA, 0x08 },
        { L"Shouko: Intoku (2/3)", 0x4fce70, 0x4fceb0, indexGGXXSprites_ACR_ABA, 0x08 },
        { L"Shouko: Intoku (3/3)", 0x5089e0, 0x508a20, indexGGXXSprites_ACR_ABA, 0x08 },

        { L"Shouko: Inmetsu",  0x4e8210, 0x4e8250, indexGGXXSprites_ACR_ABA, 0x07 },

        { L"Henshitsu", 0x516640, 0x516680, indexGGXXSprites_ACR_ABA, 0x06, nullptr, &effects_AdditiveBlend },

        //Instant Kill
        { L"Muchi no Yami (1/2)",  0x50bc20, 0x50bc60, indexGGXXSprites_ACR_ABA, 0x11 },
        { L"Muchi no Yami (2/2)",  0x513030, 0x513070, indexGGXXSprites_ACR_ABA, 0x11 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_AN_EXTRAS = //Anji
{
    L"Extras",
    {
        //Specials
        { L"Shitsu", 0x423e10, 0x423e50, indexGGXXSprites_ACR_Anji, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Falling Butterfly (1/4)", 0x426240, 0x426280, indexGGXXSprites_ACR_Anji, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Falling Butterfly (2/4)", 0x4268c0, 0x426900, indexGGXXSprites_ACR_Anji, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Falling Butterfly (3/4)", 0x427490, 0x4274d0, indexGGXXSprites_ACR_Anji, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Falling Butterfly (4/4)", 0x428150, 0x428190, indexGGXXSprites_ACR_Anji, 0x01, nullptr, &effects_AdditiveBlend },

        { L"Fuujin (1/2)", 0x41ab80, 0x41abc0, indexGGXXSprites_ACR_Anji, 0x03 },
        { L"Fuujin (2/2)", 0x420f70, 0x420fb0, indexGGXXSprites_ACR_Anji, 0x03 },

        { L"Nagiha (1/2)", 0x42e370, 0x42e3b0, indexGGXXSprites_ACR_Anji, 0x05, nullptr, &effects_AdditiveBlend },
        { L"Nagiha (2/2)", 0x42f560, 0x42f5a0, indexGGXXSprites_ACR_Anji, 0x05, nullptr, &effects_AdditiveBlend },

        //Force Breaks
        { L"FB Shitsu", 0x4290c0, 0x429100, indexGGXXSprites_ACR_Anji, 0x06, nullptr, &effects_AdditiveBlend },
        { L"FB Falling Butterfly (1/4)", 0x42b4f0, 0x42b530, indexGGXXSprites_ACR_Anji, 0x01, nullptr, &effects_AdditiveBlend },
        { L"FB Falling Butterfly (2/4)", 0x42bb70, 0x42bbb0, indexGGXXSprites_ACR_Anji, 0x01, nullptr, &effects_AdditiveBlend },
        { L"FB Falling Butterfly (3/4)", 0x42c740, 0x42c780, indexGGXXSprites_ACR_Anji, 0x01, nullptr, &effects_AdditiveBlend },
        { L"FB Falling Butterfly (4/4)", 0x42d400, 0x42d440, indexGGXXSprites_ACR_Anji, 0x01, nullptr, &effects_AdditiveBlend },

        { L"FB Kou/Tenjinkyaku Effects (1/2)", 0x4304d0, 0x430510, indexGGXXSprites_ACR_Anji, 0x02, nullptr, &effects_AdditiveBlend },
        { L"FB Kou/Tenjinkyaku Effects (2/2)", 0x431660, 0x4316a0, indexGGXXSprites_ACR_Anji, 0x02, nullptr, &effects_AdditiveBlend },

        //Overdrives  
        //{ L"Issei Ougi: Sai (Unused)", 0x3f19b0, 0x3f19f0 },
        //{ L"Issei Ougi: Sai (Unused)", 0x3f4760, 0x3f47a0 },
        //{ L"Issei Ougi: Sai (Unused)", 0x3fb9c0, 0x3fba00 },

        { L"Kachoufuugetsu (1/7)", 0x401260, 0x4012a0, indexGGXXSprites_ACR_Anji, 0x04 },
        { L"Kachoufuugetsu (2/7)", 0x4018a0, 0x4018e0, indexGGXXSprites_ACR_Anji, 0x04 },
        { L"Kachoufuugetsu (3/7)", 0x402f90, 0x402fd0, indexGGXXSprites_ACR_Anji, 0x04 },
        { L"Kachoufuugetsu (4/7)", 0x405990, 0x4059d0, indexGGXXSprites_ACR_Anji, 0x04 },
        { L"Kachoufuugetsu (5/7)", 0x408b30, 0x408b70, indexGGXXSprites_ACR_Anji, 0x04 },
        { L"Kachoufuugetsu (6/7)", 0x40b780, 0x40b7c0, indexGGXXSprites_ACR_Anji, 0x04 },
        { L"Kachoufuugetsu (7/7)", 0x40c8f0, 0x40c930, indexGGXXSprites_ACR_Anji, 0x04 },
    }
};

//const sGCBUPF_ExtrasCollection GGXXACR_S_AX_EXTRAS = //Axl

const sGCBUPF_ExtrasCollection GGXXACR_S_BK_EXTRAS = //Baiken
{
    L"Extras",
    {
        //General
        { L"Flower Petals",                 0x34bc70, 0x34bcb0, indexGGXXSprites_ACR_Baiken, 0x09 },
        { L"Pipe (Tossed)",                 0x34b3a0, 0x34b3e0, indexGGXXSprites_ACR_Baiken, 0x0c },
        { L"Smoke",                         0x34bf70, 0x34bfb0, indexGGXXSprites_ACR_Baiken, 0x0e },
        { L"Intro Leaf",                    0x31cd50, 0x31cd90, indexGGXXSprites_ACR_Baiken, 0x0a },

        //Normals
        { L"5D",                            0x314bc0, 0x314c00, indexGGXXSprites_ACR_Baiken, 0x01 },

        { L"j.D Effect (1/2)",              0x316b70, 0x316bb0, indexGGXXSprites_ACR_Baiken, 0x0b },
        { L"j.D Effect (2/2)",              0x3183e0, 0x318420, indexGGXXSprites_ACR_Baiken, 0x0b },

        //Specials
        { L"Tatami Gaeshi (1/2)",           0x3100a0, 0x3100e0, indexGGXXSprites_ACR_Baiken, 0x0f },
        { L"Tatami Gaeshi (2/2)",           0x313930, 0x313970, indexGGXXSprites_ACR_Baiken, 0x0f },

        { L"Zakuro",                        0x31ad10, 0x31ad50, indexGGXXSprites_ACR_Baiken, 0x13 },
        { L"Sakura",                        0x30ecf0, 0x30ed30, indexGGXXSprites_ACR_Baiken, 0x0d },

        //Forcebreaks
        { L"Baku",                          0x31e7c0, 0x31e800, indexGGXXSprites_ACR_Baiken, 0x02 },
        { L"Baku:XXX Card Back/Icons",      0x31f700, 0x31f740, indexGGXXSprites_ACR_Baiken, 0x03 },
        { L"Baku:XXX Card Front",           0x320440, 0x320480, indexGGXXSprites_ACR_Baiken, 0x04 },
        { L"Baku:XXX Punch",                0x34c5a0, 0x34c5e0, indexGGXXSprites_ACR_Baiken, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Baku:XXX Kick",                 0x34ff50, 0x34ff90, indexGGXXSprites_ACR_Baiken, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Baku:XXX Slash",                0x34df50, 0x34df90, indexGGXXSprites_ACR_Baiken, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Baku:XXX Card Front (Sliced)",  0x324670, 0x3246b0, indexGGXXSprites_ACR_Baiken, 0x05 },

        //Overdrives
        { L"Tsurane Sanzu Watashi (1/3)",   0x31ced0, 0x31cf10, indexGGXXSprites_ACR_Baiken, 0x10 },
        { L"Tsurane Sanzu Watashi (2/3)",   0x31d600, 0x31d640, indexGGXXSprites_ACR_Baiken, 0x11 },
        { L"Tsurane Sanzu Watashi (3/3)",   0x31e1a0, 0x31e1e0, indexGGXXSprites_ACR_Baiken, 0x12 },

        //Instant Kill
        { L"Garyou Tensei (1/10)",          0x328da0, 0x3291a0 },
        { L"Garyou Tensei (2/10)",          0x334f60, 0x335360 },
        { L"Garyou Tensei (3/10)",          0x338550, 0x338950 },
        { L"Garyou Tensei (4/10)",          0x339600, 0x339a00 },
        { L"Garyou Tensei (5/10)",          0x33a650, 0x33aa50 },
        { L"Garyou Tensei (6/10)",          0x33b590, 0x33b990 },
        { L"Garyou Tensei (7/10)",          0x33c500, 0x33c900 },
        { L"Garyou Tensei (8/10)",          0x33d4c0, 0x33d8c0 },
        { L"Garyou Tensei (9/10)",          0x340d30, 0x341130 },
        { L"Garyou Tensei (10/10)",         0x349550, 0x349950 },
        { L"Garyou Tensei - Light (1/3)",   0x33d980, 0x33d9c0 },
        { L"Garyou Tensei - Light (2/3)",   0x33ec70, 0x33ecb0 },
        { L"Garyou Tensei - Light (3/3)",   0x33fdc0, 0x33fe00 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_YY_EXTRAS = //Bridget / Buri
{
    L"Extras",
    {
        // General
        { L"Yo-Yo String", 0x35aa70, 0x35aab0, indexGGXXSprites_ACR_Bridget, 0x19, nullptr, &effects_AdditiveBlend }, //Glowing string that connects Buri to her Yo-Yo

        //Specials
        { L"Yo-Yo Recall (1/5)", 0x3abdc0, 0x3abe00, indexGGXXSprites_ACR_Bridget, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Yo-Yo Recall (2/5)", 0x3ac160, 0x3ac1a0, indexGGXXSprites_ACR_Bridget, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Yo-Yo Recall (3/5)", 0x3ac560, 0x3ac5a0, indexGGXXSprites_ACR_Bridget, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Yo-Yo Recall (4/5)", 0x3ac980, 0x3ac9c0, indexGGXXSprites_ACR_Bridget, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Yo-Yo Recall (5/5)", 0x3acdf0, 0x3ace30, indexGGXXSprites_ACR_Bridget, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Yo-Yo Recall (Hold)", 0x3ad230, 0x3ad270, indexGGXXSprites_ACR_Bridget, 0x18, nullptr, &effects_AdditiveBlend },

        { L"Kick Start My Heart, Stop (1/5)", 0x35bbc0, 0x35bc00, indexGGXXSprites_ACR_Bridget, 0x01 },
        { L"Stop (2/5)", 0x35d510, 0x35d550, indexGGXXSprites_ACR_Bridget, 0x16 },
        { L"Stop (3/5)", 0x35e370, 0x35e3b0, indexGGXXSprites_ACR_Bridget, 0x16 },
        { L"Stop (4/5)", 0x35f150, 0x35f190, indexGGXXSprites_ACR_Bridget, 0x16 },
        { L"Stop (5/5)", 0x35fd40, 0x35fd80, indexGGXXSprites_ACR_Bridget, 0x16 },

        { L"Starship (1/5, Shell)"  , 0x352da0, 0x352de0, indexGGXXSprites_ACR_Bridget, 0x11, &pairNext5, &effects_AdditiveBlend },
        { L"Starship (2/5, Shell)"  , 0x353af0, 0x353b30, indexGGXXSprites_ACR_Bridget, 0x12, &pairNext5, &effects_AdditiveBlend },
        { L"Starship (3/5, Shell)"  , 0x354740, 0x354780, indexGGXXSprites_ACR_Bridget, 0x13, &pairNext5, &effects_AdditiveBlend },
        { L"Starship (4/5, Shell)"  , 0x355230, 0x355270, indexGGXXSprites_ACR_Bridget, 0x14, &pairNext5, &effects_AdditiveBlend },
        { L"Starship (5/5, Shell)"  , 0x355bb0, 0x355bf0, indexGGXXSprites_ACR_Bridget, 0x15, &pairNext5, &effects_AdditiveBlend },
        { L"Starship (1/5, Bearing)", 0x356550, 0x356610, indexGGXXSprites_ACR_Bridget, 0x0c, &pairPrevious5 },
        { L"Starship (2/5, Bearing)", 0x357360, 0x357420, indexGGXXSprites_ACR_Bridget, 0x0d, &pairPrevious5 },
        { L"Starship (3/5, Bearing)", 0x3581c0, 0x358280, indexGGXXSprites_ACR_Bridget, 0x0e, &pairPrevious5 },
        { L"Starship (4/5, Bearing)", 0x358fc0, 0x359080, indexGGXXSprites_ACR_Bridget, 0x0f, &pairPrevious5 },
        { L"Starship (5/5, Bearing)", 0x359d10, 0x359dd0, indexGGXXSprites_ACR_Bridget, 0x10, &pairPrevious5 },

        { L"Roger Hug Sigil", 0x360ae0, 0x360b20, indexGGXXSprites_ACR_Bridget, 0x09, nullptr, &effects_AdditiveBlend },

        { L"Rolling Movement", 0x35ac90, 0x35acd0, indexGGXXSprites_ACR_Bridget, 0x0a, nullptr, &effects_AdditiveBlend },

        //Overdrives
        { L"Loop the Loop (1/3)", 0x36d430, 0x36d470, indexGGXXSprites_ACR_Bridget, 0x03, &pairNext3, &effects_AdditiveBlend },
        { L"Loop the Loop (2/3)", 0x36fb50, 0x36fb90, indexGGXXSprites_ACR_Bridget, 0x03, &pairNext2, &effects_AdditiveBlend },
        { L"Loop the Loop (3/3)", 0x372530, 0x372570, indexGGXXSprites_ACR_Bridget, 0x03, &pairNext, &effects_AdditiveBlend },
        { L"Loop the Loop (Stars)", 0x376760, 0x3767a0, indexGGXXSprites_ACR_Bridget, 0x04, nullptr, &effects_AdditiveBlend },

        { L"Maintenance Disaster (1/4)", 0x36c6a0, 0x36C6e0, indexGGXXSprites_ACR_Bridget, 0x05 },
        { L"Maintenance Disaster (2/4)", 0x361350, 0x361390, indexGGXXSprites_ACR_Bridget, 0x06 },
        { L"Maintenance Disaster (3/4)", 0x3627d0, 0x362810, indexGGXXSprites_ACR_Bridget, 0x07 },
        { L"Maintenance Disaster (4/4)", 0x366f90, 0x366Fd0, indexGGXXSprites_ACR_Bridget, 0x08 },

        { L"Me and My Killing Machine (1/6)", 0x376e00, 0x376e40, indexGGXXSprites_ACR_Bridget, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Me and My Killing Machine (2/6)", 0x378c20, 0x378c60, indexGGXXSprites_ACR_Bridget, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Me and My Killing Machine (3/6)", 0x37ad40, 0x37ad80, indexGGXXSprites_ACR_Bridget, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Me and My Killing Machine (4/6)", 0x37ce70, 0x37ceb0, indexGGXXSprites_ACR_Bridget, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Me and My Killing Machine (5/6)", 0x37f240, 0x37f280, indexGGXXSprites_ACR_Bridget, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Me and My Killing Machine (6/6)", 0x381800, 0x381840, indexGGXXSprites_ACR_Bridget, 0x02, nullptr, &effects_AdditiveBlend },

        //Instant Kill 
        { L"Shoot the Moon (1/3)", 0x383d10, 0x384110, indexGGXXSprites_ACR_Bridget, 0x0B },
        { L"Shoot the Moon (2/3)", 0x39c8c0, 0x39ccc0, indexGGXXSprites_ACR_Bridget, 0x0B },
        { L"Shoot the Moon (3/3)", 0x3a4690, 0x3a4a90, indexGGXXSprites_ACR_Bridget, 0x0B },

        //Unused?
        //{ L"Loop the Loop (Unused)", 0x376ac0, 0x376b00 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_CH_EXTRAS = //Chipp
{
    L"Extras",
    {
        //Specials
        { L"Alpha Blade (1/2)", 0x29c900, 0x29c940 },
        { L"Alpha Blade (2/2)", 0x29e740, 0x29e780 },
        { L"Alpha Blade Sparks", 0x2c2de0, 0x2c2e20 },

        { L"Beta Blade", 0x2a1fd0, 0x2a2010 },

        { L"Gamma Blade (1/9)", 0x2cf030, 0x2cf070 },
        { L"Gamma Blade (2/9)", 0x2d0270, 0x2d02b0 },
        { L"Gamma Blade (3/9)", 0x2d1310, 0x2d1350 },
        { L"Gamma Blade (4/9)", 0x2d3cd0, 0x2d3d10 },
        { L"Gamma Blade (5/9)", 0x2d5fd0, 0x2d6010 },
        { L"Gamma Blade (6/9)", 0x2d8c00, 0x2d8c40 },
        { L"Gamma Blade (7/9)", 0x2d9390, 0x2d93d0 },
        { L"Gamma Blade (8/9)", 0x2d9a80, 0x2d9ac0 },
        { L"Gamma Blade (9/9)", 0x2d9f40, 0x2d9f80 },
        { L"Gamma Blade Whiffed", 0x2d8300, 0x2d8340 },

        { L"Resshou", 0x2a8800, 0x2a8840 },
        { L"Rokusai", 0x2aa8a0, 0x2aa8e0 },
        { L"Senshuu (1/3)", 0x2ab6e0, 0x2ab720 },
        { L"Senshuu (2/3)", 0x2ac540, 0x2ac580 },
        { L"Senshuu (3/3)", 0x2ad1a0, 0x2ad1e0 },

        { L"Shuriken (1/4)", 0x2c26e0, 0x2c2720 },
        { L"Shuriken (2/4)", 0x2c28e0, 0x2c2920 },
        { L"Shuriken (3/4)", 0x2c2ad0, 0x2c2b10 },
        { L"Shuriken (4/4)", 0x2c2ca0, 0x2c2ce0 },

        //Force Breaks
        { L"Genrouzan-You", 0x2c3a80, 0x2c3ac0 },

        //Overdrives
        { L"Zansei Rouga (Effect)", 0x2db2c0, 0x2db300 },
        { L"Zansei Rouga (Slice)", 0x2dd5e0, 0x2dd620 },

        //Instant Kill
        { L"Delta End Startup (1/2)", 0x2adb80, 0x2adbc0 },
        { L"Delta End Startup (2/2)", 0x2b7ec0, 0x2b7f00 },
        { L"Delta End Kanji", 0x2c21c0, 0x2c2200 },
        { L"Delta End Explosion (1/3)", 0x2c43e0, 0x2c4420 },
        { L"Delta End Explosion (2/3)", 0x2cbae0, 0x2cbb20 },
        { L"Delta End Explosion (3/3)", 0x2cda70, 0x2cdab0 },

        //Unknown/Unused
        //{ L"Unknown", 0x2c2de0, 0x2c2e20 },
        //{ L"Genrouzan (Unused)", 0x299e10, 0x299e50 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_DZ_EXTRAS = //Dizzy
{
    L"Extras",
    {
        //General
        { L"Idle Rings", 0x495080, 0x4950c0, indexGGXXSprites_ACR_Dizzy, 0x03, nullptr, &effects_AdditiveBlend },

        //Specials
        { L"I Use This to Get Fruit", 0x495ac0, 0x495b00, indexGGXXSprites_ACR_Dizzy, 0x07 }, // held spear uses the generic spark effect found in archive_jpf.bin at 1B94D0, not a unique palette for dizzy

        { L"My Talking Buddies", 0x488840, 0x488880, indexGGXXSprites_ACR_Dizzy, 0x08 },
        { L"My Talking Buddies - Effects (1/2)", 0x488680, 0x4886c0, indexGGXXSprites_ACR_Dizzy, 0x09, &pairPreviousFlipped },
        { L"My Talking Buddies - Effects (2/2)", 0x488740, 0x488780, indexGGXXSprites_ACR_Dizzy, 0x09, &pairPreviousFlipped2 }, //missing the laser palette, these are the sparkles

        //FB bubble is pink, it uses the same palette data here with a forced red value (240 or 256)
        { L"Please Leave Me Alone (1/20)",          0x4a5800, 0x4a5c00, indexGGXXSprites_ACR_Dizzy, 0x0F },
        { L"Please Leave Me Alone (2/20)",          0x4a9590, 0x4a9990, indexGGXXSprites_ACR_Dizzy, 0x10 },
        { L"Please Leave Me Alone (3/20)",          0x4ad430, 0x4ad830, indexGGXXSprites_ACR_Dizzy, 0x11 },
        { L"Please Leave Me Alone (4/20)",          0x4b12f0, 0x4b16f0, indexGGXXSprites_ACR_Dizzy, 0x12 },
        { L"Please Leave Me Alone (5/20)",          0x4b50f0, 0x4b54f0, indexGGXXSprites_ACR_Dizzy, 0x13 },
        { L"Please Leave Me Alone (6/20)",          0x4b8f90, 0x4b9390, indexGGXXSprites_ACR_Dizzy, 0x14 },
        { L"Please Leave Me Alone (7/20)",          0x4bd000, 0x4bd400, indexGGXXSprites_ACR_Dizzy, 0x15 },
        { L"Please Leave Me Alone (8/20)",          0x4c1050, 0x4c1450, indexGGXXSprites_ACR_Dizzy, 0x16 },
        { L"Please Leave Me Alone (9/20)",          0x4c5120, 0x4c5520, indexGGXXSprites_ACR_Dizzy, 0x17 },
        { L"Please Leave Me Alone (10/20)",         0x4c9150, 0x4c9550, indexGGXXSprites_ACR_Dizzy, 0x18 },
        { L"Please Leave Me Alone (11/20)",         0x4cd260, 0x4cd660, indexGGXXSprites_ACR_Dizzy, 0x19 },
        { L"Please Leave Me Alone (12/20)",         0x4d13f0, 0x4d17f0, indexGGXXSprites_ACR_Dizzy, 0x1A },
        { L"Please Leave Me Alone (13/20)",         0x4d5600, 0x4d5a00, indexGGXXSprites_ACR_Dizzy, 0x1B },
        { L"Please Leave Me Alone (14/20)",         0x4d9810, 0x4d9c10, indexGGXXSprites_ACR_Dizzy, 0x1C },
        { L"Please Leave Me Alone (15/20)",         0x4ddb50, 0x4ddf50, indexGGXXSprites_ACR_Dizzy, 0x1D },
        { L"Please Leave Me Alone (16/20)",         0x4e1f20, 0x4e2320, indexGGXXSprites_ACR_Dizzy, 0x1E },
        { L"Please Leave Me Alone (17/20)",         0x4e63f0, 0x4e67f0, indexGGXXSprites_ACR_Dizzy, 0x1F },
        { L"Please Leave Me Alone (18/20)",         0x4ea740, 0x4eab40, indexGGXXSprites_ACR_Dizzy, 0x20 },
        { L"Please Leave Me Alone (19/20)",         0x4eecb0, 0x4ef0b0, indexGGXXSprites_ACR_Dizzy, 0x21 },
        { L"Please Leave Me Alone (20/20)",         0x4f3270, 0x4f3670, indexGGXXSprites_ACR_Dizzy, 0x22 },
        { L"Please Leave Me Alone - Popping (1/3)", 0x479b20, 0x479b60, indexGGXXSprites_ACR_Dizzy, 0x23, nullptr, &effects_AdditiveBlend },
        { L"Please Leave Me Alone - Popping (2/3)", 0x47a530, 0x47a570, indexGGXXSprites_ACR_Dizzy, 0x23, nullptr, &effects_AdditiveBlend },
        { L"Please Leave Me Alone - Popping (3/3)", 0x47c290, 0x47c2d0, indexGGXXSprites_ACR_Dizzy, 0x23, nullptr, &effects_AdditiveBlend },

        //Overdrives
        { L"Imperial Ray - Laser Sparks (1/2)",		0x47dd10, 0x47dd50, indexGGXXSprites_ACR_Dizzy, 0x05 }, //missing the red laser palette
        { L"Imperial Ray - Laser Sparks (2/2)",		0x47df30, 0x47df70, indexGGXXSprites_ACR_Dizzy, 0x05 },
        { L"Imperial Ray - Main Fire (1/3)",		0x47e070, 0x47e0b0, indexGGXXSprites_ACR_Dizzy, 0x06, &pairNext3 },
        { L"Imperial Ray - Main Fire (2/3)",		0x486e90, 0x486ed0, indexGGXXSprites_ACR_Dizzy, 0x06, &pairNext2 },
        { L"Imperial Ray - Main Fire (3/3)",		0x487f20, 0x487f60, indexGGXXSprites_ACR_Dizzy, 0x06, &pairNext },
        { L"Imperial Ray - Extra Fire (1/2)",		0x4a46f0, 0x4a4730, indexGGXXSprites_ACR_Dizzy, 0x04, &pairPreviousFlipped3 },
        { L"Imperial Ray - Extra Fire (2/2)",		0x4a4ff0, 0x4a5030, indexGGXXSprites_ACR_Dizzy, 0x04, &pairPreviousFlipped4 },

        { L"Necro Unleashed - Rings",         0x49bd20, 0x49bd60, indexGGXXSprites_ACR_Dizzy, 0x0D, &pairNextFlipped },
        { L"Necro Unleashed - Sigil (1/3)",   0x496b50, 0x496b90, indexGGXXSprites_ACR_Dizzy, 0x0E, &pairPrevious },
        { L"Necro Unleashed - Sigil (2/3)",   0x499660, 0x4996a0, indexGGXXSprites_ACR_Dizzy, 0x0E, &pairPrevious2 },
        { L"Necro Unleashed - Sigil (3/3)",   0x49c110, 0x49c150, indexGGXXSprites_ACR_Dizzy, 0x0E, &pairPrevious3 },
        { L"Necro Unleashed - Coffin",        0x49c840, 0x49c880, indexGGXXSprites_ACR_Dizzy, 0x0A },
        { L"Necro Unleashed - Effects (1/2)", 0x49efc0, 0x49f000, indexGGXXSprites_ACR_Dizzy, 0x0b, nullptr, &effects_AdditiveBlend }, // missing the glowing effect palette
        { L"Necro Unleashed - Effects (2/2)", 0x4a3180, 0x4a31c0, indexGGXXSprites_ACR_Dizzy, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Necro Unleashed - Effect Trails", 0x49ecc0, 0x49ed00, indexGGXXSprites_ACR_Dizzy, 0x0C, nullptr, &effects_AdditiveBlend },

        { L"Gamma Ray - Big laser",		0x48fb30, 0x48fb70, indexGGXXSprites_ACR_Dizzy, 0x01, &pairNext, &effects_AdditiveBlend },
        { L"Gamma Ray - Small lasers", 	0x48f100, 0x48f140, indexGGXXSprites_ACR_Dizzy, 0x02, &pairPrevious, &effects_AdditiveBlend },

        //Unused
        { L"(Unused) Michael sword? (1/2)", 0x465bb0, 0x465bf0 },
        { L"(Unused) Michael sword? (2/2)", 0x4676f0, 0x467730 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_ZT_EXTRAS = //Eddie
{
    L"Extras",
    {
        //General
        { L"Grab Effects", 0x2ebeb0, 0x2ebef0, indexGGXXSprites_ACR_Eddie, 0x02 },
        //Specials
        { L"Damned Fang Effects (1/2)", 0x2ec410, 0x2ec450, indexGGXXSprites_ACR_Eddie, 0x01 },
        { L"Damned Fang Effects (2/2)", 0x2ecb40, 0x2ecb80, indexGGXXSprites_ACR_Eddie, 0x01 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_FA_EXTRAS = //Faust
{
    L"Extras",
    {
        { L"Poison Vial 1/2", 0x405480, 0x4054c0 },
        { L"Poison Vial 2/2", 0x40c300, 0x40c340 },
        { L"IK Stretcher", 0x40d2c0, 0x40d300 },
        { L"IK False Consulting Room", 0x40e2d0, 0x40e310 },
        { L"Little meteor ", 0x412b00, 0x412b40 },
        { L"Chocolate bar", 0x412fa0, 0x412fe0 },
        { L"Donut", 0x4131b0, 0x4131f0 },
        { L"Hammer", 0x413380, 0x4133c0 },
        { L"Big meteors", 0x413500, 0x413540 },
        { L"Time Bomb", 0x4140b0, 0x4140f0 },
        { L"Washpan", 0x414250, 0x414290 },
        { L"Meteor on fire 1/3", 0x414ae0, 0x414b20 },
        { L"Meteor on fire 2/3", 0x4152b0, 0x4152f0 },
        { L"Meteor on fire 3/3", 0x415aa0, 0x415ae0 },
        { L"Coin", 0x416240, 0x416280 },
        { L"Time Bomb Explosion 1/5", 0x4167a0, 0x4167e0 },
        { L"Time Bomb Explosion 2/5", 0x417340, 0x417380 },
        { L"Time Bomb Explosion 3/5", 0x419610, 0x419650 },
        { L"Time Bomb Explosion 4/5", 0x41a7d0, 0x41a810 },
        { L"Time Bomb Explosion 5/5", 0x41b8b0, 0x41b8f0 },
        { L"Meteor Break 1/5", 0x41d270, 0x41d2b0 },
        { L"Meteor Break 2/5", 0x41d530, 0x41d570 },
        { L"Meteor Break 3/5", 0x41dba0, 0x41dbe0 },
        { L"Meteor Break 4/5", 0x41e2d0, 0x41e310 },
        { L"Meteor Break 5/5", 0x41e5a0, 0x41e5e0 },
        { L"Dumbbell", 0x41e750, 0x41e790 },
        { L"Chouhatsu (Kao FLASH!) 1/2", 0x421560, 0x4215a0 },
        { L"Chouhatsu (Kao FLASH!) 2/2", 0x422280, 0x4222c0 },
        { L"Angel 1/2", 0x422f60, 0x422fa0 },
        { L"Angel 2/2", 0x4232d0, 0x423310 },
        { L"Shigekiteki Zetsumei Ken 1/6", 0x423620, 0x423660 },
        { L"Shigekiteki Zetsumei Ken 2/6", 0x423e70, 0x423eb0 },
        { L"Shigekiteki Zetsumei Ken 3/6", 0x4247b0, 0x4247f0 },
        { L"Shigekiteki Zetsumei Ken 4/6", 0x425130, 0x425170 },
        { L"Shigekiteki Zetsumei Ken 5/6", 0x4259e0, 0x425a20 },
        { L"Shigekiteki Zetsumei Ken 6/6", 0x426140, 0x426180 },
        { L"Re-re-re no Tsuki 1/4", 0x426ba0, 0x426be0 },
        { L"Re-re-re no Tsuki 2/4", 0x427580, 0x4275c0 },
        { L"Re-re-re no Tsuki 3/4", 0x428570, 0x4285b0 },
        { L"Re-re-re no Tsuki 4/4", 0x429370, 0x4293b0 },
        { L"Hack 'n' Slash 1/2", 0x429aa0, 0x429ae0 },
        { L"Hack 'n' Slash 2/2", 0x42b910, 0x42b950 },
        { L"Bomb-bag Explosion 1/3", 0x42d310, 0x42d350 },
        { L"Bomb-bag Explosion 2/3", 0x4335f0, 0x433630 },
        { L"Bomb-bag Explosion 3/3", 0x433eb0, 0x433ef0 },
        { L"This Week's Yamaban BG", 0x4371b0, 0x4375b0 },
        { L"Treasure Chest 1/2", 0x4543b0, 0x4543f0 },
        { L"Treasure Chest 2/2", 0x4555f0, 0x455630 },
        { L"The Reaper 1/2", 0x456690, 0x4566d0 },
        { L"The Reaper 2/2", 0x456b00, 0x456b40 },
        { L"Water Sparkle 1/4", 0x456f50, 0x456f90 },
        { L"Water Sparkle 2/4", 0x4571e0, 0x457220 },
        { L"Water Sparkle 3/4", 0x457380, 0x4573c0 },
        { L"Water Sparkle 4/4", 0x4574a0, 0x4574e0 },
        { L"Water Puddle", 0x457570, 0x4575b0 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_IN_EXTRAS = //I-No
{
    L"Extras",
    {
        //General
        { L"Dashing Effects", 0x43d120, 0x43d160 },

        //Normals
        { L"f.S (1/6)", 0x3ff5e0, 0x3ff620 },
        { L"f.S (2/6)", 0x400d00, 0x400d40 },
        { L"f.S (3/6)", 0x4026b0, 0x4026f0 },
        { L"f.S (4/6)", 0x403c60, 0x403ca0 },
        { L"f.S (5/6)", 0x404300, 0x404340 },
        { L"f.S (6/6)", 0x4048e0, 0x404920 },

        { L"5H/2H - Slam", 0x44a170, 0x44a1b0 },
        { L"5H/2H - Notes", 0x43a5c0, 0x43a600 },

        { L"5D (1/3)", 0x44be20, 0x44be60 },
        { L"5D (2/3)", 0x44df80, 0x44dfc0 },
        { L"5D (3/3)", 0x4500c0, 0x450100 },

        { L"2P", 0x404c50, 0x404c90 },

        //Specials
        { L"Stroke the Big Tree (1/3)", 0x450bc0, 0x450c00 },
        { L"Stroke the Big Tree (2/3)", 0x455200, 0x455240 },
        { L"Stroke the Big Tree (3/3)", 0x455e40, 0x455e80 },

        { L"Antidepressant Scale (1/2)", 0x3ee580, 0x3ee5c0 },
        { L"Antidepressant Scale (2/2)", 0x3efab0, 0x3efaf0 },

        { L"Sultry Performance (1/2)", 0x456790, 0x4567d0 },
        { L"Sultry Performance (2/2)", 0x45ea20, 0x45ea60 },

        { L"Chemical Love (1/3)", 0x3f0b80, 0x3f0bc0 },
        { L"Chemical Love (2/3)", 0x3f48e0, 0x3f4920 },
        { L"Chemical Love (3/3)", 0x3f8ea0, 0x3f8ee0 },
        { L"Chemical Love Effects", 0x3fcab0, 0x3fcaf0 },

        //Force Breaks

        //Overdrives
        { L"Ultimate Fortissimo - Rotating Ring", 0x4054b0, 0x4054f0 },
        { L"Ultimate Fortissimo - Main Effects (1/9)", 0x438600, 0x438640 },
        { L"Ultimate Fortissimo - Main Effects (2/9)", 0x419680, 0x4196c0 },
        { L"Ultimate Fortissimo - Main Effects (3/9)", 0x41b210, 0x41b250 },
        { L"Ultimate Fortissimo - Main Effects (4/9)", 0x41c6d0, 0x41c710 },
        { L"Ultimate Fortissimo - Main Effects (5/9)", 0x422410, 0x422450 },
        { L"Ultimate Fortissimo - Main Effects (6/9)", 0x428f40, 0x428f80 },
        { L"Ultimate Fortissimo - Main Effects (7/9)", 0x42f320, 0x42f360 },
        { L"Ultimate Fortissimo - Main Effects (8/9)", 0x434730, 0x434770 },
        { L"Ultimate Fortissimo - Main Effects (9/9)", 0x438600, 0x438640 },
        { L"Ultimate Fortissimo - Rings (1/5)", 0x4069f0, 0x406a30 },
        { L"Ultimate Fortissimo - Rings (2/5)", 0x409770, 0x4097b0 },
        { L"Ultimate Fortissimo - Rings (3/5)", 0x40d430, 0x40d470 },
        { L"Ultimate Fortissimo - Rings (4/5)", 0x411350, 0x411390 },
        { L"Ultimate Fortissimo - Rings (5/5)", 0x4158c0, 0x415900 },

        { L"Longing Desperation (1/3)", 0x43df10, 0x43df50 },
        { L"Longing Desperation (2/3)", 0x441b90, 0x441bd0 },
        { L"Longing Desperation (3/3)", 0x444a40, 0x444a80 },

        //Instant Kill
        { L"Last Will and Testament - Speakers (1/28)", 0x487540, 0x487940 },
        { L"Last Will and Testament - Speakers (2/28)", 0x48e2d0, 0x48e6d0 },
        { L"Last Will and Testament - Speakers (3/28)", 0x494eb0, 0x4952b0 },
        { L"Last Will and Testament - Speakers (4/28)", 0x49b9c0, 0x49bdc0 },
        { L"Last Will and Testament - Speakers (5/28)", 0x4a2240, 0x4a2640 },
        { L"Last Will and Testament - Speakers (6/28)", 0x4a88d0, 0x4a8cd0 },
        { L"Last Will and Testament - Speakers (7/28)", 0x4af500, 0x4af900 },
        { L"Last Will and Testament - Speakers (8/28)", 0x4b64e0, 0x4b68e0 },
        { L"Last Will and Testament - Speakers (9/28)", 0x4bd420, 0x4bd820 },
        { L"Last Will and Testament - Speakers (10/28)", 0x4c4210, 0x4c4610 },
        { L"Last Will and Testament - Speakers (11/28)", 0x4cac00, 0x4cb000 },
        { L"Last Will and Testament - Speakers (12/28)", 0x4cc3f0, 0x4cc7f0 },
        { L"Last Will and Testament - Speakers (13/28)", 0x4cdb20, 0x4cdf20 },
        { L"Last Will and Testament - Speakers (14/28)", 0x4cf220, 0x4cf620 },
        { L"Last Will and Testament - Speakers (15/28)", 0x4d0920, 0x4d0d20 },
        { L"Last Will and Testament - Speakers (16/28)", 0x4d1f60, 0x4d2360 },
        { L"Last Will and Testament - Speakers (17/28)", 0x4d3680, 0x4d3a80 },
        { L"Last Will and Testament - Speakers (18/28)", 0x4d4dd0, 0x4d51d0 },
        { L"Last Will and Testament - Speakers (19/28)", 0x4d64a0, 0x4d68a0 },
        { L"Last Will and Testament - Speakers (20/28)", 0x4d7bb0, 0x4d7fb0 },
        { L"Last Will and Testament - Speakers (21/28)", 0x4d9340, 0x4d9740 },
        { L"Last Will and Testament - Speakers (22/28)", 0x4dc1d0, 0x4dc5d0 },
        { L"Last Will and Testament - Speakers (23/28)", 0x4dfad0, 0x4dfed0 },
        { L"Last Will and Testament - Speakers (24/28)", 0x4e5ab0, 0x4e5eb0 },
        { L"Last Will and Testament - Speakers (25/28)", 0x4ebb10, 0x4ebf10 },
        { L"Last Will and Testament - Speakers (26/28)", 0x4f1f40, 0x4f2340 },
        { L"Last Will and Testament - Speakers (27/28)", 0x4f35f0, 0x4f39f0 },
        { L"Last Will and Testament - Speakers (28/28)", 0x4f4c70, 0x4f5070 },
        { L"Last Will and Testament - Speaker Effects (1/8)", 0x466140, 0x466180 },
        { L"Last Will and Testament - Speaker Effects (2/8)", 0x4683d0, 0x468410 },
        { L"Last Will and Testament - Speaker Effects (3/8)", 0x4697f0, 0x469830 },
        { L"Last Will and Testament - Speaker Effects (4/8)", 0x46acb0, 0x46acf0 },
        { L"Last Will and Testament - Speaker Effects (5/8)", 0x46bfe0, 0x46c020 },
        { L"Last Will and Testament - Speaker Effects (6/8)", 0x46d170, 0x46d1b0 },
        { L"Last Will and Testament - Speaker Effects (7/8)", 0x46e250, 0x46e290 },
        { L"Last Will and Testament - Speaker Effects (8/8)", 0x46e7e0, 0x46e820 },
        { L"Last Will and Testament - Light", 0x4824b0, 0x4828b0 },
        { L"Last Will and Testament - Lights (1/2)", 0x471e80, 0x472280 },
        { L"Last Will and Testament - Lights (2/2)", 0x47a840, 0x47ac40 },
        { L"Last Will and Testament - Stage", 0x46eba0, 0x46efa0 },

        //Boss Ino effects
        { L"Megalomania effect (1/18)", 0x4f6260, 0x4f62a0 },
        { L"Megalomania effect (2/18)", 0x4f6810, 0x4f6850 },
        { L"Megalomania effect (3/18)", 0x4f70d0, 0x4f7110 },
        { L"Megalomania effect (4/18)", 0x4f7f30, 0x4f7f70 },
        { L"Megalomania effect (5/18)", 0x4f9070, 0x4f90b0 },
        { L"Megalomania effect (6/18)", 0x4f9fb0, 0x4f9ff0 },
        { L"Megalomania effect (7/18)", 0x4fab60, 0x4faba0 },
        { L"Megalomania effect (8/18)", 0x4fb520, 0x4fb560 },
        { L"Megalomania effect (9/18)", 0x4fbd30, 0x4fbd70 },
        { L"Megalomania effect (10/18)", 0x4fc320, 0x4fc360 },
        { L"Megalomania effect (11/18)", 0x4fcd00, 0x4fcd40 },
        { L"Megalomania effect (12/18)", 0x4fd9a0, 0x4fd9e0 },
        { L"Megalomania effect (13/18)", 0x4fe4b0, 0x4fe4f0 },
        { L"Megalomania effect (14/18)", 0x4feed0, 0x4fef10 },
        { L"Megalomania effect (15/18)", 0x4ff410, 0x4ff450 },
        { L"Megalomania effect (16/18)", 0x4ffee0, 0x4fff20 },
        { L"Megalomania effect (17/18)", 0x502a50, 0x502a90 },
        { L"Megalomania effect (18/18)", 0x505440, 0x505480 },
        { L"Megalomania orbs (1/3)", 0x507980, 0x5079c0 },
        { L"Megalomania orbs (2/3)", 0x507b50, 0x507b90 },
        { L"Megalomania orbs (3/3)", 0x507df0, 0x507e30 },
        { L"Caution!", 0x509820, 0x509860 },
        { L"Warning!", 0x50a0a0, 0x50a0e0 },
        { L"Danger!", 0x50a950, 0x50a990 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_JM_EXTRAS = //Jam
{
    L"Extras",
    {
        //Normals
        { L"6HH", 0x2d0be0, 0x2d0c20, indexGGXXSprites_ACR_Jam, 0x01 },

        //Specials
        { L"Breath of Asanagi (1/17)",  0x2d7da0, 0x2d7de0, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (2/17)",  0x2d88c0, 0x2d8900, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (3/17)",  0x2d9440, 0x2d9480, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (4/17)",  0x2d9fa0, 0x2d9fe0, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (5/17)",  0x2daad0, 0x2dab10, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (6/17)",  0x2dac40, 0x2dac80, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (7/17)",  0x2db670, 0x2db6b0, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (8/17)",  0x2dc120, 0x2dc160, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (9/17)",  0x2dcc10, 0x2dcc50, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (10/17)", 0x2dd780, 0x2dd7c0, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (11/17)", 0x2de3e0, 0x2de420, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (12/17)", 0x2df070, 0x2df0b0, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (13/17)", 0x2dfbb0, 0x2dfbf0, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (14/17)", 0x2e0450, 0x2e0490, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (15/17)", 0x2e0a30, 0x2e0a70, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (16/17)", 0x2e0e10, 0x2e0e50, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Breath of Asanagi (17/17)", 0x2e0ff0, 0x2e1030, indexGGXXSprites_ACR_Jam, 0x03, nullptr, &effects_AdditiveBlend },

        { L"Gekirin (1/2)",                      0x2d35d0, 0x2d3610, indexGGXXSprites_ACR_Jam, 0x06 },
        { L"Gekirin (1/2)/Kick Special Effects", 0x2d56b0, 0x2d56f0, indexGGXXSprites_ACR_Jam, 0x06 }, //Used in Ryuujin, Gekirin, and Kenroukaku

        { L"Bakushuu (1/2)", 0x37e430, 0x37e470, indexGGXXSprites_ACR_Jam, 0x02 },
        { L"Bakushuu (2/2)", 0x3821d0, 0x382210, indexGGXXSprites_ACR_Jam, 0x02 },

        { L"Hochifu", 0x307a10, 0x307a50, indexGGXXSprites_ACR_Jam, 0x08, nullptr, &effects_AdditiveBlend },

        //Overdrives
        { L"Renhoukyaku (1/3)", 0x2eada0, 0x2eade0, indexGGXXSprites_ACR_Jam, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Renhoukyaku (2/3)", 0x2f1df0, 0x2f1e30, indexGGXXSprites_ACR_Jam, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Renhoukyaku (3/3)", 0x2f5bf0, 0x2f5c30, indexGGXXSprites_ACR_Jam, 0x09, nullptr, &effects_AdditiveBlend },

        { L"Choukyaku Hououshou/Tousai Hyakuretsuken", 0x2f8db0, 0x2f8df0, indexGGXXSprites_ACR_Jam, 0x04, &pairNext, &effects_AdditiveBlend },
        { L"Choukyaku Hououshou Sparks",               0x3008a0, 0x3008e0, indexGGXXSprites_ACR_Jam, 0x05, nullptr, &effects_AdditiveBlend },

        { L"Geki: Saishinshou (1/15)",   0x308550, 0x308590, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (2/15)",   0x3090a0, 0x3090e0, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (3/15)",   0x30a1d0, 0x30a210, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (4/15)",   0x30c1a0, 0x30c1e0, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (5/15)",   0x30f1a0, 0x30f1e0, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (6/15)",   0x31b540, 0x31b580, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (7/15)",   0x323370, 0x3233b0, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (8/15)",   0x32b080, 0x32b0c0, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (9/15)",   0x3335b0, 0x3335f0, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (10/15)",  0x33b630, 0x33b670, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (11/15)",  0x343f80, 0x343fc0, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (12/15)",  0x34c730, 0x34c770, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (13/15)",  0x354e40, 0x354e80, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (14/15)",  0x35c790, 0x35c7d0, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Geki: Saishinshou (15/15)",  0x3609a0, 0x3609e0, indexGGXXSprites_ACR_Jam, 0x07, nullptr, &effects_AdditiveBlend },

        //Instant Kill
        { L"Gasenkotsu Background",      0x36c9c0, 0x36ca00 },

        //Unknown or Unused
        //{ L"Unknown 1", 0x2e3060, 0x2e30a0 },
        //{ L"Unknown 2", 0x2e4320, 0x2e4360 },
        //{ L"Unknown 3", 0x2e4d90, 0x2e4dd0 },
        //{ L"Unknown 4", 0x37e110, 0x37e150 },
        //{ L"Unknown 5", 0x384fe0, 0x385020 },
        //{ L"Unknown 6", 0x3851e0, 0x385220 },
        //{ L"Ryuujin",   0x2caa90, 0x2caad0 }, //Uses main palette
        //{ L"Plates",    0x364a60, 0x364aa0 }, //Uses main palette
        //{ L"Asanagi no Kokyuu (1/4)", 0x364fb0, 0x364ff0 },
        //{ L"Asanagi no Kokyuu (2/4)", 0x3651b0, 0x3651f0 },
        //{ L"Asanagi no Kokyuu (3/4)", 0x3653b0, 0x3653f0 },
        //{ L"Asanagi no Kokyuu (4/4)", 0x3655b0, 0x3655f0 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_JY_EXTRAS = //Johnny
{
    L"Extras",
    {
        //General
        { L"Intro rose (Tossed)", 0x3d02b0, 0x3d02f0, indexGGXXSprites_ACR_Johnny, 0x09 },

        //Normals
        { L"5P (1/2)", 0x3d0430, 0x3d0470, indexGGXXSprites_ACR_Johnny, 0x02, nullptr, &effects_AdditiveBlend },
        { L"5P (2/2)", 0x3d0520, 0x3d0560, indexGGXXSprites_ACR_Johnny, 0x02, nullptr, &effects_AdditiveBlend },

        { L"5H (Extra dust)", 0x3d0620, 0x3d0660, indexGGXXSprites_ACR_Johnny, 0x05, &pairNextAndNext },
        { L"6H (1/2)", 0x3d5eb0, 0x3d5ef0, indexGGXXSprites_ACR_Johnny, 0x06 },
        { L"6H (2/2)", 0x3d76c0, 0x3d7700, indexGGXXSprites_ACR_Johnny, 0x07 },

        { L"2H (1/2)", 0x3da900, 0x3da940, indexGGXXSprites_ACR_Johnny, 0x01 },
        { L"2H (2/2)", 0x3dc770, 0x3dc7b0, indexGGXXSprites_ACR_Johnny, 0x01 },

        //Specials
        { L"Mist Finer Stance (1/8)", 0x3d8820, 0x3d8860, indexGGXXSprites_ACR_Johnny, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Mist Finer Stance (2/8)", 0x3da420, 0x3da460, indexGGXXSprites_ACR_Johnny, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Mist Finer Stance (3/8)", 0x3d8e20, 0x3d8e60, indexGGXXSprites_ACR_Johnny, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Mist Finer Stance (4/8)", 0x3d9310, 0x3d9350, indexGGXXSprites_ACR_Johnny, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Mist Finer Stance (5/8)", 0x3d9740, 0x3d9780, indexGGXXSprites_ACR_Johnny, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Mist Finer Stance (6/8)", 0x3d9b50, 0x3d9b90, indexGGXXSprites_ACR_Johnny, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Mist Finer Stance (7/8)", 0x3d9eb0, 0x3d9ef0, indexGGXXSprites_ACR_Johnny, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Mist Finer Stance (8/8)", 0x3da420, 0x3da460, indexGGXXSprites_ACR_Johnny, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Mist Finer Slash", 0x3d21e0, 0x3d2220, indexGGXXSprites_ACR_Johnny, 0x0f, nullptr, &effects_AdditiveBlend },

        { L"Coins", 0x3f0f60, 0x3f0fa0, indexGGXXSprites_ACR_Johnny, 0x03 },
        { L"Mist", 0x3bfe40, 0x3bfe80, indexGGXXSprites_ACR_Johnny, 0x0e, nullptr, &effects_AdditiveBlend },

        { L"Ensenga (1/3)", 0x3dd2e0, 0x3dd320, indexGGXXSprites_ACR_Johnny, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Ensenga (2/3)", 0x3de4a0, 0x3de4e0, indexGGXXSprites_ACR_Johnny, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Ensenga (3/3)", 0x3e3220, 0x3e3260, indexGGXXSprites_ACR_Johnny, 0x08, nullptr, &effects_AdditiveBlend },

        { L"Divine Blade", 0x3b9bb0, 0x3b9bf0, indexGGXXSprites_ACR_Johnny, 0x04 },
        { L"Killer Joker", 0x3ebf30, 0x3ebf70, indexGGXXSprites_ACR_Johnny, 0x0d, nullptr, &effects_AdditiveBlend },

        //Forcebreaks
        { L"Jackhound", 0x3e9bf0, 0x3e9c30, indexGGXXSprites_ACR_Johnny, 0x0a, nullptr, &effects_AdditiveBlend },

        //Overdrives
        { L"Thats my name (1/3)", 0x3c6560, 0x3c65a0, indexGGXXSprites_ACR_Johnny, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Thats my name (2/3)", 0x3c7b00, 0x3c7b40, indexGGXXSprites_ACR_Johnny, 0x12, nullptr, &effects_AdditiveBlend },
        { L"Thats my name (3/3)", 0x3cf120, 0x3cf160, indexGGXXSprites_ACR_Johnny, 0x13, nullptr, &effects_AdditiveBlend },

        { L"Uncho's Iai", 0x3eeef0, 0x3eef30, indexGGXXSprites_ACR_Johnny, 0x14, nullptr, &effects_AdditiveBlend },

        //Instant Kill
        { L"Joker Trick (Thrown card)", 0x3d0180, 0x3d01c0, indexGGXXSprites_ACR_Johnny, 0x0c },
        { L"Joker Trick (Back of card)", 0x3b5fd0, 0x3b6010, indexGGXXSprites_ACR_Johnny, 0x0b },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_JS_EXTRAS = //Justice
{
    L"Extras",
    {
        //General
        { L"Idle/Omega Shift Startup (1/8)", 0x380e80, 0x380ec0 },
        { L"Idle/Omega Shift Startup (2/8)", 0x381330, 0x381370 },
        { L"Idle/Omega Shift Startup (3/8)", 0x3818d0, 0x381910 },
        { L"Idle/Omega Shift Startup (4/8)", 0x381e30, 0x381e70 },
        { L"Idle/Omega Shift Startup (5/8)", 0x3823c0, 0x382400 },
        { L"Idle/Omega Shift Startup (6/8)", 0x382960, 0x3829a0 },
        { L"Idle/Omega Shift Startup (7/8)", 0x383040, 0x383080 },
        { L"Idle/Omega Shift Startup (8/8)", 0x383580, 0x3835c0 },

        { L"Jumping (1/8)", 0x383800, 0x383840 },
        { L"Jumping (2/8)", 0x383dd0, 0x383e10 },
        { L"Jumping (3/8)", 0x384b20, 0x384b60 },
        { L"Jumping (4/8)", 0x3855b0, 0x3855f0 },
        { L"Jumping (5/8)", 0x385ee0, 0x385f20 },
        { L"Jumping (6/8)", 0x386900, 0x386940 },
        { L"Jumping (7/8)", 0x386fe0, 0x387020 },
        { L"Jumping (8/8)", 0x3873d0, 0x387410 },

        { L"Dash Startup (1/7)", 0x387730, 0x387770 },
        { L"Dash Startup (2/7)", 0x387970, 0x3879b0 },
        { L"Dash Startup (3/7)", 0x387d80, 0x387dc0 },
        { L"Dash Startup (4/7)", 0x3883c0, 0x388400 },
        { L"Dash Startup (5/7)", 0x388e00, 0x388e40 },
        { L"Dash Startup (6/7)", 0x389a40, 0x389a80 },
        { L"Dash Startup (7/7)", 0x38a4c0, 0x38a500 },
        { L"Dash Trails (1/3)", 0x38adf0, 0x38ae30 },
        { L"Dash Trails (2/3)", 0x38b660, 0x38b6a0 },
        { L"Dash Trails (3/3)", 0x38bc70, 0x38bcb0 },

        { L"Intro (1/5)", 0x3ff5f0, 0x3ff630 },
        { L"Intro (2/5)", 0x401520, 0x401560 },
        { L"Intro (3/5)", 0x402b10, 0x402b50 },
        { L"Intro (4/5)", 0x404b10, 0x404b50 },
        { L"Intro (5/5)", 0x405b70, 0x405bb0 },

        { L"Outro Orb (1/5)", 0x40d430, 0x40d470 },
        { L"Outro Orb (2/5)", 0x40ef90, 0x40efd0 },
        { L"Outro Orb (3/5)", 0x4106c0, 0x410700 },
        { L"Outro Orb (4/5)", 0x412490, 0x4124d0 },
        { L"Outro Orb (5/5)", 0x413750, 0x413790 },

        { L"Outro Rings (1/2)", 0x414630, 0x414670 },
        { L"Outro Rings (2/2)", 0x414f70, 0x414fb0 },

        //Normals
        { L"6H (1/2)", 0x415df0, 0x415e30 },
        { L"6H (2/2)", 0x41b570, 0x41b5b0 },

        { L"2H/j.S (1/10)", 0x38c680, 0x38c6c0 },
        { L"2H/j.S (2/10)", 0x38cc20, 0x38cc60 },
        { L"2H/j.S (3/10)", 0x38d1c0, 0x38d200 },
        { L"2H/j.S (4/10)", 0x38d850, 0x38d890 },
        { L"2H/j.S (5/10)", 0x38de30, 0x38de70 },
        { L"2H/j.S (6/10)", 0x38ede0, 0x38ee20 },
        { L"2H/j.S (7/10)", 0x390000, 0x390040 },
        { L"2H/j.S (8/10)", 0x391960, 0x3919a0 },
        { L"2H/j.S (9/10)", 0x392c20, 0x392c60 },
        { L"2H/j.S (10/10)", 0x393110, 0x393150 },

        { L"J.H (1/2)", 0x41f620, 0x41f660 },
        { L"J.H (2/2)", 0x424590, 0x4245d0 },

        //Specials
        { L"Michael Sword Startup (1/4)", 0x3afb90, 0x3afbd0 },
        { L"Michael Sword Startup (2/4)", 0x3afdd0, 0x3afe10 },
        { L"Michael Sword Startup (3/4)", 0x3b0160, 0x3b01a0 },
        { L"Michael Sword Startup (4/4)", 0x3b0820, 0x3b0860 },
        { L"Michael Sword Slash (1/2)", 0x3b0a70, 0x3b0ab0 },
        { L"Michael Sword Slash (2/2)", 0x3b2be0, 0x3b2c20 },
        { L"Michael Sword Background Slash", 0x3ea5f0, 0x3ea630 },

        { L"S.B.T. (1/7)", 0x3a7420, 0x3a7460 },
        { L"S.B.T. (2/7)", 0x3a7bc0, 0x3a7c00 },
        { L"S.B.T. (3/7)", 0x3a8720, 0x3a8760 },
        { L"S.B.T. (4/7)", 0x3a97b0, 0x3a97f0 },
        { L"S.B.T. (5/7)", 0x3ab6d0, 0x3ab710 },
        { L"S.B.T. (6/7)", 0x3adb50, 0x3adb90 },
        { L"S.B.T. (7/7)", 0x3aee20, 0x3aee60 },

        { L"Nuclear Blast Explosion", 0x43b530, 0x43b570 },
        { L"Nuclear Blast Explosion/Trails (1/2)", 0x442c30, 0x442c70 },
        { L"Nuclear Blast Explosion/Trails (2/2)", 0x444bc0, 0x444c00 },

        //Overdrives
        { L"Imperial Ray (1/4)", 0x3a04f0, 0x3a0530 },
        { L"Imperial Ray (2/4)", 0x3a1ff0, 0x3a2030 },
        { L"Imperial Ray (3/4)", 0x3a4180, 0x3a41c0 },
        { L"Imperial Ray (4/4)", 0x3a5be0, 0x3a5c20 },
        { L"Imperial Ray Center (1/8)", 0x3933f0, 0x393430 },
        { L"Imperial Ray Center (2/8)", 0x394160, 0x3941a0 },
        { L"Imperial Ray Center (3/8)", 0x394d20, 0x394d60 },
        { L"Imperial Ray Center (4/8)", 0x395d60, 0x395da0 },
        { L"Imperial Ray Center (5/8)", 0x397700, 0x397740 },
        { L"Imperial Ray Center (6/8)", 0x399820, 0x399860 },
        { L"Imperial Ray Center (7/8)", 0x39c420, 0x39c460 },
        { L"Imperial Ray Center (8/8)", 0x39e710, 0x39e750 },

        { L"Gamma Ray Initial Hit (1/4)", 0x428620, 0x428660 },
        { L"Gamma Ray Initial Hit (2/4)", 0x42cce0, 0x42cd20 },
        { L"Gamma Ray Initial Hit (3/4)", 0x42fbf0, 0x42fc30 },
        { L"Gamma Ray Initial Hit (4/4)", 0x434710, 0x434750 },
        { L"Gamma Ray Startup (1/4)", 0x3b3ed0, 0x3b3f10 },
        { L"Gamma Ray Startup (2/4)", 0x3b4390, 0x3b43d0 },
        { L"Gamma Ray Startup (3/4)", 0x3b4aa0, 0x3b4ae0 },
        { L"Gamma Ray Startup (4/4)", 0x3b5230, 0x3b5270 },
        { L"Gamma Ray (1/3)", 0x3b5b00, 0x3b5b40 },
        { L"Gamma Ray (2/3)", 0x3b6260, 0x3b62a0 },
        { L"Gamma Ray (3/3)", 0x3b6bf0, 0x3b6c30 },
        { L"Gamma Ray Beam (1/8)", 0x3b7550, 0x3b7590 },
        { L"Gamma Ray Beam (2/8)", 0x3b7a80, 0x3b7ac0 },
        { L"Gamma Ray Beam (3/8)", 0x3b81b0, 0x3b81f0 },
        { L"Gamma Ray Beam (4/8)", 0x3b8a90, 0x3b8ad0 },
        { L"Gamma Ray Beam (5/8)", 0x3b9a70, 0x3b9ab0 },
        { L"Gamma Ray Beam (6/8)", 0x3bacf0, 0x3bad30 },
        { L"Gamma Ray Beam (7/8)", 0x3bb4f0, 0x3bb530 },
        { L"Gamma Ray Beam (8/8)", 0x3bbc10, 0x3bbc50 },

        //Instant Kill
        { L"X Laser (1/20)", 0x3bc310, 0x3bc350 },
        { L"X Laser (2/20)", 0x3bc610, 0x3bc650 },
        { L"X Laser (3/20)", 0x3bd560, 0x3bd5a0 },
        { L"X Laser (4/20)", 0x3beb90, 0x3bebd0 },
        { L"X Laser (5/20)", 0x3c09a0, 0x3c09e0 },
        { L"X Laser (6/20)", 0x3c3000, 0x3c3040 },
        { L"X Laser (7/20)", 0x3c5a40, 0x3c5a80 },
        { L"X Laser (8/20)", 0x3ca8e0, 0x3ca920 },
        { L"X Laser (9/20)", 0x3cf710, 0x3cf750 },
        { L"X Laser (10/20)", 0x3d58d0, 0x3d5910 },
        { L"X Laser (11/20)", 0x3dc5b0, 0x3dc5f0 },
        { L"X Laser (12/20)", 0x3e14d0, 0x3e1510 },
        { L"X Laser (13/20)", 0x3e69e0, 0x3e6a20 },
        { L"X Laser (14/20)", 0x3e86f0, 0x3e8730 },
        { L"X Laser (15/20)", 0x3e9250, 0x3e9290 },
        { L"X Laser (16/20)", 0x3e9390, 0x3e93d0 },
        { L"X Laser (17/20)", 0x3e94a0, 0x3e94e0 },
        { L"X Laser (18/20)", 0x3e95c0, 0x3e9600 },
        { L"X Laser (19/20)", 0x3e96a0, 0x3e96e0 },
        { L"X Laser (20/20)", 0x3e9770, 0x3e97b0 },
        { L"X Laser Particles ", 0x43a4d0, 0x43a510 },

        //Unknown
        //{ L"Unknown (1/28)", 0x39e820, 0x39e860 },
        //{ L"Unknown (2/28)", 0x39f0a0, 0x39f0e0 },
        //{ L"Unknown (3/28)", 0x39fae0, 0x39fb20 },
        //{ L"Unknown (4/28)", 0x3e97f0, 0x3e9830 },
        //{ L"Unknown (5/28)", 0x3e9a00, 0x3e9a40 },
        //{ L"Unknown (6/28)", 0x3e9c50, 0x3e9c90 },
        //{ L"Unknown (7/28)", 0x3e9e70, 0x3e9eb0 },
        //{ L"Unknown (8/28)", 0x3ea080, 0x3ea0c0 },
        //{ L"Unknown (9/28)", 0x3ea230, 0x3ea270 },
        //{ L"Unknown (10/28)", 0x3ea350, 0x3ea390 },
        //{ L"Unknown (11/28)", 0x3ea420, 0x3ea460 },
        //{ L"Unknown (12/28)", 0x3ea990, 0x3ea9d0 },
        //{ L"Unknown (13/28)", 0x3f2340, 0x3f2380 },
        //{ L"Unknown (14/28)", 0x3f3120, 0x3f3160 },
        //{ L"Unknown (15/28)", 0x3f3f60, 0x3f3fa0 },
        //{ L"Unknown (16/28)", 0x3f4ef0, 0x3f4f30 },
        //{ L"Unknown (17/28)", 0x3f5de0, 0x3f5e20 },
        //{ L"Unknown (18/28)", 0x3f7050, 0x3f7090 },
        //{ L"Unknown (19/28)", 0x3f8120, 0x3f8160 },
        //{ L"Unknown (20/28)", 0x3f92f0, 0x3f9330 },
        //{ L"Unknown (21/28)", 0x3fa0b0, 0x3fa0f0 },
        //{ L"Unknown (22/28)", 0x3faec0, 0x3faf00 },
        //{ L"Unknown (23/28)", 0x3fc3f0, 0x3fc430 },
        //{ L"Unknown (24/28)", 0x3fd850, 0x3fd890 },
        //{ L"Unknown (25/28)", 0x406bb0, 0x406bf0 },
        //{ L"Unknown (26/28)", 0x4084c0, 0x408500 },
        //{ L"Unknown (27/28)", 0x40a4e0, 0x40a520 },
        //{ L"Unknown (28/28)", 0x40c200, 0x40c240 },
        //{ L"Unknown", 0x3fe1e0, 0x3fe5e0 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_KR_EXTRAS = //Kliff
{
    L"Extras",
    {
        { L"Bellowing Roar (P) 1/5", 0x291bd0, 0x291c10, indexGGXXSprites_ACR_Kliff, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Bellowing Roar (P) 2/5", 0x292b00, 0x292b40, indexGGXXSprites_ACR_Kliff, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Bellowing Roar (P) 3/5", 0x293a50, 0x293a90, indexGGXXSprites_ACR_Kliff, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Bellowing Roar (P) 4/5", 0x294aa0, 0x294ae0, indexGGXXSprites_ACR_Kliff, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Bellowing Roar (P) 5/5", 0x295f40, 0x295f80, indexGGXXSprites_ACR_Kliff, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Bellowing Roar (S) 1/5", 0x296af0, 0x296b30, indexGGXXSprites_ACR_Kliff, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Bellowing Roar (S) 2/5", 0x298cd0, 0x298d10, indexGGXXSprites_ACR_Kliff, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Bellowing Roar (S) 3/5", 0x29b5d0, 0x29b610, indexGGXXSprites_ACR_Kliff, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Bellowing Roar (S) 4/5", 0x29def0, 0x29df30, indexGGXXSprites_ACR_Kliff, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Bellowing Roar (S) 5/5", 0x2a1150, 0x2a1190, indexGGXXSprites_ACR_Kliff, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Air B. Roar/Reflex Roar 1/4", 0x2a30c0, 0x2a3100, indexGGXXSprites_ACR_Kliff, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Air B. Roar/Reflex Roar 2/4", 0x2aab60, 0x2aaba0, indexGGXXSprites_ACR_Kliff, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Air B. Roar/Reflex Roar 3/4", 0x2b0720, 0x2b0760, indexGGXXSprites_ACR_Kliff, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Air B. Roar/Reflex Roar 4/4", 0x2b0cc0, 0x2b0d00, indexGGXXSprites_ACR_Kliff, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Scale Ripper Dust 1/17", 0x2b1aa0, 0x2b1ae0 },
        { L"Scale Ripper Dust 2/17", 0x2b1cb0, 0x2b1cf0 },
        { L"Scale Ripper Dust 3/17", 0x2b2030, 0x2b2070 },
        { L"Scale Ripper Dust 4/17", 0x2b2490, 0x2b24d0 },
        { L"Scale Ripper Dust 5/17", 0x2b2aa0, 0x2b2ae0 },
        { L"Scale Ripper Dust 6/17", 0x2b3160, 0x2b31a0 },
        { L"Scale Ripper Dust 7/17", 0x2b3860, 0x2b38a0 },
        { L"Scale Ripper Dust 8/17", 0x2b4040, 0x2b4080 },
        { L"Scale Ripper Dust 9/17", 0x2b4810, 0x2b4850 },
        { L"Scale Ripper Dust 10/17", 0x2b5070, 0x2b50b0 },
        { L"Scale Ripper Dust 11/17", 0x2b5750, 0x2b5790 },
        { L"Scale Ripper Dust 12/17", 0x2b5d10, 0x2b5d50 },
        { L"Scale Ripper Dust 13/17", 0x2b60d0, 0x2b6110 },
        { L"Scale Ripper Dust 14/17", 0x2b63a0, 0x2b63e0 },
        { L"Scale Ripper Dust 15/17", 0x2b65e0, 0x2b6620 },
        { L"Scale Ripper Dust 16/17", 0x2b67d0, 0x2b6810 },
        { L"Scale Ripper Dust 17/17", 0x2b69a0, 0x2b69e0 },
        { L"Sole Survivor 1/6", 0x2b6b60, 0x2b6ba0, indexGGXXSprites_ACR_Kliff, 0x0d },
        { L"Sole Survivor 2/6", 0x2b6ea0, 0x2b6ee0, indexGGXXSprites_ACR_Kliff, 0x0d },
        { L"Sole Survivor 3/6", 0x2b7270, 0x2b72b0, indexGGXXSprites_ACR_Kliff, 0x0d },
        { L"Sole Survivor 4/6", 0x2b7730, 0x2b7770, indexGGXXSprites_ACR_Kliff, 0x0d },
        { L"Sole Survivor 5/6", 0x2b7f10, 0x2b7f50, indexGGXXSprites_ACR_Kliff, 0x0d },
        { L"Sole Survivor 6/6", 0x2b8870, 0x2b88b0, indexGGXXSprites_ACR_Kliff, 0x0d },
        { L"IK Dragons 1/2", 0x2b9640, 0x2b9680, indexGGXXSprites_ACR_Kliff, 0x0b },
        { L"IK Dragons 2/2", 0x2c3c90, 0x2c3cd0, indexGGXXSprites_ACR_Kliff, 0x0c },
        { L"\"BAKAMON!\" 1/4", 0x2ce990, 0x2ce9d0 },
        { L"\"BAKAMON!\" 2/4 ", 0x2ced10, 0x2ced50 },
        { L"\"BAKAMON!\" 3/4", 0x2cef70, 0x2cefb0 },
        { L"\"BAKAMON!\" 4/4", 0x2cf1e0, 0x2cf220 },
        { L"Extra?", 0x2cf400, 0x2cf440 },
        { L"Intro Tea Cup 1/4", 0x2d1820, 0x2d1860 },
        { L"Intro Tea Cup 2/4", 0x2d1920, 0x2d1960 },
        { L"Intro Tea Cup 3/4", 0x2d1a10, 0x2d1a50 },
        { L"Intro Tea Cup 4/4", 0x2d1ae0, 0x2d1b20 },
        { L"Air Grab Letters 1/2", 0x2d1f80, 0x2d1fc0 },
        { L"Air Grab Letters 2/2", 0x2d3ab0, 0x2d3af0 },
        { L"Limb Severer 1/9", 0x2d4d70, 0x2d4db0 },
        { L"Limb Severer 2/9", 0x2d7200, 0x2d7240 },
        { L"Limb Severer 3/9", 0x2d85e0, 0x2d8620 },
        { L"Limb Severer 4/9", 0x2da8d0, 0x2da910 },
        { L"Limb Severer 5/9", 0x2dc9c0, 0x2dca00 },
        { L"Limb Severer 6/9", 0x2df0a0, 0x2df0e0 },
        { L"Limb Severer 7/9", 0x2e0e40, 0x2e0e80 },
        { L"Limb Severer 8/9", 0x2e2e40, 0x2e2e80 },
        { L"Limb Severer 9/9", 0x2e5150, 0x2e5190 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_KY_EXTRAS = //Ky
{
    L"Extras",
    {
        //General
        { L"Idle Stance / Projectile Trails", 0x3f44a0, 0x3f44e0, indexGGXXSprites_ACR_Ky, 0x0D, nullptr, &effects_AdditiveBlend },

        //Normals
        { L"5H (1/2)", 0x424820, 0x424860, indexGGXXSprites_ACR_Ky, 0x02, nullptr, &effects_AdditiveBlend },
        { L"5H (2/2)", 0x428f60, 0x428fa0, indexGGXXSprites_ACR_Ky, 0x02, nullptr, &effects_AdditiveBlend },
        { L"6H (1/2)", 0x3fb3c0, 0x3fb400, indexGGXXSprites_ACR_Ky, 0x03, nullptr, &effects_AdditiveBlend },
        { L"6H (2/2)", 0x400700, 0x400740, indexGGXXSprites_ACR_Ky, 0x03, nullptr, &effects_AdditiveBlend },
        { L"3H (1/2)", 0x3f7c40, 0x3f7c80, indexGGXXSprites_ACR_Ky, 0x01, nullptr, &effects_AdditiveBlend },
        { L"3H (2/2)", 0x3f8050, 0x3f8090, indexGGXXSprites_ACR_Ky, 0x01, nullptr, &effects_AdditiveBlend },
        { L"j.S", 0x3f8b30, 0x3f8b70, indexGGXXSprites_ACR_Ky, 0x10, nullptr, &effects_AdditiveBlend },
        { L"j.D", 0x41d550, 0x41d590, indexGGXXSprites_ACR_Ky, 0x0f, nullptr, &effects_AdditiveBlend },

        //Specials
        { L"Stun Edge (1/2)", 0x39bd40, 0x39bd80, indexGGXXSprites_ACR_Ky, 0x1b, nullptr, &effects_AdditiveBlend },
        { L"Stun Edge (2/2)", 0x39d6f0, 0x39d730, indexGGXXSprites_ACR_Ky, 0x1b, nullptr, &effects_AdditiveBlend },
        { L"Air Stun Edge", 0x3a7000, 0x3a7040, indexGGXXSprites_ACR_Ky, 0x04, nullptr, &effects_AdditiveBlend },
        { L"Charged Stun Edge Startup (1/2)", 0x39a3d0, 0x39a410, indexGGXXSprites_ACR_Ky, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Charged Stun Edge Startup (2/2)", 0x39b120, 0x39b160, indexGGXXSprites_ACR_Ky, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Charged Stun Edge", 0x3a19a0, 0x3a19e0, indexGGXXSprites_ACR_Ky, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Stun Edge Impacts/Rings", 0x39fa30, 0x39fa70, indexGGXXSprites_ACR_Ky, 0x0e, nullptr, &effects_AdditiveBlend },

        { L"Vapor Thrust", 0x394ea0, 0x394ee0, indexGGXXSprites_ACR_Ky, 0x1c, &pairNext, &effects_AdditiveBlend },
        { L"Vapor Thrust Ground Effects", 0x3942d0, 0x394310, indexGGXXSprites_ACR_Ky, 0x1d, nullptr, &effects_AdditiveBlend },
        { L"Lightning Javolin", 0x42d770, 0x42d7b0, indexGGXXSprites_ACR_Ky, 0x11, nullptr, &effects_AdditiveBlend },

        { L"Stun Dipper", 0x3ad2d0, 0x3ad310, indexGGXXSprites_ACR_Ky, 0x1a, nullptr, &effects_AdditiveBlend },

        { L"Greed Sever Startup", 0x3b06a0, 0x3b06e0, indexGGXXSprites_ACR_Ky, 0x0c, nullptr, &effects_AdditiveBlend },
        { L"Greed Sever (1/2)", 0x3b29e0, 0x3b2be0, indexGGXXSprites_ACR_Ky, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Greed Sever (2/2)", 0x3b56b0, 0x3b58b0, indexGGXXSprites_ACR_Ky, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Greed Sever Shine", 0x3b7760, 0x3b77a0, indexGGXXSprites_ACR_Ky, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Greed Sever Ground Slam (FB)", 0x435c00, 0x435c40, indexGGXXSprites_ACR_Ky, 0x0b, nullptr, &effects_AdditiveBlend },

        { L"Lightning Strike", 0x4360d0, 0x436110, indexGGXXSprites_ACR_Ky, 0x19, nullptr, &effects_AdditiveBlend },

        //Force Breaks
        { L"Lightning Sphere inner glow", 0x41a610, 0x41a650, indexGGXXSprites_ACR_Ky, 0x12, &pairNext4, &effects_AdditiveBlend },
        { L"Charge Drive thrust (1/3)", 0x404fa0, 0x404fe0, indexGGXXSprites_ACR_Ky, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Charge Drive thrust (2/3)", 0x40b460, 0x40b4a0, indexGGXXSprites_ACR_Ky, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Charge Drive thrust (3/3)", 0x4119b0, 0x4119f0, indexGGXXSprites_ACR_Ky, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Charge Drive startup effect", 0x417b40, 0x417b80, indexGGXXSprites_ACR_Ky, 0x05, nullptr, &effects_AdditiveBlend },

        { L"Lightning Sphere/Stun Rays Flash (1/2)", 0x42a3a0, 0x42a3e0, indexGGXXSprites_ACR_Ky, 0x13, nullptr, &effects_AdditiveBlend },
        { L"Lightning Sphere/Stun Rays Flash (2/2)", 0x42bc20, 0x42bc60, indexGGXXSprites_ACR_Ky, 0x13, nullptr, &effects_AdditiveBlend },

        //Overdrives
        { L"Ride the Lightning (1/2)", 0x3dfd50, 0x3dfd90, indexGGXXSprites_ACR_Ky, 0x14, &pairNext, &effects_AdditiveBlend },
        { L"Ride the Lightning (2/2)", 0x3e8430, 0x3e8470, indexGGXXSprites_ACR_Ky, 0x15, nullptr, &effects_AdditiveBlend },

        { L"Sacred Edge Projectile (1/4)", 0x3b9980, 0x3b99c0, indexGGXXSprites_ACR_Ky, 0x18, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Projectile (2/4)", 0x3bfae0, 0x3bfb20, indexGGXXSprites_ACR_Ky, 0x18, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Projectile (3/4)", 0x3d6200, 0x3d6240, indexGGXXSprites_ACR_Ky, 0x18, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Projectile (4/4)", 0x3db780, 0x3db7c0, indexGGXXSprites_ACR_Ky, 0x18, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (1/17)", 0x3c6a20, 0x3c6a60, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (2/17)", 0x3c6cd0, 0x3c6d10, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (3/17)", 0x3c7070, 0x3c70b0, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (4/17)", 0x3c73c0, 0x3c7400, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (5/17)", 0x3c7930, 0x3c7970, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (6/17)", 0x3c8110, 0x3c8150, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (7/17)", 0x3c8bf0, 0x3c8c30, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (8/17)", 0x3c97b0, 0x3c97f0, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (9/17)", 0x3ca6b0, 0x3ca6f0, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (10/17)", 0x3cb800, 0x3cb840, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (11/17)", 0x3cca80, 0x3ccac0, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (12/17)", 0x3cdfd0, 0x3ce010, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (13/17)", 0x3cf7c0, 0x3cf800, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (14/17)", 0x3d0ec0, 0x3d0f00, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (15/17)", 0x3d2910, 0x3d2950, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (16/17)", 0x3d3e80, 0x3d3ec0, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Sacred Edge Circle (17/17)", 0x3d5080, 0x3d50c0, indexGGXXSprites_ACR_Ky, 0x17, nullptr, &effects_AdditiveBlend },

        //Instant Kill
        { L"Rising Force (1/2)", 0x3ea5d0, 0x3ea610, indexGGXXSprites_ACR_Ky, 0x16, nullptr, &effects_AdditiveBlend },
        { L"Rising Force (2/2)", 0x3ee900, 0x3ee940, indexGGXXSprites_ACR_Ky, 0x16, nullptr, &effects_AdditiveBlend },

        //{ L"Unsure 15", 0x3f4e60, 0x3f4ea0 }, 
        //{ L"Unsure 16", 0x3f6f30, 0x3f6f70 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_MY_EXTRAS = //May
{
    L"Extras",
    {
        //General
        { L"Sparkles (1/3)", 0x371410, 0x371450, indexGGXXSprites_ACR_May, 0x05, &pairNextAndNext, &effects_AdditiveBlend }, //three way join, additive
        { L"Sparkles (2/3)", 0x371a50, 0x371a90, indexGGXXSprites_ACR_May, 0x06, nullptr, &effects_AdditiveBlend }, //^
        { L"Sparkles (3/3)", 0x371d10, 0x371d50, indexGGXXSprites_ACR_May, 0x07, nullptr, &effects_AdditiveBlend }, //^
        { L"Water Splashes", 0x371f10, 0x371f50, indexGGXXSprites_ACR_May, 0x08, nullptr, &effects_AdditiveBlend }, //additive

        //Specials
        { L"Applause for the Victim (1/2)", 0x36c430, 0x36c470, indexGGXXSprites_ACR_May, 0x01, &pairNext2, &effects_AdditiveBlend }, //pair to hoops, additive
        { L"Applause for the Victim (2/2)", 0x36ec00, 0x36ec40, indexGGXXSprites_ACR_May, 0x01, &pairNext, &effects_AdditiveBlend }, //pair to hoops, additive
        { L"Applause for the Victim (Hoops)", 0x370f90, 0x370fd0, indexGGXXSprites_ACR_May, 0x02, &pairPreviousFlipped2 },

        //Overdrives
        { L"Great Yamada Attack (1/5)", 0x372ef0, 0x372f30, indexGGXXSprites_ACR_May, 0x03, nullptr, &effects_AdditiveBlend }, //all 5 additive
        { L"Great Yamada Attack (2/5)", 0x375ba0, 0x375be0, indexGGXXSprites_ACR_May, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Great Yamada Attack (3/5)", 0x377b90, 0x377bd0, indexGGXXSprites_ACR_May, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Great Yamada Attack (4/5)", 0x379a30, 0x379a70, indexGGXXSprites_ACR_May, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Great Yamada Attack (5/5)", 0x37b7c0, 0x37b800, indexGGXXSprites_ACR_May, 0x03, nullptr, &effects_AdditiveBlend },

        //Instant Kill
        { L"Pirate Dizzy (1/4)", 0x3bb060, 0x3bb0a0, indexGGXXSprites_ACR_May, 0x04 },
        { L"Pirate Dizzy (2/4)", 0x3bc610, 0x3bc650, indexGGXXSprites_ACR_May, 0x04 },
        { L"Pirate Dizzy (3/4)", 0x3bdba0, 0x3bdbe0, indexGGXXSprites_ACR_May, 0x04 },
        { L"Pirate Dizzy (4/4)", 0x3bf120, 0x3bf160, indexGGXXSprites_ACR_May, 0x04 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_ML_EXTRAS = //Millia
{
    L"Extras",
    {
        { L"General Sparks (Layer 1)", 0x2aae70, 0x2aaeb0 },
        { L"Iron Maiden Pillar", 0x2ab050, 0x2ab090 },
        { L"Iron Maiden 1/16", 0x2ab940, 0x2ab980  },
        { L"Iron Maiden 2/16", 0x2abf50, 0x2abf90 },
        { L"Iron Maiden 3/16", 0x2ac600, 0x2ac640 },
        { L"Iron Maiden 4/16", 0x2accc0, 0x2acd00 },
        { L"Iron Maiden 5/16", 0x2ad450, 0x2ad490 },
        { L"Iron Maiden 6/16", 0x2ade50, 0x2ade90 },
        { L"Iron Maiden 7/16", 0x2ae850, 0x2ae890 },
        { L"Iron Maiden 8/16", 0x2af300, 0x2af340 },
        { L"Iron Maiden 9/16", 0x2afe70, 0x2afeb0 },
        { L"Iron Maiden 10/16", 0x2b0760, 0x2b07a0 },
        { L"Iron Maiden 11/16", 0x2b0ed0, 0x2b0f10 },
        { L"Iron Maiden 12/16", 0x2b1730, 0x2b1770 },
        { L"Iron Maiden 13/16", 0x2b1f30, 0x2b1f70 },
        { L"Iron Maiden 14/16", 0x2b27e0, 0x2b2820 },
        { L"Iron Maiden 15/16", 0x2b3020, 0x2b3060 },
        { L"Iron Maiden 16/16", 0x2b38f0, 0x2b3930 },
        { L"General Sparks 1/2 (Layer 2)", 0x2b4070, 0x2b40b0 },
        { L"General Sparks 2/2 (Layer 2)", 0x2b4a40, 0x2b4a80 },
        { L"Lust Shaker Trials", 0x2b51b0, 0x2b51f0 },
        { L"Tandem Top", 0x2baed0, 0x2baf10 },
        { L"Tandem Top Particles 1/3", 0x2c4760, 0x2c47a0 },
        { L"Tandem Top Particles 2/3", 0x2c5d40, 0x2c5d80 },
        { L"Tandem Top Particles 3/3", 0x2c7630, 0x2c7670  },
        { L"FB Pretty Maze", 0x2c7da0, 0x2c7de0 },
        { L"Winger Trial", 0x2cb660, 0x2cb6a0 },
        { L"Secret Garden", 0x2cbdd0, 0x2cbe10 },
        { L"Silent Force 1/6", 0x2d5450, 0x2d5490 },
        { L"Silent Force 2/6", 0x2d54f0, 0x2d5530 },
        { L"Silent Force 3/6", 0x2d55c0, 0x2d5600 },
        { L"Silent Force 4/6", 0x2d56c0, 0x2d5700 },
        { L"Silent Force 5/6", 0x2d57d0, 0x2d5810 },
        { L"Silent Force 6/6", 0x2d59d0, 0x2d5a10 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_FR_EXTRAS = // Order-Sol
{
    L"Extras",
    {
        //General
        { L"General Sparks", 0x4d6030, 0x4d6070, indexGGXXSprites_ACR_OrderSol, 0x0a, &pairNext, &effects_AdditiveBlend },
        { L"Charge/Storm Viper Fire (1/7)", 0x494030, 0x494070, indexGGXXSprites_ACR_OrderSol, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Charge/Storm Viper Fire (2/7)", 0x494960, 0x4949a0, indexGGXXSprites_ACR_OrderSol, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Charge/Storm Viper Fire (3/7)", 0x494f00, 0x494f40, indexGGXXSprites_ACR_OrderSol, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Charge/Storm Viper Fire (4/7)", 0x4957e0, 0x495820, indexGGXXSprites_ACR_OrderSol, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Charge/Storm Viper Fire (5/7)", 0x496270, 0x4962b0, indexGGXXSprites_ACR_OrderSol, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Charge/Storm Viper Fire (6/7)", 0x496bf0, 0x496c30, indexGGXXSprites_ACR_OrderSol, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Charge/Storm Viper Fire (7/7)", 0x497550, 0x497590, indexGGXXSprites_ACR_OrderSol, 0x06, nullptr, &effects_AdditiveBlend },

        //Specials
        { L"Blockhead Buster (1/3)", 0x541c10, 0x541c50, indexGGXXSprites_ACR_OrderSol, 0x04, nullptr, &effects_AdditiveBlend },
        { L"Blockhead Buster (2/3)", 0x54b7a0, 0x54b7e0, indexGGXXSprites_ACR_OrderSol, 0x04, nullptr, &effects_AdditiveBlend },
        { L"Blockhead Buster (3/3)", 0x555a20, 0x555a60, indexGGXXSprites_ACR_OrderSol, 0x04, nullptr, &effects_AdditiveBlend },

        { L"Gun Blaze", 0x47d0e0, 0x47d120, indexGGXXSprites_ACR_OrderSol, 0x0b, &pairNext, &effects_AdditiveBlend },
        { L"Gun Blaze Trails", 0x485680, 0x4856c0, indexGGXXSprites_ACR_OrderSol, 0x0c, &pairPrevious, &effects_AdditiveBlend },

        { L"Storm Viper (1/2)", 0x472740, 0x472780, indexGGXXSprites_ACR_OrderSol, 0x13, nullptr, &effects_AdditiveBlend },
        { L"Storm Viper (2/2)", 0x47bdf0, 0x47be30, indexGGXXSprites_ACR_OrderSol, 0x13, nullptr, &effects_AdditiveBlend },

        { L"Bandit Revolver Prototype (Lvl 2) (1/2)", 0x4df610, 0x4df650, indexGGXXSprites_ACR_OrderSol, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Bandit Revolver Prototype (Lvl 2) (2/2)", 0x4ea790, 0x4ea7d0, indexGGXXSprites_ACR_OrderSol, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Bandit Revolver Prototype (Lvl 3) (1/2)", 0x485fd0, 0x486010, indexGGXXSprites_ACR_OrderSol, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Bandit Revolver Prototype (Lvl 3) (2/2)", 0x48eed0, 0x48ef10, indexGGXXSprites_ACR_OrderSol, 0x03, nullptr, &effects_AdditiveBlend },

        { L"Charge Burst (1/8)", 0x505e40, 0x505e80, indexGGXXSprites_ACR_OrderSol, 0x05, nullptr, &effects_AdditiveBlend },
        { L"Charge Burst (2/8)", 0x5086d0, 0x508710, indexGGXXSprites_ACR_OrderSol, 0x05, nullptr, &effects_AdditiveBlend },
        { L"Charge Burst (3/8)", 0x50a5a0, 0x50a5e0, indexGGXXSprites_ACR_OrderSol, 0x05, nullptr, &effects_AdditiveBlend },
        { L"Charge Burst (4/8)", 0x50b3c0, 0x50b400, indexGGXXSprites_ACR_OrderSol, 0x05, nullptr, &effects_AdditiveBlend },
        { L"Charge Burst (5/8)", 0x50e4b0, 0x50e4f0, indexGGXXSprites_ACR_OrderSol, 0x05, nullptr, &effects_AdditiveBlend },
        { L"Charge Burst (6/8)", 0x511ea0, 0x511ee0, indexGGXXSprites_ACR_OrderSol, 0x05, nullptr, &effects_AdditiveBlend },
        { L"Charge Burst (7/8)", 0x515000, 0x515040, indexGGXXSprites_ACR_OrderSol, 0x05, nullptr, &effects_AdditiveBlend },
        { L"Charge Burst (8/8)", 0x517a70, 0x517ab0, indexGGXXSprites_ACR_OrderSol, 0x05, nullptr, &effects_AdditiveBlend },

        { L"Action Charge (1/2)", 0x519b80, 0x519bc0, indexGGXXSprites_ACR_OrderSol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Action Charge (2/2)", 0x51fe00, 0x51fe40, indexGGXXSprites_ACR_OrderSol, 0x01, nullptr, &effects_AdditiveBlend },

        //Force Breaks
        { L"Fafnir (1/3)", 0x521170, 0x5211b0, indexGGXXSprites_ACR_OrderSol, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Fafnir (2/3)", 0x52c0b0, 0x52c0f0, indexGGXXSprites_ACR_OrderSol, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Fafnir (3/3)", 0x5392c0, 0x539300, indexGGXXSprites_ACR_OrderSol, 0x09, nullptr, &effects_AdditiveBlend },

        //Overdrives
        { L"Tyrant Rave ver. Omega (1/4)", 0x448480, 0x4484c0, indexGGXXSprites_ACR_OrderSol, 0x14, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave ver. Omega (2/4)", 0x455f00, 0x455f40, indexGGXXSprites_ACR_OrderSol, 0x14, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave ver. Omega (3/4)", 0x460ec0, 0x460f00, indexGGXXSprites_ACR_OrderSol, 0x14, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave ver. Omega (4/4)", 0x46d660, 0x46d6a0, indexGGXXSprites_ACR_OrderSol, 0x14, nullptr, &effects_AdditiveBlend },

        { L"Savage Fang Level (Lvl 1/2) (1/4)", 0x4f1560, 0x4f15a0, indexGGXXSprites_ACR_OrderSol, 0x11, &pairNext4, &effects_AdditiveBlend },
        { L"Savage Fang Level (Lvl 1/2) (2/4)", 0x4f8c00, 0x4f8c40, indexGGXXSprites_ACR_OrderSol, 0x11, &pairNext3, &effects_AdditiveBlend },
        { L"Savage Fang Level (Lvl 1/2) (3/4)", 0x4fc5b0, 0x4fc5f0, indexGGXXSprites_ACR_OrderSol, 0x11, &pairNext2, &effects_AdditiveBlend },
        { L"Savage Fang Level (Lvl 1/2) (4/4)", 0x4ffd50, 0x4ffd90, indexGGXXSprites_ACR_OrderSol, 0x11, &pairNext, &effects_AdditiveBlend },
        { L"Savage Fang Level (Lvl 2) Trail", 0x4428d0, 0x442910, indexGGXXSprites_ACR_OrderSol, 0x12, &pairPrevious4, &effects_AdditiveBlend },

        //Instant Kill
        { L"Dragon Install: Sakkai Entry", 0x4d1590, 0x4d15d0, indexGGXXSprites_ACR_OrderSol, 0x07, nullptr, &effects_AdditiveBlend },

        //Rock It Level 3 is shared with most of the effect used for Savage Fang Level 3 AND Dragon Install: Sakkai
        //This makes displaying it complicated, which is why its out of order from the rest of the specials

        { L"Rock It (Lvl 1) (1/2)", 0x497a10, 0x497a50, indexGGXXSprites_ACR_OrderSol, 0x0d, nullptr, &effects_AdditiveBlend },
        { L"Rock It (Lvl 1) (2/2)", 0x49f990, 0x49f9d0, indexGGXXSprites_ACR_OrderSol, 0x0d, nullptr, &effects_AdditiveBlend },
        { L"Rock It (Lvl 3)", 0x4d6ce0, 0x4d6d20, indexGGXXSprites_ACR_OrderSol, 0x0e, nullptr, &effects_AdditiveBlend },

        { L"Rock It (Lvl 3)/Savage Fang (Lvl 3) (1/2)", 0x4c8f40, 0x4c8f80, indexGGXXSprites_ACR_OrderSol, 0x0f, &pairNext2AndNext4, &effects_AdditiveBlend },
        { L"Rock It (Lvl 3)/Savage Fang (Lvl 3) (2/2)", 0x4cb670, 0x4cb6b0, indexGGXXSprites_ACR_OrderSol, 0x0f, &pairNext2AndNext3, &effects_AdditiveBlend },
        { L"Rock It (Lvl 3)/Savage Fang Pillars (1/2)", 0x4cd5c0, 0x4cd600, indexGGXXSprites_ACR_OrderSol, 0x10, &pairPrevious2AndNext2, &effects_AdditiveBlend },
        { L"Rock It (Lvl 3)/Savage Fang Pillars (2/2)", 0x4cf960, 0x4cf9a0, indexGGXXSprites_ACR_OrderSol, 0x10, &pairPrevious2AndNext2, &effects_AdditiveBlend },

        { L"DI: Sakkai Fire/Savage Fang (Lvl 3) (1/5)", 0x4a17f0, 0x4a1830, indexGGXXSprites_ACR_OrderSol, 0x08, nullptr, &effects_AdditiveBlend },
        { L"DI: Sakkai Fire/Savage Fang (Lvl 3) (2/5)", 0x4acd00, 0x4acd40, indexGGXXSprites_ACR_OrderSol, 0x08, nullptr, &effects_AdditiveBlend },
        { L"DI: Sakkai Fire/Savage Fang (Lvl 3) (3/5)", 0x4b5ef0, 0x4b5f30, indexGGXXSprites_ACR_OrderSol, 0x08, nullptr, &effects_AdditiveBlend },
        { L"DI: Sakkai Fire/Savage Fang (Lvl 3) (4/5)", 0x4bf750, 0x4bf790, indexGGXXSprites_ACR_OrderSol, 0x08, nullptr, &effects_AdditiveBlend },
        { L"DI: Sakkai Fire/Savage Fang (Lvl 3) (5/5)", 0x4c6080, 0x4c60c0, indexGGXXSprites_ACR_OrderSol, 0x08, nullptr, &effects_AdditiveBlend },

        //Unused/Unknown
        //{ L"Meter Numbers (Unused)", 0x55c4b0, 0x55c4f0 },
        //{ L"Meter (Unused)", 0x55c680, 0x55c6c0 },
        //{ L"Meter Charge (Unused)", 0x55c9f0, 0x55ca30 },
        //{ L"Meter Charge (Unused)", 0x55cab0, 0x55caf0 },
        //{ L"Meter (Unused)", 0x55cbc0, 0x55cc00 },
        //{ L"Weapon (Unused)", 0x55cce0, 0x55cd20 },
        //{ L"6P (Unused)", 0x55d1e0, 0x55d220 },
        //{ L"Unknown 1", 0x518c90, 0x518cd0 },
        //{ L"Unknown 2", 0x519800, 0x519840 },
        //{ L"Unknown 3", 0x519920, 0x519960 },
        //{ L"Unknown 4", 0x519a50, 0x519a90 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_PO_EXTRAS = //Potemkin
{
    L"Extras",
    {
        //Specials
        { L"Whiffed HK/Ground Impacts (1/2)", 0x49e4b0, 0x49e4f0, indexGGXXSprites_ACR_Potemkin, 0x0c, &pairNext2 }, //Paired with Pot Buster 1
        { L"Whiffed HK/Ground Impacts (2/2)", 0x4a0210, 0x4a0250, indexGGXXSprites_ACR_Potemkin, 0x0c, &pairNext2}, //Paired with Pot Buster 2

        { L"Potemkin Buster (1/2)", 0x4996e0, 0x499720, indexGGXXSprites_ACR_Potemkin, 0x0b, &pairPrevious2, &effects_AdditiveBlend },
        { L"Potemkin Buster (2/2)", 0x49bf90, 0x49bfd0, indexGGXXSprites_ACR_Potemkin, 0x0b, &pairPrevious2, &effects_AdditiveBlend },

        { L"F.D.B./Giganter Projectile (1/3)", 0x4b69a0, 0x4b69e0, indexGGXXSprites_ACR_Potemkin, 0x01 },
        { L"F.D.B./Giganter Projectile (2/3)", 0x4be9d0, 0x4bea10, indexGGXXSprites_ACR_Potemkin, 0x01 },
        { L"F.D.B./Giganter Projectile (3/3)", 0x4c05a0, 0x4c05e0, indexGGXXSprites_ACR_Potemkin, 0x01 },

        { L"Heat Knuckle (1/4)", 0x4dba50, 0x4dba90, indexGGXXSprites_ACR_Potemkin, 0x07, &pairNext4 },
        { L"Heat Knuckle (2/4)", 0x4dc490, 0x4dc4d0, indexGGXXSprites_ACR_Potemkin, 0x07, &pairNext3 },
        { L"Heat Knuckle (3/4)", 0x4d9ac0, 0x4d9b00, indexGGXXSprites_ACR_Potemkin, 0x07, &pairNext2 },
        { L"Heat Knuckle (4/4)", 0x4de390, 0x4de3d0, indexGGXXSprites_ACR_Potemkin, 0x07, &pairNext },
        { L"Heat Knuckle - Final Explosion", 0x4d23c0, 0x4d2400, indexGGXXSprites_ACR_Potemkin, 0x08, &pairPrevious4, &effects_AdditiveBlend },
        { L"Heat Extend - Bullets", 0x4d22f0, 0x4d2330, indexGGXXSprites_ACR_Potemkin, 0x05 },
        { L"Heat Extend - Hearts (1/2)", 0x4a0500, 0x4a0540, indexGGXXSprites_ACR_Potemkin, 0x06, nullptr, &effects_AdditiveBlend },
        { L"Heat Extend - Hearts (2/2)", 0x4a10c0, 0x4a1100, indexGGXXSprites_ACR_Potemkin, 0x06, nullptr, &effects_AdditiveBlend },

        //Overdrives
        { L"Giganter (1/2)", 0x4a2700, 0x4a2740, indexGGXXSprites_ACR_Potemkin, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Giganter (2/2)", 0x4a66b0, 0x4a66f0, indexGGXXSprites_ACR_Potemkin, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Gigantic Bullet Close Fist (1/2)", 0x4ace00, 0x4ace40, indexGGXXSprites_ACR_Potemkin, 0x03, &pairNext2, &effects_AdditiveBlend },
        { L"Gigantic Bullet Close Fist (2/2)", 0x4af6b0, 0x4af6f0, indexGGXXSprites_ACR_Potemkin, 0x03, &pairNext2, &effects_AdditiveBlend },
        { L"Gigantic Bullet Far Fist (1/2)", 0x4b1bd0, 0x4b1c10, indexGGXXSprites_ACR_Potemkin, 0x04, &pairPrevious2, &effects_AdditiveBlend },
        { L"Gigantic Bullet Far Fist (2/2)", 0x4b4480, 0x4b44c0, indexGGXXSprites_ACR_Potemkin, 0x04, &pairPrevious2, &effects_AdditiveBlend },

        //Instant Kill
        { L"Magnum Opera (1/2)", 0x4c23e0, 0x4c2420, indexGGXXSprites_ACR_Potemkin, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Magnum Opera (2/2)", 0x4cc8c0, 0x4cc900, indexGGXXSprites_ACR_Potemkin, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Magnum Opera - Heart (1/2)", 0x4c1bd0, 0x4c1c10, indexGGXXSprites_ACR_Potemkin, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Magnum Opera - Heart (2/2)", 0x4c2110, 0x4c2150, indexGGXXSprites_ACR_Potemkin, 0x0a, nullptr, &effects_AdditiveBlend },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_RK_EXTRAS = //Robo-Ky
{
    L"Extras",
    {
        //General
        { L"Hit effects", 0x410090, 0x4100d0, indexGGXXSprites_ACR_RoboKy, 0x0D },
        { L"Explosions", 0x3af190, 0x3af1d0, indexGGXXSprites_ACR_RoboKy, 0x09 },
        { L"Projectile Trails (1/2)", 0x410220, 0x410260, indexGGXXSprites_ACR_RoboKy, 0x0E, &pairNextAndNext },
        { L"Projectile Trails (2/2)", 0x401a30, 0x401a70, indexGGXXSprites_ACR_RoboKy, 0x0F, nullptr, &effects_AdditiveBlend },
        { L"Don't Get Coc-KY!", 0x3ed990, 0x3eda10, indexGGXXSprites_ACR_RoboKy, 0x08 },

        { L"Winpose Exhaust (1/3)", 0x408f00, 0x408f40, indexGGXXSprites_ACR_RoboKy, 0x20, nullptr, &effects_AdditiveBlend },
        { L"Winpose Exhaust (2/3)", 0x409480, 0x4094c0, indexGGXXSprites_ACR_RoboKy, 0x20, nullptr, &effects_AdditiveBlend },
        { L"Winpose Exhaust (3/3)", 0x409ab0, 0x409af0, indexGGXXSprites_ACR_RoboKy, 0x20, nullptr, &effects_AdditiveBlend },

        //Normals
        { L"6P (1/3)", 0x3c5880, 0x3c58c0, indexGGXXSprites_ACR_RoboKy, 0x06, &pairNext3, &effects_AdditiveBlend },
        { L"6P (2/3)", 0x3c5f00, 0x3c5f40, indexGGXXSprites_ACR_RoboKy, 0x06, &pairNext2, &effects_AdditiveBlend },
        { L"6P (3/3)", 0x3c7c00, 0x3c7c40, indexGGXXSprites_ACR_RoboKy, 0x06, &pairNext, &effects_AdditiveBlend },
        { L"6P (Recovery, 1/5)", 0x3c8c10, 0x3c8c50, indexGGXXSprites_ACR_RoboKy, 0x07 },
        { L"6P (Recovery, 2/5)", 0x3c9100, 0x3c9140, indexGGXXSprites_ACR_RoboKy, 0x07 },
        { L"6P (Recovery, 3/5)", 0x3c95a0, 0x3c95e0, indexGGXXSprites_ACR_RoboKy, 0x07 },
        { L"6P (Recovery, 4/5)", 0x3c9980, 0x3c99c0, indexGGXXSprites_ACR_RoboKy, 0x07 },
        { L"6P (Recovery, 5/5)", 0x3c9cc0, 0x3c9d00, indexGGXXSprites_ACR_RoboKy, 0x07 },

        { L"6H Shared Exhaust (1/7)", 0x3c9f70, 0x3c9fb0, indexGGXXSprites_ACR_RoboKy, 0x05, &pairNext7 }, //Preview shared + level 1
        { L"6H Shared Exhaust (2/7)", 0x3ca290, 0x3ca2d0, indexGGXXSprites_ACR_RoboKy, 0x05, &pairNext13 }, //Preview shared + level 2
        { L"6H Shared Exhaust (3/7)", 0x3ca7b0, 0x3ca7f0, indexGGXXSprites_ACR_RoboKy, 0x05, &pairNext21 }, //Preview shared + level 3
        { L"6H Shared Exhaust (4/7)", 0x3cace0, 0x3cad20, indexGGXXSprites_ACR_RoboKy, 0x05 },
        { L"6H Shared Exhaust (5/7)", 0x3cb2e0, 0x3cb320, indexGGXXSprites_ACR_RoboKy, 0x05 },
        { L"6H Shared Exhaust (6/7)", 0x3cb870, 0x3cb8b0, indexGGXXSprites_ACR_RoboKy, 0x05 },
        { L"6H Shared Exhaust (7/7)", 0x3cbe00, 0x3cbe40, indexGGXXSprites_ACR_RoboKy, 0x05 },

        { L"6H Lv1 (1/7)", 0x3cc340, 0x3cc380, indexGGXXSprites_ACR_RoboKy, 0x02 },
        { L"6H Lv1 (2/7)", 0x3cc600, 0x3cc640, indexGGXXSprites_ACR_RoboKy, 0x02 },
        { L"6H Lv1 (3/7)", 0x3cc950, 0x3cc990, indexGGXXSprites_ACR_RoboKy, 0x02 },
        { L"6H Lv1 (4/7)", 0x3ccd30, 0x3ccd70, indexGGXXSprites_ACR_RoboKy, 0x02 },
        { L"6H Lv1 (5/7)", 0x3cd140, 0x3cd180, indexGGXXSprites_ACR_RoboKy, 0x02 },
        { L"6H Lv1 (6/7)", 0x3cd520, 0x3cd560, indexGGXXSprites_ACR_RoboKy, 0x02 },
        { L"6H Lv1 (7/7)", 0x3cd890, 0x3cd8d0, indexGGXXSprites_ACR_RoboKy, 0x02 },

        { L"6H Lv2 (1/9)", 0x3cdbf0, 0x3cdd70, indexGGXXSprites_ACR_RoboKy, 0x03 },
        { L"6H Lv2 (2/9)", 0x3cf110, 0x3cf290, indexGGXXSprites_ACR_RoboKy, 0x03 },
        { L"6H Lv2 (3/9)", 0x3d08e0, 0x3d0a60, indexGGXXSprites_ACR_RoboKy, 0x03 },
        { L"6H Lv2 (4/9)", 0x3d2a80, 0x3d2c00, indexGGXXSprites_ACR_RoboKy, 0x03 },
        { L"6H Lv2 (5/9)", 0x3d4e50, 0x3d4fd0, indexGGXXSprites_ACR_RoboKy, 0x03 },
        { L"6H Lv2 (6/9)", 0x3d7590, 0x3d7710, indexGGXXSprites_ACR_RoboKy, 0x03 },
        { L"6H Lv2 (7/9)", 0x3d9e10, 0x3d9f90, indexGGXXSprites_ACR_RoboKy, 0x03 },
        { L"6H Lv2 (8/9)", 0x3dc7b0, 0x3dc930, indexGGXXSprites_ACR_RoboKy, 0x03 },
        { L"6H Lv2 (9/9)", 0x3df1c0, 0x3df340, indexGGXXSprites_ACR_RoboKy, 0x03 },

        { L"6H Lv3 (1/8)", 0x3e4ac0, 0x3e4b00, indexGGXXSprites_ACR_RoboKy, 0x04 },
        { L"6H Lv3 (2/8)", 0x3e5a70, 0x3e5ab0, indexGGXXSprites_ACR_RoboKy, 0x04 },
        { L"6H Lv3 (3/8)", 0x3e6da0, 0x3e6de0, indexGGXXSprites_ACR_RoboKy, 0x04 },
        { L"6H Lv3 (4/8)", 0x3e8070, 0x3e80b0, indexGGXXSprites_ACR_RoboKy, 0x04 },
        { L"6H Lv3 (5/8)", 0x3e9210, 0x3e9250, indexGGXXSprites_ACR_RoboKy, 0x04 },
        { L"6H Lv3 (6/8)", 0x3ea200, 0x3ea240, indexGGXXSprites_ACR_RoboKy, 0x04 },
        { L"6H Lv3 (7/8)", 0x3eb100, 0x3eb140, indexGGXXSprites_ACR_RoboKy, 0x04 },
        { L"6H Lv3 (8/8)", 0x3ec050, 0x3ec090, indexGGXXSprites_ACR_RoboKy, 0x04 },

        { L"2S (1/5)", 0x3ed0d0, 0x3ed110, indexGGXXSprites_ACR_RoboKy, 0x01 },
        { L"2S (2/5)", 0x3ed410, 0x3ed450, indexGGXXSprites_ACR_RoboKy, 0x01 },
        { L"2S (3/5)", 0x3ed5a0, 0x3ed5e0, indexGGXXSprites_ACR_RoboKy, 0x01 },
        { L"2S (4/5)", 0x3ed740, 0x3ed780, indexGGXXSprites_ACR_RoboKy, 0x01 },
        { L"2S (5/5)", 0x3ed8a0, 0x3ed8e0, indexGGXXSprites_ACR_RoboKy, 0x01 },

        //Specials
        { L"Gimmic-KY Mat", 0x3c1e10, 0x3c1e90, indexGGXXSprites_ACR_RoboKy, 0x0B, &pairNextAndNext6 },
        { L"Gimmic-KY Glow (1/5)", 0x40c250, 0x40c2d0, indexGGXXSprites_ACR_RoboKy, 0x0A },
        { L"Gimmic-KY Glow (2/5)", 0x40ce40, 0x40ceC0, indexGGXXSprites_ACR_RoboKy, 0x0A },
        { L"Gimmic-KY Glow (3/5)", 0x40da10, 0x40da90, indexGGXXSprites_ACR_RoboKy, 0x0A },
        { L"Gimmic-KY Glow (4/5)", 0x40e570, 0x40e5f0, indexGGXXSprites_ACR_RoboKy, 0x0A },
        { L"Gimmic-KY Glow (5/5)", 0x40f1b0, 0x40f230, indexGGXXSprites_ACR_RoboKy, 0x0A },
        { L"Gimmic-KY Static", 0x40fe40, 0x40fe80, indexGGXXSprites_ACR_RoboKy, 0x0C },

        { L"S-KY-line (Dots, 1/4)", 0x4034a0, 0x4034e0, indexGGXXSprites_ACR_RoboKy, 0x1C, &pairNext4, &effects_AdditiveBlend },
        { L"S-KY-line (Dots, 2/4)", 0x4037d0, 0x403810, indexGGXXSprites_ACR_RoboKy, 0x1C, &pairNext3, &effects_AdditiveBlend },
        { L"S-KY-line (Dots, 3/4)", 0x403b20, 0x403b60, indexGGXXSprites_ACR_RoboKy, 0x1C, &pairNext2, &effects_AdditiveBlend },
        { L"S-KY-line (Dots, 4/4)", 0x4040a0, 0x4040e0, indexGGXXSprites_ACR_RoboKy, 0x1C, &pairNext, &effects_AdditiveBlend },
        { L"S-KY-line (Lines, 1/5)", 0x4041d0, 0x404210, indexGGXXSprites_ACR_RoboKy, 0x1D, nullptr, &effects_AdditiveBlend },
        { L"S-KY-line (Lines, 2/5)", 0x4051a0, 0x4051e0, indexGGXXSprites_ACR_RoboKy, 0x1D, nullptr, &effects_AdditiveBlend },
        { L"S-KY-line (Lines, 3/5)", 0x4061d0, 0x406210, indexGGXXSprites_ACR_RoboKy, 0x1D, nullptr, &effects_AdditiveBlend },
        { L"S-KY-line (Lines, 4/5)", 0x407160, 0x4071a0, indexGGXXSprites_ACR_RoboKy, 0x1D, nullptr, &effects_AdditiveBlend },
        { L"S-KY-line (Lines, 5/5)", 0x408050, 0x408090, indexGGXXSprites_ACR_RoboKy, 0x1D, nullptr, &effects_AdditiveBlend },

        //Overdrives
        { L"What's Useless Will Always Be So (Text)", 0x410ed0, 0x410f10, indexGGXXSprites_ACR_RoboKy, 0x1F, &pairNext },
        { L"What's Useless Will Always Be So (Headbutt)", 0x410a70, 0x410ab0, indexGGXXSprites_ACR_RoboKy, 0x1E, nullptr, &effects_AdditiveBlend },

        { L"Ris-KY Lovers Activation (1/3)", 0x3fe8a0, 0x3fe8e0, indexGGXXSprites_ACR_RoboKy, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Activation (2/3)", 0x3ff9f0, 0x3ffa30, indexGGXXSprites_ACR_RoboKy, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Activation (3/3)", 0x400a80, 0x400ac0, indexGGXXSprites_ACR_RoboKy, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Timer 9", 0x416cb0, 0x416d30, indexGGXXSprites_ACR_RoboKy, 0x1B },
        { L"Ris-KY Lovers Timer 8", 0x416190, 0x416210, indexGGXXSprites_ACR_RoboKy, 0x1A },
        { L"Ris-KY Lovers Timer 7", 0x415980, 0x415a00, indexGGXXSprites_ACR_RoboKy, 0x19 },
        { L"Ris-KY Lovers Timer 6", 0x414ee0, 0x414f60, indexGGXXSprites_ACR_RoboKy, 0x18 },
        { L"Ris-KY Lovers Timer 5", 0x4144d0, 0x414550, indexGGXXSprites_ACR_RoboKy, 0x17 },
        { L"Ris-KY Lovers Timer 4", 0x413b80, 0x413c00, indexGGXXSprites_ACR_RoboKy, 0x16 },
        { L"Ris-KY Lovers Timer 3", 0x413110, 0x413190, indexGGXXSprites_ACR_RoboKy, 0x15 },
        { L"Ris-KY Lovers Timer 2", 0x4127f0, 0x412870, indexGGXXSprites_ACR_RoboKy, 0x14 },
        { L"Ris-KY Lovers Timer 1", 0x412090, 0x412110, indexGGXXSprites_ACR_RoboKy, 0x13 },
        { L"Ris-KY Lovers Timer 0", 0x411630, 0x4116b0, indexGGXXSprites_ACR_RoboKy, 0x12 },
        { L"Ris-KY Lovers Explosion (1/10)", 0x3ef8f0, 0x3ef930, indexGGXXSprites_ACR_RoboKy, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Explosion (2/10)", 0x3f1130, 0x3f1170, indexGGXXSprites_ACR_RoboKy, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Explosion (3/10)", 0x3f2a20, 0x3f2a60, indexGGXXSprites_ACR_RoboKy, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Explosion (4/10)", 0x3f4130, 0x3f4170, indexGGXXSprites_ACR_RoboKy, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Explosion (5/10)", 0x3f59a0, 0x3f59e0, indexGGXXSprites_ACR_RoboKy, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Explosion (6/10)", 0x3f7170, 0x3f71b0, indexGGXXSprites_ACR_RoboKy, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Explosion (7/10)", 0x3f8a30, 0x3f8a70, indexGGXXSprites_ACR_RoboKy, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Explosion (8/10)", 0x3fa1c0, 0x3fa200, indexGGXXSprites_ACR_RoboKy, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Explosion (9/10)", 0x3fb940, 0x3fb980, indexGGXXSprites_ACR_RoboKy, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Ris-KY Lovers Explosion (10/10)", 0x3fd0e0, 0x3fd120, indexGGXXSprites_ACR_RoboKy, 0x11, nullptr, &effects_AdditiveBlend },

        //Unused/Unknown
        { L"Unused? (1/16)", 0x3b6890, 0x3b6c90 },
        { L"Unused? (2/16)", 0x3babf0, 0x3baff0 },
        { L"Unused? (3/16)", 0x3bee40, 0x3bf240 },
        { L"Unused? (4/16)", 0x41b730, 0x41bb30 },
        { L"Unused? (5/16)", 0x41bba0, 0x41bfa0 },
        { L"Unused? (6/16)", 0x41c3a0, 0x41c7a0 },
        { L"Unused? (7/16)", 0x424dd0, 0x4251d0 },
        { L"Unused? (8/16)", 0x425cc0, 0x4260c0 },
        { L"Unused? (9/16)", 0x426c20, 0x427020 },
        { L"Unused? (10/16)", 0x402260, 0x4022a0 },
        { L"Unused? (11/16)", 0x402440, 0x402480 },
        { L"Unused? (12/16)", 0x402830, 0x402870 },
        { L"Unused? (13/16)", 0x402c70, 0x402cb0 },
        { L"Unused? (14/16)", 0x403090, 0x4030d0 },
        { L"Unused? (15/16)", 0x40b850, 0x40bc50 },
        { L"Unused? (16/16)", 0x409f90, 0x409fd0 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_SY_EXTRAS = //Slayer
{
    L"Extras",
    {
        //General
        { L"Coffin Portal Intro", 0x43ec30, 0x43ec70, indexGGXXSprites_ACR_Slayer, 0x0a },
        { L"Sharon Intro Corpse", 0x46bf50, 0x46bf90, indexGGXXSprites_ACR_Slayer, 0x15 },
        { L"Sharon Intro Blood (1/5)", 0x465a60, 0x465aa0, indexGGXXSprites_ACR_Slayer, 0x09 },
        { L"Sharon Intro Blood (2/5)", 0x465c60, 0x465ca0, indexGGXXSprites_ACR_Slayer, 0x09 },
        { L"Sharon Intro Blood (3/5)", 0x465e80, 0x465ec0, indexGGXXSprites_ACR_Slayer, 0x09 },
        { L"Sharon Intro Blood (4/5)", 0x466060, 0x4660a0, indexGGXXSprites_ACR_Slayer, 0x09 },
        { L"Sharon Intro Blood (5/5)", 0x4661f0, 0x466230, indexGGXXSprites_ACR_Slayer, 0x09 },

        { L"Forwards Jump (1/2)", 0x3c5970, 0x3c59b0, indexGGXXSprites_ACR_Slayer, 0x0f, nullptr, &effects_AdditiveBlend },
        { L"Forwards Jump (2/2)", 0x3c7260, 0x3c72a0, indexGGXXSprites_ACR_Slayer, 0x0f, nullptr, &effects_AdditiveBlend },
        { L"Backwards Jump (1/2)", 0x3c8570, 0x3c85b0, indexGGXXSprites_ACR_Slayer, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Backwards Jump (2/2)", 0x3c9d30, 0x3c9d70, indexGGXXSprites_ACR_Slayer, 0x08, nullptr, &effects_AdditiveBlend },

        //Normals
        { L"2H (1/27)", 0x3a53d0, 0x3a5410, indexGGXXSprites_ACR_Slayer, 0x01, nullptr, &effects_AdditiveBlend },
        { L"2H (2/27)", 0x3a5990, 0x3a59d0, indexGGXXSprites_ACR_Slayer, 0x02, nullptr, &effects_AdditiveBlend },
        { L"2H (3/27)", 0x3a63b0, 0x3a63f0, indexGGXXSprites_ACR_Slayer, 0x03, nullptr, &effects_AdditiveBlend },
        { L"2H (4/27)", 0x3a6e40, 0x3a6e80, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (5/27)", 0x3a8890, 0x3a88d0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (6/27)", 0x3a9c80, 0x3a9cc0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (7/27)", 0x3aaf90, 0x3aafd0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (8/27)", 0x3ac5a0, 0x3ac5e0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (9/27)", 0x3ada90, 0x3adad0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (10/27)", 0x3af030, 0x3af070, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (11/27)", 0x3b0310, 0x3b0350, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (12/27)", 0x3b1690, 0x3b16d0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (13/27)", 0x3b2a50, 0x3b2a90, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (14/27)", 0x3b3be0, 0x3b3c20, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (15/27)", 0x3b4cb0, 0x3b4cf0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (16/27)", 0x3b5b90, 0x3b5bd0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (17/27)", 0x3b6b70, 0x3b6bb0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (18/27)", 0x3b7bb0, 0x3b7bf0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (19/27)", 0x3b85d0, 0x3b8610, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (20/27)", 0x3b9180, 0x3b91c0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (21/27)", 0x3b9d90, 0x3b9dd0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (22/27)", 0x3bac30, 0x3bac70, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (23/27)", 0x3bb8f0, 0x3bb930, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (24/27)", 0x3bc330, 0x3bc370, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (25/27)", 0x3bcaa0, 0x3bcae0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (26/27)", 0x3bd280, 0x3bd2c0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },
        { L"2H (27/27)", 0x3bd680, 0x3bd6c0, indexGGXXSprites_ACR_Slayer, 0x04, nullptr, &effects_AdditiveBlend },

        { L"j.D (1/3)", 0x3d5a00, 0x3d5a40, indexGGXXSprites_ACR_Slayer, 0x11 },
        { L"j.D (2/3)", 0x3d6c40, 0x3d6c80, indexGGXXSprites_ACR_Slayer, 0x11 },
        { L"j.D (3/3)", 0x3d7fd0, 0x3d8010, indexGGXXSprites_ACR_Slayer, 0x11 },

        //Specials
        { L"Mappa Hunch/Big Bang Upper (1/3)", 0x3d8720, 0x3d8760, indexGGXXSprites_ACR_Slayer, 0x12, &pairNext3 },
        { L"Mappa Hunch/Big Bang Upper (2/3)", 0x3db0d0, 0x3db110, indexGGXXSprites_ACR_Slayer, 0x12, &pairNext2 },
        { L"Mappa Hunch/Big Bang Upper (3/3)", 0x3dc3f0, 0x3dc430, indexGGXXSprites_ACR_Slayer, 0x12, &pairNext },
        { L"Mappa/BBU Particles (1/4)", 0x3dcaf0, 0x3dcb30, indexGGXXSprites_ACR_Slayer, 0x13, nullptr, &effects_AdditiveBlend },
        { L"Mappa/BBU Particles (2/4)", 0x3dcc70, 0x3dccb0, indexGGXXSprites_ACR_Slayer, 0x13, nullptr, &effects_AdditiveBlend },
        { L"Mappa/BBU Particles (3/4)", 0x3dcdf0, 0x3dce30, indexGGXXSprites_ACR_Slayer, 0x13, nullptr, &effects_AdditiveBlend },
        { L"Mappa/BBU Particles (4/4)", 0x3dcff0, 0x3dd030, indexGGXXSprites_ACR_Slayer, 0x13, nullptr, &effects_AdditiveBlend },

        { L"Pilebunker (1/9)", 0x3cb1a0, 0x3cb1e0, indexGGXXSprites_ACR_Slayer, 0x14 },
        { L"Pilebunker (2/9)", 0x3cb490, 0x3cb4d0, indexGGXXSprites_ACR_Slayer, 0x14 },
        { L"Pilebunker (3/9)", 0x3cc2a0, 0x3cc2e0, indexGGXXSprites_ACR_Slayer, 0x14 },
        { L"Pilebunker (4/9)", 0x3cd450, 0x3cd490, indexGGXXSprites_ACR_Slayer, 0x14 },
        { L"Pilebunker (5/9)", 0x3cecc0, 0x3ced00, indexGGXXSprites_ACR_Slayer, 0x14 },
        { L"Pilebunker (6/9)", 0x3d0c80, 0x3d0cc0, indexGGXXSprites_ACR_Slayer, 0x14 },
        { L"Pilebunker (7/9)", 0x3d2860, 0x3d28a0, indexGGXXSprites_ACR_Slayer, 0x14 },
        { L"Pilebunker (8/9)", 0x3d3d80, 0x3d3dc0, indexGGXXSprites_ACR_Slayer, 0x14 },
        { L"Pilebunker (9/9)", 0x3d4de0, 0x3d4e20, indexGGXXSprites_ACR_Slayer, 0x14 },

        { L"Crosswise Heel (1/2)", 0x3bda60, 0x3bdaa0, indexGGXXSprites_ACR_Slayer, 0x0b },
        { L"Crosswise Heel (2/2)", 0x3c2cb0, 0x3c2cf0, indexGGXXSprites_ACR_Slayer, 0x0b },

        { L"Under Pressure (1/2)", 0x3dd620, 0x3dd660, indexGGXXSprites_ACR_Slayer, 0x16 },
        { L"Under Pressure (2/2)", 0x3dece0, 0x3ded20, indexGGXXSprites_ACR_Slayer, 0x16 },

        { L"It's Late (1/2)", 0x3e00a0, 0x3e00e0, indexGGXXSprites_ACR_Slayer, 0x10 },
        { L"It's Late (2/2)", 0x3e64c0, 0x3e6500, indexGGXXSprites_ACR_Slayer, 0x10 },

        { L"Undertow (1/5)", 0x42f620, 0x42f660, indexGGXXSprites_ACR_Slayer, 0x17 },
        { L"Undertow (2/5)", 0x4120a0, 0x4120e0, indexGGXXSprites_ACR_Slayer, 0x18 },
        { L"Undertow (3/5)", 0x419010, 0x419050, indexGGXXSprites_ACR_Slayer, 0x19 },
        { L"Undertow (4/5)", 0x425110, 0x425150, indexGGXXSprites_ACR_Slayer, 0x1a },
        { L"Undertow (5/5)", 0x42b900, 0x42b940, indexGGXXSprites_ACR_Slayer, 0x1b },

        //Force Breaks

        //Overdrives
        { L"Dead On Time (1/9)", 0x3e8320, 0x3e8360, indexGGXXSprites_ACR_Slayer, 0x0c },
        { L"Dead On Time (2/9)", 0x3e8510, 0x3e8550, indexGGXXSprites_ACR_Slayer, 0x0c },
        { L"Dead On Time (3/9)", 0x3e8970, 0x3e89b0, indexGGXXSprites_ACR_Slayer, 0x0c },
        { L"Dead On Time (4/9)", 0x3ec550, 0x3ec590, indexGGXXSprites_ACR_Slayer, 0x0c },
        { L"Dead On Time (5/9)", 0x3f07e0, 0x3f0820, indexGGXXSprites_ACR_Slayer, 0x0c },
        { L"Dead On Time (6/9)", 0x3f3c20, 0x3f3c60, indexGGXXSprites_ACR_Slayer, 0x0c },
        { L"Dead On Time (7/9)", 0x3f7520, 0x3f7560, indexGGXXSprites_ACR_Slayer, 0x0c },
        { L"Dead On Time (8/9)", 0x3f7af0, 0x3f7b30, indexGGXXSprites_ACR_Slayer, 0x0c },
        { L"Dead On Time (9/9)", 0x3f7f60, 0x3f7fa0, indexGGXXSprites_ACR_Slayer, 0x0c },

        { L"Eternal Wings (1/6)", 0x3f8130, 0x3f8170, indexGGXXSprites_ACR_Slayer, 0x0d, &pairNext6 },
        { L"Eternal Wings (2/6)", 0x3f8a90, 0x3f8ad0, indexGGXXSprites_ACR_Slayer, 0x0d, &pairNext5 },
        { L"Eternal Wings (3/6)", 0x3fa1d0, 0x3fa210, indexGGXXSprites_ACR_Slayer, 0x0d, &pairNext4 },
        { L"Eternal Wings (4/6)", 0x3fffe0, 0x400020, indexGGXXSprites_ACR_Slayer, 0x0d, &pairNext3 },
        { L"Eternal Wings (5/6)", 0x4068e0, 0x406920, indexGGXXSprites_ACR_Slayer, 0x0d, &pairNext2 },
        { L"Eternal Wings (6/6)", 0x40b0f0, 0x40b130, indexGGXXSprites_ACR_Slayer, 0x0d, &pairNext },
        { L"Eternal Wings Rings (1/5)", 0x40c850, 0x40c890, indexGGXXSprites_ACR_Slayer, 0x0e, &pairPrevious },
        { L"Eternal Wings Rings (2/5)", 0x40caa0, 0x40cae0, indexGGXXSprites_ACR_Slayer, 0x0e, &pairPrevious2 },
        { L"Eternal Wings Rings (3/5)", 0x40d740, 0x40d780, indexGGXXSprites_ACR_Slayer, 0x0e, &pairPrevious3 },
        { L"Eternal Wings Rings (4/5)", 0x40f3e0, 0x40f420, indexGGXXSprites_ACR_Slayer, 0x0e, &pairPrevious4 },
        { L"Eternal Wings Rings (5/5)", 0x411460, 0x4114a0, indexGGXXSprites_ACR_Slayer, 0x0e, &pairPrevious5 },

        { L"Up and Close Dandy (1/7)", 0x433790, 0x4337d0, indexGGXXSprites_ACR_Slayer, 0x1c },
        { L"Up and Close Dandy (2/7)", 0x435190, 0x4351d0, indexGGXXSprites_ACR_Slayer, 0x1c },
        { L"Up and Close Dandy (3/7)", 0x438020, 0x438060, indexGGXXSprites_ACR_Slayer, 0x1c },
        { L"Up and Close Dandy (4/7)", 0x43a4f0, 0x43a530, indexGGXXSprites_ACR_Slayer, 0x1c },
        { L"Up and Close Dandy (5/7)", 0x43c3a0, 0x43c3e0, indexGGXXSprites_ACR_Slayer, 0x1c },
        { L"Up and Close Dandy (6/7)", 0x43dd50, 0x43dd90, indexGGXXSprites_ACR_Slayer, 0x1c },
        { L"Up and Close Dandy (7/7)", 0x43e6d0, 0x43e710, indexGGXXSprites_ACR_Slayer, 0x1c },

        //Instant Kill
        { L"All Dead -  Background", 0x43f320, 0x43f720, indexGGXXSprites_ACR_Slayer, 0x05 },
        { L"All Dead -  Shine (1/6)", 0x4636e0, 0x463720, indexGGXXSprites_ACR_Slayer, 0x07, nullptr, &effects_AdditiveBlend },
        { L"All Dead -  Shine (2/6)", 0x463820, 0x463860, indexGGXXSprites_ACR_Slayer, 0x07, nullptr, &effects_AdditiveBlend },
        { L"All Dead -  Shine (3/6)", 0x463b90, 0x463bd0, indexGGXXSprites_ACR_Slayer, 0x07, nullptr, &effects_AdditiveBlend },
        { L"All Dead -  Shine (4/6)", 0x464550, 0x464590, indexGGXXSprites_ACR_Slayer, 0x07, nullptr, &effects_AdditiveBlend },
        { L"All Dead -  Shine (5/6)", 0x464fd0, 0x465010, indexGGXXSprites_ACR_Slayer, 0x07, nullptr, &effects_AdditiveBlend },
        { L"All Dead -  Shine (6/6)", 0x465840, 0x465880, indexGGXXSprites_ACR_Slayer, 0x07, nullptr, &effects_AdditiveBlend },
        { L"All Dead -  Haiku (1/18)", 0x471100, 0x471140, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (2/18)", 0x472830, 0x472870, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (3/18)", 0x474020, 0x474060, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (4/18)", 0x475780, 0x4757c0, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (5/18)", 0x4770d0, 0x477110, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (6/18)", 0x478a80, 0x478ac0, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (7/18)", 0x479540, 0x479580, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (8/18)", 0x47b320, 0x47b360, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (9/18)", 0x47d0c0, 0x47d100, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (10/18)", 0x47ed90, 0x47edd0, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (11/18)", 0x480c50, 0x480c90, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (12/18)", 0x482c00, 0x482c40, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (13/18)", 0x483780, 0x4837c0, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (14/18)", 0x484de0, 0x484e20, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (15/18)", 0x486830, 0x486870, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (16/18)", 0x488030, 0x488070, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (17/18)", 0x4898a0, 0x4898e0, indexGGXXSprites_ACR_Slayer, 0x06 },
        { L"All Dead -  Haiku (18/18)", 0x48b1f0, 0x48b230, indexGGXXSprites_ACR_Slayer, 0x06 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_SL_EXTRAS = //Sol
{
    L"Extras",
    {
        // General
        { L"General Sparks / Riot Stamp", 0x3fc2b0, 0x3fc2f0 }, //, nullptr, &effects_AdditiveBlend }, 

        //Specials
        { L"Gunflame (1/3)", 0x3540b0, 0x3540f0, indexGGXXSprites_ACR_Sol, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Gunflame (2/3)", 0x3579b0, 0x3579f0, indexGGXXSprites_ACR_Sol, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Gunflame (3/3)", 0x35a740, 0x35a780, indexGGXXSprites_ACR_Sol, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Gunflame - Dragon Install (1/4)", 0x41b270, 0x41b2b0, indexGGXXSprites_ACR_Sol, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Gunflame - Dragon Install (2/4)", 0x422910, 0x422950, indexGGXXSprites_ACR_Sol, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Gunflame - Dragon Install (3/4)", 0x4262c0, 0x426300, indexGGXXSprites_ACR_Sol, 0x02, nullptr, &effects_AdditiveBlend },
        { L"Gunflame - Dragon Install (4/4)", 0x429a60, 0x429aa0, indexGGXXSprites_ACR_Sol, 0x02, nullptr, &effects_AdditiveBlend },

        { L"Volcanic Viper (1/2)", 0x3485f0, 0x348630, indexGGXXSprites_ACR_Sol, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Volcanic Viper (2/2)", 0x34f3f0, 0x34f430, indexGGXXSprites_ACR_Sol, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Volcanic Viper - Dragon Install", 0x38aaa0, 0x38aae0 }, //, nullptr, &effects_AdditiveBlend }, 

        { L"Grand Viper", 0x342a40, 0x342a80, indexGGXXSprites_ACR_Sol, 0x06, nullptr, &effects_AdditiveBlend },

        { L"Bandit Revolver - DI (1/3)", 0x405890, 0x4058d0 }, //, nullptr, &effects_AdditiveBlend }, 
        { L"Bandit Revolver - DI (2/3)", 0x410a10, 0x410a50 }, //, nullptr, &effects_AdditiveBlend }, 
        { L"Bandit Revolver - DI (3/3)", 0x4177e0, 0x417820 }, //, nullptr, &effects_AdditiveBlend }, 

        { L"Bandit Bringer (1/12)", 0x35c3d0, 0x35c410, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (2/12)", 0x35da10, 0x35da50, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (3/12)", 0x3600b0, 0x3600f0, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (4/12)", 0x361f80, 0x361fc0, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (5/12)", 0x364520, 0x364560, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (6/12)", 0x366df0, 0x366e30, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (7/12)", 0x368de0, 0x368e20, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (8/12)", 0x369e60, 0x369ea0, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (9/12)", 0x36aab0, 0x36aaf0, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (10/12)", 0x36b450, 0x36b490, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (11/12)", 0x36bde0, 0x36be20, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer (12/12)", 0x36c770, 0x36c7b0, indexGGXXSprites_ACR_Sol, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Bandit Bringer Trails (1/3)", 0x36d0a0, 0x36d0e0 }, //, nullptr, &effects_AdditiveBlend }, 
        { L"Bandit Bringer Trails (2/3)", 0x36dce0, 0x36dd20 }, //, nullptr, &effects_AdditiveBlend }, 
        { L"Bandit Bringer Trails (3/3)", 0x36e860, 0x36e8a0 }, //, nullptr, &effects_AdditiveBlend }, 

        { L"Sidewinder", 0x437380, 0x4373c0, indexGGXXSprites_ACR_Sol, 0x08, nullptr, &effects_AdditiveBlend },

        { L"Fafnir (1/7)", 0x42fb50, 0x42fb90, indexGGXXSprites_ACR_Sol, 0x04, nullptr, &effects_AdditiveBlend },
        { L"Fafnir (2/7)", 0x430970, 0x4309b0, indexGGXXSprites_ACR_Sol, 0x04, nullptr, &effects_AdditiveBlend },
        { L"Fafnir (3/7)", 0x431a50, 0x431a90, indexGGXXSprites_ACR_Sol, 0x04, nullptr, &effects_AdditiveBlend },
        { L"Fafnir (4/7)", 0x432d20, 0x432d60, indexGGXXSprites_ACR_Sol, 0x04, nullptr, &effects_AdditiveBlend },
        { L"Fafnir (5/7)", 0x434b00, 0x434b40, indexGGXXSprites_ACR_Sol, 0x04, nullptr, &effects_AdditiveBlend },
        { L"Fafnir (6/7)", 0x436330, 0x436370, indexGGXXSprites_ACR_Sol, 0x04, nullptr, &effects_AdditiveBlend },
        { L"Fafnir (7/7)", 0x436fb0, 0x436ff0, indexGGXXSprites_ACR_Sol, 0x04, nullptr, &effects_AdditiveBlend },

        { L"Slam - Dragon Install", 0x3fcf60, 0x3fcfa0 },

        // Overdrives
        { L"Tyrant Rave", 0x378990, 0x3789d0, indexGGXXSprites_ACR_Sol, 0x05, nullptr, &effects_AdditiveBlend },

        { L"Tyrant Rave Beta (1/24)", 0x3F6610, 0x3F6650, indexGGXXSprites_ACR_Sol, 0x10, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (2/24)", 0x3F68C0, 0x3F6900, indexGGXXSprites_ACR_Sol, 0x11, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (3/24)", 0x3F7510, 0x3F7550, indexGGXXSprites_ACR_Sol, 0x12, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (4/24)", 0x3F85B0, 0x3F85F0, indexGGXXSprites_ACR_Sol, 0x13, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (5/24)", 0x3F94B0, 0x3F94F0, indexGGXXSprites_ACR_Sol, 0x14, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (6/24)", 0x3FA340, 0x3FA380, indexGGXXSprites_ACR_Sol, 0x15, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (7/24)", 0x3FAF50, 0x3FAF90, indexGGXXSprites_ACR_Sol, 0x16, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (8/24)", 0x3FB7E0, 0x3FB820, indexGGXXSprites_ACR_Sol, 0x17, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (9/24)", 0x3FBDA0, 0x3FBDE0, indexGGXXSprites_ACR_Sol, 0x18, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (10/24)", 0x3C0F40, 0x3C0F80, indexGGXXSprites_ACR_Sol, 0x19, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (11/24)", 0x3C2DC0, 0x3C2E00, indexGGXXSprites_ACR_Sol, 0x1a, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (12/24)", 0x3C9210, 0x3C9250, indexGGXXSprites_ACR_Sol, 0x1b, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (13/24)", 0x3D0F60, 0x3D0FA0, indexGGXXSprites_ACR_Sol, 0x1c, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (14/24)", 0x3D8E50, 0x3D8E90, indexGGXXSprites_ACR_Sol, 0x1d, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (15/24)", 0x3DFB20, 0x3DFB60, indexGGXXSprites_ACR_Sol, 0x1e, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (16/24)", 0x3E5AE0, 0x3E5B20, indexGGXXSprites_ACR_Sol, 0x1f, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (17/24)", 0x3EA370, 0x3EA3B0, indexGGXXSprites_ACR_Sol, 0x20, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (18/24)", 0x3ED820, 0x3ED860, indexGGXXSprites_ACR_Sol, 0x21, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (19/24)", 0x3F0050, 0x3F0090, indexGGXXSprites_ACR_Sol, 0x22, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (20/24)", 0x3F1CB0, 0x3F1CF0, indexGGXXSprites_ACR_Sol, 0x23, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (21/24)", 0x3F3190, 0x3F31D0, indexGGXXSprites_ACR_Sol, 0x24, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (22/24)", 0x3F4190, 0x3F41D0, indexGGXXSprites_ACR_Sol, 0x25, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (23/24)", 0x3F50C0, 0x3F5100, indexGGXXSprites_ACR_Sol, 0x26, nullptr, &effects_AdditiveBlend },
        { L"Tyrant Rave Beta (24/24)", 0x3F5C50, 0x3F5C90, indexGGXXSprites_ACR_Sol, 0x27, nullptr, &effects_AdditiveBlend },

        { L"Dragon Install Fire (1/7)", 0x3870c0, 0x387100, indexGGXXSprites_ACR_Sol, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Dragon Install Fire (2/7)", 0x3879f0, 0x387a30, indexGGXXSprites_ACR_Sol, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Dragon Install Fire (3/7)", 0x387f90, 0x387fd0, indexGGXXSprites_ACR_Sol, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Dragon Install Fire (4/7)", 0x388870, 0x3888b0, indexGGXXSprites_ACR_Sol, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Dragon Install Fire (5/7)", 0x389300, 0x389340, indexGGXXSprites_ACR_Sol, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Dragon Install Fire (6/7)", 0x389c80, 0x389cc0, indexGGXXSprites_ACR_Sol, 0x03, nullptr, &effects_AdditiveBlend },
        { L"Dragon Install Fire (7/7)", 0x38a5e0, 0x38a620, indexGGXXSprites_ACR_Sol, 0x03, nullptr, &effects_AdditiveBlend },

        // Instant Kill
        { L"Napalm Death (1/9)", 0x3911a0, 0x3911e0, indexGGXXSprites_ACR_Sol, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Napalm Death (2/9)", 0x39c6b0, 0x39c6f0, indexGGXXSprites_ACR_Sol, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Napalm Death (3/9)", 0x3a58a0, 0x3a58e0, indexGGXXSprites_ACR_Sol, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Napalm Death (4/9)", 0x3af100, 0x3af140, indexGGXXSprites_ACR_Sol, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Napalm Death (5/9)", 0x3b5a30, 0x3b5a70, indexGGXXSprites_ACR_Sol, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Napalm Death (6/9)", 0x3b88f0, 0x3b8930, indexGGXXSprites_ACR_Sol, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Napalm Death (7/9)", 0x3bb020, 0x3bb060, indexGGXXSprites_ACR_Sol, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Napalm Death (8/9)", 0x3bcf70, 0x3bcfb0, indexGGXXSprites_ACR_Sol, 0x0a, nullptr, &effects_AdditiveBlend },
        { L"Napalm Death (9/9)", 0x3bf310, 0x3bf350, indexGGXXSprites_ACR_Sol, 0x0a, nullptr, &effects_AdditiveBlend },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_TS_EXTRAS = //Testament
{
    L"Extras",
    {
        { L"5D 1/2", 0x416c40, 0x416d40, indexGGXXSprites_ACR_Testament, 0x08, &pairNext }, // pair with 2/2 when we have previews
        { L"5D 2/2", 0x4183d0, 0x4184d0, indexGGXXSprites_ACR_Testament, 0x09, &pairPrevious },

        { L"Ground Throw 1/2", 0x4465a0, 0x4469a0, indexGGXXSprites_ACR_Testament, 0x0e, nullptr, &effects_AdditiveBlend },
        { L"Ground Throw 2/2", 0x447600, 0x447a00, indexGGXXSprites_ACR_Testament, 0x0e, nullptr, &effects_AdditiveBlend },

        { L"Phantom Soul (Aura)", 0x414ab0, 0x414af0, indexGGXXSprites_ACR_Testament, 0x0b, &pairNext, &effects_AdditiveBlend },
        { L"Phantom Soul (Skull)", 0x4169d0, 0x416a10, indexGGXXSprites_ACR_Testament, 0x0d },
        { L"Phantom Soul (Ring)", 0x448660, 0x4486a0, indexGGXXSprites_ACR_Testament, 0x0c, nullptr, &effects_AdditiveBlend },
        { L"Crow Feathers", 0x403a80, 0x403ac0, indexGGXXSprites_ACR_Testament, 0x0a },

        { L"Warrant 1/3", 0x419a60, 0x419aa0, indexGGXXSprites_ACR_Testament, 0x11 },
        { L"Warrant 2/3", 0x41f6d0, 0x41f710, indexGGXXSprites_ACR_Testament, 0x11 },
        { L"Warrant 3/3", 0x4256c0, 0x425700, indexGGXXSprites_ACR_Testament, 0x11 },

        { L"Zeinest (Blood) 1/2", 0x42d010, 0x42d050, indexGGXXSprites_ACR_Testament, 0x12 },
        { L"Zeinest (Blood) 2/2", 0x42e6a0, 0x42e6e0, indexGGXXSprites_ACR_Testament, 0x12 },
        { L"Zeinest (Nets) 1/3", 0x42f900, 0x42f940, indexGGXXSprites_ACR_Testament, 0x13 },
        { L"Zeinest (Nets) 2/3", 0x432580, 0x4325c0, indexGGXXSprites_ACR_Testament, 0x13 },
        { L"Zeinest (Nets) 3/3", 0x435350, 0x435390, indexGGXXSprites_ACR_Testament, 0x13 },
        { L"Zeinest (Skeleton Net) 1/3", 0x438050, 0x438090, indexGGXXSprites_ACR_Testament, 0x14 },
        { L"Zeinest (Skeleton Net) 2/3", 0x43b2f0, 0x43b330, indexGGXXSprites_ACR_Testament, 0x14 },
        { L"Zeinest (Skeleton Net) 3/3", 0x43e810, 0x43e850, indexGGXXSprites_ACR_Testament, 0x14 },

        { L"Nightmare Circular (Symbol)", 0x42a240, 0x42a280, indexGGXXSprites_ACR_Testament, 0x10, &pairNext, &effects_AdditiveBlend },
        { L"Nightmare Circular (Blood) 1/5", 0x44b370, 0x44b3b0, indexGGXXSprites_ACR_Testament, 0x0f },
        { L"Nightmare Circular (Blood) 2/5", 0x450460, 0x4504a0, indexGGXXSprites_ACR_Testament, 0x0f },
        { L"Nightmare Circular (Blood) 3/5", 0x454380, 0x4543c0, indexGGXXSprites_ACR_Testament, 0x0f },
        { L"Nightmare Circular (Blood) 4/5", 0x4587d0, 0x458810, indexGGXXSprites_ACR_Testament, 0x0f },
        { L"Nightmare Circular (Blood) 5/5", 0x45ae00, 0x45ae40, indexGGXXSprites_ACR_Testament, 0x0f },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_VE_EXTRAS = //Venom
{
    L"Extras",
    {
        //General
        { L"Active Ball Glow", 0x26d330, 0x26d370, indexGGXXSprites_ACR_Venom, 0x01, nullptr, &effects_AdditiveBlend },
        { L"Lightning Ball Glow", 0x26f610, 0x26f650, indexGGXXSprites_ACR_Venom, 0x03, nullptr, &effects_AdditiveBlend   },
        { L"Enhanced Ball Glow (1/2)", 0x270f70, 0x270fb0, indexGGXXSprites_ACR_Venom, 0x04 },
        { L"Enhanced Ball Glow (2/2)", 0x273580, 0x2735c0, indexGGXXSprites_ACR_Venom, 0x04 },

        { L"Grab (1/3)", 0x294d50, 0x294d90, indexGGXXSprites_ACR_Venom, 0x0C },
        { L"Grab (2/3)", 0x294170, 0x2941b0, indexGGXXSprites_ACR_Venom, 0x0C },
        { L"Grab (3/3)", 0x293840, 0x293880, indexGGXXSprites_ACR_Venom, 0x0C },

        //Specials
        { L"Stinger Aim Impacts", 0x26b0d0, 0x26b110, indexGGXXSprites_ACR_Venom, 0x11 },
        { L"Carcass Ride Impacts", 0x26c180, 0x26c1c0, indexGGXXSprites_ACR_Venom, 0x04 },

        { L"Dubious Curve - Slam", 0x28a3d0, 0x28a410, indexGGXXSprites_ACR_Venom, 0x0A, &pairNext,  &effects_AdditiveBlend },
        { L"Dubious Curve - Swipe", 0x290220, 0x290260, indexGGXXSprites_ACR_Venom, 0x0B, &pairPrevious, &effects_AdditiveBlend },

        { L"H Mad Struggle (1/4)", 0x267640, 0x267a40, indexGGXXSprites_ACR_Venom, 0x0D, &pairNext3Palettes },
        { L"H Mad Struggle (2/4)", 0x268040, 0x268440, indexGGXXSprites_ACR_Venom, 0x0E },
        { L"H Mad Struggle (3/4)", 0x268ea0, 0x2692a0, indexGGXXSprites_ACR_Venom, 0x0F },
        { L"H Mad Struggle (4/4)", 0x269b90, 0x269f90, indexGGXXSprites_ACR_Venom, 0x10 },

        //Overdrives
        { L"Dark Angel", 0x277b40, 0x277b80, indexGGXXSprites_ACR_Venom, 0x05 },
        { L"Dark Angel Effects (1/2)", 0x280bf0, 0x280c30, indexGGXXSprites_ACR_Venom, 0x06, &pairPrevious, &effects_AdditiveBlend },
        { L"Dark Angel Effects (2/2)", 0x282420, 0x282460, indexGGXXSprites_ACR_Venom, 0x06, &pairPrevious2, &effects_AdditiveBlend },

        //Instant Kill
        { L"Dimmu Borgir (1, 4, 5, 7)", 0x289450, 0x289510, indexGGXXSprites_ACR_Venom, 0x07 },
        { L"Dimmu Borgir (2, 3, 6, 8)", 0x289c10, 0x289cd0, indexGGXXSprites_ACR_Venom, 0x08 },
        { L"Dimmu Borgir - Explosion (1/6)", 0x282b90, 0x282bd0, indexGGXXSprites_ACR_Venom, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Dimmu Borgir - Explosion (2/6)", 0x283560, 0x2835a0, indexGGXXSprites_ACR_Venom, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Dimmu Borgir - Explosion (3/6)", 0x284ad0, 0x284b10, indexGGXXSprites_ACR_Venom, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Dimmu Borgir - Explosion (4/6)", 0x286720, 0x286760, indexGGXXSprites_ACR_Venom, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Dimmu Borgir - Explosion (5/6)", 0x287c50, 0x287c90, indexGGXXSprites_ACR_Venom, 0x09, nullptr, &effects_AdditiveBlend },
        { L"Dimmu Borgir - Explosion (6/6)", 0x288cf0, 0x288d30, indexGGXXSprites_ACR_Venom, 0x09, nullptr, &effects_AdditiveBlend },

        //{ L"Unused 1?", 0x26e1e0, 0x26e220 }, 
        //{ L"Unused 2?", 0x26e2f0, 0x26e330 },     
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_ZP_EXTRAS = //Zappa
{
    L"Extras",
    {
        //The dog palettes are stupid and im leaving those out since almost each frame has its own palette (x5 for the different palettes). Will get around to them at some point probably (maybe) (not likely)
        //Zappas got mutiple summons, the order im using here is Naked -> Dog -> Triplets -> Sword -> Roah

        //General
        { L"Orbs (1/2)", 0x4c6b30, 0x4c6b70, indexGGXXSprites_ACR_Zappa, 0x0c },
        { L"Orbs (2/2)", 0x4c7530, 0x4c7570, indexGGXXSprites_ACR_Zappa, 0x0c },

        { L"Locusts (1/3)", 0x490130, 0x490170, indexGGXXSprites_ACR_Zappa, 0x0b },
        { L"Locusts (2/3)", 0x4906b0, 0x4906f0, indexGGXXSprites_ACR_Zappa, 0x0b },
        { L"Locusts (3/3)", 0x490c00, 0x490c40, indexGGXXSprites_ACR_Zappa, 0x0b },

        { L"Dog sleeping/waking up ", 0x4911f0, 0x491230, indexGGXXSprites_ACR_Zappa, 0x04 },

        //Normals (Naked)
        { L"f.S (1/3)",          0x459320, 0x459360, indexGGXXSprites_ACR_Zappa, 0x08 },
        { L"f.S (2/3)",          0x45b550, 0x45b590, indexGGXXSprites_ACR_Zappa, 0x08 },
        { L"f.S (3/3)",          0x45cb90, 0x45cbd0, indexGGXXSprites_ACR_Zappa, 0x08 },
        { L"f.S - Impact (1/4)", 0x45d1d0, 0x45d210, indexGGXXSprites_ACR_Zappa, 0x07 },
        { L"f.S - Impact (2/4)", 0x45fc60, 0x45fca0, indexGGXXSprites_ACR_Zappa, 0x07 },
        { L"f.S - Impact (3/4)", 0x4632b0, 0x4632f0, indexGGXXSprites_ACR_Zappa, 0x07 },
        { L"f.S - Impact (4/4)", 0x465f50, 0x465f90, indexGGXXSprites_ACR_Zappa, 0x07 },

        //Specials (Triplets)
        { L"Shouting (Left)",            0x4b5780, 0x4b57c0, indexGGXXSprites_ACR_Zappa, 0x0f, &pairNext },
        { L"Shouting (Right)/Golf ball", 0x4b4cd0, 0x4b4d10, indexGGXXSprites_ACR_Zappa, 0x10, &pairPrevious },
        { L"Banana (1/2)",               0x4b8650, 0x4b8a50, indexGGXXSprites_ACR_Zappa, 0x01 },
        { L"Banana (2/2)",               0x4b8f20, 0x4b9320, indexGGXXSprites_ACR_Zappa, 0x01 },
        { L"Potted plant (1/4)",         0x4b6230, 0x4b6630, indexGGXXSprites_ACR_Zappa, 0x0e },
        { L"Potted plant (2/4)",         0x4b6e10, 0x4b7210, indexGGXXSprites_ACR_Zappa, 0x0e },
        { L"Potted plant (3/4)",         0x4b7660, 0x4b7a60, indexGGXXSprites_ACR_Zappa, 0x0e },
        { L"Potted plant (4/4)",         0x4b7f90, 0x4b8390, indexGGXXSprites_ACR_Zappa, 0x0e },

        //Specials (Sword)    
        { L"Please Fall (1/2)", 0x484120, 0x484160, indexGGXXSprites_ACR_Zappa, 0x0d },
        { L"Please Fall (2/2)", 0x48b4f0, 0x48b530, indexGGXXSprites_ACR_Zappa, 0x0d },

        { L"Come Close, and I'll Kill You (1/2)", 0x4b97f0, 0x4b9830, indexGGXXSprites_ACR_Zappa, 0x03 },
        { L"Come Close, and I'll Kill You (2/2)", 0x4bba60, 0x4bbaa0, indexGGXXSprites_ACR_Zappa, 0x03 },

        //Specials (Roah)
        { L"Darkness Anthem (1/14)",    0x447360, 0x4473a0 },
        { L"Darkness Anthem (2/14)",    0x448ba0, 0x448be0 },
        { L"Darkness Anthem (3/14)",    0x44a570, 0x44a5b0 },
        { L"Darkness Anthem (4/14)",    0x44be00, 0x44be40 },
        { L"Darkness Anthem (5/14)",    0x44d4c0, 0x44d500 },
        { L"Darkness Anthem (6/14)",    0x44ecd0, 0x44ed10 },
        { L"Darkness Anthem (7/14)",    0x450360, 0x4503a0 },
        { L"Darkness Anthem (8/14)",    0x451580, 0x4515c0 },
        { L"Darkness Anthem (9/14)",    0x4527e0, 0x452820 },
        { L"Darkness Anthem (10/14)",   0x453a00, 0x453a40 },
        { L"Darkness Anthem (11/14)",   0x454980, 0x4549c0 },
        { L"Darkness Anthem (12/14)",   0x455ca0, 0x455ce0 },
        { L"Darkness Anthem (13/14)",   0x457330, 0x457370 },
        { L"Darkness Anthem (14/14)",   0x458aa0, 0x458ae0 },

        //Force breaks (Naked)
        { L"Etiquette Starts Here ",        0x4bd900, 0x4bd940, indexGGXXSprites_ACR_Zappa, 0x06, &pairNext },
        { L"Etiquette Starts Here Effects", 0x4c6920, 0x4c6960, indexGGXXSprites_ACR_Zappa, 0x05, &pairPreviousFlipped },

        //Overdrives (Naked/All summons)
        { L"Birth!! (1/4)", 0x466930, 0x466970, indexGGXXSprites_ACR_Zappa, 0x02 },
        { L"Birth!! (2/4)", 0x46f4f0, 0x46f530, indexGGXXSprites_ACR_Zappa, 0x02 },
        { L"Birth!! (3/4)", 0x472d40, 0x472d80, indexGGXXSprites_ACR_Zappa, 0x02 },
        { L"Birth!! (4/4)", 0x4773c0, 0x477400, indexGGXXSprites_ACR_Zappa, 0x02 },

        //Overdrives (Roah)
        { L"Bellows Malice (1/5)", 0x47a5a0, 0x47a5e0 },
        { L"Bellows Malice (2/5)", 0x47c7f0, 0x47c830 },
        { L"Bellows Malice (3/5)", 0x47e910, 0x47e950 },
        { L"Bellows Malice (4/5)", 0x480760, 0x4807a0 },
        { L"Bellows Malice (5/5)", 0x481de0, 0x481e20 },

        //Instant Kill (Naked/All Summons)
        { L"I'm Scared... - Scream",     0x491510, 0x491550, indexGGXXSprites_ACR_Zappa, 0x09, &pairNext },
        { L"I'm Scared... - Tree (1/3)", 0x4919f0, 0x491bf0, indexGGXXSprites_ACR_Zappa, 0x0a, &pairPrevious },
        { L"I'm Scared... - Tree (2/3)", 0x49d5a0, 0x49d7a0, indexGGXXSprites_ACR_Zappa, 0x0a, &pairPrevious2 },
        { L"I'm Scared... - Tree (3/3)", 0x4a8fa0, 0x4a91a0, indexGGXXSprites_ACR_Zappa, 0x0a, &pairPrevious3 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_EFR_EXTRAS = //Ex Order-Sol (wip)
{
    L"Extras",
    {
        { L"Volcanic Viper (1/2)", 0x57a930, 0x57a970 },
        { L"Volcanic Viper (2/2)", 0x581730, 0x581770 },
    }
};


const sGCBUPF_ExtrasCollection GGXXACR_S_EFFECTS_JPF =
{
    L"Effects",
    {
        { L"Roman Cancel",          0x1C9770, 0x1C97B0, indexGGXXSprites_ACR_Bonus, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Force Roman Cancel",    0x1C9970, 0x1C99B0, indexGGXXSprites_ACR_Bonus, 0x07, nullptr, &effects_AdditiveBlend },
        { L"Chaos Roman Cancel",    0x1C9B70, 0x1C9BB0, indexGGXXSprites_ACR_Bonus, 0x08, nullptr, &effects_AdditiveBlend },
        { L"Yellow Roman Cancel",   0x1C9D70, 0x1C9DB0, indexGGXXSprites_ACR_Bonus, 0x08, nullptr, &effects_AdditiveBlend },

        { L"Burst (1/12)",          0x1807E0, 0x180BE0, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (2/12)",          0x185F90, 0x186390, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (3/12)",          0x18A0D0, 0x18A4D0, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (4/12)",          0x18C8D0, 0x18CCD0, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (5/12)",          0x18DD30, 0x18E130, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (6/12)",          0x1903A0, 0x1907A0, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (7/12)",          0x1930A0, 0x1934A0, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (8/12)",          0x1960C0, 0x1964C0, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (9/12)",          0x198A20, 0x198E20, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (10/12)",         0x19B090, 0x19B490, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (11/12)",         0x19D2D0, 0x19D6D0, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Burst (12/12)",         0x19F100, 0x19F500, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },

        { L"Gold Burst (1/12)",     0x160660, 0x160A60, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (2/12)",     0x165E10, 0x166210, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (3/12)",     0x169F50, 0x16A350, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (4/12)",     0x16C750, 0x16CB50, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (5/12)",     0x16DBB0, 0x16DFB0, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (6/12)",     0x170220, 0x170620, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (7/12)",     0x172F20, 0x173320, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (8/12)",     0x175F40, 0x176340, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (9/12)",     0x1788A0, 0x178CA0, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (10/12)",    0x17AF10, 0x17B310, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (11/12)",    0x17D150, 0x17D550, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },
        { L"Gold Burst (12/12)",    0x17EF80, 0x17F380, indexGGXXSprites_ACR_Bonus, 0x0b, nullptr, &effects_AdditiveBlend },

        { L"Forcebreak Sparks",                            0x1cad60, 0x1cada0 },
        { L"Overdrive Actvation Rings",                    0x1C75B0, 0x1C75F0 },
        { L"Overdrive Background",                         0x1F4380, 0x1F43C0 },
        { L"Normal Overdrive Background (Layer 2)",        0x203450, 0x203490 },
        { L"Forcebreak Overdrive Background (Layer 2)",    0x1F1590, 0x1F15D0 },

        { L"Instant Kill Activate Effects",     0x1ca2b0, 0x1ca2f0 },
        { L"(GG Mode) Charging orb",            0x1cb570, 0x1cb5b0 },
        { L"Airdash Sparks",                    0x1c9160, 0x1c91a0 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_DUSTS_JPF =
{
    L"Movement/Attack Dust",
    {
        //Dust effects for movement, certain stages swap these out for stage specific effects that can be found in the stages file
        //eg. Grove uses water effects, which palettes are stored in bg_dz.cmp, and not with these otherwise universal effects
        { L"Jumping Dust Effects (1/8)", 0x1D4690, 0x1D46D0, indexGGXXSprites_ACR_Bonus, 0x0d },
        { L"Jumping Dust Effects (2/8)", 0x1D5DF0, 0x1D5E30, indexGGXXSprites_ACR_Bonus, 0x0d },
        { L"Jumping Dust Effects (3/8)", 0x1D6CD0, 0x1D6D10, indexGGXXSprites_ACR_Bonus, 0x0d },
        { L"Jumping Dust Effects (4/8)", 0x1D86E0, 0x1D8720, indexGGXXSprites_ACR_Bonus, 0x0d },
        { L"Jumping Dust Effects (5/8)", 0x1D9E00, 0x1D9E40, indexGGXXSprites_ACR_Bonus, 0x0d },
        { L"Jumping Dust Effects (6/8)", 0x1DB220, 0x1DB260, indexGGXXSprites_ACR_Bonus, 0x0d },
        { L"Jumping Dust Effects (7/8)", 0x1DC500, 0x1DC540, indexGGXXSprites_ACR_Bonus, 0x0d },
        { L"Jumping Dust Effects (8/8)", 0x1DD4A0, 0x1DD4E0, indexGGXXSprites_ACR_Bonus, 0x0d },
        { L"Landing Dust Effects",       0x1DFBE0, 0x1DFC20 },
        { L"Running Dust Effects (1/3)", 0x1DE2E0, 0x1DE320, indexGGXXSprites_ACR_Bonus, 0x0e },
        { L"Running Dust Effects (2/3)", 0x1DEA90, 0x1DEAD0, indexGGXXSprites_ACR_Bonus, 0x0e },
        { L"Running Dust Effects (3/3)", 0x1DF470, 0x1DF4B0, indexGGXXSprites_ACR_Bonus, 0x0e },

        //May uses her own dust palettes for tons of attacks, these also change based on the stage
        { L"Attack Dust Effects (1/7)", 0x1E1950, 0x1E1990, indexGGXXSprites_ACR_Bonus, 0x0a },
        { L"Attack Dust Effects (2/7)", 0x1E2700, 0x1E2740, indexGGXXSprites_ACR_Bonus, 0x0a },
        { L"Attack Dust Effects (3/7)", 0x1E2F40, 0x1E2F80, indexGGXXSprites_ACR_Bonus, 0x0a },
        { L"Attack Dust Effects (4/7)", 0x1E3E50, 0x1E3E90, indexGGXXSprites_ACR_Bonus, 0x0a },
        { L"Attack Dust Effects (5/7)", 0x1E4A80, 0x1E4AC0, indexGGXXSprites_ACR_Bonus, 0x0a },
        { L"Attack Dust Effects (6/7)", 0x1E55F0, 0x1E5630, indexGGXXSprites_ACR_Bonus, 0x0a },
        { L"Attack Dust Effects (7/7)", 0x1E6580, 0x1E65C0, indexGGXXSprites_ACR_Bonus, 0x0a },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_HITSPARKS_JPF =
{
    L"Hitsparks/Blocksparks",
    {
        { L"Level 1 Hitsparks (1/7)",                   0x1d04a0, 0x1d04e0 },
        { L"Level 1 Hitsparks (2/7)",                   0x1d05d0, 0x1d0610 },
        { L"Level 1 Hitsparks (3/7)",                   0x1d0e60, 0x1d0ea0 },
        { L"Level 1 Hitsparks (4/7)",                   0x1d1810, 0x1d1850 },
        { L"Level 1 Hitsparks (5/7)",                   0x1d21d0, 0x1d2210 },
        { L"Level 1 Hitsparks (6/7)",                   0x1d29b0, 0x1d29f0 },
        { L"Level 1 Hitsparks (7/7)",                   0x1d2e30, 0x1d2e70 },
        { L"Level 2-5 Hitsparks (1/9)",                 0x1bb4a0, 0x1bb4e0 },
        { L"Level 2-5 Hitsparks (2/9)",                 0x1bbd20, 0x1bbd60 },
        { L"Level 2-5 Hitsparks (3/9)",                 0x1bd0b0, 0x1bd0f0 },
        { L"Level 2-5 Hitsparks (4/9)",                 0x1bf000, 0x1bf040 },
        { L"Level 2-5 Hitsparks (5/9)",                 0x1c1310, 0x1c1350 },
        { L"Level 2-5 Hitsparks (6/9)",                 0x1c3370, 0x1c33b0 },
        { L"Level 2-5 Hitsparks (7/9)",                 0x1c4940, 0x1c4980 },
        { L"Level 2-5 Hitsparks (8/9)",                 0x1c55e0, 0x1c5620 },
        { L"Level 2-5 Hitsparks (9/9)",                 0x1c5ac0, 0x1c5b00 },
        { L"Slash Hitsparks",                           0x1c8220, 0x1c8260 },
        { L"Special/Overdrive Hitsparks Outer ring",    0x1c9390, 0x1c93d0 },
        { L"Special/Overdrive Hitsparks Inner ring",    0x1c6a50, 0x1c6a90 },
        { L"Special/Overdrive Hitsparks Effects",       0x1c7950, 0x1c7990 },

        { L"Level 1 Blocksparks (1/6)",             0x1ce5b0, 0x1ce5f0 },
        { L"Level 1 Blocksparks (2/6)",             0x1ce680, 0x1ce6c0 },
        { L"Level 1 Blocksparks (3/6)",             0x1ce820, 0x1ce860 },
        { L"Level 1 Blocksparks (4/6)",             0x1cebd0, 0x1cec10 },
        { L"Level 1 Blocksparks (5/6)",             0x1ceff0, 0x1cf030 },
        { L"Level 1 Blocksparks (6/6)",             0x1cf5a0, 0x1cf5e0 },
        { L"Level 2-5 Blocksparks (1/4)",           0x1a7960, 0x1a79a0 },
        { L"Level 2-5 Blocksparks (2/4)",           0x1aa8b0, 0x1aa8f0 },
        { L"Level 2-5 Blocksparks (3/4)",           0x1adb30, 0x1adb70 },
        { L"Level 2-5 Blocksparks (4/4)",           0x1b0410, 0x1b0450 },
        { L"Level 1-5 Blocksparks",                 0x1b2050, 0x1b2090 },
        { L"Special/Overdrive Blocksparks (1/4)",   0x1a1640, 0x1a1680 },
        { L"Special/Overdrive Blocksparks (2/4)",   0x1a3070, 0x1a30b0 },
        { L"Special/Overdrive Blocksparks (3/4)",   0x1a4990, 0x1a49d0 },
        { L"Special/Overdrive Blocksparks (4/4)",   0x1a65f0, 0x1a6630 },
        { L"Fautless Defense Blocksparks (1/2)",    0x21d560, 0x21d5a0 },
        { L"Fautless Defense Blocksparks (2/2)",    0x21d6a0, 0x21d6e0 },
        { L"Successful Slashback ring",             0x21dbc0, 0x21dc00 },

        //missing: move clashes, failed slashback, faultless defense rings, airdash rings, pot buster/di 2nd rings, and maybe include blood? altho blood is buggy in +R
        { L"Ground bounce/Wall splat",          0x1cc170, 0x1cc1b0 },
        { L"Throw Clash (1/2)",                 0x1ca830, 0x1ca870 },
        { L"Throw Clash (2/2)",                 0x1ca9f0, 0x1caa30 },
        { L"Burning Flames (1/3)",              0x1b2f30, 0x1b2f70 },
        { L"Burning Flames (2/3)",              0x1b50c0, 0x1b5100 },
        { L"Burning Flames (3/3)",              0x1b7020, 0x1b7060 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_HUDMenu =
{
    L"HUD/Menu",
    {
        //Will expand to include more menu palettes at a later date
        //Missing RISC meter, Tension meter, gauge for stagger, Character HUD Portraits, and Character specific meters (some might be in their own .bin files) for HUD

        { L"Main HUD",                      0x9640, 0x9680 },

        { L"Health",                        0x8580, 0x85c0 },  //Full health palette (green) is done by taking the normal health value and ignoring the R and B values, not its own palette 
        { L"Health Glow",                   0x8330, 0x8370 },
        { L"Health Shine",                  0x1840, 0x1880 },

        { L"Timer Background",              0x7bc0, 0x7c00 },
        { L"Timer Numbers",                 0x9260, 0x92a0 },
        { L"Timer Numbers (Infinite time)", 0x7ed0, 0x7f10 },   //Training mode and possibly somewhere else? unsure so leaving as Infinite for now

        { L"Round Counters",                0x1EE740, 0x1EE780 },
        { L"Round Counters (Win)",          0x1EE860, 0x1EE8A0 },

        { L"Burst Icon (Full)",             0x60b0, 0x60f0 },
        { L"Burst Icon (Glow)",             0x71d0, 0x7210 },
        { L"Burst Icon (Empty)",            0x66C0, 0x6700 },
        { L"Burst Icon (Refilling)",        0x6bf0, 0x6c30 },
        { L"Burst Icon (Denied)",           0x7840, 0x7880 },

        { L"Tension (P1)",                  0xbb80, 0xbbc0 }, //The actual tension bar is in the games EXE, these are just the plates around them
        { L"Tension Background (P1)",       0x8a30, 0x8a70 },
        { L"Tension (P2)",                  0xb670, 0xb6b0 },
        { L"Tension Background (P2)",       0x8970, 0x89b0 },
        { L"Robo-Ky Tension (Base)",        0x8af0, 0x8b30 },
        { L"Robo-Ky Tension (Dial Center)", 0x9020, 0x9060 },
        { L"Robo-Ky Tension (Flicker)",     0x90a0, 0x90e0 },

        { L"Combo Counter",                 0x2d00, 0x2d40 },
        { L"Character names",               0x2e0, 0x320 },
        { L"Text (Normal) (1/3)",           0x7bcf0, 0x7bd30, indexGGXXSprites_ACR_Bonus, 0x10, &pairNextAndNext },
        { L"Text (Normal) (2/3)",           0x7c1f0, 0x7c230, indexGGXXSprites_ACR_Bonus, 0x11 },
        { L"Text (Normal) (3/3)",           0x7c7d0, 0x7c810, indexGGXXSprites_ACR_Bonus, 0x12 },
        { L"Text (Original) (1/3)",         0x89FF0, 0x8A030, indexGGXXSprites_ACR_Bonus, 0x13, &pairNextAndNext }, // This looks wrong, but it's correct
        { L"Text (Original) (2/3)",         0x8A510, 0x8A550, indexGGXXSprites_ACR_Bonus, 0x14 },
        { L"Text (Original) (3/3)",         0x8AAB0, 0x8AAF0, indexGGXXSprites_ACR_Bonus, 0x15 },

        { L"Various Menus Font / Training Input History", 0x81AA0, 0x81AE0 },
        { L"Various Menus Font", 0x82920, 0x82960 },

        { L"Zappa summon/Move List icons",  0x7E450, 0x7E490 },

        { L"Stagger joystick (1/3)",        0x1EE040, 0x1EE080, indexGGXXSprites_ACR_Bonus, 0x0f },
        { L"Stagger joystick (2/3)",        0x1EE270, 0x1EE2B0, indexGGXXSprites_ACR_Bonus, 0x0f },
        { L"Stagger joystick (3/3)",        0x1EE4D0, 0x1EE510, indexGGXXSprites_ACR_Bonus, 0x0f },
        { L"Dizzy Angels",                  0x1E7ED0, 0x1E7F10, indexGGXXSprites_ACR_Bonus, 0x0c },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_RoundMessages =
{
    L"Round Start/End Messages",
    {
        //Round opening
        { L"Opening Text: Heaven", 0x1efc0, 0x1f000, indexGGXXSprites_ACR_Bonus, 0x17, &pairNext3Palettes },
        { L"Opening Text: Or", 0x208e0, 0x20920, indexGGXXSprites_ACR_Bonus, 0x1a },
        { L"Opening Text: Hell", 0x21340, 0x21380, indexGGXXSprites_ACR_Bonus, 0x18 },
        { L"Opening Text: Heaven or Hell circle", 0x229c0, 0x22a00, indexGGXXSprites_ACR_Bonus, 0x16 },
        { L"Opening Text: Duel", 0x319c0, 0x31a00 },
        { L"Opening Text: Final", 0x328c0, 0x32900 },
        { L"Opening Text: 1, 2, 3", 0x33B40, 0x33B80 },
        { L"Opening Text: The First, The Second, The Third", 0x2b850, 0x2b890 },
        { L"Opening Text: Let's", 0x37ca0, 0x37ce0, indexGGXXSprites_ACR_Bonus, 0x19, &pairNext },
        { L"Opening Text: Rock", 0x38160, 0x381a0, indexGGXXSprites_ACR_Bonus, 0x1b, &pairPrevious },
        { L"Opening Background (1/7)", 0x234f0, 0x23530 },
        { L"Opening Background (2/7)", 0x24670, 0x246b0 },
        { L"Opening Background (3/7)", 0x25060, 0x250a0 },
        { L"Opening Background (4/7)", 0x26f60, 0x26fa0 },
        { L"Opening Background (5/7)", 0x28c70, 0x28cb0 },
        { L"Opening Background (6/7)", 0x298b0, 0x298f0 },
        { L"Opening Background (7/7)", 0x3ac90, 0x3acd0 },

        //Win
        { L"Slash (S)", 0x5bee0, 0x5bf20 },
        { L"Slash (L)", 0x5c9d0, 0x5ca10 },
        { L"Slash (A)", 0x5d120, 0x5d160 },
        { L"Slash (S)", 0x5d830, 0x5d870 },
        { L"Slash (H)", 0x5e1a0, 0x5e1e0 },
        { L"Slash Background 1", 0x5ed10, 0x5ed50 },
        { L"Slash Background 2", 0x5f400, 0x5f440 },
        { L"Win (W)", 0x62660, 0x626a0 },
        { L"Win (I)", 0x63020, 0x63060 },
        { L"Win (N)", 0x634c0, 0x63500 },
        { L"Win Message Background", 0x63f30, 0x63f70 },
        { L"Win Message Character name", 0x66ff0, 0x67030 },

        //Perfect
        { L"Perfect (P)", 0x59190, 0x591d0 },
        { L"Perfect (E)", 0x59590, 0x595d0 },
        { L"Perfect (R)", 0x599e0, 0x59a20 },
        { L"Perfect (F)", 0x59e70, 0x59eb0 },
        { L"Perfect (C)", 0x5a230, 0x5a270 },
        { L"Perfect (T)", 0x5a6a0, 0x5a6e0 },
        { L"Perfect Glow (P)", 0x5aa50, 0x5aa90 },
        { L"Perfect Glow (E)", 0x5acc0, 0x5ad00 },
        { L"Perfect Glow (R)", 0x5af50, 0x5af90 },
        { L"Perfect Glow (F)", 0x5b1d0, 0x5b210 },
        { L"Perfect Glow (C)", 0x5b430, 0x5b470 },
        { L"Perfect Glow (T)", 0x5b6e0, 0x5b720 },
        { L"Perfect Border", 0x57760, 0x577a0 },

        //Lose
        { L"Lose (L)", 0x4fbA0, 0x4FBE0 },
        { L"Lose (O)", 0x50460, 0x504A0 },
        { L"Lose (S)", 0x50ff0, 0x51030 },
        { L"Lose (E)", 0x51c70, 0x51CB0 },
        { L"Lose Background", 0x528F0, 0x52930 },

        //Draw
        {L"Draw", 0x11550, 0x11590 },

        //Time Out
        { L"Time", 0x6ca70, 0x6cab0 },
        { L"Up", 0x6dc70, 0x6dcb0 },
        { L"Time Up Background", 0x68da0, 0x68de0 },

        //Instant Kills
        { L"Instant Kill Border",           0x1a860, 0x1a8a0 },
        { L"Instant Kill Letters (D)",      0x13890, 0x138d0 },
        { L"Instant Kill Letters (E)",      0x14460, 0x144a0 },
        { L"Instant Kill Letters (S)",      0x14d90, 0x14dd0 },
        { L"Instant Kill Letters (T)",      0x154c0, 0x15500 },
        { L"Instant Kill Letters (R)",      0x15a90, 0x15ad0 },
        { L"Instant Kill Letters (O)",      0x16110, 0x16150 },
        { L"Instant Kill Letters (Y)",      0x167d0, 0x16810 },
        { L"Instant Kill Letters (E)",      0x16e70, 0x16eb0 },
        { L"Instant Kill Letters (D)",      0x17720, 0x17760 },

        //May and Zappa have their own Instant Kill screens, D and E letters are reused for both
        { L"May Instant Kill Dolphin (1/3)",    0x563b0, 0x563f0 },
        { L"May Instant Kill Dolphin (2/3)",    0x56a60, 0x56aa0 },
        { L"May Instant Kill Dolphin (3/3)",    0x570f0, 0x57130 },
        { L"May Instant Kill Stars",            0x56290, 0x562d0 },
        { L"May Instant Kill Letters (D)",      0x53690, 0x536d0 },
        { L"May Instant Kill Letters (E)",      0x53dc0, 0x53e00 },
        { L"May Instant Kill Letters (S)",      0x54390, 0x543d0 },
        { L"May Instant Kill Letters (T)",      0x54a30, 0x54a70 },
        { L"May Instant Kill Letters (R)",      0x54ec0, 0x54f00 },
        { L"May Instant Kill Letters (O)",      0x555d0, 0x55610 },
        { L"May Instant Kill Letters (Y)",      0x55d30, 0x55d70 },

        { L"Zappa Instant Kill Eye",                        0x71c10, 0x71c50 },
        { L"Zappa Instant Kill Scanlines",                  0x70300, 0x70340 },
        { L"Zappa Instant Kill Static",                     0x70380, 0x703c0 },
        { L"Zappa Instant Kill Screen Edge (Top/Bottom)",   0x700c0, 0x70100 },
        { L"Zappa Instant Kill Screen Edge (Left/Right)",   0x701f0, 0x70230 },
        { L"Zappa Instant Kill Screen Edge (Corners)",      0x70280, 0x702c0 },
        { L"Zappa Instant Kill Letters (D)",                0x6e740, 0x6e780 },
        { L"Zappa Instant Kill Letters (E)",                0x6eb00, 0x6eb40 },
        { L"Zappa Instant Kill Letters (S)",                0x6eef0, 0x6ef30 },
        { L"Zappa Instant Kill Letters (T)",                0x6f2c0, 0x6f300 },
        { L"Zappa Instant Kill Letters (R)",                0x6f610, 0x6f650 },
        { L"Zappa Instant Kill Letters (O)",                0x6fa10, 0x6fa50 },
        { L"Zappa Instant Kill Letters (Y)",                0x6fdb0, 0x6fdf0 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_Sidebar_Portraits_TypeA
{
    k_strSidebarPortraits_TypeA,
    {
        { L"Type A Background (Left)",  0x110, 0x510, indexGGXXSprites_ACR_Bonus, 0x00 },
        { L"Type A Background (Right)", 0x162E0, 0x166E0, indexGGXXSprites_ACR_Bonus, 0x01 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_Sidebar_Portraits_TypeB
{
    k_strSidebarPortraits_TypeB,
    {
        { L"Type B Background (Left)",  0x2D850, 0x2DC50, indexGGXXSprites_ACR_Bonus, 0x02 },
        { L"Type B Background (Right)", 0x43C20, 0x44020, indexGGXXSprites_ACR_Bonus, 0x03 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_Sidebar_Portraits_TypeC
{
    k_strSidebarPortraits_TypeC,
    {
        { L"Type C Background (Left)",  0x599D0, 0x59DD0, indexGGXXSprites_ACR_Bonus, 0x04 },
        { L"Type C Background (Right)", 0x686D0, 0x68AD0, indexGGXXSprites_ACR_Bonus, 0x04 },
        { L"Type C A.B.A",              0x773D0, 0x777D0, indexGGXXSprites_ACR_ABA, 0x40 },
        { L"Type C Anji",               0x7B8D0, 0x7BcD0, indexGGXXSprites_ACR_Anji, 0x40 },
        { L"Type C Axl",                0x7F4B0, 0x7F8B0, indexGGXXSprites_ACR_Axl, 0x40 },
        { L"Type C Baiken",             0x82d10, 0x83110, indexGGXXSprites_ACR_Baiken, 0x40 },
        { L"Type C Bridget",            0x865f0, 0x869f0, indexGGXXSprites_ACR_Bridget, 0x40 },
        { L"Type C Chipp",              0x8A6A0, 0x8AAA0, indexGGXXSprites_ACR_Chipp, 0x40 },
        { L"Type C Dizzy",              0x91C50, 0x92050, indexGGXXSprites_ACR_Dizzy, 0x40 },
        { L"Type C Eddie",              0xd0f40, 0xd1340, indexGGXXSprites_ACR_Eddie, 0x40 },
        { L"Type C Faust",              0x96120, 0x96520, indexGGXXSprites_ACR_Faust, 0x40 },
        { L"Type C I-no",               0x99A50, 0x99E50, indexGGXXSprites_ACR_Ino, 0x40 },
        { L"Type C Jam",                0x9D2b0, 0x9D6b0, indexGGXXSprites_ACR_Jam, 0x40 },
        { L"Type C Johnny",             0xA0C60, 0xA1060, indexGGXXSprites_ACR_Johnny, 0x40 },
        { L"Type C Justice",            0xA4890, 0xA4c90, indexGGXXSprites_ACR_Justice, 0x40 },
        { L"Type C Kliff",              0x8DBC0, 0x8DFC0, indexGGXXSprites_ACR_Kliff, 0x40 },
        { L"Type C Ky",                 0xA9070, 0xA9470, indexGGXXSprites_ACR_Ky, 0x40 },
        { L"Type C May",                0xAC7f0, 0xACBf0, indexGGXXSprites_ACR_May, 0x40 },
        { L"Type C Millia",             0xB0600, 0xB0A00, indexGGXXSprites_ACR_Millia, 0x40 },
        { L"Type C Order-Sol",          0xB4350, 0xB4750, indexGGXXSprites_ACR_OrderSol, 0x40 },
        { L"Type C Potemkin",           0xB83F0, 0xB87F0, indexGGXXSprites_ACR_Potemkin, 0x40 },
        { L"Type C Robo-Ky",            0xBBA20, 0xBBE20, indexGGXXSprites_ACR_RoboKy, 0x40 },
        { L"Type C Slayer",             0xBF2f0, 0xBF6f0, indexGGXXSprites_ACR_Slayer, 0x40 },
        { L"Type C Sol",                0xC2550, 0xC2950, indexGGXXSprites_ACR_Sol, 0x40 },
        { L"Type C Testament",          0xC5AC0, 0xC5EC0, indexGGXXSprites_ACR_Testament, 0x40 },
        { L"Type C Venom",              0xC9AD0, 0xC9ED0, indexGGXXSprites_ACR_Venom, 0x40 },
        { L"Type C Zappa",              0xCCE20, 0xCD220, indexGGXXSprites_ACR_Zappa, 0x40 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_Sidebar_Portraits_TypeD
{
    k_strSidebarPortraits_TypeD,
    {
        { L"Type D Background",         0x29c220, 0x29C620, indexGGXXSprites_ACR_Bonus, 0x05 },
        { L"Type D A.B.A",              0x2522a0, 0x2526A0, indexGGXXSprites_ACR_ABA, 0x41 },
        { L"Type D Anji",               0x1b05c0, 0x1B09C0, indexGGXXSprites_ACR_Anji, 0x41 },
        { L"Type D Axl",                0x11edb0, 0x11F1B0, indexGGXXSprites_ACR_Axl, 0x41 },
        { L"Type D Baiken",             0x167e80, 0x168280, indexGGXXSprites_ACR_Baiken, 0x41 },
        { L"Type D Bridget",            0x22dba0, 0x22DFA0, indexGGXXSprites_ACR_Bridget, 0x41 },
        { L"Type D Chipp",              0x1427e0, 0x142BE0, indexGGXXSprites_ACR_Chipp, 0x41 },
        { L"Type D Dizzy",              0x1e7c40, 0x1E8040, indexGGXXSprites_ACR_Dizzy, 0x41 },
        { L"Type D Eddie",              0x1559f0, 0x155DF0, indexGGXXSprites_ACR_Eddie, 0x41 },
        { L"Type D Faust",              0x178a50, 0x178E50, indexGGXXSprites_ACR_Faust, 0x41 },
        { L"Type D I-No",               0x20af00, 0x20B300, indexGGXXSprites_ACR_Ino, 0x41 },
        { L"Type D Jam",                0x19cb60, 0x19CF60, indexGGXXSprites_ACR_Jam, 0x41 },
        { L"Type D Johnny",             0x1c2c50, 0x1C3050, indexGGXXSprites_ACR_Johnny, 0x41 },
        { L"Type D Justice",            0x28b810, 0x28BC10, indexGGXXSprites_ACR_Justice, 0x41 },
        { L"Type D Kliff",              0x2773b0, 0x2777B0, indexGGXXSprites_ACR_Kliff, 0x41 },
        { L"Type D Ky",                 0xe7620, 0xe7A20, indexGGXXSprites_ACR_Ky, 0x41 },
        { L"Type D May",                0xf9ac0, 0xf9Ec0, indexGGXXSprites_ACR_May, 0x41 },
        { L"Type D Millia",             0x10cee0, 0x10D2E0, indexGGXXSprites_ACR_Millia, 0x41 },
        { L"Type D Order-Sol",          0x2656c0, 0x265AC0, indexGGXXSprites_ACR_OrderSol, 0x41 },
        { L"Type D Potemkin",           0x131090, 0x131490, indexGGXXSprites_ACR_Potemkin, 0x41 },
        { L"Type D Robo-Ky",            0x2401A0, 0x2405A0, indexGGXXSprites_ACR_RoboKy, 0x41 },
        { L"Type D Slayer",             0x1f9e80, 0x1FA280, indexGGXXSprites_ACR_Slayer, 0x41 },
        { L"Type D Sol",                0xd4cf0, 0xd50f0, indexGGXXSprites_ACR_Sol, 0x41 },
        { L"Type D Testament",          0x189dc0, 0x18A1C0, indexGGXXSprites_ACR_Testament, 0x41 },
        { L"Type D Venom",              0x1d4a40, 0x1D4E40, indexGGXXSprites_ACR_Venom, 0x41 },
        { L"Type D Zappa",              0x21CCC0, 0x21D0C0, indexGGXXSprites_ACR_Zappa, 0x41 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_SelectScreen =
{
    L"Select Screen",
    {
        //Select Screen 
          { L"Background",                    0xe3340, 0xe3380 },
          { L"Glowing Background",            0xf9ce0, 0xf9d20 },
          { L"Glowing Background (GG Logo)",  0x104250, 0x104290 },
          { L"Glowing Background (XX Skull)", 0x10f340, 0x10f380 },
          { L"Glowing Background (AC Logo)",  0x112cd0, 0x112d10 },
          { L"Moving Parts (1/4)",            0xf9400, 0xf9440 },
          { L"Moving Parts (2/4)",            0x103740, 0x103780 },
          { L"Moving Parts (3/4)",            0x10dea0, 0x10dee0 },
          { L"Moving Parts (4/4)",            0x1120f0, 0x112130 },
          { L"Top Bar",                       0x115560, 0x1155a0 },
          { L"\"Player 1\" Panel",            0x106010, 0x106050 },
          { L"\"Player 2\" Panel",            0x114940, 0x114980 },
          { L"Right Panel",                   0x110eb0, 0x110ef0 },
          { L"Left Panel",                    0xfb620, 0xfb660 },

          { L"Icons Right",       0xffc00, 0xffc40 },
          { L"Icons Left",        0x10a300, 0x10a340 },
          { L"Icons Order-Sol",   0x111af0, 0x111b30 },

          { L"Select Arrow P1",   0xe3260, 0xe32a0 },
          { L"Select Rings P1",   0x1119a0, 0x1119e0 },
          { L"Select Arrow P2",   0xfc3a0, 0xfc3e0 },
          { L"Select Rings P2",   0x115400, 0x115440 },
          { L"Selection Icon",    0x106af0, 0x106b30 },

          { L"Timer Numbers",         0x117b00, 0x117b40 },
          { L"Timer Numbers Flash",   0x117740, 0x117780 },
          { L"Timer Panel/Text",      0x116b60, 0x116ba0 },
          { L"Timer Side Panels",     0x117130, 0x117170 },
          { L"Random Character",      0x117980, 0x1179c0 },

          { L"\"Push Start\" Menu",       0x19a960, 0x19a9a0 },
          { L"\"Character\" Text",        0x199c20, 0x199c60 },
          { L"\"Normal\" Icon",           0x19a460, 0x19a4a0 },
          { L"\"Normal\" Icon (Faded)",   0x19a5b0, 0x19a5f0 },
          { L"\"EX\" Icon",               0x19a700, 0x19a740 },
          { L"\"EX\" Icon (Faded)",       0x19a830, 0x19a870 },
          { L"\"Mode\" Text",             0x199b50, 0x199b90 },
          { L"\"AC\" Icon",               0x199d40, 0x199d80 },
          { L"\"AC\" Icon (Faded)",       0x199e60, 0x199ea0 },
          { L"\"GG\" Icon",               0x19a200, 0x19a240 },
          { L"\"GG\" Icon (Faded)",       0x19a330, 0x19a370 },
          { L"\"GGX\" Icon",              0x199f80, 0x199fc0 },
          { L"\"GGX\" Icon (Faded)",      0x19a0c0, 0x19a100 },

    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_SelectScreenStages =
{
    L"Select Screen Stages",
    {
        { L"Music Select Menu",             0x198900, 0x198940 },
        { L"Music Select Arrow (Left)",     0x198ba0, 0x198be0 },
        { L"Music Select Arrow (Right)",    0x1993e0, 0x199420 },
        { L"Music Select Text",             0x1934d0, 0x193510 },

        { L"Home Stage",                0x18fc50, 0x18fc90 },
        { L"Home Stage (Pressed)",      0x18fec0, 0x18ff00 },
        { L"Random Stage",              0x18f750, 0x18f790 },
        { L"Random Stage (Pressed)",    0x18f9d0, 0x18fa10 },

        { L"Stage Names (A.D. 2172)",       0x192a80, 0x192ac0 },
        { L"Stage Names (Babylion)",        0x192040, 0x192080 },
        { L"Stage Names (Castle)",          0x191db0, 0x191df0 },
        { L"Stage Names (China)",           0x1908f0, 0x190930 },
        { L"Stage Names (Colony)",          0x1903c0, 0x190400 },
        { L"Stage Names (Frasco)",          0x192800, 0x192840 },
        { L"Stage Names (Grave)",           0x192d30, 0x192d70 },
        { L"Stage Names (Grove)",           0x1918b0, 0x1918f0 },
        { L"Stage Names (Heaven)",          0x192fb0, 0x192ff0 },
        { L"Stage Names (Hell)",            0x191610, 0x191650 },
        { L"Stage Names (London)",          0x190130, 0x190170 },
        { L"Stage Names (May's Ship)",      0x190ba0, 0x190be0 },
        { L"Stage Names (Russia)",          0x190660, 0x1906a0 },
        { L"Stage Names (Nirvana)",         0x1910d0, 0x191110 },
        { L"Stage Names (Paris)",           0x191370, 0x1913b0 },
        { L"Stage Names (Phantom City)",    0x1922e0, 0x192320 },
        { L"Stage Names (Verdant)",         0x191b30, 0x191b70 },
        { L"Stage Names (Zepp)",            0x190e50, 0x190e90 },
        { L"Stage Names (Unknown)",         0x192560, 0x1925a0 },

        { L"Stage Select (A.D. 2172)",                  0x147480, 0x147880 },
        { L"Stage Select (Babylon)",                    0x13a250, 0x13a650 },
        { L"Stage Select (Castle)",                     0x1369a0, 0x136da0 },
        { L"Stage Select (China)",                      0x11ef80, 0x11f380 },
        { L"Stage Select (Colony)",                     0x11b8c0, 0x11bcc0 },
        { L"Stage Select (Frasco)",                     0x143be0, 0x143fe0 },
        { L"Stage Select (Grave)",                      0x17d5f0, 0x17d9f0 },
        { L"Stage Select (Grove)",                      0x12fee0, 0x1302e0 },
        { L"Stage Select (Heaven)",                     0x180c60, 0x181060 },
        { L"Stage Select (Hell)",                       0x12c5f0, 0x12c9f0 },
        { L"Stage Select (London)",                     0x117de0, 0x1181e0 },
        { L"Stage Select (May's Ship)",                 0x122640, 0x122a40 },
        { L"Stage Select (Nirvana)",                    0x15f410, 0x15f810 },
        { L"Stage Select (Paris)",                      0x128f90, 0x129390 },
        { L"Stage Select (Phantom City)",               0x13d560, 0x13d960 },
        { L"Stage Select (Russia)",                     0x151d10, 0x152110 },
        { L"Stage Select (Unknown)",                    0x140c70, 0x141070 },
        { L"Stage Select (Verdant)",                    0x133070, 0x133470 },
        { L"Stage Select (Zepp)",                       0x125b50, 0x125f50 },
        { L"Stage Select (A.D. 2172 (Slash)",           0x18b500, 0x18b900 },
        { L"Stage Select (Frasco (Slash))",             0x187b60, 0x187f60 },
        { L"Stage Select (Babylon (Slash/Reload))",     0x1740e0, 0x1744e0 },
        { L"Stage Select (Castle (Slash/Reload))",      0x170780, 0x170b80 },
        { L"Stage Select (China (Slash/Reload))",       0x155250, 0x155650 },
        { L"Stage Select (Colony (Slash/Reload))",      0x14e320, 0x14e720 },
        { L"Stage Select (Grove (Slash/Reload))",       0x169c60, 0x16a060 },
        { L"Stage Select (Hell (Slash/Reload))",        0x1665f0, 0x1669f0 },
        { L"Stage Select (London (Slash/Reload))",      0x14abb0, 0x14afb0 },
        { L"Stage Select (May's Ship (Slash/Reload))",  0x1586f0, 0x158af0 },
        { L"Stage Select (Paris (Slash/Reload))",       0x162cb0, 0x1630b0 },
        { L"Stage Select (Phantom City (Slash/Reload))",0x1774c0, 0x1778c0 },
        { L"Stage Select (Unknown (Slash/Reload))",     0x17ad90, 0x17b190 },
        { L"Stage Select (Verdant (Slash/Reload))",     0x16cfb0, 0x16d3b0 },
        { L"Stage Select (Zepp (Slash/Reload))",        0x15b990, 0x15bd90 },
        //Unsure
        //{ L"Stage Names (Unused?)", 0x193230, 0x193270 }, 
        //{ L"Palette 1", 0xfc480, 0xfc4c0 }, 
        //{ L"Palette 2 ", 0x106bd0, 0x106c10 }, 
        //{ L"Palette 3", 0x18ed70, 0x18edb0 }, 
        //{ L"Palette 4", 0x18efe0, 0x18f020 }, 
        //{ L"Palette 5", 0x18f250, 0x18f290 }, 
        //{ L"Palette 6", 0x18f4d0, 0x18f510 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_SelectScreenPortraits =
{
    L"Select Screen Portraits",
    {
        //Select Screen Portraits
        { L"A.B.A Large Portrait",      0x2970f0, 0x2974f0, indexGGXXSprites_ACR_ABA,       0x45 },
        { L"A.B.A Small Portrait",      0xbe5b0, 0xbe9b0,   indexGGXXSprites_ACR_ABA,       0x42 },
        { L"A.B.A Select Icon",         0xbe190, 0xbe1d0,   indexGGXXSprites_ACR_ABA,       0x43 },
        { L"A.B.A Name",                0x2d1200, 0x2d1240, indexGGXXSprites_ACR_ABA,       0x44 },
        { L"Anji Large Portrait",       0x23a7c0, 0x23abc0, indexGGXXSprites_ACR_Anji,      0x45 },
        { L"Anji Small Portrait",       0x6e400, 0x6e800,   indexGGXXSprites_ACR_Anji,      0x42 },
        { L"Anji Select Icon",          0x6e030, 0x6e070,   indexGGXXSprites_ACR_Anji,      0x43 },
        { L"Anji Name",                 0x2ce120, 0x2ce160, indexGGXXSprites_ACR_Anji,      0x44 },
        { L"Axl Large Portrait",        0x231800, 0x231c00, indexGGXXSprites_ACR_Axl,       0x45 },
        { L"Axl Small Portrait",        0x65180, 0x65580,   indexGGXXSprites_ACR_Axl,       0x42 },
        { L"Axl Select Icon",           0x64d10, 0x64d50,   indexGGXXSprites_ACR_Axl,       0x43 },
        { L"Axl Name",                  0x2cdae0, 0x2cdb20, indexGGXXSprites_ACR_Axl,       0x44 },
        { L"Baiken Large Portrait",     0x212600, 0x212a00, indexGGXXSprites_ACR_Baiken,    0x45 },
        { L"Baiken Small Portrait",     0x4a350, 0x4a750,   indexGGXXSprites_ACR_Baiken,    0x42 },
        { L"Baiken Select Icon",        0x49ec0, 0x49f00,   indexGGXXSprites_ACR_Baiken,    0x43 },
        { L"Baiken Name",               0x2ccb60, 0x2ccba0, indexGGXXSprites_ACR_Baiken,    0x44 },
        { L"Bridget Large Portrait",    0x2824e0, 0x2828e0, indexGGXXSprites_ACR_Bridget,   0x45 },
        { L"Bridget Small Portrait",    0xac6b0, 0xacab0,   indexGGXXSprites_ACR_Bridget,   0x42 },
        { L"Bridget Select Icon",       0xac2a0, 0xac2e0,   indexGGXXSprites_ACR_Bridget,   0x43 },
        { L"Bridget Name",              0x2d05e0, 0x2d0620, indexGGXXSprites_ACR_Bridget,   0x44 },
        { L"Chipp Large Portrait",      0x200d90, 0x201190, indexGGXXSprites_ACR_Chipp,     0x45 },
        { L"Chipp Small Portrait",      0x37af0, 0x37ef0,   indexGGXXSprites_ACR_Chipp,     0x42 },
        { L"Chipp Select Icon",         0x376d0, 0x37710,   indexGGXXSprites_ACR_Chipp,     0x43 },
        { L"Chipp Name",                0x2cbde0, 0x2cbe20, indexGGXXSprites_ACR_Chipp,     0x44 },
        { L"Dizzy Large Portrait",      0x258df0, 0x2591f0, indexGGXXSprites_ACR_Dizzy,     0x45 },
        { L"Dizzy Small Portrait",      0x88f40, 0x89340,   indexGGXXSprites_ACR_Dizzy,     0x42 },
        { L"Dizzy Select Icon",         0x88b00, 0x88b40,   indexGGXXSprites_ACR_Dizzy,     0x43 },
        { L"Dizzy Name",                0x2cf170, 0x2cf1b0, indexGGXXSprites_ACR_Dizzy,     0x44 },
        { L"Eddie Large Portrait",      0x1e65b0, 0x1e69b0, indexGGXXSprites_ACR_Eddie,     0x45 },
        { L"Eddie Small Portrait",      0x253b0, 0x257b0,   indexGGXXSprites_ACR_Eddie,     0x42 },
        { L"Eddie Select Icon",         0x24fa0, 0x24fe0,   indexGGXXSprites_ACR_Eddie,     0x43 },
        { L"Eddie Name",                0x2cb460, 0x2cb4a0, indexGGXXSprites_ACR_Eddie,     0x44 },
        { L"Faust Large Portrait",      0x208b10, 0x208f10, indexGGXXSprites_ACR_Faust,     0x45 },
        { L"Faust Small Portrait",      0x40de0, 0x411e0,   indexGGXXSprites_ACR_Faust,     0x42 },
        { L"Faust Select Icon",         0x409a0, 0x409e0,   indexGGXXSprites_ACR_Faust,     0x43 },
        { L"Faust Name",                0x2cc600, 0x2cc640, indexGGXXSprites_ACR_Faust,     0x44 },
        { L"I-no Large Portrait",       0x270230, 0x270630, indexGGXXSprites_ACR_Ino,       0x45 },
        { L"I-no Small Portrait",       0x9abf0, 0x9aff0,   indexGGXXSprites_ACR_Ino,       0x42 },
        { L"I-no Select Icon",          0x9a860, 0x9a8a0,   indexGGXXSprites_ACR_Ino,       0x43 },
        { L"I-no Name",                 0x2cfb70, 0x2cfbb0, indexGGXXSprites_ACR_Ino,       0x44 },
        { L"Jam Large Portrait",        0x21e3e0, 0x21e7e0, indexGGXXSprites_ACR_Jam,       0x45 },
        { L"Jam Small Portrait",        0x53950, 0x53d50,   indexGGXXSprites_ACR_Jam,       0x42 },
        { L"Jam Select Icon",           0x53510, 0x53550,   indexGGXXSprites_ACR_Jam,       0x43 },
        { L"Jam Name",                  0x2ccea0, 0x2ccee0, indexGGXXSprites_ACR_Jam,       0x44 },
        { L"Johnny Large Portrait",     0x2262b0, 0x2266b0, indexGGXXSprites_ACR_Johnny,    0x45 },
        { L"Johnny Small Portrait",     0x5cad0, 0x5ced0,   indexGGXXSprites_ACR_Johnny,    0x42 },
        { L"Johnny Select Icon",        0x5c710, 0x5c750,   indexGGXXSprites_ACR_Johnny,    0x43 },
        { L"Johnny Name",               0x2cd480, 0x2cd4c0, indexGGXXSprites_ACR_Johnny,    0x44 },
        { L"Justice Large Portrait",    0x2b75a0, 0x2b79a0, indexGGXXSprites_ACR_Justice,   0x45 },
        { L"Justice Small Portrait",    0xda310, 0xda710,   indexGGXXSprites_ACR_Justice,   0x42 },
        { L"Justice Select Icon",       0xd9f20, 0xd9f60,   indexGGXXSprites_ACR_Justice,   0x43 },
        { L"Justice Name",              0x2d25e0, 0x2d2620, indexGGXXSprites_ACR_Justice,   0x44 },
        { L"Kliff Large Portrait",      0x2ac030, 0x2ac430, indexGGXXSprites_ACR_Kliff,     0x45 },
        { L"Kliff Small Portrait",      0xd0e40, 0xd1240,   indexGGXXSprites_ACR_Kliff,     0x42 },
        { L"Kliff Select Icon",         0xd0a00, 0xd0a40,   indexGGXXSprites_ACR_Kliff,     0x43 },
        { L"Kliff Name",                0x2d1de0, 0x2d1e20, indexGGXXSprites_ACR_Kliff,     0x44 },
        { L"Ky Large Portrait",         0x1c8510, 0x1c8910, indexGGXXSprites_ACR_Ky,        0x45 },
        { L"Ky Small Portrait",         0x9b80, 0x9f80,     indexGGXXSprites_ACR_Ky,        0x42 },
        { L"Ky Select Icon",            0x9740, 0x9780,     indexGGXXSprites_ACR_Ky,        0x43 },
        { L"Ky Name",                   0x2ca590, 0x2ca5d0, indexGGXXSprites_ACR_Ky,        0x44 },
        { L"May Large Portrait",        0x1d17b0, 0x1d1bb0, indexGGXXSprites_ACR_May,       0x45 },
        { L"May Small Portrait",        0x12fb0, 0x133b0,   indexGGXXSprites_ACR_May,       0x42 },
        { L"May Select Icon",           0x12b60, 0x12ba0,   indexGGXXSprites_ACR_May,       0x43 },
        { L"May Name",                  0x2caad0, 0x2cab10, indexGGXXSprites_ACR_May,       0x44 },
        { L"Millia Large Portrait",     0x1dbd30, 0x1dc130, indexGGXXSprites_ACR_Millia,    0x45 },
        { L"Millia Small Portrait",     0x1c0a0, 0x1c4a0,   indexGGXXSprites_ACR_Millia,    0x42 },
        { L"Millia Select Icon",        0x1bc10, 0x1bc50,   indexGGXXSprites_ACR_Millia,    0x43 },
        { L"Millia Name",               0x2cae30, 0x2cae70, indexGGXXSprites_ACR_Millia,    0x44 },
        { L"Order-Sol Large Portrait",  0x2a0250, 0x2a0650, indexGGXXSprites_ACR_OrderSol,  0x45 },
        { L"Order-Sol Small Portrait",  0xc7bc0, 0xc7fc0,   indexGGXXSprites_ACR_OrderSol,  0x42 },
        { L"Order-Sol Select Icon",     0xc7700, 0xc7740,   indexGGXXSprites_ACR_OrderSol,  0x43 },
        { L"Order-Sol Name",            0x2d16d0, 0x2d1710, indexGGXXSprites_ACR_OrderSol,  0x44 },
        { L"Potemkin Large Portrait",   0x1f21e0, 0x1f25e0, indexGGXXSprites_ACR_Potemkin,  0x45 },
        { L"Potemkin Small Portrait",   0x2e5b0, 0x2e9b0,   indexGGXXSprites_ACR_Potemkin,  0x42 },
        { L"Potemkin Select Icon",      0x2e150, 0x2e190,   indexGGXXSprites_ACR_Potemkin,  0x43 },
        { L"Potemkin Name",             0x2cb880, 0x2cb8c0, indexGGXXSprites_ACR_Potemkin,  0x44 },
        { L"Robo-Ky Large Portrait",    0x28b580, 0x28b980, indexGGXXSprites_ACR_RoboKy,    0x45 },
        { L"Robo-Ky Small Portrait",    0xb5430, 0xb5830,   indexGGXXSprites_ACR_RoboKy,    0x42 },
        { L"Robo-Ky Select Icon",       0xb4fe0, 0xb5020,   indexGGXXSprites_ACR_RoboKy,    0x43 },
        { L"Robo-Ky Name",              0x2d0c50, 0x2d0c90, indexGGXXSprites_ACR_RoboKy,    0x44 },
        { L"Slayer Large Portrait",     0x267910, 0x267d10, indexGGXXSprites_ACR_Slayer,    0x45 },
        { L"Slayer Small Portrait",     0x91d30, 0x92130,   indexGGXXSprites_ACR_Slayer,    0x42 },
        { L"Slayer Select Icon",        0x91970, 0x919b0,   indexGGXXSprites_ACR_Slayer,    0x43 },
        { L"Slayer Name",               0x2cf560, 0x2cf5a0, indexGGXXSprites_ACR_Slayer,    0x44 },
        { L"Sol Large Portrait",        0x1bec50, 0x1bf050, indexGGXXSprites_ACR_Sol,       0x45 },
        { L"Sol Small Portrait",        0x6f0, 0xaf0,       indexGGXXSprites_ACR_Sol,       0x42 },
        { L"Sol Select Icon",           0x2f0, 0x330,       indexGGXXSprites_ACR_Sol,       0x43 },
        { L"Sol Name",                  0x2c9d40, 0x2c9d80, indexGGXXSprites_ACR_Sol,       0x44 },
        { L"Testament Large Portrait",  0x24d930, 0x24dd30, indexGGXXSprites_ACR_Testament, 0x45 },
        { L"Testament Small Portrait",  0x805e0, 0x809e0,   indexGGXXSprites_ACR_Testament, 0x42 },
        { L"Testament Select Icon",     0x80240, 0x80280,   indexGGXXSprites_ACR_Testament, 0x43 },
        { L"Testament Name",            0x2ceb90, 0x2cebd0, indexGGXXSprites_ACR_Testament, 0x44 },
        { L"Venom Large Portrait",      0x246470, 0x246870, indexGGXXSprites_ACR_Venom,     0x45 },
        { L"Venom Small Portrait",      0x771a0, 0x775a0,   indexGGXXSprites_ACR_Venom,     0x42 },
        { L"Venom Select Icon",         0x76d60, 0x76da0,   indexGGXXSprites_ACR_Venom,     0x43 },
        { L"Venom Name",                0x2ce6b0, 0x2ce6f0, indexGGXXSprites_ACR_Venom,     0x44 },
        { L"Zappa Large Portrait",      0x277210, 0x277610, indexGGXXSprites_ACR_Zappa,     0x45 },
        { L"Zappa Small Portrait",      0xa39c0, 0xa3dc0,   indexGGXXSprites_ACR_Zappa,     0x42 },
        { L"Zappa Select Icon",         0xa3550, 0xa3590,   indexGGXXSprites_ACR_Zappa,     0x43 },
        { L"Zappa Name",                0x2cfee0, 0x2cff20, indexGGXXSprites_ACR_Zappa,     0x44 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_Title =
{
    k_strTitleScreen,
    {
        { L"Title Screen", 0x7AC70, 0x7B070, indexGGXXSprites_ACR_Bonus, 0x06 },
    }
};

const sGCBUPF_ExtrasCollection GGXXACR_S_MissionIcons =
{
    L"Lobby / Mission Icons",
    {
        { L"A.B.A Icon", 0x57520, 0x57920, indexGGXXSprites_ACR_ABA, 0x46 },
        { L"Anji Icon", 0x544d0, 0x548D0, indexGGXXSprites_ACR_Anji, 0x46 },
        { L"Axl Icon", 0x51a90, 0x51E90, indexGGXXSprites_ACR_Axl, 0x46 },
        { L"Baiken Icon", 0x52ff0, 0x533F0, indexGGXXSprites_ACR_Baiken, 0x46 },
        { L"Bridget Icon", 0x56a60, 0x56E60, indexGGXXSprites_ACR_Bridget, 0x46 },
        { L"Chipp Icon", 0x52510, 0x52910, indexGGXXSprites_ACR_Chipp, 0x46 },
        { L"Dizzy Icon", 0x554d0, 0x558D0, indexGGXXSprites_ACR_Dizzy, 0x46 },
        { L"Eddie Icon", 0x52a80, 0x52E80, indexGGXXSprites_ACR_Eddie, 0x46 },
        { L"Faust Icon", 0x53580, 0x53980, indexGGXXSprites_ACR_Faust, 0x46 },
        { L"I-no Icon", 0x55fa0, 0x563A0, indexGGXXSprites_ACR_Ino, 0x46 },
        { L"Jam Icon", 0x53f70, 0x54370, indexGGXXSprites_ACR_Jam, 0x46 },
        { L"Johnny Icon", 0x54a20, 0x54E20, indexGGXXSprites_ACR_Johnny, 0x46 },
        { L"Justice Icon", 0x58590, 0x58990, indexGGXXSprites_ACR_Justice, 0x46 },
        { L"Kliff Icon", 0x58030, 0x58430, indexGGXXSprites_ACR_Kliff, 0x46 },
        { L"Ky Icon", 0x50a80, 0x50E80, indexGGXXSprites_ACR_Ky, 0x46 },
        { L"May Icon", 0x50fd0, 0x513D0, indexGGXXSprites_ACR_May, 0x46 },
        { L"Millia Icon", 0x51540, 0x51940, indexGGXXSprites_ACR_Millia, 0x46 },
        { L"Order-Sol Icon", 0x57ae0, 0x57EE0, indexGGXXSprites_ACR_Sol, 0x46 },
        { L"Potemkin Icon", 0x51fc0, 0x523C0, indexGGXXSprites_ACR_Potemkin, 0x46 },
        { L"Robo-Ky Icon", 0x56fd0, 0x573D0, indexGGXXSprites_ACR_RoboKy, 0x46 },
        { L"Slayer Icon", 0x55a60, 0x55E60, indexGGXXSprites_ACR_Slayer, 0x46 },
        { L"Sol Icon", 0x50530, 0x50930, indexGGXXSprites_ACR_Sol, 0x46 },
        { L"Testament Icon", 0x53a50, 0x53E50, indexGGXXSprites_ACR_Testament, 0x46 },
        { L"Venom Icon", 0x54f70, 0x55370, indexGGXXSprites_ACR_Venom, 0x46 },
        { L"Zappa Icon", 0x564f0, 0x568F0, indexGGXXSprites_ACR_Zappa, 0x46 },
    }
};

extern std::vector<sGCBUPF_BasicFileData> GGXXACR_S_CharacterData;
extern std::vector<sGCBUPF_BasicFileData> GGXXACR_S_ExtrasData;
extern std::vector<sGCBUPF_BasicFileData> GGXXACR_S_EXCharData;

uint32_t TranslateACRGameIdToPalModSpriteId(uint8_t nGameId);
uint8_t TranslatePalModSpriteIdToACRGameId(uint32_t nGameId);
