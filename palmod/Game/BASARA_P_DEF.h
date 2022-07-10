#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to BASARA_P_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const sGame_PaletteDataset BASARA_P_DATE_PALETTES_A[] =
{
    { L"Date Masamune A", 0x34, 0x74 },
    { L"Katakura Kojuro Assist A", 0x4c9f14, 0x4c9f34 },
};

const sGame_PaletteDataset BASARA_P_DATE_PALETTES_B[] =
{
    { L"Date Masamune B", 0x80, 0xc0 },
    { L"Katakura Kojuro Assist B", 0x4c9f40, 0x4c9f60 },
};

const sGame_PaletteDataset BASARA_P_DATE_PALETTES_C[] =
{
    { L"Date Masamune C", 0xcc, 0x10c },
    { L"Katakura Kojuro Assist C", 0x4c9f6c, 0x4c9f8c },
};

const sGame_PaletteDataset BASARA_P_DATE_PALETTES_E[] =
{
    { L"Date Masamune E", 0x118, 0x158 },
    { L"Katakura Kojuro Assist E", 0x4c9f98, 0x4c9fb8 },
};

const sGame_PaletteDataset BASARA_P_DATE_PALETTES_ABC[] =
{
    { L"Date Masamune ABC", 0x164, 0x1a4 },
    { L"Katakura Kojuro Assist ABC", 0x4c9fc4, 0x4c9fe4 },
};

const sGame_PaletteDataset BASARA_P_DATE_PALETTES_MIRROR[] =
{
    { L"Date Masamune Mirror", 0x1b0, 0x1f0 },
    { L"Katakura Kojuro Assist Mirror", 0x4c9ff0, 0x4ca010 },
};

const sGame_PaletteDataset BASARA_P_SANADA_PALETTES_A[] =
{
    { L"Sanada Yukimura A", 0x693834, 0x693874 },
    { L"Sarutobi Sasuke Assist A", 0xbc14a4, 0xbc14c4 },
    { L"Takeda Shingen Assist A", 0xbd1b24, 0xbd1b44 },
    { L"Sarutobi Sasuke Assist A", 0xc087d4, 0xc087f4 },
    { L"Takeda Shingen Assist A", 0xc819b4, 0xc819d4 },
};

const sGame_PaletteDataset BASARA_P_SANADA_PALETTES_B[] =
{
    { L"Sanada Yukimura B", 0x693880, 0x6938c0 },
    { L"Sarutobi Sasuke Assist B", 0xbc14d0, 0xbc14f0 },
    { L"Takeda Shingen Assist B", 0xbd1b50, 0xbd1b70 },
    { L"Sarutobi Sasuke Assist B", 0xc08800, 0xc08820 },
    { L"Takeda Shingen Assist B", 0xc819e0, 0xc81a00 },
};

const sGame_PaletteDataset BASARA_P_SANADA_PALETTES_C[] =
{
    { L"Sanada Yukimura C", 0x6938cc, 0x69390c },
    { L"Takeda Shingen Assist C", 0xc81a0c, 0xc81a2c },
    { L"Sarutobi Sasuke Assist C", 0xc0882c, 0xc0884c },
    { L"Takeda Shingen Assist C", 0xbd1b7c, 0xbd1b9c },
    { L"Sarutobi Sasuke Assist C", 0xbc14fc, 0xbc151c },
};

const sGame_PaletteDataset BASARA_P_SANADA_PALETTES_E[] =
{
    { L"Sanada Yukimura E", 0x693918, 0x693958 },
    { L"Takeda Shingen Assist E", 0xc81a38, 0xc81a58 },
    { L"Sarutobi Sasuke Assist E", 0xc08858, 0xc08878 },
    { L"Takeda Shingen Assist E", 0xbd1ba8, 0xbd1bc8 },
    { L"Sarutobi Sasuke Assist E", 0xbc1528, 0xbc1548 },
};

const sGame_PaletteDataset BASARA_P_SANADA_PALETTES_ABC[] =
{
    { L"Sanada Yukimura ABC", 0x693964, 0x6939a4 },
    { L"Sarutobi Sasuke Assist ABC", 0xbc1554, 0xbc1574 },
    { L"Takeda Shingen Assist ABC", 0xbd1bd4, 0xbd1bf4 },
    { L"Sarutobi Sasuke Assist ABC", 0xc08884, 0xc088a4 },
    { L"Takeda Shingen Assist ABC", 0xc81a64, 0xc81a84 },
};

const sGame_PaletteDataset BASARA_P_SANADA_PALETTES_MIRROR[] =
{
    { L"Sanada Yukimura Mirror", 0x6939b0, 0x6939f0 },
    { L"Sarutobi Sasuke Assist Mirror", 0xbc1580, 0xbc15a0 },
    { L"Takeda Shingen Assist Mirror", 0xbd1c00, 0xbd1c20 },
    { L"Sarutobi Sasuke Assist Mirror", 0xc088b0, 0xc088d0 },
    { L"Takeda Shingen Assist Mirror", 0xc81a90, 0xc81ab0 },
};

