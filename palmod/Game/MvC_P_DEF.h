#pragma once

#include "MvC_A_DEF.h"

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Ryu =
{
    { L"Main Sprite",   0x00, indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadouken",      0x20, indexCPS2Sprites_Ryu, 0x01 },
    { L"Extra",         0x40, indexCPS2Sprites_Ryu, 0x02 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Chun =
{
    { L"Main Sprite",                           0x00, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Keiokuken (shades)",                    0x20, indexCPS2Sprites_ChunLi, 0x01 },
    { L"Lightning Kicks / Kikouken / Kikosho",  0x40, indexCPS2Sprites_ChunLi, 0x02 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_ShadowLady =
{
    { L"Palette",           0x00, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Infinity Legs",     0x20, indexCPS2Sprites_ChunLi, 0x1 },
    { L"Shadow Leg Flash",  0x40, indexCPS2Sprites_ChunLi, 0x0D },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_WarMachine =
{
    { L"Palette",                       0x00, indexCPS2Sprites_WarMachine },
    { L"Proton Cannon / War Destroyer", 0x20, indexCPS2Sprites_WarMachine, 1 },
    { L"Beams/Blasts/Effect",           0x40, indexCPS2Sprites_WarMachine, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_CapAm =
{
    { L"Palette",       0x00, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"Shield",        0x20, indexCPS2Sprites_CapAm, 1 },
    { L"Charging Star", 0x40, indexCPS2Sprites_CapAm, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Hulk =
{
    { L"Palette",       0x00, indexCPS2Sprites_Hulk },
    { L"Charge",        0x20, indexCPS2Sprites_Hulk, 1 },
    { L"Gamma Quake",   0x40, indexCPS2Sprites_Hulk, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Wolvie =
{
    { L"Palette",       0x00, indexCPS2Sprites_Wolverine, 0, &pairNext },
    { L"Claws",         0x20, indexCPS2Sprites_Wolverine, 1 },
    { L"Berserker FX",  0x40, indexCPS2Sprites_Wolverine, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Gambit =
{
    { L"Palette",                   0x00, indexCPS2Sprites_Gambit, 0x00 },
    { L"Kinetic Card / Trick Card", 0x20, indexCPS2Sprites_Gambit, 1 },
    { L"Cajun Strike",              0x40, indexCPS2Sprites_Gambit, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Venom =
{
    { L"Palette",       0x00, indexCPS2Sprites_Venom, 0, &pairNext },
    { L"Taunt/Hurt",    0x20, indexCPS2Sprites_Venom, 1 },
    { L"Web",           0x40, indexCPS2Sprites_Venom, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Spidey =
{
    { L"Palette",   0x00, indexCPS2Sprites_Spidey, 0x00, &pairNext2 },
    { L"Extra 1",   0x20, indexCPS2Sprites_Spidey, 0x01 },
    { L"Web",       0x40, indexCPS2Sprites_Spidey, 0x02 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Roll =
{
    { L"Palette",       0x00, indexCPS2Sprites_Roll, 0x00 },
    { L"Rush/Eddie",    0x20, indexCPS2Sprites_Megaman, 0x01, &pairNext },
    { L"Beat",          0x40, indexCPS2Sprites_Megaman, 0x2, &pairPrevious },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_CapCom =
{
    { L"Palette",   0x00, indexCPS2Sprites_CapCom, 0x00 },
    { L"Ninjas",    0x20, indexCPS2Sprites_CapCom, 1, &pairNext },
    { L"Hoover",    0x40, indexCPS2Sprites_CapCom, 2, &pairPrevious },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Jin =
{
    { L"Palette",       0x00, indexCPS2Sprites_Jin, 0x00 },
    { L"Blodia FX",     0x20, indexCPS2Sprites_Jin, 1 },
    { L"Blodia Punch",  0x40, indexCPS2Sprites_Jin, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Zangief =
{
    { L"Zangief Palette",           0x00, indexCPS2Sprites_Zangief },
    { L"Zangief Banishing Fist",    0x20, indexCPS2Sprites_Zangief, 1 },
    { L"Extra 2",                   0x40, indexCPS2Sprites_Zangief, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Strider =
{
    { L"Palette",   0x00, indexCPS2Sprites_Strider, 0x00, &pairNextAndNext },
    { L"FX",        0x20, indexCPS2Sprites_Strider, 1 },
    { L"Mech",      0x40, indexCPS2Sprites_Strider, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Morrigan =
{
    { L"Palette",   0x00, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Lilith",    0x20, indexCPS2Sprites_Morrigan, 1 },
    { L"Extra 2",   0x40, indexCPS2Sprites_Morrigan, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Megaman =
{
    { L"Palette",       0x00, indexCPS2Sprites_Megaman, 0x00 },
    { L"Rush/Eddie",    0x20, indexCPS2Sprites_Megaman, 0x01, &pairNext },
    { L"Beat",          0x40, indexCPS2Sprites_Megaman, 0x2, &pairPrevious },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_HVenom =
{
    { L"Palette",       0x00, indexCPS2Sprites_Venom, 0, &pairNext },
    { L"Taunt/Hurt",    0x20, indexCPS2Sprites_Venom, 1 },
    { L"Web",           0x40, indexCPS2Sprites_Venom, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_OHulk =
{
    { L"Palette",       0x00, indexCPS2Sprites_Hulk },
    { L"Charge",        0x20, indexCPS2Sprites_Hulk, 1 },
    { L"Gamma Quake",   0x40, indexCPS2Sprites_Hulk, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_GWM =
{
    { L"Palette",                       0x00, indexCPS2Sprites_WarMachine },
    { L"Proton Cannon / War Destroyer", 0x20, indexCPS2Sprites_WarMachine, 1 },
    { L"Beams / Blasts / Effect",       0x40, indexCPS2Sprites_WarMachine, 2 },
};

const std::vector<sGCBUPF_RelativePaletteData> MVCCorePalettes_D_Lilith =
{
    { L"Palette",       0x00, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan 1",    0x20, indexCPS2Sprites_Morrigan, 0x01 },
    { L"Extra 2",       0x40, indexCPS2Sprites_Morrigan, 2 },
};

const sGCBUPF_ExtrasCollection MVCPalettes_Extras_Ryu =
{
    L"Extras",
    {
        //General
        { L"Shadows Light",         0xea26 + (0x00 * 0x20), 0xea26 + (0x01 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"Shadows Dark",          0xea26 + (0x01 * 0x20), 0xea26 + (0x02 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"Burning 1",             0xea26 + (0x02 * 0x20), 0xea26 + (0x03 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"Burning 2",             0xea26 + (0x03 * 0x20), 0xea26 + (0x04 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"Shocked 1",             0xea26 + (0x04 * 0x20), 0xea26 + (0x05 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"Shocked 2",             0xea26 + (0x05 * 0x20), 0xea26 + (0x06 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"Dark Burning 1",        0xea26 + (0x06 * 0x20), 0xea26 + (0x07 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"Dark Burning 2",        0xea26 + (0x07 * 0x20), 0xea26 + (0x08 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"Kinetic Charged 1",     0xea26 + (0x08 * 0x20), 0xea26 + (0x09 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"Kinetic Charged 2",     0xea26 + (0x09 * 0x20), 0xea26 + (0x0a * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"Kinetic Charged 3",     0xea26 + (0x0a * 0x20), 0xea26 + (0x0b * 0x20), indexCPS2Sprites_Ryu, 0x09 },

        { L"P Ken (Intro)",         0xea26 + (0x0b * 0x20), 0xea26 + (0x0c * 0x20), indexCPS2Sprites_Ryu, 0xa },
        { L"P Sean (Intro)",        0xea26 + (0x0c * 0x20), 0xea26 + (0x0d * 0x20), indexCPS2Sprites_Ryu, 0xb },
        { L"K Ken (Intro)",         0xea26 + (0x0d * 0x20), 0xea26 + (0x0e * 0x20), indexCPS2Sprites_Ryu, 0xa },
        { L"K Sean (Intro)",        0xea26 + (0x0e * 0x20), 0xea26 + (0x0f * 0x20), indexCPS2Sprites_Ryu, 0xb },
        { L"B1 Ken (Intro)",        0xea26 + (0x0f * 0x20), 0xea26 + (0x10 * 0x20), indexCPS2Sprites_Ryu, 0xa },
        { L"B1 Sean (Intro)",       0xea26 + (0x10 * 0x20), 0xea26 + (0x11 * 0x20), indexCPS2Sprites_Ryu, 0xb },
        { L"B2 Ken (Intro)",        0xea26 + (0x11 * 0x20), 0xea26 + (0x12 * 0x20), indexCPS2Sprites_Ryu, 0xa },
        { L"B2 Sean (Intro)",       0xea26 + (0x12 * 0x20), 0xea26 + (0x13 * 0x20), indexCPS2Sprites_Ryu, 0xb },

        { L"P Ken",                 0xea26 + (0x13 * 0x20), 0xea26 + (0x14 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"P Ken Hakouken",        0xea26 + (0x14 * 0x20), 0xea26 + (0x15 * 0x20), indexCPS2Sprites_Ken, 1 },
        { L"P Ken Shoryuken",       0xea26 + (0x15 * 0x20), 0xea26 + (0x16 * 0x20), indexCPS2Sprites_Ken, 2 },
        { L"K Ken",                 0xea26 + (0x16 * 0x20), 0xea26 + (0x17 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"K Ken Hadouken",        0xea26 + (0x17 * 0x20), 0xea26 + (0x18 * 0x20), indexCPS2Sprites_Ken, 1 },
        { L"K Ken Shoryuken",       0xea26 + (0x18 * 0x20), 0xea26 + (0x19 * 0x20), indexCPS2Sprites_Ken, 2 },
        { L"B1 Ken",                0xea26 + (0x19 * 0x20), 0xea26 + (0x1a * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"B1 Ken Hakouken",       0xea26 + (0x1a * 0x20), 0xea26 + (0x1b * 0x20), indexCPS2Sprites_Ken, 1 },
        { L"B1 Ken Shoryuken",      0xea26 + (0x1b * 0x20), 0xea26 + (0x1c * 0x20), indexCPS2Sprites_Ken, 2 },
        { L"B2 Ken",                0xea26 + (0x1c * 0x20), 0xea26 + (0x1d * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"B2 Ken Hadouken",       0xea26 + (0x1d * 0x20), 0xea26 + (0x1e * 0x20), indexCPS2Sprites_Ken, 1 },
        { L"B2 Ken Shoryuken",      0xea26 + (0x1e * 0x20), 0xea26 + (0x1f * 0x20), indexCPS2Sprites_Ken, 2 },

        { L"P Akuma",               0xea26 + (0x1f * 0x20), 0xea26 + (0x20 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"P Akuma Hadouken",      0xea26 + (0x20 * 0x20), 0xea26 + (0x21 * 0x20), indexCPS2Sprites_Akuma, 1 },
        { L"P Akuma Extra",         0xea26 + (0x21 * 0x20), 0xea26 + (0x22 * 0x20) },
        { L"K Akuma",               0xea26 + (0x22 * 0x20), 0xea26 + (0x23 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"K Akuma Hadouken",      0xea26 + (0x23 * 0x20), 0xea26 + (0x24 * 0x20), indexCPS2Sprites_Akuma, 1 },
        { L"K Akuma Extra",         0xea26 + (0x24 * 0x20), 0xea26 + (0x25 * 0x20) },
        { L"B1 Akuma",              0xea26 + (0x25 * 0x20), 0xea26 + (0x26 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"B1 Akuma Hadouken",     0xea26 + (0x26 * 0x20), 0xea26 + (0x27 * 0x20), indexCPS2Sprites_Akuma, 1 },
        { L"B1 Akuma Extra",        0xea26 + (0x27 * 0x20), 0xea26 + (0x28 * 0x20) },
        { L"B2 Akuma",              0xea26 + (0x28 * 0x20), 0xea26 + (0x29 * 0x20), indexCPS2Sprites_Ryu, 0x09 },
        { L"B2 Akuma Hadouken",     0xea26 + (0x29 * 0x20), 0xea26 + (0x2a * 0x20), indexCPS2Sprites_Akuma, 1 },
        { L"B2 Akuma Extra",        0xea26 + (0x2a * 0x20), 0xea26 + (0x2b * 0x20) },
    }
};

const sGCBUPF_ExtrasCollection MVCPalettes_Extras_Zangief =
{
    L"Extras",
    {
        { L"P Zangief SPD Rage 1",      0xb21a + (0x02 * 0x20), 0xb21a + (0x03 * 0x20), indexCPS2Sprites_Zangief },
        { L"P Zangief SPD Rage 2",      0xb21a + (0x03 * 0x20), 0xb21a + (0x04 * 0x20), indexCPS2Sprites_Zangief },
        { L"P Zangief SPD Rage 3",      0xb21a + (0x04 * 0x20), 0xb21a + (0x05 * 0x20), indexCPS2Sprites_Zangief },
        { L"K Zangief SPD Rage 1",      0xb21a + (0x05 * 0x20), 0xb21a + (0x06 * 0x20), indexCPS2Sprites_Zangief },
        { L"K Zangief SPD Rage 2",      0xb21a + (0x06 * 0x20), 0xb21a + (0x07 * 0x20), indexCPS2Sprites_Zangief },
        { L"K Zangief SPD Rage 3",      0xb21a + (0x07 * 0x20), 0xb21a + (0x08 * 0x20), indexCPS2Sprites_Zangief },
        { L"P Zangief SPD Rage 1",      0xb21a + (0x08 * 0x20), 0xb21a + (0x09 * 0x20), indexCPS2Sprites_Zangief },
        { L"P Zangief SPD Rage 2",      0xb21a + (0x09 * 0x20), 0xb21a + (0x0a * 0x20), indexCPS2Sprites_Zangief },
        { L"P Zangief SPD Rage 3",      0xb21a + (0x0a * 0x20), 0xb21a + (0x0b * 0x20), indexCPS2Sprites_Zangief },
        { L"K Zangief SPD Rage 1",      0xb21a + (0x0b * 0x20), 0xb21a + (0x0c * 0x20), indexCPS2Sprites_Zangief },
        { L"K Zangief SPD Rage 2",      0xb21a + (0x0c * 0x20), 0xb21a + (0x0d * 0x20), indexCPS2Sprites_Zangief },
        { L"K Zangief SPD Rage 3",      0xb21a + (0x0d * 0x20), 0xb21a + (0x0e * 0x20), indexCPS2Sprites_Zangief },

        { L"P Mech-Gief Palette",       0xb21a + (0x0e * 0x20), 0xb21a + (0x0f * 0x20), indexCPS2Sprites_Zangief },
        { L"P Mech-Gief Vodka Fire",    0xb21a + (0x0f * 0x20), 0xb21a + (0x10 * 0x20), indexCPS2Sprites_Zangief, 3 },
        { L"P Mech-Gief Extra 2",       0xb21a + (0x10 * 0x20), 0xb21a + (0x11 * 0x20) },
        { L"K Mech-Gief Palette",       0xb21a + (0x11 * 0x20), 0xb21a + (0x12 * 0x20), indexCPS2Sprites_Zangief },
        { L"K Mech-Gief Vodka Fire",    0xb21a + (0x12 * 0x20), 0xb21a + (0x13 * 0x20), indexCPS2Sprites_Zangief, 3 },
        { L"K Mech-Gief Extra 2",       0xb21a + (0x13 * 0x20), 0xb21a + (0x14 * 0x20) },
        { L"B1 Mech-Gief Palette",      0xb21a + (0x14 * 0x20), 0xb21a + (0x15 * 0x20), indexCPS2Sprites_Zangief },
        { L"B1 Mech-Gief Vodka Fire",   0xb21a + (0x15 * 0x20), 0xb21a + (0x16 * 0x20), indexCPS2Sprites_Zangief, 3 },
        { L"B1 Mech-Gief Extra 2",      0xb21a + (0x16 * 0x20), 0xb21a + (0x17 * 0x20) },
        { L"B2 Mech-Gief Palette",      0xb21a + (0x17 * 0x20), 0xb21a + (0x18 * 0x20), indexCPS2Sprites_Zangief },
        { L"B2 Mech-Gief Vodka Fire",   0xb21a + (0x18 * 0x20), 0xb21a + (0x19 * 0x20), indexCPS2Sprites_Zangief, 3 },
        { L"B2 Mech-Gief Extra 2",      0xb21a + (0x19 * 0x20), 0xb21a + (0x1a * 0x20) },

        { L"P Mech-Gief SPD Rage 1",    0xb21a + (0x1a * 0x20), 0xb21a + (0x1b * 0x20), indexCPS2Sprites_Zangief },
        { L"P Mech-Gief SPD Rage 2",    0xb21a + (0x1b * 0x20), 0xb21a + (0x1c * 0x20), indexCPS2Sprites_Zangief },
        { L"P Mech-Gief SPD Rage 3",    0xb21a + (0x1c * 0x20), 0xb21a + (0x1d * 0x20), indexCPS2Sprites_Zangief },
        { L"K Mech-Gief SPD Rage 1",    0xb21a + (0x1d * 0x20), 0xb21a + (0x1e * 0x20), indexCPS2Sprites_Zangief },
        { L"K Mech-Gief SPD Rage 2",    0xb21a + (0x1e * 0x20), 0xb21a + (0x1f * 0x20), indexCPS2Sprites_Zangief },
        { L"K Mech-Gief SPD Rage 3",    0xb21a + (0x1f * 0x20), 0xb21a + (0x20 * 0x20), indexCPS2Sprites_Zangief },
        { L"B1 Mech-Gief SPD Rage 1",   0xb21a + (0x20 * 0x20), 0xb21a + (0x21 * 0x20), indexCPS2Sprites_Zangief },
        { L"B1 Mech-Gief SPD Rage 2",   0xb21a + (0x21 * 0x20), 0xb21a + (0x22 * 0x20), indexCPS2Sprites_Zangief },
        { L"B1 Mech-Gief SPD Rage 3",   0xb21a + (0x22 * 0x20), 0xb21a + (0x23 * 0x20), indexCPS2Sprites_Zangief },
        { L"B2 Mech-Gief SPD Rage 1",   0xb21a + (0x23 * 0x20), 0xb21a + (0x24 * 0x20), indexCPS2Sprites_Zangief },
        { L"B2 Mech-Gief SPD Rage 2",   0xb21a + (0x24 * 0x20), 0xb21a + (0x25 * 0x20), indexCPS2Sprites_Zangief },
        { L"B2 Mech-Gief SPD Rage 3",   0xb21a + (0x25 * 0x20), 0xb21a + (0x26 * 0x20), indexCPS2Sprites_Zangief },

        { L"Shadows Light",             0xb21a + (0x26 * 0x20), 0xb21a + (0x27 * 0x20), indexCPS2Sprites_Zangief },
        { L"Shadows Dark",              0xb21a + (0x27 * 0x20), 0xb21a + (0x28 * 0x20), indexCPS2Sprites_Zangief },
        { L"Burning 1",                 0xb21a + (0x28 * 0x20), 0xb21a + (0x29 * 0x20), indexCPS2Sprites_Zangief },
        { L"Burning 2",                 0xb21a + (0x29 * 0x20), 0xb21a + (0x2a * 0x20), indexCPS2Sprites_Zangief },
        { L"Shocked 1",                 0xb21a + (0x2a * 0x20), 0xb21a + (0x2b * 0x20), indexCPS2Sprites_Zangief },
        { L"Shocked 2",                 0xb21a + (0x2b * 0x20), 0xb21a + (0x2c * 0x20), indexCPS2Sprites_Zangief },
        { L"Dark Burning 1",            0xb21a + (0x2c * 0x20), 0xb21a + (0x2d * 0x20), indexCPS2Sprites_Zangief },
        { L"Dark Burning 2",            0xb21a + (0x2d * 0x20), 0xb21a + (0x2e * 0x20), indexCPS2Sprites_Zangief },
        { L"Kinetic Charged 1",         0xb21a + (0x2e * 0x20), 0xb21a + (0x2f * 0x20), indexCPS2Sprites_Zangief },
        { L"Kinetic Charged 2",         0xb21a + (0x2f * 0x20), 0xb21a + (0x30 * 0x20), indexCPS2Sprites_Zangief },
        { L"Kinetic Charged 3",         0xb21a + (0x30 * 0x20), 0xb21a + (0x31 * 0x20), indexCPS2Sprites_Zangief },
    }
};

const sGCBUPF_ExtrasCollection MVCPalettes_Extras_ShadowLady =
{
    L"Extras",
    {
        { L"Shadows Light",             0xb06a + (0x00 * 0x20), 0xb06a + (0x01 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Shadows Dark",              0xb06a + (0x01 * 0x20), 0xb06a + (0x02 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Burning 1",                 0xb06a + (0x02 * 0x20), 0xb06a + (0x03 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Burning 2",                 0xb06a + (0x03 * 0x20), 0xb06a + (0x04 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Shocked 1",                 0xb06a + (0x04 * 0x20), 0xb06a + (0x05 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Shocked 2",                 0xb06a + (0x05 * 0x20), 0xb06a + (0x06 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Dark Burning 1",            0xb06a + (0x06 * 0x20), 0xb06a + (0x07 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Dark Burning 2",            0xb06a + (0x07 * 0x20), 0xb06a + (0x08 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Kinetic Charged 1",         0xb06a + (0x08 * 0x20), 0xb06a + (0x09 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Kinetic Charged 2",         0xb06a + (0x09 * 0x20), 0xb06a + (0x0a * 0x20), indexCPS2Sprites_ChunLi },
        { L"Kinetic Charged 3",         0xb06a + (0x0a * 0x20), 0xb06a + (0x0b * 0x20), indexCPS2Sprites_ChunLi },

        // ?
        // ?

        { L"P Glimmer 1",               0xb06a + (0x0d * 0x20), 0xb06a + (0x0e * 0x20), indexCPS2Sprites_ChunLi },
        { L"P Glimmer 2",               0xb06a + (0x0e * 0x20), 0xb06a + (0x0f * 0x20), indexCPS2Sprites_ChunLi },
        { L"P Glimmer 3",               0xb06a + (0x0f * 0x20), 0xb06a + (0x10 * 0x20), indexCPS2Sprites_ChunLi },
        { L"P Glimmer 4",               0xb06a + (0x10 * 0x20), 0xb06a + (0x11 * 0x20), indexCPS2Sprites_ChunLi },
        { L"P Glimmer 5",               0xb06a + (0x11 * 0x20), 0xb06a + (0x12 * 0x20), indexCPS2Sprites_ChunLi },
        { L"P Glimmer 6",               0xb06a + (0x12 * 0x20), 0xb06a + (0x13 * 0x20), indexCPS2Sprites_ChunLi },
        { L"P Glimmer 7",               0xb06a + (0x13 * 0x20), 0xb06a + (0x14 * 0x20), indexCPS2Sprites_ChunLi },
        { L"K Glimmer 1",               0xb06a + (0x14 * 0x20), 0xb06a + (0x15 * 0x20), indexCPS2Sprites_ChunLi },
        { L"K Glimmer 2",               0xb06a + (0x15 * 0x20), 0xb06a + (0x16 * 0x20), indexCPS2Sprites_ChunLi },
        { L"K Glimmer 3",               0xb06a + (0x16 * 0x20), 0xb06a + (0x17 * 0x20), indexCPS2Sprites_ChunLi },
        { L"K Glimmer 4",               0xb06a + (0x17 * 0x20), 0xb06a + (0x18 * 0x20), indexCPS2Sprites_ChunLi },
        { L"K Glimmer 5",               0xb06a + (0x18 * 0x20), 0xb06a + (0x19 * 0x20), indexCPS2Sprites_ChunLi },
        { L"K Glimmer 6",               0xb06a + (0x19 * 0x20), 0xb06a + (0x1a * 0x20), indexCPS2Sprites_ChunLi },
        { L"K Glimmer 7",               0xb06a + (0x1a * 0x20), 0xb06a + (0x1b * 0x20), indexCPS2Sprites_ChunLi },

        { L"P Glimmer 8",               0xb06a + (0x1b * 0x20), 0xb06a + (0x1c * 0x20), indexCPS2Sprites_ChunLi },
        { L"P Laser?",                  0xb06a + (0x1c * 0x20), 0xb06a + (0x1d * 0x20) },
        { L"P Missiles",                0xb06a + (0x1d * 0x20), 0xb06a + (0x1e * 0x20) },
        { L"K Glimmer 8",               0xb06a + (0x1e * 0x20), 0xb06a + (0x1f * 0x20), indexCPS2Sprites_ChunLi },
        { L"K Laser?",                  0xb06a + (0x1f * 0x20), 0xb06a + (0x20 * 0x20) },
        { L"K Missiles",                0xb06a + (0x20 * 0x20), 0xb06a + (0x21 * 0x20) },
        { L"B1 Glimmer 8",              0xb06a + (0x21 * 0x20), 0xb06a + (0x22 * 0x20), indexCPS2Sprites_ChunLi },
        { L"B1 Laser?",                 0xb06a + (0x22 * 0x20), 0xb06a + (0x23 * 0x20) },
        { L"B1 Missiles",               0xb06a + (0x23 * 0x20), 0xb06a + (0x24 * 0x20) },
        { L"B2 Glimmer 8",              0xb06a + (0x24 * 0x20), 0xb06a + (0x25 * 0x20), indexCPS2Sprites_ChunLi },
        { L"B2 Laser?",                 0xb06a + (0x25 * 0x20), 0xb06a + (0x26 * 0x20) },
        { L"B2 Missiles",               0xb06a + (0x26 * 0x20), 0xb06a + (0x27 * 0x20) },

        { L"B1 Glimmer 1",              0xb06a + (0x27 * 0x20), 0xb06a + (0x28 * 0x20), indexCPS2Sprites_ChunLi },
        { L"B1 Glimmer 2",              0xb06a + (0x28 * 0x20), 0xb06a + (0x29 * 0x20), indexCPS2Sprites_ChunLi },
        { L"B1 Glimmer 3",              0xb06a + (0x29 * 0x20), 0xb06a + (0x2a * 0x20), indexCPS2Sprites_ChunLi },
        { L"B1 Glimmer 4",              0xb06a + (0x2a * 0x20), 0xb06a + (0x2b * 0x20), indexCPS2Sprites_ChunLi },
        { L"B1 Glimmer 5",              0xb06a + (0x2b * 0x20), 0xb06a + (0x2c * 0x20), indexCPS2Sprites_ChunLi },
        { L"B1 Glimmer 6",              0xb06a + (0x2c * 0x20), 0xb06a + (0x2d * 0x20), indexCPS2Sprites_ChunLi },
        { L"B1 Glimmer 7",              0xb06a + (0x2d * 0x20), 0xb06a + (0x2e * 0x20), indexCPS2Sprites_ChunLi },
        { L"B2 Glimmer 1",              0xb06a + (0x2e * 0x20), 0xb06a + (0x2f * 0x20), indexCPS2Sprites_ChunLi },
        { L"B2 Glimmer 2",              0xb06a + (0x2f * 0x20), 0xb06a + (0x30 * 0x20), indexCPS2Sprites_ChunLi },
        { L"B2 Glimmer 3",              0xb06a + (0x30 * 0x20), 0xb06a + (0x31 * 0x20), indexCPS2Sprites_ChunLi },
        { L"B2 Glimmer 4",              0xb06a + (0x31 * 0x20), 0xb06a + (0x32 * 0x20), indexCPS2Sprites_ChunLi },
        { L"B2 Glimmer 5",              0xb06a + (0x32 * 0x20), 0xb06a + (0x33 * 0x20), indexCPS2Sprites_ChunLi },
        { L"B2 Glimmer 6",              0xb06a + (0x33 * 0x20), 0xb06a + (0x34 * 0x20), indexCPS2Sprites_ChunLi },
        { L"B2 Glimmer 7",              0xb06a + (0x34 * 0x20), 0xb06a + (0x35 * 0x20), indexCPS2Sprites_ChunLi },
    }
};

const sGCBUPF_ExtrasCollection MVCPalettes_Extras_ChunLi =
{
    L"Extras",
    {
        { L"Shadows Light",             0x96ce + (0x00 * 0x20), 0x96ce + (0x01 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Shadows Dark",              0x96ce + (0x01 * 0x20), 0x96ce + (0x02 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Burning 1",                 0x96ce + (0x02 * 0x20), 0x96ce + (0x03 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Burning 2",                 0x96ce + (0x03 * 0x20), 0x96ce + (0x04 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Shocked 1",                 0x96ce + (0x04 * 0x20), 0x96ce + (0x05 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Shocked 2",                 0x96ce + (0x05 * 0x20), 0x96ce + (0x06 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Dark Burning 1",            0x96ce + (0x06 * 0x20), 0x96ce + (0x07 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Dark Burning 2",            0x96ce + (0x07 * 0x20), 0x96ce + (0x08 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Kinetic Charged 1",         0x96ce + (0x08 * 0x20), 0x96ce + (0x09 * 0x20), indexCPS2Sprites_ChunLi },
        { L"Kinetic Charged 2",         0x96ce + (0x09 * 0x20), 0x96ce + (0x0a * 0x20), indexCPS2Sprites_ChunLi },
        { L"Kinetic Charged 3",         0x96ce + (0x0a * 0x20), 0x96ce + (0x0b * 0x20), indexCPS2Sprites_ChunLi },
    }
};

const sGCBUPF_BasicNodeData MVC_NormalNode =
{
    DEF_BUTTONLABEL_4_VS_HOME, 0x60, DEF_BUTTONLABEL_4_VS_HOME,
};

const std::vector<sGCBUPF_BasicFileData> MVC_P_CharacterData =
{
    { L"PL02_10.A0",    L"Captain America",     557584, MVC_NormalNode, MVCCorePalettes_D_CapAm, 0xe742, indexCPS2Sprites_CapAm, 0x00 },
    { L"PL0A_10.A0",    L"Captain Commando",    559964, MVC_NormalNode, MVCCorePalettes_D_CapCom, 0xc87e, indexCPS2Sprites_CapCom, 0x00 },
    { L"PL0B_10.A0",    L"Chun-Li",             504124, MVC_NormalNode, MVCCorePalettes_D_Chun, 0x954e, indexCPS2Sprites_ChunLi, 0x00, MVCPalettes_Extras_ChunLi },
    { L"PL15_10.A0",    L"Shadow Lady",         535932, MVC_NormalNode, MVCCorePalettes_D_ShadowLady, 0xaeea, indexCPS2Sprites_ChunLi, 0x00, MVCPalettes_Extras_ShadowLady },
    { L"PL05_10.A0",    L"Gambit",              551196, MVC_NormalNode, MVCCorePalettes_D_Gambit, 0x935a, indexCPS2Sprites_Gambit, 0x00 },
    { L"PL03_10.A0",    L"Hulk",                561928, MVC_NormalNode, MVCCorePalettes_D_Hulk, 0x91ba, indexCPS2Sprites_Hulk, 0x00 },
    { L"PL13_10.A0",    L"Orange Hulk",         555520, MVC_NormalNode, MVCCorePalettes_D_OHulk, 0x90e2, indexCPS2Sprites_Hulk, 0x00 },
    { L"PL0C_10.A0",    L"Jin",                 565920, MVC_NormalNode, MVCCorePalettes_D_Jin, 0xd10a, indexCPS2Sprites_Jin, 0x00 },
    { L"PL10_10.A0",    L"Megaman",             556872, MVC_NormalNode, MVCCorePalettes_D_Megaman, 0x122c6, indexCPS2Sprites_Megaman, 0x00 },
    { L"PL0F_10.A0",    L"Morrigan",            561340, MVC_NormalNode, MVCCorePalettes_D_Morrigan, 0xf6a6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"PL16_10.A0",    L"Lilith",              551920, MVC_NormalNode, MVCCorePalettes_D_Lilith, 0xde8a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"PL08_10.A0",    L"Roll",                483552, MVC_NormalNode, MVCCorePalettes_D_Roll, 0x10656, indexCPS2Sprites_Roll, 0x00 },
    { L"PL09_10.A0",    L"Ryu",                 554436, MVC_NormalNode, MVCCorePalettes_D_Ryu, 0xe8a6, indexCPS2Sprites_Ryu, 0x00, MVCPalettes_Extras_Ryu },
    { L"PL07_10.A0",    L"Spider-Man",          552000, MVC_NormalNode, MVCCorePalettes_D_Spidey, 0xe46a, indexCPS2Sprites_Spidey, 0x00 },
    { L"PL0E_10.A0",    L"Strider Hiryu",       558924, MVC_NormalNode, MVCCorePalettes_D_Strider, 0xd02a, indexCPS2Sprites_Strider, 0x00 },
    //{ L"PL11_10.A0",    L"UNKNOWN!",          536652
    { L"PL06_10.A0",    L"Venom",               562848, MVC_NormalNode, MVCCorePalettes_D_Venom, 0xaed6, indexCPS2Sprites_Venom, 0x00 },
    { L"PL12_10.A0",    L"Hyper Venom",         556928, MVC_NormalNode, MVCCorePalettes_D_HVenom, 0xb422, indexCPS2Sprites_Venom, 0x00 },
    { L"PL01_10.A0",    L"War Machine",         551784, MVC_NormalNode, MVCCorePalettes_D_WarMachine, 0xba22, indexCPS2Sprites_WarMachine, 0x00 },
    { L"PL14_10.A0",    L"Gold War Machine",    563136, MVC_NormalNode, MVCCorePalettes_D_GWM, 0xb486, indexCPS2Sprites_WarMachine, 0x00 },
    { L"PL04_10.A0",    L"Wolverine",           558200, MVC_NormalNode, MVCCorePalettes_D_Wolvie, 0xa2c6, indexCPS2Sprites_Wolverine, 0x00 },
    { L"PL0D_10.A0",    L"Zangief",             566172, MVC_NormalNode, MVCCorePalettes_D_Zangief, 0xb09a, indexCPS2Sprites_Zangief, 0x00, MVCPalettes_Extras_Zangief },
};
