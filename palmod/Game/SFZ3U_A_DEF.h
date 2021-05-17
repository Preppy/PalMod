#pragma once

const UINT16 SFZ3U_A_IMGIDS_USED[] =
{
    // MVC2 Assets
    indexCPS2Sprites_Ryu,          // 0x00
    indexCPS2Sprites_Zangief,      // 0x01
    indexCPS2Sprites_Guile,        // 0x02
    indexCPS2Sprites_ChunLi,       // 0x1B
    indexCPS2Sprites_Akuma,        // 0x1E
    indexCPS2Sprites_Charlie,      // 0x21
    indexCPS2Sprites_Sakura,       // 0x22
    indexCPS2Sprites_Dan,          // 0x23
    indexCPS2Sprites_Cammy,        // 0x24
    indexCPS2Sprites_Dhalsim,      // 0x25
    indexCPS2Sprites_Bison,        // 0x26
    indexCPS2Sprites_Ken,          // 0x27
    // SFA3 Unique
    indexCPS2Sprites_Adon,         // 0x3D
    indexCPS2Sprites_Sodom,        // 0x3E
    indexCPS2Sprites_Guy,          // 0x3F
    indexCPS2Sprites_Birdie,       // 0x40
    indexCPS2Sprites_Rose,         // 0x41
    indexCPS2Sprites_Sagat,        // 0x42
    indexCPS2Sprites_Rolento,      // 0x43
    indexCPS2Sprites_Gen,          // 0x44
    indexCPS2Sprites_Balrog,       // 0x45
    indexCPS2Sprites_EHonda,       // 0x46
    indexCPS2Sprites_Blanka,       // 0x47
    indexCPS2Sprites_RMika,        // 0x48
    indexCPS2Sprites_Cody,         // 0x49
    indexCPS2Sprites_Vega,         // 0x4A
    indexCPS2Sprites_Karin,        // 0x4B
    indexCPS2Sprites_Juni,         // 0x4C
    indexCPS2Sprites_Juli,         // 0x4D

    indexCPS2Sprites_DeeJay,       // 0x92
    indexCPS2Sprites_Eagle,        // 0x93
    indexCPS2Sprites_FeiLong,      // 0x94
    indexCPS2Sprites_THawk,        // 0x95
};

// The following are the PAL IDs CapCom used for the file structure on the DC disc.  
// They also represent the order you should expect to see character data arranged by.

// ;      <item value="0x00">Ryu</item>
// ;      <item value="0x01">Ken Masters</item>
// ;      <item value="0x02">Akuma</item>
// ;      <item value="0x03">Charlie</item>
// ;      <item value="0x04">Chun-Li</item>
// ;      <item value="0x05">Adon</item>
// ;      <item value="0x06">Sodom</item>
// ;      <item value="0x07">Guy</item>
// ;      <item value="0x08">Birdie</item>
// ;      <item value="0x09">Rose</item>
// ;      <item value="0x0A">M. Bison</item>
// ;      <item value="0x0B">Sagat</item>
// ;      <item value="0x0C">Dan Hibiki</item>
// ;      <item value="0x0D">Sakura Kasugano</item>
// ;      <item value="0x0E">Rolento Schugerg</item>
// ;      <item value="0x0F">Dhalsim</item>
// ;      <item value="0x10">Zangief</item>
// ;      <item value="0x11">Gen (Sou-ryuu stance)</item>
// 12: chun-li x-ism
// ;      <item value="0x13">#Gen (Ki-ryuu stance)</item>
// 14: sodom x-ism?
// ;      <item value="0x15">#Balrog</item>
// ;      <item value="0x16">Cammy</item>
// 17: evil ryu
// ;      <item value="0x18">Edmund Honda</item>
// ;      <item value="0x19">Blanka</item>
// ;      <item value="0x1A">Rainbow Mika Nanakawa</item>
// ;      <item value="0x1B">Cody</item>
// ;      <item value="0x1C">Vega</item>
// ;      <item value="0x1D">Karin Kanzuki</item>
// ;      <item value="0x1E">#Juli</item>
// ;      <item value="0x1F">#Juni</item>
// ; guile
// ; fei long
// ; deejay
// ; T.Hawk (no sprite for)
// ; shin akuma
// ; boxer
//
// ; eagle : not in dreamcast nor NAOMI version
// 
// ; // following are NOT present in sfz3u
// ; maki
// ; yun
// ; ingrid

// There's a section of the A-Ism Punch color for each character in order starting at 0x2ab64a and ending at 0x2abb2a 
// So the following lines are the hexes for those colors which you can search against to find A-Ism Punch data.
// You walk back about ~10 palettes lines / 0x140 to get to the X-Ism color
// ; Search string: 00 80 42 88 12 FB 8E FA 0A F2 88 D9 C0 C0 DE FB 00 D0 DE FB 9A E3 16 DB 92 CA 0E BA 00 F8 00 D8 
// ;5ff0140
// ryu
// 5ff0000 <-- this is the actual starting place for all character palettes
// 5ff03c0
// ; Search string: 00 80 42 88 D8 FB 52 FB 8C F2 C8 D9 44 C9 DE FB D4 FB 00 F9 00 E8 00 D8 00 C8 00 B8 44 FB 40 F2 
// ;60bd940
// ken
// 60bd800
// 60bdbc0
// ; Search string: 00 80 42 88 88 E1 04 D1 80 C0 40 B0 00 A0 00 F8 00 D8 0A A1 C6 98 84 90 42 88 02 80 40 B0 00 A0 
// ;31ad580
// 2ab680
// ; Search string: 00 80 DE FB 12 FB 4C F2 CA E1 04 C1 C0 B0 D4 FB 00 FB 40 FA 40 E1 0A 82 88 81 46 81 04 81 82 80 
// ;31b7d80
// ;634b140
// charlie
// 634b000
// 634b3c0
// 
// ; Search string: 00 80 DE FB 94 FB D0 FA 0C F2 46 D9 82 B8 DE 82 DE 81 1A 81 94 80 90 80 4C 80 08 80 C4 FB 80 F2 
// ;31bf580
// ;6428140
// chun
// 6428000
// 64283c0
// ; Search string: 00 80 42 88 12 FB 4C F2 C8 E9 46 D1 80 B8 88 F9 CA E0 44 FB 40 F2 18 DB 50 C2 D4 B9 10 A9 DE FB 
// ;65d7140
// adon
// 65d7000
// 65d73c0
// ; Search string: 00 80 42 88 90 F2 C4 E1 86 B8 5E 82 96 81 12 81 CA 80 46 FB DE FB 9C EA D4 C1 40 F9 84 E8 84 D8 
// ;66de140
// sodom
// 66de000
// 66de3c0
// ; Search string: 00 80 CE FA 4C EA CA D1 46 C1 80 A8 DE FB DA DA 44 FB 00 EA 40 F9 00 F0 00 E0 00 C8 00 B8 00 A0 
// ;68bd140
// guy
// 68bd000
// 68bd3c0
// ; Search string: 00 80 4C E2 C8 D9 44 D1 80 C0 40 B0 50 C2 CC B1 48 A9 06 A1 82 A0 42 88 CE FB C0 FA DE FB 00 F8 
// ;69d4140 birdie
// ; Search string: 00 80 DE FB D6 FB D0 FA CA E1 C4 C0 0E B9 CC A8 8A A0 46 98 CC F8 CA E0 88 C8 D0 FB 4A F3 86 EA 
// ;6b01140 rose
// ; Search string: 00 80 84 80 00 F9 00 F0 00 E0 00 C8 00 B0 DC EB 16 D3 50 BA 8A A1 C4 90 CE F2 08 DA 82 C9 04 B9 
// ;6c3d140 mbison
// ; Search string: 00 80 50 FB CC EA 4A D2 C6 C1 44 B1 96 C1 12 B1 8E A0 40 FB 80 F2 DC FB 56 EB D2 DA 0C C2 88 B1
// ;6d43940 sagat
// ; Search string: 00 80 42 88 12 FB 8E FA 0A F2 88 D9 C0 C0 DE FB 40 C9 DA F2 14 FA 90 F1 0C E9 88 E0 40 B0 00 A0
// ;6e09940 dan
// ; Search string: 00 80 54 FB D0 FA 4C F2 88 E1 C0 C0 00 F8 00 D8 00 C0 40 FB DE FB 5E EB 98 D2 9A B1 12 A1 46 88
// ;6f54140 sakura
// ; Search string: 00 80 0E FB 8C FA 0A E2 46 C9 C2 B0 00 F8 00 D8 00 FB 40 F2 C0 E1 40 D1 C0 C0 86 B9 02 A9 80 98
// ;7076940 rolento
// ; Search string: 00 80 42 88 4C EA CA E1 44 D1 82 C0 40 B0 00 F8 40 FB 80 EA 00 DA C0 C9 40 B9 5A F3 96 E2 8E C9
// ;7190140 dhalsim
// 
// A-Ism colors, Page 2
// ; Search string: 00 80 80 A0 D8 FB 52 FB 8C F2 C8 D9 44 C9 C0 B8 00 F8 00 D8 00 C8 00 B0 DE FB D4 D2 40 FB 80 F2 
// ;732c140 zangief
// ; Search string: 00 80 1E D0 1A C0 16 B0 12 A0 0E 90 0A 80 DE FB 5A E3 94 C2 00 F8 00 D8 52 FB 8C F2 CA E1 00 C1 
// ;7451140 gen
// ; Search string: 00 80 DE FB 54 FB 8E FA 0C F2 8A E1 C6 C0 84 B0 DE E3 1E C3 1C A3 5A 9A D6 81 92 81 50 FB 08 D1 
// ;64eb000 chun-li xism
// ;8c25d80
// ; Search string: 00 80 1E D0 1A C0 16 B0 12 A0 0E 90 0A 80 DE FB 5A E3 94 C2 00 F8 00 D8 52 FB 8C F2 CA E1 00 C1 
// ;7451140 gen crane
// ; Search string: 00 80 42 88 D0 FA 0A E2 46 C9 5E 83 56 A2 92 A1 4C 99 CE FB DC FB 1C D3 D2 B1 84 F2 86 E1 46 D1 
// ;67ec000 sodom xism
// ;8c25f00
// ; Search string: 00 80 84 90 0A F2 86 E1 00 C9 80 B8 80 A8 DE FB 1E CB 5E A2 9A 81 D4 80 4E 80 C0 F9 00 F8 00 D8 
// ;75fd140 balrog
// ; Search string: 00 80 42 88 54 FB D0 FA 4C F2 88 E1 04 C1 80 A8 1E B3 98 B2 12 A2 8C 91 08 81 40 F9 D6 FB C0 FB 
// ;77ee140 cammy
// ; Search string: 00 80 42 88 0A EA 88 E1 04 D1 80 C0 00 A8 12 FB 40 B0 0A A1 C6 98 84 90 42 88 02 80 00 E8 00 C8 
// ;3280580 evil ryu
// ; Search string: 00 80 84 90 D6 FB 52 FB CE FA 4C F2 CA E1 48 C9 C0 B0 4E A1 DE E3 5E C3 9C BA 98 B1 50 B1 00 F0 
// ;7a0b940 honda
// ; Search string: 00 80 84 90 D4 F3 CA E3 46 D3 C0 C2 80 B2 C0 A1 40 91 00 FA 80 F9 00 F1 00 D1 C0 B0 9C F3 52 CA 
// ;7b8a940 blanka
// ; Search string: 00 80 DE FB 54 FB D0 FA 4C F2 CA E1 00 C1 9E E3 1E CB 5A BA 1E 83 9C 82 DA 81 94 A1 10 91 C4 FB 
// ;7d0e940 rmika
// ; Search string: 00 80 DE FB D6 FB 50 FB CC F2 08 E2 44 C9 80 A8 9E EB 1C DB 58 CA D4 C1 50 B1 CC A0 58 B1 10 A0 
// ;7e78140 cody
// ; Search string: 00 80 DE FB 14 FB 8E FA CA E1 46 C9 C2 B0 C0 A0 CA FB 00 FB 00 E2 DE C9 DA B8 52 A8 00 F8 00 D8 
// ;7fb4140 vega
// ; Search string: 00 80 96 FB 12 FB 4E F2 88 D9 04 C1 CA FB 1E DB 5A C2 52 A1 DE FB D8 EA C8 F8 44 E0 02 C8 00 88 
// ;80eb140 karin
// ; Search string: 00 80 42 88 54 FB D0 FA 4C F2 88 E1 04 C1 80 A8 88 90 44 88 02 80 02 80 02 80 00 F0 D6 FB C0 F9 
// ;32cfd80 juli
// ; Search string: 00 80 42 88 54 FB D0 FA 4C F2 88 E1 04 C1 80 A8 88 90 44 88 02 80 02 80 02 80 00 F0 10 FB C0 F9 
// ;32d9d80 juni
// 
// A-Ism colors, Page 3
// ; Search string: 00 80 40 80 9A FB 12 FB 8E F2 08 E2 84 D1 C0 B8 54 DB CE C2 08 AA 86 99 00 81 00 F9 DE A1 CE FB 
// ;32e6d80 guile
// ; Search string: 00 80 42 88 94 FB 12 FB 8E F2 0C E2 8A D1 00 B9 42 80 08 A9 4A B1 8C B9 CE C1 96 D2 5C EB DE FB 
// ;32f3d80 feilong
// ; Search string: 00 80 02 80 18 E3 12 FB 8E F2 0C E2 8A D1 00 B9 C0 A8 80 B0 00 C0 80 D0 00 E1 80 E9 00 F2 DE FB 
// ;32fe580 deejay
// ; Search string: 00 80 02 80 D4 FB 12 FB 90 F2 0C E2 8A D1 C4 B8 00 A8 DE FB 1E D3 9C BA 1A AA 56 81 12 80 00 F0 
// ;3308d80 thawk
// ; Search string: 00 80 42 88 88 E1 04 D1 80 C0 40 B0 00 A0 00 F8 00 D8 D8 B8 52 A8 0E A0 0C 98 0A 90 40 B0 00 A0 
// ;3312d80 shin akuma
// ; Search string: 00 80 84 90 0A F2 86 E1 00 C9 80 B8 80 A8 DE FB 1E CB 5E A2 9A 81 D4 80 4E 80 C0 F9 00 F8 00 D8 
// ;326c580 boxer (Finished)
// ;75fd140 
// ;76ec140
// ; Search string: 00 80 40 F9 DE FB 5C EB D8 DA 14 CA 50 B1 C2 FA 44 EA C6 D1 08 C1 DE F3 5E E3 9C D2 18 D2 D4 C9 
// ;3261600 eagle: but not actually in the DC/Naomi versions
// ;67ec020
// ;8c26c80
// 