const sGame_PaletteDataset BASARA_P_KEIJI_PALETTES_A[] =
{
    { L"Keiji Maeda A", 0xddf834, 0xddf874 },
    { L"Maeda Toshiie Assist A", 0x1411974, 0x1411994 },
    { L"Matsu Assist A", 0x13b8a14, 0x13b8a34 },
};

const sGame_PaletteDataset BASARA_P_KEIJI_PALETTES_B[] =
{
    { L"Keiji Maeda B", 0xddf880, 0xddf8c0 },
    { L"Maeda Toshiie Assist B", 0x14119a0, 0x14119c0 },
    { L"Matsu Assist B", 0x13b8a40, 0x13b8a60 },
};

const sGame_PaletteDataset BASARA_P_KEIJI_PALETTES_C[] =
{
    { L"Keiji Maeda C", 0xddf8cc, 0xddf90c },
    { L"Maeda Toshiie Assist C", 0x14119cc, 0x14119ec },
    { L"Matsu Assist C", 0x13b8a6c, 0x13b8a8c },
};

const sGame_PaletteDataset BASARA_P_KEIJI_PALETTES_E[] =
{
    { L"Keiji Maeda E", 0xddf918, 0xddf958 },
    { L"Maeda Toshiie Assist E", 0x14119f8, 0x1411a18 },
    { L"Matsu Assist E", 0x13b8a98, 0x13b8ab8 },
};

const sGame_PaletteDataset BASARA_P_KEIJI_PALETTES_ABC[] =
{
    { L"Keiji Maeda ABC", 0xddf964, 0xddf9a4 },
    { L"Matsu Assist ABC", 0x13b8ac4, 0x13b8ae4 },
    { L"Maeda Toshiie Assist ABC", 0x1411a24, 0x1411a44 },
};

const sGame_PaletteDataset BASARA_P_KEIJI_PALETTES_MIRROR[] =
{
    { L"Keiji Maeda Mirror", 0xddf9b0, 0xddf9f0 },
    { L"Matsu Assist Mirror", 0x13b8af0, 0x13b8b10 },
    { L"Maeda Toshiie Assist Mirror", 0x1411a50, 0x1411a70 },
};

const sGame_PaletteDataset BASARA_P_KEIJI_PALETTES_EXTRAS[] =
{
    { L"Maeda Assist Color 1", 0x1366f64, 0x1366f84 },
    { L"Maeda Assist Color 2", 0x1366f90, 0x1366fb0 },
};

const sGame_PaletteDataset BASARA_P_CHOSOKABE_PALETTES_A[] =
{
    { L"Chosokabe Motochika A", 0x1552834, 0x1552874 },
    { L"Chosokabe Motochika Parrot A", 0x1a41834, 0x1a41854 },
    { L"Chosokabe Motochika Assist A", 0x1b03eb4, 0x1b03ed4 },
    { L"Chosokabe Motochika Assist 2 A", 0x1b190b4, 0x1b190d4 },
    { L"Chosokabe Motochika Assist A", 0x1b94d24, 0x1b94d44 },
};

const sGame_PaletteDataset BASARA_P_CHOSOKABE_PALETTES_B[] =
{
    { L"Chosokabe Motochika B", 0x1552880, 0x15528c0 },
    { L"Chosokabe Motochika Parrot B", 0x1a41860, 0x1a41880 },
    { L"Chosokabe Motochika Assist B", 0x1b03ee0, 0x1b03f00 },
    { L"Chosokabe Motochika Assist 2 B", 0x1b190e0, 0x1b19100 },
    { L"Chosokabe Motochika Assist B", 0x1b94d50, 0x1b94d70 },
};

const sGame_PaletteDataset BASARA_P_CHOSOKABE_PALETTES_C[] =
{
    { L"Chosokabe Motochika C", 0x15528cc, 0x155290c },
    { L"Chosokabe Motochika Parrot C", 0x1a4188c, 0x1a418ac },
    { L"Chosokabe Motochika Assist C", 0x1b03f0c, 0x1b03f2c },
    { L"Chosokabe Motochika Assist 2 C", 0x1b1910c, 0x1b1912c },
    { L"Chosokabe Motochika Assist C", 0x1b94d7c, 0x1b94d9c },
};

const sGame_PaletteDataset BASARA_P_CHOSOKABE_PALETTES_E[] =
{
    { L"Chosokabe Motochika E", 0x1552918, 0x1552958 },
    { L"Chosokabe Motochika Parrot E", 0x1a418b8, 0x1a418d8 },
    { L"Chosokabe Motochika Assist E", 0x1b03f38, 0x1b03f58 },
    { L"Chosokabe Motochika Assist 2 E", 0x1b19138, 0x1b19158 },
    { L"Chosokabe Motochika Assist E", 0x1b94da8, 0x1b94dc8 },
};

