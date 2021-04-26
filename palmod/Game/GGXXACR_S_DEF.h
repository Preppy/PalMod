#pragma once

const UINT16 GGXX_ACR_IMG_UNITS[] =
{
	indexGGXXSprites_ACR_ABA,   // 0x00
	indexGGXXSprites_ACR_Anji,  // 0x01
	indexGGXXSprites_ACR_Axl,   // 0x02
	indexGGXXSprites_ACR_Baiken,// 0x03
	indexGGXXSprites_ACR_Bridget,   // 0x04
	indexGGXXSprites_ACR_Chipp, // 0x05
	indexGGXXSprites_ACR_Dizzy, // 0x06
	indexGGXXSprites_ACR_Eddie, // 0x07
	indexGGXXSprites_ACR_Faust, // 0x08
	indexGGXXSprites_ACR_Ino,   // 0x09
	indexGGXXSprites_ACR_Jam,   // 0x0a
	indexGGXXSprites_ACR_Johnny,// 0x0b
	indexGGXXSprites_ACR_Justice,   // 0x0c
	indexGGXXSprites_ACR_Kliff, // 0x0d
	indexGGXXSprites_ACR_Ky,// 0x0e
	indexGGXXSprites_ACR_May,   // 0x0f
	indexGGXXSprites_ACR_Millia,// 0x10
	indexGGXXSprites_ACR_OrderSol,  // 0x11
	indexGGXXSprites_ACR_Potemkin,  // 0x12
	indexGGXXSprites_ACR_RoboKy,// 0x13
	indexGGXXSprites_ACR_Slayer,// 0x14
	indexGGXXSprites_ACR_Sol,   // 0x15
	indexGGXXSprites_ACR_Testament, // 0x16
	indexGGXXSprites_ACR_Venom, // 0x17
	indexGGXXSprites_ACR_Zappa, // 0x18
	indexGGXXSprites_ACR_Bonus, // 0x19
};

const sGame_PaletteDataset GGXXACR_S_AB_EFFECTS[] =
{
	{ L"Moroha Eyes", 0x5213b0, 0x5213f0, indexGGXXSprites_ACR_ABA, 0x04, &pairNext },
	{ L"Moroha Eyes (Trails)", 0x521340, 0x521380, indexGGXXSprites_ACR_ABA, 0x03 },
	{ L"Goku Moroha Eyes", 0x521630, 0x521670, indexGGXXSprites_ACR_ABA, 0x04, &pairNext },
	{ L"Goku Moroha Eyes (Trails)", 0x5214f0, 0x521530, indexGGXXSprites_ACR_ABA, 0x03 },
	{ L"Shousei", 0x51b240, 0x51b280, indexGGXXSprites_ACR_ABA, 0x13 },
	{ L"Shoukyaku", 0x4ad7f0, 0x4ad830, indexGGXXSprites_ACR_ABA, 0x12 },
	{ L"Kihi", 0x4ae050, 0x4ae090, indexGGXXSprites_ACR_ABA, 0x0d },
	{ L"Ketsugou (1//3)", 0x4dc0f0, 0x4dc130, indexGGXXSprites_ACR_ABA, 0x0a, &pairNextAndNext },
	{ L"Ketsugou (2//3)", 0x4e03a0, 0x4e03e0, indexGGXXSprites_ACR_ABA, 0x0b },
	{ L"Ketsugou (3//3)", 0x4e6aa0, 0x4e6ae0, indexGGXXSprites_ACR_ABA, 0x0c },
	{ L"Henshitsu", 0x516640, 0x516680, indexGGXXSprites_ACR_ABA, 0x06 },
	{ L"(Moroha) 6H", 0x492d80, 0x492dc0, indexGGXXSprites_ACR_ABA, 0x10 },
	{ L"(Moroha) Masshou", 0x499b40, 0x499b80, indexGGXXSprites_ACR_ABA, 0x0f },
	{ L"(Moroha) Fukumetsu", 0x49dcd0, 0x49dd10, indexGGXXSprites_ACR_ABA, 0x05  },
	{ L"(Moroha) Dangoku (1//2)", 0x4a0820, 0x4a0860, indexGGXXSprites_ACR_ABA, 0x01 },
	{ L"(Moroha) Dangoku (2//2)", 0x4aa220, 0x4aa260, indexGGXXSprites_ACR_ABA, 0x01 },
	{ L"(Moroha) Danzai (1//2)", 0x4b4670, 0x4b46b0, indexGGXXSprites_ACR_ABA, 0x02 },
	{ L"(Moroha) Danzai (2//2)", 0x4be190, 0x4be1d0, indexGGXXSprites_ACR_ABA, 0x02 },
	{ L"(Moroha) Kashitsu", 0x4c8e30, 0x4c8e70, indexGGXXSprites_ACR_ABA, 0x09 },
	{ L"(Moroha) Konzetsu (1//2)", 0x4d09a0, 0x4d09e0, indexGGXXSprites_ACR_ABA, 0x0e },
	{ L"(Moroha) Konzetsu (2//2)", 0x4d67b0, 0x4d67f0, indexGGXXSprites_ACR_ABA, 0x0e },
	{ L"Shouko: Inmetsu", 0x4e8210, 0x4e8250, indexGGXXSprites_ACR_ABA, 0x07 },
	{ L"Shouko: Intoku (1//3)", 0x4ed940, 0x4ed980, indexGGXXSprites_ACR_ABA, 0x08 },
	{ L"Shouko: Intoku (2//3)", 0x4fce70, 0x4fceb0, indexGGXXSprites_ACR_ABA, 0x08 },
	{ L"Shouko: Intoku (3//3)", 0x5089e0, 0x508a20, indexGGXXSprites_ACR_ABA, 0x08 },
	{ L"Muchi no Yami (1//2)", 0x50bc20, 0x50bc60, indexGGXXSprites_ACR_ABA, 0x11 },
	{ L"Muchi no Yami (2//2)", 0x513030, 0x513070, indexGGXXSprites_ACR_ABA, 0x11 },
};

