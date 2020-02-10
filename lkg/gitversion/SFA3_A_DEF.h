#pragma once

#define SFA3_A_NUMUNIT 28
#define SFA3_A_PALSZ 16

#define SFA3_A_IMGSTART 0x3B + 0x11

const UINT16 SFA3_A_IMGREDIR[SFA3_A_NUMUNIT] =
{
	0x00,
	0x27,
	0x1E,
	0x21,
	SFA3_A_IMGSTART + 0x00,
	SFA3_A_IMGSTART + 0x01,
	SFA3_A_IMGSTART + 0x02,
	SFA3_A_IMGSTART + 0x03,
	SFA3_A_IMGSTART + 0x04,
	SFA3_A_IMGSTART + 0x05,
	0x26,
	SFA3_A_IMGSTART + 0x06,
	0x23,
	0x22,
	SFA3_A_IMGSTART + 0x07,
	0x25,
	0x01,
	SFA3_A_IMGSTART + 0x08,
	SFA3_A_IMGSTART + 0x09,
	0x24,
	SFA3_A_IMGSTART + 0x0A,
	SFA3_A_IMGSTART + 0x0B,
	SFA3_A_IMGSTART + 0x0C,
	SFA3_A_IMGSTART + 0x0D,
	SFA3_A_IMGSTART + 0x0E,
	SFA3_A_IMGSTART + 0x0F,
	SFA3_A_IMGSTART + 0x10,
	SFA3_A_IMGSTART + 0x11,

};

const CHAR SFA3_A_UNITDESC[SFA3_A_NUMUNIT][16] = 
{
	"Ryu",
	"Ken",
	"Gouki",
	"Charlie",
	"Chun-Li",
	"Adon",
	"Sodom",
	"Guy",
	"Birdie",
	"Rose",
	"M. Bison",
	"Sagat",
	"Dan",
	"Sakura",
	"Rolento",
	"Dhalsim",
	"Zangief",
	"Gen",
	"Balrog",
	"Cammy",
	"E. Honda",
	"Blanka",
	"R. Mika",
	"Cody",
	"Vega",
	"Karin",
	"Juni",
	"Juli"
	

};