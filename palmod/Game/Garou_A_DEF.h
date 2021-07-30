#pragma once

// This is all hand-crafted.
// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of Garou_A_ROCK_PALETTES. 
// * Update every array using Garou_A_NUMUNIT below
// That should be it.  Good luck.

const UINT16 GAROU_A_IMGIDS_USED[] =
{
    indexGarouARockHoward,  // 0x00
    indexGarouATerryBogard, // 0x01
    indexGarouAKhushnood,   // 0x02
    indexGarouADong,        // 0x03
    indexGarouAJae,         // 0x04
    indexGarouAHotaru,      // 0x05
    indexGarouAGato,        // 0x06
    indexGarouAKevin,       // 0x07
    indexGarouAGrant,       // 0x08
    indexGarouABJenet,      // 0x09
    indexGarouAHokutomaru,  // 0x0a
    indexGarouAFreeman,     // 0x0b
    indexGarouATizoc,       // 0x0c
    indexGarouAKain,        // 0x0d
    indexGarouAPortraits,   // 0x0e
    indexGarouABonus,       // 0x0f
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_A[] =
{
    { L"Rock A - Main", 0xff00, 0xff20, indexGarouARockHoward },
    { L"Rock A - Purple Fire Palette", 0xff20, 0xff40, indexGarouARockHoward },
    { L"Rock A - Line2", 0xff40, 0xff60 },
    { L"Rock A - On Fire", 0xff60, 0xff80, indexGarouARockHoward },
    { L"Rock A - On Purple", 0xff80, 0xffa0, indexGarouARockHoward },
    { L"Rock A - Electric Palette", 0xffa0, 0xffc0, indexGarouARockHoward },
    { L"Rock A - T.O.P.", 0xffc0, 0xffe0, indexGarouARockHoward },
    { L"Rock A - Super Trail Palette", 0xffe0, 0x10000, indexGarouARockHoward },
    { L"Rock A - Guard Crash Flash", 0x10000, 0x10020, indexGarouARockHoward },
    { L"Rock A - Just Defense Palette", 0x10020, 0x10040, indexGarouARockHoward },
    { L"Rock A - Reppuuken and Move Effects", 0x10040, 0x10060, indexGarouARockHoward, 0x0a },
    { L"Rock A - Raging Storm Super C", 0x10060, 0x10080, indexGarouARockHoward, 0x09 },
    { L"Rock A - Shine Knuckle Super Effects", 0x10080, 0x100a0, indexGarouARockHoward, 0x0c },
    { L"Rock A - Unknown/Unused", 0x100a0, 0x100c0 },
    { L"Rock A - Deadly Rave Finisher", 0x100c0, 0x100e0, indexGarouARockHoward, 0x08 },
    { L"Rock A - Hard Edge/Shine Knuckle Dust", 0x100e0, 0x10100, indexGarouARockHoward, 0x0b },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_B[] =
{
    { L"Rock B - Main", 0x10100, 0x10120, indexGarouARockHoward },
    { L"Rock B - Purple Fire Palette", 0x10120, 0x10140, indexGarouARockHoward },
    { L"Rock B - Line2", 0x10140, 0x10160 },
    { L"Rock B - On Fire", 0x10160, 0x10180, indexGarouARockHoward },
    { L"Rock B - On Purple", 0x10180, 0x101a0, indexGarouARockHoward },
    { L"Rock B - Electric Palette", 0x101a0, 0x101c0, indexGarouARockHoward },
    { L"Rock B - T.O.P.", 0x101c0, 0x101e0, indexGarouARockHoward },
    { L"Rock B - Super Trail Palette", 0x101e0, 0x10200, indexGarouARockHoward },
    { L"Rock B - Guard Crash Flash", 0x10200, 0x10220, indexGarouARockHoward },
    { L"Rock B - Just Defense Palette", 0x10220, 0x10240, indexGarouARockHoward },
    { L"Rock B - Reppuuken and Move Effects", 0x10240, 0x10260, indexGarouARockHoward, 0x0a },
    { L"Rock B - Raging Storm Super C", 0x10260, 0x10280, indexGarouARockHoward, 0x09 },
    { L"Rock B - Shine Knuckle Super Effects", 0x10280, 0x102a0, indexGarouARockHoward, 0x0c },
    { L"Rock B - Unknown/Unused", 0x102a0, 0x102c0 },
    { L"Rock B - Deadly Rave Finisher", 0x102c0, 0x102e0, indexGarouARockHoward, 0x08 },
    { L"Rock B - Hard Edge/Shine Knuckle Dust", 0x102e0, 0x10300, indexGarouARockHoward, 0x0b },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_C[] =
{
    { L"Rock C - Main", 0x10300, 0x10320, indexGarouARockHoward },
    { L"Rock C - Purple Fire Palette", 0x10320, 0x10340, indexGarouARockHoward },
    { L"Rock C - Line2", 0x10340, 0x10360, indexGarouARockHoward },
    { L"Rock C - On Fire", 0x10360, 0x10380, indexGarouARockHoward },
    { L"Rock C - On Purple", 0x10380, 0x103a0, indexGarouARockHoward },
    { L"Rock C - Electric Palette", 0x103a0, 0x103c0, indexGarouARockHoward },
    { L"Rock C - T.O.P.", 0x103c0, 0x103e0, indexGarouARockHoward },
    { L"Rock C - Super Trail Palette", 0x103e0, 0x10400, indexGarouARockHoward },
    { L"Rock C - Guard Crash Flash", 0x10400, 0x10420, indexGarouARockHoward },
    { L"Rock C - Just Defense Palette", 0x10420, 0x10440, indexGarouARockHoward },
    { L"Rock C - Reppuuken and Move Effects", 0x10440, 0x10460, indexGarouARockHoward, 0x0a },
    { L"Rock C - Raging Storm Super C", 0x10460, 0x10480, indexGarouARockHoward, 0x09 },
    { L"Rock C - Shine Knuckle Super Effects", 0x10480, 0x104a0, indexGarouARockHoward, 0x0c },
    { L"Rock C - Unknown/Unused", 0x104a0, 0x104c0 },
    { L"Rock C - Deadly Rave Finisher", 0x104c0, 0x104e0, indexGarouARockHoward, 0x08 },
    { L"Rock C - Hard Edge/Shine Knuckle Dust", 0x104e0, 0x10500, indexGarouARockHoward, 0x0b },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_D[] =
{
    { L"Rock D - Main", 0x10500, 0x10520, indexGarouARockHoward },
    { L"Rock D - Purple Fire Palette", 0x10520, 0x10540, indexGarouARockHoward },
    { L"Rock D - Line2", 0x10540, 0x10560, indexGarouARockHoward },
    { L"Rock D - On Fire", 0x10560, 0x10580, indexGarouARockHoward },
    { L"Rock D - On Purple", 0x10580, 0x105a0, indexGarouARockHoward },
    { L"Rock D - Electric Palette", 0x105a0, 0x105c0, indexGarouARockHoward },
    { L"Rock D - T.O.P.", 0x105c0, 0x105e0, indexGarouARockHoward },
    { L"Rock D - Super Trail Palette", 0x105e0, 0x10600, indexGarouARockHoward },
    { L"Rock D - Guard Crash Flash", 0x10600, 0x10620, indexGarouARockHoward },
    { L"Rock D - Just Defense Palette", 0x10620, 0x10640, indexGarouARockHoward },
    { L"Rock D - Reppuuken and Move Effects", 0x10640, 0x10660, indexGarouARockHoward, 0x0a },
    { L"Rock D - Raging Storm Super C", 0x10660, 0x10680, indexGarouARockHoward, 0x09 },
    { L"Rock D - Shine Knuckle Super Effects", 0x10680, 0x106a0, indexGarouARockHoward, 0x0c },
    { L"Rock D - Unknown/Unused", 0x106a0, 0x106c0 },
    { L"Rock D - Deadly Rave Finisher", 0x106c0, 0x106e0, indexGarouARockHoward, 0x08 },
    { L"Rock D - Hard Edge/Shine Knuckle Dust", 0x106e0, 0x10700, indexGarouARockHoward, 0x0b },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_BOSS[] =
{
    { L"Rock Boss? - Main", 0x10700, 0x10720, indexGarouARockHoward },
    { L"Rock Boss? - Line1", 0x10720, 0x10740 },
    { L"Rock Boss? - Line2", 0x10740, 0x10760, indexGarouARockHoward },
    { L"Rock Boss? - On Fire", 0x10760, 0x10780 },
    { L"Rock Boss? - On Purple", 0x10780, 0x107a0, indexGarouARockHoward },
    { L"Rock Boss? - Electric Palette", 0x107a0, 0x107c0 },
    { L"Rock Boss? - T.O.P.", 0x107c0, 0x107e0, indexGarouARockHoward },
    { L"Rock Boss? - Super Trail Palette", 0x107e0, 0x10800 },
    { L"Rock Boss? - Guard Crash Flash", 0x10800, 0x10820, indexGarouARockHoward },
    { L"Rock Boss? - Just Defense Palette", 0x10820, 0x10840 },
    { L"Rock Boss? - Projectile1", 0x10840, 0x10860 },
    { L"Rock Boss? - Projectile2", 0x10860, 0x10880 },
    { L"Rock Boss? - Projectile3", 0x10880, 0x108a0 },
    { L"Rock Boss? - Projectile4", 0x108a0, 0x108c0 },
    { L"Rock Boss? - Projectile5", 0x108c0, 0x108e0 },
    { L"Rock Boss? - Projectile6", 0x108e0, 0x10900 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_A[] =
{
    { L"Khushnood Butt A - Main", 0xeb00, 0xeb20, indexGarouAKhushnood },
    { L"Khushnood Butt A - Line1", 0xeb20, 0xeb40 },
    { L"Khushnood Butt A - Line2", 0xeb40, 0xeb60 },
    { L"Khushnood Butt A - On Fire", 0xeb60, 0xeb80, indexGarouAKhushnood },
    { L"Khushnood Butt A - On Purple", 0xeb80, 0xeba0, indexGarouAKhushnood },
    { L"Khushnood Butt A - Electric Palette", 0xeba0, 0xebc0, indexGarouAKhushnood },
    { L"Khushnood Butt A - T.O.P.", 0xebc0, 0xebe0, indexGarouAKhushnood },
    { L"Khushnood Butt A - Super Trail Palette", 0xebe0, 0xec00, indexGarouAKhushnood },
    { L"Khushnood Butt A - Guard Crash Flash", 0xec00, 0xec20, indexGarouAKhushnood },
    { L"Khushnood Butt A - Just Defense Palette", 0xec20, 0xec40, indexGarouAKhushnood },
    { L"Khushnood Butt A - Kouken and C/D Supers", 0xec40, 0xec60, indexGarouAKhushnood, 0x09 },
    { L"Khushnood Butt A - A/B Supers", 0xec60, 0xec80, indexGarouAKhushnood, 0x09 },
    { L"Khushnood Butt A - Unused?", 0xec80, 0xeca0 },
    { L"Khushnood Butt A - Win Stuff (The Wood Piece)", 0xeca0, 0xecc0, indexGarouAKhushnood, 0x0a },
    { L"Khushnood Butt A - Kouken Effects (Butt/Marco)", 0xecc0, 0xece0 },
    { L"Khushnood Butt A - Hien Shipuukyaku Effects", 0xece0, 0xed00, indexGarouAKhushnood, 0x08 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_B[] =
{
    { L"Khushnood Butt B - Main", 0xed00, 0xed20, indexGarouAKhushnood },
    { L"Khushnood Butt B - Line1", 0xed20, 0xed40 },
    { L"Khushnood Butt B - Line2", 0xed40, 0xed60 },
    { L"Khushnood Butt B - On Fire", 0xed60, 0xed80, indexGarouAKhushnood },
    { L"Khushnood Butt B - On Purple", 0xed80, 0xeda0, indexGarouAKhushnood },
    { L"Khushnood Butt B - Electric Palette", 0xeda0, 0xedc0, indexGarouAKhushnood },
    { L"Khushnood Butt B - T.O.P.", 0xedc0, 0xede0, indexGarouAKhushnood },
    { L"Khushnood Butt B - Super Trail Palette", 0xede0, 0xee00, indexGarouAKhushnood },
    { L"Khushnood Butt B - Guard Crash Flash", 0xee00, 0xee20, indexGarouAKhushnood },
    { L"Khushnood Butt B - Just Defense Palette", 0xee20, 0xee40, indexGarouAKhushnood },
    { L"Khushnood Butt B - Kouken and C/D Supers", 0xee40, 0xee60, indexGarouAKhushnood, 0x09 },
    { L"Khushnood Butt B - A/B Supers", 0xee60, 0xee80, indexGarouAKhushnood, 0x09 },
    { L"Khushnood Butt B - Unused?", 0xee80, 0xeea0 },
    { L"Khushnood Butt B - Win Stuff (The Wood Piece)", 0xeea0, 0xeec0, indexGarouAKhushnood, 0x0a },
    { L"Khushnood Butt B - Kouken Effects (Butt/Marco)", 0xeec0, 0xeee0 },
    { L"Khushnood Butt B - Hien Shipuukyaku Effects", 0xeee0, 0xef00, indexGarouAKhushnood, 0x08 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_C[] =
{
    { L"Khushnood Butt C - Main", 0xef00, 0xef20, indexGarouAKhushnood },
    { L"Khushnood Butt C - Line1", 0xef20, 0xef40 },
    { L"Khushnood Butt C - Line2", 0xef40, 0xef60 },
    { L"Khushnood Butt C - On Fire", 0xef60, 0xef80, indexGarouAKhushnood },
    { L"Khushnood Butt C - On Purple", 0xef80, 0xefa0, indexGarouAKhushnood },
    { L"Khushnood Butt C - Electric Palette", 0xefa0, 0xefc0, indexGarouAKhushnood },
    { L"Khushnood Butt C - T.O.P.", 0xefc0, 0xefe0, indexGarouAKhushnood },
    { L"Khushnood Butt C - Super Trail Palette", 0xefe0, 0xf000, indexGarouAKhushnood },
    { L"Khushnood Butt C - Guard Crash Flash", 0xf000, 0xf020, indexGarouAKhushnood },
    { L"Khushnood Butt C - Just Defense Palette", 0xf020, 0xf040, indexGarouAKhushnood },
    { L"Khushnood Butt C - Kouken and C/D Supers", 0xf040, 0xf060, indexGarouAKhushnood, 0x09 },
    { L"Khushnood Butt C - A/B Supers", 0xf060, 0xf080, indexGarouAKhushnood, 0x09 },
    { L"Khushnood Butt C - Unused?", 0xf080, 0xf0a0 },
    { L"Khushnood Butt C - Win Stuff (The Wood Piece)", 0xf0a0, 0xf0c0, indexGarouAKhushnood, 0x0a },
    { L"Khushnood Butt C - Kouken Effects (Butt/Marco)", 0xf0c0, 0xf0e0 },
    { L"Khushnood Butt C - Hien Shipuukyaku Effects", 0xf0e0, 0xf100, indexGarouAKhushnood, 0x08 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_D[] =
{
    { L"Khushnood Butt D - Main", 0xf100, 0xf120, indexGarouAKhushnood },
    { L"Khushnood Butt D - Line1", 0xf120, 0xf140 },
    { L"Khushnood Butt D - Line2", 0xf140, 0xf160 },
    { L"Khushnood Butt D - On Fire", 0xf160, 0xf180, indexGarouAKhushnood },
    { L"Khushnood Butt D - On Purple", 0xf180, 0xf1a0, indexGarouAKhushnood },
    { L"Khushnood Butt D - Electric Palette", 0xf1a0, 0xf1c0, indexGarouAKhushnood },
    { L"Khushnood Butt D - T.O.P.", 0xf1c0, 0xf1e0, indexGarouAKhushnood },
    { L"Khushnood Butt D - Super Trail Palette", 0xf1e0, 0xf200, indexGarouAKhushnood },
    { L"Khushnood Butt D - Guard Crash Flash", 0xf200, 0xf220, indexGarouAKhushnood },
    { L"Khushnood Butt D - Just Defense Palette", 0xf220, 0xf240, indexGarouAKhushnood },
    { L"Khushnood Butt D - Kouken and C/D Supers", 0xf240, 0xf260, indexGarouAKhushnood, 0x09 },
    { L"Khushnood Butt D - A/B Supers", 0xf260, 0xf280, indexGarouAKhushnood, 0x09 },
    { L"Khushnood Butt D - Unused?", 0xf280, 0xf2a0 },
    { L"Khushnood Butt D - Win Stuff (The Wood Piece)", 0xf2a0, 0xf2c0, indexGarouAKhushnood, 0x0a },
    { L"Khushnood Butt D - Kouken Effects (Butt/Marco)", 0xf2c0, 0xf2e0 },
    { L"Khushnood Butt D - Hien Shipuukyaku Effects", 0xf2e0, 0xf300, indexGarouAKhushnood, 0x08 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_BOSS[] =
{
    { L"Khushnood Butt Boss? - Main", 0xf300, 0xf320, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Line1", 0xf320, 0xf340 },
    { L"Khushnood Butt Boss? - Line2", 0xf340, 0xf360, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - On Fire", 0xf360, 0xf380 },
    { L"Khushnood Butt Boss? - On Purple", 0xf380, 0xf3a0, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Electric Palette", 0xf3a0, 0xf3c0, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - T.O.P.", 0xf3c0, 0xf3e0, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Super Trail Palette", 0xf3e0, 0xf400 },
    { L"Khushnood Butt Boss? - Guard Crash Flash", 0xf400, 0xf420, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Just Defense Palette", 0xf420, 0xf440 },
    { L"Khushnood Butt Boss? - Projectile1", 0xf440, 0xf460 },
    { L"Khushnood Butt Boss? - Projectile2", 0xf460, 0xf480 },
    { L"Khushnood Butt Boss? - Projectile3", 0xf480, 0xf4a0 },
    { L"Khushnood Butt Boss? - Projectile4", 0xf4a0, 0xf4c0 },
    { L"Khushnood Butt Boss? - Projectile5", 0xf4c0, 0xf4e0 },
    { L"Khushnood Butt Boss? - Projectile6", 0xf4e0, 0xf500 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_A[] =
{
    { L"Terry A - Main", 0xf500, 0xf520, indexGarouATerryBogard, 0x00, &pairNext15 },
    { L"Terry A - Line1", 0xf520, 0xf540 },
    { L"Terry A - Line2", 0xf540, 0xf560 },
    { L"Terry A - On Fire", 0xf560, 0xf580, indexGarouATerryBogard },
    { L"Terry A - On Purple", 0xf580, 0xf5a0, indexGarouATerryBogard },
    { L"Terry A - Electric Palette", 0xf5a0, 0xf5c0, indexGarouATerryBogard },
    { L"Terry A - T.O.P.", 0xf5c0, 0xf5e0, indexGarouATerryBogard },
    { L"Terry A - Super Trail Palette", 0xf5e0, 0xf600, indexGarouATerryBogard },
    { L"Terry A - Guard Crash Flash", 0xf600, 0xf620, indexGarouATerryBogard },
    { L"Terry A - Just Defense Palette", 0xf620, 0xf640, indexGarouATerryBogard },
    { L"Terry A - Buster Wolf Effects", 0xf640, 0xf660, indexGarouATerryBogard, 0x08 },
    { L"Terry A - Power Wave Lighting", 0xf660, 0xf680, indexGarouATerryBogard, 0x0a },
    { L"Terry A - Burn Knuckle/Power Dunk/Buster Wolf Main", 0xf680, 0xf6a0, indexGarouATerryBogard, 0x0a },
    { L"Terry A - Crack Shoot Effects", 0xf6a0, 0xf6c0, indexGarouATerryBogard, 0x09 },
    { L"Terry A - Unused", 0xf6c0, 0xf6e0 },
    { L"Terry A - Terry Extras (Winpose Stuff)", 0xf6e0, 0xf700, indexGarouATerryBogard, 0x01 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_B[] =
{
    { L"Terry B - Main", 0xf700, 0xf720, indexGarouATerryBogard, 0x00, &pairNext15 },
    { L"Terry B - Line1", 0xf720, 0xf740 },
    { L"Terry B - Line2", 0xf740, 0xf760 },
    { L"Terry B - On Fire", 0xf760, 0xf780, indexGarouATerryBogard },
    { L"Terry B - On Purple", 0xf780, 0xf7a0, indexGarouATerryBogard },
    { L"Terry B - Electric Palette", 0xf7a0, 0xf7c0, indexGarouATerryBogard },
    { L"Terry B - T.O.P.", 0xf7c0, 0xf7e0, indexGarouATerryBogard },
    { L"Terry B - Super Trail Palette", 0xf7e0, 0xf800, indexGarouATerryBogard },
    { L"Terry B - Guard Crash Flash", 0xf800, 0xf820, indexGarouATerryBogard },
    { L"Terry B - Just Defense Palette", 0xf820, 0xf840, indexGarouATerryBogard },
    { L"Terry B - Buster Wolf Effects", 0xf840, 0xf860, indexGarouATerryBogard, 0x08 },
    { L"Terry B - Power Wave Lighting", 0xf860, 0xf880, indexGarouATerryBogard, 0x0a },
    { L"Terry B - Burn Knuckle/Power Dunk/Buster Wolf Main", 0xf880, 0xf8a0, indexGarouATerryBogard, 0x0a },
    { L"Terry B - Crack Shoot Effects", 0xf8a0, 0xf8c0, indexGarouATerryBogard, 0x09 },
    { L"Terry B - Unused", 0xf8c0, 0xf8e0 },
    { L"Terry B - Terry Extras (Winpose Stuff)", 0xf8e0, 0xf900, indexGarouATerryBogard, 0x01 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_C[] =
{
    { L"Terry C - Main", 0xf900, 0xf920, indexGarouATerryBogard, 0x00, &pairNext15 },
    { L"Terry C - Line1", 0xf920, 0xf940 },
    { L"Terry C - Line2", 0xf940, 0xf960 },
    { L"Terry C - On Fire", 0xf960, 0xf980, indexGarouATerryBogard },
    { L"Terry C - On Purple", 0xf980, 0xf9a0, indexGarouATerryBogard },
    { L"Terry C - Electric Palette", 0xf9a0, 0xf9c0, indexGarouATerryBogard },
    { L"Terry C - T.O.P.", 0xf9c0, 0xf9e0, indexGarouATerryBogard },
    { L"Terry C - Super Trail Palette", 0xf9e0, 0xfa00, indexGarouATerryBogard },
    { L"Terry C - Guard Crash Flash", 0xfa00, 0xfa20, indexGarouATerryBogard },
    { L"Terry C - Just Defense Palette", 0xfa20, 0xfa40, indexGarouATerryBogard },
    { L"Terry C - Buster Wolf Effects", 0xfa40, 0xfa60, indexGarouATerryBogard, 0x08 },
    { L"Terry C - Power Wave Lighting", 0xfa60, 0xfa80, indexGarouATerryBogard, 0x0a },
    { L"Terry C - Burn Knuckle/Power Dunk/Buster Wolf Main", 0xfa80, 0xfaa0, indexGarouATerryBogard, 0x0a },
    { L"Terry C - Crack Shoot Effects", 0xfaa0, 0xfac0, indexGarouATerryBogard, 0x09 },
    { L"Terry C - Unused", 0xfac0, 0xfae0 },
    { L"Terry C - Terry Extras (Winpose Stuff)", 0xfae0, 0xfb00, indexGarouATerryBogard, 0x01 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_D[] =
{
    { L"Terry D - Main", 0xfb00, 0xfb20, indexGarouATerryBogard, 0x00, &pairNext15 },
    { L"Terry D - Line1", 0xfb20, 0xfb40 },
    { L"Terry D - Line2", 0xfb40, 0xfb60 },
    { L"Terry D - On Fire", 0xfb60, 0xfb80, indexGarouATerryBogard },
    { L"Terry D - On Purple", 0xfb80, 0xfba0, indexGarouATerryBogard },
    { L"Terry D - Electric Palette", 0xfba0, 0xfbc0, indexGarouATerryBogard },
    { L"Terry D - T.O.P.", 0xfbc0, 0xfbe0, indexGarouATerryBogard },
    { L"Terry D - Super Trail Palette", 0xfbe0, 0xfc00, indexGarouATerryBogard },
    { L"Terry D - Guard Crash Flash", 0xfc00, 0xfc20, indexGarouATerryBogard },
    { L"Terry D - Just Defense Palette", 0xfc20, 0xfc40, indexGarouATerryBogard },
    { L"Terry D - Buster Wolf Effects", 0xfc40, 0xfc60, indexGarouATerryBogard, 0x08 },
    { L"Terry D - Power Wave Lighting", 0xfc60, 0xfc80, indexGarouATerryBogard, 0x0a },
    { L"Terry D - Burn Knuckle/Power Dunk/Buster Wolf Main", 0xfc80, 0xfca0, indexGarouATerryBogard, 0x0a },
    { L"Terry D - Crack Shoot Effects", 0xfca0, 0xfcc0, indexGarouATerryBogard, 0x09 },
    { L"Terry D - Unused", 0xfcc0, 0xfce0 },
    { L"Terry D - Terry Extras (Winpose Stuff)", 0xfce0, 0xfd00, indexGarouATerryBogard, 0x01 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_BOSS[] =
{
    { L"Terry Boss? - Main", 0xfd00, 0xfd20, indexGarouATerryBogard },
    { L"Terry Boss? - Line1", 0xfd20, 0xfd40 },
    { L"Terry Boss? - Line2", 0xfd40, 0xfd60, indexGarouATerryBogard },
    { L"Terry Boss? - On Fire", 0xfd60, 0xfd80 },
    { L"Terry Boss? - On Purple", 0xfd80, 0xfda0, indexGarouATerryBogard },
    { L"Terry Boss? - Electric Palette", 0xfda0, 0xfdc0 },
    { L"Terry Boss? - T.O.P.", 0xfdc0, 0xfde0, indexGarouATerryBogard },
    { L"Terry Boss? - Super Trail Palette", 0xfde0, 0xfe00 },
    { L"Terry Boss? - Guard Crash Flash", 0xfe00, 0xfe20, indexGarouATerryBogard },
    { L"Terry Boss? - Just Defense Palette", 0xfe20, 0xfe40 },
    { L"Terry Boss? - Projectile1", 0xfe40, 0xfe60 },
    { L"Terry Boss? - Projectile2", 0xfe60, 0xfe80 },
    { L"Terry Boss? - Projectile3", 0xfe80, 0xfea0 },
    { L"Terry Boss? - Projectile4", 0xfea0, 0xfec0 },
    { L"Terry Boss? - Projectile5", 0xfec0, 0xfee0 },
    { L"Terry Boss? - Projectile6", 0xfee0, 0xff00 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_A[] =
{
    { L"Dong Hwan A - Main", 0x10900, 0x10920, indexGarouADong },
    { L"Dong Hwan A - Line1", 0x10920, 0x10940 },
    { L"Dong Hwan A - Line2", 0x10940, 0x10960 },
    { L"Dong Hwan A - On Fire", 0x10960, 0x10980, indexGarouADong },
    { L"Dong Hwan A - On Purple", 0x10980, 0x109a0, indexGarouADong },
    { L"Dong Hwan A - Electric Palette", 0x109a0, 0x109c0, indexGarouADong },
    { L"Dong Hwan A - T.O.P.", 0x109c0, 0x109e0, indexGarouADong },
    { L"Dong Hwan A - Super Trail Palette", 0x109e0, 0x10a00, indexGarouADong },
    { L"Dong Hwan A - Guard Crash Flash", 0x10a00, 0x10a20, indexGarouADong },
    { L"Dong Hwan A - Just Defense Palette", 0x10a20, 0x10a40, indexGarouADong },
    { L"Dong Hwan A - Electricity Extras", 0x10a40, 0x10a60, indexGarouADong, 0x08 },
    { L"Dong Hwan A - Electricity Flash (Dong Hwan)", 0x10a60, 0x10a80 },
    { L"Dong Hwan A - Electricity Moves 1", 0x10a80, 0x10aa0, indexGarouADong, 0x09 },
    { L"Dong Hwan A - Electricity Moves 2", 0x10aa0, 0x10ac0, indexGarouADong, 0x09 },
    { L"Dong Hwan A - Unused", 0x10ac0, 0x10ae0 },
    { L"Dong Hwan A - Kim Kaphwan Win Stuff", 0x10ae0, 0x10b00, indexGarouADong, 0x0a },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_B[] =
{
    { L"Dong Hwan B - Main", 0x10b00, 0x10b20, indexGarouADong },
    { L"Dong Hwan B - Line1", 0x10b20, 0x10b40 },
    { L"Dong Hwan B - Line2", 0x10b40, 0x10b60 },
    { L"Dong Hwan B - On Fire", 0x10b60, 0x10b80, indexGarouADong },
    { L"Dong Hwan B - On Purple", 0x10b80, 0x10ba0, indexGarouADong },
    { L"Dong Hwan B - Electric Palette", 0x10ba0, 0x10bc0, indexGarouADong },
    { L"Dong Hwan B - T.O.P.", 0x10bc0, 0x10be0, indexGarouADong },
    { L"Dong Hwan B - Super Trail Palette", 0x10be0, 0x10c00, indexGarouADong },
    { L"Dong Hwan B - Guard Crash Flash", 0x10c00, 0x10c20, indexGarouADong },
    { L"Dong Hwan B - Just Defense Palette", 0x10c20, 0x10c40, indexGarouADong },
    { L"Dong Hwan B - Electricity Extras", 0x10c40, 0x10c60 },
    { L"Dong Hwan B - Electricity Flash (Dong Hwan)", 0x10c60, 0x10c80 },
    { L"Dong Hwan B - Electricity Moves 1", 0x10c80, 0x10ca0, indexGarouADong, 0x09 },
    { L"Dong Hwan B - Electricity Moves 2", 0x10ca0, 0x10cc0, indexGarouADong, 0x09 },
    { L"Dong Hwan B - Unused", 0x10cc0, 0x10ce0 },
    { L"Dong Hwan B - Kim Kaphwan Win Stuff", 0x10ce0, 0x10d00, indexGarouADong, 0x0a },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_C[] =
{
    { L"Dong Hwan C - Main", 0x10d00, 0x10d20, indexGarouADong },
    { L"Dong Hwan C - Line1", 0x10d20, 0x10d40 },
    { L"Dong Hwan C - Line2", 0x10d40, 0x10d60 },
    { L"Dong Hwan C - On Fire", 0x10d60, 0x10d80, indexGarouADong },
    { L"Dong Hwan C - On Purple", 0x10d80, 0x10da0, indexGarouADong },
    { L"Dong Hwan C - Electric Palette", 0x10da0, 0x10dc0, indexGarouADong },
    { L"Dong Hwan C - T.O.P.", 0x10dc0, 0x10de0, indexGarouADong },
    { L"Dong Hwan C - Super Trail Palette", 0x10de0, 0x10e00, indexGarouADong },
    { L"Dong Hwan C - Guard Crash Flash", 0x10e00, 0x10e20, indexGarouADong },
    { L"Dong Hwan C - Just Defense Palette", 0x10e20, 0x10e40, indexGarouADong },
    { L"Dong Hwan C - Electricity Extras", 0x10e40, 0x10e60, indexGarouADong, 0x08 },
    { L"Dong Hwan C - Electricity Flash (Dong Hwan)", 0x10e60, 0x10e80 },
    { L"Dong Hwan C - Electricity Moves 1", 0x10e80, 0x10ea0, indexGarouADong, 0x09 },
    { L"Dong Hwan C - Electricity Moves 2", 0x10ea0, 0x10ec0, indexGarouADong, 0x09 },
    { L"Dong Hwan C - Unused", 0x10ec0, 0x10ee0 },
    { L"Dong Hwan C - Kim Kaphwan Win Stuff", 0x10ee0, 0x10f00, indexGarouADong, 0x0a },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_D[] =
{
    { L"Dong Hwan D - Main", 0x10f00, 0x10f20, indexGarouADong },
    { L"Dong Hwan D - Line1", 0x10f20, 0x10f40 },
    { L"Dong Hwan D - Line2", 0x10f40, 0x10f60 },
    { L"Dong Hwan D - On Fire", 0x10f60, 0x10f80, indexGarouADong },
    { L"Dong Hwan D - On Purple", 0x10f80, 0x10fa0, indexGarouADong },
    { L"Dong Hwan D - Electric Palette", 0x10fa0, 0x10fc0, indexGarouADong },
    { L"Dong Hwan D - T.O.P.", 0x10fc0, 0x10fe0, indexGarouADong },
    { L"Dong Hwan D - Super Trail Palette", 0x10fe0, 0x11000, indexGarouADong },
    { L"Dong Hwan D - Guard Crash Flash", 0x11000, 0x11020, indexGarouADong },
    { L"Dong Hwan D - Just Defense Palette", 0x11020, 0x11040, indexGarouADong },
    { L"Dong Hwan D - Electricity Extras", 0x11040, 0x11060, indexGarouADong, 0x08 },
    { L"Dong Hwan D - Electricity Flash (Dong Hwan)", 0x11060, 0x11080 },
    { L"Dong Hwan D - Electricity Moves 1", 0x11080, 0x110a0, indexGarouADong, 0x09 },
    { L"Dong Hwan D - Electricity Moves 2", 0x110a0, 0x110c0, indexGarouADong, 0x09 },
    { L"Dong Hwan D - Unused", 0x110c0, 0x110e0 },
    { L"Dong Hwan D - Kim Kaphwan Win Stuff", 0x110e0, 0x11100, indexGarouADong, 0x0a },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_BOSS[] =
{
    { L"Dong Hwan Boss? - Main", 0x11100, 0x11120, indexGarouADong },
    { L"Dong Hwan Boss? - Line1", 0x11120, 0x11140 },
    { L"Dong Hwan Boss? - Line2", 0x11140, 0x11160, indexGarouADong },
    { L"Dong Hwan Boss? - On Fire", 0x11160, 0x11180 },
    { L"Dong Hwan Boss? - On Purple", 0x11180, 0x111a0, indexGarouADong },
    { L"Dong Hwan Boss? - Electric Palette", 0x111a0, 0x111c0 },
    { L"Dong Hwan Boss? - T.O.P.", 0x111c0, 0x111e0, indexGarouADong },
    { L"Dong Hwan Boss? - Super Trail Palette", 0x111e0, 0x11200 },
    { L"Dong Hwan Boss? - Guard Crash Flash", 0x11200, 0x11220, indexGarouADong },
    { L"Dong Hwan Boss? - Just Defense Palette", 0x11220, 0x11240 },
    { L"Dong Hwan Boss? - Projectile1", 0x11240, 0x11260 },
    { L"Dong Hwan Boss? - Projectile2", 0x11260, 0x11280 },
    { L"Dong Hwan Boss? - Projectile3", 0x11280, 0x112a0 },
    { L"Dong Hwan Boss? - Projectile4", 0x112a0, 0x112c0 },
    { L"Dong Hwan Boss? - Projectile5", 0x112c0, 0x112e0 },
    { L"Dong Hwan Boss? - Projectile6", 0x112e0, 0x11300 },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_A[] =
{
    { L"Jae Hoon A - Main", 0x11300, 0x11320, indexGarouAJae },
    { L"Jae Hoon A - Line1", 0x11320, 0x11340 },
    { L"Jae Hoon A - Line2", 0x11340, 0x11360 },
    { L"Jae Hoon A - On Fire", 0x11360, 0x11380, indexGarouAJae },
    { L"Jae Hoon A - On Purple", 0x11380, 0x113a0, indexGarouAJae },
    { L"Jae Hoon A - Electric Palette", 0x113a0, 0x113c0, indexGarouAJae },
    { L"Jae Hoon A - T.O.P.", 0x113c0, 0x113e0, indexGarouAJae },
    { L"Jae Hoon A - Super Trail Palette", 0x113e0, 0x11400, indexGarouAJae },
    { L"Jae Hoon A - Guard Crash Flash", 0x11400, 0x11420, indexGarouAJae },
    { L"Jae Hoon A - Just Defense Palette", 0x11420, 0x11440, indexGarouAJae },
    { L"Jae Hoon A - Fire Effects", 0x11440, 0x11460, indexGarouAJae, 0x08 },
    { L"Jae Hoon A - Fire Flash (Jae Hoon)", 0x11460, 0x11480 },
    { L"Jae Hoon A - Unused", 0x11480, 0x114a0 },
    { L"Jae Hoon A - Winpose Teacup", 0x114a0, 0x114c0, indexGarouAJae, 0x0a },
    { L"Jae Hoon A - Winpose Towel", 0x114c0, 0x114e0, indexGarouAJae, 0x0b },
    { L"Jae Hoon A - Winpose Girl (Need Names)", 0x114e0, 0x11500, indexGarouAJae, 0x09 },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_B[] =
{
    { L"Jae Hoon B - Main", 0x11500, 0x11520, indexGarouAJae },
    { L"Jae Hoon B - Line1", 0x11520, 0x11540 },
    { L"Jae Hoon B - Line2", 0x11540, 0x11560 },
    { L"Jae Hoon B - On Fire", 0x11560, 0x11580, indexGarouAJae },
    { L"Jae Hoon B - On Purple", 0x11580, 0x115a0, indexGarouAJae },
    { L"Jae Hoon B - Electric Palette", 0x115a0, 0x115c0, indexGarouAJae },
    { L"Jae Hoon B - T.O.P.", 0x115c0, 0x115e0, indexGarouAJae },
    { L"Jae Hoon B - Super Trail Palette", 0x115e0, 0x11600, indexGarouAJae },
    { L"Jae Hoon B - Guard Crash Flash", 0x11600, 0x11620, indexGarouAJae },
    { L"Jae Hoon B - Just Defense Palette", 0x11620, 0x11640, indexGarouAJae },
    { L"Jae Hoon B - Fire Effects", 0x11640, 0x11660, indexGarouAJae, 0x08 },
    { L"Jae Hoon B - Fire Flash (Jae Hoon)", 0x11660, 0x11680 },
    { L"Jae Hoon B - Unused", 0x11680, 0x116a0 },
    { L"Jae Hoon B - Winpose Teacup", 0x116a0, 0x116c0, indexGarouAJae, 0x0a },
    { L"Jae Hoon B - Winpose Towel", 0x116c0, 0x116e0, indexGarouAJae, 0x0b },
    { L"Jae Hoon B - Winpose Girl (Need Names)", 0x116e0, 0x11700, indexGarouAJae, 0x09 },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_C[] =
{
    { L"Jae Hoon C - Main", 0x11700, 0x11720, indexGarouAJae },
    { L"Jae Hoon C - Line1", 0x11720, 0x11740 },
    { L"Jae Hoon C - Line2", 0x11740, 0x11760 },
    { L"Jae Hoon C - On Fire", 0x11760, 0x11780, indexGarouAJae },
    { L"Jae Hoon C - On Purple", 0x11780, 0x117a0, indexGarouAJae },
    { L"Jae Hoon C - Electric Palette", 0x117a0, 0x117c0, indexGarouAJae },
    { L"Jae Hoon C - T.O.P.", 0x117c0, 0x117e0, indexGarouAJae },
    { L"Jae Hoon C - Super Trail Palette", 0x117e0, 0x11800, indexGarouAJae },
    { L"Jae Hoon C - Guard Crash Flash", 0x11800, 0x11820, indexGarouAJae },
    { L"Jae Hoon C - Just Defense Palette", 0x11820, 0x11840, indexGarouAJae },
    { L"Jae Hoon C - Fire Effects", 0x11840, 0x11860, indexGarouAJae, 0x08 },
    { L"Jae Hoon C - Fire Flash (Jae Hoon)", 0x11860, 0x11880 },
    { L"Jae Hoon C - Unused", 0x11880, 0x118a0 },
    { L"Jae Hoon C - Winpose Teacup", 0x118a0, 0x118c0, indexGarouAJae, 0x0a },
    { L"Jae Hoon C - Winpose Towel", 0x118c0, 0x118e0, indexGarouAJae, 0x0b },
    { L"Jae Hoon C - Winpose Girl (Need Names)", 0x118e0, 0x11900, indexGarouAJae, 0x09 },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_D[] =
{
    { L"Jae Hoon D - Main", 0x11900, 0x11920, indexGarouAJae },
    { L"Jae Hoon D - Line1", 0x11920, 0x11940 },
    { L"Jae Hoon D - Line2", 0x11940, 0x11960 },
    { L"Jae Hoon D - On Fire", 0x11960, 0x11980, indexGarouAJae },
    { L"Jae Hoon D - On Purple", 0x11980, 0x119a0, indexGarouAJae },
    { L"Jae Hoon D - Electric Palette", 0x119a0, 0x119c0, indexGarouAJae },
    { L"Jae Hoon D - T.O.P.", 0x119c0, 0x119e0, indexGarouAJae },
    { L"Jae Hoon D - Super Trail Palette", 0x119e0, 0x11a00, indexGarouAJae },
    { L"Jae Hoon D - Guard Crash Flash", 0x11a00, 0x11a20, indexGarouAJae },
    { L"Jae Hoon D - Just Defense Palette", 0x11a20, 0x11a40, indexGarouAJae },
    { L"Jae Hoon D - Fire Effects", 0x11a40, 0x11a60, indexGarouAJae, 0x08 },
    { L"Jae Hoon D - Fire Flash (Jae Hoon)", 0x11a60, 0x11a80 },
    { L"Jae Hoon D - Unused", 0x11a80, 0x11aa0 },
    { L"Jae Hoon D - Winpose Teacup", 0x11aa0, 0x11ac0, indexGarouAJae, 0x0a },
    { L"Jae Hoon D - Winpose Towel", 0x11ac0, 0x11ae0, indexGarouAJae, 0x0b },
    { L"Jae Hoon D - Winpose Girl (Need Names)", 0x11ae0, 0x11b00, indexGarouAJae, 0x09 },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_BOSS[] =
{
    { L"Jae Hoon Boss? - Main", 0x11b00, 0x11b20, indexGarouAJae },
    { L"Jae Hoon Boss? - Line1", 0x11b20, 0x11b40 },
    { L"Jae Hoon Boss? - Line2", 0x11b40, 0x11b60, indexGarouAJae },
    { L"Jae Hoon Boss? - On Fire", 0x11b60, 0x11b80 },
    { L"Jae Hoon Boss? - On Purple", 0x11b80, 0x11ba0, indexGarouAJae },
    { L"Jae Hoon Boss? - Electric Palette", 0x11ba0, 0x11bc0 },
    { L"Jae Hoon Boss? - T.O.P.", 0x11bc0, 0x11be0, indexGarouAJae },
    { L"Jae Hoon Boss? - Super Trail Palette", 0x11be0, 0x11c00 },
    { L"Jae Hoon Boss? - Guard Crash Flash", 0x11c00, 0x11c20, indexGarouAJae },
    { L"Jae Hoon Boss? - Just Defense Palette", 0x11c20, 0x11c40 },
    { L"Jae Hoon Boss? - Projectile1", 0x11c40, 0x11c60 },
    { L"Jae Hoon Boss? - Projectile2", 0x11c60, 0x11c80 },
    { L"Jae Hoon Boss? - Projectile3", 0x11c80, 0x11ca0 },
    { L"Jae Hoon Boss? - Projectile4", 0x11ca0, 0x11cc0 },
    { L"Jae Hoon Boss? - Projectile5", 0x11cc0, 0x11ce0 },
    { L"Jae Hoon Boss? - Projectile6", 0x11ce0, 0x11d00 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_A[] =
{
    { L"Hotaru A - Main", 0x11d00, 0x11d20, indexGarouAHotaru },
    { L"Hotaru A - Itokatsu", 0x11d20, 0x11d40, indexGarouAHotaru, 0x09 },
    { L"Hotaru A - Unused", 0x11d40, 0x11d60 },
    { L"Hotaru A - On Fire", 0x11d60, 0x11d80, indexGarouAHotaru },
    { L"Hotaru A - On Purple", 0x11d80, 0x11da0, indexGarouAHotaru },
    { L"Hotaru A - Electric Palette", 0x11da0, 0x11dc0, indexGarouAHotaru },
    { L"Hotaru A - T.O.P.", 0x11dc0, 0x11de0, indexGarouAHotaru },
    { L"Hotaru A - Super Trail Palette", 0x11de0, 0x11e00, indexGarouAHotaru },
    { L"Hotaru A - Guard Crash Flash", 0x11e00, 0x11e20, indexGarouAHotaru },
    { L"Hotaru A - Just Defense Palette", 0x11e20, 0x11e40, indexGarouAHotaru },
    { L"Hotaru A - Move Effects", 0x11e40, 0x11e60, indexGarouAHotaru, 0x0a },
    { L"Hotaru A - Move Flash", 0x11e60, 0x11e80, indexGarouAHotaru },
    { L"Hotaru A - Tenshou Ranki D Finisher", 0x11e80, 0x11ea0, indexGarouAHotaru, 0x0b },
    { L"Hotaru A - Hotaru Stage Intro Stuff", 0x11ea0, 0x11ec0, indexGarouAHotaru, 0x08 },
    { L"Hotaru A - Unused", 0x11ec0, 0x11ee0 },
    { L"Hotaru A - Unused", 0x11ee0, 0x11f00 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_B[] =
{
    { L"Hotaru B - Main", 0x11f00, 0x11f20, indexGarouAHotaru },
    { L"Hotaru B - Itokatsu", 0x11f20, 0x11f40, indexGarouAHotaru, 0x09 },
    { L"Hotaru B - Unused", 0x11f40, 0x11f60 },
    { L"Hotaru B - On Fire", 0x11f60, 0x11f80, indexGarouAHotaru },
    { L"Hotaru B - On Purple", 0x11f80, 0x11fa0, indexGarouAHotaru },
    { L"Hotaru B - Electric Palette", 0x11fa0, 0x11fc0, indexGarouAHotaru },
    { L"Hotaru B - T.O.P.", 0x11fc0, 0x11fe0, indexGarouAHotaru },
    { L"Hotaru B - Super Trail Palette", 0x11fe0, 0x12000, indexGarouAHotaru },
    { L"Hotaru B - Guard Crash Flash", 0x12000, 0x12020, indexGarouAHotaru },
    { L"Hotaru B - Just Defense Palette", 0x12020, 0x12040, indexGarouAHotaru },
    { L"Hotaru B - Move Effects", 0x12040, 0x12060, indexGarouAHotaru, 0x0a },
    { L"Hotaru B - Move Flash", 0x12060, 0x12080, indexGarouAHotaru },
    { L"Hotaru B - Tenshou Ranki D Finisher", 0x12080, 0x120a0, indexGarouAHotaru, 0x0b },
    { L"Hotaru B - Hotaru Stage Intro Stuff", 0x120a0, 0x120c0, indexGarouAHotaru, 0x08 },
    { L"Hotaru B - Unused", 0x120c0, 0x120e0 },
    { L"Hotaru B - Unused", 0x120e0, 0x12100 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_C[] =
{
    { L"Hotaru C - Main", 0x12100, 0x12120, indexGarouAHotaru },
    { L"Hotaru C - Itokatsu", 0x12120, 0x12140, indexGarouAHotaru, 0x09 },
    { L"Hotaru C - Unused", 0x12140, 0x12160 },
    { L"Hotaru C - On Fire", 0x12160, 0x12180, indexGarouAHotaru },
    { L"Hotaru C - On Purple", 0x12180, 0x121a0, indexGarouAHotaru },
    { L"Hotaru C - Electric Palette", 0x121a0, 0x121c0, indexGarouAHotaru },
    { L"Hotaru C - T.O.P.", 0x121c0, 0x121e0, indexGarouAHotaru },
    { L"Hotaru C - Super Trail Palette", 0x121e0, 0x12200, indexGarouAHotaru },
    { L"Hotaru C - Guard Crash Flash", 0x12200, 0x12220, indexGarouAHotaru },
    { L"Hotaru C - Just Defense Palette", 0x12220, 0x12240, indexGarouAHotaru },
    { L"Hotaru C - Move Effects", 0x12240, 0x12260, indexGarouAHotaru, 0x0a },
    { L"Hotaru C - Move Flash", 0x12260, 0x12280, indexGarouAHotaru },
    { L"Hotaru C - Tenshou Ranki D Finisher", 0x12280, 0x122a0, indexGarouAHotaru, 0x0b },
    { L"Hotaru C - Hotaru Stage Intro Stuff", 0x122a0, 0x122c0, indexGarouAHotaru, 0x08 },
    { L"Hotaru C - Unused", 0x122c0, 0x122e0 },
    { L"Hotaru C - Unused", 0x122e0, 0x12300 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_D[] =
{
    { L"Hotaru D - Main", 0x12300, 0x12320, indexGarouAHotaru },
    { L"Hotaru D - Itokatsu", 0x12320, 0x12340, indexGarouAHotaru, 0x09 },
    { L"Hotaru D - Unused", 0x12340, 0x12360 },
    { L"Hotaru D - On Fire", 0x12360, 0x12380, indexGarouAHotaru },
    { L"Hotaru D - On Purple", 0x12380, 0x123a0, indexGarouAHotaru },
    { L"Hotaru D - Electric Palette", 0x123a0, 0x123c0, indexGarouAHotaru },
    { L"Hotaru D - T.O.P.", 0x123c0, 0x123e0, indexGarouAHotaru },
    { L"Hotaru D - Super Trail Palette", 0x123e0, 0x12400, indexGarouAHotaru },
    { L"Hotaru D - Guard Crash Flash", 0x12400, 0x12420, indexGarouAHotaru },
    { L"Hotaru D - Just Defense Palette", 0x12420, 0x12440, indexGarouAHotaru },
    { L"Hotaru D - Move Effects", 0x12440, 0x12460, indexGarouAHotaru, 0x0a },
    { L"Hotaru D - Move Flash", 0x12460, 0x12480, indexGarouAHotaru },
    { L"Hotaru D - Tenshou Ranki D Finisher", 0x12480, 0x124a0, indexGarouAHotaru, 0x0b },
    { L"Hotaru D - Hotaru Stage Intro Stuff", 0x124a0, 0x124c0, indexGarouAHotaru, 0x08 },
    { L"Hotaru D - Unused", 0x124c0, 0x124e0 },
    { L"Hotaru D - Unused", 0x124e0, 0x12500 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_BOSS[] =
{
    { L"Hotaru Boss? - Main", 0x12500, 0x12520, indexGarouAHotaru },
    { L"Hotaru Boss? - Line1", 0x12520, 0x12540 },
    { L"Hotaru Boss? - Line2", 0x12540, 0x12560, indexGarouAHotaru },
    { L"Hotaru Boss? - On Fire", 0x12560, 0x12580 },
    { L"Hotaru Boss? - On Purple", 0x12580, 0x125a0, indexGarouAHotaru },
    { L"Hotaru Boss? - Electric Palette", 0x125a0, 0x125c0 },
    { L"Hotaru Boss? - T.O.P.", 0x125c0, 0x125e0, indexGarouAHotaru },
    { L"Hotaru Boss? - Super Trail Palette", 0x125e0, 0x12600 },
    { L"Hotaru Boss? - Guard Crash Flash", 0x12600, 0x12620, indexGarouAHotaru },
    { L"Hotaru Boss? - Just Defense Palette", 0x12620, 0x12640 },
    { L"Hotaru Boss? - Projectile1", 0x12640, 0x12660 },
    { L"Hotaru Boss? - Projectile2", 0x12660, 0x12680 },
    { L"Hotaru Boss? - Projectile3", 0x12680, 0x126a0 },
    { L"Hotaru Boss? - Projectile4", 0x126a0, 0x126c0 },
    { L"Hotaru Boss? - Projectile5", 0x126c0, 0x126e0 },
    { L"Hotaru Boss? - Projectile6", 0x126e0, 0x12700 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_A[] =
{
    { L"Gato A - Main", 0x12700, 0x12720, indexGarouAGato },
    { L"Gato A - Ryuuga B Effects", 0x12720, 0x12740, indexGarouAGato },
    { L"Gato A - Gato Stage Stuff", 0x12740, 0x12760, indexGarouAGato, 0x08 },
    { L"Gato A - On Fire", 0x12760, 0x12780, indexGarouAGato },
    { L"Gato A - On Purple", 0x12780, 0x127a0, indexGarouAGato },
    { L"Gato A - Electric Palette", 0x127a0, 0x127c0, indexGarouAGato },
    { L"Gato A - T.O.P.", 0x127c0, 0x127e0, indexGarouAGato },
    { L"Gato A - Super Trail Palette", 0x127e0, 0x12800, indexGarouAGato },
    { L"Gato A - Guard Crash Flash", 0x12800, 0x12820, indexGarouAGato },
    { L"Gato A - Just Defense Palette", 0x12820, 0x12840, indexGarouAGato },
    { L"Gato A - Special Move Effects", 0x12840, 0x12860, indexGarouAGato, 0x09 },
    { L"Gato A - Ryuuga B Main Attack", 0x12860, 0x12880, indexGarouAGato, 0x0b },
    { L"Gato A - Ryuuga D Main Attack", 0x12880, 0x128a0, indexGarouAGato, 0x0b },
    { L"Gato A - Unknown", 0x128a0, 0x128c0 },
    { L"Gato A - Reiga C Super Effects", 0x128c0, 0x128e0, indexGarouAGato, 0x0a },
    { L"Gato A - Ryuuga D Effects", 0x128e0, 0x12900 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_B[] =
{
    { L"Gato B - Main", 0x12900, 0x12920, indexGarouAGato },
    { L"Gato B - Ryuuga B Effects", 0x12920, 0x12940, indexGarouAGato },
    { L"Gato B - Gato Stage Stuff", 0x12940, 0x12960, indexGarouAGato, 0x08 },
    { L"Gato B - On Fire", 0x12960, 0x12980, indexGarouAGato },
    { L"Gato B - On Purple", 0x12980, 0x129a0, indexGarouAGato },
    { L"Gato B - Electric Palette", 0x129a0, 0x129c0, indexGarouAGato },
    { L"Gato B - T.O.P.", 0x129c0, 0x129e0, indexGarouAGato },
    { L"Gato B - Super Trail Palette", 0x129e0, 0x12a00, indexGarouAGato },
    { L"Gato B - Guard Crash Flash", 0x12a00, 0x12a20, indexGarouAGato },
    { L"Gato B - Just Defense Palette", 0x12a20, 0x12a40, indexGarouAGato },
    { L"Gato B - Special Move Effects", 0x12a40, 0x12a60, indexGarouAGato, 0x09 },
    { L"Gato B - Ryuuga B Main Attack", 0x12a60, 0x12a80, indexGarouAGato, 0x0b },
    { L"Gato B - Ryuuga D Main Attack", 0x12a80, 0x12aa0, indexGarouAGato, 0x0b },
    { L"Gato B - Unknown", 0x12aa0, 0x12ac0 },
    { L"Gato B - Reiga C Super Effects", 0x12ac0, 0x12ae0, indexGarouAGato, 0x0a },
    { L"Gato B - Ryuuga D Effects", 0x12ae0, 0x12b00 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_C[] =
{
    { L"Gato C - Main", 0x12b00, 0x12b20, indexGarouAGato },
    { L"Gato C - Ryuuga B Effects", 0x12b20, 0x12b40, indexGarouAGato },
    { L"Gato C - Gato Stage Stuff", 0x12b40, 0x12b60, indexGarouAGato, 0x08 },
    { L"Gato C - On Fire", 0x12b60, 0x12b80, indexGarouAGato },
    { L"Gato C - On Purple", 0x12b80, 0x12ba0, indexGarouAGato },
    { L"Gato C - Electric Palette", 0x12ba0, 0x12bc0, indexGarouAGato },
    { L"Gato C - T.O.P.", 0x12bc0, 0x12be0, indexGarouAGato },
    { L"Gato C - Super Trail Palette", 0x12be0, 0x12c00, indexGarouAGato },
    { L"Gato C - Guard Crash Flash", 0x12c00, 0x12c20, indexGarouAGato },
    { L"Gato C - Just Defense Palette", 0x12c20, 0x12c40, indexGarouAGato },
    { L"Gato C - Special Move Effects", 0x12c40, 0x12c60, indexGarouAGato, 0x09 },
    { L"Gato C - Ryuuga B Main Attack", 0x12c60, 0x12c80, indexGarouAGato, 0x0b },
    { L"Gato C - Ryuuga D Main Attack", 0x12c80, 0x12ca0, indexGarouAGato, 0x0b },
    { L"Gato C - Unknown", 0x12ca0, 0x12cc0 },
    { L"Gato C - Reiga C Super Effects", 0x12cc0, 0x12ce0, indexGarouAGato, 0x0a },
    { L"Gato C - Ryuuga D Effects", 0x12ce0, 0x12d00 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_D[] =
{
    { L"Gato D - Main", 0x12d00, 0x12d20, indexGarouAGato },
    { L"Gato D - Ryuuga B Effects", 0x12d20, 0x12d40, indexGarouAGato },
    { L"Gato D - Gato Stage Stuff", 0x12d40, 0x12d60, indexGarouAGato, 0x08 },
    { L"Gato D - On Fire", 0x12d60, 0x12d80, indexGarouAGato },
    { L"Gato D - On Purple", 0x12d80, 0x12da0, indexGarouAGato },
    { L"Gato D - Electric Palette", 0x12da0, 0x12dc0, indexGarouAGato },
    { L"Gato D - T.O.P.", 0x12dc0, 0x12de0, indexGarouAGato },
    { L"Gato D - Super Trail Palette", 0x12de0, 0x12e00, indexGarouAGato },
    { L"Gato D - Guard Crash Flash", 0x12e00, 0x12e20, indexGarouAGato },
    { L"Gato D - Just Defense Palette", 0x12e20, 0x12e40, indexGarouAGato },
    { L"Gato D - Special Move Effects", 0x12e40, 0x12e60, indexGarouAGato, 0x09 },
    { L"Gato D - Ryuuga B Main Attack", 0x12e60, 0x12e80, indexGarouAGato, 0x0b },
    { L"Gato D - Ryuuga D Main Attack", 0x12e80, 0x12ea0, indexGarouAGato, 0x0b },
    { L"Gato D - Unknown", 0x12ea0, 0x12ec0 },
    { L"Gato D - Reiga C Super Effects", 0x12ec0, 0x12ee0, indexGarouAGato, 0x0a },
    { L"Gato D - Ryuuga D Effects", 0x12ee0, 0x12f00 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_BOSS[] =
{
    { L"Gato Boss? - Main", 0x12f00, 0x12f20, indexGarouAGato },
    { L"Gato Boss? - Line1", 0x12f20, 0x12f40 },
    { L"Gato Boss? - Line2", 0x12f40, 0x12f60, indexGarouAGato },
    { L"Gato Boss? - On Fire", 0x12f60, 0x12f80 },
    { L"Gato Boss? - On Purple", 0x12f80, 0x12fa0, indexGarouAGato },
    { L"Gato Boss? - Electric Palette", 0x12fa0, 0x12fc0 },
    { L"Gato Boss? - T.O.P.", 0x12fc0, 0x12fe0, indexGarouAGato },
    { L"Gato Boss? - Super Trail Palette", 0x12fe0, 0x13000 },
    { L"Gato Boss? - Guard Crash Flash", 0x13000, 0x13020, indexGarouAGato },
    { L"Gato Boss? - Just Defense Palette", 0x13020, 0x13040 },
    { L"Gato Boss? - Projectile1", 0x13040, 0x13060 },
    { L"Gato Boss? - Projectile2", 0x13060, 0x13080 },
    { L"Gato Boss? - Projectile3", 0x13080, 0x130a0 },
    { L"Gato Boss? - Projectile4", 0x130a0, 0x130c0 },
    { L"Gato Boss? - Projectile5", 0x130c0, 0x130e0 },
    { L"Gato Boss? - Projectile6", 0x130e0, 0x13100 },
};


const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_A[] =
{
    { L"Kevin A - Main", 0x13100, 0x13120, indexGarouAKevin },
    { L"Kevin A - Marky", 0x13120, 0x13140, indexGarouAKevin, 0x0a },
    { L"Kevin A - Line2", 0x13140, 0x13160 },
    { L"Kevin A - On Fire", 0x13160, 0x13180, indexGarouAKevin },
    { L"Kevin A - On Purple", 0x13180, 0x131a0, indexGarouAKevin },
    { L"Kevin A - Electric Palette", 0x131a0, 0x131c0, indexGarouAKevin },
    { L"Kevin A - T.O.P.", 0x131c0, 0x131e0, indexGarouAKevin },
    { L"Kevin A - Super Trail Palette", 0x131e0, 0x13200, indexGarouAKevin },
    { L"Kevin A - Guard Crash Flash", 0x13200, 0x13220, indexGarouAKevin },
    { L"Kevin A - Just Defense Palette", 0x13220, 0x13240, indexGarouAKevin },
    { L"Kevin A - Move Effects", 0x13240, 0x13260, indexGarouAKevin, 0x0b },
    { L"Kevin A - Explosions", 0x13260, 0x13280, indexGarouAKevin, 0x08 },
    { L"Kevin A - Newspaper", 0x13280, 0x132a0, indexGarouAKevin, 0x09 },
    { L"Kevin A - Projectile4", 0x132a0, 0x132c0 },
    { L"Kevin A - Projectile5", 0x132c0, 0x132e0 },
    { L"Kevin A - Projectile6", 0x132e0, 0x13300 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_B[] =
{
    { L"Kevin B - Main", 0x13300, 0x13320, indexGarouAKevin },
    { L"Kevin B - Marky", 0x13320, 0x13340, indexGarouAKevin, 0x0a },
    { L"Kevin B - Line2", 0x13340, 0x13360 },
    { L"Kevin B - On Fire", 0x13360, 0x13380, indexGarouAKevin },
    { L"Kevin B - On Purple", 0x13380, 0x133a0, indexGarouAKevin },
    { L"Kevin B - Electric Palette", 0x133a0, 0x133c0, indexGarouAKevin },
    { L"Kevin B - T.O.P.", 0x133c0, 0x133e0, indexGarouAKevin },
    { L"Kevin B - Super Trail Palette", 0x133e0, 0x13400, indexGarouAKevin },
    { L"Kevin B - Guard Crash Flash", 0x13400, 0x13420, indexGarouAKevin },
    { L"Kevin B - Just Defense Palette", 0x13420, 0x13440, indexGarouAKevin },
    { L"Kevin B - Move Effects", 0x13440, 0x13460, indexGarouAKevin, 0x0b },
    { L"Kevin B - Explosions", 0x13460, 0x13480, indexGarouAKevin, 0x08 },
    { L"Kevin B - Newspaper", 0x13480, 0x134a0, indexGarouAKevin, 0x09 },
    { L"Kevin B - Projectile4", 0x134a0, 0x134c0 },
    { L"Kevin B - Projectile5", 0x134c0, 0x134e0 },
    { L"Kevin B - Projectile6", 0x134e0, 0x13500 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_C[] =
{
    { L"Kevin C - Main", 0x13500, 0x13520, indexGarouAKevin },
    { L"Kevin C - Marky", 0x13520, 0x13540, indexGarouAKevin, 0x0a },
    { L"Kevin C - Line2", 0x13540, 0x13560 },
    { L"Kevin C - On Fire", 0x13560, 0x13580, indexGarouAKevin },
    { L"Kevin C - On Purple", 0x13580, 0x135a0, indexGarouAKevin },
    { L"Kevin C - Electric Palette", 0x135a0, 0x135c0, indexGarouAKevin },
    { L"Kevin C - T.O.P.", 0x135c0, 0x135e0, indexGarouAKevin },
    { L"Kevin C - Super Trail Palette", 0x135e0, 0x13600, indexGarouAKevin },
    { L"Kevin C - Guard Crash Flash", 0x13600, 0x13620, indexGarouAKevin },
    { L"Kevin C - Just Defense Palette", 0x13620, 0x13640, indexGarouAKevin },
    { L"Kevin C - Move Effects", 0x13640, 0x13660, indexGarouAKevin, 0x0b },
    { L"Kevin C - Explosions", 0x13660, 0x13680, indexGarouAKevin, 0x08 },
    { L"Kevin C - Newspaper", 0x13680, 0x136a0, indexGarouAKevin, 0x09 },
    { L"Kevin C - Projectile4", 0x136a0, 0x136c0 },
    { L"Kevin C - Projectile5", 0x136c0, 0x136e0 },
    { L"Kevin C - Projectile6", 0x136e0, 0x13700 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_D[] =
{
    { L"Kevin D - Main", 0x13700, 0x13720, indexGarouAKevin },
    { L"Kevin D - Marky", 0x13720, 0x13740, indexGarouAKevin, 0x0a },
    { L"Kevin D - Line2", 0x13740, 0x13760 },
    { L"Kevin D - On Fire", 0x13760, 0x13780, indexGarouAKevin },
    { L"Kevin D - On Purple", 0x13780, 0x137a0, indexGarouAKevin },
    { L"Kevin D - Electric Palette", 0x137a0, 0x137c0, indexGarouAKevin },
    { L"Kevin D - T.O.P.", 0x137c0, 0x137e0, indexGarouAKevin },
    { L"Kevin D - Super Trail Palette", 0x137e0, 0x13800, indexGarouAKevin },
    { L"Kevin D - Guard Crash Flash", 0x13800, 0x13820, indexGarouAKevin },
    { L"Kevin D - Just Defense Palette", 0x13820, 0x13840, indexGarouAKevin },
    { L"Kevin D - Move Effects", 0x13840, 0x13860, indexGarouAKevin, 0x0b },
    { L"Kevin D - Explosions", 0x13860, 0x13880, indexGarouAKevin, 0x08 },
    { L"Kevin D - Newspaper", 0x13880, 0x138a0, indexGarouAKevin, 0x09 },
    { L"Kevin D - Projectile4", 0x138a0, 0x138c0 },
    { L"Kevin D - Projectile5", 0x138c0, 0x138e0 },
    { L"Kevin D - Projectile6", 0x138e0, 0x13900 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_BOSS[] =
{
    { L"Kevin Boss? - Main", 0x13900, 0x13920, indexGarouAKevin },
    { L"Kevin Boss? - Line1", 0x13920, 0x13940 },
    { L"Kevin Boss? - Line2", 0x13940, 0x13960, indexGarouAKevin },
    { L"Kevin Boss? - On Fire", 0x13960, 0x13980 },
    { L"Kevin Boss? - On Purple", 0x13980, 0x139a0, indexGarouAKevin },
    { L"Kevin Boss? - Electric Palette", 0x139a0, 0x139c0 },
    { L"Kevin Boss? - T.O.P.", 0x139c0, 0x139e0, indexGarouAKevin },
    { L"Kevin Boss? - Super Trail Palette", 0x139e0, 0x13a00, indexGarouAKevin },
    { L"Kevin Boss? - Guard Crash Flash", 0x13a00, 0x13a20, indexGarouAKevin },
    { L"Kevin Boss? - Just Defense Palette", 0x13a20, 0x13a40, indexGarouAKevin },
    { L"Kevin Boss? - Projectile1", 0x13a40, 0x13a60 },
    { L"Kevin Boss? - Projectile2", 0x13a60, 0x13a80 },
    { L"Kevin Boss? - Projectile3", 0x13a80, 0x13aa0 },
    { L"Kevin Boss? - Projectile4", 0x13aa0, 0x13ac0 },
    { L"Kevin Boss? - Projectile5", 0x13ac0, 0x13ae0 },
    { L"Kevin Boss? - Projectile6", 0x13ae0, 0x13b00 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_A[] =
{
    { L"Grant A - Main", 0x13b00, 0x13b20, indexGarouAGrant },
    { L"Grant A - Line1", 0x13b20, 0x13b40 },
    { L"Grant A - Line2", 0x13b40, 0x13b60 },
    { L"Grant A - On Fire", 0x13b60, 0x13b80, indexGarouAGrant },
    { L"Grant A - On Purple", 0x13b80, 0x13ba0, indexGarouAGrant },
    { L"Grant A - Electric Palette", 0x13ba0, 0x13bc0, indexGarouAGrant },
    { L"Grant A - T.O.P.", 0x13bc0, 0x13be0, indexGarouAGrant },
    { L"Grant A - Super Trail Palette", 0x13be0, 0x13c00, indexGarouAGrant },
    { L"Grant A - Guard Crash Flash", 0x13c00, 0x13c20, indexGarouAGrant },
    { L"Grant A - Just Defense Palette", 0x13c20, 0x13c40, indexGarouAGrant },
    { L"Grant A - Main Special Attack", 0x13c40, 0x13c60, indexGarouAGrant, 0x09 },
    { L"Grant A - Unused", 0x13c60, 0x13c80 },
    { L"Grant A - Intro Stuff", 0x13c80, 0x13ca0 },
    { L"Grant A - Special Move Effects", 0x13ca0, 0x13cc0 },
    { L"Grant A - Majin Super C/D", 0x13cc0, 0x13ce0 },
    { L"Grant A - Dust Effects", 0x13ce0, 0x13d00, indexGarouAGrant, 0x08 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_B[] =
{
    { L"Grant B - Main", 0x13d00, 0x13d20, indexGarouAGrant },
    { L"Grant B - Line1", 0x13d20, 0x13d40 },
    { L"Grant B - Line2", 0x13d40, 0x13d60 },
    { L"Grant B - On Fire", 0x13d60, 0x13d80, indexGarouAGrant },
    { L"Grant B - On Purple", 0x13d80, 0x13da0, indexGarouAGrant },
    { L"Grant B - Electric Palette", 0x13da0, 0x13dc0, indexGarouAGrant },
    { L"Grant B - T.O.P.", 0x13dc0, 0x13de0, indexGarouAGrant },
    { L"Grant B - Super Trail Palette", 0x13de0, 0x13e00, indexGarouAGrant },
    { L"Grant B - Guard Crash Flash", 0x13e00, 0x13e20, indexGarouAGrant },
    { L"Grant B - Just Defense Palette", 0x13e20, 0x13e40, indexGarouAGrant },
    { L"Grant B - Main Special Attack", 0x13e40, 0x13e60, indexGarouAGrant, 0x09 },
    { L"Grant B - Unused", 0x13e60, 0x13e80 },
    { L"Grant B - Intro Stuff", 0x13e80, 0x13ea0 },
    { L"Grant B - Special Move Effects", 0x13ea0, 0x13ec0 },
    { L"Grant B - Majin Super C/D", 0x13ec0, 0x13ee0 },
    { L"Grant B - Dust Effects", 0x13ee0, 0x13f00, indexGarouAGrant, 0x08 }
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_C[] =
{
    { L"Grant C - Main", 0x13f00, 0x13f20, indexGarouAGrant },
    { L"Grant C - Line1", 0x13f20, 0x13f40 },
    { L"Grant C - Line2", 0x13f40, 0x13f60 },
    { L"Grant C - On Fire", 0x13f60, 0x13f80, indexGarouAGrant },
    { L"Grant C - On Purple", 0x13f80, 0x13fa0, indexGarouAGrant },
    { L"Grant C - Electric Palette", 0x13fa0, 0x13fc0, indexGarouAGrant },
    { L"Grant C - T.O.P.", 0x13fc0, 0x13fe0, indexGarouAGrant },
    { L"Grant C - Super Trail Palette", 0x13fe0, 0x14000, indexGarouAGrant },
    { L"Grant C - Guard Crash Flash", 0x14000, 0x14020, indexGarouAGrant },
    { L"Grant C - Just Defense Palette", 0x14020, 0x14040, indexGarouAGrant },
    { L"Grant C - Main Special Attack", 0x14040, 0x14060, indexGarouAGrant, 0x09 },
    { L"Grant C - Unused", 0x14060, 0x14080 },
    { L"Grant C - Intro Stuff", 0x14080, 0x140a0 },
    { L"Grant C - Special Move Effects", 0x140a0, 0x140c0 },
    { L"Grant C - Majin Super C/D", 0x140c0, 0x140e0 },
    { L"Grant C - Dust Effects", 0x140e0, 0x14100, indexGarouAGrant, 0x08 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_D[] =
{
    { L"Grant D - Main", 0x14100, 0x14120, indexGarouAGrant },
    { L"Grant D - Line1", 0x14120, 0x14140 },
    { L"Grant D - Line2", 0x14140, 0x14160 },
    { L"Grant D - On Fire", 0x14160, 0x14180, indexGarouAGrant },
    { L"Grant D - On Purple", 0x14180, 0x141a0, indexGarouAGrant },
    { L"Grant D - Electric Palette", 0x141a0, 0x141c0, indexGarouAGrant },
    { L"Grant D - T.O.P.", 0x141c0, 0x141e0, indexGarouAGrant },
    { L"Grant D - Super Trail Palette", 0x141e0, 0x14200, indexGarouAGrant },
    { L"Grant D - Guard Crash Flash", 0x14200, 0x14220, indexGarouAGrant },
    { L"Grant D - Just Defense Palette", 0x14220, 0x14240, indexGarouAGrant },
    { L"Grant D - Main Special Attack", 0x14240, 0x14260, indexGarouAGrant, 0x09 },
    { L"Grant D - Unused", 0x14260, 0x14280 },
    { L"Grant D - Intro Stuff", 0x14280, 0x142a0 },
    { L"Grant D - Special Move Effects", 0x142a0, 0x142c0 },
    { L"Grant D - Majin Super C/D", 0x142c0, 0x142e0 },
    { L"Grant D - Dust Effects", 0x142e0, 0x14300, indexGarouAGrant, 0x08 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_BOSS[] =
{
    { L"Grant Boss? - Main", 0x14300, 0x14320, indexGarouAGrant },
    { L"Grant Boss? - Line1", 0x14320, 0x14340 },
    { L"Grant Boss? - Line2", 0x14340, 0x14360 },
    { L"Grant Boss? - On Fire", 0x14360, 0x14380, indexGarouAGrant },
    { L"Grant Boss? - On Purple", 0x14380, 0x143a0, indexGarouAGrant },
    { L"Grant Boss? - Electric Palette", 0x143a0, 0x143c0, indexGarouAGrant },
    { L"Grant Boss? - T.O.P.", 0x143c0, 0x143e0 },
    { L"Grant Boss? - Super Trail Palette", 0x143e0, 0x14400, indexGarouAGrant },
    { L"Grant Boss? - Guard Crash Flash", 0x14400, 0x14420, indexGarouAGrant },
    { L"Grant Boss? - Just Defense Palette", 0x14420, 0x14440, indexGarouAGrant },
    { L"Grant Boss? - Projectile1", 0x14440, 0x14460 },
    { L"Grant Boss? - Projectile2", 0x14460, 0x14480 },
    { L"Grant Boss? - Projectile3", 0x14480, 0x144a0 },
    { L"Grant Boss? - Projectile4", 0x144a0, 0x144c0 },
    { L"Grant Boss? - Projectile5", 0x144c0, 0x144e0 },
    { L"Grant Boss? - Projectile6", 0x144e0, 0x14500 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_A[] =
{
    { L"B. Jenet A - Main", 0x14500, 0x14520, indexGarouABJenet },
    { L"B. Jenet A - Unused", 0x14520, 0x14540 },
    { L"B. Jenet A - Unused", 0x14540, 0x14560 },
    { L"B. Jenet A - On Fire", 0x14560, 0x14580, indexGarouABJenet },
    { L"B. Jenet A - On Purple", 0x14580, 0x145a0, indexGarouABJenet },
    { L"B. Jenet A - Electric Palette", 0x145a0, 0x145c0, indexGarouABJenet },
    { L"B. Jenet A - T.O.P.", 0x145c0, 0x145e0, indexGarouABJenet },
    { L"B. Jenet A - Super Trail Palette", 0x145e0, 0x14600, indexGarouABJenet },
    { L"B. Jenet A - Guard Crash Flash", 0x14600, 0x14620, indexGarouABJenet },
    { L"B. Jenet A - Just Defense Palette", 0x14620, 0x14640, indexGarouABJenet },
    { L"B. Jenet A - Sparks and Heart", 0x14640, 0x14660 },
    { L"B. Jenet A - Special Move Effects", 0x14660, 0x14680, indexGarouABJenet, 0x0b },
    { L"B. Jenet A - Many Many Torpedos Effects", 0x14680, 0x146a0, indexGarouABJenet, 0x09 },
    { L"B. Jenet A - Pirate Crew Winstuff", 0x146a0, 0x146c0, indexGarouABJenet, 0x0a },
    { L"B. Jenet A - Ennui Mademoiselle Hit Effects", 0x146c0, 0x146e0 },
    { L"B. Jenet A - Ennui Mademoiselle Steam", 0x146e0, 0x14700, indexGarouABJenet, 0x08 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_B[] =
{
    { L"B. Jenet B - Main", 0x14700, 0x14720, indexGarouABJenet },
    { L"B. Jenet B - Unused", 0x14720, 0x14740 },
    { L"B. Jenet B - Unused", 0x14740, 0x14760 },
    { L"B. Jenet B - On Fire", 0x14760, 0x14780, indexGarouABJenet },
    { L"B. Jenet B - On Purple", 0x14780, 0x147a0, indexGarouABJenet },
    { L"B. Jenet B - Electric Palette", 0x147a0, 0x147c0, indexGarouABJenet },
    { L"B. Jenet B - T.O.P.", 0x147c0, 0x147e0, indexGarouABJenet },
    { L"B. Jenet B - Super Trail Palette", 0x147e0, 0x14800, indexGarouABJenet },
    { L"B. Jenet B - Guard Crash Flash", 0x14800, 0x14820, indexGarouABJenet },
    { L"B. Jenet B - Just Defense Palette", 0x14820, 0x14840, indexGarouABJenet },
    { L"B. Jenet B - Sparks and Heart", 0x14840, 0x14860 },
    { L"B. Jenet B - Special Move Effects", 0x14860, 0x14880, indexGarouABJenet, 0x0b },
    { L"B. Jenet B - Many Many Torpedos Effects", 0x14880, 0x148a0, indexGarouABJenet, 0x09 },
    { L"B. Jenet B - Pirate Crew Winstuff", 0x148a0, 0x148c0, indexGarouABJenet, 0x0a },
    { L"B. Jenet B - Ennui Mademoiselle Hit Effects", 0x148c0, 0x148e0 },
    { L"B. Jenet B - Ennui Mademoiselle Steam", 0x148e0, 0x14900, indexGarouABJenet, 0x08 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_C[] =
{
    { L"B. Jenet C - Main", 0x14900, 0x14920, indexGarouABJenet },
    { L"B. Jenet C - Unused", 0x14920, 0x14940, indexGarouABJenet },
    { L"B. Jenet C - Unused", 0x14940, 0x14960, indexGarouABJenet },
    { L"B. Jenet C - On Fire", 0x14960, 0x14980, indexGarouABJenet },
    { L"B. Jenet C - On Purple", 0x14980, 0x149a0, indexGarouABJenet },
    { L"B. Jenet C - Electric Palette", 0x149a0, 0x149c0, indexGarouABJenet },
    { L"B. Jenet C - T.O.P.", 0x149c0, 0x149e0, indexGarouABJenet },
    { L"B. Jenet C - Super Trail Palette", 0x149e0, 0x14a00, indexGarouABJenet },
    { L"B. Jenet C - Guard Crash Flash", 0x14a00, 0x14a20, indexGarouABJenet },
    { L"B. Jenet C - Just Defense Palette", 0x14a20, 0x14a40, indexGarouABJenet },
    { L"B. Jenet C - Sparks and Heart", 0x14a40, 0x14a60 },
    { L"B. Jenet C - Special Move Effects", 0x14a60, 0x14a80, indexGarouABJenet, 0x0b },
    { L"B. Jenet C - Many Many Torpedos Effects", 0x14a80, 0x14aa0, indexGarouABJenet, 0x09 },
    { L"B. Jenet C - Pirate Crew Winstuff", 0x14aa0, 0x14ac0, indexGarouABJenet, 0x0a },
    { L"B. Jenet C - Ennui Mademoiselle Hit Effects", 0x14ac0, 0x14ae0 },
    { L"B. Jenet C - Ennui Mademoiselle Steam", 0x14ae0, 0x14b00, indexGarouABJenet, 0x08 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_D[] =
{
    { L"B. Jenet D - Main", 0x14b00, 0x14b20, indexGarouABJenet },
    { L"B. Jenet D - Unused", 0x14b20, 0x14b40, indexGarouABJenet },
    { L"B. Jenet D - Unused", 0x14b40, 0x14b60, indexGarouABJenet },
    { L"B. Jenet D - On Fire", 0x14b60, 0x14b80, indexGarouABJenet },
    { L"B. Jenet D - On Purple", 0x14b80, 0x14ba0, indexGarouABJenet },
    { L"B. Jenet D - Electric Palette", 0x14ba0, 0x14bc0, indexGarouABJenet },
    { L"B. Jenet D - T.O.P.", 0x14bc0, 0x14be0, indexGarouABJenet },
    { L"B. Jenet D - Super Trail Palette", 0x14be0, 0x14c00, indexGarouABJenet },
    { L"B. Jenet D - Guard Crash Flash", 0x14c00, 0x14c20, indexGarouABJenet },
    { L"B. Jenet D - Just Defense Palette", 0x14c20, 0x14c40, indexGarouABJenet },
    { L"B. Jenet D - Sparks and Heart", 0x14c40, 0x14c60 },
    { L"B. Jenet D - Special Move Effects", 0x14c60, 0x14c80, indexGarouABJenet, 0x0b },
    { L"B. Jenet D - Many Many Torpedos Effects", 0x14c80, 0x14ca0, indexGarouABJenet, 0x09 },
    { L"B. Jenet D - Pirate Crew Winstuff", 0x14ca0, 0x14cc0, indexGarouABJenet, 0x0a },
    { L"B. Jenet D - Ennui Mademoiselle Hit Effects", 0x14cc0, 0x14ce0 },
    { L"B. Jenet D - Ennui Mademoiselle Steam", 0x14ce0, 0x14d00, indexGarouABJenet, 0x08 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_BOSS[] =
{
    { L"B. Jenet Boss? - Main", 0x14d00, 0x14d20, indexGarouABJenet },
    { L"B. Jenet Boss? - Line1", 0x14d20, 0x14d40 },
    { L"B. Jenet Boss? - Line2", 0x14d40, 0x14d60, indexGarouABJenet },
    { L"B. Jenet Boss? - On Fire", 0x14d60, 0x14d80 },
    { L"B. Jenet Boss? - On Purple", 0x14d80, 0x14da0, indexGarouABJenet },
    { L"B. Jenet Boss? - Electric Palette", 0x14da0, 0x14dc0 },
    { L"B. Jenet Boss? - T.O.P.", 0x14dc0, 0x14de0, indexGarouABJenet },
    { L"B. Jenet Boss? - Super Trail Palette", 0x14de0, 0x14e00 },
    { L"B. Jenet Boss? - Guard Crash Flash", 0x14e00, 0x14e20, indexGarouABJenet },
    { L"B. Jenet Boss? - Just Defense Palette", 0x14e20, 0x14e40 },
    { L"B. Jenet Boss? - Projectile1", 0x14e40, 0x14e60 },
    { L"B. Jenet Boss? - Projectile2", 0x14e60, 0x14e80 },
    { L"B. Jenet Boss? - Projectile3", 0x14e80, 0x14ea0 },
    { L"B. Jenet Boss? - Projectile4", 0x14ea0, 0x14ec0 },
    { L"B. Jenet Boss? - Projectile5", 0x14ec0, 0x14ee0 },
    { L"B. Jenet Boss? - Projectile6", 0x14ee0, 0x14f00 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_A[] =
{
    { L"Hokutomaru A - Main", 0x14f00, 0x14f20, indexGarouAHokutomaru },
    { L"Hokutomaru A - Unused", 0x14f20, 0x14f40 },
    { L"Hokutomaru A - Unused", 0x14f40, 0x14f60 },
    { L"Hokutomaru A - On Fire", 0x14f60, 0x14f80, indexGarouAHokutomaru },
    { L"Hokutomaru A - On Purple", 0x14f80, 0x14fa0, indexGarouAHokutomaru },
    { L"Hokutomaru A - Electric Palette", 0x14fa0, 0x14fc0, indexGarouAHokutomaru },
    { L"Hokutomaru A - T.O.P.", 0x14fc0, 0x14fe0, indexGarouAHokutomaru },
    { L"Hokutomaru A - Super Trail Palette", 0x14fe0, 0x15000, indexGarouAHokutomaru },
    { L"Hokutomaru A - Guard Crash Flash", 0x15000, 0x15020, indexGarouAHokutomaru },
    { L"Hokutomaru A - Just Defense Palette", 0x15020, 0x15040, indexGarouAHokutomaru },
    { L"Hokutomaru A - Slash Effects and Ougi - Chou D", 0x15040, 0x15060, indexGarouAHokutomaru, 0x0b },
    { L"Hokutomaru A - Ougi - Chou B", 0x15060, 0x15080, indexGarouAHokutomaru, 0x0b },
    { L"Hokutomaru A - Fire Kunai", 0x15080, 0x150a0, indexGarouAHokutomaru, 0x09 },
    { L"Hokutomaru A - Apples and Shurikens", 0x150a0, 0x150c0, indexGarouAHokutomaru, 0x08 },
    { L"Hokutomaru A - Log and Smoke Effects", 0x150c0, 0x150e0, indexGarouAHokutomaru, 0x0a },
    { L"Hokutomaru A - Tire Intro Stuff", 0x150e0, 0x15100, indexGarouAHokutomaru, 0x0c },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_B[] =
{
    { L"Hokutomaru B - Main", 0x15100, 0x15120, indexGarouAHokutomaru },
    { L"Hokutomaru B - Unused", 0x15120, 0x15140 },
    { L"Hokutomaru B - Unused", 0x15140, 0x15160 },
    { L"Hokutomaru B - On Fire", 0x15160, 0x15180, indexGarouAHokutomaru },
    { L"Hokutomaru B - On Purple", 0x15180, 0x151a0, indexGarouAHokutomaru },
    { L"Hokutomaru B - Electric Palette", 0x151a0, 0x151c0, indexGarouAHokutomaru },
    { L"Hokutomaru B - T.O.P.", 0x151c0, 0x151e0, indexGarouAHokutomaru },
    { L"Hokutomaru B - Super Trail Palette", 0x151e0, 0x15200, indexGarouAHokutomaru },
    { L"Hokutomaru B - Guard Crash Flash", 0x15200, 0x15220, indexGarouAHokutomaru },
    { L"Hokutomaru B - Just Defense Palette", 0x15220, 0x15240, indexGarouAHokutomaru },
    { L"Hokutomaru B - Slash Effects and Ougi - Chou D", 0x15240, 0x15260, indexGarouAHokutomaru, 0x0b },
    { L"Hokutomaru B - Ougi - Chou B", 0x15260, 0x15280 },
    { L"Hokutomaru B - Fire Kunai", 0x15280, 0x152a0, indexGarouAHokutomaru, 0x09 },
    { L"Hokutomaru B - Apples and Shurikens", 0x152a0, 0x152c0, indexGarouAHokutomaru, 0x08 },
    { L"Hokutomaru B - Log and Smoke Effects", 0x152c0, 0x152e0, indexGarouAHokutomaru, 0x0a },
    { L"Hokutomaru B - Tire Intro Stuff", 0x152e0, 0x15300, indexGarouAHokutomaru, 0x0c },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_C[] =
{
    { L"Hokutomaru C - Main", 0x15300, 0x15320, indexGarouAHokutomaru },
    { L"Hokutomaru C - Unused", 0x15320, 0x15340 },
    { L"Hokutomaru C - Unused", 0x15340, 0x15360 },
    { L"Hokutomaru C - On Fire", 0x15360, 0x15380, indexGarouAHokutomaru },
    { L"Hokutomaru C - On Purple", 0x15380, 0x153a0, indexGarouAHokutomaru },
    { L"Hokutomaru C - Electric Palette", 0x153a0, 0x153c0, indexGarouAHokutomaru },
    { L"Hokutomaru C - T.O.P.", 0x153c0, 0x153e0, indexGarouAHokutomaru },
    { L"Hokutomaru C - Super Trail Palette", 0x153e0, 0x15400, indexGarouAHokutomaru },
    { L"Hokutomaru C - Guard Crash Flash", 0x15400, 0x15420, indexGarouAHokutomaru },
    { L"Hokutomaru C - Just Defense Palette", 0x15420, 0x15440, indexGarouAHokutomaru },
    { L"Hokutomaru C - Slash Effects and Ougi - Chou D", 0x15440, 0x15460, indexGarouAHokutomaru, 0x0b },
    { L"Hokutomaru C - Ougi - Chou B", 0x15460, 0x15480, indexGarouAHokutomaru, 0x0b },
    { L"Hokutomaru C - Fire Kunai", 0x15480, 0x154a0, indexGarouAHokutomaru, 0x09 },
    { L"Hokutomaru C - Apples and Shurikens", 0x154a0, 0x154c0, indexGarouAHokutomaru, 0x08 },
    { L"Hokutomaru C - Log and Smoke Effects", 0x154c0, 0x154e0, indexGarouAHokutomaru, 0x0a },
    { L"Hokutomaru C - Tire Intro Stuff", 0x154e0, 0x15500, indexGarouAHokutomaru, 0x0c },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_D[] =
{
    { L"Hokutomaru D - Main", 0x15500, 0x15520, indexGarouAHokutomaru },
    { L"Hokutomaru D - Unused", 0x15520, 0x15540 },
    { L"Hokutomaru D - Unused", 0x15540, 0x15560 },
    { L"Hokutomaru D - On Fire", 0x15560, 0x15580, indexGarouAHokutomaru },
    { L"Hokutomaru D - On Purple", 0x15580, 0x155a0, indexGarouAHokutomaru },
    { L"Hokutomaru D - Electric Palette", 0x155a0, 0x155c0, indexGarouAHokutomaru },
    { L"Hokutomaru D - T.O.P.", 0x155c0, 0x155e0, indexGarouAHokutomaru },
    { L"Hokutomaru D - Super Trail Palette", 0x155e0, 0x15600, indexGarouAHokutomaru },
    { L"Hokutomaru D - Guard Crash Flash", 0x15600, 0x15620, indexGarouAHokutomaru },
    { L"Hokutomaru D - Just Defense Palette", 0x15620, 0x15640, indexGarouAHokutomaru },
    { L"Hokutomaru D - Slash Effects and Ougi - Chou D", 0x15640, 0x15660, indexGarouAHokutomaru, 0x0b },
    { L"Hokutomaru D - Ougi - Chou B", 0x15660, 0x15680, indexGarouAHokutomaru, 0x0b },
    { L"Hokutomaru D - Fire Kunai", 0x15680, 0x156a0, indexGarouAHokutomaru, 0x09 },
    { L"Hokutomaru D - Apples and Shurikens", 0x156a0, 0x156c0, indexGarouAHokutomaru, 0x08 },
    { L"Hokutomaru D - Log and Smoke Effects", 0x156c0, 0x156e0, indexGarouAHokutomaru, 0x0a },
    { L"Hokutomaru D - Tire Intro Stuff", 0x156e0, 0x15700, indexGarouAHokutomaru, 0x0c },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_BOSS[] =
{
    { L"Hokutomaru Boss? - Main", 0x15700, 0x15720, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Line1", 0x15720, 0x15740 },
    { L"Hokutomaru Boss? - Line2", 0x15740, 0x15760, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - On Fire", 0x15760, 0x15780 },
    { L"Hokutomaru Boss? - On Purple", 0x15780, 0x157a0, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Electric Palette", 0x157a0, 0x157c0 },
    { L"Hokutomaru Boss? - T.O.P.", 0x157c0, 0x157e0, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Super Trail Palette", 0x157e0, 0x15800 },
    { L"Hokutomaru Boss? - Guard Crash Flash", 0x15800, 0x15820, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Just Defense Palette", 0x15820, 0x15840 },
    { L"Hokutomaru Boss? - Projectile1", 0x15840, 0x15860 },
    { L"Hokutomaru Boss? - Projectile2", 0x15860, 0x15880 },
    { L"Hokutomaru Boss? - Projectile3", 0x15880, 0x158a0 },
    { L"Hokutomaru Boss? - Projectile4", 0x158a0, 0x158c0 },
    { L"Hokutomaru Boss? - Projectile5", 0x158c0, 0x158e0 },
    { L"Hokutomaru Boss? - Projectile6", 0x158e0, 0x15900 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_A[] =
{
    { L"Freeman A - Main", 0x15900, 0x15920, indexGarouAFreeman },
    { L"Freeman A - Unused", 0x15920, 0x15940 },
    { L"Freeman A - Unused", 0x15940, 0x15960 },
    { L"Freeman A - On Fire", 0x15960, 0x15980, indexGarouAFreeman },
    { L"Freeman A - On Purple", 0x15980, 0x159a0, indexGarouAFreeman },
    { L"Freeman A - Electric Palette", 0x159a0, 0x159c0, indexGarouAFreeman },
    { L"Freeman A - T.O.P.", 0x159c0, 0x159e0, indexGarouAFreeman },
    { L"Freeman A - Super Trail Palette", 0x159e0, 0x15a00, indexGarouAFreeman },
    { L"Freeman A - Guard Crash Flash", 0x15a00, 0x15a20, indexGarouAFreeman },
    { L"Freeman A - Just Defense Palette", 0x15a20, 0x15a40, indexGarouAFreeman },
    { L"Freeman A - Slash Effects Main", 0x15a40, 0x15a60, indexGarouAFreeman, 0x09 },
    { L"Freeman A - Slash Effects Extra 1", 0x15a60, 0x15a80, indexGarouAFreeman, 0x09 },
    { L"Freeman A - Slash Effects Extra 2", 0x15a80, 0x15aa0, indexGarouAFreeman, 0x09 },
    { L"Freeman A - Intro Stuff", 0x15aa0, 0x15ac0, indexGarouAFreeman, 0x08 },
    { L"Freeman A - Slash Extras 1", 0x15ac0, 0x15ae0, indexGarouAFreeman, 0x0a },
    { L"Freeman A - Slash Extras 2", 0x15ae0, 0x15b00, indexGarouAFreeman, 0x0a },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_B[] =
{
    { L"Freeman B - Main", 0x15b00, 0x15b20, indexGarouAFreeman },
    { L"Freeman B - Unused", 0x15b20, 0x15b40 },
    { L"Freeman B - Unused", 0x15b40, 0x15b60 },
    { L"Freeman B - On Fire", 0x15b60, 0x15b80, indexGarouAFreeman },
    { L"Freeman B - On Purple", 0x15b80, 0x15ba0, indexGarouAFreeman },
    { L"Freeman B - Electric Palette", 0x15ba0, 0x15bc0, indexGarouAFreeman },
    { L"Freeman B - T.O.P.", 0x15bc0, 0x15be0, indexGarouAFreeman },
    { L"Freeman B - Super Trail Palette", 0x15be0, 0x15c00, indexGarouAFreeman },
    { L"Freeman B - Guard Crash Flash", 0x15c00, 0x15c20, indexGarouAFreeman },
    { L"Freeman B - Just Defense Palette", 0x15c20, 0x15c40, indexGarouAFreeman },
    { L"Freeman B - Slash Effects Main", 0x15c40, 0x15c60, indexGarouAFreeman, 0x09 },
    { L"Freeman B - Slash Effects Extra 1", 0x15c60, 0x15c80, indexGarouAFreeman, 0x09 },
    { L"Freeman B - Slash Effects Extra 2", 0x15c80, 0x15ca0, indexGarouAFreeman, 0x09 },
    { L"Freeman B - Intro Stuff", 0x15ca0, 0x15cc0, indexGarouAFreeman, 0x08 },
    { L"Freeman B - Slash Extras 1", 0x15cc0, 0x15ce0, indexGarouAFreeman, 0x0a },
    { L"Freeman B - Slash Extras 2", 0x15ce0, 0x15d00, indexGarouAFreeman, 0x0a },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_C[] =
{
    { L"Freeman C - Main", 0x15d00, 0x15d20, indexGarouAFreeman },
    { L"Freeman C - Unused", 0x15d20, 0x15d40 },
    { L"Freeman C - Unused", 0x15d40, 0x15d60 },
    { L"Freeman C - On Fire", 0x15d60, 0x15d80, indexGarouAFreeman },
    { L"Freeman C - On Purple", 0x15d80, 0x15da0, indexGarouAFreeman },
    { L"Freeman C - Electric Palette", 0x15da0, 0x15dc0, indexGarouAFreeman },
    { L"Freeman C - T.O.P.", 0x15dc0, 0x15de0, indexGarouAFreeman },
    { L"Freeman C - Super Trail Palette", 0x15de0, 0x15e00, indexGarouAFreeman },
    { L"Freeman C - Guard Crash Flash", 0x15e00, 0x15e20, indexGarouAFreeman },
    { L"Freeman C - Just Defense Palette", 0x15e20, 0x15e40, indexGarouAFreeman },
    { L"Freeman C - Slash Effects Main", 0x15e40, 0x15e60, indexGarouAFreeman, 0x09 },
    { L"Freeman C - Slash Effects Extra 1", 0x15e60, 0x15e80, indexGarouAFreeman, 0x09 },
    { L"Freeman C - Slash Effects Extra 2", 0x15e80, 0x15ea0, indexGarouAFreeman, 0x09 },
    { L"Freeman C - Intro Stuff", 0x15ea0, 0x15ec0, indexGarouAFreeman, 0x08 },
    { L"Freeman C - Slash Extras 1", 0x15ec0, 0x15ee0, indexGarouAFreeman, 0x0a },
    { L"Freeman C - Slash Extras 2", 0x15ee0, 0x15f00, indexGarouAFreeman, 0x0a },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_D[] =
{
    { L"Freeman D - Main", 0x15f00, 0x15f20, indexGarouAFreeman },
    { L"Freeman D - Unused", 0x15f20, 0x15f40 },
    { L"Freeman D - Unused", 0x15f40, 0x15f60 },
    { L"Freeman D - On Fire", 0x15f60, 0x15f80, indexGarouAFreeman },
    { L"Freeman D - On Purple", 0x15f80, 0x15fa0, indexGarouAFreeman },
    { L"Freeman D - Electric Palette", 0x15fa0, 0x15fc0, indexGarouAFreeman },
    { L"Freeman D - T.O.P.", 0x15fc0, 0x15fe0, indexGarouAFreeman },
    { L"Freeman D - Super Trail Palette", 0x15fe0, 0x16000, indexGarouAFreeman },
    { L"Freeman D - Guard Crash Flash", 0x16000, 0x16020, indexGarouAFreeman },
    { L"Freeman D - Just Defense Palette", 0x16020, 0x16040, indexGarouAFreeman },
    { L"Freeman D - Slash Effects Main", 0x16040, 0x16060, indexGarouAFreeman, 0x090 },
    { L"Freeman D - Slash Effects Extra 1", 0x16060, 0x16080, indexGarouAFreeman, 0x09 },
    { L"Freeman D - Slash Effects Extra 2", 0x16080, 0x160a0, indexGarouAFreeman, 0x09 },
    { L"Freeman D - Intro Stuff", 0x160a0, 0x160c0, indexGarouAFreeman, 0x08 },
    { L"Freeman D - Slash Extras 1", 0x160c0, 0x160e0, indexGarouAFreeman, 0x0a },
    { L"Freeman D - Slash Extras 2", 0x160e0, 0x16100, indexGarouAFreeman, 0x0a },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_BOSS[] =
{
    { L"Freeman Boss? - Main", 0x16100, 0x16120, indexGarouAFreeman },
    { L"Freeman Boss? - Line1", 0x16120, 0x16140 },
    { L"Freeman Boss? - Line2", 0x16140, 0x16160, indexGarouAFreeman },
    { L"Freeman Boss? - On Fire", 0x16160, 0x16180 },
    { L"Freeman Boss? - On Purple", 0x16180, 0x161a0, indexGarouAFreeman },
    { L"Freeman Boss? - Electric Palette", 0x161a0, 0x161c0 },
    { L"Freeman Boss? - T.O.P.", 0x161c0, 0x161e0, indexGarouAFreeman },
    { L"Freeman Boss? - Super Trail Palette", 0x161e0, 0x16200 },
    { L"Freeman Boss? - Guard Crash Flash", 0x16200, 0x16220, indexGarouAFreeman },
    { L"Freeman Boss? - Just Defense Palette", 0x16220, 0x16240 },
    { L"Freeman Boss? - Projectile1", 0x16240, 0x16260 },
    { L"Freeman Boss? - Projectile2", 0x16260, 0x16280 },
    { L"Freeman Boss? - Projectile3", 0x16280, 0x162a0 },
    { L"Freeman Boss? - Projectile4", 0x162a0, 0x162c0 },
    { L"Freeman Boss? - Projectile5", 0x162c0, 0x162e0 },
    { L"Freeman Boss? - Projectile6", 0x162e0, 0x16300 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_A[] =
{
    { L"Tizoc A - Main", 0x16300, 0x16320, indexGarouATizoc },
    { L"Tizoc A - Line1", 0x16320, 0x16340 },
    { L"Tizoc A - Line2", 0x16340, 0x16360 },
    { L"Tizoc A - On Fire", 0x16360, 0x16380, indexGarouATizoc },
    { L"Tizoc A - On Purple", 0x16380, 0x163a0, indexGarouATizoc },
    { L"Tizoc A - Electric Palette", 0x163a0, 0x163c0, indexGarouATizoc },
    { L"Tizoc A - T.O.P.", 0x163c0, 0x163e0, indexGarouATizoc },
    { L"Tizoc A - Super Trail Palette", 0x163e0, 0x16400, indexGarouATizoc },
    { L"Tizoc A - Guard Crash Flash", 0x16400, 0x16420, indexGarouATizoc },
    { L"Tizoc A - Just Defense Palette", 0x16420, 0x16440, indexGarouATizoc },
    { L"Tizoc A - Intro Stuff", 0x16440, 0x16460, indexGarouATizoc, 0x08 },
    { L"Tizoc A - Super Background and Effects A/B", 0x16460, 0x16480, indexGarouATizoc, 0x09 },
    { L"Tizoc A - Super Background and Effects C/D", 0x16480, 0x164a0, indexGarouATizoc, 0x09 },
    { L"Tizoc A - Projectile4", 0x164a0, 0x164c0 },
    { L"Tizoc A - Projectile5", 0x164c0, 0x164e0 },
    { L"Tizoc A - Projectile6", 0x164e0, 0x16500 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_B[] =
{
    { L"Tizoc B - Main", 0x16500, 0x16520, indexGarouATizoc },
    { L"Tizoc B - Line1", 0x16520, 0x16540 },
    { L"Tizoc B - Line2", 0x16540, 0x16560 },
    { L"Tizoc B - On Fire", 0x16560, 0x16580, indexGarouATizoc },
    { L"Tizoc B - On Purple", 0x16580, 0x165a0, indexGarouATizoc },
    { L"Tizoc B - Electric Palette", 0x165a0, 0x165c0, indexGarouATizoc },
    { L"Tizoc B - T.O.P.", 0x165c0, 0x165e0, indexGarouATizoc },
    { L"Tizoc B - Super Trail Palette", 0x165e0, 0x16600, indexGarouATizoc },
    { L"Tizoc B - Guard Crash Flash", 0x16600, 0x16620, indexGarouATizoc },
    { L"Tizoc B - Just Defense Palette", 0x16620, 0x16640, indexGarouATizoc },
    { L"Tizoc B - Intro Stuff", 0x16640, 0x16660, indexGarouATizoc, 0x08 },
    { L"Tizoc B - Super Background and Effects A/B", 0x16660, 0x16680, indexGarouATizoc, 0x09 },
    { L"Tizoc B - Super Background and Effects C/D", 0x16680, 0x166a0, indexGarouATizoc, 0x09 },
    { L"Tizoc B - Projectile4", 0x166a0, 0x166c0 },
    { L"Tizoc B - Projectile5", 0x166c0, 0x166e0 },
    { L"Tizoc B - Projectile6", 0x166e0, 0x16700 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_C[] =
{
    { L"Tizoc C - Main", 0x16700, 0x16720, indexGarouATizoc },
    { L"Tizoc C - Line1", 0x16720, 0x16740 },
    { L"Tizoc C - Line2", 0x16740, 0x16760 },
    { L"Tizoc C - On Fire", 0x16760, 0x16780, indexGarouATizoc },
    { L"Tizoc C - On Purple", 0x16780, 0x167a0, indexGarouATizoc },
    { L"Tizoc C - Electric Palette", 0x167a0, 0x167c0, indexGarouATizoc },
    { L"Tizoc C - T.O.P.", 0x167c0, 0x167e0, indexGarouATizoc },
    { L"Tizoc C - Super Trail Palette", 0x167e0, 0x16800, indexGarouATizoc },
    { L"Tizoc C - Guard Crash Flash", 0x16800, 0x16820, indexGarouATizoc },
    { L"Tizoc C - Just Defense Palette", 0x16820, 0x16840, indexGarouATizoc },
    { L"Tizoc C - Intro Stuff", 0x16840, 0x16860, indexGarouATizoc, 0x08 },
    { L"Tizoc C - Super Background and Effects A/B", 0x16860, 0x16880, indexGarouATizoc, 0x09 },
    { L"Tizoc C - Super Background and Effects C/D", 0x16880, 0x168a0, indexGarouATizoc, 0x09 },
    { L"Tizoc C - Projectile4", 0x168a0, 0x168c0 },
    { L"Tizoc C - Projectile5", 0x168c0, 0x168e0 },
    { L"Tizoc C - Projectile6", 0x168e0, 0x16900 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_D[] =
{
    { L"Tizoc D - Main", 0x16900, 0x16920, indexGarouATizoc },
    { L"Tizoc D - Line1", 0x16920, 0x16940 },
    { L"Tizoc D - Line2", 0x16940, 0x16960 },
    { L"Tizoc D - On Fire", 0x16960, 0x16980, indexGarouATizoc },
    { L"Tizoc D - On Purple", 0x16980, 0x169a0, indexGarouATizoc },
    { L"Tizoc D - Electric Palette", 0x169a0, 0x169c0, indexGarouATizoc },
    { L"Tizoc D - T.O.P.", 0x169c0, 0x169e0, indexGarouATizoc },
    { L"Tizoc D - Super Trail Palette", 0x169e0, 0x16a00, indexGarouATizoc },
    { L"Tizoc D - Guard Crash Flash", 0x16a00, 0x16a20, indexGarouATizoc },
    { L"Tizoc D - Just Defense Palette", 0x16a20, 0x16a40, indexGarouATizoc },
    { L"Tizoc D - Intro Stuff", 0x16a40, 0x16a60, indexGarouATizoc, 0x08 },
    { L"Tizoc D - Super Background and Effects A/B", 0x16a60, 0x16a80, indexGarouATizoc, 0x09 },
    { L"Tizoc D - Super Background and Effects C/D", 0x16a80, 0x16aa0, indexGarouATizoc, 0x09 },
    { L"Tizoc D - Projectile4", 0x16aa0, 0x16ac0 },
    { L"Tizoc D - Projectile5", 0x16ac0, 0x16ae0 },
    { L"Tizoc D - Projectile6", 0x16ae0, 0x16b00 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_BOSS[] =
{
    { L"Tizoc Boss? - Main", 0x16b00, 0x16b20, indexGarouATizoc },
    { L"Tizoc Boss? - Line1", 0x16b20, 0x16b40 },
    { L"Tizoc Boss? - Line2", 0x16b40, 0x16b60, indexGarouATizoc },
    { L"Tizoc Boss? - On Fire", 0x16b60, 0x16b80, indexGarouATizoc },
    { L"Tizoc Boss? - On Purple", 0x16b80, 0x16ba0, indexGarouATizoc },
    { L"Tizoc Boss? - Electric Palette", 0x16ba0, 0x16bc0, indexGarouATizoc },
    { L"Tizoc Boss? - T.O.P.", 0x16bc0, 0x16be0, indexGarouATizoc },
    { L"Tizoc Boss? - Super Trail Palette", 0x16be0, 0x16c00, indexGarouATizoc },
    { L"Tizoc Boss? - Guard Crash Flash", 0x16c00, 0x16c20, indexGarouATizoc },
    { L"Tizoc Boss? - Just Defense Palette", 0x16c20, 0x16c40, indexGarouATizoc },
    { L"Tizoc Boss? - Projectile1", 0x16c40, 0x16c60 },
    { L"Tizoc Boss? - Projectile2", 0x16c60, 0x16c80 },
    { L"Tizoc Boss? - Projectile3", 0x16c80, 0x16ca0 },
    { L"Tizoc Boss? - Projectile4", 0x16ca0, 0x16cc0 },
    { L"Tizoc Boss? - Projectile5", 0x16cc0, 0x16ce0 },
    { L"Tizoc Boss? - Projectile6", 0x16ce0, 0x16d00 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_A[] =
{
    { L"Kain A - Main", 0x16d00, 0x16d20, indexGarouAKain },
    { L"Kain A - Unused", 0x16d20, 0x16d40 },
    { L"Kain A - Unused", 0x16d40, 0x16d60 },
    { L"Kain A - On Fire", 0x16d60, 0x16d80, indexGarouAKain },
    { L"Kain A - On Purple", 0x16d80, 0x16da0, indexGarouAKain },
    { L"Kain A - Electric Palette", 0x16da0, 0x16dc0, indexGarouAKain },
    { L"Kain A - T.O.P.", 0x16dc0, 0x16de0, indexGarouAKain },
    { L"Kain A - Super Trail Palette", 0x16de0, 0x16e00, indexGarouAKain },
    { L"Kain A - Guard Crash Flash", 0x16e00, 0x16e20, indexGarouAKain },
    { L"Kain A - Just Defense Palette", 0x16e20, 0x16e40, indexGarouAKain },
    { L"Kain A - Basic Move Effects", 0x16e40, 0x16e60, indexGarouAKain, 0x0c },
    { L"Kain A - Fire Attacks", 0x16e60, 0x16e80, indexGarouAKain, 0x08 },
    { L"Kain A - Himmlische Atem Super Effects", 0x16e80, 0x16ea0, indexGarouAKain, 0x0a },
    { L"Kain A - Super Attacks A/B ", 0x16ea0, 0x16ec0, indexGarouAKain, 0x0d },
    { L"Kain A - Flame Palette/Win Stuff", 0x16ec0, 0x16ee0, indexGarouAKain, 0x09 },
    { L"Kain A - Himmlische Seele D", 0x16ee0, 0x16f00, indexGarouAKain, 0x0b },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_B[] =
{
    { L"Kain B - Main", 0x16f00, 0x16f20, indexGarouAKain },
    { L"Kain B - Unused", 0x16f20, 0x16f40 },
    { L"Kain B - Unused", 0x16f40, 0x16f60 },
    { L"Kain B - On Fire", 0x16f60, 0x16f80, indexGarouAKain },
    { L"Kain B - On Purple", 0x16f80, 0x16fa0, indexGarouAKain },
    { L"Kain B - Electric Palette", 0x16fa0, 0x16fc0, indexGarouAKain },
    { L"Kain B - T.O.P.", 0x16fc0, 0x16fe0, indexGarouAKain },
    { L"Kain B - Super Trail Palette", 0x16fe0, 0x17000, indexGarouAKain },
    { L"Kain B - Guard Crash Flash", 0x17000, 0x17020, indexGarouAKain },
    { L"Kain B - Just Defense Palette", 0x17020, 0x17040, indexGarouAKain },
    { L"Kain B - Basic Move Effects", 0x17040, 0x17060, indexGarouAKain, 0x0c },
    { L"Kain B - Fire Attacks", 0x17060, 0x17080, indexGarouAKain, 0x08 },
    { L"Kain B - Himmlische Atem Super Effects", 0x17080, 0x170a0, indexGarouAKain, 0x0a },
    { L"Kain B - Super Attacks A/B ", 0x170a0, 0x170c0, indexGarouAKain, 0x0d },
    { L"Kain B - Flame Palette/Win Stuff", 0x170c0, 0x170e0, indexGarouAKain, 0x09 },
    { L"Kain B - Himmlische Seele D", 0x170e0, 0x17100, indexGarouAKain, 0x0b },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_C[] =
{
    { L"Kain C - Main", 0x17100, 0x17120, indexGarouAKain },
    { L"Kain C - Unused", 0x17120, 0x17140 },
    { L"Kain C - Unused", 0x17140, 0x17160 },
    { L"Kain C - On Fire", 0x17160, 0x17180, indexGarouAKain },
    { L"Kain C - On Purple", 0x17180, 0x171a0, indexGarouAKain },
    { L"Kain C - Electric Palette", 0x171a0, 0x171c0, indexGarouAKain },
    { L"Kain C - T.O.P.", 0x171c0, 0x171e0, indexGarouAKain },
    { L"Kain C - Super Trail Palette", 0x171e0, 0x17200, indexGarouAKain },
    { L"Kain C - Guard Crash Flash", 0x17200, 0x17220, indexGarouAKain },
    { L"Kain C - Just Defense Palette", 0x17220, 0x17240, indexGarouAKain },
    { L"Kain C - Basic Move Effects", 0x17240, 0x17260, indexGarouAKain, 0x0c },
    { L"Kain C - Fire Attacks", 0x17260, 0x17280, indexGarouAKain, 0x08 },
    { L"Kain C - Himmlische Atem Super Effects", 0x17280, 0x172a0, indexGarouAKain, 0x0a },
    { L"Kain C - Super Attacks A/B ", 0x172a0, 0x172c0, indexGarouAKain, 0x0d },
    { L"Kain C - Flame Palette/Win Stuff", 0x172c0, 0x172e0, indexGarouAKain, 0x09 },
    { L"Kain C - Himmlische Seele D", 0x172e0, 0x17300, indexGarouAKain, 0x0b },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_D[] =
{
    { L"Kain D - Main", 0x17300, 0x17320, indexGarouAKain },
    { L"Kain D - Unused", 0x17320, 0x17340 },
    { L"Kain D - Unused", 0x17340, 0x17360 },
    { L"Kain D - On Fire", 0x17360, 0x17380, indexGarouAKain },
    { L"Kain D - On Purple", 0x17380, 0x173a0, indexGarouAKain },
    { L"Kain D - Electric Palette", 0x173a0, 0x173c0, indexGarouAKain },
    { L"Kain D - T.O.P.", 0x173c0, 0x173e0, indexGarouAKain },
    { L"Kain D - Super Trail Palette", 0x173e0, 0x17400, indexGarouAKain },
    { L"Kain D - Guard Crash Flash", 0x17400, 0x17420, indexGarouAKain },
    { L"Kain D - Just Defense Palette", 0x17420, 0x17440, indexGarouAKain },
    { L"Kain D - Basic Move Effects", 0x17440, 0x17460, indexGarouAKain, 0x0c },
    { L"Kain D - Fire Attacks", 0x17460, 0x17480, indexGarouAKain, 0x08 },
    { L"Kain D - Himmlische Atem Super Effects", 0x17480, 0x174a0, indexGarouAKain, 0x0a },
    { L"Kain D - Super Attacks A/B ", 0x174a0, 0x174c0, indexGarouAKain, 0x0d },
    { L"Kain D - Flame Palette/Win Stuff", 0x174c0, 0x174e0, indexGarouAKain, 0x09 },
    { L"Kain D - Himmlische Seele D", 0x174e0, 0x17500, indexGarouAKain, 0x0b },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_BOSS[] =
{
    { L"Kain Boss? - Main", 0x17500, 0x17520, indexGarouAKain },
    { L"Kain Boss? - Unused", 0x17520, 0x17540 },
    { L"Kain Boss? - Unused", 0x17540, 0x17560 },
    { L"Kain Boss? - On Fire", 0x17560, 0x17580, indexGarouAKain },
    { L"Kain Boss? - On Purple", 0x17580, 0x175a0, indexGarouAKain },
    { L"Kain Boss? - Electric Palette", 0x175a0, 0x175c0, indexGarouAKain },
    { L"Kain Boss? - T.O.P.", 0x175c0, 0x175e0, indexGarouAKain },
    { L"Kain Boss? - Super Trail Palette", 0x175e0, 0x17600, indexGarouAKain },
    { L"Kain Boss? - Guard Crash Flash", 0x17600, 0x17620, indexGarouAKain },
    { L"Kain Boss? - Just Defense Palette", 0x17620, 0x17640, indexGarouAKain },
    { L"Kain Boss? - Projectile1", 0x17640, 0x17660 },
    { L"Kain Boss? - Projectile2", 0x17660, 0x17680 },
    { L"Kain Boss? - Projectile3", 0x17680, 0x176a0 },
    { L"Kain Boss? - Projectile4", 0x176a0, 0x176c0 },
    { L"Kain Boss? - Projectile5", 0x176c0, 0x176e0 },
    { L"Kain Boss? - Projectile6", 0x176e0, 0x17700 },
};

const sGame_PaletteDataset Garou_A_ROCKHOWARD_PALETTES_PORTRAITS[] =
{
    { L"Rock Portrait Palette - A", 0x2a900, 0x2a940, indexGarouARockHoward, 0x40, &pairNext4 },
    { L"Rock Portrait Palette - B", 0x2a940, 0x2a980, indexGarouARockHoward, 0x40, &pairNext3 },
    { L"Rock Portrait Palette - C", 0x2a980, 0x2a9c0, indexGarouARockHoward, 0x40, &pairNext2 },
    { L"Rock Portrait Palette - D", 0x2a9c0, 0x2aa00, indexGarouARockHoward, 0x40, &pairNext },
    { L"Rock Portrait - Shared Extra", 0x0177c0, 0x0177e0, indexGarouARockHoward, 0x3F },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_PORTRAITS[] =
{
    { L"Terry Portrait Palette - A", 0x2aa00, 0x2aa40, indexGarouATerryBogard, 0x40 },
    { L"Terry Portrait Palette - B", 0x2aa40, 0x2aa80, indexGarouATerryBogard, 0x40 },
    { L"Terry Portrait Palette - C", 0x2aa80, 0x2aac0, indexGarouATerryBogard, 0x40 },
    { L"Terry Portrait Palette - D", 0x2aac0, 0x2ab00, indexGarouATerryBogard, 0x40 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_PORTRAITS[] =
{
    { L"Khushnood Portrait Palette - A", 0x2b000, 0x2b040, indexGarouAKhushnood, 0x40 },
    { L"Khushnood Portrait Palette - B", 0x2b040, 0x2b080, indexGarouAKhushnood, 0x40 },
    { L"Khushnood Portrait Palette - C", 0x2b080, 0x2b0c0, indexGarouAKhushnood, 0x40 },
    { L"Khushnood Portrait Palette - D", 0x2b0c0, 0x2b100, indexGarouAKhushnood, 0x40 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_PORTRAITS[] =
{
    { L"Dong Hwan Portrait Palette - A", 0x2ab00, 0x2ab40, indexGarouADong, 0x40},
    { L"Dong Hwan Portrait Palette - B", 0x2ab40, 0x2ab80, indexGarouADong, 0x40 },
    { L"Dong Hwan Portrait Palette - C", 0x2ab80, 0x2abc0, indexGarouADong, 0x40 },
    { L"Dong Hwan Portrait Palette - D", 0x2abc0, 0x2ac00, indexGarouADong, 0x40 },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_PORTRAITS[] =
{
    { L"Jae Hoon Portrait Palette - A", 0x2ac00, 0x2ac40, indexGarouAJae, 0x40 },
    { L"Jae Hoon Portrait Palette - B", 0x2ac40, 0x2ac80, indexGarouAJae, 0x40 },
    { L"Jae Hoon Portrait Palette - C", 0x2ac80, 0x2acc0, indexGarouAJae, 0x40 },
    { L"Jae Hoon Portrait Palette - D", 0x2acc0, 0x2ad00, indexGarouAJae, 0x40 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_PORTRAITS[] =
{
    { L"Hotaru Portrait Palette - A", 0x2ad00, 0x2ad40, indexGarouAHotaru, 0x40 },
    { L"Hotaru Portrait Palette - B", 0x2ad40, 0x2ad80, indexGarouAHotaru, 0x40 },
    { L"Hotaru Portrait Palette - C", 0x2ad80, 0x2adc0, indexGarouAHotaru, 0x40 },
    { L"Hotaru Portrait Palette - D", 0x2adc0, 0x2ae00, indexGarouAHotaru, 0x40 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_PORTRAITS[] =
{
    { L"Gato Portrait Palette - A", 0x2ae00, 0x2ae40, indexGarouAGato, 0x40 },
    { L"Gato Portrait Palette - B", 0x2ae40, 0x2ae80, indexGarouAGato, 0x40 },
    { L"Gato Portrait Palette - C", 0x2ae80, 0x2aec0, indexGarouAGato, 0x40 },
    { L"Gato Portrait Palette - D", 0x2aec0, 0x2af00, indexGarouAGato, 0x40 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_PORTRAITS[] =
{
    { L"Kevin Portrait Palette - A", 0x2b400, 0x2b440, indexGarouAKevin, 0x40 },
    { L"Kevin Portrait Palette - B", 0x2b440, 0x2b480, indexGarouAKevin, 0x40 },
    { L"Kevin Portrait Palette - C", 0x2b480, 0x2b4c0, indexGarouAKevin, 0x40 },
    { L"Kevin Portrait Palette - D", 0x2b4c0, 0x2b500, indexGarouAKevin, 0x40 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_PORTRAITS[] =
{
    { L"Grant Portrait Palette - A", 0x2b500, 0x2b540, indexGarouAGrant, 0x40 },
    { L"Grant Portrait Palette - B", 0x2b540, 0x2b580, indexGarouAGrant, 0x40 },
    { L"Grant Portrait Palette - C", 0x2b580, 0x2b5c0, indexGarouAGrant, 0x40 },
    { L"Grant Portrait Palette - D", 0x2b5c0, 0x2b600, indexGarouAGrant, 0x40 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_PORTRAITS[] =
{
    { L"B. Jenet Portrait Palette - A", 0x2af00, 0x2af40, indexGarouABJenet, 0x40 },
    { L"B. Jenet Portrait Palette - B", 0x2af40, 0x2af80, indexGarouABJenet, 0x40 },
    { L"B. Jenet Portrait Palette - C", 0x2af80, 0x2afc0, indexGarouABJenet, 0x40 },
    { L"B. Jenet Portrait Palette - D", 0x2afc0, 0x2b000, indexGarouABJenet, 0x40 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_PORTRAITS[] =
{
    { L"Hokutomaru Portrait Palette - A", 0x2b100, 0x2b140, indexGarouAHokutomaru, 0x40 },
    { L"Hokutomaru Portrait Palette - B", 0x2b140, 0x2b180, indexGarouAHokutomaru, 0x40 },
    { L"Hokutomaru Portrait Palette - C", 0x2b180, 0x2b1c0, indexGarouAHokutomaru, 0x40 },
    { L"Hokutomaru Portrait Palette - D", 0x2b1c0, 0x2b200, indexGarouAHokutomaru, 0x40 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_PORTRAITS[] =
{
    { L"Freeman Portrait Palette - A", 0x2b200, 0x2b240, indexGarouAFreeman, 0x40 },
    { L"Freeman Portrait Palette - B", 0x2b240, 0x2b280, indexGarouAFreeman, 0x40 },
    { L"Freeman Portrait Palette - C", 0x2b280, 0x2b2c0, indexGarouAFreeman, 0x40 },
    { L"Freeman Portrait Palette - D", 0x2b2c0, 0x2b300, indexGarouAFreeman, 0x40 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_PORTRAITS[] =
{
    { L"Tizoc Portrait Palette - A", 0x2b300, 0x2b340, indexGarouATizoc, 0x40 },
    { L"Tizoc Portrait Palette - B", 0x2b340, 0x2b380, indexGarouATizoc, 0x40 },
    { L"Tizoc Portrait Palette - C", 0x2b380, 0x2b3c0, indexGarouATizoc, 0x40 },
    { L"Tizoc Portrait Palette - D", 0x2b3c0, 0x2b400, indexGarouATizoc, 0x40 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_PORTRAITS[] =
{
    { L"Kain Portrait Palette - A", 0x2b600, 0x2b640, indexGarouAKain, 0x40, &pairNext4 },
    { L"Kain Portrait Palette - B", 0x2b640, 0x2b680, indexGarouAKain, 0x40, &pairNext3 },
    { L"Kain Portrait Palette - C", 0x2b680, 0x2b6c0, indexGarouAKain, 0x40, &pairNext2 },
    { L"Kain Portrait Palette - D", 0x2b6c0, 0x2b700, indexGarouAKain, 0x40, &pairNext },
    { L"Kain Portrait - Shared Extra", 0x177e0, 0x17800, indexGarouAKain, 0x3f }
};

const sDescTreeNode Garou_A_ROCKHOWARD_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_A, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_B, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_C, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_D, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_BOSS, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_KHUSHNOOD_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_A, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_B, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_C, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_D, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_BOSS, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_A, ARRAYSIZE(Garou_A_TERRY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_B, ARRAYSIZE(Garou_A_TERRY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_C, ARRAYSIZE(Garou_A_TERRY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_D, ARRAYSIZE(Garou_A_TERRY_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_BOSS, ARRAYSIZE(Garou_A_TERRY_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_DONG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_A, ARRAYSIZE(Garou_A_DONG_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_B, ARRAYSIZE(Garou_A_DONG_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_C, ARRAYSIZE(Garou_A_DONG_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_D, ARRAYSIZE(Garou_A_DONG_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_BOSS, ARRAYSIZE(Garou_A_DONG_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_JAE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_A, ARRAYSIZE(Garou_A_JAE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_B, ARRAYSIZE(Garou_A_JAE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_C, ARRAYSIZE(Garou_A_JAE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_D, ARRAYSIZE(Garou_A_JAE_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_BOSS, ARRAYSIZE(Garou_A_JAE_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_HOTARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_A, ARRAYSIZE(Garou_A_HOTARU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_B, ARRAYSIZE(Garou_A_HOTARU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_C, ARRAYSIZE(Garou_A_HOTARU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_D, ARRAYSIZE(Garou_A_HOTARU_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_BOSS, ARRAYSIZE(Garou_A_HOTARU_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_GATO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_A, ARRAYSIZE(Garou_A_GATO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_B, ARRAYSIZE(Garou_A_GATO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_C, ARRAYSIZE(Garou_A_GATO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_D, ARRAYSIZE(Garou_A_GATO_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_BOSS, ARRAYSIZE(Garou_A_GATO_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_KEVIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_A, ARRAYSIZE(Garou_A_KEVIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_B, ARRAYSIZE(Garou_A_KEVIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_C, ARRAYSIZE(Garou_A_KEVIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_D, ARRAYSIZE(Garou_A_KEVIN_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_BOSS, ARRAYSIZE(Garou_A_KEVIN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_GRANT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_A, ARRAYSIZE(Garou_A_GRANT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_B, ARRAYSIZE(Garou_A_GRANT_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_C, ARRAYSIZE(Garou_A_GRANT_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_D, ARRAYSIZE(Garou_A_GRANT_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_BOSS, ARRAYSIZE(Garou_A_GRANT_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_BJENNET_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_A, ARRAYSIZE(Garou_A_BJENNET_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_B, ARRAYSIZE(Garou_A_BJENNET_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_C, ARRAYSIZE(Garou_A_BJENNET_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_D, ARRAYSIZE(Garou_A_BJENNET_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_BOSS, ARRAYSIZE(Garou_A_BJENNET_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_HOKUTOMARO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_A, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_B, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_C, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_D, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_BOSS, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_FREEMAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_A, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_B, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_C, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_D, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_BOSS, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_TIZOC_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_A, ARRAYSIZE(Garou_A_TIZOC_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_B, ARRAYSIZE(Garou_A_TIZOC_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_C, ARRAYSIZE(Garou_A_TIZOC_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_D, ARRAYSIZE(Garou_A_TIZOC_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_BOSS, ARRAYSIZE(Garou_A_TIZOC_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_KAIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_A, ARRAYSIZE(Garou_A_KAIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_B, ARRAYSIZE(Garou_A_KAIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_C, ARRAYSIZE(Garou_A_KAIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_D, ARRAYSIZE(Garou_A_KAIN_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_BOSS, ARRAYSIZE(Garou_A_KAIN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_PORTRAITS_COLLECTION[] =
{
    { L"Rock Howard", DESC_NODETYPE_TREE, (void*)Garou_A_ROCKHOWARD_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_ROCKHOWARD_PALETTES_PORTRAITS) },
    { L"Terry Bogard", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_TERRY_PALETTES_PORTRAITS) },
    { L"Khushnood Butt", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_PORTRAITS) },
    { L"Dong Hwan", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_DONG_PALETTES_PORTRAITS) },
    { L"Jae Hoon", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_JAE_PALETTES_PORTRAITS) },
    { L"Hotaru", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_HOTARU_PALETTES_PORTRAITS) },
    { L"Gato", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_GATO_PALETTES_PORTRAITS) },
    { L"Kevin", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_KEVIN_PALETTES_PORTRAITS) },
    { L"Grant", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_GRANT_PALETTES_PORTRAITS) },
    { L"B. Jenet", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_BJENNET_PALETTES_PORTRAITS) },
    { L"Hokutomaro", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_PORTRAITS) },
    { L"Freeman", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_PORTRAITS) },
    { L"Tizoc", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_TIZOC_PALETTES_PORTRAITS) },
    { L"Kain", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_KAIN_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset Garou_A_BONUS_HUD_PALETTES[] =
{
    { L"Meter", 0xe040, 0xe0e0 },
    { L"Lifebar Nametag, Border, Timer", 0xe120, 0xe140 },
    { L"Lifebar Timer Hurry Up", 0xe140, 0xe160 },
    { L"Lifebar Top: off", 0xe160, 0xe180 },
    { L"Lifebar Top: on", 0xe180, 0xe1a0 },
};

const sGame_PaletteDataset Garou_A_BONUS_WINPOINT_PALETTES[] =
{
    { L"Terry Winpoint", 0xe400, 0xe420 },
    { L"Rock Winpoint", 0xe480, 0xe4a0 },
    { L"Dong Hwan Winpoint", 0xe500, 0xe520 },
    { L"Jae Hoon Winpoint", 0xe580, 0xe5a0 },
    { L"Hotaru Winpoint", 0xe600, 0xe620 },
    { L"Gato Winpoint", 0xe680, 0xe6a0 },
    { L"B. Jenet Winpoint", 0xe700, 0xe720 },
    { L"Khushnood Winpoint", 0xe780, 0xe7a0 },
    { L"Hokutomaru Winpoint", 0xe800, 0xe820 },
    { L"Freeman Winpoint", 0xe880, 0xe8a0 },
    { L"Tizoc Winpoint", 0xe900, 0xe920 },
    { L"Bastard Kevin Winpoint", 0xe980, 0xe9a0 },
    { L"Grant Winpoint", 0xea00, 0xea20 },
    { L"Kain Winpoint", 0xea80, 0xeaa0 },
};

#ifdef OBSOLETE
const sGame_PaletteDataset Garou_A_BONUS_SELECTDARK_PALETTES[] =
{
    { L"Terry",             0x34e00 + (0x20 * 0x00), 0x34e00 + (0x20 * 0x01) },
    { L"Rock",              0x34e00 + (0x20 * 0x01), 0x34e00 + (0x20 * 0x02) },
    { L"Dong Hwan",         0x34e00 + (0x20 * 0x02), 0x34e00 + (0x20 * 0x03) },
    { L"Jae Hoon",          0x34e00 + (0x20 * 0x03), 0x34e00 + (0x20 * 0x04) },
    { L"Hotaru",            0x34e00 + (0x20 * 0x04), 0x34e00 + (0x20 * 0x05) },
    { L"Gato",              0x34e00 + (0x20 * 0x05), 0x34e00 + (0x20 * 0x06) },
    { L"B. Jenet",          0x34e00 + (0x20 * 0x06), 0x34e00 + (0x20 * 0x07) },
    { L"Khushnood Butt",    0x34e00 + (0x20 * 0x07), 0x34e00 + (0x20 * 0x08) },
    { L"Hokutomaru",        0x34e00 + (0x20 * 0x08), 0x34e00 + (0x20 * 0x09) },
    { L"Freeman",           0x34e00 + (0x20 * 0x09), 0x34e00 + (0x20 * 0x0a) },
    { L"Tizoc",             0x34e00 + (0x20 * 0x0a), 0x34e00 + (0x20 * 0x0b) },
    { L"Bastard Kevin",     0x34e00 + (0x20 * 0x0b), 0x34e00 + (0x20 * 0x0c) },
    { L"Grant",             0x34e00 + (0x20 * 0x0c), 0x34e00 + (0x20 * 0x0d) },
    { L"Kain",              0x34e00 + (0x20 * 0x0d), 0x34e00 + (0x20 * 0x0e) },
};

const sGame_PaletteDataset Garou_A_BONUS_SELECTLIGHT_PALETTES[] =
{
    { L"Terry",             0x35000 + (0x20 * 0x00), 0x35000 + (0x20 * 0x01) },
    { L"Rock",              0x35000 + (0x20 * 0x01), 0x35000 + (0x20 * 0x02) },
    { L"Dong Hwan",         0x35000 + (0x20 * 0x02), 0x35000 + (0x20 * 0x03) },
    { L"Jae Hoon",          0x35000 + (0x20 * 0x03), 0x35000 + (0x20 * 0x04) },
    { L"Hotaru",            0x35000 + (0x20 * 0x04), 0x35000 + (0x20 * 0x05) },
    { L"Gato",              0x35000 + (0x20 * 0x05), 0x35000 + (0x20 * 0x06) },
    { L"B. Jenet",          0x35000 + (0x20 * 0x06), 0x35000 + (0x20 * 0x07) },
    { L"Khushnood Butt",    0x35000 + (0x20 * 0x07), 0x35000 + (0x20 * 0x08) },
    { L"Hokutomaru",        0x35000 + (0x20 * 0x08), 0x35000 + (0x20 * 0x09) },
    { L"Freeman",           0x35000 + (0x20 * 0x09), 0x35000 + (0x20 * 0x0a) },
    { L"Tizoc",             0x35000 + (0x20 * 0x0a), 0x35000 + (0x20 * 0x0b) },
    { L"Bastard Kevin",     0x35000 + (0x20 * 0x0b), 0x35000 + (0x20 * 0x0c) },
    { L"Grant",             0x35000 + (0x20 * 0x0c), 0x35000 + (0x20 * 0x0d) },
    { L"Kain",              0x35000 + (0x20 * 0x0d), 0x35000 + (0x20 * 0x0e) },
};
#endif

const sGame_PaletteDataset Garou_A_BONUS_SELECTBACK_PALETTES[] =
{
    { L"Terry",             0x2b700 + (0x20 * 0x00), 0x2b700 + (0x20 * 0x01) },
    { L"Rock",              0x2b700 + (0x20 * 0x01), 0x2b700 + (0x20 * 0x02) },
    { L"Dong Hwan",         0x2b700 + (0x20 * 0x02), 0x2b700 + (0x20 * 0x03) },
    { L"Jae Hoon",          0x2b700 + (0x20 * 0x03), 0x2b700 + (0x20 * 0x04) },
    { L"Hotaru",            0x2b700 + (0x20 * 0x04), 0x2b700 + (0x20 * 0x05) },
    { L"Gato",              0x2b700 + (0x20 * 0x05), 0x2b700 + (0x20 * 0x06) },
    { L"B. Jenet",          0x2b700 + (0x20 * 0x06), 0x2b700 + (0x20 * 0x07) },
    { L"Khushnood Butt",    0x2b700 + (0x20 * 0x07), 0x2b700 + (0x20 * 0x08) },
    { L"Hokutomaru",        0x2b700 + (0x20 * 0x08), 0x2b700 + (0x20 * 0x09) },
    { L"Freeman",           0x2b700 + (0x20 * 0x09), 0x2b700 + (0x20 * 0x0a) },
    { L"Tizoc",             0x2b700 + (0x20 * 0x0a), 0x2b700 + (0x20 * 0x0b) },
    { L"Bastard Kevin",     0x2b700 + (0x20 * 0x0b), 0x2b700 + (0x20 * 0x0c) },
    { L"Grant",             0x2b700 + (0x20 * 0x0c), 0x2b700 + (0x20 * 0x0d) },
    { L"Kain",              0x2b700 + (0x20 * 0x0d), 0x2b700 + (0x20 * 0x0e) },
};

// Obsolete 
/*
const sGame_PaletteDataset Garou_A_BONUS_STORYPORTRAITS_PALETTES[] =
{
    { L"Terry",             0x2a700 + (0x20 * 0x00), 0x2a700 + (0x20 * 0x01) },
    { L"Rock",              0x2a700 + (0x20 * 0x01), 0x2a700 + (0x20 * 0x02) },
    { L"Dong Hwan",         0x2a700 + (0x20 * 0x02), 0x2a700 + (0x20 * 0x03) },
    { L"Jae Hoon",          0x2a700 + (0x20 * 0x03), 0x2a700 + (0x20 * 0x04) },
    { L"Hotaru",            0x2a700 + (0x20 * 0x04), 0x2a700 + (0x20 * 0x05) },
    { L"Gato",              0x2a700 + (0x20 * 0x05), 0x2a700 + (0x20 * 0x06) },
    { L"B. Jenet",          0x2a700 + (0x20 * 0x06), 0x2a700 + (0x20 * 0x07) },
    { L"Khushnood Butt",    0x2a700 + (0x20 * 0x07), 0x2a700 + (0x20 * 0x08) },
    { L"Hokutomaru",        0x2a700 + (0x20 * 0x08), 0x2a700 + (0x20 * 0x09) },
    { L"Freeman",           0x2a700 + (0x20 * 0x09), 0x2a700 + (0x20 * 0x0a) },
    { L"Tizoc",             0x2a700 + (0x20 * 0x0a), 0x2a700 + (0x20 * 0x0b) },
    { L"Bastard Kevin",     0x2a700 + (0x20 * 0x0b), 0x2a700 + (0x20 * 0x0c) },
    { L"Grant",             0x2a700 + (0x20 * 0x0c), 0x2a700 + (0x20 * 0x0d) },
    { L"Kain",              0x2a700 + (0x20 * 0x0d), 0x2a700 + (0x20 * 0x0e) },
};
*/

const sGame_PaletteDataset Garou_A_BONUS_PALETTES[] =
{
    { L"First Round Super K.O.", 0x017720, 0x017740 },
    { L"Last Round Super K.O.", 0x017780, 0x0177a0 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_STORYMODE[] =
{
    { L"Terry Story Mode Stuff - A", 0x2c900 + (0x40 * 0x00), 0x2c900 + (0x40 * 0x01), indexGarouATerryBogard, 0x20 },
    { L"Terry Story Mode Stuff - B", 0x2c900 + (0x40 * 0x01), 0x2c900 + (0x40 * 0x02), indexGarouATerryBogard, 0x20 },
    { L"Terry Story Mode Stuff - C", 0x2c900 + (0x40 * 0x02), 0x2c900 + (0x40 * 0x03), indexGarouATerryBogard, 0x20 },
    { L"Terry Story Mode Stuff - D", 0x2c900 + (0x40 * 0x03), 0x2c900 + (0x40 * 0x04), indexGarouATerryBogard, 0x20 },
};

const sGame_PaletteDataset Garou_A_ROCKHOWARD_PALETTES_STORYMODE[] =
{
    { L"Rock Story Mode Stuff - A", 0x2c900 + (0x40 * 0x04), 0x2c900 + (0x40 * 0x05), indexGarouARockHoward, 0x20 },
    { L"Rock Story Mode Stuff - B", 0x2c900 + (0x40 * 0x05), 0x2c900 + (0x40 * 0x06), indexGarouARockHoward, 0x20 },
    { L"Rock Story Mode Stuff - C", 0x2c900 + (0x40 * 0x06), 0x2c900 + (0x40 * 0x07), indexGarouARockHoward, 0x20 },
    { L"Rock Story Mode Stuff - D", 0x2c900 + (0x40 * 0x07), 0x2c900 + (0x40 * 0x08), indexGarouARockHoward, 0x20 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_STORYMODE[] =
{
    { L"Dong Hwan Story Mode Stuff - A", 0x2c900 + (0x40 * 0x08), 0x2c900 + (0x40 * 0x09), indexGarouADong, 0x20 },
    { L"Dong Hwan Story Mode Stuff - B", 0x2c900 + (0x40 * 0x09), 0x2c900 + (0x40 * 0x0a), indexGarouADong, 0x20 },
    { L"Dong Hwan Story Mode Stuff - C", 0x2c900 + (0x40 * 0x0a), 0x2c900 + (0x40 * 0x0b), indexGarouADong, 0x20 },
    { L"Dong Hwan Story Mode Stuff - D", 0x2c900 + (0x40 * 0x0b), 0x2c900 + (0x40 * 0x0c), indexGarouADong, 0x20 },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_STORYMODE[] =
{
    { L"Jae Hoon Story Mode Stuff - A", 0x2c900 + (0x40 * 0x0c), 0x2c900 + (0x40 * 0x0d), indexGarouAJae, 0x20 },
    { L"Jae Hoon Story Mode Stuff - B", 0x2c900 + (0x40 * 0x0d), 0x2c900 + (0x40 * 0x0e), indexGarouAJae, 0x20 },
    { L"Jae Hoon Story Mode Stuff - C", 0x2c900 + (0x40 * 0x0e), 0x2c900 + (0x40 * 0x0f), indexGarouAJae, 0x20 },
    { L"Jae Hoon Story Mode Stuff - D", 0x2c900 + (0x40 * 0x0f), 0x2c900 + (0x40 * 0x10), indexGarouAJae, 0x20 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_STORYMODE[] =
{
    { L"Hotaru Story Mode Stuff - A", 0x2c900 + (0x40 * 0x10), 0x2c900 + (0x40 * 0x11), indexGarouAHotaru, 0x20 },
    { L"Hotaru Story Mode Stuff - B", 0x2c900 + (0x40 * 0x11), 0x2c900 + (0x40 * 0x12), indexGarouAHotaru, 0x20 },
    { L"Hotaru Story Mode Stuff - C", 0x2c900 + (0x40 * 0x12), 0x2c900 + (0x40 * 0x13), indexGarouAHotaru, 0x20 },
    { L"Hotaru Story Mode Stuff - D", 0x2c900 + (0x40 * 0x13), 0x2c900 + (0x40 * 0x14), indexGarouAHotaru, 0x20 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_STORYMODE[] =
{
    { L"Gato Story Mode Stuff - A", 0x2c900 + (0x40 * 0x14), 0x2c900 + (0x40 * 0x15), indexGarouAGato, 0x20 },
    { L"Gato Story Mode Stuff - B", 0x2c900 + (0x40 * 0x15), 0x2c900 + (0x40 * 0x16), indexGarouAGato, 0x20 },
    { L"Gato Story Mode Stuff - C", 0x2c900 + (0x40 * 0x16), 0x2c900 + (0x40 * 0x17), indexGarouAGato, 0x20 },
    { L"Gato Story Mode Stuff - D", 0x2c900 + (0x40 * 0x17), 0x2c900 + (0x40 * 0x18), indexGarouAGato, 0x20 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_STORYMODE[] =
{
    { L"B. Jenet Story Mode Stuff - A", 0x2c900 + (0x40 * 0x18), 0x2c900 + (0x40 * 0x19), indexGarouABJenet, 0x20 },
    { L"B. Jenet Story Mode Stuff - B", 0x2c900 + (0x40 * 0x19), 0x2c900 + (0x40 * 0x1a), indexGarouABJenet, 0x20 },
    { L"B. Jenet Story Mode Stuff - C", 0x2c900 + (0x40 * 0x1a), 0x2c900 + (0x40 * 0x1b), indexGarouABJenet, 0x20 },
    { L"B. Jenet Story Mode Stuff - D", 0x2c900 + (0x40 * 0x1b), 0x2c900 + (0x40 * 0x1c), indexGarouABJenet, 0x20 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_STORYMODE[] =
{
    { L"Khushnood Story Mode Stuff - A", 0x2c900 + (0x40 * 0x1c), 0x2c900 + (0x40 * 0x1d), indexGarouAKhushnood, 0x20 },
    { L"Khushnood Story Mode Stuff - B", 0x2c900 + (0x40 * 0x1d), 0x2c900 + (0x40 * 0x1e), indexGarouAKhushnood, 0x20 },
    { L"Khushnood Story Mode Stuff - C", 0x2c900 + (0x40 * 0x1e), 0x2c900 + (0x40 * 0x1f), indexGarouAKhushnood, 0x20 },
    { L"Khushnood Story Mode Stuff - D", 0x2c900 + (0x40 * 0x1f), 0x2c900 + (0x40 * 0x20), indexGarouAKhushnood, 0x20 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_STORYMODE[] =
{
    { L"Hokutomaru Story Mode Stuff - A", 0x2c900 + (0x40 * 0x20), 0x2c900 + (0x40 * 0x21), indexGarouAHokutomaru, 0x20 },
    { L"Hokutomaru Story Mode Stuff - B", 0x2c900 + (0x40 * 0x21), 0x2c900 + (0x40 * 0x22), indexGarouAHokutomaru, 0x20 },
    { L"Hokutomaru Story Mode Stuff - C", 0x2c900 + (0x40 * 0x22), 0x2c900 + (0x40 * 0x23), indexGarouAHokutomaru, 0x20 },
    { L"Hokutomaru Story Mode Stuff - D", 0x2c900 + (0x40 * 0x23), 0x2c900 + (0x40 * 0x24), indexGarouAHokutomaru, 0x20 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_STORYMODE[] =
{
    { L"Freeman Story Mode Stuff - A", 0x2c900 + (0x40 * 0x24), 0x2c900 + (0x40 * 0x25), indexGarouAFreeman, 0x20 },
    { L"Freeman Story Mode Stuff - B", 0x2c900 + (0x40 * 0x25), 0x2c900 + (0x40 * 0x26), indexGarouAFreeman, 0x20 },
    { L"Freeman Story Mode Stuff - C", 0x2c900 + (0x40 * 0x26), 0x2c900 + (0x40 * 0x27), indexGarouAFreeman, 0x20 },
    { L"Freeman Story Mode Stuff - D", 0x2c900 + (0x40 * 0x27), 0x2c900 + (0x40 * 0x28), indexGarouAFreeman, 0x20 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_STORYMODE[] =
{
    { L"Tizoc Story Mode Stuff - A", 0x2c900 + (0x40 * 0x28), 0x2c900 + (0x40 * 0x29), indexGarouATizoc, 0x20 },
    { L"Tizoc Story Mode Stuff - B", 0x2c900 + (0x40 * 0x29), 0x2c900 + (0x40 * 0x2a), indexGarouATizoc, 0x20 },
    { L"Tizoc Story Mode Stuff - C", 0x2c900 + (0x40 * 0x2a), 0x2c900 + (0x40 * 0x2b), indexGarouATizoc, 0x20 },
    { L"Tizoc Story Mode Stuff - D", 0x2c900 + (0x40 * 0x2b), 0x2c900 + (0x40 * 0x2c), indexGarouATizoc, 0x20 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_STORYMODE[] =
{
    { L"Kevin Story Mode Stuff - A", 0x2c900 + (0x40 * 0x2c), 0x2c900 + (0x40 * 0x2d), indexGarouAKevin, 0x20 },
    { L"Kevin Story Mode Stuff - B", 0x2c900 + (0x40 * 0x2d), 0x2c900 + (0x40 * 0x2e), indexGarouAKevin, 0x20 },
    { L"Kevin Story Mode Stuff - C", 0x2c900 + (0x40 * 0x2e), 0x2c900 + (0x40 * 0x2f), indexGarouAKevin, 0x20 },
    { L"Kevin Story Mode Stuff - D", 0x2c900 + (0x40 * 0x2f), 0x2c900 + (0x40 * 0x30), indexGarouAKevin, 0x20 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_STORYMODE[] =
{
    { L"Grant Story Mode Stuff - A", 0x2c900 + (0x40 * 0x30), 0x2c900 + (0x40 * 0x31), indexGarouAGrant, 0x20 },
    { L"Grant Story Mode Stuff - B", 0x2c900 + (0x40 * 0x31), 0x2c900 + (0x40 * 0x32), indexGarouAGrant, 0x20 },
    { L"Grant Story Mode Stuff - C", 0x2c900 + (0x40 * 0x32), 0x2c900 + (0x40 * 0x33), indexGarouAGrant, 0x20 },
    { L"Grant Story Mode Stuff - D", 0x2c900 + (0x40 * 0x33), 0x2c900 + (0x40 * 0x34), indexGarouAGrant, 0x20 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_STORYMODE[] =
{
    { L"Kain Story Mode Stuff - A", 0x2c900 + (0x40 * 0x34), 0x2c900 + (0x40 * 0x35), indexGarouAKain, 0x20 },
    { L"Kain Story Mode Stuff - B", 0x2c900 + (0x40 * 0x35), 0x2c900 + (0x40 * 0x36), indexGarouAKain, 0x20 },
    { L"Kain Story Mode Stuff - C", 0x2c900 + (0x40 * 0x36), 0x2c900 + (0x40 * 0x37), indexGarouAKain, 0x20 },
    { L"Kain Story Mode Stuff - D", 0x2c900 + (0x40 * 0x37), 0x2c900 + (0x40 * 0x38), indexGarouAKain, 0x20 },
};

//Endings

//Rock Howard
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_ROCKHOWARD[] =
{
    { L"Rock Ending (1/9)", 0x35200, 0x35280, indexGarouABonus, 0x38 },
    { L"Rock Ending (2/9)", 0x352a0, 0x35320, indexGarouABonus, 0x39 },
    { L"Rock Ending (3/9)", 0x35340, 0x353c0, indexGarouABonus, 0x3a },
    { L"Rock Ending (4/9)", 0x353e0, 0x35460, indexGarouABonus, 0x3b },
    { L"Rock Ending (5/9)", 0x35520, 0x355a0, indexGarouABonus, 0x3c },
    { L"Rock Ending (6/9)", 0x35480, 0x35500, indexGarouABonus, 0x3d },
    { L"Rock Ending (7/9)", 0x355c0, 0x35640, indexGarouABonus, 0x3e },
    { L"Rock Ending (8/9)", 0x35660, 0x356e0, indexGarouABonus, 0x3f },
    { L"Rock Ending (9/9)", 0x357a0, 0x35820, indexGarouABonus, 0x40 },
    { L"Rock Ending Credits", 0x35840, 0x35860, indexGarouABonus, 0x41 },
};

//Terry Bogard
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_TERRYBOGARD[] =
{
    { L"Terry Ending (1/9)", 0x32000, 0x32080, indexGarouABonus, 0x42 },
    { L"Terry Ending (2/9)", 0x320a0, 0x32120, indexGarouABonus, 0x43 },
    { L"Terry Ending (3/9)", 0x32140, 0x321c0, indexGarouABonus, 0x44 },
    { L"Terry Ending (4/9)", 0x321e0, 0x32260, indexGarouABonus, 0x45 },
    { L"Terry Ending (5/9)", 0x32280, 0x32300, indexGarouABonus, 0x46 },
    { L"Terry Ending (6/9)", 0x32320, 0x323a0, indexGarouABonus, 0x47 },
    { L"Terry Ending (7/9)", 0x323c0, 0x32440, indexGarouABonus, 0x48 },
    { L"Terry Ending (8/9)", 0x32460, 0x324e0, indexGarouABonus, 0x49 },
    { L"Terry Ending (9/9)", 0x32500, 0x32580, indexGarouABonus, 0x4a },
    { L"Terry Ending Credits", 0x325a0, 0x325c0, indexGarouABonus, 0x4b },
};

//Khushnood Butt
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_BUTT[] =
{
    { L"Khushnood Butt Ending (1/8)", 0x38200, 0x38280, indexGarouABonus, 0x2d },
    { L"Khushnood Butt Ending (2/8)", 0x382a0, 0x38320, indexGarouABonus, 0x2e },
    { L"Khushnood Butt Ending (3/8)", 0x38340, 0x383c0, indexGarouABonus, 0x2f },
    { L"Khushnood Butt Ending (4/8)", 0x383e0, 0x38460, indexGarouABonus, 0x30 },
    { L"Khushnood Butt Ending (5/8)", 0x38480, 0x38500, indexGarouABonus, 0x31 },
    { L"Khushnood Butt Ending (6/8)", 0x38520, 0x385a0, indexGarouABonus, 0x32 },
    { L"Khushnood Butt Ending (7/8)", 0x385c0, 0x38640, indexGarouABonus, 0x33 },
    { L"Khushnood Butt Ending (8/8)", 0x38660, 0x386e0, indexGarouABonus, 0x34 },
    { L"Khushnood Butt Ending Credits", 0x38700, 0x38720, indexGarouABonus, 0x35 },
};

//Kim's Brothers
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_KIMBRO[] =
{
    { L"Kim's Brothers Ending (1/2)", 0x35a00, 0x35a80, indexGarouABonus, 0x36 },
    { L"Kim's Brothers Ending (2/2)", 0x35d20, 0x35da0, indexGarouABonus, 0x37 },
    { L"Dong Hwan Ending (1/5)", 0x35b40, 0x35bc0, indexGarouABonus, 0x00 },
    { L"Dong Hwan Ending (2/5)", 0x35c80, 0x35d00, indexGarouABonus, 0x01 },
    { L"Dong Hwan Ending (3/5)", 0x35dc0, 0x35e40, indexGarouABonus, 0x02 },
    { L"Dong Hwan Ending (4/5)", 0x35be0, 0x35c60, indexGarouABonus, 0x03 },
    { L"Dong Hwan Ending (5/5)", 0x35aa0, 0x35b20, indexGarouABonus, 0x04 },
    { L"Dong Hwan Ending Credits", 0x35e60, 0x35e80, indexGarouABonus, 0x05 },
    { L"Jae Hoon Ending (1/4)", 0x36480, 0x36500, indexGarouABonus, 0x26 },
    { L"Jae Hoon Ending (2/4)", 0x36340, 0x363c0, indexGarouABonus, 0x27 },
    { L"Jae Hoon Ending (3/4)", 0x362a0, 0x36320, indexGarouABonus, 0x28 },
    { L"Jae Hoon Ending (4/4)", 0x363e0, 0x36460, indexGarouABonus, 0x29 },
    { L"Jae Hoon Ending Credits", 0x36520, 0x36540, indexGarouABonus, 0x2a },
};

//Hotaru
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_HOTARU[] =
{
    { L"Hotaru Ending (1/10)", 0x36c80, 0x36d00, indexGarouABonus, 0x1b },
    { L"Hotaru Ending (2/10)", 0x36a00, 0x36a80, indexGarouABonus, 0x1d },
    { L"Hotaru Ending (3/10)", 0x36f00, 0x36f80, indexGarouABonus, 0x1e },
    { L"Hotaru Ending (4/10)", 0x36aa0, 0x36b20, indexGarouABonus, 0x1f },
    { L"Hotaru Ending (5/10)", 0x36d20, 0x36da0, indexGarouABonus, 0x20 },
    { L"Hotaru Ending (6/10)", 0x370e0, 0x37160, indexGarouABonus, 0x21 },
    { L"Hotaru Ending (7/10)", 0x36b40, 0x36bc0, indexGarouABonus, 0x22 },
    { L"Hotaru Ending (8/10)", 0x36dc0, 0x36e40, indexGarouABonus, 0x23 },
    { L"Hotaru Ending (9/10)", 0x36fa0, 0x37020, indexGarouABonus, 0x24 },
    { L"Hotaru Ending (10/10)", 0x37180, 0x37200, indexGarouABonus, 0x1c },
    { L"Hotaru Ending Credits", 0x37160, 0x37180, indexGarouABonus, 0x25 },
};

//Gato
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_GATO[] =
{
    { L"Gato Ending (1/6)", 0x37200, 0x37280, indexGarouABonus, 0x06 },
    { L"Gato Ending (2/6)", 0x37280, 0x37300, indexGarouABonus, 0x07 },
    { L"Gato Ending (3/6)", 0x37300, 0x37380, indexGarouABonus, 0x08 },
    { L"Gato Ending (4/6)", 0x37380, 0x37400, indexGarouABonus, 0x09 },
    { L"Gato Ending (5/6)", 0x37400, 0x37480, indexGarouABonus, 0x0a },
    { L"Gato Ending (6/6)", 0x37480, 0x37500, indexGarouABonus, 0x0b },
    { L"Gato Ending Credits", 0x37520, 0x37540, indexGarouABonus, 0x0c },
};

//Kevin
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_KEVIN[] =
{
    { L"Kevin Ending (1/7)", 0x3b200, 0x3b280, indexGarouAKevin, 0x21 },
    { L"Kevin Ending (2/7)", 0x3b280, 0x3b300, indexGarouAKevin, 0x22 },
    { L"Kevin Ending (3/7)", 0x3b520, 0x3b5a0, indexGarouAKevin, 0x23 },
    { L"Kevin Ending (4/7)", 0x3b300, 0x3b380, indexGarouAKevin, 0x24 },
    { L"Kevin Ending (5/7)", 0x3b380, 0x3b400, indexGarouAKevin, 0x25 },
    { L"Kevin Ending (6/7)", 0x3b400, 0x3b480, indexGarouAKevin, 0x26 },
    { L"Kevin Ending (7/7)", 0x3b480, 0x3b500, indexGarouAKevin, 0x27 },
    { L"Kevin Ending Credits", 0x3b5c0, 0x3b5e0, indexGarouAKevin, 0x28 },
};

//B. Jenet
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_BJENET[] =
{
    { L"B.Jenet Ending (1/8)", 0x37a00, 0x37a80, indexGarouABJenet, 0x21 },
    { L"B.Jenet Ending (2/8)", 0x37b40, 0x37bc0, indexGarouABJenet, 0x22 },
    { L"B.Jenet Ending (3/8)", 0x37dc0, 0x37e40, indexGarouABJenet, 0x23 },
    { L"B.Jenet Ending (4/8)", 0x37d20, 0x37da0, indexGarouABJenet, 0x24 },
    { L"B.Jenet Ending (5/8)", 0x37c80, 0x37d00, indexGarouABJenet, 0x25 },
    { L"B.Jenet Ending (6/8)", 0x37e60, 0x37ee0, indexGarouABJenet, 0x26 },
    { L"B.Jenet Ending (7/8)", 0x37aa0, 0x37b20, indexGarouABJenet, 0x27 },
    { L"B.Jenet Ending (8/8)", 0x37be0, 0x37c60, indexGarouABJenet, 0x28 },
    { L"B.Jenet Ending Credits", 0x37f00, 0x37f20, indexGarouABJenet, 0x29 },
};

//Hokutomaro
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_HOKUTOMARU[] =
{
    { L"Hokutomaru Ending (1/6)", 0x38a00, 0x38a80, indexGarouABonus, 0x14 },
    { L"Hokutomaru Ending (2/6)", 0x38aa0, 0x38b20, indexGarouABonus, 0x15 },
    { L"Hokutomaru Ending (3/6)", 0x38b40, 0x38bc0, indexGarouABonus, 0x16 },
    { L"Hokutomaru Ending (4/6)", 0x38bc0, 0x38c40, indexGarouABonus, 0x17 },
    { L"Hokutomaru Ending (5/6)", 0x38c80, 0x38d00, indexGarouABonus, 0x18 },
    { L"Hokutomaru Ending (6/6)", 0x38d20, 0x38da0, indexGarouABonus, 0x19 },
    { L"Hokutomaru Ending Credits", 0x38dc0, 0x38de0, indexGarouABonus, 0x1a },
};

//Freeman
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_FREEMAN[] =
{
    { L"Freeman Ending (1/9)", 0x39200, 0x39280, indexGarouAFreeman, 0x21 },
    { L"Freeman Ending (2/9)", 0x392a0, 0x39320, indexGarouAFreeman, 0x22 },
    { L"Freeman Ending (3/9)", 0x39340, 0x393c0, indexGarouAFreeman, 0x23 },
    { L"Freeman Ending (4/9)", 0x39520, 0x395a0, indexGarouAFreeman, 0x24 },
    { L"Freeman Ending (5/9)", 0x393e0, 0x39460, indexGarouAFreeman, 0x25 },
    { L"Freeman Ending (6/9)", 0x39480, 0x39500, indexGarouAFreeman, 0x26 },
    { L"Freeman Ending (7/9)", 0x395c0, 0x39640, indexGarouAFreeman, 0x27 },
    { L"Freeman Ending (8/9)", 0x39660, 0x396e0, indexGarouAFreeman, 0x28 },
    { L"Freeman Ending (9/9)", 0x39700, 0x39780, indexGarouAFreeman, 0x29 },
    { L"Freeman Ending Credits", 0x397a0, 0x397c0, indexGarouAFreeman, 0x2a },
};

//Tizoc
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_TIZOC[] =
{
    { L"Tizoc Ending (1/6)", 0x3aa00, 0x3aa80, indexGarouATizoc, 0x21 },
    { L"Tizoc Ending (2/6)", 0x3aaa0, 0x3ab20, indexGarouATizoc, 0x22 },
    { L"Tizoc Ending (3/6)", 0x3ab40, 0x3abc0, indexGarouATizoc, 0x23 },
    { L"Tizoc Ending (4/6)", 0x3abe0, 0x3ac60, indexGarouATizoc, 0x24 },
    { L"Tizoc Ending (5/6)", 0x3ac80, 0x3ad00, indexGarouATizoc, 0x25 },
    { L"Tizoc Ending (6/6)", 0x3ad20, 0x3ada0, indexGarouATizoc, 0x26 },
    { L"Tizoc Ending Credits", 0x3adc0, 0x3ade0, indexGarouATizoc, 0x27 },
};

//Grant/Kain
const sGame_PaletteDataset Garou_A_ENDINGS_PALETTES_GRANTKAIN[] =
{
    { L"Grant/Kain Ending (1/3)", 0x39a00, 0x39a80, indexGarouABonus, 0x11 },
    { L"Grant/Kain Ending (2/3)", 0x39a80, 0x39b00, indexGarouABonus, 0x12 },
    { L"Grant/Kain Ending (3/3)", 0x39b00, 0x39b80, indexGarouABonus, 0x13 },
    { L"Grant Ending (1/3)", 0x39c00, 0x39c80, indexGarouABonus, 0x0d },
    { L"Grant Ending (2/3)", 0x39b80, 0x39c00, indexGarouABonus, 0x0e },
    { L"Grant Ending (3/3)", 0x39c80, 0x39d00, indexGarouABonus, 0x0f },
    { L"Grant Ending Credits", 0x39da0, 0x39dc0, indexGarouABonus, 0x10 },
    { L"Kain Ending", 0x3a200, 0x3a280, indexGarouABonus, 0x2b },
    { L"Kain Ending Credits", 0x3a2a0, 0x3a2c0, indexGarouABonus, 0x2c },
};

//Intro 1
const sGame_PaletteDataset Garou_A_BONUS_PALETTES_INTRO1[] =
{
    { L"SNK Presents", 0x3c0a0, 0x3c0c0 },
    { L"Intro Text", 0x3c040, 0x3c060 },
    { L"Terry vs Geese", 0x3c000, 0x3c040, indexGarouABonus, 0x4e },
    { L"Rock's Flashbacks (1/8)", 0x3bc00, 0x3bc80, indexGarouABonus, 0x50 },
    { L"Rock's Flashbacks (2/8)", 0x3bc80, 0x3bd00, indexGarouABonus, 0x51 },
    { L"Rock's Flashbacks (3/8)", 0x3bd00, 0x3bd80, indexGarouABonus, 0x52 },
    { L"Rock's Flashbacks (4/8)", 0x3bd80, 0x3be00, indexGarouABonus, 0x53 },
    { L"Rock's Flashbacks (5/8)", 0x3be00, 0x3be80, indexGarouABonus, 0x54 },
    { L"Rock's Flashbacks (6/8)", 0x3be80, 0x3bf00, indexGarouABonus, 0x55 },
    { L"Rock's Flashbacks (7/8)", 0x3bf00, 0x3bf80, indexGarouABonus, 0x56 },
    { L"Rock's Flashbacks (8/8)", 0x3bf80, 0x3c000, indexGarouABonus, 0x57 },
    { L"Rock Intro Frames 1", 0x3c600, 0x3c680, indexGarouABonus, 0x58 },
    { L"Rock Intro Frames 2", 0x3c680, 0x3c700, indexGarouABonus, 0x59 },
    { L"Rock Intro Frames 3", 0x3c700, 0x3c780, indexGarouABonus, 0x5a },
    { L"Rock Intro Frames 4", 0x3c780, 0x3c800, indexGarouABonus, 0x5b },
    { L"Rock Intro Frames 5", 0x3c800, 0x3c880, indexGarouABonus, 0x5c },
    { L"Rock Intro Frames 6", 0x3c880, 0x3c900, indexGarouABonus, 0x5d },
};

//Intro 2
const sGame_PaletteDataset Garou_A_BONUS_PALETTES_INTRO2[] =
{
    { L"Rock Intro 1", 0x2e7a0, 0x2e7e0, indexGarouABonus, 0x4f },
    { L"Rock Intro 1 Frames 1", 0x2f500, 0x2f580 },
    { L"Rock Intro 1 Frames 2", 0x2f580, 0x2f600 },
    { L"Rock Intro 1 Frames 3", 0x2f600, 0x2f680 },
    { L"Rock Intro 1 Frames 4", 0x2f680, 0x2f700 },
    { L"Rock Intro 1 Frames 5", 0x2f700, 0x2f780 },
    { L"Rock Intro 2", 0x2f780, 0x2f800 },
    { L"SNK Presents", 0x02ef20, 0x02ef40 },
    { L"Intro Text", 0x0177a0, 0x0177c0 },
    { L"Rock Intro 3", 0x02ee00, 0x02ee40 },
    { L"Rock Intro 3 BG", 0x02ee40, 0x02ee80 },
    { L"Rock Intro 3 Frames 1", 0x2f800, 0x2f880 },
    { L"Rock Intro 3 Frames 2", 0x2f880, 0x2f900 },
    { L"Intro Flash", 0x017760, 0x017780 },
    { L"Kim's Brothers Intro 1", 0x2e960, 0x2e9e0 },
    { L"Kim's Brothers Intro 2", 0x02e9e0, 0x02ea60 },
    { L"Gato Intro Frames", 0x2f900, 0x2f980 },
    { L"Gato Intro", 0x02ea60, 0x02eaa0 },
    { L"Gato Intro BG", 0x02ee80, 0x02eec0 },
    { L"Hotaru Intro", 0x02eaa0, 0x02eb00 },
    { L"Hotaru House 1/2 Intro", 0x2f140, 0x2f180 },
    { L"Hotaru House 2/2 Intro", 0x2f1c0, 0x2f1e0 },
    { L"Hotaru Snow Intro", 0x017740, 0x017760 },
    { L"Intro Black Screen", 0x2f060, 0x2f080, indexGarouABonus, 0x62 },
    { L"Kevin Intro", 0x02ebc0, 0x02ec00 },
    { L"Hokutomaru Intro", 0x2ec00, 0x2ec40 },
    { L"B.Jenet Intro", 0x2ec40, 0x2ec80 },
    { L"Khushnood Butt Intro", 0x2ec80, 0x2eca0 },
    { L"Khushnood Butt BG Intro", 0x2f0e0, 0x2f100 },
    { L"Freeman Intro", 0x2ed00, 0x2ed20 },
    { L"Tizoc Intro", 0x2ecc0, 0x2ece0 },
    { L"Freeman/Tizoc BG Intro", 0x2ece0, 0x2ed00 },
    { L"Intro Extras", 0x2eca0, 0x2ecc0 },
    { L"Intro Characters", 0x2ed40, 0x2ee00 },
    { L"Rock VS Intro", 0x02eb00, 0x02eb40 },
    { L"Terry VS Intro", 0x02eb40, 0x02eb80 },
    { L"Terry VS Intro Frames 1", 0x2f980, 0x2fa00 },
    { L"Terry VS Intro Frames 2", 0x2fa00, 0x2fa80 },
    { L"Terry VS Intro Frames 3", 0x2fa80, 0x2fb00 },
    { L"Terry VS Intro Frames 4", 0x2fb00, 0x2fb80 },
    { L"Terry VS Intro Frames 5", 0x2fb80, 0x2fc00 },
    { L"Terry VS Rock BG", 0x2f180, 0x2f1c0 },
    { L"Rock Ending Intro Frames 1", 0x2fc00, 0x2fc80 },
    { L"Rock Ending Intro Frames 2", 0x2fc80, 0x2fd00 },
    { L"Rock Ending Intro Frames 3", 0x2fd00, 0x2fd80 },
    { L"Rock Ending Intro Frames 4", 0x2fd80, 0x2fe00 },
    { L"Rock Ending Intro Frames 5", 0x2fe00, 0x2fe80 },
    { L"Rock Ending Intro Frames 6", 0x2fe80, 0x2ff00 },
    { L"Rock Ending Intro Frames 7", 0x2ff00, 0x2ff80 },
    { L"Rock Ending Intro Frames 8", 0x2ff80, 0x30000 },
    { L"Rock Ending Intro", 0x2eec0, 0x2ef20 },
};

const sGame_PaletteDataset Garou_A_PALETTES_STORYMODE_CUTSCENES[] =
{
    { L"Story Mode Black Screen", 0x2d780, 0x2d7a0, indexGarouABonus, 0x62 },
    { L"Story Mode Grant VS 1/7", 0x2d740, 0x2d760 },
    { L"Story Mode Grant VS 2/7", 0x2d760, 0x2d780 },
    { L"Story Mode Grant VS 3/7", 0x2d840, 0x2d880 },
    { L"Story Mode Grant VS 4/7", 0x2d880, 0x2d8a0 },
    { L"Story Mode Grant VS 5/7", 0x2df00, 0x2df20 },
    { L"Story Mode Grant VS 6/7", 0x2e060, 0x2e080 },
    { L"Story Mode Grant VS 7/7", 0x2e100, 0x2e120 },
    { L"Story Mode Grant VS Flashing Eyes 1/8", 0x2df20, 0x2df40, indexGarouABonus, 0x66 },
    { L"Story Mode Grant VS Flashing Eyes 2/8", 0x2df40, 0x2df60, indexGarouABonus, 0x66 },
    { L"Story Mode Grant VS Flashing Eyes 3/8", 0x2df60, 0x2df80, indexGarouABonus, 0x66 },
    { L"Story Mode Grant VS Flashing Eyes 4/8", 0x2df80, 0x2dfa0, indexGarouABonus, 0x66 },
    { L"Story Mode Grant VS Flashing Eyes 5/8", 0x2dfa0, 0x2dfc0, indexGarouABonus, 0x66 },
    { L"Story Mode Grant VS Flashing Eyes 6/8", 0x2dfc0, 0x2dfe0, indexGarouABonus, 0x66 },
    { L"Story Mode Grant VS Flashing Eyes 7/8", 0x2dfe0, 0x2e000, indexGarouABonus, 0x66 },
    { L"Story Mode Grant VS Flashing Eyes 8/8", 0x2e000, 0x2e020, indexGarouABonus, 0x66 },
    { L"Story Mode Grant VS Characters", 0x2e040, 0x2e060, indexGarouABonus, 0x65 },
    { L"Story Mode Grant VS Floor", 0x2e020, 0x2e040, indexGarouABonus, 0x67 },
    { L"Story Mode Grant VS Flames", 0x2e0c0, 0x2e0e0 },
    { L"Story Mode Grant VS Sparks", 0x2e0e0, 0x2e100 },
    { L"Story Mode Grant VS Background 1", 0x2d8c0, 0x2d8e0, indexGarouABonus, 0x63 },
    { L"Story Mode Grant VS Background 2", 0x2d8e0, 0x2d900, indexGarouABonus, 0x64 },
    { L"Story Mode Grant VS Background 3", 0x2e080, 0x2e0a0 },
    { L"Story Mode Grant VS Background 4", 0x2e0a0, 0x2e0c0 },
    { L"Story Mode Kain VS", 0x2e120, 0x2e160, indexGarouABonus, 0x69 },
    { L"Story Mode Kain VS Background", 0x2e160, 0x2e1a0 },
};

const sGame_PaletteDataset Garou_A_PALETTES_STORYMODE_BONUS[] =
{
    { L"Story Mode Icons", 0x2a700, 0x2a8c0, indexGarouABonus, 0x68 },
    { L"Story Mode Map 1/3", 0x180a0, 0x180c0, indexGarouABonus, 0x6b },
    { L"Story Mode Map 2/3", 0x180c0, 0x180e0, indexGarouABonus, 0x6c },
    { L"Story Mode Map 3/3", 0x180e0, 0x18100, indexGarouABonus, 0x6d },
    { L"Story Mode Text", 0x18080, 0x180a0, indexGarouABonus, 0x6e },
    { L"Story Mode Locked Icons", 0x18060, 0x18080, indexGarouABonus, 0x6a },
};

const sGame_PaletteDataset Garou_A_PALETTES_STORYMODE_SELECT[] =
{
    { L"Select Screen Text", 0x33e20, 0x33e40 },
    { L"Select Screen Intro Icons", 0x33ee0, 0x33f00 },
    { L"Select Screen Light Icons", 0x35000, 0x35200, indexGarouABonus, 0x61 },
    { L"Select Screen Dark Icons", 0x34e00, 0x35000, indexGarouABonus, 0x61 },
    { L"Select Screen 1P Cursor", 0x33e00, 0x33e20, indexGarouABonus, 0x5e },
    { L"Select Screen 2P Cursor", 0x33ea0, 0x33ec0, indexGarouABonus, 0x5f },
    { L"Select Screen COM Cursor", 0x33ec0, 0x33ee0, indexGarouABonus, 0x60 },
    { L"Select Screen Names", 0x33e60, 0x33e80 },
    { L"Select Screen T.O.P.", 0x33f00, 0x33f20 },
    { L"VS Screen Names", 0x33e80, 0x33ea0 },
};

const sDescTreeNode Garou_A_STORY_COLLECTION[] =
{
    { L"Terry Bogard", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_TERRY_PALETTES_STORYMODE) },
    { L"Rock Howard", DESC_NODETYPE_TREE, (void*)Garou_A_ROCKHOWARD_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_ROCKHOWARD_PALETTES_STORYMODE) },
    { L"Dong Hwan", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_DONG_PALETTES_STORYMODE) },
    { L"Jae Hoon", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_JAE_PALETTES_STORYMODE) },
    { L"Hotaru", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_HOTARU_PALETTES_STORYMODE) },
    { L"Gato", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_GATO_PALETTES_STORYMODE) },
    { L"B. Jenet", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_BJENNET_PALETTES_STORYMODE) },
    { L"Khushnood Butt", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_STORYMODE) },
    { L"Hokutomaro", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_STORYMODE) },
    { L"Freeman", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_STORYMODE) },
    { L"Tizoc", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_TIZOC_PALETTES_STORYMODE) },
    { L"Kevin", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_KEVIN_PALETTES_STORYMODE) },
    { L"Grant", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_GRANT_PALETTES_STORYMODE) },
    { L"Kain", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_STORYMODE, ARRAYSIZE(Garou_A_KAIN_PALETTES_STORYMODE) },

    { L"Cutscenes", DESC_NODETYPE_TREE, (void*)Garou_A_PALETTES_STORYMODE_CUTSCENES, ARRAYSIZE(Garou_A_PALETTES_STORYMODE_CUTSCENES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)Garou_A_PALETTES_STORYMODE_BONUS, ARRAYSIZE(Garou_A_PALETTES_STORYMODE_BONUS) },
};

const sDescTreeNode Garou_A_ENDINGS_COLLECTION[] =
{
    { L"Rock Howard", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_ROCKHOWARD, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_ROCKHOWARD) },
    { L"Terry Bogard", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_TERRYBOGARD, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_TERRYBOGARD) },
    { L"Khushnood Butt", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_BUTT, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_BUTT) },
    { L"Kim's Brothers", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_KIMBRO, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_KIMBRO) },
    { L"Hotaru", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_HOTARU, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_HOTARU) },
    { L"Gato", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_GATO, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_GATO) },
    { L"Kevin", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_KEVIN, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_KEVIN) },
    { L"B. Jenet", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_BJENET, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_BJENET) },
    { L"Hokutomaru", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_HOKUTOMARU, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_HOKUTOMARU) },
    { L"Freeman", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_FREEMAN, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_FREEMAN) },
    { L"Tizoc", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_TIZOC, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_TIZOC) },
    { L"Grant/Kain", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_PALETTES_GRANTKAIN, ARRAYSIZE(Garou_A_ENDINGS_PALETTES_GRANTKAIN) },
};

const sDescTreeNode Garou_A_BONUS_COLLECTION[] =
{
    { L"HUD", DESC_NODETYPE_TREE, (void*)Garou_A_BONUS_HUD_PALETTES, ARRAYSIZE(Garou_A_BONUS_HUD_PALETTES) },
    { L"Winpoints", DESC_NODETYPE_TREE, (void*)Garou_A_BONUS_WINPOINT_PALETTES, ARRAYSIZE(Garou_A_BONUS_WINPOINT_PALETTES) },
    { L"Character Select Backgrounds", DESC_NODETYPE_TREE, (void*)Garou_A_BONUS_SELECTBACK_PALETTES, ARRAYSIZE(Garou_A_BONUS_SELECTBACK_PALETTES) },

    { L"Intro 1", DESC_NODETYPE_TREE, (void*)Garou_A_BONUS_PALETTES_INTRO1, ARRAYSIZE(Garou_A_BONUS_PALETTES_INTRO1) },
    { L"Intro 2", DESC_NODETYPE_TREE, (void*)Garou_A_BONUS_PALETTES_INTRO2, ARRAYSIZE(Garou_A_BONUS_PALETTES_INTRO2) },

    { L"Select Screen", DESC_NODETYPE_TREE, (void*)Garou_A_PALETTES_STORYMODE_SELECT, ARRAYSIZE(Garou_A_PALETTES_STORYMODE_SELECT) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)Garou_A_BONUS_PALETTES, ARRAYSIZE(Garou_A_BONUS_PALETTES) },
};

#define k_garouNameKey_Portraits L"Portraits"

const sDescTreeNode Garou_A_UNITS[] =
{
    { L"Rock Howard", DESC_NODETYPE_TREE, (void*)Garou_A_ROCKHOWARD_COLLECTION, ARRAYSIZE(Garou_A_ROCKHOWARD_COLLECTION) },
    { L"Terry Bogard", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_COLLECTION, ARRAYSIZE(Garou_A_TERRY_COLLECTION) },
    { L"Khushnood Butt", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_COLLECTION, ARRAYSIZE(Garou_A_KHUSHNOOD_COLLECTION) },
    { L"Dong Hwan", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_COLLECTION, ARRAYSIZE(Garou_A_DONG_COLLECTION) },
    { L"Jae Hoon", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_COLLECTION, ARRAYSIZE(Garou_A_JAE_COLLECTION) },
    { L"Hotaru", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_COLLECTION, ARRAYSIZE(Garou_A_HOTARU_COLLECTION) },
    { L"Gato", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_COLLECTION, ARRAYSIZE(Garou_A_GATO_COLLECTION) },
    { L"Kevin", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_COLLECTION, ARRAYSIZE(Garou_A_KEVIN_COLLECTION) },
    { L"Grant", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_COLLECTION, ARRAYSIZE(Garou_A_GRANT_COLLECTION) },
    { L"B. Jenet", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_COLLECTION, ARRAYSIZE(Garou_A_BJENNET_COLLECTION) },
    { L"Hokutomaro", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_COLLECTION, ARRAYSIZE(Garou_A_HOKUTOMARO_COLLECTION) },
    { L"Freeman", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_COLLECTION, ARRAYSIZE(Garou_A_FREEMAN_COLLECTION) },
    { L"Tizoc", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_COLLECTION, ARRAYSIZE(Garou_A_TIZOC_COLLECTION) },
    { L"Kain", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_COLLECTION, ARRAYSIZE(Garou_A_KAIN_COLLECTION) },
    { k_garouNameKey_Portraits, DESC_NODETYPE_TREE, (void*)Garou_A_PORTRAITS_COLLECTION, ARRAYSIZE(Garou_A_PORTRAITS_COLLECTION) },
    { L"Story Mode", DESC_NODETYPE_TREE, (void*)Garou_A_STORY_COLLECTION, ARRAYSIZE(Garou_A_STORY_COLLECTION) },
    { L"Endings", DESC_NODETYPE_TREE, (void*)Garou_A_ENDINGS_COLLECTION, ARRAYSIZE(Garou_A_ENDINGS_COLLECTION) },
    { L"Bonus Stuff", DESC_NODETYPE_TREE, (void*)Garou_A_BONUS_COLLECTION, ARRAYSIZE(Garou_A_BONUS_COLLECTION) },
};

constexpr auto Garou_A_NUMUNIT = ARRAYSIZE(Garou_A_UNITS);

#define Garou_A_EXTRALOC Garou_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef Garou_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
