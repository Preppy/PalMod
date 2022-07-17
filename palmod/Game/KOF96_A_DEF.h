#pragma once

// To add characters or palette lists:
// * Update the DumpPaletteHeaders code
// * Uncomment the call to it
// * Run PalMod and copy the debug output into the header
// That should be it.  Good luck.

const std::vector<uint16_t> KOF96_A_IMGIDS_USED =
{
    // We get the lifebar portrait from these preview sets
    indexKOF94Sprites_Kyo,
    indexKOF94Sprites_Benimaru,
    indexKOF94Sprites_Terry,
    indexKOF94Sprites_Ryo,
    indexKOF94Sprites_Yuri,
    indexKOF94Sprites_Ralf,
    indexKOF94Sprites_Clark,
    indexKOF94Sprites_Kensou,
    indexKOF94Sprites_Chin,
    indexKOF94Sprites_Mai,

    indexKOF96Sprites_Andy,         // 0x247
    indexKOF96Sprites_Athena,       // 0x248
    indexKOF96Sprites_Benimaru,     // 0x249
    indexKOF96Sprites_Chang,        // 0x24A
    indexKOF96Sprites_Chin,         // 0x24B
    indexKOF96Sprites_Chizuru,      // 0x24C
    indexKOF96Sprites_Choi,         // 0x24D
    indexKOF96Sprites_Clark,        // 0x24E
    indexKOF96Sprites_Daimon,       // 0x24F
    indexKOF96Sprites_Geese,        // 0x250
    indexKOF96Sprites_Goenitz,      // 0x251
    indexKOF96Sprites_Iori,         // 0x252
    indexKOF96Sprites_Joe,          // 0x253
    indexKOF96Sprites_Kasumi,       // 0x254
    indexKOF96Sprites_Kensou,       // 0x255
    indexKOF96Sprites_Kim,          // 0x256
    indexKOF96Sprites_King,         // 0x257
    indexKOF96Sprites_Krauser,      // 0x258
    indexKOF96Sprites_Kyo,          // 0x259
    indexKOF96Sprites_Leona,        // 0x25A
    indexKOF96Sprites_Mai,          // 0x25B
    indexKOF96Sprites_Mature,       // 0x25C
    indexKOF96Sprites_MrBig,        // 0x25D
    indexKOF96Sprites_Ralf,         // 0x25E
    indexKOF96Sprites_Robert,       // 0x25F
    indexKOF96Sprites_Ryo,          // 0x260
    indexKOF96Sprites_Terry,        // 0x261
    indexKOF96Sprites_Vice,         // 0x262
    indexKOF96Sprites_Yuri,         // 0x263
    indexKOF96Sprites_Bonus,        // 0x264	

    // Everything that follows is for portraits or extra previews
    indexKOF97Sprites_Andy,

    indexKOF98Sprites_Chang,
    indexKOF98Sprites_Chizuru,
    indexKOF98Sprites_Choi,
    indexKOF98Sprites_Daimon,
    indexKOF98Sprites_Iori,
    indexKOF98Sprites_Joe,
    indexKOF98Sprites_Kim,
    indexKOF98Sprites_Leona,
    indexKOF98Sprites_Mature,
    indexKOF98Sprites_Robert,
    indexKOF98Sprites_Vice,

    indexKOF01Sprites_Leona,        // 0x1c4, for intro dress

    indexKOF02Sprites_Geese,
    indexKOF02Sprites_Goenitz,
};

const sGame_PaletteDataset KOF96_A_KYO_A_PALETTES[] =
{
    { L"Kyo", 0x102002, 0x102022, indexKOF96Sprites_Kyo, 0x00 },
    { L"Super Trail 1", 0x102042, 0x102062, indexKOF96Sprites_Kyo, 0x00 },
    { L"Super Trail 2", 0x102062, 0x102082 },
    { L"MAX Mode", 0x102082, 0x1020a2, indexKOF96Sprites_Kyo, 0x00 },
    { L"Electric Palette 1", 0x1020c2, 0x1020e2, indexKOF96Sprites_Kyo, 0x00 },
    { L"Electric Palette 2", 0x1020e2, 0x102102 },
    { L"Extra 1", 0x102022, 0x102042 },
    { L"Extra 2", 0x1020a2, 0x1020c2 },
    { L"Intro and Orochinagi Flame", 0x102102, 0x102122 },
    { L"Extra 3", 0x102122, 0x102142 },
    { L"Extra 4", 0x102142, 0x102162 },
    { L"Extra 5", 0x102162, 0x102182 },
    { L"Extra 6", 0x102182, 0x1021a2 },
    { L"Game Over Palette", 0x1021a2, 0x1021c2, indexKOF96Sprites_Kyo, 0x00 },
    { L"Next Character Portait", 0x1021c2, 0x1021e2 },
    { L"Lifebar Portrait", 0x1021e2, 0x102202, indexKOF94Sprites_Kyo, 0x20 },
    { L"Win Portrait", 0x109402, 0x109482, indexKOF96Sprites_Kyo, 0x40 },
    { L"Character Select", 0x113a02, 0x113a22, indexKOF96Sprites_Kyo, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KYO_D_PALETTES[] =
{
    { L"Kyo", 0x102202, 0x102222, indexKOF96Sprites_Kyo, 0x00 },
    { L"Super Trail 1", 0x102242, 0x102262, indexKOF96Sprites_Kyo, 0x00 },
    { L"Super Trail 2", 0x102262, 0x102282 },
    { L"MAX Mode", 0x102282, 0x1022a2, indexKOF96Sprites_Kyo, 0x00 },
    { L"Electric Palette 1", 0x1022c2, 0x1022e2, indexKOF96Sprites_Kyo, 0x00 },
    { L"Electric Palette 2", 0x1022e2, 0x102302 },
    { L"Extra 1", 0x102222, 0x102242 },
    { L"Extra 2", 0x1022a2, 0x1022c2 },
    { L"Intro and Orochinagi Flame", 0x102302, 0x102322 },
    { L"Extra 3", 0x102322, 0x102342 },
    { L"Extra 4", 0x102342, 0x102362 },
    { L"Extra 5", 0x102362, 0x102382 },
    { L"Extra 6", 0x102382, 0x1023a2 },
    { L"Game Over Palette", 0x1023a2, 0x1023c2, indexKOF96Sprites_Kyo, 0x00 },
    { L"Next Character Portait", 0x1023c2, 0x1023e2 },
    { L"Lifebar Portrait", 0x1023e2, 0x102402, indexKOF94Sprites_Kyo, 0x20 },
    { L"Win Portrait", 0x109502, 0x109582, indexKOF96Sprites_Kyo, 0x40 },
    { L"Character Select", 0x113da2, 0x113dc2, indexKOF96Sprites_Kyo, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KYO_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114142, 0x114162, indexKOF96Sprites_Kyo, 0x41 },
};

const sGame_PaletteDataset KOF96_A_BENIMARU_A_PALETTES[] =
{
    { L"Benimaru", 0x102402, 0x102422, indexKOF96Sprites_Benimaru, 0x00 },
    { L"Super Trail", 0x102442, 0x102462, indexKOF96Sprites_Benimaru, 0x00 },
    { L"MAX Mode", 0x102482, 0x1024a2, indexKOF96Sprites_Benimaru, 0x00 },
    { L"Electric Palette", 0x1024c2, 0x1024e2, indexKOF96Sprites_Benimaru, 0x00 },
    { L"Special Moves and DMs Effects", 0x102502, 0x102522, indexKOF96Sprites_Benimaru, 0x01 },
    { L"Extra 1", 0x102522, 0x102542 },
    { L"Extra 2", 0x102542, 0x102562 },
    { L"Game Over Palette", 0x1025a2, 0x1025c2, indexKOF96Sprites_Benimaru, 0x00 },
    { L"Next Character Portait", 0x1025c2, 0x1025e2 },
    { L"Lifebar Portrait", 0x1025e2, 0x102602, indexKOF94Sprites_Benimaru, 0x20 },
    { L"Win Portrait", 0x109602, 0x1096c2, indexKOF96Sprites_Benimaru, 0x40 },
    { L"Character Select", 0x113a22, 0x113a42, indexKOF96Sprites_Benimaru, 0x41 },
};

const sGame_PaletteDataset KOF96_A_BENIMARU_D_PALETTES[] =
{
    { L"Benimaru", 0x102602, 0x102622, indexKOF96Sprites_Benimaru, 0x00 },
    { L"Super Trail", 0x102642, 0x102662, indexKOF96Sprites_Benimaru, 0x00 },
    { L"MAX Mode", 0x102682, 0x1026a2, indexKOF96Sprites_Benimaru, 0x00 },
    { L"Electric Palette", 0x1026c2, 0x1026e2, indexKOF96Sprites_Benimaru, 0x00 },
    { L"Special Moves and DMs Effects", 0x102702, 0x102722, indexKOF96Sprites_Benimaru, 0x01 },
    { L"Extra 1", 0x102722, 0x102742 },
    { L"Extra 2", 0x102742, 0x102762 },
    { L"Game Over Palette", 0x1027a2, 0x1027c2, indexKOF96Sprites_Benimaru, 0x00 },
    { L"Next Character Portait", 0x1027c2, 0x1027e2 },
    { L"Lifebar Portrait", 0x1027e2, 0x102802, indexKOF94Sprites_Benimaru, 0x20 },
    { L"Win Portrait", 0x109702, 0x1097c2, indexKOF96Sprites_Benimaru, 0x40 },
    { L"Character Select", 0x113dc2, 0x113de2, indexKOF96Sprites_Benimaru, 0x41 },
};

const sGame_PaletteDataset KOF96_A_BENIMARU_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114162, 0x114182, indexKOF96Sprites_Benimaru, 0x41 },
};

const sGame_PaletteDataset KOF96_A_DAIMON_A_PALETTES[] =
{
    { L"Daimon", 0x102802, 0x102822, indexKOF96Sprites_Daimon, 0x00 },
    { L"Super Trail", 0x102842, 0x102862, indexKOF96Sprites_Daimon, 0x00 },
    { L"MAX Mode", 0x102882, 0x1028a2, indexKOF96Sprites_Daimon, 0x00 },
    { L"Electric Palette", 0x1028c2, 0x1028e2, indexKOF96Sprites_Daimon, 0x00 },
    { L"Game Over Palette", 0x1029a2, 0x1029c2, indexKOF96Sprites_Daimon, 0x00 },
    { L"Next Character Portait", 0x1029c2, 0x1029e2 },
    { L"Lifebar Portrait", 0x1029e2, 0x102a02, indexKOF98Sprites_Daimon, 0x20 },
    { L"Win Portrait", 0x109802, 0x109822, indexKOF96Sprites_Daimon, 0x40 },
    { L"Character Select", 0x113a42, 0x113a62, indexKOF96Sprites_Daimon, 0x41 },
};

const sGame_PaletteDataset KOF96_A_DAIMON_D_PALETTES[] =
{
    { L"Daimon", 0x102a02, 0x102a22, indexKOF96Sprites_Daimon, 0x00 },
    { L"Super Trail", 0x102a42, 0x102a62, indexKOF96Sprites_Daimon, 0x00 },
    { L"MAX Mode", 0x102a82, 0x102aa2, indexKOF96Sprites_Daimon, 0x00 },
    { L"Electric Palette", 0x102ac2, 0x102ae2, indexKOF96Sprites_Daimon, 0x00 },
    { L"Game Over Palette", 0x102ba2, 0x102bc2, indexKOF96Sprites_Daimon, 0x00 },
    { L"Next Character Portait", 0x102bc2, 0x102be2 },
    { L"Lifebar Portrait", 0x102be2, 0x102c02, indexKOF98Sprites_Daimon, 0x20 },
    { L"Win Portrait", 0x109902, 0x109922, indexKOF96Sprites_Daimon, 0x40 },
    { L"Character Select", 0x113de2, 0x113e02, indexKOF96Sprites_Daimon, 0x41 },
};

const sGame_PaletteDataset KOF96_A_DAIMON_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114182, 0x1141a2, indexKOF96Sprites_Daimon, 0x41 },
};

const sGame_PaletteDataset KOF96_A_TERRY_A_PALETTES[] =
{
    { L"Terry", 0x102c02, 0x102c22, indexKOF96Sprites_Terry, 0x00 },
    { L"Super Trail", 0x102c42, 0x102c62, indexKOF96Sprites_Terry, 0x00 },
    { L"MAX Mode", 0x102c82, 0x102ca2, indexKOF96Sprites_Terry, 0x00 },
    { L"Electric Palette", 0x102cc2, 0x102ce2, indexKOF96Sprites_Terry, 0x00 },
    { L"Extra 1", 0x102d02, 0x102d22 },
    { L"Extra 2", 0x102d22, 0x102d42 },
    { L"Extra 3", 0x102d42, 0x102d62 },
    { L"Extra 4", 0x102d62, 0x102d82 },
    { L"Game Over Palette", 0x102da2, 0x102dc2, indexKOF96Sprites_Terry, 0x00 },
    { L"Next Character Portait", 0x102dc2, 0x102de2 },
    { L"Lifebar Portrait", 0x102de2, 0x102e02, indexKOF94Sprites_Terry, 0x20 },
    { L"Win Portrait", 0x109a02, 0x109ac2, indexKOF96Sprites_Terry, 0x40 },
    { L"Character Select", 0x113a62, 0x113a82, indexKOF96Sprites_Terry, 0x41 },
};

const sGame_PaletteDataset KOF96_A_TERRY_D_PALETTES[] =
{
    { L"Terry", 0x102e02, 0x102e22, indexKOF96Sprites_Terry, 0x00 },
    { L"Super Trail", 0x102e42, 0x102e62, indexKOF96Sprites_Terry, 0x00 },
    { L"MAX Mode", 0x102e82, 0x102ea2, indexKOF96Sprites_Terry, 0x00 },
    { L"Electric Palette", 0x102ec2, 0x102ee2, indexKOF96Sprites_Terry, 0x00 },
    { L"Extra 1", 0x102f02, 0x102f22 },
    { L"Extra 2", 0x102f22, 0x102f42 },
    { L"Extra 3", 0x102f42, 0x102f62 },
    { L"Extra 4", 0x102f62, 0x102f82 },
    { L"Game Over Palette", 0x102fa2, 0x102fc2, indexKOF96Sprites_Terry, 0x00 },
    { L"Next Character Portait", 0x102fc2, 0x102fe2 },
    { L"Lifebar Portrait", 0x102fe2, 0x103002, indexKOF94Sprites_Terry, 0x20 },
    { L"Win Portrait", 0x109b02, 0x109bc2, indexKOF96Sprites_Terry, 0x40 },
    { L"Character Select", 0x113e02, 0x113e22, indexKOF96Sprites_Terry, 0x41 },
};

const sGame_PaletteDataset KOF96_A_TERRY_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x1141a2, 0x1141c2, indexKOF96Sprites_Terry, 0x41 },
};