const sGame_PaletteDataset BASARA_P_CHOSOKABE_PALETTES_ABC[] =
{
    { L"Chosokabe Motochika ABC", 0x1552964, 0x15529a4 },
    { L"Chosokabe Motochika Parrot ABC", 0x1a418e4, 0x1a41904 },
    { L"Chosokabe Motochika Assist ABC", 0x1b03f64, 0x1b03f84 },
    { L"Chosokabe Motochika Assist 2 ABC", 0x1b19164, 0x1b19184 },
    { L"Chosokabe Motochika Assist ABC", 0x1b94dd4, 0x1b94df4 },
};

const sGame_PaletteDataset BASARA_P_CHOSOKABE_PALETTES_MIRROR[] =
{
    { L"Chosokabe Motochika Mirror", 0x15529b0, 0x15529f0 },
    { L"Chosokabe Motochika Parrot Mirror", 0x1a41910, 0x1a41930 },
    { L"Chosokabe Motochika Assist Mirror", 0x1b03f90, 0x1b03fb0 },
    { L"Chosokabe Motochika Assist 2 Mirror", 0x1b19190, 0x1b191b0 },
    { L"Chosokabe Motochika Assist Mirror", 0x1b94e00, 0x1b94e20 },
};

const sGame_PaletteDataset BASARA_P_MORI_PALETTES_A[] =
{
    { L"Mori Motonari A", 0x1cf1834, 0x1cf1874 },
    { L"Mori Motonari Assist A", 0x20a9034, 0x20a9054 },
    { L"Mori Motonari Assist 2 A", 0x20ae384, 0x20ae3a4 },
    { L"Mori Motonari Assist 3 A", 0x210efe4, 0x210f004 },
    { L"Mori Motonari Assist A", 0x214bae4, 0x214bb04 },
};

const sGame_PaletteDataset BASARA_P_MORI_PALETTES_B[] =
{
    { L"Mori Motonari B", 0x1cf1880, 0x1cf18c0 },
    { L"Mori Motonari Assist B", 0x20a9060, 0x20a9080 },
    { L"Mori Motonari Assist 2 B", 0x20ae3b0, 0x20ae3d0 },
    { L"Mori Motonari Assist 3 B", 0x210f010, 0x210f030 },
    { L"Mori Motonari Assist B", 0x214bb10, 0x214bb30 },
};

const sGame_PaletteDataset BASARA_P_MORI_PALETTES_C[] =
{
    { L"Mori Motonari C", 0x1cf18cc, 0x1cf190c },
    { L"Mori Motonari Assist C", 0x20a908c, 0x20a90ac },
    { L"Mori Motonari Assist 2 C", 0x20ae3dc, 0x20ae3fc },
    { L"Mori Motonari Assist 3 C", 0x210f03c, 0x210f05c },
    { L"Mori Motonari Assist C", 0x214bb3c, 0x214bb5c },
};

const sGame_PaletteDataset BASARA_P_MORI_PALETTES_E[] =
{
    { L"Mori Motonari E", 0x1cf1918, 0x1cf1958 },
    { L"Mori Motonari Assist E", 0x20a90b8, 0x20a90d8 },
    { L"Mori Motonari Assist 2 E", 0x20ae408, 0x20ae428 },
    { L"Mori Motonari Assist 3 E", 0x210f068, 0x210f088 },
    { L"Mori Motonari Assist E", 0x214bb68, 0x214bb88 },
};

const sGame_PaletteDataset BASARA_P_MORI_PALETTES_ABC[] =
{
    { L"Mori Motonari ABC", 0x1cf1964, 0x1cf19a4 },
    { L"Mori Motonari Assist ABC", 0x20a90e4, 0x20a9104 },
    { L"Mori Motonari Assist 2 ABC", 0x20ae434, 0x20ae454 },
    { L"Mori Motonari Assist 3 ABC", 0x210f094, 0x210f0b4 },
    { L"Mori Motonari Assist ABC", 0x214bb94, 0x214bbb4 },
};

const sGame_PaletteDataset BASARA_P_MORI_PALETTES_MIRROR[] =
{
    { L"Mori Motonari Mirror", 0x1cf19b0, 0x1cf19f0 },
    { L"Mori Motonari Assist Mirror", 0x20a9110, 0x20a9130 },
    { L"Mori Motonari Assist 2 Mirror", 0x20ae460, 0x20ae480 },
    { L"Mori Motonari Assist 3 Mirror", 0x210f0c0, 0x210f0e0 },
    { L"Mori Motonari Assist Mirror", 0x214bbc0, 0x214bbe0 },
};

const sGame_PaletteDataset BASARA_P_MORI_PALETTES_EXTRAS[] =
{
    { L"Mori Motonari Effect 1", 0x20b37c4, 0x20b37e4 },
    { L"Mori Motonari Effect 2", 0x20b37f0, 0x20b3810 },
};

