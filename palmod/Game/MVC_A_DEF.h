#pragma once

#define MVC_A_NUMUNIT 23
#define MVC2_A_PALSZ 16

#define MVC_A_IMGSTART (0x3B + 0x11 + 0x11 + 0x01) //MVC2, then SSF2T, then SFA3, then XMVSF

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
	// 0x493C4, // Morrigan.  not the correct loc.
	0x48ec4, // Fixed Morrigan
	0x49044, // Onslaught
	0x490A4, // Alt-Venom
	0x49164, // Alt-Hulk
	0x49224, // GWM
	0x492E4, // Shadow Lady.  This is "shadow lady part 1". IDK what the parts mean, but hey.
	0x4FF64, // Shadow Lady Part 2
	0x493A4, // Lilith
	//0x4F984 : old gambit.  not the correct loc.
	0x484c4 // Gambit
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
	"Gambit"
};

const UINT16 MVC_A_PALAMT[MVC_A_NUMUNIT] = {

	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x05,
	0x03,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06,
	0x06
};

const UINT16 MVC_A_IMGREDIR[MVC_A_NUMUNIT] = {

	0x33,
	0x0B,
	0x0D,
	0x07,
	0x0E,
	0x0C,
	0x1D,
	0x00,
	0x38,
	0x1B,
	0x37,
	0x01,
	0x05,
	0x1C,
	0x03,
	MVC_A_IMGSTART,
	0x0E,
	0x0D,
	0x33,
	0x1B,
	0x1B,
	0x03,
	0x28
};