const sGame_PaletteDataset KOF96_A_ANDY_A_PALETTES[] =
{
    { L"Andy", 0x103002, 0x103022, indexKOF96Sprites_Andy, 0x00 },
    { L"Super Trail 1", 0x103042, 0x103062, indexKOF96Sprites_Andy, 0x00 },
    { L"Super Trail 2", 0x103062, 0x103082 },
    { L"MAX Mode", 0x103082, 0x1030a2, indexKOF96Sprites_Andy, 0x00 },
    { L"Electric Palette 1", 0x1030c2, 0x1030e2, indexKOF96Sprites_Andy, 0x00 },
    { L"Electric Palette 2", 0x1030e2, 0x103102 },
    { L"Extra 1", 0x103022, 0x103042 },
    { L"Extra 2", 0x1030a2, 0x1030c2 },
    { L"Extra 3", 0x103102, 0x103122 },
    { L"Extra 4", 0x103122, 0x103142 },
    { L"Extra 5", 0x103142, 0x103162 },
    { L"Extra 6", 0x103182, 0x1031a2 },
    { L"Game Over Palette", 0x1031a2, 0x1031c2, indexKOF96Sprites_Andy, 0x00 },
    { L"Next Character Portait", 0x1031c2, 0x1031e2 },
    { L"Lifebar Portrait", 0x1031e2, 0x103202, indexKOF97Sprites_Andy, 0x20 },
    { L"Win Portrait", 0x109c02, 0x109cc2, indexKOF96Sprites_Andy, 0x40 },
    { L"Character Select", 0x113a82, 0x113aa2, indexKOF96Sprites_Andy, 0x41 },
};

const sGame_PaletteDataset KOF96_A_ANDY_D_PALETTES[] =
{
    { L"Andy", 0x103202, 0x103222, indexKOF96Sprites_Andy, 0x00 },
    { L"Super Trail 1", 0x103242, 0x103262, indexKOF96Sprites_Andy, 0x00 },
    { L"Super Trail 2", 0x103262, 0x103282 },
    { L"MAX Mode", 0x103282, 0x1032a2, indexKOF96Sprites_Andy, 0x00 },
    { L"Electric Palette 1", 0x1032c2, 0x1032e2, indexKOF96Sprites_Andy, 0x00 },
    { L"Electric Palette 2", 0x1032e2, 0x103302 },
    { L"Extra 1", 0x103222, 0x103242 },
    { L"Extra 2", 0x1032a2, 0x1032c2 },
    { L"Extra 3", 0x103302, 0x103322 },
    { L"Extra 4", 0x103322, 0x103342 },
    { L"Extra 5", 0x103342, 0x103362 },
    { L"Extra 6", 0x103382, 0x1033a2 },
    { L"Game Over Palette", 0x1033a2, 0x1033c2, indexKOF96Sprites_Andy, 0x00 },
    { L"Next Character Portait", 0x1033c2, 0x1033e2 },
    { L"Lifebar Portrait", 0x1033e2, 0x103402, indexKOF97Sprites_Andy, 0x20 },
    { L"Win Portrait", 0x109d02, 0x109dc2, indexKOF96Sprites_Andy, 0x40 },
    { L"Character Select", 0x113e22, 0x113e42, indexKOF96Sprites_Andy, 0x41 },
};

const sGame_PaletteDataset KOF96_A_ANDY_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x1141c2, 0x1141e2, indexKOF96Sprites_Andy, 0x41 },
};

const sGame_PaletteDataset KOF96_A_JOE_A_PALETTES[] =
{
    { L"Joe", 0x103402, 0x103422, indexKOF96Sprites_Joe, 0x00 },
    { L"Super Trail", 0x103442, 0x103462, indexKOF96Sprites_Joe, 0x00 },
    { L"MAX Mode", 0x103482, 0x1034a2, indexKOF96Sprites_Joe, 0x00 },
    { L"Electric Palette", 0x1034c2, 0x1034e2, indexKOF96Sprites_Joe, 0x00 },
    { L"Extra 1", 0x103502, 0x103522 },
    { L"Extra 2", 0x103522, 0x103542 },
    { L"Extra 3", 0x103542, 0x103562 },
    { L"Extra 4", 0x103562, 0x103582 },
    { L"Game Over Palette", 0x1035a2, 0x1035c2, indexKOF96Sprites_Joe, 0x00 },
    { L"Next Character Portait", 0x1035c2, 0x1035e2 },
    { L"Lifebar Portrait", 0x1035e2, 0x103602, indexKOF98Sprites_Joe, 0x20 },
    { L"Win Portrait", 0x109e02, 0x109e42, indexKOF96Sprites_Joe, 0x40 },
    { L"Character Select", 0x113aa2, 0x113ac2, indexKOF96Sprites_Joe, 0x41 },
};

const sGame_PaletteDataset KOF96_A_JOE_D_PALETTES[] =
{
    { L"Joe", 0x103602, 0x103622, indexKOF96Sprites_Joe, 0x00 },
    { L"Super Trail", 0x103642, 0x103662, indexKOF96Sprites_Joe, 0x00 },
    { L"MAX Mode", 0x103682, 0x1036a2, indexKOF96Sprites_Joe, 0x00 },
    { L"Electric Palette", 0x1036c2, 0x1036e2, indexKOF96Sprites_Joe, 0x00 },
    { L"Extra 1", 0x103702, 0x103722 },
    { L"Extra 2", 0x103722, 0x103742 },
    { L"Extra 3", 0x103742, 0x103762 },
    { L"Extra 4", 0x103762, 0x103782 },
    { L"Game Over Palette", 0x1037a2, 0x1037c2, indexKOF96Sprites_Joe, 0x00 },
    { L"Next Character Portait", 0x1037c2, 0x1037e2 },
    { L"Lifebar Portrait", 0x1037e2, 0x103802, indexKOF98Sprites_Joe, 0x20 },
    { L"Win Portrait", 0x109f02, 0x109f42, indexKOF96Sprites_Joe, 0x40 },
    { L"Character Select", 0x113e42, 0x113e62, indexKOF96Sprites_Joe, 0x41 },
};

const sGame_PaletteDataset KOF96_A_JOE_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x1141e2, 0x114202, indexKOF96Sprites_Joe, 0x41 },
};

const sGame_PaletteDataset KOF96_A_RYO_A_PALETTES[] =
{
    { L"Ryo", 0x103802, 0x103822, indexKOF96Sprites_Ryo, 0x00 },
    { L"Super Trail", 0x103842, 0x103862, indexKOF96Sprites_Ryo, 0x00 },
    { L"MAX Mode", 0x103882, 0x1038a2, indexKOF96Sprites_Ryo, 0x00 },
    { L"Electric Palette", 0x1038c2, 0x1038e2, indexKOF96Sprites_Ryo, 0x00 },
    { L"Extra 1", 0x103902, 0x103922 },
    { L"Extra 2", 0x103922, 0x103942 },
    { L"Extra 3", 0x103942, 0x103962 },
    { L"Extra 4", 0x103962, 0x103982 },
    { L"Game Over Palette", 0x1039a2, 0x1039c2, indexKOF96Sprites_Ryo, 0x00 },
    { L"Next Character Portait", 0x1039c2, 0x1039e2 },
    { L"Lifebar Portrait", 0x1039e2, 0x103a02, indexKOF94Sprites_Ryo, 0x20 },
    { L"Win Portrait", 0x10a002, 0x10a062, indexKOF96Sprites_Ryo, 0x40 },
    { L"Character Select", 0x113ac2, 0x113ae2, indexKOF96Sprites_Ryo, 0x41 },
};

const sGame_PaletteDataset KOF96_A_RYO_D_PALETTES[] =
{
    { L"Ryo", 0x103a02, 0x103a22, indexKOF96Sprites_Ryo, 0x00 },
    { L"Super Trail", 0x103a42, 0x103a62, indexKOF96Sprites_Ryo, 0x00 },
    { L"MAX Mode", 0x103a82, 0x103aa2, indexKOF96Sprites_Ryo, 0x00 },
    { L"Electric Palette", 0x103ac2, 0x103ae2, indexKOF96Sprites_Ryo, 0x00 },
    { L"Extra 1", 0x103b02, 0x103b22 },
    { L"Extra 2", 0x103b22, 0x103b42 },
    { L"Extra 3", 0x103b42, 0x103b62 },
    { L"Extra 4", 0x103b62, 0x103b82 },
    { L"Game Over Palette", 0x103ba2, 0x103bc2, indexKOF96Sprites_Ryo, 0x00 },
    { L"Next Character Portait", 0x103bc2, 0x103be2 },
    { L"Lifebar Portrait", 0x103be2, 0x103c02, indexKOF94Sprites_Ryo, 0x20 },
    { L"Win Portrait", 0x10a102, 0x10a162, indexKOF96Sprites_Ryo, 0x40 },
    { L"Character Select", 0x113e62, 0x113e82, indexKOF96Sprites_Ryo, 0x41 },
};

const sGame_PaletteDataset KOF96_A_RYO_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114202, 0x114222, indexKOF96Sprites_Ryo, 0x41 },
};

const sGame_PaletteDataset KOF96_A_ROBERT_A_PALETTES[] =
{
    { L"Robert", 0x103c02, 0x103c22, indexKOF96Sprites_Robert, 0x00 },
    { L"Super Trail", 0x103c42, 0x103c62, indexKOF96Sprites_Robert, 0x00 },
    { L"MAX Mode", 0x103c82, 0x103ca2, indexKOF96Sprites_Robert, 0x00 },
    { L"Electric Palette", 0x103cc2, 0x103ce2, indexKOF96Sprites_Robert, 0x00 },
    { L"Extra 1", 0x103d02, 0x103d22 },
    { L"Extra 2", 0x103d22, 0x103d42 },
    { L"Extra 3", 0x103d42, 0x103d62 },
    { L"Extra 4", 0x103d62, 0x103d82 },
    { L"Game Over Palette", 0x103da2, 0x103dc2, indexKOF96Sprites_Robert, 0x00 },
    { L"Next Character Portait", 0x103dc2, 0x103de2 },
    { L"Lifebar Portrait", 0x103de2, 0x103e02, indexKOF98Sprites_Robert, 0x20 },
    { L"Win Portrait", 0x10a202, 0x10a282, indexKOF96Sprites_Robert, 0x40 },
    { L"Character Select", 0x113ae2, 0x113b02, indexKOF96Sprites_Robert, 0x41 },
};

const sGame_PaletteDataset KOF96_A_ROBERT_D_PALETTES[] =
{
    { L"Robert", 0x103e02, 0x103e22, indexKOF96Sprites_Robert, 0x00 },
    { L"Super Trail", 0x103e42, 0x103e62, indexKOF96Sprites_Robert, 0x00 },
    { L"MAX Mode", 0x103e82, 0x103ea2, indexKOF96Sprites_Robert, 0x00 },
    { L"Electric Palette", 0x103ec2, 0x103ee2, indexKOF96Sprites_Robert, 0x00 },
    { L"Extra 1", 0x103f02, 0x103f22 },
    { L"Extra 2", 0x103f22, 0x103f42 },
    { L"Extra 3", 0x103f42, 0x103f62 },
    { L"Extra 4", 0x103f62, 0x103f82 },
    { L"Game Over Palette", 0x103fa2, 0x103fc2, indexKOF96Sprites_Robert, 0x00 },
    { L"Next Character Portait", 0x103fc2, 0x103fe2 },
    { L"Lifebar Portrait", 0x103fe2, 0x104002, indexKOF98Sprites_Robert, 0x20 },
    { L"Win Portrait", 0x10a302, 0x10a382, indexKOF96Sprites_Robert, 0x40 },
    { L"Character Select", 0x113e82, 0x113ea2, indexKOF96Sprites_Robert, 0x41 },
};

const sGame_PaletteDataset KOF96_A_ROBERT_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114222, 0x114242, indexKOF96Sprites_Robert, 0x41 },
};

const sGame_PaletteDataset KOF96_A_YURI_A_PALETTES[] =
{
    { L"Yuri", 0x104002, 0x104022, indexKOF96Sprites_Yuri, 0x00 },
    { L"Super Trail", 0x104042, 0x104062, indexKOF96Sprites_Yuri, 0x00 },
    { L"MAX Mode", 0x104082, 0x1040a2, indexKOF96Sprites_Yuri, 0x00 },
    { L"Electric Palette", 0x1040c2, 0x1040e2, indexKOF96Sprites_Yuri, 0x00 },
    { L"Extra 1", 0x104102, 0x104122 },
    { L"Extra 2", 0x104122, 0x104142 },
    { L"Extra 3", 0x104142, 0x104162 },
    { L"Extra 4", 0x104162, 0x104182 },
    { L"Extra 5", 0x104182, 0x1041a2 },
    { L"Game Over Palette", 0x1041a2, 0x1041c2, indexKOF96Sprites_Yuri, 0x00 },
    { L"Next Character Portait", 0x1041c2, 0x1041e2 },
    { L"Lifebar Portrait", 0x1041e2, 0x104202, indexKOF94Sprites_Yuri, 0x20 },
    { L"Win Portrait", 0x10a402, 0x10a4e2, indexKOF96Sprites_Yuri, 0x40 },
    { L"Character Select", 0x113b02, 0x113b22, indexKOF96Sprites_Yuri, 0x41 },
};

const sGame_PaletteDataset KOF96_A_YURI_D_PALETTES[] =
{
    { L"Yuri", 0x104202, 0x104222, indexKOF96Sprites_Yuri, 0x00 },
    { L"Super Trail", 0x104242, 0x104262, indexKOF96Sprites_Yuri, 0x00 },
    { L"MAX Mode", 0x104282, 0x1042a2, indexKOF96Sprites_Yuri, 0x00 },
    { L"Electric Palette", 0x1042c2, 0x1042e2, indexKOF96Sprites_Yuri, 0x00 },
    { L"Extra 1", 0x104302, 0x104322 },
    { L"Extra 2", 0x104322, 0x104342 },
    { L"Extra 3", 0x104342, 0x104362 },
    { L"Extra 4", 0x104362, 0x104382 },
    { L"Extra 5", 0x104382, 0x1043a2 },
    { L"Game Over Palette", 0x1043a2, 0x1043c2, indexKOF96Sprites_Yuri, 0x00 },
    { L"Next Character Portait", 0x1043c2, 0x1043e2 },
    { L"Lifebar Portrait", 0x1043e2, 0x104402, indexKOF94Sprites_Yuri, 0x20 },
    { L"Win Portrait", 0x10a502, 0x10a5e2, indexKOF96Sprites_Yuri, 0x40 },
    { L"Character Select", 0x113ea2, 0x113ec2, indexKOF96Sprites_Yuri, 0x41 },
};

const sGame_PaletteDataset KOF96_A_YURI_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114242, 0x114262, indexKOF96Sprites_Yuri, 0x41 },
};

const sGame_PaletteDataset KOF96_A_LEONA_A_PALETTES[] =
{
    { L"Leona", 0x104402, 0x104422, indexKOF96Sprites_Leona, 0x00 },
    { L"Super Trail", 0x104442, 0x104462, indexKOF96Sprites_Leona, 0x00 },
    { L"MAX Mode", 0x104482, 0x1044a2, indexKOF96Sprites_Leona, 0x00 },
    { L"Electric Palette", 0x1044c2, 0x1044e2, indexKOF96Sprites_Leona, 0x00 },
    { L"Extra 1: Dress", 0x104422, 0x104442, indexKOF01Sprites_Leona, 0x10 },
    { L"Extra 2", 0x104502, 0x104522 },
    { L"Extra 3", 0x104522, 0x104542 },
    { L"Extra 4", 0x104542, 0x104562 },
    { L"Extra 5", 0x104562, 0x104582 },
    { L"Extra 6", 0x104582, 0x1045a2 },
    { L"Game Over Palette", 0x1045a2, 0x1045c2, indexKOF96Sprites_Leona, 0x00 },
    { L"Next Character Portait", 0x1045c2, 0x1045e2 },
    { L"Lifebar Portrait", 0x1045e2, 0x104602, indexKOF98Sprites_Leona, 0x20 },
    { L"Win Portrait", 0x10a602, 0x10a6e2, indexKOF96Sprites_Leona, 0x40 },
    { L"Character Select", 0x113b22, 0x113b42, indexKOF96Sprites_Leona, 0x41 },
};

