#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of Garou_S_ROCK_PALETTES. 
// * Update every array using Garou_S_NUMUNIT below
// That should be it.  Good luck.

const sGame_PaletteDataset Garou_S_ROCKHOWARD_PALETTES_A[] =
{
    { L"Rock A - Main", 0xc0000 + 0xff00, 0xc0000 + 0xff20, indexGarouARockHoward },
    { L"Rock A - Line1", 0xc0000 + 0xff20, 0xc0000 + 0xff40, indexGarouARockHoward },
    { L"Rock A - Line2", 0xc0000 + 0xff40, 0xc0000 + 0xff60, indexGarouARockHoward },
    { L"Rock A - On Fire", 0xc0000 + 0xff60, 0xc0000 + 0xff80, indexGarouARockHoward },
    { L"Rock A - On Purple", 0xc0000 + 0xff80, 0xc0000 + 0xffa0, indexGarouARockHoward },
    { L"Rock A - Gold", 0xc0000 + 0xffa0, 0xc0000 + 0xffc0, indexGarouARockHoward },
    { L"Rock A - T.O.P.", 0xc0000 + 0xffc0, 0xc0000 + 0xffe0, indexGarouARockHoward },
    { L"Rock A - Shade", 0xc0000 + 0xffe0, 0xc0000 + 0x10000, indexGarouARockHoward },
    { L"Rock A - Dark Red", 0xc0000 + 0x10000, 0xc0000 + 0x10020, indexGarouARockHoward },
    { L"Rock A - Blue", 0xc0000 + 0x10020, 0xc0000 + 0x10040, indexGarouARockHoward },
    { L"Rock A - Projectile1", 0xc0000 + 0x10040, 0xc0000 + 0x10060 },
    { L"Rock A - Projectile2", 0xc0000 + 0x10060, 0xc0000 + 0x10080 },
    { L"Rock A - Projectile3", 0xc0000 + 0x10080, 0xc0000 + 0x100a0 },
    { L"Rock A - Projectile4", 0xc0000 + 0x100a0, 0xc0000 + 0x100c0 },
    { L"Rock A - Projectile5", 0xc0000 + 0x100c0, 0xc0000 + 0x100e0 },
    { L"Rock A - Projectile6", 0xc0000 + 0x100e0, 0xc0000 + 0x10100 },
};

const sGame_PaletteDataset Garou_S_ROCKHOWARD_PALETTES_B[] =
{
    { L"Rock B - Main", 0xc0000 + 0x10100, 0xc0000 + 0x10120, indexGarouARockHoward },
    { L"Rock B - Line1", 0xc0000 + 0x10120, 0xc0000 + 0x10140, indexGarouARockHoward },
    { L"Rock B - Line2", 0xc0000 + 0x10140, 0xc0000 + 0x10160, indexGarouARockHoward },
    { L"Rock B - On Fire", 0xc0000 + 0x10160, 0xc0000 + 0x10180, indexGarouARockHoward },
    { L"Rock B - On Purple", 0xc0000 + 0x10180, 0xc0000 + 0x101a0, indexGarouARockHoward },
    { L"Rock B - Gold", 0xc0000 + 0x101a0, 0xc0000 + 0x101c0, indexGarouARockHoward },
    { L"Rock B - T.O.P.", 0xc0000 + 0x101c0, 0xc0000 + 0x101e0, indexGarouARockHoward },
    { L"Rock B - Shade", 0xc0000 + 0x101e0, 0xc0000 + 0x10200, indexGarouARockHoward },
    { L"Rock B - Dark Red", 0xc0000 + 0x10200, 0xc0000 + 0x10220, indexGarouARockHoward },
    { L"Rock B - Blue", 0xc0000 + 0x10220, 0xc0000 + 0x10240, indexGarouARockHoward },
    { L"Rock B - Projectile1", 0xc0000 + 0x10240, 0xc0000 + 0x10260 },
    { L"Rock B - Projectile2", 0xc0000 + 0x10260, 0xc0000 + 0x10280 },
    { L"Rock B - Projectile3", 0xc0000 + 0x10280, 0xc0000 + 0x102a0 },
    { L"Rock B - Projectile4", 0xc0000 + 0x102a0, 0xc0000 + 0x102c0 },
    { L"Rock B - Projectile5", 0xc0000 + 0x102c0, 0xc0000 + 0x102e0 },
    { L"Rock B - Projectile6", 0xc0000 + 0x102e0, 0xc0000 + 0x10300 },
};

const sGame_PaletteDataset Garou_S_ROCKHOWARD_PALETTES_C[] =
{
    { L"Rock C - Main", 0xc0000 + 0x10300, 0xc0000 + 0x10320, indexGarouARockHoward },
    { L"Rock C - Line1", 0xc0000 + 0x10320, 0xc0000 + 0x10340, indexGarouARockHoward },
    { L"Rock C - Line2", 0xc0000 + 0x10340, 0xc0000 + 0x10360, indexGarouARockHoward },
    { L"Rock C - On Fire", 0xc0000 + 0x10360, 0xc0000 + 0x10380, indexGarouARockHoward },
    { L"Rock C - On Purple", 0xc0000 + 0x10380, 0xc0000 + 0x103a0, indexGarouARockHoward },
    { L"Rock C - Gold", 0xc0000 + 0x103a0, 0xc0000 + 0x103c0, indexGarouARockHoward },
    { L"Rock C - T.O.P.", 0xc0000 + 0x103c0, 0xc0000 + 0x103e0, indexGarouARockHoward },
    { L"Rock C - Shade", 0xc0000 + 0x103e0, 0xc0000 + 0x10400, indexGarouARockHoward },
    { L"Rock C - Dark Red", 0xc0000 + 0x10400, 0xc0000 + 0x10420, indexGarouARockHoward },
    { L"Rock C - Blue", 0xc0000 + 0x10420, 0xc0000 + 0x10440, indexGarouARockHoward },
    { L"Rock C - Projectile1", 0xc0000 + 0x10440, 0xc0000 + 0x10460 },
    { L"Rock C - Projectile2", 0xc0000 + 0x10460, 0xc0000 + 0x10480 },
    { L"Rock C - Projectile3", 0xc0000 + 0x10480, 0xc0000 + 0x104a0 },
    { L"Rock C - Projectile4", 0xc0000 + 0x104a0, 0xc0000 + 0x104c0 },
    { L"Rock C - Projectile5", 0xc0000 + 0x104c0, 0xc0000 + 0x104e0 },
    { L"Rock C - Projectile6", 0xc0000 + 0x104e0, 0xc0000 + 0x10500 },
};

const sGame_PaletteDataset Garou_S_ROCKHOWARD_PALETTES_D[] =
{
    { L"Rock D - Main", 0xc0000 + 0x10500, 0xc0000 + 0x10520, indexGarouARockHoward },
    { L"Rock D - Line1", 0xc0000 + 0x10520, 0xc0000 + 0x10540, indexGarouARockHoward },
    { L"Rock D - Line2", 0xc0000 + 0x10540, 0xc0000 + 0x10560, indexGarouARockHoward },
    { L"Rock D - On Fire", 0xc0000 + 0x10560, 0xc0000 + 0x10580, indexGarouARockHoward },
    { L"Rock D - On Purple", 0xc0000 + 0x10580, 0xc0000 + 0x105a0, indexGarouARockHoward },
    { L"Rock D - Gold", 0xc0000 + 0x105a0, 0xc0000 + 0x105c0, indexGarouARockHoward },
    { L"Rock D - T.O.P.", 0xc0000 + 0x105c0, 0xc0000 + 0x105e0, indexGarouARockHoward },
    { L"Rock D - Shade", 0xc0000 + 0x105e0, 0xc0000 + 0x10600, indexGarouARockHoward },
    { L"Rock D - Dark Red", 0xc0000 + 0x10600, 0xc0000 + 0x10620, indexGarouARockHoward },
    { L"Rock D - Blue", 0xc0000 + 0x10620, 0xc0000 + 0x10640, indexGarouARockHoward },
    { L"Rock D - Projectile1", 0xc0000 + 0x10640, 0xc0000 + 0x10660 },
    { L"Rock D - Projectile2", 0xc0000 + 0x10660, 0xc0000 + 0x10680 },
    { L"Rock D - Projectile3", 0xc0000 + 0x10680, 0xc0000 + 0x106a0 },
    { L"Rock D - Projectile4", 0xc0000 + 0x106a0, 0xc0000 + 0x106c0 },
    { L"Rock D - Projectile5", 0xc0000 + 0x106c0, 0xc0000 + 0x106e0 },
    { L"Rock D - Projectile6", 0xc0000 + 0x106e0, 0xc0000 + 0x10700 },
};

const sGame_PaletteDataset Garou_S_ROCKHOWARD_PALETTES_BOSS[] =
{
    { L"Rock Boss? - Main", 0xc0000 + 0x10700, 0xc0000 + 0x10720, indexGarouARockHoward },
    { L"Rock Boss? - Line1", 0xc0000 + 0x10720, 0xc0000 + 0x10740, indexGarouARockHoward },
    { L"Rock Boss? - Line2", 0xc0000 + 0x10740, 0xc0000 + 0x10760, indexGarouARockHoward },
    { L"Rock Boss? - On Fire", 0xc0000 + 0x10760, 0xc0000 + 0x10780, indexGarouARockHoward },
    { L"Rock Boss? - On Purple", 0xc0000 + 0x10780, 0xc0000 + 0x107a0, indexGarouARockHoward },
    { L"Rock Boss? - Gold", 0xc0000 + 0x107a0, 0xc0000 + 0x107c0, indexGarouARockHoward },
    { L"Rock Boss? - T.O.P.", 0xc0000 + 0x107c0, 0xc0000 + 0x107e0, indexGarouARockHoward },
    { L"Rock Boss? - Shade", 0xc0000 + 0x107e0, 0xc0000 + 0x10800, indexGarouARockHoward },
    { L"Rock Boss? - Dark Red", 0xc0000 + 0x10800, 0xc0000 + 0x10820, indexGarouARockHoward },
    { L"Rock Boss? - Blue", 0xc0000 + 0x10820, 0xc0000 + 0x10840, indexGarouARockHoward },
    { L"Rock Boss? - Projectile1", 0xc0000 + 0x10840, 0xc0000 + 0x10860 },
    { L"Rock Boss? - Projectile2", 0xc0000 + 0x10860, 0xc0000 + 0x10880 },
    { L"Rock Boss? - Projectile3", 0xc0000 + 0x10880, 0xc0000 + 0x108a0 },
    { L"Rock Boss? - Projectile4", 0xc0000 + 0x108a0, 0xc0000 + 0x108c0 },
    { L"Rock Boss? - Projectile5", 0xc0000 + 0x108c0, 0xc0000 + 0x108e0 },
    { L"Rock Boss? - Projectile6", 0xc0000 + 0x108e0, 0xc0000 + 0x10900 },
};

const sGame_PaletteDataset Garou_S_KHUSHNOOD_PALETTES_A[] =
{
    { L"Khushnood Butt A - Main", 0xc0000 + 0xeb00, 0xc0000 + 0xeb20, indexGarouAKhushnood },
    { L"Khushnood Butt A - Line1", 0xc0000 + 0xeb20, 0xc0000 + 0xeb40, indexGarouAKhushnood },
    { L"Khushnood Butt A - Line2", 0xc0000 + 0xeb40, 0xc0000 + 0xeb60, indexGarouAKhushnood },
    { L"Khushnood Butt A - On Fire", 0xc0000 + 0xeb60, 0xc0000 + 0xeb80, indexGarouAKhushnood },
    { L"Khushnood Butt A - On Purple", 0xc0000 + 0xeb80, 0xc0000 + 0xeba0, indexGarouAKhushnood },
    { L"Khushnood Butt A - Gold", 0xc0000 + 0xeba0, 0xc0000 + 0xebc0, indexGarouAKhushnood },
    { L"Khushnood Butt A - T.O.P.", 0xc0000 + 0xebc0, 0xc0000 + 0xebe0, indexGarouAKhushnood },
    { L"Khushnood Butt A - Shade", 0xc0000 + 0xebe0, 0xc0000 + 0xec00, indexGarouAKhushnood },
    { L"Khushnood Butt A - Dark Red", 0xc0000 + 0xec00, 0xc0000 + 0xec20, indexGarouAKhushnood },
    { L"Khushnood Butt A - Blue", 0xc0000 + 0xec20, 0xc0000 + 0xec40, indexGarouAKhushnood },
    { L"Khushnood Butt A - Projectile1", 0xc0000 + 0xec40, 0xc0000 + 0xec60 },
    { L"Khushnood Butt A - Projectile2", 0xc0000 + 0xec60, 0xc0000 + 0xec80 },
    { L"Khushnood Butt A - Projectile3", 0xc0000 + 0xec80, 0xc0000 + 0xeca0 },
    { L"Khushnood Butt A - Projectile4", 0xc0000 + 0xeca0, 0xc0000 + 0xecc0 },
    { L"Khushnood Butt A - Projectile5", 0xc0000 + 0xecc0, 0xc0000 + 0xece0 },
    { L"Khushnood Butt A - Projectile6", 0xc0000 + 0xece0, 0xc0000 + 0xed00 },
};

const sGame_PaletteDataset Garou_S_KHUSHNOOD_PALETTES_B[] =
{
    { L"Khushnood Butt B - Main", 0xc0000 + 0xed00, 0xc0000 + 0xed20, indexGarouAKhushnood },
    { L"Khushnood Butt B - Line1", 0xc0000 + 0xed20, 0xc0000 + 0xed40, indexGarouAKhushnood },
    { L"Khushnood Butt B - Line2", 0xc0000 + 0xed40, 0xc0000 + 0xed60, indexGarouAKhushnood },
    { L"Khushnood Butt B - On Fire", 0xc0000 + 0xed60, 0xc0000 + 0xed80, indexGarouAKhushnood },
    { L"Khushnood Butt B - On Purple", 0xc0000 + 0xed80, 0xc0000 + 0xeda0, indexGarouAKhushnood },
    { L"Khushnood Butt B - Gold", 0xc0000 + 0xeda0, 0xc0000 + 0xedc0, indexGarouAKhushnood },
    { L"Khushnood Butt B - T.O.P.", 0xc0000 + 0xedc0, 0xc0000 + 0xede0, indexGarouAKhushnood },
    { L"Khushnood Butt B - Shade", 0xc0000 + 0xede0, 0xc0000 + 0xee00, indexGarouAKhushnood },
    { L"Khushnood Butt B - Dark Red", 0xc0000 + 0xee00, 0xc0000 + 0xee20, indexGarouAKhushnood },
    { L"Khushnood Butt B - Blue", 0xc0000 + 0xee20, 0xc0000 + 0xee40, indexGarouAKhushnood },
    { L"Khushnood Butt B - Projectile1", 0xc0000 + 0xee40, 0xc0000 + 0xee60 },
    { L"Khushnood Butt B - Projectile2", 0xc0000 + 0xee60, 0xc0000 + 0xee80 },
    { L"Khushnood Butt B - Projectile3", 0xc0000 + 0xee80, 0xc0000 + 0xeea0 },
    { L"Khushnood Butt B - Projectile4", 0xc0000 + 0xeea0, 0xc0000 + 0xeec0 },
    { L"Khushnood Butt B - Projectile5", 0xc0000 + 0xeec0, 0xc0000 + 0xeee0 },
    { L"Khushnood Butt B - Projectile6", 0xc0000 + 0xeee0, 0xc0000 + 0xef00 },
};

const sGame_PaletteDataset Garou_S_KHUSHNOOD_PALETTES_C[] =
{
    { L"Khushnood Butt C - Main", 0xc0000 + 0xef00, 0xc0000 + 0xef20, indexGarouAKhushnood },
    { L"Khushnood Butt C - Line1", 0xc0000 + 0xef20, 0xc0000 + 0xef40, indexGarouAKhushnood },
    { L"Khushnood Butt C - Line2", 0xc0000 + 0xef40, 0xc0000 + 0xef60, indexGarouAKhushnood },
    { L"Khushnood Butt C - On Fire", 0xc0000 + 0xef60, 0xc0000 + 0xef80, indexGarouAKhushnood },
    { L"Khushnood Butt C - On Purple", 0xc0000 + 0xef80, 0xc0000 + 0xefa0, indexGarouAKhushnood },
    { L"Khushnood Butt C - Gold", 0xc0000 + 0xefa0, 0xc0000 + 0xefc0, indexGarouAKhushnood },
    { L"Khushnood Butt C - T.O.P.", 0xc0000 + 0xefc0, 0xc0000 + 0xefe0, indexGarouAKhushnood },
    { L"Khushnood Butt C - Shade", 0xc0000 + 0xefe0, 0xc0000 + 0xf000, indexGarouAKhushnood },
    { L"Khushnood Butt C - Dark Red", 0xc0000 + 0xf000, 0xc0000 + 0xf020, indexGarouAKhushnood },
    { L"Khushnood Butt C - Blue", 0xc0000 + 0xf020, 0xc0000 + 0xf040, indexGarouAKhushnood },
    { L"Khushnood Butt C - Projectile1", 0xc0000 + 0xf040, 0xc0000 + 0xf060 },
    { L"Khushnood Butt C - Projectile2", 0xc0000 + 0xf060, 0xc0000 + 0xf080 },
    { L"Khushnood Butt C - Projectile3", 0xc0000 + 0xf080, 0xc0000 + 0xf0a0 },
    { L"Khushnood Butt C - Projectile4", 0xc0000 + 0xf0a0, 0xc0000 + 0xf0c0 },
    { L"Khushnood Butt C - Projectile5", 0xc0000 + 0xf0c0, 0xc0000 + 0xf0e0 },
    { L"Khushnood Butt C - Projectile6", 0xc0000 + 0xf0e0, 0xc0000 + 0xf100 },
};

const sGame_PaletteDataset Garou_S_KHUSHNOOD_PALETTES_D[] =
{
    { L"Khushnood Butt D - Main", 0xc0000 + 0xf100, 0xc0000 + 0xf120, indexGarouAKhushnood },
    { L"Khushnood Butt D - Line1", 0xc0000 + 0xf120, 0xc0000 + 0xf140, indexGarouAKhushnood },
    { L"Khushnood Butt D - Line2", 0xc0000 + 0xf140, 0xc0000 + 0xf160, indexGarouAKhushnood },
    { L"Khushnood Butt D - On Fire", 0xc0000 + 0xf160, 0xc0000 + 0xf180, indexGarouAKhushnood },
    { L"Khushnood Butt D - On Purple", 0xc0000 + 0xf180, 0xc0000 + 0xf1a0, indexGarouAKhushnood },
    { L"Khushnood Butt D - Gold", 0xc0000 + 0xf1a0, 0xc0000 + 0xf1c0, indexGarouAKhushnood },
    { L"Khushnood Butt D - T.O.P.", 0xc0000 + 0xf1c0, 0xc0000 + 0xf1e0, indexGarouAKhushnood },
    { L"Khushnood Butt D - Shade", 0xc0000 + 0xf1e0, 0xc0000 + 0xf200, indexGarouAKhushnood },
    { L"Khushnood Butt D - Dark Red", 0xc0000 + 0xf200, 0xc0000 + 0xf220, indexGarouAKhushnood },
    { L"Khushnood Butt D - Blue", 0xc0000 + 0xf220, 0xc0000 + 0xf240, indexGarouAKhushnood },
    { L"Khushnood Butt D - Projectile1", 0xc0000 + 0xf240, 0xc0000 + 0xf260 },
    { L"Khushnood Butt D - Projectile2", 0xc0000 + 0xf260, 0xc0000 + 0xf280 },
    { L"Khushnood Butt D - Projectile3", 0xc0000 + 0xf280, 0xc0000 + 0xf2a0 },
    { L"Khushnood Butt D - Projectile4", 0xc0000 + 0xf2a0, 0xc0000 + 0xf2c0 },
    { L"Khushnood Butt D - Projectile5", 0xc0000 + 0xf2c0, 0xc0000 + 0xf2e0 },
    { L"Khushnood Butt D - Projectile6", 0xc0000 + 0xf2e0, 0xc0000 + 0xf300 },
};