const sGame_PaletteDataset GGXXACR_S_BK_EFFECTS[] =
{
	//General
	{ L"Flower Petals", 0x34bc70, 0x34bcb0 },
	{ L"Pipe (Tossed)", 0x34b3a0, 0x34b3e0 },
	{ L"Smoke", 0x34bf70, 0x34bfb0 },
	{ L"Unknown Leaf", 0x31cd50, 0x31cd90 },
	//Normals
	{ L"Dust", 0x314bc0, 0x314c00 },

	{ L"j.D Effect (1//2)", 0x316b70, 0x316bb0 },
	{ L"j.D Effect (2//2)", 0x3183e0, 0x318420 },
	//Specials
	{ L"Tatami Gaeshi (1//2)", 0x3100a0, 0x3100e0 },
	{ L"Tatami Gaeshi (2//2)", 0x313930, 0x313970 },

	{ L"Sakura", 0x30ecf0, 0x30ed30 },
	//Forcebreaks
	{ L"Baku", 0x31e7c0, 0x31e800 },
	{ L"Baku:XXX Card Back//Icons", 0x31f700, 0x31f740 },
	{ L"Baku:XXX Card Front", 0x320440, 0x320480 },
	{ L"Baku:XXX Card Front (Sliced)", 0x324670, 0x3246b0 },
	{ L"Baku:XXX Punch", 0x34c5a0, 0x34c5e0 },
	{ L"Baku:XXX Slash", 0x34df50, 0x34df90 },
	{ L"Baku:XXX Kick", 0x34ff50, 0x34ff90 },
	{ L"Baku:XXX -> D Effect", 0x31ad10, 0x31ad50 },
	//Overdrives
	{ L"Tsurane Sanzu Watashi (1//3)", 0x31ced0, 0x31cf10 },
	{ L"Tsurane Sanzu Watashi (2//3)", 0x31d600, 0x31d640 },
	{ L"Tsurane Sanzu Watashi (3//3)", 0x31e1a0, 0x31e1e0 },
	//Instant Kill
	{ L"Garyou Tensei (1//10)", 0x328da0, 0x3291a0 },
	{ L"Garyou Tensei (2//10)", 0x334f60, 0x335360 },
	{ L"Garyou Tensei (3//10)", 0x338550, 0x338950 },
	{ L"Garyou Tensei (4//10)", 0x339600, 0x339a00 },
	{ L"Garyou Tensei (5//10)", 0x33a650, 0x33aa50 },
	{ L"Garyou Tensei (6//10)", 0x33b590, 0x33b990 },
	{ L"Garyou Tensei (7//10)", 0x33c500, 0x33c900 },
	{ L"Garyou Tensei (8//10)", 0x33d4c0, 0x33d8c0 },
	{ L"Garyou Tensei (9//10)", 0x340d30, 0x341130 },
	{ L"Garyou Tensei (10//10)", 0x349550, 0x349950 },
	{ L"Garyou Tensei - Light (1//3)", 0x33d980, 0x33d9c0 },
	{ L"Garyou Tensei - Light (2//3)", 0x33ec70, 0x33ecb0 },
	{ L"Garyou Tensei - Light (3//3)", 0x33fdc0, 0x33fe00 },
};