const sGame_PaletteDataset KOF96_A_LEONA_D_PALETTES[] =
{
    { L"Leona", 0x104602, 0x104622, indexKOF96Sprites_Leona, 0x00 },
    { L"Super Trail", 0x104642, 0x104662, indexKOF96Sprites_Leona, 0x00 },
    { L"MAX Mode", 0x104682, 0x1046a2, indexKOF96Sprites_Leona, 0x00 },
    { L"Electric Palette", 0x1046c2, 0x1046e2, indexKOF96Sprites_Leona, 0x00 },
    { L"Extra 1: Dress", 0x104622, 0x104642, indexKOF01Sprites_Leona, 0x10  },
    { L"Extra 2", 0x104702, 0x104722 },
    { L"Extra 3", 0x104722, 0x104742 },
    { L"Extra 4", 0x104742, 0x104762 },
    { L"Extra 5", 0x104762, 0x104782 },
    { L"Extra 6", 0x104782, 0x1047a2 },
    { L"Game Over Palette", 0x1047a2, 0x1047c2, indexKOF96Sprites_Leona, 0x00 },
    { L"Next Character Portait", 0x1047c2, 0x1047e2 },
    { L"Lifebar Portrait", 0x1047e2, 0x104802, indexKOF98Sprites_Leona, 0x20 },
    { L"Win Portrait", 0x10a702, 0x10a7e2, indexKOF96Sprites_Leona, 0x40 },
    { L"Character Select", 0x113ec2, 0x113ee2, indexKOF96Sprites_Leona, 0x41 },
};

const sGame_PaletteDataset KOF96_A_LEONA_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114262, 0x114282, indexKOF96Sprites_Leona, 0x41 },
};