const sGame_PaletteDataset BASARA_P_ODA_PALETTES_A[] =
{
    { L"Oda Nobunaga A", 0x2356034, 0x2356074 },
    { L"Nohime Assist A", 0x295ee24, 0x295ee44 },
    { L"Mori Ranmaru Assist A", 0x29c4804, 0x29c4824 },
};

const sGame_PaletteDataset BASARA_P_ODA_PALETTES_B[] =
{
    { L"Oda Nobunaga B", 0x2356080, 0x23560c0 },
    { L"Nohime Assist B", 0x295ee50, 0x295ee70 },
    { L"Mori Ranmaru Assist B", 0x29c4830, 0x29c4850 },
};

const sGame_PaletteDataset BASARA_P_ODA_PALETTES_C[] =
{
    { L"Oda Nobunaga C", 0x23560cc, 0x235610c },
    { L"Nohime Assist C", 0x295ee7c, 0x295ee9c },
    { L"Mori Ranmaru Assist C", 0x29c485c, 0x29c487c },
};

const sGame_PaletteDataset BASARA_P_ODA_PALETTES_E[] =
{
    { L"Oda Nobunaga E", 0x2356118, 0x2356158 },
    { L"Nohime Assist E", 0x295eea8, 0x295eec8 },
    { L"Mori Ranmaru Assist E", 0x29c4888, 0x29c48a8 },
};

const sGame_PaletteDataset BASARA_P_ODA_PALETTES_ABC[] =
{
    { L"Oda Nobunaga ABC", 0x2356164, 0x23561a4 },
    { L"Nohime Assist ABC", 0x295eed4, 0x295eef4 },
    { L"Mori Ranmaru Assist ABC", 0x29c48b4, 0x29c48d4 },
};

const sGame_PaletteDataset BASARA_P_ODA_PALETTES_MIRROR[] =
{
    { L"Oda Nobunaga Mirror", 0x23561b0, 0x23561f0 },
    { L"Nohime Assist Mirror", 0x295ef00, 0x295ef20 },
    { L"Mori Ranmaru Assist Mirror", 0x29c48e0, 0x29c4900 },
};

const sGame_PaletteDataset BASARA_P_UESUGI_PALETTES_A[] =
{
    { L"Uesugi Kenshin A", 0x2af9834, 0x2af9874 },
    { L"Rose Effect A", 0x2e54034, 0x2e54054 },
    { L"Kasuga Assist A", 0x2fbed84, 0x2fbeda4 },
};

const sGame_PaletteDataset BASARA_P_UESUGI_PALETTES_B[] =
{
    { L"Uesugi Kenshin B", 0x2af9880, 0x2af98c0 },
    { L"Rose Effect B", 0x2e54060, 0x2e54080 },
    { L"Kasuga Assist B", 0x2fbedb0, 0x2fbedd0 },
};

const sGame_PaletteDataset BASARA_P_UESUGI_PALETTES_C[] =
{
    { L"Uesugi Kenshin C", 0x2af98cc, 0x2af990c },
    { L"Rose Effect C", 0x2e5408c, 0x2e540ac },
    { L"Kasuga Assist C", 0x2fbeddc, 0x2fbedfc },
};

const sGame_PaletteDataset BASARA_P_UESUGI_PALETTES_E[] =
{
    { L"Uesugi Kenshin E", 0x2af9918, 0x2af9958 },
    { L"Rose Effect E", 0x2e540b8, 0x2e540d8 },
    { L"Kasuga Assist E", 0x2fbee08, 0x2fbee28 },
};

const sGame_PaletteDataset BASARA_P_UESUGI_PALETTES_ABC[] =
{
    { L"Uesugi Kenshin ABC", 0x2af9964, 0x2af99a4 },
    { L"Rose Effect ABC", 0x2e540e4, 0x2e54104 },
    { L"Kasuga Assist ABC", 0x2fbee34, 0x2fbee54 },
};

const sGame_PaletteDataset BASARA_P_UESUGI_PALETTES_MIRROR[] =
{
    { L"Uesugi Kenshin Mirror", 0x2af99b0, 0x2af99f0 },
    { L"Rose Effect Mirror", 0x2e54110, 0x2e54130 },
    { L"Kasuga Assist Mirror", 0x2fbee60, 0x2fbee80 },
};

const sGame_PaletteDataset BASARA_P_OICHI_PALETTES_A[] =
{
    { L"Oichi A", 0x321e034, 0x321e074 },
    { L"Azai Nagamasa Assist 1 A", 0x36a0bf4, 0x36a0c14 },
    { L"Azai Nagamasa Assist A", 0x36fb2f4, 0x36fb314 },
};

const sGame_PaletteDataset BASARA_P_OICHI_PALETTES_B[] =
{
    { L"Oichi B", 0x321e080, 0x321e0c0 },
    { L"Azai Nagamasa Assist 1 B", 0x36a0c20, 0x36a0c40 },
    { L"Azai Nagamasa Assist B", 0x36fb320, 0x36fb340 },
};

