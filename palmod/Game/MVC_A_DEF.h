#pragma once

#define MVC_A_IMGSTART (0x3B + 0x11 + 0x11 + 0x01) //MVC2, then SSF2T, then SFA3, then XMVSF

#define MVC_A_EXTRALOC MVC_A_NUMUNIT

constexpr auto MVC_A_NUMUNIT = 24;

// These are the base offsets for a character.
const UINT32 MVC_A_UNITLOC[MVC_A_NUMUNIT] =
{
	0x481C4, // War Machine
	0x48284, // Cap
	0x48344, // Hulk
	0x48404, // Wolvie
	0x48584, // Venom
	0x48644, // Spidey
	0x48704, // Roll
	0x487C4, // Ryu
	0x48884, // CapCom
	0x48944, // Chun
	0x48A04, // Jin
	0x48AC4, // Gief
	0x48E04, // Strider
	0x48F84, // Megaman
	0x48ec4, // Fixed Morrigan
	0x49044, // Onslaught
	0x490A4, // Alt-Venom
	0x49164, // Alt-Hulk
	0x49224, // GWM
	0x492E4, // Shadow Lady.  This is "shadow lady part 1". IDK what the parts mean, but hey.
	0x4FF64, // Shadow Lady Part 2
	0x493A4, // Lilith
	0x484c4, // Gambit
	0x0, // Assists: Special
};

struct sMVC_PaletteDataset
{
	LPCSTR szPaletteName;
	int nPaletteOffset;
};

const sMVC_PaletteDataset MVC_A_RYU_PALETTES[] =
{
	{ "Ryu P1", 0x487C4 },
	{ "Ryu P1 Hadouken", 0x487E4 },
	{ "Ryu P1 Shoryuken", 0x48804 },
	{ "Ryu P2", 0x48824 },
	{ "Ryu P2 Hadouken", 0x48844 },
	{ "Ryu P2 Shoryuken", 0x48864 },

	{ "Ken P1", 0x4EC44 },
	{ "Ken P1 Hakouken", 0x4EC64 },
	{ "Ken P1 Shoryuken", 0x4EC84 },
	{ "Ken P2", 0x4ECA4 },
	{ "Ken P2 Hadouken", 0x4ECC4 },
	{ "Ken P2 Shoryuken", 0x4ECE4 },

	{ "Akuma P1", 0x4ED04 },
	{ "Akuma P1 Hadouken", 0x4ED24 },
	{ "Akuma P1 Shoryuken", 0x4ED44 },
	{ "Akuma P2", 0x4ED64 },
	{ "Akuma P2 Hadouken", 0x4ED84 },
	{ "Akuma P2 Shoyuken", 0x4EDA4 },
};

const sMVC_PaletteDataset MVC_A_GIEF_PALETTES[] =
{
	{ "Zangief P1", 0x48AC4 },
	{ "Palette 2",  0x48AE4 },
	{ "Palette 3",  0x48B04 },
	{ "Zangief P2", 0x48B24 },
	{ "Palette 5",  0x48B44 },
	{ "Palette 6",  0x48B64 },

	{ "Mecha Zangief P1", 0x48C84 },
	{ "Palette 14",		  0x48CA4 },
	{ "Palette 15",		  0x48CC4 },
	{ "Mecha Zangief P2", 0x48CE4 },
	{ "Palette 17",		  0x48D04 },
	{ "Palette 18",		  0x48D24 },
};

const sMVC_PaletteDataset MVC_A_ASSIST_PALETTES[] =
{
	{ "Colossus P1", 0x505C4 },
	{ "Colossus P2", 0x50624 },

	{ "Cyclops P1", 0x50504 },
	{ "Cyclops P2", 0x50564 },
	{ "Cyclops Optic Blast 1", 0x508C4 },
	{ "Cyclops Optic Blast 2", 0x508E4 },
	{ "Cyclops Optic Blast 3", 0x50904 },
	{ "Cyclops Optic Blast 4", 0x50924 },
	{ "Cyclops Optic Blast 5", 0x50944 },

	{ "Iceman P1", 0x50D64 },
	{ "Iceman P1 Extra 1", 0x50D84 },
	{ "Iceman P1 Extra 2", 0x50DA4 },
	{ "Iceman P2", 0x50DC4 },
	{ "Iceman P2 Extra 1", 0x50DE4 },
	{ "Iceman P1 Extra 2", 0x50E04 },

	{ "Juggernaut P1", 0x502C4 },
	{ "Juggernaut P2", 0x50324 },

	{ "Magneto P1", 0x50384 },
	{ "Magneto P2", 0x503E4 },

	{ "Psylocke P1", 0x50444 },
	{ "Psylocke P2", 0x504A4 },

	{ "Rogue P1", 0x50CA4 },
	{ "Rogue P2", 0x50D04 },

	{ "Sentinel P1", 0x51344 },
	{ "Sentinel P2", 0x513A4 },

	{ "Storm P1", 0x50BA4 },
	{ "Storm P2", 0x50C04 },

	{ "Thor P1", 0x50AE4 },
	{ "Thor P2", 0x50B44 },

	{ "US Agent P1", 0x50EE4 },  // BUGBUG: We could actually use the CapAm sprite for display...
	{ "US Agent P1 Shield", 0x50F04 },
	{ "US Agent P1 Palette 3", 0x50F24 },
	{ "US Agent P2", 0x50F84 },
	{ "US Agent P2 Shield", 0x50FA4 },
	{ "US Agent P2 Palette 3", 0x50FC4 },
	
	{ "Lou P1", 0x50204 },
	{ "Lou P2", 0x50264 },

	{ "Saki P1", 0x50964 },
	{ "Saki P2", 0x509C4 },

	{ "Shadow Nash P1", 0x51284 },
	{ "Shadow Nash P2", 0x512E4 },

	{ "Unknown Soldier P1", 0x50684 },
	{ "Unknown Soldier P2", 0x506E4 },
};