const sGame_PaletteDataset GGXXACR_S_JY_EFFECTS[] =
{
	//General
	{ L"Intro rose (Tossed)", 0x3d02b0, 0x3d02f0 },
	//Normals
	{ L"5P (1//2)", 0x3d0430, 0x3d0470 },
	{ L"5P (2//2)", 0x3d0520, 0x3d0560 },

	{ L"5H (Extra dust)", 0x3d0620, 0x3d0660 },
	{ L"6H (1//2)", 0x3d5eb0, 0x3d5ef0 },
	{ L"6H (2//2)", 0x3d76c0, 0x3d7700 },

	{ L"2H (1//2)", 0x3da900, 0x3da940 },
	{ L"2H (2//2)", 0x3dc770, 0x3dc7b0 },
	//Specials
	{ L"Mist Finer Stance (1//8)", 0x3d8820, 0x3d8860 },
	{ L"Mist Finer Stance (2//8)", 0x3da420, 0x3da460 },
	{ L"Mist Finer Stance (3//8)", 0x3d8e20, 0x3d8e60 },
	{ L"Mist Finer Stance (4//8)", 0x3d9310, 0x3d9350 },
	{ L"Mist Finer Stance (5//8)", 0x3d9740, 0x3d9780 },
	{ L"Mist Finer Stance (6//8)", 0x3d9b50, 0x3d9b90 },
	{ L"Mist Finer Stance (7//8)", 0x3d9eb0, 0x3d9ef0 },
	{ L"Mist Finer Stance (8//8)", 0x3da420, 0x3da460 },
	{ L"Mist Finer Slash", 0x3d21e0, 0x3d2220 },

	{ L"Coins", 0x3f0f60, 0x3f0fa0 },
	{ L"Mist", 0x3bfe40, 0x3bfe80 },

	{ L"Ensenga (1//3)", 0x3dd2e0, 0x3dd320 },
	{ L"Ensenga (2//3)", 0x3de4a0, 0x3de4e0 },
	{ L"Ensenga (3//3)", 0x3e3220, 0x3e3260 },

	{ L"Divine Blade", 0x3b9bb0, 0x3b9bf0 },
	{ L"Killer Joker", 0x3ebf30, 0x3ebf70 },
	//Forcebreaks
	{ L"Jackhound", 0x3e9bf0, 0x3e9c30 },
	//Overdrives
	{ L"Thats my name (1//3)", 0x3c6560, 0x3c65a0 },
	{ L"Thats my name (2//3)", 0x3c7b00, 0x3c7b40 },
	{ L"Thats my name (3//3)", 0x3cf120, 0x3cf160 },

	{ L"Uncho's Iai", 0x3eeef0, 0x3eef30 },

	//Instant Kill
	{ L"Joker Trick (Thrown card)", 0x3d0180, 0x3d01c0 },
	{ L"Joker Trick (Back of card)", 0x3b5fd0, 0x3b6010 },

};

