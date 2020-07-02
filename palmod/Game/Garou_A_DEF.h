#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of Garou_A_ROCK_PALETTES. 
// * Update every array using Garou_A_NUMUNIT below
// That should be it.  Good luck.

constexpr auto Garou_A_NUMUNIT = indexGarouALast;

#define Garou_A_EXTRALOC Garou_A_NUMUNIT

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_A[] =
{
    { _T("Rock A - Main"), 0xff00, 0xff20, indexGarouARockHoward },
    { _T("Rock A - Line1"), 0xff20, 0xff40, indexGarouARockHoward },
    { _T("Rock A - Line2"), 0xff40, 0xff60, indexGarouARockHoward },
    { _T("Rock A - On Fire"), 0xff60, 0xff80, indexGarouARockHoward },
    { _T("Rock A - On Purple"), 0xff80, 0xffa0, indexGarouARockHoward },
    { _T("Rock A - Gold"), 0xffa0, 0xffc0, indexGarouARockHoward },
    { _T("Rock A - T.O.P."), 0xffc0, 0xffe0, indexGarouARockHoward },
    { _T("Rock A - Shade"), 0xffe0, 0x10000, indexGarouARockHoward },
    { _T("Rock A - Dark Red"), 0x10000, 0x10020, indexGarouARockHoward },
    { _T("Rock A - Blue"), 0x10020, 0x10040, indexGarouARockHoward },
    { _T("Rock A - Projectile1"), 0x10040, 0x10060 },
    { _T("Rock A - Projectile2"), 0x10060, 0x10080 },
    { _T("Rock A - Projectile3"), 0x10080, 0x100a0 },
    { _T("Rock A - Projectile4"), 0x100a0, 0x100c0 },
    { _T("Rock A - Projectile5"), 0x100c0, 0x100e0 },
    { _T("Rock A - Projectile6"), 0x100e0, 0x10100 },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_B[] =
{
    { _T("Rock B - Main"), 0x10100, 0x10120, indexGarouARockHoward },
    { _T("Rock B - Line1"), 0x10120, 0x10140, indexGarouARockHoward },
    { _T("Rock B - Line2"), 0x10140, 0x10160, indexGarouARockHoward },
    { _T("Rock B - On Fire"), 0x10160, 0x10180, indexGarouARockHoward },
    { _T("Rock B - On Purple"), 0x10180, 0x101a0, indexGarouARockHoward },
    { _T("Rock B - Gold"), 0x101a0, 0x101c0, indexGarouARockHoward },
    { _T("Rock B - T.O.P."), 0x101c0, 0x101e0, indexGarouARockHoward },
    { _T("Rock B - Shade"), 0x101e0, 0x10200, indexGarouARockHoward },
    { _T("Rock B - Dark Red"), 0x10200, 0x10220, indexGarouARockHoward },
    { _T("Rock B - Blue"), 0x10220, 0x10240, indexGarouARockHoward },
    { _T("Rock B - Projectile1"), 0x10240, 0x10260 },
    { _T("Rock B - Projectile2"), 0x10260, 0x10280 },
    { _T("Rock B - Projectile3"), 0x10280, 0x102a0 },
    { _T("Rock B - Projectile4"), 0x102a0, 0x102c0 },
    { _T("Rock B - Projectile5"), 0x102c0, 0x102e0 },
    { _T("Rock B - Projectile6"), 0x102e0, 0x10300 },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_C[] =
{
    { _T("Rock C - Main"), 0x10300, 0x10320, indexGarouARockHoward },
    { _T("Rock C - Line1"), 0x10320, 0x10340, indexGarouARockHoward },
    { _T("Rock C - Line2"), 0x10340, 0x10360, indexGarouARockHoward },
    { _T("Rock C - On Fire"), 0x10360, 0x10380, indexGarouARockHoward },
    { _T("Rock C - On Purple"), 0x10380, 0x103a0, indexGarouARockHoward },
    { _T("Rock C - Gold"), 0x103a0, 0x103c0, indexGarouARockHoward },
    { _T("Rock C - T.O.P."), 0x103c0, 0x103e0, indexGarouARockHoward },
    { _T("Rock C - Shade"), 0x103e0, 0x10400, indexGarouARockHoward },
    { _T("Rock C - Dark Red"), 0x10400, 0x10420, indexGarouARockHoward },
    { _T("Rock C - Blue"), 0x10420, 0x10440, indexGarouARockHoward },
    { _T("Rock C - Projectile1"), 0x10440, 0x10460 },
    { _T("Rock C - Projectile2"), 0x10460, 0x10480 },
    { _T("Rock C - Projectile3"), 0x10480, 0x104a0 },
    { _T("Rock C - Projectile4"), 0x104a0, 0x104c0 },
    { _T("Rock C - Projectile5"), 0x104c0, 0x104e0 },
    { _T("Rock C - Projectile6"), 0x104e0, 0x10500 },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_D[] =
{
    { _T("Rock D - Main"), 0x10500, 0x10520, indexGarouARockHoward },
    { _T("Rock D - Line1"), 0x10520, 0x10540, indexGarouARockHoward },
    { _T("Rock D - Line2"), 0x10540, 0x10560, indexGarouARockHoward },
    { _T("Rock D - On Fire"), 0x10560, 0x10580, indexGarouARockHoward },
    { _T("Rock D - On Purple"), 0x10580, 0x105a0, indexGarouARockHoward },
    { _T("Rock D - Gold"), 0x105a0, 0x105c0, indexGarouARockHoward },
    { _T("Rock D - T.O.P."), 0x105c0, 0x105e0, indexGarouARockHoward },
    { _T("Rock D - Shade"), 0x105e0, 0x10600, indexGarouARockHoward },
    { _T("Rock D - Dark Red"), 0x10600, 0x10620, indexGarouARockHoward },
    { _T("Rock D - Blue"), 0x10620, 0x10640, indexGarouARockHoward },
    { _T("Rock D - Projectile1"), 0x10640, 0x10660 },
    { _T("Rock D - Projectile2"), 0x10660, 0x10680 },
    { _T("Rock D - Projectile3"), 0x10680, 0x106a0 },
    { _T("Rock D - Projectile4"), 0x106a0, 0x106c0 },
    { _T("Rock D - Projectile5"), 0x106c0, 0x106e0 },
    { _T("Rock D - Projectile6"), 0x106e0, 0x10700 },
};

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES_BOSS[] =
{
    { _T("Rock Boss? - Main"), 0x10700, 0x10720, indexGarouARockHoward },
    { _T("Rock Boss? - Line1"), 0x10720, 0x10740, indexGarouARockHoward },
    { _T("Rock Boss? - Line2"), 0x10740, 0x10760, indexGarouARockHoward },
    { _T("Rock Boss? - On Fire"), 0x10760, 0x10780, indexGarouARockHoward },
    { _T("Rock Boss? - On Purple"), 0x10780, 0x107a0, indexGarouARockHoward },
    { _T("Rock Boss? - Gold"), 0x107a0, 0x107c0, indexGarouARockHoward },
    { _T("Rock Boss? - T.O.P."), 0x107c0, 0x107e0, indexGarouARockHoward },
    { _T("Rock Boss? - Shade"), 0x107e0, 0x10800, indexGarouARockHoward },
    { _T("Rock Boss? - Dark Red"), 0x10800, 0x10820, indexGarouARockHoward },
    { _T("Rock Boss? - Blue"), 0x10820, 0x10840, indexGarouARockHoward },
    { _T("Rock Boss? - Projectile1"), 0x10840, 0x10860 },
    { _T("Rock Boss? - Projectile2"), 0x10860, 0x10880 },
    { _T("Rock Boss? - Projectile3"), 0x10880, 0x108a0 },
    { _T("Rock Boss? - Projectile4"), 0x108a0, 0x108c0 },
    { _T("Rock Boss? - Projectile5"), 0x108c0, 0x108e0 },
    { _T("Rock Boss? - Projectile6"), 0x108e0, 0x10900 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_A[] =
{
    { _T("Khushnood Butt A - Main"), 0xeb00, 0xeb20, indexGarouAKhushnood },
    { _T("Khushnood Butt A - Line1"), 0xeb20, 0xeb40, indexGarouAKhushnood },
    { _T("Khushnood Butt A - Line2"), 0xeb40, 0xeb60, indexGarouAKhushnood },
    { _T("Khushnood Butt A - On Fire"), 0xeb60, 0xeb80, indexGarouAKhushnood },
    { _T("Khushnood Butt A - On Purple"), 0xeb80, 0xeba0, indexGarouAKhushnood },
    { _T("Khushnood Butt A - Gold"), 0xeba0, 0xebc0, indexGarouAKhushnood },
    { _T("Khushnood Butt A - T.O.P."), 0xebc0, 0xebe0, indexGarouAKhushnood },
    { _T("Khushnood Butt A - Shade"), 0xebe0, 0xec00, indexGarouAKhushnood },
    { _T("Khushnood Butt A - Dark Red"), 0xec00, 0xec20, indexGarouAKhushnood },
    { _T("Khushnood Butt A - Blue"), 0xec20, 0xec40, indexGarouAKhushnood },
    { _T("Khushnood Butt A - Projectile1"), 0xec40, 0xec60 },
    { _T("Khushnood Butt A - Projectile2"), 0xec60, 0xec80 },
    { _T("Khushnood Butt A - Projectile3"), 0xec80, 0xeca0 },
    { _T("Khushnood Butt A - Projectile4"), 0xeca0, 0xecc0 },
    { _T("Khushnood Butt A - Projectile5"), 0xecc0, 0xece0 },
    { _T("Khushnood Butt A - Projectile6"), 0xece0, 0xed00 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_B[] =
{
    { _T("Khushnood Butt B - Main"), 0xed00, 0xed20, indexGarouAKhushnood },
    { _T("Khushnood Butt B - Line1"), 0xed20, 0xed40, indexGarouAKhushnood },
    { _T("Khushnood Butt B - Line2"), 0xed40, 0xed60, indexGarouAKhushnood },
    { _T("Khushnood Butt B - On Fire"), 0xed60, 0xed80, indexGarouAKhushnood },
    { _T("Khushnood Butt B - On Purple"), 0xed80, 0xeda0, indexGarouAKhushnood },
    { _T("Khushnood Butt B - Gold"), 0xeda0, 0xedc0, indexGarouAKhushnood },
    { _T("Khushnood Butt B - T.O.P."), 0xedc0, 0xede0, indexGarouAKhushnood },
    { _T("Khushnood Butt B - Shade"), 0xede0, 0xee00, indexGarouAKhushnood },
    { _T("Khushnood Butt B - Dark Red"), 0xee00, 0xee20, indexGarouAKhushnood },
    { _T("Khushnood Butt B - Blue"), 0xee20, 0xee40, indexGarouAKhushnood },
    { _T("Khushnood Butt B - Projectile1"), 0xee40, 0xee60 },
    { _T("Khushnood Butt B - Projectile2"), 0xee60, 0xee80 },
    { _T("Khushnood Butt B - Projectile3"), 0xee80, 0xeea0 },
    { _T("Khushnood Butt B - Projectile4"), 0xeea0, 0xeec0 },
    { _T("Khushnood Butt B - Projectile5"), 0xeec0, 0xeee0 },
    { _T("Khushnood Butt B - Projectile6"), 0xeee0, 0xef00 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_C[] =
{
    { _T("Khushnood Butt C - Main"), 0xef00, 0xef20, indexGarouAKhushnood },
    { _T("Khushnood Butt C - Line1"), 0xef20, 0xef40, indexGarouAKhushnood },
    { _T("Khushnood Butt C - Line2"), 0xef40, 0xef60, indexGarouAKhushnood },
    { _T("Khushnood Butt C - On Fire"), 0xef60, 0xef80, indexGarouAKhushnood },
    { _T("Khushnood Butt C - On Purple"), 0xef80, 0xefa0, indexGarouAKhushnood },
    { _T("Khushnood Butt C - Gold"), 0xefa0, 0xefc0, indexGarouAKhushnood },
    { _T("Khushnood Butt C - T.O.P."), 0xefc0, 0xefe0, indexGarouAKhushnood },
    { _T("Khushnood Butt C - Shade"), 0xefe0, 0xf000, indexGarouAKhushnood },
    { _T("Khushnood Butt C - Dark Red"), 0xf000, 0xf020, indexGarouAKhushnood },
    { _T("Khushnood Butt C - Blue"), 0xf020, 0xf040, indexGarouAKhushnood },
    { _T("Khushnood Butt C - Projectile1"), 0xf040, 0xf060 },
    { _T("Khushnood Butt C - Projectile2"), 0xf060, 0xf080 },
    { _T("Khushnood Butt C - Projectile3"), 0xf080, 0xf0a0 },
    { _T("Khushnood Butt C - Projectile4"), 0xf0a0, 0xf0c0 },
    { _T("Khushnood Butt C - Projectile5"), 0xf0c0, 0xf0e0 },
    { _T("Khushnood Butt C - Projectile6"), 0xf0e0, 0xf100 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_D[] =
{
    { _T("Khushnood Butt D - Main"), 0xf100, 0xf120, indexGarouAKhushnood },
    { _T("Khushnood Butt D - Line1"), 0xf120, 0xf140, indexGarouAKhushnood },
    { _T("Khushnood Butt D - Line2"), 0xf140, 0xf160, indexGarouAKhushnood },
    { _T("Khushnood Butt D - On Fire"), 0xf160, 0xf180, indexGarouAKhushnood },
    { _T("Khushnood Butt D - On Purple"), 0xf180, 0xf1a0, indexGarouAKhushnood },
    { _T("Khushnood Butt D - Gold"), 0xf1a0, 0xf1c0, indexGarouAKhushnood },
    { _T("Khushnood Butt D - T.O.P."), 0xf1c0, 0xf1e0, indexGarouAKhushnood },
    { _T("Khushnood Butt D - Shade"), 0xf1e0, 0xf200, indexGarouAKhushnood },
    { _T("Khushnood Butt D - Dark Red"), 0xf200, 0xf220, indexGarouAKhushnood },
    { _T("Khushnood Butt D - Blue"), 0xf220, 0xf240, indexGarouAKhushnood },
    { _T("Khushnood Butt D - Projectile1"), 0xf240, 0xf260 },
    { _T("Khushnood Butt D - Projectile2"), 0xf260, 0xf280 },
    { _T("Khushnood Butt D - Projectile3"), 0xf280, 0xf2a0 },
    { _T("Khushnood Butt D - Projectile4"), 0xf2a0, 0xf2c0 },
    { _T("Khushnood Butt D - Projectile5"), 0xf2c0, 0xf2e0 },
    { _T("Khushnood Butt D - Projectile6"), 0xf2e0, 0xf300 },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_BOSS[] =
{
    { _T("Khushnood Butt Boss? - Main"), 0xf300, 0xf320, indexGarouAKhushnood },
    { _T("Khushnood Butt Boss? - Line1"), 0xf320, 0xf340, indexGarouAKhushnood },
    { _T("Khushnood Butt Boss? - Line2"), 0xf340, 0xf360, indexGarouAKhushnood },
    { _T("Khushnood Butt Boss? - On Fire"), 0xf360, 0xf380, indexGarouAKhushnood },
    { _T("Khushnood Butt Boss? - On Purple"), 0xf380, 0xf3a0, indexGarouAKhushnood },
    { _T("Khushnood Butt Boss? - Gold"), 0xf3a0, 0xf3c0, indexGarouAKhushnood },
    { _T("Khushnood Butt Boss? - T.O.P."), 0xf3c0, 0xf3e0, indexGarouAKhushnood },
    { _T("Khushnood Butt Boss? - Shade"), 0xf3e0, 0xf400, indexGarouAKhushnood },
    { _T("Khushnood Butt Boss? - Dark Red"), 0xf400, 0xf420, indexGarouAKhushnood },
    { _T("Khushnood Butt Boss? - Blue"), 0xf420, 0xf440, indexGarouAKhushnood },
    { _T("Khushnood Butt Boss? - Projectile1"), 0xf440, 0xf460 },
    { _T("Khushnood Butt Boss? - Projectile2"), 0xf460, 0xf480 },
    { _T("Khushnood Butt Boss? - Projectile3"), 0xf480, 0xf4a0 },
    { _T("Khushnood Butt Boss? - Projectile4"), 0xf4a0, 0xf4c0 },
    { _T("Khushnood Butt Boss? - Projectile5"), 0xf4c0, 0xf4e0 },
    { _T("Khushnood Butt Boss? - Projectile6"), 0xf4e0, 0xf500 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_A[] =
{
    { _T("Terry A - Main"), 0xf500, 0xf520, indexGarouATerryBogard },
    { _T("Terry A - Line1"), 0xf520, 0xf540, indexGarouATerryBogard },
    { _T("Terry A - Line2"), 0xf540, 0xf560, indexGarouATerryBogard },
    { _T("Terry A - On Fire"), 0xf560, 0xf580, indexGarouATerryBogard },
    { _T("Terry A - On Purple"), 0xf580, 0xf5a0, indexGarouATerryBogard },
    { _T("Terry A - Gold"), 0xf5a0, 0xf5c0, indexGarouATerryBogard },
    { _T("Terry A - T.O.P."), 0xf5c0, 0xf5e0, indexGarouATerryBogard },
    { _T("Terry A - Shade"), 0xf5e0, 0xf600, indexGarouATerryBogard },
    { _T("Terry A - Dark Red"), 0xf600, 0xf620, indexGarouATerryBogard },
    { _T("Terry A - Blue"), 0xf620, 0xf640, indexGarouATerryBogard },
    { _T("Terry A - Projectile1"), 0xf640, 0xf660 },
    { _T("Terry A - Projectile2"), 0xf660, 0xf680 },
    { _T("Terry A - Projectile3"), 0xf680, 0xf6a0 },
    { _T("Terry A - Projectile4"), 0xf6a0, 0xf6c0 },
    { _T("Terry A - Projectile5"), 0xf6c0, 0xf6e0 },
    { _T("Terry A - Projectile6"), 0xf6e0, 0xf700 }, 
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_B[] =
{
    { _T("Terry B - Main"), 0xf700, 0xf720, indexGarouATerryBogard },
    { _T("Terry B - Line1"), 0xf720, 0xf740, indexGarouATerryBogard },
    { _T("Terry B - Line2"), 0xf740, 0xf760, indexGarouATerryBogard },
    { _T("Terry B - On Fire"), 0xf760, 0xf780, indexGarouATerryBogard },
    { _T("Terry B - On Purple"), 0xf780, 0xf7a0, indexGarouATerryBogard },
    { _T("Terry B - Gold"), 0xf7a0, 0xf7c0, indexGarouATerryBogard },
    { _T("Terry B - T.O.P."), 0xf7c0, 0xf7e0, indexGarouATerryBogard },
    { _T("Terry B - Shade"), 0xf7e0, 0xf800, indexGarouATerryBogard },
    { _T("Terry B - Dark Red"), 0xf800, 0xf820, indexGarouATerryBogard },
    { _T("Terry B - Blue"), 0xf820, 0xf840, indexGarouATerryBogard },
    { _T("Terry B - Projectile1"), 0xf840, 0xf860 },
    { _T("Terry B - Projectile2"), 0xf860, 0xf880 },
    { _T("Terry B - Projectile3"), 0xf880, 0xf8a0 },
    { _T("Terry B - Projectile4"), 0xf8a0, 0xf8c0 },
    { _T("Terry B - Projectile5"), 0xf8c0, 0xf8e0 },
    { _T("Terry B - Projectile6"), 0xf8e0, 0xf900 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_C[] =
{
    { _T("Terry C - Main"), 0xf900, 0xf920, indexGarouATerryBogard },
    { _T("Terry C - Line1"), 0xf920, 0xf940, indexGarouATerryBogard },
    { _T("Terry C - Line2"), 0xf940, 0xf960, indexGarouATerryBogard },
    { _T("Terry C - On Fire"), 0xf960, 0xf980, indexGarouATerryBogard },
    { _T("Terry C - On Purple"), 0xf980, 0xf9a0, indexGarouATerryBogard },
    { _T("Terry C - Gold"), 0xf9a0, 0xf9c0, indexGarouATerryBogard },
    { _T("Terry C - T.O.P."), 0xf9c0, 0xf9e0, indexGarouATerryBogard },
    { _T("Terry C - Shade"), 0xf9e0, 0xfa00, indexGarouATerryBogard },
    { _T("Terry C - Dark Red"), 0xfa00, 0xfa20, indexGarouATerryBogard },
    { _T("Terry C - Blue"), 0xfa20, 0xfa40, indexGarouATerryBogard },
    { _T("Terry C - Projectile1"), 0xfa40, 0xfa60 },
    { _T("Terry C - Projectile2"), 0xfa60, 0xfa80 },
    { _T("Terry C - Projectile3"), 0xfa80, 0xfaa0 },
    { _T("Terry C - Projectile4"), 0xfaa0, 0xfac0 },
    { _T("Terry C - Projectile5"), 0xfac0, 0xfae0 },
    { _T("Terry C - Projectile6"), 0xfae0, 0xfb00 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_D[] =
{
    { _T("Terry D - Main"), 0xfb00, 0xfb20, indexGarouATerryBogard },
    { _T("Terry D - Line1"), 0xfb20, 0xfb40, indexGarouATerryBogard },
    { _T("Terry D - Line2"), 0xfb40, 0xfb60, indexGarouATerryBogard },
    { _T("Terry D - On Fire"), 0xfb60, 0xfb80, indexGarouATerryBogard },
    { _T("Terry D - On Purple"), 0xfb80, 0xfba0, indexGarouATerryBogard },
    { _T("Terry D - Gold"), 0xfba0, 0xfbc0, indexGarouATerryBogard },
    { _T("Terry D - T.O.P."), 0xfbc0, 0xfbe0, indexGarouATerryBogard },
    { _T("Terry D - Shade"), 0xfbe0, 0xfc00, indexGarouATerryBogard },
    { _T("Terry D - Dark Red"), 0xfc00, 0xfc20, indexGarouATerryBogard },
    { _T("Terry D - Blue"), 0xfc20, 0xfc40, indexGarouATerryBogard },
    { _T("Terry D - Projectile1"), 0xfc40, 0xfc60 },
    { _T("Terry D - Projectile2"), 0xfc60, 0xfc80 },
    { _T("Terry D - Projectile3"), 0xfc80, 0xfca0 },
    { _T("Terry D - Projectile4"), 0xfca0, 0xfcc0 },
    { _T("Terry D - Projectile5"), 0xfcc0, 0xfce0 },
    { _T("Terry D - Projectile6"), 0xfce0, 0xfd00 },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_BOSS[] =
{
    { _T("Terry Boss? - Main"), 0xfd00, 0xfd20, indexGarouATerryBogard },
    { _T("Terry Boss? - Line1"), 0xfd20, 0xfd40, indexGarouATerryBogard },
    { _T("Terry Boss? - Line2"), 0xfd40, 0xfd60, indexGarouATerryBogard },
    { _T("Terry Boss? - On Fire"), 0xfd60, 0xfd80, indexGarouATerryBogard },
    { _T("Terry Boss? - On Purple"), 0xfd80, 0xfda0, indexGarouATerryBogard },
    { _T("Terry Boss? - Gold"), 0xfda0, 0xfdc0, indexGarouATerryBogard },
    { _T("Terry Boss? - T.O.P."), 0xfdc0, 0xfde0, indexGarouATerryBogard },
    { _T("Terry Boss? - Shade"), 0xfde0, 0xfe00, indexGarouATerryBogard },
    { _T("Terry Boss? - Dark Red"), 0xfe00, 0xfe20, indexGarouATerryBogard },
    { _T("Terry Boss? - Blue"), 0xfe20, 0xfe40, indexGarouATerryBogard },
    { _T("Terry Boss? - Projectile1"), 0xfe40, 0xfe60 },
    { _T("Terry Boss? - Projectile2"), 0xfe60, 0xfe80 },
    { _T("Terry Boss? - Projectile3"), 0xfe80, 0xfea0 },
    { _T("Terry Boss? - Projectile4"), 0xfea0, 0xfec0 },
    { _T("Terry Boss? - Projectile5"), 0xfec0, 0xfee0 },
    { _T("Terry Boss? - Projectile6"), 0xfee0, 0xff00 },
};


const sGame_PaletteDataset Garou_A_DONG_PALETTES_A[] =
{
    { _T("Dong Hwan A - Main"), 0x10900, 0x10920, indexGarouADong },
    { _T("Dong Hwan A - Line1"), 0x10920, 0x10940, indexGarouADong },
    { _T("Dong Hwan A - Line2"), 0x10940, 0x10960, indexGarouADong },
    { _T("Dong Hwan A - On Fire"), 0x10960, 0x10980, indexGarouADong },
    { _T("Dong Hwan A - On Purple"), 0x10980, 0x109a0, indexGarouADong },
    { _T("Dong Hwan A - Gold"), 0x109a0, 0x109c0, indexGarouADong },
    { _T("Dong Hwan A - T.O.P."), 0x109c0, 0x109e0, indexGarouADong },
    { _T("Dong Hwan A - Shade"), 0x109e0, 0x10a00, indexGarouADong },
    { _T("Dong Hwan A - Dark Red"), 0x10a00, 0x10a20, indexGarouADong },
    { _T("Dong Hwan A - Blue"), 0x10a20, 0x10a40, indexGarouADong },
    { _T("Dong Hwan A - Projectile1"), 0x10a40, 0x10a60 },
    { _T("Dong Hwan A - Projectile2"), 0x10a60, 0x10a80 },
    { _T("Dong Hwan A - Projectile3"), 0x10a80, 0x10aa0 },
    { _T("Dong Hwan A - Projectile4"), 0x10aa0, 0x10ac0 },
    { _T("Dong Hwan A - Projectile5"), 0x10ac0, 0x10ae0 },
    { _T("Dong Hwan A - Projectile6"), 0x10ae0, 0x10b00 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_B[] =
{
    { _T("Dong Hwan B - Main"), 0x10b00, 0x10b20, indexGarouADong },
    { _T("Dong Hwan B - Line1"), 0x10b20, 0x10b40, indexGarouADong },
    { _T("Dong Hwan B - Line2"), 0x10b40, 0x10b60, indexGarouADong },
    { _T("Dong Hwan B - On Fire"), 0x10b60, 0x10b80, indexGarouADong },
    { _T("Dong Hwan B - On Purple"), 0x10b80, 0x10ba0, indexGarouADong },
    { _T("Dong Hwan B - Gold"), 0x10ba0, 0x10bc0, indexGarouADong },
    { _T("Dong Hwan B - T.O.P."), 0x10bc0, 0x10be0, indexGarouADong },
    { _T("Dong Hwan B - Shade"), 0x10be0, 0x10c00, indexGarouADong },
    { _T("Dong Hwan B - Dark Red"), 0x10c00, 0x10c20, indexGarouADong },
    { _T("Dong Hwan B - Blue"), 0x10c20, 0x10c40, indexGarouADong },
    { _T("Dong Hwan B - Projectile1"), 0x10c40, 0x10c60 },
    { _T("Dong Hwan B - Projectile2"), 0x10c60, 0x10c80 },
    { _T("Dong Hwan B - Projectile3"), 0x10c80, 0x10ca0 },
    { _T("Dong Hwan B - Projectile4"), 0x10ca0, 0x10cc0 },
    { _T("Dong Hwan B - Projectile5"), 0x10cc0, 0x10ce0 },
    { _T("Dong Hwan B - Projectile6"), 0x10ce0, 0x10d00 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_C[] =
{
    { _T("Dong Hwan C - Main"), 0x10d00, 0x10d20, indexGarouADong },
    { _T("Dong Hwan C - Line1"), 0x10d20, 0x10d40, indexGarouADong },
    { _T("Dong Hwan C - Line2"), 0x10d40, 0x10d60, indexGarouADong },
    { _T("Dong Hwan C - On Fire"), 0x10d60, 0x10d80, indexGarouADong },
    { _T("Dong Hwan C - On Purple"), 0x10d80, 0x10da0, indexGarouADong },
    { _T("Dong Hwan C - Gold"), 0x10da0, 0x10dc0, indexGarouADong },
    { _T("Dong Hwan C - T.O.P."), 0x10dc0, 0x10de0, indexGarouADong },
    { _T("Dong Hwan C - Shade"), 0x10de0, 0x10e00, indexGarouADong },
    { _T("Dong Hwan C - Dark Red"), 0x10e00, 0x10e20, indexGarouADong },
    { _T("Dong Hwan C - Blue"), 0x10e20, 0x10e40, indexGarouADong },
    { _T("Dong Hwan C - Projectile1"), 0x10e40, 0x10e60 },
    { _T("Dong Hwan C - Projectile2"), 0x10e60, 0x10e80 },
    { _T("Dong Hwan C - Projectile3"), 0x10e80, 0x10ea0 },
    { _T("Dong Hwan C - Projectile4"), 0x10ea0, 0x10ec0 },
    { _T("Dong Hwan C - Projectile5"), 0x10ec0, 0x10ee0 },
    { _T("Dong Hwan C - Projectile6"), 0x10ee0, 0x10f00 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_D[] =
{
    { _T("Dong Hwan D - Main"), 0x10f00, 0x10f20, indexGarouADong },
    { _T("Dong Hwan D - Line1"), 0x10f20, 0x10f40, indexGarouADong },
    { _T("Dong Hwan D - Line2"), 0x10f40, 0x10f60, indexGarouADong },
    { _T("Dong Hwan D - On Fire"), 0x10f60, 0x10f80, indexGarouADong },
    { _T("Dong Hwan D - On Purple"), 0x10f80, 0x10fa0, indexGarouADong },
    { _T("Dong Hwan D - Gold"), 0x10fa0, 0x10fc0, indexGarouADong },
    { _T("Dong Hwan D - T.O.P."), 0x10fc0, 0x10fe0, indexGarouADong },
    { _T("Dong Hwan D - Shade"), 0x10fe0, 0x11000, indexGarouADong },
    { _T("Dong Hwan D - Dark Red"), 0x11000, 0x11020, indexGarouADong },
    { _T("Dong Hwan D - Blue"), 0x11020, 0x11040, indexGarouADong },
    { _T("Dong Hwan D - Projectile1"), 0x11040, 0x11060 },
    { _T("Dong Hwan D - Projectile2"), 0x11060, 0x11080 },
    { _T("Dong Hwan D - Projectile3"), 0x11080, 0x110a0 },
    { _T("Dong Hwan D - Projectile4"), 0x110a0, 0x110c0 },
    { _T("Dong Hwan D - Projectile5"), 0x110c0, 0x110e0 },
    { _T("Dong Hwan D - Projectile6"), 0x110e0, 0x11100 },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_BOSS[] =
{
    { _T("Dong Hwan Boss? - Main"), 0x11100, 0x11120, indexGarouADong },
    { _T("Dong Hwan Boss? - Line1"), 0x11120, 0x11140, indexGarouADong },
    { _T("Dong Hwan Boss? - Line2"), 0x11140, 0x11160, indexGarouADong },
    { _T("Dong Hwan Boss? - On Fire"), 0x11160, 0x11180, indexGarouADong },
    { _T("Dong Hwan Boss? - On Purple"), 0x11180, 0x111a0, indexGarouADong },
    { _T("Dong Hwan Boss? - Gold"), 0x111a0, 0x111c0, indexGarouADong },
    { _T("Dong Hwan Boss? - T.O.P."), 0x111c0, 0x111e0, indexGarouADong },
    { _T("Dong Hwan Boss? - Shade"), 0x111e0, 0x11200, indexGarouADong },
    { _T("Dong Hwan Boss? - Dark Red"), 0x11200, 0x11220, indexGarouADong },
    { _T("Dong Hwan Boss? - Blue"), 0x11220, 0x11240, indexGarouADong },
    { _T("Dong Hwan Boss? - Projectile1"), 0x11240, 0x11260 },
    { _T("Dong Hwan Boss? - Projectile2"), 0x11260, 0x11280 },
    { _T("Dong Hwan Boss? - Projectile3"), 0x11280, 0x112a0 },
    { _T("Dong Hwan Boss? - Projectile4"), 0x112a0, 0x112c0 },
    { _T("Dong Hwan Boss? - Projectile5"), 0x112c0, 0x112e0 },
    { _T("Dong Hwan Boss? - Projectile6"), 0x112e0, 0x11300 },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_A[] =
{
        { _T("Jae Hoon A - Main"), 0x11300, 0x11320, indexGarouAJae },
    { _T("Jae Hoon A - Line1"), 0x11320, 0x11340, indexGarouAJae },
    { _T("Jae Hoon A - Line2"), 0x11340, 0x11360, indexGarouAJae },
    { _T("Jae Hoon A - On Fire"), 0x11360, 0x11380, indexGarouAJae },
    { _T("Jae Hoon A - On Purple"), 0x11380, 0x113a0, indexGarouAJae },
    { _T("Jae Hoon A - Gold"), 0x113a0, 0x113c0, indexGarouAJae },
    { _T("Jae Hoon A - T.O.P."), 0x113c0, 0x113e0, indexGarouAJae },
    { _T("Jae Hoon A - Shade"), 0x113e0, 0x11400, indexGarouAJae },
    { _T("Jae Hoon A - Dark Red"), 0x11400, 0x11420, indexGarouAJae },
    { _T("Jae Hoon A - Blue"), 0x11420, 0x11440, indexGarouAJae },
    { _T("Jae Hoon A - Projectile1"), 0x11440, 0x11460 },
    { _T("Jae Hoon A - Projectile2"), 0x11460, 0x11480 },
    { _T("Jae Hoon A - Projectile3"), 0x11480, 0x114a0 },
    { _T("Jae Hoon A - Projectile4"), 0x114a0, 0x114c0 },
    { _T("Jae Hoon A - Projectile5"), 0x114c0, 0x114e0 },
    { _T("Jae Hoon A - Projectile6"), 0x114e0, 0x11500 },

};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_B[] =
{
    { _T("Jae Hoon B - Main"), 0x11500, 0x11520, indexGarouAJae },
    { _T("Jae Hoon B - Line1"), 0x11520, 0x11540, indexGarouAJae },
    { _T("Jae Hoon B - Line2"), 0x11540, 0x11560, indexGarouAJae },
    { _T("Jae Hoon B - On Fire"), 0x11560, 0x11580, indexGarouAJae },
    { _T("Jae Hoon B - On Purple"), 0x11580, 0x115a0, indexGarouAJae },
    { _T("Jae Hoon B - Gold"), 0x115a0, 0x115c0, indexGarouAJae },
    { _T("Jae Hoon B - T.O.P."), 0x115c0, 0x115e0, indexGarouAJae },
    { _T("Jae Hoon B - Shade"), 0x115e0, 0x11600, indexGarouAJae },
    { _T("Jae Hoon B - Dark Red"), 0x11600, 0x11620, indexGarouAJae },
    { _T("Jae Hoon B - Blue"), 0x11620, 0x11640, indexGarouAJae },
    { _T("Jae Hoon B - Projectile1"), 0x11640, 0x11660 },
    { _T("Jae Hoon B - Projectile2"), 0x11660, 0x11680 },
    { _T("Jae Hoon B - Projectile3"), 0x11680, 0x116a0 },
    { _T("Jae Hoon B - Projectile4"), 0x116a0, 0x116c0 },
    { _T("Jae Hoon B - Projectile5"), 0x116c0, 0x116e0 },
    { _T("Jae Hoon B - Projectile6"), 0x116e0, 0x11700 },

};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_C[] =
{
    { _T("Jae Hoon C - Main"), 0x11700, 0x11720, indexGarouAJae },
    { _T("Jae Hoon C - Line1"), 0x11720, 0x11740, indexGarouAJae },
    { _T("Jae Hoon C - Line2"), 0x11740, 0x11760, indexGarouAJae },
    { _T("Jae Hoon C - On Fire"), 0x11760, 0x11780, indexGarouAJae },
    { _T("Jae Hoon C - On Purple"), 0x11780, 0x117a0, indexGarouAJae },
    { _T("Jae Hoon C - Gold"), 0x117a0, 0x117c0, indexGarouAJae },
    { _T("Jae Hoon C - T.O.P."), 0x117c0, 0x117e0, indexGarouAJae },
    { _T("Jae Hoon C - Shade"), 0x117e0, 0x11800, indexGarouAJae },
    { _T("Jae Hoon C - Dark Red"), 0x11800, 0x11820, indexGarouAJae },
    { _T("Jae Hoon C - Blue"), 0x11820, 0x11840, indexGarouAJae },
    { _T("Jae Hoon C - Projectile1"), 0x11840, 0x11860 },
    { _T("Jae Hoon C - Projectile2"), 0x11860, 0x11880 },
    { _T("Jae Hoon C - Projectile3"), 0x11880, 0x118a0 },
    { _T("Jae Hoon C - Projectile4"), 0x118a0, 0x118c0 },
    { _T("Jae Hoon C - Projectile5"), 0x118c0, 0x118e0 },
    { _T("Jae Hoon C - Projectile6"), 0x118e0, 0x11900 },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_D[] =
{
    { _T("Jae Hoon D - Main"), 0x11900, 0x11920, indexGarouAJae },
    { _T("Jae Hoon D - Line1"), 0x11920, 0x11940, indexGarouAJae },
    { _T("Jae Hoon D - Line2"), 0x11940, 0x11960, indexGarouAJae },
    { _T("Jae Hoon D - On Fire"), 0x11960, 0x11980, indexGarouAJae },
    { _T("Jae Hoon D - On Purple"), 0x11980, 0x119a0, indexGarouAJae },
    { _T("Jae Hoon D - Gold"), 0x119a0, 0x119c0, indexGarouAJae },
    { _T("Jae Hoon D - T.O.P."), 0x119c0, 0x119e0, indexGarouAJae },
    { _T("Jae Hoon D - Shade"), 0x119e0, 0x11a00, indexGarouAJae },
    { _T("Jae Hoon D - Dark Red"), 0x11a00, 0x11a20, indexGarouAJae },
    { _T("Jae Hoon D - Blue"), 0x11a20, 0x11a40, indexGarouAJae },
    { _T("Jae Hoon D - Projectile1"), 0x11a40, 0x11a60 },
    { _T("Jae Hoon D - Projectile2"), 0x11a60, 0x11a80 },
    { _T("Jae Hoon D - Projectile3"), 0x11a80, 0x11aa0 },
    { _T("Jae Hoon D - Projectile4"), 0x11aa0, 0x11ac0 },
    { _T("Jae Hoon D - Projectile5"), 0x11ac0, 0x11ae0 },
    { _T("Jae Hoon D - Projectile6"), 0x11ae0, 0x11b00 },

};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_BOSS[] =
{
    { _T("Jae Hoon Boss? - Main"), 0x11b00, 0x11b20, indexGarouAJae },
    { _T("Jae Hoon Boss? - Line1"), 0x11b20, 0x11b40, indexGarouAJae },
    { _T("Jae Hoon Boss? - Line2"), 0x11b40, 0x11b60, indexGarouAJae },
    { _T("Jae Hoon Boss? - On Fire"), 0x11b60, 0x11b80, indexGarouAJae },
    { _T("Jae Hoon Boss? - On Purple"), 0x11b80, 0x11ba0, indexGarouAJae },
    { _T("Jae Hoon Boss? - Gold"), 0x11ba0, 0x11bc0, indexGarouAJae },
    { _T("Jae Hoon Boss? - T.O.P."), 0x11bc0, 0x11be0, indexGarouAJae },
    { _T("Jae Hoon Boss? - Shade"), 0x11be0, 0x11c00, indexGarouAJae },
    { _T("Jae Hoon Boss? - Dark Red"), 0x11c00, 0x11c20, indexGarouAJae },
    { _T("Jae Hoon Boss? - Blue"), 0x11c20, 0x11c40, indexGarouAJae },
    { _T("Jae Hoon Boss? - Projectile1"), 0x11c40, 0x11c60 },
    { _T("Jae Hoon Boss? - Projectile2"), 0x11c60, 0x11c80 },
    { _T("Jae Hoon Boss? - Projectile3"), 0x11c80, 0x11ca0 },
    { _T("Jae Hoon Boss? - Projectile4"), 0x11ca0, 0x11cc0 },
    { _T("Jae Hoon Boss? - Projectile5"), 0x11cc0, 0x11ce0 },
    { _T("Jae Hoon Boss? - Projectile6"), 0x11ce0, 0x11d00 },
};


const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_A[] =
{
    { _T("Hotaru A - Main"), 0x11d00, 0x11d20, indexGarouAHotaru },
    { _T("Hotaru A - Line1"), 0x11d20, 0x11d40, indexGarouAHotaru },
    { _T("Hotaru A - Line2"), 0x11d40, 0x11d60, indexGarouAHotaru },
    { _T("Hotaru A - On Fire"), 0x11d60, 0x11d80, indexGarouAHotaru },
    { _T("Hotaru A - On Purple"), 0x11d80, 0x11da0, indexGarouAHotaru },
    { _T("Hotaru A - Gold"), 0x11da0, 0x11dc0, indexGarouAHotaru },
    { _T("Hotaru A - T.O.P."), 0x11dc0, 0x11de0, indexGarouAHotaru },
    { _T("Hotaru A - Shade"), 0x11de0, 0x11e00, indexGarouAHotaru },
    { _T("Hotaru A - Dark Red"), 0x11e00, 0x11e20, indexGarouAHotaru },
    { _T("Hotaru A - Blue"), 0x11e20, 0x11e40, indexGarouAHotaru },
    { _T("Hotaru A - Projectile1"), 0x11e40, 0x11e60 },
    { _T("Hotaru A - Projectile2"), 0x11e60, 0x11e80 },
    { _T("Hotaru A - Projectile3"), 0x11e80, 0x11ea0 },
    { _T("Hotaru A - Projectile4"), 0x11ea0, 0x11ec0 },
    { _T("Hotaru A - Projectile5"), 0x11ec0, 0x11ee0 },
    { _T("Hotaru A - Projectile6"), 0x11ee0, 0x11f00 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_B[] =
{
    { _T("Hotaru B - Main"), 0x11f00, 0x11f20, indexGarouAHotaru },
    { _T("Hotaru B - Line1"), 0x11f20, 0x11f40, indexGarouAHotaru },
    { _T("Hotaru B - Line2"), 0x11f40, 0x11f60, indexGarouAHotaru },
    { _T("Hotaru B - On Fire"), 0x11f60, 0x11f80, indexGarouAHotaru },
    { _T("Hotaru B - On Purple"), 0x11f80, 0x11fa0, indexGarouAHotaru },
    { _T("Hotaru B - Gold"), 0x11fa0, 0x11fc0, indexGarouAHotaru },
    { _T("Hotaru B - T.O.P."), 0x11fc0, 0x11fe0, indexGarouAHotaru },
    { _T("Hotaru B - Shade"), 0x11fe0, 0x12000, indexGarouAHotaru },
    { _T("Hotaru B - Dark Red"), 0x12000, 0x12020, indexGarouAHotaru },
    { _T("Hotaru B - Blue"), 0x12020, 0x12040, indexGarouAHotaru },
    { _T("Hotaru B - Projectile1"), 0x12040, 0x12060 },
    { _T("Hotaru B - Projectile2"), 0x12060, 0x12080 },
    { _T("Hotaru B - Projectile3"), 0x12080, 0x120a0 },
    { _T("Hotaru B - Projectile4"), 0x120a0, 0x120c0 },
    { _T("Hotaru B - Projectile5"), 0x120c0, 0x120e0 },
    { _T("Hotaru B - Projectile6"), 0x120e0, 0x12100 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_C[] =
{
    { _T("Hotaru C - Main"), 0x12100, 0x12120, indexGarouAHotaru },
    { _T("Hotaru C - Line1"), 0x12120, 0x12140, indexGarouAHotaru },
    { _T("Hotaru C - Line2"), 0x12140, 0x12160, indexGarouAHotaru },
    { _T("Hotaru C - On Fire"), 0x12160, 0x12180, indexGarouAHotaru },
    { _T("Hotaru C - On Purple"), 0x12180, 0x121a0, indexGarouAHotaru },
    { _T("Hotaru C - Gold"), 0x121a0, 0x121c0, indexGarouAHotaru },
    { _T("Hotaru C - T.O.P."), 0x121c0, 0x121e0, indexGarouAHotaru },
    { _T("Hotaru C - Shade"), 0x121e0, 0x12200, indexGarouAHotaru },
    { _T("Hotaru C - Dark Red"), 0x12200, 0x12220, indexGarouAHotaru },
    { _T("Hotaru C - Blue"), 0x12220, 0x12240, indexGarouAHotaru },
    { _T("Hotaru C - Projectile1"), 0x12240, 0x12260 },
    { _T("Hotaru C - Projectile2"), 0x12260, 0x12280 },
    { _T("Hotaru C - Projectile3"), 0x12280, 0x122a0 },
    { _T("Hotaru C - Projectile4"), 0x122a0, 0x122c0 },
    { _T("Hotaru C - Projectile5"), 0x122c0, 0x122e0 },
    { _T("Hotaru C - Projectile6"), 0x122e0, 0x12300 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_D[] =
{
    { _T("Hotaru D - Main"), 0x12300, 0x12320, indexGarouAHotaru },
    { _T("Hotaru D - Line1"), 0x12320, 0x12340, indexGarouAHotaru },
    { _T("Hotaru D - Line2"), 0x12340, 0x12360, indexGarouAHotaru },
    { _T("Hotaru D - On Fire"), 0x12360, 0x12380, indexGarouAHotaru },
    { _T("Hotaru D - On Purple"), 0x12380, 0x123a0, indexGarouAHotaru },
    { _T("Hotaru D - Gold"), 0x123a0, 0x123c0, indexGarouAHotaru },
    { _T("Hotaru D - T.O.P."), 0x123c0, 0x123e0, indexGarouAHotaru },
    { _T("Hotaru D - Shade"), 0x123e0, 0x12400, indexGarouAHotaru },
    { _T("Hotaru D - Dark Red"), 0x12400, 0x12420, indexGarouAHotaru },
    { _T("Hotaru D - Blue"), 0x12420, 0x12440, indexGarouAHotaru },
    { _T("Hotaru D - Projectile1"), 0x12440, 0x12460 },
    { _T("Hotaru D - Projectile2"), 0x12460, 0x12480 },
    { _T("Hotaru D - Projectile3"), 0x12480, 0x124a0 },
    { _T("Hotaru D - Projectile4"), 0x124a0, 0x124c0 },
    { _T("Hotaru D - Projectile5"), 0x124c0, 0x124e0 },
    { _T("Hotaru D - Projectile6"), 0x124e0, 0x12500 },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_BOSS[] =
{
    { _T("Hotaru Boss? - Main"), 0x12500, 0x12520, indexGarouAHotaru },
    { _T("Hotaru Boss? - Line1"), 0x12520, 0x12540, indexGarouAHotaru },
    { _T("Hotaru Boss? - Line2"), 0x12540, 0x12560, indexGarouAHotaru },
    { _T("Hotaru Boss? - On Fire"), 0x12560, 0x12580, indexGarouAHotaru },
    { _T("Hotaru Boss? - On Purple"), 0x12580, 0x125a0, indexGarouAHotaru },
    { _T("Hotaru Boss? - Gold"), 0x125a0, 0x125c0, indexGarouAHotaru },
    { _T("Hotaru Boss? - T.O.P."), 0x125c0, 0x125e0, indexGarouAHotaru },
    { _T("Hotaru Boss? - Shade"), 0x125e0, 0x12600, indexGarouAHotaru },
    { _T("Hotaru Boss? - Dark Red"), 0x12600, 0x12620, indexGarouAHotaru },
    { _T("Hotaru Boss? - Blue"), 0x12620, 0x12640, indexGarouAHotaru },
    { _T("Hotaru Boss? - Projectile1"), 0x12640, 0x12660 },
    { _T("Hotaru Boss? - Projectile2"), 0x12660, 0x12680 },
    { _T("Hotaru Boss? - Projectile3"), 0x12680, 0x126a0 },
    { _T("Hotaru Boss? - Projectile4"), 0x126a0, 0x126c0 },
    { _T("Hotaru Boss? - Projectile5"), 0x126c0, 0x126e0 },
    { _T("Hotaru Boss? - Projectile6"), 0x126e0, 0x12700 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_A[] =
{
    { _T("Gato A - Main"), 0x12700, 0x12720, indexGarouAGato },
    { _T("Gato A - Line1"), 0x12720, 0x12740, indexGarouAGato },
    { _T("Gato A - Line2"), 0x12740, 0x12760, indexGarouAGato },
    { _T("Gato A - On Fire"), 0x12760, 0x12780, indexGarouAGato },
    { _T("Gato A - On Purple"), 0x12780, 0x127a0, indexGarouAGato },
    { _T("Gato A - Gold"), 0x127a0, 0x127c0, indexGarouAGato },
    { _T("Gato A - T.O.P."), 0x127c0, 0x127e0, indexGarouAGato },
    { _T("Gato A - Shade"), 0x127e0, 0x12800, indexGarouAGato },
    { _T("Gato A - Dark Red"), 0x12800, 0x12820, indexGarouAGato },
    { _T("Gato A - Blue"), 0x12820, 0x12840, indexGarouAGato },
    { _T("Gato A - Projectile1"), 0x12840, 0x12860 },
    { _T("Gato A - Projectile2"), 0x12860, 0x12880 },
    { _T("Gato A - Projectile3"), 0x12880, 0x128a0 },
    { _T("Gato A - Projectile4"), 0x128a0, 0x128c0 },
    { _T("Gato A - Projectile5"), 0x128c0, 0x128e0 },
    { _T("Gato A - Projectile6"), 0x128e0, 0x12900 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_B[] =
{
    { _T("Gato B - Main"), 0x12900, 0x12920, indexGarouAGato },
    { _T("Gato B - Line1"), 0x12920, 0x12940, indexGarouAGato },
    { _T("Gato B - Line2"), 0x12940, 0x12960, indexGarouAGato },
    { _T("Gato B - On Fire"), 0x12960, 0x12980, indexGarouAGato },
    { _T("Gato B - On Purple"), 0x12980, 0x129a0, indexGarouAGato },
    { _T("Gato B - Gold"), 0x129a0, 0x129c0, indexGarouAGato },
    { _T("Gato B - T.O.P."), 0x129c0, 0x129e0, indexGarouAGato },
    { _T("Gato B - Shade"), 0x129e0, 0x12a00, indexGarouAGato },
    { _T("Gato B - Dark Red"), 0x12a00, 0x12a20, indexGarouAGato },
    { _T("Gato B - Blue"), 0x12a20, 0x12a40, indexGarouAGato },
    { _T("Gato B - Projectile1"), 0x12a40, 0x12a60 },
    { _T("Gato B - Projectile2"), 0x12a60, 0x12a80 },
    { _T("Gato B - Projectile3"), 0x12a80, 0x12aa0 },
    { _T("Gato B - Projectile4"), 0x12aa0, 0x12ac0 },
    { _T("Gato B - Projectile5"), 0x12ac0, 0x12ae0 },
    { _T("Gato B - Projectile6"), 0x12ae0, 0x12b00 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_C[] =
{
    { _T("Gato C - Main"), 0x12b00, 0x12b20, indexGarouAGato },
    { _T("Gato C - Line1"), 0x12b20, 0x12b40, indexGarouAGato },
    { _T("Gato C - Line2"), 0x12b40, 0x12b60, indexGarouAGato },
    { _T("Gato C - On Fire"), 0x12b60, 0x12b80, indexGarouAGato },
    { _T("Gato C - On Purple"), 0x12b80, 0x12ba0, indexGarouAGato },
    { _T("Gato C - Gold"), 0x12ba0, 0x12bc0, indexGarouAGato },
    { _T("Gato C - T.O.P."), 0x12bc0, 0x12be0, indexGarouAGato },
    { _T("Gato C - Shade"), 0x12be0, 0x12c00, indexGarouAGato },
    { _T("Gato C - Dark Red"), 0x12c00, 0x12c20, indexGarouAGato },
    { _T("Gato C - Blue"), 0x12c20, 0x12c40, indexGarouAGato },
    { _T("Gato C - Projectile1"), 0x12c40, 0x12c60 },
    { _T("Gato C - Projectile2"), 0x12c60, 0x12c80 },
    { _T("Gato C - Projectile3"), 0x12c80, 0x12ca0 },
    { _T("Gato C - Projectile4"), 0x12ca0, 0x12cc0 },
    { _T("Gato C - Projectile5"), 0x12cc0, 0x12ce0 },
    { _T("Gato C - Projectile6"), 0x12ce0, 0x12d00 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_D[] =
{
    { _T("Gato D - Main"), 0x12d00, 0x12d20, indexGarouAGato },
    { _T("Gato D - Line1"), 0x12d20, 0x12d40, indexGarouAGato },
    { _T("Gato D - Line2"), 0x12d40, 0x12d60, indexGarouAGato },
    { _T("Gato D - On Fire"), 0x12d60, 0x12d80, indexGarouAGato },
    { _T("Gato D - On Purple"), 0x12d80, 0x12da0, indexGarouAGato },
    { _T("Gato D - Gold"), 0x12da0, 0x12dc0, indexGarouAGato },
    { _T("Gato D - T.O.P."), 0x12dc0, 0x12de0, indexGarouAGato },
    { _T("Gato D - Shade"), 0x12de0, 0x12e00, indexGarouAGato },
    { _T("Gato D - Dark Red"), 0x12e00, 0x12e20, indexGarouAGato },
    { _T("Gato D - Blue"), 0x12e20, 0x12e40, indexGarouAGato },
    { _T("Gato D - Projectile1"), 0x12e40, 0x12e60 },
    { _T("Gato D - Projectile2"), 0x12e60, 0x12e80 },
    { _T("Gato D - Projectile3"), 0x12e80, 0x12ea0 },
    { _T("Gato D - Projectile4"), 0x12ea0, 0x12ec0 },
    { _T("Gato D - Projectile5"), 0x12ec0, 0x12ee0 },
    { _T("Gato D - Projectile6"), 0x12ee0, 0x12f00 },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_BOSS[] =
{
    { _T("Gato Boss? - Main"), 0x12f00, 0x12f20, indexGarouAGato },
    { _T("Gato Boss? - Line1"), 0x12f20, 0x12f40, indexGarouAGato },
    { _T("Gato Boss? - Line2"), 0x12f40, 0x12f60, indexGarouAGato },
    { _T("Gato Boss? - On Fire"), 0x12f60, 0x12f80, indexGarouAGato },
    { _T("Gato Boss? - On Purple"), 0x12f80, 0x12fa0, indexGarouAGato },
    { _T("Gato Boss? - Gold"), 0x12fa0, 0x12fc0, indexGarouAGato },
    { _T("Gato Boss? - T.O.P."), 0x12fc0, 0x12fe0, indexGarouAGato },
    { _T("Gato Boss? - Shade"), 0x12fe0, 0x13000, indexGarouAGato },
    { _T("Gato Boss? - Dark Red"), 0x13000, 0x13020, indexGarouAGato },
    { _T("Gato Boss? - Blue"), 0x13020, 0x13040, indexGarouAGato },
    { _T("Gato Boss? - Projectile1"), 0x13040, 0x13060 },
    { _T("Gato Boss? - Projectile2"), 0x13060, 0x13080 },
    { _T("Gato Boss? - Projectile3"), 0x13080, 0x130a0 },
    { _T("Gato Boss? - Projectile4"), 0x130a0, 0x130c0 },
    { _T("Gato Boss? - Projectile5"), 0x130c0, 0x130e0 },
    { _T("Gato Boss? - Projectile6"), 0x130e0, 0x13100 },
};


const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_A[] =
{
    { _T("Kevin A - Main"), 0x13100, 0x13120, indexGarouAKevin },
    { _T("Kevin A - Line1"), 0x13120, 0x13140, indexGarouAKevin },
    { _T("Kevin A - Line2"), 0x13140, 0x13160, indexGarouAKevin },
    { _T("Kevin A - On Fire"), 0x13160, 0x13180, indexGarouAKevin },
    { _T("Kevin A - On Purple"), 0x13180, 0x131a0, indexGarouAKevin },
    { _T("Kevin A - Gold"), 0x131a0, 0x131c0, indexGarouAKevin },
    { _T("Kevin A - T.O.P."), 0x131c0, 0x131e0, indexGarouAKevin },
    { _T("Kevin A - Shade"), 0x131e0, 0x13200, indexGarouAKevin },
    { _T("Kevin A - Dark Red"), 0x13200, 0x13220, indexGarouAKevin },
    { _T("Kevin A - Blue"), 0x13220, 0x13240, indexGarouAKevin },
    { _T("Kevin A - Projectile1"), 0x13240, 0x13260 },
    { _T("Kevin A - Projectile2"), 0x13260, 0x13280 },
    { _T("Kevin A - Projectile3"), 0x13280, 0x132a0 },
    { _T("Kevin A - Projectile4"), 0x132a0, 0x132c0 },
    { _T("Kevin A - Projectile5"), 0x132c0, 0x132e0 },
    { _T("Kevin A - Projectile6"), 0x132e0, 0x13300 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_B[] =
{
    { _T("Kevin B - Main"), 0x13300, 0x13320, indexGarouAKevin },
    { _T("Kevin B - Line1"), 0x13320, 0x13340, indexGarouAKevin },
    { _T("Kevin B - Line2"), 0x13340, 0x13360, indexGarouAKevin },
    { _T("Kevin B - On Fire"), 0x13360, 0x13380, indexGarouAKevin },
    { _T("Kevin B - On Purple"), 0x13380, 0x133a0, indexGarouAKevin },
    { _T("Kevin B - Gold"), 0x133a0, 0x133c0, indexGarouAKevin },
    { _T("Kevin B - T.O.P."), 0x133c0, 0x133e0, indexGarouAKevin },
    { _T("Kevin B - Shade"), 0x133e0, 0x13400, indexGarouAKevin },
    { _T("Kevin B - Dark Red"), 0x13400, 0x13420, indexGarouAKevin },
    { _T("Kevin B - Blue"), 0x13420, 0x13440, indexGarouAKevin },
    { _T("Kevin B - Projectile1"), 0x13440, 0x13460 },
    { _T("Kevin B - Projectile2"), 0x13460, 0x13480 },
    { _T("Kevin B - Projectile3"), 0x13480, 0x134a0 },
    { _T("Kevin B - Projectile4"), 0x134a0, 0x134c0 },
    { _T("Kevin B - Projectile5"), 0x134c0, 0x134e0 },
    { _T("Kevin B - Projectile6"), 0x134e0, 0x13500 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_C[] =
{
    { _T("Kevin C - Main"), 0x13500, 0x13520, indexGarouAKevin },
    { _T("Kevin C - Line1"), 0x13520, 0x13540, indexGarouAKevin },
    { _T("Kevin C - Line2"), 0x13540, 0x13560, indexGarouAKevin },
    { _T("Kevin C - On Fire"), 0x13560, 0x13580, indexGarouAKevin },
    { _T("Kevin C - On Purple"), 0x13580, 0x135a0, indexGarouAKevin },
    { _T("Kevin C - Gold"), 0x135a0, 0x135c0, indexGarouAKevin },
    { _T("Kevin C - T.O.P."), 0x135c0, 0x135e0, indexGarouAKevin },
    { _T("Kevin C - Shade"), 0x135e0, 0x13600, indexGarouAKevin },
    { _T("Kevin C - Dark Red"), 0x13600, 0x13620, indexGarouAKevin },
    { _T("Kevin C - Blue"), 0x13620, 0x13640, indexGarouAKevin },
    { _T("Kevin C - Projectile1"), 0x13640, 0x13660 },
    { _T("Kevin C - Projectile2"), 0x13660, 0x13680 },
    { _T("Kevin C - Projectile3"), 0x13680, 0x136a0 },
    { _T("Kevin C - Projectile4"), 0x136a0, 0x136c0 },
    { _T("Kevin C - Projectile5"), 0x136c0, 0x136e0 },
    { _T("Kevin C - Projectile6"), 0x136e0, 0x13700 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_D[] =
{
    { _T("Kevin D - Main"), 0x13700, 0x13720, indexGarouAKevin },
    { _T("Kevin D - Line1"), 0x13720, 0x13740, indexGarouAKevin },
    { _T("Kevin D - Line2"), 0x13740, 0x13760, indexGarouAKevin },
    { _T("Kevin D - On Fire"), 0x13760, 0x13780, indexGarouAKevin },
    { _T("Kevin D - On Purple"), 0x13780, 0x137a0, indexGarouAKevin },
    { _T("Kevin D - Gold"), 0x137a0, 0x137c0, indexGarouAKevin },
    { _T("Kevin D - T.O.P."), 0x137c0, 0x137e0, indexGarouAKevin },
    { _T("Kevin D - Shade"), 0x137e0, 0x13800, indexGarouAKevin },
    { _T("Kevin D - Dark Red"), 0x13800, 0x13820, indexGarouAKevin },
    { _T("Kevin D - Blue"), 0x13820, 0x13840, indexGarouAKevin },
    { _T("Kevin D - Projectile1"), 0x13840, 0x13860 },
    { _T("Kevin D - Projectile2"), 0x13860, 0x13880 },
    { _T("Kevin D - Projectile3"), 0x13880, 0x138a0 },
    { _T("Kevin D - Projectile4"), 0x138a0, 0x138c0 },
    { _T("Kevin D - Projectile5"), 0x138c0, 0x138e0 },
    { _T("Kevin D - Projectile6"), 0x138e0, 0x13900 },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_BOSS[] =
{
    { _T("Kevin Boss? - Main"), 0x13900, 0x13920, indexGarouAKevin },
    { _T("Kevin Boss? - Line1"), 0x13920, 0x13940, indexGarouAKevin },
    { _T("Kevin Boss? - Line2"), 0x13940, 0x13960, indexGarouAKevin },
    { _T("Kevin Boss? - On Fire"), 0x13960, 0x13980, indexGarouAKevin },
    { _T("Kevin Boss? - On Purple"), 0x13980, 0x139a0, indexGarouAKevin },
    { _T("Kevin Boss? - Gold"), 0x139a0, 0x139c0, indexGarouAKevin },
    { _T("Kevin Boss? - T.O.P."), 0x139c0, 0x139e0, indexGarouAKevin },
    { _T("Kevin Boss? - Shade"), 0x139e0, 0x13a00, indexGarouAKevin },
    { _T("Kevin Boss? - Dark Red"), 0x13a00, 0x13a20, indexGarouAKevin },
    { _T("Kevin Boss? - Blue"), 0x13a20, 0x13a40, indexGarouAKevin },
    { _T("Kevin Boss? - Projectile1"), 0x13a40, 0x13a60 },
    { _T("Kevin Boss? - Projectile2"), 0x13a60, 0x13a80 },
    { _T("Kevin Boss? - Projectile3"), 0x13a80, 0x13aa0 },
    { _T("Kevin Boss? - Projectile4"), 0x13aa0, 0x13ac0 },
    { _T("Kevin Boss? - Projectile5"), 0x13ac0, 0x13ae0 },
    { _T("Kevin Boss? - Projectile6"), 0x13ae0, 0x13b00 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_A[] =
{
    { _T("Grant A - Main"), 0x13b00, 0x13b20 },
    { _T("Grant A - Line1"), 0x13b20, 0x13b40 },
    { _T("Grant A - Line2"), 0x13b40, 0x13b60 },
    { _T("Grant A - On Fire"), 0x13b60, 0x13b80 },
    { _T("Grant A - On Purple"), 0x13b80, 0x13ba0 },
    { _T("Grant A - Gold"), 0x13ba0, 0x13bc0 },
    { _T("Grant A - T.O.P."), 0x13bc0, 0x13be0 },
    { _T("Grant A - Shade"), 0x13be0, 0x13c00 },
    { _T("Grant A - Dark Red"), 0x13c00, 0x13c20 },
    { _T("Grant A - Blue"), 0x13c20, 0x13c40 },
    { _T("Grant A - Projectile1"), 0x13c40, 0x13c60 },
    { _T("Grant A - Projectile2"), 0x13c60, 0x13c80 },
    { _T("Grant A - Projectile3"), 0x13c80, 0x13ca0 },
    { _T("Grant A - Projectile4"), 0x13ca0, 0x13cc0 },
    { _T("Grant A - Projectile5"), 0x13cc0, 0x13ce0 },
    { _T("Grant A - Projectile6"), 0x13ce0, 0x13d00 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_B[] =
{
    { _T("Grant B - Main"), 0x13d00, 0x13d20 },
    { _T("Grant B - Line1"), 0x13d20, 0x13d40 },
    { _T("Grant B - Line2"), 0x13d40, 0x13d60 },
    { _T("Grant B - On Fire"), 0x13d60, 0x13d80 },
    { _T("Grant B - On Purple"), 0x13d80, 0x13da0 },
    { _T("Grant B - Gold"), 0x13da0, 0x13dc0 },
    { _T("Grant B - T.O.P."), 0x13dc0, 0x13de0 },
    { _T("Grant B - Shade"), 0x13de0, 0x13e00 },
    { _T("Grant B - Dark Red"), 0x13e00, 0x13e20 },
    { _T("Grant B - Blue"), 0x13e20, 0x13e40 },
    { _T("Grant B - Projectile1"), 0x13e40, 0x13e60 },
    { _T("Grant B - Projectile2"), 0x13e60, 0x13e80 },
    { _T("Grant B - Projectile3"), 0x13e80, 0x13ea0 },
    { _T("Grant B - Projectile4"), 0x13ea0, 0x13ec0 },
    { _T("Grant B - Projectile5"), 0x13ec0, 0x13ee0 },
    { _T("Grant B - Projectile6"), 0x13ee0, 0x13f00 }
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_C[] =
{
    { _T("Grant C - Main"), 0x13f00, 0x13f20 },
    { _T("Grant C - Line1"), 0x13f20, 0x13f40 },
    { _T("Grant C - Line2"), 0x13f40, 0x13f60 },
    { _T("Grant C - On Fire"), 0x13f60, 0x13f80 },
    { _T("Grant C - On Purple"), 0x13f80, 0x13fa0 },
    { _T("Grant C - Gold"), 0x13fa0, 0x13fc0 },
    { _T("Grant C - T.O.P."), 0x13fc0, 0x13fe0 },
    { _T("Grant C - Shade"), 0x13fe0, 0x14000 },
    { _T("Grant C - Dark Red"), 0x14000, 0x14020 },
    { _T("Grant C - Blue"), 0x14020, 0x14040 },
    { _T("Grant C - Projectile1"), 0x14040, 0x14060 },
    { _T("Grant C - Projectile2"), 0x14060, 0x14080 },
    { _T("Grant C - Projectile3"), 0x14080, 0x140a0 },
    { _T("Grant C - Projectile4"), 0x140a0, 0x140c0 },
    { _T("Grant C - Projectile5"), 0x140c0, 0x140e0 },
    { _T("Grant C - Projectile6"), 0x140e0, 0x14100 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_D[] =
{
    { _T("Grant D - Main"), 0x14100, 0x14120 },
    { _T("Grant D - Line1"), 0x14120, 0x14140 },
    { _T("Grant D - Line2"), 0x14140, 0x14160 },
    { _T("Grant D - On Fire"), 0x14160, 0x14180 },
    { _T("Grant D - On Purple"), 0x14180, 0x141a0 },
    { _T("Grant D - Gold"), 0x141a0, 0x141c0 },
    { _T("Grant D - T.O.P."), 0x141c0, 0x141e0 },
    { _T("Grant D - Shade"), 0x141e0, 0x14200 },
    { _T("Grant D - Dark Red"), 0x14200, 0x14220 },
    { _T("Grant D - Blue"), 0x14220, 0x14240 },
    { _T("Grant D - Projectile1"), 0x14240, 0x14260 },
    { _T("Grant D - Projectile2"), 0x14260, 0x14280 },
    { _T("Grant D - Projectile3"), 0x14280, 0x142a0 },
    { _T("Grant D - Projectile4"), 0x142a0, 0x142c0 },
    { _T("Grant D - Projectile5"), 0x142c0, 0x142e0 },
    { _T("Grant D - Projectile6"), 0x142e0, 0x14300 },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_BOSS[] =
{
    { _T("Grant Boss? - Main"), 0x14300, 0x14320 },
    { _T("Grant Boss? - Line1"), 0x14320, 0x14340 },
    { _T("Grant Boss? - Line2"), 0x14340, 0x14360 },
    { _T("Grant Boss? - On Fire"), 0x14360, 0x14380 },
    { _T("Grant Boss? - On Purple"), 0x14380, 0x143a0 },
    { _T("Grant Boss? - Gold"), 0x143a0, 0x143c0 },
    { _T("Grant Boss? - T.O.P."), 0x143c0, 0x143e0 },
    { _T("Grant Boss? - Shade"), 0x143e0, 0x14400 },
    { _T("Grant Boss? - Dark Red"), 0x14400, 0x14420 },
    { _T("Grant Boss? - Blue"), 0x14420, 0x14440 },
    { _T("Grant Boss? - Projectile1"), 0x14440, 0x14460 },
    { _T("Grant Boss? - Projectile2"), 0x14460, 0x14480 },
    { _T("Grant Boss? - Projectile3"), 0x14480, 0x144a0 },
    { _T("Grant Boss? - Projectile4"), 0x144a0, 0x144c0 },
    { _T("Grant Boss? - Projectile5"), 0x144c0, 0x144e0 },
    { _T("Grant Boss? - Projectile6"), 0x144e0, 0x14500 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_A[] =
{
    { _T("B.Jenet A - Main"), 0x14500, 0x14520, indexGarouABJennet },
    { _T("B.Jenet A - Line1"), 0x14520, 0x14540, indexGarouABJennet },
    { _T("B.Jenet A - Line2"), 0x14540, 0x14560, indexGarouABJennet },
    { _T("B.Jenet A - On Fire"), 0x14560, 0x14580, indexGarouABJennet },
    { _T("B.Jenet A - On Purple"), 0x14580, 0x145a0, indexGarouABJennet },
    { _T("B.Jenet A - Gold"), 0x145a0, 0x145c0, indexGarouABJennet },
    { _T("B.Jenet A - T.O.P."), 0x145c0, 0x145e0, indexGarouABJennet },
    { _T("B.Jenet A - Shade"), 0x145e0, 0x14600, indexGarouABJennet },
    { _T("B.Jenet A - Dark Red"), 0x14600, 0x14620, indexGarouABJennet },
    { _T("B.Jenet A - Blue"), 0x14620, 0x14640, indexGarouABJennet },
    { _T("B.Jenet A - Projectile1"), 0x14640, 0x14660 },
    { _T("B.Jenet A - Projectile2"), 0x14660, 0x14680 },
    { _T("B.Jenet A - Projectile3"), 0x14680, 0x146a0 },
    { _T("B.Jenet A - Projectile4"), 0x146a0, 0x146c0 },
    { _T("B.Jenet A - Projectile5"), 0x146c0, 0x146e0 },
    { _T("B.Jenet A - Projectile6"), 0x146e0, 0x14700 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_B[] =
{
    { _T("B.Jenet B - Main"), 0x14700, 0x14720, indexGarouABJennet },
    { _T("B.Jenet B - Line1"), 0x14720, 0x14740, indexGarouABJennet },
    { _T("B.Jenet B - Line2"), 0x14740, 0x14760, indexGarouABJennet },
    { _T("B.Jenet B - On Fire"), 0x14760, 0x14780, indexGarouABJennet },
    { _T("B.Jenet B - On Purple"), 0x14780, 0x147a0, indexGarouABJennet },
    { _T("B.Jenet B - Gold"), 0x147a0, 0x147c0, indexGarouABJennet },
    { _T("B.Jenet B - T.O.P."), 0x147c0, 0x147e0, indexGarouABJennet },
    { _T("B.Jenet B - Shade"), 0x147e0, 0x14800, indexGarouABJennet },
    { _T("B.Jenet B - Dark Red"), 0x14800, 0x14820, indexGarouABJennet },
    { _T("B.Jenet B - Blue"), 0x14820, 0x14840, indexGarouABJennet },
    { _T("B.Jenet B - Projectile1"), 0x14840, 0x14860 },
    { _T("B.Jenet B - Projectile2"), 0x14860, 0x14880 },
    { _T("B.Jenet B - Projectile3"), 0x14880, 0x148a0 },
    { _T("B.Jenet B - Projectile4"), 0x148a0, 0x148c0 },
    { _T("B.Jenet B - Projectile5"), 0x148c0, 0x148e0 },
    { _T("B.Jenet B - Projectile6"), 0x148e0, 0x14900 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_C[] =
{
    { _T("B.Jenet C - Main"), 0x14900, 0x14920, indexGarouABJennet },
    { _T("B.Jenet C - Line1"), 0x14920, 0x14940, indexGarouABJennet },
    { _T("B.Jenet C - Line2"), 0x14940, 0x14960, indexGarouABJennet },
    { _T("B.Jenet C - On Fire"), 0x14960, 0x14980, indexGarouABJennet },
    { _T("B.Jenet C - On Purple"), 0x14980, 0x149a0, indexGarouABJennet },
    { _T("B.Jenet C - Gold"), 0x149a0, 0x149c0, indexGarouABJennet },
    { _T("B.Jenet C - T.O.P."), 0x149c0, 0x149e0, indexGarouABJennet },
    { _T("B.Jenet C - Shade"), 0x149e0, 0x14a00, indexGarouABJennet },
    { _T("B.Jenet C - Dark Red"), 0x14a00, 0x14a20, indexGarouABJennet },
    { _T("B.Jenet C - Blue"), 0x14a20, 0x14a40, indexGarouABJennet },
    { _T("B.Jenet C - Projectile1"), 0x14a40, 0x14a60 },
    { _T("B.Jenet C - Projectile2"), 0x14a60, 0x14a80 },
    { _T("B.Jenet C - Projectile3"), 0x14a80, 0x14aa0 },
    { _T("B.Jenet C - Projectile4"), 0x14aa0, 0x14ac0 },
    { _T("B.Jenet C - Projectile5"), 0x14ac0, 0x14ae0 },
    { _T("B.Jenet C - Projectile6"), 0x14ae0, 0x14b00 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_D[] =
{
    { _T("B.Jenet D - Main"), 0x14b00, 0x14b20, indexGarouABJennet },
    { _T("B.Jenet D - Line1"), 0x14b20, 0x14b40, indexGarouABJennet },
    { _T("B.Jenet D - Line2"), 0x14b40, 0x14b60, indexGarouABJennet },
    { _T("B.Jenet D - On Fire"), 0x14b60, 0x14b80, indexGarouABJennet },
    { _T("B.Jenet D - On Purple"), 0x14b80, 0x14ba0, indexGarouABJennet },
    { _T("B.Jenet D - Gold"), 0x14ba0, 0x14bc0, indexGarouABJennet },
    { _T("B.Jenet D - T.O.P."), 0x14bc0, 0x14be0, indexGarouABJennet },
    { _T("B.Jenet D - Shade"), 0x14be0, 0x14c00, indexGarouABJennet },
    { _T("B.Jenet D - Dark Red"), 0x14c00, 0x14c20, indexGarouABJennet },
    { _T("B.Jenet D - Blue"), 0x14c20, 0x14c40, indexGarouABJennet },
    { _T("B.Jenet D - Projectile1"), 0x14c40, 0x14c60 },
    { _T("B.Jenet D - Projectile2"), 0x14c60, 0x14c80 },
    { _T("B.Jenet D - Projectile3"), 0x14c80, 0x14ca0 },
    { _T("B.Jenet D - Projectile4"), 0x14ca0, 0x14cc0 },
    { _T("B.Jenet D - Projectile5"), 0x14cc0, 0x14ce0 },
    { _T("B.Jenet D - Projectile6"), 0x14ce0, 0x14d00 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_BOSS[] =
{
    { _T("B.Jenet Boss? - Main"), 0x14d00, 0x14d20, indexGarouABJennet },
    { _T("B.Jenet Boss? - Line1"), 0x14d20, 0x14d40, indexGarouABJennet },
    { _T("B.Jenet Boss? - Line2"), 0x14d40, 0x14d60, indexGarouABJennet },
    { _T("B.Jenet Boss? - On Fire"), 0x14d60, 0x14d80, indexGarouABJennet },
    { _T("B.Jenet Boss? - On Purple"), 0x14d80, 0x14da0, indexGarouABJennet },
    { _T("B.Jenet Boss? - Gold"), 0x14da0, 0x14dc0, indexGarouABJennet },
    { _T("B.Jenet Boss? - T.O.P."), 0x14dc0, 0x14de0, indexGarouABJennet },
    { _T("B.Jenet Boss? - Shade"), 0x14de0, 0x14e00, indexGarouABJennet },
    { _T("B.Jenet Boss? - Dark Red"), 0x14e00, 0x14e20, indexGarouABJennet },
    { _T("B.Jenet Boss? - Blue"), 0x14e20, 0x14e40, indexGarouABJennet },
    { _T("B.Jenet Boss? - Projectile1"), 0x14e40, 0x14e60 },
    { _T("B.Jenet Boss? - Projectile2"), 0x14e60, 0x14e80 },
    { _T("B.Jenet Boss? - Projectile3"), 0x14e80, 0x14ea0 },
    { _T("B.Jenet Boss? - Projectile4"), 0x14ea0, 0x14ec0 },
    { _T("B.Jenet Boss? - Projectile5"), 0x14ec0, 0x14ee0 },
    { _T("B.Jenet Boss? - Projectile6"), 0x14ee0, 0x14f00 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_A[] =
{
    { _T("Hokutomaru A - Main"), 0x14f00, 0x14f20, indexGarouAHokutomaru },
    { _T("Hokutomaru A - Line1"), 0x14f20, 0x14f40, indexGarouAHokutomaru },
    { _T("Hokutomaru A - Line2"), 0x14f40, 0x14f60, indexGarouAHokutomaru },
    { _T("Hokutomaru A - On Fire"), 0x14f60, 0x14f80, indexGarouAHokutomaru },
    { _T("Hokutomaru A - On Purple"), 0x14f80, 0x14fa0, indexGarouAHokutomaru },
    { _T("Hokutomaru A - Gold"), 0x14fa0, 0x14fc0, indexGarouAHokutomaru },
    { _T("Hokutomaru A - T.O.P."), 0x14fc0, 0x14fe0, indexGarouAHokutomaru },
    { _T("Hokutomaru A - Shade"), 0x14fe0, 0x15000, indexGarouAHokutomaru },
    { _T("Hokutomaru A - Dark Red"), 0x15000, 0x15020, indexGarouAHokutomaru },
    { _T("Hokutomaru A - Blue"), 0x15020, 0x15040, indexGarouAHokutomaru },
    { _T("Hokutomaru A - Projectile1"), 0x15040, 0x15060 },
    { _T("Hokutomaru A - Projectile2"), 0x15060, 0x15080 },
    { _T("Hokutomaru A - Projectile3"), 0x15080, 0x150a0 },
    { _T("Hokutomaru A - Projectile4"), 0x150a0, 0x150c0 },
    { _T("Hokutomaru A - Projectile5"), 0x150c0, 0x150e0 },
    { _T("Hokutomaru A - Projectile6"), 0x150e0, 0x15100 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_B[] =
{
    { _T("Hokutomaru B - Main"), 0x15100, 0x15120, indexGarouAHokutomaru },
    { _T("Hokutomaru B - Line1"), 0x15120, 0x15140, indexGarouAHokutomaru },
    { _T("Hokutomaru B - Line2"), 0x15140, 0x15160, indexGarouAHokutomaru },
    { _T("Hokutomaru B - On Fire"), 0x15160, 0x15180, indexGarouAHokutomaru },
    { _T("Hokutomaru B - On Purple"), 0x15180, 0x151a0, indexGarouAHokutomaru },
    { _T("Hokutomaru B - Gold"), 0x151a0, 0x151c0, indexGarouAHokutomaru },
    { _T("Hokutomaru B - T.O.P."), 0x151c0, 0x151e0, indexGarouAHokutomaru },
    { _T("Hokutomaru B - Shade"), 0x151e0, 0x15200, indexGarouAHokutomaru },
    { _T("Hokutomaru B - Dark Red"), 0x15200, 0x15220, indexGarouAHokutomaru },
    { _T("Hokutomaru B - Blue"), 0x15220, 0x15240, indexGarouAHokutomaru },
    { _T("Hokutomaru B - Projectile1"), 0x15240, 0x15260 },
    { _T("Hokutomaru B - Projectile2"), 0x15260, 0x15280 },
    { _T("Hokutomaru B - Projectile3"), 0x15280, 0x152a0 },
    { _T("Hokutomaru B - Projectile4"), 0x152a0, 0x152c0 },
    { _T("Hokutomaru B - Projectile5"), 0x152c0, 0x152e0 },
    { _T("Hokutomaru B - Projectile6"), 0x152e0, 0x15300 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_C[] =
{
    { _T("Hokutomaru C - Main"), 0x15300, 0x15320, indexGarouAHokutomaru },
    { _T("Hokutomaru C - Line1"), 0x15320, 0x15340, indexGarouAHokutomaru },
    { _T("Hokutomaru C - Line2"), 0x15340, 0x15360, indexGarouAHokutomaru },
    { _T("Hokutomaru C - On Fire"), 0x15360, 0x15380, indexGarouAHokutomaru },
    { _T("Hokutomaru C - On Purple"), 0x15380, 0x153a0, indexGarouAHokutomaru },
    { _T("Hokutomaru C - Gold"), 0x153a0, 0x153c0, indexGarouAHokutomaru },
    { _T("Hokutomaru C - T.O.P."), 0x153c0, 0x153e0, indexGarouAHokutomaru },
    { _T("Hokutomaru C - Shade"), 0x153e0, 0x15400, indexGarouAHokutomaru },
    { _T("Hokutomaru C - Dark Red"), 0x15400, 0x15420, indexGarouAHokutomaru },
    { _T("Hokutomaru C - Blue"), 0x15420, 0x15440, indexGarouAHokutomaru },
    { _T("Hokutomaru C - Projectile1"), 0x15440, 0x15460 },
    { _T("Hokutomaru C - Projectile2"), 0x15460, 0x15480 },
    { _T("Hokutomaru C - Projectile3"), 0x15480, 0x154a0 },
    { _T("Hokutomaru C - Projectile4"), 0x154a0, 0x154c0 },
    { _T("Hokutomaru C - Projectile5"), 0x154c0, 0x154e0 },
    { _T("Hokutomaru C - Projectile6"), 0x154e0, 0x15500 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_D[] =
{
    { _T("Hokutomaru D - Main"), 0x15500, 0x15520, indexGarouAHokutomaru },
    { _T("Hokutomaru D - Line1"), 0x15520, 0x15540, indexGarouAHokutomaru },
    { _T("Hokutomaru D - Line2"), 0x15540, 0x15560, indexGarouAHokutomaru },
    { _T("Hokutomaru D - On Fire"), 0x15560, 0x15580, indexGarouAHokutomaru },
    { _T("Hokutomaru D - On Purple"), 0x15580, 0x155a0, indexGarouAHokutomaru },
    { _T("Hokutomaru D - Gold"), 0x155a0, 0x155c0, indexGarouAHokutomaru },
    { _T("Hokutomaru D - T.O.P."), 0x155c0, 0x155e0, indexGarouAHokutomaru },
    { _T("Hokutomaru D - Shade"), 0x155e0, 0x15600, indexGarouAHokutomaru },
    { _T("Hokutomaru D - Dark Red"), 0x15600, 0x15620, indexGarouAHokutomaru },
    { _T("Hokutomaru D - Blue"), 0x15620, 0x15640, indexGarouAHokutomaru },
    { _T("Hokutomaru D - Projectile1"), 0x15640, 0x15660 },
    { _T("Hokutomaru D - Projectile2"), 0x15660, 0x15680 },
    { _T("Hokutomaru D - Projectile3"), 0x15680, 0x156a0 },
    { _T("Hokutomaru D - Projectile4"), 0x156a0, 0x156c0 },
    { _T("Hokutomaru D - Projectile5"), 0x156c0, 0x156e0 },
    { _T("Hokutomaru D - Projectile6"), 0x156e0, 0x15700 },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_BOSS[] =
{
    { _T("Hokutomaru Boss? - Main"), 0x15700, 0x15720, indexGarouAHokutomaru },
    { _T("Hokutomaru Boss? - Line1"), 0x15720, 0x15740, indexGarouAHokutomaru },
    { _T("Hokutomaru Boss? - Line2"), 0x15740, 0x15760, indexGarouAHokutomaru },
    { _T("Hokutomaru Boss? - On Fire"), 0x15760, 0x15780, indexGarouAHokutomaru },
    { _T("Hokutomaru Boss? - On Purple"), 0x15780, 0x157a0, indexGarouAHokutomaru },
    { _T("Hokutomaru Boss? - Gold"), 0x157a0, 0x157c0, indexGarouAHokutomaru },
    { _T("Hokutomaru Boss? - T.O.P."), 0x157c0, 0x157e0, indexGarouAHokutomaru },
    { _T("Hokutomaru Boss? - Shade"), 0x157e0, 0x15800, indexGarouAHokutomaru },
    { _T("Hokutomaru Boss? - Dark Red"), 0x15800, 0x15820, indexGarouAHokutomaru },
    { _T("Hokutomaru Boss? - Blue"), 0x15820, 0x15840, indexGarouAHokutomaru },
    { _T("Hokutomaru Boss? - Projectile1"), 0x15840, 0x15860 },
    { _T("Hokutomaru Boss? - Projectile2"), 0x15860, 0x15880 },
    { _T("Hokutomaru Boss? - Projectile3"), 0x15880, 0x158a0 },
    { _T("Hokutomaru Boss? - Projectile4"), 0x158a0, 0x158c0 },
    { _T("Hokutomaru Boss? - Projectile5"), 0x158c0, 0x158e0 },
    { _T("Hokutomaru Boss? - Projectile6"), 0x158e0, 0x15900 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_A[] =
{
    { _T("Freeman A - Main"), 0x15900, 0x15920, indexGarouAFreeman },
    { _T("Freeman A - Line1"), 0x15920, 0x15940, indexGarouAFreeman },
    { _T("Freeman A - Line2"), 0x15940, 0x15960, indexGarouAFreeman },
    { _T("Freeman A - On Fire"), 0x15960, 0x15980, indexGarouAFreeman },
    { _T("Freeman A - On Purple"), 0x15980, 0x159a0, indexGarouAFreeman },
    { _T("Freeman A - Gold"), 0x159a0, 0x159c0, indexGarouAFreeman },
    { _T("Freeman A - T.O.P."), 0x159c0, 0x159e0, indexGarouAFreeman },
    { _T("Freeman A - Shade"), 0x159e0, 0x15a00, indexGarouAFreeman },
    { _T("Freeman A - Dark Red"), 0x15a00, 0x15a20, indexGarouAFreeman },
    { _T("Freeman A - Blue"), 0x15a20, 0x15a40, indexGarouAFreeman },
    { _T("Freeman A - Projectile1"), 0x15a40, 0x15a60 },
    { _T("Freeman A - Projectile2"), 0x15a60, 0x15a80 },
    { _T("Freeman A - Projectile3"), 0x15a80, 0x15aa0 },
    { _T("Freeman A - Projectile4"), 0x15aa0, 0x15ac0 },
    { _T("Freeman A - Projectile5"), 0x15ac0, 0x15ae0 },
    { _T("Freeman A - Projectile6"), 0x15ae0, 0x15b00 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_B[] =
{
    { _T("Freeman B - Main"), 0x15b00, 0x15b20, indexGarouAFreeman },
    { _T("Freeman B - Line1"), 0x15b20, 0x15b40, indexGarouAFreeman },
    { _T("Freeman B - Line2"), 0x15b40, 0x15b60, indexGarouAFreeman },
    { _T("Freeman B - On Fire"), 0x15b60, 0x15b80, indexGarouAFreeman },
    { _T("Freeman B - On Purple"), 0x15b80, 0x15ba0, indexGarouAFreeman },
    { _T("Freeman B - Gold"), 0x15ba0, 0x15bc0, indexGarouAFreeman },
    { _T("Freeman B - T.O.P."), 0x15bc0, 0x15be0, indexGarouAFreeman },
    { _T("Freeman B - Shade"), 0x15be0, 0x15c00, indexGarouAFreeman },
    { _T("Freeman B - Dark Red"), 0x15c00, 0x15c20, indexGarouAFreeman },
    { _T("Freeman B - Blue"), 0x15c20, 0x15c40, indexGarouAFreeman },
    { _T("Freeman B - Projectile1"), 0x15c40, 0x15c60 },
    { _T("Freeman B - Projectile2"), 0x15c60, 0x15c80 },
    { _T("Freeman B - Projectile3"), 0x15c80, 0x15ca0 },
    { _T("Freeman B - Projectile4"), 0x15ca0, 0x15cc0 },
    { _T("Freeman B - Projectile5"), 0x15cc0, 0x15ce0 },
    { _T("Freeman B - Projectile6"), 0x15ce0, 0x15d00 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_C[] =
{
    { _T("Freeman C - Main"), 0x15d00, 0x15d20, indexGarouAFreeman },
    { _T("Freeman C - Line1"), 0x15d20, 0x15d40, indexGarouAFreeman },
    { _T("Freeman C - Line2"), 0x15d40, 0x15d60, indexGarouAFreeman },
    { _T("Freeman C - On Fire"), 0x15d60, 0x15d80, indexGarouAFreeman },
    { _T("Freeman C - On Purple"), 0x15d80, 0x15da0, indexGarouAFreeman },
    { _T("Freeman C - Gold"), 0x15da0, 0x15dc0, indexGarouAFreeman },
    { _T("Freeman C - T.O.P."), 0x15dc0, 0x15de0, indexGarouAFreeman },
    { _T("Freeman C - Shade"), 0x15de0, 0x15e00, indexGarouAFreeman },
    { _T("Freeman C - Dark Red"), 0x15e00, 0x15e20, indexGarouAFreeman },
    { _T("Freeman C - Blue"), 0x15e20, 0x15e40, indexGarouAFreeman },
    { _T("Freeman C - Projectile1"), 0x15e40, 0x15e60 },
    { _T("Freeman C - Projectile2"), 0x15e60, 0x15e80 },
    { _T("Freeman C - Projectile3"), 0x15e80, 0x15ea0 },
    { _T("Freeman C - Projectile4"), 0x15ea0, 0x15ec0 },
    { _T("Freeman C - Projectile5"), 0x15ec0, 0x15ee0 },
    { _T("Freeman C - Projectile6"), 0x15ee0, 0x15f00 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_D[] =
{
    { _T("Freeman D - Main"), 0x15f00, 0x15f20, indexGarouAFreeman },
    { _T("Freeman D - Line1"), 0x15f20, 0x15f40, indexGarouAFreeman },
    { _T("Freeman D - Line2"), 0x15f40, 0x15f60, indexGarouAFreeman },
    { _T("Freeman D - On Fire"), 0x15f60, 0x15f80, indexGarouAFreeman },
    { _T("Freeman D - On Purple"), 0x15f80, 0x15fa0, indexGarouAFreeman },
    { _T("Freeman D - Gold"), 0x15fa0, 0x15fc0, indexGarouAFreeman },
    { _T("Freeman D - T.O.P."), 0x15fc0, 0x15fe0, indexGarouAFreeman },
    { _T("Freeman D - Shade"), 0x15fe0, 0x16000, indexGarouAFreeman },
    { _T("Freeman D - Dark Red"), 0x16000, 0x16020, indexGarouAFreeman },
    { _T("Freeman D - Blue"), 0x16020, 0x16040, indexGarouAFreeman },
    { _T("Freeman D - Projectile1"), 0x16040, 0x16060 },
    { _T("Freeman D - Projectile2"), 0x16060, 0x16080 },
    { _T("Freeman D - Projectile3"), 0x16080, 0x160a0 },
    { _T("Freeman D - Projectile4"), 0x160a0, 0x160c0 },
    { _T("Freeman D - Projectile5"), 0x160c0, 0x160e0 },
    { _T("Freeman D - Projectile6"), 0x160e0, 0x16100 },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_BOSS[] =
{
    { _T("Freeman Boss? - Main"), 0x16100, 0x16120, indexGarouAFreeman },
    { _T("Freeman Boss? - Line1"), 0x16120, 0x16140, indexGarouAFreeman },
    { _T("Freeman Boss? - Line2"), 0x16140, 0x16160, indexGarouAFreeman },
    { _T("Freeman Boss? - On Fire"), 0x16160, 0x16180, indexGarouAFreeman },
    { _T("Freeman Boss? - On Purple"), 0x16180, 0x161a0, indexGarouAFreeman },
    { _T("Freeman Boss? - Gold"), 0x161a0, 0x161c0, indexGarouAFreeman },
    { _T("Freeman Boss? - T.O.P."), 0x161c0, 0x161e0, indexGarouAFreeman },
    { _T("Freeman Boss? - Shade"), 0x161e0, 0x16200, indexGarouAFreeman },
    { _T("Freeman Boss? - Dark Red"), 0x16200, 0x16220, indexGarouAFreeman },
    { _T("Freeman Boss? - Blue"), 0x16220, 0x16240, indexGarouAFreeman },
    { _T("Freeman Boss? - Projectile1"), 0x16240, 0x16260 },
    { _T("Freeman Boss? - Projectile2"), 0x16260, 0x16280 },
    { _T("Freeman Boss? - Projectile3"), 0x16280, 0x162a0 },
    { _T("Freeman Boss? - Projectile4"), 0x162a0, 0x162c0 },
    { _T("Freeman Boss? - Projectile5"), 0x162c0, 0x162e0 },
    { _T("Freeman Boss? - Projectile6"), 0x162e0, 0x16300 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_A[] =
{
    { _T("Tizoc A - Main"), 0x16300, 0x16320, indexGarouATizoc },
    { _T("Tizoc A - Line1"), 0x16320, 0x16340, indexGarouATizoc },
    { _T("Tizoc A - Line2"), 0x16340, 0x16360, indexGarouATizoc },
    { _T("Tizoc A - On Fire"), 0x16360, 0x16380, indexGarouATizoc },
    { _T("Tizoc A - On Purple"), 0x16380, 0x163a0, indexGarouATizoc },
    { _T("Tizoc A - Gold"), 0x163a0, 0x163c0, indexGarouATizoc },
    { _T("Tizoc A - T.O.P."), 0x163c0, 0x163e0, indexGarouATizoc },
    { _T("Tizoc A - Shade"), 0x163e0, 0x16400, indexGarouATizoc },
    { _T("Tizoc A - Dark Red"), 0x16400, 0x16420, indexGarouATizoc },
    { _T("Tizoc A - Blue"), 0x16420, 0x16440, indexGarouATizoc },
    { _T("Tizoc A - Projectile1"), 0x16440, 0x16460 },
    { _T("Tizoc A - Projectile2"), 0x16460, 0x16480 },
    { _T("Tizoc A - Projectile3"), 0x16480, 0x164a0 },
    { _T("Tizoc A - Projectile4"), 0x164a0, 0x164c0 },
    { _T("Tizoc A - Projectile5"), 0x164c0, 0x164e0 },
    { _T("Tizoc A - Projectile6"), 0x164e0, 0x16500 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_B[] =
{
    { _T("Tizoc B - Main"), 0x16500, 0x16520, indexGarouATizoc },
    { _T("Tizoc B - Line1"), 0x16520, 0x16540, indexGarouATizoc },
    { _T("Tizoc B - Line2"), 0x16540, 0x16560, indexGarouATizoc },
    { _T("Tizoc B - On Fire"), 0x16560, 0x16580, indexGarouATizoc },
    { _T("Tizoc B - On Purple"), 0x16580, 0x165a0, indexGarouATizoc },
    { _T("Tizoc B - Gold"), 0x165a0, 0x165c0, indexGarouATizoc },
    { _T("Tizoc B - T.O.P."), 0x165c0, 0x165e0, indexGarouATizoc },
    { _T("Tizoc B - Shade"), 0x165e0, 0x16600, indexGarouATizoc },
    { _T("Tizoc B - Dark Red"), 0x16600, 0x16620, indexGarouATizoc },
    { _T("Tizoc B - Blue"), 0x16620, 0x16640, indexGarouATizoc },
    { _T("Tizoc B - Projectile1"), 0x16640, 0x16660 },
    { _T("Tizoc B - Projectile2"), 0x16660, 0x16680 },
    { _T("Tizoc B - Projectile3"), 0x16680, 0x166a0 },
    { _T("Tizoc B - Projectile4"), 0x166a0, 0x166c0 },
    { _T("Tizoc B - Projectile5"), 0x166c0, 0x166e0 },
    { _T("Tizoc B - Projectile6"), 0x166e0, 0x16700 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_C[] =
{
    { _T("Tizoc C - Main"), 0x16700, 0x16720, indexGarouATizoc },
    { _T("Tizoc C - Line1"), 0x16720, 0x16740, indexGarouATizoc },
    { _T("Tizoc C - Line2"), 0x16740, 0x16760, indexGarouATizoc },
    { _T("Tizoc C - On Fire"), 0x16760, 0x16780, indexGarouATizoc },
    { _T("Tizoc C - On Purple"), 0x16780, 0x167a0, indexGarouATizoc },
    { _T("Tizoc C - Gold"), 0x167a0, 0x167c0, indexGarouATizoc },
    { _T("Tizoc C - T.O.P."), 0x167c0, 0x167e0, indexGarouATizoc },
    { _T("Tizoc C - Shade"), 0x167e0, 0x16800, indexGarouATizoc },
    { _T("Tizoc C - Dark Red"), 0x16800, 0x16820, indexGarouATizoc },
    { _T("Tizoc C - Blue"), 0x16820, 0x16840, indexGarouATizoc },
    { _T("Tizoc C - Projectile1"), 0x16840, 0x16860 },
    { _T("Tizoc C - Projectile2"), 0x16860, 0x16880 },
    { _T("Tizoc C - Projectile3"), 0x16880, 0x168a0 },
    { _T("Tizoc C - Projectile4"), 0x168a0, 0x168c0 },
    { _T("Tizoc C - Projectile5"), 0x168c0, 0x168e0 },
    { _T("Tizoc C - Projectile6"), 0x168e0, 0x16900 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_D[] =
{
    { _T("Tizoc D - Main"), 0x16900, 0x16920, indexGarouATizoc },
    { _T("Tizoc D - Line1"), 0x16920, 0x16940, indexGarouATizoc },
    { _T("Tizoc D - Line2"), 0x16940, 0x16960, indexGarouATizoc },
    { _T("Tizoc D - On Fire"), 0x16960, 0x16980, indexGarouATizoc },
    { _T("Tizoc D - On Purple"), 0x16980, 0x169a0, indexGarouATizoc },
    { _T("Tizoc D - Gold"), 0x169a0, 0x169c0, indexGarouATizoc },
    { _T("Tizoc D - T.O.P."), 0x169c0, 0x169e0, indexGarouATizoc },
    { _T("Tizoc D - Shade"), 0x169e0, 0x16a00, indexGarouATizoc },
    { _T("Tizoc D - Dark Red"), 0x16a00, 0x16a20, indexGarouATizoc },
    { _T("Tizoc D - Blue"), 0x16a20, 0x16a40, indexGarouATizoc },
    { _T("Tizoc D - Projectile1"), 0x16a40, 0x16a60 },
    { _T("Tizoc D - Projectile2"), 0x16a60, 0x16a80 },
    { _T("Tizoc D - Projectile3"), 0x16a80, 0x16aa0 },
    { _T("Tizoc D - Projectile4"), 0x16aa0, 0x16ac0 },
    { _T("Tizoc D - Projectile5"), 0x16ac0, 0x16ae0 },
    { _T("Tizoc D - Projectile6"), 0x16ae0, 0x16b00 },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_BOSS[] =
{
    { _T("Tizoc Boss? - Main"), 0x16b00, 0x16b20, indexGarouATizoc },
    { _T("Tizoc Boss? - Line1"), 0x16b20, 0x16b40, indexGarouATizoc },
    { _T("Tizoc Boss? - Line2"), 0x16b40, 0x16b60, indexGarouATizoc },
    { _T("Tizoc Boss? - On Fire"), 0x16b60, 0x16b80, indexGarouATizoc },
    { _T("Tizoc Boss? - On Purple"), 0x16b80, 0x16ba0, indexGarouATizoc },
    { _T("Tizoc Boss? - Gold"), 0x16ba0, 0x16bc0, indexGarouATizoc },
    { _T("Tizoc Boss? - T.O.P."), 0x16bc0, 0x16be0, indexGarouATizoc },
    { _T("Tizoc Boss? - Shade"), 0x16be0, 0x16c00, indexGarouATizoc },
    { _T("Tizoc Boss? - Dark Red"), 0x16c00, 0x16c20, indexGarouATizoc },
    { _T("Tizoc Boss? - Blue"), 0x16c20, 0x16c40, indexGarouATizoc },
    { _T("Tizoc Boss? - Projectile1"), 0x16c40, 0x16c60 },
    { _T("Tizoc Boss? - Projectile2"), 0x16c60, 0x16c80 },
    { _T("Tizoc Boss? - Projectile3"), 0x16c80, 0x16ca0 },
    { _T("Tizoc Boss? - Projectile4"), 0x16ca0, 0x16cc0 },
    { _T("Tizoc Boss? - Projectile5"), 0x16cc0, 0x16ce0 },
    { _T("Tizoc Boss? - Projectile6"), 0x16ce0, 0x16d00 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_A[] =
{
    { _T("Kain A - Main"), 0x16d00, 0x16d20 },
    { _T("Kain A - Line1"), 0x16d20, 0x16d40 },
    { _T("Kain A - Line2"), 0x16d40, 0x16d60 },
    { _T("Kain A - On Fire"), 0x16d60, 0x16d80 },
    { _T("Kain A - On Purple"), 0x16d80, 0x16da0 },
    { _T("Kain A - Gold"), 0x16da0, 0x16dc0 },
    { _T("Kain A - T.O.P."), 0x16dc0, 0x16de0 },
    { _T("Kain A - Shade"), 0x16de0, 0x16e00 },
    { _T("Kain A - Dark Red"), 0x16e00, 0x16e20 },
    { _T("Kain A - Blue"), 0x16e20, 0x16e40 },
    { _T("Kain A - Projectile1"), 0x16e40, 0x16e60 },
    { _T("Kain A - Projectile2"), 0x16e60, 0x16e80 },
    { _T("Kain A - Projectile3"), 0x16e80, 0x16ea0 },
    { _T("Kain A - Projectile4"), 0x16ea0, 0x16ec0 },
    { _T("Kain A - Projectile5"), 0x16ec0, 0x16ee0 },
    { _T("Kain A - Projectile6"), 0x16ee0, 0x16f00 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_B[] =
{
    { _T("Kain B - Main"), 0x16f00, 0x16f20 },
    { _T("Kain B - Line1"), 0x16f20, 0x16f40 },
    { _T("Kain B - Line2"), 0x16f40, 0x16f60 },
    { _T("Kain B - On Fire"), 0x16f60, 0x16f80 },
    { _T("Kain B - On Purple"), 0x16f80, 0x16fa0 },
    { _T("Kain B - Gold"), 0x16fa0, 0x16fc0 },
    { _T("Kain B - T.O.P."), 0x16fc0, 0x16fe0 },
    { _T("Kain B - Shade"), 0x16fe0, 0x17000 },
    { _T("Kain B - Dark Red"), 0x17000, 0x17020 },
    { _T("Kain B - Blue"), 0x17020, 0x17040 },
    { _T("Kain B - Projectile1"), 0x17040, 0x17060 },
    { _T("Kain B - Projectile2"), 0x17060, 0x17080 },
    { _T("Kain B - Projectile3"), 0x17080, 0x170a0 },
    { _T("Kain B - Projectile4"), 0x170a0, 0x170c0 },
    { _T("Kain B - Projectile5"), 0x170c0, 0x170e0 },
    { _T("Kain B - Projectile6"), 0x170e0, 0x17100 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_C[] =
{
    { _T("Kain C - Main"), 0x17100, 0x17120 },
    { _T("Kain C - Line1"), 0x17120, 0x17140 },
    { _T("Kain C - Line2"), 0x17140, 0x17160 },
    { _T("Kain C - On Fire"), 0x17160, 0x17180 },
    { _T("Kain C - On Purple"), 0x17180, 0x171a0 },
    { _T("Kain C - Gold"), 0x171a0, 0x171c0 },
    { _T("Kain C - T.O.P."), 0x171c0, 0x171e0 },
    { _T("Kain C - Shade"), 0x171e0, 0x17200 },
    { _T("Kain C - Dark Red"), 0x17200, 0x17220 },
    { _T("Kain C - Blue"), 0x17220, 0x17240 },
    { _T("Kain C - Projectile1"), 0x17240, 0x17260 },
    { _T("Kain C - Projectile2"), 0x17260, 0x17280 },
    { _T("Kain C - Projectile3"), 0x17280, 0x172a0 },
    { _T("Kain C - Projectile4"), 0x172a0, 0x172c0 },
    { _T("Kain C - Projectile5"), 0x172c0, 0x172e0 },
    { _T("Kain C - Projectile6"), 0x172e0, 0x17300 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_D[] =
{
    { _T("Kain D - Main"), 0x17300, 0x17320 },
    { _T("Kain D - Line1"), 0x17320, 0x17340 },
    { _T("Kain D - Line2"), 0x17340, 0x17360 },
    { _T("Kain D - On Fire"), 0x17360, 0x17380 },
    { _T("Kain D - On Purple"), 0x17380, 0x173a0 },
    { _T("Kain D - Gold"), 0x173a0, 0x173c0 },
    { _T("Kain D - T.O.P."), 0x173c0, 0x173e0 },
    { _T("Kain D - Shade"), 0x173e0, 0x17400 },
    { _T("Kain D - Dark Red"), 0x17400, 0x17420 },
    { _T("Kain D - Blue"), 0x17420, 0x17440 },
    { _T("Kain D - Projectile1"), 0x17440, 0x17460 },
    { _T("Kain D - Projectile2"), 0x17460, 0x17480 },
    { _T("Kain D - Projectile3"), 0x17480, 0x174a0 },
    { _T("Kain D - Projectile4"), 0x174a0, 0x174c0 },
    { _T("Kain D - Projectile5"), 0x174c0, 0x174e0 },
    { _T("Kain D - Projectile6"), 0x174e0, 0x17500 },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_BOSS[] =
{
    { _T("Kain Boss? - Main"), 0x17500, 0x17520 },
    { _T("Kain Boss? - Line1"), 0x17520, 0x17540 },
    { _T("Kain Boss? - Line2"), 0x17540, 0x17560 },
    { _T("Kain Boss? - On Fire"), 0x17560, 0x17580 },
    { _T("Kain Boss? - On Purple"), 0x17580, 0x175a0 },
    { _T("Kain Boss? - Gold"), 0x175a0, 0x175c0 },
    { _T("Kain Boss? - T.O.P."), 0x175c0, 0x175e0 },
    { _T("Kain Boss? - Shade"), 0x175e0, 0x17600 },
    { _T("Kain Boss? - Dark Red"), 0x17600, 0x17620 },
    { _T("Kain Boss? - Blue"), 0x17620, 0x17640 },
    { _T("Kain Boss? - Projectile1"), 0x17640, 0x17660 },
    { _T("Kain Boss? - Projectile2"), 0x17660, 0x17680 },
    { _T("Kain Boss? - Projectile3"), 0x17680, 0x176a0 },
    { _T("Kain Boss? - Projectile4"), 0x176a0, 0x176c0 },
    { _T("Kain Boss? - Projectile5"), 0x176c0, 0x176e0 },
    { _T("Kain Boss? - Projectile6"), 0x176e0, 0x17700 },
};

const sGame_PaletteDataset Garou_A_ROCKHOWARD_PALETTES_PORTRAITS[] =
{
    { _T("Rock Portrait Palette - A"), 0x2a900, 0x2a940, indexGarouAPortraits, indexGarouARockHoward },
    { _T("Rock Portrait Palette - B"), 0x2a940, 0x2a980, indexGarouAPortraits, indexGarouARockHoward },
    { _T("Rock Portrait Palette - C"), 0x2a980, 0x2a9c0, indexGarouAPortraits, indexGarouARockHoward },
    { _T("Rock Portrait Palette - D"), 0x2a9c0, 0x2aa00, indexGarouAPortraits, indexGarouARockHoward },
};

const sGame_PaletteDataset Garou_A_TERRY_PALETTES_PORTRAITS[] =
{
    { _T("Terry Portrait Palette - A"), 0x2aa00, 0x2aa40, indexGarouAPortraits, indexGarouATerryBogard },
    { _T("Terry Portrait Palette - B"), 0x2aa40, 0x2aa80, indexGarouAPortraits, indexGarouATerryBogard },
    { _T("Terry Portrait Palette - C"), 0x2aa80, 0x2aac0, indexGarouAPortraits, indexGarouATerryBogard },
    { _T("Terry Portrait Palette - D"), 0x2aac0, 0x2ab00, indexGarouAPortraits, indexGarouATerryBogard },
};

const sGame_PaletteDataset Garou_A_KHUSHNOOD_PALETTES_PORTRAITS[] =
{
    { _T("Khushnood Portrait Palette - A"), 0x2b000, 0x2b040, indexGarouAPortraits, indexGarouAKhushnood },
    { _T("Khushnood Portrait Palette - B"), 0x2b040, 0x2b080, indexGarouAPortraits, indexGarouAKhushnood },
    { _T("Khushnood Portrait Palette - C"), 0x2b080, 0x2b0c0, indexGarouAPortraits, indexGarouAKhushnood },
    { _T("Khushnood Portrait Palette - D"), 0x2b0c0, 0x2b100, indexGarouAPortraits, indexGarouAKhushnood },
};

const sGame_PaletteDataset Garou_A_DONG_PALETTES_PORTRAITS[] =
{
    { _T("Dong Hwan Portrait Palette - A"), 0x2ab00, 0x2ab40, indexGarouAPortraits, indexGarouADong },
    { _T("Dong Hwan Portrait Palette - B"), 0x2ab40, 0x2ab80, indexGarouAPortraits, indexGarouADong },
    { _T("Dong Hwan Portrait Palette - C"), 0x2ab80, 0x2abc0, indexGarouAPortraits, indexGarouADong },
    { _T("Dong Hwan Portrait Palette - D"), 0x2abc0, 0x2ac00, indexGarouAPortraits, indexGarouADong },
};

const sGame_PaletteDataset Garou_A_JAE_PALETTES_PORTRAITS[] =
{
    { _T("Jae Hoon Portrait Palette - A"), 0x2ac00, 0x2ac40, indexGarouAPortraits, indexGarouAJae },
    { _T("Jae Hoon Portrait Palette - B"), 0x2ac40, 0x2ac80, indexGarouAPortraits, indexGarouAJae },
    { _T("Jae Hoon Portrait Palette - C"), 0x2ac80, 0x2acc0, indexGarouAPortraits, indexGarouAJae },
    { _T("Jae Hoon Portrait Palette - D"), 0x2acc0, 0x2ad00, indexGarouAPortraits, indexGarouAJae },
};

const sGame_PaletteDataset Garou_A_HOTARU_PALETTES_PORTRAITS[] =
{
    { _T("Hotaru Portrait Palette - A"), 0x2ad00, 0x2ad40, indexGarouAPortraits, indexGarouAHotaru },
    { _T("Hotaru Portrait Palette - B"), 0x2ad40, 0x2ad80, indexGarouAPortraits, indexGarouAHotaru },
    { _T("Hotaru Portrait Palette - C"), 0x2ad80, 0x2adc0, indexGarouAPortraits, indexGarouAHotaru },
    { _T("Hotaru Portrait Palette - D"), 0x2adc0, 0x2ae00, indexGarouAPortraits, indexGarouAHotaru },
};

const sGame_PaletteDataset Garou_A_GATO_PALETTES_PORTRAITS[] =
{
    { _T("Gato Portrait Palette - A"), 0x2ae00, 0x2ae40, indexGarouAPortraits, indexGarouAGato },
    { _T("Gato Portrait Palette - B"), 0x2ae40, 0x2ae80, indexGarouAPortraits, indexGarouAGato },
    { _T("Gato Portrait Palette - C"), 0x2ae80, 0x2aec0, indexGarouAPortraits, indexGarouAGato },
    { _T("Gato Portrait Palette - D"), 0x2aec0, 0x2af00, indexGarouAPortraits, indexGarouAGato },
};

const sGame_PaletteDataset Garou_A_KEVIN_PALETTES_PORTRAITS[] =
{
    { _T("Kevin Portrait Palette - A"), 0x2b400, 0x2b440, indexGarouAPortraits, indexGarouAKevin },
    { _T("Kevin Portrait Palette - B"), 0x2b440, 0x2b480, indexGarouAPortraits, indexGarouAKevin },
    { _T("Kevin Portrait Palette - C"), 0x2b480, 0x2b4c0, indexGarouAPortraits, indexGarouAKevin },
    { _T("Kevin Portrait Palette - D"), 0x2b4c0, 0x2b500, indexGarouAPortraits, indexGarouAKevin },
};

const sGame_PaletteDataset Garou_A_GRANT_PALETTES_PORTRAITS[] =
{
    { _T("Grant Portrait Palette - A"), 0x2b500, 0x2b540 },
    { _T("Grant Portrait Palette - B"), 0x2b540, 0x2b580 },
    { _T("Grant Portrait Palette - C"), 0x2b580, 0x2b5c0 },
    { _T("Grant Portrait Palette - D"), 0x2b5c0, 0x2b600 },
};

const sGame_PaletteDataset Garou_A_BJENNET_PALETTES_PORTRAITS[] =
{
    { _T("B.Jenet Portrait Palette - A"), 0x2af00, 0x2af40, indexGarouAPortraits, indexGarouABJennet },
    { _T("B.Jenet Portrait Palette - B"), 0x2af40, 0x2af80, indexGarouAPortraits, indexGarouABJennet },
    { _T("B.Jenet Portrait Palette - C"), 0x2af80, 0x2afc0, indexGarouAPortraits, indexGarouABJennet },
    { _T("B.Jenet Portrait Palette - D"), 0x2afc0, 0x2b000, indexGarouAPortraits, indexGarouABJennet },
};

const sGame_PaletteDataset Garou_A_HOKUTOMARO_PALETTES_PORTRAITS[] =
{
    { _T("Hokutomaru Portrait Palette - A"), 0x2b100, 0x2b140, indexGarouAPortraits, indexGarouAHokutomaru },
    { _T("Hokutomaru Portrait Palette - B"), 0x2b140, 0x2b180, indexGarouAPortraits, indexGarouAHokutomaru },
    { _T("Hokutomaru Portrait Palette - C"), 0x2b180, 0x2b1c0, indexGarouAPortraits, indexGarouAHokutomaru },
    { _T("Hokutomaru Portrait Palette - D"), 0x2b1c0, 0x2b200, indexGarouAPortraits, indexGarouAHokutomaru },
};

const sGame_PaletteDataset Garou_A_FREEMAN_PALETTES_PORTRAITS[] =
{
    { _T("Freeman Portrait Palette - A"), 0x2b200, 0x2b240, indexGarouAPortraits, indexGarouAFreeman },
    { _T("Freeman Portrait Palette - B"), 0x2b240, 0x2b280, indexGarouAPortraits, indexGarouAFreeman },
    { _T("Freeman Portrait Palette - C"), 0x2b280, 0x2b2c0, indexGarouAPortraits, indexGarouAFreeman },
    { _T("Freeman Portrait Palette - D"), 0x2b2c0, 0x2b300, indexGarouAPortraits, indexGarouATizoc },
};

const sGame_PaletteDataset Garou_A_TIZOC_PALETTES_PORTRAITS[] =
{
    { _T("Tizoc Portrait Palette - A"), 0x2b300, 0x2b340, indexGarouAPortraits, indexGarouATizoc },
    { _T("Tizoc Portrait Palette - B"), 0x2b340, 0x2b380, indexGarouAPortraits, indexGarouATizoc },
    { _T("Tizoc Portrait Palette - C"), 0x2b380, 0x2b3c0, indexGarouAPortraits, indexGarouATizoc },
    { _T("Tizoc Portrait Palette - D"), 0x2b3c0, 0x2b400, indexGarouAPortraits, indexGarouATizoc },
};

const sGame_PaletteDataset Garou_A_KAIN_PALETTES_PORTRAITS[] =
{
    { _T("Kain Portrait Palette - A"), 0x2b600, 0x2b640 },
    { _T("Kain Portrait Palette - B"), 0x2b640, 0x2b680 },
    { _T("Kain Portrait Palette - C"), 0x2b680, 0x2b6c0 },
    { _T("Kain Portrait Palette - D"), 0x2b6c0, 0x2b700 },
};

const sDescTreeNode Garou_A_ROCKHOWARD_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_A, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_B, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_C, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_D, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES_BOSS, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_KHUSHNOOD_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_A, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_B, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_C, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_D, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_BOSS, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_TERRY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_A, ARRAYSIZE(Garou_A_TERRY_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_B, ARRAYSIZE(Garou_A_TERRY_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_C, ARRAYSIZE(Garou_A_TERRY_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_D, ARRAYSIZE(Garou_A_TERRY_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_BOSS, ARRAYSIZE(Garou_A_TERRY_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_DONG_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_A, ARRAYSIZE(Garou_A_DONG_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_B, ARRAYSIZE(Garou_A_DONG_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_C, ARRAYSIZE(Garou_A_DONG_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_D, ARRAYSIZE(Garou_A_DONG_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_BOSS, ARRAYSIZE(Garou_A_DONG_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_JAE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_A, ARRAYSIZE(Garou_A_JAE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_B, ARRAYSIZE(Garou_A_JAE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_C, ARRAYSIZE(Garou_A_JAE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_D, ARRAYSIZE(Garou_A_JAE_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_BOSS, ARRAYSIZE(Garou_A_JAE_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_HOTARU_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_A, ARRAYSIZE(Garou_A_HOTARU_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_B, ARRAYSIZE(Garou_A_HOTARU_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_C, ARRAYSIZE(Garou_A_HOTARU_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_D, ARRAYSIZE(Garou_A_HOTARU_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_BOSS, ARRAYSIZE(Garou_A_HOTARU_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_GATO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_A, ARRAYSIZE(Garou_A_GATO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_B, ARRAYSIZE(Garou_A_GATO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_C, ARRAYSIZE(Garou_A_GATO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_D, ARRAYSIZE(Garou_A_GATO_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_BOSS, ARRAYSIZE(Garou_A_GATO_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_KEVIN_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_A, ARRAYSIZE(Garou_A_KEVIN_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_B, ARRAYSIZE(Garou_A_KEVIN_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_C, ARRAYSIZE(Garou_A_KEVIN_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_D, ARRAYSIZE(Garou_A_KEVIN_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_BOSS, ARRAYSIZE(Garou_A_KEVIN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_GRANT_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_A, ARRAYSIZE(Garou_A_GRANT_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_B, ARRAYSIZE(Garou_A_GRANT_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_C, ARRAYSIZE(Garou_A_GRANT_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_D, ARRAYSIZE(Garou_A_GRANT_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_BOSS, ARRAYSIZE(Garou_A_GRANT_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_BJENNET_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_A, ARRAYSIZE(Garou_A_BJENNET_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_B, ARRAYSIZE(Garou_A_BJENNET_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_C, ARRAYSIZE(Garou_A_BJENNET_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_D, ARRAYSIZE(Garou_A_BJENNET_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_BOSS, ARRAYSIZE(Garou_A_BJENNET_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_HOKUTOMARO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_A, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_B, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_C, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_D, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_BOSS, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_FREEMAN_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_A, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_B, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_C, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_D, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_BOSS, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_TIZOC_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_A, ARRAYSIZE(Garou_A_TIZOC_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_B, ARRAYSIZE(Garou_A_TIZOC_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_C, ARRAYSIZE(Garou_A_TIZOC_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_D, ARRAYSIZE(Garou_A_TIZOC_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_BOSS, ARRAYSIZE(Garou_A_TIZOC_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_KAIN_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_A, ARRAYSIZE(Garou_A_KAIN_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_B, ARRAYSIZE(Garou_A_KAIN_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_C, ARRAYSIZE(Garou_A_KAIN_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_D, ARRAYSIZE(Garou_A_KAIN_PALETTES_D) },
    { _T("Boss"), DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_BOSS, ARRAYSIZE(Garou_A_KAIN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_A_PORTRAITS_COLLECTION[] =
{
    { _T("Rock Howard"), DESC_NODETYPE_TREE, (void*)Garou_A_ROCKHOWARD_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_ROCKHOWARD_PALETTES_PORTRAITS) },
    { _T("Terry Bogard"), DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_TERRY_PALETTES_PORTRAITS) },
    { _T("Khushnood Butt"), DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_KHUSHNOOD_PALETTES_PORTRAITS) },
    { _T("Dong Hwan"), DESC_NODETYPE_TREE, (void*)Garou_A_DONG_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_DONG_PALETTES_PORTRAITS) },
    { _T("Jae Hoon"), DESC_NODETYPE_TREE, (void*)Garou_A_JAE_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_JAE_PALETTES_PORTRAITS) },
    { _T("Hotaru"), DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_HOTARU_PALETTES_PORTRAITS) },
    { _T("Gato"), DESC_NODETYPE_TREE, (void*)Garou_A_GATO_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_GATO_PALETTES_PORTRAITS) },
    { _T("Kevin"), DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_KEVIN_PALETTES_PORTRAITS) },
    { _T("Grant"), DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_GRANT_PALETTES_PORTRAITS) },
    { _T("B.Jenet"), DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_BJENNET_PALETTES_PORTRAITS) },
    { _T("Hokutomaro"), DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_HOKUTOMARO_PALETTES_PORTRAITS) },
    { _T("Freeman"), DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_FREEMAN_PALETTES_PORTRAITS) },
    { _T("Tizoc"), DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_TIZOC_PALETTES_PORTRAITS) },
    { _T("Kain"), DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_A_KAIN_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset Garou_A_BONUS_PALETTES[] =
{
    { _T("Meter"), 0xe040, 0xe0e0 },
    { _T("Lifebar Nametag, Border, Timer"), 0xe120, 0xe140 },
    { _T("Lifebar Timer Hurry Up"), 0xe140, 0xe160 },
    { _T("Lifebar Top: off"), 0xe160, 0xe180 },
    { _T("Lifebar Top: on"), 0xe180, 0xe1a0 },
    { _T("Terry Winpoint"), 0xe400, 0xe420 },
    { _T("Rock Winpoint"), 0xe480, 0xe4a0 },
    { _T("Dong Hwan Winpoint"), 0xe500, 0xe520 },
    { _T("Jae Hoon Winpoint"), 0xe580, 0xe5a0 },
    { _T("Hotaru Winpoint"), 0xe600, 0xe620 },
    { _T("Gato Winpoint"), 0xe680, 0xe6a0 },
    { _T("B.Jenet Winpoint"), 0xe700, 0xe720 },
    { _T("Khushnood Winpoint"), 0xe780, 0xe7a0 },
    { _T("Hokutomaru Winpoint"), 0xe800, 0xe820 },
    { _T("Freeman Winpoint"), 0xe880, 0xe8a0 },
    { _T("Tizoc Winpoint"), 0xe900, 0xe920 },
    { _T("Bastard Kevin Winpoint"), 0xe980, 0xe9a0 },
    { _T("Grant Winpoint"), 0xea00, 0xea20 },
    { _T("Kain Winpoint"), 0xea80, 0xeaa0 },
};

const sDescTreeNode Garou_A_BONUS_COLLECTION[] =
{
    { _T("Bonus"), DESC_NODETYPE_TREE, (void*)Garou_A_BONUS_PALETTES, ARRAYSIZE(Garou_A_BONUS_PALETTES) },
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
    indexGarouABonus,
    
    Garou_A_EXTRALOC
};

const sDescTreeNode Garou_A_UNITS[Garou_A_NUMUNIT] =
{
    { _T("Rock Howard"), DESC_NODETYPE_TREE, (void*)Garou_A_ROCKHOWARD_COLLECTION, ARRAYSIZE(Garou_A_ROCKHOWARD_COLLECTION) },
    { _T("Terry Bogard"), DESC_NODETYPE_TREE, (void*)Garou_A_TERRY_COLLECTION, ARRAYSIZE(Garou_A_TERRY_COLLECTION) },
    { _T("Khushnood Butt"), DESC_NODETYPE_TREE, (void*)Garou_A_KHUSHNOOD_COLLECTION, ARRAYSIZE(Garou_A_KHUSHNOOD_COLLECTION) },
    { _T("Dong Hwan"), DESC_NODETYPE_TREE, (void*)Garou_A_DONG_COLLECTION, ARRAYSIZE(Garou_A_DONG_COLLECTION) },
    { _T("Jae Hoon"), DESC_NODETYPE_TREE, (void*)Garou_A_JAE_COLLECTION, ARRAYSIZE(Garou_A_JAE_COLLECTION) },
    { _T("Hotaru"), DESC_NODETYPE_TREE, (void*)Garou_A_HOTARU_COLLECTION, ARRAYSIZE(Garou_A_HOTARU_COLLECTION) },
    { _T("Gato"), DESC_NODETYPE_TREE, (void*)Garou_A_GATO_COLLECTION, ARRAYSIZE(Garou_A_GATO_COLLECTION) },
    { _T("Kevin"), DESC_NODETYPE_TREE, (void*)Garou_A_KEVIN_COLLECTION, ARRAYSIZE(Garou_A_KEVIN_COLLECTION) },
    { _T("Grant"), DESC_NODETYPE_TREE, (void*)Garou_A_GRANT_COLLECTION, ARRAYSIZE(Garou_A_GRANT_COLLECTION) },
    { _T("B.Jenet"), DESC_NODETYPE_TREE, (void*)Garou_A_BJENNET_COLLECTION, ARRAYSIZE(Garou_A_BJENNET_COLLECTION) },
    { _T("Hokutomaro"), DESC_NODETYPE_TREE, (void*)Garou_A_HOKUTOMARO_COLLECTION, ARRAYSIZE(Garou_A_HOKUTOMARO_COLLECTION) },
    { _T("Freeman"), DESC_NODETYPE_TREE, (void*)Garou_A_FREEMAN_COLLECTION, ARRAYSIZE(Garou_A_FREEMAN_COLLECTION) },
    { _T("Tizoc"), DESC_NODETYPE_TREE, (void*)Garou_A_TIZOC_COLLECTION, ARRAYSIZE(Garou_A_TIZOC_COLLECTION) },
    { _T("Kain"), DESC_NODETYPE_TREE, (void*)Garou_A_KAIN_COLLECTION, ARRAYSIZE(Garou_A_KAIN_COLLECTION) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)Garou_A_PORTRAITS_COLLECTION, ARRAYSIZE(Garou_A_PORTRAITS_COLLECTION) },
    { _T("Bonus Stuff"), DESC_NODETYPE_TREE, (void*)Garou_A_BONUS_COLLECTION, ARRAYSIZE(Garou_A_BONUS_COLLECTION) },
};

// We extend this array with data groveled from the GarouE.txt extensible extras file, if any.
const stExtraDef Garou_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
