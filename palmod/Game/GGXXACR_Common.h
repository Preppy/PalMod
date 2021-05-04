
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
