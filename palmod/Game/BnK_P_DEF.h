#pragma once

const std::vector<uint16_t> BnK_P_IMGIDS_USED =
{
    indexMatriMSprites_Anny,        // 0x00
    indexMatriMSprites_Buntaro,     // 0x01
    indexMatriMSprites_Chinnen,     // 0x02
    indexMatriMSprites_Clara,       // 0x03
    indexMatriMSprites_Elias,       // 0x04
    indexMatriMSprites_Hikaru,      // 0x05
    indexMatriMSprites_Jimmy,       // 0x06
    indexMatriMSprites_Jones,       // 0x07
    indexMatriMSprites_Kanji,       // 0x08
    indexMatriMSprites_Keith,       // 0x09
    indexMatriMSprites_Lynn,        // 0x0a
    indexMatriMSprites_Olof,        // 0x0b
    indexMatriMSprites_Poochy,      // 0x0c
    indexMatriMSprites_PrincessSissy, // 0x0d
    indexMatriMSprites_Reiji,       // 0x0e
    indexMatriMSprites_Saizo,       // 0x0f
    indexMatriMSprites_Shintaro,    // 0x10
    indexMatriMSprites_Tane,        // 0x11
    indexMatriMSprites_Ume,         // 0x12
    indexMatriMSprites_White,       // 0x13
    indexMatriMSprites_Bonus,       // 0x14
    indexMatriMSprites_Stages,      // 0x15

    indexBnKSprites_Angela,         // 0x16
    indexBnKSprites_Bobby,          // 0x17
    indexBnKSprites_Kanji,          // 0x18
    indexBnKSprites_Kintaro,        // 0x19
    indexBnKSprites_OtaneYoung,     // 0x1a
    indexBnKSprites_OumeYoung,      // 0x1b
    indexBnKSprites_SuperKurara,    // 0x1c
};