const sGame_PaletteDataset SFZ3U_A_RYU_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x5ff0000, 0x5ff0020, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Punch Extra 1", 0x5ff0020, 0x5ff0040, indexCPS2Sprites_Ryu, 0x01 },
    { L"X-Ism Punch Extra 2", 0x5ff0040, 0x5ff0060, indexCPS2Sprites_Ryu, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x5ff0060, 0x5ff0080, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x5ff0080, 0x5ff00a0, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RYU_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x5ff00a0, 0x5ff00c0, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Kick Extra 1", 0x5ff00c0, 0x5ff00e0, indexCPS2Sprites_Ryu, 0x01 },
    { L"X-Ism Kick Extra 2", 0x5ff00e0, 0x5ff0100, indexCPS2Sprites_Ryu, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x5ff0100, 0x5ff0120, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x5ff0120, 0x5ff0140, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RYU_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x5ff0140, 0x5ff0160, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Punch Extra 1", 0x5ff0160, 0x5ff0180, indexCPS2Sprites_Ryu, 0x01 },
    { L"A-Ism Punch Extra 2", 0x5ff0180, 0x5ff01a0, indexCPS2Sprites_Ryu, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x5ff01a0, 0x5ff01c0, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x5ff01c0, 0x5ff01e0, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RYU_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x5ff01e0, 0x5ff0200, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Kick Extra 1", 0x5ff0200, 0x5ff0220, indexCPS2Sprites_Ryu, 0x01 },
    { L"A-Ism Kick Extra 2", 0x5ff0220, 0x5ff0240, indexCPS2Sprites_Ryu, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x5ff0240, 0x5ff0260, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x5ff0260, 0x5ff0280, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RYU_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x5ff0280, 0x5ff02a0, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Punch Extra 1", 0x5ff02a0, 0x5ff02c0, indexCPS2Sprites_Ryu, 0x01 },
    { L"V-Ism Punch Extra 2", 0x5ff02c0, 0x5ff02e0, indexCPS2Sprites_Ryu, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x5ff02e0, 0x5ff0300, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x5ff0300, 0x5ff0320, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RYU_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x5ff0320, 0x5ff0340, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Kick Extra 1", 0x5ff0340, 0x5ff0360, indexCPS2Sprites_Ryu, 0x01 },
    { L"V-Ism Kick Extra 2", 0x5ff0360, 0x5ff0380, indexCPS2Sprites_Ryu, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x5ff0380, 0x5ff03a0, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x5ff03a0, 0x5ff03c0, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KEN_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x60bd800, 0x60bd820, indexCPS2Sprites_Ken, 0x00 },
    { L"X-Ism Punch Extra 1", 0x60bd820, 0x60bd840, indexCPS2Sprites_Ken, 0x01 },
    { L"X-Ism Punch Extra 2", 0x60bd840, 0x60bd860, indexCPS2Sprites_Ken, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x60bd860, 0x60bd880, indexCPS2Sprites_Ken, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x60bd880, 0x60bd8a0, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KEN_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x60bd8a0, 0x60bd8c0, indexCPS2Sprites_Ken, 0x00 },
    { L"X-Ism Kick Extra 1", 0x60bd8c0, 0x60bd8e0, indexCPS2Sprites_Ken, 0x01 },
    { L"X-Ism Kick Extra 2", 0x60bd8e0, 0x60bd900, indexCPS2Sprites_Ken, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x60bd900, 0x60bd920, indexCPS2Sprites_Ken, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x60bd920, 0x60bd940, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KEN_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x60bd940, 0x60bd960, indexCPS2Sprites_Ken, 0x00 },
    { L"A-Ism Punch Extra 1", 0x60bd960, 0x60bd980, indexCPS2Sprites_Ken, 0x01 },
    { L"A-Ism Punch Extra 2", 0x60bd980, 0x60bd9a0, indexCPS2Sprites_Ken, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x60bd9a0, 0x60bd9c0, indexCPS2Sprites_Ken, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x60bd9c0, 0x60bd9e0, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KEN_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x60bd9e0, 0x60bda00, indexCPS2Sprites_Ken, 0x00 },
    { L"A-Ism Kick Extra 1", 0x60bda00, 0x60bda20, indexCPS2Sprites_Ken, 0x01 },
    { L"A-Ism Kick Extra 2", 0x60bda20, 0x60bda40, indexCPS2Sprites_Ken, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x60bda40, 0x60bda60, indexCPS2Sprites_Ken, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x60bda60, 0x60bda80, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KEN_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x60bda80, 0x60bdaa0, indexCPS2Sprites_Ken, 0x00 },
    { L"V-Ism Punch Extra 1", 0x60bdaa0, 0x60bdac0, indexCPS2Sprites_Ken, 0x01 },
    { L"V-Ism Punch Extra 2", 0x60bdac0, 0x60bdae0, indexCPS2Sprites_Ken, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x60bdae0, 0x60bdb00, indexCPS2Sprites_Ken, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x60bdb00, 0x60bdb20, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KEN_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x60bdb20, 0x60bdb40, indexCPS2Sprites_Ken, 0x00 },
    { L"V-Ism Kick Extra 1", 0x60bdb40, 0x60bdb60, indexCPS2Sprites_Ken, 0x01 },
    { L"V-Ism Kick Extra 2", 0x60bdb60, 0x60bdb80, indexCPS2Sprites_Ken, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x60bdb80, 0x60bdba0, indexCPS2Sprites_Ken, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x60bdba0, 0x60bdbc0, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_AKUMA_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x61b7000, 0x61b7020, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Punch Extra 1", 0x61b7020, 0x61b7040, indexCPS2Sprites_Akuma, 0x01 },
    { L"X-Ism Punch Extra 2", 0x61b7040, 0x61b7060, indexCPS2Sprites_Akuma, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x61b7060, 0x61b7080, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x61b7080, 0x61b70a0, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_AKUMA_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x61b70a0, 0x61b70c0, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Kick Extra 1", 0x61b70c0, 0x61b70e0, indexCPS2Sprites_Akuma, 0x01 },
    { L"X-Ism Kick Extra 2", 0x61b70e0, 0x61b7100, indexCPS2Sprites_Akuma, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x61b7100, 0x61b7120, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x61b7120, 0x61b7140, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_AKUMA_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x61b7140, 0x61b7160, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Punch Extra 1", 0x61b7160, 0x61b7180, indexCPS2Sprites_Akuma, 0x01 },
    { L"A-Ism Punch Extra 2", 0x61b7180, 0x61b71a0, indexCPS2Sprites_Akuma, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x61b71a0, 0x61b71c0, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x61b71c0, 0x61b71e0, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_AKUMA_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x61b71e0, 0x61b7200, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Kick Extra 1", 0x61b7200, 0x61b7220, indexCPS2Sprites_Akuma, 0x01 },
    { L"A-Ism Kick Extra 2", 0x61b7220, 0x61b7240, indexCPS2Sprites_Akuma, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x61b7240, 0x61b7260, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x61b7260, 0x61b7280, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_AKUMA_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x61b7280, 0x61b72a0, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Punch Extra 1", 0x61b72a0, 0x61b72c0, indexCPS2Sprites_Akuma, 0x01 },
    { L"V-Ism Punch Extra 2", 0x61b72c0, 0x61b72e0, indexCPS2Sprites_Akuma, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x61b72e0, 0x61b7300, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x61b7300, 0x61b7320, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_AKUMA_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x61b7320, 0x61b7340, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Kick Extra 1", 0x61b7340, 0x61b7360, indexCPS2Sprites_Akuma, 0x01 },
    { L"V-Ism Kick Extra 2", 0x61b7360, 0x61b7380, indexCPS2Sprites_Akuma, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x61b7380, 0x61b73a0, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x61b73a0, 0x61b73c0, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CHARLIE_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x634b000, 0x634b020, indexCPS2Sprites_Charlie, 0x00 },
    { L"X-Ism Punch Extra 1", 0x634b020, 0x634b040, indexCPS2Sprites_Charlie, 0x01 },
    { L"X-Ism Punch Extra 2", 0x634b040, 0x634b060, indexCPS2Sprites_Charlie, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x634b060, 0x634b080, indexCPS2Sprites_Charlie, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x634b080, 0x634b0a0, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CHARLIE_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x634b0a0, 0x634b0c0, indexCPS2Sprites_Charlie, 0x00 },
    { L"X-Ism Kick Extra 1", 0x634b0c0, 0x634b0e0, indexCPS2Sprites_Charlie, 0x01 },
    { L"X-Ism Kick Extra 2", 0x634b0e0, 0x634b100, indexCPS2Sprites_Charlie, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x634b100, 0x634b120, indexCPS2Sprites_Charlie, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x634b120, 0x634b140, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CHARLIE_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x634b140, 0x634b160, indexCPS2Sprites_Charlie, 0x00 },
    { L"A-Ism Punch Extra 1", 0x634b160, 0x634b180, indexCPS2Sprites_Charlie, 0x01 },
    { L"A-Ism Punch Extra 2", 0x634b180, 0x634b1a0, indexCPS2Sprites_Charlie, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x634b1a0, 0x634b1c0, indexCPS2Sprites_Charlie, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x634b1c0, 0x634b1e0, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CHARLIE_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x634b1e0, 0x634b200, indexCPS2Sprites_Charlie, 0x00 },
    { L"A-Ism Kick Extra 1", 0x634b200, 0x634b220, indexCPS2Sprites_Charlie, 0x01 },
    { L"A-Ism Kick Extra 2", 0x634b220, 0x634b240, indexCPS2Sprites_Charlie, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x634b240, 0x634b260, indexCPS2Sprites_Charlie, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x634b260, 0x634b280, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CHARLIE_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x634b280, 0x634b2a0, indexCPS2Sprites_Charlie, 0x00 },
    { L"V-Ism Punch Extra 1", 0x634b2a0, 0x634b2c0, indexCPS2Sprites_Charlie, 0x01 },
    { L"V-Ism Punch Extra 2", 0x634b2c0, 0x634b2e0, indexCPS2Sprites_Charlie, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x634b2e0, 0x634b300, indexCPS2Sprites_Charlie, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x634b300, 0x634b320, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CHARLIE_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x634b320, 0x634b340, indexCPS2Sprites_Charlie, 0x00 },
    { L"V-Ism Kick Extra 1", 0x634b340, 0x634b360, indexCPS2Sprites_Charlie, 0x01 },
    { L"V-Ism Kick Extra 2", 0x634b360, 0x634b380, indexCPS2Sprites_Charlie, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x634b380, 0x634b3a0, indexCPS2Sprites_Charlie, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x634b3a0, 0x634b3c0, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLI_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x6428000, 0x6428020, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"X-Ism Punch Extra 1", 0x6428020, 0x6428040, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"X-Ism Punch Extra 2", 0x6428040, 0x6428060, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"X-Ism Punch Super Trail Light", 0x6428060, 0x6428080, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"X-Ism Punch Super Trail Dark", 0x6428080, 0x64280a0, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLI_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x64280a0, 0x64280c0, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"X-Ism Kick Extra 1", 0x64280c0, 0x64280e0, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"X-Ism Kick Extra 2", 0x64280e0, 0x6428100, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"X-Ism Kick Super Trail Light", 0x6428100, 0x6428120, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"X-Ism Kick Super Trail Dark", 0x6428120, 0x6428140, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLI_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x6428140, 0x6428160, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"A-Ism Punch Extra 1", 0x6428160, 0x6428180, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"A-Ism Punch Extra 2", 0x6428180, 0x64281a0, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"A-Ism Punch Super Trail Light", 0x64281a0, 0x64281c0, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"A-Ism Punch Super Trail Dark", 0x64281c0, 0x64281e0, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLI_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x64281e0, 0x6428200, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"A-Ism Kick Extra 1", 0x6428200, 0x6428220, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"A-Ism Kick Extra 2", 0x6428220, 0x6428240, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"A-Ism Kick Super Trail Light", 0x6428240, 0x6428260, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"A-Ism Kick Super Trail Dark", 0x6428260, 0x6428280, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLI_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x6428280, 0x64282a0, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"V-Ism Punch Extra 1", 0x64282a0, 0x64282c0, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"V-Ism Punch Extra 2", 0x64282c0, 0x64282e0, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"V-Ism Punch Super Trail Light", 0x64282e0, 0x6428300, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"V-Ism Punch Super Trail Dark", 0x6428300, 0x6428320, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLI_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x6428320, 0x6428340, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"V-Ism Kick Extra 1", 0x6428340, 0x6428360, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"V-Ism Kick Extra 2", 0x6428360, 0x6428380, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"V-Ism Kick Super Trail Light", 0x6428380, 0x64283a0, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"V-Ism Kick Super Trail Dark", 0x64283a0, 0x64283c0, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_ADON_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x65d7000, 0x65d7020, indexCPS2Sprites_Adon, 0x00 },
    { L"X-Ism Punch Extra 1", 0x65d7020, 0x65d7040, indexCPS2Sprites_Adon, 0x01 },
    { L"X-Ism Punch Extra 2", 0x65d7040, 0x65d7060, indexCPS2Sprites_Adon, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x65d7060, 0x65d7080, indexCPS2Sprites_Adon, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x65d7080, 0x65d70a0, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ADON_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x65d70a0, 0x65d70c0, indexCPS2Sprites_Adon, 0x00 },
    { L"X-Ism Kick Extra 1", 0x65d70c0, 0x65d70e0, indexCPS2Sprites_Adon, 0x01 },
    { L"X-Ism Kick Extra 2", 0x65d70e0, 0x65d7100, indexCPS2Sprites_Adon, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x65d7100, 0x65d7120, indexCPS2Sprites_Adon, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x65d7120, 0x65d7140, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ADON_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x65d7140, 0x65d7160, indexCPS2Sprites_Adon, 0x00 },
    { L"A-Ism Punch Extra 1", 0x65d7160, 0x65d7180, indexCPS2Sprites_Adon, 0x01 },
    { L"A-Ism Punch Extra 2", 0x65d7180, 0x65d71a0, indexCPS2Sprites_Adon, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x65d71a0, 0x65d71c0, indexCPS2Sprites_Adon, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x65d71c0, 0x65d71e0, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ADON_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x65d71e0, 0x65d7200, indexCPS2Sprites_Adon, 0x00 },
    { L"A-Ism Kick Extra 1", 0x65d7200, 0x65d7220, indexCPS2Sprites_Adon, 0x01 },
    { L"A-Ism Kick Extra 2", 0x65d7220, 0x65d7240, indexCPS2Sprites_Adon, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x65d7240, 0x65d7260, indexCPS2Sprites_Adon, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x65d7260, 0x65d7280, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ADON_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x65d7280, 0x65d72a0, indexCPS2Sprites_Adon, 0x00 },
    { L"V-Ism Punch Extra 1", 0x65d72a0, 0x65d72c0, indexCPS2Sprites_Adon, 0x01 },
    { L"V-Ism Punch Extra 2", 0x65d72c0, 0x65d72e0, indexCPS2Sprites_Adon, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x65d72e0, 0x65d7300, indexCPS2Sprites_Adon, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x65d7300, 0x65d7320, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ADON_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x65d7320, 0x65d7340, indexCPS2Sprites_Adon, 0x00 },
    { L"V-Ism Kick Extra 1", 0x65d7340, 0x65d7360, indexCPS2Sprites_Adon, 0x01 },
    { L"V-Ism Kick Extra 2", 0x65d7360, 0x65d7380, indexCPS2Sprites_Adon, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x65d7380, 0x65d73a0, indexCPS2Sprites_Adon, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x65d73a0, 0x65d73c0, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOM_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x66de000, 0x66de020, indexCPS2Sprites_Sodom, 0x00 },
    { L"X-Ism Punch Extra 1", 0x66de020, 0x66de040, indexCPS2Sprites_Sodom, 0x04 },
    { L"X-Ism Punch Extra 2", 0x66de040, 0x66de060, indexCPS2Sprites_Sodom, 0x03 },
    { L"X-Ism Punch Super Trail Light", 0x66de060, 0x66de080, indexCPS2Sprites_Sodom, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x66de080, 0x66de0a0, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOM_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x66de0a0, 0x66de0c0, indexCPS2Sprites_Sodom, 0x00 },
    { L"X-Ism Kick Extra 1", 0x66de0c0, 0x66de0e0, indexCPS2Sprites_Sodom, 0x04 },
    { L"X-Ism Kick Extra 2", 0x66de0e0, 0x66de100, indexCPS2Sprites_Sodom, 0x03 },
    { L"X-Ism Kick Super Trail Light", 0x66de100, 0x66de120, indexCPS2Sprites_Sodom, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x66de120, 0x66de140, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOM_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x66de140, 0x66de160, indexCPS2Sprites_Sodom, 0x00 },
    { L"A-Ism Punch Extra 1", 0x66de160, 0x66de180, indexCPS2Sprites_Sodom, 0x04 },
    { L"A-Ism Punch Extra 2", 0x66de180, 0x66de1a0, indexCPS2Sprites_Sodom, 0x03 },
    { L"A-Ism Punch Super Trail Light", 0x66de1a0, 0x66de1c0, indexCPS2Sprites_Sodom, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x66de1c0, 0x66de1e0, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOM_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x66de1e0, 0x66de200, indexCPS2Sprites_Sodom, 0x00 },
    { L"A-Ism Kick Extra 1", 0x66de200, 0x66de220, indexCPS2Sprites_Sodom, 0x04 },
    { L"A-Ism Kick Extra 2", 0x66de220, 0x66de240, indexCPS2Sprites_Sodom, 0x03 },
    { L"A-Ism Kick Super Trail Light", 0x66de240, 0x66de260, indexCPS2Sprites_Sodom, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x66de260, 0x66de280, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOM_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x66de280, 0x66de2a0, indexCPS2Sprites_Sodom, 0x00 },
    { L"V-Ism Punch Extra 1", 0x66de2a0, 0x66de2c0, indexCPS2Sprites_Sodom, 0x04 },
    { L"V-Ism Punch Extra 2", 0x66de2c0, 0x66de2e0, indexCPS2Sprites_Sodom, 0x03 },
    { L"V-Ism Punch Super Trail Light", 0x66de2e0, 0x66de300, indexCPS2Sprites_Sodom, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x66de300, 0x66de320, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOM_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x66de320, 0x66de340, indexCPS2Sprites_Sodom, 0x00 },
    { L"V-Ism Kick Extra 1", 0x66de340, 0x66de360, indexCPS2Sprites_Sodom, 0x04 },
    { L"V-Ism Kick Extra 2", 0x66de360, 0x66de380, indexCPS2Sprites_Sodom, 0x03 },
    { L"V-Ism Kick Super Trail Light", 0x66de380, 0x66de3a0, indexCPS2Sprites_Sodom, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x66de3a0, 0x66de3c0, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUY_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x68bd000, 0x68bd020, indexCPS2Sprites_Guy, 0x00 },
    { L"X-Ism Punch Extra 1", 0x68bd020, 0x68bd040, indexCPS2Sprites_Guy, 0x01 },
    { L"X-Ism Punch Extra 2", 0x68bd040, 0x68bd060, indexCPS2Sprites_Guy, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x68bd060, 0x68bd080, indexCPS2Sprites_Guy, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x68bd080, 0x68bd0a0, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUY_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x68bd0a0, 0x68bd0c0, indexCPS2Sprites_Guy, 0x00 },
    { L"X-Ism Kick Extra 1", 0x68bd0c0, 0x68bd0e0, indexCPS2Sprites_Guy, 0x01 },
    { L"X-Ism Kick Extra 2", 0x68bd0e0, 0x68bd100, indexCPS2Sprites_Guy, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x68bd100, 0x68bd120, indexCPS2Sprites_Guy, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x68bd120, 0x68bd140, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUY_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x68bd140, 0x68bd160, indexCPS2Sprites_Guy, 0x00 },
    { L"A-Ism Punch Extra 1", 0x68bd160, 0x68bd180, indexCPS2Sprites_Guy, 0x01 },
    { L"A-Ism Punch Extra 2", 0x68bd180, 0x68bd1a0, indexCPS2Sprites_Guy, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x68bd1a0, 0x68bd1c0, indexCPS2Sprites_Guy, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x68bd1c0, 0x68bd1e0, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUY_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x68bd1e0, 0x68bd200, indexCPS2Sprites_Guy, 0x00 },
    { L"A-Ism Kick Extra 1", 0x68bd200, 0x68bd220, indexCPS2Sprites_Guy, 0x01 },
    { L"A-Ism Kick Extra 2", 0x68bd220, 0x68bd240, indexCPS2Sprites_Guy, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x68bd240, 0x68bd260, indexCPS2Sprites_Guy, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x68bd260, 0x68bd280, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUY_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x68bd280, 0x68bd2a0, indexCPS2Sprites_Guy, 0x00 },
    { L"V-Ism Punch Extra 1", 0x68bd2a0, 0x68bd2c0, indexCPS2Sprites_Guy, 0x01 },
    { L"V-Ism Punch Extra 2", 0x68bd2c0, 0x68bd2e0, indexCPS2Sprites_Guy, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x68bd2e0, 0x68bd300, indexCPS2Sprites_Guy, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x68bd300, 0x68bd320, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUY_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x68bd320, 0x68bd340, indexCPS2Sprites_Guy, 0x00 },
    { L"V-Ism Kick Extra 1", 0x68bd340, 0x68bd360, indexCPS2Sprites_Guy, 0x01 },
    { L"V-Ism Kick Extra 2", 0x68bd360, 0x68bd380, indexCPS2Sprites_Guy, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x68bd380, 0x68bd3a0, indexCPS2Sprites_Guy, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x68bd3a0, 0x68bd3c0, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BIRDIE_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x69d4000, 0x69d4020, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Punch Extra 1", 0x69d4020, 0x69d4040, indexCPS2Sprites_Birdie, 0x01 },
    { L"X-Ism Punch Extra 2", 0x69d4040, 0x69d4060, indexCPS2Sprites_Birdie, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x69d4060, 0x69d4080, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x69d4080, 0x69d40a0, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BIRDIE_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x69d40a0, 0x69d40c0, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Kick Extra 1", 0x69d40c0, 0x69d40e0, indexCPS2Sprites_Birdie, 0x01 },
    { L"X-Ism Kick Extra 2", 0x69d40e0, 0x69d4100, indexCPS2Sprites_Birdie, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x69d4100, 0x69d4120, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x69d4120, 0x69d4140, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BIRDIE_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x69d4140, 0x69d4160, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Punch Extra 1", 0x69d4160, 0x69d4180, indexCPS2Sprites_Birdie, 0x01 },
    { L"A-Ism Punch Extra 2", 0x69d4180, 0x69d41a0, indexCPS2Sprites_Birdie, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x69d41a0, 0x69d41c0, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x69d41c0, 0x69d41e0, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BIRDIE_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x69d41e0, 0x69d4200, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Kick Extra 1", 0x69d4200, 0x69d4220, indexCPS2Sprites_Birdie, 0x01 },
    { L"A-Ism Kick Extra 2", 0x69d4220, 0x69d4240, indexCPS2Sprites_Birdie, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x69d4240, 0x69d4260, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x69d4260, 0x69d4280, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BIRDIE_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x69d4280, 0x69d42a0, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Punch Extra 1", 0x69d42a0, 0x69d42c0, indexCPS2Sprites_Birdie, 0x01 },
    { L"V-Ism Punch Extra 2", 0x69d42c0, 0x69d42e0, indexCPS2Sprites_Birdie, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x69d42e0, 0x69d4300, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x69d4300, 0x69d4320, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BIRDIE_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x69d4320, 0x69d4340, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Kick Extra 1", 0x69d4340, 0x69d4360, indexCPS2Sprites_Birdie, 0x01 },
    { L"V-Ism Kick Extra 2", 0x69d4360, 0x69d4380, indexCPS2Sprites_Birdie, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x69d4380, 0x69d43a0, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x69d43a0, 0x69d43c0, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROSE_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x6b01000, 0x6b01020, indexCPS2Sprites_Rose, 0x00 },
    { L"X-Ism Punch Extra 1", 0x6b01020, 0x6b01040, indexCPS2Sprites_Rose, 0x01 },
    { L"X-Ism Punch Extra 2", 0x6b01040, 0x6b01060, indexCPS2Sprites_Rose, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x6b01060, 0x6b01080, indexCPS2Sprites_Rose, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x6b01080, 0x6b010a0, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROSE_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x6b010a0, 0x6b010c0, indexCPS2Sprites_Rose, 0x00 },
    { L"X-Ism Kick Extra 1", 0x6b010c0, 0x6b010e0, indexCPS2Sprites_Rose, 0x01 },
    { L"X-Ism Kick Extra 2", 0x6b010e0, 0x6b01100, indexCPS2Sprites_Rose, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x6b01100, 0x6b01120, indexCPS2Sprites_Rose, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x6b01120, 0x6b01140, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROSE_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x6b01140, 0x6b01160, indexCPS2Sprites_Rose, 0x00 },
    { L"A-Ism Punch Extra 1", 0x6b01160, 0x6b01180, indexCPS2Sprites_Rose, 0x01 },
    { L"A-Ism Punch Extra 2", 0x6b01180, 0x6b011a0, indexCPS2Sprites_Rose, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x6b011a0, 0x6b011c0, indexCPS2Sprites_Rose, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x6b011c0, 0x6b011e0, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROSE_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x6b011e0, 0x6b01200, indexCPS2Sprites_Rose, 0x00 },
    { L"A-Ism Kick Extra 1", 0x6b01200, 0x6b01220, indexCPS2Sprites_Rose, 0x01 },
    { L"A-Ism Kick Extra 2", 0x6b01220, 0x6b01240, indexCPS2Sprites_Rose, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x6b01240, 0x6b01260, indexCPS2Sprites_Rose, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x6b01260, 0x6b01280, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROSE_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x6b01280, 0x6b012a0, indexCPS2Sprites_Rose, 0x00 },
    { L"V-Ism Punch Extra 1", 0x6b012a0, 0x6b012c0, indexCPS2Sprites_Rose, 0x01 },
    { L"V-Ism Punch Extra 2", 0x6b012c0, 0x6b012e0, indexCPS2Sprites_Rose, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x6b012e0, 0x6b01300, indexCPS2Sprites_Rose, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x6b01300, 0x6b01320, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROSE_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x6b01320, 0x6b01340, indexCPS2Sprites_Rose, 0x00 },
    { L"V-Ism Kick Extra 1", 0x6b01340, 0x6b01360, indexCPS2Sprites_Rose, 0x01 },
    { L"V-Ism Kick Extra 2", 0x6b01360, 0x6b01380, indexCPS2Sprites_Rose, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x6b01380, 0x6b013a0, indexCPS2Sprites_Rose, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x6b013a0, 0x6b013c0, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_MBISON_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x6c3d000, 0x6c3d020, indexCPS2Sprites_Bison, 0x00 },
    { L"X-Ism Punch Extra 1", 0x6c3d020, 0x6c3d040, indexCPS2Sprites_Bison, 0x01 },
    { L"X-Ism Punch Extra 2", 0x6c3d040, 0x6c3d060, indexCPS2Sprites_Bison, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x6c3d060, 0x6c3d080, indexCPS2Sprites_Bison, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x6c3d080, 0x6c3d0a0, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_MBISON_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x6c3d0a0, 0x6c3d0c0, indexCPS2Sprites_Bison, 0x00 },
    { L"X-Ism Kick Extra 1", 0x6c3d0c0, 0x6c3d0e0, indexCPS2Sprites_Bison, 0x01 },
    { L"X-Ism Kick Extra 2", 0x6c3d0e0, 0x6c3d100, indexCPS2Sprites_Bison, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x6c3d100, 0x6c3d120, indexCPS2Sprites_Bison, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x6c3d120, 0x6c3d140, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_MBISON_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x6c3d140, 0x6c3d160, indexCPS2Sprites_Bison, 0x00 },
    { L"A-Ism Punch Extra 1", 0x6c3d160, 0x6c3d180, indexCPS2Sprites_Bison, 0x01 },
    { L"A-Ism Punch Extra 2", 0x6c3d180, 0x6c3d1a0, indexCPS2Sprites_Bison, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x6c3d1a0, 0x6c3d1c0, indexCPS2Sprites_Bison, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x6c3d1c0, 0x6c3d1e0, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_MBISON_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x6c3d1e0, 0x6c3d200, indexCPS2Sprites_Bison, 0x00 },
    { L"A-Ism Kick Extra 1", 0x6c3d200, 0x6c3d220, indexCPS2Sprites_Bison, 0x01 },
    { L"A-Ism Kick Extra 2", 0x6c3d220, 0x6c3d240, indexCPS2Sprites_Bison, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x6c3d240, 0x6c3d260, indexCPS2Sprites_Bison, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x6c3d260, 0x6c3d280, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_MBISON_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x6c3d280, 0x6c3d2a0, indexCPS2Sprites_Bison, 0x00 },
    { L"V-Ism Punch Extra 1", 0x6c3d2a0, 0x6c3d2c0, indexCPS2Sprites_Bison, 0x01 },
    { L"V-Ism Punch Extra 2", 0x6c3d2c0, 0x6c3d2e0, indexCPS2Sprites_Bison, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x6c3d2e0, 0x6c3d300, indexCPS2Sprites_Bison, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x6c3d300, 0x6c3d320, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_MBISON_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x6c3d320, 0x6c3d340, indexCPS2Sprites_Bison, 0x00 },
    { L"V-Ism Kick Extra 1", 0x6c3d340, 0x6c3d360, indexCPS2Sprites_Bison, 0x01 },
    { L"V-Ism Kick Extra 2", 0x6c3d360, 0x6c3d380, indexCPS2Sprites_Bison, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x6c3d380, 0x6c3d3a0, indexCPS2Sprites_Bison, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x6c3d3a0, 0x6c3d3c0, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAGAT_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x6d43800, 0x6d43820, indexCPS2Sprites_Sagat, 0x00 },
    { L"X-Ism Punch Extra 1", 0x6d43820, 0x6d43840, indexCPS2Sprites_Sagat, 0x01 },
    { L"X-Ism Punch Extra 2", 0x6d43840, 0x6d43860, indexCPS2Sprites_Sagat, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x6d43860, 0x6d43880, indexCPS2Sprites_Sagat, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x6d43880, 0x6d438a0, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAGAT_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x6d438a0, 0x6d438c0, indexCPS2Sprites_Sagat, 0x00 },
    { L"X-Ism Kick Extra 1", 0x6d438c0, 0x6d438e0, indexCPS2Sprites_Sagat, 0x01 },
    { L"X-Ism Kick Extra 2", 0x6d438e0, 0x6d43900, indexCPS2Sprites_Sagat, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x6d43900, 0x6d43920, indexCPS2Sprites_Sagat, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x6d43920, 0x6d43940, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAGAT_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x6d43940, 0x6d43960, indexCPS2Sprites_Sagat, 0x00 },
    { L"A-Ism Punch Extra 1", 0x6d43960, 0x6d43980, indexCPS2Sprites_Sagat, 0x01 },
    { L"A-Ism Punch Extra 2", 0x6d43980, 0x6d439a0, indexCPS2Sprites_Sagat, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x6d439a0, 0x6d439c0, indexCPS2Sprites_Sagat, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x6d439c0, 0x6d439e0, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAGAT_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x6d439e0, 0x6d43a00, indexCPS2Sprites_Sagat, 0x00 },
    { L"A-Ism Kick Extra 1", 0x6d43a00, 0x6d43a20, indexCPS2Sprites_Sagat, 0x01 },
    { L"A-Ism Kick Extra 2", 0x6d43a20, 0x6d43a40, indexCPS2Sprites_Sagat, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x6d43a40, 0x6d43a60, indexCPS2Sprites_Sagat, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x6d43a60, 0x6d43a80, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAGAT_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x6d43a80, 0x6d43aa0, indexCPS2Sprites_Sagat, 0x00 },
    { L"V-Ism Punch Extra 1", 0x6d43aa0, 0x6d43ac0, indexCPS2Sprites_Sagat, 0x01 },
    { L"V-Ism Punch Extra 2", 0x6d43ac0, 0x6d43ae0, indexCPS2Sprites_Sagat, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x6d43ae0, 0x6d43b00, indexCPS2Sprites_Sagat, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x6d43b00, 0x6d43b20, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAGAT_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x6d43b20, 0x6d43b40, indexCPS2Sprites_Sagat, 0x00 },
    { L"V-Ism Kick Extra 1", 0x6d43b40, 0x6d43b60, indexCPS2Sprites_Sagat, 0x01 },
    { L"V-Ism Kick Extra 2", 0x6d43b60, 0x6d43b80, indexCPS2Sprites_Sagat, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x6d43b80, 0x6d43ba0, indexCPS2Sprites_Sagat, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x6d43ba0, 0x6d43bc0, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DAN_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x6e09800, 0x6e09820, indexCPS2Sprites_Dan, 0x00 },
    { L"X-Ism Punch Extra 1", 0x6e09820, 0x6e09840, indexCPS2Sprites_Dan, 0x01 },
    { L"X-Ism Punch Extra 2", 0x6e09840, 0x6e09860, indexCPS2Sprites_Dan, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x6e09860, 0x6e09880, indexCPS2Sprites_Dan, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x6e09880, 0x6e098a0, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DAN_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x6e098a0, 0x6e098c0, indexCPS2Sprites_Dan, 0x00 },
    { L"X-Ism Kick Extra 1", 0x6e098c0, 0x6e098e0, indexCPS2Sprites_Dan, 0x01 },
    { L"X-Ism Kick Extra 2", 0x6e098e0, 0x6e09900, indexCPS2Sprites_Dan, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x6e09900, 0x6e09920, indexCPS2Sprites_Dan, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x6e09920, 0x6e09940, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DAN_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x6e09940, 0x6e09960, indexCPS2Sprites_Dan, 0x00 },
    { L"A-Ism Punch Extra 1", 0x6e09960, 0x6e09980, indexCPS2Sprites_Dan, 0x01 },
    { L"A-Ism Punch Extra 2", 0x6e09980, 0x6e099a0, indexCPS2Sprites_Dan, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x6e099a0, 0x6e099c0, indexCPS2Sprites_Dan, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x6e099c0, 0x6e099e0, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DAN_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x6e099e0, 0x6e09a00, indexCPS2Sprites_Dan, 0x00 },
    { L"A-Ism Kick Extra 1", 0x6e09a00, 0x6e09a20, indexCPS2Sprites_Dan, 0x01 },
    { L"A-Ism Kick Extra 2", 0x6e09a20, 0x6e09a40, indexCPS2Sprites_Dan, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x6e09a40, 0x6e09a60, indexCPS2Sprites_Dan, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x6e09a60, 0x6e09a80, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DAN_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x6e09a80, 0x6e09aa0, indexCPS2Sprites_Dan, 0x00 },
    { L"V-Ism Punch Extra 1", 0x6e09aa0, 0x6e09ac0, indexCPS2Sprites_Dan, 0x01 },
    { L"V-Ism Punch Extra 2", 0x6e09ac0, 0x6e09ae0, indexCPS2Sprites_Dan, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x6e09ae0, 0x6e09b00, indexCPS2Sprites_Dan, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x6e09b00, 0x6e09b20, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DAN_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x6e09b20, 0x6e09b40, indexCPS2Sprites_Dan, 0x00 },
    { L"V-Ism Kick Extra 1", 0x6e09b40, 0x6e09b60, indexCPS2Sprites_Dan, 0x01 },
    { L"V-Ism Kick Extra 2", 0x6e09b60, 0x6e09b80, indexCPS2Sprites_Dan, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x6e09b80, 0x6e09ba0, indexCPS2Sprites_Dan, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x6e09ba0, 0x6e09bc0, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAKURA_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x6f54000, 0x6f54020, indexCPS2Sprites_Sakura, 0x00 },
    { L"X-Ism Punch Extra 1", 0x6f54020, 0x6f54040, indexCPS2Sprites_Sakura, 0x01 },
    { L"X-Ism Punch Extra 2", 0x6f54040, 0x6f54060, indexCPS2Sprites_Sakura, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x6f54060, 0x6f54080, indexCPS2Sprites_Sakura, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x6f54080, 0x6f540a0, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAKURA_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x6f540a0, 0x6f540c0, indexCPS2Sprites_Sakura, 0x00 },
    { L"X-Ism Kick Extra 1", 0x6f540c0, 0x6f540e0, indexCPS2Sprites_Sakura, 0x01 },
    { L"X-Ism Kick Extra 2", 0x6f540e0, 0x6f54100, indexCPS2Sprites_Sakura, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x6f54100, 0x6f54120, indexCPS2Sprites_Sakura, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x6f54120, 0x6f54140, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAKURA_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x6f54140, 0x6f54160, indexCPS2Sprites_Sakura, 0x00 },
    { L"A-Ism Punch Extra 1", 0x6f54160, 0x6f54180, indexCPS2Sprites_Sakura, 0x01 },
    { L"A-Ism Punch Extra 2", 0x6f54180, 0x6f541a0, indexCPS2Sprites_Sakura, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x6f541a0, 0x6f541c0, indexCPS2Sprites_Sakura, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x6f541c0, 0x6f541e0, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAKURA_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x6f541e0, 0x6f54200, indexCPS2Sprites_Sakura, 0x00 },
    { L"A-Ism Kick Extra 1", 0x6f54200, 0x6f54220, indexCPS2Sprites_Sakura, 0x01 },
    { L"A-Ism Kick Extra 2", 0x6f54220, 0x6f54240, indexCPS2Sprites_Sakura, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x6f54240, 0x6f54260, indexCPS2Sprites_Sakura, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x6f54260, 0x6f54280, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAKURA_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x6f54280, 0x6f542a0, indexCPS2Sprites_Sakura, 0x00 },
    { L"V-Ism Punch Extra 1", 0x6f542a0, 0x6f542c0, indexCPS2Sprites_Sakura, 0x01 },
    { L"V-Ism Punch Extra 2", 0x6f542c0, 0x6f542e0, indexCPS2Sprites_Sakura, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x6f542e0, 0x6f54300, indexCPS2Sprites_Sakura, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x6f54300, 0x6f54320, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SAKURA_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x6f54320, 0x6f54340, indexCPS2Sprites_Sakura, 0x00 },
    { L"V-Ism Kick Extra 1", 0x6f54340, 0x6f54360, indexCPS2Sprites_Sakura, 0x01 },
    { L"V-Ism Kick Extra 2", 0x6f54360, 0x6f54380, indexCPS2Sprites_Sakura, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x6f54380, 0x6f543a0, indexCPS2Sprites_Sakura, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x6f543a0, 0x6f543c0, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROLENTO_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x7076800, 0x7076820, indexCPS2Sprites_Rolento, 0x00 },
    { L"X-Ism Punch Extra 1", 0x7076820, 0x7076840, indexCPS2Sprites_Rolento, 0x01 },
    { L"X-Ism Punch Extra 2", 0x7076840, 0x7076860, indexCPS2Sprites_Rolento, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x7076860, 0x7076880, indexCPS2Sprites_Rolento, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x7076880, 0x70768a0, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROLENTO_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x70768a0, 0x70768c0, indexCPS2Sprites_Rolento, 0x00 },
    { L"X-Ism Kick Extra 1", 0x70768c0, 0x70768e0, indexCPS2Sprites_Rolento, 0x01 },
    { L"X-Ism Kick Extra 2", 0x70768e0, 0x7076900, indexCPS2Sprites_Rolento, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x7076900, 0x7076920, indexCPS2Sprites_Rolento, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x7076920, 0x7076940, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROLENTO_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x7076940, 0x7076960, indexCPS2Sprites_Rolento, 0x00 },
    { L"A-Ism Punch Extra 1", 0x7076960, 0x7076980, indexCPS2Sprites_Rolento, 0x01 },
    { L"A-Ism Punch Extra 2", 0x7076980, 0x70769a0, indexCPS2Sprites_Rolento, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x70769a0, 0x70769c0, indexCPS2Sprites_Rolento, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x70769c0, 0x70769e0, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROLENTO_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x70769e0, 0x7076a00, indexCPS2Sprites_Rolento, 0x00 },
    { L"A-Ism Kick Extra 1", 0x7076a00, 0x7076a20, indexCPS2Sprites_Rolento, 0x01 },
    { L"A-Ism Kick Extra 2", 0x7076a20, 0x7076a40, indexCPS2Sprites_Rolento, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x7076a40, 0x7076a60, indexCPS2Sprites_Rolento, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x7076a60, 0x7076a80, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROLENTO_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x7076a80, 0x7076aa0, indexCPS2Sprites_Rolento, 0x00 },
    { L"V-Ism Punch Extra 1", 0x7076aa0, 0x7076ac0, indexCPS2Sprites_Rolento, 0x01 },
    { L"V-Ism Punch Extra 2", 0x7076ac0, 0x7076ae0, indexCPS2Sprites_Rolento, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x7076ae0, 0x7076b00, indexCPS2Sprites_Rolento, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x7076b00, 0x7076b20, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ROLENTO_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x7076b20, 0x7076b40, indexCPS2Sprites_Rolento, 0x00 },
    { L"V-Ism Kick Extra 1", 0x7076b40, 0x7076b60, indexCPS2Sprites_Rolento, 0x01 },
    { L"V-Ism Kick Extra 2", 0x7076b60, 0x7076b80, indexCPS2Sprites_Rolento, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x7076b80, 0x7076ba0, indexCPS2Sprites_Rolento, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x7076ba0, 0x7076bc0, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DHALSIM_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x7190000, 0x7190020, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Punch Extra 1", 0x7190020, 0x7190040, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"X-Ism Punch Extra 2", 0x7190040, 0x7190060, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x7190060, 0x7190080, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x7190080, 0x71900a0, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DHALSIM_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x71900a0, 0x71900c0, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Kick Extra 1", 0x71900c0, 0x71900e0, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"X-Ism Kick Extra 2", 0x71900e0, 0x7190100, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x7190100, 0x7190120, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x7190120, 0x7190140, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DHALSIM_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x7190140, 0x7190160, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Punch Extra 1", 0x7190160, 0x7190180, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"A-Ism Punch Extra 2", 0x7190180, 0x71901a0, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x71901a0, 0x71901c0, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x71901c0, 0x71901e0, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DHALSIM_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x71901e0, 0x7190200, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Kick Extra 1", 0x7190200, 0x7190220, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"A-Ism Kick Extra 2", 0x7190220, 0x7190240, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x7190240, 0x7190260, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x7190260, 0x7190280, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DHALSIM_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x7190280, 0x71902a0, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Punch Extra 1", 0x71902a0, 0x71902c0, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"V-Ism Punch Extra 2", 0x71902c0, 0x71902e0, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x71902e0, 0x7190300, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x7190300, 0x7190320, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DHALSIM_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x7190320, 0x7190340, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Kick Extra 1", 0x7190340, 0x7190360, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"V-Ism Kick Extra 2", 0x7190360, 0x7190380, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x7190380, 0x71903a0, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x71903a0, 0x71903c0, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ZANGIEF_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x732c000, 0x732c020, indexCPS2Sprites_Zangief, 0x00 },
    { L"X-Ism Punch Extra 1", 0x732c020, 0x732c040, indexCPS2Sprites_Zangief, 0x01 },
    { L"X-Ism Punch Extra 2", 0x732c040, 0x732c060, indexCPS2Sprites_Zangief, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x732c060, 0x732c080, indexCPS2Sprites_Zangief, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x732c080, 0x732c0a0, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ZANGIEF_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x732c0a0, 0x732c0c0, indexCPS2Sprites_Zangief, 0x00 },
    { L"X-Ism Kick Extra 1", 0x732c0c0, 0x732c0e0, indexCPS2Sprites_Zangief, 0x01 },
    { L"X-Ism Kick Extra 2", 0x732c0e0, 0x732c100, indexCPS2Sprites_Zangief, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x732c100, 0x732c120, indexCPS2Sprites_Zangief, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x732c120, 0x732c140, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ZANGIEF_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x732c140, 0x732c160, indexCPS2Sprites_Zangief, 0x00 },
    { L"A-Ism Punch Extra 1", 0x732c160, 0x732c180, indexCPS2Sprites_Zangief, 0x01 },
    { L"A-Ism Punch Extra 2", 0x732c180, 0x732c1a0, indexCPS2Sprites_Zangief, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x732c1a0, 0x732c1c0, indexCPS2Sprites_Zangief, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x732c1c0, 0x732c1e0, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ZANGIEF_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x732c1e0, 0x732c200, indexCPS2Sprites_Zangief, 0x00 },
    { L"A-Ism Kick Extra 1", 0x732c200, 0x732c220, indexCPS2Sprites_Zangief, 0x01 },
    { L"A-Ism Kick Extra 2", 0x732c220, 0x732c240, indexCPS2Sprites_Zangief, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x732c240, 0x732c260, indexCPS2Sprites_Zangief, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x732c260, 0x732c280, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ZANGIEF_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x732c280, 0x732c2a0, indexCPS2Sprites_Zangief, 0x00 },
    { L"V-Ism Punch Extra 1", 0x732c2a0, 0x732c2c0, indexCPS2Sprites_Zangief, 0x01 },
    { L"V-Ism Punch Extra 2", 0x732c2c0, 0x732c2e0, indexCPS2Sprites_Zangief, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x732c2e0, 0x732c300, indexCPS2Sprites_Zangief, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x732c300, 0x732c320, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_ZANGIEF_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x732c320, 0x732c340, indexCPS2Sprites_Zangief, 0x00 },
    { L"V-Ism Kick Extra 1", 0x732c340, 0x732c360, indexCPS2Sprites_Zangief, 0x01 },
    { L"V-Ism Kick Extra 2", 0x732c360, 0x732c380, indexCPS2Sprites_Zangief, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x732c380, 0x732c3a0, indexCPS2Sprites_Zangief, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x732c3a0, 0x732c3c0, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GEN_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x7451000, 0x7451020, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Punch Extra 1", 0x7451020, 0x7451040, indexCPS2Sprites_Gen, 0x01 },
    { L"X-Ism Punch Extra 2", 0x7451040, 0x7451060, indexCPS2Sprites_Gen, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x7451060, 0x7451080, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x7451080, 0x74510a0, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GEN_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x74510a0, 0x74510c0, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Kick Extra 1", 0x74510c0, 0x74510e0, indexCPS2Sprites_Gen, 0x01 },
    { L"X-Ism Kick Extra 2", 0x74510e0, 0x7451100, indexCPS2Sprites_Gen, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x7451100, 0x7451120, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x7451120, 0x7451140, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GEN_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x7451140, 0x7451160, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Punch Extra 1", 0x7451160, 0x7451180, indexCPS2Sprites_Gen, 0x01 },
    { L"A-Ism Punch Extra 2", 0x7451180, 0x74511a0, indexCPS2Sprites_Gen, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x74511a0, 0x74511c0, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x74511c0, 0x74511e0, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GEN_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x74511e0, 0x7451200, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Kick Extra 1", 0x7451200, 0x7451220, indexCPS2Sprites_Gen, 0x01 },
    { L"A-Ism Kick Extra 2", 0x7451220, 0x7451240, indexCPS2Sprites_Gen, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x7451240, 0x7451260, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x7451260, 0x7451280, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GEN_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x7451280, 0x74512a0, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Punch Extra 1", 0x74512a0, 0x74512c0, indexCPS2Sprites_Gen, 0x01 },
    { L"V-Ism Punch Extra 2", 0x74512c0, 0x74512e0, indexCPS2Sprites_Gen, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x74512e0, 0x7451300, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x7451300, 0x7451320, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GEN_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x7451320, 0x7451340, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Kick Extra 1", 0x7451340, 0x7451360, indexCPS2Sprites_Gen, 0x01 },
    { L"V-Ism Kick Extra 2", 0x7451360, 0x7451380, indexCPS2Sprites_Gen, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x7451380, 0x74513a0, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x74513a0, 0x74513c0, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLIXISM_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x64eb000, 0x64eb020, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"X-Ism Punch Extra 1", 0x64eb020, 0x64eb040, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"X-Ism Punch Extra 2", 0x64eb040, 0x64eb060, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"X-Ism Punch Super Trail Light", 0x64eb060, 0x64eb080, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"X-Ism Punch Super Trail Dark", 0x64eb080, 0x64eb0a0, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLIXISM_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x64eb0a0, 0x64eb0c0, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"X-Ism Kick Extra 1", 0x64eb0c0, 0x64eb0e0, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"X-Ism Kick Extra 2", 0x64eb0e0, 0x64eb100, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"X-Ism Kick Super Trail Light", 0x64eb100, 0x64eb120, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"X-Ism Kick Super Trail Dark", 0x64eb120, 0x64eb140, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLIXISM_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x64eb140, 0x64eb160, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"A-Ism Punch Extra 1", 0x64eb160, 0x64eb180, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"A-Ism Punch Extra 2", 0x64eb180, 0x64eb1a0, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"A-Ism Punch Super Trail Light", 0x64eb1a0, 0x64eb1c0, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"A-Ism Punch Super Trail Dark", 0x64eb1c0, 0x64eb1e0, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLIXISM_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x64eb1e0, 0x64eb200, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"A-Ism Kick Extra 1", 0x64eb200, 0x64eb220, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"A-Ism Kick Extra 2", 0x64eb220, 0x64eb240, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"A-Ism Kick Super Trail Light", 0x64eb240, 0x64eb260, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"A-Ism Kick Super Trail Dark", 0x64eb260, 0x64eb280, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLIXISM_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x64eb280, 0x64eb2a0, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"V-Ism Punch Extra 1", 0x64eb2a0, 0x64eb2c0, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"V-Ism Punch Extra 2", 0x64eb2c0, 0x64eb2e0, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"V-Ism Punch Super Trail Light", 0x64eb2e0, 0x64eb300, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"V-Ism Punch Super Trail Dark", 0x64eb300, 0x64eb320, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_CHUNLIXISM_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x64eb320, 0x64eb340, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"V-Ism Kick Extra 1", 0x64eb340, 0x64eb360, indexCPS2Sprites_ChunLi, 0x01, &pairNext },
    { L"V-Ism Kick Extra 2", 0x64eb360, 0x64eb380, indexCPS2Sprites_ChunLi, 0x02, &pairNext },
    { L"V-Ism Kick Super Trail Light", 0x64eb380, 0x64eb3a0, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"V-Ism Kick Super Trail Dark", 0x64eb3a0, 0x64eb3c0, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_GENCRANESTANCE_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x7546800, 0x7546820, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Punch Extra 1", 0x7546820, 0x7546840, indexCPS2Sprites_Gen, 0x01 },
    { L"X-Ism Punch Extra 2", 0x7546840, 0x7546860, indexCPS2Sprites_Gen, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x7546860, 0x7546880, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x7546880, 0x75468a0, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GENCRANESTANCE_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x75468a0, 0x75468c0, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Kick Extra 1", 0x75468c0, 0x75468e0, indexCPS2Sprites_Gen, 0x01 },
    { L"X-Ism Kick Extra 2", 0x75468e0, 0x7546900, indexCPS2Sprites_Gen, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x7546900, 0x7546920, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x7546920, 0x7546940, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GENCRANESTANCE_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x7546940, 0x7546960, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Punch Extra 1", 0x7546960, 0x7546980, indexCPS2Sprites_Gen, 0x01 },
    { L"A-Ism Punch Extra 2", 0x7546980, 0x75469a0, indexCPS2Sprites_Gen, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x75469a0, 0x75469c0, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x75469c0, 0x75469e0, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GENCRANESTANCE_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x75469e0, 0x7546a00, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Kick Extra 1", 0x7546a00, 0x7546a20, indexCPS2Sprites_Gen, 0x01 },
    { L"A-Ism Kick Extra 2", 0x7546a20, 0x7546a40, indexCPS2Sprites_Gen, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x7546a40, 0x7546a60, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x7546a60, 0x7546a80, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GENCRANESTANCE_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x7546a80, 0x7546aa0, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Punch Extra 1", 0x7546aa0, 0x7546ac0, indexCPS2Sprites_Gen, 0x01 },
    { L"V-Ism Punch Extra 2", 0x7546ac0, 0x7546ae0, indexCPS2Sprites_Gen, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x7546ae0, 0x7546b00, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x7546b00, 0x7546b20, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GENCRANESTANCE_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x7546b20, 0x7546b40, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Kick Extra 1", 0x7546b40, 0x7546b60, indexCPS2Sprites_Gen, 0x01 },
    { L"V-Ism Kick Extra 2", 0x7546b60, 0x7546b80, indexCPS2Sprites_Gen, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x7546b80, 0x7546ba0, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x7546ba0, 0x7546bc0, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOMXISM_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x67ec000, 0x67ec020, indexCPS2Sprites_Sodom, 0x00 },
    { L"X-Ism Punch Extra 1", 0x67ec020, 0x67ec040, indexCPS2Sprites_Sodom, 0x01 },
    { L"X-Ism Punch Extra 2", 0x67ec040, 0x67ec060, indexCPS2Sprites_Sodom, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x67ec060, 0x67ec080, indexCPS2Sprites_Sodom, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x67ec080, 0x67ec0a0, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOMXISM_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x67ec0a0, 0x67ec0c0, indexCPS2Sprites_Sodom, 0x00 },
    { L"X-Ism Kick Extra 1", 0x67ec0c0, 0x67ec0e0, indexCPS2Sprites_Sodom, 0x01 },
    { L"X-Ism Kick Extra 2", 0x67ec0e0, 0x67ec100, indexCPS2Sprites_Sodom, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x67ec100, 0x67ec120, indexCPS2Sprites_Sodom, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x67ec120, 0x67ec140, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOMXISM_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x67ec140, 0x67ec160, indexCPS2Sprites_Sodom, 0x00 },
    { L"A-Ism Punch Extra 1", 0x67ec160, 0x67ec180, indexCPS2Sprites_Sodom, 0x01 },
    { L"A-Ism Punch Extra 2", 0x67ec180, 0x67ec1a0, indexCPS2Sprites_Sodom, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x67ec1a0, 0x67ec1c0, indexCPS2Sprites_Sodom, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x67ec1c0, 0x67ec1e0, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOMXISM_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x67ec1e0, 0x67ec200, indexCPS2Sprites_Sodom, 0x00 },
    { L"A-Ism Kick Extra 1", 0x67ec200, 0x67ec220, indexCPS2Sprites_Sodom, 0x01 },
    { L"A-Ism Kick Extra 2", 0x67ec220, 0x67ec240, indexCPS2Sprites_Sodom, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x67ec240, 0x67ec260, indexCPS2Sprites_Sodom, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x67ec260, 0x67ec280, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOMXISM_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x67ec280, 0x67ec2a0, indexCPS2Sprites_Sodom, 0x00 },
    { L"V-Ism Punch Extra 1", 0x67ec2a0, 0x67ec2c0, indexCPS2Sprites_Sodom, 0x01 },
    { L"V-Ism Punch Extra 2", 0x67ec2c0, 0x67ec2e0, indexCPS2Sprites_Sodom, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x67ec2e0, 0x67ec300, indexCPS2Sprites_Sodom, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x67ec300, 0x67ec320, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SODOMXISM_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x67ec320, 0x67ec340, indexCPS2Sprites_Sodom, 0x00 },
    { L"V-Ism Kick Extra 1", 0x67ec340, 0x67ec360, indexCPS2Sprites_Sodom, 0x01 },
    { L"V-Ism Kick Extra 2", 0x67ec360, 0x67ec380, indexCPS2Sprites_Sodom, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x67ec380, 0x67ec3a0, indexCPS2Sprites_Sodom, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x67ec3a0, 0x67ec3c0, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROG_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x75fd000, 0x75fd020, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Punch Extra 1", 0x75fd020, 0x75fd040, indexCPS2Sprites_Balrog, 0x01 },
    { L"X-Ism Punch Extra 2", 0x75fd040, 0x75fd060, indexCPS2Sprites_Balrog, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x75fd060, 0x75fd080, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x75fd080, 0x75fd0a0, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROG_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x75fd0a0, 0x75fd0c0, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Kick Extra 1", 0x75fd0c0, 0x75fd0e0, indexCPS2Sprites_Balrog, 0x01 },
    { L"X-Ism Kick Extra 2", 0x75fd0e0, 0x75fd100, indexCPS2Sprites_Balrog, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x75fd100, 0x75fd120, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x75fd120, 0x75fd140, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROG_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x75fd140, 0x75fd160, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Punch Extra 1", 0x75fd160, 0x75fd180, indexCPS2Sprites_Balrog, 0x01 },
    { L"A-Ism Punch Extra 2", 0x75fd180, 0x75fd1a0, indexCPS2Sprites_Balrog, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x75fd1a0, 0x75fd1c0, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x75fd1c0, 0x75fd1e0, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROG_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x75fd1e0, 0x75fd200, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Kick Extra 1", 0x75fd200, 0x75fd220, indexCPS2Sprites_Balrog, 0x01 },
    { L"A-Ism Kick Extra 2", 0x75fd220, 0x75fd240, indexCPS2Sprites_Balrog, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x75fd240, 0x75fd260, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x75fd260, 0x75fd280, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROG_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x75fd280, 0x75fd2a0, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Punch Extra 1", 0x75fd2a0, 0x75fd2c0, indexCPS2Sprites_Balrog, 0x01 },
    { L"V-Ism Punch Extra 2", 0x75fd2c0, 0x75fd2e0, indexCPS2Sprites_Balrog, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x75fd2e0, 0x75fd300, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x75fd300, 0x75fd320, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROG_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x75fd320, 0x75fd340, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Kick Extra 1", 0x75fd340, 0x75fd360, indexCPS2Sprites_Balrog, 0x01 },
    { L"V-Ism Kick Extra 2", 0x75fd360, 0x75fd380, indexCPS2Sprites_Balrog, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x75fd380, 0x75fd3a0, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x75fd3a0, 0x75fd3c0, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CAMMY_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x77ee000, 0x77ee020, indexCPS2Sprites_Cammy, 0x00 },
    { L"X-Ism Punch Extra 1", 0x77ee020, 0x77ee040, indexCPS2Sprites_Cammy, 0x01 },
    { L"X-Ism Punch Extra 2", 0x77ee040, 0x77ee060, indexCPS2Sprites_Cammy, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x77ee060, 0x77ee080, indexCPS2Sprites_Cammy, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x77ee080, 0x77ee0a0, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CAMMY_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x77ee0a0, 0x77ee0c0, indexCPS2Sprites_Cammy, 0x00 },
    { L"X-Ism Kick Extra 1", 0x77ee0c0, 0x77ee0e0, indexCPS2Sprites_Cammy, 0x01 },
    { L"X-Ism Kick Extra 2", 0x77ee0e0, 0x77ee100, indexCPS2Sprites_Cammy, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x77ee100, 0x77ee120, indexCPS2Sprites_Cammy, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x77ee120, 0x77ee140, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CAMMY_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x77ee140, 0x77ee160, indexCPS2Sprites_Cammy, 0x00 },
    { L"A-Ism Punch Extra 1", 0x77ee160, 0x77ee180, indexCPS2Sprites_Cammy, 0x01 },
    { L"A-Ism Punch Extra 2", 0x77ee180, 0x77ee1a0, indexCPS2Sprites_Cammy, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x77ee1a0, 0x77ee1c0, indexCPS2Sprites_Cammy, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x77ee1c0, 0x77ee1e0, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CAMMY_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x77ee1e0, 0x77ee200, indexCPS2Sprites_Cammy, 0x00 },
    { L"A-Ism Kick Extra 1", 0x77ee200, 0x77ee220, indexCPS2Sprites_Cammy, 0x01 },
    { L"A-Ism Kick Extra 2", 0x77ee220, 0x77ee240, indexCPS2Sprites_Cammy, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x77ee240, 0x77ee260, indexCPS2Sprites_Cammy, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x77ee260, 0x77ee280, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CAMMY_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x77ee280, 0x77ee2a0, indexCPS2Sprites_Cammy, 0x00 },
    { L"V-Ism Punch Extra 1", 0x77ee2a0, 0x77ee2c0, indexCPS2Sprites_Cammy, 0x01 },
    { L"V-Ism Punch Extra 2", 0x77ee2c0, 0x77ee2e0, indexCPS2Sprites_Cammy, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x77ee2e0, 0x77ee300, indexCPS2Sprites_Cammy, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x77ee300, 0x77ee320, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CAMMY_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x77ee320, 0x77ee340, indexCPS2Sprites_Cammy, 0x00 },
    { L"V-Ism Kick Extra 1", 0x77ee340, 0x77ee360, indexCPS2Sprites_Cammy, 0x01 },
    { L"V-Ism Kick Extra 2", 0x77ee360, 0x77ee380, indexCPS2Sprites_Cammy, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x77ee380, 0x77ee3a0, indexCPS2Sprites_Cammy, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x77ee3a0, 0x77ee3c0, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EVILRYU_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x791e000, 0x791e020, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Punch Extra 1", 0x791e020, 0x791e040, indexCPS2Sprites_Ryu, 0x01 },
    { L"X-Ism Punch Extra 2", 0x791e040, 0x791e060, indexCPS2Sprites_Ryu, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x791e060, 0x791e080, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x791e080, 0x791e0a0, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EVILRYU_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x791e0a0, 0x791e0c0, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Kick Extra 1", 0x791e0c0, 0x791e0e0, indexCPS2Sprites_Ryu, 0x01 },
    { L"X-Ism Kick Extra 2", 0x791e0e0, 0x791e100, indexCPS2Sprites_Ryu, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x791e100, 0x791e120, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x791e120, 0x791e140, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EVILRYU_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x791e140, 0x791e160, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Punch Extra 1", 0x791e160, 0x791e180, indexCPS2Sprites_Ryu, 0x01 },
    { L"A-Ism Punch Extra 2", 0x791e180, 0x791e1a0, indexCPS2Sprites_Ryu, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x791e1a0, 0x791e1c0, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x791e1c0, 0x791e1e0, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EVILRYU_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x791e1e0, 0x791e200, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Kick Extra 1", 0x791e200, 0x791e220, indexCPS2Sprites_Ryu, 0x01 },
    { L"A-Ism Kick Extra 2", 0x791e220, 0x791e240, indexCPS2Sprites_Ryu, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x791e240, 0x791e260, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x791e260, 0x791e280, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EVILRYU_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x791e280, 0x791e2a0, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Punch Extra 1", 0x791e2a0, 0x791e2c0, indexCPS2Sprites_Ryu, 0x01 },
    { L"V-Ism Punch Extra 2", 0x791e2c0, 0x791e2e0, indexCPS2Sprites_Ryu, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x791e2e0, 0x791e300, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x791e300, 0x791e320, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EVILRYU_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x791e320, 0x791e340, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Kick Extra 1", 0x791e340, 0x791e360, indexCPS2Sprites_Ryu, 0x01 },
    { L"V-Ism Kick Extra 2", 0x791e360, 0x791e380, indexCPS2Sprites_Ryu, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x791e380, 0x791e3a0, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x791e3a0, 0x791e3c0, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EHONDA_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x7a0b800, 0x7a0b820, indexCPS2Sprites_EHonda, 0x00 },
    { L"X-Ism Punch Extra 1", 0x7a0b820, 0x7a0b840, indexCPS2Sprites_EHonda, 0x01 },
    { L"X-Ism Punch Extra 2", 0x7a0b840, 0x7a0b860, indexCPS2Sprites_EHonda, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x7a0b860, 0x7a0b880, indexCPS2Sprites_EHonda, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x7a0b880, 0x7a0b8a0, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EHONDA_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x7a0b8a0, 0x7a0b8c0, indexCPS2Sprites_EHonda, 0x00 },
    { L"X-Ism Kick Extra 1", 0x7a0b8c0, 0x7a0b8e0, indexCPS2Sprites_EHonda, 0x01 },
    { L"X-Ism Kick Extra 2", 0x7a0b8e0, 0x7a0b900, indexCPS2Sprites_EHonda, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x7a0b900, 0x7a0b920, indexCPS2Sprites_EHonda, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x7a0b920, 0x7a0b940, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EHONDA_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x7a0b940, 0x7a0b960, indexCPS2Sprites_EHonda, 0x00 },
    { L"A-Ism Punch Extra 1", 0x7a0b960, 0x7a0b980, indexCPS2Sprites_EHonda, 0x01 },
    { L"A-Ism Punch Extra 2", 0x7a0b980, 0x7a0b9a0, indexCPS2Sprites_EHonda, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x7a0b9a0, 0x7a0b9c0, indexCPS2Sprites_EHonda, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x7a0b9c0, 0x7a0b9e0, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EHONDA_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x7a0b9e0, 0x7a0ba00, indexCPS2Sprites_EHonda, 0x00 },
    { L"A-Ism Kick Extra 1", 0x7a0ba00, 0x7a0ba20, indexCPS2Sprites_EHonda, 0x01 },
    { L"A-Ism Kick Extra 2", 0x7a0ba20, 0x7a0ba40, indexCPS2Sprites_EHonda, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x7a0ba40, 0x7a0ba60, indexCPS2Sprites_EHonda, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x7a0ba60, 0x7a0ba80, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EHONDA_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x7a0ba80, 0x7a0baa0, indexCPS2Sprites_EHonda, 0x00 },
    { L"V-Ism Punch Extra 1", 0x7a0baa0, 0x7a0bac0, indexCPS2Sprites_EHonda, 0x01 },
    { L"V-Ism Punch Extra 2", 0x7a0bac0, 0x7a0bae0, indexCPS2Sprites_EHonda, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x7a0bae0, 0x7a0bb00, indexCPS2Sprites_EHonda, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x7a0bb00, 0x7a0bb20, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_EHONDA_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x7a0bb20, 0x7a0bb40, indexCPS2Sprites_EHonda, 0x00 },
    { L"V-Ism Kick Extra 1", 0x7a0bb40, 0x7a0bb60, indexCPS2Sprites_EHonda, 0x01 },
    { L"V-Ism Kick Extra 2", 0x7a0bb60, 0x7a0bb80, indexCPS2Sprites_EHonda, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x7a0bb80, 0x7a0bba0, indexCPS2Sprites_EHonda, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x7a0bba0, 0x7a0bbc0, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BLANKA_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x7b8a800, 0x7b8a820, indexCPS2Sprites_Blanka, 0x00 },
    { L"X-Ism Punch Extra 1", 0x7b8a820, 0x7b8a840, indexCPS2Sprites_Blanka, 0x01 },
    { L"X-Ism Punch Extra 2", 0x7b8a840, 0x7b8a860, indexCPS2Sprites_Blanka, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x7b8a860, 0x7b8a880, indexCPS2Sprites_Blanka, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x7b8a880, 0x7b8a8a0, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BLANKA_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x7b8a8a0, 0x7b8a8c0, indexCPS2Sprites_Blanka, 0x00 },
    { L"X-Ism Kick Extra 1", 0x7b8a8c0, 0x7b8a8e0, indexCPS2Sprites_Blanka, 0x01 },
    { L"X-Ism Kick Extra 2", 0x7b8a8e0, 0x7b8a900, indexCPS2Sprites_Blanka, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x7b8a900, 0x7b8a920, indexCPS2Sprites_Blanka, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x7b8a920, 0x7b8a940, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BLANKA_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x7b8a940, 0x7b8a960, indexCPS2Sprites_Blanka, 0x00 },
    { L"A-Ism Punch Extra 1", 0x7b8a960, 0x7b8a980, indexCPS2Sprites_Blanka, 0x01 },
    { L"A-Ism Punch Extra 2", 0x7b8a980, 0x7b8a9a0, indexCPS2Sprites_Blanka, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x7b8a9a0, 0x7b8a9c0, indexCPS2Sprites_Blanka, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x7b8a9c0, 0x7b8a9e0, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BLANKA_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x7b8a9e0, 0x7b8aa00, indexCPS2Sprites_Blanka, 0x00 },
    { L"A-Ism Kick Extra 1", 0x7b8aa00, 0x7b8aa20, indexCPS2Sprites_Blanka, 0x01 },
    { L"A-Ism Kick Extra 2", 0x7b8aa20, 0x7b8aa40, indexCPS2Sprites_Blanka, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x7b8aa40, 0x7b8aa60, indexCPS2Sprites_Blanka, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x7b8aa60, 0x7b8aa80, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BLANKA_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x7b8aa80, 0x7b8aaa0, indexCPS2Sprites_Blanka, 0x00 },
    { L"V-Ism Punch Extra 1", 0x7b8aaa0, 0x7b8aac0, indexCPS2Sprites_Blanka, 0x01 },
    { L"V-Ism Punch Extra 2", 0x7b8aac0, 0x7b8aae0, indexCPS2Sprites_Blanka, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x7b8aae0, 0x7b8ab00, indexCPS2Sprites_Blanka, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x7b8ab00, 0x7b8ab20, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BLANKA_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x7b8ab20, 0x7b8ab40, indexCPS2Sprites_Blanka, 0x00 },
    { L"V-Ism Kick Extra 1", 0x7b8ab40, 0x7b8ab60, indexCPS2Sprites_Blanka, 0x01 },
    { L"V-Ism Kick Extra 2", 0x7b8ab60, 0x7b8ab80, indexCPS2Sprites_Blanka, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x7b8ab80, 0x7b8aba0, indexCPS2Sprites_Blanka, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x7b8aba0, 0x7b8abc0, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RMIKA_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x7d0e800, 0x7d0e820, indexCPS2Sprites_RMika, 0x00 },
    { L"X-Ism Punch Extra 1", 0x7d0e820, 0x7d0e840, indexCPS2Sprites_RMika, 0x01 },
    { L"X-Ism Punch Extra 2", 0x7d0e840, 0x7d0e860, indexCPS2Sprites_RMika, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x7d0e860, 0x7d0e880, indexCPS2Sprites_RMika, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x7d0e880, 0x7d0e8a0, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RMIKA_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x7d0e8a0, 0x7d0e8c0, indexCPS2Sprites_RMika, 0x00 },
    { L"X-Ism Kick Extra 1", 0x7d0e8c0, 0x7d0e8e0, indexCPS2Sprites_RMika, 0x01 },
    { L"X-Ism Kick Extra 2", 0x7d0e8e0, 0x7d0e900, indexCPS2Sprites_RMika, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x7d0e900, 0x7d0e920, indexCPS2Sprites_RMika, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x7d0e920, 0x7d0e940, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RMIKA_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x7d0e940, 0x7d0e960, indexCPS2Sprites_RMika, 0x00 },
    { L"A-Ism Punch Extra 1", 0x7d0e960, 0x7d0e980, indexCPS2Sprites_RMika, 0x01 },
    { L"A-Ism Punch Extra 2", 0x7d0e980, 0x7d0e9a0, indexCPS2Sprites_RMika, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x7d0e9a0, 0x7d0e9c0, indexCPS2Sprites_RMika, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x7d0e9c0, 0x7d0e9e0, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RMIKA_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x7d0e9e0, 0x7d0ea00, indexCPS2Sprites_RMika, 0x00 },
    { L"A-Ism Kick Extra 1", 0x7d0ea00, 0x7d0ea20, indexCPS2Sprites_RMika, 0x01 },
    { L"A-Ism Kick Extra 2", 0x7d0ea20, 0x7d0ea40, indexCPS2Sprites_RMika, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x7d0ea40, 0x7d0ea60, indexCPS2Sprites_RMika, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x7d0ea60, 0x7d0ea80, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RMIKA_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x7d0ea80, 0x7d0eaa0, indexCPS2Sprites_RMika, 0x00 },
    { L"V-Ism Punch Extra 1", 0x7d0eaa0, 0x7d0eac0, indexCPS2Sprites_RMika, 0x01 },
    { L"V-Ism Punch Extra 2", 0x7d0eac0, 0x7d0eae0, indexCPS2Sprites_RMika, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x7d0eae0, 0x7d0eb00, indexCPS2Sprites_RMika, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x7d0eb00, 0x7d0eb20, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_RMIKA_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x7d0eb20, 0x7d0eb40, indexCPS2Sprites_RMika, 0x00 },
    { L"V-Ism Kick Extra 1", 0x7d0eb40, 0x7d0eb60, indexCPS2Sprites_RMika, 0x01 },
    { L"V-Ism Kick Extra 2", 0x7d0eb60, 0x7d0eb80, indexCPS2Sprites_RMika, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x7d0eb80, 0x7d0eba0, indexCPS2Sprites_RMika, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x7d0eba0, 0x7d0ebc0, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CODY_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x7e78000, 0x7e78020, indexCPS2Sprites_Cody, 0x00 },
    { L"X-Ism Punch Extra 1", 0x7e78020, 0x7e78040, indexCPS2Sprites_Cody, 0x01 },
    { L"X-Ism Punch Extra 2", 0x7e78040, 0x7e78060, indexCPS2Sprites_Cody, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x7e78060, 0x7e78080, indexCPS2Sprites_Cody, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x7e78080, 0x7e780a0, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CODY_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x7e780a0, 0x7e780c0, indexCPS2Sprites_Cody, 0x00 },
    { L"X-Ism Kick Extra 1", 0x7e780c0, 0x7e780e0, indexCPS2Sprites_Cody, 0x01 },
    { L"X-Ism Kick Extra 2", 0x7e780e0, 0x7e78100, indexCPS2Sprites_Cody, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x7e78100, 0x7e78120, indexCPS2Sprites_Cody, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x7e78120, 0x7e78140, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CODY_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x7e78140, 0x7e78160, indexCPS2Sprites_Cody, 0x00 },
    { L"A-Ism Punch Extra 1", 0x7e78160, 0x7e78180, indexCPS2Sprites_Cody, 0x01 },
    { L"A-Ism Punch Extra 2", 0x7e78180, 0x7e781a0, indexCPS2Sprites_Cody, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x7e781a0, 0x7e781c0, indexCPS2Sprites_Cody, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x7e781c0, 0x7e781e0, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CODY_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x7e781e0, 0x7e78200, indexCPS2Sprites_Cody, 0x00 },
    { L"A-Ism Kick Extra 1", 0x7e78200, 0x7e78220, indexCPS2Sprites_Cody, 0x01 },
    { L"A-Ism Kick Extra 2", 0x7e78220, 0x7e78240, indexCPS2Sprites_Cody, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x7e78240, 0x7e78260, indexCPS2Sprites_Cody, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x7e78260, 0x7e78280, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CODY_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x7e78280, 0x7e782a0, indexCPS2Sprites_Cody, 0x00 },
    { L"V-Ism Punch Extra 1", 0x7e782a0, 0x7e782c0, indexCPS2Sprites_Cody, 0x01 },
    { L"V-Ism Punch Extra 2", 0x7e782c0, 0x7e782e0, indexCPS2Sprites_Cody, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x7e782e0, 0x7e78300, indexCPS2Sprites_Cody, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x7e78300, 0x7e78320, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_CODY_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x7e78320, 0x7e78340, indexCPS2Sprites_Cody, 0x00 },
    { L"V-Ism Kick Extra 1", 0x7e78340, 0x7e78360, indexCPS2Sprites_Cody, 0x01 },
    { L"V-Ism Kick Extra 2", 0x7e78360, 0x7e78380, indexCPS2Sprites_Cody, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x7e78380, 0x7e783a0, indexCPS2Sprites_Cody, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x7e783a0, 0x7e783c0, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_VEGA_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x7fb4000, 0x7fb4020, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"X-Ism Punch Extra 1", 0x7fb4020, 0x7fb4040, indexCPS2Sprites_Vega, 0x01, &pairNext },
    { L"X-Ism Punch Extra 2", 0x7fb4040, 0x7fb4060, indexCPS2Sprites_Vega, 0x02, &pairNext },
    { L"X-Ism Punch Super Trail Light", 0x7fb4060, 0x7fb4080, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"X-Ism Punch Super Trail Dark", 0x7fb4080, 0x7fb40a0, indexCPS2Sprites_Vega, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_VEGA_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x7fb40a0, 0x7fb40c0, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"X-Ism Kick Extra 1", 0x7fb40c0, 0x7fb40e0, indexCPS2Sprites_Vega, 0x01, &pairNext },
    { L"X-Ism Kick Extra 2", 0x7fb40e0, 0x7fb4100, indexCPS2Sprites_Vega, 0x02, &pairNext },
    { L"X-Ism Kick Super Trail Light", 0x7fb4100, 0x7fb4120, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"X-Ism Kick Super Trail Dark", 0x7fb4120, 0x7fb4140, indexCPS2Sprites_Vega, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_VEGA_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x7fb4140, 0x7fb4160, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"A-Ism Punch Extra 1", 0x7fb4160, 0x7fb4180, indexCPS2Sprites_Vega, 0x01, &pairNext },
    { L"A-Ism Punch Extra 2", 0x7fb4180, 0x7fb41a0, indexCPS2Sprites_Vega, 0x02, &pairNext },
    { L"A-Ism Punch Super Trail Light", 0x7fb41a0, 0x7fb41c0, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"A-Ism Punch Super Trail Dark", 0x7fb41c0, 0x7fb41e0, indexCPS2Sprites_Vega, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_VEGA_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x7fb41e0, 0x7fb4200, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"A-Ism Kick Extra 1", 0x7fb4200, 0x7fb4220, indexCPS2Sprites_Vega, 0x01, &pairNext },
    { L"A-Ism Kick Extra 2", 0x7fb4220, 0x7fb4240, indexCPS2Sprites_Vega, 0x02, &pairNext },
    { L"A-Ism Kick Super Trail Light", 0x7fb4240, 0x7fb4260, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"A-Ism Kick Super Trail Dark", 0x7fb4260, 0x7fb4280, indexCPS2Sprites_Vega, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_VEGA_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x7fb4280, 0x7fb42a0, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"V-Ism Punch Extra 1", 0x7fb42a0, 0x7fb42c0, indexCPS2Sprites_Vega, 0x01, &pairNext },
    { L"V-Ism Punch Extra 2", 0x7fb42c0, 0x7fb42e0, indexCPS2Sprites_Vega, 0x02, &pairNext },
    { L"V-Ism Punch Super Trail Light", 0x7fb42e0, 0x7fb4300, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"V-Ism Punch Super Trail Dark", 0x7fb4300, 0x7fb4320, indexCPS2Sprites_Vega, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_VEGA_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x7fb4320, 0x7fb4340, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"V-Ism Kick Extra 1", 0x7fb4340, 0x7fb4360, indexCPS2Sprites_Vega, 0x01, &pairNext },
    { L"V-Ism Kick Extra 2", 0x7fb4360, 0x7fb4380, indexCPS2Sprites_Vega, 0x02, &pairNext },
    { L"V-Ism Kick Super Trail Light", 0x7fb4380, 0x7fb43a0, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"V-Ism Kick Super Trail Dark", 0x7fb43a0, 0x7fb43c0, indexCPS2Sprites_Vega, 0x00, &pairNext },
};

const sGame_PaletteDataset SFZ3U_A_KARIN_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x80eb000, 0x80eb020, indexCPS2Sprites_Karin, 0x00 },
    { L"X-Ism Punch Extra 1", 0x80eb020, 0x80eb040, indexCPS2Sprites_Karin, 0x01 },
    { L"X-Ism Punch Extra 2", 0x80eb040, 0x80eb060, indexCPS2Sprites_Karin, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x80eb060, 0x80eb080, indexCPS2Sprites_Karin, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x80eb080, 0x80eb0a0, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KARIN_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x80eb0a0, 0x80eb0c0, indexCPS2Sprites_Karin, 0x00 },
    { L"X-Ism Kick Extra 1", 0x80eb0c0, 0x80eb0e0, indexCPS2Sprites_Karin, 0x01 },
    { L"X-Ism Kick Extra 2", 0x80eb0e0, 0x80eb100, indexCPS2Sprites_Karin, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x80eb100, 0x80eb120, indexCPS2Sprites_Karin, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x80eb120, 0x80eb140, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KARIN_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x80eb140, 0x80eb160, indexCPS2Sprites_Karin, 0x00 },
    { L"A-Ism Punch Extra 1", 0x80eb160, 0x80eb180, indexCPS2Sprites_Karin, 0x01 },
    { L"A-Ism Punch Extra 2", 0x80eb180, 0x80eb1a0, indexCPS2Sprites_Karin, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x80eb1a0, 0x80eb1c0, indexCPS2Sprites_Karin, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x80eb1c0, 0x80eb1e0, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KARIN_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x80eb1e0, 0x80eb200, indexCPS2Sprites_Karin, 0x00 },
    { L"A-Ism Kick Extra 1", 0x80eb200, 0x80eb220, indexCPS2Sprites_Karin, 0x01 },
    { L"A-Ism Kick Extra 2", 0x80eb220, 0x80eb240, indexCPS2Sprites_Karin, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x80eb240, 0x80eb260, indexCPS2Sprites_Karin, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x80eb260, 0x80eb280, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KARIN_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x80eb280, 0x80eb2a0, indexCPS2Sprites_Karin, 0x00 },
    { L"V-Ism Punch Extra 1", 0x80eb2a0, 0x80eb2c0, indexCPS2Sprites_Karin, 0x01 },
    { L"V-Ism Punch Extra 2", 0x80eb2c0, 0x80eb2e0, indexCPS2Sprites_Karin, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x80eb2e0, 0x80eb300, indexCPS2Sprites_Karin, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x80eb300, 0x80eb320, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_KARIN_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x80eb320, 0x80eb340, indexCPS2Sprites_Karin, 0x00 },
    { L"V-Ism Kick Extra 1", 0x80eb340, 0x80eb360, indexCPS2Sprites_Karin, 0x01 },
    { L"V-Ism Kick Extra 2", 0x80eb360, 0x80eb380, indexCPS2Sprites_Karin, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x80eb380, 0x80eb3a0, indexCPS2Sprites_Karin, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x80eb3a0, 0x80eb3c0, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JULI_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x820f800, 0x820f820, indexCPS2Sprites_Juli, 0x00 },
    { L"X-Ism Punch Extra 1", 0x820f820, 0x820f840, indexCPS2Sprites_Juli, 0x01 },
    { L"X-Ism Punch Extra 2", 0x820f840, 0x820f860, indexCPS2Sprites_Juli, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x820f860, 0x820f880, indexCPS2Sprites_Juli, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x820f880, 0x820f8a0, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JULI_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x820f8a0, 0x820f8c0, indexCPS2Sprites_Juli, 0x00 },
    { L"X-Ism Kick Extra 1", 0x820f8c0, 0x820f8e0, indexCPS2Sprites_Juli, 0x01 },
    { L"X-Ism Kick Extra 2", 0x820f8e0, 0x820f900, indexCPS2Sprites_Juli, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x820f900, 0x820f920, indexCPS2Sprites_Juli, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x820f920, 0x820f940, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JULI_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x820f940, 0x820f960, indexCPS2Sprites_Juli, 0x00 },
    { L"A-Ism Punch Extra 1", 0x820f960, 0x820f980, indexCPS2Sprites_Juli, 0x01 },
    { L"A-Ism Punch Extra 2", 0x820f980, 0x820f9a0, indexCPS2Sprites_Juli, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x820f9a0, 0x820f9c0, indexCPS2Sprites_Juli, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x820f9c0, 0x820f9e0, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JULI_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x820f9e0, 0x820fa00, indexCPS2Sprites_Juli, 0x00 },
    { L"A-Ism Kick Extra 1", 0x820fa00, 0x820fa20, indexCPS2Sprites_Juli, 0x01 },
    { L"A-Ism Kick Extra 2", 0x820fa20, 0x820fa40, indexCPS2Sprites_Juli, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x820fa40, 0x820fa60, indexCPS2Sprites_Juli, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x820fa60, 0x820fa80, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JULI_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x820fa80, 0x820faa0, indexCPS2Sprites_Juli, 0x00 },
    { L"V-Ism Punch Extra 1", 0x820faa0, 0x820fac0, indexCPS2Sprites_Juli, 0x01 },
    { L"V-Ism Punch Extra 2", 0x820fac0, 0x820fae0, indexCPS2Sprites_Juli, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x820fae0, 0x820fb00, indexCPS2Sprites_Juli, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x820fb00, 0x820fb20, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JULI_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x820fb20, 0x820fb40, indexCPS2Sprites_Juli, 0x00 },
    { L"V-Ism Kick Extra 1", 0x820fb40, 0x820fb60, indexCPS2Sprites_Juli, 0x01 },
    { L"V-Ism Kick Extra 2", 0x820fb60, 0x820fb80, indexCPS2Sprites_Juli, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x820fb80, 0x820fba0, indexCPS2Sprites_Juli, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x820fba0, 0x820fbc0, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JUNI_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x831e000, 0x831e020, indexCPS2Sprites_Juni, 0x00 },
    { L"X-Ism Punch Extra 1", 0x831e020, 0x831e040, indexCPS2Sprites_Juni, 0x01 },
    { L"X-Ism Punch Extra 2", 0x831e040, 0x831e060, indexCPS2Sprites_Juni, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x831e060, 0x831e080, indexCPS2Sprites_Juni, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x831e080, 0x831e0a0, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JUNI_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x831e0a0, 0x831e0c0, indexCPS2Sprites_Juni, 0x00 },
    { L"X-Ism Kick Extra 1", 0x831e0c0, 0x831e0e0, indexCPS2Sprites_Juni, 0x01 },
    { L"X-Ism Kick Extra 2", 0x831e0e0, 0x831e100, indexCPS2Sprites_Juni, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x831e100, 0x831e120, indexCPS2Sprites_Juni, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x831e120, 0x831e140, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JUNI_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x831e140, 0x831e160, indexCPS2Sprites_Juni, 0x00 },
    { L"A-Ism Punch Extra 1", 0x831e160, 0x831e180, indexCPS2Sprites_Juni, 0x01 },
    { L"A-Ism Punch Extra 2", 0x831e180, 0x831e1a0, indexCPS2Sprites_Juni, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x831e1a0, 0x831e1c0, indexCPS2Sprites_Juni, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x831e1c0, 0x831e1e0, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JUNI_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x831e1e0, 0x831e200, indexCPS2Sprites_Juni, 0x00 },
    { L"A-Ism Kick Extra 1", 0x831e200, 0x831e220, indexCPS2Sprites_Juni, 0x01 },
    { L"A-Ism Kick Extra 2", 0x831e220, 0x831e240, indexCPS2Sprites_Juni, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x831e240, 0x831e260, indexCPS2Sprites_Juni, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x831e260, 0x831e280, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JUNI_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x831e280, 0x831e2a0, indexCPS2Sprites_Juni, 0x00 },
    { L"V-Ism Punch Extra 1", 0x831e2a0, 0x831e2c0, indexCPS2Sprites_Juni, 0x01 },
    { L"V-Ism Punch Extra 2", 0x831e2c0, 0x831e2e0, indexCPS2Sprites_Juni, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x831e2e0, 0x831e300, indexCPS2Sprites_Juni, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x831e300, 0x831e320, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_JUNI_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x831e320, 0x831e340, indexCPS2Sprites_Juni, 0x00 },
    { L"V-Ism Kick Extra 1", 0x831e340, 0x831e360, indexCPS2Sprites_Juni, 0x01 },
    { L"V-Ism Kick Extra 2", 0x831e360, 0x831e380, indexCPS2Sprites_Juni, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x831e380, 0x831e3a0, indexCPS2Sprites_Juni, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x831e3a0, 0x831e3c0, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUILE_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x8444000, 0x8444020, indexCPS2Sprites_Guile, 0x00 },
    { L"X-Ism Punch Extra 1", 0x8444020, 0x8444040, indexCPS2Sprites_Guile, 0x01 },
    { L"X-Ism Punch Extra 2", 0x8444040, 0x8444060, indexCPS2Sprites_Guile, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x8444060, 0x8444080, indexCPS2Sprites_Guile, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x8444080, 0x84440a0, indexCPS2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUILE_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x84440a0, 0x84440c0, indexCPS2Sprites_Guile, 0x00 },
    { L"X-Ism Kick Extra 1", 0x84440c0, 0x84440e0, indexCPS2Sprites_Guile, 0x01 },
    { L"X-Ism Kick Extra 2", 0x84440e0, 0x8444100, indexCPS2Sprites_Guile, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x8444100, 0x8444120, indexCPS2Sprites_Guile, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x8444120, 0x8444140, indexCPS2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUILE_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x8444140, 0x8444160, indexCPS2Sprites_Guile, 0x00 },
    { L"A-Ism Punch Extra 1", 0x8444160, 0x8444180, indexCPS2Sprites_Guile, 0x01 },
    { L"A-Ism Punch Extra 2", 0x8444180, 0x84441a0, indexCPS2Sprites_Guile, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x84441a0, 0x84441c0, indexCPS2Sprites_Guile, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x84441c0, 0x84441e0, indexCPS2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUILE_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x84441e0, 0x8444200, indexCPS2Sprites_Guile, 0x00 },
    { L"A-Ism Kick Extra 1", 0x8444200, 0x8444220, indexCPS2Sprites_Guile, 0x01 },
    { L"A-Ism Kick Extra 2", 0x8444220, 0x8444240, indexCPS2Sprites_Guile, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x8444240, 0x8444260, indexCPS2Sprites_Guile, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x8444260, 0x8444280, indexCPS2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUILE_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x8444280, 0x84442a0, indexCPS2Sprites_Guile, 0x00 },
    { L"V-Ism Punch Extra 1", 0x84442a0, 0x84442c0, indexCPS2Sprites_Guile, 0x01 },
    { L"V-Ism Punch Extra 2", 0x84442c0, 0x84442e0, indexCPS2Sprites_Guile, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x84442e0, 0x8444300, indexCPS2Sprites_Guile, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x8444300, 0x8444320, indexCPS2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_GUILE_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x8444320, 0x8444340, indexCPS2Sprites_Guile, 0x00 },
    { L"V-Ism Kick Extra 1", 0x8444340, 0x8444360, indexCPS2Sprites_Guile, 0x01 },
    { L"V-Ism Kick Extra 2", 0x8444360, 0x8444380, indexCPS2Sprites_Guile, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x8444380, 0x84443a0, indexCPS2Sprites_Guile, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x84443a0, 0x84443c0, indexCPS2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_FEILONG_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x8562000, 0x8562020, indexCPS2Sprites_FeiLong, 0x00 },
    { L"X-Ism Punch Extra 1", 0x8562020, 0x8562040, indexCPS2Sprites_FeiLong, 0x01 },
    { L"X-Ism Punch Extra 2", 0x8562040, 0x8562060, indexCPS2Sprites_FeiLong, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x8562060, 0x8562080, indexCPS2Sprites_FeiLong, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x8562080, 0x85620a0, indexCPS2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_FEILONG_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x85620a0, 0x85620c0, indexCPS2Sprites_FeiLong, 0x00 },
    { L"X-Ism Kick Extra 1", 0x85620c0, 0x85620e0, indexCPS2Sprites_FeiLong, 0x01 },
    { L"X-Ism Kick Extra 2", 0x85620e0, 0x8562100, indexCPS2Sprites_FeiLong, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x8562100, 0x8562120, indexCPS2Sprites_FeiLong, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x8562120, 0x8562140, indexCPS2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_FEILONG_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x8562140, 0x8562160, indexCPS2Sprites_FeiLong, 0x00 },
    { L"A-Ism Punch Extra 1", 0x8562160, 0x8562180, indexCPS2Sprites_FeiLong, 0x01 },
    { L"A-Ism Punch Extra 2", 0x8562180, 0x85621a0, indexCPS2Sprites_FeiLong, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x85621a0, 0x85621c0, indexCPS2Sprites_FeiLong, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x85621c0, 0x85621e0, indexCPS2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_FEILONG_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x85621e0, 0x8562200, indexCPS2Sprites_FeiLong, 0x00 },
    { L"A-Ism Kick Extra 1", 0x8562200, 0x8562220, indexCPS2Sprites_FeiLong, 0x01 },
    { L"A-Ism Kick Extra 2", 0x8562220, 0x8562240, indexCPS2Sprites_FeiLong, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x8562240, 0x8562260, indexCPS2Sprites_FeiLong, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x8562260, 0x8562280, indexCPS2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_FEILONG_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x8562280, 0x85622a0, indexCPS2Sprites_FeiLong, 0x00 },
    { L"V-Ism Punch Extra 1", 0x85622a0, 0x85622c0, indexCPS2Sprites_FeiLong, 0x01 },
    { L"V-Ism Punch Extra 2", 0x85622c0, 0x85622e0, indexCPS2Sprites_FeiLong, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x85622e0, 0x8562300, indexCPS2Sprites_FeiLong, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x8562300, 0x8562320, indexCPS2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_FEILONG_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x8562320, 0x8562340, indexCPS2Sprites_FeiLong, 0x00 },
    { L"V-Ism Kick Extra 1", 0x8562340, 0x8562360, indexCPS2Sprites_FeiLong, 0x01 },
    { L"V-Ism Kick Extra 2", 0x8562360, 0x8562380, indexCPS2Sprites_FeiLong, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x8562380, 0x85623a0, indexCPS2Sprites_FeiLong, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x85623a0, 0x85623c0, indexCPS2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DEEJAY_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x8660000, 0x8660020, indexCPS2Sprites_DeeJay, 0x00 },
    { L"X-Ism Punch Extra 1", 0x8660020, 0x8660040, indexCPS2Sprites_DeeJay, 0x01 },
    { L"X-Ism Punch Extra 2", 0x8660040, 0x8660060, indexCPS2Sprites_DeeJay, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x8660060, 0x8660080, indexCPS2Sprites_DeeJay, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x8660080, 0x86600a0, indexCPS2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DEEJAY_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x86600a0, 0x86600c0, indexCPS2Sprites_DeeJay, 0x00 },
    { L"X-Ism Kick Extra 1", 0x86600c0, 0x86600e0, indexCPS2Sprites_DeeJay, 0x01 },
    { L"X-Ism Kick Extra 2", 0x86600e0, 0x8660100, indexCPS2Sprites_DeeJay, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x8660100, 0x8660120, indexCPS2Sprites_DeeJay, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x8660120, 0x8660140, indexCPS2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DEEJAY_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x8660140, 0x8660160, indexCPS2Sprites_DeeJay, 0x00 },
    { L"A-Ism Punch Extra 1", 0x8660160, 0x8660180, indexCPS2Sprites_DeeJay, 0x01 },
    { L"A-Ism Punch Extra 2", 0x8660180, 0x86601a0, indexCPS2Sprites_DeeJay, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x86601a0, 0x86601c0, indexCPS2Sprites_DeeJay, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x86601c0, 0x86601e0, indexCPS2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DEEJAY_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x86601e0, 0x8660200, indexCPS2Sprites_DeeJay, 0x00 },
    { L"A-Ism Kick Extra 1", 0x8660200, 0x8660220, indexCPS2Sprites_DeeJay, 0x01 },
    { L"A-Ism Kick Extra 2", 0x8660220, 0x8660240, indexCPS2Sprites_DeeJay, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x8660240, 0x8660260, indexCPS2Sprites_DeeJay, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x8660260, 0x8660280, indexCPS2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DEEJAY_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x8660280, 0x86602a0, indexCPS2Sprites_DeeJay, 0x00 },
    { L"V-Ism Punch Extra 1", 0x86602a0, 0x86602c0, indexCPS2Sprites_DeeJay, 0x01 },
    { L"V-Ism Punch Extra 2", 0x86602c0, 0x86602e0, indexCPS2Sprites_DeeJay, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x86602e0, 0x8660300, indexCPS2Sprites_DeeJay, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x8660300, 0x8660320, indexCPS2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_DEEJAY_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x8660320, 0x8660340, indexCPS2Sprites_DeeJay, 0x00 },
    { L"V-Ism Kick Extra 1", 0x8660340, 0x8660360, indexCPS2Sprites_DeeJay, 0x01 },
    { L"V-Ism Kick Extra 2", 0x8660360, 0x8660380, indexCPS2Sprites_DeeJay, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x8660380, 0x86603a0, indexCPS2Sprites_DeeJay, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x86603a0, 0x86603c0, indexCPS2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_THAWK_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x87b6800, 0x87b6820, indexCPS2Sprites_THawk, 0x00 },
    { L"X-Ism Punch Extra 1", 0x87b6820, 0x87b6840, indexCPS2Sprites_THawk, 0x01 },
    { L"X-Ism Punch Extra 2", 0x87b6840, 0x87b6860, indexCPS2Sprites_THawk, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x87b6860, 0x87b6880, indexCPS2Sprites_THawk, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x87b6880, 0x87b68a0, indexCPS2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_THAWK_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x87b68a0, 0x87b68c0, indexCPS2Sprites_THawk, 0x00 },
    { L"X-Ism Kick Extra 1", 0x87b68c0, 0x87b68e0, indexCPS2Sprites_THawk, 0x01 },
    { L"X-Ism Kick Extra 2", 0x87b68e0, 0x87b6900, indexCPS2Sprites_THawk, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x87b6900, 0x87b6920, indexCPS2Sprites_THawk, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x87b6920, 0x87b6940, indexCPS2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_THAWK_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x87b6940, 0x87b6960, indexCPS2Sprites_THawk, 0x00 },
    { L"A-Ism Punch Extra 1", 0x87b6960, 0x87b6980, indexCPS2Sprites_THawk, 0x01 },
    { L"A-Ism Punch Extra 2", 0x87b6980, 0x87b69a0, indexCPS2Sprites_THawk, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x87b69a0, 0x87b69c0, indexCPS2Sprites_THawk, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x87b69c0, 0x87b69e0, indexCPS2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_THAWK_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x87b69e0, 0x87b6a00, indexCPS2Sprites_THawk, 0x00 },
    { L"A-Ism Kick Extra 1", 0x87b6a00, 0x87b6a20, indexCPS2Sprites_THawk, 0x01 },
    { L"A-Ism Kick Extra 2", 0x87b6a20, 0x87b6a40, indexCPS2Sprites_THawk, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x87b6a40, 0x87b6a60, indexCPS2Sprites_THawk, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x87b6a60, 0x87b6a80, indexCPS2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_THAWK_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x87b6a80, 0x87b6aa0, indexCPS2Sprites_THawk, 0x00 },
    { L"V-Ism Punch Extra 1", 0x87b6aa0, 0x87b6ac0, indexCPS2Sprites_THawk, 0x01 },
    { L"V-Ism Punch Extra 2", 0x87b6ac0, 0x87b6ae0, indexCPS2Sprites_THawk, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x87b6ae0, 0x87b6b00, indexCPS2Sprites_THawk, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x87b6b00, 0x87b6b20, indexCPS2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_THAWK_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x87b6b20, 0x87b6b40, indexCPS2Sprites_THawk, 0x00 },
    { L"V-Ism Kick Extra 1", 0x87b6b40, 0x87b6b60, indexCPS2Sprites_THawk, 0x01 },
    { L"V-Ism Kick Extra 2", 0x87b6b60, 0x87b6b80, indexCPS2Sprites_THawk, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x87b6b80, 0x87b6ba0, indexCPS2Sprites_THawk, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x87b6ba0, 0x87b6bc0, indexCPS2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SHINAKUMA_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x627b000, 0x627b020, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Punch Extra 1", 0x627b020, 0x627b040, indexCPS2Sprites_Akuma, 0x01 },
    { L"X-Ism Punch Extra 2", 0x627b040, 0x627b060, indexCPS2Sprites_Akuma, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x627b060, 0x627b080, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x627b080, 0x627b0a0, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SHINAKUMA_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x627b0a0, 0x627b0c0, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Kick Extra 1", 0x627b0c0, 0x627b0e0, indexCPS2Sprites_Akuma, 0x01 },
    { L"X-Ism Kick Extra 2", 0x627b0e0, 0x627b100, indexCPS2Sprites_Akuma, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x627b100, 0x627b120, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x627b120, 0x627b140, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SHINAKUMA_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x627b140, 0x627b160, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Punch Extra 1", 0x627b160, 0x627b180, indexCPS2Sprites_Akuma, 0x01 },
    { L"A-Ism Punch Extra 2", 0x627b180, 0x627b1a0, indexCPS2Sprites_Akuma, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x627b1a0, 0x627b1c0, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x627b1c0, 0x627b1e0, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SHINAKUMA_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x627b1e0, 0x627b200, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Kick Extra 1", 0x627b200, 0x627b220, indexCPS2Sprites_Akuma, 0x01 },
    { L"A-Ism Kick Extra 2", 0x627b220, 0x627b240, indexCPS2Sprites_Akuma, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x627b240, 0x627b260, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x627b260, 0x627b280, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SHINAKUMA_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x627b280, 0x627b2a0, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Punch Extra 1", 0x627b2a0, 0x627b2c0, indexCPS2Sprites_Akuma, 0x01 },
    { L"V-Ism Punch Extra 2", 0x627b2c0, 0x627b2e0, indexCPS2Sprites_Akuma, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x627b2e0, 0x627b300, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x627b300, 0x627b320, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_SHINAKUMA_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x627b320, 0x627b340, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Kick Extra 1", 0x627b340, 0x627b360, indexCPS2Sprites_Akuma, 0x01 },
    { L"V-Ism Kick Extra 2", 0x627b360, 0x627b380, indexCPS2Sprites_Akuma, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x627b380, 0x627b3a0, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x627b3a0, 0x627b3c0, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROGFINISHED_PALETTES_XISMPUNCH[] =
{
    { L"X-Ism Punch", 0x76ec000, 0x76ec020, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Punch Extra 1", 0x76ec020, 0x76ec040, indexCPS2Sprites_Balrog, 0x01 },
    { L"X-Ism Punch Extra 2", 0x76ec040, 0x76ec060, indexCPS2Sprites_Balrog, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x76ec060, 0x76ec080, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x76ec080, 0x76ec0a0, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROGFINISHED_PALETTES_XISMKICK[] =
{
    { L"X-Ism Kick", 0x76ec0a0, 0x76ec0c0, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Kick Extra 1", 0x76ec0c0, 0x76ec0e0, indexCPS2Sprites_Balrog, 0x01 },
    { L"X-Ism Kick Extra 2", 0x76ec0e0, 0x76ec100, indexCPS2Sprites_Balrog, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x76ec100, 0x76ec120, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x76ec120, 0x76ec140, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROGFINISHED_PALETTES_AISMPUNCH[] =
{
    { L"A-Ism Punch", 0x76ec140, 0x76ec160, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Punch Extra 1", 0x76ec160, 0x76ec180, indexCPS2Sprites_Balrog, 0x01 },
    { L"A-Ism Punch Extra 2", 0x76ec180, 0x76ec1a0, indexCPS2Sprites_Balrog, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x76ec1a0, 0x76ec1c0, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x76ec1c0, 0x76ec1e0, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROGFINISHED_PALETTES_AISMKICK[] =
{
    { L"A-Ism Kick", 0x76ec1e0, 0x76ec200, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Kick Extra 1", 0x76ec200, 0x76ec220, indexCPS2Sprites_Balrog, 0x01 },
    { L"A-Ism Kick Extra 2", 0x76ec220, 0x76ec240, indexCPS2Sprites_Balrog, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x76ec240, 0x76ec260, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x76ec260, 0x76ec280, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROGFINISHED_PALETTES_VISMPUNCH[] =
{
    { L"V-Ism Punch", 0x76ec280, 0x76ec2a0, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Punch Extra 1", 0x76ec2a0, 0x76ec2c0, indexCPS2Sprites_Balrog, 0x01 },
    { L"V-Ism Punch Extra 2", 0x76ec2c0, 0x76ec2e0, indexCPS2Sprites_Balrog, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x76ec2e0, 0x76ec300, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x76ec300, 0x76ec320, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFZ3U_A_BALROGFINISHED_PALETTES_VISMKICK[] =
{
    { L"V-Ism Kick", 0x76ec320, 0x76ec340, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Kick Extra 1", 0x76ec340, 0x76ec360, indexCPS2Sprites_Balrog, 0x01 },
    { L"V-Ism Kick Extra 2", 0x76ec360, 0x76ec380, indexCPS2Sprites_Balrog, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x76ec380, 0x76ec3a0, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x76ec3a0, 0x76ec3c0, indexCPS2Sprites_Balrog, 0x00 },
};

const sDescTreeNode SFZ3U_A_RYU_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RYU_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_RYU_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RYU_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_RYU_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RYU_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_RYU_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RYU_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_RYU_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RYU_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_RYU_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RYU_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_RYU_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_KEN_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KEN_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_KEN_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KEN_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_KEN_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KEN_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_KEN_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KEN_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_KEN_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KEN_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_KEN_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KEN_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_KEN_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_AKUMA_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_AKUMA_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_AKUMA_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_AKUMA_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_AKUMA_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_AKUMA_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_AKUMA_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_AKUMA_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_AKUMA_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_AKUMA_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_AKUMA_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_AKUMA_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_AKUMA_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_CHARLIE_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHARLIE_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_CHARLIE_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHARLIE_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_CHARLIE_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHARLIE_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_CHARLIE_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHARLIE_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_CHARLIE_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHARLIE_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_CHARLIE_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHARLIE_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_CHARLIE_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_CHUNLI_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLI_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_CHUNLI_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLI_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_CHUNLI_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLI_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_CHUNLI_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLI_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_CHUNLI_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLI_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_CHUNLI_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLI_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_CHUNLI_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_ADON_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ADON_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_ADON_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ADON_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_ADON_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ADON_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_ADON_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ADON_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_ADON_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ADON_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_ADON_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ADON_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_ADON_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_SODOM_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOM_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_SODOM_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOM_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_SODOM_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOM_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_SODOM_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOM_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_SODOM_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOM_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_SODOM_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOM_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_SODOM_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_GUY_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUY_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_GUY_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUY_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_GUY_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUY_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_GUY_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUY_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_GUY_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUY_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_GUY_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUY_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_GUY_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_BIRDIE_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BIRDIE_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_BIRDIE_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BIRDIE_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_BIRDIE_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BIRDIE_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_BIRDIE_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BIRDIE_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_BIRDIE_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BIRDIE_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_BIRDIE_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BIRDIE_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_BIRDIE_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_ROSE_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROSE_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_ROSE_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROSE_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_ROSE_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROSE_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_ROSE_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROSE_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_ROSE_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROSE_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_ROSE_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROSE_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_ROSE_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_MBISON_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_MBISON_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_MBISON_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_MBISON_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_MBISON_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_MBISON_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_MBISON_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_MBISON_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_MBISON_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_MBISON_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_MBISON_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_MBISON_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_MBISON_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_SAGAT_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAGAT_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_SAGAT_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAGAT_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_SAGAT_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAGAT_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_SAGAT_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAGAT_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_SAGAT_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAGAT_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_SAGAT_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAGAT_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_SAGAT_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_DAN_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DAN_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_DAN_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DAN_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_DAN_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DAN_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_DAN_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DAN_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_DAN_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DAN_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_DAN_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DAN_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_DAN_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_SAKURA_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAKURA_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_SAKURA_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAKURA_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_SAKURA_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAKURA_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_SAKURA_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAKURA_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_SAKURA_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAKURA_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_SAKURA_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAKURA_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_SAKURA_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_ROLENTO_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROLENTO_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_ROLENTO_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROLENTO_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_ROLENTO_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROLENTO_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_ROLENTO_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROLENTO_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_ROLENTO_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROLENTO_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_ROLENTO_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROLENTO_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_ROLENTO_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_DHALSIM_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DHALSIM_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_DHALSIM_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DHALSIM_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_DHALSIM_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DHALSIM_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_DHALSIM_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DHALSIM_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_DHALSIM_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DHALSIM_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_DHALSIM_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DHALSIM_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_DHALSIM_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_ZANGIEF_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ZANGIEF_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_ZANGIEF_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ZANGIEF_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_ZANGIEF_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ZANGIEF_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_ZANGIEF_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ZANGIEF_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_ZANGIEF_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ZANGIEF_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_ZANGIEF_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ZANGIEF_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_ZANGIEF_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_GEN_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GEN_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_GEN_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GEN_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_GEN_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GEN_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_GEN_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GEN_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_GEN_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GEN_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_GEN_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GEN_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_GEN_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_CHUNLIXISM_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLIXISM_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_CHUNLIXISM_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLIXISM_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_CHUNLIXISM_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLIXISM_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_CHUNLIXISM_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLIXISM_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_CHUNLIXISM_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLIXISM_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_CHUNLIXISM_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLIXISM_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_CHUNLIXISM_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_GENCRANESTANCE_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GENCRANESTANCE_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_GENCRANESTANCE_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GENCRANESTANCE_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_GENCRANESTANCE_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GENCRANESTANCE_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_GENCRANESTANCE_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GENCRANESTANCE_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_GENCRANESTANCE_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GENCRANESTANCE_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_GENCRANESTANCE_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GENCRANESTANCE_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_GENCRANESTANCE_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_SODOMXISM_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOMXISM_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_SODOMXISM_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOMXISM_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_SODOMXISM_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOMXISM_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_SODOMXISM_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOMXISM_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_SODOMXISM_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOMXISM_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_SODOMXISM_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOMXISM_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_SODOMXISM_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_BALROG_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROG_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_BALROG_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROG_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_BALROG_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROG_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_BALROG_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROG_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_BALROG_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROG_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_BALROG_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROG_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_BALROG_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_CAMMY_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CAMMY_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_CAMMY_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CAMMY_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_CAMMY_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CAMMY_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_CAMMY_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CAMMY_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_CAMMY_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CAMMY_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_CAMMY_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CAMMY_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_CAMMY_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_EVILRYU_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EVILRYU_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_EVILRYU_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EVILRYU_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_EVILRYU_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EVILRYU_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_EVILRYU_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EVILRYU_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_EVILRYU_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EVILRYU_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_EVILRYU_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EVILRYU_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_EVILRYU_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_EHONDA_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EHONDA_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_EHONDA_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EHONDA_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_EHONDA_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EHONDA_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_EHONDA_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EHONDA_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_EHONDA_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EHONDA_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_EHONDA_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EHONDA_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_EHONDA_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_BLANKA_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BLANKA_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_BLANKA_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BLANKA_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_BLANKA_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BLANKA_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_BLANKA_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BLANKA_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_BLANKA_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BLANKA_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_BLANKA_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BLANKA_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_BLANKA_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_RMIKA_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RMIKA_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_RMIKA_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RMIKA_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_RMIKA_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RMIKA_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_RMIKA_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RMIKA_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_RMIKA_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RMIKA_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_RMIKA_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RMIKA_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_RMIKA_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_CODY_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CODY_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_CODY_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CODY_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_CODY_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CODY_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_CODY_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CODY_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_CODY_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CODY_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_CODY_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CODY_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_CODY_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_VEGA_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_VEGA_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_VEGA_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_VEGA_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_VEGA_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_VEGA_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_VEGA_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_VEGA_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_VEGA_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_VEGA_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_VEGA_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_VEGA_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_VEGA_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_KARIN_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KARIN_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_KARIN_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KARIN_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_KARIN_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KARIN_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_KARIN_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KARIN_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_KARIN_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KARIN_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_KARIN_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KARIN_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_KARIN_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_JULI_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JULI_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_JULI_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JULI_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_JULI_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JULI_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_JULI_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JULI_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_JULI_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JULI_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_JULI_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JULI_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_JULI_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_JUNI_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JUNI_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_JUNI_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JUNI_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_JUNI_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JUNI_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_JUNI_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JUNI_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_JUNI_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JUNI_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_JUNI_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JUNI_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_JUNI_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_GUILE_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUILE_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_GUILE_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUILE_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_GUILE_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUILE_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_GUILE_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUILE_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_GUILE_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUILE_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_GUILE_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUILE_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_GUILE_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_FEILONG_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_FEILONG_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_FEILONG_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_FEILONG_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_FEILONG_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_FEILONG_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_FEILONG_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_FEILONG_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_FEILONG_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_FEILONG_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_FEILONG_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_FEILONG_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_FEILONG_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_DEEJAY_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DEEJAY_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_DEEJAY_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DEEJAY_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_DEEJAY_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DEEJAY_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_DEEJAY_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DEEJAY_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_DEEJAY_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DEEJAY_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_DEEJAY_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DEEJAY_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_DEEJAY_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_THAWK_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_THAWK_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_THAWK_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_THAWK_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_THAWK_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_THAWK_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_THAWK_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_THAWK_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_THAWK_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_THAWK_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_THAWK_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_THAWK_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_THAWK_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_SHINAKUMA_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SHINAKUMA_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_SHINAKUMA_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SHINAKUMA_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_SHINAKUMA_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SHINAKUMA_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_SHINAKUMA_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SHINAKUMA_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_SHINAKUMA_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SHINAKUMA_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_SHINAKUMA_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SHINAKUMA_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_SHINAKUMA_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_BALROGFINISHED_COLLECTION[] =
{
    {  L"X-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROGFINISHED_PALETTES_XISMPUNCH, ARRAYSIZE(SFZ3U_A_BALROGFINISHED_PALETTES_XISMPUNCH) },
    {  L"X-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROGFINISHED_PALETTES_XISMKICK, ARRAYSIZE(SFZ3U_A_BALROGFINISHED_PALETTES_XISMKICK) },
    {  L"A-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROGFINISHED_PALETTES_AISMPUNCH, ARRAYSIZE(SFZ3U_A_BALROGFINISHED_PALETTES_AISMPUNCH) },
    {  L"A-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROGFINISHED_PALETTES_AISMKICK, ARRAYSIZE(SFZ3U_A_BALROGFINISHED_PALETTES_AISMKICK) },
    {  L"V-Ism Punch", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROGFINISHED_PALETTES_VISMPUNCH, ARRAYSIZE(SFZ3U_A_BALROGFINISHED_PALETTES_VISMPUNCH) },
    {  L"V-Ism Kick", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROGFINISHED_PALETTES_VISMKICK, ARRAYSIZE(SFZ3U_A_BALROGFINISHED_PALETTES_VISMKICK) },
};

const sDescTreeNode SFZ3U_A_UNITS[] =
{
{  L"Ryu", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RYU_COLLECTION, ARRAYSIZE(SFZ3U_A_RYU_COLLECTION) },
{  L"Ken", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KEN_COLLECTION, ARRAYSIZE(SFZ3U_A_KEN_COLLECTION) },
{  L"Akuma", DESC_NODETYPE_TREE, (void*)SFZ3U_A_AKUMA_COLLECTION, ARRAYSIZE(SFZ3U_A_AKUMA_COLLECTION) },
{  L"Charlie", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHARLIE_COLLECTION, ARRAYSIZE(SFZ3U_A_CHARLIE_COLLECTION) },
{  L"Chun-Li", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLI_COLLECTION, ARRAYSIZE(SFZ3U_A_CHUNLI_COLLECTION) },
{  L"Adon", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ADON_COLLECTION, ARRAYSIZE(SFZ3U_A_ADON_COLLECTION) },
{  L"Sodom", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOM_COLLECTION, ARRAYSIZE(SFZ3U_A_SODOM_COLLECTION) },
{  L"Guy", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUY_COLLECTION, ARRAYSIZE(SFZ3U_A_GUY_COLLECTION) },
{  L"Birdie", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BIRDIE_COLLECTION, ARRAYSIZE(SFZ3U_A_BIRDIE_COLLECTION) },
{  L"Rose", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROSE_COLLECTION, ARRAYSIZE(SFZ3U_A_ROSE_COLLECTION) },
{  L"M.Bison", DESC_NODETYPE_TREE, (void*)SFZ3U_A_MBISON_COLLECTION, ARRAYSIZE(SFZ3U_A_MBISON_COLLECTION) },
{  L"Sagat", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAGAT_COLLECTION, ARRAYSIZE(SFZ3U_A_SAGAT_COLLECTION) },
{  L"Dan", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DAN_COLLECTION, ARRAYSIZE(SFZ3U_A_DAN_COLLECTION) },
{  L"Sakura", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SAKURA_COLLECTION, ARRAYSIZE(SFZ3U_A_SAKURA_COLLECTION) },
{  L"Rolento", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ROLENTO_COLLECTION, ARRAYSIZE(SFZ3U_A_ROLENTO_COLLECTION) },
{  L"Dhalsim", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DHALSIM_COLLECTION, ARRAYSIZE(SFZ3U_A_DHALSIM_COLLECTION) },
{  L"Zangief", DESC_NODETYPE_TREE, (void*)SFZ3U_A_ZANGIEF_COLLECTION, ARRAYSIZE(SFZ3U_A_ZANGIEF_COLLECTION) },
{  L"Gen", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GEN_COLLECTION, ARRAYSIZE(SFZ3U_A_GEN_COLLECTION) },
{  L"Chun-Li (X-Ism)", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CHUNLIXISM_COLLECTION, ARRAYSIZE(SFZ3U_A_CHUNLIXISM_COLLECTION) },
{  L"Gen (Crane stance)", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GENCRANESTANCE_COLLECTION, ARRAYSIZE(SFZ3U_A_GENCRANESTANCE_COLLECTION) },
{  L"Sodom (X-Ism)", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SODOMXISM_COLLECTION, ARRAYSIZE(SFZ3U_A_SODOMXISM_COLLECTION) },
{  L"Balrog", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROG_COLLECTION, ARRAYSIZE(SFZ3U_A_BALROG_COLLECTION) },
{  L"Cammy", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CAMMY_COLLECTION, ARRAYSIZE(SFZ3U_A_CAMMY_COLLECTION) },
{  L"Evil Ryu", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EVILRYU_COLLECTION, ARRAYSIZE(SFZ3U_A_EVILRYU_COLLECTION) },
{  L"E.Honda", DESC_NODETYPE_TREE, (void*)SFZ3U_A_EHONDA_COLLECTION, ARRAYSIZE(SFZ3U_A_EHONDA_COLLECTION) },
{  L"Blanka", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BLANKA_COLLECTION, ARRAYSIZE(SFZ3U_A_BLANKA_COLLECTION) },
{  L"R.Mika", DESC_NODETYPE_TREE, (void*)SFZ3U_A_RMIKA_COLLECTION, ARRAYSIZE(SFZ3U_A_RMIKA_COLLECTION) },
{  L"Cody", DESC_NODETYPE_TREE, (void*)SFZ3U_A_CODY_COLLECTION, ARRAYSIZE(SFZ3U_A_CODY_COLLECTION) },
{  L"Vega", DESC_NODETYPE_TREE, (void*)SFZ3U_A_VEGA_COLLECTION, ARRAYSIZE(SFZ3U_A_VEGA_COLLECTION) },
{  L"Karin", DESC_NODETYPE_TREE, (void*)SFZ3U_A_KARIN_COLLECTION, ARRAYSIZE(SFZ3U_A_KARIN_COLLECTION) },
{  L"Juli", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JULI_COLLECTION, ARRAYSIZE(SFZ3U_A_JULI_COLLECTION) },
{  L"Juni", DESC_NODETYPE_TREE, (void*)SFZ3U_A_JUNI_COLLECTION, ARRAYSIZE(SFZ3U_A_JUNI_COLLECTION) },
{  L"Guile", DESC_NODETYPE_TREE, (void*)SFZ3U_A_GUILE_COLLECTION, ARRAYSIZE(SFZ3U_A_GUILE_COLLECTION) },
{  L"Fei Long", DESC_NODETYPE_TREE, (void*)SFZ3U_A_FEILONG_COLLECTION, ARRAYSIZE(SFZ3U_A_FEILONG_COLLECTION) },
{  L"Dee Jay", DESC_NODETYPE_TREE, (void*)SFZ3U_A_DEEJAY_COLLECTION, ARRAYSIZE(SFZ3U_A_DEEJAY_COLLECTION) },
{  L"T-Hawk", DESC_NODETYPE_TREE, (void*)SFZ3U_A_THAWK_COLLECTION, ARRAYSIZE(SFZ3U_A_THAWK_COLLECTION) },
{  L"Shin Akuma", DESC_NODETYPE_TREE, (void*)SFZ3U_A_SHINAKUMA_COLLECTION, ARRAYSIZE(SFZ3U_A_SHINAKUMA_COLLECTION) },
{  L"Balrog (Finished)", DESC_NODETYPE_TREE, (void*)SFZ3U_A_BALROGFINISHED_COLLECTION, ARRAYSIZE(SFZ3U_A_BALROGFINISHED_COLLECTION) },
};


constexpr auto SFZ3U_A_NUMUNIT = ARRAYSIZE(SFZ3U_A_UNITS);
#define SFZ3U_A_EXTRALOC SFZ3U_A_NUMUNIT

// We extend this array with data groveled from the CVS2E.txt extensible extras file, if any.
const stExtraDef SFZ3U_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
