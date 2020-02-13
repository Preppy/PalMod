#pragma once

#define MVC_A_IMGSTART (0x3B + 0x11 + 0x11 + 0x01) //MVC2, then SSF2T, then SFA3, then XMVSF

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the line sof MVC_A_RYU_PALETTES. 
// * Update every array using MVC_A_NUMUNIT below
// * Update the two index lookups in Game_MVC_A_.cpp that are marked - look for usage of indexRyu to find them
// That should be it.  Good luck.

enum SupportedPaletteListIndex
{
	indexWarMachine = 0,
	indexCaptainAmerica,
	indexHulk,
	indexWolverine,
	indexVenom,
	indexSpiderman,
	indexRoll,
	indexRyu,
	indexCapCom,
	indexChun,
	indexJin,
	indexGief,
	indexStrider,
	indexMegaman,
	indexMorrigan,
	indexOnslaught,
	indexHyperVenom,
	indexOrangeHulk,
	indexGWM,
	indexShadowLady,
	indexLilith,
	indexGambit,
	indexAssists,
	indexLast
};

constexpr auto MVC_A_NUMUNIT = indexLast;

#define MVC_A_EXTRALOC MVC_A_NUMUNIT

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
	0x490A4, // Hyper Venom
	0x49164, // Orange Hulk
	0x49224, // GWM
	0x492E4, // Shadow Lady.
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

const sMVC_PaletteDataset MVC_A_SHADOWLADY_PALETTES[] =
{
	{ "P1 Color", 0x492E4 },
	{ "P1 Glimmer 1", 0x4FF64 },
	{ "P1 Glimmer 2", 0x4FF84 },
	{ "P1 Glimmer 3", 0x4FFA4 },
	{ "P1 Extra 1", 0x49304 },
	{ "P1 Extra 2", 0x49324 },

	{ "P2 Color", 0x49344 },
	{ "P2 Glimmer 1", 0x4FFC4 },
	{ "P2 Glimmer 2", 0x4FFE4 },
	{ "P2 Glimmer 3", 0x50004 },
	{ "P2 Extra 1", 0x49364 },
	{ "P2 Extra 2", 0x49384 },
};