const sGame_PaletteDataset BASARA_P_OICHI_PALETTES_C[] =
{
    { L"Oichi C", 0x321e0cc, 0x321e10c },
    { L"Azai Nagamasa Assist 1 C", 0x36a0c4c, 0x36a0c6c },
    { L"Azai Nagamasa Assist C", 0x36fb34c, 0x36fb36c },
};

const sGame_PaletteDataset BASARA_P_OICHI_PALETTES_E[] =
{
    { L"Oichi E", 0x321e118, 0x321e158 },
    { L"Azai Nagamasa Assist 1 E", 0x36a0c78, 0x36a0c98 },
    { L"Azai Nagamasa Assist E", 0x36fb378, 0x36fb398 },
};

const sGame_PaletteDataset BASARA_P_OICHI_PALETTES_ABC[] =
{
    { L"Oichi ABC", 0x321e164, 0x321e1a4 },
    { L"Azai Nagamasa Assist 1 ABC", 0x36a0ca4, 0x36a0cc4 },
    { L"Azai Nagamasa Assist ABC", 0x36fb3a4, 0x36fb3c4 },
};

const sGame_PaletteDataset BASARA_P_OICHI_PALETTES_MIRROR[] =
{
    { L"Oichi Mirror", 0x321e1b0, 0x321e1f0 },
    { L"Azai Nagamasa Assist 1 Mirror", 0x36a0cd0, 0x36a0cf0 },
    { L"Azai Nagamasa Assist Mirror", 0x36fb3d0, 0x36fb3f0 },
};

const sGame_PaletteDataset BASARA_P_HONDA_PALETTES_A[] =
{
    { L"Honda Tadakatsu A", 0x38a7834, 0x38a7854 },
    { L"Ieyasu Tokugawa A", 0x3f17b94, 0x3f17bb4 },
};

const sGame_PaletteDataset BASARA_P_HONDA_PALETTES_B[] =
{
    { L"Honda Tadakatsu B", 0x38a7860, 0x38a7880 },
    { L"Ieyasu Tokugawa B", 0x3f17bc0, 0x3f17be0 },
};

const sGame_PaletteDataset BASARA_P_HONDA_PALETTES_C[] =
{
    { L"Honda Tadakatsu C", 0x38a788c, 0x38a78ac },
    { L"Ieyasu Tokugawa C", 0x3f17bec, 0x3f17c0c },
};

const sGame_PaletteDataset BASARA_P_HONDA_PALETTES_E[] =
{
    { L"Honda Tadakatsu E", 0x38a78b8, 0x38a78d8 },
    { L"Ieyasu Tokugawa E", 0x3f17c18, 0x3f17c38 },
};

const sGame_PaletteDataset BASARA_P_HONDA_PALETTES_ABC[] =
{
    { L"Honda Tadakatsu ABC", 0x38a78e4, 0x38a7904 },
    { L"Ieyasu Tokugawa ABC", 0x3f17c44, 0x3f17c64 },
};

const sGame_PaletteDataset BASARA_P_HONDA_PALETTES_MIRROR[] =
{
    { L"Honda Tadakatsu Mirror", 0x38a7910, 0x38a7930 },
    { L"Ieyasu Tokugawa Mirror", 0x3f17c70, 0x3f17c90 },
};

const sGame_PaletteDataset BASARA_P_TOYOTOMI_PALETTES_A[] =
{
    { L"Toyotomi Hideyoshi A", 0x400f834, 0x400f874 },
    { L"Takenaka Hanbei Assist A", 0x45fb264, 0x45fb284 },
};

const sGame_PaletteDataset BASARA_P_TOYOTOMI_PALETTES_B[] =
{
    { L"Toyotomi Hideyoshi B", 0x400f880, 0x400f8c0 },
    { L"Takenaka Hanbei Assist B", 0x45fb290, 0x45fb2b0 },
};

const sGame_PaletteDataset BASARA_P_TOYOTOMI_PALETTES_C[] =
{
    { L"Toyotomi Hideyoshi C", 0x400f8cc, 0x400f90c },
    { L"Takenaka Hanbei Assist C", 0x45fb2bc, 0x45fb2dc },
};

const sGame_PaletteDataset BASARA_P_TOYOTOMI_PALETTES_E[] =
{
    { L"Toyotomi Hideyoshi E", 0x400f918, 0x400f958 },
    { L"Takenaka Hanbei Assist E", 0x45fb2e8, 0x45fb308 },
};

const sGame_PaletteDataset BASARA_P_TOYOTOMI_PALETTES_ABC[] =
{
    { L"Toyotomi Hideyoshi ABC", 0x400f964, 0x400f9a4 },
    { L"Takenaka Hanbei Assist ABC", 0x45fb314, 0x45fb334 },
};