const sGame_PaletteDataset BnK_P_ANGELA_A_PALETTES[] =
{
    { L"Angela A", 0x2690fc, 0x26911c, indexBnKSprites_Angela, 0x00 },
    { L"Unused Extra A", 0x26911c, 0x26913c },
    { L"Love Me Whip A", 0x26913c, 0x26915c, indexBnKSprites_Angela, 0x01 },
    { L"Rolling/Super Jump Trail A", 0x26915c, 0x26917c, indexBnKSprites_Angela, 0x00 },
    { L"EX/Super Trail A", 0x26917c, 0x26919c, indexBnKSprites_Angela, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x26919c, 0x2691bc, indexBnKSprites_Angela, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANGELA_B_PALETTES[] =
{
    { L"Angela B", 0x2691bc, 0x2691dc, indexBnKSprites_Angela, 0x00 },
    { L"Unused Extra B", 0x2691dc, 0x2691fc },
    { L"Love Me Whip B", 0x2691fc, 0x26921c, indexBnKSprites_Angela, 0x01 },
    { L"Rolling/Super Jump Trail B", 0x26921c, 0x26923c, indexBnKSprites_Angela, 0x00 },
    { L"EX/Super Trail B", 0x26923c, 0x26925c, indexBnKSprites_Angela, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x26925c, 0x26927c, indexBnKSprites_Angela, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANGELA_C_PALETTES[] =
{
    { L"Angela C", 0x26927c, 0x26929c, indexBnKSprites_Angela, 0x00 },
    { L"Unused Extra C", 0x26929c, 0x2692bc },
    { L"Love Me Whip C", 0x2692bc, 0x2692dc, indexBnKSprites_Angela, 0x01 },
    { L"Rolling/Super Jump Trail C", 0x2692dc, 0x2692fc, indexBnKSprites_Angela, 0x00 },
    { L"EX/Super Trail C", 0x2692fc, 0x26931c, indexBnKSprites_Angela, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x26931c, 0x26933c, indexBnKSprites_Angela, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANGELA_D_PALETTES[] =
{
    { L"Angela D", 0x26933c, 0x26935c, indexBnKSprites_Angela, 0x00 },
    { L"Unused Extra D", 0x26935c, 0x26937c },
    { L"Love Me Whip D", 0x26937c, 0x26939c, indexBnKSprites_Angela, 0x01 },
    { L"Rolling/Super Jump Trail D", 0x26939c, 0x2693bc, indexBnKSprites_Angela, 0x00 },
    { L"EX/Super Trail D", 0x2693bc, 0x2693dc, indexBnKSprites_Angela, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x2693dc, 0x2693fc, indexBnKSprites_Angela, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANGELA_SUMMER_PALETTES[] =
{
    { L"Angela Summer", 0x2693fc, 0x26941c, indexBnKSprites_Angela, 0x00 },
    { L"Unused Extra Summer", 0x26941c, 0x26943c },
    { L"Love Me Whip Summer", 0x26943c, 0x26945c, indexBnKSprites_Angela, 0x01 },
    { L"Rolling/Super Jump Trail Summer", 0x26945c, 0x26947c, indexBnKSprites_Angela, 0x00 },
    { L"EX/Super Trail Summer", 0x26947c, 0x26949c, indexBnKSprites_Angela, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x26949c, 0x2694bc, indexBnKSprites_Angela, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANGELA_ZOMBIE_PALETTES[] =
{
    { L"Angela Zombie", 0x2694bc, 0x2694dc, indexBnKSprites_Angela, 0x00 },
    { L"Unused Extra Zombie", 0x2694dc, 0x2694fc },
    { L"Love Me Whip Zombie", 0x2694fc, 0x26951c, indexBnKSprites_Angela, 0x01 },
    { L"Rolling/Super Jump Trail Zombie", 0x26951c, 0x26953c, indexBnKSprites_Angela, 0x00 },
    { L"EX/Super Trail Zombie", 0x26953c, 0x26955c, indexBnKSprites_Angela, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x26955c, 0x26957c, indexBnKSprites_Angela, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANGELA_EXTREME_PALETTES[] =
{
    { L"Angela Extreme", 0x26957c, 0x26959c, indexBnKSprites_Angela, 0x00 },
    { L"Unused Extra Extreme", 0x26959c, 0x2695bc },
    { L"Love Me Whip Extreme", 0x2695bc, 0x2695dc, indexBnKSprites_Angela, 0x01 },
    { L"Rolling/Super Jump Trail Extreme", 0x2695dc, 0x2695fc, indexBnKSprites_Angela, 0x00 },
    { L"EX/Super Trail Extreme", 0x2695fc, 0x26961c, indexBnKSprites_Angela, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x26961c, 0x26963c, indexBnKSprites_Angela, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANGELA_WHITE_PALETTES[] =
{
    { L"Angela White", 0x26963c, 0x26965c, indexBnKSprites_Angela, 0x00 },
    { L"Unused Extra White", 0x26965c, 0x26967c },
    { L"Love Me Whip White", 0x26967c, 0x26969c, indexBnKSprites_Angela, 0x01 },
    { L"Rolling/Super Jump Trail White", 0x26969c, 0x2696bc, indexBnKSprites_Angela, 0x00 },
    { L"EX/Super Trail White", 0x2696bc, 0x2696dc, indexBnKSprites_Angela, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x2696dc, 0x2696fc, indexBnKSprites_Angela, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANNY_A_PALETTES[] =
{
    { L"Anny A", 0x25fd38, 0x25fd58, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy A (Unused)", 0x25fd58, 0x25fd78, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy A (Unused)", 0x25fd78, 0x25fd98, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail A", 0x25fd98, 0x25fdb8, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail A", 0x25fdb8, 0x25fdd8, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x25fdd8, 0x25fdf8, indexMatriMSprites_Anny, 0x00 },
    { L"HUD Portrait A (Unused)", 0x25fdf8, 0x25fe18, indexMatriMSprites_Anny, 0x31 },
};

const sGame_PaletteDataset BnK_P_ANNY_B_PALETTES[] =
{
    { L"Anny B", 0x25fe18, 0x25fe38, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy B (Unused)", 0x25fe38, 0x25fe58, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy B (Unused)", 0x25fe58, 0x25fe78, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail B", 0x25fe78, 0x25fe98, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail B", 0x25fe98, 0x25feb8, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x25feb8, 0x25fed8, indexMatriMSprites_Anny, 0x00 },
    { L"HUD Portrait B (Unused)", 0x25fed8, 0x25fef8, indexMatriMSprites_Anny, 0x31 },
};

const sGame_PaletteDataset BnK_P_ANNY_C_PALETTES[] =
{
    { L"Anny C", 0x25fef8, 0x25ff18, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy C (Unused)", 0x25ff18, 0x25ff38, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy C (Unused)", 0x25ff38, 0x25ff58, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail C", 0x25ff58, 0x25ff78, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail C", 0x25ff78, 0x25ff98, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x25ff98, 0x25ffb8, indexMatriMSprites_Anny, 0x00 },
    { L"HUD Portrait C (Unused)", 0x25ffb8, 0x25ffd8, indexMatriMSprites_Anny, 0x31 },
};

const sGame_PaletteDataset BnK_P_ANNY_D_PALETTES[] =
{
    { L"Anny D", 0x25ffd8, 0x25fff8, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy D (Unused)", 0x25fff8, 0x260018, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy D (Unused)", 0x260018, 0x260038, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail D", 0x260038, 0x260058, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail D", 0x260058, 0x260078, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x260078, 0x260098, indexMatriMSprites_Anny, 0x00 },
    { L"HUD Portrait D (Unused)", 0x260098, 0x2600b8, indexMatriMSprites_Anny, 0x31 },
};

const sGame_PaletteDataset BnK_P_ANNY_SUMMER_PALETTES[] =
{
    { L"Anny Summer", 0x2600b8, 0x2600d8, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy Summer (Unused)", 0x2600d8, 0x2600f8, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy Summer (Unused)", 0x2600f8, 0x260118, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail Summer", 0x260118, 0x260138, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail Summer", 0x260138, 0x260158, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x260158, 0x260178, indexMatriMSprites_Anny, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANNY_ZOMBIE_PALETTES[] =
{
    { L"Anny Zombie", 0x260178, 0x260198, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy Zombie (Unused)", 0x260198, 0x2601b8, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy Zombie (Unused)", 0x2601b8, 0x2601d8, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail Zombie", 0x2601d8, 0x2601f8, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail Zombie", 0x2601f8, 0x260218, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x260218, 0x260238, indexMatriMSprites_Anny, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANNY_EXTREME_PALETTES[] =
{
    { L"Anny Extreme", 0x260238, 0x260258, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy Extreme (Unused)", 0x260258, 0x260278, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy Extreme (Unused)", 0x260278, 0x260298, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail Extreme", 0x260298, 0x2602b8, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail Extreme", 0x2602b8, 0x2602d8, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x2602d8, 0x2602f8, indexMatriMSprites_Anny, 0x00 },
};

const sGame_PaletteDataset BnK_P_ANNY_WHITE_PALETTES[] =
{
    { L"Anny White", 0x2602f8, 0x260318, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy White (Unused)", 0x260318, 0x260338, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy White (Unused)", 0x260338, 0x260358, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail White", 0x260358, 0x260378, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail White", 0x260378, 0x260398, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x260398, 0x2603b8, indexMatriMSprites_Anny, 0x00 },
};

const sGame_PaletteDataset BnK_P_BOBBY_A_PALETTES[] =
{
    { L"Bobby A", 0x26bf28, 0x26bf48, indexBnKSprites_Bobby, 0x00 },
    { L"Abiku! Powder! A", 0x26bf48, 0x26bf68, indexBnKSprites_Bobby, 0x01 },
    { L"Jet Balloon A", 0x26bf68, 0x26bf88, indexBnKSprites_Bobby, 0x02 },
    { L"Jet Beam Flash 1 A", 0x26bf88, 0x26bfa8, indexBnKSprites_Bobby, 0x03 },
    { L"Jet Beam Flash 2 A", 0x26bfa8, 0x26bfc8, indexBnKSprites_Bobby, 0x04 },
    { L"Intro Clothes A", 0x26bfc8, 0x26bfe8, indexBnKSprites_Bobby, 0x05 },
    { L"C+D Attack A", 0x26bfe8, 0x26c008, indexBnKSprites_Bobby, 0x06 },
    { L"Rolling/Super Jump Trail A", 0x26c008, 0x26c028, indexBnKSprites_Bobby, 0x00 },
    { L"EX/Super Trail A", 0x26c028, 0x26c048, indexBnKSprites_Bobby, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x26c048, 0x26c068, indexBnKSprites_Bobby, 0x00 },
};

const sGame_PaletteDataset BnK_P_BOBBY_B_PALETTES[] =
{
    { L"Bobby B", 0x26c068, 0x26c088, indexBnKSprites_Bobby, 0x00 },
    { L"Abiku! Powder! B", 0x26c088, 0x26c0a8, indexBnKSprites_Bobby, 0x01 },
    { L"Jet Balloon B", 0x26c0a8, 0x26c0c8, indexBnKSprites_Bobby, 0x02 },
    { L"Jet Beam Flash 1 B", 0x26c0c8, 0x26c0e8, indexBnKSprites_Bobby, 0x03 },
    { L"Jet Beam Flash 2 B", 0x26c0e8, 0x26c108, indexBnKSprites_Bobby, 0x04 },
    { L"Intro Clothes B", 0x26c108, 0x26c128, indexBnKSprites_Bobby, 0x05 },
    { L"C+D Attack B", 0x26c128, 0x26c148, indexBnKSprites_Bobby, 0x06 },
    { L"Rolling/Super Jump Trail B", 0x26c148, 0x26c168, indexBnKSprites_Bobby, 0x00 },
    { L"EX/Super Trail B", 0x26c168, 0x26c188, indexBnKSprites_Bobby, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x26c188, 0x26c1a8, indexBnKSprites_Bobby, 0x00 },
};

const sGame_PaletteDataset BnK_P_BOBBY_C_PALETTES[] =
{
    { L"Bobby C", 0x26c1a8, 0x26c1c8, indexBnKSprites_Bobby, 0x00 },
    { L"Abiku! Powder! C", 0x26c1c8, 0x26c1e8, indexBnKSprites_Bobby, 0x01 },
    { L"Jet Balloon C", 0x26c1e8, 0x26c208, indexBnKSprites_Bobby, 0x02 },
    { L"Jet Beam Flash 1 C", 0x26c208, 0x26c228, indexBnKSprites_Bobby, 0x03 },
    { L"Jet Beam Flash 2 C", 0x26c228, 0x26c248, indexBnKSprites_Bobby, 0x04 },
    { L"Intro Clothes C", 0x26c248, 0x26c268, indexBnKSprites_Bobby, 0x05 },
    { L"C+D Attack C", 0x26c268, 0x26c288, indexBnKSprites_Bobby, 0x06 },
    { L"Rolling/Super Jump Trail C", 0x26c288, 0x26c2a8, indexBnKSprites_Bobby, 0x00 },
    { L"EX/Super Trail C", 0x26c2a8, 0x26c2c8, indexBnKSprites_Bobby, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x26c2c8, 0x26c2e8, indexBnKSprites_Bobby, 0x00 },
};

const sGame_PaletteDataset BnK_P_BOBBY_D_PALETTES[] =
{
    { L"Bobby D", 0x26c2e8, 0x26c308, indexBnKSprites_Bobby, 0x00 },
    { L"Abiku! Powder! D", 0x26c308, 0x26c328, indexBnKSprites_Bobby, 0x01 },
    { L"Jet Balloon D", 0x26c328, 0x26c348, indexBnKSprites_Bobby, 0x02 },
    { L"Jet Beam Flash 1 D", 0x26c348, 0x26c368, indexBnKSprites_Bobby, 0x03 },
    { L"Jet Beam Flash 2 D", 0x26c368, 0x26c388, indexBnKSprites_Bobby, 0x04 },
    { L"Intro Clothes D", 0x26c388, 0x26c3a8, indexBnKSprites_Bobby, 0x05 },
    { L"C+D Attack D", 0x26c3a8, 0x26c3c8, indexBnKSprites_Bobby, 0x06 },
    { L"Rolling/Super Jump Trail D", 0x26c3c8, 0x26c3e8, indexBnKSprites_Bobby, 0x00 },
    { L"EX/Super Trail D", 0x26c3e8, 0x26c408, indexBnKSprites_Bobby, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x26c408, 0x26c428, indexBnKSprites_Bobby, 0x00 },
};

const sGame_PaletteDataset BnK_P_BOBBY_SUMMER_PALETTES[] =
{
    { L"Bobby Summer", 0x26c428, 0x26c448, indexBnKSprites_Bobby, 0x00 },
    { L"Abiku! Powder! Summer", 0x26c448, 0x26c468, indexBnKSprites_Bobby, 0x01 },
    { L"Jet Balloon Summer", 0x26c468, 0x26c488, indexBnKSprites_Bobby, 0x02 },
    { L"Jet Beam Flash 1 Summer", 0x26c488, 0x26c4a8, indexBnKSprites_Bobby, 0x03 },
    { L"Jet Beam Flash 2 Summer", 0x26c4a8, 0x26c4c8, indexBnKSprites_Bobby, 0x04 },
    { L"Intro Clothes Summer", 0x26c4c8, 0x26c4e8, indexBnKSprites_Bobby, 0x05 },
    { L"C+D Attack Summer", 0x26c4e8, 0x26c508, indexBnKSprites_Bobby, 0x06 },
    { L"Rolling/Super Jump Trail Summer", 0x26c508, 0x26c528, indexBnKSprites_Bobby, 0x00 },
    { L"EX/Super Trail Summer", 0x26c528, 0x26c548, indexBnKSprites_Bobby, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x26c548, 0x26c568, indexBnKSprites_Bobby, 0x00 },
};

const sGame_PaletteDataset BnK_P_BOBBY_ZOMBIE_PALETTES[] =
{
    { L"Bobby Zombie", 0x26c568, 0x26c588, indexBnKSprites_Bobby, 0x00 },
    { L"Abiku! Powder! Zombie", 0x26c588, 0x26c5a8, indexBnKSprites_Bobby, 0x01 },
    { L"Jet Balloon Zombie", 0x26c5a8, 0x26c5c8, indexBnKSprites_Bobby, 0x02 },
    { L"Jet Beam Flash 1 Zombie", 0x26c5c8, 0x26c5e8, indexBnKSprites_Bobby, 0x03 },
    { L"Jet Beam Flash 2 Zombie", 0x26c5e8, 0x26c608, indexBnKSprites_Bobby, 0x04 },
    { L"Intro Clothes Zombie", 0x26c608, 0x26c628, indexBnKSprites_Bobby, 0x05 },
    { L"C+D Attack Zombie", 0x26c628, 0x26c648, indexBnKSprites_Bobby, 0x06 },
    { L"Rolling/Super Jump Trail Zombie", 0x26c648, 0x26c668, indexBnKSprites_Bobby, 0x00 },
    { L"EX/Super Trail Zombie", 0x26c668, 0x26c688, indexBnKSprites_Bobby, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x26c688, 0x26c6a8, indexBnKSprites_Bobby, 0x00 },
};

const sGame_PaletteDataset BnK_P_BOBBY_EXTREME_PALETTES[] =
{
    { L"Bobby Extreme", 0x26c6a8, 0x26c6c8, indexBnKSprites_Bobby, 0x00 },
    { L"Abiku! Powder! Extreme", 0x26c6c8, 0x26c6e8, indexBnKSprites_Bobby, 0x01 },
    { L"Jet Balloon Extreme", 0x26c6e8, 0x26c708, indexBnKSprites_Bobby, 0x02 },
    { L"Jet Beam Flash 1 Extreme", 0x26c708, 0x26c728, indexBnKSprites_Bobby, 0x03 },
    { L"Jet Beam Flash 2 Extreme", 0x26c728, 0x26c748, indexBnKSprites_Bobby, 0x04 },
    { L"Intro Clothes Extreme", 0x26c748, 0x26c768, indexBnKSprites_Bobby, 0x05 },
    { L"C+D Attack Extreme", 0x26c768, 0x26c788, indexBnKSprites_Bobby, 0x06 },
    { L"Rolling/Super Jump Trail Extreme", 0x26c788, 0x26c7a8, indexBnKSprites_Bobby, 0x00 },
    { L"EX/Super Trail Extreme", 0x26c7a8, 0x26c7c8, indexBnKSprites_Bobby, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x26c7c8, 0x26c7e8, indexBnKSprites_Bobby, 0x00 },
};

const sGame_PaletteDataset BnK_P_BOBBY_WHITE_PALETTES[] =
{
    { L"Bobby White", 0x26c7e8, 0x26c808, indexBnKSprites_Bobby, 0x00 },
    { L"Abiku! Powder! White", 0x26c808, 0x26c828, indexBnKSprites_Bobby, 0x01 },
    { L"Jet Balloon White", 0x26c828, 0x26c848, indexBnKSprites_Bobby, 0x02 },
    { L"Jet Beam Flash 1 White", 0x26c848, 0x26c868, indexBnKSprites_Bobby, 0x03 },
    { L"Jet Beam Flash 2 White", 0x26c868, 0x26c888, indexBnKSprites_Bobby, 0x04 },
    { L"Intro Clothes White", 0x26c888, 0x26c8a8, indexBnKSprites_Bobby, 0x05 },
    { L"C+D Attack White", 0x26c8a8, 0x26c8c8, indexBnKSprites_Bobby, 0x06 },
    { L"Rolling/Super Jump Trail White", 0x26c8c8, 0x26c8e8, indexBnKSprites_Bobby, 0x00 },
    { L"EX/Super Trail White", 0x26c8e8, 0x26c908, indexBnKSprites_Bobby, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x26c908, 0x26c928, indexBnKSprites_Bobby, 0x00 },
};

const sGame_PaletteDataset BnK_P_BUNTARO_A_PALETTES[] =
{
    { L"Buntaro A", 0x264928, 0x264948, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x264948, 0x264968, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail A", 0x264968, 0x264988, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x264988, 0x2649a8, indexMatriMSprites_Buntaro, 0x00 },
    { L"HUD Portrait A (Unused)", 0x2649a8, 0x2649c8, indexMatriMSprites_Buntaro, 0x31 },
};

const sGame_PaletteDataset BnK_P_BUNTARO_B_PALETTES[] =
{
    { L"Buntaro B", 0x2649c8, 0x2649e8, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x2649e8, 0x264a08, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail B", 0x264a08, 0x264a28, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x264a28, 0x264a48, indexMatriMSprites_Buntaro, 0x00 },
    { L"HUD Portrait B (Unused)", 0x264a48, 0x264a68, indexMatriMSprites_Buntaro, 0x31 },
};

const sGame_PaletteDataset BnK_P_BUNTARO_C_PALETTES[] =
{
    { L"Buntaro C", 0x264a68, 0x264a88, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x264a88, 0x264aa8, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail C", 0x264aa8, 0x264ac8, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x264ac8, 0x264ae8, indexMatriMSprites_Buntaro, 0x00 },
    { L"HUD Portrait C (Unused)", 0x264ae8, 0x264b08, indexMatriMSprites_Buntaro, 0x31 },
};

const sGame_PaletteDataset BnK_P_BUNTARO_D_PALETTES[] =
{
    { L"Buntaro D", 0x264b08, 0x264b28, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x264b28, 0x264b48, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail D", 0x264b48, 0x264b68, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x264b68, 0x264b88, indexMatriMSprites_Buntaro, 0x00 },
    { L"HUD Portrait D (Unused)", 0x264b88, 0x264ba8, indexMatriMSprites_Buntaro, 0x31 },
};

const sGame_PaletteDataset BnK_P_BUNTARO_SUMMER_PALETTES[] =
{
    { L"Buntaro Summer", 0x264ba8, 0x264bc8, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x264bc8, 0x264be8, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail Summer", 0x264be8, 0x264c08, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x264c08, 0x264c28, indexMatriMSprites_Buntaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_BUNTARO_ZOMBIE_PALETTES[] =
{
    { L"Buntaro Zombie", 0x264c28, 0x264c48, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x264c48, 0x264c68, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail Zombie", 0x264c68, 0x264c88, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x264c88, 0x264ca8, indexMatriMSprites_Buntaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_BUNTARO_EXTREME_PALETTES[] =
{
    { L"Buntaro Extreme", 0x264ca8, 0x264cc8, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x264cc8, 0x264ce8, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail Extreme", 0x264ce8, 0x264d08, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x264d08, 0x264d28, indexMatriMSprites_Buntaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_BUNTARO_WHITE_PALETTES[] =
{
    { L"Buntaro White", 0x264d28, 0x264d48, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x264d48, 0x264d68, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail White", 0x264d68, 0x264d88, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x264d88, 0x264da8, indexMatriMSprites_Buntaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_CHINNEN_A_PALETTES[] =
{
    { L"Chinnen A", 0x25e1b0, 0x25e1d0, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power A (Unused)", 0x25e1d0, 0x25e1f0 },
    { L"Spirit Orb A", 0x25e1f0, 0x25e210 },
    { L"Curse Seal A (Unused)", 0x25e210, 0x25e230 },
    { L"Rolling/Super Jump A Trail", 0x25e230, 0x25e250, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail A", 0x25e250, 0x25e270, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x25e270, 0x25e290, indexMatriMSprites_Chinnen, 0x00 },
    { L"HUD Portrait A (Unused)", 0x25e290, 0x25e2b0, indexMatriMSprites_Chinnen, 0x31 },
};

const sGame_PaletteDataset BnK_P_CHINNEN_B_PALETTES[] =
{
    { L"Chinnen B", 0x25e2b0, 0x25e2d0, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power B (Unused)", 0x25e2d0, 0x25e2f0 },
    { L"Spirit Orb B", 0x25e2f0, 0x25e310 },
    { L"Curse Seal B (Unused)", 0x25e310, 0x25e330 },
    { L"Rolling/Super Jump Trail B", 0x25e330, 0x25e350, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail B", 0x25e350, 0x25e370, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x25e370, 0x25e390, indexMatriMSprites_Chinnen, 0x00 },
    { L"HUD Portrait B (Unused)", 0x25e390, 0x25e3b0, indexMatriMSprites_Chinnen, 0x31 },
};

const sGame_PaletteDataset BnK_P_CHINNEN_C_PALETTES[] =
{
    { L"Chinnen C", 0x25e3b0, 0x25e3d0, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power C (Unused)", 0x25e3d0, 0x25e3f0 },
    { L"Spirit Orb C", 0x25e3f0, 0x25e410 },
    { L"Curse Seal C (Unused)", 0x25e410, 0x25e430 },
    { L"Rolling/Super Jump Trail C", 0x25e430, 0x25e450, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail C", 0x25e450, 0x25e470, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x25e470, 0x25e490, indexMatriMSprites_Chinnen, 0x00 },
    { L"HUD Portrait C (Unused)", 0x25e490, 0x25e4b0, indexMatriMSprites_Chinnen, 0x31 },
};

const sGame_PaletteDataset BnK_P_CHINNEN_D_PALETTES[] =
{
    { L"Chinnen D", 0x25e4b0, 0x25e4d0, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power D (Unused)", 0x25e4d0, 0x25e4f0 },
    { L"Spirit Orb D", 0x25e4f0, 0x25e510 },
    { L"Curse Seal D (Unused)", 0x25e510, 0x25e530 },
    { L"Rolling/Super Jump Trail D", 0x25e530, 0x25e550, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail D", 0x25e550, 0x25e570, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x25e570, 0x25e590, indexMatriMSprites_Chinnen, 0x00 },
    { L"HUD Portrait D (Unused)", 0x25e590, 0x25e5b0, indexMatriMSprites_Chinnen, 0x31 },
};

const sGame_PaletteDataset BnK_P_CHINNEN_SUMMER_PALETTES[] =
{
    { L"Chinnen Summer", 0x25e5b0, 0x25e5d0, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power Summer (Unused)", 0x25e5d0, 0x25e5f0 },
    { L"Spirit Orb Summer", 0x25e5f0, 0x25e610 },
    { L"Curse Seal Summer (Unused)", 0x25e610, 0x25e630 },
    { L"Rolling/Super Jump Trail Summer", 0x25e630, 0x25e650, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail Summer", 0x25e650, 0x25e670, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x25e670, 0x25e690, indexMatriMSprites_Chinnen, 0x00 },
};

const sGame_PaletteDataset BnK_P_CHINNEN_ZOMBIE_PALETTES[] =
{
    { L"Chinnen Zombie", 0x25e690, 0x25e6b0, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power Zombie (Unused)", 0x25e6b0, 0x25e6d0 },
    { L"Spirit Orb Zombie", 0x25e6d0, 0x25e6f0 },
    { L"Curse Seal Zombie (Unused)", 0x25e6f0, 0x25e710 },
    { L"Rolling/Super Jump Trail Zombie", 0x25e710, 0x25e730, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail Zombie", 0x25e730, 0x25e750, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x25e750, 0x25e770, indexMatriMSprites_Chinnen, 0x00 },
};

const sGame_PaletteDataset BnK_P_CHINNEN_EXTREME_PALETTES[] =
{
    { L"Chinnen Extreme", 0x25e770, 0x25e790, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power Extreme (Unused)", 0x25e790, 0x25e7b0 },
    { L"Spirit Orb Extreme", 0x25e7b0, 0x25e7d0 },
    { L"Curse Seal Extreme (Unused)", 0x25e7d0, 0x25e7f0 },
    { L"Rolling/Super Jump Trail Extreme", 0x25e7f0, 0x25e810, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail Extreme", 0x25e810, 0x25e830, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x25e830, 0x25e850, indexMatriMSprites_Chinnen, 0x00 },
};

const sGame_PaletteDataset BnK_P_CHINNEN_WHITE_PALETTES[] =
{
    { L"Chinnen White", 0x25e850, 0x25e870, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power White (Unused)", 0x25e870, 0x25e890 },
    { L"Spirit Orb White", 0x25e890, 0x25e8b0 },
    { L"Curse Seal White (Unused)", 0x25e8b0, 0x25e8d0 },
    { L"Rolling/Super Jump Trail White", 0x25e8d0, 0x25e8f0, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail White", 0x25e8f0, 0x25e910, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x25e910, 0x25e930, indexMatriMSprites_Chinnen, 0x00 },
};

const sGame_PaletteDataset BnK_P_CLARA_A_PALETTES[] =
{
    { L"Kurara A", 0x2603ba, 0x2603da, indexMatriMSprites_Clara, 0x00 },
    { L"Miracle Attack A", 0x2603da, 0x2603fa, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack A (Unused)", 0x2603fa, 0x26041a, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang A (Unused)", 0x26041a, 0x26043a, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss A (Unused)", 0x26043a, 0x26045a, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution A (Unused)", 0x26045a, 0x26047a, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 A", 0x26047a, 0x26049a, indexMatriMSprites_Clara, 0x00 },
    { L"Winpose Flash 2 A", 0x26049a, 0x2604ba, indexMatriMSprites_Clara, 0x00 },
    { L"Violent In-Pack Rabbit A", 0x2604ba, 0x2604da, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 A", 0x2604da, 0x2604fa, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 A", 0x2604fa, 0x26051a, indexMatriMSprites_Clara, 0x08 },
    { L"Kurara Flash A (Unused)", 0x26051a, 0x26053a, indexMatriMSprites_Clara, 0x00 },
    { L"Rolling/Super Jump A Trail", 0x26053a, 0x26055a, indexMatriMSprites_Clara, 0x00 },
    { L"EX/Super Trail A", 0x26055a, 0x26057a, indexMatriMSprites_Clara, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x26057a, 0x26059a, indexMatriMSprites_Clara, 0x00 },
    { L"HUD Portrait A (Unused)", 0x26059a, 0x2605ba, indexMatriMSprites_Clara, 0x31 },
};

const sGame_PaletteDataset BnK_P_CLARA_B_PALETTES[] =
{
    { L"Kurara B", 0x2605ba, 0x2605da, indexMatriMSprites_Clara, 0x00 },
    { L"Miracle Attack B", 0x2605da, 0x2605fa, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack B (Unused)", 0x2605fa, 0x26061a, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang B (Unused)", 0x26061a, 0x26063a, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss B (Unused)", 0x26063a, 0x26065a, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution B (Unused)", 0x26065a, 0x26067a, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 B", 0x26067a, 0x26069a, indexMatriMSprites_Clara, 0x00 },
    { L"Winpose Flash 2 B", 0x26069a, 0x2606ba, indexMatriMSprites_Clara, 0x00 },
    { L"Violent In-Pack Rabbit B", 0x2606ba, 0x2606da, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 B", 0x2606da, 0x2606fa, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 B", 0x2606fa, 0x26071a, indexMatriMSprites_Clara, 0x08 },
    { L"Kurara Flash (Unused) B", 0x26071a, 0x26073a, indexMatriMSprites_Clara, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x26073a, 0x26075a, indexMatriMSprites_Clara, 0x00 },
    { L"EX/Super Trail B", 0x26075a, 0x26077a, indexMatriMSprites_Clara, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x26077a, 0x26079a, indexMatriMSprites_Clara, 0x00 },
    { L"HUD Portrait B (Unused)", 0x26079a, 0x2607ba, indexMatriMSprites_Clara, 0x31 },
};

const sGame_PaletteDataset BnK_P_CLARA_C_PALETTES[] =
{
    { L"Kurara C", 0x2607ba, 0x2607da, indexMatriMSprites_Clara, 0x00 },
    { L"Miracle Attack C", 0x2607da, 0x2607fa, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack C (Unused)", 0x2607fa, 0x26081a, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang C (Unused)", 0x26081a, 0x26083a, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss C (Unused)", 0x26083a, 0x26085a, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution C (Unused)", 0x26085a, 0x26087a, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 C", 0x26087a, 0x26089a, indexMatriMSprites_Clara, 0x00 },
    { L"Winpose Flash 2 C", 0x26089a, 0x2608ba, indexMatriMSprites_Clara, 0x00 },
    { L"Violent In-Pack Rabbit C", 0x2608ba, 0x2608da, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 C", 0x2608da, 0x2608fa, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 C", 0x2608fa, 0x26091a, indexMatriMSprites_Clara, 0x08 },
    { L"Kurara Flash C (Unused)", 0x26091a, 0x26093a, indexMatriMSprites_Clara, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x26093a, 0x26095a, indexMatriMSprites_Clara, 0x00 },
    { L"EX/Super Trail C", 0x26095a, 0x26097a, indexMatriMSprites_Clara, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x26097a, 0x26099a, indexMatriMSprites_Clara, 0x00 },
    { L"HUD Portrait C (Unused)", 0x26099a, 0x2609ba, indexMatriMSprites_Clara, 0x31 },
};

const sGame_PaletteDataset BnK_P_CLARA_D_PALETTES[] =
{
    { L"Kurara D", 0x2609ba, 0x2609da, indexMatriMSprites_Clara, 0x00 },
    { L"Miracle Attack D", 0x2609da, 0x2609fa, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack D (Unused)", 0x2609fa, 0x260a1a, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang D (Unused)", 0x260a1a, 0x260a3a, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss D (Unused)", 0x260a3a, 0x260a5a, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution D (Unused)", 0x260a5a, 0x260a7a, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 D", 0x260a7a, 0x260a9a, indexMatriMSprites_Clara, 0x00 },
    { L"Winpose Flash 2 D", 0x260a9a, 0x260aba, indexMatriMSprites_Clara, 0x00 },
    { L"Violent In-Pack Rabbit D", 0x260aba, 0x260ada, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 D", 0x260ada, 0x260afa, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 D", 0x260afa, 0x260b1a, indexMatriMSprites_Clara, 0x08 },
    { L"Kurara Flash D (Unused)", 0x260b1a, 0x260b3a, indexMatriMSprites_Clara, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x260b3a, 0x260b5a, indexMatriMSprites_Clara, 0x00 },
    { L"EX/Super Trail D", 0x260b5a, 0x260b7a, indexMatriMSprites_Clara, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x260b7a, 0x260b9a, indexMatriMSprites_Clara, 0x00 },
    { L"HUD Portrait D(Unused)", 0x260b9a, 0x260bba, indexMatriMSprites_Clara, 0x31 },
};

const sGame_PaletteDataset BnK_P_CLARA_SUMMER_PALETTES[] =
{
    { L"Kurara Summer", 0x260bba, 0x260bda, indexMatriMSprites_Clara, 0x00 },
    { L"Miracle Attack  Summer", 0x260bda, 0x260bfa, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack Summer (Unused)", 0x260bfa, 0x260c1a, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang Summer (Unused)", 0x260c1a, 0x260c3a, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss Summer (Unused)", 0x260c3a, 0x260c5a, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution Summer (Unused)", 0x260c5a, 0x260c7a, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 Summer", 0x260c7a, 0x260c9a, indexMatriMSprites_Clara, 0x00 },
    { L"Winpose Flash 2 Summer", 0x260c9a, 0x260cba, indexMatriMSprites_Clara, 0x00 },
    { L"Violent In-Pack Rabbit Summer", 0x260cba, 0x260cda, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 Summer", 0x260cda, 0x260cfa, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 Summer", 0x260cfa, 0x260d1a, indexMatriMSprites_Clara, 0x08 },
    { L"Kurara Flash Summer (Unused)", 0x260d1a, 0x260d3a, indexMatriMSprites_Clara, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x260d3a, 0x260d5a, indexMatriMSprites_Clara, 0x00 },
    { L"EX/Super Trail Summer", 0x260d5a, 0x260d7a, indexMatriMSprites_Clara, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x260d7a, 0x260d9a, indexMatriMSprites_Clara, 0x00 },
};

const sGame_PaletteDataset BnK_P_CLARA_ZOMBIE_PALETTES[] =
{
    { L"Kurara Zombie", 0x260d9a, 0x260dba, indexMatriMSprites_Clara, 0x00 },
    { L"Miracle Attack Zombie", 0x260dba, 0x260dda, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack Zombie (Unused)", 0x260dda, 0x260dfa, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang Zombie (Unused)", 0x260dfa, 0x260e1a, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss Zombie (Unused)", 0x260e1a, 0x260e3a, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution Zombie (Unused)", 0x260e3a, 0x260e5a, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 Zombie", 0x260e5a, 0x260e7a, indexMatriMSprites_Clara, 0x00 },
    { L"Winpose Flash 2 Zombie", 0x260e7a, 0x260e9a, indexMatriMSprites_Clara, 0x00 },
    { L"Violent In-Pack Rabbit Zombie", 0x260e9a, 0x260eba, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 Zombie", 0x260eba, 0x260eda, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 Zombie", 0x260eda, 0x260efa, indexMatriMSprites_Clara, 0x08 },
    { L"Kurara Flash Zombie (Unused)", 0x260efa, 0x260f1a, indexMatriMSprites_Clara, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x260f1a, 0x260f3a, indexMatriMSprites_Clara, 0x00 },
    { L"EX/Super Trail Zombie", 0x260f3a, 0x260f5a, indexMatriMSprites_Clara, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x260f5a, 0x260f7a, indexMatriMSprites_Clara, 0x00 },
};

const sGame_PaletteDataset BnK_P_CLARA_EXTREME_PALETTES[] =
{
    { L"Kurara Extreme", 0x260f7a, 0x260f9a, indexMatriMSprites_Clara, 0x00 },
    { L"Miracle Attack Extreme", 0x260f9a, 0x260fba, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack Extreme (Unused)", 0x260fba, 0x260fda, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang Extreme (Unused)", 0x260fda, 0x260ffa, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss Extreme (Unused)", 0x260ffa, 0x26101a, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution Extreme (Unused)", 0x26101a, 0x26103a, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 Extreme", 0x26103a, 0x26105a, indexMatriMSprites_Clara, 0x00 },
    { L"Winpose Flash 2 Extreme", 0x26105a, 0x26107a, indexMatriMSprites_Clara, 0x00 },
    { L"Violent In-Pack Rabbit Extreme", 0x26107a, 0x26109a, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 Extreme", 0x26109a, 0x2610ba, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 Extreme", 0x2610ba, 0x2610da, indexMatriMSprites_Clara, 0x08 },
    { L"Kurara Flash Extreme (Unused)", 0x2610da, 0x2610fa, indexMatriMSprites_Clara, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x2610fa, 0x26111a, indexMatriMSprites_Clara, 0x00 },
    { L"EX/Super Trail Extreme", 0x26111a, 0x26113a, indexMatriMSprites_Clara, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x26113a, 0x26115a, indexMatriMSprites_Clara, 0x00 },
};

const sGame_PaletteDataset BnK_P_CLARA_WHITE_PALETTES[] =
{
    { L"Kurara White", 0x26115a, 0x26117a, indexMatriMSprites_Clara, 0x00 },
    { L"Miracle Attack White", 0x26117a, 0x26119a, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack White (Unused)", 0x26119a, 0x2611ba, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang White (Unused)", 0x2611ba, 0x2611da, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss White (Unused)", 0x2611da, 0x2611fa, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution White (Unused)", 0x2611fa, 0x26121a, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 White", 0x26121a, 0x26123a, indexMatriMSprites_Clara, 0x00 },
    { L"Winpose Flash 2 White", 0x26123a, 0x26125a, indexMatriMSprites_Clara, 0x00 },
    { L"Violent In-Pack Rabbit White", 0x26125a, 0x26127a, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 White", 0x26127a, 0x26129a, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 White", 0x26129a, 0x2612ba, indexMatriMSprites_Clara, 0x08 },
    { L"Kurara Flash White (Unused)", 0x2612ba, 0x2612da, indexMatriMSprites_Clara, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x2612da, 0x2612fa, indexMatriMSprites_Clara, 0x00 },
    { L"EX/Super Trail White", 0x2612fa, 0x26131a, indexMatriMSprites_Clara, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x26131a, 0x26133a, indexMatriMSprites_Clara, 0x00 },
};

const sGame_PaletteDataset BnK_P_SUPERKURARA_A_PALETTES[] =
{
    { L"Super Kurara A", 0x26b426, 0x26b446, indexBnKSprites_SuperKurara, 0x00 },
    { L"Unused Extra 1 A", 0x26b446, 0x26b466 },
    { L"Kurara Transformation Flash 1 A", 0x26b466, 0x26b486, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 2 A", 0x26b486, 0x26b4a6, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 3 A", 0x26b4a6, 0x26b4c6, indexMatriMSprites_Clara, 0x00 },
    { L"Unused Extra 2 A", 0x26b4c6, 0x26b4e6 },
    { L"Super Kurara Flash 1 A", 0x26b4e6, 0x26b506, indexBnKSprites_SuperKurara, 0x00 },
    { L"Super Kurara Flash 2 A", 0x26b506, 0x26b526, indexBnKSprites_SuperKurara, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x26b526, 0x26b546, indexBnKSprites_SuperKurara, 0x00 },
    { L"EX/Super Trail A", 0x26b546, 0x26b566, indexBnKSprites_SuperKurara, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x26b566, 0x26b586, indexBnKSprites_SuperKurara, 0x00 },
};

const sGame_PaletteDataset BnK_P_SUPERKURARA_B_PALETTES[] =
{
    { L"Super Kurara B", 0x26b586, 0x26b5a6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Unused Extra 1 B", 0x26b5a6, 0x26b5c6 },
    { L"Kurara Transformation Flash 1 B", 0x26b5c6, 0x26b5e6, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 2 B", 0x26b5e6, 0x26b606, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 3 B", 0x26b606, 0x26b626, indexMatriMSprites_Clara, 0x00 },
    { L"Unused Extra 2 B", 0x26b626, 0x26b646 },
    { L"Super Kurara Flash 1 B", 0x26b646, 0x26b666, indexBnKSprites_SuperKurara, 0x00 },
    { L"Super Kurara Flash 2 B", 0x26b666, 0x26b686, indexBnKSprites_SuperKurara, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x26b686, 0x26b6a6, indexBnKSprites_SuperKurara, 0x00 },
    { L"EX/Super Trail B", 0x26b6a6, 0x26b6c6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x26b6c6, 0x26b6e6, indexBnKSprites_SuperKurara, 0x00 },
};

const sGame_PaletteDataset BnK_P_SUPERKURARA_C_PALETTES[] =
{
    { L"Super Kurara C", 0x26b6e6, 0x26b706, indexBnKSprites_SuperKurara, 0x00 },
    { L"Unused Extra 1 C", 0x26b706, 0x26b726 },
    { L"Kurara Transformation Flash 1 C", 0x26b726, 0x26b746, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 2 C", 0x26b746, 0x26b766, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 3 C", 0x26b766, 0x26b786, indexMatriMSprites_Clara, 0x00 },
    { L"Unused Extra 2 C", 0x26b786, 0x26b7a6 },
    { L"Super Kurara Flash 1 C", 0x26b7a6, 0x26b7c6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Super Kurara Flash 2 C", 0x26b7c6, 0x26b7e6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x26b7e6, 0x26b806, indexBnKSprites_SuperKurara, 0x00 },
    { L"EX/Super Trail C", 0x26b806, 0x26b826, indexBnKSprites_SuperKurara, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x26b826, 0x26b846, indexBnKSprites_SuperKurara, 0x00 },
};

const sGame_PaletteDataset BnK_P_SUPERKURARA_D_PALETTES[] =
{
    { L"Super Kurara D", 0x26b846, 0x26b866, indexBnKSprites_SuperKurara, 0x00 },
    { L"Unused Extra 1 D", 0x26b866, 0x26b886 },
    { L"Kurara Transformation Flash 1 D", 0x26b886, 0x26b8a6, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 2 D", 0x26b8a6, 0x26b8c6, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 3 D", 0x26b8c6, 0x26b8e6, indexMatriMSprites_Clara, 0x00 },
    { L"Unused Extra 2 D", 0x26b8e6, 0x26b906 },
    { L"Super Kurara Flash 1 D", 0x26b906, 0x26b926, indexBnKSprites_SuperKurara, 0x00 },
    { L"Super Kurara Flash 2 D", 0x26b926, 0x26b946, indexBnKSprites_SuperKurara, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x26b946, 0x26b966, indexBnKSprites_SuperKurara, 0x00 },
    { L"EX/Super Trail D", 0x26b966, 0x26b986, indexBnKSprites_SuperKurara, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x26b986, 0x26b9a6, indexBnKSprites_SuperKurara, 0x00 },
};

const sGame_PaletteDataset BnK_P_SUPERKURARA_SUMMER_PALETTES[] =
{
    { L"Super Kurara Summer", 0x26b9a6, 0x26b9c6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Unused Extra 1 Summer", 0x26b9c6, 0x26b9e6 },
    { L"Kurara Transformation Flash 1 Summer", 0x26b9e6, 0x26ba06, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 2 Summer", 0x26ba06, 0x26ba26, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 3 Summer", 0x26ba26, 0x26ba46, indexMatriMSprites_Clara, 0x00 },
    { L"Unused Extra 2 Summer", 0x26ba46, 0x26ba66 },
    { L"Super Kurara Flash 1 Summer", 0x26ba66, 0x26ba86, indexBnKSprites_SuperKurara, 0x00 },
    { L"Super Kurara Flash 2 Summer", 0x26ba86, 0x26baa6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x26baa6, 0x26bac6, indexBnKSprites_SuperKurara, 0x00 },
    { L"EX/Super Trail Summer", 0x26bac6, 0x26bae6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x26bae6, 0x26bb06, indexBnKSprites_SuperKurara, 0x00 },
};

const sGame_PaletteDataset BnK_P_SUPERKURARA_ZOMBIE_PALETTES[] =
{
    { L"Super Kurara Zombie", 0x26bb06, 0x26bb26, indexBnKSprites_SuperKurara, 0x00 },
    { L"Unused Extra 1 Zombie", 0x26bb26, 0x26bb46 },
    { L"Kurara Transformation Flash 1 Zombie", 0x26bb46, 0x26bb66, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 2 Zombie", 0x26bb66, 0x26bb86, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 3 Zombie", 0x26bb86, 0x26bba6, indexMatriMSprites_Clara, 0x00 },
    { L"Unused Extra 2 Zombie", 0x26bba6, 0x26bbc6 },
    { L"Super Kurara Flash 1 Zombie", 0x26bbc6, 0x26bbe6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Super Kurara Flash 2 Zombie", 0x26bbe6, 0x26bc06, indexBnKSprites_SuperKurara, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x26bc06, 0x26bc26, indexBnKSprites_SuperKurara, 0x00 },
    { L"EX/Super Trail Zombie", 0x26bc26, 0x26bc46, indexBnKSprites_SuperKurara, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x26bc46, 0x26bc66, indexBnKSprites_SuperKurara, 0x00 },
};

const sGame_PaletteDataset BnK_P_SUPERKURARA_EXTREME_PALETTES[] =
{
    { L"Super Kurara Extreme", 0x26bc66, 0x26bc86, indexBnKSprites_SuperKurara, 0x00 },
    { L"Unused Extra 1 Extreme", 0x26bc86, 0x26bca6 },
    { L"Kurara Transformation Flash 1 Extreme", 0x26bca6, 0x26bcc6, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 2 Extreme", 0x26bcc6, 0x26bce6, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 3 Extreme", 0x26bce6, 0x26bd06, indexMatriMSprites_Clara, 0x00 },
    { L"Unused Extra 2 Extreme", 0x26bd06, 0x26bd26 },
    { L"Super Kurara Flash 1 Extreme", 0x26bd26, 0x26bd46, indexBnKSprites_SuperKurara, 0x00 },
    { L"Super Kurara Flash 2 Extreme", 0x26bd46, 0x26bd66, indexBnKSprites_SuperKurara, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x26bd66, 0x26bd86, indexBnKSprites_SuperKurara, 0x00 },
    { L"EX/Super Trail Extreme", 0x26bd86, 0x26bda6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x26bda6, 0x26bdc6, indexBnKSprites_SuperKurara, 0x00 },
};

const sGame_PaletteDataset BnK_P_SUPERKURARA_WHITE_PALETTES[] =
{
    { L"Super Kurara White", 0x26bdc6, 0x26bde6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Unused Extra 1 White", 0x26bde6, 0x26be06 },
    { L"Kurara Transformation Flash 1 White", 0x26be06, 0x26be26, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 2 White", 0x26be26, 0x26be46, indexMatriMSprites_Clara, 0x00 },
    { L"Kurara Transformation Flash 3 White", 0x26be46, 0x26be66, indexMatriMSprites_Clara, 0x00 },
    { L"Unused Extra 2 White", 0x26be66, 0x26be86 },
    { L"Super Kurara Flash 1 White", 0x26be86, 0x26bea6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Super Kurara Flash 2 White", 0x26bea6, 0x26bec6, indexBnKSprites_SuperKurara, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x26bec6, 0x26bee6, indexBnKSprites_SuperKurara, 0x00 },
    { L"EX/Super Trail White", 0x26bee6, 0x26bf06, indexBnKSprites_SuperKurara, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x26bf06, 0x26bf26, indexBnKSprites_SuperKurara, 0x00 },
};

const sGame_PaletteDataset BnK_P_ELIAS_A_PALETTES[] =
{
    { L"Elias A", 0x2671cc, 0x2671ec, indexMatriMSprites_Elias, 0x00 },
    { L"Sinful A", 0x2671ec, 0x26720c },
    { L"Magnus A", 0x26720c, 0x26722c },
    { L"Maximum Desiderium A", 0x26722c, 0x26724c },
    { L"Holy Flare A", 0x26724c, 0x26726c },
    { L"Rolling/Super Jump Trail A", 0x26726c, 0x26728c, indexMatriMSprites_Elias, 0x00 },
    { L"EX/Super Trail A", 0x26728c, 0x2672ac, indexMatriMSprites_Elias, 0x00 },
    { L"Guard Cancel Trail A", 0x2672ac, 0x2672cc, indexMatriMSprites_Elias, 0x00 },
    { L"HUD Portrait A (Unused)", 0x2672cc, 0x2672ec, indexMatriMSprites_Elias, 0x31 },
};

const sGame_PaletteDataset BnK_P_ELIAS_B_PALETTES[] =
{
    { L"Elias B", 0x2672ec, 0x26730c, indexMatriMSprites_Elias, 0x00 },
    { L"Sinful B", 0x26730c, 0x26732c },
    { L"Magnus B", 0x26732c, 0x26734c },
    { L"Maximum Desiderium B", 0x26734c, 0x26736c },
    { L"Holy Flare B", 0x26736c, 0x26738c },
    { L"Rolling/Super Jump Trail B", 0x26738c, 0x2673ac, indexMatriMSprites_Elias, 0x00 },
    { L"EX/Super Trail B", 0x2673ac, 0x2673cc, indexMatriMSprites_Elias, 0x00 },
    { L"Guard Cancel Trail B", 0x2673cc, 0x2673ec, indexMatriMSprites_Elias, 0x00 },
    { L"HUD Portrait B (Unused)", 0x2673ec, 0x26740c, indexMatriMSprites_Elias, 0x31 },
};

const sGame_PaletteDataset BnK_P_ELIAS_C_PALETTES[] =
{
    { L"Elias C", 0x26740c, 0x26742c, indexMatriMSprites_Elias, 0x00 },
    { L"Sinful C", 0x26742c, 0x26744c },
    { L"Magnus C", 0x26744c, 0x26746c },
    { L"Maximum Desiderium C", 0x26746c, 0x26748c },
    { L"Holy Flare C", 0x26748c, 0x2674ac },
    { L"Rolling/Super Jump Trail C", 0x2674ac, 0x2674cc, indexMatriMSprites_Elias, 0x00 },
    { L"EX/Super Trail C", 0x2674cc, 0x2674ec, indexMatriMSprites_Elias, 0x00 },
    { L"Guard Cancel Trail C", 0x2674ec, 0x26750c, indexMatriMSprites_Elias, 0x00 },
    { L"HUD Portrait C (Unused)", 0x26750c, 0x26752c, indexMatriMSprites_Elias, 0x31 },
};

const sGame_PaletteDataset BnK_P_ELIAS_D_PALETTES[] =
{
    { L"Elias D", 0x26752c, 0x26754c, indexMatriMSprites_Elias, 0x00 },
    { L"Sinful D", 0x26754c, 0x26756c },
    { L"Magnus D", 0x26756c, 0x26758c },
    { L"Maximum Desiderium D", 0x26758c, 0x2675ac },
    { L"Holy Flare D", 0x2675ac, 0x2675cc },
    { L"Rolling/Super Jump Trail D", 0x2675cc, 0x2675ec, indexMatriMSprites_Elias, 0x00 },
    { L"EX/Super Trail D", 0x2675ec, 0x26760c, indexMatriMSprites_Elias, 0x00 },
    { L"Guard Cancel Trail D", 0x26760c, 0x26762c, indexMatriMSprites_Elias, 0x00 },
    { L"HUD Portrait D (Unused)", 0x26762c, 0x26764c, indexMatriMSprites_Elias, 0x31 },
};

const sGame_PaletteDataset BnK_P_ELIAS_SHARED_PALETTES[] =
{
    { L"Shared Portrait (Unused)", 0x26764c, 0x2676cc, indexMatriMSprites_Elias, 0x30 },
};

const sGame_PaletteDataset BnK_P_HIKARU_A_PALETTES[] =
{
    { L"Hikaru A", 0x26522c, 0x26524c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x26524c, 0x26526c, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail A", 0x26526c, 0x26528c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x26528c, 0x2652ac, indexMatriMSprites_Hikaru, 0x00 },
    { L"HUD Portrait A (Unused)", 0x2652ac, 0x2652cc, indexMatriMSprites_Hikaru, 0x31 },
};

const sGame_PaletteDataset BnK_P_HIKARU_B_PALETTES[] =
{
    { L"Hikaru B", 0x2652cc, 0x2652ec, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x2652ec, 0x26530c, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail B", 0x26530c, 0x26532c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x26532c, 0x26534c, indexMatriMSprites_Hikaru, 0x00 },
    { L"HUD Portrait B (Unused)", 0x26534c, 0x26536c, indexMatriMSprites_Hikaru, 0x31 },
};

const sGame_PaletteDataset BnK_P_HIKARU_C_PALETTES[] =
{
    { L"Hikaru C", 0x26536c, 0x26538c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x26538c, 0x2653ac, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail C", 0x2653ac, 0x2653cc, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x2653cc, 0x2653ec, indexMatriMSprites_Hikaru, 0x00 },
    { L"HUD Portrait C (Unused)", 0x2653ec, 0x26540c, indexMatriMSprites_Hikaru, 0x31 },
};

const sGame_PaletteDataset BnK_P_HIKARU_D_PALETTES[] =
{
    { L"Hikaru D", 0x26540c, 0x26542c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x26542c, 0x26544c, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail D", 0x26544c, 0x26546c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x26546c, 0x26548c, indexMatriMSprites_Hikaru, 0x00 },
    { L"HUD Portrait D (Unused)", 0x26548c, 0x2654ac, indexMatriMSprites_Hikaru, 0x31 },
};

const sGame_PaletteDataset BnK_P_HIKARU_SUMMER_PALETTES[] =
{
    { L"Hikaru Summer", 0x2654ac, 0x2654cc, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x2654cc, 0x2654ec, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail Summer", 0x2654ec, 0x26550c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x26550c, 0x26552c, indexMatriMSprites_Hikaru, 0x00 },
};

const sGame_PaletteDataset BnK_P_HIKARU_ZOMBIE_PALETTES[] =
{
    { L"Hikaru Zombie", 0x26552c, 0x26554c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x26554c, 0x26556c, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail Zombie", 0x26556c, 0x26558c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x26558c, 0x2655ac, indexMatriMSprites_Hikaru, 0x00 },
};

const sGame_PaletteDataset BnK_P_HIKARU_EXTREME_PALETTES[] =
{
    { L"Hikaru Extreme", 0x2655ac, 0x2655cc, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x2655cc, 0x2655ec, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail Extreme", 0x2655ec, 0x26560c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x26560c, 0x26562c, indexMatriMSprites_Hikaru, 0x00 },
};

const sGame_PaletteDataset BnK_P_HIKARU_WHITE_PALETTES[] =
{
    { L"Hikaru White", 0x26562c, 0x26564c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x26564c, 0x26566c, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail White", 0x26566c, 0x26568c, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x26568c, 0x2656ac, indexMatriMSprites_Hikaru, 0x00 },
};

const sGame_PaletteDataset BnK_P_JIMMY_A_PALETTES[] =
{
    { L"Jimmy A", 0x2676ce, 0x2676ee, indexMatriMSprites_Jimmy, 0x00, &pairNext2 },
    { L"Fire Attacks A", 0x2676ee, 0x26770e, indexMatriMSprites_Jimmy, 0x08 },
    { L"Intro Coat A", 0x26770e, 0x26772e, indexMatriMSprites_Jimmy, 0x01, &pairPrevious2 },
    { L"Rolling/Super Jump Trail A", 0x26772e, 0x26774e, indexMatriMSprites_Jimmy, 0x00 },
    { L"EX/Super Trail A", 0x26774e, 0x26776e, indexMatriMSprites_Jimmy, 0x00 },
    { L"Guard Cancel Trail A", 0x26776e, 0x26778e, indexMatriMSprites_Jimmy, 0x00 },
    { L"HUD Portrait A (Unused)", 0x26778e, 0x2677ae, indexMatriMSprites_Jimmy, 0x31 },
};

const sGame_PaletteDataset BnK_P_JIMMY_B_PALETTES[] =
{
    { L"Jimmy B", 0x2677ae, 0x2677ce, indexMatriMSprites_Jimmy, 0x00, &pairNext2 },
    { L"Fire Attacks B", 0x2677ce, 0x2677ee, indexMatriMSprites_Jimmy, 0x08 },
    { L"Intro Coat B", 0x2677ee, 0x26780e, indexMatriMSprites_Jimmy, 0x01, &pairPrevious2 },
    { L"Rolling/Super Jump Trail B", 0x26780e, 0x26782e, indexMatriMSprites_Jimmy, 0x00 },
    { L"EX/Super Trail B", 0x26782e, 0x26784e, indexMatriMSprites_Jimmy, 0x00 },
    { L"Guard Cancel Trail B", 0x26784e, 0x26786e, indexMatriMSprites_Jimmy, 0x00 },
    { L"HUD Portrait B (Unused)", 0x26786e, 0x26788e, indexMatriMSprites_Jimmy, 0x31 },
};

const sGame_PaletteDataset BnK_P_JIMMY_C_PALETTES[] =
{
    { L"Jimmy C", 0x26788e, 0x2678ae, indexMatriMSprites_Jimmy, 0x00, &pairNext2 },
    { L"Fire Attacks C", 0x2678ae, 0x2678ce, indexMatriMSprites_Jimmy, 0x08 },
    { L"Intro Coat C", 0x2678ce, 0x2678ee, indexMatriMSprites_Jimmy, 0x01, &pairPrevious2 },
    { L"Rolling/Super Jump Trail C", 0x2678ee, 0x26790e, indexMatriMSprites_Jimmy, 0x00 },
    { L"EX/Super Trail C", 0x26790e, 0x26792e, indexMatriMSprites_Jimmy, 0x00 },
    { L"Guard Cancel Trail C", 0x26792e, 0x26794e, indexMatriMSprites_Jimmy, 0x00 },
    { L"HUD Portrait C (Unused)", 0x26794e, 0x26796e, indexMatriMSprites_Jimmy, 0x31 },
};

const sGame_PaletteDataset BnK_P_JIMMY_D_PALETTES[] =
{
    { L"Jimmy D", 0x26796e, 0x26798e, indexMatriMSprites_Jimmy, 0x00, &pairNext2 },
    { L"Fire Attacks D", 0x26798e, 0x2679ae, indexMatriMSprites_Jimmy, 0x08 },
    { L"Intro Coat D", 0x2679ae, 0x2679ce, indexMatriMSprites_Jimmy, 0x01, &pairPrevious2 },
    { L"Rolling/Super Jump Trail D", 0x2679ce, 0x2679ee, indexMatriMSprites_Jimmy, 0x00 },
    { L"EX/Super Trail D", 0x2679ee, 0x267a0e, indexMatriMSprites_Jimmy, 0x00 },
    { L"Guard Cancel Trail D", 0x267a0e, 0x267a2e, indexMatriMSprites_Jimmy, 0x00 },
    { L"HUD Portrait D (Unused)", 0x267a2e, 0x267a4e, indexMatriMSprites_Jimmy, 0x31 },
};

const sGame_PaletteDataset BnK_P_JIMMY_SHARED_PALETTES[] =
{
    { L"Shared Portrait (Unused)", 0x267a4e, 0x267aae, indexMatriMSprites_Jimmy, 0x30 },
};

const sGame_PaletteDataset BnK_P_MRJONES_A_PALETTES[] =
{
    { L"Mr. Jones A", 0x266968, 0x266988, indexMatriMSprites_Jones, 0x00 },
    { L"Funky Impact A", 0x266988, 0x2669a8 },
    { L"King Kang A", 0x2669a8, 0x2669c8 },
    { L"Rolling/Super Jump Trail A", 0x2669c8, 0x2669e8, indexMatriMSprites_Jones, 0x00 },
    { L"EX/Super Trail A", 0x2669e8, 0x266a08, indexMatriMSprites_Jones, 0x00 },
    { L"Guard Cancel Trail A", 0x266a08, 0x266a28, indexMatriMSprites_Jones, 0x00 },
    { L"HUD Portrait A (Unused)", 0x266a28, 0x266a48, indexMatriMSprites_Jones, 0x31 },
};

const sGame_PaletteDataset BnK_P_MRJONES_B_PALETTES[] =
{
    { L"Mr. Jones B", 0x266a48, 0x266a68, indexMatriMSprites_Jones, 0x00 },
    { L"Funky Impact B", 0x266a68, 0x266a88 },
    { L"King Kang B", 0x266a88, 0x266aa8 },
    { L"Rolling/Super Jump Trail B", 0x266aa8, 0x266ac8, indexMatriMSprites_Jones, 0x00 },
    { L"EX/Super Trail B", 0x266ac8, 0x266ae8, indexMatriMSprites_Jones, 0x00 },
    { L"Guard Cancel Trail B", 0x266ae8, 0x266b08, indexMatriMSprites_Jones, 0x00 },
    { L"HUD Portrait B (Unused)", 0x266b08, 0x266b28, indexMatriMSprites_Jones, 0x31 },
};

const sGame_PaletteDataset BnK_P_MRJONES_C_PALETTES[] =
{
    { L"Mr. Jones C", 0x266b28, 0x266b48, indexMatriMSprites_Jones, 0x00 },
    { L"Funky Impact C", 0x266b48, 0x266b68 },
    { L"King Kang C", 0x266b68, 0x266b88 },
    { L"Rolling/Super Jump Trail C", 0x266b88, 0x266ba8, indexMatriMSprites_Jones, 0x00 },
    { L"EX/Super Trail C", 0x266ba8, 0x266bc8, indexMatriMSprites_Jones, 0x00 },
    { L"Guard Cancel Trail C", 0x266bc8, 0x266be8, indexMatriMSprites_Jones, 0x00 },
    { L"HUD Portrait C (Unused)", 0x266be8, 0x266c08, indexMatriMSprites_Jones, 0x31 },
};

const sGame_PaletteDataset BnK_P_MRJONES_D_PALETTES[] =
{
    { L"Mr. Jones D", 0x266c08, 0x266c28, indexMatriMSprites_Jones, 0x00 },
    { L"Funky Impact D", 0x266c28, 0x266c48 },
    { L"King Kang D", 0x266c48, 0x266c68 },
    { L"Rolling/Super Jump Trail D", 0x266c68, 0x266c88, indexMatriMSprites_Jones, 0x00 },
    { L"EX/Super Trail D", 0x266c88, 0x266ca8, indexMatriMSprites_Jones, 0x00 },
    { L"Guard Cancel Trail D", 0x266ca8, 0x266cc8, indexMatriMSprites_Jones, 0x00 },
    { L"HUD Portrait D (Unused)", 0x266cc8, 0x266ce8, indexMatriMSprites_Jones, 0x31 },
};

const sGame_PaletteDataset BnK_P_MRJONES_SHARED_PALETTES[] =
{
    { L"Shared Portrait (Unused)", 0x266ce8, 0x266d48, indexMatriMSprites_Jones, 0x30 },
};

const sGame_PaletteDataset BnK_P_KANJI_WEAK_A_PALETTES[] =
{
    { L"Kanji A (Weak)", 0x26133c, 0x26135c, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou A (Unused)", 0x26135c, 0x26137c },
    { L"Spirit Power A (Unused)", 0x26137c, 0x26139c },
    { L"Bakuretsu Houhi A (Unused)", 0x26139c, 0x2613bc },
    { L"Restore to Life A (Unused)", 0x2613bc, 0x2613dc },
    { L"Rolling/Super Jump Trail A", 0x2613dc, 0x2613fc, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail A", 0x2613fc, 0x26141c, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x26141c, 0x26143c, indexMatriMSprites_Kanji, 0x00 },
    { L"HUD Portrait A (Unused)", 0x26143c, 0x26145c, indexMatriMSprites_Kanji, 0x31 },
};

const sGame_PaletteDataset BnK_P_KANJI_WEAK_B_PALETTES[] =
{
    { L"Kanji B (Weak)", 0x26145c, 0x26147c, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou B (Unused)", 0x26147c, 0x26149c },
    { L"Spirit Power B (Unused)", 0x26149c, 0x2614bc },
    { L"Bakuretsu Houhi B (Unused)", 0x2614bc, 0x2614dc },
    { L"Restore to Life B (Unused)", 0x2614dc, 0x2614fc },
    { L"Rolling/Super Jump Trail B", 0x2614fc, 0x26151c, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail B", 0x26151c, 0x26153c, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x26153c, 0x26155c, indexMatriMSprites_Kanji, 0x00 },
    { L"HUD Portrait B (Unused)", 0x26155c, 0x26157c, indexMatriMSprites_Kanji, 0x31 },
};

const sGame_PaletteDataset BnK_P_KANJI_WEAK_C_PALETTES[] =
{
    { L"Kanji C (Weak)", 0x26157c, 0x26159c, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou C (Unused)", 0x26159c, 0x2615bc },
    { L"Spirit Power C (Unused)", 0x2615bc, 0x2615dc },
    { L"Bakuretsu Houhi C (Unused)", 0x2615dc, 0x2615fc },
    { L"Restore to Life C (Unused)", 0x2615fc, 0x26161c },
    { L"Rolling/Super Jump Trail C", 0x26161c, 0x26163c, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail C", 0x26163c, 0x26165c, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x26165c, 0x26167c, indexMatriMSprites_Kanji, 0x00 },
    { L"HUD Portrait C (Unused)", 0x26167c, 0x26169c, indexMatriMSprites_Kanji, 0x31 },
};

const sGame_PaletteDataset BnK_P_KANJI_WEAK_D_PALETTES[] =
{
    { L"Kanji D (Weak)", 0x26169c, 0x2616bc, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou D (Unused)", 0x2616bc, 0x2616dc },
    { L"Spirit Power D (Unused)", 0x2616dc, 0x2616fc },
    { L"Bakuretsu Houhi D (Unused)", 0x2616fc, 0x26171c },
    { L"Restore to Life D (Unused)", 0x26171c, 0x26173c },
    { L"Rolling/Super Jump Trail D", 0x26173c, 0x26175c, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail D", 0x26175c, 0x26177c, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x26177c, 0x26179c, indexMatriMSprites_Kanji, 0x00 },
    { L"HUD Portrait D (Unused)", 0x26179c, 0x2617bc, indexMatriMSprites_Kanji, 0x31 },
};

const sGame_PaletteDataset BnK_P_KANJI_WEAK_SUMMER_PALETTES[] =
{
    { L"Kanji Summer (Weak)", 0x2617bc, 0x2617dc, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou Summer (Unused)", 0x2617dc, 0x2617fc },
    { L"Spirit Power Summer (Unused)", 0x2617fc, 0x26181c },
    { L"Bakuretsu Houhi Summer (Unused)", 0x26181c, 0x26183c },
    { L"Restore to Life Summer (Unused)", 0x26183c, 0x26185c },
    { L"Rolling/Super Jump Trail Summer", 0x26185c, 0x26187c, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail Summer", 0x26187c, 0x26189c, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x26189c, 0x2618bc, indexMatriMSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_WEAK_ZOMBIE_PALETTES[] =
{
    { L"Kanji Zombie (Weak)", 0x2618bc, 0x2618dc, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou Zombie (Unused)", 0x2618dc, 0x2618fc },
    { L"Spirit Power Zombie (Unused)", 0x2618fc, 0x26191c },
    { L"Bakuretsu Houhi Zombie (Unused)", 0x26191c, 0x26193c },
    { L"Restore to Life Zombie (Unused)", 0x26193c, 0x26195c },
    { L"Rolling/Super Jump Trail Zombie", 0x26195c, 0x26197c, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail Zombie", 0x26197c, 0x26199c, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x26199c, 0x2619bc, indexMatriMSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_WEAK_EXTREME_PALETTES[] =
{
    { L"Kanji Extreme (Weak)", 0x2619bc, 0x2619dc, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou Extreme (Unused)", 0x2619dc, 0x2619fc },
    { L"Spirit Power Extreme (Unused)", 0x2619fc, 0x261a1c },
    { L"Bakuretsu Houhi Extreme (Unused)", 0x261a1c, 0x261a3c },
    { L"Restore to Life Extreme (Unused)", 0x261a3c, 0x261a5c },
    { L"Rolling/Super Jump Trail Extreme", 0x261a5c, 0x261a7c, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail Extreme", 0x261a7c, 0x261a9c, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x261a9c, 0x261abc, indexMatriMSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_WEAK_WHITE_PALETTES[] =
{
    { L"Kanji White (Weak)", 0x261abc, 0x261adc, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou White (Unused)", 0x261adc, 0x261afc },
    { L"Spirit Power White (Unused)", 0x261afc, 0x261b1c },
    { L"Bakuretsu Houhi White (Unused)", 0x261b1c, 0x261b3c },
    { L"Restore to Life White (Unused)", 0x261b3c, 0x261b5c },
    { L"Rolling/Super Jump Trail White", 0x261b5c, 0x261b7c, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail White", 0x261b7c, 0x261b9c, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x261b9c, 0x261bbc, indexMatriMSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_STRONG_A_PALETTES[] =
{
    { L"Kanji A (Strong)", 0x2696fe, 0x26971e, indexBnKSprites_Kanji, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x26971e, 0x26973e, indexBnKSprites_Kanji, 0x00 },
    { L"EX/Super Trail A", 0x26973e, 0x26975e, indexBnKSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x26975e, 0x26977e, indexBnKSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_STRONG_B_PALETTES[] =
{
    { L"Kanji B (Strong)", 0x26977e, 0x26979e, indexBnKSprites_Kanji, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x26979e, 0x2697be, indexBnKSprites_Kanji, 0x00 },
    { L"EX/Super Trail B", 0x2697be, 0x2697de, indexBnKSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x2697de, 0x2697fe, indexBnKSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_STRONG_C_PALETTES[] =
{
    { L"Kanji C (Strong)", 0x2697fe, 0x26981e, indexBnKSprites_Kanji, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x26981e, 0x26983e, indexBnKSprites_Kanji, 0x00 },
    { L"EX/Super Trail C", 0x26983e, 0x26985e, indexBnKSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x26985e, 0x26987e, indexBnKSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_STRONG_D_PALETTES[] =
{
    { L"Kanji D (Strong)", 0x26987e, 0x26989e, indexBnKSprites_Kanji, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x26989e, 0x2698be, indexBnKSprites_Kanji, 0x00 },
    { L"EX/Super Trail D", 0x2698be, 0x2698de, indexBnKSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x2698de, 0x2698fe, indexBnKSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_STRONG_SUMMER_PALETTES[] =
{
    { L"Kanji Summer (Strong)", 0x2698fe, 0x26991e, indexBnKSprites_Kanji, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x26991e, 0x26993e, indexBnKSprites_Kanji, 0x00 },
    { L"EX/Super Trail Summer", 0x26993e, 0x26995e, indexBnKSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x26995e, 0x26997e, indexBnKSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_STRONG_ZOMBIE_PALETTES[] =
{
    { L"Kanji Zombie (Strong)", 0x26997e, 0x26999e, indexBnKSprites_Kanji, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x26999e, 0x2699be, indexBnKSprites_Kanji, 0x00 },
    { L"EX/Super Trail Zombie", 0x2699be, 0x2699de, indexBnKSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x2699de, 0x2699fe, indexBnKSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_STRONG_EXTREME_PALETTES[] =
{
    { L"Kanji Extreme (Strong)", 0x2699fe, 0x269a1e, indexBnKSprites_Kanji, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x269a1e, 0x269a3e, indexBnKSprites_Kanji, 0x00 },
    { L"EX/Super Trail Extreme", 0x269a3e, 0x269a5e, indexBnKSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x269a5e, 0x269a7e, indexBnKSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KANJI_STRONG_WHITE_PALETTES[] =
{
    { L"Kanji White (Strong)", 0x269a7e, 0x269a9e, indexBnKSprites_Kanji, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x269a9e, 0x269abe, indexBnKSprites_Kanji, 0x00 },
    { L"EX/Super Trail White", 0x269abe, 0x269ade, indexBnKSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x269ade, 0x269afe, indexBnKSprites_Kanji, 0x00 },
};

const sGame_PaletteDataset BnK_P_KINTARO_A_PALETTES[] =
{
    { L"Kintaro A", 0x269b00, 0x269b20, indexBnKSprites_Kintaro, 0x00 },
    { L"Unused Extra 1 A", 0x269b20, 0x269b40 },
    { L"Unused Extra 2 A", 0x269b40, 0x269b60 },
    { L"Boon Swing A", 0x269b60, 0x269b80, indexBnKSprites_Kintaro, 0x01 },
    { L"Unused Extra 3 A", 0x269b80, 0x269ba0 },
    { L"Stress Shot Bear A", 0x269ba0, 0x269bc0, indexBnKSprites_Kintaro, 0x02 },
    { L"Unused Extra 4 A", 0x269bc0, 0x269be0 },
    { L"Poochy A (Transformation)", 0x269be0, 0x269c00, indexMatriMSprites_Poochy, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x269c00, 0x269c20, indexBnKSprites_Kintaro, 0x00 },
    { L"EX/Super Trail A", 0x269c20, 0x269c40, indexBnKSprites_Kintaro, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x269c40, 0x269c60, indexBnKSprites_Kintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_KINTARO_B_PALETTES[] =
{
    { L"Kintaro B", 0x269c60, 0x269c80, indexBnKSprites_Kintaro, 0x00 },
    { L"Unused Extra 1 B", 0x269c80, 0x269ca0 },
    { L"Unused Extra 2 B", 0x269ca0, 0x269cc0 },
    { L"Boon Swing B", 0x269cc0, 0x269ce0, indexBnKSprites_Kintaro, 0x01 },
    { L"Unused Extra 3 B", 0x269ce0, 0x269d00 },
    { L"Stress Shot Bear B", 0x269d00, 0x269d20, indexBnKSprites_Kintaro, 0x02 },
    { L"Unused Extra 4 B", 0x269d20, 0x269d40 },
    { L"Poochy B (Transformation)", 0x269d40, 0x269d60, indexMatriMSprites_Poochy, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x269d60, 0x269d80, indexBnKSprites_Kintaro, 0x00 },
    { L"EX/Super Trail B", 0x269d80, 0x269da0, indexBnKSprites_Kintaro, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x269da0, 0x269dc0, indexBnKSprites_Kintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_KINTARO_C_PALETTES[] =
{
    { L"Kintaro C", 0x269dc0, 0x269de0, indexBnKSprites_Kintaro, 0x00 },
    { L"Unused Extra 1 C", 0x269de0, 0x269e00 },
    { L"Unused Extra 2 C", 0x269e00, 0x269e20 },
    { L"Boon Swing C", 0x269e20, 0x269e40, indexBnKSprites_Kintaro, 0x01 },
    { L"Unused Extra 3 C", 0x269e40, 0x269e60 },
    { L"Stress Shot Bear C", 0x269e60, 0x269e80, indexBnKSprites_Kintaro, 0x02 },
    { L"Unused Extra 4 C", 0x269e80, 0x269ea0 },
    { L"Poochy C (Transformation)", 0x269ea0, 0x269ec0, indexMatriMSprites_Poochy, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x269ec0, 0x269ee0, indexBnKSprites_Kintaro, 0x00 },
    { L"EX/Super Trail C", 0x269ee0, 0x269f00, indexBnKSprites_Kintaro, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x269f00, 0x269f20, indexBnKSprites_Kintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_KINTARO_D_PALETTES[] =
{
    { L"Kintaro D", 0x269f20, 0x269f40, indexBnKSprites_Kintaro, 0x00 },
    { L"Unused Extra 1 D", 0x269f40, 0x269f60 },
    { L"Unused Extra 2 D", 0x269f60, 0x269f80 },
    { L"Boon Swing D", 0x269f80, 0x269fa0, indexBnKSprites_Kintaro, 0x01 },
    { L"Unused Extra 3 D", 0x269fa0, 0x269fc0 },
    { L"Stress Shot Bear D", 0x269fc0, 0x269fe0, indexBnKSprites_Kintaro, 0x02 },
    { L"Unused Extra 4 D", 0x269fe0, 0x26a000 },
    { L"Poochy D (Transformation)", 0x26a000, 0x26a020, indexMatriMSprites_Poochy, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x26a020, 0x26a040, indexBnKSprites_Kintaro, 0x00 },
    { L"EX/Super Trail D", 0x26a040, 0x26a060, indexBnKSprites_Kintaro, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x26a060, 0x26a080, indexBnKSprites_Kintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_KINTARO_SUMMER_PALETTES[] =
{
    { L"Kintaro Summer", 0x26a080, 0x26a0a0, indexBnKSprites_Kintaro, 0x00 },
    { L"Unused Extra 1 Summer", 0x26a0a0, 0x26a0c0 },
    { L"Unused Extra 2 Summer", 0x26a0c0, 0x26a0e0 },
    { L"Boon Swing Summer", 0x26a0e0, 0x26a100, indexBnKSprites_Kintaro, 0x01 },
    { L"Unused Extra 3 Summer", 0x26a100, 0x26a120 },
    { L"Stress Shot Bear Summer", 0x26a120, 0x26a140, indexBnKSprites_Kintaro, 0x02 },
    { L"Unused Extra 4 Summer", 0x26a140, 0x26a160 },
    { L"Poochy Summer (Transformation)", 0x26a160, 0x26a180, indexMatriMSprites_Poochy, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x26a180, 0x26a1a0, indexBnKSprites_Kintaro, 0x00 },
    { L"EX/Super Trail Summer", 0x26a1a0, 0x26a1c0, indexBnKSprites_Kintaro, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x26a1c0, 0x26a1e0, indexBnKSprites_Kintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_KINTARO_ZOMBIE_PALETTES[] =
{
    { L"Kintaro Zombie", 0x26a1e0, 0x26a200, indexBnKSprites_Kintaro, 0x00 },
    { L"Unused Extra 1 Zombie", 0x26a200, 0x26a220 },
    { L"Unused Extra 2 Zombie", 0x26a220, 0x26a240 },
    { L"Boon Swing Zombie", 0x26a240, 0x26a260, indexBnKSprites_Kintaro, 0x01 },
    { L"Unused Extra 3 Zombie", 0x26a260, 0x26a280 },
    { L"Stress Shot Bear Zombie", 0x26a280, 0x26a2a0, indexBnKSprites_Kintaro, 0x02 },
    { L"Unused Extra 4 Zombie", 0x26a2a0, 0x26a2c0 },
    { L"Poochy Zombie (Transformation)", 0x26a2c0, 0x26a2e0, indexMatriMSprites_Poochy, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x26a2e0, 0x26a300, indexBnKSprites_Kintaro, 0x00 },
    { L"EX/Super Trail Zombie", 0x26a300, 0x26a320, indexBnKSprites_Kintaro, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x26a320, 0x26a340, indexBnKSprites_Kintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_KINTARO_EXTREME_PALETTES[] =
{
    { L"Kintaro Extreme", 0x26a340, 0x26a360, indexBnKSprites_Kintaro, 0x00 },
    { L"Unused Extra 1 Extreme", 0x26a360, 0x26a380 },
    { L"Unused Extra 2 Extreme", 0x26a380, 0x26a3a0 },
    { L"Boon Swing Extreme", 0x26a3a0, 0x26a3c0, indexBnKSprites_Kintaro, 0x01 },
    { L"Unused Extra 3 Extreme", 0x26a3c0, 0x26a3e0 },
    { L"Stress Shot Bear Extreme", 0x26a3e0, 0x26a400, indexBnKSprites_Kintaro, 0x02 },
    { L"Unused Extra 4 Extreme", 0x26a400, 0x26a420 },
    { L"Poochy Extreme (Transformation)", 0x26a420, 0x26a440, indexMatriMSprites_Poochy, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x26a440, 0x26a460, indexBnKSprites_Kintaro, 0x00 },
    { L"EX/Super Trail Extreme", 0x26a460, 0x26a480, indexBnKSprites_Kintaro, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x26a480, 0x26a4a0, indexBnKSprites_Kintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_KINTARO_WHITE_PALETTES[] =
{
    { L"Kintaro White", 0x26a4a0, 0x26a4c0, indexBnKSprites_Kintaro, 0x00 },
    { L"Unused Extra 1 White", 0x26a4c0, 0x26a4e0 },
    { L"Unused Extra 2 White", 0x26a4e0, 0x26a500 },
    { L"Boon Swing White", 0x26a500, 0x26a520, indexBnKSprites_Kintaro, 0x01 },
    { L"Unused Extra 3 White", 0x26a520, 0x26a540 },
    { L"Stress Shot Bear White", 0x26a540, 0x26a560, indexBnKSprites_Kintaro, 0x02 },
    { L"Unused Extra 4 White", 0x26a560, 0x26a580 },
    { L"Poochy White (Transformation)", 0x26a580, 0x26a5a0, indexMatriMSprites_Poochy, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x26a5a0, 0x26a5c0, indexBnKSprites_Kintaro, 0x00 },
    { L"EX/Super Trail White", 0x26a5c0, 0x26a5e0, indexBnKSprites_Kintaro, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x26a5e0, 0x26a600, indexBnKSprites_Kintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_KEITH_A_PALETTES[] =
{
    { L"Keith A", 0x25da2e, 0x25da4e, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy A (Unused)", 0x25da4e, 0x25da6e, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy A (Unused)", 0x25da6e, 0x25da8e, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra A", 0x25da8e, 0x25daae },
    { L"Rolling/Super Jump Trail A", 0x25daae, 0x25dace, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail A", 0x25dace, 0x25daee, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x25daee, 0x25db0e, indexMatriMSprites_Keith, 0x00 },
    { L"HUD Portrait A (Unused)", 0x25db0e, 0x25db2e, indexMatriMSprites_Keith, 0x31 },
};

const sGame_PaletteDataset BnK_P_KEITH_B_PALETTES[] =
{
    { L"Keith B", 0x25db2e, 0x25db4e, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy B (Unused)", 0x25db4e, 0x25db6e, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy B (Unused)", 0x25db6e, 0x25db8e, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra B", 0x25db8e, 0x25dbae },
    { L"Rolling/Super Jump Trail B", 0x25dbae, 0x25dbce, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail B", 0x25dbce, 0x25dbee, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x25dbee, 0x25dc0e, indexMatriMSprites_Keith, 0x00 },
    { L"HUD Portrait B (Unused)", 0x25dc0e, 0x25dc2e, indexMatriMSprites_Keith, 0x31 },
};

const sGame_PaletteDataset BnK_P_KEITH_C_PALETTES[] =
{
    { L"Keith C", 0x25dc2e, 0x25dc4e, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy C (Unused)", 0x25dc4e, 0x25dc6e, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy C (Unused)", 0x25dc6e, 0x25dc8e, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra C", 0x25dc8e, 0x25dcae },
    { L"Rolling/Super Jump Trail C", 0x25dcae, 0x25dcce, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail C", 0x25dcce, 0x25dcee, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x25dcee, 0x25dd0e, indexMatriMSprites_Keith, 0x00 },
    { L"HUD Portrait C (Unused)", 0x25dd0e, 0x25dd2e, indexMatriMSprites_Keith, 0x31 },
};

const sGame_PaletteDataset BnK_P_KEITH_D_PALETTES[] =
{
    { L"Keith D", 0x25dd2e, 0x25dd4e, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy D (Unused)", 0x25dd4e, 0x25dd6e, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy D (Unused)", 0x25dd6e, 0x25dd8e, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra D", 0x25dd8e, 0x25ddae },
    { L"Rolling/Super Jump Trail D", 0x25ddae, 0x25ddce, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail D", 0x25ddce, 0x25ddee, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x25ddee, 0x25de0e, indexMatriMSprites_Keith, 0x00 },
    { L"HUD Portrait D (Unused)", 0x25de0e, 0x25de2e, indexMatriMSprites_Keith, 0x31 },
};

const sGame_PaletteDataset BnK_P_KEITH_SUMMER_PALETTES[] =
{
    { L"Keith Summer", 0x25de2e, 0x25de4e, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy Summer (Unused)", 0x25de4e, 0x25de6e, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy Summer (Unused)", 0x25de6e, 0x25de8e, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra Summer", 0x25de8e, 0x25deae },
    { L"Rolling/Super Jump Trail Summer", 0x25deae, 0x25dece, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail Summer", 0x25dece, 0x25deee, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x25deee, 0x25df0e, indexMatriMSprites_Keith, 0x00 },
};

const sGame_PaletteDataset BnK_P_KEITH_ZOMBIE_PALETTES[] =
{
    { L"Keith Zombie", 0x25df0e, 0x25df2e, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy Zombie (Unused)", 0x25df2e, 0x25df4e, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy Zombie (Unused)", 0x25df4e, 0x25df6e, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra Zombie", 0x25df6e, 0x25df8e },
    { L"Rolling/Super Jump Trail Zombie", 0x25df8e, 0x25dfae, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail Zombie", 0x25dfae, 0x25dfce, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x25dfce, 0x25dfee, indexMatriMSprites_Keith, 0x00 },
};

const sGame_PaletteDataset BnK_P_KEITH_EXTREME_PALETTES[] =
{
    { L"Keith Extreme", 0x25dfee, 0x25e00e, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy Extreme (Unused)", 0x25e00e, 0x25e02e, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy Extreme (Unused)", 0x25e02e, 0x25e04e, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra Extreme", 0x25e04e, 0x25e06e },
    { L"Rolling/Super Jump Trail Extreme", 0x25e06e, 0x25e08e, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail Extreme", 0x25e08e, 0x25e0ae, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x25e0ae, 0x25e0ce, indexMatriMSprites_Keith, 0x00 },
};

const sGame_PaletteDataset BnK_P_KEITH_WHITE_PALETTES[] =
{
    { L"Keith White", 0x25e0ce, 0x25e0ee, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy White (Unused)", 0x25e0ee, 0x25e10e, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy White (Unused)", 0x25e10e, 0x25e12e, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra White", 0x25e12e, 0x25e14e },
    { L"Rolling/Super Jump Trail White", 0x25e14e, 0x25e16e, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail White", 0x25e16e, 0x25e18e, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x25e18e, 0x25e1ae, indexMatriMSprites_Keith, 0x00 },
};

const sGame_PaletteDataset BnK_P_LYNN_A_PALETTES[] =
{
    { L"Lynn A", 0x266d4a, 0x266d6a, indexMatriMSprites_Lynn, 0x00 },
    { L"Chi Energy 1 A", 0x266d6a, 0x266d8a, indexMatriMSprites_Lynn, 0x01 },
    { L"Chi Energy 2 A", 0x266d8a, 0x266daa, indexMatriMSprites_Lynn, 0x02 },
    { L"Unused Extra A", 0x266daa, 0x266dca },
    { L"Rolling/Super Jump Trail A", 0x266dca, 0x266dea, indexMatriMSprites_Lynn, 0x00 },
    { L"EX/Super Trail A", 0x266dea, 0x266e0a, indexMatriMSprites_Lynn, 0x00 },
    { L"Guard Cancel Trail A", 0x266e0a, 0x266e2a, indexMatriMSprites_Lynn, 0x00 },
    { L"HUD Portrait A (Unused)", 0x266e2a, 0x266e4a, indexMatriMSprites_Lynn, 0x31 },
};

const sGame_PaletteDataset BnK_P_LYNN_B_PALETTES[] =
{
    { L"Lynn", 0x266e4a, 0x266e6a, indexMatriMSprites_Lynn, 0x00 },
    { L"Chi Energy 1 B", 0x266e6a, 0x266e8a, indexMatriMSprites_Lynn, 0x01 },
    { L"Chi Energy 2 B", 0x266e8a, 0x266eaa, indexMatriMSprites_Lynn, 0x02 },
    { L"Unused Extra B", 0x266eaa, 0x266eca },
    { L"Rolling/Super Jump Trail B", 0x266eca, 0x266eea, indexMatriMSprites_Lynn, 0x00 },
    { L"EX/Super Trail B", 0x266eea, 0x266f0a, indexMatriMSprites_Lynn, 0x00 },
    { L"Guard Cancel Trail B", 0x266f0a, 0x266f2a, indexMatriMSprites_Lynn, 0x00 },
    { L"HUD Portrait B (Unused)", 0x266f2a, 0x266f4a, indexMatriMSprites_Lynn, 0x31 },
};

const sGame_PaletteDataset BnK_P_LYNN_C_PALETTES[] =
{
    { L"Lynn C", 0x266f4a, 0x266f6a, indexMatriMSprites_Lynn, 0x00 },
    { L"Chi Energy 1 C", 0x266f6a, 0x266f8a, indexMatriMSprites_Lynn, 0x01 },
    { L"Chi Energy 2 C", 0x266f8a, 0x266faa, indexMatriMSprites_Lynn, 0x02 },
    { L"Unused Extra C", 0x266faa, 0x266fca },
    { L"Rolling/Super Jump Trail C", 0x266fca, 0x266fea, indexMatriMSprites_Lynn, 0x00 },
    { L"EX/Super Trail C", 0x266fea, 0x26700a, indexMatriMSprites_Lynn, 0x00 },
    { L"Guard Cancel Trail C", 0x26700a, 0x26702a, indexMatriMSprites_Lynn, 0x00 },
    { L"HUD Portrait C (Unused)", 0x26702a, 0x26704a, indexMatriMSprites_Lynn, 0x31 },
};

const sGame_PaletteDataset BnK_P_LYNN_D_PALETTES[] =
{
    { L"Lynn D", 0x26704a, 0x26706a, indexMatriMSprites_Lynn, 0x00 },
    { L"Chi Energy 1 D", 0x26706a, 0x26708a, indexMatriMSprites_Lynn, 0x01 },
    { L"Chi Energy 2 D", 0x26708a, 0x2670aa, indexMatriMSprites_Lynn, 0x02 },
    { L"Unused Extra D", 0x2670aa, 0x2670ca },
    { L"Rolling/Super Jump Trail D", 0x2670ca, 0x2670ea, indexMatriMSprites_Lynn, 0x00 },
    { L"EX/Super Trail D", 0x2670ea, 0x26710a, indexMatriMSprites_Lynn, 0x00 },
    { L"Guard Cancel Trail D", 0x26710a, 0x26712a, indexMatriMSprites_Lynn, 0x00 },
    { L"HUD Portrait D (Unused)", 0x26712a, 0x26714a, indexMatriMSprites_Lynn, 0x31 },
};

const sGame_PaletteDataset BnK_P_LYNN_SHARED_PALETTES[] =
{
    { L"Shared Portrait (Unused)", 0x26714a, 0x2671ca, indexMatriMSprites_Lynn, 0x30 },
};

const sGame_PaletteDataset BnK_P_OLOF_A_PALETTES[] =
{
    { L"Olof A", 0x263fa4, 0x263fc4, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack A (Unused)", 0x263fc4, 0x263fe4, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy A (Unused)", 0x263fe4, 0x264004, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 A (Unused)", 0x264004, 0x264024, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 A (Unused)", 0x264024, 0x264044, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages A", 0x264044, 0x264064, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail A", 0x264064, 0x264084, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail A", 0x264084, 0x2640a4, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x2640a4, 0x2640c4, indexMatriMSprites_Olof, 0x00 },
    { L"HUD Portrait A (Unused)", 0x2640c4, 0x2640e4, indexMatriMSprites_Olof, 0x31 },
};

const sGame_PaletteDataset BnK_P_OLOF_B_PALETTES[] =
{
    { L"Olof B", 0x2640e4, 0x264104, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack B (Unused)", 0x264104, 0x264124, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy B (Unused)", 0x264124, 0x264144, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 B (Unused)", 0x264144, 0x264164, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 B (Unused)", 0x264164, 0x264184, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages B", 0x264184, 0x2641a4, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail B", 0x2641a4, 0x2641c4, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail B", 0x2641c4, 0x2641e4, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x2641e4, 0x264204, indexMatriMSprites_Olof, 0x00 },
    { L"HUD Portrait B (Unused)", 0x264204, 0x264224, indexMatriMSprites_Olof, 0x31 },
};

const sGame_PaletteDataset BnK_P_OLOF_C_PALETTES[] =
{
    { L"Olof C", 0x264224, 0x264244, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack C (Unused)", 0x264244, 0x264264, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy C (Unused)", 0x264264, 0x264284, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 C (Unused)", 0x264284, 0x2642a4, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 C (Unused)", 0x2642a4, 0x2642c4, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages C", 0x2642c4, 0x2642e4, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail C", 0x2642e4, 0x264304, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail C", 0x264304, 0x264324, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x264324, 0x264344, indexMatriMSprites_Olof, 0x00 },
    { L"HUD Portrait C (Unused)", 0x264344, 0x264364, indexMatriMSprites_Olof, 0x31 },
};

const sGame_PaletteDataset BnK_P_OLOF_D_PALETTES[] =
{
    { L"Olof D", 0x264364, 0x264384, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack D (Unused)", 0x264384, 0x2643a4, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy D (Unused)", 0x2643a4, 0x2643c4, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 D (Unused)", 0x2643c4, 0x2643e4, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 D (Unused)", 0x2643e4, 0x264404, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages D", 0x264404, 0x264424, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail D", 0x264424, 0x264444, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail D", 0x264444, 0x264464, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x264464, 0x264484, indexMatriMSprites_Olof, 0x00 },
    { L"HUD Portrait D (Unused)", 0x264484, 0x2644a4, indexMatriMSprites_Olof, 0x31 },
};

const sGame_PaletteDataset BnK_P_OLOF_SUMMER_PALETTES[] =
{
    { L"Olof Summer", 0x2644a4, 0x2644c4, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack Summer (Unused)", 0x2644c4, 0x2644e4, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy Summer (Unused)", 0x2644e4, 0x264504, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 Summer (Unused)", 0x264504, 0x264524, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 Summer (Unused)", 0x264524, 0x264544, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages Summer", 0x264544, 0x264564, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail Summer", 0x264564, 0x264584, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail Summer", 0x264584, 0x2645a4, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x2645a4, 0x2645c4, indexMatriMSprites_Olof, 0x00 },
};

const sGame_PaletteDataset BnK_P_OLOF_ZOMBIE_PALETTES[] =
{
    { L"Olof Zombie", 0x2645c4, 0x2645e4, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack Zombie (Unused)", 0x2645e4, 0x264604, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy Zombie (Unused)", 0x264604, 0x264624, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 Zombie (Unused)", 0x264624, 0x264644, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 Zombie (Unused)", 0x264644, 0x264664, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages Zombie", 0x264664, 0x264684, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail Zombie", 0x264684, 0x2646a4, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail Zombie", 0x2646a4, 0x2646c4, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x2646c4, 0x2646e4, indexMatriMSprites_Olof, 0x00 },
};

const sGame_PaletteDataset BnK_P_OLOF_EXTREME_PALETTES[] =
{
    { L"Olof Extreme", 0x2646e4, 0x264704, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack Extreme (Unused)", 0x264704, 0x264724, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy Extreme (Unused)", 0x264724, 0x264744, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 Extreme (Unused)", 0x264744, 0x264764, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 Extreme (Unused)", 0x264764, 0x264784, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages Extreme", 0x264784, 0x2647a4, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail Extreme", 0x2647a4, 0x2647c4, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail Extreme", 0x2647c4, 0x2647e4, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x2647e4, 0x264804, indexMatriMSprites_Olof, 0x00 },
};

const sGame_PaletteDataset BnK_P_OLOF_WHITE_PALETTES[] =
{
    { L"Olof White", 0x264804, 0x264824, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack White (Unused)", 0x264824, 0x264844, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy White (Unused)", 0x264844, 0x264864, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 White (Unused)", 0x264864, 0x264884, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 White (Unused)", 0x264884, 0x2648a4, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages White", 0x2648a4, 0x2648c4, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail White", 0x2648c4, 0x2648e4, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail White", 0x2648e4, 0x264904, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x264904, 0x264924, indexMatriMSprites_Olof, 0x00 },
};

const sGame_PaletteDataset BnK_P_POOCHY_TRANSFORM_A_PALETTES[] =
{
    { L"Poochy A", 0x261bbe, 0x261bde, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 A (Unused)", 0x261bde, 0x261bfe },
    { L"Heavy Dig Items 2 A (Unused)", 0x261bfe, 0x261c1e },
    { L"Doggy Slash A (Unused)", 0x261c1e, 0x261c3e },
    { L"Giant Bear Assault A", 0x261c3e, 0x261c5e },
    { L"Canine Cyclone A (Unused)", 0x261c5e, 0x261c7e },
    { L"Rolling/Super Jump Trail A", 0x261c7e, 0x261c9e, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail A", 0x261c9e, 0x261cbe, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x261cbe, 0x261cde, indexMatriMSprites_Poochy, 0x00 },
    { L"HUD Portrait A (Unused)", 0x261cde, 0x261cfe, indexMatriMSprites_Poochy, 0x31 },
};

const sGame_PaletteDataset BnK_P_POOCHY_TRANSFORM_B_PALETTES[] =
{
    { L"Poochy B", 0x261cfe, 0x261d1e, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 B (Unused)", 0x261d1e, 0x261d3e },
    { L"Heavy Dig Items 2 B (Unused)", 0x261d3e, 0x261d5e },
    { L"Doggy Slash B (Unused)", 0x261d5e, 0x261d7e },
    { L"Giant Bear Assault B", 0x261d7e, 0x261d9e },
    { L"Canine Cyclone B (Unused)", 0x261d9e, 0x261dbe },
    { L"Rolling/Super Jump Trail B", 0x261dbe, 0x261dde, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail B", 0x261dde, 0x261dfe, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x261dfe, 0x261e1e, indexMatriMSprites_Poochy, 0x00 },
    { L"HUD Portrait B (Unused)", 0x261e1e, 0x261e3e, indexMatriMSprites_Poochy, 0x31 },
};

const sGame_PaletteDataset BnK_P_POOCHY_TRANSFORM_C_PALETTES[] =
{
    { L"Poochy C", 0x261e3e, 0x261e5e, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 C (Unused)", 0x261e5e, 0x261e7e },
    { L"Heavy Dig Items 2 C (Unused)", 0x261e7e, 0x261e9e },
    { L"Doggy Slash C (Unused)", 0x261e9e, 0x261ebe },
    { L"Giant Bear Assault C", 0x261ebe, 0x261ede },
    { L"Canine Cyclone C (Unused)", 0x261ede, 0x261efe },
    { L"Rolling/Super Jump Trail C", 0x261efe, 0x261f1e, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail C", 0x261f1e, 0x261f3e, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x261f3e, 0x261f5e, indexMatriMSprites_Poochy, 0x00 },
    { L"HUD Portrait C (Unused)", 0x261f5e, 0x261f7e, indexMatriMSprites_Poochy, 0x31 },
};

const sGame_PaletteDataset BnK_P_POOCHY_TRANSFORM_D_PALETTES[] =
{
    { L"Poochy D", 0x261f7e, 0x261f9e, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 D (Unused)", 0x261f9e, 0x261fbe },
    { L"Heavy Dig Items 2 D (Unused)", 0x261fbe, 0x261fde },
    { L"Doggy Slash D (Unused)", 0x261fde, 0x261ffe },
    { L"Giant Bear Assault D", 0x261ffe, 0x26201e },
    { L"Canine Cyclone D (Unused)", 0x26201e, 0x26203e },
    { L"Rolling/Super Jump Trail D", 0x26203e, 0x26205e, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail D", 0x26205e, 0x26207e, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x26207e, 0x26209e, indexMatriMSprites_Poochy, 0x00 },
    { L"HUD Portrait D (Unused)", 0x26209e, 0x2620be, indexMatriMSprites_Poochy, 0x31 },
};

const sGame_PaletteDataset BnK_P_POOCHY_TRANSFORM_SUMMER_PALETTES[] =
{
    { L"Poochy Summer", 0x2620be, 0x2620de, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 Summer (Unused)", 0x2620de, 0x2620fe },
    { L"Heavy Dig Items 2 Summer (Unused)", 0x2620fe, 0x26211e },
    { L"Doggy Slash Summer (Unused)", 0x26211e, 0x26213e },
    { L"Giant Bear Assault Summer", 0x26213e, 0x26215e },
    { L"Canine Cyclone Summer (Unused)", 0x26215e, 0x26217e },
    { L"Rolling/Super Jump Trail Summer", 0x26217e, 0x26219e, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail Summer", 0x26219e, 0x2621be, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x2621be, 0x2621de, indexMatriMSprites_Poochy, 0x00 },
};

const sGame_PaletteDataset BnK_P_POOCHY_TRANSFORM_ZOMBIE_PALETTES[] =
{
    { L"Poochy Zombie", 0x2621de, 0x2621fe, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 Zombie (Unused)", 0x2621fe, 0x26221e },
    { L"Heavy Dig Items 2 Zombie (Unused)", 0x26221e, 0x26223e },
    { L"Doggy Slash Zombie (Unused)", 0x26223e, 0x26225e },
    { L"Giant Bear Assault Zombie", 0x26225e, 0x26227e },
    { L"Canine Cyclone Zombie (Unused)", 0x26227e, 0x26229e },
    { L"Rolling/Super Jump Trail Zombie", 0x26229e, 0x2622be, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail Zombie", 0x2622be, 0x2622de, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x2622de, 0x2622fe, indexMatriMSprites_Poochy, 0x00 },
};

const sGame_PaletteDataset BnK_P_POOCHY_TRANSFORM_EXTREME_PALETTES[] =
{
    { L"Poochy Extreme", 0x2622fe, 0x26231e, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 Extreme (Unused)", 0x26231e, 0x26233e },
    { L"Heavy Dig Items 2 Extreme (Unused)", 0x26233e, 0x26235e },
    { L"Doggy Slash Extreme (Unused)", 0x26235e, 0x26237e },
    { L"Giant Bear Assault Extreme", 0x26237e, 0x26239e },
    { L"Canine Cyclone Extreme (Unused)", 0x26239e, 0x2623be },
    { L"Rolling/Super Jump Trail Extreme", 0x2623be, 0x2623de, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail Extreme", 0x2623de, 0x2623fe, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x2623fe, 0x26241e, indexMatriMSprites_Poochy, 0x00 },
};

const sGame_PaletteDataset BnK_P_POOCHY_TRANSFORM_WHITE_PALETTES[] =
{
    { L"Poochy White", 0x26241e, 0x26243e, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 White (Unused)", 0x26243e, 0x26245e },
    { L"Heavy Dig Items 2 White (Unused)", 0x26245e, 0x26247e },
    { L"Doggy Slash White (Unused)", 0x26247e, 0x26249e },
    { L"Giant Bear Assault White", 0x26249e, 0x2624be },
    { L"Canine Cyclone White (Unused)", 0x2624be, 0x2624de },
    { L"Rolling/Super Jump Trail White", 0x2624de, 0x2624fe, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail White", 0x2624fe, 0x26251e, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x26251e, 0x26253e, indexMatriMSprites_Poochy, 0x00 },
};

const sGame_PaletteDataset BnK_P_PRINCESSSISSY_A_PALETTES[] =
{
    { L"Sissy A", 0x2656ae, 0x2656ce, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons A", 0x2656ce, 0x2656ee, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection A", 0x2656ee, 0x26570e, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box A", 0x26570e, 0x26572e, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb A", 0x26572e, 0x26574e, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion A (Unused)", 0x26574e, 0x26576e, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratsu Reve A", 0x26576e, 0x26578e, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion A", 0x26578e, 0x2657ae, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail A", 0x2657ae, 0x2657ce, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail A", 0x2657ce, 0x2657ee, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x2657ee, 0x26580e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"HUD Portrait A (Unused)", 0x26580e, 0x26582e, indexMatriMSprites_PrincessSissy, 0x31 },
};

const sGame_PaletteDataset BnK_P_PRINCESSSISSY_B_PALETTES[] =
{
    { L"Sissy B", 0x26582e, 0x26584e, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons B", 0x26584e, 0x26586e, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection B", 0x26586e, 0x26588e, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box B", 0x26588e, 0x2658ae, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb B", 0x2658ae, 0x2658ce, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion B (Unused)", 0x2658ce, 0x2658ee, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratsu Reve B", 0x2658ee, 0x26590e, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion B", 0x26590e, 0x26592e, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail B", 0x26592e, 0x26594e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail B", 0x26594e, 0x26596e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x26596e, 0x26598e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"HUD Portrait B (Unused)", 0x26598e, 0x2659ae, indexMatriMSprites_PrincessSissy, 0x31 },
};

const sGame_PaletteDataset BnK_P_PRINCESSSISSY_C_PALETTES[] =
{
    { L"Sissy C", 0x2659ae, 0x2659ce, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons C", 0x2659ce, 0x2659ee, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection C", 0x2659ee, 0x265a0e, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box C", 0x265a0e, 0x265a2e, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb C", 0x265a2e, 0x265a4e, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion C (Unused)", 0x265a4e, 0x265a6e, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratsu Reve C", 0x265a6e, 0x265a8e, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion C", 0x265a8e, 0x265aae, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail C", 0x265aae, 0x265ace, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail C", 0x265ace, 0x265aee, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x265aee, 0x265b0e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"HUD Portrait C (Unused)", 0x265b0e, 0x265b2e, indexMatriMSprites_PrincessSissy, 0x31 },
};

const sGame_PaletteDataset BnK_P_PRINCESSSISSY_D_PALETTES[] =
{
    { L"Sissy D", 0x265b2e, 0x265b4e, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons D", 0x265b4e, 0x265b6e, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection D", 0x265b6e, 0x265b8e, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box D", 0x265b8e, 0x265bae, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb D", 0x265bae, 0x265bce, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion D (Unused)", 0x265bce, 0x265bee, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratsu Reve D", 0x265bee, 0x265c0e, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion D", 0x265c0e, 0x265c2e, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail D", 0x265c2e, 0x265c4e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail D", 0x265c4e, 0x265c6e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x265c6e, 0x265c8e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"HUD Portrait D (Unused)", 0x265c8e, 0x265cae, indexMatriMSprites_PrincessSissy, 0x31 },
};

const sGame_PaletteDataset BnK_P_PRINCESSSISSY_SUMMER_PALETTES[] =
{
    { L"Sissy Summer", 0x265cae, 0x265cce, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons Summer", 0x265cce, 0x265cee, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection Summer", 0x265cee, 0x265d0e, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box Summer", 0x265d0e, 0x265d2e, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb Summer", 0x265d2e, 0x265d4e, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion Summer (Unused)", 0x265d4e, 0x265d6e, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratsu Reve Summer", 0x265d6e, 0x265d8e, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion Summer", 0x265d8e, 0x265dae, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail Summer", 0x265dae, 0x265dce, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail Summer", 0x265dce, 0x265dee, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x265dee, 0x265e0e, indexMatriMSprites_PrincessSissy, 0x00 },
};

const sGame_PaletteDataset BnK_P_PRINCESSSISSY_ZOMBIE_PALETTES[] =
{
    { L"Sissy Zombie", 0x265e0e, 0x265e2e, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons Zombie", 0x265e2e, 0x265e4e, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection Zombie", 0x265e4e, 0x265e6e, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box Zombie", 0x265e6e, 0x265e8e, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb Zombie", 0x265e8e, 0x265eae, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion Zombie (Unused)", 0x265eae, 0x265ece, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratsu Reve Zombie", 0x265ece, 0x265eee, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion Zombie", 0x265eee, 0x265f0e, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail Zombie", 0x265f0e, 0x265f2e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail Zombie", 0x265f2e, 0x265f4e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x265f4e, 0x265f6e, indexMatriMSprites_PrincessSissy, 0x00 },
};

const sGame_PaletteDataset BnK_P_PRINCESSSISSY_EXTREME_PALETTES[] =
{
    { L"Sissy Extreme", 0x265f6e, 0x265f8e, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons Extreme", 0x265f8e, 0x265fae, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection Extreme", 0x265fae, 0x265fce, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box Extreme", 0x265fce, 0x265fee, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb Extreme", 0x265fee, 0x26600e, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion Extreme (Unused)", 0x26600e, 0x26602e, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratsu Reve Extreme", 0x26602e, 0x26604e, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion Extreme", 0x26604e, 0x26606e, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail Extreme", 0x26606e, 0x26608e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail Extreme", 0x26608e, 0x2660ae, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x2660ae, 0x2660ce, indexMatriMSprites_PrincessSissy, 0x00 },
};

const sGame_PaletteDataset BnK_P_PRINCESSSISSY_WHITE_PALETTES[] =
{
    { L"Sissy White", 0x2660ce, 0x2660ee, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons White", 0x2660ee, 0x26610e, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection White", 0x26610e, 0x26612e, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box White", 0x26612e, 0x26614e, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb White", 0x26614e, 0x26616e, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion White (Unused)", 0x26616e, 0x26618e, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratsu Reve White", 0x26618e, 0x2661ae, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion White", 0x2661ae, 0x2661ce, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail White", 0x2661ce, 0x2661ee, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail White", 0x2661ee, 0x26620e, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x26620e, 0x26622e, indexMatriMSprites_PrincessSissy, 0x00 },
};

const sGame_PaletteDataset BnK_P_REIJI_A_PALETTES[] =
{
    { L"Reiji A", 0x25d3ac, 0x25d3cc, indexMatriMSprites_Reiji, 0x00 },
    { L"Ki Energy A (Unused)", 0x25d3cc, 0x25d3ec },
    { L"Geki Ko Sho Shou A (Unused)", 0x25d3ec, 0x25d40c },
    { L"Rolling/Super Jump Trail A", 0x25d40c, 0x25d42c, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail A", 0x25d42c, 0x25d44c, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x25d44c, 0x25d46c, indexMatriMSprites_Reiji, 0x00 },
    { L"HUD Portrait A (Unused)", 0x25d46c, 0x25d48c, indexMatriMSprites_Reiji, 0x31 },
};

const sGame_PaletteDataset BnK_P_REIJI_B_PALETTES[] =
{
    { L"Reiji B", 0x25d48c, 0x25d4ac, indexMatriMSprites_Reiji, 0x00 },
    { L"Ki Energy B (Unused)", 0x25d4ac, 0x25d4cc },
    { L"Geki Ko Sho Shou B (Unused)", 0x25d4cc, 0x25d4ec },
    { L"Rolling/Super Jump Trail B", 0x25d4ec, 0x25d50c, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail B", 0x25d50c, 0x25d52c, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x25d52c, 0x25d54c, indexMatriMSprites_Reiji, 0x00 },
    { L"HUD Portrait B (Unused)", 0x25d54c, 0x25d56c, indexMatriMSprites_Reiji, 0x31 },
};

const sGame_PaletteDataset BnK_P_REIJI_C_PALETTES[] =
{
    { L"Reiji C", 0x25d56c, 0x25d58c, indexMatriMSprites_Reiji, 0x00 },
    { L"Ki Energy C (Unused)", 0x25d58c, 0x25d5ac },
    { L"Geki Ko Sho Shou C (Unused)", 0x25d5ac, 0x25d5cc },
    { L"Rolling/Super Jump Trail C", 0x25d5cc, 0x25d5ec, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail C", 0x25d5ec, 0x25d60c, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x25d60c, 0x25d62c, indexMatriMSprites_Reiji, 0x00 },
    { L"HUD Portrait (Unused) C", 0x25d62c, 0x25d64c, indexMatriMSprites_Reiji, 0x31 },
};

const sGame_PaletteDataset BnK_P_REIJI_D_PALETTES[] =
{

    { L"Reiji D", 0x25d64c, 0x25d66c, indexMatriMSprites_Reiji, 0x00 },
    { L"Ki Energy D (Unused)", 0x25d66c, 0x25d68c },
    { L"Geki Ko Sho Shou D (Unused)", 0x25d68c, 0x25d6ac },
    { L"Rolling/Super Jump Trail D", 0x25d6ac, 0x25d6cc, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail D", 0x25d6cc, 0x25d6ec, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x25d6ec, 0x25d70c, indexMatriMSprites_Reiji, 0x00 },
    { L"HUD Portrait D (Unused)", 0x25d70c, 0x25d72c, indexMatriMSprites_Reiji, 0x31 },
};

const sGame_PaletteDataset BnK_P_REIJI_SUMMER_PALETTES[] =
{
    { L"Reiji Summer", 0x25d72c, 0x25d74c, indexMatriMSprites_Reiji, 0x00 },
    { L"Ki Energy Summer (Unused)", 0x25d74c, 0x25d76c },
    { L"Geki Ko Sho Shou Summer (Unused)", 0x25d76c, 0x25d78c },
    { L"Rolling/Super Jump Trail Summer", 0x25d78c, 0x25d7ac, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail Summer", 0x25d7ac, 0x25d7cc, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x25d7cc, 0x25d7ec, indexMatriMSprites_Reiji, 0x00 },
};

const sGame_PaletteDataset BnK_P_REIJI_ZOMBIE_PALETTES[] =
{
    { L"Reiji Zombie", 0x25d7ec, 0x25d80c, indexMatriMSprites_Reiji, 0x00 },
    { L"Ki Energy Zombie (Unused)", 0x25d80c, 0x25d82c },
    { L"Geki Ko Sho Shou Zombie (Unused)", 0x25d82c, 0x25d84c },
    { L"Rolling/Super Jump Trail Zombie", 0x25d84c, 0x25d86c, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail Zombie", 0x25d86c, 0x25d88c, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x25d88c, 0x25d8ac, indexMatriMSprites_Reiji, 0x00 },
};

const sGame_PaletteDataset BnK_P_REIJI_EXTREME_PALETTES[] =
{
    { L"Reiji Extreme", 0x25d8ac, 0x25d8cc, indexMatriMSprites_Reiji, 0x00 },
    { L"Ki Energy Extreme (Unused)", 0x25d8cc, 0x25d8ec },
    { L"Geki Ko Sho Shou Extreme (Unused)", 0x25d8ec, 0x25d90c },
    { L"Rolling/Super Jump Trail Extreme", 0x25d90c, 0x25d92c, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail Extreme", 0x25d92c, 0x25d94c, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x25d94c, 0x25d96c, indexMatriMSprites_Reiji, 0x00 },
};

const sGame_PaletteDataset BnK_P_REIJI_WHITE_PALETTES[] =
{
    { L"Reiji White", 0x25d96c, 0x25d98c, indexMatriMSprites_Reiji, 0x00 },
    { L"Ki Energy White (Unused)", 0x25d98c, 0x25d9ac },
    { L"Geki Ko Sho Shou White (Unused)", 0x25d9ac, 0x25d9cc },
    { L"Rolling/Super Jump Trail White", 0x25d9cc, 0x25d9ec, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail White", 0x25d9ec, 0x25da0c, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x25da0c, 0x25da2c, indexMatriMSprites_Reiji, 0x00 },
};

const sGame_PaletteDataset BnK_P_SAIZO_A_PALETTES[] =
{
    { L"Saizo A", 0x25e932, 0x25e952, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast A (Unused)", 0x25e952, 0x25e972, indexMatriMSprites_Saizo, 0x0b },
    { L"Bomb Explosions A (Unused)", 0x25e972, 0x25e992, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan A", 0x25e992, 0x25e9b2, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan A", 0x25e9b2, 0x25e9d2, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan A", 0x25e9d2, 0x25e9f2, indexMatriMSprites_Saizo, 0x0c },
    { L"Gouken Shou Ryudan A", 0x25e9f2, 0x25ea12, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail A", 0x25ea12, 0x25ea32, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail A", 0x25ea32, 0x25ea52, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x25ea52, 0x25ea72, indexMatriMSprites_Saizo, 0x00 },
    { L"HUD Portrait A (Unused)", 0x25ea72, 0x25ea92, indexMatriMSprites_Saizo, 0x31 },
};

const sGame_PaletteDataset BnK_P_SAIZO_B_PALETTES[] =
{
    { L"Saizo B", 0x25ea92, 0x25eab2, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast B (Unused)", 0x25eab2, 0x25ead2, indexMatriMSprites_Saizo, 0x0b },
    { L"Bomb Explosions B (Unused)", 0x25ead2, 0x25eaf2, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan B", 0x25eaf2, 0x25eb12, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan B", 0x25eb12, 0x25eb32, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan B", 0x25eb32, 0x25eb52, indexMatriMSprites_Saizo, 0x0c },
    { L"Gouken Shou Ryudan B", 0x25eb52, 0x25eb72, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail B", 0x25eb72, 0x25eb92, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail B", 0x25eb92, 0x25ebb2, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x25ebb2, 0x25ebd2, indexMatriMSprites_Saizo, 0x00 },
    { L"HUD Portrait B (Unused)", 0x25ebd2, 0x25ebf2, indexMatriMSprites_Saizo, 0x31 },
};

const sGame_PaletteDataset BnK_P_SAIZO_C_PALETTES[] =
{
    { L"Saizo C", 0x25ebf2, 0x25ec12, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast C (Unused)", 0x25ec12, 0x25ec32, indexMatriMSprites_Saizo, 0x0b },
    { L"Bomb Explosions C (Unused)", 0x25ec32, 0x25ec52, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan C", 0x25ec52, 0x25ec72, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan C", 0x25ec72, 0x25ec92, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan C", 0x25ec92, 0x25ecb2, indexMatriMSprites_Saizo, 0x0c },
    { L"Gouken Shou Ryudan C", 0x25ecb2, 0x25ecd2, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail C", 0x25ecd2, 0x25ecf2, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail C", 0x25ecf2, 0x25ed12, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x25ed12, 0x25ed32, indexMatriMSprites_Saizo, 0x00 },
    { L"HUD Portrait C (Unused)", 0x25ed32, 0x25ed52, indexMatriMSprites_Saizo, 0x31 },
};

const sGame_PaletteDataset BnK_P_SAIZO_D_PALETTES[] =
{
    { L"Saizo D", 0x25ed52, 0x25ed72, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast D (Unused)", 0x25ed72, 0x25ed92, indexMatriMSprites_Saizo, 0x0b },
    { L"Bomb Explosions D (Unused)", 0x25ed92, 0x25edb2, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan D", 0x25edb2, 0x25edd2, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan D", 0x25edd2, 0x25edf2, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan D", 0x25edf2, 0x25ee12, indexMatriMSprites_Saizo, 0x0c },
    { L"Gouken Shou Ryudan D", 0x25ee12, 0x25ee32, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail D", 0x25ee32, 0x25ee52, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail D", 0x25ee52, 0x25ee72, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x25ee72, 0x25ee92, indexMatriMSprites_Saizo, 0x00 },
    { L"HUD Portrait D (Unused)", 0x25ee92, 0x25eeb2, indexMatriMSprites_Saizo, 0x31 },
};

const sGame_PaletteDataset BnK_P_SAIZO_SUMMER_PALETTES[] =
{
    { L"Saizo Summer", 0x25eeb2, 0x25eed2, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast Summer (Unused)", 0x25eed2, 0x25eef2, indexMatriMSprites_Saizo, 0x0b },
    { L"Bomb Explosions Summer (Unused)", 0x25eef2, 0x25ef12, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan Summer", 0x25ef12, 0x25ef32, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan Summer", 0x25ef32, 0x25ef52, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan Summer", 0x25ef52, 0x25ef72, indexMatriMSprites_Saizo, 0x0c },
    { L"Gouken Shou Ryudan Summer", 0x25ef72, 0x25ef92, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail Summer", 0x25ef92, 0x25efb2, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail Summer", 0x25efb2, 0x25efd2, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x25efd2, 0x25eff2, indexMatriMSprites_Saizo, 0x00 },
};

const sGame_PaletteDataset BnK_P_SAIZO_ZOMBIE_PALETTES[] =
{
    { L"Saizo Zombie", 0x25eff2, 0x25f012, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast Zombie (Unused)", 0x25f012, 0x25f032, indexMatriMSprites_Saizo, 0x0b },
    { L"Bomb Explosions Zombie (Unused)", 0x25f032, 0x25f052, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan Zombie", 0x25f052, 0x25f072, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan Zombie", 0x25f072, 0x25f092, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan Zombie", 0x25f092, 0x25f0b2, indexMatriMSprites_Saizo, 0x0c },
    { L"Gouken Shou Ryudan Zombie", 0x25f0b2, 0x25f0d2, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail Zombie", 0x25f0d2, 0x25f0f2, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail Zombie", 0x25f0f2, 0x25f112, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x25f112, 0x25f132, indexMatriMSprites_Saizo, 0x00 },
};

const sGame_PaletteDataset BnK_P_SAIZO_EXTREME_PALETTES[] =
{
    { L"Saizo Extreme", 0x25f132, 0x25f152, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast Extreme (Unused)", 0x25f152, 0x25f172, indexMatriMSprites_Saizo, 0x0b },
    { L"Bomb Explosions Extreme (Unused)", 0x25f172, 0x25f192, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan Extreme", 0x25f192, 0x25f1b2, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan Extreme", 0x25f1b2, 0x25f1d2, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan Extreme", 0x25f1d2, 0x25f1f2, indexMatriMSprites_Saizo, 0x0c },
    { L"Gouken Shou Ryudan Extreme", 0x25f1f2, 0x25f212, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail Extreme", 0x25f212, 0x25f232, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail Extreme", 0x25f232, 0x25f252, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x25f252, 0x25f272, indexMatriMSprites_Saizo, 0x00 },
};

const sGame_PaletteDataset BnK_P_SAIZO_WHITE_PALETTES[] =
{
    { L"Saizo White", 0x25f272, 0x25f292, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast White (Unused)", 0x25f292, 0x25f2b2, indexMatriMSprites_Saizo, 0x0b },
    { L"Bomb Explosions White (Unused)", 0x25f2b2, 0x25f2d2, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan White", 0x25f2d2, 0x25f2f2, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan White", 0x25f2f2, 0x25f312, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan White", 0x25f312, 0x25f332, indexMatriMSprites_Saizo, 0x0c },
    { L"Gouken Shou Ryudan White", 0x25f332, 0x25f352, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail White", 0x25f352, 0x25f372, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail White", 0x25f372, 0x25f392, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x25f392, 0x25f3b2, indexMatriMSprites_Saizo, 0x00 },
};

const sGame_PaletteDataset BnK_P_SHINTARO_A_PALETTES[] =
{
    { L"Shintaro A", 0x264daa, 0x264dca, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x264dca, 0x264dea, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail A", 0x264dea, 0x264e0a, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x264e0a, 0x264e2a, indexMatriMSprites_Shintaro, 0x00 },
    { L"HUD Portrait A (Unused)", 0x264e2a, 0x264e4a, indexMatriMSprites_Shintaro, 0x31 },
};

const sGame_PaletteDataset BnK_P_SHINTARO_B_PALETTES[] =
{
    { L"Shintaro B", 0x264e4a, 0x264e6a, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x264e6a, 0x264e8a, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail B", 0x264e8a, 0x264eaa, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x264eaa, 0x264eca, indexMatriMSprites_Shintaro, 0x00 },
    { L"HUD Portrait B (Unused)", 0x264eca, 0x264eea, indexMatriMSprites_Shintaro, 0x31 },
};

const sGame_PaletteDataset BnK_P_SHINTARO_C_PALETTES[] =
{
    { L"Shintaro C", 0x264eea, 0x264f0a, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x264f0a, 0x264f2a, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail C", 0x264f2a, 0x264f4a, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x264f4a, 0x264f6a, indexMatriMSprites_Shintaro, 0x00 },
    { L"HUD Portrait C (Unused)", 0x264f6a, 0x264f8a, indexMatriMSprites_Shintaro, 0x31 },
};

const sGame_PaletteDataset BnK_P_SHINTARO_D_PALETTES[] =
{
    { L"Shintaro D", 0x264f8a, 0x264faa, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x264faa, 0x264fca, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail D", 0x264fca, 0x264fea, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x264fea, 0x26500a, indexMatriMSprites_Shintaro, 0x00 },
    { L"HUD Portrait D (Unused)", 0x26500a, 0x26502a, indexMatriMSprites_Shintaro, 0x31 },
};

const sGame_PaletteDataset BnK_P_SHINTARO_SUMMER_PALETTES[] =
{
    { L"Shintaro Summer", 0x26502a, 0x26504a, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x26504a, 0x26506a, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail Summer", 0x26506a, 0x26508a, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x26508a, 0x2650aa, indexMatriMSprites_Shintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_SHINTARO_ZOMBIE_PALETTES[] =
{
    { L"Shintaro Zombie", 0x2650aa, 0x2650ca, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x2650ca, 0x2650ea, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail Zombie", 0x2650ea, 0x26510a, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x26510a, 0x26512a, indexMatriMSprites_Shintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_SHINTARO_EXTREME_PALETTES[] =
{
    { L"Shintaro Extreme", 0x26512a, 0x26514a, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x26514a, 0x26516a, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail Extreme", 0x26516a, 0x26518a, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x26518a, 0x2651aa, indexMatriMSprites_Shintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_SHINTARO_WHITE_PALETTES[] =
{
    { L"Shintaro White", 0x2651aa, 0x2651ca, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x2651ca, 0x2651ea, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail White", 0x2651ea, 0x26520a, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x26520a, 0x26522a, indexMatriMSprites_Shintaro, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_A_PALETTES[] =
{
    { L"Otane A", 0x262540, 0x262560, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi A", 0x262560, 0x262580 },
    { L"Burning Energy A (Unused)", 0x262580, 0x2625a0 },
    { L"Purple Energy A (Unused)", 0x2625a0, 0x2625c0 },
    { L"Mirror Attack A (Unused)", 0x2625c0, 0x2625e0 },
    { L"Intro Clothes A", 0x2625e0, 0x262600 },
    { L"Unused Extra A", 0x262600, 0x262620 },
    { L"Winpose A (Young Form)", 0x262620, 0x262640, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 A", 0x262640, 0x262660, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 A", 0x262660, 0x262680, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 A (Young)", 0x262680, 0x2626a0, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 A (Young)", 0x2626a0, 0x2626c0, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x2626c0, 0x2626e0, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail A", 0x2626e0, 0x262700, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x262700, 0x262720, indexMatriMSprites_Tane, 0x00 },
    { L"HUD Portrait A (Unused)", 0x262720, 0x262740, indexMatriMSprites_Tane, 0x31 },
};

const sGame_PaletteDataset BnK_P_OTANE_B_PALETTES[] =
{
    { L"Otane B", 0x262740, 0x262760, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi B", 0x262760, 0x262780 },
    { L"Burning Energy B (Unused)", 0x262780, 0x2627a0 },
    { L"Purple Energy B (Unused)", 0x2627a0, 0x2627c0 },
    { L"Mirror Attack B (Unused)", 0x2627c0, 0x2627e0 },
    { L"Intro Clothes B", 0x2627e0, 0x262800 },
    { L"Unused Extra B", 0x262800, 0x262820 },
    { L"Winpose B (Young Form)", 0x262820, 0x262840, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 B", 0x262840, 0x262860, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 B", 0x262860, 0x262880, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 B (Young)", 0x262880, 0x2628a0, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 B (Young)", 0x2628a0, 0x2628c0, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x2628c0, 0x2628e0, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail B", 0x2628e0, 0x262900, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x262900, 0x262920, indexMatriMSprites_Tane, 0x00 },
    { L"HUD Portrait B (Unused)", 0x262920, 0x262940, indexMatriMSprites_Tane, 0x31 },
};

const sGame_PaletteDataset BnK_P_OTANE_C_PALETTES[] =
{
    { L"Otane C", 0x262940, 0x262960, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi C", 0x262960, 0x262980 },
    { L"Burning Energy C (Unused)", 0x262980, 0x2629a0 },
    { L"Purple Energy C (Unused)", 0x2629a0, 0x2629c0 },
    { L"Mirror Attack C (Unused)", 0x2629c0, 0x2629e0 },
    { L"Intro Clothes C", 0x2629e0, 0x262a00 },
    { L"Unused Extra C", 0x262a00, 0x262a20 },
    { L"Winpose C (Young Form)", 0x262a20, 0x262a40, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 C", 0x262a40, 0x262a60, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 C", 0x262a60, 0x262a80, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 C (Young)", 0x262a80, 0x262aa0, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 C (Young)", 0x262aa0, 0x262ac0, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x262ac0, 0x262ae0, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail C", 0x262ae0, 0x262b00, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x262b00, 0x262b20, indexMatriMSprites_Tane, 0x00 },
    { L"HUD Portrait C (Unused)", 0x262b20, 0x262b40, indexMatriMSprites_Tane, 0x31 },
};

const sGame_PaletteDataset BnK_P_OTANE_D_PALETTES[] =
{
    { L"Otane D", 0x262b40, 0x262b60, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi D", 0x262b60, 0x262b80 },
    { L"Burning Energy D (Unused)", 0x262b80, 0x262ba0 },
    { L"Purple Energy D (Unused)", 0x262ba0, 0x262bc0 },
    { L"Mirror Attack D (Unused)", 0x262bc0, 0x262be0 },
    { L"Intro Clothes D", 0x262be0, 0x262c00 },
    { L"Unused Extra D", 0x262c00, 0x262c20 },
    { L"Winpose D (Young Form)", 0x262c20, 0x262c40, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 D", 0x262c40, 0x262c60, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 D", 0x262c60, 0x262c80, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 D (Young)", 0x262c80, 0x262ca0, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 D (Young)", 0x262ca0, 0x262cc0, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x262cc0, 0x262ce0, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail D", 0x262ce0, 0x262d00, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x262d00, 0x262d20, indexMatriMSprites_Tane, 0x00 },
    { L"HUD Portrait D (Unused)", 0x262d20, 0x262d40, indexMatriMSprites_Tane, 0x31 },
};

const sGame_PaletteDataset BnK_P_OTANE_SUMMER_PALETTES[] =
{
    { L"Otane Summer", 0x262d40, 0x262d60, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi Summer", 0x262d60, 0x262d80 },
    { L"Burning Energy Summer (Unused)", 0x262d80, 0x262da0 },
    { L"Purple Energy Summer (Unused)", 0x262da0, 0x262dc0 },
    { L"Mirror Attack Summer (Unused)", 0x262dc0, 0x262de0 },
    { L"Intro Clothes Summer", 0x262de0, 0x262e00 },
    { L"Unused Extra Summer", 0x262e00, 0x262e20 },
    { L"Winpose Summer (Young Form)", 0x262e20, 0x262e40, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 Summer", 0x262e40, 0x262e60, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 Summer", 0x262e60, 0x262e80, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 Summer (Young)", 0x262e80, 0x262ea0, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 Summer (Young)", 0x262ea0, 0x262ec0, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x262ec0, 0x262ee0, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail Summer", 0x262ee0, 0x262f00, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x262f00, 0x262f20, indexMatriMSprites_Tane, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_ZOMBIE_PALETTES[] =
{
    { L"Otane Zombie", 0x262f20, 0x262f40, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi Zombie", 0x262f40, 0x262f60 },
    { L"Burning Energy Zombie (Unused)", 0x262f60, 0x262f80 },
    { L"Purple Energy Zombie (Unused)", 0x262f80, 0x262fa0 },
    { L"Mirror Attack Zombie (Unused)", 0x262fa0, 0x262fc0 },
    { L"Intro Clothes Zombie", 0x262fc0, 0x262fe0 },
    { L"Unused Extra Zombie", 0x262fe0, 0x263000 },
    { L"Winpose Zombie (Young Form)", 0x263000, 0x263020, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 Zombie", 0x263020, 0x263040, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 Zombie", 0x263040, 0x263060, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 Zombie (Young)", 0x263060, 0x263080, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 Zombie (Young)", 0x263080, 0x2630a0, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x2630a0, 0x2630c0, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail Zombie", 0x2630c0, 0x2630e0, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x2630e0, 0x263100, indexMatriMSprites_Tane, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_EXTREME_PALETTES[] =
{
    { L"Otane Extreme", 0x263100, 0x263120, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi Extreme", 0x263120, 0x263140 },
    { L"Burning Energy Extreme (Unused)", 0x263140, 0x263160 },
    { L"Purple Energy Extreme (Unused)", 0x263160, 0x263180 },
    { L"Mirror Attack Extreme (Unused)", 0x263180, 0x2631a0 },
    { L"Intro Clothes Extreme", 0x2631a0, 0x2631c0 },
    { L"Unused Extra Extreme", 0x2631c0, 0x2631e0 },
    { L"Winpose Extreme (Young Form)", 0x2631e0, 0x263200, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 Extreme", 0x263200, 0x263220, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 Extreme", 0x263220, 0x263240, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 Extreme (Young)", 0x263240, 0x263260, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 Extreme (Young)", 0x263260, 0x263280, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x263280, 0x2632a0, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail Extreme", 0x2632a0, 0x2632c0, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x2632c0, 0x2632e0, indexMatriMSprites_Tane, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_WHITE_PALETTES[] =
{
    { L"Otane White", 0x2632e0, 0x263300, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi White", 0x263300, 0x263320 },
    { L"Burning Energy White (Unused)", 0x263320, 0x263340 },
    { L"Purple Energy White (Unused)", 0x263340, 0x263360 },
    { L"Mirror Attack White (Unused)", 0x263360, 0x263380 },
    { L"Intro Clothes White", 0x263380, 0x2633a0 },
    { L"Unused Extra White", 0x2633a0, 0x2633c0 },
    { L"Winpose White (Young Form)", 0x2633c0, 0x2633e0, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 White", 0x2633e0, 0x263400, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 White", 0x263400, 0x263420, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 White (Young)", 0x263420, 0x263440, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 White (Young)", 0x263440, 0x263460, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x263460, 0x263480, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail White", 0x263480, 0x2634a0, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x2634a0, 0x2634c0, indexMatriMSprites_Tane, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_YOUNG_A_PALETTES[] =
{
    { L"Otane A (Young)", 0x26ad04, 0x26ad24, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Unused Extra 1 A", 0x26ad24, 0x26ad44 },
    { L"Unused Extra 2 A", 0x26ad44, 0x26ad64 },
    { L"Otane A (Transformation)", 0x26ad64, 0x26ad84, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x26ad84, 0x26ada4, indexBnKSprites_OtaneYoung, 0x00 },
    { L"EX/Super Trail A", 0x26ada4, 0x26adc4, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x26adc4, 0x26ade4, indexBnKSprites_OtaneYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_YOUNG_B_PALETTES[] =
{
    { L"Otane B (Young)", 0x26ade4, 0x26ae04, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Unused Extra 1 B", 0x26ae04, 0x26ae24 },
    { L"Unused Extra 2 B", 0x26ae24, 0x26ae44 },
    { L"Otane B (Transformation)", 0x26ae44, 0x26ae64, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x26ae64, 0x26ae84, indexBnKSprites_OtaneYoung, 0x00 },
    { L"EX/Super Trail B", 0x26ae84, 0x26aea4, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x26aea4, 0x26aec4, indexBnKSprites_OtaneYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_YOUNG_C_PALETTES[] =
{
    { L"Otane C (Young)", 0x26aec4, 0x26aee4, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Unused Extra 1 C", 0x26aee4, 0x26af04 },
    { L"Unused Extra 2 C", 0x26af04, 0x26af24 },
    { L"Otane C (Transformation)", 0x26af24, 0x26af44, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x26af44, 0x26af64, indexBnKSprites_OtaneYoung, 0x00 },
    { L"EX/Super Trail C", 0x26af64, 0x26af84, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x26af84, 0x26afa4, indexBnKSprites_OtaneYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_YOUNG_D_PALETTES[] =
{
    { L"Otane D (Young)", 0x26afa4, 0x26afc4, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Unused Extra 1 D", 0x26afc4, 0x26afe4 },
    { L"Unused Extra 2 D", 0x26afe4, 0x26b004 },
    { L"Otane D (Transformation)", 0x26b004, 0x26b024, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x26b024, 0x26b044, indexBnKSprites_OtaneYoung, 0x00 },
    { L"EX/Super Trail D", 0x26b044, 0x26b064, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x26b064, 0x26b084, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Guard Cancel Trail 2? D (Unused)", 0x26b084, 0x26b0a4 },
};

const sGame_PaletteDataset BnK_P_OTANE_YOUNG_SUMMER_PALETTES[] =
{
    { L"Otane Summer (Young)", 0x26b0a4, 0x26b0c4, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Unused Extra 1 Summer", 0x26b0c4, 0x26b0e4 },
    { L"Unused Extra 2 Summer", 0x26b0e4, 0x26b104 },
    { L"Otane Summer (Transformation)", 0x26b104, 0x26b124, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x26b124, 0x26b144, indexBnKSprites_OtaneYoung, 0x00 },
    { L"EX/Super Trail Summer", 0x26b144, 0x26b164, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x26b164, 0x26b184, indexBnKSprites_OtaneYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_YOUNG_ZOMBIE_PALETTES[] =
{
    { L"Otane Zombie (Young)", 0x26b184, 0x26b1a4, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Unused Extra 1 Zombie", 0x26b1a4, 0x26b1c4 },
    { L"Unused Extra 2 Zombie", 0x26b1c4, 0x26b1e4 },
    { L"Otane Zombie (Transformation)", 0x26b1e4, 0x26b204, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x26b204, 0x26b224, indexBnKSprites_OtaneYoung, 0x00 },
    { L"EX/Super Trail Zombie", 0x26b224, 0x26b244, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x26b244, 0x26b264, indexBnKSprites_OtaneYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_YOUNG_EXTREME_PALETTES[] =
{
    { L"Otane Extreme (Young)", 0x26b264, 0x26b284, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Unused Extra 1 Extreme", 0x26b284, 0x26b2a4 },
    { L"Unused Extra 2 Extreme", 0x26b2a4, 0x26b2c4 },
    { L"Otane Extreme (Transformation)", 0x26b2c4, 0x26b2e4, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x26b2e4, 0x26b304, indexBnKSprites_OtaneYoung, 0x00 },
    { L"EX/Super Trail Extreme", 0x26b304, 0x26b324, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x26b324, 0x26b344, indexBnKSprites_OtaneYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OTANE_YOUNG_WHITE_PALETTES[] =
{
    { L"Otane White (Young)", 0x26b344, 0x26b364, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Unused Extra 1 White", 0x26b364, 0x26b384 },
    { L"Unused Extra 2 White", 0x26b384, 0x26b3a4 },
    { L"Otane White (Transformation)", 0x26b3a4, 0x26b3c4, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x26b3c4, 0x26b3e4, indexBnKSprites_OtaneYoung, 0x00 },
    { L"EX/Super Trail White", 0x26b3e4, 0x26b404, indexBnKSprites_OtaneYoung, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x26b404, 0x26b424, indexBnKSprites_OtaneYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_A_PALETTES[] =
{
    { L"Oume A", 0x2634c2, 0x2634e2, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi A", 0x2634e2, 0x263502 },
    { L"Burning Energy A (Unused)", 0x263502, 0x263522 },
    { L"Purple Energy A (Unused)", 0x263522, 0x263542 },
    { L"Mirror Attack A", 0x263542, 0x263562 },
    { L"Intro Clothes A", 0x263562, 0x263582 },
    { L"Unused Extra A", 0x263582, 0x2635a2 },
    { L"Winpose A (Young Form)", 0x2635a2, 0x2635c2, indexMatriMSprites_Ume, 0x00 },
    { L"Winpose Flash 1 A", 0x2635c2, 0x2635e2, indexMatriMSprites_Ume, 0x00 },
    { L"Winpose Flash 2 A", 0x2635e2, 0x263602, indexMatriMSprites_Ume, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x263602, 0x263622, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail A", 0x263622, 0x263642, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x263642, 0x263662, indexMatriMSprites_Ume, 0x00 },
    { L"HUD Portrait A (Unused)", 0x263662, 0x263682, indexMatriMSprites_Ume, 0x31 },
};

const sGame_PaletteDataset BnK_P_OUME_B_PALETTES[] =
{
    { L"Oume B", 0x263682, 0x2636a2, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi B", 0x2636a2, 0x2636c2 },
    { L"Burning Energy B (Unused)", 0x2636c2, 0x2636e2 },
    { L"Purple Energy B (Unused)", 0x2636e2, 0x263702 },
    { L"Mirror Attack B", 0x263702, 0x263722 },
    { L"Intro Clothes B", 0x263722, 0x263742 },
    { L"Unused Extra B", 0x263742, 0x263762 },
    { L"Rolling/Super Jump Trail B", 0x263762, 0x263782, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail B", 0x263782, 0x2637a2, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x2637a2, 0x2637c2, indexMatriMSprites_Ume, 0x00 },
    { L"HUD Portrait B (Unused)", 0x2637c2, 0x2637e2, indexMatriMSprites_Ume, 0x31 },
};

const sGame_PaletteDataset BnK_P_OUME_C_PALETTES[] =
{
    { L"Oume C", 0x2637e2, 0x263802, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi C", 0x263802, 0x263822 },
    { L"Burning Energy C (Unused)", 0x263822, 0x263842 },
    { L"Purple Energy C (Unused)", 0x263842, 0x263862 },
    { L"Mirror Attack C", 0x263862, 0x263882 },
    { L"Intro Clothes C", 0x263882, 0x2638a2 },
    { L"Unused Extra C", 0x2638a2, 0x2638c2 },
    { L"Rolling/Super Jump Trail C", 0x2638c2, 0x2638e2, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail C", 0x2638e2, 0x263902, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x263902, 0x263922, indexMatriMSprites_Ume, 0x00 },
    { L"HUD Portrait C (Unused)", 0x263922, 0x263942, indexMatriMSprites_Ume, 0x31 },
};

const sGame_PaletteDataset BnK_P_OUME_D_PALETTES[] =
{
    { L"Oume D", 0x263942, 0x263962, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi D", 0x263962, 0x263982 },
    { L"Burning Energy D (Unused)", 0x263982, 0x2639a2 },
    { L"Purple Energy D (Unused)", 0x2639a2, 0x2639c2 },
    { L"Mirror Attack D", 0x2639c2, 0x2639e2 },
    { L"Intro Clothes D", 0x2639e2, 0x263a02 },
    { L"Unused Extra D", 0x263a02, 0x263a22 },
    { L"Rolling/Super Jump Trail D", 0x263a22, 0x263a42, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail D", 0x263a42, 0x263a62, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x263a62, 0x263a82, indexMatriMSprites_Ume, 0x00 },
    { L"HUD Portrait D (Unused)", 0x263a82, 0x263aa2, indexMatriMSprites_Ume, 0x31 },
};

const sGame_PaletteDataset BnK_P_OUME_SUMMER_PALETTES[] =
{
    { L"Oume Summer", 0x263aa2, 0x263ac2, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi Summer", 0x263ac2, 0x263ae2 },
    { L"Burning Energy Summer (Unused)", 0x263ae2, 0x263b02 },
    { L"Purple Energy Summer (Unused)", 0x263b02, 0x263b22 },
    { L"Mirror Attack Summer", 0x263b22, 0x263b42 },
    { L"Intro Clothes Summer", 0x263b42, 0x263b62 },
    { L"Unused Extra Summer", 0x263b62, 0x263b82 },
    { L"Rolling/Super Jump Trail Summer", 0x263b82, 0x263ba2, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail Summer", 0x263ba2, 0x263bc2, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x263bc2, 0x263be2, indexMatriMSprites_Ume, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_ZOMBIE_PALETTES[] =
{
    { L"Oume Zombie", 0x263be2, 0x263c02, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi Zombie", 0x263c02, 0x263c22 },
    { L"Burning Energy Zombie (Unused)", 0x263c22, 0x263c42 },
    { L"Purple Energy Zombie (Unused)", 0x263c42, 0x263c62 },
    { L"Mirror Attack Zombie", 0x263c62, 0x263c82 },
    { L"Intro Clothes Zombie", 0x263c82, 0x263ca2 },
    { L"Unused Extra Zombie", 0x263ca2, 0x263cc2 },
    { L"Rolling/Super Jump Trail Zombie", 0x263cc2, 0x263ce2, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail Zombie", 0x263ce2, 0x263d02, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x263d02, 0x263d22, indexMatriMSprites_Ume, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_EXTREME_PALETTES[] =
{
    { L"Oume Extreme", 0x263d22, 0x263d42, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi Extreme", 0x263d42, 0x263d62 },
    { L"Burning Energy Extreme (Unused)", 0x263d62, 0x263d82 },
    { L"Purple Energy Extreme (Unused)", 0x263d82, 0x263da2 },
    { L"Mirror Attack Extreme", 0x263da2, 0x263dc2 },
    { L"Intro Clothes Extreme", 0x263dc2, 0x263de2 },
    { L"Unused Extra Extreme", 0x263de2, 0x263e02 },
    { L"Rolling/Super Jump Trail Extreme", 0x263e02, 0x263e22, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail Extreme", 0x263e22, 0x263e42, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x263e42, 0x263e62, indexMatriMSprites_Ume, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_WHITE_PALETTES[] =
{
    { L"Oume White", 0x263e62, 0x263e82, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi White", 0x263e82, 0x263ea2 },
    { L"Burning Energy White (Unused)", 0x263ea2, 0x263ec2 },
    { L"Purple Energy White (Unused)", 0x263ec2, 0x263ee2 },
    { L"Mirror Attack White", 0x263ee2, 0x263f02 },
    { L"Intro Clothes White", 0x263f02, 0x263f22 },
    { L"Unused Extra White", 0x263f22, 0x263f42 },
    { L"Rolling/Super Jump Trail White", 0x263f42, 0x263f62, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail White", 0x263f62, 0x263f82, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x263f82, 0x263fa2, indexMatriMSprites_Ume, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_YOUNG_A_PALETTES[] =
{
    { L"Oume A (Young)", 0x26a602, 0x26a622, indexBnKSprites_OumeYoung, 0x00 },
    { L"Unused Extra 1 A", 0x26a622, 0x26a642 },
    { L"Unused Extra 2 A", 0x26a642, 0x26a662 },
    { L"Oume A (Transformation)", 0x26a662, 0x26a682, indexBnKSprites_OumeYoung, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x26a682, 0x26a6a2, indexBnKSprites_OumeYoung, 0x00 },
    { L"EX/Super Trail A", 0x26a6a2, 0x26a6c2, indexBnKSprites_OumeYoung, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x26a6c2, 0x26a6e2, indexBnKSprites_OumeYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_YOUNG_B_PALETTES[] =
{
    { L"Oume B (Young)", 0x26a6e2, 0x26a702, indexBnKSprites_OumeYoung, 0x00 },
    { L"Unused Extra 1 B", 0x26a702, 0x26a722 },
    { L"Unused Extra 2 B", 0x26a722, 0x26a742 },
    { L"Oume B (Transformation)", 0x26a742, 0x26a762, indexBnKSprites_OumeYoung, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x26a762, 0x26a782, indexBnKSprites_OumeYoung, 0x00 },
    { L"EX/Super Trail B", 0x26a782, 0x26a7a2, indexBnKSprites_OumeYoung, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x26a7a2, 0x26a7c2, indexBnKSprites_OumeYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_YOUNG_C_PALETTES[] =
{
    { L"Oume C (Young)", 0x26a7c2, 0x26a7e2, indexBnKSprites_OumeYoung, 0x00 },
    { L"Unused Extra 1 C", 0x26a7e2, 0x26a802 },
    { L"Unused Extra 2 C", 0x26a802, 0x26a822 },
    { L"Oume C (Transformation)", 0x26a822, 0x26a842, indexBnKSprites_OumeYoung, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x26a842, 0x26a862, indexBnKSprites_OumeYoung, 0x00 },
    { L"EX/Super Trail C", 0x26a862, 0x26a882, indexBnKSprites_OumeYoung, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x26a882, 0x26a8a2, indexBnKSprites_OumeYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_YOUNG_D_PALETTES[] =
{
    { L"Oume D (Young)", 0x26a8a2, 0x26a8c2, indexBnKSprites_OumeYoung, 0x00 },
    { L"Unused Extra 1 D", 0x26a8c2, 0x26a8e2 },
    { L"Unused Extra 2 D", 0x26a8e2, 0x26a902 },
    { L"Oume D (Transformation)", 0x26a902, 0x26a922, indexBnKSprites_OumeYoung, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x26a922, 0x26a942, indexBnKSprites_OumeYoung, 0x00 },
    { L"EX/Super Trail D", 0x26a942, 0x26a962, indexBnKSprites_OumeYoung, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x26a962, 0x26a982, indexBnKSprites_OumeYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_YOUNG_SUMMER_PALETTES[] =
{
    { L"Oume Summer (Young)", 0x26a982, 0x26a9a2, indexBnKSprites_OumeYoung, 0x00 },
    { L"Unused Extra 1 Summer", 0x26a9a2, 0x26a9c2 },
    { L"Unused Extra 2 Summer", 0x26a9c2, 0x26a9e2 },
    { L"Oume Summer (Transformation)", 0x26a9e2, 0x26aa02, indexBnKSprites_OumeYoung, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x26aa02, 0x26aa22, indexBnKSprites_OumeYoung, 0x00 },
    { L"EX/Super Trail Summer", 0x26aa22, 0x26aa42, indexBnKSprites_OumeYoung, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x26aa42, 0x26aa62, indexBnKSprites_OumeYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_YOUNG_ZOMBIE_PALETTES[] =
{
    { L"Oume Zombie (Young)", 0x26aa62, 0x26aa82, indexBnKSprites_OumeYoung, 0x00 },
    { L"Unused Extra 1 Zombie", 0x26aa82, 0x26aaa2 },
    { L"Unused Extra 2 Zombie", 0x26aaa2, 0x26aac2 },
    { L"Oume Zombie (Transformation)", 0x26aac2, 0x26aae2, indexBnKSprites_OumeYoung, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x26aae2, 0x26ab02, indexBnKSprites_OumeYoung, 0x00 },
    { L"EX/Super Trail Zombie", 0x26ab02, 0x26ab22, indexBnKSprites_OumeYoung, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x26ab22, 0x26ab42, indexBnKSprites_OumeYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_YOUNG_EXTREME_PALETTES[] =
{
    { L"Oume Extreme (Young)", 0x26ab42, 0x26ab62, indexBnKSprites_OumeYoung, 0x00 },
    { L"Unused Extra 1 Extreme", 0x26ab62, 0x26ab82 },
    { L"Unused Extra 2 Extreme", 0x26ab82, 0x26aba2 },
    { L"Oume Extreme (Transformation)", 0x26aba2, 0x26abc2, indexBnKSprites_OumeYoung, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x26abc2, 0x26abe2, indexBnKSprites_OumeYoung, 0x00 },
    { L"EX/Super Trail Extreme", 0x26abe2, 0x26ac02, indexBnKSprites_OumeYoung, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x26ac02, 0x26ac22, indexBnKSprites_OumeYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_OUME_YOUNG_WHITE_PALETTES[] =
{
    { L"Oume White (Young)", 0x26ac22, 0x26ac42, indexBnKSprites_OumeYoung, 0x00 },
    { L"Unused Extra 1 White", 0x26ac42, 0x26ac62 },
    { L"Unused Extra 2 White", 0x26ac62, 0x26ac82 },
    { L"Oume White (Transformation)", 0x26ac82, 0x26aca2, indexBnKSprites_OumeYoung, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x26aca2, 0x26acc2, indexBnKSprites_OumeYoung, 0x00 },
    { L"EX/Super Trail White", 0x26acc2, 0x26ace2, indexBnKSprites_OumeYoung, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x26ace2, 0x26ad02, indexBnKSprites_OumeYoung, 0x00 },
};

const sGame_PaletteDataset BnK_P_WHITE_A_PALETTES[] =
{
    { L"White Buffalo A", 0x25f3b4, 0x25f3d4, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks A (Unused)", 0x25f3d4, 0x25f3f4 },
    { L"Buffalo Storm A (Unused)", 0x25f3f4, 0x25f414 },
    { L"Flying Elbow A", 0x25f414, 0x25f434 },
    { L"Totem Tornado A (Unused)", 0x25f434, 0x25f454 },
    { L"Intro Clothes A", 0x25f454, 0x25f474, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x25f474, 0x25f494, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail A", 0x25f494, 0x25f4b4, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail A (Unused)", 0x25f4b4, 0x25f4d4, indexMatriMSprites_White, 0x00 },
    { L"HUD Portrait A (Unused)", 0x25f4d4, 0x25f4f4, indexMatriMSprites_White, 0x31 },
};

const sGame_PaletteDataset BnK_P_WHITE_B_PALETTES[] =
{
    { L"White Buffalo B", 0x25f4f4, 0x25f514, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks B (Unused)", 0x25f514, 0x25f534 },
    { L"Buffalo Storm B (Unused)", 0x25f534, 0x25f554 },
    { L"Flying Elbow B", 0x25f554, 0x25f574 },
    { L"Totem Tornado B (Unused)", 0x25f574, 0x25f594 },
    { L"Intro Clothes B", 0x25f594, 0x25f5b4, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x25f5b4, 0x25f5d4, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail B", 0x25f5d4, 0x25f5f4, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail B (Unused)", 0x25f5f4, 0x25f614, indexMatriMSprites_White, 0x00 },
    { L"HUD Portrait B (Unused)", 0x25f614, 0x25f634, indexMatriMSprites_White, 0x31 },
};

const sGame_PaletteDataset BnK_P_WHITE_C_PALETTES[] =
{
    { L"White Buffalo C", 0x25f634, 0x25f654, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks C (Unused)", 0x25f654, 0x25f674 },
    { L"Buffalo Storm C (Unused)", 0x25f674, 0x25f694 },
    { L"Flying Elbow C", 0x25f694, 0x25f6b4 },
    { L"Totem Tornado C (Unused)", 0x25f6b4, 0x25f6d4 },
    { L"Intro Clothes C", 0x25f6d4, 0x25f6f4, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x25f6f4, 0x25f714, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail C", 0x25f714, 0x25f734, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail C (Unused)", 0x25f734, 0x25f754, indexMatriMSprites_White, 0x00 },
    { L"HUD Portrait C (Unused)", 0x25f754, 0x25f774, indexMatriMSprites_White, 0x31 },
};

const sGame_PaletteDataset BnK_P_WHITE_D_PALETTES[] =
{
    { L"White Buffalo D", 0x25f774, 0x25f794, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks D (Unused)", 0x25f794, 0x25f7b4 },
    { L"Buffalo Storm D (Unused)", 0x25f7b4, 0x25f7d4 },
    { L"Flying Elbow D", 0x25f7d4, 0x25f7f4 },
    { L"Totem Tornado D (Unused)", 0x25f7f4, 0x25f814 },
    { L"Intro Clothes D", 0x25f814, 0x25f834, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x25f834, 0x25f854, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail D", 0x25f854, 0x25f874, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail D (Unused)", 0x25f874, 0x25f894, indexMatriMSprites_White, 0x00 },
    { L"HUD Portrait D (Unused)", 0x25f894, 0x25f8b4, indexMatriMSprites_White, 0x31 },
};

const sGame_PaletteDataset BnK_P_WHITE_SUMMER_PALETTES[] =
{
    { L"White Buffalo Summer", 0x25f8b4, 0x25f8d4, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks Summer (Unused)", 0x25f8d4, 0x25f8f4 },
    { L"Buffalo Storm Summer (Unused)", 0x25f8f4, 0x25f914 },
    { L"Flying Elbow Summer", 0x25f914, 0x25f934 },
    { L"Totem Tornado Summer (Unused)", 0x25f934, 0x25f954 },
    { L"Intro Clothes Summer", 0x25f954, 0x25f974, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail Summer", 0x25f974, 0x25f994, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail Summer", 0x25f994, 0x25f9b4, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail Summer (Unused)", 0x25f9b4, 0x25f9d4, indexMatriMSprites_White, 0x00 },
};

const sGame_PaletteDataset BnK_P_WHITE_ZOMBIE_PALETTES[] =
{
    { L"White Buffalo Zombie", 0x25f9d4, 0x25f9f4, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks Zombie (Unused)", 0x25f9f4, 0x25fa14 },
    { L"Buffalo Storm Zombie (Unused)", 0x25fa14, 0x25fa34 },
    { L"Flying Elbow Zombie", 0x25fa34, 0x25fa54 },
    { L"Totem Tornado Zombie (Unused)", 0x25fa54, 0x25fa74 },
    { L"Intro Clothes Zombie", 0x25fa74, 0x25fa94, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail Zombie", 0x25fa94, 0x25fab4, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail Zombie", 0x25fab4, 0x25fad4, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail Zombie (Unused)", 0x25fad4, 0x25faf4, indexMatriMSprites_White, 0x00 },
};

const sGame_PaletteDataset BnK_P_WHITE_EXTREME_PALETTES[] =
{
    { L"White Buffalo Extreme", 0x25faf4, 0x25fb14, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks Extreme (Unused)", 0x25fb14, 0x25fb34 },
    { L"Buffalo Storm Extreme (Unused)", 0x25fb34, 0x25fb54 },
    { L"Flying Elbow Extreme", 0x25fb54, 0x25fb74 },
    { L"Totem Tornado Extreme (Unused)", 0x25fb74, 0x25fb94 },
    { L"Intro Clothes Extreme", 0x25fb94, 0x25fbb4, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail Extreme", 0x25fbb4, 0x25fbd4, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail Extreme", 0x25fbd4, 0x25fbf4, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail Extreme (Unused)", 0x25fbf4, 0x25fc14, indexMatriMSprites_White, 0x00 },
};

const sGame_PaletteDataset BnK_P_WHITE_WHITE_PALETTES[] =
{
    { L"White Buffalo White", 0x25fc14, 0x25fc34, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks White (Unused)", 0x25fc34, 0x25fc54 },
    { L"Buffalo Storm White (Unused)", 0x25fc54, 0x25fc74 },
    { L"Flying Elbow White", 0x25fc74, 0x25fc94 },
    { L"Totem Tornado White (Unused)", 0x25fc94, 0x25fcb4 },
    { L"Intro Clothes White", 0x25fcb4, 0x25fcd4, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail White", 0x25fcd4, 0x25fcf4, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail White", 0x25fcf4, 0x25fd14, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail White (Unused)", 0x25fd14, 0x25fd34, indexMatriMSprites_White, 0x00 },
};

const sDescTreeNode BnK_P_ANNY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_ANNY_A_PALETTES,    ARRAYSIZE(BnK_P_ANNY_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_ANNY_B_PALETTES,    ARRAYSIZE(BnK_P_ANNY_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_ANNY_C_PALETTES,    ARRAYSIZE(BnK_P_ANNY_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_ANNY_D_PALETTES,    ARRAYSIZE(BnK_P_ANNY_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_ANNY_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_ANNY_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_ANNY_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_ANNY_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_ANNY_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_ANNY_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_ANNY_WHITE_PALETTES,      ARRAYSIZE(BnK_P_ANNY_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_ANGELA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_ANGELA_A_PALETTES,    ARRAYSIZE(BnK_P_ANGELA_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_ANGELA_B_PALETTES,    ARRAYSIZE(BnK_P_ANGELA_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_ANGELA_C_PALETTES,    ARRAYSIZE(BnK_P_ANGELA_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_ANGELA_D_PALETTES,    ARRAYSIZE(BnK_P_ANGELA_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_ANGELA_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_ANGELA_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_ANGELA_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_ANGELA_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_ANGELA_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_ANGELA_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_ANGELA_WHITE_PALETTES,      ARRAYSIZE(BnK_P_ANGELA_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_BOBBY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_BOBBY_A_PALETTES,    ARRAYSIZE(BnK_P_BOBBY_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_BOBBY_B_PALETTES,    ARRAYSIZE(BnK_P_BOBBY_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_BOBBY_C_PALETTES,    ARRAYSIZE(BnK_P_BOBBY_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_BOBBY_D_PALETTES,    ARRAYSIZE(BnK_P_BOBBY_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_BOBBY_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_BOBBY_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_BOBBY_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_BOBBY_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_BOBBY_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_BOBBY_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_BOBBY_WHITE_PALETTES,      ARRAYSIZE(BnK_P_BOBBY_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_BUNTARO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_BUNTARO_A_PALETTES,    ARRAYSIZE(BnK_P_BUNTARO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_BUNTARO_B_PALETTES,    ARRAYSIZE(BnK_P_BUNTARO_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_BUNTARO_C_PALETTES,    ARRAYSIZE(BnK_P_BUNTARO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_BUNTARO_D_PALETTES,    ARRAYSIZE(BnK_P_BUNTARO_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_BUNTARO_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_BUNTARO_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_BUNTARO_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_BUNTARO_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_BUNTARO_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_BUNTARO_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_BUNTARO_WHITE_PALETTES,      ARRAYSIZE(BnK_P_BUNTARO_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_CHINNEN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_CHINNEN_A_PALETTES,    ARRAYSIZE(BnK_P_CHINNEN_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_CHINNEN_B_PALETTES,    ARRAYSIZE(BnK_P_CHINNEN_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_CHINNEN_C_PALETTES,    ARRAYSIZE(BnK_P_CHINNEN_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_CHINNEN_D_PALETTES,    ARRAYSIZE(BnK_P_CHINNEN_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_CHINNEN_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_CHINNEN_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_CHINNEN_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_CHINNEN_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_CHINNEN_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_CHINNEN_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_CHINNEN_WHITE_PALETTES,      ARRAYSIZE(BnK_P_CHINNEN_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_CLARA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_CLARA_A_PALETTES,    ARRAYSIZE(BnK_P_CLARA_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_CLARA_B_PALETTES,    ARRAYSIZE(BnK_P_CLARA_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_CLARA_C_PALETTES,    ARRAYSIZE(BnK_P_CLARA_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_CLARA_D_PALETTES,    ARRAYSIZE(BnK_P_CLARA_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_CLARA_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_CLARA_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_CLARA_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_CLARA_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_CLARA_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_CLARA_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_CLARA_WHITE_PALETTES,      ARRAYSIZE(BnK_P_CLARA_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_SUPERCLARA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_SUPERKURARA_A_PALETTES,    ARRAYSIZE(BnK_P_SUPERKURARA_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_SUPERKURARA_B_PALETTES,    ARRAYSIZE(BnK_P_SUPERKURARA_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_SUPERKURARA_C_PALETTES,    ARRAYSIZE(BnK_P_SUPERKURARA_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_SUPERKURARA_D_PALETTES,    ARRAYSIZE(BnK_P_SUPERKURARA_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_SUPERKURARA_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_SUPERKURARA_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_SUPERKURARA_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_SUPERKURARA_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_SUPERKURARA_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_SUPERKURARA_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_SUPERKURARA_WHITE_PALETTES,      ARRAYSIZE(BnK_P_SUPERKURARA_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_ELIAS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_ELIAS_A_PALETTES,    ARRAYSIZE(BnK_P_ELIAS_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_ELIAS_B_PALETTES,    ARRAYSIZE(BnK_P_ELIAS_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_ELIAS_C_PALETTES,    ARRAYSIZE(BnK_P_ELIAS_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_ELIAS_D_PALETTES,    ARRAYSIZE(BnK_P_ELIAS_D_PALETTES) },

    { L"Shared", DESC_NODETYPE_TREE,     (void*)BnK_P_ELIAS_SHARED_PALETTES,    ARRAYSIZE(BnK_P_ELIAS_SHARED_PALETTES) },
};

const sDescTreeNode BnK_P_HIKARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_HIKARU_A_PALETTES,    ARRAYSIZE(BnK_P_HIKARU_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_HIKARU_B_PALETTES,    ARRAYSIZE(BnK_P_HIKARU_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_HIKARU_C_PALETTES,    ARRAYSIZE(BnK_P_HIKARU_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_HIKARU_D_PALETTES,    ARRAYSIZE(BnK_P_HIKARU_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_HIKARU_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_HIKARU_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_HIKARU_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_HIKARU_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_HIKARU_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_HIKARU_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_HIKARU_WHITE_PALETTES,      ARRAYSIZE(BnK_P_HIKARU_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_JIMMY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_JIMMY_A_PALETTES,    ARRAYSIZE(BnK_P_JIMMY_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_JIMMY_B_PALETTES,    ARRAYSIZE(BnK_P_JIMMY_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_JIMMY_C_PALETTES,    ARRAYSIZE(BnK_P_JIMMY_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_JIMMY_D_PALETTES,    ARRAYSIZE(BnK_P_JIMMY_D_PALETTES) },

    { L"Shared", DESC_NODETYPE_TREE,     (void*)BnK_P_JIMMY_SHARED_PALETTES,    ARRAYSIZE(BnK_P_JIMMY_SHARED_PALETTES) },
};

const sDescTreeNode BnK_P_JONES_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_MRJONES_A_PALETTES,    ARRAYSIZE(BnK_P_MRJONES_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_MRJONES_B_PALETTES,    ARRAYSIZE(BnK_P_MRJONES_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_MRJONES_C_PALETTES,    ARRAYSIZE(BnK_P_MRJONES_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_MRJONES_D_PALETTES,    ARRAYSIZE(BnK_P_MRJONES_D_PALETTES) },

    { L"Shared", DESC_NODETYPE_TREE,     (void*)BnK_P_MRJONES_SHARED_PALETTES,    ARRAYSIZE(BnK_P_MRJONES_SHARED_PALETTES) },
};

const sDescTreeNode BnK_P_KANJI_WEAK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_KANJI_WEAK_A_PALETTES,    ARRAYSIZE(BnK_P_KANJI_WEAK_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_KANJI_WEAK_B_PALETTES,    ARRAYSIZE(BnK_P_KANJI_WEAK_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_KANJI_WEAK_C_PALETTES,    ARRAYSIZE(BnK_P_KANJI_WEAK_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_KANJI_WEAK_D_PALETTES,    ARRAYSIZE(BnK_P_KANJI_WEAK_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_KANJI_WEAK_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_KANJI_WEAK_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_KANJI_WEAK_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_KANJI_WEAK_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_KANJI_WEAK_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_KANJI_WEAK_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_KANJI_WEAK_WHITE_PALETTES,      ARRAYSIZE(BnK_P_KANJI_WEAK_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_KANJI_STRONG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_KANJI_STRONG_A_PALETTES,    ARRAYSIZE(BnK_P_KANJI_STRONG_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_KANJI_STRONG_B_PALETTES,    ARRAYSIZE(BnK_P_KANJI_STRONG_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_KANJI_STRONG_C_PALETTES,    ARRAYSIZE(BnK_P_KANJI_STRONG_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_KANJI_STRONG_D_PALETTES,    ARRAYSIZE(BnK_P_KANJI_STRONG_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_KANJI_STRONG_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_KANJI_STRONG_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_KANJI_STRONG_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_KANJI_STRONG_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_KANJI_STRONG_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_KANJI_STRONG_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_KANJI_STRONG_WHITE_PALETTES,      ARRAYSIZE(BnK_P_KANJI_STRONG_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_KINTARO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_KINTARO_A_PALETTES,    ARRAYSIZE(BnK_P_KINTARO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_KINTARO_B_PALETTES,    ARRAYSIZE(BnK_P_KINTARO_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_KINTARO_C_PALETTES,    ARRAYSIZE(BnK_P_KINTARO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_KINTARO_D_PALETTES,    ARRAYSIZE(BnK_P_KINTARO_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_KINTARO_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_KINTARO_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_KINTARO_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_KINTARO_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_KINTARO_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_KINTARO_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_KINTARO_WHITE_PALETTES,      ARRAYSIZE(BnK_P_KINTARO_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_KEITH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_KEITH_A_PALETTES,    ARRAYSIZE(BnK_P_KEITH_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_KEITH_B_PALETTES,    ARRAYSIZE(BnK_P_KEITH_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_KEITH_C_PALETTES,    ARRAYSIZE(BnK_P_KEITH_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_KEITH_D_PALETTES,    ARRAYSIZE(BnK_P_KEITH_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_KEITH_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_KEITH_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_KEITH_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_KEITH_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_KEITH_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_KEITH_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_KEITH_WHITE_PALETTES,      ARRAYSIZE(BnK_P_KEITH_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_LYNN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_LYNN_A_PALETTES,    ARRAYSIZE(BnK_P_LYNN_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_LYNN_B_PALETTES,    ARRAYSIZE(BnK_P_LYNN_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_LYNN_C_PALETTES,    ARRAYSIZE(BnK_P_LYNN_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_LYNN_D_PALETTES,    ARRAYSIZE(BnK_P_LYNN_D_PALETTES) },

    { L"Shared", DESC_NODETYPE_TREE,          (void*)BnK_P_LYNN_SHARED_PALETTES,    ARRAYSIZE(BnK_P_LYNN_SHARED_PALETTES) },
};

const sDescTreeNode BnK_P_OLOF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_OLOF_A_PALETTES,    ARRAYSIZE(BnK_P_OLOF_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_OLOF_B_PALETTES,    ARRAYSIZE(BnK_P_OLOF_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_OLOF_C_PALETTES,    ARRAYSIZE(BnK_P_OLOF_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_OLOF_D_PALETTES,    ARRAYSIZE(BnK_P_OLOF_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_OLOF_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_OLOF_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_OLOF_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_OLOF_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_OLOF_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_OLOF_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_OLOF_WHITE_PALETTES,      ARRAYSIZE(BnK_P_OLOF_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_POOCHY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_POOCHY_TRANSFORM_A_PALETTES,    ARRAYSIZE(BnK_P_POOCHY_TRANSFORM_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_POOCHY_TRANSFORM_B_PALETTES,    ARRAYSIZE(BnK_P_POOCHY_TRANSFORM_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_POOCHY_TRANSFORM_C_PALETTES,    ARRAYSIZE(BnK_P_POOCHY_TRANSFORM_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_POOCHY_TRANSFORM_D_PALETTES,    ARRAYSIZE(BnK_P_POOCHY_TRANSFORM_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_POOCHY_TRANSFORM_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_POOCHY_TRANSFORM_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_POOCHY_TRANSFORM_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_POOCHY_TRANSFORM_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_POOCHY_TRANSFORM_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_POOCHY_TRANSFORM_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_POOCHY_TRANSFORM_WHITE_PALETTES,      ARRAYSIZE(BnK_P_POOCHY_TRANSFORM_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_PRINCESSSISSY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_PRINCESSSISSY_A_PALETTES,    ARRAYSIZE(BnK_P_PRINCESSSISSY_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_PRINCESSSISSY_B_PALETTES,    ARRAYSIZE(BnK_P_PRINCESSSISSY_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_PRINCESSSISSY_C_PALETTES,    ARRAYSIZE(BnK_P_PRINCESSSISSY_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_PRINCESSSISSY_D_PALETTES,    ARRAYSIZE(BnK_P_PRINCESSSISSY_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_PRINCESSSISSY_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_PRINCESSSISSY_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_PRINCESSSISSY_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_PRINCESSSISSY_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_PRINCESSSISSY_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_PRINCESSSISSY_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_PRINCESSSISSY_WHITE_PALETTES,      ARRAYSIZE(BnK_P_PRINCESSSISSY_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_REIJI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_REIJI_A_PALETTES,    ARRAYSIZE(BnK_P_REIJI_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_REIJI_B_PALETTES,    ARRAYSIZE(BnK_P_REIJI_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_REIJI_C_PALETTES,    ARRAYSIZE(BnK_P_REIJI_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_REIJI_D_PALETTES,    ARRAYSIZE(BnK_P_REIJI_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_REIJI_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_REIJI_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_REIJI_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_REIJI_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_REIJI_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_REIJI_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_REIJI_WHITE_PALETTES,      ARRAYSIZE(BnK_P_REIJI_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_SAIZO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_SAIZO_A_PALETTES,    ARRAYSIZE(BnK_P_SAIZO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_SAIZO_B_PALETTES,    ARRAYSIZE(BnK_P_SAIZO_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_SAIZO_C_PALETTES,    ARRAYSIZE(BnK_P_SAIZO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_SAIZO_D_PALETTES,    ARRAYSIZE(BnK_P_SAIZO_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_SAIZO_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_SAIZO_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_SAIZO_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_SAIZO_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_SAIZO_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_SAIZO_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_SAIZO_WHITE_PALETTES,      ARRAYSIZE(BnK_P_SAIZO_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_SHINTARO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_SHINTARO_A_PALETTES,    ARRAYSIZE(BnK_P_SHINTARO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_SHINTARO_B_PALETTES,    ARRAYSIZE(BnK_P_SHINTARO_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_SHINTARO_C_PALETTES,    ARRAYSIZE(BnK_P_SHINTARO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_SHINTARO_D_PALETTES,    ARRAYSIZE(BnK_P_SHINTARO_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_SHINTARO_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_SHINTARO_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_SHINTARO_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_SHINTARO_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_SHINTARO_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_SHINTARO_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_SHINTARO_WHITE_PALETTES,      ARRAYSIZE(BnK_P_SHINTARO_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_TANE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_OTANE_A_PALETTES,    ARRAYSIZE(BnK_P_OTANE_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_OTANE_B_PALETTES,    ARRAYSIZE(BnK_P_OTANE_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_OTANE_C_PALETTES,    ARRAYSIZE(BnK_P_OTANE_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_OTANE_D_PALETTES,    ARRAYSIZE(BnK_P_OTANE_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_OTANE_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_OTANE_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_OTANE_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_OTANE_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_OTANE_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_OTANE_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_OTANE_WHITE_PALETTES,      ARRAYSIZE(BnK_P_OTANE_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_TANE_YOUNG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_OTANE_YOUNG_A_PALETTES,    ARRAYSIZE(BnK_P_OTANE_YOUNG_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_OTANE_YOUNG_B_PALETTES,    ARRAYSIZE(BnK_P_OTANE_YOUNG_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_OTANE_YOUNG_C_PALETTES,    ARRAYSIZE(BnK_P_OTANE_YOUNG_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_OTANE_YOUNG_D_PALETTES,    ARRAYSIZE(BnK_P_OTANE_YOUNG_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_OTANE_YOUNG_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_OTANE_YOUNG_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_OTANE_YOUNG_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_OTANE_YOUNG_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_OTANE_YOUNG_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_OTANE_YOUNG_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_OTANE_YOUNG_WHITE_PALETTES,      ARRAYSIZE(BnK_P_OTANE_YOUNG_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_UME_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_OUME_A_PALETTES,    ARRAYSIZE(BnK_P_OUME_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_OUME_B_PALETTES,    ARRAYSIZE(BnK_P_OUME_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_OUME_C_PALETTES,    ARRAYSIZE(BnK_P_OUME_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_OUME_D_PALETTES,    ARRAYSIZE(BnK_P_OUME_D_PALETTES) },
    
    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_OUME_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_OUME_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_OUME_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_OUME_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_OUME_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_OUME_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_OUME_WHITE_PALETTES,      ARRAYSIZE(BnK_P_OUME_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_UME_YOUNG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_OUME_YOUNG_A_PALETTES,    ARRAYSIZE(BnK_P_OUME_YOUNG_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_OUME_YOUNG_B_PALETTES,    ARRAYSIZE(BnK_P_OUME_YOUNG_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_OUME_YOUNG_C_PALETTES,    ARRAYSIZE(BnK_P_OUME_YOUNG_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_OUME_YOUNG_D_PALETTES,    ARRAYSIZE(BnK_P_OUME_YOUNG_D_PALETTES) },

    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_OUME_YOUNG_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_OUME_YOUNG_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_OUME_YOUNG_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_OUME_YOUNG_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_OUME_YOUNG_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_OUME_YOUNG_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_OUME_YOUNG_WHITE_PALETTES,      ARRAYSIZE(BnK_P_OUME_YOUNG_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_WHITE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)BnK_P_WHITE_A_PALETTES,    ARRAYSIZE(BnK_P_WHITE_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)BnK_P_WHITE_B_PALETTES,    ARRAYSIZE(BnK_P_WHITE_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)BnK_P_WHITE_C_PALETTES,    ARRAYSIZE(BnK_P_WHITE_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)BnK_P_WHITE_D_PALETTES,    ARRAYSIZE(BnK_P_WHITE_D_PALETTES) },
    
    { L"Summer", DESC_NODETYPE_TREE,    (void*)BnK_P_WHITE_SUMMER_PALETTES,     ARRAYSIZE(BnK_P_WHITE_SUMMER_PALETTES) },
    { L"Zombie", DESC_NODETYPE_TREE,    (void*)BnK_P_WHITE_ZOMBIE_PALETTES,     ARRAYSIZE(BnK_P_WHITE_ZOMBIE_PALETTES) },
    { L"Extreme", DESC_NODETYPE_TREE,   (void*)BnK_P_WHITE_EXTREME_PALETTES,    ARRAYSIZE(BnK_P_WHITE_EXTREME_PALETTES) },
    { L"White", DESC_NODETYPE_TREE,     (void*)BnK_P_WHITE_WHITE_PALETTES,      ARRAYSIZE(BnK_P_WHITE_WHITE_PALETTES) },
};

const sDescTreeNode BnK_P_UNITS[] =
{
    { L"Angela Belti",     DESC_NODETYPE_TREE, (void*)BnK_P_ANGELA_COLLECTION,           ARRAYSIZE(BnK_P_ANGELA_COLLECTION) },
    { L"Anny Hamilton",     DESC_NODETYPE_TREE, (void*)BnK_P_ANNY_COLLECTION,           ARRAYSIZE(BnK_P_ANNY_COLLECTION) },
    { L"Bobby Strong",      DESC_NODETYPE_TREE, (void*)BnK_P_BOBBY_COLLECTION,         ARRAYSIZE(BnK_P_BOBBY_COLLECTION) },
    { L"Buntaro Kuno",      DESC_NODETYPE_TREE, (void*)BnK_P_BUNTARO_COLLECTION,         ARRAYSIZE(BnK_P_BUNTARO_COLLECTION) },
    { L"Chinnen",           DESC_NODETYPE_TREE, (void*)BnK_P_CHINNEN_COLLECTION,         ARRAYSIZE(BnK_P_CHINNEN_COLLECTION) },
    { L"Kurara Hananokoji", DESC_NODETYPE_TREE, (void*)BnK_P_CLARA_COLLECTION,           ARRAYSIZE(BnK_P_CLARA_COLLECTION) },
    { L"Super Kurara (Transformation)", DESC_NODETYPE_TREE, (void*)BnK_P_SUPERCLARA_COLLECTION,           ARRAYSIZE(BnK_P_SUPERCLARA_COLLECTION) },
    { L"Hikaru Jomon",      DESC_NODETYPE_TREE, (void*)BnK_P_HIKARU_COLLECTION,          ARRAYSIZE(BnK_P_HIKARU_COLLECTION) },
    { L"Kanji Kokuin (Weak)",      DESC_NODETYPE_TREE, (void*)BnK_P_KANJI_WEAK_COLLECTION,           ARRAYSIZE(BnK_P_KANJI_WEAK_COLLECTION) },
    { L"Kanji Kokuin (Strong)",    DESC_NODETYPE_TREE, (void*)BnK_P_KANJI_STRONG_COLLECTION,           ARRAYSIZE(BnK_P_KANJI_STRONG_COLLECTION) },
    { L"Kintaro Kokuin",    DESC_NODETYPE_TREE, (void*)BnK_P_KINTARO_COLLECTION,           ARRAYSIZE(BnK_P_KINTARO_COLLECTION) },
    { L"Keith Wayne",       DESC_NODETYPE_TREE, (void*)BnK_P_KEITH_COLLECTION,           ARRAYSIZE(BnK_P_KEITH_COLLECTION) },
    { L"Olof Linderof",     DESC_NODETYPE_TREE, (void*)BnK_P_OLOF_COLLECTION,            ARRAYSIZE(BnK_P_OLOF_COLLECTION) },
    { L"Poochy (Transformation)",            DESC_NODETYPE_TREE, (void*)BnK_P_POOCHY_COLLECTION,          ARRAYSIZE(BnK_P_POOCHY_COLLECTION) },
    { L"Princess Sissy",    DESC_NODETYPE_TREE, (void*)BnK_P_PRINCESSSISSY_COLLECTION,   ARRAYSIZE(BnK_P_PRINCESSSISSY_COLLECTION) },
    { L"Reiji Oyama",       DESC_NODETYPE_TREE, (void*)BnK_P_REIJI_COLLECTION,           ARRAYSIZE(BnK_P_REIJI_COLLECTION) },
    { L"Saizo Hattori",     DESC_NODETYPE_TREE, (void*)BnK_P_SAIZO_COLLECTION,           ARRAYSIZE(BnK_P_SAIZO_COLLECTION) },
    { L"Shintaro Kuno",     DESC_NODETYPE_TREE, (void*)BnK_P_SHINTARO_COLLECTION,        ARRAYSIZE(BnK_P_SHINTARO_COLLECTION) },
    { L"Otane Goketsuji",    DESC_NODETYPE_TREE, (void*)BnK_P_TANE_COLLECTION,            ARRAYSIZE(BnK_P_TANE_COLLECTION) },
    { L"Otane Goketsuji (Young)",    DESC_NODETYPE_TREE, (void*)BnK_P_TANE_YOUNG_COLLECTION,            ARRAYSIZE(BnK_P_TANE_YOUNG_COLLECTION) },
    { L"Oume Goketsuji",     DESC_NODETYPE_TREE, (void*)BnK_P_UME_COLLECTION,             ARRAYSIZE(BnK_P_UME_COLLECTION) },
    { L"Oume Goketsuji (Young)",     DESC_NODETYPE_TREE, (void*)BnK_P_UME_YOUNG_COLLECTION,             ARRAYSIZE(BnK_P_UME_YOUNG_COLLECTION) },
    { L"White Buffalo",     DESC_NODETYPE_TREE, (void*)BnK_P_WHITE_COLLECTION,           ARRAYSIZE(BnK_P_WHITE_COLLECTION) },

    { L"Elias Patrick (Unused)",     DESC_NODETYPE_TREE, (void*)BnK_P_ELIAS_COLLECTION,           ARRAYSIZE(BnK_P_ELIAS_COLLECTION) },
    { L"Jimmy Lewis (Unused)",       DESC_NODETYPE_TREE, (void*)BnK_P_JIMMY_COLLECTION,           ARRAYSIZE(BnK_P_JIMMY_COLLECTION) },
    { L"Mr. Jones (Unused)",         DESC_NODETYPE_TREE, (void*)BnK_P_JONES_COLLECTION,           ARRAYSIZE(BnK_P_JONES_COLLECTION) },
    { L"Lynn Baker (Unused)",        DESC_NODETYPE_TREE, (void*)BnK_P_LYNN_COLLECTION,            ARRAYSIZE(BnK_P_LYNN_COLLECTION) },
};
