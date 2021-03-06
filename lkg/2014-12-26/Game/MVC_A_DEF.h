#pragma once

#define MVC_A_NUMUNIT 22
#define MVC2_A_PALSZ 16

#define MVC_A_IMGSTART (0x3B + 0x11 + 0x11 + 0x01) //MVC2, then SSF2T, then SFA3, then XMVSF

const UINT32 MVC_A_UNITLOC[MVC_A_NUMUNIT] = 
{
	0x481C4,
	0x48284,
	0x48344,
	0x48404,
	0x48584,
	0x48644,
	0x48704,
	0x487C4,
	0x48884,
	0x48944,
	0x48A04,
	0x48AC4,
	0x48E04,
	0x48F84,
	0x493C4,
	0x49044,
	0x490A4,
	0x49164,
	0x49224,
	0x492E4,
	0x493A4,
	0x4F984
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
	"Alt-Venom",
	"Alt-Hulk",
	"Golden War-Machine",
	"Shadow Lady",
	"Alt-Morrigan",
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
	0x08
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
	0x03,
	0x28




};