const sGame_PaletteDataset BASARA_P_TOYOTOMI_PALETTES_MIRROR[] =
{
    { L"Toyotomi Hideyoshi Mirror", 0x400f9b0, 0x400f9f0 },
    { L"Takenaka Hanbei Assist Mirror", 0x45fb340, 0x45fb360 },
};

const sGame_PaletteDataset BASARA_P_KATAKURA_PALETTES_A[] =
{
    { L"Katakura Kojuro A", 0x47a2834, 0x47a2874 },
    { L"Date Masamune Assist A", 0x4c919f4, 0x4c91a14 },
};

const sGame_PaletteDataset BASARA_P_KATAKURA_PALETTES_B[] =
{
    { L"Katakura Kojuro B", 0x47a2880, 0x47a28c0 },
    { L"Date Masamune Assist B", 0x4c91a20, 0x4c91a40 },
};

const sGame_PaletteDataset BASARA_P_KATAKURA_PALETTES_C[] =
{
    { L"Katakura Kojuro C", 0x47a28cc, 0x47a290c },
    { L"Date Masamune Assist C", 0x4c91a4c, 0x4c91a6c },
};

const sGame_PaletteDataset BASARA_P_KATAKURA_PALETTES_E[] =
{
    { L"Katakura Kojuro E", 0x47a2918, 0x47a2958 },
    { L"Date Masamune Assist E", 0x4c91a78, 0x4c91a98 },
};

const sGame_PaletteDataset BASARA_P_KATAKURA_PALETTES_ABC[] =
{
    { L"Katakura Kojuro ABC", 0x47a2964, 0x47a29a4 },
    { L"Date Masamune Assist ABC", 0x4c91aa4, 0x4c91ac4 },
};

const sGame_PaletteDataset BASARA_P_KATAKURA_PALETTES_MIRROR[] =
{
    { L"Katakura Kojuro Mirror", 0x47a29b0, 0x47a29f0 },
    { L"Date Masamune Assist Mirror", 0x4c91ad0, 0x4c91af0 },
};

const sGame_PaletteDataset BASARA_P_TAKENAKA_PALETTES_A[] =
{
    { L"Takenaka Hanbei A", 0x4e35034, 0x4e35074 },
    { L"Toyotomi Hideyoshi Assist A", 0x5240d44, 0x5240d64 },
};

const sGame_PaletteDataset BASARA_P_TAKENAKA_PALETTES_B[] =
{
    { L"Takenaka Hanbei B", 0x4e35080, 0x4e350c0 },
    { L"Toyotomi Hideyoshi Assist B", 0x5240d70, 0x5240d90 },
};

const sGame_PaletteDataset BASARA_P_TAKENAKA_PALETTES_C[] =
{
    { L"Takenaka Hanbei C", 0x4e350cc, 0x4e3510c },
    { L"Toyotomi Hideyoshi Assist C", 0x5240d9c, 0x5240dbc },
};

const sGame_PaletteDataset BASARA_P_TAKENAKA_PALETTES_E[] =
{
    { L"Takenaka Hanbei E", 0x4e35118, 0x4e35158 },
    { L"Toyotomi Hideyoshi Assist E", 0x5240dc8, 0x5240de8 },
};

const sGame_PaletteDataset BASARA_P_TAKENAKA_PALETTES_ABC[] =
{
    { L"Takenaka Hanbei ABC", 0x4e35164, 0x4e351a4 },
    { L"Toyotomi Hideyoshi Assist ABC", 0x5240df4, 0x5240e14 },
};

const sGame_PaletteDataset BASARA_P_TAKENAKA_PALETTES_MIRROR[] =
{
    { L"Takenaka Hanbei Mirror", 0x4e351b0, 0x4e351f0 },
    { L"Toyotomi Hideyoshi Assist Mirror", 0x5240e20, 0x5240e40 },
};

