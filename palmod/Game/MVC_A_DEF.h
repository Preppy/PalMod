#pragma once

// constexpr auto MVC_A_NUMUNIT = 23;
constexpr auto MVC_A_NUMUNIT = 26;
#define MVC2_A_PALSZ 16

#define MVC_A_IMGSTART (0x3B + 0x11 + 0x11 + 0x01) //MVC2, then SSF2T, then SFA3, then XMVSF

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
	0x490A4, // Alt-Venom
	0x49164, // Alt-Hulk
	0x49224, // GWM
	0x492E4, // Shadow Lady.  This is "shadow lady part 1". IDK what the parts mean, but hey.
	0x4FF64, // Shadow Lady Part 2
	0x493A4, // Lilith
	0x484c4, // Gambit
	0x4EC44, // Ryuken
	0x4ED04, // Ryukuma
	0x48C84, // MechaGief
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
	0x18,
	0x19,

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
	"Ryuken",
	"Ryukuma",
	"Mecha Zangief"
};

const UINT16 MVC_A_PALAMT[MVC_A_NUMUNIT] = {

	0x06, // WM
	0x06, // CapAm
	0x06, // Hulk
	0x06, // Wolvie
	0x06, // Venom
	0x06, // Spidey
	0x06, // Roll
	0x06, // Ryu
	0x06, // Capcom
	0x06, // Chun
	0x06, // Jin
	0x06, // Gief MECHGIEF
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
	0x06, // ryuken
	0x06, // ryukuma
	0x06, // mechagief
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
	0x37, // JIn
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
	0x00, // ryuken
	0x00, //ryukuma
	0x01 // mechakuma

};

//bugbug bogus: but what if make it work!
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