const sGame_PaletteDataset KOF96_A_RALF_A_PALETTES[] =
{
    { L"Ralf", 0x104802, 0x104822, indexKOF96Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf Extra", 0x104822, 0x104842, indexKOF96Sprites_Ralf, 0x01 },
    { L"Super Trail", 0x104842, 0x104862, indexKOF96Sprites_Ralf, 0x00, &pairNext },
    { L"Super Trail Extra", 0x104862, 0x104882, indexKOF96Sprites_Ralf, 0x01 },
    { L"MAX Mode", 0x104882, 0x1048a2, indexKOF96Sprites_Ralf, 0x00, &pairNext },
    { L"MAX Mode Extra", 0x1048a2, 0x1048c2, indexKOF96Sprites_Ralf, 0x01 },
    { L"Electric Palette", 0x1048c2, 0x1048e2, indexKOF96Sprites_Ralf, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x1048e2, 0x104902, indexKOF96Sprites_Ralf, 0x01 },
    { L"Extra 1", 0x104942, 0x104962 },
    { L"Game Over Palette", 0x1049a2, 0x1049c2, indexKOF96Sprites_Ralf, 0x00 },
    { L"Next Character Portait", 0x1049c2, 0x1049e2 },
    { L"Lifebar Portrait", 0x1049e2, 0x104a02, indexKOF94Sprites_Ralf, 0x20 },
    { L"Win Portrait", 0x10a802, 0x10a902, indexKOF96Sprites_Ralf, 0x40 },
    { L"Character Select", 0x113b42, 0x113b62, indexKOF96Sprites_Ralf, 0x41 },
};

const sGame_PaletteDataset KOF96_A_RALF_D_PALETTES[] =
{
    { L"Ralf", 0x104a02, 0x104a22, indexKOF96Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf Extra", 0x104a22, 0x104a42, indexKOF96Sprites_Ralf, 0x01 },
    { L"Super Trail", 0x104a42, 0x104a62, indexKOF96Sprites_Ralf, 0x00, &pairNext },
    { L"Super Trail Extra", 0x104a62, 0x104a82, indexKOF96Sprites_Ralf, 0x01 },
    { L"MAX Mode", 0x104a82, 0x104aa2, indexKOF96Sprites_Ralf, 0x00, &pairNext },
    { L"MAX Mode Extra", 0x104aa2, 0x104ac2, indexKOF96Sprites_Ralf, 0x01 },
    { L"Electric Palette", 0x104ac2, 0x104ae2, indexKOF96Sprites_Ralf, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x104ae2, 0x104b02, indexKOF96Sprites_Ralf, 0x01 },
    { L"Extra 1", 0x104b42, 0x104b62 },
    { L"Game Over Palette", 0x104ba2, 0x104bc2, indexKOF96Sprites_Ralf, 0x00 },
    { L"Next Character Portait", 0x104bc2, 0x104be2 },
    { L"Lifebar Portrait", 0x104be2, 0x104c02, indexKOF94Sprites_Ralf, 0x20 },
    { L"Win Portrait", 0x10a902, 0x10aa02, indexKOF96Sprites_Ralf, 0x40 },
    { L"Character Select", 0x113ee2, 0x113f02, indexKOF96Sprites_Ralf, 0x41 },
};

const sGame_PaletteDataset KOF96_A_RALF_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114282, 0x1142a2, indexKOF96Sprites_Ralf, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CLARK_A_PALETTES[] =
{
    { L"Clark", 0x104c02, 0x104c22, indexKOF96Sprites_Clark, 0x00, &pairNext },
    { L"Clark Extra", 0x104c22, 0x104c42, indexKOF96Sprites_Clark, 0x01 },
    { L"Super Trail", 0x104c42, 0x104c62, indexKOF96Sprites_Clark, 0x00, &pairNext },
    { L"Super Trail Extra", 0x104c62, 0x104c82, indexKOF96Sprites_Clark, 0x01 },
    { L"MAX Mode", 0x104c82, 0x104ca2, indexKOF96Sprites_Clark, 0x00, &pairNext },
    { L"MAX Mode Extra", 0x104ca2, 0x104cc2, indexKOF96Sprites_Clark, 0x01 },
    { L"Electric Palette", 0x104cc2, 0x104ce2, indexKOF96Sprites_Clark, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x104ce2, 0x104d02, indexKOF96Sprites_Clark, 0x01 },
    { L"Game Over Palette", 0x104da2, 0x104dc2, indexKOF96Sprites_Clark, 0x00 },
    { L"Next Character Portait", 0x104dc2, 0x104de2 },
    { L"Lifebar Portrait", 0x104de2, 0x104e02, indexKOF94Sprites_Clark, 0x20 },
    { L"Win Portrait", 0x10aa02, 0x10aaa2, indexKOF96Sprites_Clark, 0x40 },
    { L"Character Select", 0x113b62, 0x113b82, indexKOF96Sprites_Clark, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CLARK_D_PALETTES[] =
{
    { L"Clark", 0x104e02, 0x104e22, indexKOF96Sprites_Clark, 0x00, &pairNext },
    { L"Clark Extra", 0x104e22, 0x104e42, indexKOF96Sprites_Clark, 0x01 },
    { L"Super Trail", 0x104e42, 0x104e62, indexKOF96Sprites_Clark, 0x00, &pairNext },
    { L"Super Trail Extra", 0x104e62, 0x104e82, indexKOF96Sprites_Clark, 0x01 },
    { L"MAX Mode", 0x104e82, 0x104ea2, indexKOF96Sprites_Clark, 0x00, &pairNext },
    { L"MAX Mode Extra", 0x104ea2, 0x104ec2, indexKOF96Sprites_Clark, 0x01 },
    { L"Electric Palette", 0x104ec2, 0x104ee2, indexKOF96Sprites_Clark, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x104ee2, 0x104f02, indexKOF96Sprites_Clark, 0x01 },
    { L"Game Over Palette", 0x104fa2, 0x104fc2, indexKOF96Sprites_Clark, 0x00 },
    { L"Next Character Portait", 0x104fc2, 0x104fe2 },
    { L"Lifebar Portrait", 0x104fe2, 0x105002, indexKOF94Sprites_Clark, 0x20 },
    { L"Win Portrait", 0x10ab02, 0x10aba2, indexKOF96Sprites_Clark, 0x40 },
    { L"Character Select", 0x113f02, 0x113f22, indexKOF96Sprites_Clark, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CLARK_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x1142a2, 0x1142c2, indexKOF96Sprites_Clark, 0x41 },
};

const sGame_PaletteDataset KOF96_A_ATHENA_A_PALETTES[] =
{
    { L"Athena", 0x105002, 0x105022, indexKOF96Sprites_Athena, 0x00 },
    { L"Super Trail 1", 0x105042, 0x105062, indexKOF96Sprites_Athena, 0x00 },
    { L"Super Trail 2", 0x105062, 0x105082 },
    { L"MAX Mode", 0x105082, 0x1050a2, indexKOF96Sprites_Athena, 0x00 },
    { L"Electric Palette 1", 0x1050c2, 0x1050e2, indexKOF96Sprites_Athena, 0x00 },
    { L"Electric Palette 2", 0x1050e2, 0x105102 },
    { L"Extra 1", 0x105022, 0x105042 },
    { L"Extra 2", 0x1050a2, 0x1050c2 },
    { L"Extra 3", 0x105102, 0x105122 },
    { L"Extra 4", 0x105122, 0x105142 },
    { L"Extra 5", 0x105142, 0x105162 },
    { L"Extra 6", 0x105162, 0x105182 },
    { L"Extra 7", 0x105182, 0x1051a2 },
    { L"Game Over Palette", 0x1051a2, 0x1051c2, indexKOF96Sprites_Athena, 0x00 },
    { L"Next Character Portait", 0x1051c2, 0x1051e2 },
    { L"Lifebar Portrait", 0x1051e2, 0x105202, indexKOF96Sprites_Athena, 0x20 },
    { L"Win Portrait", 0x10ac02, 0x10ad02, indexKOF96Sprites_Athena, 0x40 },
    { L"Character Select", 0x113b82, 0x113ba2, indexKOF96Sprites_Athena, 0x41 },
};

const sGame_PaletteDataset KOF96_A_ATHENA_D_PALETTES[] =
{
    { L"Athena", 0x105202, 0x105222, indexKOF96Sprites_Athena, 0x00 },
    { L"Super Trail 1", 0x105242, 0x105262, indexKOF96Sprites_Athena, 0x00 },
    { L"Super Trail 2", 0x105262, 0x105282 },
    { L"MAX Mode", 0x105282, 0x1052a2, indexKOF96Sprites_Athena, 0x00 },
    { L"Electric Palette 1", 0x1052c2, 0x1052e2, indexKOF96Sprites_Athena, 0x00 },
    { L"Electric Palette 2", 0x1052e2, 0x105302 },
    { L"Extra 1", 0x105222, 0x105242 },
    { L"Extra 2", 0x1052a2, 0x1052c2 },
    { L"Extra 3", 0x105302, 0x105322 },
    { L"Extra 4", 0x105322, 0x105342 },
    { L"Extra 5", 0x105342, 0x105362 },
    { L"Extra 6", 0x105362, 0x105382 },
    { L"Extra 7", 0x105382, 0x1053a2 },
    { L"Game Over Palette", 0x1053a2, 0x1053c2, indexKOF96Sprites_Athena, 0x00 },
    { L"Next Character Portait", 0x1053c2, 0x1053e2 },
    { L"Lifebar Portrait", 0x1053e2, 0x105402, indexKOF96Sprites_Athena, 0x20 },
    { L"Win Portrait", 0x10ad02, 0x10ae02, indexKOF96Sprites_Athena, 0x40 },
    { L"Character Select", 0x113f22, 0x113f42, indexKOF96Sprites_Athena, 0x41 },
};

const sGame_PaletteDataset KOF96_A_ATHENA_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x1142c2, 0x1142e2, indexKOF96Sprites_Athena, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KENSOU_A_PALETTES[] =
{
    { L"Kensou", 0x105402, 0x105422, indexKOF96Sprites_Kensou, 0x00 },
    { L"Super Trail 1", 0x105442, 0x105462, indexKOF96Sprites_Kensou, 0x00 },
    { L"Super Trail 2", 0x105462, 0x105482 },
    { L"MAX Mode", 0x105482, 0x1054a2, indexKOF96Sprites_Kensou, 0x00 },
    { L"Electric Palette 1", 0x1054c2, 0x1054e2, indexKOF96Sprites_Kensou, 0x00 },
    { L"Electric Palette 2", 0x1054e2, 0x105502 },
    { L"Extra 1", 0x105422, 0x105442 },
    { L"Extra 2", 0x1054a2, 0x1054c2 },
    { L"Extra 3", 0x105502, 0x105522 },
    { L"Extra 4", 0x105522, 0x105542 },
    { L"Extra 5", 0x105542, 0x105562 },
    { L"Extra 6", 0x105562, 0x105582 },
    { L"Game Over Palette", 0x1055a2, 0x1055c2, indexKOF96Sprites_Kensou, 0x00 },
    { L"Next Character Portait", 0x1055c2, 0x1055e2 },
    { L"Lifebar Portrait", 0x1055e2, 0x105602, indexKOF94Sprites_Kensou, 0x20 },
    { L"Win Portrait", 0x10ae02, 0x10ae42, indexKOF96Sprites_Kensou, 0x40 },
    { L"Character Select", 0x113ba2, 0x113bc2, indexKOF96Sprites_Kensou, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KENSOU_D_PALETTES[] =
{
    { L"Kensou", 0x105602, 0x105622, indexKOF96Sprites_Kensou, 0x00 },
    { L"Super Trail 1", 0x105642, 0x105662, indexKOF96Sprites_Kensou, 0x00 },
    { L"Super Trail 2", 0x105662, 0x105682 },
    { L"MAX Mode", 0x105682, 0x1056a2, indexKOF96Sprites_Kensou, 0x00 },
    { L"Electric Palette 1", 0x1056c2, 0x1056e2, indexKOF96Sprites_Kensou, 0x00 },
    { L"Electric Palette 2", 0x1056e2, 0x105702 },
    { L"Extra 1", 0x105622, 0x105642 },
    { L"Extra 2", 0x1056a2, 0x1056c2 },
    { L"Extra 3", 0x105702, 0x105722 },
    { L"Extra 4", 0x105722, 0x105742 },
    { L"Extra 5", 0x105742, 0x105762 },
    { L"Extra 6", 0x105762, 0x105782 },
    { L"Game Over Palette", 0x1057a2, 0x1057c2, indexKOF96Sprites_Kensou, 0x00 },
    { L"Next Character Portait", 0x1057c2, 0x1057e2 },
    { L"Lifebar Portrait", 0x1057e2, 0x105802, indexKOF94Sprites_Kensou, 0x20 },
    { L"Win Portrait", 0x10af02, 0x10af42, indexKOF96Sprites_Kensou, 0x40 },
    { L"Character Select", 0x113f42, 0x113f62, indexKOF96Sprites_Kensou, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KENSOU_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x1142e2, 0x114302, indexKOF96Sprites_Kensou, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHIN_A_PALETTES[] =
{
    { L"Chin", 0x105802, 0x105822, indexKOF96Sprites_Chin, 0x00 },
    { L"Super Trail 1", 0x105842, 0x105862, indexKOF96Sprites_Chin, 0x00 },
    { L"Super Trail 2", 0x105862, 0x105882 },
    { L"MAX Mode", 0x105882, 0x1058a2, indexKOF96Sprites_Chin, 0x00 },
    { L"Electric Palette 1", 0x1058c2, 0x1058e2, indexKOF96Sprites_Chin, 0x00 },
    { L"Electric Palette 2", 0x1058e2, 0x105902 },
    { L"Extra 1", 0x105822, 0x105842 },
    { L"Extra 2", 0x1058a2, 0x1058c2 },
    { L"Extra 3", 0x105902, 0x105922 },
    { L"Extra 4", 0x105922, 0x105942 },
    { L"Extra 5", 0x105942, 0x105962 },
    { L"Game Over Palette", 0x1059a2, 0x1059c2, indexKOF96Sprites_Chin, 0x00 },
    { L"Next Character Portait", 0x1059c2, 0x1059e2 },
    { L"Lifebar Portrait", 0x1059e2, 0x105a02, indexKOF94Sprites_Chin, 0x20 },
    { L"Win Portrait", 0x10b002, 0x10b042, indexKOF96Sprites_Chin, 0x40 },
    { L"Character Select", 0x113bc2, 0x113be2, indexKOF96Sprites_Chin, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHIN_D_PALETTES[] =
{
    { L"Chin", 0x105a02, 0x105a22, indexKOF96Sprites_Chin, 0x00 },
    { L"Super Trail 1", 0x105a42, 0x105a62, indexKOF96Sprites_Chin, 0x00 },
    { L"Super Trail 2", 0x105a62, 0x105a82 },
    { L"MAX Mode", 0x105a82, 0x105aa2, indexKOF96Sprites_Chin, 0x00 },
    { L"Electric Palette 1", 0x105ac2, 0x105ae2, indexKOF96Sprites_Chin, 0x00 },
    { L"Electric Palette 2", 0x105ae2, 0x105b02 },
    { L"Extra 1", 0x105a22, 0x105a42 },
    { L"Extra 2", 0x105aa2, 0x105ac2 },
    { L"Extra 3", 0x105b02, 0x105b22 },
    { L"Extra 4", 0x105b22, 0x105b42 },
    { L"Extra 5", 0x105b42, 0x105b62 },
    { L"Game Over Palette", 0x105ba2, 0x105bc2, indexKOF96Sprites_Chin, 0x00 },
    { L"Next Character Portait", 0x105bc2, 0x105be2 },
    { L"Lifebar Portrait", 0x105be2, 0x105c02, indexKOF94Sprites_Chin, 0x20 },
    { L"Win Portrait", 0x10b102, 0x10b142, indexKOF96Sprites_Chin, 0x40 },
    { L"Character Select", 0x113f62, 0x113f82, indexKOF96Sprites_Chin, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHIN_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114302, 0x114322, indexKOF96Sprites_Chin, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KASUMI_A_PALETTES[] =
{
    { L"Kasumi", 0x105c02, 0x105c22, indexKOF96Sprites_Kasumi, 0x00 },
    { L"Super Trail", 0x105c42, 0x105c62, indexKOF96Sprites_Kasumi, 0x00 },
    { L"MAX Mode", 0x105c82, 0x105ca2, indexKOF96Sprites_Kasumi, 0x00 },
    { L"Electric Palette", 0x105cc2, 0x105ce2, indexKOF96Sprites_Kasumi, 0x00 },
    { L"Extra 1", 0x105d02, 0x105d22 },
    { L"Extra 2", 0x105d22, 0x105d42 },
    { L"Extra 3", 0x105d42, 0x105d62 },
    { L"Extra 4", 0x105d62, 0x105d82 },
    { L"Game Over Palette", 0x105da2, 0x105dc2, indexKOF96Sprites_Kasumi, 0x00 },
    { L"Next Character Portait", 0x105dc2, 0x105de2 },
    { L"Lifebar Portrait", 0x105de2, 0x105e02, indexKOF96Sprites_Kasumi, 0x20 },
    { L"Win Portrait", 0x10b202, 0x10b2a2, indexKOF96Sprites_Kasumi, 0x40 },
    { L"Character Select", 0x113be2, 0x113c02, indexKOF96Sprites_Kasumi, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KASUMI_D_PALETTES[] =
{
    { L"Kasumi", 0x105e02, 0x105e22, indexKOF96Sprites_Kasumi, 0x00 },
    { L"Super Trail", 0x105e42, 0x105e62, indexKOF96Sprites_Kasumi, 0x00 },
    { L"MAX Mode", 0x105e82, 0x105ea2, indexKOF96Sprites_Kasumi, 0x00 },
    { L"Electric Palette", 0x105ec2, 0x105ee2, indexKOF96Sprites_Kasumi, 0x00 },
    { L"Extra 1", 0x105f02, 0x105f22 },
    { L"Extra 2", 0x105f22, 0x105f42 },
    { L"Extra 3", 0x105f42, 0x105f62 },
    { L"Extra 4", 0x105f62, 0x105f82 },
    { L"Game Over Palette", 0x105fa2, 0x105fc2, indexKOF96Sprites_Kasumi, 0x00 },
    { L"Next Character Portait", 0x105fc2, 0x105fe2 },
    { L"Lifebar Portrait", 0x105fe2, 0x106002, indexKOF96Sprites_Kasumi, 0x20 },
    { L"Win Portrait", 0x10b302, 0x10b3a2, indexKOF96Sprites_Kasumi, 0x40 },
    { L"Character Select", 0x113f82, 0x113fa2, indexKOF96Sprites_Kasumi, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KASUMI_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114322, 0x114342, indexKOF96Sprites_Kasumi, 0x41 },
};

const sGame_PaletteDataset KOF96_A_MAI_A_PALETTES[] =
{
    { L"Mai", 0x106002, 0x106022, indexKOF96Sprites_Mai, 0x00 },
    { L"Super Trail 1", 0x106042, 0x106062, indexKOF96Sprites_Mai, 0x00 },
    { L"Super Trail 2", 0x106062, 0x106082 },
    { L"MAX Mode", 0x106082, 0x1060a2, indexKOF96Sprites_Mai, 0x00 },
    { L"Electric Palette 1", 0x1060c2, 0x1060e2, indexKOF96Sprites_Mai, 0x00 },
    { L"Electric Palette 2", 0x1060e2, 0x106102 },
    { L"Extra 1", 0x106022, 0x106042 },
    { L"Extra 2", 0x1060a2, 0x1060c2 },
    { L"Extra 3", 0x106102, 0x106122 },
    { L"Extra 4", 0x106142, 0x106162 },
    { L"Extra 5", 0x106162, 0x106182 },
    { L"Extra 6", 0x106182, 0x1061a2 },
    { L"Game Over Palette", 0x1061a2, 0x1061c2, indexKOF96Sprites_Mai, 0x00 },
    { L"Next Character Portait", 0x1061c2, 0x1061e2 },
    { L"Lifebar Portrait", 0x1061e2, 0x106202, indexKOF94Sprites_Mai, 0x20 },
    { L"Win Portrait", 0x10b402, 0x10b502, indexKOF96Sprites_Mai, 0x40 },
    { L"Character Select", 0x113c02, 0x113c22, indexKOF96Sprites_Mai, 0x41 },
};

const sGame_PaletteDataset KOF96_A_MAI_D_PALETTES[] =
{
    { L"Mai", 0x106202, 0x106222, indexKOF96Sprites_Mai, 0x00 },
    { L"Super Trail 1", 0x106242, 0x106262, indexKOF96Sprites_Mai, 0x00 },
    { L"Super Trail 2", 0x106262, 0x106282 },
    { L"MAX Mode", 0x106282, 0x1062a2, indexKOF96Sprites_Mai, 0x00 },
    { L"Electric Palette 1", 0x1062c2, 0x1062e2, indexKOF96Sprites_Mai, 0x00 },
    { L"Electric Palette 2", 0x1062e2, 0x106302 },
    { L"Extra 1", 0x106222, 0x106242 },
    { L"Extra 2", 0x1062a2, 0x1062c2 },
    { L"Extra 3", 0x106302, 0x106322 },
    { L"Extra 4", 0x106342, 0x106362 },
    { L"Extra 5", 0x106362, 0x106382 },
    { L"Extra 6", 0x106382, 0x1063a2 },
    { L"Game Over Palette", 0x1063a2, 0x1063c2, indexKOF96Sprites_Mai, 0x00 },
    { L"Next Character Portait", 0x1063c2, 0x1063e2 },
    { L"Lifebar Portrait", 0x1063e2, 0x106402, indexKOF94Sprites_Mai, 0x20 },
    { L"Win Portrait", 0x10b502, 0x10b602, indexKOF96Sprites_Mai, 0x40 },
    { L"Character Select", 0x113fa2, 0x113fc2, indexKOF96Sprites_Mai, 0x41 },
};

const sGame_PaletteDataset KOF96_A_MAI_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114342, 0x114362, indexKOF96Sprites_Mai, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KING_A_PALETTES[] =
{
    { L"King", 0x106402, 0x106422, indexKOF96Sprites_King, 0x00 },
    { L"Super Trail", 0x106442, 0x106462, indexKOF96Sprites_King, 0x00 },
    { L"MAX Mode", 0x106482, 0x1064a2, indexKOF96Sprites_King, 0x00 },
    { L"Electric Palette 1", 0x1064c2, 0x1064e2, indexKOF96Sprites_King, 0x00 },
    { L"Electric Palette 2", 0x1064e2, 0x106502 },
    { L"Extra 1", 0x106422, 0x106442 },
    { L"Extra 2", 0x106462, 0x106482 },
    { L"Extra 3", 0x1064a2, 0x1064c2 },
    { L"Extra 4", 0x106502, 0x106522 },
    { L"Extra 5", 0x106522, 0x106542 },
    { L"Game Over Palette", 0x1065a2, 0x1065c2, indexKOF96Sprites_King, 0x00 },
    { L"Next Character Portait", 0x1065c2, 0x1065e2 },
    { L"Lifebar Portrait", 0x1065e2, 0x106602, indexKOF96Sprites_King, 0x20 },
    { L"Win Portrait", 0x10b602, 0x10b6a2, indexKOF96Sprites_King, 0x40 },
    { L"Character Select", 0x113c22, 0x113c42, indexKOF96Sprites_King, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KING_D_PALETTES[] =
{
    { L"King", 0x106602, 0x106622, indexKOF96Sprites_King, 0x00 },
    { L"Super Trail", 0x106642, 0x106662, indexKOF96Sprites_King, 0x00 },
    { L"MAX Mode", 0x106682, 0x1066a2, indexKOF96Sprites_King, 0x00 },
    { L"Electric Palette 1", 0x1066c2, 0x1066e2, indexKOF96Sprites_King, 0x00 },
    { L"Electric Palette 2", 0x1066e2, 0x106702 },
    { L"Extra 1", 0x106622, 0x106642 },
    { L"Extra 2", 0x106662, 0x106682 },
    { L"Extra 3", 0x1066a2, 0x1066c2 },
    { L"Extra 4", 0x106702, 0x106722 },
    { L"Extra 5", 0x106722, 0x106742 },
    { L"Game Over Palette", 0x1067a2, 0x1067c2, indexKOF96Sprites_King, 0x00 },
    { L"Next Character Portait", 0x1067c2, 0x1067e2 },
    { L"Lifebar Portrait", 0x1067e2, 0x106802, indexKOF96Sprites_King, 0x20 },
    { L"Win Portrait", 0x10b702, 0x10b7a2, indexKOF96Sprites_King, 0x40 },
    { L"Character Select", 0x113fc2, 0x113fe2, indexKOF96Sprites_King, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KING_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114362, 0x114382, indexKOF96Sprites_King, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KIM_A_PALETTES[] =
{
    { L"Kim", 0x106802, 0x106822, indexKOF96Sprites_Kim, 0x00 },
    { L"Super Trail", 0x106842, 0x106862, indexKOF96Sprites_Kim, 0x00 },
    { L"MAX Mode", 0x106882, 0x1068a2, indexKOF96Sprites_Kim, 0x00 },
    { L"Electric Palette", 0x1068c2, 0x1068e2, indexKOF96Sprites_Kim, 0x00 },
    { L"Game Over Palette", 0x1069a2, 0x1069c2, indexKOF96Sprites_Kim, 0x00 },
    { L"Next Character Portait", 0x1069c2, 0x1069e2 },
    { L"Lifebar Portrait", 0x1069e2, 0x106a02, indexKOF98Sprites_Kim, 0x20 },
    { L"Win Portrait", 0x10b802, 0x10b842, indexKOF96Sprites_Kim, 0x40 },
    { L"Character Select", 0x113c42, 0x113c62, indexKOF96Sprites_Kim, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KIM_D_PALETTES[] =
{
    { L"Kim", 0x106a02, 0x106a22, indexKOF96Sprites_Kim, 0x00 },
    { L"Super Trail", 0x106a42, 0x106a62, indexKOF96Sprites_Kim, 0x00 },
    { L"MAX Mode", 0x106a82, 0x106aa2, indexKOF96Sprites_Kim, 0x00 },
    { L"Electric Palette", 0x106ac2, 0x106ae2, indexKOF96Sprites_Kim, 0x00 },
    { L"Game Over Palette", 0x106ba2, 0x106bc2, indexKOF96Sprites_Kim, 0x00 },
    { L"Next Character Portait", 0x106bc2, 0x106be2 },
    { L"Lifebar Portrait", 0x106be2, 0x106c02, indexKOF98Sprites_Kim, 0x20 },
    { L"Win Portrait", 0x10b902, 0x10b942, indexKOF96Sprites_Kim, 0x40 },
    { L"Character Select", 0x113fe2, 0x114002, indexKOF96Sprites_Kim, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KIM_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114382, 0x1143a2, indexKOF96Sprites_Kim, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHANG_A_PALETTES[] =
{
    { L"Chang", 0x106c02, 0x106c22, indexKOF96Sprites_Chang, 0x00, &pairNext },
    { L"Chang Extra", 0x106c22, 0x106c42, indexKOF96Sprites_Chang, 0x01 },
    { L"Super Trail", 0x106c42, 0x106c62, indexKOF96Sprites_Chang, 0x00, &pairNext },
    { L"Super Trail Extra", 0x106c62, 0x106c82, indexKOF96Sprites_Chang, 0x01 },
    { L"MAX Mode", 0x106c82, 0x106ca2, indexKOF96Sprites_Chang, 0x00, &pairNext },
    { L"MAX Mode Extra", 0x106ca2, 0x106cc2, indexKOF96Sprites_Chang, 0x01 },
    { L"Electric Palette", 0x106cc2, 0x106ce2, indexKOF96Sprites_Chang, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x106ce2, 0x106d02, indexKOF96Sprites_Chang, 0x01 },
    { L"Game Over Palette", 0x106da2, 0x106dc2, indexKOF96Sprites_Chang, 0x00 },
    { L"Next Character Portait", 0x106dc2, 0x106de2 },
    { L"Lifebar Portrait", 0x106de2, 0x106e02, indexKOF98Sprites_Chang, 0x20 },
    { L"Win Portrait", 0x10ba02, 0x10ba82, indexKOF96Sprites_Chang, 0x40 },
    { L"Character Select", 0x113c62, 0x113c82, indexKOF96Sprites_Chang, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHANG_D_PALETTES[] =
{
    { L"Chang", 0x106e02, 0x106e22, indexKOF96Sprites_Chang, 0x00, &pairNext },
    { L"Chang Extra", 0x106e22, 0x106e42, indexKOF96Sprites_Chang, 0x01 },
    { L"Super Trail", 0x106e42, 0x106e62, indexKOF96Sprites_Chang, 0x00, &pairNext },
    { L"Super Trail Extra", 0x106e62, 0x106e82, indexKOF96Sprites_Chang, 0x01 },
    { L"MAX Mode", 0x106e82, 0x106ea2, indexKOF96Sprites_Chang, 0x00, &pairNext },
    { L"MAX Mode Extra", 0x106ea2, 0x106ec2, indexKOF96Sprites_Chang, 0x01 },
    { L"Electric Palette", 0x106ec2, 0x106ee2, indexKOF96Sprites_Chang, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x106ee2, 0x106f02, indexKOF96Sprites_Chang, 0x01 },
    { L"Game Over Palette", 0x106fa2, 0x106fc2, indexKOF96Sprites_Chang, 0x00 },
    { L"Next Character Portait", 0x106fc2, 0x106fe2 },
    { L"Lifebar Portrait", 0x106fe2, 0x107002, indexKOF98Sprites_Chang, 0x20 },
    { L"Win Portrait", 0x10bb02, 0x10bb82, indexKOF96Sprites_Chang, 0x40 },
    { L"Character Select", 0x114002, 0x114022, indexKOF96Sprites_Chang, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHANG_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x1143a2, 0x1143c2, indexKOF96Sprites_Chang, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHOI_A_PALETTES[] =
{
    { L"Choi", 0x107002, 0x107022, indexKOF96Sprites_Choi, 0x00 },
    { L"Choi Extra", 0x107022, 0x107042 },
    { L"Super Trail", 0x107042, 0x107062, indexKOF96Sprites_Choi, 0x00 },
    { L"Super Trail Extra", 0x107062, 0x107082 },
    { L"MAX Mode", 0x107082, 0x1070a2, indexKOF96Sprites_Choi, 0x00 },
    { L"Max Mode Extra", 0x1070a2, 0x1070c2 },
    { L"Electric Palette", 0x1070c2, 0x1070e2, indexKOF96Sprites_Choi, 0x00 },
    { L"Electric Palette Extra", 0x1070e2, 0x107102 },
    { L"Extra 1", 0x107102, 0x107122 },
    { L"Extra 2", 0x107122, 0x107142 },
    { L"Extra 3", 0x107142, 0x107162 },
    { L"Game Over Palette", 0x1071a2, 0x1071c2, indexKOF96Sprites_Choi, 0x00 },
    { L"Next Character Portait", 0x1071c2, 0x1071e2 },
    { L"Lifebar Portrait", 0x1071e2, 0x107202, indexKOF98Sprites_Choi, 0x20 },
    { L"Win Portrait", 0x10bc02, 0x10bd02, indexKOF96Sprites_Choi, 0x40 },
    { L"Character Select", 0x113c82, 0x113ca2, indexKOF96Sprites_Choi, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHOI_D_PALETTES[] =
{
    { L"Choi", 0x107202, 0x107222, indexKOF96Sprites_Choi, 0x00 },
    { L"Choi Extra", 0x107222, 0x107242 },
    { L"Super Trail", 0x107242, 0x107262, indexKOF96Sprites_Choi, 0x00 },
    { L"Super Trail Extra", 0x107262, 0x107282 },
    { L"MAX Mode", 0x107282, 0x1072a2, indexKOF96Sprites_Choi, 0x00 },
    { L"MAX Mode Extra", 0x1072a2, 0x1072c2 },
    { L"Electric Palette", 0x1072c2, 0x1072e2, indexKOF96Sprites_Choi, 0x00 },
    { L"Electric Palette Extra", 0x1072e2, 0x107302 },
    { L"Extra 1", 0x107302, 0x107322 },
    { L"Extra 2", 0x107322, 0x107342 },
    { L"Extra 3", 0x107342, 0x107362 },
    { L"Game Over Palette", 0x1073a2, 0x1073c2, indexKOF96Sprites_Choi, 0x00 },
    { L"Next Character Portait", 0x1073c2, 0x1073e2 },
    { L"Lifebar Portrait", 0x1073e2, 0x107402, indexKOF98Sprites_Choi, 0x20 },
    { L"Win Portrait", 0x10bd02, 0x10be02, indexKOF96Sprites_Choi, 0x40 },
    { L"Character Select", 0x114022, 0x114042, indexKOF96Sprites_Choi, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHOI_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x1143c2, 0x1143e2, indexKOF96Sprites_Choi, 0x41 },
};

const sGame_PaletteDataset KOF96_A_IORI_A_PALETTES[] =
{
    { L"Iori", 0x107402, 0x107422, indexKOF96Sprites_Iori, 0x00 },
    { L"Super Trail", 0x107442, 0x107462, indexKOF96Sprites_Iori, 0x00 },
    { L"MAX Mode", 0x107482, 0x1074a2, indexKOF96Sprites_Iori, 0x00 },
    { L"Electric Palette", 0x1074c2, 0x1074e2, indexKOF96Sprites_Iori, 0x00 },
    { L"Extra 1", 0x107502, 0x107522 },
    { L"Extra 2", 0x107522, 0x107542 },
    { L"Extra 3", 0x107542, 0x107562 },
    { L"Extra 4", 0x107562, 0x107582 },
    { L"Extra 5", 0x107582, 0x1075a2 },
    { L"Game Over Palette", 0x1075a2, 0x1075c2, indexKOF96Sprites_Iori, 0x00 },
    { L"Next Character Portait", 0x1075c2, 0x1075e2 },
    { L"Lifebar Portrait", 0x1075e2, 0x107602, indexKOF98Sprites_Iori, 0x20 },
    { L"Win Portrait", 0x10be02, 0x10bea2, indexKOF96Sprites_Iori, 0x40 },
    { L"Character Select", 0x113ca2, 0x113cc2, indexKOF96Sprites_Iori, 0x41 },
};

const sGame_PaletteDataset KOF96_A_IORI_D_PALETTES[] =
{
    { L"Iori", 0x107602, 0x107622, indexKOF96Sprites_Iori, 0x00 },
    { L"Super Trail", 0x107642, 0x107662, indexKOF96Sprites_Iori, 0x00 },
    { L"MAX Mode", 0x107682, 0x1076a2, indexKOF96Sprites_Iori, 0x00 },
    { L"Electric Palette", 0x1076c2, 0x1076e2, indexKOF96Sprites_Iori, 0x00 },
    { L"Extra 1", 0x107702, 0x107722 },
    { L"Extra 2", 0x107722, 0x107742 },
    { L"Extra 3", 0x107742, 0x107762 },
    { L"Extra 4", 0x107762, 0x107782 },
    { L"Extra 5", 0x107782, 0x1077a2 },
    { L"Game Over Palette", 0x1077a2, 0x1077c2, indexKOF96Sprites_Iori, 0x00 },
    { L"Next Character Portait", 0x1077c2, 0x1077e2 },
    { L"Lifebar Portrait", 0x1077e2, 0x107802, indexKOF98Sprites_Iori, 0x20 },
    { L"Win Portrait", 0x10bf02, 0x10bfa2, indexKOF96Sprites_Iori, 0x40 },
    { L"Character Select", 0x114042, 0x114062, indexKOF96Sprites_Iori, 0x41 },
};

const sGame_PaletteDataset KOF96_A_IORI_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x1143e2, 0x114402, indexKOF96Sprites_Iori, 0x41 },
};

const sGame_PaletteDataset KOF96_A_MATURE_A_PALETTES[] =
{
    { L"Mature", 0x107802, 0x107822, indexKOF96Sprites_Mature, 0x00 },
    { L"Super Trail", 0x107842, 0x107862, indexKOF96Sprites_Mature, 0x00 },
    { L"MAX Mode", 0x107882, 0x1078a2, indexKOF96Sprites_Mature, 0x00 },
    { L"Electric Palette", 0x1078c2, 0x1078e2, indexKOF96Sprites_Mature, 0x00 },
    { L"Extra 1", 0x107902, 0x107922 },
    { L"Extra 2", 0x107922, 0x107942 },
    { L"Extra 3", 0x107942, 0x107962 },
    { L"Game Over Palette", 0x1079a2, 0x1079c2, indexKOF96Sprites_Mature, 0x00 },
    { L"Next Character Portait", 0x1079c2, 0x1079e2 },
    { L"Lifebar Portrait", 0x1079e2, 0x107a02, indexKOF98Sprites_Mature, 0x20 },
    { L"Win Portrait", 0x10c002, 0x10c082, indexKOF96Sprites_Mature, 0x40 },
    { L"Character Select", 0x113cc2, 0x113ce2, indexKOF96Sprites_Mature, 0x41 },
};

const sGame_PaletteDataset KOF96_A_MATURE_D_PALETTES[] =
{
    { L"Mature", 0x107a02, 0x107a22, indexKOF96Sprites_Mature, 0x00 },
    { L"Super Trail", 0x107a42, 0x107a62, indexKOF96Sprites_Mature, 0x00 },
    { L"MAX Mode", 0x107a82, 0x107aa2, indexKOF96Sprites_Mature, 0x00 },
    { L"Electric Palette", 0x107ac2, 0x107ae2, indexKOF96Sprites_Mature, 0x00 },
    { L"Extra 1", 0x107b02, 0x107b22 },
    { L"Extra 2", 0x107b22, 0x107b42 },
    { L"Extra 3", 0x107b42, 0x107b62 },
    { L"Game Over Palette", 0x107ba2, 0x107bc2, indexKOF96Sprites_Mature, 0x00 },
    { L"Next Character Portait", 0x107bc2, 0x107be2 },
    { L"Lifebar Portrait", 0x107be2, 0x107c02, indexKOF98Sprites_Mature, 0x20 },
    { L"Win Portrait", 0x10c102, 0x10c182, indexKOF96Sprites_Mature, 0x40 },
    { L"Character Select", 0x114062, 0x114082, indexKOF96Sprites_Mature, 0x41 },
};

const sGame_PaletteDataset KOF96_A_MATURE_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114402, 0x114422, indexKOF96Sprites_Mature, 0x41 },
};

const sGame_PaletteDataset KOF96_A_VICE_A_PALETTES[] =
{
    { L"Vice", 0x107c02, 0x107c22, indexKOF96Sprites_Vice, 0x00 },
    { L"Super Trail", 0x107c42, 0x107c62, indexKOF96Sprites_Vice, 0x00 },
    { L"MAX Mode", 0x107c82, 0x107ca2, indexKOF96Sprites_Vice, 0x00 },
    { L"Electric Palette", 0x107cc2, 0x107ce2, indexKOF96Sprites_Vice, 0x00 },
    { L"Extra 1", 0x107d02, 0x107d22 },
    { L"Extra 2", 0x107d22, 0x107d42 },
    { L"Extra 3", 0x107d42, 0x107d62 },
    { L"Game Over Palette", 0x107da2, 0x107dc2, indexKOF96Sprites_Vice, 0x00 },
    { L"Next Character Portait", 0x107dc2, 0x107de2 },
    { L"Lifebar Portrait", 0x107de2, 0x107e02, indexKOF98Sprites_Vice, 0x20 },
    { L"Win Portrait", 0x10c202, 0x10c2a2, indexKOF96Sprites_Vice, 0x40 },
    { L"Character Select", 0x113ce2, 0x113d02, indexKOF96Sprites_Vice, 0x41 },
};

const sGame_PaletteDataset KOF96_A_VICE_D_PALETTES[] =
{
    { L"Vice", 0x107e02, 0x107e22, indexKOF96Sprites_Vice, 0x00 },
    { L"Super Trail", 0x107e42, 0x107e62, indexKOF96Sprites_Vice, 0x00 },
    { L"MAX Mode", 0x107e82, 0x107ea2, indexKOF96Sprites_Vice, 0x00 },
    { L"Electric Palette", 0x107ec2, 0x107ee2, indexKOF96Sprites_Vice, 0x00 },
    { L"Extra 1", 0x107f02, 0x107f22 },
    { L"Extra 2", 0x107f22, 0x107f42 },
    { L"Extra 3", 0x107f42, 0x107f62 },
    { L"Game Over Palette", 0x107fa2, 0x107fc2, indexKOF96Sprites_Vice, 0x00 },
    { L"Next Character Portait", 0x107fc2, 0x107fe2 },
    { L"Lifebar Portrait", 0x107fe2, 0x108002, indexKOF98Sprites_Vice, 0x20 },
    { L"Win Portrait", 0x10c302, 0x10c3a2, indexKOF96Sprites_Vice, 0x40 },
    { L"Character Select", 0x114082, 0x1140a2, indexKOF96Sprites_Vice, 0x41 },
};

const sGame_PaletteDataset KOF96_A_VICE_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114422, 0x114442, indexKOF96Sprites_Vice, 0x41 },
};

const sGame_PaletteDataset KOF96_A_GEESE_A_PALETTES[] =
{
    { L"Geese", 0x108002, 0x108022, indexKOF96Sprites_Geese, 0x00 },
    { L"Super Trail", 0x108042, 0x108062, indexKOF96Sprites_Geese, 0x00 },
    { L"MAX Mode", 0x108082, 0x1080a2, indexKOF96Sprites_Geese, 0x00 },
    { L"Electric Palette", 0x1080c2, 0x1080e2, indexKOF96Sprites_Geese, 0x00 },
    { L"Extra 1", 0x108102, 0x108122 },
    { L"Extra 2", 0x108122, 0x108142 },
    { L"Extra 3", 0x108142, 0x108162 },
    { L"Extra 4", 0x108162, 0x108182 },
    { L"Game Over Palette", 0x1081a2, 0x1081c2, indexKOF96Sprites_Geese, 0x00 },
    { L"Next Character Portait", 0x1081c2, 0x1081e2 },
    { L"Lifebar Portrait", 0x1081e2, 0x108202, indexKOF02Sprites_Geese, 0x20 },
    { L"Win Portrait", 0x10c402, 0x10c4c2, indexKOF96Sprites_Geese, 0x40 },
    { L"Character Select", 0x113d02, 0x113d22, indexKOF96Sprites_Geese, 0x41 },
};

const sGame_PaletteDataset KOF96_A_GEESE_D_PALETTES[] =
{
    { L"Geese", 0x108202, 0x108222, indexKOF96Sprites_Geese, 0x00 },
    { L"Super Trail", 0x108242, 0x108262, indexKOF96Sprites_Geese, 0x00 },
    { L"MAX Mode", 0x108282, 0x1082a2, indexKOF96Sprites_Geese, 0x00 },
    { L"Electric Palette", 0x1082c2, 0x1082e2, indexKOF96Sprites_Geese, 0x00 },
    { L"Extra 1", 0x108302, 0x108322 },
    { L"Extra 2", 0x108322, 0x108342 },
    { L"Extra 3", 0x108342, 0x108362 },
    { L"Extra 4", 0x108362, 0x108382 },
    { L"Game Over Palette", 0x1083a2, 0x1083c2, indexKOF96Sprites_Geese, 0x00 },
    { L"Next Character Portait", 0x1083c2, 0x1083e2 },
    { L"Lifebar Portrait", 0x1083e2, 0x108402, indexKOF02Sprites_Geese, 0x20 },
    { L"Win Portrait", 0x10c502, 0x10c5c2, indexKOF96Sprites_Geese, 0x40 },
    { L"Character Select", 0x1140a2, 0x1140c2, indexKOF96Sprites_Geese, 0x41 },
};

const sGame_PaletteDataset KOF96_A_GEESE_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114442, 0x114462, indexKOF96Sprites_Geese, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KRAUSER_A_PALETTES[] =
{
    { L"Krauser", 0x108402, 0x108422, indexKOF96Sprites_Krauser, 0x00 },
    { L"Super Trail", 0x108442, 0x108462, indexKOF96Sprites_Krauser, 0x00 },
    { L"MAX Mode", 0x108482, 0x1084a2, indexKOF96Sprites_Krauser, 0x00 },
    { L"Electric Palette", 0x1084c2, 0x1084e2, indexKOF96Sprites_Krauser, 0x00 },
    { L"Extra 1", 0x108502, 0x108522 },
    { L"Extra 2", 0x108522, 0x108542 },
    { L"Extra 3", 0x108542, 0x108562 },
    { L"Extra 4", 0x108562, 0x108582 },
    { L"Game Over Palette", 0x1085a2, 0x1085c2, indexKOF96Sprites_Krauser, 0x00 },
    { L"Next Character Portait", 0x1085c2, 0x1085e2 },
    { L"Lifebar Portrait", 0x1085e2, 0x108602, indexKOF96Sprites_Krauser, 0x20 },
    { L"Win Portrait", 0x10c602, 0x10c6a2, indexKOF96Sprites_Krauser, 0x40 },
    { L"Character Select", 0x113d22, 0x113d42, indexKOF96Sprites_Krauser, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KRAUSER_D_PALETTES[] =
{
    { L"Krauser", 0x108602, 0x108622, indexKOF96Sprites_Krauser, 0x00 },
    { L"Super Trail", 0x108642, 0x108662, indexKOF96Sprites_Krauser, 0x00 },
    { L"MAX Mode", 0x108682, 0x1086a2, indexKOF96Sprites_Krauser, 0x00 },
    { L"Electric Palette", 0x1086c2, 0x1086e2, indexKOF96Sprites_Krauser, 0x00 },
    { L"Extra 1", 0x108702, 0x108722 },
    { L"Extra 2", 0x108722, 0x108742 },
    { L"Extra 3", 0x108742, 0x108762 },
    { L"Extra 4", 0x108762, 0x108782 },
    { L"Game Over Palette", 0x1087a2, 0x1087c2, indexKOF96Sprites_Krauser, 0x00 },
    { L"Next Character Portait", 0x1087c2, 0x1087e2 },
    { L"Lifebar Portrait", 0x1087e2, 0x108802, indexKOF96Sprites_Krauser, 0x20 },
    { L"Win Portrait", 0x10c702, 0x10c7a2, indexKOF96Sprites_Krauser, 0x40 },
    { L"Character Select", 0x1140c2, 0x1140e2, indexKOF96Sprites_Krauser, 0x41 },
};

const sGame_PaletteDataset KOF96_A_KRAUSER_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114462, 0x114482, indexKOF96Sprites_Krauser, 0x41 },
};

const sGame_PaletteDataset KOF96_A_MRBIG_A_PALETTES[] =
{
    { L"Mr. Big", 0x108802, 0x108822, indexKOF96Sprites_MrBig, 0x00 },
    { L"Super Trail", 0x108842, 0x108862, indexKOF96Sprites_MrBig, 0x00 },
    { L"MAX Mode", 0x108882, 0x1088a2, indexKOF96Sprites_MrBig, 0x00 },
    { L"Electric Palette", 0x1088c2, 0x1088e2, indexKOF96Sprites_MrBig, 0x00 },
    { L"Extra 1", 0x108822, 0x108842 },
    { L"Extra 2", 0x108902, 0x108922 },
    { L"Extra 3", 0x108922, 0x108942 },
    { L"Extra 4", 0x108942, 0x108962 },
    { L"Game Over Palette", 0x1089a2, 0x1089c2, indexKOF96Sprites_MrBig, 0x00 },
    { L"Next Character Portait", 0x1089c2, 0x1089e2 },
    { L"Lifebar Portrait", 0x1089e2, 0x108a02, indexKOF96Sprites_MrBig, 0x20 },
    { L"Win Portrait", 0x10c802, 0x10c882, indexKOF96Sprites_MrBig, 0x40 },
    { L"Character Select", 0x113d42, 0x113d62, indexKOF96Sprites_MrBig, 0x41 },
};

const sGame_PaletteDataset KOF96_A_MRBIG_D_PALETTES[] =
{
    { L"Mr. Big", 0x108a02, 0x108a22, indexKOF96Sprites_MrBig, 0x00 },
    { L"Super Trail", 0x108a42, 0x108a62, indexKOF96Sprites_MrBig, 0x00 },
    { L"MAX Mode", 0x108a82, 0x108aa2, indexKOF96Sprites_MrBig, 0x00 },
    { L"Electric Palette", 0x108ac2, 0x108ae2, indexKOF96Sprites_MrBig, 0x00 },
    { L"Extra 1", 0x108a22, 0x108a42 },
    { L"Extra 2", 0x108b02, 0x108b22 },
    { L"Extra 3", 0x108b22, 0x108b42 },
    { L"Extra 4", 0x108b42, 0x108b62 },
    { L"Game Over Palette", 0x108ba2, 0x108bc2, indexKOF96Sprites_MrBig, 0x00 },
    { L"Next Character Portait", 0x108bc2, 0x108be2 },
    { L"Lifebar Portrait", 0x108be2, 0x108c02, indexKOF96Sprites_MrBig, 0x20 },
    { L"Win Portrait", 0x10c902, 0x10c982, indexKOF96Sprites_MrBig, 0x40 },
    { L"Character Select", 0x1140e2, 0x114102, indexKOF96Sprites_MrBig, 0x41 },
};

const sGame_PaletteDataset KOF96_A_MRBIG_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x114482, 0x1144a2, indexKOF96Sprites_MrBig, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHIZURU_A_PALETTES[] =
{
    { L"Chizuru", 0x108c02, 0x108c22, indexKOF96Sprites_Chizuru, 0x00 },
    { L"Super Trail", 0x108c42, 0x108c62, indexKOF96Sprites_Chizuru, 0x00 },
    { L"MAX Mode", 0x108c82, 0x108ca2, indexKOF96Sprites_Chizuru, 0x00 },
    { L"Electric Palette", 0x108cc2, 0x108ce2, indexKOF96Sprites_Chizuru, 0x00 },
    { L"Extra 1", 0x108d02, 0x108d22 },
    { L"Game Over Palette", 0x108da2, 0x108dc2, indexKOF96Sprites_Chizuru, 0x00 },
    { L"Next Character Portait", 0x108dc2, 0x108de2 },
    { L"Lifebar Portrait", 0x108de2, 0x108e02, indexKOF98Sprites_Chizuru, 0x20 },
    { L"Win Portrait", 0x10ca02, 0x10ca82, indexKOF96Sprites_Chizuru, 0x40 },
    { L"Character Select", 0x113d62, 0x113d82, indexKOF96Sprites_Chizuru, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHIZURU_D_PALETTES[] =
{
    { L"Chizuru", 0x108e02, 0x108e22, indexKOF96Sprites_Chizuru, 0x00 },
    { L"Super Trail", 0x108e42, 0x108e62, indexKOF96Sprites_Chizuru, 0x00 },
    { L"MAX Mode", 0x108e82, 0x108ea2, indexKOF96Sprites_Chizuru, 0x00 },
    { L"Electric Palette", 0x108ec2, 0x108ee2, indexKOF96Sprites_Chizuru, 0x00 },
    { L"Extra 1", 0x108f02, 0x108f22 },
    { L"Game Over Palette", 0x108fa2, 0x108fc2, indexKOF96Sprites_Chizuru, 0x00 },
    { L"Next Character Portait", 0x108fc2, 0x108fe2 },
    { L"Lifebar Portrait", 0x108fe2, 0x109002, indexKOF98Sprites_Chizuru, 0x20 },
    { L"Win Portrait", 0x10cb02, 0x10cb82, indexKOF96Sprites_Chizuru, 0x40 },
    { L"Character Select", 0x114102, 0x114122, indexKOF96Sprites_Chizuru, 0x41 },
};

const sGame_PaletteDataset KOF96_A_CHIZURU_SHARED_PALETTES[] =
{
    { L"Defeated/Grayed", 0x1144a2, 0x1144c2, indexKOF96Sprites_Chizuru, 0x41 },
};

const sGame_PaletteDataset KOF96_A_GOENITZ_A_PALETTES[] =
{
    { L"Goenitz", 0x109002, 0x109022, indexKOF96Sprites_Goenitz, 0x00 },
    { L"Super Trail 1", 0x109042, 0x109062, indexKOF96Sprites_Goenitz, 0x00 },
    { L"Super Trail 2", 0x109062, 0x109082 },
    { L"MAX Mode", 0x109082, 0x1090a2, indexKOF96Sprites_Goenitz, 0x00 },
    { L"Electric Palette 1", 0x1090c2, 0x1090e2, indexKOF96Sprites_Goenitz, 0x00 },
    { L"Electric Palette 2", 0x1090e2, 0x109102 },
    { L"Extra 1", 0x109022, 0x109042 },
    { L"Extra 2", 0x1090a2, 0x1090c2 },
    { L"Extra 3", 0x109102, 0x109122 },
    { L"Extra 4", 0x109122, 0x109142 },
    { L"Extra 5", 0x109142, 0x109162 },
    { L"Extra 6", 0x109162, 0x109182 },
    { L"Game Over Palette", 0x1091a2, 0x1091c2, indexKOF96Sprites_Goenitz, 0x00 },
    { L"Next Character Portait", 0x1091c2, 0x1091e2 },
    { L"Lifebar Portrait", 0x1091e2, 0x109202, indexKOF02Sprites_Goenitz, 0x20 },
    { L"Win Portrait", 0x10cc02, 0x10cd02, indexKOF96Sprites_Goenitz, 0x40 },
    { L"Character Select", 0x113d82, 0x113da2, indexKOF96Sprites_Goenitz, 0x41 },
};

const sGame_PaletteDataset KOF96_A_GOENITZ_D_PALETTES[] =
{
    { L"Goenitz", 0x109202, 0x109222, indexKOF96Sprites_Goenitz, 0x00 },
    { L"Super Trail 1", 0x109242, 0x109262, indexKOF96Sprites_Goenitz, 0x00 },
    { L"Super Trail 2", 0x109262, 0x109282 },
    { L"MAX Mode", 0x109282, 0x1092a2, indexKOF96Sprites_Goenitz, 0x00 },
    { L"Electric Palette 1", 0x1092c2, 0x1092e2, indexKOF96Sprites_Goenitz, 0x00 },
    { L"Electric Palette 2", 0x1092e2, 0x109302 },
    { L"Extra 1", 0x109222, 0x109242 },
    { L"Extra 2", 0x1092a2, 0x1092c2 },
    { L"Extra 3", 0x109302, 0x109322 },
    { L"Extra 4", 0x109322, 0x109342 },
    { L"Extra 5", 0x109342, 0x109362 },
    { L"Extra 6", 0x109362, 0x109382 },
    { L"Game Over Palette", 0x1093a2, 0x1093c2, indexKOF96Sprites_Goenitz, 0x00 },
    { L"Next Character Portait", 0x1093c2, 0x1093e2 },
    { L"Lifebar Portrait", 0x1093e2, 0x109402, indexKOF02Sprites_Goenitz, 0x20 },
    { L"Win Portrait", 0x10cd02, 0x10ce02, indexKOF96Sprites_Goenitz, 0x40 },
    { L"Character Select", 0x114122, 0x114142, indexKOF96Sprites_Goenitz, 0x41 },
};

const sDescTreeNode KOF96_A_KYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_KYO_A_PALETTES, ARRAYSIZE(KOF96_A_KYO_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_KYO_D_PALETTES, ARRAYSIZE(KOF96_A_KYO_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_KYO_SHARED_PALETTES, ARRAYSIZE(KOF96_A_KYO_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_BENIMARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_BENIMARU_A_PALETTES, ARRAYSIZE(KOF96_A_BENIMARU_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_BENIMARU_D_PALETTES, ARRAYSIZE(KOF96_A_BENIMARU_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_BENIMARU_SHARED_PALETTES, ARRAYSIZE(KOF96_A_BENIMARU_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_DAIMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_DAIMON_A_PALETTES, ARRAYSIZE(KOF96_A_DAIMON_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_DAIMON_D_PALETTES, ARRAYSIZE(KOF96_A_DAIMON_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_DAIMON_SHARED_PALETTES, ARRAYSIZE(KOF96_A_DAIMON_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_TERRY_A_PALETTES, ARRAYSIZE(KOF96_A_TERRY_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_TERRY_D_PALETTES, ARRAYSIZE(KOF96_A_TERRY_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_TERRY_SHARED_PALETTES, ARRAYSIZE(KOF96_A_TERRY_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_ANDY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_ANDY_A_PALETTES, ARRAYSIZE(KOF96_A_ANDY_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_ANDY_D_PALETTES, ARRAYSIZE(KOF96_A_ANDY_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_ANDY_SHARED_PALETTES, ARRAYSIZE(KOF96_A_ANDY_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_JOE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_JOE_A_PALETTES, ARRAYSIZE(KOF96_A_JOE_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_JOE_D_PALETTES, ARRAYSIZE(KOF96_A_JOE_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_JOE_SHARED_PALETTES, ARRAYSIZE(KOF96_A_JOE_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_RYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_RYO_A_PALETTES, ARRAYSIZE(KOF96_A_RYO_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_RYO_D_PALETTES, ARRAYSIZE(KOF96_A_RYO_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_RYO_SHARED_PALETTES, ARRAYSIZE(KOF96_A_RYO_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_ROBERT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_ROBERT_A_PALETTES, ARRAYSIZE(KOF96_A_ROBERT_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_ROBERT_D_PALETTES, ARRAYSIZE(KOF96_A_ROBERT_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_ROBERT_SHARED_PALETTES, ARRAYSIZE(KOF96_A_ROBERT_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_YURI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_YURI_A_PALETTES, ARRAYSIZE(KOF96_A_YURI_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_YURI_D_PALETTES, ARRAYSIZE(KOF96_A_YURI_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_YURI_SHARED_PALETTES, ARRAYSIZE(KOF96_A_YURI_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_LEONA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_LEONA_A_PALETTES, ARRAYSIZE(KOF96_A_LEONA_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_LEONA_D_PALETTES, ARRAYSIZE(KOF96_A_LEONA_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_LEONA_SHARED_PALETTES, ARRAYSIZE(KOF96_A_LEONA_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_RALF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_RALF_A_PALETTES, ARRAYSIZE(KOF96_A_RALF_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_RALF_D_PALETTES, ARRAYSIZE(KOF96_A_RALF_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_RALF_SHARED_PALETTES, ARRAYSIZE(KOF96_A_RALF_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_CLARK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_CLARK_A_PALETTES, ARRAYSIZE(KOF96_A_CLARK_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_CLARK_D_PALETTES, ARRAYSIZE(KOF96_A_CLARK_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_CLARK_SHARED_PALETTES, ARRAYSIZE(KOF96_A_CLARK_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_ATHENA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_ATHENA_A_PALETTES, ARRAYSIZE(KOF96_A_ATHENA_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_ATHENA_D_PALETTES, ARRAYSIZE(KOF96_A_ATHENA_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_ATHENA_SHARED_PALETTES, ARRAYSIZE(KOF96_A_ATHENA_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_KENSOU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_KENSOU_A_PALETTES, ARRAYSIZE(KOF96_A_KENSOU_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_KENSOU_D_PALETTES, ARRAYSIZE(KOF96_A_KENSOU_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_KENSOU_SHARED_PALETTES, ARRAYSIZE(KOF96_A_KENSOU_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_CHIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_CHIN_A_PALETTES, ARRAYSIZE(KOF96_A_CHIN_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_CHIN_D_PALETTES, ARRAYSIZE(KOF96_A_CHIN_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_CHIN_SHARED_PALETTES, ARRAYSIZE(KOF96_A_CHIN_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_KASUMI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_KASUMI_A_PALETTES, ARRAYSIZE(KOF96_A_KASUMI_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_KASUMI_D_PALETTES, ARRAYSIZE(KOF96_A_KASUMI_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_KASUMI_SHARED_PALETTES, ARRAYSIZE(KOF96_A_KASUMI_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_MAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_MAI_A_PALETTES, ARRAYSIZE(KOF96_A_MAI_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_MAI_D_PALETTES, ARRAYSIZE(KOF96_A_MAI_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_MAI_SHARED_PALETTES, ARRAYSIZE(KOF96_A_MAI_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_KING_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_KING_A_PALETTES, ARRAYSIZE(KOF96_A_KING_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_KING_D_PALETTES, ARRAYSIZE(KOF96_A_KING_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_KING_SHARED_PALETTES, ARRAYSIZE(KOF96_A_KING_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_KIM_A_PALETTES, ARRAYSIZE(KOF96_A_KIM_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_KIM_D_PALETTES, ARRAYSIZE(KOF96_A_KIM_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_KIM_SHARED_PALETTES, ARRAYSIZE(KOF96_A_KIM_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_CHANG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_CHANG_A_PALETTES, ARRAYSIZE(KOF96_A_CHANG_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_CHANG_D_PALETTES, ARRAYSIZE(KOF96_A_CHANG_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_CHANG_SHARED_PALETTES, ARRAYSIZE(KOF96_A_CHANG_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_CHOI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_CHOI_A_PALETTES, ARRAYSIZE(KOF96_A_CHOI_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_CHOI_D_PALETTES, ARRAYSIZE(KOF96_A_CHOI_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_CHOI_SHARED_PALETTES, ARRAYSIZE(KOF96_A_CHOI_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_IORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_IORI_A_PALETTES, ARRAYSIZE(KOF96_A_IORI_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_IORI_D_PALETTES, ARRAYSIZE(KOF96_A_IORI_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_IORI_SHARED_PALETTES, ARRAYSIZE(KOF96_A_IORI_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_MATURE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_MATURE_A_PALETTES, ARRAYSIZE(KOF96_A_MATURE_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_MATURE_D_PALETTES, ARRAYSIZE(KOF96_A_MATURE_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_MATURE_SHARED_PALETTES, ARRAYSIZE(KOF96_A_MATURE_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_VICE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_VICE_A_PALETTES, ARRAYSIZE(KOF96_A_VICE_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_VICE_D_PALETTES, ARRAYSIZE(KOF96_A_VICE_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_VICE_SHARED_PALETTES, ARRAYSIZE(KOF96_A_VICE_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_GEESE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_GEESE_A_PALETTES, ARRAYSIZE(KOF96_A_GEESE_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_GEESE_D_PALETTES, ARRAYSIZE(KOF96_A_GEESE_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_GEESE_SHARED_PALETTES, ARRAYSIZE(KOF96_A_GEESE_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_KRAUSER_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_KRAUSER_A_PALETTES, ARRAYSIZE(KOF96_A_KRAUSER_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_KRAUSER_D_PALETTES, ARRAYSIZE(KOF96_A_KRAUSER_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_KRAUSER_SHARED_PALETTES, ARRAYSIZE(KOF96_A_KRAUSER_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_MRBIG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_MRBIG_A_PALETTES, ARRAYSIZE(KOF96_A_MRBIG_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_MRBIG_D_PALETTES, ARRAYSIZE(KOF96_A_MRBIG_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_MRBIG_SHARED_PALETTES, ARRAYSIZE(KOF96_A_MRBIG_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_CHIZURU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_CHIZURU_A_PALETTES, ARRAYSIZE(KOF96_A_CHIZURU_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_CHIZURU_D_PALETTES, ARRAYSIZE(KOF96_A_CHIZURU_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF96_A_CHIZURU_SHARED_PALETTES, ARRAYSIZE(KOF96_A_CHIZURU_SHARED_PALETTES) },
};

const sDescTreeNode KOF96_A_GOENITZ_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF96_A_GOENITZ_A_PALETTES, ARRAYSIZE(KOF96_A_GOENITZ_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF96_A_GOENITZ_D_PALETTES, ARRAYSIZE(KOF96_A_GOENITZ_D_PALETTES) },
};


// If you regenerate above, please delete the KOF96_A_GOENITZ_SHARED_PALETTES palette: it's unused

// Everything after this point is hand-crafted

const sGame_PaletteDataset KOF96_A_BONUS_EFFECTS_PALETTES[] =
{
    { L"Main Fire Palette",     0x117202, 0x1173e2 },
    { L"Orochi Fire Palette",   0x117402, 0x1175e2 },
    { L"Mature Soul Effect Palette", 0x117602, 0x1177e2 },
    { L"General Hitsparks", 0x100a22, 0x100a42 },
    { L"Block Effects", 0x100a62, 0x100aa2 },
    { L"Slash and Ground Hit Effects", 0x100aa2, 0x100ac2 },
    { L"Command Grab Effect", 0x100d22, 0x100d42 },
    { L"DM Flash and Eletric Effects", 0x100a42, 0x100a62 },
    { L"Electric Effects 2", 0x100c42, 0x100c62 },
    { L"Explosion Effects and Dust", 0x100ae2, 0x100b42 },
    { L"Explosion Effects 2", 0x100c22, 0x100c42 },
};

const sGame_PaletteDataset KOF96_A_BONUS_HUD_PALETTES[] =
{
    { L"Life Bar", 0x100082, 0x1000c2 },
    { L"Power Bar", 0x1000c2, 0x100102 },
    { L"Timer", 0x100102, 0x100142 },
    { L"Insert Coin and In-Game Text", 0x100022, 0x100042 },
    { L"Player 1 and 2 Text", 0x100042, 0x100082 },
    { L"Text, Defeat Boxes and Black FX", 0x100002, 0x100022 },
    { L"Round Numbers", 0x1010e2, 0x101102, indexKOF96Sprites_Bonus, 0x13, &pairNextAndNext },
    { L"Round Rings", 0x101142, 0x101162, indexKOF96Sprites_Bonus, 0x14 },
    { L"Round Text", 0x1011c2, 0x101202, indexKOF96Sprites_Bonus, 0x12 },
    { L"Ready Go!", 0x101122, 0x101142, indexKOF96Sprites_Bonus, 0x11 },
    { L"Ready Go! Transition", 0x1010a2, 0x1010c2 },
    { L"K.O.", 0x100e02, 0x100e22, indexKOF96Sprites_Bonus, 0x0d },
    { L"K.O. and Game Over Transitions", 0x100b82, 0x100bc2, indexKOF96Sprites_Bonus, 0x18 },
    { L"Perfect", 0x1010c2, 0x1010e2, indexKOF96Sprites_Bonus, 0x0f },
    { L"Winner", 0x101182, 0x1011a2, indexKOF96Sprites_Bonus, 0x17 },
    { L"Time Over and Draw Game", 0x1011a2, 0x1011c2, indexKOF96Sprites_Bonus, 0x15 },
};

const sGame_PaletteDataset KOF96_A_BONUS_INTRO_PALETTES[] =
{
    { L"Intro \"SNK Presents\"", 0x1150a2, 0x1150c2, indexKOF96Sprites_Bonus, 0x00 },
    { L"Intro \"96\" Glow", 0x114e82, 0x114fe2 },
    { L"Intro \"96\"", 0x114c22, 0x114c42 },
    { L"Intro Black Effects", 0x1150c2, 0x1150e2 },
    { L"Intro Terry, Andy and Joe 1/4", 0x114642, 0x1146c2, indexKOF96Sprites_Bonus, -1, &pairNext3Palettes },
    { L"Intro Terry, Andy and Joe 2/4", 0x1149a2, 0x1149c2 },
    { L"Intro Terry, Andy and Joe 3/4", 0x114a02, 0x114a22 },
    { L"Intro Terry, Andy and Joe 4/4", 0x114b02, 0x114c02 },
    { L"Intro Garou Team Background", 0x114c42, 0x114c62 },
    { L"Intro Mr.Big", 0x1146c2, 0x1146e2 },
    { L"Intro Krauser", 0x1146e2, 0x114722 },
    { L"Intro Geese", 0x114722, 0x114782 },
    { L"Intro Woman Team Background", 0x114c62, 0x114c82 },
    { L"Intro Leona", 0x114782, 0x1147e2 },
    { L"Intro Clark", 0x1147e2, 0x114882 },
    { L"Intro Ralf", 0x114882, 0x114942 },
    { L"Intro Ikari Team Background", 0x114c82, 0x114ca2 },
    { L"Intro Kim Team Background", 0x114ca2, 0x114cc2 },
    { L"Intro Iori Moon Background", 0x114cc2, 0x114ce2 },
    { L"Intro Vice and Mature Background", 0x114ce2, 0x114d02 },
    { L"Intro Iori 1", 0x114942, 0x1149a2 },
    { L"Intro Psycho Soldier Team Background", 0x114d02, 0x114d22 },
    { L"Intro Goro", 0x1149c2, 0x1149e2 },
    { L"Intro Benimaru", 0x1149e2, 0x114a02 },
    { L"Intro Kyo 1", 0x114a22, 0x114a82 },
    { L"Intro Kyo 2", 0x114a82, 0x114ae2 },
    { L"Intro Iori 2", 0x114ae2, 0x114b02 },
    { L"Intro Kusanagi Sun Symbol", 0x114d22, 0x114d42 },
    { L"Intro \"K O F\" and Moon Symbols", 0x114c02, 0x114c22 },
    { L"Intro \"F\" Glow", 0x114d42, 0x114e42 },
    { L"Intro Kyo and Iori", 0x114602, 0x114642 },
    { L"Intro Kyo and Iori Fire", 0x114e42, 0x114e82 },
    { L"Title \"The King of Fighters 96\" 1/2", 0x115062, 0x1150a2, indexKOF96Sprites_Bonus, -1, &pairNext },
    { L"Title \"The King of Fighters 96\" 2/2", 0x1150e2, 0x115142 },
    { L"Title Fire", 0x115042, 0x115062 },
};

const sGame_PaletteDataset KOF96_A_BONUS_BONUS_PALETTES[] =
{
    { L"Orange Text", 0x100142, 0x100162 },
    { L"Ranking Title Text", 0x100182, 0x1001a2, indexKOF96Sprites_Bonus, 0x10 },
    { L"Grayed Ranking Text", 0x100162, 0x100182, indexKOF96Sprites_Bonus, 0x09 },
    { L"Ranking Background", 0x1153c2, 0x1153e2, indexKOF96Sprites_Bonus, 0x08 },
    { L"How to Play Buttons and Arrows", 0x115202, 0x115302, indexKOF96Sprites_Bonus, 0x04 },
    { L"How to Play Background", 0x1153e2, 0x115402, indexKOF96Sprites_Bonus, 0x03 },
    { L"Member and Order Select Text", 0x1001a2, 0x1001c2 },
    { L"Winner Dialog and Intro Text", 0x1001e2, 0x100202 },
    { L"Char Select Transition Slots", 0x1153a2, 0x1153c2, indexKOF96Sprites_Bonus, 0x02 },
    { L"Character Selection Boxes", 0x115422, 0x115482, indexKOF96Sprites_Bonus, 0x06 },
    { L"Character Select P1 and P2 Card", 0x114542, 0x114582 },
    { L"Character Select Cards (Back)", 0x1144e2, 0x114502 },
    { L"Character Select Boxes ", 0x1145c2, 0x1145e2 },
    { L"Character Select Boxes (Defeat)", 0x1145a2, 0x1145c2 },
    { L"Character Select Background", 0x1145e2, 0x114602 },
    { L"Order Select \"KOF\"", 0x1144c2, 0x1144e2 },
    { L"Order Select Background", 0x114582, 0x1145a2 },
    { L"Order Select Versus", 0x115482, 0x1154a2, indexKOF96Sprites_Bonus, 0x16 },
    { L"Order Select Numbers", 0x1154a2, 0x1154e2, indexKOF96Sprites_Bonus, 0x0e },
    { L"Order Select First and Second", 0x114502, 0x114542 },
    { L"Continue and Game Over Text", 0x100e22, 0x100f02, indexKOF96Sprites_Bonus, 0x0b },
    { L"Continue Countdown Explosion", 0x100f02, 0x100f22, indexKOF96Sprites_Bonus, 0x0a },
    { L"Continue Background", 0x100702, 0x1007c2 },
    { L"Continue Background Grayed", 0x1007c2, 0x100882 },
    { L"Here Comes Challenger Text", 0x115562, 0x115582, indexKOF96Sprites_Bonus, 0x0c },
    { L"New Challenger Background", 0x115382, 0x1153a2, indexKOF96Sprites_Bonus, 0x07 },
};

const sGame_PaletteDataset KOF96_A_STORY_CHARACTERS_PALETTES[] =
{
    { L"Kyo A", 0x115da2, 0x115dc2 },
    { L"Kyo D", 0x115dc2, 0x115de2 },
    { L"Terry A", 0x115ca2, 0x115cc2 },
    { L"Terry D", 0x115cc2, 0x115ce2 },
    { L"Terry Cap A", 0x116062, 0x116082 },
    { L"Terry Cap D", 0x116082, 0x1160a2 },
    { L"Boss Ending Terry", 0x115b82, 0x115ba2},
    { L"Andy, Mai and Child", 0x115c22, 0x115c62},
    { L"Joe A", 0x115c62, 0x115c82 },
    { L"Joe D", 0x115c82, 0x115ca2 },
    { L"Leona A", 0x115d02, 0x115d22 },
    { L"Leona D", 0x115d22, 0x115d42 },
    { L"Ralf A", 0x115d42, 0x115d62 },
    { L"Ralf D", 0x115d62, 0x115d82 },
    { L"Iori A", 0x115e02, 0x115e22 },
    { L"Iori Awakening A", 0x115ec2, 0x115ee2 },
    { L"Iori D", 0x115e22, 0x115e42 },
    { L"Iori Awakening D", 0x115ee2, 0x115f02 },
    { L"Mature A", 0x115e42, 0x115e62 },
    { L"Mature D", 0x115e62, 0x115e82 },
    { L"Vice A", 0x115e82, 0x115ea2 },
    { L"Vice D", 0x115ea2, 0x115ec2 },
    { L"Geese A (1/2)", 0x115b02, 0x115b22, indexKOF96Sprites_Bonus, -1, &pairNext },
    { L"Geese A (2/2)", 0x115ba2, 0x115bc2},
    { L"Geese D (1/2)", 0x115b22, 0x115b42, indexKOF96Sprites_Bonus, -1, &pairNext },
    { L"Geese D (2/2)", 0x115bc2, 0x115be2},
    { L"Billy Kane", 0x115b42, 0x115b82},
    { L"Krauser A", 0x116022, 0x116042},
    { L"Krauser D", 0x116042, 0x116062},
    { L"Chizuru A", 0x115a02, 0x115a22 },
    { L"Chizuru D", 0x115a22, 0x115a42 },
    { L"Goenitz A (1/2)", 0x115a42, 0x115a62, indexKOF96Sprites_Bonus, -1, &pairNext },
    { L"Goenitz A (2/2)", 0x115a82, 0x115aa2 },
    { L"Goenitz D (1/2)", 0x115a62, 0x115a82, indexKOF96Sprites_Bonus, -1, &pairNext },
    { L"Goenitz D (2/2)", 0x115aa2, 0x115ac2 },
    { L"Goenitz Awakening", 0x115ce2, 0x115d02 },
};

const sGame_PaletteDataset KOF96_A_STORY_BONUS_PALETTES[] =
{
    { L"Goenitz Wind and Chizuru FX", 0x115ae2, 0x115b02 },
    { L"Story Endings Extras and FX", 0x115be2, 0x115c02 },
    { L"Leaf and Bullet", 0x115c02, 0x115c22 },
    { L"Hero Ending Background", 0x115fc2, 0x116002 },
    { L"Fatal Fury Ending Background", 0x115f02, 0x115f42 },
    { L"Woman Ending Background (1/2)", 0x115f42, 0x115f62, indexKOF96Sprites_Bonus, -1, &pairNext },
    { L"Woman Ending Background (2/2)", 0x116002, 0x116022},
    { L"Iori Awakening Blood", 0x116122, 0x116142 },
    { L"Boss Team Ending Extras", 0x115f62, 0x115f82},
    { L"Chizuru and Players Background", 0x115fa2, 0x115fc2},
    { L"Ruined Stadium Background", 0x115f82, 0x115fa2},
    { L"Grayed Kyo", 0x115d82, 0x115da2 },
    { L"Grayed Rugal (1/2)", 0x115ac2, 0x115ae2, indexKOF96Sprites_Bonus, -1, &pairNext },
    { L"Grayed Rugal (2/2)", 0x1160a2, 0x1160c2 },
    { L"Grayed Chin", 0x1160e2, 0x116102},
    { L"Grayed Goenitz Hand", 0x116102, 0x116122 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_JAPAN[] =
{
    { L"Japan Team Stage (1/6)", 0x101202, 0x101402 },
    { L"Japan Team Stage (2/6)", 0x101402, 0x101602 },
    { L"Japan Team Stage (3/6)", 0x101602, 0x101802 },
    { L"Japan Team Stage (4/6)", 0x101802, 0x101a02 },
    { L"Japan Team Stage (5/6)", 0x101a02, 0x101c02 },
    { L"Japan Team Stage (6/6)", 0x101c02, 0x101e02 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_FATALFURY[] =
{
    { L"Fatal Fury Team Stage (1/4)", 0x10ce02, 0x10d002 },
    { L"Fatal Fury Team Stage (2/4)", 0x10d002, 0x10d202 },
    { L"Fatal Fury Team Stage (3/4)", 0x10d202, 0x10d402 },
    { L"Fatal Fury Team Stage (4/4)", 0x10d402, 0x10d602 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_AOF[] =
{
    { L"Art of Fighting Team Stage (1/4)", 0x10d602, 0x10d802 },
    { L"Art of Fighting Team Stage (2/4)", 0x10d802, 0x10da02 },
    { L"Art of Fighting Team Stage (3/4)", 0x10da02, 0x10dc02 },
    { L"Art of Fighting Team Stage (4/4)", 0x10dc02, 0x10de02 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_IKARI[] =
{
    { L"New Ikari Team Stage (1/10)", 0x10de02, 0x10e002 },
    { L"New Ikari Team Stage (2/10)", 0x10e002, 0x10e202 },
    { L"New Ikari Team Stage (3/10)", 0x10e202, 0x10e402 },
    { L"New Ikari Team Stage (4/10)", 0x10e402, 0x10e602 },
    { L"New Ikari Team Stage (5/10)", 0x10e602, 0x10e802 },
    { L"New Ikari Team Stage (6/10)", 0x10e802, 0x10ea02 },
    { L"New Ikari Team Stage (7/10)", 0x10ea02, 0x10ec02 },
    { L"New Ikari Team Stage (8/10)", 0x10ec02, 0x10ee02 },
    { L"New Ikari Team Stage (9/10)", 0x10ee02, 0x10f002 },
    { L"New Ikari Team Stage (10/10)", 0x10f002, 0x10f202 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_GOENITZ[] =
{
    { L"Goenitz Stage (1/6)", 0x10f202, 0x10f402 },
    { L"Goenitz Stage (2/6)", 0x10f402, 0x10f602 },
    { L"Goenitz Stage (3/6)", 0x10f602, 0x10f802 },
    { L"Goenitz Stage (4/6)", 0x10f802, 0x10fa02 },
    { L"Goenitz Stage (5/6)", 0x10fa02, 0x10fc02 },
    { L"Goenitz Stage (6/6)", 0x10fc02, 0x10fe02 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_WOMEN[] =
{
    { L"Women Fighters Team Stage (1/6)", 0x10fe02, 0x110002 },
    { L"Women Fighters Team Stage (2/6)", 0x110002, 0x110202 },
    { L"Women Fighters Team Stage (3/6)", 0x110202, 0x110402 },
    { L"Women Fighters Team Stage (4/6)", 0x110402, 0x110602 },
    { L"Women Fighters Team Stage (5/6)", 0x110602, 0x110802 },
    { L"Women Fighters Team Stage (6/6)", 0x110802, 0x110a02 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_KOREA[] =
{
    { L"Korea Justice Team Stage (1/6)", 0x110a02, 0x110c02 },
    { L"Korea Justice Team Stage (2/6)", 0x110c02, 0x110e02 },
    { L"Korea Justice Team Stage (3/6)", 0x110e02, 0x111002 },
    { L"Korea Justice Team Stage (4/6)", 0x111002, 0x111202 },
    { L"Korea Justice Team Stage (5/6)", 0x111202, 0x111402 },
    { L"Korea Justice Team Stage (6/6)", 0x111402, 0x111582 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_YAGAMI[] =
{
    { L"Yagami Team Stage (1/5)", 0x111602, 0x111802 },
    { L"Yagami Team Stage (2/5)", 0x111802, 0x111a02 },
    { L"Yagami Team Stage (3/5)", 0x111a02, 0x111c02 },
    { L"Yagami Team Stage (4/5)", 0x111c02, 0x111e02 },
    { L"Yagami Team Stage (5/5)", 0x111e02, 0x112002 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_BOSS[] =
{
    { L"Boss Team Stage (1/7)", 0x112002, 0x112202 },
    { L"Boss Team Stage (2/7)", 0x112202, 0x112402 },
    { L"Boss Team Stage (3/7)", 0x112402, 0x112602 },
    { L"Boss Team Stage (4/7)", 0x112602, 0x112802 },
    { L"Boss Team Stage (5/7)", 0x112802, 0x112a02 },
    { L"Boss Team Stage (6/7)", 0x112a02, 0x112c02 },
    { L"Boss Team Stage (7/7)", 0x112c02, 0x112e02 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_CHIZURU[] =
{
    { L"Chizuru Stage (1/6)", 0x112e02, 0x113002 },
    { L"Chizuru Stage (2/6)", 0x113002, 0x113202 },
    { L"Chizuru Stage (3/6)", 0x113202, 0x113402 },
    { L"Chizuru Stage (4/6)", 0x113402, 0x113602 },
    { L"Chizuru Stage (5/6)", 0x113602, 0x113802 },
    { L"Chizuru Stage (6/6)", 0x113802, 0x113a02 },
};

const sGame_PaletteDataset KOF96_A_STAGE_PALETTES_PSYCHO[] =
{
    { L"Psycho Soldier Team (1/6)", 0x117a00, 0x117c00 },
    { L"Psycho Soldier Team (2/6)", 0x117c00, 0x117e00 },
    { L"Psycho Soldier Team (3/6)", 0x117e00, 0x118000 },
    { L"Psycho Soldier Team (4/6)", 0x118000, 0x118200 },
    { L"Psycho Soldier Team (5/6)", 0x118200, 0x118400 },
    { L"Psycho Soldier Team (6/6)", 0x118400, 0x118600 },
};

const sDescTreeNode KOF96_A_BONUS_COLLECTION[] =
{
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF96_A_BONUS_EFFECTS_PALETTES, ARRAYSIZE(KOF96_A_BONUS_EFFECTS_PALETTES) },
    { L"HUD", DESC_NODETYPE_TREE, (void*)KOF96_A_BONUS_HUD_PALETTES, ARRAYSIZE(KOF96_A_BONUS_HUD_PALETTES) },
    { L"Intro Palettes", DESC_NODETYPE_TREE, (void*)KOF96_A_BONUS_INTRO_PALETTES, ARRAYSIZE(KOF96_A_BONUS_INTRO_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)KOF96_A_BONUS_BONUS_PALETTES, ARRAYSIZE(KOF96_A_BONUS_BONUS_PALETTES) },
};

const sDescTreeNode KOF96_A_STORY_COLLECTION[] =
{
    { L"Characters", DESC_NODETYPE_TREE, (void*)KOF96_A_STORY_CHARACTERS_PALETTES, ARRAYSIZE(KOF96_A_STORY_CHARACTERS_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)KOF96_A_STORY_BONUS_PALETTES, ARRAYSIZE(KOF96_A_STORY_BONUS_PALETTES) },
};

const sDescTreeNode KOF96_A_STAGE_COLLECTION[] =
{
    { L"Japan Team", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_JAPAN, ARRAYSIZE(KOF96_A_STAGE_PALETTES_JAPAN) },
    { L"Fatal Fury Team", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_FATALFURY, ARRAYSIZE(KOF96_A_STAGE_PALETTES_FATALFURY) },
    { L"Art of Fighting Team", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_AOF, ARRAYSIZE(KOF96_A_STAGE_PALETTES_AOF) },
    { L"New Ikari Team", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_IKARI, ARRAYSIZE(KOF96_A_STAGE_PALETTES_IKARI) },
    { L"Psycho Soldier Team", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_PSYCHO, ARRAYSIZE(KOF96_A_STAGE_PALETTES_PSYCHO) },
    { L"Women Fighters Team", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_WOMEN, ARRAYSIZE(KOF96_A_STAGE_PALETTES_WOMEN) },
    { L"Korea Justice Team", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_KOREA, ARRAYSIZE(KOF96_A_STAGE_PALETTES_KOREA) },
    { L"Yagami Team", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_YAGAMI, ARRAYSIZE(KOF96_A_STAGE_PALETTES_YAGAMI) },
    { L"Boss Team", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_BOSS, ARRAYSIZE(KOF96_A_STAGE_PALETTES_BOSS) },
    { L"Chizuru Stage", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_CHIZURU, ARRAYSIZE(KOF96_A_STAGE_PALETTES_CHIZURU) },
    { L"Goenitz Stage", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_PALETTES_GOENITZ, ARRAYSIZE(KOF96_A_STAGE_PALETTES_GOENITZ) },
};

const sDescTreeNode KOF96_A_UNITS[] =
{
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF96_A_KYO_COLLECTION, ARRAYSIZE(KOF96_A_KYO_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF96_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF96_A_BENIMARU_COLLECTION) },
    { L"Daimon", DESC_NODETYPE_TREE, (void*)KOF96_A_DAIMON_COLLECTION, ARRAYSIZE(KOF96_A_DAIMON_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF96_A_TERRY_COLLECTION, ARRAYSIZE(KOF96_A_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF96_A_ANDY_COLLECTION, ARRAYSIZE(KOF96_A_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF96_A_JOE_COLLECTION, ARRAYSIZE(KOF96_A_JOE_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF96_A_RYO_COLLECTION, ARRAYSIZE(KOF96_A_RYO_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF96_A_ROBERT_COLLECTION, ARRAYSIZE(KOF96_A_ROBERT_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF96_A_YURI_COLLECTION, ARRAYSIZE(KOF96_A_YURI_COLLECTION) },
    { L"Leona", DESC_NODETYPE_TREE, (void*)KOF96_A_LEONA_COLLECTION, ARRAYSIZE(KOF96_A_LEONA_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF96_A_RALF_COLLECTION, ARRAYSIZE(KOF96_A_RALF_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF96_A_CLARK_COLLECTION, ARRAYSIZE(KOF96_A_CLARK_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF96_A_ATHENA_COLLECTION, ARRAYSIZE(KOF96_A_ATHENA_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF96_A_KENSOU_COLLECTION, ARRAYSIZE(KOF96_A_KENSOU_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF96_A_CHIN_COLLECTION, ARRAYSIZE(KOF96_A_CHIN_COLLECTION) },
    { L"Kasumi", DESC_NODETYPE_TREE, (void*)KOF96_A_KASUMI_COLLECTION, ARRAYSIZE(KOF96_A_KASUMI_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF96_A_MAI_COLLECTION, ARRAYSIZE(KOF96_A_MAI_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF96_A_KING_COLLECTION, ARRAYSIZE(KOF96_A_KING_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF96_A_KIM_COLLECTION, ARRAYSIZE(KOF96_A_KIM_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF96_A_CHANG_COLLECTION, ARRAYSIZE(KOF96_A_CHANG_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF96_A_CHOI_COLLECTION, ARRAYSIZE(KOF96_A_CHOI_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF96_A_IORI_COLLECTION, ARRAYSIZE(KOF96_A_IORI_COLLECTION) },
    { L"Mature", DESC_NODETYPE_TREE, (void*)KOF96_A_MATURE_COLLECTION, ARRAYSIZE(KOF96_A_MATURE_COLLECTION) },
    { L"Vice", DESC_NODETYPE_TREE, (void*)KOF96_A_VICE_COLLECTION, ARRAYSIZE(KOF96_A_VICE_COLLECTION) },
    { L"Geese", DESC_NODETYPE_TREE, (void*)KOF96_A_GEESE_COLLECTION, ARRAYSIZE(KOF96_A_GEESE_COLLECTION) },
    { L"Krauser", DESC_NODETYPE_TREE, (void*)KOF96_A_KRAUSER_COLLECTION, ARRAYSIZE(KOF96_A_KRAUSER_COLLECTION) },
    { L"Mr. Big", DESC_NODETYPE_TREE, (void*)KOF96_A_MRBIG_COLLECTION, ARRAYSIZE(KOF96_A_MRBIG_COLLECTION) },
    { L"Chizuru", DESC_NODETYPE_TREE, (void*)KOF96_A_CHIZURU_COLLECTION, ARRAYSIZE(KOF96_A_CHIZURU_COLLECTION) },
    { L"Goenitz", DESC_NODETYPE_TREE, (void*)KOF96_A_GOENITZ_COLLECTION, ARRAYSIZE(KOF96_A_GOENITZ_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE, (void*)KOF96_A_STAGE_COLLECTION, ARRAYSIZE(KOF96_A_STAGE_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)KOF96_A_BONUS_COLLECTION, ARRAYSIZE(KOF96_A_BONUS_COLLECTION) },
    { L"Story Endings", DESC_NODETYPE_TREE, (void*)KOF96_A_STORY_COLLECTION, ARRAYSIZE(KOF96_A_STORY_COLLECTION) },
};

constexpr auto KOF96_A_NUMUNIT = ARRAYSIZE(KOF96_A_UNITS);

constexpr auto KOF96_A_EXTRALOC = KOF96_A_NUMUNIT;
