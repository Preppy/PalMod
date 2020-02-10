#define XMVSF_A_NUMUNIT 19
#define XMVSF_A_PALSZ 16
#define XMVSF_A_IMGSTART (0x3B + 0x11 + 0x11) //MVC2, then SSF2T, then SFA3


const UINT8 XMVSF_A_IMGREDIR[XMVSF_A_NUMUNIT] = 
{
	0x07,
	0x06,
	0x2A,
	0x0A,
	0x28,
	0x2B,
	0x29,
	0x2C,
	XMVSF_A_IMGSTART,
	0x00,
	0x27,
	0x1B,
	0x25,
	0x01,
	0x26,
	0x1E,
	0x21,
	0x24,
	0x3B + 0x11 // Chun Li's image in SFA3

};

const CHAR XMVSF_A_UNITDESC[XMVSF_A_NUMUNIT][16] = 
{
	"Wolverine",
	"Cyclops",
	"Storm",
	"Rogue",
	"Gambit",
	"Sabretooth",
	"Juggernaut",
	"Magneto",
	"Apocalypse",
	"Ryu",
	"Ken",
	"Chun-Li",
	"Dhalsim",
	"Zangief",
	"M. Bison",
	"Gouki",
	"Charlie",
	"Cammy",
	"Chun-Li (SFA)"
};

const UINT32 XMVSF_A_UNITLOC[XMVSF_A_NUMUNIT + 1] =
{
	0x14D7C,
	0x14E3C,
	0x14FBC,
	0x1531C,
	0x153DC, //GAMBIT
	0x1549C,
	0x1559C,
	0x156BC,
	0x157DC,
	0x1589C,
	0x15A1C,
	0x15B9C,
	0x15C5C,
	0x15D5C,
	0x15FDC,
	0x1609C,
	0x1621C,
	0x1639C,
	0x164BC,
	0x1657C,
};