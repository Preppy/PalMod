#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of Garou_A_ROCK_PALETTES. 
// * Update every array using Garou_A_NUMUNIT below
// That should be it.  Good luck.

enum SupportedGarou_A_PaletteListIndex
{
    indexGarouARockHoward,
    indexGarouATerryBogard,
    indexGarouAKhushnood,
    indexGarouADong,
    indexGarouAJae,
    indexGarouAHotaru,
    indexGarouAGato,
    indexGarouAKevin,
    indexGarouAGrant,
    indexGarouABJennet,
    indexGarouAHokutomaru,
    indexGarouAFreeman,
    indexGarouATizoc,
    indexGarouAKain,
    indexGarouAPortraits,

    indexGarouALast
};

constexpr auto Garou_A_NUMUNIT = indexGarouALast;

#define Garou_A_EXTRALOC Garou_A_NUMUNIT

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_A[] =
{
    { "Rock A - Main", 0xff00, 0xff20 },
    { "Rock A - Line1", 0xff20, 0xff40 },
    { "Rock A - Line2", 0xff40, 0xff60 },
    { "Rock A - On Fire", 0xff60, 0xff80 },
    { "Rock A - On Purple", 0xff80, 0xffa0 },
    { "Rock A - Gold", 0xffa0, 0xffc0 },
    { "Rock A - T.O.P.", 0xffc0, 0xffe0 },
    { "Rock A - Shade", 0xffe0, 0x10000 },
    { "Rock A - Dark Red", 0x10000, 0x10020 },
    { "Rock A - Blue", 0x10020, 0x10040 },
    { "Rock A - Projectile1", 0x10040, 0x10060 },
    { "Rock A - Projectile2", 0x10060, 0x10080 },
    { "Rock A - Projectile3", 0x10080, 0x100a0 },
    { "Rock A - Projectile4", 0x100a0, 0x100c0 },
    { "Rock A - Projectile5", 0x100c0, 0x100e0 },
    { "Rock A - Projectile6", 0x100e0, 0x10100 },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_B[] =
{
    { "Rock B - Main", 0x10100, 0x10120 },
    { "Rock B - Line1", 0x10120, 0x10140 },
    { "Rock B - Line2", 0x10140, 0x10160 },
    { "Rock B - On Fire", 0x10160, 0x10180 },
    { "Rock B - On Purple", 0x10180, 0x101a0 },
    { "Rock B - Gold", 0x101a0, 0x101c0 },
    { "Rock B - T.O.P.", 0x101c0, 0x101e0 },
    { "Rock B - Shade", 0x101e0, 0x10200 },
    { "Rock B - Dark Red", 0x10200, 0x10220 },
    { "Rock B - Blue", 0x10220, 0x10240 },
    { "Rock B - Projectile1", 0x10240, 0x10260 },
    { "Rock B - Projectile2", 0x10260, 0x10280 },
    { "Rock B - Projectile3", 0x10280, 0x102a0 },
    { "Rock B - Projectile4", 0x102a0, 0x102c0 },
    { "Rock B - Projectile5", 0x102c0, 0x102e0 },
    { "Rock B - Projectile6", 0x102e0, 0x10300 },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_C[] =
{
    { "Rock C - Main", 0x10300, 0x10320 },
    { "Rock C - Line1", 0x10320, 0x10340 },
    { "Rock C - Line2", 0x10340, 0x10360 },
    { "Rock C - On Fire", 0x10360, 0x10380 },
    { "Rock C - On Purple", 0x10380, 0x103a0 },
    { "Rock C - Gold", 0x103a0, 0x103c0 },
    { "Rock C - T.O.P.", 0x103c0, 0x103e0 },
    { "Rock C - Shade", 0x103e0, 0x10400 },
    { "Rock C - Dark Red", 0x10400, 0x10420 },
    { "Rock C - Blue", 0x10420, 0x10440 },
    { "Rock C - Projectile1", 0x10440, 0x10460 },
    { "Rock C - Projectile2", 0x10460, 0x10480 },
    { "Rock C - Projectile3", 0x10480, 0x104a0 },
    { "Rock C - Projectile4", 0x104a0, 0x104c0 },
    { "Rock C - Projectile5", 0x104c0, 0x104e0 },
    { "Rock C - Projectile6", 0x104e0, 0x10500 },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_D[] =
{
    { "Rock D - Main", 0x10500, 0x10520 },
    { "Rock D - Line1", 0x10520, 0x10540 },
    { "Rock D - Line2", 0x10540, 0x10560 },
    { "Rock D - On Fire", 0x10560, 0x10580 },
    { "Rock D - On Purple", 0x10580, 0x105a0 },
    { "Rock D - Gold", 0x105a0, 0x105c0 },
    { "Rock D - T.O.P.", 0x105c0, 0x105e0 },
    { "Rock D - Shade", 0x105e0, 0x10600 },
    { "Rock D - Dark Red", 0x10600, 0x10620 },
    { "Rock D - Blue", 0x10620, 0x10640 },
    { "Rock D - Projectile1", 0x10640, 0x10660 },
    { "Rock D - Projectile2", 0x10660, 0x10680 },
    { "Rock D - Projectile3", 0x10680, 0x106a0 },
    { "Rock D - Projectile4", 0x106a0, 0x106c0 },
    { "Rock D - Projectile5", 0x106c0, 0x106e0 },
    { "Rock D - Projectile6", 0x106e0, 0x10700 },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_BOSS[] =
{
    { "Rock Boss? - Main", 0x10700, 0x10720 },
    { "Rock Boss? - Line1", 0x10720, 0x10740 },
    { "Rock Boss? - Line2", 0x10740, 0x10760 },
    { "Rock Boss? - On Fire", 0x10760, 0x10780 },
    { "Rock Boss? - On Purple", 0x10780, 0x107a0 },
    { "Rock Boss? - Gold", 0x107a0, 0x107c0 },
    { "Rock Boss? - T.O.P.", 0x107c0, 0x107e0 },
    { "Rock Boss? - Shade", 0x107e0, 0x10800 },
    { "Rock Boss? - Dark Red", 0x10800, 0x10820 },
    { "Rock Boss? - Blue", 0x10820, 0x10840 },
    { "Rock Boss? - Projectile1", 0x10840, 0x10860 },
    { "Rock Boss? - Projectile2", 0x10860, 0x10880 },
    { "Rock Boss? - Projectile3", 0x10880, 0x108a0 },
    { "Rock Boss? - Projectile4", 0x108a0, 0x108c0 },
    { "Rock Boss? - Projectile5", 0x108c0, 0x108e0 },
    { "Rock Boss? - Projectile6", 0x108e0, 0x10900 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_A[] =
{
    { "Khushnood Butt A - Main", 0xeb00, 0xeb20 },
    { "Khushnood Butt A - Line1", 0xeb20, 0xeb40 },
    { "Khushnood Butt A - Line2", 0xeb40, 0xeb60 },
    { "Khushnood Butt A - On Fire", 0xeb60, 0xeb80 },
    { "Khushnood Butt A - On Purple", 0xeb80, 0xeba0 },
    { "Khushnood Butt A - Gold", 0xeba0, 0xebc0 },
    { "Khushnood Butt A - T.O.P.", 0xebc0, 0xebe0 },
    { "Khushnood Butt A - Shade", 0xebe0, 0xec00 },
    { "Khushnood Butt A - Dark Red", 0xec00, 0xec20 },
    { "Khushnood Butt A - Blue", 0xec20, 0xec40 },
    { "Khushnood Butt A - Projectile1", 0xec40, 0xec60 },
    { "Khushnood Butt A - Projectile2", 0xec60, 0xec80 },
    { "Khushnood Butt A - Projectile3", 0xec80, 0xeca0 },
    { "Khushnood Butt A - Projectile4", 0xeca0, 0xecc0 },
    { "Khushnood Butt A - Projectile5", 0xecc0, 0xece0 },
    { "Khushnood Butt A - Projectile6", 0xece0, 0xed00 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_B[] =
{
    { "Khushnood Butt B - Main", 0xed00, 0xed20 },
    { "Khushnood Butt B - Line1", 0xed20, 0xed40 },
    { "Khushnood Butt B - Line2", 0xed40, 0xed60 },
    { "Khushnood Butt B - On Fire", 0xed60, 0xed80 },
    { "Khushnood Butt B - On Purple", 0xed80, 0xeda0 },
    { "Khushnood Butt B - Gold", 0xeda0, 0xedc0 },
    { "Khushnood Butt B - T.O.P.", 0xedc0, 0xede0 },
    { "Khushnood Butt B - Shade", 0xede0, 0xee00 },
    { "Khushnood Butt B - Dark Red", 0xee00, 0xee20 },
    { "Khushnood Butt B - Blue", 0xee20, 0xee40 },
    { "Khushnood Butt B - Projectile1", 0xee40, 0xee60 },
    { "Khushnood Butt B - Projectile2", 0xee60, 0xee80 },
    { "Khushnood Butt B - Projectile3", 0xee80, 0xeea0 },
    { "Khushnood Butt B - Projectile4", 0xeea0, 0xeec0 },
    { "Khushnood Butt B - Projectile5", 0xeec0, 0xeee0 },
    { "Khushnood Butt B - Projectile6", 0xeee0, 0xef00 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_C[] =
{
    { "Khushnood Butt C - Main", 0xef00, 0xef20 },
    { "Khushnood Butt C - Line1", 0xef20, 0xef40 },
    { "Khushnood Butt C - Line2", 0xef40, 0xef60 },
    { "Khushnood Butt C - On Fire", 0xef60, 0xef80 },
    { "Khushnood Butt C - On Purple", 0xef80, 0xefa0 },
    { "Khushnood Butt C - Gold", 0xefa0, 0xefc0 },
    { "Khushnood Butt C - T.O.P.", 0xefc0, 0xefe0 },
    { "Khushnood Butt C - Shade", 0xefe0, 0xf000 },
    { "Khushnood Butt C - Dark Red", 0xf000, 0xf020 },
    { "Khushnood Butt C - Blue", 0xf020, 0xf040 },
    { "Khushnood Butt C - Projectile1", 0xf040, 0xf060 },
    { "Khushnood Butt C - Projectile2", 0xf060, 0xf080 },
    { "Khushnood Butt C - Projectile3", 0xf080, 0xf0a0 },
    { "Khushnood Butt C - Projectile4", 0xf0a0, 0xf0c0 },
    { "Khushnood Butt C - Projectile5", 0xf0c0, 0xf0e0 },
    { "Khushnood Butt C - Projectile6", 0xf0e0, 0xf100 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_D[] =
{
    { "Khushnood Butt D - Main", 0xf100, 0xf120 },
    { "Khushnood Butt D - Line1", 0xf120, 0xf140 },
    { "Khushnood Butt D - Line2", 0xf140, 0xf160 },
    { "Khushnood Butt D - On Fire", 0xf160, 0xf180 },
    { "Khushnood Butt D - On Purple", 0xf180, 0xf1a0 },
    { "Khushnood Butt D - Gold", 0xf1a0, 0xf1c0 },
    { "Khushnood Butt D - T.O.P.", 0xf1c0, 0xf1e0 },
    { "Khushnood Butt D - Shade", 0xf1e0, 0xf200 },
    { "Khushnood Butt D - Dark Red", 0xf200, 0xf220 },
    { "Khushnood Butt D - Blue", 0xf220, 0xf240 },
    { "Khushnood Butt D - Projectile1", 0xf240, 0xf260 },
    { "Khushnood Butt D - Projectile2", 0xf260, 0xf280 },
    { "Khushnood Butt D - Projectile3", 0xf280, 0xf2a0 },
    { "Khushnood Butt D - Projectile4", 0xf2a0, 0xf2c0 },
    { "Khushnood Butt D - Projectile5", 0xf2c0, 0xf2e0 },
    { "Khushnood Butt D - Projectile6", 0xf2e0, 0xf300 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_BOSS[] =
{
    { "Khushnood Butt Boss? - Main", 0xf300, 0xf320 },
    { "Khushnood Butt Boss? - Line1", 0xf320, 0xf340 },
    { "Khushnood Butt Boss? - Line2", 0xf340, 0xf360 },
    { "Khushnood Butt Boss? - On Fire", 0xf360, 0xf380 },
    { "Khushnood Butt Boss? - On Purple", 0xf380, 0xf3a0 },
    { "Khushnood Butt Boss? - Gold", 0xf3a0, 0xf3c0 },
    { "Khushnood Butt Boss? - T.O.P.", 0xf3c0, 0xf3e0 },
    { "Khushnood Butt Boss? - Shade", 0xf3e0, 0xf400 },
    { "Khushnood Butt Boss? - Dark Red", 0xf400, 0xf420 },
    { "Khushnood Butt Boss? - Blue", 0xf420, 0xf440 },
    { "Khushnood Butt Boss? - Projectile1", 0xf440, 0xf460 },
    { "Khushnood Butt Boss? - Projectile2", 0xf460, 0xf480 },
    { "Khushnood Butt Boss? - Projectile3", 0xf480, 0xf4a0 },
    { "Khushnood Butt Boss? - Projectile4", 0xf4a0, 0xf4c0 },
    { "Khushnood Butt Boss? - Projectile5", 0xf4c0, 0xf4e0 },
    { "Khushnood Butt Boss? - Projectile6", 0xf4e0, 0xf500 },
};


const sGame_PaletteDataset Garou_A_TERRY_PALETTES_A[] =
{
    { "Terry A - Main", 0xf500, 0xf520 },
    { "Terry A - Line1", 0xf520, 0xf540 },
    { "Terry A - Line2", 0xf540, 0xf560 },
    { "Terry A - On Fire", 0xf560, 0xf580 },
    { "Terry A - On Purple", 0xf580, 0xf5a0 },
    { "Terry A - Gold", 0xf5a0, 0xf5c0 },
    { "Terry A - T.O.P.", 0xf5c0, 0xf5e0 },
    { "Terry A - Shade", 0xf5e0, 0xf600 },
    { "Terry A - Dark Red", 0xf600, 0xf620 },
    { "Terry A - Blue", 0xf620, 0xf640 },
    { "Terry A - Projectile1", 0xf640, 0xf660 },
    { "Terry A - Projectile2", 0xf660, 0xf680 },
    { "Terry A - Projectile3", 0xf680, 0xf6a0 },
    { "Terry A - Projectile4", 0xf6a0, 0xf6c0 },
    { "Terry A - Projectile5", 0xf6c0, 0xf6e0 },
    { "Terry A - Projectile6", 0xf6e0, 0xf700 }, 
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_B[] =
{
    { "Terry B - Main", 0xf700, 0xf720 },
    { "Terry B - Line1", 0xf720, 0xf740 },
    { "Terry B - Line2", 0xf740, 0xf760 },
    { "Terry B - On Fire", 0xf760, 0xf780 },
    { "Terry B - On Purple", 0xf780, 0xf7a0 },
    { "Terry B - Gold", 0xf7a0, 0xf7c0 },
    { "Terry B - T.O.P.", 0xf7c0, 0xf7e0 },
    { "Terry B - Shade", 0xf7e0, 0xf800 },
    { "Terry B - Dark Red", 0xf800, 0xf820 },
    { "Terry B - Blue", 0xf820, 0xf840 },
    { "Terry B - Projectile1", 0xf840, 0xf860 },
    { "Terry B - Projectile2", 0xf860, 0xf880 },
    { "Terry B - Projectile3", 0xf880, 0xf8a0 },
    { "Terry B - Projectile4", 0xf8a0, 0xf8c0 },
    { "Terry B - Projectile5", 0xf8c0, 0xf8e0 },
    { "Terry B - Projectile6", 0xf8e0, 0xf900 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_C[] =
{
    { "Terry C - Main", 0xf900, 0xf920 },
    { "Terry C - Line1", 0xf920, 0xf940 },
    { "Terry C - Line2", 0xf940, 0xf960 },
    { "Terry C - On Fire", 0xf960, 0xf980 },
    { "Terry C - On Purple", 0xf980, 0xf9a0 },
    { "Terry C - Gold", 0xf9a0, 0xf9c0 },
    { "Terry C - T.O.P.", 0xf9c0, 0xf9e0 },
    { "Terry C - Shade", 0xf9e0, 0xfa00 },
    { "Terry C - Dark Red", 0xfa00, 0xfa20 },
    { "Terry C - Blue", 0xfa20, 0xfa40 },
    { "Terry C - Projectile1", 0xfa40, 0xfa60 },
    { "Terry C - Projectile2", 0xfa60, 0xfa80 },
    { "Terry C - Projectile3", 0xfa80, 0xfaa0 },
    { "Terry C - Projectile4", 0xfaa0, 0xfac0 },
    { "Terry C - Projectile5", 0xfac0, 0xfae0 },
    { "Terry C - Projectile6", 0xfae0, 0xfb00 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_D[] =
{
    { "Terry D - Main", 0xfb00, 0xfb20 },
    { "Terry D - Line1", 0xfb20, 0xfb40 },
    { "Terry D - Line2", 0xfb40, 0xfb60 },
    { "Terry D - On Fire", 0xfb60, 0xfb80 },
    { "Terry D - On Purple", 0xfb80, 0xfba0 },
    { "Terry D - Gold", 0xfba0, 0xfbc0 },
    { "Terry D - T.O.P.", 0xfbc0, 0xfbe0 },
    { "Terry D - Shade", 0xfbe0, 0xfc00 },
    { "Terry D - Dark Red", 0xfc00, 0xfc20 },
    { "Terry D - Blue", 0xfc20, 0xfc40 },
    { "Terry D - Projectile1", 0xfc40, 0xfc60 },
    { "Terry D - Projectile2", 0xfc60, 0xfc80 },
    { "Terry D - Projectile3", 0xfc80, 0xfca0 },
    { "Terry D - Projectile4", 0xfca0, 0xfcc0 },
    { "Terry D - Projectile5", 0xfcc0, 0xfce0 },
    { "Terry D - Projectile6", 0xfce0, 0xfd00 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_BOSS[] =
{
    { "Terry Boss? - Main", 0xfd00, 0xfd20 },
    { "Terry Boss? - Line1", 0xfd20, 0xfd40 },
    { "Terry Boss? - Line2", 0xfd40, 0xfd60 },
    { "Terry Boss? - On Fire", 0xfd60, 0xfd80 },
    { "Terry Boss? - On Purple", 0xfd80, 0xfda0 },
    { "Terry Boss? - Gold", 0xfda0, 0xfdc0 },
    { "Terry Boss? - T.O.P.", 0xfdc0, 0xfde0 },
    { "Terry Boss? - Shade", 0xfde0, 0xfe00 },
    { "Terry Boss? - Dark Red", 0xfe00, 0xfe20 },
    { "Terry Boss? - Blue", 0xfe20, 0xfe40 },
    { "Terry Boss? - Projectile1", 0xfe40, 0xfe60 },
    { "Terry Boss? - Projectile2", 0xfe60, 0xfe80 },
    { "Terry Boss? - Projectile3", 0xfe80, 0xfea0 },
    { "Terry Boss? - Projectile4", 0xfea0, 0xfec0 },
    { "Terry Boss? - Projectile5", 0xfec0, 0xfee0 },
    { "Terry Boss? - Projectile6", 0xfee0, 0xff00 },
};


const sGame_PaletteDataset Garou_A_DONG_PALETTES_A[] =
{
    { "Dong Hwan A - Main", 0x10900, 0x10920 },
    { "Dong Hwan A - Line1", 0x10920, 0x10940 },
    { "Dong Hwan A - Line2", 0x10940, 0x10960 },
    { "Dong Hwan A - On Fire", 0x10960, 0x10980 },
    { "Dong Hwan A - On Purple", 0x10980, 0x109a0 },
    { "Dong Hwan A - Gold", 0x109a0, 0x109c0 },
    { "Dong Hwan A - T.O.P.", 0x109c0, 0x109e0 },
    { "Dong Hwan A - Shade", 0x109e0, 0x10a00 },
    { "Dong Hwan A - Dark Red", 0x10a00, 0x10a20 },
    { "Dong Hwan A - Blue", 0x10a20, 0x10a40 },
    { "Dong Hwan A - Projectile1", 0x10a40, 0x10a60 },
    { "Dong Hwan A - Projectile2", 0x10a60, 0x10a80 },
    { "Dong Hwan A - Projectile3", 0x10a80, 0x10aa0 },
    { "Dong Hwan A - Projectile4", 0x10aa0, 0x10ac0 },
    { "Dong Hwan A - Projectile5", 0x10ac0, 0x10ae0 },
    { "Dong Hwan A - Projectile6", 0x10ae0, 0x10b00 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_B[] =
{
    { "Dong Hwan B - Main", 0x10b00, 0x10b20 },
    { "Dong Hwan B - Line1", 0x10b20, 0x10b40 },
    { "Dong Hwan B - Line2", 0x10b40, 0x10b60 },
    { "Dong Hwan B - On Fire", 0x10b60, 0x10b80 },
    { "Dong Hwan B - On Purple", 0x10b80, 0x10ba0 },
    { "Dong Hwan B - Gold", 0x10ba0, 0x10bc0 },
    { "Dong Hwan B - T.O.P.", 0x10bc0, 0x10be0 },
    { "Dong Hwan B - Shade", 0x10be0, 0x10c00 },
    { "Dong Hwan B - Dark Red", 0x10c00, 0x10c20 },
    { "Dong Hwan B - Blue", 0x10c20, 0x10c40 },
    { "Dong Hwan B - Projectile1", 0x10c40, 0x10c60 },
    { "Dong Hwan B - Projectile2", 0x10c60, 0x10c80 },
    { "Dong Hwan B - Projectile3", 0x10c80, 0x10ca0 },
    { "Dong Hwan B - Projectile4", 0x10ca0, 0x10cc0 },
    { "Dong Hwan B - Projectile5", 0x10cc0, 0x10ce0 },
    { "Dong Hwan B - Projectile6", 0x10ce0, 0x10d00 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_C[] =
{
    { "Dong Hwan C - Main", 0x10d00, 0x10d20 },
    { "Dong Hwan C - Line1", 0x10d20, 0x10d40 },
    { "Dong Hwan C - Line2", 0x10d40, 0x10d60 },
    { "Dong Hwan C - On Fire", 0x10d60, 0x10d80 },
    { "Dong Hwan C - On Purple", 0x10d80, 0x10da0 },
    { "Dong Hwan C - Gold", 0x10da0, 0x10dc0 },
    { "Dong Hwan C - T.O.P.", 0x10dc0, 0x10de0 },
    { "Dong Hwan C - Shade", 0x10de0, 0x10e00 },
    { "Dong Hwan C - Dark Red", 0x10e00, 0x10e20 },
    { "Dong Hwan C - Blue", 0x10e20, 0x10e40 },
    { "Dong Hwan C - Projectile1", 0x10e40, 0x10e60 },
    { "Dong Hwan C - Projectile2", 0x10e60, 0x10e80 },
    { "Dong Hwan C - Projectile3", 0x10e80, 0x10ea0 },
    { "Dong Hwan C - Projectile4", 0x10ea0, 0x10ec0 },
    { "Dong Hwan C - Projectile5", 0x10ec0, 0x10ee0 },
    { "Dong Hwan C - Projectile6", 0x10ee0, 0x10f00 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_D[] =
{
    { "Dong Hwan D - Main", 0x10f00, 0x10f20 },
    { "Dong Hwan D - Line1", 0x10f20, 0x10f40 },
    { "Dong Hwan D - Line2", 0x10f40, 0x10f60 },
    { "Dong Hwan D - On Fire", 0x10f60, 0x10f80 },
    { "Dong Hwan D - On Purple", 0x10f80, 0x10fa0 },
    { "Dong Hwan D - Gold", 0x10fa0, 0x10fc0 },
    { "Dong Hwan D - T.O.P.", 0x10fc0, 0x10fe0 },
    { "Dong Hwan D - Shade", 0x10fe0, 0x11000 },
    { "Dong Hwan D - Dark Red", 0x11000, 0x11020 },
    { "Dong Hwan D - Blue", 0x11020, 0x11040 },
    { "Dong Hwan D - Projectile1", 0x11040, 0x11060 },
    { "Dong Hwan D - Projectile2", 0x11060, 0x11080 },
    { "Dong Hwan D - Projectile3", 0x11080, 0x110a0 },
    { "Dong Hwan D - Projectile4", 0x110a0, 0x110c0 },
    { "Dong Hwan D - Projectile5", 0x110c0, 0x110e0 },
    { "Dong Hwan D - Projectile6", 0x110e0, 0x11100 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_BOSS[] =
{
    { "Dong Hwan Boss? - Main", 0x11100, 0x11120 },
    { "Dong Hwan Boss? - Line1", 0x11120, 0x11140 },
    { "Dong Hwan Boss? - Line2", 0x11140, 0x11160 },
    { "Dong Hwan Boss? - On Fire", 0x11160, 0x11180 },
    { "Dong Hwan Boss? - On Purple", 0x11180, 0x111a0 },
    { "Dong Hwan Boss? - Gold", 0x111a0, 0x111c0 },
    { "Dong Hwan Boss? - T.O.P.", 0x111c0, 0x111e0 },
    { "Dong Hwan Boss? - Shade", 0x111e0, 0x11200 },
    { "Dong Hwan Boss? - Dark Red", 0x11200, 0x11220 },
    { "Dong Hwan Boss? - Blue", 0x11220, 0x11240 },
    { "Dong Hwan Boss? - Projectile1", 0x11240, 0x11260 },
    { "Dong Hwan Boss? - Projectile2", 0x11260, 0x11280 },
    { "Dong Hwan Boss? - Projectile3", 0x11280, 0x112a0 },
    { "Dong Hwan Boss? - Projectile4", 0x112a0, 0x112c0 },
    { "Dong Hwan Boss? - Projectile5", 0x112c0, 0x112e0 },
    { "Dong Hwan Boss? - Projectile6", 0x112e0, 0x11300 },
};


const sGame_PaletteDataset Garou_A_JAE_PALETTES_A[] =
{
        { "Jae Hoon A - Main", 0x11300, 0x11320 },
    { "Jae Hoon A - Line1", 0x11320, 0x11340 },
    { "Jae Hoon A - Line2", 0x11340, 0x11360 },
    { "Jae Hoon A - On Fire", 0x11360, 0x11380 },
    { "Jae Hoon A - On Purple", 0x11380, 0x113a0 },
    { "Jae Hoon A - Gold", 0x113a0, 0x113c0 },
    { "Jae Hoon A - T.O.P.", 0x113c0, 0x113e0 },
    { "Jae Hoon A - Shade", 0x113e0, 0x11400 },
    { "Jae Hoon A - Dark Red", 0x11400, 0x11420 },
    { "Jae Hoon A - Blue", 0x11420, 0x11440 },
    { "Jae Hoon A - Projectile1", 0x11440, 0x11460 },
    { "Jae Hoon A - Projectile2", 0x11460, 0x11480 },
    { "Jae Hoon A - Projectile3", 0x11480, 0x114a0 },
    { "Jae Hoon A - Projectile4", 0x114a0, 0x114c0 },
    { "Jae Hoon A - Projectile5", 0x114c0, 0x114e0 },
    { "Jae Hoon A - Projectile6", 0x114e0, 0x11500 },

};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_B[] =
{
    { "Jae Hoon B - Main", 0x11500, 0x11520 },
    { "Jae Hoon B - Line1", 0x11520, 0x11540 },
    { "Jae Hoon B - Line2", 0x11540, 0x11560 },
    { "Jae Hoon B - On Fire", 0x11560, 0x11580 },
    { "Jae Hoon B - On Purple", 0x11580, 0x115a0 },
    { "Jae Hoon B - Gold", 0x115a0, 0x115c0 },
    { "Jae Hoon B - T.O.P.", 0x115c0, 0x115e0 },
    { "Jae Hoon B - Shade", 0x115e0, 0x11600 },
    { "Jae Hoon B - Dark Red", 0x11600, 0x11620 },
    { "Jae Hoon B - Blue", 0x11620, 0x11640 },
    { "Jae Hoon B - Projectile1", 0x11640, 0x11660 },
    { "Jae Hoon B - Projectile2", 0x11660, 0x11680 },
    { "Jae Hoon B - Projectile3", 0x11680, 0x116a0 },
    { "Jae Hoon B - Projectile4", 0x116a0, 0x116c0 },
    { "Jae Hoon B - Projectile5", 0x116c0, 0x116e0 },
    { "Jae Hoon B - Projectile6", 0x116e0, 0x11700 },

};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_C[] =
{
        { "Jae Hoon C - Main", 0x11700, 0x11720 },
    { "Jae Hoon C - Line1", 0x11720, 0x11740 },
    { "Jae Hoon C - Line2", 0x11740, 0x11760 },
    { "Jae Hoon C - On Fire", 0x11760, 0x11780 },
    { "Jae Hoon C - On Purple", 0x11780, 0x117a0 },
    { "Jae Hoon C - Gold", 0x117a0, 0x117c0 },
    { "Jae Hoon C - T.O.P.", 0x117c0, 0x117e0 },
    { "Jae Hoon C - Shade", 0x117e0, 0x11800 },
    { "Jae Hoon C - Dark Red", 0x11800, 0x11820 },
    { "Jae Hoon C - Blue", 0x11820, 0x11840 },
    { "Jae Hoon C - Projectile1", 0x11840, 0x11860 },
    { "Jae Hoon C - Projectile2", 0x11860, 0x11880 },
    { "Jae Hoon C - Projectile3", 0x11880, 0x118a0 },
    { "Jae Hoon C - Projectile4", 0x118a0, 0x118c0 },
    { "Jae Hoon C - Projectile5", 0x118c0, 0x118e0 },
    { "Jae Hoon C - Projectile6", 0x118e0, 0x11900 },

};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_D[] =
{
    { "Jae Hoon D - Main", 0x11900, 0x11920 },
    { "Jae Hoon D - Line1", 0x11920, 0x11940 },
    { "Jae Hoon D - Line2", 0x11940, 0x11960 },
    { "Jae Hoon D - On Fire", 0x11960, 0x11980 },
    { "Jae Hoon D - On Purple", 0x11980, 0x119a0 },
    { "Jae Hoon D - Gold", 0x119a0, 0x119c0 },
    { "Jae Hoon D - T.O.P.", 0x119c0, 0x119e0 },
    { "Jae Hoon D - Shade", 0x119e0, 0x11a00 },
    { "Jae Hoon D - Dark Red", 0x11a00, 0x11a20 },
    { "Jae Hoon D - Blue", 0x11a20, 0x11a40 },
    { "Jae Hoon D - Projectile1", 0x11a40, 0x11a60 },
    { "Jae Hoon D - Projectile2", 0x11a60, 0x11a80 },
    { "Jae Hoon D - Projectile3", 0x11a80, 0x11aa0 },
    { "Jae Hoon D - Projectile4", 0x11aa0, 0x11ac0 },
    { "Jae Hoon D - Projectile5", 0x11ac0, 0x11ae0 },
    { "Jae Hoon D - Projectile6", 0x11ae0, 0x11b00 },

};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_BOSS[] =
{
    { "Jae Hoon Boss? - Main", 0x11b00, 0x11b20 },
    { "Jae Hoon Boss? - Line1", 0x11b20, 0x11b40 },
    { "Jae Hoon Boss? - Line2", 0x11b40, 0x11b60 },
    { "Jae Hoon Boss? - On Fire", 0x11b60, 0x11b80 },
    { "Jae Hoon Boss? - On Purple", 0x11b80, 0x11ba0 },
    { "Jae Hoon Boss? - Gold", 0x11ba0, 0x11bc0 },
    { "Jae Hoon Boss? - T.O.P.", 0x11bc0, 0x11be0 },
    { "Jae Hoon Boss? - Shade", 0x11be0, 0x11c00 },
    { "Jae Hoon Boss? - Dark Red", 0x11c00, 0x11c20 },
    { "Jae Hoon Boss? - Blue", 0x11c20, 0x11c40 },
    { "Jae Hoon Boss? - Projectile1", 0x11c40, 0x11c60 },
    { "Jae Hoon Boss? - Projectile2", 0x11c60, 0x11c80 },
    { "Jae Hoon Boss? - Projectile3", 0x11c80, 0x11ca0 },
    { "Jae Hoon Boss? - Projectile4", 0x11ca0, 0x11cc0 },
    { "Jae Hoon Boss? - Projectile5", 0x11cc0, 0x11ce0 },
    { "Jae Hoon Boss? - Projectile6", 0x11ce0, 0x11d00 },
};


const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_A[] =
{
    { "Hotaru A - Main", 0x11d00, 0x11d20 },
    { "Hotaru A - Line1", 0x11d20, 0x11d40 },
    { "Hotaru A - Line2", 0x11d40, 0x11d60 },
    { "Hotaru A - On Fire", 0x11d60, 0x11d80 },
    { "Hotaru A - On Purple", 0x11d80, 0x11da0 },
    { "Hotaru A - Gold", 0x11da0, 0x11dc0 },
    { "Hotaru A - T.O.P.", 0x11dc0, 0x11de0 },
    { "Hotaru A - Shade", 0x11de0, 0x11e00 },
    { "Hotaru A - Dark Red", 0x11e00, 0x11e20 },
    { "Hotaru A - Blue", 0x11e20, 0x11e40 },
    { "Hotaru A - Projectile1", 0x11e40, 0x11e60 },
    { "Hotaru A - Projectile2", 0x11e60, 0x11e80 },
    { "Hotaru A - Projectile3", 0x11e80, 0x11ea0 },
    { "Hotaru A - Projectile4", 0x11ea0, 0x11ec0 },
    { "Hotaru A - Projectile5", 0x11ec0, 0x11ee0 },
    { "Hotaru A - Projectile6", 0x11ee0, 0x11f00 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_B[] =
{
    { "Hotaru B - Main", 0x11f00, 0x11f20 },
    { "Hotaru B - Line1", 0x11f20, 0x11f40 },
    { "Hotaru B - Line2", 0x11f40, 0x11f60 },
    { "Hotaru B - On Fire", 0x11f60, 0x11f80 },
    { "Hotaru B - On Purple", 0x11f80, 0x11fa0 },
    { "Hotaru B - Gold", 0x11fa0, 0x11fc0 },
    { "Hotaru B - T.O.P.", 0x11fc0, 0x11fe0 },
    { "Hotaru B - Shade", 0x11fe0, 0x12000 },
    { "Hotaru B - Dark Red", 0x12000, 0x12020 },
    { "Hotaru B - Blue", 0x12020, 0x12040 },
    { "Hotaru B - Projectile1", 0x12040, 0x12060 },
    { "Hotaru B - Projectile2", 0x12060, 0x12080 },
    { "Hotaru B - Projectile3", 0x12080, 0x120a0 },
    { "Hotaru B - Projectile4", 0x120a0, 0x120c0 },
    { "Hotaru B - Projectile5", 0x120c0, 0x120e0 },
    { "Hotaru B - Projectile6", 0x120e0, 0x12100 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_C[] =
{
    { "Hotaru C - Main", 0x12100, 0x12120 },
    { "Hotaru C - Line1", 0x12120, 0x12140 },
    { "Hotaru C - Line2", 0x12140, 0x12160 },
    { "Hotaru C - On Fire", 0x12160, 0x12180 },
    { "Hotaru C - On Purple", 0x12180, 0x121a0 },
    { "Hotaru C - Gold", 0x121a0, 0x121c0 },
    { "Hotaru C - T.O.P.", 0x121c0, 0x121e0 },
    { "Hotaru C - Shade", 0x121e0, 0x12200 },
    { "Hotaru C - Dark Red", 0x12200, 0x12220 },
    { "Hotaru C - Blue", 0x12220, 0x12240 },
    { "Hotaru C - Projectile1", 0x12240, 0x12260 },
    { "Hotaru C - Projectile2", 0x12260, 0x12280 },
    { "Hotaru C - Projectile3", 0x12280, 0x122a0 },
    { "Hotaru C - Projectile4", 0x122a0, 0x122c0 },
    { "Hotaru C - Projectile5", 0x122c0, 0x122e0 },
    { "Hotaru C - Projectile6", 0x122e0, 0x12300 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_D[] =
{
    { "Hotaru D - Main", 0x12300, 0x12320 },
    { "Hotaru D - Line1", 0x12320, 0x12340 },
    { "Hotaru D - Line2", 0x12340, 0x12360 },
    { "Hotaru D - On Fire", 0x12360, 0x12380 },
    { "Hotaru D - On Purple", 0x12380, 0x123a0 },
    { "Hotaru D - Gold", 0x123a0, 0x123c0 },
    { "Hotaru D - T.O.P.", 0x123c0, 0x123e0 },
    { "Hotaru D - Shade", 0x123e0, 0x12400 },
    { "Hotaru D - Dark Red", 0x12400, 0x12420 },
    { "Hotaru D - Blue", 0x12420, 0x12440 },
    { "Hotaru D - Projectile1", 0x12440, 0x12460 },
    { "Hotaru D - Projectile2", 0x12460, 0x12480 },
    { "Hotaru D - Projectile3", 0x12480, 0x124a0 },
    { "Hotaru D - Projectile4", 0x124a0, 0x124c0 },
    { "Hotaru D - Projectile5", 0x124c0, 0x124e0 },
    { "Hotaru D - Projectile6", 0x124e0, 0x12500 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_BOSS[] =
{
    { "Hotaru Boss? - Main", 0x12500, 0x12520 },
    { "Hotaru Boss? - Line1", 0x12520, 0x12540 },
    { "Hotaru Boss? - Line2", 0x12540, 0x12560 },
    { "Hotaru Boss? - On Fire", 0x12560, 0x12580 },
    { "Hotaru Boss? - On Purple", 0x12580, 0x125a0 },
    { "Hotaru Boss? - Gold", 0x125a0, 0x125c0 },
    { "Hotaru Boss? - T.O.P.", 0x125c0, 0x125e0 },
    { "Hotaru Boss? - Shade", 0x125e0, 0x12600 },
    { "Hotaru Boss? - Dark Red", 0x12600, 0x12620 },
    { "Hotaru Boss? - Blue", 0x12620, 0x12640 },
    { "Hotaru Boss? - Projectile1", 0x12640, 0x12660 },
    { "Hotaru Boss? - Projectile2", 0x12660, 0x12680 },
    { "Hotaru Boss? - Projectile3", 0x12680, 0x126a0 },
    { "Hotaru Boss? - Projectile4", 0x126a0, 0x126c0 },
    { "Hotaru Boss? - Projectile5", 0x126c0, 0x126e0 },
    { "Hotaru Boss? - Projectile6", 0x126e0, 0x12700 },
};


const sGame_PaletteDataset Garou_A_GATO_PALETTES_A[] =
{
    { "Gato A - Main", 0x12700, 0x12720 },
    { "Gato A - Line1", 0x12720, 0x12740 },
    { "Gato A - Line2", 0x12740, 0x12760 },
    { "Gato A - On Fire", 0x12760, 0x12780 },
    { "Gato A - On Purple", 0x12780, 0x127a0 },
    { "Gato A - Gold", 0x127a0, 0x127c0 },
    { "Gato A - T.O.P.", 0x127c0, 0x127e0 },
    { "Gato A - Shade", 0x127e0, 0x12800 },
    { "Gato A - Dark Red", 0x12800, 0x12820 },
    { "Gato A - Blue", 0x12820, 0x12840 },
    { "Gato A - Projectile1", 0x12840, 0x12860 },
    { "Gato A - Projectile2", 0x12860, 0x12880 },
    { "Gato A - Projectile3", 0x12880, 0x128a0 },
    { "Gato A - Projectile4", 0x128a0, 0x128c0 },
    { "Gato A - Projectile5", 0x128c0, 0x128e0 },
    { "Gato A - Projectile6", 0x128e0, 0x12900 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_B[] =
{
    { "Gato B - Main", 0x12900, 0x12920 },
    { "Gato B - Line1", 0x12920, 0x12940 },
    { "Gato B - Line2", 0x12940, 0x12960 },
    { "Gato B - On Fire", 0x12960, 0x12980 },
    { "Gato B - On Purple", 0x12980, 0x129a0 },
    { "Gato B - Gold", 0x129a0, 0x129c0 },
    { "Gato B - T.O.P.", 0x129c0, 0x129e0 },
    { "Gato B - Shade", 0x129e0, 0x12a00 },
    { "Gato B - Dark Red", 0x12a00, 0x12a20 },
    { "Gato B - Blue", 0x12a20, 0x12a40 },
    { "Gato B - Projectile1", 0x12a40, 0x12a60 },
    { "Gato B - Projectile2", 0x12a60, 0x12a80 },
    { "Gato B - Projectile3", 0x12a80, 0x12aa0 },
    { "Gato B - Projectile4", 0x12aa0, 0x12ac0 },
    { "Gato B - Projectile5", 0x12ac0, 0x12ae0 },
    { "Gato B - Projectile6", 0x12ae0, 0x12b00 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_C[] =
{
    { "Gato C - Main", 0x12b00, 0x12b20 },
    { "Gato C - Line1", 0x12b20, 0x12b40 },
    { "Gato C - Line2", 0x12b40, 0x12b60 },
    { "Gato C - On Fire", 0x12b60, 0x12b80 },
    { "Gato C - On Purple", 0x12b80, 0x12ba0 },
    { "Gato C - Gold", 0x12ba0, 0x12bc0 },
    { "Gato C - T.O.P.", 0x12bc0, 0x12be0 },
    { "Gato C - Shade", 0x12be0, 0x12c00 },
    { "Gato C - Dark Red", 0x12c00, 0x12c20 },
    { "Gato C - Blue", 0x12c20, 0x12c40 },
    { "Gato C - Projectile1", 0x12c40, 0x12c60 },
    { "Gato C - Projectile2", 0x12c60, 0x12c80 },
    { "Gato C - Projectile3", 0x12c80, 0x12ca0 },
    { "Gato C - Projectile4", 0x12ca0, 0x12cc0 },
    { "Gato C - Projectile5", 0x12cc0, 0x12ce0 },
    { "Gato C - Projectile6", 0x12ce0, 0x12d00 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_D[] =
{
    { "Gato D - Main", 0x12d00, 0x12d20 },
    { "Gato D - Line1", 0x12d20, 0x12d40 },
    { "Gato D - Line2", 0x12d40, 0x12d60 },
    { "Gato D - On Fire", 0x12d60, 0x12d80 },
    { "Gato D - On Purple", 0x12d80, 0x12da0 },
    { "Gato D - Gold", 0x12da0, 0x12dc0 },
    { "Gato D - T.O.P.", 0x12dc0, 0x12de0 },
    { "Gato D - Shade", 0x12de0, 0x12e00 },
    { "Gato D - Dark Red", 0x12e00, 0x12e20 },
    { "Gato D - Blue", 0x12e20, 0x12e40 },
    { "Gato D - Projectile1", 0x12e40, 0x12e60 },
    { "Gato D - Projectile2", 0x12e60, 0x12e80 },
    { "Gato D - Projectile3", 0x12e80, 0x12ea0 },
    { "Gato D - Projectile4", 0x12ea0, 0x12ec0 },
    { "Gato D - Projectile5", 0x12ec0, 0x12ee0 },
    { "Gato D - Projectile6", 0x12ee0, 0x12f00 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_BOSS[] =
{
    { "Gato Boss? - Main", 0x12f00, 0x12f20 },
    { "Gato Boss? - Line1", 0x12f20, 0x12f40 },
    { "Gato Boss? - Line2", 0x12f40, 0x12f60 },
    { "Gato Boss? - On Fire", 0x12f60, 0x12f80 },
    { "Gato Boss? - On Purple", 0x12f80, 0x12fa0 },
    { "Gato Boss? - Gold", 0x12fa0, 0x12fc0 },
    { "Gato Boss? - T.O.P.", 0x12fc0, 0x12fe0 },
    { "Gato Boss? - Shade", 0x12fe0, 0x13000 },
    { "Gato Boss? - Dark Red", 0x13000, 0x13020 },
    { "Gato Boss? - Blue", 0x13020, 0x13040 },
    { "Gato Boss? - Projectile1", 0x13040, 0x13060 },
    { "Gato Boss? - Projectile2", 0x13060, 0x13080 },
    { "Gato Boss? - Projectile3", 0x13080, 0x130a0 },
    { "Gato Boss? - Projectile4", 0x130a0, 0x130c0 },
    { "Gato Boss? - Projectile5", 0x130c0, 0x130e0 },
    { "Gato Boss? - Projectile6", 0x130e0, 0x13100 },
};


const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_A[] =
{
    { "Kevin A - Main", 0x13100, 0x13120 },
    { "Kevin A - Line1", 0x13120, 0x13140 },
    { "Kevin A - Line2", 0x13140, 0x13160 },
    { "Kevin A - On Fire", 0x13160, 0x13180 },
    { "Kevin A - On Purple", 0x13180, 0x131a0 },
    { "Kevin A - Gold", 0x131a0, 0x131c0 },
    { "Kevin A - T.O.P.", 0x131c0, 0x131e0 },
    { "Kevin A - Shade", 0x131e0, 0x13200 },
    { "Kevin A - Dark Red", 0x13200, 0x13220 },
    { "Kevin A - Blue", 0x13220, 0x13240 },
    { "Kevin A - Projectile1", 0x13240, 0x13260 },
    { "Kevin A - Projectile2", 0x13260, 0x13280 },
    { "Kevin A - Projectile3", 0x13280, 0x132a0 },
    { "Kevin A - Projectile4", 0x132a0, 0x132c0 },
    { "Kevin A - Projectile5", 0x132c0, 0x132e0 },
    { "Kevin A - Projectile6", 0x132e0, 0x13300 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_B[] =
{
    { "Kevin B - Main", 0x13300, 0x13320 },
    { "Kevin B - Line1", 0x13320, 0x13340 },
    { "Kevin B - Line2", 0x13340, 0x13360 },
    { "Kevin B - On Fire", 0x13360, 0x13380 },
    { "Kevin B - On Purple", 0x13380, 0x133a0 },
    { "Kevin B - Gold", 0x133a0, 0x133c0 },
    { "Kevin B - T.O.P.", 0x133c0, 0x133e0 },
    { "Kevin B - Shade", 0x133e0, 0x13400 },
    { "Kevin B - Dark Red", 0x13400, 0x13420 },
    { "Kevin B - Blue", 0x13420, 0x13440 },
    { "Kevin B - Projectile1", 0x13440, 0x13460 },
    { "Kevin B - Projectile2", 0x13460, 0x13480 },
    { "Kevin B - Projectile3", 0x13480, 0x134a0 },
    { "Kevin B - Projectile4", 0x134a0, 0x134c0 },
    { "Kevin B - Projectile5", 0x134c0, 0x134e0 },
    { "Kevin B - Projectile6", 0x134e0, 0x13500 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_C[] =
{
    { "Kevin C - Main", 0x13500, 0x13520 },
    { "Kevin C - Line1", 0x13520, 0x13540 },
    { "Kevin C - Line2", 0x13540, 0x13560 },
    { "Kevin C - On Fire", 0x13560, 0x13580 },
    { "Kevin C - On Purple", 0x13580, 0x135a0 },
    { "Kevin C - Gold", 0x135a0, 0x135c0 },
    { "Kevin C - T.O.P.", 0x135c0, 0x135e0 },
    { "Kevin C - Shade", 0x135e0, 0x13600 },
    { "Kevin C - Dark Red", 0x13600, 0x13620 },
    { "Kevin C - Blue", 0x13620, 0x13640 },
    { "Kevin C - Projectile1", 0x13640, 0x13660 },
    { "Kevin C - Projectile2", 0x13660, 0x13680 },
    { "Kevin C - Projectile3", 0x13680, 0x136a0 },
    { "Kevin C - Projectile4", 0x136a0, 0x136c0 },
    { "Kevin C - Projectile5", 0x136c0, 0x136e0 },
    { "Kevin C - Projectile6", 0x136e0, 0x13700 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_D[] =
{
    { "Kevin D - Main", 0x13700, 0x13720 },
    { "Kevin D - Line1", 0x13720, 0x13740 },
    { "Kevin D - Line2", 0x13740, 0x13760 },
    { "Kevin D - On Fire", 0x13760, 0x13780 },
    { "Kevin D - On Purple", 0x13780, 0x137a0 },
    { "Kevin D - Gold", 0x137a0, 0x137c0 },
    { "Kevin D - T.O.P.", 0x137c0, 0x137e0 },
    { "Kevin D - Shade", 0x137e0, 0x13800 },
    { "Kevin D - Dark Red", 0x13800, 0x13820 },
    { "Kevin D - Blue", 0x13820, 0x13840 },
    { "Kevin D - Projectile1", 0x13840, 0x13860 },
    { "Kevin D - Projectile2", 0x13860, 0x13880 },
    { "Kevin D - Projectile3", 0x13880, 0x138a0 },
    { "Kevin D - Projectile4", 0x138a0, 0x138c0 },
    { "Kevin D - Projectile5", 0x138c0, 0x138e0 },
    { "Kevin D - Projectile6", 0x138e0, 0x13900 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_BOSS[] =
{
    { "Kevin Boss? - Main", 0x13900, 0x13920 },
    { "Kevin Boss? - Line1", 0x13920, 0x13940 },
    { "Kevin Boss? - Line2", 0x13940, 0x13960 },
    { "Kevin Boss? - On Fire", 0x13960, 0x13980 },
    { "Kevin Boss? - On Purple", 0x13980, 0x139a0 },
    { "Kevin Boss? - Gold", 0x139a0, 0x139c0 },
    { "Kevin Boss? - T.O.P.", 0x139c0, 0x139e0 },
    { "Kevin Boss? - Shade", 0x139e0, 0x13a00 },
    { "Kevin Boss? - Dark Red", 0x13a00, 0x13a20 },
    { "Kevin Boss? - Blue", 0x13a20, 0x13a40 },
    { "Kevin Boss? - Projectile1", 0x13a40, 0x13a60 },
    { "Kevin Boss? - Projectile2", 0x13a60, 0x13a80 },
    { "Kevin Boss? - Projectile3", 0x13a80, 0x13aa0 },
    { "Kevin Boss? - Projectile4", 0x13aa0, 0x13ac0 },
    { "Kevin Boss? - Projectile5", 0x13ac0, 0x13ae0 },
    { "Kevin Boss? - Projectile6", 0x13ae0, 0x13b00 },
};


const sGame_PaletteDataset Garou_A_GRANT_PALETTES_A[] =
{
    { "Grant A - Main", 0x13b00, 0x13b20 },
    { "Grant A - Line1", 0x13b20, 0x13b40 },
    { "Grant A - Line2", 0x13b40, 0x13b60 },
    { "Grant A - On Fire", 0x13b60, 0x13b80 },
    { "Grant A - On Purple", 0x13b80, 0x13ba0 },
    { "Grant A - Gold", 0x13ba0, 0x13bc0 },
    { "Grant A - T.O.P.", 0x13bc0, 0x13be0 },
    { "Grant A - Shade", 0x13be0, 0x13c00 },
    { "Grant A - Dark Red", 0x13c00, 0x13c20 },
    { "Grant A - Blue", 0x13c20, 0x13c40 },
    { "Grant A - Projectile1", 0x13c40, 0x13c60 },
    { "Grant A - Projectile2", 0x13c60, 0x13c80 },
    { "Grant A - Projectile3", 0x13c80, 0x13ca0 },
    { "Grant A - Projectile4", 0x13ca0, 0x13cc0 },
    { "Grant A - Projectile5", 0x13cc0, 0x13ce0 },
    { "Grant A - Projectile6", 0x13ce0, 0x13d00 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_B[] =
{
    { "Grant B - Main", 0x13d00, 0x13d20 },
    { "Grant B - Line1", 0x13d20, 0x13d40 },
    { "Grant B - Line2", 0x13d40, 0x13d60 },
    { "Grant B - On Fire", 0x13d60, 0x13d80 },
    { "Grant B - On Purple", 0x13d80, 0x13da0 },
    { "Grant B - Gold", 0x13da0, 0x13dc0 },
    { "Grant B - T.O.P.", 0x13dc0, 0x13de0 },
    { "Grant B - Shade", 0x13de0, 0x13e00 },
    { "Grant B - Dark Red", 0x13e00, 0x13e20 },
    { "Grant B - Blue", 0x13e20, 0x13e40 },
    { "Grant B - Projectile1", 0x13e40, 0x13e60 },
    { "Grant B - Projectile2", 0x13e60, 0x13e80 },
    { "Grant B - Projectile3", 0x13e80, 0x13ea0 },
    { "Grant B - Projectile4", 0x13ea0, 0x13ec0 },
    { "Grant B - Projectile5", 0x13ec0, 0x13ee0 },
    { "Grant B - Projectile6", 0x13ee0, 0x13f00 }
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_C[] =
{
    { "Grant C - Main", 0x13f00, 0x13f20 },
    { "Grant C - Line1", 0x13f20, 0x13f40 },
    { "Grant C - Line2", 0x13f40, 0x13f60 },
    { "Grant C - On Fire", 0x13f60, 0x13f80 },
    { "Grant C - On Purple", 0x13f80, 0x13fa0 },
    { "Grant C - Gold", 0x13fa0, 0x13fc0 },
    { "Grant C - T.O.P.", 0x13fc0, 0x13fe0 },
    { "Grant C - Shade", 0x13fe0, 0x14000 },
    { "Grant C - Dark Red", 0x14000, 0x14020 },
    { "Grant C - Blue", 0x14020, 0x14040 },
    { "Grant C - Projectile1", 0x14040, 0x14060 },
    { "Grant C - Projectile2", 0x14060, 0x14080 },
    { "Grant C - Projectile3", 0x14080, 0x140a0 },
    { "Grant C - Projectile4", 0x140a0, 0x140c0 },
    { "Grant C - Projectile5", 0x140c0, 0x140e0 },
    { "Grant C - Projectile6", 0x140e0, 0x14100 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_D[] =
{
    { "Grant D - Main", 0x14100, 0x14120 },
    { "Grant D - Line1", 0x14120, 0x14140 },
    { "Grant D - Line2", 0x14140, 0x14160 },
    { "Grant D - On Fire", 0x14160, 0x14180 },
    { "Grant D - On Purple", 0x14180, 0x141a0 },
    { "Grant D - Gold", 0x141a0, 0x141c0 },
    { "Grant D - T.O.P.", 0x141c0, 0x141e0 },
    { "Grant D - Shade", 0x141e0, 0x14200 },
    { "Grant D - Dark Red", 0x14200, 0x14220 },
    { "Grant D - Blue", 0x14220, 0x14240 },
    { "Grant D - Projectile1", 0x14240, 0x14260 },
    { "Grant D - Projectile2", 0x14260, 0x14280 },
    { "Grant D - Projectile3", 0x14280, 0x142a0 },
    { "Grant D - Projectile4", 0x142a0, 0x142c0 },
    { "Grant D - Projectile5", 0x142c0, 0x142e0 },
    { "Grant D - Projectile6", 0x142e0, 0x14300 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_BOSS[] =
{
    { "Grant Boss? - Main", 0x14300, 0x14320 },
    { "Grant Boss? - Line1", 0x14320, 0x14340 },
    { "Grant Boss? - Line2", 0x14340, 0x14360 },
    { "Grant Boss? - On Fire", 0x14360, 0x14380 },
    { "Grant Boss? - On Purple", 0x14380, 0x143a0 },
    { "Grant Boss? - Gold", 0x143a0, 0x143c0 },
    { "Grant Boss? - T.O.P.", 0x143c0, 0x143e0 },
    { "Grant Boss? - Shade", 0x143e0, 0x14400 },
    { "Grant Boss? - Dark Red", 0x14400, 0x14420 },
    { "Grant Boss? - Blue", 0x14420, 0x14440 },
    { "Grant Boss? - Projectile1", 0x14440, 0x14460 },
    { "Grant Boss? - Projectile2", 0x14460, 0x14480 },
    { "Grant Boss? - Projectile3", 0x14480, 0x144a0 },
    { "Grant Boss? - Projectile4", 0x144a0, 0x144c0 },
    { "Grant Boss? - Projectile5", 0x144c0, 0x144e0 },
    { "Grant Boss? - Projectile6", 0x144e0, 0x14500 },
};


const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_A[] =
{
    { "B.Jennet A - Main", 0x14500, 0x14520 },
    { "B.Jennet A - Line1", 0x14520, 0x14540 },
    { "B.Jennet A - Line2", 0x14540, 0x14560 },
    { "B.Jennet A - On Fire", 0x14560, 0x14580 },
    { "B.Jennet A - On Purple", 0x14580, 0x145a0 },
    { "B.Jennet A - Gold", 0x145a0, 0x145c0 },
    { "B.Jennet A - T.O.P.", 0x145c0, 0x145e0 },
    { "B.Jennet A - Shade", 0x145e0, 0x14600 },
    { "B.Jennet A - Dark Red", 0x14600, 0x14620 },
    { "B.Jennet A - Blue", 0x14620, 0x14640 },
    { "B.Jennet A - Projectile1", 0x14640, 0x14660 },
    { "B.Jennet A - Projectile2", 0x14660, 0x14680 },
    { "B.Jennet A - Projectile3", 0x14680, 0x146a0 },
    { "B.Jennet A - Projectile4", 0x146a0, 0x146c0 },
    { "B.Jennet A - Projectile5", 0x146c0, 0x146e0 },
    { "B.Jennet A - Projectile6", 0x146e0, 0x14700 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_B[] =
{
    { "B.Jennet B - Main", 0x14700, 0x14720 },
    { "B.Jennet B - Line1", 0x14720, 0x14740 },
    { "B.Jennet B - Line2", 0x14740, 0x14760 },
    { "B.Jennet B - On Fire", 0x14760, 0x14780 },
    { "B.Jennet B - On Purple", 0x14780, 0x147a0 },
    { "B.Jennet B - Gold", 0x147a0, 0x147c0 },
    { "B.Jennet B - T.O.P.", 0x147c0, 0x147e0 },
    { "B.Jennet B - Shade", 0x147e0, 0x14800 },
    { "B.Jennet B - Dark Red", 0x14800, 0x14820 },
    { "B.Jennet B - Blue", 0x14820, 0x14840 },
    { "B.Jennet B - Projectile1", 0x14840, 0x14860 },
    { "B.Jennet B - Projectile2", 0x14860, 0x14880 },
    { "B.Jennet B - Projectile3", 0x14880, 0x148a0 },
    { "B.Jennet B - Projectile4", 0x148a0, 0x148c0 },
    { "B.Jennet B - Projectile5", 0x148c0, 0x148e0 },
    { "B.Jennet B - Projectile6", 0x148e0, 0x14900 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_C[] =
{
    { "B.Jennet C - Main", 0x14900, 0x14920 },
    { "B.Jennet C - Line1", 0x14920, 0x14940 },
    { "B.Jennet C - Line2", 0x14940, 0x14960 },
    { "B.Jennet C - On Fire", 0x14960, 0x14980 },
    { "B.Jennet C - On Purple", 0x14980, 0x149a0 },
    { "B.Jennet C - Gold", 0x149a0, 0x149c0 },
    { "B.Jennet C - T.O.P.", 0x149c0, 0x149e0 },
    { "B.Jennet C - Shade", 0x149e0, 0x14a00 },
    { "B.Jennet C - Dark Red", 0x14a00, 0x14a20 },
    { "B.Jennet C - Blue", 0x14a20, 0x14a40 },
    { "B.Jennet C - Projectile1", 0x14a40, 0x14a60 },
    { "B.Jennet C - Projectile2", 0x14a60, 0x14a80 },
    { "B.Jennet C - Projectile3", 0x14a80, 0x14aa0 },
    { "B.Jennet C - Projectile4", 0x14aa0, 0x14ac0 },
    { "B.Jennet C - Projectile5", 0x14ac0, 0x14ae0 },
    { "B.Jennet C - Projectile6", 0x14ae0, 0x14b00 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_D[] =
{
    { "B.Jennet D - Main", 0x14b00, 0x14b20 },
    { "B.Jennet D - Line1", 0x14b20, 0x14b40 },
    { "B.Jennet D - Line2", 0x14b40, 0x14b60 },
    { "B.Jennet D - On Fire", 0x14b60, 0x14b80 },
    { "B.Jennet D - On Purple", 0x14b80, 0x14ba0 },
    { "B.Jennet D - Gold", 0x14ba0, 0x14bc0 },
    { "B.Jennet D - T.O.P.", 0x14bc0, 0x14be0 },
    { "B.Jennet D - Shade", 0x14be0, 0x14c00 },
    { "B.Jennet D - Dark Red", 0x14c00, 0x14c20 },
    { "B.Jennet D - Blue", 0x14c20, 0x14c40 },
    { "B.Jennet D - Projectile1", 0x14c40, 0x14c60 },
    { "B.Jennet D - Projectile2", 0x14c60, 0x14c80 },
    { "B.Jennet D - Projectile3", 0x14c80, 0x14ca0 },
    { "B.Jennet D - Projectile4", 0x14ca0, 0x14cc0 },
    { "B.Jennet D - Projectile5", 0x14cc0, 0x14ce0 },
    { "B.Jennet D - Projectile6", 0x14ce0, 0x14d00 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_BOSS[] =
{
    { "B.Jennet Boss? - Main", 0x14d00, 0x14d20 },
    { "B.Jennet Boss? - Line1", 0x14d20, 0x14d40 },
    { "B.Jennet Boss? - Line2", 0x14d40, 0x14d60 },
    { "B.Jennet Boss? - On Fire", 0x14d60, 0x14d80 },
    { "B.Jennet Boss? - On Purple", 0x14d80, 0x14da0 },
    { "B.Jennet Boss? - Gold", 0x14da0, 0x14dc0 },
    { "B.Jennet Boss? - T.O.P.", 0x14dc0, 0x14de0 },
    { "B.Jennet Boss? - Shade", 0x14de0, 0x14e00 },
    { "B.Jennet Boss? - Dark Red", 0x14e00, 0x14e20 },
    { "B.Jennet Boss? - Blue", 0x14e20, 0x14e40 },
    { "B.Jennet Boss? - Projectile1", 0x14e40, 0x14e60 },
    { "B.Jennet Boss? - Projectile2", 0x14e60, 0x14e80 },
    { "B.Jennet Boss? - Projectile3", 0x14e80, 0x14ea0 },
    { "B.Jennet Boss? - Projectile4", 0x14ea0, 0x14ec0 },
    { "B.Jennet Boss? - Projectile5", 0x14ec0, 0x14ee0 },
    { "B.Jennet Boss? - Projectile6", 0x14ee0, 0x14f00 },
};


const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_A[] =
{
    { "Hokutomaru A - Main", 0x14f00, 0x14f20 },
    { "Hokutomaru A - Line1", 0x14f20, 0x14f40 },
    { "Hokutomaru A - Line2", 0x14f40, 0x14f60 },
    { "Hokutomaru A - On Fire", 0x14f60, 0x14f80 },
    { "Hokutomaru A - On Purple", 0x14f80, 0x14fa0 },
    { "Hokutomaru A - Gold", 0x14fa0, 0x14fc0 },
    { "Hokutomaru A - T.O.P.", 0x14fc0, 0x14fe0 },
    { "Hokutomaru A - Shade", 0x14fe0, 0x15000 },
    { "Hokutomaru A - Dark Red", 0x15000, 0x15020 },
    { "Hokutomaru A - Blue", 0x15020, 0x15040 },
    { "Hokutomaru A - Projectile1", 0x15040, 0x15060 },
    { "Hokutomaru A - Projectile2", 0x15060, 0x15080 },
    { "Hokutomaru A - Projectile3", 0x15080, 0x150a0 },
    { "Hokutomaru A - Projectile4", 0x150a0, 0x150c0 },
    { "Hokutomaru A - Projectile5", 0x150c0, 0x150e0 },
    { "Hokutomaru A - Projectile6", 0x150e0, 0x15100 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_B[] =
{
    { "Hokutomaru B - Main", 0x15100, 0x15120 },
    { "Hokutomaru B - Line1", 0x15120, 0x15140 },
    { "Hokutomaru B - Line2", 0x15140, 0x15160 },
    { "Hokutomaru B - On Fire", 0x15160, 0x15180 },
    { "Hokutomaru B - On Purple", 0x15180, 0x151a0 },
    { "Hokutomaru B - Gold", 0x151a0, 0x151c0 },
    { "Hokutomaru B - T.O.P.", 0x151c0, 0x151e0 },
    { "Hokutomaru B - Shade", 0x151e0, 0x15200 },
    { "Hokutomaru B - Dark Red", 0x15200, 0x15220 },
    { "Hokutomaru B - Blue", 0x15220, 0x15240 },
    { "Hokutomaru B - Projectile1", 0x15240, 0x15260 },
    { "Hokutomaru B - Projectile2", 0x15260, 0x15280 },
    { "Hokutomaru B - Projectile3", 0x15280, 0x152a0 },
    { "Hokutomaru B - Projectile4", 0x152a0, 0x152c0 },
    { "Hokutomaru B - Projectile5", 0x152c0, 0x152e0 },
    { "Hokutomaru B - Projectile6", 0x152e0, 0x15300 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_C[] =
{
    { "Hokutomaru C - Main", 0x15300, 0x15320 },
    { "Hokutomaru C - Line1", 0x15320, 0x15340 },
    { "Hokutomaru C - Line2", 0x15340, 0x15360 },
    { "Hokutomaru C - On Fire", 0x15360, 0x15380 },
    { "Hokutomaru C - On Purple", 0x15380, 0x153a0 },
    { "Hokutomaru C - Gold", 0x153a0, 0x153c0 },
    { "Hokutomaru C - T.O.P.", 0x153c0, 0x153e0 },
    { "Hokutomaru C - Shade", 0x153e0, 0x15400 },
    { "Hokutomaru C - Dark Red", 0x15400, 0x15420 },
    { "Hokutomaru C - Blue", 0x15420, 0x15440 },
    { "Hokutomaru C - Projectile1", 0x15440, 0x15460 },
    { "Hokutomaru C - Projectile2", 0x15460, 0x15480 },
    { "Hokutomaru C - Projectile3", 0x15480, 0x154a0 },
    { "Hokutomaru C - Projectile4", 0x154a0, 0x154c0 },
    { "Hokutomaru C - Projectile5", 0x154c0, 0x154e0 },
    { "Hokutomaru C - Projectile6", 0x154e0, 0x15500 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_D[] =
{
    { "Hokutomaru D - Main", 0x15500, 0x15520 },
    { "Hokutomaru D - Line1", 0x15520, 0x15540 },
    { "Hokutomaru D - Line2", 0x15540, 0x15560 },
    { "Hokutomaru D - On Fire", 0x15560, 0x15580 },
    { "Hokutomaru D - On Purple", 0x15580, 0x155a0 },
    { "Hokutomaru D - Gold", 0x155a0, 0x155c0 },
    { "Hokutomaru D - T.O.P.", 0x155c0, 0x155e0 },
    { "Hokutomaru D - Shade", 0x155e0, 0x15600 },
    { "Hokutomaru D - Dark Red", 0x15600, 0x15620 },
    { "Hokutomaru D - Blue", 0x15620, 0x15640 },
    { "Hokutomaru D - Projectile1", 0x15640, 0x15660 },
    { "Hokutomaru D - Projectile2", 0x15660, 0x15680 },
    { "Hokutomaru D - Projectile3", 0x15680, 0x156a0 },
    { "Hokutomaru D - Projectile4", 0x156a0, 0x156c0 },
    { "Hokutomaru D - Projectile5", 0x156c0, 0x156e0 },
    { "Hokutomaru D - Projectile6", 0x156e0, 0x15700 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_BOSS[] =
{
    { "Hokutomaru Boss? - Main", 0x15700, 0x15720 },
    { "Hokutomaru Boss? - Line1", 0x15720, 0x15740 },
    { "Hokutomaru Boss? - Line2", 0x15740, 0x15760 },
    { "Hokutomaru Boss? - On Fire", 0x15760, 0x15780 },
    { "Hokutomaru Boss? - On Purple", 0x15780, 0x157a0 },
    { "Hokutomaru Boss? - Gold", 0x157a0, 0x157c0 },
    { "Hokutomaru Boss? - T.O.P.", 0x157c0, 0x157e0 },
    { "Hokutomaru Boss? - Shade", 0x157e0, 0x15800 },
    { "Hokutomaru Boss? - Dark Red", 0x15800, 0x15820 },
    { "Hokutomaru Boss? - Blue", 0x15820, 0x15840 },
    { "Hokutomaru Boss? - Projectile1", 0x15840, 0x15860 },
    { "Hokutomaru Boss? - Projectile2", 0x15860, 0x15880 },
    { "Hokutomaru Boss? - Projectile3", 0x15880, 0x158a0 },
    { "Hokutomaru Boss? - Projectile4", 0x158a0, 0x158c0 },
    { "Hokutomaru Boss? - Projectile5", 0x158c0, 0x158e0 },
    { "Hokutomaru Boss? - Projectile6", 0x158e0, 0x15900 },
};


const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_A[] =
{
    { "Freeman A - Main", 0x15900, 0x15920 },
    { "Freeman A - Line1", 0x15920, 0x15940 },
    { "Freeman A - Line2", 0x15940, 0x15960 },
    { "Freeman A - On Fire", 0x15960, 0x15980 },
    { "Freeman A - On Purple", 0x15980, 0x159a0 },
    { "Freeman A - Gold", 0x159a0, 0x159c0 },
    { "Freeman A - T.O.P.", 0x159c0, 0x159e0 },
    { "Freeman A - Shade", 0x159e0, 0x15a00 },
    { "Freeman A - Dark Red", 0x15a00, 0x15a20 },
    { "Freeman A - Blue", 0x15a20, 0x15a40 },
    { "Freeman A - Projectile1", 0x15a40, 0x15a60 },
    { "Freeman A - Projectile2", 0x15a60, 0x15a80 },
    { "Freeman A - Projectile3", 0x15a80, 0x15aa0 },
    { "Freeman A - Projectile4", 0x15aa0, 0x15ac0 },
    { "Freeman A - Projectile5", 0x15ac0, 0x15ae0 },
    { "Freeman A - Projectile6", 0x15ae0, 0x15b00 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_B[] =
{
    { "Freeman B - Main", 0x15b00, 0x15b20 },
    { "Freeman B - Line1", 0x15b20, 0x15b40 },
    { "Freeman B - Line2", 0x15b40, 0x15b60 },
    { "Freeman B - On Fire", 0x15b60, 0x15b80 },
    { "Freeman B - On Purple", 0x15b80, 0x15ba0 },
    { "Freeman B - Gold", 0x15ba0, 0x15bc0 },
    { "Freeman B - T.O.P.", 0x15bc0, 0x15be0 },
    { "Freeman B - Shade", 0x15be0, 0x15c00 },
    { "Freeman B - Dark Red", 0x15c00, 0x15c20 },
    { "Freeman B - Blue", 0x15c20, 0x15c40 },
    { "Freeman B - Projectile1", 0x15c40, 0x15c60 },
    { "Freeman B - Projectile2", 0x15c60, 0x15c80 },
    { "Freeman B - Projectile3", 0x15c80, 0x15ca0 },
    { "Freeman B - Projectile4", 0x15ca0, 0x15cc0 },
    { "Freeman B - Projectile5", 0x15cc0, 0x15ce0 },
    { "Freeman B - Projectile6", 0x15ce0, 0x15d00 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_C[] =
{
    { "Freeman C - Main", 0x15d00, 0x15d20 },
    { "Freeman C - Line1", 0x15d20, 0x15d40 },
    { "Freeman C - Line2", 0x15d40, 0x15d60 },
    { "Freeman C - On Fire", 0x15d60, 0x15d80 },
    { "Freeman C - On Purple", 0x15d80, 0x15da0 },
    { "Freeman C - Gold", 0x15da0, 0x15dc0 },
    { "Freeman C - T.O.P.", 0x15dc0, 0x15de0 },
    { "Freeman C - Shade", 0x15de0, 0x15e00 },
    { "Freeman C - Dark Red", 0x15e00, 0x15e20 },
    { "Freeman C - Blue", 0x15e20, 0x15e40 },
    { "Freeman C - Projectile1", 0x15e40, 0x15e60 },
    { "Freeman C - Projectile2", 0x15e60, 0x15e80 },
    { "Freeman C - Projectile3", 0x15e80, 0x15ea0 },
    { "Freeman C - Projectile4", 0x15ea0, 0x15ec0 },
    { "Freeman C - Projectile5", 0x15ec0, 0x15ee0 },
    { "Freeman C - Projectile6", 0x15ee0, 0x15f00 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_D[] =
{
    { "Freeman D - Main", 0x15f00, 0x15f20 },
    { "Freeman D - Line1", 0x15f20, 0x15f40 },
    { "Freeman D - Line2", 0x15f40, 0x15f60 },
    { "Freeman D - On Fire", 0x15f60, 0x15f80 },
    { "Freeman D - On Purple", 0x15f80, 0x15fa0 },
    { "Freeman D - Gold", 0x15fa0, 0x15fc0 },
    { "Freeman D - T.O.P.", 0x15fc0, 0x15fe0 },
    { "Freeman D - Shade", 0x15fe0, 0x16000 },
    { "Freeman D - Dark Red", 0x16000, 0x16020 },
    { "Freeman D - Blue", 0x16020, 0x16040 },
    { "Freeman D - Projectile1", 0x16040, 0x16060 },
    { "Freeman D - Projectile2", 0x16060, 0x16080 },
    { "Freeman D - Projectile3", 0x16080, 0x160a0 },
    { "Freeman D - Projectile4", 0x160a0, 0x160c0 },
    { "Freeman D - Projectile5", 0x160c0, 0x160e0 },
    { "Freeman D - Projectile6", 0x160e0, 0x16100 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_BOSS[] =
{
    { "Freeman Boss? - Main", 0x16100, 0x16120 },
    { "Freeman Boss? - Line1", 0x16120, 0x16140 },
    { "Freeman Boss? - Line2", 0x16140, 0x16160 },
    { "Freeman Boss? - On Fire", 0x16160, 0x16180 },
    { "Freeman Boss? - On Purple", 0x16180, 0x161a0 },
    { "Freeman Boss? - Gold", 0x161a0, 0x161c0 },
    { "Freeman Boss? - T.O.P.", 0x161c0, 0x161e0 },
    { "Freeman Boss? - Shade", 0x161e0, 0x16200 },
    { "Freeman Boss? - Dark Red", 0x16200, 0x16220 },
    { "Freeman Boss? - Blue", 0x16220, 0x16240 },
    { "Freeman Boss? - Projectile1", 0x16240, 0x16260 },
    { "Freeman Boss? - Projectile2", 0x16260, 0x16280 },
    { "Freeman Boss? - Projectile3", 0x16280, 0x162a0 },
    { "Freeman Boss? - Projectile4", 0x162a0, 0x162c0 },
    { "Freeman Boss? - Projectile5", 0x162c0, 0x162e0 },
    { "Freeman Boss? - Projectile6", 0x162e0, 0x16300 },
};


const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_A[] =
{
    { "Tizoc A - Main", 0x16300, 0x16320 },
    { "Tizoc A - Line1", 0x16320, 0x16340 },
    { "Tizoc A - Line2", 0x16340, 0x16360 },
    { "Tizoc A - On Fire", 0x16360, 0x16380 },
    { "Tizoc A - On Purple", 0x16380, 0x163a0 },
    { "Tizoc A - Gold", 0x163a0, 0x163c0 },
    { "Tizoc A - T.O.P.", 0x163c0, 0x163e0 },
    { "Tizoc A - Shade", 0x163e0, 0x16400 },
    { "Tizoc A - Dark Red", 0x16400, 0x16420 },
    { "Tizoc A - Blue", 0x16420, 0x16440 },
    { "Tizoc A - Projectile1", 0x16440, 0x16460 },
    { "Tizoc A - Projectile2", 0x16460, 0x16480 },
    { "Tizoc A - Projectile3", 0x16480, 0x164a0 },
    { "Tizoc A - Projectile4", 0x164a0, 0x164c0 },
    { "Tizoc A - Projectile5", 0x164c0, 0x164e0 },
    { "Tizoc A - Projectile6", 0x164e0, 0x16500 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_B[] =
{
    { "Tizoc B - Main", 0x16500, 0x16520 },
    { "Tizoc B - Line1", 0x16520, 0x16540 },
    { "Tizoc B - Line2", 0x16540, 0x16560 },
    { "Tizoc B - On Fire", 0x16560, 0x16580 },
    { "Tizoc B - On Purple", 0x16580, 0x165a0 },
    { "Tizoc B - Gold", 0x165a0, 0x165c0 },
    { "Tizoc B - T.O.P.", 0x165c0, 0x165e0 },
    { "Tizoc B - Shade", 0x165e0, 0x16600 },
    { "Tizoc B - Dark Red", 0x16600, 0x16620 },
    { "Tizoc B - Blue", 0x16620, 0x16640 },
    { "Tizoc B - Projectile1", 0x16640, 0x16660 },
    { "Tizoc B - Projectile2", 0x16660, 0x16680 },
    { "Tizoc B - Projectile3", 0x16680, 0x166a0 },
    { "Tizoc B - Projectile4", 0x166a0, 0x166c0 },
    { "Tizoc B - Projectile5", 0x166c0, 0x166e0 },
    { "Tizoc B - Projectile6", 0x166e0, 0x16700 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_C[] =
{
    { "Tizoc C - Main", 0x16700, 0x16720 },
    { "Tizoc C - Line1", 0x16720, 0x16740 },
    { "Tizoc C - Line2", 0x16740, 0x16760 },
    { "Tizoc C - On Fire", 0x16760, 0x16780 },
    { "Tizoc C - On Purple", 0x16780, 0x167a0 },
    { "Tizoc C - Gold", 0x167a0, 0x167c0 },
    { "Tizoc C - T.O.P.", 0x167c0, 0x167e0 },
    { "Tizoc C - Shade", 0x167e0, 0x16800 },
    { "Tizoc C - Dark Red", 0x16800, 0x16820 },
    { "Tizoc C - Blue", 0x16820, 0x16840 },
    { "Tizoc C - Projectile1", 0x16840, 0x16860 },
    { "Tizoc C - Projectile2", 0x16860, 0x16880 },
    { "Tizoc C - Projectile3", 0x16880, 0x168a0 },
    { "Tizoc C - Projectile4", 0x168a0, 0x168c0 },
    { "Tizoc C - Projectile5", 0x168c0, 0x168e0 },
    { "Tizoc C - Projectile6", 0x168e0, 0x16900 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_D[] =
{
    { "Tizoc D - Main", 0x16900, 0x16920 },
    { "Tizoc D - Line1", 0x16920, 0x16940 },
    { "Tizoc D - Line2", 0x16940, 0x16960 },
    { "Tizoc D - On Fire", 0x16960, 0x16980 },
    { "Tizoc D - On Purple", 0x16980, 0x169a0 },
    { "Tizoc D - Gold", 0x169a0, 0x169c0 },
    { "Tizoc D - T.O.P.", 0x169c0, 0x169e0 },
    { "Tizoc D - Shade", 0x169e0, 0x16a00 },
    { "Tizoc D - Dark Red", 0x16a00, 0x16a20 },
    { "Tizoc D - Blue", 0x16a20, 0x16a40 },
    { "Tizoc D - Projectile1", 0x16a40, 0x16a60 },
    { "Tizoc D - Projectile2", 0x16a60, 0x16a80 },
    { "Tizoc D - Projectile3", 0x16a80, 0x16aa0 },
    { "Tizoc D - Projectile4", 0x16aa0, 0x16ac0 },
    { "Tizoc D - Projectile5", 0x16ac0, 0x16ae0 },
    { "Tizoc D - Projectile6", 0x16ae0, 0x16b00 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_BOSS[] =
{
    { "Tizoc Boss? - Main", 0x16b00, 0x16b20 },
    { "Tizoc Boss? - Line1", 0x16b20, 0x16b40 },
    { "Tizoc Boss? - Line2", 0x16b40, 0x16b60 },
    { "Tizoc Boss? - On Fire", 0x16b60, 0x16b80 },
    { "Tizoc Boss? - On Purple", 0x16b80, 0x16ba0 },
    { "Tizoc Boss? - Gold", 0x16ba0, 0x16bc0 },
    { "Tizoc Boss? - T.O.P.", 0x16bc0, 0x16be0 },
    { "Tizoc Boss? - Shade", 0x16be0, 0x16c00 },
    { "Tizoc Boss? - Dark Red", 0x16c00, 0x16c20 },
    { "Tizoc Boss? - Blue", 0x16c20, 0x16c40 },
    { "Tizoc Boss? - Projectile1", 0x16c40, 0x16c60 },
    { "Tizoc Boss? - Projectile2", 0x16c60, 0x16c80 },
    { "Tizoc Boss? - Projectile3", 0x16c80, 0x16ca0 },
    { "Tizoc Boss? - Projectile4", 0x16ca0, 0x16cc0 },
    { "Tizoc Boss? - Projectile5", 0x16cc0, 0x16ce0 },
    { "Tizoc Boss? - Projectile6", 0x16ce0, 0x16d00 },
};


const sGame_PaletteDataset Garou_A_KAIN_PALETTES_A[] =
{
    { "Kain A - Main", 0x16d00, 0x16d20 },
    { "Kain A - Line1", 0x16d20, 0x16d40 },
    { "Kain A - Line2", 0x16d40, 0x16d60 },
    { "Kain A - On Fire", 0x16d60, 0x16d80 },
    { "Kain A - On Purple", 0x16d80, 0x16da0 },
    { "Kain A - Gold", 0x16da0, 0x16dc0 },
    { "Kain A - T.O.P.", 0x16dc0, 0x16de0 },
    { "Kain A - Shade", 0x16de0, 0x16e00 },
    { "Kain A - Dark Red", 0x16e00, 0x16e20 },
    { "Kain A - Blue", 0x16e20, 0x16e40 },
    { "Kain A - Projectile1", 0x16e40, 0x16e60 },
    { "Kain A - Projectile2", 0x16e60, 0x16e80 },
    { "Kain A - Projectile3", 0x16e80, 0x16ea0 },
    { "Kain A - Projectile4", 0x16ea0, 0x16ec0 },
    { "Kain A - Projectile5", 0x16ec0, 0x16ee0 },
    { "Kain A - Projectile6", 0x16ee0, 0x16f00 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_B[] =
{
    { "Kain B - Main", 0x16f00, 0x16f20 },
    { "Kain B - Line1", 0x16f20, 0x16f40 },
    { "Kain B - Line2", 0x16f40, 0x16f60 },
    { "Kain B - On Fire", 0x16f60, 0x16f80 },
    { "Kain B - On Purple", 0x16f80, 0x16fa0 },
    { "Kain B - Gold", 0x16fa0, 0x16fc0 },
    { "Kain B - T.O.P.", 0x16fc0, 0x16fe0 },
    { "Kain B - Shade", 0x16fe0, 0x17000 },
    { "Kain B - Dark Red", 0x17000, 0x17020 },
    { "Kain B - Blue", 0x17020, 0x17040 },
    { "Kain B - Projectile1", 0x17040, 0x17060 },
    { "Kain B - Projectile2", 0x17060, 0x17080 },
    { "Kain B - Projectile3", 0x17080, 0x170a0 },
    { "Kain B - Projectile4", 0x170a0, 0x170c0 },
    { "Kain B - Projectile5", 0x170c0, 0x170e0 },
    { "Kain B - Projectile6", 0x170e0, 0x17100 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_C[] =
{
    { "Kain C - Main", 0x17100, 0x17120 },
    { "Kain C - Line1", 0x17120, 0x17140 },
    { "Kain C - Line2", 0x17140, 0x17160 },
    { "Kain C - On Fire", 0x17160, 0x17180 },
    { "Kain C - On Purple", 0x17180, 0x171a0 },
    { "Kain C - Gold", 0x171a0, 0x171c0 },
    { "Kain C - T.O.P.", 0x171c0, 0x171e0 },
    { "Kain C - Shade", 0x171e0, 0x17200 },
    { "Kain C - Dark Red", 0x17200, 0x17220 },
    { "Kain C - Blue", 0x17220, 0x17240 },
    { "Kain C - Projectile1", 0x17240, 0x17260 },
    { "Kain C - Projectile2", 0x17260, 0x17280 },
    { "Kain C - Projectile3", 0x17280, 0x172a0 },
    { "Kain C - Projectile4", 0x172a0, 0x172c0 },
    { "Kain C - Projectile5", 0x172c0, 0x172e0 },
    { "Kain C - Projectile6", 0x172e0, 0x17300 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_D[] =
{
    { "Kain D - Main", 0x17300, 0x17320 },
    { "Kain D - Line1", 0x17320, 0x17340 },
    { "Kain D - Line2", 0x17340, 0x17360 },
    { "Kain D - On Fire", 0x17360, 0x17380 },
    { "Kain D - On Purple", 0x17380, 0x173a0 },
    { "Kain D - Gold", 0x173a0, 0x173c0 },
    { "Kain D - T.O.P.", 0x173c0, 0x173e0 },
    { "Kain D - Shade", 0x173e0, 0x17400 },
    { "Kain D - Dark Red", 0x17400, 0x17420 },
    { "Kain D - Blue", 0x17420, 0x17440 },
    { "Kain D - Projectile1", 0x17440, 0x17460 },
    { "Kain D - Projectile2", 0x17460, 0x17480 },
    { "Kain D - Projectile3", 0x17480, 0x174a0 },
    { "Kain D - Projectile4", 0x174a0, 0x174c0 },
    { "Kain D - Projectile5", 0x174c0, 0x174e0 },
    { "Kain D - Projectile6", 0x174e0, 0x17500 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_BOSS[] =
{
    { "Kain Boss? - Main", 0x17500, 0x17520 },
    { "Kain Boss? - Line1", 0x17520, 0x17540 },
    { "Kain Boss? - Line2", 0x17540, 0x17560 },
    { "Kain Boss? - On Fire", 0x17560, 0x17580 },
    { "Kain Boss? - On Purple", 0x17580, 0x175a0 },
    { "Kain Boss? - Gold", 0x175a0, 0x175c0 },
    { "Kain Boss? - T.O.P.", 0x175c0, 0x175e0 },
    { "Kain Boss? - Shade", 0x175e0, 0x17600 },
    { "Kain Boss? - Dark Red", 0x17600, 0x17620 },
    { "Kain Boss? - Blue", 0x17620, 0x17640 },
    { "Kain Boss? - Projectile1", 0x17640, 0x17660 },
    { "Kain Boss? - Projectile2", 0x17660, 0x17680 },
    { "Kain Boss? - Projectile3", 0x17680, 0x176a0 },
    { "Kain Boss? - Projectile4", 0x176a0, 0x176c0 },
    { "Kain Boss? - Projectile5", 0x176c0, 0x176e0 },
    { "Kain Boss? - Projectile6", 0x176e0, 0x17700 },
};

const sGame_PaletteDataset Garou_A_ROCKHOWARD_PALETTES_PORTRAITS[] =
{
    { "Rock Portrait Palette - A" , 0x2a900, 0x2a940 },
    { "Rock Portrait Palette - B" , 0x2a940, 0x2a980 },
    { "Rock Portrait Palette - C" , 0x2a980, 0x2a9c0 },
    { "Rock Portrait Palette - D" , 0x2a9c0, 0x2aa00 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_PORTRAITS[] =
{
    { "Terry Portrait Palette - A" , 0x2aa00, 0x2aa40 },
    { "Terry Portrait Palette - B" , 0x2aa40, 0x2aa80 },
    { "Terry Portrait Palette - C" , 0x2aa80, 0x2aac0 },
    { "Terry Portrait Palette - D" , 0x2aac0, 0x2ab00 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_PORTRAITS[] =
{
    { "Khushnood Portrait Palette - A" , 0x2b000, 0x2b040 },
    { "Khushnood Portrait Palette - B" , 0x2b040, 0x2b080 },
    { "Khushnood Portrait Palette - C" , 0x2b080, 0x2b0c0 },
    { "Khushnood Portrait Palette - D" , 0x2b0c0, 0x2b100 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_PORTRAITS[] =
{
    { "Dong Hwan Portrait Palette - A" , 0x2ab00, 0x2ab40 },
    { "Dong Hwan Portrait Palette - B" , 0x2ab40, 0x2ab80 },
    { "Dong Hwan Portrait Palette - C" , 0x2ab80, 0x2abc0 },
    { "Dong Hwan Portrait Palette - D" , 0x2abc0, 0x2ac00 },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_PORTRAITS[] =
{
    { "Jae Hoon Portrait Palette - A" , 0x2ac00, 0x2ac40 },
    { "Jae Hoon Portrait Palette - B" , 0x2ac40, 0x2ac80 },
    { "Jae Hoon Portrait Palette - C" , 0x2ac80, 0x2acc0 },
    { "Jae Hoon Portrait Palette - D" , 0x2acc0, 0x2ad00 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_PORTRAITS[] =
{
    { "Hotaru Portrait Palette - A" , 0x2ad00, 0x2ad40 },
    { "Hotaru Portrait Palette - B" , 0x2ad40, 0x2ad80 },
    { "Hotaru Portrait Palette - C" , 0x2ad80, 0x2adc0 },
    { "Hotaru Portrait Palette - D" , 0x2adc0, 0x2ae00 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_PORTRAITS[] =
{
    { "Gato Portrait Palette - A" , 0x2ae00, 0x2ae40 },
    { "Gato Portrait Palette - B" , 0x2ae40, 0x2ae80 },
    { "Gato Portrait Palette - C" , 0x2ae80, 0x2aec0 },
    { "Gato Portrait Palette - D" , 0x2aec0, 0x2af00 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_PORTRAITS[] =
{
    { "Kevin Portrait Palette - A" , 0x2b400, 0x2b440 },
    { "Kevin Portrait Palette - B" , 0x2b440, 0x2b480 },
    { "Kevin Portrait Palette - C" , 0x2b480, 0x2b4c0 },
    { "Kevin Portrait Palette - D" , 0x2b4c0, 0x2b500 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_PORTRAITS[] =
{
    { "Grant Portrait Palette - A" , 0x2b500, 0x2b540 },
    { "Grant Portrait Palette - B" , 0x2b540, 0x2b580 },
    { "Grant Portrait Palette - C" , 0x2b580, 0x2b5c0 },
    { "Grant Portrait Palette - D" , 0x2b5c0, 0x2b600 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_PORTRAITS[] =
{
    { "B.Jennet Portrait Palette - A" , 0x2af00, 0x2af40 },
    { "B.Jennet Portrait Palette - B" , 0x2af40, 0x2af80 },
    { "B.Jennet Portrait Palette - C" , 0x2af80, 0x2afc0 },
    { "B.Jennet Portrait Palette - D" , 0x2afc0, 0x2b000 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_PORTRAITS[] =
{
    { "Hokutomaru Portrait Palette - A" , 0x2b100, 0x2b140 },
    { "Hokutomaru Portrait Palette - B" , 0x2b140, 0x2b180 },
    { "Hokutomaru Portrait Palette - C" , 0x2b180, 0x2b1c0 },
    { "Hokutomaru Portrait Palette - D" , 0x2b1c0, 0x2b200 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_PORTRAITS[] =
{
    { "Freeman Portrait Palette - A" , 0x2b200, 0x2b240 },
    { "Freeman Portrait Palette - B" , 0x2b240, 0x2b280 },
    { "Freeman Portrait Palette - C" , 0x2b280, 0x2b2c0 },
    { "Freeman Portrait Palette - D" , 0x2b2c0, 0x2b300 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_PORTRAITS[] =
{
    { "Tizoc Portrait Palette - A" , 0x2b300, 0x2b340 },
    { "Tizoc Portrait Palette - B" , 0x2b340, 0x2b380 },
    { "Tizoc Portrait Palette - C" , 0x2b380, 0x2b3c0 },
    { "Tizoc Portrait Palette - D" , 0x2b3c0, 0x2b400 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_PORTRAITS[] =
{
    { "Kain Portrait Palette - A" , 0x2b600, 0x2b640 },
    { "Kain Portrait Palette - B" , 0x2b640, 0x2b680 },
    { "Kain Portrait Palette - C" , 0x2b680, 0x2b6c0 },
    { "Kain Portrait Palette - D" , 0x2b6c0, 0x2b700 },
};

const sDescTreeNode Garou_A_ROCKHOWARD_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_A, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_B, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_C, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_D, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_BOSS, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_KHUSHNOOD_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_A, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_B, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_C, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_D, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_BOSS, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_TERRY_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_A, ARRAYSIZE(Garou_A_TERRY_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_B, ARRAYSIZE(Garou_A_TERRY_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_C, ARRAYSIZE(Garou_A_TERRY_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_D, ARRAYSIZE(Garou_A_TERRY_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_BOSS, ARRAYSIZE(Garou_A_TERRY_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_DONG_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_A, ARRAYSIZE(Garou_A_DONG_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_B, ARRAYSIZE(Garou_A_DONG_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_C, ARRAYSIZE(Garou_A_DONG_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_D, ARRAYSIZE(Garou_A_DONG_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_BOSS, ARRAYSIZE(Garou_A_DONG_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_JAE_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_A, ARRAYSIZE(Garou_A_JAE_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_B, ARRAYSIZE(Garou_A_JAE_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_C, ARRAYSIZE(Garou_A_JAE_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_D, ARRAYSIZE(Garou_A_JAE_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_BOSS, ARRAYSIZE(Garou_A_JAE_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_HOTARU_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_A, ARRAYSIZE(Garou_A_HOTARU_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_B, ARRAYSIZE(Garou_A_HOTARU_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_C, ARRAYSIZE(Garou_A_HOTARU_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_D, ARRAYSIZE(Garou_A_HOTARU_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_BOSS, ARRAYSIZE(Garou_A_HOTARU_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_GATO_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_A, ARRAYSIZE(Garou_A_GATO_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_B, ARRAYSIZE(Garou_A_GATO_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_C, ARRAYSIZE(Garou_A_GATO_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_D, ARRAYSIZE(Garou_A_GATO_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_BOSS, ARRAYSIZE(Garou_A_GATO_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_KEVIN_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_A, ARRAYSIZE(Garou_A_KEVIN_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_B, ARRAYSIZE(Garou_A_KEVIN_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_C, ARRAYSIZE(Garou_A_KEVIN_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_D, ARRAYSIZE(Garou_A_KEVIN_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_BOSS, ARRAYSIZE(Garou_A_KEVIN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_GRANT_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_A, ARRAYSIZE(Garou_A_GRANT_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_B, ARRAYSIZE(Garou_A_GRANT_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_C, ARRAYSIZE(Garou_A_GRANT_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_D, ARRAYSIZE(Garou_A_GRANT_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_BOSS, ARRAYSIZE(Garou_A_GRANT_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_BJENNET_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_A, ARRAYSIZE(Garou_A_BJENNET_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_B, ARRAYSIZE(Garou_A_BJENNET_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_C, ARRAYSIZE(Garou_A_BJENNET_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_D, ARRAYSIZE(Garou_A_BJENNET_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_BOSS, ARRAYSIZE(Garou_A_BJENNET_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_HOKUTOMARO_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_A, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_B, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_C, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_D, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_BOSS, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_FREEMAN_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_A, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_B, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_C, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_D, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_BOSS, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_TIZOC_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_A, ARRAYSIZE(Garou_A_TIZOC_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_B, ARRAYSIZE(Garou_A_TIZOC_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_C, ARRAYSIZE(Garou_A_TIZOC_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_D, ARRAYSIZE(Garou_A_TIZOC_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_BOSS, ARRAYSIZE(Garou_A_TIZOC_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_KAIN_COLLECTION[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_A, ARRAYSIZE(Garou_A_KAIN_PALETTES_A) },
    { "B", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_B, ARRAYSIZE(Garou_A_KAIN_PALETTES_B) },
    { "C", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_C, ARRAYSIZE(Garou_A_KAIN_PALETTES_C) },
    { "D", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_D, ARRAYSIZE(Garou_A_KAIN_PALETTES_D) },
    { "Boss", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_BOSS, ARRAYSIZE(Garou_A_KAIN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_PORTRAITS_COLLECTION[] =
{
    { "Rock Howard", DESC_NODETYPE_TREE, (void*)Garou_A_ROCKHOWARD_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_ROCKHOWARD_PALETTES_PORTRAITS) },
    { "Terry Bogard", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_TERRY_PALETTES_PORTRAITS) },
    { "Khushnood Butt", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_PORTRAITS) },
    { "Dong Hwan", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_DONG_PALETTES_PORTRAITS) },
    { "Jae Hoon", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_JAE_PALETTES_PORTRAITS) },
    { "Hotaru", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_HOTARU_PALETTES_PORTRAITS) },
    { "Gato", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_GATO_PALETTES_PORTRAITS) },
    { "Kevin", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_KEVIN_PALETTES_PORTRAITS) },
    { "Grant", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_GRANT_PALETTES_PORTRAITS) },
    { "B.Jennet", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_BJENNET_PALETTES_PORTRAITS) },
    { "Hokutomaro", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_PORTRAITS) },
    { "Freeman", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_PORTRAITS) },
    { "Tizoc", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_TIZOC_PALETTES_PORTRAITS) },
    { "Kain", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_KAIN_PALETTES_PORTRAITS) },
};

const UINT8 Garou_A_UNITSORT[Garou_A_NUMUNIT + 1] // Plus for extras
{
    indexGarouARockHoward,
    indexGarouATerryBogard,
    indexGarouAKhushnood,
    indexGarouADong,
    indexGarouAJae,
    indexGarouAHotaru,
    indexGarouAGato,
    indexGarouAKevin,
    indexGarouAGrant,
    indexGarouABJennet,
    indexGarouAHokutomaru,
    indexGarouAFreeman,
    indexGarouATizoc,
    indexGarouAKain,
    indexGarouAPortraits,
};

const sDescTreeNode Garou_A_UNITS[Garou_A_NUMUNIT] =
{
    { "Rock Howard", DESC_NODETYPE_TREE, (void*)Garou_A_ROCKHOWARD_COLLECTION, ARRAYSIZE(Garou_A_ROCKHOWARD_COLLECTION) },
    { "Terry Bogard", DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_COLLECTION, ARRAYSIZE(Garou_A_TERRY_COLLECTION) },
    { "Khushnood Butt", DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_COLLECTION, ARRAYSIZE(Garou_A_KHUSHNOOD_COLLECTION) },
    { "Dong Hwan", DESC_NODETYPE_TREE, (void*)Garou_A_DONG_COLLECTION, ARRAYSIZE(Garou_A_DONG_COLLECTION) },
    { "Jae Hoon", DESC_NODETYPE_TREE, (void*)Garou_A_JAE_COLLECTION, ARRAYSIZE(Garou_A_JAE_COLLECTION) },
    { "Hotaru", DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_COLLECTION, ARRAYSIZE(Garou_A_HOTARU_COLLECTION) },
    { "Gato", DESC_NODETYPE_TREE, (void*)Garou_A_GATO_COLLECTION, ARRAYSIZE(Garou_A_GATO_COLLECTION) },
    { "Kevin", DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_COLLECTION, ARRAYSIZE(Garou_A_KEVIN_COLLECTION) },
    { "Grant", DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_COLLECTION, ARRAYSIZE(Garou_A_GRANT_COLLECTION) },
    { "B.Jennet", DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_COLLECTION, ARRAYSIZE(Garou_A_BJENNET_COLLECTION) },
    { "Hokutomaro", DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_COLLECTION, ARRAYSIZE(Garou_A_HOKUTOMARO_COLLECTION) },
    { "Freeman", DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_COLLECTION, ARRAYSIZE(Garou_A_FREEMAN_COLLECTION) },
    { "Tizoc", DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_COLLECTION, ARRAYSIZE(Garou_A_TIZOC_COLLECTION) },
    { "Kain", DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_COLLECTION, ARRAYSIZE(Garou_A_KAIN_COLLECTION) },
    { "Portraits", DESC_NODETYPE_TREE, (void*)Garou_A_PORTRAITS_COLLECTION, ARRAYSIZE(Garou_A_PORTRAITS_COLLECTION) },
};

// We extend this array with data groveled from the GarouE.txt extensible extras file, if any.
const stExtraDef Garou_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