const UINT8 MVC_A_UNITSORT[MVC_A_NUMUNIT + 1] = //Plus 1 for the extra palettes
{
	0x00, 
	0x01,
	0x02,
	0x03,
	0x04,
	0x05,
	0x06,
	0x07,
	0x08,
	0x09,
	0x0A,
	0x0B,
	0x0C,
	0x0D,
	0x0E,
	0x0F,
	0x10,
	0x11,
	0x12,
	0x13,
	0x14,
	0x15,
	0x16,
	0x17,

	MVC_A_EXTRALOC //Extra palettes
};

const char MVC_A_IMGDESC[6][32] =
{
	"P1 Color",
	"Palette 2",
	"Palette 3",
	"P2 Color",
	"Palette 5",
	"Palette 6"
};

const char MVC_A_UNITDESC[MVC_A_NUMUNIT][32] =
{
	"War Machine",
	"Captain America",
	"Hulk",
	"Wolverine",
	"Venom",
	"Spider-Man",
	"Roll",
	"Ryu",
	"Captain Commando",
	"Chun-Li",
	"Jin",
	"Zangief",
	"Strider",
	"Megaman",
	"Morrigan",
	"Onslaught",
	"Red Venom",
	"Orange Hulk",
	"Gold War Machine",
	"Shadow Lady Part 1",
	"Shadow Lady Part 2",
	"Lilith",
	"Gambit",
	"Assists",
};

const UINT16 MVC_A_PALAMT[MVC_A_NUMUNIT] = {

	0x06, // WM
	0x06, // CapAm
	0x06, // Hulk
	0x06, // Wolvie
	0x06, // Venom
	0x06, // Spidey
	0x06, // Roll
	ARRAYSIZE(MVC_A_RYU_PALETTES), // Ryu
	0x06, // Capcom
	0x06, // Chun
	0x06, // Jin
	ARRAYSIZE(MVC_A_GIEF_PALETTES), // Gief & MechaGief
	0x06, // Strider
	0x06, // Megaman
	0x05, // Morrigan
	0x03, // Onslaught
	0x06, // Red Venom
	0x06, // Orange Hulk
	0x06, // Gold War Machine
	0x06, // Shadow Lady Part 1...?
	0x06, // Shadow Lady Part 2...?
	0x06, // Lilith
	0x06, // Gambit
	ARRAYSIZE(MVC_A_ASSIST_PALETTES), // Assists
};

const UINT16 MVC_A_IMGREDIR[MVC_A_NUMUNIT] = {

	0x33, // WM
	0x0B, // CapAm
	0x0D, // Hulk
	0x07, // Wolvie
	0x0E, // Venom
	0x0C, // Spidey
	0x1D, // Roll
	0x00, // Ryu
	0x38, // Capcom
	0x1B, // Chun
	0x37, // Jin
	0x01, // gieeeeef
	0x05, // strider
	0x1C, // megaman
	0x03, // morrigan
	MVC_A_IMGSTART, // onslaughter
	0x0E, // red venom
	0x0D, // orange hulk
	0x33, // gwm
	0x1B, // shadow lady 1
	0x1B, // shadow layd 2
	0x03, // lilith
	0x28, // gambit
	0xFF, // :( Assists ... we don't have anything. 
};

//bugbug bogus: but what if we make it work!
const stExtraDef MVC_A_EXTRA[] =
{
	//Start

	{ 0x80 },

	// Megaman
//	{ 0x13, "Intro", 0x4C064, 0x20},
	//Ken
//	{ 0x0A, "Hadouken", 0x00706400, 30 * 2, 1},
//	{ 0x0A, "Shoryuken Flames", 0x00706560, 16 * 2},

	//Oro
//	{ 0x08, "Tengu Stones", 0x00763100, 0x80},
//	{ 0x08, "Bricks", 0x00763180, 0x20, 1},

//	//Urien
//	{ 0x0C, "Intro", 0x00706600, 0x80 },
//	{ 0x0C, "Morph", 0x00706680, 0x80, 1 },

	//{ SFIII3_A_EXTRALOC, "Check", 0x00706580, 0x80 },

	//{ SFIII3_A_EXTRALOC, "Check Tengu", 0x00763180, 0x80 },

	//{ SFIII3_A_EXTRALOC, "Elena's Stage", 0x740B80, 0x2E00 },

	//Extra

	{ 0xFF }
};