const sGame_PaletteDataset Garou_S_KHUSHNOOD_PALETTES_BOSS[] =
{
    { L"Khushnood Butt Boss? - Main", 0xc0000 + 0xf300, 0xc0000 + 0xf320, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Line1", 0xc0000 + 0xf320, 0xc0000 + 0xf340, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Line2", 0xc0000 + 0xf340, 0xc0000 + 0xf360, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - On Fire", 0xc0000 + 0xf360, 0xc0000 + 0xf380, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - On Purple", 0xc0000 + 0xf380, 0xc0000 + 0xf3a0, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Gold", 0xc0000 + 0xf3a0, 0xc0000 + 0xf3c0, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - T.O.P.", 0xc0000 + 0xf3c0, 0xc0000 + 0xf3e0, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Shade", 0xc0000 + 0xf3e0, 0xc0000 + 0xf400, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Dark Red", 0xc0000 + 0xf400, 0xc0000 + 0xf420, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Blue", 0xc0000 + 0xf420, 0xc0000 + 0xf440, indexGarouAKhushnood },
    { L"Khushnood Butt Boss? - Projectile1", 0xc0000 + 0xf440, 0xc0000 + 0xf460 },
    { L"Khushnood Butt Boss? - Projectile2", 0xc0000 + 0xf460, 0xc0000 + 0xf480 },
    { L"Khushnood Butt Boss? - Projectile3", 0xc0000 + 0xf480, 0xc0000 + 0xf4a0 },
    { L"Khushnood Butt Boss? - Projectile4", 0xc0000 + 0xf4a0, 0xc0000 + 0xf4c0 },
    { L"Khushnood Butt Boss? - Projectile5", 0xc0000 + 0xf4c0, 0xc0000 + 0xf4e0 },
    { L"Khushnood Butt Boss? - Projectile6", 0xc0000 + 0xf4e0, 0xc0000 + 0xf500 },
};

const sGame_PaletteDataset Garou_S_TERRY_PALETTES_A[] =
{
    { L"Terry A - Main", 0xc0000 + 0xf500, 0xc0000 + 0xf520, indexGarouATerryBogard },
    { L"Terry A - Line1", 0xc0000 + 0xf520, 0xc0000 + 0xf540, indexGarouATerryBogard },
    { L"Terry A - Line2", 0xc0000 + 0xf540, 0xc0000 + 0xf560, indexGarouATerryBogard },
    { L"Terry A - On Fire", 0xc0000 + 0xf560, 0xc0000 + 0xf580, indexGarouATerryBogard },
    { L"Terry A - On Purple", 0xc0000 + 0xf580, 0xc0000 + 0xf5a0, indexGarouATerryBogard },
    { L"Terry A - Gold", 0xc0000 + 0xf5a0, 0xc0000 + 0xf5c0, indexGarouATerryBogard },
    { L"Terry A - T.O.P.", 0xc0000 + 0xf5c0, 0xc0000 + 0xf5e0, indexGarouATerryBogard },
    { L"Terry A - Shade", 0xc0000 + 0xf5e0, 0xc0000 + 0xf600, indexGarouATerryBogard },
    { L"Terry A - Dark Red", 0xc0000 + 0xf600, 0xc0000 + 0xf620, indexGarouATerryBogard },
    { L"Terry A - Blue", 0xc0000 + 0xf620, 0xc0000 + 0xf640, indexGarouATerryBogard },
    { L"Terry A - Projectile1", 0xc0000 + 0xf640, 0xc0000 + 0xf660 },
    { L"Terry A - Projectile2", 0xc0000 + 0xf660, 0xc0000 + 0xf680 },
    { L"Terry A - Projectile3", 0xc0000 + 0xf680, 0xc0000 + 0xf6a0 },
    { L"Terry A - Projectile4", 0xc0000 + 0xf6a0, 0xc0000 + 0xf6c0 },
    { L"Terry A - Projectile5", 0xc0000 + 0xf6c0, 0xc0000 + 0xf6e0 },
    { L"Terry A - Projectile6", 0xc0000 + 0xf6e0, 0xc0000 + 0xf700 }, 
};

const sGame_PaletteDataset Garou_S_TERRY_PALETTES_B[] =
{
    { L"Terry B - Main", 0xc0000 + 0xf700, 0xc0000 + 0xf720, indexGarouATerryBogard },
    { L"Terry B - Line1", 0xc0000 + 0xf720, 0xc0000 + 0xf740, indexGarouATerryBogard },
    { L"Terry B - Line2", 0xc0000 + 0xf740, 0xc0000 + 0xf760, indexGarouATerryBogard },
    { L"Terry B - On Fire", 0xc0000 + 0xf760, 0xc0000 + 0xf780, indexGarouATerryBogard },
    { L"Terry B - On Purple", 0xc0000 + 0xf780, 0xc0000 + 0xf7a0, indexGarouATerryBogard },
    { L"Terry B - Gold", 0xc0000 + 0xf7a0, 0xc0000 + 0xf7c0, indexGarouATerryBogard },
    { L"Terry B - T.O.P.", 0xc0000 + 0xf7c0, 0xc0000 + 0xf7e0, indexGarouATerryBogard },
    { L"Terry B - Shade", 0xc0000 + 0xf7e0, 0xc0000 + 0xf800, indexGarouATerryBogard },
    { L"Terry B - Dark Red", 0xc0000 + 0xf800, 0xc0000 + 0xf820, indexGarouATerryBogard },
    { L"Terry B - Blue", 0xc0000 + 0xf820, 0xc0000 + 0xf840, indexGarouATerryBogard },
    { L"Terry B - Projectile1", 0xc0000 + 0xf840, 0xc0000 + 0xf860 },
    { L"Terry B - Projectile2", 0xc0000 + 0xf860, 0xc0000 + 0xf880 },
    { L"Terry B - Projectile3", 0xc0000 + 0xf880, 0xc0000 + 0xf8a0 },
    { L"Terry B - Projectile4", 0xc0000 + 0xf8a0, 0xc0000 + 0xf8c0 },
    { L"Terry B - Projectile5", 0xc0000 + 0xf8c0, 0xc0000 + 0xf8e0 },
    { L"Terry B - Projectile6", 0xc0000 + 0xf8e0, 0xc0000 + 0xf900 },
};

const sGame_PaletteDataset Garou_S_TERRY_PALETTES_C[] =
{
    { L"Terry C - Main", 0xc0000 + 0xf900, 0xc0000 + 0xf920, indexGarouATerryBogard },
    { L"Terry C - Line1", 0xc0000 + 0xf920, 0xc0000 + 0xf940, indexGarouATerryBogard },
    { L"Terry C - Line2", 0xc0000 + 0xf940, 0xc0000 + 0xf960, indexGarouATerryBogard },
    { L"Terry C - On Fire", 0xc0000 + 0xf960, 0xc0000 + 0xf980, indexGarouATerryBogard },
    { L"Terry C - On Purple", 0xc0000 + 0xf980, 0xc0000 + 0xf9a0, indexGarouATerryBogard },
    { L"Terry C - Gold", 0xc0000 + 0xf9a0, 0xc0000 + 0xf9c0, indexGarouATerryBogard },
    { L"Terry C - T.O.P.", 0xc0000 + 0xf9c0, 0xc0000 + 0xf9e0, indexGarouATerryBogard },
    { L"Terry C - Shade", 0xc0000 + 0xf9e0, 0xc0000 + 0xfa00, indexGarouATerryBogard },
    { L"Terry C - Dark Red", 0xc0000 + 0xfa00, 0xc0000 + 0xfa20, indexGarouATerryBogard },
    { L"Terry C - Blue", 0xc0000 + 0xfa20, 0xc0000 + 0xfa40, indexGarouATerryBogard },
    { L"Terry C - Projectile1", 0xc0000 + 0xfa40, 0xc0000 + 0xfa60 },
    { L"Terry C - Projectile2", 0xc0000 + 0xfa60, 0xc0000 + 0xfa80 },
    { L"Terry C - Projectile3", 0xc0000 + 0xfa80, 0xc0000 + 0xfaa0 },
    { L"Terry C - Projectile4", 0xc0000 + 0xfaa0, 0xc0000 + 0xfac0 },
    { L"Terry C - Projectile5", 0xc0000 + 0xfac0, 0xc0000 + 0xfae0 },
    { L"Terry C - Projectile6", 0xc0000 + 0xfae0, 0xc0000 + 0xfb00 },
};

const sGame_PaletteDataset Garou_S_TERRY_PALETTES_D[] =
{
    { L"Terry D - Main", 0xc0000 + 0xfb00, 0xc0000 + 0xfb20, indexGarouATerryBogard },
    { L"Terry D - Line1", 0xc0000 + 0xfb20, 0xc0000 + 0xfb40, indexGarouATerryBogard },
    { L"Terry D - Line2", 0xc0000 + 0xfb40, 0xc0000 + 0xfb60, indexGarouATerryBogard },
    { L"Terry D - On Fire", 0xc0000 + 0xfb60, 0xc0000 + 0xfb80, indexGarouATerryBogard },
    { L"Terry D - On Purple", 0xc0000 + 0xfb80, 0xc0000 + 0xfba0, indexGarouATerryBogard },
    { L"Terry D - Gold", 0xc0000 + 0xfba0, 0xc0000 + 0xfbc0, indexGarouATerryBogard },
    { L"Terry D - T.O.P.", 0xc0000 + 0xfbc0, 0xc0000 + 0xfbe0, indexGarouATerryBogard },
    { L"Terry D - Shade", 0xc0000 + 0xfbe0, 0xc0000 + 0xfc00, indexGarouATerryBogard },
    { L"Terry D - Dark Red", 0xc0000 + 0xfc00, 0xc0000 + 0xfc20, indexGarouATerryBogard },
    { L"Terry D - Blue", 0xc0000 + 0xfc20, 0xc0000 + 0xfc40, indexGarouATerryBogard },
    { L"Terry D - Projectile1", 0xc0000 + 0xfc40, 0xc0000 + 0xfc60 },
    { L"Terry D - Projectile2", 0xc0000 + 0xfc60, 0xc0000 + 0xfc80 },
    { L"Terry D - Projectile3", 0xc0000 + 0xfc80, 0xc0000 + 0xfca0 },
    { L"Terry D - Projectile4", 0xc0000 + 0xfca0, 0xc0000 + 0xfcc0 },
    { L"Terry D - Projectile5", 0xc0000 + 0xfcc0, 0xc0000 + 0xfce0 },
    { L"Terry D - Projectile6", 0xc0000 + 0xfce0, 0xc0000 + 0xfd00 },
};

const sGame_PaletteDataset Garou_S_TERRY_PALETTES_BOSS[] =
{
    { L"Terry Boss? - Main", 0xc0000 + 0xfd00, 0xc0000 + 0xfd20, indexGarouATerryBogard },
    { L"Terry Boss? - Line1", 0xc0000 + 0xfd20, 0xc0000 + 0xfd40, indexGarouATerryBogard },
    { L"Terry Boss? - Line2", 0xc0000 + 0xfd40, 0xc0000 + 0xfd60, indexGarouATerryBogard },
    { L"Terry Boss? - On Fire", 0xc0000 + 0xfd60, 0xc0000 + 0xfd80, indexGarouATerryBogard },
    { L"Terry Boss? - On Purple", 0xc0000 + 0xfd80, 0xc0000 + 0xfda0, indexGarouATerryBogard },
    { L"Terry Boss? - Gold", 0xc0000 + 0xfda0, 0xc0000 + 0xfdc0, indexGarouATerryBogard },
    { L"Terry Boss? - T.O.P.", 0xc0000 + 0xfdc0, 0xc0000 + 0xfde0, indexGarouATerryBogard },
    { L"Terry Boss? - Shade", 0xc0000 + 0xfde0, 0xc0000 + 0xfe00, indexGarouATerryBogard },
    { L"Terry Boss? - Dark Red", 0xc0000 + 0xfe00, 0xc0000 + 0xfe20, indexGarouATerryBogard },
    { L"Terry Boss? - Blue", 0xc0000 + 0xfe20, 0xc0000 + 0xfe40, indexGarouATerryBogard },
    { L"Terry Boss? - Projectile1", 0xc0000 + 0xfe40, 0xc0000 + 0xfe60 },
    { L"Terry Boss? - Projectile2", 0xc0000 + 0xfe60, 0xc0000 + 0xfe80 },
    { L"Terry Boss? - Projectile3", 0xc0000 + 0xfe80, 0xc0000 + 0xfea0 },
    { L"Terry Boss? - Projectile4", 0xc0000 + 0xfea0, 0xc0000 + 0xfec0 },
    { L"Terry Boss? - Projectile5", 0xc0000 + 0xfec0, 0xc0000 + 0xfee0 },
    { L"Terry Boss? - Projectile6", 0xc0000 + 0xfee0, 0xc0000 + 0xff00 },
};


const sGame_PaletteDataset Garou_S_DONG_PALETTES_A[] =
{
    { L"Dong Hwan A - Main", 0xc0000 + 0x10900, 0xc0000 + 0x10920, indexGarouADong },
    { L"Dong Hwan A - Line1", 0xc0000 + 0x10920, 0xc0000 + 0x10940, indexGarouADong },
    { L"Dong Hwan A - Line2", 0xc0000 + 0x10940, 0xc0000 + 0x10960, indexGarouADong },
    { L"Dong Hwan A - On Fire", 0xc0000 + 0x10960, 0xc0000 + 0x10980, indexGarouADong },
    { L"Dong Hwan A - On Purple", 0xc0000 + 0x10980, 0xc0000 + 0x109a0, indexGarouADong },
    { L"Dong Hwan A - Gold", 0xc0000 + 0x109a0, 0xc0000 + 0x109c0, indexGarouADong },
    { L"Dong Hwan A - T.O.P.", 0xc0000 + 0x109c0, 0xc0000 + 0x109e0, indexGarouADong },
    { L"Dong Hwan A - Shade", 0xc0000 + 0x109e0, 0xc0000 + 0x10a00, indexGarouADong },
    { L"Dong Hwan A - Dark Red", 0xc0000 + 0x10a00, 0xc0000 + 0x10a20, indexGarouADong },
    { L"Dong Hwan A - Blue", 0xc0000 + 0x10a20, 0xc0000 + 0x10a40, indexGarouADong },
    { L"Dong Hwan A - Projectile1", 0xc0000 + 0x10a40, 0xc0000 + 0x10a60 },
    { L"Dong Hwan A - Projectile2", 0xc0000 + 0x10a60, 0xc0000 + 0x10a80 },
    { L"Dong Hwan A - Projectile3", 0xc0000 + 0x10a80, 0xc0000 + 0x10aa0 },
    { L"Dong Hwan A - Projectile4", 0xc0000 + 0x10aa0, 0xc0000 + 0x10ac0 },
    { L"Dong Hwan A - Projectile5", 0xc0000 + 0x10ac0, 0xc0000 + 0x10ae0 },
    { L"Dong Hwan A - Projectile6", 0xc0000 + 0x10ae0, 0xc0000 + 0x10b00 },
};

const sGame_PaletteDataset Garou_S_DONG_PALETTES_B[] =
{
    { L"Dong Hwan B - Main", 0xc0000 + 0x10b00, 0xc0000 + 0x10b20, indexGarouADong },
    { L"Dong Hwan B - Line1", 0xc0000 + 0x10b20, 0xc0000 + 0x10b40, indexGarouADong },
    { L"Dong Hwan B - Line2", 0xc0000 + 0x10b40, 0xc0000 + 0x10b60, indexGarouADong },
    { L"Dong Hwan B - On Fire", 0xc0000 + 0x10b60, 0xc0000 + 0x10b80, indexGarouADong },
    { L"Dong Hwan B - On Purple", 0xc0000 + 0x10b80, 0xc0000 + 0x10ba0, indexGarouADong },
    { L"Dong Hwan B - Gold", 0xc0000 + 0x10ba0, 0xc0000 + 0x10bc0, indexGarouADong },
    { L"Dong Hwan B - T.O.P.", 0xc0000 + 0x10bc0, 0xc0000 + 0x10be0, indexGarouADong },
    { L"Dong Hwan B - Shade", 0xc0000 + 0x10be0, 0xc0000 + 0x10c00, indexGarouADong },
    { L"Dong Hwan B - Dark Red", 0xc0000 + 0x10c00, 0xc0000 + 0x10c20, indexGarouADong },
    { L"Dong Hwan B - Blue", 0xc0000 + 0x10c20, 0xc0000 + 0x10c40, indexGarouADong },
    { L"Dong Hwan B - Projectile1", 0xc0000 + 0x10c40, 0xc0000 + 0x10c60 },
    { L"Dong Hwan B - Projectile2", 0xc0000 + 0x10c60, 0xc0000 + 0x10c80 },
    { L"Dong Hwan B - Projectile3", 0xc0000 + 0x10c80, 0xc0000 + 0x10ca0 },
    { L"Dong Hwan B - Projectile4", 0xc0000 + 0x10ca0, 0xc0000 + 0x10cc0 },
    { L"Dong Hwan B - Projectile5", 0xc0000 + 0x10cc0, 0xc0000 + 0x10ce0 },
    { L"Dong Hwan B - Projectile6", 0xc0000 + 0x10ce0, 0xc0000 + 0x10d00 },
};

const sGame_PaletteDataset Garou_S_DONG_PALETTES_C[] =
{
    { L"Dong Hwan C - Main", 0xc0000 + 0x10d00, 0xc0000 + 0x10d20, indexGarouADong },
    { L"Dong Hwan C - Line1", 0xc0000 + 0x10d20, 0xc0000 + 0x10d40, indexGarouADong },
    { L"Dong Hwan C - Line2", 0xc0000 + 0x10d40, 0xc0000 + 0x10d60, indexGarouADong },
    { L"Dong Hwan C - On Fire", 0xc0000 + 0x10d60, 0xc0000 + 0x10d80, indexGarouADong },
    { L"Dong Hwan C - On Purple", 0xc0000 + 0x10d80, 0xc0000 + 0x10da0, indexGarouADong },
    { L"Dong Hwan C - Gold", 0xc0000 + 0x10da0, 0xc0000 + 0x10dc0, indexGarouADong },
    { L"Dong Hwan C - T.O.P.", 0xc0000 + 0x10dc0, 0xc0000 + 0x10de0, indexGarouADong },
    { L"Dong Hwan C - Shade", 0xc0000 + 0x10de0, 0xc0000 + 0x10e00, indexGarouADong },
    { L"Dong Hwan C - Dark Red", 0xc0000 + 0x10e00, 0xc0000 + 0x10e20, indexGarouADong },
    { L"Dong Hwan C - Blue", 0xc0000 + 0x10e20, 0xc0000 + 0x10e40, indexGarouADong },
    { L"Dong Hwan C - Projectile1", 0xc0000 + 0x10e40, 0xc0000 + 0x10e60 },
    { L"Dong Hwan C - Projectile2", 0xc0000 + 0x10e60, 0xc0000 + 0x10e80 },
    { L"Dong Hwan C - Projectile3", 0xc0000 + 0x10e80, 0xc0000 + 0x10ea0 },
    { L"Dong Hwan C - Projectile4", 0xc0000 + 0x10ea0, 0xc0000 + 0x10ec0 },
    { L"Dong Hwan C - Projectile5", 0xc0000 + 0x10ec0, 0xc0000 + 0x10ee0 },
    { L"Dong Hwan C - Projectile6", 0xc0000 + 0x10ee0, 0xc0000 + 0x10f00 },
};

const sGame_PaletteDataset Garou_S_DONG_PALETTES_D[] =
{
    { L"Dong Hwan D - Main", 0xc0000 + 0x10f00, 0xc0000 + 0x10f20, indexGarouADong },
    { L"Dong Hwan D - Line1", 0xc0000 + 0x10f20, 0xc0000 + 0x10f40, indexGarouADong },
    { L"Dong Hwan D - Line2", 0xc0000 + 0x10f40, 0xc0000 + 0x10f60, indexGarouADong },
    { L"Dong Hwan D - On Fire", 0xc0000 + 0x10f60, 0xc0000 + 0x10f80, indexGarouADong },
    { L"Dong Hwan D - On Purple", 0xc0000 + 0x10f80, 0xc0000 + 0x10fa0, indexGarouADong },
    { L"Dong Hwan D - Gold", 0xc0000 + 0x10fa0, 0xc0000 + 0x10fc0, indexGarouADong },
    { L"Dong Hwan D - T.O.P.", 0xc0000 + 0x10fc0, 0xc0000 + 0x10fe0, indexGarouADong },
    { L"Dong Hwan D - Shade", 0xc0000 + 0x10fe0, 0xc0000 + 0x11000, indexGarouADong },
    { L"Dong Hwan D - Dark Red", 0xc0000 + 0x11000, 0xc0000 + 0x11020, indexGarouADong },
    { L"Dong Hwan D - Blue", 0xc0000 + 0x11020, 0xc0000 + 0x11040, indexGarouADong },
    { L"Dong Hwan D - Projectile1", 0xc0000 + 0x11040, 0xc0000 + 0x11060 },
    { L"Dong Hwan D - Projectile2", 0xc0000 + 0x11060, 0xc0000 + 0x11080 },
    { L"Dong Hwan D - Projectile3", 0xc0000 + 0x11080, 0xc0000 + 0x110a0 },
    { L"Dong Hwan D - Projectile4", 0xc0000 + 0x110a0, 0xc0000 + 0x110c0 },
    { L"Dong Hwan D - Projectile5", 0xc0000 + 0x110c0, 0xc0000 + 0x110e0 },
    { L"Dong Hwan D - Projectile6", 0xc0000 + 0x110e0, 0xc0000 + 0x11100 },
};

const sGame_PaletteDataset Garou_S_DONG_PALETTES_BOSS[] =
{
    { L"Dong Hwan Boss? - Main", 0xc0000 + 0x11100, 0xc0000 + 0x11120, indexGarouADong },
    { L"Dong Hwan Boss? - Line1", 0xc0000 + 0x11120, 0xc0000 + 0x11140, indexGarouADong },
    { L"Dong Hwan Boss? - Line2", 0xc0000 + 0x11140, 0xc0000 + 0x11160, indexGarouADong },
    { L"Dong Hwan Boss? - On Fire", 0xc0000 + 0x11160, 0xc0000 + 0x11180, indexGarouADong },
    { L"Dong Hwan Boss? - On Purple", 0xc0000 + 0x11180, 0xc0000 + 0x111a0, indexGarouADong },
    { L"Dong Hwan Boss? - Gold", 0xc0000 + 0x111a0, 0xc0000 + 0x111c0, indexGarouADong },
    { L"Dong Hwan Boss? - T.O.P.", 0xc0000 + 0x111c0, 0xc0000 + 0x111e0, indexGarouADong },
    { L"Dong Hwan Boss? - Shade", 0xc0000 + 0x111e0, 0xc0000 + 0x11200, indexGarouADong },
    { L"Dong Hwan Boss? - Dark Red", 0xc0000 + 0x11200, 0xc0000 + 0x11220, indexGarouADong },
    { L"Dong Hwan Boss? - Blue", 0xc0000 + 0x11220, 0xc0000 + 0x11240, indexGarouADong },
    { L"Dong Hwan Boss? - Projectile1", 0xc0000 + 0x11240, 0xc0000 + 0x11260 },
    { L"Dong Hwan Boss? - Projectile2", 0xc0000 + 0x11260, 0xc0000 + 0x11280 },
    { L"Dong Hwan Boss? - Projectile3", 0xc0000 + 0x11280, 0xc0000 + 0x112a0 },
    { L"Dong Hwan Boss? - Projectile4", 0xc0000 + 0x112a0, 0xc0000 + 0x112c0 },
    { L"Dong Hwan Boss? - Projectile5", 0xc0000 + 0x112c0, 0xc0000 + 0x112e0 },
    { L"Dong Hwan Boss? - Projectile6", 0xc0000 + 0x112e0, 0xc0000 + 0x11300 },
};

const sGame_PaletteDataset Garou_S_JAE_PALETTES_A[] =
{
    { L"Jae Hoon A - Main", 0xc0000 + 0x11300, 0xc0000 + 0x11320, indexGarouAJae },
    { L"Jae Hoon A - Line1", 0xc0000 + 0x11320, 0xc0000 + 0x11340, indexGarouAJae },
    { L"Jae Hoon A - Line2", 0xc0000 + 0x11340, 0xc0000 + 0x11360, indexGarouAJae },
    { L"Jae Hoon A - On Fire", 0xc0000 + 0x11360, 0xc0000 + 0x11380, indexGarouAJae },
    { L"Jae Hoon A - On Purple", 0xc0000 + 0x11380, 0xc0000 + 0x113a0, indexGarouAJae },
    { L"Jae Hoon A - Gold", 0xc0000 + 0x113a0, 0xc0000 + 0x113c0, indexGarouAJae },
    { L"Jae Hoon A - T.O.P.", 0xc0000 + 0x113c0, 0xc0000 + 0x113e0, indexGarouAJae },
    { L"Jae Hoon A - Shade", 0xc0000 + 0x113e0, 0xc0000 + 0x11400, indexGarouAJae },
    { L"Jae Hoon A - Dark Red", 0xc0000 + 0x11400, 0xc0000 + 0x11420, indexGarouAJae },
    { L"Jae Hoon A - Blue", 0xc0000 + 0x11420, 0xc0000 + 0x11440, indexGarouAJae },
    { L"Jae Hoon A - Projectile1", 0xc0000 + 0x11440, 0xc0000 + 0x11460 },
    { L"Jae Hoon A - Projectile2", 0xc0000 + 0x11460, 0xc0000 + 0x11480 },
    { L"Jae Hoon A - Projectile3", 0xc0000 + 0x11480, 0xc0000 + 0x114a0 },
    { L"Jae Hoon A - Projectile4", 0xc0000 + 0x114a0, 0xc0000 + 0x114c0 },
    { L"Jae Hoon A - Projectile5", 0xc0000 + 0x114c0, 0xc0000 + 0x114e0 },
    { L"Jae Hoon A - Projectile6", 0xc0000 + 0x114e0, 0xc0000 + 0x11500 },
};

const sGame_PaletteDataset Garou_S_JAE_PALETTES_B[] =
{
    { L"Jae Hoon B - Main", 0xc0000 + 0x11500, 0xc0000 + 0x11520, indexGarouAJae },
    { L"Jae Hoon B - Line1", 0xc0000 + 0x11520, 0xc0000 + 0x11540, indexGarouAJae },
    { L"Jae Hoon B - Line2", 0xc0000 + 0x11540, 0xc0000 + 0x11560, indexGarouAJae },
    { L"Jae Hoon B - On Fire", 0xc0000 + 0x11560, 0xc0000 + 0x11580, indexGarouAJae },
    { L"Jae Hoon B - On Purple", 0xc0000 + 0x11580, 0xc0000 + 0x115a0, indexGarouAJae },
    { L"Jae Hoon B - Gold", 0xc0000 + 0x115a0, 0xc0000 + 0x115c0, indexGarouAJae },
    { L"Jae Hoon B - T.O.P.", 0xc0000 + 0x115c0, 0xc0000 + 0x115e0, indexGarouAJae },
    { L"Jae Hoon B - Shade", 0xc0000 + 0x115e0, 0xc0000 + 0x11600, indexGarouAJae },
    { L"Jae Hoon B - Dark Red", 0xc0000 + 0x11600, 0xc0000 + 0x11620, indexGarouAJae },
    { L"Jae Hoon B - Blue", 0xc0000 + 0x11620, 0xc0000 + 0x11640, indexGarouAJae },
    { L"Jae Hoon B - Projectile1", 0xc0000 + 0x11640, 0xc0000 + 0x11660 },
    { L"Jae Hoon B - Projectile2", 0xc0000 + 0x11660, 0xc0000 + 0x11680 },
    { L"Jae Hoon B - Projectile3", 0xc0000 + 0x11680, 0xc0000 + 0x116a0 },
    { L"Jae Hoon B - Projectile4", 0xc0000 + 0x116a0, 0xc0000 + 0x116c0 },
    { L"Jae Hoon B - Projectile5", 0xc0000 + 0x116c0, 0xc0000 + 0x116e0 },
    { L"Jae Hoon B - Projectile6", 0xc0000 + 0x116e0, 0xc0000 + 0x11700 },

};

const sGame_PaletteDataset Garou_S_JAE_PALETTES_C[] =
{
    { L"Jae Hoon C - Main", 0xc0000 + 0x11700, 0xc0000 + 0x11720, indexGarouAJae },
    { L"Jae Hoon C - Line1", 0xc0000 + 0x11720, 0xc0000 + 0x11740, indexGarouAJae },
    { L"Jae Hoon C - Line2", 0xc0000 + 0x11740, 0xc0000 + 0x11760, indexGarouAJae },
    { L"Jae Hoon C - On Fire", 0xc0000 + 0x11760, 0xc0000 + 0x11780, indexGarouAJae },
    { L"Jae Hoon C - On Purple", 0xc0000 + 0x11780, 0xc0000 + 0x117a0, indexGarouAJae },
    { L"Jae Hoon C - Gold", 0xc0000 + 0x117a0, 0xc0000 + 0x117c0, indexGarouAJae },
    { L"Jae Hoon C - T.O.P.", 0xc0000 + 0x117c0, 0xc0000 + 0x117e0, indexGarouAJae },
    { L"Jae Hoon C - Shade", 0xc0000 + 0x117e0, 0xc0000 + 0x11800, indexGarouAJae },
    { L"Jae Hoon C - Dark Red", 0xc0000 + 0x11800, 0xc0000 + 0x11820, indexGarouAJae },
    { L"Jae Hoon C - Blue", 0xc0000 + 0x11820, 0xc0000 + 0x11840, indexGarouAJae },
    { L"Jae Hoon C - Projectile1", 0xc0000 + 0x11840, 0xc0000 + 0x11860 },
    { L"Jae Hoon C - Projectile2", 0xc0000 + 0x11860, 0xc0000 + 0x11880 },
    { L"Jae Hoon C - Projectile3", 0xc0000 + 0x11880, 0xc0000 + 0x118a0 },
    { L"Jae Hoon C - Projectile4", 0xc0000 + 0x118a0, 0xc0000 + 0x118c0 },
    { L"Jae Hoon C - Projectile5", 0xc0000 + 0x118c0, 0xc0000 + 0x118e0 },
    { L"Jae Hoon C - Projectile6", 0xc0000 + 0x118e0, 0xc0000 + 0x11900 },
};

const sGame_PaletteDataset Garou_S_JAE_PALETTES_D[] =
{
    { L"Jae Hoon D - Main", 0xc0000 + 0x11900, 0xc0000 + 0x11920, indexGarouAJae },
    { L"Jae Hoon D - Line1", 0xc0000 + 0x11920, 0xc0000 + 0x11940, indexGarouAJae },
    { L"Jae Hoon D - Line2", 0xc0000 + 0x11940, 0xc0000 + 0x11960, indexGarouAJae },
    { L"Jae Hoon D - On Fire", 0xc0000 + 0x11960, 0xc0000 + 0x11980, indexGarouAJae },
    { L"Jae Hoon D - On Purple", 0xc0000 + 0x11980, 0xc0000 + 0x119a0, indexGarouAJae },
    { L"Jae Hoon D - Gold", 0xc0000 + 0x119a0, 0xc0000 + 0x119c0, indexGarouAJae },
    { L"Jae Hoon D - T.O.P.", 0xc0000 + 0x119c0, 0xc0000 + 0x119e0, indexGarouAJae },
    { L"Jae Hoon D - Shade", 0xc0000 + 0x119e0, 0xc0000 + 0x11a00, indexGarouAJae },
    { L"Jae Hoon D - Dark Red", 0xc0000 + 0x11a00, 0xc0000 + 0x11a20, indexGarouAJae },
    { L"Jae Hoon D - Blue", 0xc0000 + 0x11a20, 0xc0000 + 0x11a40, indexGarouAJae },
    { L"Jae Hoon D - Projectile1", 0xc0000 + 0x11a40, 0xc0000 + 0x11a60 },
    { L"Jae Hoon D - Projectile2", 0xc0000 + 0x11a60, 0xc0000 + 0x11a80 },
    { L"Jae Hoon D - Projectile3", 0xc0000 + 0x11a80, 0xc0000 + 0x11aa0 },
    { L"Jae Hoon D - Projectile4", 0xc0000 + 0x11aa0, 0xc0000 + 0x11ac0 },
    { L"Jae Hoon D - Projectile5", 0xc0000 + 0x11ac0, 0xc0000 + 0x11ae0 },
    { L"Jae Hoon D - Projectile6", 0xc0000 + 0x11ae0, 0xc0000 + 0x11b00 },

};

const sGame_PaletteDataset Garou_S_JAE_PALETTES_BOSS[] =
{
    { L"Jae Hoon Boss? - Main", 0xc0000 + 0x11b00, 0xc0000 + 0x11b20, indexGarouAJae },
    { L"Jae Hoon Boss? - Line1", 0xc0000 + 0x11b20, 0xc0000 + 0x11b40, indexGarouAJae },
    { L"Jae Hoon Boss? - Line2", 0xc0000 + 0x11b40, 0xc0000 + 0x11b60, indexGarouAJae },
    { L"Jae Hoon Boss? - On Fire", 0xc0000 + 0x11b60, 0xc0000 + 0x11b80, indexGarouAJae },
    { L"Jae Hoon Boss? - On Purple", 0xc0000 + 0x11b80, 0xc0000 + 0x11ba0, indexGarouAJae },
    { L"Jae Hoon Boss? - Gold", 0xc0000 + 0x11ba0, 0xc0000 + 0x11bc0, indexGarouAJae },
    { L"Jae Hoon Boss? - T.O.P.", 0xc0000 + 0x11bc0, 0xc0000 + 0x11be0, indexGarouAJae },
    { L"Jae Hoon Boss? - Shade", 0xc0000 + 0x11be0, 0xc0000 + 0x11c00, indexGarouAJae },
    { L"Jae Hoon Boss? - Dark Red", 0xc0000 + 0x11c00, 0xc0000 + 0x11c20, indexGarouAJae },
    { L"Jae Hoon Boss? - Blue", 0xc0000 + 0x11c20, 0xc0000 + 0x11c40, indexGarouAJae },
    { L"Jae Hoon Boss? - Projectile1", 0xc0000 + 0x11c40, 0xc0000 + 0x11c60 },
    { L"Jae Hoon Boss? - Projectile2", 0xc0000 + 0x11c60, 0xc0000 + 0x11c80 },
    { L"Jae Hoon Boss? - Projectile3", 0xc0000 + 0x11c80, 0xc0000 + 0x11ca0 },
    { L"Jae Hoon Boss? - Projectile4", 0xc0000 + 0x11ca0, 0xc0000 + 0x11cc0 },
    { L"Jae Hoon Boss? - Projectile5", 0xc0000 + 0x11cc0, 0xc0000 + 0x11ce0 },
    { L"Jae Hoon Boss? - Projectile6", 0xc0000 + 0x11ce0, 0xc0000 + 0x11d00 },
};


const sGame_PaletteDataset Garou_S_HOTARU_PALETTES_A[] =
{
    { L"Hotaru A - Main", 0xc0000 + 0x11d00, 0xc0000 + 0x11d20, indexGarouAHotaru },
    { L"Hotaru A - Line1", 0xc0000 + 0x11d20, 0xc0000 + 0x11d40, indexGarouAHotaru },
    { L"Hotaru A - Line2", 0xc0000 + 0x11d40, 0xc0000 + 0x11d60, indexGarouAHotaru },
    { L"Hotaru A - On Fire", 0xc0000 + 0x11d60, 0xc0000 + 0x11d80, indexGarouAHotaru },
    { L"Hotaru A - On Purple", 0xc0000 + 0x11d80, 0xc0000 + 0x11da0, indexGarouAHotaru },
    { L"Hotaru A - Gold", 0xc0000 + 0x11da0, 0xc0000 + 0x11dc0, indexGarouAHotaru },
    { L"Hotaru A - T.O.P.", 0xc0000 + 0x11dc0, 0xc0000 + 0x11de0, indexGarouAHotaru },
    { L"Hotaru A - Shade", 0xc0000 + 0x11de0, 0xc0000 + 0x11e00, indexGarouAHotaru },
    { L"Hotaru A - Dark Red", 0xc0000 + 0x11e00, 0xc0000 + 0x11e20, indexGarouAHotaru },
    { L"Hotaru A - Blue", 0xc0000 + 0x11e20, 0xc0000 + 0x11e40, indexGarouAHotaru },
    { L"Hotaru A - Projectile1", 0xc0000 + 0x11e40, 0xc0000 + 0x11e60 },
    { L"Hotaru A - Projectile2", 0xc0000 + 0x11e60, 0xc0000 + 0x11e80 },
    { L"Hotaru A - Projectile3", 0xc0000 + 0x11e80, 0xc0000 + 0x11ea0 },
    { L"Hotaru A - Projectile4", 0xc0000 + 0x11ea0, 0xc0000 + 0x11ec0 },
    { L"Hotaru A - Projectile5", 0xc0000 + 0x11ec0, 0xc0000 + 0x11ee0 },
    { L"Hotaru A - Projectile6", 0xc0000 + 0x11ee0, 0xc0000 + 0x11f00 },
};

const sGame_PaletteDataset Garou_S_HOTARU_PALETTES_B[] =
{
    { L"Hotaru B - Main", 0xc0000 + 0x11f00, 0xc0000 + 0x11f20, indexGarouAHotaru },
    { L"Hotaru B - Line1", 0xc0000 + 0x11f20, 0xc0000 + 0x11f40, indexGarouAHotaru },
    { L"Hotaru B - Line2", 0xc0000 + 0x11f40, 0xc0000 + 0x11f60, indexGarouAHotaru },
    { L"Hotaru B - On Fire", 0xc0000 + 0x11f60, 0xc0000 + 0x11f80, indexGarouAHotaru },
    { L"Hotaru B - On Purple", 0xc0000 + 0x11f80, 0xc0000 + 0x11fa0, indexGarouAHotaru },
    { L"Hotaru B - Gold", 0xc0000 + 0x11fa0, 0xc0000 + 0x11fc0, indexGarouAHotaru },
    { L"Hotaru B - T.O.P.", 0xc0000 + 0x11fc0, 0xc0000 + 0x11fe0, indexGarouAHotaru },
    { L"Hotaru B - Shade", 0xc0000 + 0x11fe0, 0xc0000 + 0x12000, indexGarouAHotaru },
    { L"Hotaru B - Dark Red", 0xc0000 + 0x12000, 0xc0000 + 0x12020, indexGarouAHotaru },
    { L"Hotaru B - Blue", 0xc0000 + 0x12020, 0xc0000 + 0x12040, indexGarouAHotaru },
    { L"Hotaru B - Projectile1", 0xc0000 + 0x12040, 0xc0000 + 0x12060 },
    { L"Hotaru B - Projectile2", 0xc0000 + 0x12060, 0xc0000 + 0x12080 },
    { L"Hotaru B - Projectile3", 0xc0000 + 0x12080, 0xc0000 + 0x120a0 },
    { L"Hotaru B - Projectile4", 0xc0000 + 0x120a0, 0xc0000 + 0x120c0 },
    { L"Hotaru B - Projectile5", 0xc0000 + 0x120c0, 0xc0000 + 0x120e0 },
    { L"Hotaru B - Projectile6", 0xc0000 + 0x120e0, 0xc0000 + 0x12100 },
};

const sGame_PaletteDataset Garou_S_HOTARU_PALETTES_C[] =
{
    { L"Hotaru C - Main", 0xc0000 + 0x12100, 0xc0000 + 0x12120, indexGarouAHotaru },
    { L"Hotaru C - Line1", 0xc0000 + 0x12120, 0xc0000 + 0x12140, indexGarouAHotaru },
    { L"Hotaru C - Line2", 0xc0000 + 0x12140, 0xc0000 + 0x12160, indexGarouAHotaru },
    { L"Hotaru C - On Fire", 0xc0000 + 0x12160, 0xc0000 + 0x12180, indexGarouAHotaru },
    { L"Hotaru C - On Purple", 0xc0000 + 0x12180, 0xc0000 + 0x121a0, indexGarouAHotaru },
    { L"Hotaru C - Gold", 0xc0000 + 0x121a0, 0xc0000 + 0x121c0, indexGarouAHotaru },
    { L"Hotaru C - T.O.P.", 0xc0000 + 0x121c0, 0xc0000 + 0x121e0, indexGarouAHotaru },
    { L"Hotaru C - Shade", 0xc0000 + 0x121e0, 0xc0000 + 0x12200, indexGarouAHotaru },
    { L"Hotaru C - Dark Red", 0xc0000 + 0x12200, 0xc0000 + 0x12220, indexGarouAHotaru },
    { L"Hotaru C - Blue", 0xc0000 + 0x12220, 0xc0000 + 0x12240, indexGarouAHotaru },
    { L"Hotaru C - Projectile1", 0xc0000 + 0x12240, 0xc0000 + 0x12260 },
    { L"Hotaru C - Projectile2", 0xc0000 + 0x12260, 0xc0000 + 0x12280 },
    { L"Hotaru C - Projectile3", 0xc0000 + 0x12280, 0xc0000 + 0x122a0 },
    { L"Hotaru C - Projectile4", 0xc0000 + 0x122a0, 0xc0000 + 0x122c0 },
    { L"Hotaru C - Projectile5", 0xc0000 + 0x122c0, 0xc0000 + 0x122e0 },
    { L"Hotaru C - Projectile6", 0xc0000 + 0x122e0, 0xc0000 + 0x12300 },
};

const sGame_PaletteDataset Garou_S_HOTARU_PALETTES_D[] =
{
    { L"Hotaru D - Main", 0xc0000 + 0x12300, 0xc0000 + 0x12320, indexGarouAHotaru },
    { L"Hotaru D - Line1", 0xc0000 + 0x12320, 0xc0000 + 0x12340, indexGarouAHotaru },
    { L"Hotaru D - Line2", 0xc0000 + 0x12340, 0xc0000 + 0x12360, indexGarouAHotaru },
    { L"Hotaru D - On Fire", 0xc0000 + 0x12360, 0xc0000 + 0x12380, indexGarouAHotaru },
    { L"Hotaru D - On Purple", 0xc0000 + 0x12380, 0xc0000 + 0x123a0, indexGarouAHotaru },
    { L"Hotaru D - Gold", 0xc0000 + 0x123a0, 0xc0000 + 0x123c0, indexGarouAHotaru },
    { L"Hotaru D - T.O.P.", 0xc0000 + 0x123c0, 0xc0000 + 0x123e0, indexGarouAHotaru },
    { L"Hotaru D - Shade", 0xc0000 + 0x123e0, 0xc0000 + 0x12400, indexGarouAHotaru },
    { L"Hotaru D - Dark Red", 0xc0000 + 0x12400, 0xc0000 + 0x12420, indexGarouAHotaru },
    { L"Hotaru D - Blue", 0xc0000 + 0x12420, 0xc0000 + 0x12440, indexGarouAHotaru },
    { L"Hotaru D - Projectile1", 0xc0000 + 0x12440, 0xc0000 + 0x12460 },
    { L"Hotaru D - Projectile2", 0xc0000 + 0x12460, 0xc0000 + 0x12480 },
    { L"Hotaru D - Projectile3", 0xc0000 + 0x12480, 0xc0000 + 0x124a0 },
    { L"Hotaru D - Projectile4", 0xc0000 + 0x124a0, 0xc0000 + 0x124c0 },
    { L"Hotaru D - Projectile5", 0xc0000 + 0x124c0, 0xc0000 + 0x124e0 },
    { L"Hotaru D - Projectile6", 0xc0000 + 0x124e0, 0xc0000 + 0x12500 },
};

const sGame_PaletteDataset Garou_S_HOTARU_PALETTES_BOSS[] =
{
    { L"Hotaru Boss? - Main", 0xc0000 + 0x12500, 0xc0000 + 0x12520, indexGarouAHotaru },
    { L"Hotaru Boss? - Line1", 0xc0000 + 0x12520, 0xc0000 + 0x12540, indexGarouAHotaru },
    { L"Hotaru Boss? - Line2", 0xc0000 + 0x12540, 0xc0000 + 0x12560, indexGarouAHotaru },
    { L"Hotaru Boss? - On Fire", 0xc0000 + 0x12560, 0xc0000 + 0x12580, indexGarouAHotaru },
    { L"Hotaru Boss? - On Purple", 0xc0000 + 0x12580, 0xc0000 + 0x125a0, indexGarouAHotaru },
    { L"Hotaru Boss? - Gold", 0xc0000 + 0x125a0, 0xc0000 + 0x125c0, indexGarouAHotaru },
    { L"Hotaru Boss? - T.O.P.", 0xc0000 + 0x125c0, 0xc0000 + 0x125e0, indexGarouAHotaru },
    { L"Hotaru Boss? - Shade", 0xc0000 + 0x125e0, 0xc0000 + 0x12600, indexGarouAHotaru },
    { L"Hotaru Boss? - Dark Red", 0xc0000 + 0x12600, 0xc0000 + 0x12620, indexGarouAHotaru },
    { L"Hotaru Boss? - Blue", 0xc0000 + 0x12620, 0xc0000 + 0x12640, indexGarouAHotaru },
    { L"Hotaru Boss? - Projectile1", 0xc0000 + 0x12640, 0xc0000 + 0x12660 },
    { L"Hotaru Boss? - Projectile2", 0xc0000 + 0x12660, 0xc0000 + 0x12680 },
    { L"Hotaru Boss? - Projectile3", 0xc0000 + 0x12680, 0xc0000 + 0x126a0 },
    { L"Hotaru Boss? - Projectile4", 0xc0000 + 0x126a0, 0xc0000 + 0x126c0 },
    { L"Hotaru Boss? - Projectile5", 0xc0000 + 0x126c0, 0xc0000 + 0x126e0 },
    { L"Hotaru Boss? - Projectile6", 0xc0000 + 0x126e0, 0xc0000 + 0x12700 },
};

const sGame_PaletteDataset Garou_S_GATO_PALETTES_A[] =
{
    { L"Gato A - Main", 0xc0000 + 0x12700, 0xc0000 + 0x12720, indexGarouAGato },
    { L"Gato A - Line1", 0xc0000 + 0x12720, 0xc0000 + 0x12740, indexGarouAGato },
    { L"Gato A - Line2", 0xc0000 + 0x12740, 0xc0000 + 0x12760, indexGarouAGato },
    { L"Gato A - On Fire", 0xc0000 + 0x12760, 0xc0000 + 0x12780, indexGarouAGato },
    { L"Gato A - On Purple", 0xc0000 + 0x12780, 0xc0000 + 0x127a0, indexGarouAGato },
    { L"Gato A - Gold", 0xc0000 + 0x127a0, 0xc0000 + 0x127c0, indexGarouAGato },
    { L"Gato A - T.O.P.", 0xc0000 + 0x127c0, 0xc0000 + 0x127e0, indexGarouAGato },
    { L"Gato A - Shade", 0xc0000 + 0x127e0, 0xc0000 + 0x12800, indexGarouAGato },
    { L"Gato A - Dark Red", 0xc0000 + 0x12800, 0xc0000 + 0x12820, indexGarouAGato },
    { L"Gato A - Blue", 0xc0000 + 0x12820, 0xc0000 + 0x12840, indexGarouAGato },
    { L"Gato A - Projectile1", 0xc0000 + 0x12840, 0xc0000 + 0x12860 },
    { L"Gato A - Projectile2", 0xc0000 + 0x12860, 0xc0000 + 0x12880 },
    { L"Gato A - Projectile3", 0xc0000 + 0x12880, 0xc0000 + 0x128a0 },
    { L"Gato A - Projectile4", 0xc0000 + 0x128a0, 0xc0000 + 0x128c0 },
    { L"Gato A - Projectile5", 0xc0000 + 0x128c0, 0xc0000 + 0x128e0 },
    { L"Gato A - Projectile6", 0xc0000 + 0x128e0, 0xc0000 + 0x12900 },
};

const sGame_PaletteDataset Garou_S_GATO_PALETTES_B[] =
{
    { L"Gato B - Main", 0xc0000 + 0x12900, 0xc0000 + 0x12920, indexGarouAGato },
    { L"Gato B - Line1", 0xc0000 + 0x12920, 0xc0000 + 0x12940, indexGarouAGato },
    { L"Gato B - Line2", 0xc0000 + 0x12940, 0xc0000 + 0x12960, indexGarouAGato },
    { L"Gato B - On Fire", 0xc0000 + 0x12960, 0xc0000 + 0x12980, indexGarouAGato },
    { L"Gato B - On Purple", 0xc0000 + 0x12980, 0xc0000 + 0x129a0, indexGarouAGato },
    { L"Gato B - Gold", 0xc0000 + 0x129a0, 0xc0000 + 0x129c0, indexGarouAGato },
    { L"Gato B - T.O.P.", 0xc0000 + 0x129c0, 0xc0000 + 0x129e0, indexGarouAGato },
    { L"Gato B - Shade", 0xc0000 + 0x129e0, 0xc0000 + 0x12a00, indexGarouAGato },
    { L"Gato B - Dark Red", 0xc0000 + 0x12a00, 0xc0000 + 0x12a20, indexGarouAGato },
    { L"Gato B - Blue", 0xc0000 + 0x12a20, 0xc0000 + 0x12a40, indexGarouAGato },
    { L"Gato B - Projectile1", 0xc0000 + 0x12a40, 0xc0000 + 0x12a60 },
    { L"Gato B - Projectile2", 0xc0000 + 0x12a60, 0xc0000 + 0x12a80 },
    { L"Gato B - Projectile3", 0xc0000 + 0x12a80, 0xc0000 + 0x12aa0 },
    { L"Gato B - Projectile4", 0xc0000 + 0x12aa0, 0xc0000 + 0x12ac0 },
    { L"Gato B - Projectile5", 0xc0000 + 0x12ac0, 0xc0000 + 0x12ae0 },
    { L"Gato B - Projectile6", 0xc0000 + 0x12ae0, 0xc0000 + 0x12b00 },
};

const sGame_PaletteDataset Garou_S_GATO_PALETTES_C[] =
{
    { L"Gato C - Main", 0xc0000 + 0x12b00, 0xc0000 + 0x12b20, indexGarouAGato },
    { L"Gato C - Line1", 0xc0000 + 0x12b20, 0xc0000 + 0x12b40, indexGarouAGato },
    { L"Gato C - Line2", 0xc0000 + 0x12b40, 0xc0000 + 0x12b60, indexGarouAGato },
    { L"Gato C - On Fire", 0xc0000 + 0x12b60, 0xc0000 + 0x12b80, indexGarouAGato },
    { L"Gato C - On Purple", 0xc0000 + 0x12b80, 0xc0000 + 0x12ba0, indexGarouAGato },
    { L"Gato C - Gold", 0xc0000 + 0x12ba0, 0xc0000 + 0x12bc0, indexGarouAGato },
    { L"Gato C - T.O.P.", 0xc0000 + 0x12bc0, 0xc0000 + 0x12be0, indexGarouAGato },
    { L"Gato C - Shade", 0xc0000 + 0x12be0, 0xc0000 + 0x12c00, indexGarouAGato },
    { L"Gato C - Dark Red", 0xc0000 + 0x12c00, 0xc0000 + 0x12c20, indexGarouAGato },
    { L"Gato C - Blue", 0xc0000 + 0x12c20, 0xc0000 + 0x12c40, indexGarouAGato },
    { L"Gato C - Projectile1", 0xc0000 + 0x12c40, 0xc0000 + 0x12c60 },
    { L"Gato C - Projectile2", 0xc0000 + 0x12c60, 0xc0000 + 0x12c80 },
    { L"Gato C - Projectile3", 0xc0000 + 0x12c80, 0xc0000 + 0x12ca0 },
    { L"Gato C - Projectile4", 0xc0000 + 0x12ca0, 0xc0000 + 0x12cc0 },
    { L"Gato C - Projectile5", 0xc0000 + 0x12cc0, 0xc0000 + 0x12ce0 },
    { L"Gato C - Projectile6", 0xc0000 + 0x12ce0, 0xc0000 + 0x12d00 },
};

const sGame_PaletteDataset Garou_S_GATO_PALETTES_D[] =
{
    { L"Gato D - Main", 0xc0000 + 0x12d00, 0xc0000 + 0x12d20, indexGarouAGato },
    { L"Gato D - Line1", 0xc0000 + 0x12d20, 0xc0000 + 0x12d40, indexGarouAGato },
    { L"Gato D - Line2", 0xc0000 + 0x12d40, 0xc0000 + 0x12d60, indexGarouAGato },
    { L"Gato D - On Fire", 0xc0000 + 0x12d60, 0xc0000 + 0x12d80, indexGarouAGato },
    { L"Gato D - On Purple", 0xc0000 + 0x12d80, 0xc0000 + 0x12da0, indexGarouAGato },
    { L"Gato D - Gold", 0xc0000 + 0x12da0, 0xc0000 + 0x12dc0, indexGarouAGato },
    { L"Gato D - T.O.P.", 0xc0000 + 0x12dc0, 0xc0000 + 0x12de0, indexGarouAGato },
    { L"Gato D - Shade", 0xc0000 + 0x12de0, 0xc0000 + 0x12e00, indexGarouAGato },
    { L"Gato D - Dark Red", 0xc0000 + 0x12e00, 0xc0000 + 0x12e20, indexGarouAGato },
    { L"Gato D - Blue", 0xc0000 + 0x12e20, 0xc0000 + 0x12e40, indexGarouAGato },
    { L"Gato D - Projectile1", 0xc0000 + 0x12e40, 0xc0000 + 0x12e60 },
    { L"Gato D - Projectile2", 0xc0000 + 0x12e60, 0xc0000 + 0x12e80 },
    { L"Gato D - Projectile3", 0xc0000 + 0x12e80, 0xc0000 + 0x12ea0 },
    { L"Gato D - Projectile4", 0xc0000 + 0x12ea0, 0xc0000 + 0x12ec0 },
    { L"Gato D - Projectile5", 0xc0000 + 0x12ec0, 0xc0000 + 0x12ee0 },
    { L"Gato D - Projectile6", 0xc0000 + 0x12ee0, 0xc0000 + 0x12f00 },
};

const sGame_PaletteDataset Garou_S_GATO_PALETTES_BOSS[] =
{
    { L"Gato Boss? - Main", 0xc0000 + 0x12f00, 0xc0000 + 0x12f20, indexGarouAGato },
    { L"Gato Boss? - Line1", 0xc0000 + 0x12f20, 0xc0000 + 0x12f40, indexGarouAGato },
    { L"Gato Boss? - Line2", 0xc0000 + 0x12f40, 0xc0000 + 0x12f60, indexGarouAGato },
    { L"Gato Boss? - On Fire", 0xc0000 + 0x12f60, 0xc0000 + 0x12f80, indexGarouAGato },
    { L"Gato Boss? - On Purple", 0xc0000 + 0x12f80, 0xc0000 + 0x12fa0, indexGarouAGato },
    { L"Gato Boss? - Gold", 0xc0000 + 0x12fa0, 0xc0000 + 0x12fc0, indexGarouAGato },
    { L"Gato Boss? - T.O.P.", 0xc0000 + 0x12fc0, 0xc0000 + 0x12fe0, indexGarouAGato },
    { L"Gato Boss? - Shade", 0xc0000 + 0x12fe0, 0xc0000 + 0x13000, indexGarouAGato },
    { L"Gato Boss? - Dark Red", 0xc0000 + 0x13000, 0xc0000 + 0x13020, indexGarouAGato },
    { L"Gato Boss? - Blue", 0xc0000 + 0x13020, 0xc0000 + 0x13040, indexGarouAGato },
    { L"Gato Boss? - Projectile1", 0xc0000 + 0x13040, 0xc0000 + 0x13060 },
    { L"Gato Boss? - Projectile2", 0xc0000 + 0x13060, 0xc0000 + 0x13080 },
    { L"Gato Boss? - Projectile3", 0xc0000 + 0x13080, 0xc0000 + 0x130a0 },
    { L"Gato Boss? - Projectile4", 0xc0000 + 0x130a0, 0xc0000 + 0x130c0 },
    { L"Gato Boss? - Projectile5", 0xc0000 + 0x130c0, 0xc0000 + 0x130e0 },
    { L"Gato Boss? - Projectile6", 0xc0000 + 0x130e0, 0xc0000 + 0x13100 },
};


const sGame_PaletteDataset Garou_S_KEVIN_PALETTES_A[] =
{
    { L"Kevin A - Main", 0xc0000 + 0x13100, 0xc0000 + 0x13120, indexGarouAKevin },
    { L"Kevin A - Line1", 0xc0000 + 0x13120, 0xc0000 + 0x13140, indexGarouAKevin },
    { L"Kevin A - Line2", 0xc0000 + 0x13140, 0xc0000 + 0x13160, indexGarouAKevin },
    { L"Kevin A - On Fire", 0xc0000 + 0x13160, 0xc0000 + 0x13180, indexGarouAKevin },
    { L"Kevin A - On Purple", 0xc0000 + 0x13180, 0xc0000 + 0x131a0, indexGarouAKevin },
    { L"Kevin A - Gold", 0xc0000 + 0x131a0, 0xc0000 + 0x131c0, indexGarouAKevin },
    { L"Kevin A - T.O.P.", 0xc0000 + 0x131c0, 0xc0000 + 0x131e0, indexGarouAKevin },
    { L"Kevin A - Shade", 0xc0000 + 0x131e0, 0xc0000 + 0x13200, indexGarouAKevin },
    { L"Kevin A - Dark Red", 0xc0000 + 0x13200, 0xc0000 + 0x13220, indexGarouAKevin },
    { L"Kevin A - Blue", 0xc0000 + 0x13220, 0xc0000 + 0x13240, indexGarouAKevin },
    { L"Kevin A - Projectile1", 0xc0000 + 0x13240, 0xc0000 + 0x13260 },
    { L"Kevin A - Projectile2", 0xc0000 + 0x13260, 0xc0000 + 0x13280 },
    { L"Kevin A - Projectile3", 0xc0000 + 0x13280, 0xc0000 + 0x132a0 },
    { L"Kevin A - Projectile4", 0xc0000 + 0x132a0, 0xc0000 + 0x132c0 },
    { L"Kevin A - Projectile5", 0xc0000 + 0x132c0, 0xc0000 + 0x132e0 },
    { L"Kevin A - Projectile6", 0xc0000 + 0x132e0, 0xc0000 + 0x13300 },
};

const sGame_PaletteDataset Garou_S_KEVIN_PALETTES_B[] =
{
    { L"Kevin B - Main", 0xc0000 + 0x13300, 0xc0000 + 0x13320, indexGarouAKevin },
    { L"Kevin B - Line1", 0xc0000 + 0x13320, 0xc0000 + 0x13340, indexGarouAKevin },
    { L"Kevin B - Line2", 0xc0000 + 0x13340, 0xc0000 + 0x13360, indexGarouAKevin },
    { L"Kevin B - On Fire", 0xc0000 + 0x13360, 0xc0000 + 0x13380, indexGarouAKevin },
    { L"Kevin B - On Purple", 0xc0000 + 0x13380, 0xc0000 + 0x133a0, indexGarouAKevin },
    { L"Kevin B - Gold", 0xc0000 + 0x133a0, 0xc0000 + 0x133c0, indexGarouAKevin },
    { L"Kevin B - T.O.P.", 0xc0000 + 0x133c0, 0xc0000 + 0x133e0, indexGarouAKevin },
    { L"Kevin B - Shade", 0xc0000 + 0x133e0, 0xc0000 + 0x13400, indexGarouAKevin },
    { L"Kevin B - Dark Red", 0xc0000 + 0x13400, 0xc0000 + 0x13420, indexGarouAKevin },
    { L"Kevin B - Blue", 0xc0000 + 0x13420, 0xc0000 + 0x13440, indexGarouAKevin },
    { L"Kevin B - Projectile1", 0xc0000 + 0x13440, 0xc0000 + 0x13460 },
    { L"Kevin B - Projectile2", 0xc0000 + 0x13460, 0xc0000 + 0x13480 },
    { L"Kevin B - Projectile3", 0xc0000 + 0x13480, 0xc0000 + 0x134a0 },
    { L"Kevin B - Projectile4", 0xc0000 + 0x134a0, 0xc0000 + 0x134c0 },
    { L"Kevin B - Projectile5", 0xc0000 + 0x134c0, 0xc0000 + 0x134e0 },
    { L"Kevin B - Projectile6", 0xc0000 + 0x134e0, 0xc0000 + 0x13500 },
};

const sGame_PaletteDataset Garou_S_KEVIN_PALETTES_C[] =
{
    { L"Kevin C - Main", 0xc0000 + 0x13500, 0xc0000 + 0x13520, indexGarouAKevin },
    { L"Kevin C - Line1", 0xc0000 + 0x13520, 0xc0000 + 0x13540, indexGarouAKevin },
    { L"Kevin C - Line2", 0xc0000 + 0x13540, 0xc0000 + 0x13560, indexGarouAKevin },
    { L"Kevin C - On Fire", 0xc0000 + 0x13560, 0xc0000 + 0x13580, indexGarouAKevin },
    { L"Kevin C - On Purple", 0xc0000 + 0x13580, 0xc0000 + 0x135a0, indexGarouAKevin },
    { L"Kevin C - Gold", 0xc0000 + 0x135a0, 0xc0000 + 0x135c0, indexGarouAKevin },
    { L"Kevin C - T.O.P.", 0xc0000 + 0x135c0, 0xc0000 + 0x135e0, indexGarouAKevin },
    { L"Kevin C - Shade", 0xc0000 + 0x135e0, 0xc0000 + 0x13600, indexGarouAKevin },
    { L"Kevin C - Dark Red", 0xc0000 + 0x13600, 0xc0000 + 0x13620, indexGarouAKevin },
    { L"Kevin C - Blue", 0xc0000 + 0x13620, 0xc0000 + 0x13640, indexGarouAKevin },
    { L"Kevin C - Projectile1", 0xc0000 + 0x13640, 0xc0000 + 0x13660 },
    { L"Kevin C - Projectile2", 0xc0000 + 0x13660, 0xc0000 + 0x13680 },
    { L"Kevin C - Projectile3", 0xc0000 + 0x13680, 0xc0000 + 0x136a0 },
    { L"Kevin C - Projectile4", 0xc0000 + 0x136a0, 0xc0000 + 0x136c0 },
    { L"Kevin C - Projectile5", 0xc0000 + 0x136c0, 0xc0000 + 0x136e0 },
    { L"Kevin C - Projectile6", 0xc0000 + 0x136e0, 0xc0000 + 0x13700 },
};

const sGame_PaletteDataset Garou_S_KEVIN_PALETTES_D[] =
{
    { L"Kevin D - Main", 0xc0000 + 0x13700, 0xc0000 + 0x13720, indexGarouAKevin },
    { L"Kevin D - Line1", 0xc0000 + 0x13720, 0xc0000 + 0x13740, indexGarouAKevin },
    { L"Kevin D - Line2", 0xc0000 + 0x13740, 0xc0000 + 0x13760, indexGarouAKevin },
    { L"Kevin D - On Fire", 0xc0000 + 0x13760, 0xc0000 + 0x13780, indexGarouAKevin },
    { L"Kevin D - On Purple", 0xc0000 + 0x13780, 0xc0000 + 0x137a0, indexGarouAKevin },
    { L"Kevin D - Gold", 0xc0000 + 0x137a0, 0xc0000 + 0x137c0, indexGarouAKevin },
    { L"Kevin D - T.O.P.", 0xc0000 + 0x137c0, 0xc0000 + 0x137e0, indexGarouAKevin },
    { L"Kevin D - Shade", 0xc0000 + 0x137e0, 0xc0000 + 0x13800, indexGarouAKevin },
    { L"Kevin D - Dark Red", 0xc0000 + 0x13800, 0xc0000 + 0x13820, indexGarouAKevin },
    { L"Kevin D - Blue", 0xc0000 + 0x13820, 0xc0000 + 0x13840, indexGarouAKevin },
    { L"Kevin D - Projectile1", 0xc0000 + 0x13840, 0xc0000 + 0x13860 },
    { L"Kevin D - Projectile2", 0xc0000 + 0x13860, 0xc0000 + 0x13880 },
    { L"Kevin D - Projectile3", 0xc0000 + 0x13880, 0xc0000 + 0x138a0 },
    { L"Kevin D - Projectile4", 0xc0000 + 0x138a0, 0xc0000 + 0x138c0 },
    { L"Kevin D - Projectile5", 0xc0000 + 0x138c0, 0xc0000 + 0x138e0 },
    { L"Kevin D - Projectile6", 0xc0000 + 0x138e0, 0xc0000 + 0x13900 },
};

const sGame_PaletteDataset Garou_S_KEVIN_PALETTES_BOSS[] =
{
    { L"Kevin Boss? - Main", 0xc0000 + 0x13900, 0xc0000 + 0x13920, indexGarouAKevin },
    { L"Kevin Boss? - Line1", 0xc0000 + 0x13920, 0xc0000 + 0x13940, indexGarouAKevin },
    { L"Kevin Boss? - Line2", 0xc0000 + 0x13940, 0xc0000 + 0x13960, indexGarouAKevin },
    { L"Kevin Boss? - On Fire", 0xc0000 + 0x13960, 0xc0000 + 0x13980, indexGarouAKevin },
    { L"Kevin Boss? - On Purple", 0xc0000 + 0x13980, 0xc0000 + 0x139a0, indexGarouAKevin },
    { L"Kevin Boss? - Gold", 0xc0000 + 0x139a0, 0xc0000 + 0x139c0, indexGarouAKevin },
    { L"Kevin Boss? - T.O.P.", 0xc0000 + 0x139c0, 0xc0000 + 0x139e0, indexGarouAKevin },
    { L"Kevin Boss? - Shade", 0xc0000 + 0x139e0, 0xc0000 + 0x13a00, indexGarouAKevin },
    { L"Kevin Boss? - Dark Red", 0xc0000 + 0x13a00, 0xc0000 + 0x13a20, indexGarouAKevin },
    { L"Kevin Boss? - Blue", 0xc0000 + 0x13a20, 0xc0000 + 0x13a40, indexGarouAKevin },
    { L"Kevin Boss? - Projectile1", 0xc0000 + 0x13a40, 0xc0000 + 0x13a60 },
    { L"Kevin Boss? - Projectile2", 0xc0000 + 0x13a60, 0xc0000 + 0x13a80 },
    { L"Kevin Boss? - Projectile3", 0xc0000 + 0x13a80, 0xc0000 + 0x13aa0 },
    { L"Kevin Boss? - Projectile4", 0xc0000 + 0x13aa0, 0xc0000 + 0x13ac0 },
    { L"Kevin Boss? - Projectile5", 0xc0000 + 0x13ac0, 0xc0000 + 0x13ae0 },
    { L"Kevin Boss? - Projectile6", 0xc0000 + 0x13ae0, 0xc0000 + 0x13b00 },
};

const sGame_PaletteDataset Garou_S_GRANT_PALETTES_A[] =
{
    { L"Grant A - Main", 0xc0000 + 0x13b00, 0xc0000 + 0x13b20, indexGarouAGrant },
    { L"Grant A - Line1", 0xc0000 + 0x13b20, 0xc0000 + 0x13b40, indexGarouAGrant },
    { L"Grant A - Line2", 0xc0000 + 0x13b40, 0xc0000 + 0x13b60, indexGarouAGrant },
    { L"Grant A - On Fire", 0xc0000 + 0x13b60, 0xc0000 + 0x13b80, indexGarouAGrant },
    { L"Grant A - On Purple", 0xc0000 + 0x13b80, 0xc0000 + 0x13ba0, indexGarouAGrant },
    { L"Grant A - Gold", 0xc0000 + 0x13ba0, 0xc0000 + 0x13bc0, indexGarouAGrant },
    { L"Grant A - T.O.P.", 0xc0000 + 0x13bc0, 0xc0000 + 0x13be0, indexGarouAGrant },
    { L"Grant A - Shade", 0xc0000 + 0x13be0, 0xc0000 + 0x13c00, indexGarouAGrant },
    { L"Grant A - Dark Red", 0xc0000 + 0x13c00, 0xc0000 + 0x13c20, indexGarouAGrant },
    { L"Grant A - Blue", 0xc0000 + 0x13c20, 0xc0000 + 0x13c40, indexGarouAGrant },
    { L"Grant A - Projectile1", 0xc0000 + 0x13c40, 0xc0000 + 0x13c60 },
    { L"Grant A - Projectile2", 0xc0000 + 0x13c60, 0xc0000 + 0x13c80 },
    { L"Grant A - Projectile3", 0xc0000 + 0x13c80, 0xc0000 + 0x13ca0 },
    { L"Grant A - Projectile4", 0xc0000 + 0x13ca0, 0xc0000 + 0x13cc0 },
    { L"Grant A - Projectile5", 0xc0000 + 0x13cc0, 0xc0000 + 0x13ce0 },
    { L"Grant A - Projectile6", 0xc0000 + 0x13ce0, 0xc0000 + 0x13d00 },
};

const sGame_PaletteDataset Garou_S_GRANT_PALETTES_B[] =
{
    { L"Grant B - Main", 0xc0000 + 0x13d00, 0xc0000 + 0x13d20, indexGarouAGrant },
    { L"Grant B - Line1", 0xc0000 + 0x13d20, 0xc0000 + 0x13d40 },
    { L"Grant B - Line2", 0xc0000 + 0x13d40, 0xc0000 + 0x13d60 },
    { L"Grant B - On Fire", 0xc0000 + 0x13d60, 0xc0000 + 0x13d80, indexGarouAGrant },
    { L"Grant B - On Purple", 0xc0000 + 0x13d80, 0xc0000 + 0x13da0, indexGarouAGrant },
    { L"Grant B - Gold", 0xc0000 + 0x13da0, 0xc0000 + 0x13dc0, indexGarouAGrant },
    { L"Grant B - T.O.P.", 0xc0000 + 0x13dc0, 0xc0000 + 0x13de0, indexGarouAGrant },
    { L"Grant B - Shade", 0xc0000 + 0x13de0, 0xc0000 + 0x13e00, indexGarouAGrant },
    { L"Grant B - Dark Red", 0xc0000 + 0x13e00, 0xc0000 + 0x13e20, indexGarouAGrant },
    { L"Grant B - Blue", 0xc0000 + 0x13e20, 0xc0000 + 0x13e40, indexGarouAGrant },
    { L"Grant B - Projectile1", 0xc0000 + 0x13e40, 0xc0000 + 0x13e60 },
    { L"Grant B - Projectile2", 0xc0000 + 0x13e60, 0xc0000 + 0x13e80 },
    { L"Grant B - Projectile3", 0xc0000 + 0x13e80, 0xc0000 + 0x13ea0 },
    { L"Grant B - Projectile4", 0xc0000 + 0x13ea0, 0xc0000 + 0x13ec0 },
    { L"Grant B - Projectile5", 0xc0000 + 0x13ec0, 0xc0000 + 0x13ee0 },
    { L"Grant B - Projectile6", 0xc0000 + 0x13ee0, 0xc0000 + 0x13f00 }
};

const sGame_PaletteDataset Garou_S_GRANT_PALETTES_C[] =
{
    { L"Grant C - Main", 0xc0000 + 0x13f00, 0xc0000 + 0x13f20, indexGarouAGrant },
    { L"Grant C - Line1", 0xc0000 + 0x13f20, 0xc0000 + 0x13f40 },
    { L"Grant C - Line2", 0xc0000 + 0x13f40, 0xc0000 + 0x13f60 },
    { L"Grant C - On Fire", 0xc0000 + 0x13f60, 0xc0000 + 0x13f80, indexGarouAGrant },
    { L"Grant C - On Purple", 0xc0000 + 0x13f80, 0xc0000 + 0x13fa0, indexGarouAGrant },
    { L"Grant C - Gold", 0xc0000 + 0x13fa0, 0xc0000 + 0x13fc0, indexGarouAGrant },
    { L"Grant C - T.O.P.", 0xc0000 + 0x13fc0, 0xc0000 + 0x13fe0, indexGarouAGrant },
    { L"Grant C - Shade", 0xc0000 + 0x13fe0, 0xc0000 + 0x14000, indexGarouAGrant },
    { L"Grant C - Dark Red", 0xc0000 + 0x14000, 0xc0000 + 0x14020, indexGarouAGrant },
    { L"Grant C - Blue", 0xc0000 + 0x14020, 0xc0000 + 0x14040, indexGarouAGrant },
    { L"Grant C - Projectile1", 0xc0000 + 0x14040, 0xc0000 + 0x14060 },
    { L"Grant C - Projectile2", 0xc0000 + 0x14060, 0xc0000 + 0x14080 },
    { L"Grant C - Projectile3", 0xc0000 + 0x14080, 0xc0000 + 0x140a0 },
    { L"Grant C - Projectile4", 0xc0000 + 0x140a0, 0xc0000 + 0x140c0 },
    { L"Grant C - Projectile5", 0xc0000 + 0x140c0, 0xc0000 + 0x140e0 },
    { L"Grant C - Projectile6", 0xc0000 + 0x140e0, 0xc0000 + 0x14100 },
};

const sGame_PaletteDataset Garou_S_GRANT_PALETTES_D[] =
{
    { L"Grant D - Main", 0xc0000 + 0x14100, 0xc0000 + 0x14120, indexGarouAGrant },
    { L"Grant D - Line1", 0xc0000 + 0x14120, 0xc0000 + 0x14140 },
    { L"Grant D - Line2", 0xc0000 + 0x14140, 0xc0000 + 0x14160 },
    { L"Grant D - On Fire", 0xc0000 + 0x14160, 0xc0000 + 0x14180, indexGarouAGrant },
    { L"Grant D - On Purple", 0xc0000 + 0x14180, 0xc0000 + 0x141a0, indexGarouAGrant },
    { L"Grant D - Gold", 0xc0000 + 0x141a0, 0xc0000 + 0x141c0, indexGarouAGrant },
    { L"Grant D - T.O.P.", 0xc0000 + 0x141c0, 0xc0000 + 0x141e0, indexGarouAGrant },
    { L"Grant D - Shade", 0xc0000 + 0x141e0, 0xc0000 + 0x14200, indexGarouAGrant },
    { L"Grant D - Dark Red", 0xc0000 + 0x14200, 0xc0000 + 0x14220, indexGarouAGrant },
    { L"Grant D - Blue", 0xc0000 + 0x14220, 0xc0000 + 0x14240, indexGarouAGrant },
    { L"Grant D - Projectile1", 0xc0000 + 0x14240, 0xc0000 + 0x14260 },
    { L"Grant D - Projectile2", 0xc0000 + 0x14260, 0xc0000 + 0x14280 },
    { L"Grant D - Projectile3", 0xc0000 + 0x14280, 0xc0000 + 0x142a0 },
    { L"Grant D - Projectile4", 0xc0000 + 0x142a0, 0xc0000 + 0x142c0 },
    { L"Grant D - Projectile5", 0xc0000 + 0x142c0, 0xc0000 + 0x142e0 },
    { L"Grant D - Projectile6", 0xc0000 + 0x142e0, 0xc0000 + 0x14300 },
};

const sGame_PaletteDataset Garou_S_GRANT_PALETTES_BOSS[] =
{
    { L"Grant Boss? - Main", 0xc0000 + 0x14300, 0xc0000 + 0x14320, indexGarouAGrant },
    { L"Grant Boss? - Line1", 0xc0000 + 0x14320, 0xc0000 + 0x14340 },
    { L"Grant Boss? - Line2", 0xc0000 + 0x14340, 0xc0000 + 0x14360 },
    { L"Grant Boss? - On Fire", 0xc0000 + 0x14360, 0xc0000 + 0x14380, indexGarouAGrant },
    { L"Grant Boss? - On Purple", 0xc0000 + 0x14380, 0xc0000 + 0x143a0, indexGarouAGrant },
    { L"Grant Boss? - Gold", 0xc0000 + 0x143a0, 0xc0000 + 0x143c0, indexGarouAGrant },
    { L"Grant Boss? - T.O.P.", 0xc0000 + 0x143c0, 0xc0000 + 0x143e0, indexGarouAGrant },
    { L"Grant Boss? - Shade", 0xc0000 + 0x143e0, 0xc0000 + 0x14400, indexGarouAGrant },
    { L"Grant Boss? - Dark Red", 0xc0000 + 0x14400, 0xc0000 + 0x14420, indexGarouAGrant },
    { L"Grant Boss? - Blue", 0xc0000 + 0x14420, 0xc0000 + 0x14440, indexGarouAGrant },
    { L"Grant Boss? - Projectile1", 0xc0000 + 0x14440, 0xc0000 + 0x14460 },
    { L"Grant Boss? - Projectile2", 0xc0000 + 0x14460, 0xc0000 + 0x14480 },
    { L"Grant Boss? - Projectile3", 0xc0000 + 0x14480, 0xc0000 + 0x144a0 },
    { L"Grant Boss? - Projectile4", 0xc0000 + 0x144a0, 0xc0000 + 0x144c0 },
    { L"Grant Boss? - Projectile5", 0xc0000 + 0x144c0, 0xc0000 + 0x144e0 },
    { L"Grant Boss? - Projectile6", 0xc0000 + 0x144e0, 0xc0000 + 0x14500 },
};

const sGame_PaletteDataset Garou_S_BJENNET_PALETTES_A[] =
{
    { L"B.Jenet A - Main", 0xc0000 + 0x14500, 0xc0000 + 0x14520, indexGarouABJennet },
    { L"B.Jenet A - Line1", 0xc0000 + 0x14520, 0xc0000 + 0x14540, indexGarouABJennet },
    { L"B.Jenet A - Line2", 0xc0000 + 0x14540, 0xc0000 + 0x14560, indexGarouABJennet },
    { L"B.Jenet A - On Fire", 0xc0000 + 0x14560, 0xc0000 + 0x14580, indexGarouABJennet },
    { L"B.Jenet A - On Purple", 0xc0000 + 0x14580, 0xc0000 + 0x145a0, indexGarouABJennet },
    { L"B.Jenet A - Gold", 0xc0000 + 0x145a0, 0xc0000 + 0x145c0, indexGarouABJennet },
    { L"B.Jenet A - T.O.P.", 0xc0000 + 0x145c0, 0xc0000 + 0x145e0, indexGarouABJennet },
    { L"B.Jenet A - Shade", 0xc0000 + 0x145e0, 0xc0000 + 0x14600, indexGarouABJennet },
    { L"B.Jenet A - Dark Red", 0xc0000 + 0x14600, 0xc0000 + 0x14620, indexGarouABJennet },
    { L"B.Jenet A - Blue", 0xc0000 + 0x14620, 0xc0000 + 0x14640, indexGarouABJennet },
    { L"B.Jenet A - Projectile1", 0xc0000 + 0x14640, 0xc0000 + 0x14660 },
    { L"B.Jenet A - Projectile2", 0xc0000 + 0x14660, 0xc0000 + 0x14680 },
    { L"B.Jenet A - Projectile3", 0xc0000 + 0x14680, 0xc0000 + 0x146a0 },
    { L"B.Jenet A - Projectile4", 0xc0000 + 0x146a0, 0xc0000 + 0x146c0 },
    { L"B.Jenet A - Projectile5", 0xc0000 + 0x146c0, 0xc0000 + 0x146e0 },
    { L"B.Jenet A - Projectile6", 0xc0000 + 0x146e0, 0xc0000 + 0x14700 },
};

const sGame_PaletteDataset Garou_S_BJENNET_PALETTES_B[] =
{
    { L"B.Jenet B - Main", 0xc0000 + 0x14700, 0xc0000 + 0x14720, indexGarouABJennet },
    { L"B.Jenet B - Line1", 0xc0000 + 0x14720, 0xc0000 + 0x14740, indexGarouABJennet },
    { L"B.Jenet B - Line2", 0xc0000 + 0x14740, 0xc0000 + 0x14760, indexGarouABJennet },
    { L"B.Jenet B - On Fire", 0xc0000 + 0x14760, 0xc0000 + 0x14780, indexGarouABJennet },
    { L"B.Jenet B - On Purple", 0xc0000 + 0x14780, 0xc0000 + 0x147a0, indexGarouABJennet },
    { L"B.Jenet B - Gold", 0xc0000 + 0x147a0, 0xc0000 + 0x147c0, indexGarouABJennet },
    { L"B.Jenet B - T.O.P.", 0xc0000 + 0x147c0, 0xc0000 + 0x147e0, indexGarouABJennet },
    { L"B.Jenet B - Shade", 0xc0000 + 0x147e0, 0xc0000 + 0x14800, indexGarouABJennet },
    { L"B.Jenet B - Dark Red", 0xc0000 + 0x14800, 0xc0000 + 0x14820, indexGarouABJennet },
    { L"B.Jenet B - Blue", 0xc0000 + 0x14820, 0xc0000 + 0x14840, indexGarouABJennet },
    { L"B.Jenet B - Projectile1", 0xc0000 + 0x14840, 0xc0000 + 0x14860 },
    { L"B.Jenet B - Projectile2", 0xc0000 + 0x14860, 0xc0000 + 0x14880 },
    { L"B.Jenet B - Projectile3", 0xc0000 + 0x14880, 0xc0000 + 0x148a0 },
    { L"B.Jenet B - Projectile4", 0xc0000 + 0x148a0, 0xc0000 + 0x148c0 },
    { L"B.Jenet B - Projectile5", 0xc0000 + 0x148c0, 0xc0000 + 0x148e0 },
    { L"B.Jenet B - Projectile6", 0xc0000 + 0x148e0, 0xc0000 + 0x14900 },
};

const sGame_PaletteDataset Garou_S_BJENNET_PALETTES_C[] =
{
    { L"B.Jenet C - Main", 0xc0000 + 0x14900, 0xc0000 + 0x14920, indexGarouABJennet },
    { L"B.Jenet C - Line1", 0xc0000 + 0x14920, 0xc0000 + 0x14940, indexGarouABJennet },
    { L"B.Jenet C - Line2", 0xc0000 + 0x14940, 0xc0000 + 0x14960, indexGarouABJennet },
    { L"B.Jenet C - On Fire", 0xc0000 + 0x14960, 0xc0000 + 0x14980, indexGarouABJennet },
    { L"B.Jenet C - On Purple", 0xc0000 + 0x14980, 0xc0000 + 0x149a0, indexGarouABJennet },
    { L"B.Jenet C - Gold", 0xc0000 + 0x149a0, 0xc0000 + 0x149c0, indexGarouABJennet },
    { L"B.Jenet C - T.O.P.", 0xc0000 + 0x149c0, 0xc0000 + 0x149e0, indexGarouABJennet },
    { L"B.Jenet C - Shade", 0xc0000 + 0x149e0, 0xc0000 + 0x14a00, indexGarouABJennet },
    { L"B.Jenet C - Dark Red", 0xc0000 + 0x14a00, 0xc0000 + 0x14a20, indexGarouABJennet },
    { L"B.Jenet C - Blue", 0xc0000 + 0x14a20, 0xc0000 + 0x14a40, indexGarouABJennet },
    { L"B.Jenet C - Projectile1", 0xc0000 + 0x14a40, 0xc0000 + 0x14a60 },
    { L"B.Jenet C - Projectile2", 0xc0000 + 0x14a60, 0xc0000 + 0x14a80 },
    { L"B.Jenet C - Projectile3", 0xc0000 + 0x14a80, 0xc0000 + 0x14aa0 },
    { L"B.Jenet C - Projectile4", 0xc0000 + 0x14aa0, 0xc0000 + 0x14ac0 },
    { L"B.Jenet C - Projectile5", 0xc0000 + 0x14ac0, 0xc0000 + 0x14ae0 },
    { L"B.Jenet C - Projectile6", 0xc0000 + 0x14ae0, 0xc0000 + 0x14b00 },
};

const sGame_PaletteDataset Garou_S_BJENNET_PALETTES_D[] =
{
    { L"B.Jenet D - Main", 0xc0000 + 0x14b00, 0xc0000 + 0x14b20, indexGarouABJennet },
    { L"B.Jenet D - Line1", 0xc0000 + 0x14b20, 0xc0000 + 0x14b40, indexGarouABJennet },
    { L"B.Jenet D - Line2", 0xc0000 + 0x14b40, 0xc0000 + 0x14b60, indexGarouABJennet },
    { L"B.Jenet D - On Fire", 0xc0000 + 0x14b60, 0xc0000 + 0x14b80, indexGarouABJennet },
    { L"B.Jenet D - On Purple", 0xc0000 + 0x14b80, 0xc0000 + 0x14ba0, indexGarouABJennet },
    { L"B.Jenet D - Gold", 0xc0000 + 0x14ba0, 0xc0000 + 0x14bc0, indexGarouABJennet },
    { L"B.Jenet D - T.O.P.", 0xc0000 + 0x14bc0, 0xc0000 + 0x14be0, indexGarouABJennet },
    { L"B.Jenet D - Shade", 0xc0000 + 0x14be0, 0xc0000 + 0x14c00, indexGarouABJennet },
    { L"B.Jenet D - Dark Red", 0xc0000 + 0x14c00, 0xc0000 + 0x14c20, indexGarouABJennet },
    { L"B.Jenet D - Blue", 0xc0000 + 0x14c20, 0xc0000 + 0x14c40, indexGarouABJennet },
    { L"B.Jenet D - Projectile1", 0xc0000 + 0x14c40, 0xc0000 + 0x14c60 },
    { L"B.Jenet D - Projectile2", 0xc0000 + 0x14c60, 0xc0000 + 0x14c80 },
    { L"B.Jenet D - Projectile3", 0xc0000 + 0x14c80, 0xc0000 + 0x14ca0 },
    { L"B.Jenet D - Projectile4", 0xc0000 + 0x14ca0, 0xc0000 + 0x14cc0 },
    { L"B.Jenet D - Projectile5", 0xc0000 + 0x14cc0, 0xc0000 + 0x14ce0 },
    { L"B.Jenet D - Projectile6", 0xc0000 + 0x14ce0, 0xc0000 + 0x14d00 },
};

const sGame_PaletteDataset Garou_S_BJENNET_PALETTES_BOSS[] =
{
    { L"B.Jenet Boss? - Main", 0xc0000 + 0x14d00, 0xc0000 + 0x14d20, indexGarouABJennet },
    { L"B.Jenet Boss? - Line1", 0xc0000 + 0x14d20, 0xc0000 + 0x14d40, indexGarouABJennet },
    { L"B.Jenet Boss? - Line2", 0xc0000 + 0x14d40, 0xc0000 + 0x14d60, indexGarouABJennet },
    { L"B.Jenet Boss? - On Fire", 0xc0000 + 0x14d60, 0xc0000 + 0x14d80, indexGarouABJennet },
    { L"B.Jenet Boss? - On Purple", 0xc0000 + 0x14d80, 0xc0000 + 0x14da0, indexGarouABJennet },
    { L"B.Jenet Boss? - Gold", 0xc0000 + 0x14da0, 0xc0000 + 0x14dc0, indexGarouABJennet },
    { L"B.Jenet Boss? - T.O.P.", 0xc0000 + 0x14dc0, 0xc0000 + 0x14de0, indexGarouABJennet },
    { L"B.Jenet Boss? - Shade", 0xc0000 + 0x14de0, 0xc0000 + 0x14e00, indexGarouABJennet },
    { L"B.Jenet Boss? - Dark Red", 0xc0000 + 0x14e00, 0xc0000 + 0x14e20, indexGarouABJennet },
    { L"B.Jenet Boss? - Blue", 0xc0000 + 0x14e20, 0xc0000 + 0x14e40, indexGarouABJennet },
    { L"B.Jenet Boss? - Projectile1", 0xc0000 + 0x14e40, 0xc0000 + 0x14e60 },
    { L"B.Jenet Boss? - Projectile2", 0xc0000 + 0x14e60, 0xc0000 + 0x14e80 },
    { L"B.Jenet Boss? - Projectile3", 0xc0000 + 0x14e80, 0xc0000 + 0x14ea0 },
    { L"B.Jenet Boss? - Projectile4", 0xc0000 + 0x14ea0, 0xc0000 + 0x14ec0 },
    { L"B.Jenet Boss? - Projectile5", 0xc0000 + 0x14ec0, 0xc0000 + 0x14ee0 },
    { L"B.Jenet Boss? - Projectile6", 0xc0000 + 0x14ee0, 0xc0000 + 0x14f00 },
};

const sGame_PaletteDataset Garou_S_HOKUTOMARO_PALETTES_A[] =
{
    { L"Hokutomaru A - Main", 0xc0000 + 0x14f00, 0xc0000 + 0x14f20, indexGarouAHokutomaru },
    { L"Hokutomaru A - Line1", 0xc0000 + 0x14f20, 0xc0000 + 0x14f40, indexGarouAHokutomaru },
    { L"Hokutomaru A - Line2", 0xc0000 + 0x14f40, 0xc0000 + 0x14f60, indexGarouAHokutomaru },
    { L"Hokutomaru A - On Fire", 0xc0000 + 0x14f60, 0xc0000 + 0x14f80, indexGarouAHokutomaru },
    { L"Hokutomaru A - On Purple", 0xc0000 + 0x14f80, 0xc0000 + 0x14fa0, indexGarouAHokutomaru },
    { L"Hokutomaru A - Gold", 0xc0000 + 0x14fa0, 0xc0000 + 0x14fc0, indexGarouAHokutomaru },
    { L"Hokutomaru A - T.O.P.", 0xc0000 + 0x14fc0, 0xc0000 + 0x14fe0, indexGarouAHokutomaru },
    { L"Hokutomaru A - Shade", 0xc0000 + 0x14fe0, 0xc0000 + 0x15000, indexGarouAHokutomaru },
    { L"Hokutomaru A - Dark Red", 0xc0000 + 0x15000, 0xc0000 + 0x15020, indexGarouAHokutomaru },
    { L"Hokutomaru A - Blue", 0xc0000 + 0x15020, 0xc0000 + 0x15040, indexGarouAHokutomaru },
    { L"Hokutomaru A - Projectile1", 0xc0000 + 0x15040, 0xc0000 + 0x15060 },
    { L"Hokutomaru A - Projectile2", 0xc0000 + 0x15060, 0xc0000 + 0x15080 },
    { L"Hokutomaru A - Projectile3", 0xc0000 + 0x15080, 0xc0000 + 0x150a0 },
    { L"Hokutomaru A - Projectile4", 0xc0000 + 0x150a0, 0xc0000 + 0x150c0 },
    { L"Hokutomaru A - Projectile5", 0xc0000 + 0x150c0, 0xc0000 + 0x150e0 },
    { L"Hokutomaru A - Projectile6", 0xc0000 + 0x150e0, 0xc0000 + 0x15100 },
};

const sGame_PaletteDataset Garou_S_HOKUTOMARO_PALETTES_B[] =
{
    { L"Hokutomaru B - Main", 0xc0000 + 0x15100, 0xc0000 + 0x15120, indexGarouAHokutomaru },
    { L"Hokutomaru B - Line1", 0xc0000 + 0x15120, 0xc0000 + 0x15140, indexGarouAHokutomaru },
    { L"Hokutomaru B - Line2", 0xc0000 + 0x15140, 0xc0000 + 0x15160, indexGarouAHokutomaru },
    { L"Hokutomaru B - On Fire", 0xc0000 + 0x15160, 0xc0000 + 0x15180, indexGarouAHokutomaru },
    { L"Hokutomaru B - On Purple", 0xc0000 + 0x15180, 0xc0000 + 0x151a0, indexGarouAHokutomaru },
    { L"Hokutomaru B - Gold", 0xc0000 + 0x151a0, 0xc0000 + 0x151c0, indexGarouAHokutomaru },
    { L"Hokutomaru B - T.O.P.", 0xc0000 + 0x151c0, 0xc0000 + 0x151e0, indexGarouAHokutomaru },
    { L"Hokutomaru B - Shade", 0xc0000 + 0x151e0, 0xc0000 + 0x15200, indexGarouAHokutomaru },
    { L"Hokutomaru B - Dark Red", 0xc0000 + 0x15200, 0xc0000 + 0x15220, indexGarouAHokutomaru },
    { L"Hokutomaru B - Blue", 0xc0000 + 0x15220, 0xc0000 + 0x15240, indexGarouAHokutomaru },
    { L"Hokutomaru B - Projectile1", 0xc0000 + 0x15240, 0xc0000 + 0x15260 },
    { L"Hokutomaru B - Projectile2", 0xc0000 + 0x15260, 0xc0000 + 0x15280 },
    { L"Hokutomaru B - Projectile3", 0xc0000 + 0x15280, 0xc0000 + 0x152a0 },
    { L"Hokutomaru B - Projectile4", 0xc0000 + 0x152a0, 0xc0000 + 0x152c0 },
    { L"Hokutomaru B - Projectile5", 0xc0000 + 0x152c0, 0xc0000 + 0x152e0 },
    { L"Hokutomaru B - Projectile6", 0xc0000 + 0x152e0, 0xc0000 + 0x15300 },
};

const sGame_PaletteDataset Garou_S_HOKUTOMARO_PALETTES_C[] =
{
    { L"Hokutomaru C - Main", 0xc0000 + 0x15300, 0xc0000 + 0x15320, indexGarouAHokutomaru },
    { L"Hokutomaru C - Line1", 0xc0000 + 0x15320, 0xc0000 + 0x15340, indexGarouAHokutomaru },
    { L"Hokutomaru C - Line2", 0xc0000 + 0x15340, 0xc0000 + 0x15360, indexGarouAHokutomaru },
    { L"Hokutomaru C - On Fire", 0xc0000 + 0x15360, 0xc0000 + 0x15380, indexGarouAHokutomaru },
    { L"Hokutomaru C - On Purple", 0xc0000 + 0x15380, 0xc0000 + 0x153a0, indexGarouAHokutomaru },
    { L"Hokutomaru C - Gold", 0xc0000 + 0x153a0, 0xc0000 + 0x153c0, indexGarouAHokutomaru },
    { L"Hokutomaru C - T.O.P.", 0xc0000 + 0x153c0, 0xc0000 + 0x153e0, indexGarouAHokutomaru },
    { L"Hokutomaru C - Shade", 0xc0000 + 0x153e0, 0xc0000 + 0x15400, indexGarouAHokutomaru },
    { L"Hokutomaru C - Dark Red", 0xc0000 + 0x15400, 0xc0000 + 0x15420, indexGarouAHokutomaru },
    { L"Hokutomaru C - Blue", 0xc0000 + 0x15420, 0xc0000 + 0x15440, indexGarouAHokutomaru },
    { L"Hokutomaru C - Projectile1", 0xc0000 + 0x15440, 0xc0000 + 0x15460 },
    { L"Hokutomaru C - Projectile2", 0xc0000 + 0x15460, 0xc0000 + 0x15480 },
    { L"Hokutomaru C - Projectile3", 0xc0000 + 0x15480, 0xc0000 + 0x154a0 },
    { L"Hokutomaru C - Projectile4", 0xc0000 + 0x154a0, 0xc0000 + 0x154c0 },
    { L"Hokutomaru C - Projectile5", 0xc0000 + 0x154c0, 0xc0000 + 0x154e0 },
    { L"Hokutomaru C - Projectile6", 0xc0000 + 0x154e0, 0xc0000 + 0x15500 },
};

const sGame_PaletteDataset Garou_S_HOKUTOMARO_PALETTES_D[] =
{
    { L"Hokutomaru D - Main", 0xc0000 + 0x15500, 0xc0000 + 0x15520, indexGarouAHokutomaru },
    { L"Hokutomaru D - Line1", 0xc0000 + 0x15520, 0xc0000 + 0x15540, indexGarouAHokutomaru },
    { L"Hokutomaru D - Line2", 0xc0000 + 0x15540, 0xc0000 + 0x15560, indexGarouAHokutomaru },
    { L"Hokutomaru D - On Fire", 0xc0000 + 0x15560, 0xc0000 + 0x15580, indexGarouAHokutomaru },
    { L"Hokutomaru D - On Purple", 0xc0000 + 0x15580, 0xc0000 + 0x155a0, indexGarouAHokutomaru },
    { L"Hokutomaru D - Gold", 0xc0000 + 0x155a0, 0xc0000 + 0x155c0, indexGarouAHokutomaru },
    { L"Hokutomaru D - T.O.P.", 0xc0000 + 0x155c0, 0xc0000 + 0x155e0, indexGarouAHokutomaru },
    { L"Hokutomaru D - Shade", 0xc0000 + 0x155e0, 0xc0000 + 0x15600, indexGarouAHokutomaru },
    { L"Hokutomaru D - Dark Red", 0xc0000 + 0x15600, 0xc0000 + 0x15620, indexGarouAHokutomaru },
    { L"Hokutomaru D - Blue", 0xc0000 + 0x15620, 0xc0000 + 0x15640, indexGarouAHokutomaru },
    { L"Hokutomaru D - Projectile1", 0xc0000 + 0x15640, 0xc0000 + 0x15660 },
    { L"Hokutomaru D - Projectile2", 0xc0000 + 0x15660, 0xc0000 + 0x15680 },
    { L"Hokutomaru D - Projectile3", 0xc0000 + 0x15680, 0xc0000 + 0x156a0 },
    { L"Hokutomaru D - Projectile4", 0xc0000 + 0x156a0, 0xc0000 + 0x156c0 },
    { L"Hokutomaru D - Projectile5", 0xc0000 + 0x156c0, 0xc0000 + 0x156e0 },
    { L"Hokutomaru D - Projectile6", 0xc0000 + 0x156e0, 0xc0000 + 0x15700 },
};

const sGame_PaletteDataset Garou_S_HOKUTOMARO_PALETTES_BOSS[] =
{
    { L"Hokutomaru Boss? - Main", 0xc0000 + 0x15700, 0xc0000 + 0x15720, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Line1", 0xc0000 + 0x15720, 0xc0000 + 0x15740, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Line2", 0xc0000 + 0x15740, 0xc0000 + 0x15760, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - On Fire", 0xc0000 + 0x15760, 0xc0000 + 0x15780, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - On Purple", 0xc0000 + 0x15780, 0xc0000 + 0x157a0, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Gold", 0xc0000 + 0x157a0, 0xc0000 + 0x157c0, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - T.O.P.", 0xc0000 + 0x157c0, 0xc0000 + 0x157e0, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Shade", 0xc0000 + 0x157e0, 0xc0000 + 0x15800, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Dark Red", 0xc0000 + 0x15800, 0xc0000 + 0x15820, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Blue", 0xc0000 + 0x15820, 0xc0000 + 0x15840, indexGarouAHokutomaru },
    { L"Hokutomaru Boss? - Projectile1", 0xc0000 + 0x15840, 0xc0000 + 0x15860 },
    { L"Hokutomaru Boss? - Projectile2", 0xc0000 + 0x15860, 0xc0000 + 0x15880 },
    { L"Hokutomaru Boss? - Projectile3", 0xc0000 + 0x15880, 0xc0000 + 0x158a0 },
    { L"Hokutomaru Boss? - Projectile4", 0xc0000 + 0x158a0, 0xc0000 + 0x158c0 },
    { L"Hokutomaru Boss? - Projectile5", 0xc0000 + 0x158c0, 0xc0000 + 0x158e0 },
    { L"Hokutomaru Boss? - Projectile6", 0xc0000 + 0x158e0, 0xc0000 + 0x15900 },
};

const sGame_PaletteDataset Garou_S_FREEMAN_PALETTES_A[] =
{
    { L"Freeman A - Main", 0xc0000 + 0x15900, 0xc0000 + 0x15920, indexGarouAFreeman },
    { L"Freeman A - Line1", 0xc0000 + 0x15920, 0xc0000 + 0x15940, indexGarouAFreeman },
    { L"Freeman A - Line2", 0xc0000 + 0x15940, 0xc0000 + 0x15960, indexGarouAFreeman },
    { L"Freeman A - On Fire", 0xc0000 + 0x15960, 0xc0000 + 0x15980, indexGarouAFreeman },
    { L"Freeman A - On Purple", 0xc0000 + 0x15980, 0xc0000 + 0x159a0, indexGarouAFreeman },
    { L"Freeman A - Gold", 0xc0000 + 0x159a0, 0xc0000 + 0x159c0, indexGarouAFreeman },
    { L"Freeman A - T.O.P.", 0xc0000 + 0x159c0, 0xc0000 + 0x159e0, indexGarouAFreeman },
    { L"Freeman A - Shade", 0xc0000 + 0x159e0, 0xc0000 + 0x15a00, indexGarouAFreeman },
    { L"Freeman A - Dark Red", 0xc0000 + 0x15a00, 0xc0000 + 0x15a20, indexGarouAFreeman },
    { L"Freeman A - Blue", 0xc0000 + 0x15a20, 0xc0000 + 0x15a40, indexGarouAFreeman },
    { L"Freeman A - Projectile1", 0xc0000 + 0x15a40, 0xc0000 + 0x15a60 },
    { L"Freeman A - Projectile2", 0xc0000 + 0x15a60, 0xc0000 + 0x15a80 },
    { L"Freeman A - Projectile3", 0xc0000 + 0x15a80, 0xc0000 + 0x15aa0 },
    { L"Freeman A - Projectile4", 0xc0000 + 0x15aa0, 0xc0000 + 0x15ac0 },
    { L"Freeman A - Projectile5", 0xc0000 + 0x15ac0, 0xc0000 + 0x15ae0 },
    { L"Freeman A - Projectile6", 0xc0000 + 0x15ae0, 0xc0000 + 0x15b00 },
};

const sGame_PaletteDataset Garou_S_FREEMAN_PALETTES_B[] =
{
    { L"Freeman B - Main", 0xc0000 + 0x15b00, 0xc0000 + 0x15b20, indexGarouAFreeman },
    { L"Freeman B - Line1", 0xc0000 + 0x15b20, 0xc0000 + 0x15b40, indexGarouAFreeman },
    { L"Freeman B - Line2", 0xc0000 + 0x15b40, 0xc0000 + 0x15b60, indexGarouAFreeman },
    { L"Freeman B - On Fire", 0xc0000 + 0x15b60, 0xc0000 + 0x15b80, indexGarouAFreeman },
    { L"Freeman B - On Purple", 0xc0000 + 0x15b80, 0xc0000 + 0x15ba0, indexGarouAFreeman },
    { L"Freeman B - Gold", 0xc0000 + 0x15ba0, 0xc0000 + 0x15bc0, indexGarouAFreeman },
    { L"Freeman B - T.O.P.", 0xc0000 + 0x15bc0, 0xc0000 + 0x15be0, indexGarouAFreeman },
    { L"Freeman B - Shade", 0xc0000 + 0x15be0, 0xc0000 + 0x15c00, indexGarouAFreeman },
    { L"Freeman B - Dark Red", 0xc0000 + 0x15c00, 0xc0000 + 0x15c20, indexGarouAFreeman },
    { L"Freeman B - Blue", 0xc0000 + 0x15c20, 0xc0000 + 0x15c40, indexGarouAFreeman },
    { L"Freeman B - Projectile1", 0xc0000 + 0x15c40, 0xc0000 + 0x15c60 },
    { L"Freeman B - Projectile2", 0xc0000 + 0x15c60, 0xc0000 + 0x15c80 },
    { L"Freeman B - Projectile3", 0xc0000 + 0x15c80, 0xc0000 + 0x15ca0 },
    { L"Freeman B - Projectile4", 0xc0000 + 0x15ca0, 0xc0000 + 0x15cc0 },
    { L"Freeman B - Projectile5", 0xc0000 + 0x15cc0, 0xc0000 + 0x15ce0 },
    { L"Freeman B - Projectile6", 0xc0000 + 0x15ce0, 0xc0000 + 0x15d00 },
};

const sGame_PaletteDataset Garou_S_FREEMAN_PALETTES_C[] =
{
    { L"Freeman C - Main", 0xc0000 + 0x15d00, 0xc0000 + 0x15d20, indexGarouAFreeman },
    { L"Freeman C - Line1", 0xc0000 + 0x15d20, 0xc0000 + 0x15d40, indexGarouAFreeman },
    { L"Freeman C - Line2", 0xc0000 + 0x15d40, 0xc0000 + 0x15d60, indexGarouAFreeman },
    { L"Freeman C - On Fire", 0xc0000 + 0x15d60, 0xc0000 + 0x15d80, indexGarouAFreeman },
    { L"Freeman C - On Purple", 0xc0000 + 0x15d80, 0xc0000 + 0x15da0, indexGarouAFreeman },
    { L"Freeman C - Gold", 0xc0000 + 0x15da0, 0xc0000 + 0x15dc0, indexGarouAFreeman },
    { L"Freeman C - T.O.P.", 0xc0000 + 0x15dc0, 0xc0000 + 0x15de0, indexGarouAFreeman },
    { L"Freeman C - Shade", 0xc0000 + 0x15de0, 0xc0000 + 0x15e00, indexGarouAFreeman },
    { L"Freeman C - Dark Red", 0xc0000 + 0x15e00, 0xc0000 + 0x15e20, indexGarouAFreeman },
    { L"Freeman C - Blue", 0xc0000 + 0x15e20, 0xc0000 + 0x15e40, indexGarouAFreeman },
    { L"Freeman C - Projectile1", 0xc0000 + 0x15e40, 0xc0000 + 0x15e60 },
    { L"Freeman C - Projectile2", 0xc0000 + 0x15e60, 0xc0000 + 0x15e80 },
    { L"Freeman C - Projectile3", 0xc0000 + 0x15e80, 0xc0000 + 0x15ea0 },
    { L"Freeman C - Projectile4", 0xc0000 + 0x15ea0, 0xc0000 + 0x15ec0 },
    { L"Freeman C - Projectile5", 0xc0000 + 0x15ec0, 0xc0000 + 0x15ee0 },
    { L"Freeman C - Projectile6", 0xc0000 + 0x15ee0, 0xc0000 + 0x15f00 },
};

const sGame_PaletteDataset Garou_S_FREEMAN_PALETTES_D[] =
{
    { L"Freeman D - Main", 0xc0000 + 0x15f00, 0xc0000 + 0x15f20, indexGarouAFreeman },
    { L"Freeman D - Line1", 0xc0000 + 0x15f20, 0xc0000 + 0x15f40, indexGarouAFreeman },
    { L"Freeman D - Line2", 0xc0000 + 0x15f40, 0xc0000 + 0x15f60, indexGarouAFreeman },
    { L"Freeman D - On Fire", 0xc0000 + 0x15f60, 0xc0000 + 0x15f80, indexGarouAFreeman },
    { L"Freeman D - On Purple", 0xc0000 + 0x15f80, 0xc0000 + 0x15fa0, indexGarouAFreeman },
    { L"Freeman D - Gold", 0xc0000 + 0x15fa0, 0xc0000 + 0x15fc0, indexGarouAFreeman },
    { L"Freeman D - T.O.P.", 0xc0000 + 0x15fc0, 0xc0000 + 0x15fe0, indexGarouAFreeman },
    { L"Freeman D - Shade", 0xc0000 + 0x15fe0, 0xc0000 + 0x16000, indexGarouAFreeman },
    { L"Freeman D - Dark Red", 0xc0000 + 0x16000, 0xc0000 + 0x16020, indexGarouAFreeman },
    { L"Freeman D - Blue", 0xc0000 + 0x16020, 0xc0000 + 0x16040, indexGarouAFreeman },
    { L"Freeman D - Projectile1", 0xc0000 + 0x16040, 0xc0000 + 0x16060 },
    { L"Freeman D - Projectile2", 0xc0000 + 0x16060, 0xc0000 + 0x16080 },
    { L"Freeman D - Projectile3", 0xc0000 + 0x16080, 0xc0000 + 0x160a0 },
    { L"Freeman D - Projectile4", 0xc0000 + 0x160a0, 0xc0000 + 0x160c0 },
    { L"Freeman D - Projectile5", 0xc0000 + 0x160c0, 0xc0000 + 0x160e0 },
    { L"Freeman D - Projectile6", 0xc0000 + 0x160e0, 0xc0000 + 0x16100 },
};

const sGame_PaletteDataset Garou_S_FREEMAN_PALETTES_BOSS[] =
{
    { L"Freeman Boss? - Main", 0xc0000 + 0x16100, 0xc0000 + 0x16120, indexGarouAFreeman },
    { L"Freeman Boss? - Line1", 0xc0000 + 0x16120, 0xc0000 + 0x16140, indexGarouAFreeman },
    { L"Freeman Boss? - Line2", 0xc0000 + 0x16140, 0xc0000 + 0x16160, indexGarouAFreeman },
    { L"Freeman Boss? - On Fire", 0xc0000 + 0x16160, 0xc0000 + 0x16180, indexGarouAFreeman },
    { L"Freeman Boss? - On Purple", 0xc0000 + 0x16180, 0xc0000 + 0x161a0, indexGarouAFreeman },
    { L"Freeman Boss? - Gold", 0xc0000 + 0x161a0, 0xc0000 + 0x161c0, indexGarouAFreeman },
    { L"Freeman Boss? - T.O.P.", 0xc0000 + 0x161c0, 0xc0000 + 0x161e0, indexGarouAFreeman },
    { L"Freeman Boss? - Shade", 0xc0000 + 0x161e0, 0xc0000 + 0x16200, indexGarouAFreeman },
    { L"Freeman Boss? - Dark Red", 0xc0000 + 0x16200, 0xc0000 + 0x16220, indexGarouAFreeman },
    { L"Freeman Boss? - Blue", 0xc0000 + 0x16220, 0xc0000 + 0x16240, indexGarouAFreeman },
    { L"Freeman Boss? - Projectile1", 0xc0000 + 0x16240, 0xc0000 + 0x16260 },
    { L"Freeman Boss? - Projectile2", 0xc0000 + 0x16260, 0xc0000 + 0x16280 },
    { L"Freeman Boss? - Projectile3", 0xc0000 + 0x16280, 0xc0000 + 0x162a0 },
    { L"Freeman Boss? - Projectile4", 0xc0000 + 0x162a0, 0xc0000 + 0x162c0 },
    { L"Freeman Boss? - Projectile5", 0xc0000 + 0x162c0, 0xc0000 + 0x162e0 },
    { L"Freeman Boss? - Projectile6", 0xc0000 + 0x162e0, 0xc0000 + 0x16300 },
};

const sGame_PaletteDataset Garou_S_TIZOC_PALETTES_A[] =
{
    { L"Tizoc A - Main", 0xc0000 + 0x16300, 0xc0000 + 0x16320, indexGarouATizoc },
    { L"Tizoc A - Line1", 0xc0000 + 0x16320, 0xc0000 + 0x16340, indexGarouATizoc },
    { L"Tizoc A - Line2", 0xc0000 + 0x16340, 0xc0000 + 0x16360, indexGarouATizoc },
    { L"Tizoc A - On Fire", 0xc0000 + 0x16360, 0xc0000 + 0x16380, indexGarouATizoc },
    { L"Tizoc A - On Purple", 0xc0000 + 0x16380, 0xc0000 + 0x163a0, indexGarouATizoc },
    { L"Tizoc A - Gold", 0xc0000 + 0x163a0, 0xc0000 + 0x163c0, indexGarouATizoc },
    { L"Tizoc A - T.O.P.", 0xc0000 + 0x163c0, 0xc0000 + 0x163e0, indexGarouATizoc },
    { L"Tizoc A - Shade", 0xc0000 + 0x163e0, 0xc0000 + 0x16400, indexGarouATizoc },
    { L"Tizoc A - Dark Red", 0xc0000 + 0x16400, 0xc0000 + 0x16420, indexGarouATizoc },
    { L"Tizoc A - Blue", 0xc0000 + 0x16420, 0xc0000 + 0x16440, indexGarouATizoc },
    { L"Tizoc A - Projectile1", 0xc0000 + 0x16440, 0xc0000 + 0x16460 },
    { L"Tizoc A - Projectile2", 0xc0000 + 0x16460, 0xc0000 + 0x16480 },
    { L"Tizoc A - Projectile3", 0xc0000 + 0x16480, 0xc0000 + 0x164a0 },
    { L"Tizoc A - Projectile4", 0xc0000 + 0x164a0, 0xc0000 + 0x164c0 },
    { L"Tizoc A - Projectile5", 0xc0000 + 0x164c0, 0xc0000 + 0x164e0 },
    { L"Tizoc A - Projectile6", 0xc0000 + 0x164e0, 0xc0000 + 0x16500 },
};

const sGame_PaletteDataset Garou_S_TIZOC_PALETTES_B[] =
{
    { L"Tizoc B - Main", 0xc0000 + 0x16500, 0xc0000 + 0x16520, indexGarouATizoc },
    { L"Tizoc B - Line1", 0xc0000 + 0x16520, 0xc0000 + 0x16540, indexGarouATizoc },
    { L"Tizoc B - Line2", 0xc0000 + 0x16540, 0xc0000 + 0x16560, indexGarouATizoc },
    { L"Tizoc B - On Fire", 0xc0000 + 0x16560, 0xc0000 + 0x16580, indexGarouATizoc },
    { L"Tizoc B - On Purple", 0xc0000 + 0x16580, 0xc0000 + 0x165a0, indexGarouATizoc },
    { L"Tizoc B - Gold", 0xc0000 + 0x165a0, 0xc0000 + 0x165c0, indexGarouATizoc },
    { L"Tizoc B - T.O.P.", 0xc0000 + 0x165c0, 0xc0000 + 0x165e0, indexGarouATizoc },
    { L"Tizoc B - Shade", 0xc0000 + 0x165e0, 0xc0000 + 0x16600, indexGarouATizoc },
    { L"Tizoc B - Dark Red", 0xc0000 + 0x16600, 0xc0000 + 0x16620, indexGarouATizoc },
    { L"Tizoc B - Blue", 0xc0000 + 0x16620, 0xc0000 + 0x16640, indexGarouATizoc },
    { L"Tizoc B - Projectile1", 0xc0000 + 0x16640, 0xc0000 + 0x16660 },
    { L"Tizoc B - Projectile2", 0xc0000 + 0x16660, 0xc0000 + 0x16680 },
    { L"Tizoc B - Projectile3", 0xc0000 + 0x16680, 0xc0000 + 0x166a0 },
    { L"Tizoc B - Projectile4", 0xc0000 + 0x166a0, 0xc0000 + 0x166c0 },
    { L"Tizoc B - Projectile5", 0xc0000 + 0x166c0, 0xc0000 + 0x166e0 },
    { L"Tizoc B - Projectile6", 0xc0000 + 0x166e0, 0xc0000 + 0x16700 },
};

const sGame_PaletteDataset Garou_S_TIZOC_PALETTES_C[] =
{
    { L"Tizoc C - Main", 0xc0000 + 0x16700, 0xc0000 + 0x16720, indexGarouATizoc },
    { L"Tizoc C - Line1", 0xc0000 + 0x16720, 0xc0000 + 0x16740, indexGarouATizoc },
    { L"Tizoc C - Line2", 0xc0000 + 0x16740, 0xc0000 + 0x16760, indexGarouATizoc },
    { L"Tizoc C - On Fire", 0xc0000 + 0x16760, 0xc0000 + 0x16780, indexGarouATizoc },
    { L"Tizoc C - On Purple", 0xc0000 + 0x16780, 0xc0000 + 0x167a0, indexGarouATizoc },
    { L"Tizoc C - Gold", 0xc0000 + 0x167a0, 0xc0000 + 0x167c0, indexGarouATizoc },
    { L"Tizoc C - T.O.P.", 0xc0000 + 0x167c0, 0xc0000 + 0x167e0, indexGarouATizoc },
    { L"Tizoc C - Shade", 0xc0000 + 0x167e0, 0xc0000 + 0x16800, indexGarouATizoc },
    { L"Tizoc C - Dark Red", 0xc0000 + 0x16800, 0xc0000 + 0x16820, indexGarouATizoc },
    { L"Tizoc C - Blue", 0xc0000 + 0x16820, 0xc0000 + 0x16840, indexGarouATizoc },
    { L"Tizoc C - Projectile1", 0xc0000 + 0x16840, 0xc0000 + 0x16860 },
    { L"Tizoc C - Projectile2", 0xc0000 + 0x16860, 0xc0000 + 0x16880 },
    { L"Tizoc C - Projectile3", 0xc0000 + 0x16880, 0xc0000 + 0x168a0 },
    { L"Tizoc C - Projectile4", 0xc0000 + 0x168a0, 0xc0000 + 0x168c0 },
    { L"Tizoc C - Projectile5", 0xc0000 + 0x168c0, 0xc0000 + 0x168e0 },
    { L"Tizoc C - Projectile6", 0xc0000 + 0x168e0, 0xc0000 + 0x16900 },
};

const sGame_PaletteDataset Garou_S_TIZOC_PALETTES_D[] =
{
    { L"Tizoc D - Main", 0xc0000 + 0x16900, 0xc0000 + 0x16920, indexGarouATizoc },
    { L"Tizoc D - Line1", 0xc0000 + 0x16920, 0xc0000 + 0x16940, indexGarouATizoc },
    { L"Tizoc D - Line2", 0xc0000 + 0x16940, 0xc0000 + 0x16960, indexGarouATizoc },
    { L"Tizoc D - On Fire", 0xc0000 + 0x16960, 0xc0000 + 0x16980, indexGarouATizoc },
    { L"Tizoc D - On Purple", 0xc0000 + 0x16980, 0xc0000 + 0x169a0, indexGarouATizoc },
    { L"Tizoc D - Gold", 0xc0000 + 0x169a0, 0xc0000 + 0x169c0, indexGarouATizoc },
    { L"Tizoc D - T.O.P.", 0xc0000 + 0x169c0, 0xc0000 + 0x169e0, indexGarouATizoc },
    { L"Tizoc D - Shade", 0xc0000 + 0x169e0, 0xc0000 + 0x16a00, indexGarouATizoc },
    { L"Tizoc D - Dark Red", 0xc0000 + 0x16a00, 0xc0000 + 0x16a20, indexGarouATizoc },
    { L"Tizoc D - Blue", 0xc0000 + 0x16a20, 0xc0000 + 0x16a40, indexGarouATizoc },
    { L"Tizoc D - Projectile1", 0xc0000 + 0x16a40, 0xc0000 + 0x16a60 },
    { L"Tizoc D - Projectile2", 0xc0000 + 0x16a60, 0xc0000 + 0x16a80 },
    { L"Tizoc D - Projectile3", 0xc0000 + 0x16a80, 0xc0000 + 0x16aa0 },
    { L"Tizoc D - Projectile4", 0xc0000 + 0x16aa0, 0xc0000 + 0x16ac0 },
    { L"Tizoc D - Projectile5", 0xc0000 + 0x16ac0, 0xc0000 + 0x16ae0 },
    { L"Tizoc D - Projectile6", 0xc0000 + 0x16ae0, 0xc0000 + 0x16b00 },
};

const sGame_PaletteDataset Garou_S_TIZOC_PALETTES_BOSS[] =
{
    { L"Tizoc Boss? - Main", 0xc0000 + 0x16b00, 0xc0000 + 0x16b20, indexGarouATizoc },
    { L"Tizoc Boss? - Line1", 0xc0000 + 0x16b20, 0xc0000 + 0x16b40, indexGarouATizoc },
    { L"Tizoc Boss? - Line2", 0xc0000 + 0x16b40, 0xc0000 + 0x16b60, indexGarouATizoc },
    { L"Tizoc Boss? - On Fire", 0xc0000 + 0x16b60, 0xc0000 + 0x16b80, indexGarouATizoc },
    { L"Tizoc Boss? - On Purple", 0xc0000 + 0x16b80, 0xc0000 + 0x16ba0, indexGarouATizoc },
    { L"Tizoc Boss? - Gold", 0xc0000 + 0x16ba0, 0xc0000 + 0x16bc0, indexGarouATizoc },
    { L"Tizoc Boss? - T.O.P.", 0xc0000 + 0x16bc0, 0xc0000 + 0x16be0, indexGarouATizoc },
    { L"Tizoc Boss? - Shade", 0xc0000 + 0x16be0, 0xc0000 + 0x16c00, indexGarouATizoc },
    { L"Tizoc Boss? - Dark Red", 0xc0000 + 0x16c00, 0xc0000 + 0x16c20, indexGarouATizoc },
    { L"Tizoc Boss? - Blue", 0xc0000 + 0x16c20, 0xc0000 + 0x16c40, indexGarouATizoc },
    { L"Tizoc Boss? - Projectile1", 0xc0000 + 0x16c40, 0xc0000 + 0x16c60 },
    { L"Tizoc Boss? - Projectile2", 0xc0000 + 0x16c60, 0xc0000 + 0x16c80 },
    { L"Tizoc Boss? - Projectile3", 0xc0000 + 0x16c80, 0xc0000 + 0x16ca0 },
    { L"Tizoc Boss? - Projectile4", 0xc0000 + 0x16ca0, 0xc0000 + 0x16cc0 },
    { L"Tizoc Boss? - Projectile5", 0xc0000 + 0x16cc0, 0xc0000 + 0x16ce0 },
    { L"Tizoc Boss? - Projectile6", 0xc0000 + 0x16ce0, 0xc0000 + 0x16d00 },
};

const sGame_PaletteDataset Garou_S_KAIN_PALETTES_A[] =
{
    { L"Kain A - Main", 0xc0000 + 0x16d00, 0xc0000 + 0x16d20, indexGarouAKain },
    { L"Kain A - Line1", 0xc0000 + 0x16d20, 0xc0000 + 0x16d40 },
    { L"Kain A - Line2", 0xc0000 + 0x16d40, 0xc0000 + 0x16d60 },
    { L"Kain A - On Fire", 0xc0000 + 0x16d60, 0xc0000 + 0x16d80, indexGarouAKain },
    { L"Kain A - On Purple", 0xc0000 + 0x16d80, 0xc0000 + 0x16da0, indexGarouAKain },
    { L"Kain A - Gold", 0xc0000 + 0x16da0, 0xc0000 + 0x16dc0, indexGarouAKain },
    { L"Kain A - T.O.P.", 0xc0000 + 0x16dc0, 0xc0000 + 0x16de0, indexGarouAKain },
    { L"Kain A - Shade", 0xc0000 + 0x16de0, 0xc0000 + 0x16e00, indexGarouAKain },
    { L"Kain A - Dark Red", 0xc0000 + 0x16e00, 0xc0000 + 0x16e20, indexGarouAKain },
    { L"Kain A - Blue", 0xc0000 + 0x16e20, 0xc0000 + 0x16e40, indexGarouAKain },
    { L"Kain A - Projectile1", 0xc0000 + 0x16e40, 0xc0000 + 0x16e60 },
    { L"Kain A - Projectile2", 0xc0000 + 0x16e60, 0xc0000 + 0x16e80 },
    { L"Kain A - Projectile3", 0xc0000 + 0x16e80, 0xc0000 + 0x16ea0 },
    { L"Kain A - Projectile4", 0xc0000 + 0x16ea0, 0xc0000 + 0x16ec0 },
    { L"Kain A - Projectile5", 0xc0000 + 0x16ec0, 0xc0000 + 0x16ee0 },
    { L"Kain A - Projectile6", 0xc0000 + 0x16ee0, 0xc0000 + 0x16f00 },
};

const sGame_PaletteDataset Garou_S_KAIN_PALETTES_B[] =
{
    { L"Kain B - Main", 0xc0000 + 0x16f00, 0xc0000 + 0x16f20, indexGarouAKain },
    { L"Kain B - Line1", 0xc0000 + 0x16f20, 0xc0000 + 0x16f40 },
    { L"Kain B - Line2", 0xc0000 + 0x16f40, 0xc0000 + 0x16f60 },
    { L"Kain B - On Fire", 0xc0000 + 0x16f60, 0xc0000 + 0x16f80, indexGarouAKain },
    { L"Kain B - On Purple", 0xc0000 + 0x16f80, 0xc0000 + 0x16fa0, indexGarouAKain },
    { L"Kain B - Gold", 0xc0000 + 0x16fa0, 0xc0000 + 0x16fc0, indexGarouAKain },
    { L"Kain B - T.O.P.", 0xc0000 + 0x16fc0, 0xc0000 + 0x16fe0, indexGarouAKain },
    { L"Kain B - Shade", 0xc0000 + 0x16fe0, 0xc0000 + 0x17000, indexGarouAKain },
    { L"Kain B - Dark Red", 0xc0000 + 0x17000, 0xc0000 + 0x17020, indexGarouAKain },
    { L"Kain B - Blue", 0xc0000 + 0x17020, 0xc0000 + 0x17040, indexGarouAKain },
    { L"Kain B - Projectile1", 0xc0000 + 0x17040, 0xc0000 + 0x17060 },
    { L"Kain B - Projectile2", 0xc0000 + 0x17060, 0xc0000 + 0x17080 },
    { L"Kain B - Projectile3", 0xc0000 + 0x17080, 0xc0000 + 0x170a0 },
    { L"Kain B - Projectile4", 0xc0000 + 0x170a0, 0xc0000 + 0x170c0 },
    { L"Kain B - Projectile5", 0xc0000 + 0x170c0, 0xc0000 + 0x170e0 },
    { L"Kain B - Projectile6", 0xc0000 + 0x170e0, 0xc0000 + 0x17100 },
};

const sGame_PaletteDataset Garou_S_KAIN_PALETTES_C[] =
{
    { L"Kain C - Main", 0xc0000 + 0x17100, 0xc0000 + 0x17120, indexGarouAKain },
    { L"Kain C - Line1", 0xc0000 + 0x17120, 0xc0000 + 0x17140 },
    { L"Kain C - Line2", 0xc0000 + 0x17140, 0xc0000 + 0x17160 },
    { L"Kain C - On Fire", 0xc0000 + 0x17160, 0xc0000 + 0x17180, indexGarouAKain },
    { L"Kain C - On Purple", 0xc0000 + 0x17180, 0xc0000 + 0x171a0, indexGarouAKain },
    { L"Kain C - Gold", 0xc0000 + 0x171a0, 0xc0000 + 0x171c0, indexGarouAKain },
    { L"Kain C - T.O.P.", 0xc0000 + 0x171c0, 0xc0000 + 0x171e0, indexGarouAKain },
    { L"Kain C - Shade", 0xc0000 + 0x171e0, 0xc0000 + 0x17200, indexGarouAKain },
    { L"Kain C - Dark Red", 0xc0000 + 0x17200, 0xc0000 + 0x17220, indexGarouAKain },
    { L"Kain C - Blue", 0xc0000 + 0x17220, 0xc0000 + 0x17240, indexGarouAKain },
    { L"Kain C - Projectile1", 0xc0000 + 0x17240, 0xc0000 + 0x17260 },
    { L"Kain C - Projectile2", 0xc0000 + 0x17260, 0xc0000 + 0x17280 },
    { L"Kain C - Projectile3", 0xc0000 + 0x17280, 0xc0000 + 0x172a0 },
    { L"Kain C - Projectile4", 0xc0000 + 0x172a0, 0xc0000 + 0x172c0 },
    { L"Kain C - Projectile5", 0xc0000 + 0x172c0, 0xc0000 + 0x172e0 },
    { L"Kain C - Projectile6", 0xc0000 + 0x172e0, 0xc0000 + 0x17300 },
};

const sGame_PaletteDataset Garou_S_KAIN_PALETTES_D[] =
{
    { L"Kain D - Main", 0xc0000 + 0x17300, 0xc0000 + 0x17320, indexGarouAKain },
    { L"Kain D - Line1", 0xc0000 + 0x17320, 0xc0000 + 0x17340 },
    { L"Kain D - Line2", 0xc0000 + 0x17340, 0xc0000 + 0x17360 },
    { L"Kain D - On Fire", 0xc0000 + 0x17360, 0xc0000 + 0x17380, indexGarouAKain },
    { L"Kain D - On Purple", 0xc0000 + 0x17380, 0xc0000 + 0x173a0, indexGarouAKain },
    { L"Kain D - Gold", 0xc0000 + 0x173a0, 0xc0000 + 0x173c0, indexGarouAKain },
    { L"Kain D - T.O.P.", 0xc0000 + 0x173c0, 0xc0000 + 0x173e0, indexGarouAKain },
    { L"Kain D - Shade", 0xc0000 + 0x173e0, 0xc0000 + 0x17400, indexGarouAKain },
    { L"Kain D - Dark Red", 0xc0000 + 0x17400, 0xc0000 + 0x17420, indexGarouAKain },
    { L"Kain D - Blue", 0xc0000 + 0x17420, 0xc0000 + 0x17440, indexGarouAKain },
    { L"Kain D - Projectile1", 0xc0000 + 0x17440, 0xc0000 + 0x17460 },
    { L"Kain D - Projectile2", 0xc0000 + 0x17460, 0xc0000 + 0x17480 },
    { L"Kain D - Projectile3", 0xc0000 + 0x17480, 0xc0000 + 0x174a0 },
    { L"Kain D - Projectile4", 0xc0000 + 0x174a0, 0xc0000 + 0x174c0 },
    { L"Kain D - Projectile5", 0xc0000 + 0x174c0, 0xc0000 + 0x174e0 },
    { L"Kain D - Projectile6", 0xc0000 + 0x174e0, 0xc0000 + 0x17500 },
};

const sGame_PaletteDataset Garou_S_KAIN_PALETTES_BOSS[] =
{
    { L"Kain Boss? - Main", 0xc0000 + 0x17500, 0xc0000 + 0x17520, indexGarouAKain },
    { L"Kain Boss? - Line1", 0xc0000 + 0x17520, 0xc0000 + 0x17540 },
    { L"Kain Boss? - Line2", 0xc0000 + 0x17540, 0xc0000 + 0x17560 },
    { L"Kain Boss? - On Fire", 0xc0000 + 0x17560, 0xc0000 + 0x17580, indexGarouAKain },
    { L"Kain Boss? - On Purple", 0xc0000 + 0x17580, 0xc0000 + 0x175a0, indexGarouAKain },
    { L"Kain Boss? - Gold", 0xc0000 + 0x175a0, 0xc0000 + 0x175c0, indexGarouAKain },
    { L"Kain Boss? - T.O.P.", 0xc0000 + 0x175c0, 0xc0000 + 0x175e0, indexGarouAKain },
    { L"Kain Boss? - Shade", 0xc0000 + 0x175e0, 0xc0000 + 0x17600, indexGarouAKain },
    { L"Kain Boss? - Dark Red", 0xc0000 + 0x17600, 0xc0000 + 0x17620, indexGarouAKain },
    { L"Kain Boss? - Blue", 0xc0000 + 0x17620, 0xc0000 + 0x17640, indexGarouAKain },
    { L"Kain Boss? - Projectile1", 0xc0000 + 0x17640, 0xc0000 + 0x17660 },
    { L"Kain Boss? - Projectile2", 0xc0000 + 0x17660, 0xc0000 + 0x17680 },
    { L"Kain Boss? - Projectile3", 0xc0000 + 0x17680, 0xc0000 + 0x176a0 },
    { L"Kain Boss? - Projectile4", 0xc0000 + 0x176a0, 0xc0000 + 0x176c0 },
    { L"Kain Boss? - Projectile5", 0xc0000 + 0x176c0, 0xc0000 + 0x176e0 },
    { L"Kain Boss? - Projectile6", 0xc0000 + 0x176e0, 0xc0000 + 0x17700 },
};

const sGame_PaletteDataset Garou_S_ROCKHOWARD_PALETTES_PORTRAITS[] =
{
    { L"Rock Portrait Palette - A", 0xc0000 + 0x2a900, 0xc0000 + 0x2a940, indexGarouAPortraits, indexGarouARockHoward },
    { L"Rock Portrait Palette - B", 0xc0000 + 0x2a940, 0xc0000 + 0x2a980, indexGarouAPortraits, indexGarouARockHoward },
    { L"Rock Portrait Palette - C", 0xc0000 + 0x2a980, 0xc0000 + 0x2a9c0, indexGarouAPortraits, indexGarouARockHoward },
    { L"Rock Portrait Palette - D", 0xc0000 + 0x2a9c0, 0xc0000 + 0x2aa00, indexGarouAPortraits, indexGarouARockHoward },
};

const sGame_PaletteDataset Garou_S_TERRY_PALETTES_PORTRAITS[] =
{
    { L"Terry Portrait Palette - A", 0xc0000 + 0x2aa00, 0xc0000 + 0x2aa40, indexGarouAPortraits, indexGarouATerryBogard },
    { L"Terry Portrait Palette - B", 0xc0000 + 0x2aa40, 0xc0000 + 0x2aa80, indexGarouAPortraits, indexGarouATerryBogard },
    { L"Terry Portrait Palette - C", 0xc0000 + 0x2aa80, 0xc0000 + 0x2aac0, indexGarouAPortraits, indexGarouATerryBogard },
    { L"Terry Portrait Palette - D", 0xc0000 + 0x2aac0, 0xc0000 + 0x2ab00, indexGarouAPortraits, indexGarouATerryBogard },
};

const sGame_PaletteDataset Garou_S_KHUSHNOOD_PALETTES_PORTRAITS[] =
{
    { L"Khushnood Portrait Palette - A", 0xc0000 + 0x2b000, 0xc0000 + 0x2b040, indexGarouAPortraits, indexGarouAKhushnood },
    { L"Khushnood Portrait Palette - B", 0xc0000 + 0x2b040, 0xc0000 + 0x2b080, indexGarouAPortraits, indexGarouAKhushnood },
    { L"Khushnood Portrait Palette - C", 0xc0000 + 0x2b080, 0xc0000 + 0x2b0c0, indexGarouAPortraits, indexGarouAKhushnood },
    { L"Khushnood Portrait Palette - D", 0xc0000 + 0x2b0c0, 0xc0000 + 0x2b100, indexGarouAPortraits, indexGarouAKhushnood },
};

const sGame_PaletteDataset Garou_S_DONG_PALETTES_PORTRAITS[] =
{
    { L"Dong Hwan Portrait Palette - A", 0xc0000 + 0x2ab00, 0xc0000 + 0x2ab40, indexGarouAPortraits, indexGarouADong },
    { L"Dong Hwan Portrait Palette - B", 0xc0000 + 0x2ab40, 0xc0000 + 0x2ab80, indexGarouAPortraits, indexGarouADong },
    { L"Dong Hwan Portrait Palette - C", 0xc0000 + 0x2ab80, 0xc0000 + 0x2abc0, indexGarouAPortraits, indexGarouADong },
    { L"Dong Hwan Portrait Palette - D", 0xc0000 + 0x2abc0, 0xc0000 + 0x2ac00, indexGarouAPortraits, indexGarouADong },
};

const sGame_PaletteDataset Garou_S_JAE_PALETTES_PORTRAITS[] =
{
    { L"Jae Hoon Portrait Palette - A", 0xc0000 + 0x2ac00, 0xc0000 + 0x2ac40, indexGarouAPortraits, indexGarouAJae },
    { L"Jae Hoon Portrait Palette - B", 0xc0000 + 0x2ac40, 0xc0000 + 0x2ac80, indexGarouAPortraits, indexGarouAJae },
    { L"Jae Hoon Portrait Palette - C", 0xc0000 + 0x2ac80, 0xc0000 + 0x2acc0, indexGarouAPortraits, indexGarouAJae },
    { L"Jae Hoon Portrait Palette - D", 0xc0000 + 0x2acc0, 0xc0000 + 0x2ad00, indexGarouAPortraits, indexGarouAJae },
};

const sGame_PaletteDataset Garou_S_HOTARU_PALETTES_PORTRAITS[] =
{
    { L"Hotaru Portrait Palette - A", 0xc0000 + 0x2ad00, 0xc0000 + 0x2ad40, indexGarouAPortraits, indexGarouAHotaru },
    { L"Hotaru Portrait Palette - B", 0xc0000 + 0x2ad40, 0xc0000 + 0x2ad80, indexGarouAPortraits, indexGarouAHotaru },
    { L"Hotaru Portrait Palette - C", 0xc0000 + 0x2ad80, 0xc0000 + 0x2adc0, indexGarouAPortraits, indexGarouAHotaru },
    { L"Hotaru Portrait Palette - D", 0xc0000 + 0x2adc0, 0xc0000 + 0x2ae00, indexGarouAPortraits, indexGarouAHotaru },
};

const sGame_PaletteDataset Garou_S_GATO_PALETTES_PORTRAITS[] =
{
    { L"Gato Portrait Palette - A", 0xc0000 + 0x2ae00, 0xc0000 + 0x2ae40, indexGarouAPortraits, indexGarouAGato },
    { L"Gato Portrait Palette - B", 0xc0000 + 0x2ae40, 0xc0000 + 0x2ae80, indexGarouAPortraits, indexGarouAGato },
    { L"Gato Portrait Palette - C", 0xc0000 + 0x2ae80, 0xc0000 + 0x2aec0, indexGarouAPortraits, indexGarouAGato },
    { L"Gato Portrait Palette - D", 0xc0000 + 0x2aec0, 0xc0000 + 0x2af00, indexGarouAPortraits, indexGarouAGato },
};

const sGame_PaletteDataset Garou_S_KEVIN_PALETTES_PORTRAITS[] =
{
    { L"Kevin Portrait Palette - A", 0xc0000 + 0x2b400, 0xc0000 + 0x2b440, indexGarouAPortraits, indexGarouAKevin },
    { L"Kevin Portrait Palette - B", 0xc0000 + 0x2b440, 0xc0000 + 0x2b480, indexGarouAPortraits, indexGarouAKevin },
    { L"Kevin Portrait Palette - C", 0xc0000 + 0x2b480, 0xc0000 + 0x2b4c0, indexGarouAPortraits, indexGarouAKevin },
    { L"Kevin Portrait Palette - D", 0xc0000 + 0x2b4c0, 0xc0000 + 0x2b500, indexGarouAPortraits, indexGarouAKevin },
};

const sGame_PaletteDataset Garou_S_GRANT_PALETTES_PORTRAITS[] =
{
    { L"Grant Portrait Palette - A", 0xc0000 + 0x2b500, 0xc0000 + 0x2b540, indexGarouAPortraits, indexGarouAGrant },
    { L"Grant Portrait Palette - B", 0xc0000 + 0x2b540, 0xc0000 + 0x2b580, indexGarouAPortraits, indexGarouAGrant },
    { L"Grant Portrait Palette - C", 0xc0000 + 0x2b580, 0xc0000 + 0x2b5c0, indexGarouAPortraits, indexGarouAGrant },
    { L"Grant Portrait Palette - D", 0xc0000 + 0x2b5c0, 0xc0000 + 0x2b600, indexGarouAPortraits, indexGarouAGrant },
};

const sGame_PaletteDataset Garou_S_BJENNET_PALETTES_PORTRAITS[] =
{
    { L"B.Jenet Portrait Palette - A", 0xc0000 + 0x2af00, 0xc0000 + 0x2af40, indexGarouAPortraits, indexGarouABJennet },
    { L"B.Jenet Portrait Palette - B", 0xc0000 + 0x2af40, 0xc0000 + 0x2af80, indexGarouAPortraits, indexGarouABJennet },
    { L"B.Jenet Portrait Palette - C", 0xc0000 + 0x2af80, 0xc0000 + 0x2afc0, indexGarouAPortraits, indexGarouABJennet },
    { L"B.Jenet Portrait Palette - D", 0xc0000 + 0x2afc0, 0xc0000 + 0x2b000, indexGarouAPortraits, indexGarouABJennet },
};

const sGame_PaletteDataset Garou_S_HOKUTOMARO_PALETTES_PORTRAITS[] =
{
    { L"Hokutomaru Portrait Palette - A", 0xc0000 + 0x2b100, 0xc0000 + 0x2b140, indexGarouAPortraits, indexGarouAHokutomaru },
    { L"Hokutomaru Portrait Palette - B", 0xc0000 + 0x2b140, 0xc0000 + 0x2b180, indexGarouAPortraits, indexGarouAHokutomaru },
    { L"Hokutomaru Portrait Palette - C", 0xc0000 + 0x2b180, 0xc0000 + 0x2b1c0, indexGarouAPortraits, indexGarouAHokutomaru },
    { L"Hokutomaru Portrait Palette - D", 0xc0000 + 0x2b1c0, 0xc0000 + 0x2b200, indexGarouAPortraits, indexGarouAHokutomaru },
};

const sGame_PaletteDataset Garou_S_FREEMAN_PALETTES_PORTRAITS[] =
{
    { L"Freeman Portrait Palette - A", 0xc0000 + 0x2b200, 0xc0000 + 0x2b240, indexGarouAPortraits, indexGarouAFreeman },
    { L"Freeman Portrait Palette - B", 0xc0000 + 0x2b240, 0xc0000 + 0x2b280, indexGarouAPortraits, indexGarouAFreeman },
    { L"Freeman Portrait Palette - C", 0xc0000 + 0x2b280, 0xc0000 + 0x2b2c0, indexGarouAPortraits, indexGarouAFreeman },
    { L"Freeman Portrait Palette - D", 0xc0000 + 0x2b2c0, 0xc0000 + 0x2b300, indexGarouAPortraits, indexGarouATizoc },
};

const sGame_PaletteDataset Garou_S_TIZOC_PALETTES_PORTRAITS[] =
{
    { L"Tizoc Portrait Palette - A", 0xc0000 + 0x2b300, 0xc0000 + 0x2b340, indexGarouAPortraits, indexGarouATizoc },
    { L"Tizoc Portrait Palette - B", 0xc0000 + 0x2b340, 0xc0000 + 0x2b380, indexGarouAPortraits, indexGarouATizoc },
    { L"Tizoc Portrait Palette - C", 0xc0000 + 0x2b380, 0xc0000 + 0x2b3c0, indexGarouAPortraits, indexGarouATizoc },
    { L"Tizoc Portrait Palette - D", 0xc0000 + 0x2b3c0, 0xc0000 + 0x2b400, indexGarouAPortraits, indexGarouATizoc },
};

const sGame_PaletteDataset Garou_S_KAIN_PALETTES_PORTRAITS[] =
{
    { L"Kain Portrait Palette - A", 0xc0000 + 0x2b600, 0xc0000 + 0x2b640, indexGarouAPortraits, indexGarouAKain },
    { L"Kain Portrait Palette - B", 0xc0000 + 0x2b640, 0xc0000 + 0x2b680, indexGarouAPortraits, indexGarouAKain },
    { L"Kain Portrait Palette - C", 0xc0000 + 0x2b680, 0xc0000 + 0x2b6c0, indexGarouAPortraits, indexGarouAKain },
    { L"Kain Portrait Palette - D", 0xc0000 + 0x2b6c0, 0xc0000 + 0x2b700, indexGarouAPortraits, indexGarouAKain },
};

const sDescTreeNode Garou_S_ROCKHOWARD_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_ROCKHOWARD_PALETTES_A, ARRAYSIZE(Garou_S_ROCKHOWARD_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_ROCKHOWARD_PALETTES_B, ARRAYSIZE(Garou_S_ROCKHOWARD_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_ROCKHOWARD_PALETTES_C, ARRAYSIZE(Garou_S_ROCKHOWARD_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_ROCKHOWARD_PALETTES_D, ARRAYSIZE(Garou_S_ROCKHOWARD_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_ROCKHOWARD_PALETTES_BOSS, ARRAYSIZE(Garou_S_ROCKHOWARD_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_KHUSHNOOD_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_KHUSHNOOD_PALETTES_A, ARRAYSIZE(Garou_S_KHUSHNOOD_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_KHUSHNOOD_PALETTES_B, ARRAYSIZE(Garou_S_KHUSHNOOD_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_KHUSHNOOD_PALETTES_C, ARRAYSIZE(Garou_S_KHUSHNOOD_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_KHUSHNOOD_PALETTES_D, ARRAYSIZE(Garou_S_KHUSHNOOD_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_KHUSHNOOD_PALETTES_BOSS, ARRAYSIZE(Garou_S_KHUSHNOOD_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_TERRY_PALETTES_A, ARRAYSIZE(Garou_S_TERRY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_TERRY_PALETTES_B, ARRAYSIZE(Garou_S_TERRY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_TERRY_PALETTES_C, ARRAYSIZE(Garou_S_TERRY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_TERRY_PALETTES_D, ARRAYSIZE(Garou_S_TERRY_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_TERRY_PALETTES_BOSS, ARRAYSIZE(Garou_S_TERRY_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_DONG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_DONG_PALETTES_A, ARRAYSIZE(Garou_S_DONG_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_DONG_PALETTES_B, ARRAYSIZE(Garou_S_DONG_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_DONG_PALETTES_C, ARRAYSIZE(Garou_S_DONG_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_DONG_PALETTES_D, ARRAYSIZE(Garou_S_DONG_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_DONG_PALETTES_BOSS, ARRAYSIZE(Garou_S_DONG_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_JAE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_JAE_PALETTES_A, ARRAYSIZE(Garou_S_JAE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_JAE_PALETTES_B, ARRAYSIZE(Garou_S_JAE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_JAE_PALETTES_C, ARRAYSIZE(Garou_S_JAE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_JAE_PALETTES_D, ARRAYSIZE(Garou_S_JAE_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_JAE_PALETTES_BOSS, ARRAYSIZE(Garou_S_JAE_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_HOTARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_HOTARU_PALETTES_A, ARRAYSIZE(Garou_S_HOTARU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_HOTARU_PALETTES_B, ARRAYSIZE(Garou_S_HOTARU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_HOTARU_PALETTES_C, ARRAYSIZE(Garou_S_HOTARU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_HOTARU_PALETTES_D, ARRAYSIZE(Garou_S_HOTARU_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_HOTARU_PALETTES_BOSS, ARRAYSIZE(Garou_S_HOTARU_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_GATO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_GATO_PALETTES_A, ARRAYSIZE(Garou_S_GATO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_GATO_PALETTES_B, ARRAYSIZE(Garou_S_GATO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_GATO_PALETTES_C, ARRAYSIZE(Garou_S_GATO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_GATO_PALETTES_D, ARRAYSIZE(Garou_S_GATO_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_GATO_PALETTES_BOSS, ARRAYSIZE(Garou_S_GATO_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_KEVIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_KEVIN_PALETTES_A, ARRAYSIZE(Garou_S_KEVIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_KEVIN_PALETTES_B, ARRAYSIZE(Garou_S_KEVIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_KEVIN_PALETTES_C, ARRAYSIZE(Garou_S_KEVIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_KEVIN_PALETTES_D, ARRAYSIZE(Garou_S_KEVIN_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_KEVIN_PALETTES_BOSS, ARRAYSIZE(Garou_S_KEVIN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_GRANT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_GRANT_PALETTES_A, ARRAYSIZE(Garou_S_GRANT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_GRANT_PALETTES_B, ARRAYSIZE(Garou_S_GRANT_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_GRANT_PALETTES_C, ARRAYSIZE(Garou_S_GRANT_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_GRANT_PALETTES_D, ARRAYSIZE(Garou_S_GRANT_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_GRANT_PALETTES_BOSS, ARRAYSIZE(Garou_S_GRANT_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_BJENNET_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_BJENNET_PALETTES_A, ARRAYSIZE(Garou_S_BJENNET_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_BJENNET_PALETTES_B, ARRAYSIZE(Garou_S_BJENNET_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_BJENNET_PALETTES_C, ARRAYSIZE(Garou_S_BJENNET_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_BJENNET_PALETTES_D, ARRAYSIZE(Garou_S_BJENNET_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_BJENNET_PALETTES_BOSS, ARRAYSIZE(Garou_S_BJENNET_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_HOKUTOMARO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_HOKUTOMARO_PALETTES_A, ARRAYSIZE(Garou_S_HOKUTOMARO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_HOKUTOMARO_PALETTES_B, ARRAYSIZE(Garou_S_HOKUTOMARO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_HOKUTOMARO_PALETTES_C, ARRAYSIZE(Garou_S_HOKUTOMARO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_HOKUTOMARO_PALETTES_D, ARRAYSIZE(Garou_S_HOKUTOMARO_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_HOKUTOMARO_PALETTES_BOSS, ARRAYSIZE(Garou_S_HOKUTOMARO_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_FREEMAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_FREEMAN_PALETTES_A, ARRAYSIZE(Garou_S_FREEMAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_FREEMAN_PALETTES_B, ARRAYSIZE(Garou_S_FREEMAN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_FREEMAN_PALETTES_C, ARRAYSIZE(Garou_S_FREEMAN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_FREEMAN_PALETTES_D, ARRAYSIZE(Garou_S_FREEMAN_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_FREEMAN_PALETTES_BOSS, ARRAYSIZE(Garou_S_FREEMAN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_TIZOC_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_TIZOC_PALETTES_A, ARRAYSIZE(Garou_S_TIZOC_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_TIZOC_PALETTES_B, ARRAYSIZE(Garou_S_TIZOC_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_TIZOC_PALETTES_C, ARRAYSIZE(Garou_S_TIZOC_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_TIZOC_PALETTES_D, ARRAYSIZE(Garou_S_TIZOC_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_TIZOC_PALETTES_BOSS, ARRAYSIZE(Garou_S_TIZOC_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_KAIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Garou_S_KAIN_PALETTES_A, ARRAYSIZE(Garou_S_KAIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Garou_S_KAIN_PALETTES_B, ARRAYSIZE(Garou_S_KAIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)Garou_S_KAIN_PALETTES_C, ARRAYSIZE(Garou_S_KAIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)Garou_S_KAIN_PALETTES_D, ARRAYSIZE(Garou_S_KAIN_PALETTES_D) },
    { L"Boss", DESC_NODETYPE_TREE, (void*)Garou_S_KAIN_PALETTES_BOSS, ARRAYSIZE(Garou_S_KAIN_PALETTES_BOSS) },
};

const sDescTreeNode Garou_S_PORTRAITS_COLLECTION[] =
{
    { L"Rock Howard", DESC_NODETYPE_TREE, (void*)Garou_S_ROCKHOWARD_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_ROCKHOWARD_PALETTES_PORTRAITS) },
    { L"Terry Bogard", DESC_NODETYPE_TREE, (void*)Garou_S_TERRY_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_TERRY_PALETTES_PORTRAITS) },
    { L"Khushnood Butt", DESC_NODETYPE_TREE, (void*)Garou_S_KHUSHNOOD_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_KHUSHNOOD_PALETTES_PORTRAITS) },
    { L"Dong Hwan", DESC_NODETYPE_TREE, (void*)Garou_S_DONG_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_DONG_PALETTES_PORTRAITS) },
    { L"Jae Hoon", DESC_NODETYPE_TREE, (void*)Garou_S_JAE_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_JAE_PALETTES_PORTRAITS) },
    { L"Hotaru", DESC_NODETYPE_TREE, (void*)Garou_S_HOTARU_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_HOTARU_PALETTES_PORTRAITS) },
    { L"Gato", DESC_NODETYPE_TREE, (void*)Garou_S_GATO_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_GATO_PALETTES_PORTRAITS) },
    { L"Kevin", DESC_NODETYPE_TREE, (void*)Garou_S_KEVIN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_KEVIN_PALETTES_PORTRAITS) },
    { L"Grant", DESC_NODETYPE_TREE, (void*)Garou_S_GRANT_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_GRANT_PALETTES_PORTRAITS) },
    { L"B.Jenet", DESC_NODETYPE_TREE, (void*)Garou_S_BJENNET_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_BJENNET_PALETTES_PORTRAITS) },
    { L"Hokutomaro", DESC_NODETYPE_TREE, (void*)Garou_S_HOKUTOMARO_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_HOKUTOMARO_PALETTES_PORTRAITS) },
    { L"Freeman", DESC_NODETYPE_TREE, (void*)Garou_S_FREEMAN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_FREEMAN_PALETTES_PORTRAITS) },
    { L"Tizoc", DESC_NODETYPE_TREE, (void*)Garou_S_TIZOC_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_TIZOC_PALETTES_PORTRAITS) },
    { L"Kain", DESC_NODETYPE_TREE, (void*)Garou_S_KAIN_PALETTES_PORTRAITS, ARRAYSIZE(Garou_S_KAIN_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset Garou_S_BONUS_PALETTES[] =
{
    { L"Meter", 0xc0000 + 0xe040, 0xc0000 + 0xe0e0 },
    { L"Lifebar Nametag, Border, Timer", 0xc0000 + 0xe120, 0xc0000 + 0xe140 },
    { L"Lifebar Timer Hurry Up", 0xc0000 + 0xe140, 0xc0000 + 0xe160 },
    { L"Lifebar Top: off", 0xc0000 + 0xe160, 0xc0000 + 0xe180 },
    { L"Lifebar Top: on", 0xc0000 + 0xe180, 0xc0000 + 0xe1a0 },
    { L"Terry Winpoint", 0xc0000 + 0xe400, 0xc0000 + 0xe420 },
    { L"Rock Winpoint", 0xc0000 + 0xe480, 0xc0000 + 0xe4a0 },
    { L"Dong Hwan Winpoint", 0xc0000 + 0xe500, 0xc0000 + 0xe520 },
    { L"Jae Hoon Winpoint", 0xc0000 + 0xe580, 0xc0000 + 0xe5a0 },
    { L"Hotaru Winpoint", 0xc0000 + 0xe600, 0xc0000 + 0xe620 },
    { L"Gato Winpoint", 0xc0000 + 0xe680, 0xc0000 + 0xe6a0 },
    { L"B.Jenet Winpoint", 0xc0000 + 0xe700, 0xc0000 + 0xe720 },
    { L"Khushnood Winpoint", 0xc0000 + 0xe780, 0xc0000 + 0xe7a0 },
    { L"Hokutomaru Winpoint", 0xc0000 + 0xe800, 0xc0000 + 0xe820 },
    { L"Freeman Winpoint", 0xc0000 + 0xe880, 0xc0000 + 0xe8a0 },
    { L"Tizoc Winpoint", 0xc0000 + 0xe900, 0xc0000 + 0xe920 },
    { L"Bastard Kevin Winpoint", 0xc0000 + 0xe980, 0xc0000 + 0xe9a0 },
    { L"Grant Winpoint", 0xc0000 + 0xea00, 0xc0000 + 0xea20 },
    { L"Kain Winpoint", 0xc0000 + 0xea80, 0xc0000 + 0xeaa0 },
};

const sDescTreeNode Garou_S_BONUS_COLLECTION[] =
{
    { L"Bonus", DESC_NODETYPE_TREE, (void*)Garou_S_BONUS_PALETTES, ARRAYSIZE(Garou_S_BONUS_PALETTES) },
};

#define k_garouNameKey_Portraits L"Portraits"

const sDescTreeNode Garou_S_UNITS[] =
{
    { L"Rock Howard", DESC_NODETYPE_TREE, (void*)Garou_S_ROCKHOWARD_COLLECTION, ARRAYSIZE(Garou_S_ROCKHOWARD_COLLECTION) },
    { L"Terry Bogard", DESC_NODETYPE_TREE, (void*)Garou_S_TERRY_COLLECTION, ARRAYSIZE(Garou_S_TERRY_COLLECTION) },
    { L"Khushnood Butt", DESC_NODETYPE_TREE, (void*)Garou_S_KHUSHNOOD_COLLECTION, ARRAYSIZE(Garou_S_KHUSHNOOD_COLLECTION) },
    { L"Dong Hwan", DESC_NODETYPE_TREE, (void*)Garou_S_DONG_COLLECTION, ARRAYSIZE(Garou_S_DONG_COLLECTION) },
    { L"Jae Hoon", DESC_NODETYPE_TREE, (void*)Garou_S_JAE_COLLECTION, ARRAYSIZE(Garou_S_JAE_COLLECTION) },
    { L"Hotaru", DESC_NODETYPE_TREE, (void*)Garou_S_HOTARU_COLLECTION, ARRAYSIZE(Garou_S_HOTARU_COLLECTION) },
    { L"Gato", DESC_NODETYPE_TREE, (void*)Garou_S_GATO_COLLECTION, ARRAYSIZE(Garou_S_GATO_COLLECTION) },
    { L"Kevin", DESC_NODETYPE_TREE, (void*)Garou_S_KEVIN_COLLECTION, ARRAYSIZE(Garou_S_KEVIN_COLLECTION) },
    { L"Grant", DESC_NODETYPE_TREE, (void*)Garou_S_GRANT_COLLECTION, ARRAYSIZE(Garou_S_GRANT_COLLECTION) },
    { L"B.Jenet", DESC_NODETYPE_TREE, (void*)Garou_S_BJENNET_COLLECTION, ARRAYSIZE(Garou_S_BJENNET_COLLECTION) },
    { L"Hokutomaro", DESC_NODETYPE_TREE, (void*)Garou_S_HOKUTOMARO_COLLECTION, ARRAYSIZE(Garou_S_HOKUTOMARO_COLLECTION) },
    { L"Freeman", DESC_NODETYPE_TREE, (void*)Garou_S_FREEMAN_COLLECTION, ARRAYSIZE(Garou_S_FREEMAN_COLLECTION) },
    { L"Tizoc", DESC_NODETYPE_TREE, (void*)Garou_S_TIZOC_COLLECTION, ARRAYSIZE(Garou_S_TIZOC_COLLECTION) },
    { L"Kain", DESC_NODETYPE_TREE, (void*)Garou_S_KAIN_COLLECTION, ARRAYSIZE(Garou_S_KAIN_COLLECTION) },
    { k_garouNameKey_Portraits, DESC_NODETYPE_TREE, (void*)Garou_S_PORTRAITS_COLLECTION, ARRAYSIZE(Garou_S_PORTRAITS_COLLECTION) },
    { L"Bonus Stuff", DESC_NODETYPE_TREE, (void*)Garou_S_BONUS_COLLECTION, ARRAYSIZE(Garou_S_BONUS_COLLECTION) },
};

constexpr auto Garou_S_NUMUNIT = ARRAYSIZE(Garou_S_UNITS);

#define Garou_S_EXTRALOC Garou_S_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef Garou_S_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