const sMVC_PaletteDataset MVC_A_MEGAMAN_PALETTES[] =
{
	{ "Megaman P1", 0x48F84 },
	{ "P1 Rush/Eddie",  0x48FA4 },
	{ "P1 Beat",  0x48FC4 },
	{ "Megaman P2", 0x48FE4 },
	{ "P2 Rush/Eddie",  0x49004 },
	{ "P2 Beat",  0x49024 },

	{ "P1 Intro", 0x4C064 },
	{ "P1 Extra 1", 0x4C084 },
	{ "P1 Extra 2", 0x4C0A4 },
	{ "P1 Extra 3", 0x4C0C4 },
	{ "P1 Extra 4", 0x4C0E4 },
	{ "P1 Extra 5", 0x4C104 },
	{ "P1 Extra 6", 0x4C124 },
	{ "P1 Extra 7", 0x4C144 },
	{ "P1 Extra 8", 0x4C164 },
	{ "P1 Extra 9", 0x4C184 },

	{ "P1 Rush/Eddie Extras 1", 0x4C1A4 },
	{ "P1 Rush/Eddie Extras 2", 0x4C1C4 },
	{ "P1 Rush/Eddie Extras 3", 0x4C1E4 },
	{ "P1 Rush/Eddie Extras 4", 0x4C204 },
	{ "P1 Rush/Eddie Extras 5", 0x4C224 },
	{ "P1 Rush/Eddie Extras 6", 0x4C244 },
	{ "P1 Rush/Eddie Extras 7", 0x4C264 },
	{ "P1 Rush/Eddie Extras 8", 0x4C284 },
	{ "P1 Rush/Eddie Extras 9", 0x4C2A4 },

	{ "P1 Beat Extras 1", 0x4C2C4 },
	{ "P1 Beat Extras 2", 0x4C2E4 },
	{ "P1 Beat Extras 3", 0x4C304 },
	{ "P1 Beat Extras 4", 0x4C324 },
	{ "P1 Beat Extras 5", 0x4C344 },
	{ "P1 Beat Extras 6", 0x4C364 },
	{ "P1 Beat Extras 7", 0x4C384 },
	{ "P1 Beat Extras 8", 0x4C3A4 },
	{ "P1 Beat Extras 9", 0x4C3C4 },

	{ "P1 Beat Plane Extras 1", 0x4C3E4  },
	{ "P1 Beat Plane Extras 2", 0x4C404 },
	{ "P1 Beat Plane Extras 3", 0x4C424 },
	{ "P1 Beat Plane Extras 4", 0x4C444 },
	{ "P1 Beat Plane Extras 5", 0x4C464 },
	{ "P1 Beat Plane Extras 6", 0x4C484 },
	{ "P1 Beat Plane Extras 7", 0x4C4A4 },
	{ "P1 Beat Plane Extras 8", 0x4C4C4 },
	{ "P1 Beat Plane Extras 9", 0x4C4E4 },

	{ "P1 Charged HP 1", 0x4C504 },
	{ "P1 Charged HP 2", 0x4C524 },
	{ "P1 Charged HP 3", 0x4C544 },
	{ "P1 Charged HP 4", 0x4C564 },
	{ "P1 Charged HP 5", 0x4C584 },
	{ "P1 Charged HP 6", 0x4C5A4 },
	{ "P1 Charged HP 7", 0x4C5C4 },
	{ "P1 Charged HP 8", 0x4C5E4 },
	{ "P1 Charged HP 9", 0x4C604 },

	{ "P1 Rush Extras 1", 0x4C624 },
	{ "P1 Rush Extras 2", 0x4C644 },
	{ "P1 Rush Extras 3", 0x4C664 },
	{ "P1 Rush Extras 4", 0x4C684 },
	{ "P1 Rush Extras 5", 0x4C6A4 },
	{ "P1 Rush Extras 6", 0x4C6C4 },
	{ "P1 Rush Extras 7", 0x4C6E4 },
	{ "P1 Rush Extras 8", 0x4C704 },
	{ "P1 Rush Extras 9", 0x4C724 },

	{ "P1 Intro", 0x4C744 },

	{ "P1 Rush Extra 1", 0x4C784 },
	{ "P1 Rush Extra 2", 0x4C7A4 },
	{ "P1 Rush Extra 3", 0x4C7C4 },
	{ "P1 Rush Extra 4", 0x4C7E4 },
	{ "P1 Rush Extra 5", 0x4C804 },
	{ "P1 Rush Extra 6", 0x4C824 },
	{ "P1 Rush Extra 7", 0x4C844 },
	{ "P1 Rush Extra 8", 0x4C864 },
	{ "P1 Rush Extra 9", 0x4C884 },

	{ "P1 Hyper Megaman 1", 0x4C8A4 },
	{ "P1 Hyper Megaman 2", 0x4C8C4 },
	{ "P1 Hyper Megaman 3", 0x4C8E4 },
	{ "P1 Hyper Megaman 4", 0x4C904 },
	{ "P1 Hyper Megaman 5", 0x4C924 },
	{ "P1 Hyper Megaman 6", 0x4C944 },
	{ "P1 Hyper Megaman 7", 0x4C964 },
	{ "P1 Hyper Megaman 8", 0x4C984 },
	{ "P1 Hyper Megaman 9", 0x4C9A4 },

	{ "P1 Beat Extras", 0x4C9C4 },

	{ "P1 Roll Win Pose", 0x4CAE4 },
	{ "P1 Magnetic Megaman", 0x4CB04 },
	{ "P1 Extras 1", 0x4DE64 },
	{ "P1 Extras 2", 0x4DE84 },
	{ "P1 Extras 3", 0x4DEA4 },
	{ "P1 Extras 4", 0x4DEC4 },
	{ "P1 Extras 5", 0x4DEE4 },
	{ "P1 Extras 6", 0x4DF04 },
	{ "P1 Extras 7", 0x4DF24 },
	{ "P1 Extras 8", 0x4DF44 },
	{ "P1 Extras 9", 0x4DF64 },

	{ "P1 Beat Extra", 0x4DF84 },
	{ "P1 Megaman Extra", 0x4E0A4 },
	{ "P1 Magnetic Megaman", 0x4E0C4 },

	{ "P2 Intro", 0x4CB44 },
	{ "P2 Extra 1", 0x4CB64 },
	{ "P2 Extra 2", 0x4CB84 },
	{ "P2 Extra 3", 0x4CBA4 },
	{ "P2 Extra 4", 0x4CBC4 },
	{ "P2 Extra 5", 0x4CBE4 },
	{ "P2 Extra 6", 0x4CC04 },
	{ "P2 Extra 7", 0x4CC24 },
	{ "P2 Extra 8", 0x4CC44 },
	{ "P2 Extra 9", 0x4CC64 },

	{ "P2 Rush/Eddie Extras 1", 0x4CC84 },
	{ "P2 Rush/Eddie Extras 2", 0x4CCA4 },
	{ "P2 Rush/Eddie Extras 3", 0x4CCC4 },
	{ "P2 Rush/Eddie Extras 4", 0x4CCE4 },
	{ "P2 Rush/Eddie Extras 5", 0x4CD04 },
	{ "P2 Rush/Eddie Extras 6", 0x4CD24 },
	{ "P2 Rush/Eddie Extras 7", 0x4CD44 },
	{ "P2 Rush/Eddie Extras 8", 0x4CD64 },
	{ "P2 Rush/Eddie Extras 9", 0x4CD84 },

	{ "P2 Beat Extras 1", 0x4CDA4 },
	{ "P2 Beat Extras 2", 0x4CDC4 },
	{ "P2 Beat Extras 3", 0x4CDE4 },
	{ "P2 Beat Extras 4", 0x4CE04 },
	{ "P2 Beat Extras 5", 0x4CE24 },
	{ "P2 Beat Extras 6", 0x4CE44 },
	{ "P2 Beat Extras 7", 0x4CE64 },
	{ "P2 Beat Extras 8", 0x4CE84 },
	{ "P2 Beat Extras 9", 0x4CEA4 },

	{ "P2 Beat Plane Extras 1", 0x4CEC4 },
	{ "P2 Beat Plane Extras 2", 0x4CEE4 },
	{ "P2 Beat Plane Extras 3", 0x4CF04 },
	{ "P2 Beat Plane Extras 4", 0x4CF24 },
	{ "P2 Beat Plane Extras 5", 0x4CF44 },
	{ "P2 Beat Plane Extras 6", 0x4CF64 },
	{ "P2 Beat Plane Extras 7", 0x4CF84 },
	{ "P2 Beat Plane Extras 8", 0x4CFA4 },
	{ "P2 Beat Plane Extras 9", 0x4CFC4 },

	{ "P2 Charged HP 1", 0x4CFE4 },
	{ "P2 Charged HP 2", 0x4D004 },
	{ "P2 Charged HP 3", 0x4D024 },
	{ "P2 Charged HP 4", 0x4D044 },
	{ "P2 Charged HP 5", 0x4D064 },
	{ "P2 Charged HP 6", 0x4D084 },
	{ "P2 Charged HP 7", 0x4D0A4 },
	{ "P2 Charged HP 8", 0x4D0C4 },
	{ "P2 Charged HP 9", 0x4D0E4 },

	{ "P2 Rush Extras 1", 0x4D104 },
	{ "P2 Rush Extras 2", 0x4D124 },
	{ "P2 Rush Extras 3", 0x4D144 },
	{ "P2 Rush Extras 4", 0x4D164 },
	{ "P2 Rush Extras 5", 0x4D184 },
	{ "P2 Rush Extras 6", 0x4D1A4 },
	{ "P2 Rush Extras 7", 0x4D1C4 },
	{ "P2 Rush Extras 8", 0x4D1E4 },
	{ "P2 Rush Extras 9", 0x4D204 },

	{ "P2 Intro", 0x4D224 },

	{ "P2 Rush Extra 1", 0x4D264 },
	{ "P2 Rush Extra 2", 0x4D284 },
	{ "P2 Rush Extra 3", 0x4D2A4 },
	{ "P2 Rush Extra 4", 0x4D2C4 },
	{ "P2 Rush Extra 5", 0x4D2E4 },
	{ "P2 Rush Extra 6", 0x4D304 },
	{ "P2 Rush Extra 7", 0x4D324 },
	{ "P2 Rush Extra 8", 0x4D344 },
	{ "P2 Rush Extra 9", 0x4D364 },

	{ "P2 Hyper Megaman 1", 0x4D384 },
	{ "P2 Hyper Megaman 2", 0x4D3A4 },
	{ "P2 Hyper Megaman 3", 0x4D3C4 },
	{ "P2 Hyper Megaman 4", 0x4D3E4 },
	{ "P2 Hyper Megaman 5", 0x4D404 },
	{ "P2 Hyper Megaman 6", 0x4D424 },
	{ "P2 Hyper Megaman 7", 0x4D444 },
	{ "P2 Hyper Megaman 8", 0x4D464 },
	{ "P2 Hyper Megaman 9", 0x4D484 },

	{ "P2 Beat Extras", 0x4D4A4 },

	{ "P2 Roll Win Pose", 0x4D5C4 },
	{ "P2 Magnetic Megaman", 0x4D5E4 },
	{ "P2 Megaman Extra", 0x4EB84 },
	{ "P2 Magnetic Megaman", 0x4EBA4 },
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
	indexWarMachine,
	indexCaptainAmerica,
	indexHulk,
	indexWolverine,
	indexVenom,
	indexSpiderman,
	indexRoll,
	indexRyu,
	indexCapCom,
	indexChun,
	indexJin,
	indexGief,
	indexStrider,
	indexMegaman,
	indexMorrigan,
	indexOnslaught,
	indexHyperVenom,
	indexOrangeHulk,
	indexGWM,
	indexShadowLady,
	indexLilith,
	indexGambit,
	indexAssists,

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
	"Shadow Lady",
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
	ARRAYSIZE(MVC_A_MEGAMAN_PALETTES), // Megaman
	0x05, // Morrigan
	0x03, // Onslaught
	0x06, // Red Venom
	0x06, // Orange Hulk
	0x06, // Gold War Machine
	ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES), // Shadow Lady
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
	0x1B, // shadow lady
	0x03, // lilith
	0x28, // gambit
	0xFF, // :( Assists ... we don't have anything. 
};

// We extend this array with data groveled from the mvce.txt extensible extras file, if any.
const stExtraDef MVC_A_EXTRA[] =
{
	//Start

	{ 0x80 },

	{ 0xFF }
};