const sDescTreeNode BASARA_P_DATE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_DATE_PALETTES_A, ARRAYSIZE(BASARA_P_DATE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_DATE_PALETTES_B, ARRAYSIZE(BASARA_P_DATE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_DATE_PALETTES_C, ARRAYSIZE(BASARA_P_DATE_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_DATE_PALETTES_E, ARRAYSIZE(BASARA_P_DATE_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_DATE_PALETTES_ABC, ARRAYSIZE(BASARA_P_DATE_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_DATE_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_DATE_PALETTES_MIRROR) },
};

const sDescTreeNode BASARA_P_SANADA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_SANADA_PALETTES_A, ARRAYSIZE(BASARA_P_SANADA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_SANADA_PALETTES_B, ARRAYSIZE(BASARA_P_SANADA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_SANADA_PALETTES_C, ARRAYSIZE(BASARA_P_SANADA_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_SANADA_PALETTES_E, ARRAYSIZE(BASARA_P_SANADA_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_SANADA_PALETTES_ABC, ARRAYSIZE(BASARA_P_SANADA_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_SANADA_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_SANADA_PALETTES_MIRROR) },
};

const sDescTreeNode BASARA_P_KEIJI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_KEIJI_PALETTES_A, ARRAYSIZE(BASARA_P_KEIJI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_KEIJI_PALETTES_B, ARRAYSIZE(BASARA_P_KEIJI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_KEIJI_PALETTES_C, ARRAYSIZE(BASARA_P_KEIJI_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_KEIJI_PALETTES_E, ARRAYSIZE(BASARA_P_KEIJI_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_KEIJI_PALETTES_ABC, ARRAYSIZE(BASARA_P_KEIJI_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_KEIJI_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_KEIJI_PALETTES_MIRROR) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)BASARA_P_KEIJI_PALETTES_EXTRAS, ARRAYSIZE(BASARA_P_KEIJI_PALETTES_EXTRAS) },
};

const sDescTreeNode BASARA_P_CHOSOKABE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_CHOSOKABE_PALETTES_A, ARRAYSIZE(BASARA_P_CHOSOKABE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_CHOSOKABE_PALETTES_B, ARRAYSIZE(BASARA_P_CHOSOKABE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_CHOSOKABE_PALETTES_C, ARRAYSIZE(BASARA_P_CHOSOKABE_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_CHOSOKABE_PALETTES_E, ARRAYSIZE(BASARA_P_CHOSOKABE_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_CHOSOKABE_PALETTES_ABC, ARRAYSIZE(BASARA_P_CHOSOKABE_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_CHOSOKABE_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_CHOSOKABE_PALETTES_MIRROR) },
};

const sDescTreeNode BASARA_P_MORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_MORI_PALETTES_A, ARRAYSIZE(BASARA_P_MORI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_MORI_PALETTES_B, ARRAYSIZE(BASARA_P_MORI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_MORI_PALETTES_C, ARRAYSIZE(BASARA_P_MORI_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_MORI_PALETTES_E, ARRAYSIZE(BASARA_P_MORI_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_MORI_PALETTES_ABC, ARRAYSIZE(BASARA_P_MORI_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_MORI_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_MORI_PALETTES_MIRROR) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)BASARA_P_MORI_PALETTES_EXTRAS, ARRAYSIZE(BASARA_P_MORI_PALETTES_EXTRAS) },
};

const sDescTreeNode BASARA_P_ODA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_ODA_PALETTES_A, ARRAYSIZE(BASARA_P_ODA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_ODA_PALETTES_B, ARRAYSIZE(BASARA_P_ODA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_ODA_PALETTES_C, ARRAYSIZE(BASARA_P_ODA_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_ODA_PALETTES_E, ARRAYSIZE(BASARA_P_ODA_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_ODA_PALETTES_ABC, ARRAYSIZE(BASARA_P_ODA_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_ODA_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_ODA_PALETTES_MIRROR) },
};

const sDescTreeNode BASARA_P_UESUGI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_UESUGI_PALETTES_A, ARRAYSIZE(BASARA_P_UESUGI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_UESUGI_PALETTES_B, ARRAYSIZE(BASARA_P_UESUGI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_UESUGI_PALETTES_C, ARRAYSIZE(BASARA_P_UESUGI_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_UESUGI_PALETTES_E, ARRAYSIZE(BASARA_P_UESUGI_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_UESUGI_PALETTES_ABC, ARRAYSIZE(BASARA_P_UESUGI_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_UESUGI_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_UESUGI_PALETTES_MIRROR) },
};

const sDescTreeNode BASARA_P_OICHI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_OICHI_PALETTES_A, ARRAYSIZE(BASARA_P_OICHI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_OICHI_PALETTES_B, ARRAYSIZE(BASARA_P_OICHI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_OICHI_PALETTES_C, ARRAYSIZE(BASARA_P_OICHI_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_OICHI_PALETTES_E, ARRAYSIZE(BASARA_P_OICHI_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_OICHI_PALETTES_ABC, ARRAYSIZE(BASARA_P_OICHI_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_OICHI_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_OICHI_PALETTES_MIRROR) },
};

const sDescTreeNode BASARA_P_HONDA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_HONDA_PALETTES_A, ARRAYSIZE(BASARA_P_HONDA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_HONDA_PALETTES_B, ARRAYSIZE(BASARA_P_HONDA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_HONDA_PALETTES_C, ARRAYSIZE(BASARA_P_HONDA_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_HONDA_PALETTES_E, ARRAYSIZE(BASARA_P_HONDA_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_HONDA_PALETTES_ABC, ARRAYSIZE(BASARA_P_HONDA_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_HONDA_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_HONDA_PALETTES_MIRROR) },
};

const sDescTreeNode BASARA_P_TOYOTOMI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_TOYOTOMI_PALETTES_A, ARRAYSIZE(BASARA_P_TOYOTOMI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_TOYOTOMI_PALETTES_B, ARRAYSIZE(BASARA_P_TOYOTOMI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_TOYOTOMI_PALETTES_C, ARRAYSIZE(BASARA_P_TOYOTOMI_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_TOYOTOMI_PALETTES_E, ARRAYSIZE(BASARA_P_TOYOTOMI_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_TOYOTOMI_PALETTES_ABC, ARRAYSIZE(BASARA_P_TOYOTOMI_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_TOYOTOMI_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_TOYOTOMI_PALETTES_MIRROR) },
};

const sDescTreeNode BASARA_P_KATAKURA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_KATAKURA_PALETTES_A, ARRAYSIZE(BASARA_P_KATAKURA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_KATAKURA_PALETTES_B, ARRAYSIZE(BASARA_P_KATAKURA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_KATAKURA_PALETTES_C, ARRAYSIZE(BASARA_P_KATAKURA_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_KATAKURA_PALETTES_E, ARRAYSIZE(BASARA_P_KATAKURA_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_KATAKURA_PALETTES_ABC, ARRAYSIZE(BASARA_P_KATAKURA_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_KATAKURA_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_KATAKURA_PALETTES_MIRROR) },
};

const sDescTreeNode BASARA_P_TAKENAKA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BASARA_P_TAKENAKA_PALETTES_A, ARRAYSIZE(BASARA_P_TAKENAKA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BASARA_P_TAKENAKA_PALETTES_B, ARRAYSIZE(BASARA_P_TAKENAKA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BASARA_P_TAKENAKA_PALETTES_C, ARRAYSIZE(BASARA_P_TAKENAKA_PALETTES_C) },
    { L"E", DESC_NODETYPE_TREE, (void*)BASARA_P_TAKENAKA_PALETTES_E, ARRAYSIZE(BASARA_P_TAKENAKA_PALETTES_E) },
    { L"ABC", DESC_NODETYPE_TREE, (void*)BASARA_P_TAKENAKA_PALETTES_ABC, ARRAYSIZE(BASARA_P_TAKENAKA_PALETTES_ABC) },
    { L"Mirror", DESC_NODETYPE_TREE, (void*)BASARA_P_TAKENAKA_PALETTES_MIRROR, ARRAYSIZE(BASARA_P_TAKENAKA_PALETTES_MIRROR) },
};

const sDescTreeNode BASARA_P_UNITS[] =
{
    { L"Date Masamune", DESC_NODETYPE_TREE, (void*)BASARA_P_DATE_COLLECTION, ARRAYSIZE(BASARA_P_DATE_COLLECTION) },
    { L"Sanada Yukimura", DESC_NODETYPE_TREE, (void*)BASARA_P_SANADA_COLLECTION, ARRAYSIZE(BASARA_P_SANADA_COLLECTION) },
    { L"Keiji Maeda", DESC_NODETYPE_TREE, (void*)BASARA_P_KEIJI_COLLECTION, ARRAYSIZE(BASARA_P_KEIJI_COLLECTION) },
    { L"Chosokabe Motochika", DESC_NODETYPE_TREE, (void*)BASARA_P_CHOSOKABE_COLLECTION, ARRAYSIZE(BASARA_P_CHOSOKABE_COLLECTION) },
    { L"Mori Motonari", DESC_NODETYPE_TREE, (void*)BASARA_P_MORI_COLLECTION, ARRAYSIZE(BASARA_P_MORI_COLLECTION) },
    { L"Oda Nobunaga", DESC_NODETYPE_TREE, (void*)BASARA_P_ODA_COLLECTION, ARRAYSIZE(BASARA_P_ODA_COLLECTION) },
    { L"Uesugi Kenshin", DESC_NODETYPE_TREE, (void*)BASARA_P_UESUGI_COLLECTION, ARRAYSIZE(BASARA_P_UESUGI_COLLECTION) },
    { L"Oichi", DESC_NODETYPE_TREE, (void*)BASARA_P_OICHI_COLLECTION, ARRAYSIZE(BASARA_P_OICHI_COLLECTION) },
    { L"Honda Tadakatsu", DESC_NODETYPE_TREE, (void*)BASARA_P_HONDA_COLLECTION, ARRAYSIZE(BASARA_P_HONDA_COLLECTION) },
    { L"Toyoyomi Hideyoshi", DESC_NODETYPE_TREE, (void*)BASARA_P_TOYOTOMI_COLLECTION, ARRAYSIZE(BASARA_P_TOYOTOMI_COLLECTION) },
    { L"Katakura Kojuro", DESC_NODETYPE_TREE, (void*)BASARA_P_KATAKURA_COLLECTION, ARRAYSIZE(BASARA_P_KATAKURA_COLLECTION) },
    { L"Takenaka Hanbei", DESC_NODETYPE_TREE, (void*)BASARA_P_TAKENAKA_COLLECTION, ARRAYSIZE(BASARA_P_TAKENAKA_COLLECTION) },
};

constexpr auto BASARA_P_NUMUNIT = ARRAYSIZE(BASARA_P_UNITS);

constexpr auto BASARA_P_EXTRALOC = BASARA_P_NUMUNIT;