const sGame_PaletteDataset GGXXACR_S_KY_EFFECTS[] =
{
	//General
	{ L"Idle Stance // Projectile Trails", 0x3f44a0, 0x3f44e0 },
	//Normals
	{ L"5H (1//2)", 0x424820, 0x424860 },
	{ L"5H (2//2)", 0x428f60, 0x428fa0 },
	{ L"6H (1//2)", 0x3fb3c0, 0x3fb400 },
	{ L"6H (2//2)", 0x400700, 0x400740 },
	{ L"3H (1//2)", 0x3f7c40, 0x3f7c80 },
	{ L"3H (2//2)", 0x3f8050, 0x3f8090 },
	{ L"j.S", 0x3f8b30, 0x3f8b70 },
	{ L"j.D", 0x41d550, 0x41d590 },
	//Specials
	{ L"Stun Edge (1//2)", 0x39bd40, 0x39bd80 },
	{ L"Stun Edge (2//2)", 0x39d6f0, 0x39d730 },
	{ L"Air Stun Edge", 0x3a7000, 0x3a7040 },
	{ L"Charged Stun Edge Startup (1//2)", 0x39a3d0, 0x39a410 },
	{ L"Charged Stun Edge Startup (2//2)", 0x39b120, 0x39b160 },
	{ L"Charged Stun Edge", 0x3a19a0, 0x3a19e0 },
	{ L"Stun Edge Impacts//Rings", 0x39fa30, 0x39fa70 },

	{ L"Vapor Thrust", 0x394ea0, 0x394ee0 },
	{ L"Vapor Thrust Ground Effects", 0x3942d0, 0x394310 },
	{ L"Lightning Javolin", 0x42d770, 0x42d7b0 },

	{ L"Stun Dipper", 0x3ad2d0, 0x3ad310 },

	{ L"Greed Sever Startup", 0x3b06a0, 0x3b06e0 },
	{ L"Greed Sever (1//2)", 0x3b29e0, 0x3b2be0 },
	{ L"Greed Sever (2//2)", 0x3b56b0, 0x3b58b0 },
	{ L"Greed Sever Shine", 0x3b7760, 0x3b77a0 },
	{ L"Greed Sever Ground Slam (FB)", 0x435c00, 0x435c40 },

	{ L"Lightning Strike", 0x4360d0, 0x436110 },
	//Force Breaks
	{ L"Lightning Sphere", 0x41a610, 0x41a650 },
	{ L"Charge Drive (1//4)", 0x404fa0, 0x404fe0 },
	{ L"Charge Drive (2//4)", 0x40b460, 0x40b4a0 },
	{ L"Charge Drive (3//4)", 0x4119b0, 0x4119f0 },
	{ L"Charge Drive (4//4)", 0x417b40, 0x417b80 },

	{ L"Stun Rays Flash (1//2)", 0x42a3a0, 0x42a3e0 },
	{ L"Stun Rays Flash (2//2)", 0x42bc20, 0x42bc60 },
	//Overdrives
	{ L"Ride the Lightning (1//2)", 0x3dfd50, 0x3dfd90 },
	{ L"Ride the Lightning (2//2)", 0x3e8430, 0x3e8470 },

	{ L"Sacred Edge Projectile (1//4)", 0x3b9980, 0x3b99c0 },
	{ L"Sacred Edge Projectile (2//4)", 0x3bfae0, 0x3bfb20 },
	{ L"Sacred Edge Projectile (3//4)", 0x3d6200, 0x3d6240 },
	{ L"Sacred Edge Projectile (4//4)", 0x3db780, 0x3db7c0 },
	{ L"Sacred Edge Circle (1//17)", 0x3c6a20, 0x3c6a60 },
	{ L"Sacred Edge Circle (2//17)", 0x3c6cd0, 0x3c6d10 },
	{ L"Sacred Edge Circle (3//17)", 0x3c7070, 0x3c70b0 },
	{ L"Sacred Edge Circle (4//17)", 0x3c73c0, 0x3c7400 },
	{ L"Sacred Edge Circle (5//17)", 0x3c7930, 0x3c7970 },
	{ L"Sacred Edge Circle (6//17)", 0x3c8110, 0x3c8150 },
	{ L"Sacred Edge Circle (7//17)", 0x3c8bf0, 0x3c8c30 },
	{ L"Sacred Edge Circle (8//17)", 0x3c97b0, 0x3c97f0 },
	{ L"Sacred Edge Circle (9//17)", 0x3ca6b0, 0x3ca6f0 },
	{ L"Sacred Edge Circle (10//17)", 0x3cb800, 0x3cb840 },
	{ L"Sacred Edge Circle (11//17)", 0x3cca80, 0x3ccac0 },
	{ L"Sacred Edge Circle (12//17)", 0x3cdfd0, 0x3ce010 },
	{ L"Sacred Edge Circle (13//17)", 0x3cf7c0, 0x3cf800 },
	{ L"Sacred Edge Circle (14//17)", 0x3d0ec0, 0x3d0f00 },
	{ L"Sacred Edge Circle (15//17)", 0x3d2910, 0x3d2950 },
	{ L"Sacred Edge Circle (16//17)", 0x3d3e80, 0x3d3ec0 },
	{ L"Sacred Edge Circle (17//17)", 0x3d5080, 0x3d50c0 },
	//Instant Kill
	{ L"Rising Force (1//2)", 0x3ea5d0, 0x3ea610 },
	{ L"Rising Force (2//2)", 0x3ee900, 0x3ee940 },

	//{ L"Unsure 15", 0x3f4e60, 0x3f4ea0 }, 
	//{ L"Unsure 16", 0x3f6f30, 0x3f6f70 }, 
};

const sGame_PaletteDataset GGXXACR_S_PO_EFFECTS[] =
{
	//Specials
	{ L"Slide Head//Whiffed HK (1//2)", 0x49e4b0, 0x49e4f0 },
	{ L"Slide Head//Whiffed HK (2//2)", 0x4a0210, 0x4a0250 },

	{ L"F.D.B. Projectile (1//3)", 0x4b69a0, 0x4b69e0 },
	{ L"F.D.B. Projectile (2//3)", 0x4be9d0, 0x4bea10 },
	{ L"F.D.B. Projectile (3//3)", 0x4c05a0, 0x4c05e0 },

	{ L"Potemkin Buster (1//2)", 0x4996e0, 0x499720 },
	{ L"Potemkin Buster (2//2)", 0x49bf90, 0x49bfd0 },

	{ L"Heat Knuckle (1//5)", 0x4d23c0, 0x4d2400 },
	{ L"Heat Knuckle (2//5)", 0x4dba50, 0x4dba90 },
	{ L"Heat Knuckle (3//5)", 0x4dc490, 0x4dc4d0 },
	{ L"Heat Knuckle (4//5)", 0x4d9ac0, 0x4d9b00 },
	{ L"Heat Knuckle (5//5)", 0x4de390, 0x4de3d0 },
	{ L"Heat Extend - Bullets", 0x4d22f0, 0x4d2330 },
	{ L"Heat Extend - Hearts (1//2)", 0x4a0500, 0x4a0540 },
	{ L"Heat Extend - Hearts (2//2)", 0x4a10c0, 0x4a1100 },

	//Overdrives
	{ L"Giganter (1//2)", 0x4a2700, 0x4a2740 },
	{ L"Giganter (2//2)", 0x4a66b0, 0x4a66f0 },
	{ L"Gigantic Bullet Close Fist (1//2)", 0x4ace00, 0x4ace40 },
	{ L"Gigantic Bullet Close Fist (2//2)", 0x4af6b0, 0x4af6f0 },
	{ L"Gigantic Bullet Far Fist (1//2)", 0x4b1bd0, 0x4b1c10 },
	{ L"Gigantic Bullet Far Fist (2//2)", 0x4b4480, 0x4b44c0 },

	//Instant Kill
	{ L"Magnum Opera (1//2)", 0x4c23e0, 0x4c2420 },
	{ L"Magnum Opera (2//2)", 0x4cc8c0, 0x4cc900 },
	{ L"Magnum Opera - Heart (1//2)", 0x4c1bd0, 0x4c1c10 },
	{ L"Magnum Opera - Heart (2//2)", 0x4c2110, 0x4c2150 },

};

