#pragma once

// This header is all hand-generated
const UINT16 SAVAGEREIGN_A_IMGIDS_USED[] =
{
    indexSavReign_CarolStanzack,            // 0x47
    indexSavReign_ChungPaifu,               // 0x48
    indexSavReign_GordonBowman,             // 0x49
    indexSavReign_Gozu,                     // 0x4A
    indexSavReign_Joker,                    // 0x4B
    indexSavReign_KingLeo,                  // 0x4C
    indexSavReign_KingLion,                 // 0x4D
    indexSavReign_MaxEagle,                 // 0x4E
    indexSavReign_Mezu,                     // 0x4F
    indexSavReign_NicolaZaza,               // 0x50
    indexSavReign_ShoHayate,                // 0x51
    indexSavReign_Bonus,                    // 0x52
};

const sGame_PaletteDataset SAVAGEREIGN_A_SHO_A[] =
{
    { L"Sho Hayate A", 0xa4000, 0xa4040, indexSavReign_ShoHayate, 0x00, &pairNextAndNext },
    { L"Weapon Super Slash A", 0xa4160, 0xa4180, indexSavReign_ShoHayate, 0x02 },
    { L"Weapon Slash A", 0xa41e0, 0xa4200, indexSavReign_ShoHayate, 0x01 },
    { L"Special Effect A", 0xa4140, 0xa4160, indexSavReign_ShoHayate, 0x03, &pairNext },
    { L"Special Weapon Effect A", 0xa4120, 0xa4140, indexSavReign_ShoHayate, 0x04 },
    { L"Burned A", 0xa4040, 0xa4080, indexSavReign_ShoHayate, 0x00 },
    { L"Zapped A", 0xa4080, 0xa40c0, indexSavReign_ShoHayate, 0x00 },
    { L"Freezed A", 0xa40c0, 0xa4100, indexSavReign_ShoHayate, 0x00 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_SHO_B[] =
{
    { L"Sho Hayate B", 0xa4200, 0xa4240, indexSavReign_ShoHayate, 0x00, &pairNextAndNext },
    { L"Weapon Super Slash B", 0xa4360, 0xa4380, indexSavReign_ShoHayate, 0x02 },
    { L"Weapon Slash B", 0xa43e0, 0xa4400, indexSavReign_ShoHayate, 0x01 },
    { L"Fire Effect B", 0xa4340, 0xa4360, indexSavReign_ShoHayate, 0x03, &pairNext },
    { L"Fire Weapon Effect B", 0xa4320, 0xa4340, indexSavReign_ShoHayate, 0x04 },
    { L"Burned B", 0xa4240, 0xa4280, indexSavReign_ShoHayate, 0x00 },
    { L"Zapped B", 0xa4280, 0xa42c0, indexSavReign_ShoHayate, 0x00 },
    { L"Freezed B", 0xa42c0, 0xa4300, indexSavReign_ShoHayate, 0x00 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_SHO_PORTRAITS[] =
{
    { L"Portrait A", 0xa41c0, 0xa41e0 },
    { L"Hud A", 0xaa800, 0xaa820 },
    { L"Portrait B", 0xa43c0, 0xa43e0 },
    { L"Hud B", 0xaaa00, 0xaaa20 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_MAX_A[] =
{
    { L"Max Eagle A", 0xa4400, 0xa4440, indexSavReign_MaxEagle, 0x00 },
    { L"Burned A", 0xa4440, 0xa4480, indexSavReign_MaxEagle, 0x00 },
    { L"Zapped A", 0xa4480, 0xa44c0, indexSavReign_MaxEagle, 0x00 },
    { L"Freezed A", 0xa44c0, 0xa4500, indexSavReign_MaxEagle, 0x00 },
    { L"Special Effect A", 0xa4500, 0xa4520 },
    { L"Special Weapon Effect A", 0xa4520, 0xa4540 },
    { L"Flash Wing A", 0xa4540, 0xa4560 },
    { L"American Screw A", 0xa4560, 0xa4580 },
    { L"Weapon Slash A", 0xa45e0, 0xa4600 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_MAX_B[] =
{
    { L"Max Eagle B", 0xa4600, 0xa4640, indexSavReign_MaxEagle, 0x00 },
    { L"Burned B", 0xa4640, 0xa4680, indexSavReign_MaxEagle, 0x00 },
    { L"Zapped B", 0xa4680, 0xa46c0, indexSavReign_MaxEagle, 0x00 },
    { L"Freezed B", 0xa46c0, 0xa4700, indexSavReign_MaxEagle, 0x00 },
    { L"Special Effect B", 0xa4700, 0xa4720 },
    { L"Special Weapon Effect B", 0xa4720, 0xa4740 },
    { L"Flash Wing B", 0xa4740, 0xa4760 },
    { L"American Screw B", 0xa4760, 0xa4780 },
    { L"Weapon Slash B", 0xa47e0, 0xa4800 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_MAX_PORTRAITS[] =
{
    { L"Portrait A", 0xa45c0, 0xa45e0 },
    { L"Hud A", 0xaa820, 0xaa840 },
    { L"Portrait B", 0xa47c0, 0xa47e0 },
    { L"Hud B", 0xaaa20, 0xaaa40 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_GOZU_A[] =
{
    { L"Gozu A", 0xa4800, 0xa4840, indexSavReign_Gozu, 0x00 },
    { L"Burned A", 0xa4840, 0xa4880, indexSavReign_Gozu, 0x00 },
    { L"Zapped A", 0xa4880, 0xa48c0, indexSavReign_Gozu, 0x00 },
    { L"Freezed A", 0xa48c0, 0xa48e0, indexSavReign_Gozu, 0x00 },
    { L"Fire Pal A", 0xa4940, 0xa4960 },
    { L"Fire Effect A", 0xa4960, 0xa4980 },
    { L"Special Effect 1 A", 0xa4900, 0xa4920 },
    { L"Special Effect 2 A", 0xa4920, 0xa4940 },
    { L"Jaga Rangeki Sho A", 0xa49a0, 0xa49c0 },
    { L"Weapon Slash A", 0xa49e0, 0xa4a00 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_GOZU_B[] =
{
    { L"Gozu B", 0xa4a00, 0xa4a40, indexSavReign_Gozu, 0x00 },
    { L"Burned B", 0xa4a40, 0xa4a80, indexSavReign_Gozu, 0x00 },
    { L"Zapped B", 0xa4a80, 0xa4ac0, indexSavReign_Gozu, 0x00 },
    { L"Freezed B", 0xa4ac0, 0xa4ae0, indexSavReign_Gozu, 0x00 },
    { L"Fire Pal B", 0xa4b40, 0xa4b60 },
    { L"Fire Effect B", 0xa4b60, 0xa4b80 },
    { L"Special Effect 1 B", 0xa4b00, 0xa4b20 },
    { L"Special Effect 2 B", 0xa4b20, 0xa4b40 },
    { L"Jaga Rangeki Sho B", 0xa4ba0, 0xa4bc0 },
    { L"Weapon Slash B", 0xa4be0, 0xa4c00 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_GOZU_PORTRAITS[] =
{
    { L"Portrait A", 0xa48e0, 0xa4900 },
    { L"Hud A", 0xaa840, 0xaa860 },
    { L"Portrait B", 0xa4ae0, 0xa4b00 },
    { L"Hud B", 0xaaa40, 0xaaa60 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_MEZU_A[] =
{
    { L"Mezu A", 0xa4c00, 0xa4c40, indexSavReign_Mezu, 0x00 },
    { L"Burned A", 0xa4c40, 0xa4c80, indexSavReign_Mezu, 0x00 },
    { L"Zapped A", 0xa4c80, 0xa4cc0, indexSavReign_Mezu, 0x00 },
    { L"Freezed A", 0xa4cc0, 0xa4ce0, indexSavReign_Mezu, 0x00 },
    { L"Ice Pal A", 0xa4d40, 0xa4d60 },
    { L"Ice Effect A", 0xa4d60, 0xa4d80 },
    { L"Special Effect 1 A", 0xa4d00, 0xa4d20 },
    { L"Special Effect 2 A", 0xa4d20, 0xa4d40 },
    { L"Jaga Rangeki Kyaku A", 0xa4da0, 0xa4dc0 },
    { L"Weapon Slash A", 0xa4de0, 0xa4e00 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_MEZU_B[] =
{
    { L"Mezu B", 0xa4e00, 0xa4e40, indexSavReign_Mezu, 0x00 },
    { L"Burned B", 0xa4e40, 0xa4e80, indexSavReign_Mezu, 0x00 },
    { L"Zapped B", 0xa4e80, 0xa4ec0, indexSavReign_Mezu, 0x00 },
    { L"Freezed B", 0xa4ec0, 0xa4ee0, indexSavReign_Mezu, 0x00 },
    { L"Ice Pal B", 0xa4f40, 0xa4f60 },
    { L"Ice Effect B", 0xa4f60, 0xa4f80 },
    { L"Special Effect 1 B", 0xa4f00, 0xa4f20 },
    { L"Special Effect 2 B", 0xa4f20, 0xa4f40 },
    { L"Jaga Rangeki Kyaku B", 0xa4fa0, 0xa4fc0 },
    { L"Weapon Slash B", 0xa4fe0, 0xa5000 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_MEZU_PORTRAITS[] =
{
    { L"Portrait A", 0xa4ce0, 0xa4d00 },
    { L"Hud A", 0xaa860, 0xaa880 },
    { L"Portrait B", 0xa4ee0, 0xa4f00 },
    { L"Hud B", 0xaaa60, 0xaaa80 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_CAROL_A[] =
{
    { L"Carol Stanzack A", 0xa5000, 0xa5040, indexSavReign_CarolStanzack, 0x00 },
    { L"Burned A", 0xa5040, 0xa5080, indexSavReign_CarolStanzack, 0x00 },
    { L"Zapped A", 0xa5080, 0xa50c0, indexSavReign_CarolStanzack, 0x00 },
    { L"Freezed A", 0xa50c0, 0xa5100, indexSavReign_CarolStanzack, 0x00 },
    { L"Rainbow Attack 1 A", 0xa5100, 0xa5120 },
    { L"Rainbow Attack 2 A", 0xa5160, 0xa5180 },
    { L"Special Effect A", 0xa5140, 0xa5160 },
    { L"Special Weapon Effect 1 A", 0xa51a0, 0xa51c0 },
    { L"Special Weapon Effect 2 A", 0xa51c0, 0xa51e0 },
    { L"Weapon Slash A", 0xa51e0, 0xa5200 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_CAROL_B[] =
{
    { L"Carol Stanzack B", 0xa5200, 0xa5240, indexSavReign_CarolStanzack, 0x00 },
    { L"Burned B", 0xa5240, 0xa5280, indexSavReign_CarolStanzack, 0x00 },
    { L"Zapped B", 0xa5280, 0xa52c0, indexSavReign_CarolStanzack, 0x00 },
    { L"Freezed B", 0xa52c0, 0xa5300, indexSavReign_CarolStanzack, 0x00 },
    { L"Rainbow Attack 1 B", 0xa5300, 0xa5320 },
    { L"Rainbow Attack 2 B", 0xa5360, 0xa5380 },
    { L"Special Effect B", 0xa5340, 0xa5360 },
    { L"Special Weapon Effect 1 B", 0xa53a0, 0xa53c0 },
    { L"Special Weapon Effect 2 B", 0xa53c0, 0xa53e0 },
    { L"Weapon Slash B", 0xa53e0, 0xa5400 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_CAROL_PORTRAITS[] =
{
    { L"Portrait A", 0xa5180, 0xa51a0 },
    { L"Hud A", 0xaa880, 0xaa8a0 },
    { L"Portrait B", 0xa5380, 0xa53a0 },
    { L"Hud B", 0xaaa80, 0xaaaa0 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_NICOLA_A[] =
{
    { L"Nicola Zaza A", 0xa5400, 0xa5440, indexSavReign_NicolaZaza, 0x00 },
    { L"Burned A", 0xa5440, 0xa5480, indexSavReign_NicolaZaza, 0x00 },
    { L"Zapped A", 0xa5480, 0xa54c0, indexSavReign_NicolaZaza, 0x00 },
    { L"Freezed A", 0xa54c0, 0xa5500, indexSavReign_NicolaZaza, 0x00 },
    { L"Four-Step Spirit A", 0xa5520, 0xa5540 },
    { L"Discus Driver A", 0xa5540, 0xa5560 },
    { L"U.F.O. Blaster A", 0xa5560, 0xa5580 },
    { L"Galvanic Smash A", 0xa5580, 0xa55a0 },
    { L"Laser of Hell A", 0xa55a0, 0xa55c0 },
    { L"Weapon Slash A", 0xa55e0, 0xa5600 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_NICOLA_B[] =
{
    { L"Nicola Zaza B", 0xa5600, 0xa5640, indexSavReign_NicolaZaza, 0x00 },
    { L"Burned B", 0xa5640, 0xa5680, indexSavReign_NicolaZaza, 0x00 },
    { L"Zapped B", 0xa5680, 0xa56c0, indexSavReign_NicolaZaza, 0x00 },
    { L"Freezed B", 0xa56c0, 0xa5700, indexSavReign_NicolaZaza, 0x00 },
    { L"Four-Step Spirit B", 0xa5720, 0xa5740 },
    { L"Discus Driver B", 0xa5740, 0xa5760 },
    { L"U.F.O. Blaster B", 0xa5760, 0xa5780 },
    { L"Galvanic Smash B", 0xa5780, 0xa57a0 },
    { L"Laser of Hell B", 0xa57a0, 0xa57c0 },
    { L"Weapon Slash B", 0xa57e0, 0xa5800 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_NICOLA_PORTRAITS[] =
{
    { L"Portrait A", 0xa55c0, 0xa55e0 },
    { L"Hud A", 0xaa8a0, 0xaa8c0 },
    { L"Portrait B", 0xa57c0, 0xa57e0 },
    { L"Hud B", 0xaaaa0, 0xaaac0 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_JOKER_A[] =
{
    { L"Joker A", 0xa5800, 0xa5840, indexSavReign_Joker, 0x00 },
    { L"Burned A", 0xa5840, 0xa5880, indexSavReign_Joker, 0x00 },
    { L"Zapped A", 0xa5880, 0xa58c0, indexSavReign_Joker, 0x00 },
    { L"Freezed A", 0xa58c0, 0xa5900, indexSavReign_Joker, 0x00 },
    { L"Mad Hatter Heave A", 0xa5920, 0xa5940 },
    { L"Roller Dash A", 0xa5940, 0xa5960 },
    { L"Shocking Toy A", 0xa5980, 0xa59a0 },
    { L"Good Face A", 0xa5960, 0xa5980 },
    { L"Flying Cards A", 0xa59a0, 0xa59c0 },
    { L"Monkey A", 0xa59c0, 0xa59e0 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_JOKER_B[] =
{
    { L"Joker B", 0xa5a00, 0xa5a40, indexSavReign_Joker, 0x00 },
    { L"Burned B", 0xa5a40, 0xa5a80, indexSavReign_Joker, 0x00 },
    { L"Zapped B", 0xa5a80, 0xa5ac0, indexSavReign_Joker, 0x00 },
    { L"Freezed B", 0xa5ac0, 0xa5b00, indexSavReign_Joker, 0x00 },
    { L"Mad Hatter Heave B", 0xa5b20, 0xa5b40 },
    { L"Roller Dash B", 0xa5b40, 0xa5b60 },
    { L"Shocking Toy B", 0xa5b80, 0xa5ba0 },
    { L"Good Face B", 0xa5b60, 0xa5b80 },
    { L"Flying Cards B", 0xa5ba0, 0xa5bc0 },
    { L"Monkey B", 0xa5bc0, 0xa5be0 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_JOKER_PORTRAITS[] =
{
    { L"Portrait A", 0xa59e0, 0xa5a00 },
    { L"Hud A", 0xaa8c0, 0xaa8e0 },
    { L"Portrait B", 0xa5be0, 0xa5c00 },
    { L"Hud B", 0xaaac0, 0xaaae0 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_CHUNG_A[] =
{
    { L"Chung Paifu A", 0xa5c00, 0xa5c40, indexSavReign_ChungPaifu, 0x00 },
    { L"Burned A", 0xa5c40, 0xa5c80, indexSavReign_ChungPaifu, 0x00 },
    { L"Zapped A", 0xa5c80, 0xa5cc0, indexSavReign_ChungPaifu, 0x00 },
    { L"Freezed A", 0xa5cc0, 0xa5d00, indexSavReign_ChungPaifu, 0x00 },
    { L"Rage A", 0xa5d40, 0xa5d80 },
    { L"Kiden Dama A", 0xa5d00, 0xa5d20 },
    { L"Hakukoh Dan A", 0xa5d20, 0xa5d40 },
    { L"Special Effect A", 0xa5d80, 0xa5da0 },
    { L"Rage Special Effect A", 0xa5da0, 0xa5dc0 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_CHUNG_B[] =
{
    { L"Chung Paifu B", 0xa5e00, 0xa5e40, indexSavReign_ChungPaifu, 0x00 },
    { L"Burned B", 0xa5e40, 0xa5e80, indexSavReign_ChungPaifu, 0x00 },
    { L"Zapped B", 0xa5e80, 0xa5ec0, indexSavReign_ChungPaifu, 0x00 },
    { L"Freezed B", 0xa5ec0, 0xa5f00, indexSavReign_ChungPaifu, 0x00 },
    { L"Rage B", 0xa5f40, 0xa5f80 },
    { L"Kiden Dama B", 0xa5f00, 0xa5f20 },
    { L"Hakukoh Dan B", 0xa5f20, 0xa5f40 },
    { L"Special Effect B", 0xa5f80, 0xa5fa0 },
    { L"Rage Special Effect B", 0xa5fa0, 0xa5fc0 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_CHUNG_PORTRAITS[] =
{
    { L"Portrait A", 0xa5dc0, 0xa5de0 },
    { L"Rage Portrait A", 0xa5de0, 0xa5e00 },
    { L"Hud A", 0xaa8e0, 0xaa900 },
    { L"Rage Hud A", 0xaa900, 0xaa920 },
    { L"Portrait B", 0xa5fc0, 0xa5fe0 },
    { L"Rage Portrait B", 0xa5fe0, 0xa6000 },
    { L"Hud B", 0xaaae0, 0xaab00 },
    { L"Rage Hud B", 0xaab00, 0xaab20 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_GORDON_A[] =
{
    { L"Gordon Bowman A", 0xa6000, 0xa6040, indexSavReign_GordonBowman, 0x00 },
    { L"Burned A", 0xa6040, 0xa6080, indexSavReign_GordonBowman, 0x00 },
    { L"Zapped A", 0xa6080, 0xa60c0, indexSavReign_GordonBowman, 0x00 },
    { L"Freezed A", 0xa60c0, 0xa6100, indexSavReign_GordonBowman, 0x00 },
    { L"Special Pal 1 A", 0xa6140, 0xa6160 },
    { L"Special Pal 2 A", 0xa6180, 0xa61a0 },
    { L"Special Spark Bolt A", 0xa61a0, 0xa61c0 },
    { L"Spark Bolt A", 0xa61e0, 0xa6200 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_GORDON_B[] =
{
    { L"Gordon Bowman B", 0xa6200, 0xa6240, indexSavReign_GordonBowman, 0x00 },
    { L"Burned B", 0xa6240, 0xa6280, indexSavReign_GordonBowman, 0x00 },
    { L"Zapped B", 0xa6280, 0xa62c0, indexSavReign_GordonBowman, 0x00 },
    { L"Freezed B", 0xa62c0, 0xa6300, indexSavReign_GordonBowman, 0x00 },
    { L"Special Pal 1 B", 0xa6340, 0xa6360 },
    { L"Special Pal 2 B", 0xa6380, 0xa63a0 },
    { L"Special Spark Bolt B", 0xa63a0, 0xa63c0 },
    { L"Spark Bolt B", 0xa63e0, 0xa6400 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_GORDON_PORTRAITS[] =
{
    { L"Portrait A", 0xa61c0, 0xa61e0 },
    { L"Hud A", 0xaa920, 0xaa940 },
    { L"Portrait B", 0xa63c0, 0xa63e0 },
    { L"Hud B", 0xaab20, 0xaab40 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_KING_A[] =
{
    { L"King Lion A", 0xa6400, 0xa6440, indexSavReign_KingLion, 0x00 },
    { L"Burned A", 0xa6440, 0xa6480, indexSavReign_KingLion, 0x00 },
    { L"Zapped A", 0xa6480, 0xa64c0, indexSavReign_KingLion, 0x00 },
    { L"Freezed A", 0xa64c0, 0xa6500, indexSavReign_KingLion, 0x00 },
    { L"Rainbow Pal A", 0xa65c0, 0xa65e0 },
    { L"Beast Blow A", 0xa6580, 0xa65a0 },
    { L"King Straight A", 0xa6540, 0xa6560 },
    { L"Special Pal/Weapon Effect A", 0xa6560, 0xa6580 },
    { L"Special Pal 2 A", 0xa65a0, 0xa65c0 },
    { L"Weapon Slash A", 0xa65e0, 0xa6600 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_KING_B[] =
{
    { L"King Lion B", 0xa6600, 0xa6640, indexSavReign_KingLion, 0x00 },
    { L"Burned B", 0xa6640, 0xa6680, indexSavReign_KingLion, 0x00 },
    { L"Zapped B", 0xa6680, 0xa66c0, indexSavReign_KingLion, 0x00 },
    { L"Freezed B", 0xa66c0, 0xa6700, indexSavReign_KingLion, 0x00 },
    { L"Rainbow Pal B", 0xa67c0, 0xa67e0 },
    { L"Beast Blow B", 0xa6780, 0xa67a0 },
    { L"King Straight B", 0xa6740, 0xa6760 },
    { L"Special Pal/Weapon Effect B", 0xa6760, 0xa6780 },
    { L"Special Pal 2 B", 0xa67a0, 0xa67c0 },
    { L"Weapon Slash B", 0xa67e0, 0xa6800 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_KING_PORTRAITS[] =
{
    { L"Portrait A", 0xa6500, 0xa6520 },
    { L"Hud A", 0xaa940, 0xaa960 },
    { L"Portrait B", 0xa6700, 0xa6720 },
    { L"Hud B", 0xaab40, 0xaab60 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_LEO_A[] =
{
    { L"King Leo A", 0xaac00, 0xaac40, indexSavReign_KingLeo, 0x00 },
    { L"Burned A", 0xaac40, 0xaac80, indexSavReign_KingLeo, 0x00 },
    { L"Zapped A", 0xaac80, 0xaacc0, indexSavReign_KingLeo, 0x00 },
    { L"Freezed A", 0xaacc0, 0xaad00, indexSavReign_KingLeo, 0x00 },
    { L"Intro Cape A", 0xaadc0, 0xaade0 },
    { L"Beast Blow A", 0xaad80, 0xaada0 },
    { L"King Straight/Uppercut A", 0xaad40, 0xaad60 },
    { L"Special Pal/Weapon Effect A", 0xaad60, 0xaad80 },
    { L"Special Pal 2 A", 0xaada0, 0xaadc0 },
    { L"Weapon Slash A", 0xaade0, 0xaae00 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_LEO_B[] =
{
    { L"King Leo B", 0xaae00, 0xaae40, indexSavReign_KingLeo, 0x00 },
    { L"Burned B", 0xaae40, 0xaae80, indexSavReign_KingLeo, 0x00 },
    { L"Zapped B", 0xaae80, 0xaaec0, indexSavReign_KingLeo, 0x00 },
    { L"Freezed B", 0xaaec0, 0xaaf00, indexSavReign_KingLeo, 0x00 },
    { L"Intro Cape B", 0xaafc0, 0xaafe0 },
    { L"Beast Blow B", 0xaaf80, 0xaafa0 },
    { L"King Straight/Uppercut B", 0xaaf40, 0xaaf60 },
    { L"Special Pal/Weapon Effect B", 0xaaf60, 0xaaf80 },
    { L"Special Pal 2 B", 0xaafa0, 0xaafc0 },
    { L"Weapon Slash B", 0xaafe0, 0xab000 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_LEO_PORTRAITS[] =
{
    { L"Portrait A", 0xaad00, 0xaad20 },
    { L"Hud A", 0xaa960, 0xaa980 },
    { L"Portrait B", 0xaaf00, 0xaaf20 },
    { L"Hud B", 0xaab60, 0xaab80 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_BONUS_SelectScreen[] =
{
    { L"Hayate Icon", 0xa3400, 0xa3420 },
    { L"Eagle Icon", 0xa3420, 0xa3440 },
    { L"Gozu Icon", 0xa3440, 0xa3460 },
    { L"Mezu Icon", 0xa3460, 0xa3480 },
    { L"Carol Icon", 0xa3480, 0xa34a0 },
    { L"Nicola Icon", 0xa34a0, 0xa34c0 },
    { L"Joker Icon", 0xa34c0, 0xa34e0 },
    { L"Chung Icon", 0xa34e0, 0xa3500 },
    { L"Gordon Icon", 0xa3500, 0xa3520 },
    { L"King Lion Icon", 0xa3520, 0xa3540 },
};

const sGame_PaletteDataset SAVAGEREIGN_A_BONUS_Intro[] =
{
    { L"Intro Hayate", 0xa3540, 0xa3560 },
    { L"Intro King Leo", 0xa3560, 0xa3580 },
    { L"Intro Background", 0xa3580, 0xa35a0 },
};

const sDescTreeNode SAVAGEREIGN_A_SHO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_SHO_A, ARRAYSIZE(SAVAGEREIGN_A_SHO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_SHO_B, ARRAYSIZE(SAVAGEREIGN_A_SHO_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_SHO_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_SHO_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_MAX_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_MAX_A, ARRAYSIZE(SAVAGEREIGN_A_MAX_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_MAX_B, ARRAYSIZE(SAVAGEREIGN_A_MAX_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_MAX_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_MAX_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_GOZU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_GOZU_A, ARRAYSIZE(SAVAGEREIGN_A_GOZU_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_GOZU_B, ARRAYSIZE(SAVAGEREIGN_A_GOZU_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_GOZU_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_GOZU_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_MEZU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_MEZU_A, ARRAYSIZE(SAVAGEREIGN_A_MEZU_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_MEZU_B, ARRAYSIZE(SAVAGEREIGN_A_MEZU_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_MEZU_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_MEZU_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_CAROL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_CAROL_A, ARRAYSIZE(SAVAGEREIGN_A_CAROL_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_CAROL_B, ARRAYSIZE(SAVAGEREIGN_A_CAROL_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_CAROL_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_CAROL_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_NICOLA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_NICOLA_A, ARRAYSIZE(SAVAGEREIGN_A_NICOLA_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_NICOLA_B, ARRAYSIZE(SAVAGEREIGN_A_NICOLA_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_NICOLA_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_NICOLA_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_JOKER_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_JOKER_A, ARRAYSIZE(SAVAGEREIGN_A_JOKER_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_JOKER_B, ARRAYSIZE(SAVAGEREIGN_A_JOKER_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_JOKER_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_JOKER_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_CHUNG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_CHUNG_A, ARRAYSIZE(SAVAGEREIGN_A_CHUNG_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_CHUNG_B, ARRAYSIZE(SAVAGEREIGN_A_CHUNG_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_CHUNG_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_CHUNG_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_GORDON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_GORDON_A, ARRAYSIZE(SAVAGEREIGN_A_GORDON_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_GORDON_B, ARRAYSIZE(SAVAGEREIGN_A_GORDON_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_GORDON_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_GORDON_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_KING_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_KING_A, ARRAYSIZE(SAVAGEREIGN_A_KING_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_KING_B, ARRAYSIZE(SAVAGEREIGN_A_KING_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_KING_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_KING_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_LEO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_LEO_A, ARRAYSIZE(SAVAGEREIGN_A_LEO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_LEO_B, ARRAYSIZE(SAVAGEREIGN_A_LEO_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_LEO_PORTRAITS, ARRAYSIZE(SAVAGEREIGN_A_LEO_PORTRAITS) },
};

const sDescTreeNode SAVAGEREIGN_A_BONUS_COLLECTION[] =
{
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_BONUS_SelectScreen, ARRAYSIZE(SAVAGEREIGN_A_BONUS_SelectScreen) },
    { L"Intro", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_BONUS_Intro, ARRAYSIZE(SAVAGEREIGN_A_BONUS_Intro) },
};

const sDescTreeNode SAVAGEREIGN_A_UNITS[] =
{
    { L"Sho Hayate", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_SHO_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_SHO_COLLECTION) },
    { L"Max Eagle", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_MAX_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_MAX_COLLECTION) },
    { L"Gozu", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_GOZU_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_GOZU_COLLECTION) },
    { L"Mezu", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_MEZU_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_MEZU_COLLECTION) },
    { L"Carol Stanzack", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_CAROL_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_CAROL_COLLECTION) },
    { L"Nicola Zaza", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_NICOLA_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_NICOLA_COLLECTION) },
    { L"Joker", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_JOKER_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_JOKER_COLLECTION) },
    { L"Chung Paifu", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_CHUNG_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_CHUNG_COLLECTION) },
    { L"Gordon Bowman", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_GORDON_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_GORDON_COLLECTION) },
    { L"King Lion", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_KING_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_KING_COLLECTION) },
    { L"King Leo", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_LEO_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_LEO_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)SAVAGEREIGN_A_BONUS_COLLECTION, ARRAYSIZE(SAVAGEREIGN_A_BONUS_COLLECTION) },
};

constexpr auto SAVAGEREIGN_A_NUMUNIT = ARRAYSIZE(SAVAGEREIGN_A_UNITS);

#define SAVAGEREIGN_A_EXTRALOC SAVAGEREIGN_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef SAVAGEREIGN_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