const sGame_PaletteDataset GGXXACR_S_SL_EFFECTS[] =
{
	// General
	{ L"General Sparks // Riot Stamp", 0x3fc2b0, 0x3fc2f0 },
	//Specials
	{ L"Gunflame (1//3)", 0x3540b0, 0x3540f0, indexGGXXSprites_ACR_Sol, 0x07 },
	{ L"Gunflame (2//3)", 0x3579b0, 0x3579f0, indexGGXXSprites_ACR_Sol, 0x07 },
	{ L"Gunflame (3//3)", 0x35a740, 0x35a780, indexGGXXSprites_ACR_Sol, 0x07 },
	{ L"Gunflame - Dragon Install (1//4)", 0x41b270, 0x41b2b0, indexGGXXSprites_ACR_Sol, 0x02 },
	{ L"Gunflame - Dragon Install (2//4)", 0x422910, 0x422950, indexGGXXSprites_ACR_Sol, 0x02 },
	{ L"Gunflame - Dragon Install (3//4)", 0x4262c0, 0x426300, indexGGXXSprites_ACR_Sol, 0x02 },
	{ L"Gunflame - Dragon Install (4//4)", 0x429a60, 0x429aa0, indexGGXXSprites_ACR_Sol, 0x02 },
	{ L"Volcanic Viper (1//2)", 0x3485f0, 0x348630, indexGGXXSprites_ACR_Sol, 0x09 },
	{ L"Volcanic Viper (2//2)", 0x34f3f0, 0x34f430, indexGGXXSprites_ACR_Sol, 0x09 },
	{ L"Volcanic Viper - Dragon Install", 0x38aaa0, 0x38aae0 },
	{ L"Grand Viper", 0x342a40, 0x342a80, indexGGXXSprites_ACR_Sol, 0x06 },
	{ L"Bandit Revolver - DI (1//3)", 0x405890, 0x4058d0 },
	{ L"Bandit Revolver - DI (2//3)", 0x410a10, 0x410a50 },
	{ L"Bandit Revolver - DI (3//3)", 0x4177e0, 0x417820 },
	{ L"Bandit Bringer (1//12)", 0x35c3d0, 0x35c410, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (2//12)", 0x35da10, 0x35da50, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (3//12)", 0x3600b0, 0x3600f0, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (4//12)", 0x361f80, 0x361fc0, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (5//12)", 0x364520, 0x364560, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (6//12)", 0x366df0, 0x366e30, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (7//12)", 0x368de0, 0x368e20, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (8//12)", 0x369e60, 0x369ea0, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (9//12)", 0x36aab0, 0x36aaf0, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (10//12)", 0x36b450, 0x36b490, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (11//12)", 0x36bde0, 0x36be20, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer (12//12)", 0x36c770, 0x36c7b0, indexGGXXSprites_ACR_Sol, 0x01 },
	{ L"Bandit Bringer Trails (1//3)", 0x36d0a0, 0x36d0e0 },
	{ L"Bandit Bringer Trails (2//3)", 0x36dce0, 0x36dd20 },
	{ L"Bandit Bringer Trails (3//3)", 0x36e860, 0x36e8a0 },
	{ L"Sidewinder", 0x437380, 0x4373c0, indexGGXXSprites_ACR_Sol, 0x08 },
	{ L"Fafnir (1//7)", 0x42fb50, 0x42fb90, indexGGXXSprites_ACR_Sol, 0x04 },
	{ L"Fafnir (2//7)", 0x430970, 0x4309b0, indexGGXXSprites_ACR_Sol, 0x04 },
	{ L"Fafnir (3//7)", 0x431a50, 0x431a90, indexGGXXSprites_ACR_Sol, 0x04 },
	{ L"Fafnir (4//7)", 0x432d20, 0x432d60, indexGGXXSprites_ACR_Sol, 0x04 },
	{ L"Fafnir (5//7)", 0x434b00, 0x434b40, indexGGXXSprites_ACR_Sol, 0x04 },
	{ L"Fafnir (6//7)", 0x436330, 0x436370, indexGGXXSprites_ACR_Sol, 0x04 },
	{ L"Fafnir (7//7)", 0x436fb0, 0x436ff0, indexGGXXSprites_ACR_Sol, 0x04 },
	{ L"Slam - Dragon Install", 0x3fcf60, 0x3fcfa0 },
	// Overdrives
	{ L"Tyrant Rave", 0x378990, 0x3789d0, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (1//24)", 0x3F6610, 0x3F6650, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (2//24)", 0x3F68C0, 0x3F6900, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (3//24)", 0x3F7510, 0x3F7550, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (4//24)", 0x3F85B0, 0x3F85F0, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (5//24)", 0x3F94B0, 0x3F94F0, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (6//24)", 0x3FA340, 0x3FA380, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (7//24)", 0x3FAF50, 0x3FAF90, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (8//24)", 0x3FB7E0, 0x3FB820, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (9//24)", 0x3FBDA0, 0x3FBDE0, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (10//24)", 0x3C0F40, 0x3C0F80, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (11//24)", 0x3C2DC0, 0x3C2E00, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (12//24)", 0x3C9210, 0x3C9250, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (13//24)", 0x3D0F60, 0x3D0FA0, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (14//24)", 0x3D8E50, 0x3D8E90, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (15//24)", 0x3DFB20, 0x3DFB60, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (16//24)", 0x3EA370, 0x3EA3B0, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (17//24)", 0x3E5AE0, 0x3E5B20, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (18//24)", 0x3ED820, 0x3ED860, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (19//24)", 0x3F0050, 0x3F0090, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (20//24)", 0x3F1CB0, 0x3F1CF0, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (21//24)", 0x3F3190, 0x3F31D0, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (22//24)", 0x3F4190, 0x3F41D0, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (23//24)", 0x3F50C0, 0x3F5100, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Tyrant Rave Beta (24//24)", 0x3F5C50, 0x3F5C90, indexGGXXSprites_ACR_Sol, 0x05 },
	{ L"Dragon Install Fire (1//7)", 0x3870c0, 0x387100, indexGGXXSprites_ACR_Sol, 0x03 },
	{ L"Dragon Install Fire (2//7)", 0x3879f0, 0x387a30, indexGGXXSprites_ACR_Sol, 0x03 },
	{ L"Dragon Install Fire (3//7)", 0x387f90, 0x387fd0, indexGGXXSprites_ACR_Sol, 0x03 },
	{ L"Dragon Install Fire (4//7)", 0x388870, 0x3888b0, indexGGXXSprites_ACR_Sol, 0x03 },
	{ L"Dragon Install Fire (5//7)", 0x389300, 0x389340, indexGGXXSprites_ACR_Sol, 0x03 },
	{ L"Dragon Install Fire (6//7)", 0x389c80, 0x389cc0, indexGGXXSprites_ACR_Sol, 0x03 },
	{ L"Dragon Install Fire (7//7)", 0x38a5e0, 0x38a620, indexGGXXSprites_ACR_Sol, 0x03 },
	// Instant Kill
	{ L"Napalm Death (1//9)", 0x3911a0, 0x3911e0 },
	{ L"Napalm Death (2//9)", 0x39c6b0, 0x39c6f0 },
	{ L"Napalm Death (3//9)", 0x3a58a0, 0x3a58e0 },
	{ L"Napalm Death (4//9)", 0x3af100, 0x3af140 },
	{ L"Napalm Death (5//9)", 0x3b5a30, 0x3b5a70 },
	{ L"Napalm Death (6//9)", 0x3b88f0, 0x3b8930 },
	{ L"Napalm Death (7//9)", 0x3bb020, 0x3bb060 },
	{ L"Napalm Death (8//9)", 0x3bcf70, 0x3bcfb0 },
	{ L"Napalm Death (9//9)", 0x3bf310, 0x3bf350 },
};

const sGame_PaletteDataset GGXXACR_S_VE_EFFECTS[] =
{
	//General
	{ L"Ball Glow", 0x26d330, 0x26d370 },

	{ L"Charge//Lightning Ball (1//3)", 0x26f610, 0x26f650 },
	{ L"Charge//Lightning Ball (2//3)", 0x270f70, 0x270fb0 },
	{ L"Charge//Lightning Ball (3//3)", 0x273580, 0x2735c0 },

	{ L"Grab (1//3)", 0x294d50, 0x294d90 },
	{ L"Grab (2//3)", 0x294170, 0x2941b0 },
	{ L"Grab (3//3)", 0x293840, 0x293880 },
	//Specials
	{ L"Stinger Aim Impacts", 0x26b0d0, 0x26b110 },
	{ L"Carcass Ride Impacts", 0x26c180, 0x26c1c0 },

	{ L"Dubious Curve - Slam", 0x28a3d0, 0x28a410 },
	{ L"Dubious Curve - Swipe", 0x290220, 0x290260 },

	{ L"Mad Struggle (1//4)", 0x267640, 0x267a40 },
	{ L"Mad Struggle (2//4)", 0x268040, 0x268440 },
	{ L"Mad Struggle (3//4)", 0x268ea0, 0x2692a0 },
	{ L"Mad Struggle (4//4)", 0x269b90, 0x269f90 },
	//Overdrives
	{ L"Dark Angel", 0x277b40, 0x277b80 },
	{ L"Dark Angel Effects (1//2)", 0x280bf0, 0x280c30 },
	{ L"Dark Angel Effects (2//2)", 0x282420, 0x282460 },
	//Instant Kill
	{ L"Dimmu Borgir (1, 4, 5, 7)", 0x289450, 0x289510 },
	{ L"Dimmu Borgir (6, 2, 8, 3)", 0x289c10, 0x289cd0 },
	{ L"Dimmu Borgir - Explosion (1//6)", 0x282b90, 0x282bd0 },
	{ L"Dimmu Borgir - Explosion (2//6)", 0x283560, 0x2835a0 },
	{ L"Dimmu Borgir - Explosion (3//6)", 0x284ad0, 0x284b10 },
	{ L"Dimmu Borgir - Explosion (4//6)", 0x286720, 0x286760 },
	{ L"Dimmu Borgir - Explosion (5//6)", 0x287c50, 0x287c90 },
	{ L"Dimmu Borgir - Explosion (6//6)", 0x288cf0, 0x288d30 },

	//{ L"Unused 1?", 0x26e1e0, 0x26e220 }, 
	//{ L"Unused 2?", 0x26e2f0, 0x26e330 }, 	
};

const LPCWSTR GGXXACRPaletteNamesNormal[] =
{
	L"Punch",
	L"Kick",
	L"Slash",
	L"Heavy Slash",
	L"Dust",
	
	L"EX Punch",
	L"EX Kick",
	L"EX Slash",
	L"EX Heavy Slash",
	L"EX Dust",
	
	L"Slash Punch",
	L"Slash Kick",
	L"Slash Slash",
	L"Slash Heavy Slash",
	L"Gold",
	
	L"Reload Punch",
	L"Reload Kick",
	L"Reload Slash",
	L"Reload Heavy Slash",
	L"Shadow",
	
	L"Vs Slash Dust",
	L"Vs Reload Dust",
};

const LPCWSTR GGXXACRPaletteNamesEx[] =
{
	L"Punch",
	L"Kick",
	L"Slash",
	L"Heavy Slash",
	L"Dust",
	
	L"EX Punch",
	L"EX Kick",
	L"EX Slash",
	L"EX Heavy Slash",
	L"EX Dust",
	
	L"Slash Punch",
	L"Slash Kick",
	L"Slash Slash",
	L"Slash Heavy Slash",
	L"Gold",
	
	L"Reload Punch",
	L"Reload Kick",
	L"Reload Slash",
	L"Reload Heavy Slash",
	L"Shadow",
};

struct GGXXACRFileData
{
	LPCWSTR pszFileName = nullptr;
	LPCWSTR pszCharacter = nullptr;
	UINT32 nExpectedFileSize = 0;
	const LPCWSTR* ppszPaletteList = nullptr;
	UINT32 nPaletteListSize = 0;
	UINT32 nInitialLocation = 0;
	UINT32 nSpriteIndex = -1;
	const sGame_PaletteDataset* prgExtraPalettes = nullptr;
	UINT16 nCountExtras = 0;
};

GGXXACRFileData GGXXACRCharacterData[] =
{
	{ L"ab.bin",    L"A.B.A.",          5715300,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x48ab50, indexGGXXSprites_ACR_ABA, GGXXACR_S_AB_EFFECTS, ARRAYSIZE(GGXXACR_S_AB_EFFECTS) },
	{ L"an.bin",    L"Anji",            4518932,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3ea460, indexGGXXSprites_ACR_Anji },
	{ L"ax.bin",    L"Axl Low" ,        4225716,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x35ebe0, indexGGXXSprites_ACR_Axl },
	{ L"bk.bin",    L"Baiken",          3573668,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x308c20, indexGGXXSprites_ACR_Baiken, GGXXACR_S_BK_EFFECTS, ARRAYSIZE(GGXXACR_S_BK_EFFECTS) },
	{ L"ch.bin",    L"Chipp Zanuff",    3113988,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x293560, indexGGXXSprites_ACR_Chipp },
	{ L"dz.bin",    L"Dizzy",           5352324,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x45d720, indexGGXXSprites_ACR_Dizzy },
	{ L"fa.bin",    L"Faust",           4773284,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3fe9a0, indexGGXXSprites_ACR_Faust },
	{ L"fr.bin",    L"Order Sol",       5772356,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x4377e0, indexGGXXSprites_ACR_OrderSol },
	{ L"in.bin",    L"I-No",            5609060,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3e5370, indexGGXXSprites_ACR_Ino },
	{ L"jm.bin",    L"Jam",             3827044,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x2c4e80, indexGGXXSprites_ACR_Jam },
	{ L"js.bin",    L"Justice",         4556788,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3789b0, indexGGXXSprites_ACR_Justice },
	{ L"jy.bin",    L"Johnny",          4205892,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3b0620, indexGGXXSprites_ACR_Johnny, GGXXACR_S_JY_EFFECTS, ARRAYSIZE(GGXXACR_S_JY_EFFECTS) },
	{ L"kr.bin",    L"Kliff Undersn",   3114036,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x28abf0, indexGGXXSprites_ACR_Kliff },
	{ L"ky.bin",    L"Ky",              4571540,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x38bbc0, indexGGXXSprites_ACR_Ky, GGXXACR_S_KY_EFFECTS, ARRAYSIZE(GGXXACR_S_KY_EFFECTS) },
	{ L"ml.bin",    L"Millia",          3034084,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x2a4950, indexGGXXSprites_ACR_Millia },
	{ L"my.bin",    L"May",             4311684,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x363d50, indexGGXXSprites_ACR_May },
	{ L"po.bin",    L"Potemkin",        5277348,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x489c70, indexGGXXSprites_ACR_Potemkin, GGXXACR_S_PO_EFFECTS, ARRAYSIZE(GGXXACR_S_PO_EFFECTS) },
	{ L"rk.bin",    L"Robo-Ky",         4489668,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3a7450, indexGGXXSprites_ACR_RoboKy },
	{ L"sl.bin",    L"Sol Badguy",      4613188,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x339b60, indexGGXXSprites_ACR_Sol, GGXXACR_S_SL_EFFECTS, ARRAYSIZE(GGXXACR_S_SL_EFFECTS) },
	{ L"sy.bin",    L"Slayer",          6215652,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x39c960, indexGGXXSprites_ACR_Slayer },
	{ L"ts.bin",    L"Testament",       4817508,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3ee950, indexGGXXSprites_ACR_Testament },
	{ L"ve.bin",    L"Venom",           2787412,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x261c10, indexGGXXSprites_ACR_Venom, GGXXACR_S_VE_EFFECTS, ARRAYSIZE(GGXXACR_S_VE_EFFECTS) },
	{ L"yy.bin",    L"Bridget",         4127716,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x34b210, indexGGXXSprites_ACR_Bridget },
	{ L"zp.bin",    L"Zappa",           6019988,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x2a54f0, indexGGXXSprites_ACR_Zappa },
	{ L"zt.bin",    L"Eddie",           3289156,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x24e560, indexGGXXSprites_ACR_Eddie },
	{ L"eab.bin",   L"EX A.B.A.",       5912564,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x4b3ca0, indexGGXXSprites_ACR_ABA },
	{ L"ean.bin",   L"EX Anji",         4520900,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3eb460, indexGGXXSprites_ACR_Anji },
	{ L"eax.bin",   L"EX Axl Low",      4217220,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x35edf0, indexGGXXSprites_ACR_Axl },
	{ L"ebk.bin",   L"EX Baiken",       3601604,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x309920, indexGGXXSprites_ACR_Baiken },
	{ L"ech.bin",   L"EX Chipp Zanuff", 3162804,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x29f630, indexGGXXSprites_ACR_Chipp },
	{ L"edz.bin",   L"EX Dizzy",        5594900,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x49a2c0, indexGGXXSprites_ACR_Dizzy },
	{ L"efa.bin",   L"EX Faust",        4784260,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3fe9f0, indexGGXXSprites_ACR_Faust },
	{ L"efr.bin",   L"EX Order-Sol",    5965396,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x45d9d0, indexGGXXSprites_ACR_OrderSol },
	{ L"ein.bin",   L"EX I-No",         5762996,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3f9060, indexGGXXSprites_ACR_Ino },
	{ L"ejm.bin",   L"EX Jam",          3812100,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x2c46d0, indexGGXXSprites_ACR_Jam },
	{ L"ejy.bin",   L"EX Johnny",       4210036,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3b2250, indexGGXXSprites_ACR_Johnny },
	{ L"eky.bin",   L"EX Ky",           4859572,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3cafd0, indexGGXXSprites_ACR_Ky },
	{ L"eml.bin",   L"EX Millia",       3003428,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x29d9c0, indexGGXXSprites_ACR_Millia },
	{ L"emy.bin",   L"EX May",          4675812,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x399780, indexGGXXSprites_ACR_May },
	{ L"epo.bin",   L"EX Potemkin",     5313412,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x494170, indexGGXXSprites_ACR_Potemkin },
	{ L"erk.bin",   L"EX Robo-Ky",      4599332,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3cfc80, indexGGXXSprites_ACR_RoboKy },
	{ L"esl.bin",   L"EX Sol Badguy",   4679684,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x33b380, indexGGXXSprites_ACR_Sol },
	{ L"esy.bin",   L"EX Slayer",       6221972,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x39ea30, indexGGXXSprites_ACR_Slayer },
	{ L"ets.bin",   L"EX Testament",    4775796,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3f4780, indexGGXXSprites_ACR_Testament },
	{ L"eve.bin",   L"EX Venom",        2848292,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x271200, indexGGXXSprites_ACR_Venom },
	{ L"eyy.bin",   L"EX Bridget",      4206820,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x35d790, indexGGXXSprites_ACR_Bridget },
	{ L"ezp.bin",   L"EX Zappa",        6044292,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x2a2e90, indexGGXXSprites_ACR_Zappa },
	{ L"ezt.bin",   L"EX Eddie",        3185140,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x275d30, indexGGXXSprites_ACR_Eddie },
};
