#pragma once

//Palette 9 is sometimes used for a boss palette for some characters.
//Overall this port is very jank alpha is all over the place, from being 00 instead of FF to not even being constant when it should be.

const std::vector<uint16_t>AquaPlus_S_IMGIDS_USED =
{
	indexAquaPlusSprites_Arawn,         // 0x52
	indexAquaPlusSprites_Chizuru,       // 0x53
	indexAquaPlusSprites_Hakuowlo,      // 0x54
	indexAquaPlusSprites_Karulau,       // 0x55
	indexAquaPlusSprites_Konomi,        // 0x56
	indexAquaPlusSprites_Manaka,        // 0x57
	indexAquaPlusSprites_Morgan,        // 0x58
	indexAquaPlusSprites_Multi,         // 0x59
	indexAquaPlusSprites_Oboro,         // 0x5A
	indexAquaPlusSprites_Riannon,       // 0x5B
	indexAquaPlusSprites_Sasara,        // 0x5C
	indexAquaPlusSprites_Tamaki,        // 0x5D
	indexAquaPlusSprites_Touka,         // 0x5E
	indexAquaPlusSprites_Partner,       // 0x5F
	indexAquaPlusSprites_Unused,        // 0x60
};

const sGame_PaletteDataset AquaPlus_ARAWN_PALETTES[] =
{
	{ L"Default A", 0x11977ed0, 0x11977ed0 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Default B", 0x1197854c, 0x1197854c + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Default C", 0x11978bc8, 0x11978bc8 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Default D", 0x11979244, 0x11979244 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Purple Mist", 0x119798c0, 0x119798c0 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Violet Dazzle", 0x11979f3c, 0x11979f3c + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Dragon Tail", 0x1197a5b8, 0x1197a5b8 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Scarlet Emperor", 0x1197ac34, 0x1197ac34 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Another World Boss", 0x1197b2b0, 0x1197b2b0 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Nightmare", 0x1197b92c, 0x1197b92c + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Holy Edge", 0x1197bfa8, 0x1197bfa8 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Ancient", 0x1197c624, 0x1197c624 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Explode", 0x1197cca0, 0x1197cca0 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Gold Rush", 0x1197d31c, 0x1197d31c + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Frosty Rain", 0x1197d998, 0x1197d998 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Invoked Shadow", 0x1197e014, 0x1197e014 + 0x400, indexAquaPlusSprites_Arawn },
	{ L"Evening Star", 0x1197e690, 0x1197e690 + 0x400, indexAquaPlusSprites_Arawn },
};

const sGame_PaletteDataset AquaPlus_CHIZURU_PALETTES[] =
{
	{ L"Default A", 0x1EC2E236, 0x1EC2E236 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Default B", 0x1EC2E8B2, 0x1EC2E8B2 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Default C", 0x1EC2EF2E, 0x1EC2EF2E + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Default D", 0x1EC2F5AA, 0x1EC2F5AA + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Natsu no Hate", 0x1EC2FC26, 0x1EC2FC26 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Hana Akari", 0x1EC302A2, 0x1EC302A2 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Miyako-Wasure", 0x1EC3091E, 0x1EC3091E + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Akane-Gumo", 0x1EC30F9A, 0x1EC30F9A + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Another World Boss", 0x1EC31616, 0x1EC31616 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Otome-Zakura", 0x1EC31C92, 0x1EC31C92 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Tsuki no Fune", 0x1EC3230E, 0x1EC3230E + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Ama-Yadori", 0x1EC3298A, 0x1EC3298A + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Take-Ochiba", 0x1EC33006, 0x1EC33006 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Kagaribi", 0x1EC33682, 0x1EC33682 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Shiragasane", 0x1EC33CFE, 0x1EC33CFE + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Kogarashi", 0x1EC3437A, 0x1EC3437A + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Fuyu no Taihaku", 0x1EC349F6, 0x1EC349F6 + 0x400, indexAquaPlusSprites_Chizuru },
};

const sGame_PaletteDataset AquaPlus_CHIZURUBLOOD_PALETTES[] =
{
	{ L"Default A", 0x1EC35072, 0x1EC35072 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Default B", 0x1EC356EE, 0x1EC356EE + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Default C", 0x1EC35D6A, 0x1EC35D6A + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Default D", 0x1EC363E6, 0x1EC363E6 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Natsu no Hate", 0x1EC36A62, 0x1EC36A62 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Hana Akari", 0x1EC370DE, 0x1EC370DE + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Miyako-Wasure", 0x1EC3775A, 0x1EC3775A + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Akane-Gumo", 0x1EC37DD6, 0x1EC37DD6 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Another World Boss", 0x1EC38452, 0x1EC38452 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Otome-Zakura", 0x1EC38ACE, 0x1EC38ACE + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Tsuki no Fune", 0x1EC3914A, 0x1EC3914A + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Ama-Yadori", 0x1EC397C6, 0x1EC397C6 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Take-Ochiba", 0x1EC39E42, 0x1EC39E42 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Kagaribi", 0x1EC3A4BE, 0x1EC3A4BE + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Shiragasane", 0x1EC3AB3A, 0x1EC3AB3A + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Kogarashi", 0x1EC3B1B6, 0x1EC3B1B6 + 0x400, indexAquaPlusSprites_Chizuru },
	{ L"Fuyu no Taihaku", 0x1EC3B832, 0x1EC3B832 + 0x400, indexAquaPlusSprites_Chizuru },
};

const sGame_PaletteDataset AquaPlus_HAKUOWLO_PALETTES[] =
{
	{ L"Default A", 0x968536E, 0x968536E + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Default B", 0x96859EA, 0x96859EA + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Default C", 0x9686066, 0x9686066 + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Default D", 0x96866E2, 0x96866E2 + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Sansen Soumoku", 0x9686D5E, 0x9686D5E + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Kennin Fubatsu", 0x96873DA, 0x96873DA + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Unchuu Hakkaku", 0x9687A56, 0x9687A56 + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Kien Banjou", 0x96880D2, 0x96880D2 + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Another World Boss", 0x968874E, 0x968874E + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Shiden Issen", 0x9688DCA, 0x9688DCA + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Shippu Jinrai", 0x9689446, 0x9689446 + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Kikuyuu Kouka", 0x9689AC2, 0x9689AC2 + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Eimei Kakan", 0x968A13E, 0x968A13E + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Suiten Houfutsu", 0x968A7BA, 0x968A7BA + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Shitsuboku Gouken", 0x968AE36, 0x968AE36 + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Ouka Ranman", 0x968B4B2, 0x968B4B2 + 0x400, indexAquaPlusSprites_Hakuowlo },
	{ L"Denkou Sekka", 0x968BB2E, 0x968BB2E + 0x400, indexAquaPlusSprites_Hakuowlo },
};

const sGame_PaletteDataset AquaPlus_HAKUOWLOEXTRAS_PALETTES[] =
{
	{ L"Default A", 0xB75195A, 0xB75195A + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Default B", 0xB751FD6, 0xB751FD6 + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Default C", 0xB752652, 0xB752652 + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Default D", 0xB752CCE, 0xB752CCE + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Sansen Soumoku", 0xB75334A, 0xB75334A + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Kennin Fubatsu", 0xB7539C6, 0xB7539C6 + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Unchuu Hakkaku", 0xB754042, 0xB754042 + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Kien Banjou", 0xB7546BE, 0xB7546BE + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Another World Boss", 0xB754D3A, 0xB754D3A + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Shiden Issen", 0xB7553B6, 0xB7553B6 + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Shippu Jinrai", 0xB755A32, 0xB755A32 + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Kikuyuu Kouka", 0xB7560AE, 0xB7560AE + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Eimei Kakan", 0xB75672A, 0xB75672A + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Suiten Houfutsu", 0xB756DA6, 0xB756DA6 + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Shitsuboku Gouken", 0xB757422, 0xB757422 + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Ouka Ranman", 0xB757A9E, 0xB757A9E + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
	{ L"Denkou Sekka", 0xB75811A, 0xB75811A + 0x400, indexAquaPlusSprites_Hakuowlo, 0x01 },
};

const sGame_PaletteDataset AquaPlus_KARULAU_PALETTES[] =
{
	{ L"Default A", 0xF667ED0, 0xF667ED0 + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Default B", 0xF668536, 0xF668536 + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Default C", 0xF668BAA, 0xF668BAA + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Default D", 0xF66921E, 0xF66921E + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Slithering Snake", 0xF669892, 0xF669892 + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Butterfly Dance", 0xF669F06, 0xF669F06 + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Tiger and Wolf Howl", 0xF66A57A, 0xF66A57A + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Scorching Suzaku", 0xF66ABEE, 0xF66ABEE + 0x400, indexAquaPlusSprites_Karulau },
	//{ L"Unused", 0xF66B262, 0xF66B262 + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Kirin Horn", 0xF66B8C8, 0xF66B8C8 + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Black Panther Eye", 0xF66BF2E, 0xF66BF2E + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Soaring Seiryu", 0xF66C594, 0xF66C594 + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Snowfield Rabbit", 0xF66CBFA, 0xF66CBFA + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Byakko Fang", 0xF66D260, 0xF66D260 + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Grassland Lion", 0xF66D8C6, 0xF66D8C6 + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Nocturne Raven", 0xF66DF2C, 0xF66DF2C + 0x400, indexAquaPlusSprites_Karulau },
	{ L"Mayfly Wing", 0xF66E592, 0xF66E592 + 0x400, indexAquaPlusSprites_Karulau },
};

const sGame_PaletteDataset AquaPlus_KONOMI_PALETTES[] =
{
	{ L"Default A", 0x8366030, 0x8366030 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Default B", 0x83666AC, 0x83666AC + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Default C", 0x8366D28, 0x8366D28 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Default D", 0x83673A4, 0x83673A4 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Caramel Macchiato", 0x8367A20, 0x8367A20 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Squid Ink Pasta", 0x836809C, 0x836809C + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Marble Chocolate", 0x8368718, 0x8368718 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Sesame Pudding", 0x8368D94, 0x8368D94 + 0x400, indexAquaPlusSprites_Konomi },
	//{ L"Unused", 0x8369410, 0x8369410 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Soda Jelly", 0x8369A8C, 0x8369A8C + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Chocolate Orange", 0x836A108, 0x836A108 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Grape Juice", 0x836A784, 0x836A784 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Mint Sherbet", 0x836AE00, 0x836AE00 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"White Marshmallow", 0x836B47C, 0x836B47C + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Lemon Squash", 0x836BAF8, 0x836BAF8 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Colorful Candy", 0x836C174, 0x836C174 + 0x400, indexAquaPlusSprites_Konomi },
	{ L"Spicy Curry", 0x836C7F0, 0x836C7F0 + 0x400, indexAquaPlusSprites_Konomi },
};

const sGame_PaletteDataset AquaPlus_KONOMIEXTRAS_PALETTES[] =
{
	{ L"Default A", 0x8CD1290, 0x8CD1290 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Default B", 0x8CD190C, 0x8CD190C + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Default C", 0x8CD1F88, 0x8CD1F88 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Default D", 0x8CD2604, 0x8CD2604 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Caramel Macchiato", 0x8CD2C80, 0x8CD2C80 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Squid Ink Pasta", 0x8CD32FC, 0x8CD32FC + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Marble Chocolate", 0x8CD3978, 0x8CD3978 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Sesame Pudding", 0x8CD3FF4, 0x8CD3FF4 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	//{ L"Unused", 0x8CD4670, 0x8CD4670 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Soda Jelly", 0x8CD4CEC, 0x8CD4CEC + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Chocolate Orange", 0x8CD5368, 0x8CD5368 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Grape Juice", 0x8CD59E4, 0x8CD59E4 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Mint Sherbet", 0x8CD6060, 0x8CD6060 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"White Marshmallow", 0x8CD66DC, 0x8CD66DC + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Lemon Squash", 0x8CD6D58, 0x8CD6D58 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Colorful Candy", 0x8CD73D4, 0x8CD73D4 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
	{ L"Spicy Curry", 0x8CD7A50, 0x8CD7A50 + 0x400, indexAquaPlusSprites_Konomi, 0x01 },
};

//Manaka is odd normally palette 9 is unused but for her it's palette 17.
const sGame_PaletteDataset AquaPlus_MANAKA_PALETTES[] =
{
	{ L"Default A", 0x8CFAA9E, 0x8CFAA9E + 0x400, indexAquaPlusSprites_Manaka },
	{ L"Default B", 0x8CFB11A, 0x8CFB11A + 0x400, indexAquaPlusSprites_Manaka },
	{ L"Default C", 0x8CFB796, 0x8CFB796 + 0x400, indexAquaPlusSprites_Manaka },
	{ L"Default D", 0x8CFBE12, 0x8CFBE12 + 0x400, indexAquaPlusSprites_Manaka },
	{ L"The Nutcracker", 0x8CFC48E, 0x8CFC48E + 0x400, indexAquaPlusSprites_Manaka },
	{ L"The Fox and the Grapes", 0x8CFCB0A, 0x8CFCB0A + 0x400, indexAquaPlusSprites_Manaka },
	{ L"Milky Way Railroad", 0x8CFD186, 0x8CFD186 + 0x400, indexAquaPlusSprites_Manaka },
	{ L"The Red Shoes", 0x8CFD802, 0x8CFD802 + 0x400, indexAquaPlusSprites_Manaka },
	{ L"The Secret Garden", 0x8CFDE7E, 0x8CFDE7E + 0x400, indexAquaPlusSprites_Manaka },
	{ L"The Blue Bird", 0x8CFE4FA, 0x8CFE4FA + 0x400, indexAquaPlusSprites_Manaka },
	{ L"The Seven Ravens", 0x8CFEB76, 0x8CFEB76 + 0x400, indexAquaPlusSprites_Manaka },
	{ L"The Star Money", 0x8CFF1F2, 0x8CFF1F2 + 0x400, indexAquaPlusSprites_Manaka },
	{ L"Thumbelina", 0x8CFF86E, 0x8CFF86E + 0x400, indexAquaPlusSprites_Manaka },
	{ L"The Bamboo Cutter", 0x8CFFEEA, 0x8CFFEEA + 0x400, indexAquaPlusSprites_Manaka },
	{ L"The Snow Queen", 0x8D00566, 0x8D00566 + 0x400, indexAquaPlusSprites_Manaka },
	{ L"Red Riding Hood", 0x8D00BE2, 0x8D00BE2 + 0x400, indexAquaPlusSprites_Manaka },
	//{ L"Unused", 0x8D0125E, 0x8D0125E + 0x400, indexAquaPlusSprites_Manaka },
};

const sGame_PaletteDataset AquaPlus_MORGAN_PALETTES[] =
{
	{ L"Default A", 0x16D0BEF4, 0x16D0BEF4 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Default B", 0x16D0C570, 0x16D0C570 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Default C", 0x16D0CBEC, 0x16D0CBEC + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Default D", 0x16D0D268, 0x16D0D268 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Grape", 0x16D0D8E4, 0x16D0D8E4 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Campanula", 0x16D0DF60, 0x16D0DF60 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Walnut", 0x16D0E5DC, 0x16D0E5DC + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Poinsettia", 0x16D0EC58, 0x16D0EC58 + 0x400, indexAquaPlusSprites_Morgan },
	//{ L"Unused", 0x16D0F2D4, 0x16D0F2D4 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Felicia", 0x16D0F950, 0x16D0F950 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Jasmine", 0x16D0FFCC, 0x16D0FFCC + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Blackberry", 0x16D10648, 0x16D10648 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Chestnut", 0x16D10CC4, 0x16D10CC4 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Metasequoia", 0x16D11340, 0x16D11340 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Mandarin", 0x16D119BC, 0x16D119BC + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Maple", 0x16D12038, 0x16D12038 + 0x400, indexAquaPlusSprites_Morgan },
	{ L"Lilac", 0x16D126B4, 0x16D126B4 + 0x400, indexAquaPlusSprites_Morgan },
};

const sGame_PaletteDataset AquaPlus_MULTI_PALETTES[] =
{
	{ L"Default A", 0x910C1E2, 0x910C1E2 + 0x400, indexAquaPlusSprites_Multi },
	{ L"Default B", 0x910C85E, 0x910C85E + 0x400, indexAquaPlusSprites_Multi },
	{ L"Default C", 0x910CEDA, 0x910CEDA + 0x400, indexAquaPlusSprites_Multi },
	{ L"Default D", 0x910D556, 0x910D556 + 0x400, indexAquaPlusSprites_Multi },
	{ L"Fresh Sheets", 0x910DBD2, 0x910DBD2 + 0x400, indexAquaPlusSprites_Multi },
	{ L"Windowside Ivy", 0x910E24E, 0x910E24E + 0x400, indexAquaPlusSprites_Multi },
	{ L"Yellow Flowerpot", 0x910E8CA, 0x910E8CA + 0x400, indexAquaPlusSprites_Multi },
	{ L"Red Post", 0x910EF46, 0x910EF46 + 0x400, indexAquaPlusSprites_Multi },
	//{ L"Unused", 0x910F5C2, 0x910F5C2 + 0x400, indexAquaPlusSprites_Multi },
	{ L"Garden Hydrangea", 0x910FC3E, 0x910FC3E + 0x400, indexAquaPlusSprites_Multi },
	{ L"3 O'Clock Tea", 0x91102BA, 0x91102BA + 0x400, indexAquaPlusSprites_Multi },
	{ L"Persian Rug", 0x9110936, 0x9110936 + 0x400, indexAquaPlusSprites_Multi },
	{ L"Black Bookshelf", 0x9110FB2, 0x9110FB2 + 0x400, indexAquaPlusSprites_Multi },
	{ L"Sky Blue Terrace", 0x911162E, 0x911162E + 0x400, indexAquaPlusSprites_Multi },
	{ L"Rose Cushion", 0x9111CAA, 0x9111CAA + 0x400, indexAquaPlusSprites_Multi },
	{ L"Nighttime Curtain", 0x9112326, 0x9112326 + 0x400, indexAquaPlusSprites_Multi },
	{ L"Orange Toybox", 0x91129A2, 0x91129A2 + 0x400, indexAquaPlusSprites_Multi },
};

const sGame_PaletteDataset AquaPlus_MULTIBROOM_PALETTES[] =
{
	{ L"Default A", 0x9569032, 0x9569032 + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Default B", 0x956968A, 0x956968A + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Default C", 0x9569CE2, 0x9569CE2 + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Default D", 0x956A33A, 0x956A33A + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Fresh Sheets", 0x956A992, 0x956A992 + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Windowside Ivy", 0x956AFEA, 0x956AFEA + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Yellow Flowerpot", 0x956B642, 0x956B642 + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Red Post", 0x956BC9A, 0x956BC9A + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	//{ L"Unused", 0x956C2F2, 0x956C2F2 + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Garden Hydrangea", 0x956C94A, 0x956C94A + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"3 O'Clock Tea", 0x956CFA2, 0x956CFA2 + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Persian Rug", 0x956D5FA, 0x956D5FA + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Black Bookshelf", 0x956DC52, 0x956DC52 + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Sky Blue Terrace", 0x956E2AA, 0x956E2AA + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Rose Cushion", 0x956E902, 0x956E902 + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Nighttime Curtain", 0x956EF5A, 0x956EF5A + 0x400, indexAquaPlusSprites_Multi, 0x01 },
	{ L"Orange Toybox", 0x956F5B2, 0x956F5B2 + 0x400, indexAquaPlusSprites_Multi, 0x01 },
};

const sGame_PaletteDataset AquaPlus_OBORO_PALETTES[] =
{
	{ L"Default A", 0x1ABB55A6, 0x1ABB55A6 + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Default B", 0x1ABB5C22, 0x1ABB5C22 + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Default C", 0x1ABB629E, 0x1ABB629E + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Default D", 0x1ABB691A, 0x1ABB691A + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Taizan", 0x1ABB6F96, 0x1ABB6F96 + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Fubuki", 0x1ABB7612, 0x1ABB7612 + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Izayoi", 0x1ABB7C8E, 0x1ABB7C8E + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Karyu", 0x1ABB830A, 0x1ABB830A + 0x400, indexAquaPlusSprites_Oboro },
	//{ L"Unused", 0x1ABB8986, 0x1ABB8986 + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Saiun", 0x1ABB9002, 0x1ABB9002 + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Shiranui", 0x1ABB967E, 0x1ABB967E + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Entei", 0x1ABB9CFA, 0x1ABB9CFA + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Raiden", 0x1ABBA376, 0x1ABBA376 + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Unka", 0x1ABBA9F2, 0x1ABBA9F2 + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Sougetsu", 0x1ABBB06E, 0x1ABBB06E + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Hien", 0x1ABBB6EA, 0x1ABBB6EA + 0x400, indexAquaPlusSprites_Oboro },
	{ L"Hotarubi", 0x1ABBBD66, 0x1ABBBD66 + 0x400, indexAquaPlusSprites_Oboro },
};

const sGame_PaletteDataset AquaPlus_OBOROEXTRAS_PALETTES[] =
{
	{ L"Default A", 0x1EB8794C, 0x1EB8794C + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Default B", 0x1EB87FC8, 0x1EB87FC8 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Default C", 0x1EB88644, 0x1EB88644 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Default D", 0x1EB88CC0, 0x1EB88CC0 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Taizan", 0x1EB8933C, 0x1EB8933C + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Fubuki", 0x1EB899B8, 0x1EB899B8 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Izayoi", 0x1EB8A034, 0x1EB8A034 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Karyu", 0x1EB8A6B0, 0x1EB8A6B0 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	//{ L"Unused", 0x1EB8AD2C, 0x1EB8AD2C + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Saiun", 0x1EB8B3A8, 0x1EB8B3A8 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Shiranui", 0x1EB8BA24, 0x1EB8BA24 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Entei", 0x1EB8C0A0, 0x1EB8C0A0 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Raiden", 0x1EB8C71C, 0x1EB8C71C + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Unka", 0x1EB8CD98, 0x1EB8CD98 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Sougetsu", 0x1EB8D414, 0x1EB8D414 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Hien", 0x1EB8DA90, 0x1EB8DA90 + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
	{ L"Hotarubi", 0x1EB8E10C, 0x1EB8E10C + 0x400, indexAquaPlusSprites_Oboro, 0x01 },
};

const sGame_PaletteDataset AquaPlus_RIANNON_PALETTES[] =
{
	{ L"Default A", 0x14EDB4D8, 0x14EDB4D8 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Default B", 0x14EDBB54, 0x14EDBB54 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Default C", 0x14EDC1D0, 0x14EDC1D0 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Default D", 0x14EDC84C, 0x14EDC84C + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Amber Cloud", 0x14EDCEC8, 0x14EDCEC8 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Rainy Sky", 0x14EDD544, 0x14EDD544 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Advent of Night", 0x14EDDBC0, 0x14EDDBC0 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Solar Wind", 0x14EDE23C, 0x14EDE23C + 0x400, indexAquaPlusSprites_Riannon },
	//{ L"Unused", 0x14EDE8B8, 0x14EDE8B8 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Golden Spica", 0x14EDEF34, 0x14EDEF34 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Pink Meteor", 0x14EDF5B0, 0x14EDF5B0 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Witch's Comet", 0x14EDFC2C, 0x14EDFC2C + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Moonglow", 0x14EE02A8, 0x14EE02A8 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Green Earth", 0x14EE0924, 0x14EE0924 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Red Sky Venus", 0x14EE0FA0, 0x14EE0FA0 + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Dark Pluto", 0x14EE161C, 0x14EE161C + 0x400, indexAquaPlusSprites_Riannon },
	{ L"Winter Polaris", 0x14EE1C98, 0x14EE1C98 + 0x400, indexAquaPlusSprites_Riannon },
};

const sGame_PaletteDataset AquaPlus_SASARA_PALETTES[] =
{
	{ L"Default A", 0x17802A54, 0x17802A54 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Default B", 0x178030D0, 0x178030D0 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Default C", 0x1780374C, 0x1780374C + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Default D", 0x17803DC8, 0x17803DC8 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Flower Hat Jelly", 0x17804444, 0x17804444 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Chromodoris Willani", 0x17804AC0, 0x17804AC0 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Blue-Spotted Salamander", 0x1780513C, 0x1780513C + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Ceratosoma Trilobatum", 0x178057B8, 0x178057B8 + 0x400, indexAquaPlusSprites_Sasara },
	//{ L"Unused", 0x17805E34, 0x17805E34 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Golden Mantella", 0x178064B0, 0x178064B0 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Cyanea Nozakii", 0x17806B2C, 0x17806B2C + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Sagaminopteron Ornatum", 0x178071A8, 0x178071A8 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Black Sea Nettle", 0x17807824, 0x17807824 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Goniobranchus Sinensis", 0x17807EA0, 0x17807EA0 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Moriao Gaeru", 0x1780851C, 0x1780851C + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Hypselodoris Kaname", 0x17808B98, 0x17808B98 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Red Salamander", 0x17809214, 0x17809214 + 0x400, indexAquaPlusSprites_Sasara },
};

const sGame_PaletteDataset AquaPlus_SASARAEFFECT_PALETTES[] =
{
	{ L"Default A", 0x1AB99E84, 0x1AB99E84 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Default B", 0x1AB9A3AA, 0x1AB9A3AA + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Default C", 0x1AB9A8D0, 0x1AB9A8D0 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Default D", 0x1AB9ADF6, 0x1AB9ADF6 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Flower Hat Jelly", 0x1AB9B31C, 0x1AB9B31C + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Chromodoris Willani", 0x1AB9B842, 0x1AB9B842 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Blue-Spotted Salamander", 0x1AB9BD68, 0x1AB9BD68 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Ceratosoma Trilobatum", 0x1AB9C28E, 0x1AB9C28E + 0x400, indexAquaPlusSprites_Sasara },
	//{ L"Unused", 0x1AB9C7B4, 0x1AB9C7B4 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Golden Mantella", 0x1AB9CCDA, 0x1AB9CCDA + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Cyanea Nozakii", 0x1AB9D200, 0x1AB9D200 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Sagaminopteron Ornatum", 0x1AB9D726, 0x1AB9D726 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Black Sea Nettle", 0x1AB9DC4C, 0x1AB9DC4C + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Goniobranchus Sinensis", 0x1AB9E172, 0x1AB9E172 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Moriao Gaeru", 0x1AB9E698, 0x1AB9E698 + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Hypselodoris Kaname", 0x1AB9EBBE, 0x1AB9EBBE + 0x400, indexAquaPlusSprites_Sasara },
	{ L"Red Salamander", 0x1AB9F0E4, 0x1AB9F0E4 + 0x400, indexAquaPlusSprites_Sasara },
};

const sGame_PaletteDataset AquaPlus_SASARAFROG_PALETTES[] =
{
	{ L"Default A", 0x1ABAC330, 0x1ABAC330 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Default B", 0x1ABAC9AC, 0x1ABAC9AC + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Default C", 0x1ABAD028, 0x1ABAD028 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Default D", 0x1ABAD6A4, 0x1ABAD6A4 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Flower Hat Jelly", 0x1ABADD20, 0x1ABADD20 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Chromodoris Willani", 0x1ABAE39C, 0x1ABAE39C + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Blue-Spotted Salamander", 0x1ABAEA18, 0x1ABAEA18 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Ceratosoma Trilobatum", 0x1ABAF094, 0x1ABAF094 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	//{ L"Unused", 0x1ABAF710, 0x1ABAF710 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Golden Mantella", 0x1ABAFD8C, 0x1ABAFD8C + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Cyanea Nozakii", 0x1ABB0408, 0x1ABB0408 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Sagaminopteron Ornatum", 0x1ABB0A84, 0x1ABB0A84 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Black Sea Nettle", 0x1ABB1100, 0x1ABB1100 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Goniobranchus Sinensis", 0x1ABB177C, 0x1ABB177C + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Moriao Gaeru", 0x1ABB1DF8, 0x1ABB1DF8 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Hypselodoris Kaname", 0x1ABB2474, 0x1ABB2474 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
	{ L"Red Salamander", 0x1ABB2AF0, 0x1ABB2AF0 + 0x400, indexAquaPlusSprites_Sasara, 0x01 },
};

const sGame_PaletteDataset AquaPlus_TAMAKI_PALETTES[] =
{
	{ L"Default A", 0x76D0828, 0x76D0828 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Default B", 0x76d0ea4, 0x76d0ea4 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Default C", 0x76d1520, 0x76d1520 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Default D", 0x76d1b9c, 0x76d1b9c + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Mellow Green", 0x76d2218, 0x76d2218 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Summer Vacation", 0x76d2894, 0x76d2894 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Marine Splash", 0x76d2f10, 0x76d2f10 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Passion Rose", 0x76d358c, 0x76d358c + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Another World Boss", 0x76d3c08, 0x76d3c08 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Aurora Lights", 0x76d4284, 0x76d4284 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Tangerine Flow", 0x76d4900, 0x76d4900 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Snow White", 0x76d4f7c, 0x76d4f7c + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Baby Cosmos", 0x76d55f8, 0x76d55f8 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Preppy Othello", 0x76d5c74, 0x76d5c74 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Sweet Honey", 0x76d62f0, 0x76d62f0 + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Night Party", 0x76d696c, 0x76d696c + 0x400, indexAquaPlusSprites_Tamaki },
	{ L"Bamboo Grass", 0x76d6fe8, 0x76d6fe8 + 0x400, indexAquaPlusSprites_Tamaki },
};

const sGame_PaletteDataset AquaPlus_TAMAKIDOG_PALETTES[] =
{
	{ L"Default A", 0x8354C7A, 0x8354C7A + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Default B", 0x83552F6, 0x83552F6 + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Default C", 0x8355972, 0x8355972 + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Default D", 0x8355FEE, 0x8355FEE + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Mellow Green", 0x835666A, 0x835666A + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Summer Vacation", 0x8356CE6, 0x8356CE6 + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Marine Splash", 0x8357362, 0x8357362 + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Passion Rose", 0x83579DE, 0x83579DE + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Another World Boss", 0x835805A, 0x835805A + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Shared with all after Passion Rose", 0x83586D6, 0x83586D6 + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Shared with all after Passion Rose", 0x835AA9C, 0x835AA9C + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Shared with all after Passion Rose", 0x835CDAA, 0x835CDAA + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Shared with all after Passion Rose", 0x835F422, 0x835F422 + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Shared with all after Passion Rose", 0x8361742, 0x8361742 + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	{ L"Shared with all after Passion Rose", 0x8363A76, 0x8363A76 + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },

	//For some reason this version does not have 17 palettes for this and they're all shared after Passion Rose/Palette 8
	//{ L"Night Party", 0x8CD1290, 0x8CD1290 + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
	//{ L"Bamboo Grass", 0x8CD190C, 0x8CD190C + 0x400, indexAquaPlusSprites_Tamaki, 0x01 },
};

const sGame_PaletteDataset AquaPlus_TOUKA_PALETTES[] =
{
	{ L"Default A", 0xB887BF6, 0xB887BF6 + 0x400, indexAquaPlusSprites_Touka },
	{ L"Default B", 0xB888272, 0xB888272 + 0x400, indexAquaPlusSprites_Touka },
	{ L"Default C", 0xB8888EE, 0xB8888EE + 0x400, indexAquaPlusSprites_Touka },
	{ L"Default D", 0xB888F6A, 0xB888F6A + 0x400, indexAquaPlusSprites_Touka },
	{ L"Renge", 0xB8895E6, 0xB8895E6 + 0x400, indexAquaPlusSprites_Touka },
	{ L"Rindo", 0xB889C62, 0xB889C62 + 0x400, indexAquaPlusSprites_Touka },
	{ L"Yamabuki", 0xB88A2DE, 0xB88A2DE + 0x400, indexAquaPlusSprites_Touka },
	{ L"Higanbana", 0xB88A95A, 0xB88A95A + 0x400, indexAquaPlusSprites_Touka },
	//{ L"Unused", 0xB88AFD6, 0xB88AFD6 + 0x400, indexAquaPlusSprites_Touka },
	{ L"Hazakura", 0xB88B652, 0xB88B652 + 0x400, indexAquaPlusSprites_Touka },
	{ L"Kinpoge", 0xB88BCCE, 0xB88BCCE + 0x400, indexAquaPlusSprites_Touka },
	{ L"Sekka", 0xB88C34A, 0xB88C34A + 0x400, indexAquaPlusSprites_Touka },
	{ L"Nadeshiko", 0xB88C9C6, 0xB88C9C6 + 0x400, indexAquaPlusSprites_Touka },
	{ L"Kikyo", 0xB88D042, 0xB88D042 + 0x400, indexAquaPlusSprites_Touka },
	{ L"Mokuren", 0xB88D6BE, 0xB88D6BE + 0x400, indexAquaPlusSprites_Touka },
	{ L"Botan", 0xB88DD3A, 0xB88DD3A + 0x400, indexAquaPlusSprites_Touka },
	{ L"Tsuyukusa", 0xB88E3B6, 0xB88E3B6 + 0x400, indexAquaPlusSprites_Touka },
};

//Partners

const sGame_PaletteDataset AquaPlus_CAMYU_PALETTES[] =
{
	{ L"Default A", 0x26A2E79C, 0x26A2E79C + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Default B", 0x26A2EE18, 0x26A2EE18 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Default C", 0x26A2F494, 0x26A2F494 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Default D", 0x26A2FB10, 0x26A2FB10 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Snow Cap", 0x26A3018C, 0x26A3018C + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Sunflower", 0x26A30808, 0x26A30808 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Withered Garden", 0x26A30E84, 0x26A30E84 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Deep Scarlet", 0x26A31500, 0x26A31500 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	//{ L"Unused", 0x26A31B7C, 0x26A31B7C + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"White-Green", 0x26A321F8, 0x26A321F8 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Green Bamboo", 0x26A32874, 0x26A32874 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Cobalt Blue", 0x26A32EF0, 0x26A32EF0 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Lapis Lazuli", 0x26A3356C, 0x26A3356C + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Sappanwood", 0x26A33BE8, 0x26A33BE8 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Coral", 0x26A34264, 0x26A34264 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Orpiment", 0x26A348E0, 0x26A348E0 + 0x400, indexAquaPlusSprites_Partner, 0x01 },
	{ L"Bluish Purple", 0x26A34F5C, 0x26A34F5C + 0x400, indexAquaPlusSprites_Partner, 0x01 },
};

const sGame_PaletteDataset AquaPlus_LLYR_PALETTES[] =
{
	{ L"Default A", 0x28B927B8, 0x28B927B8 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Default B", 0x28B92E34, 0x28B92E34 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Default C", 0x28B934B0, 0x28B934B0 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Default D", 0x28B93B2C, 0x28B93B2C + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Swordfish", 0x28B941A8, 0x28B941A8 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Queen Conch", 0x28B94824, 0x28B94824 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Orca", 0x28B94EA0, 0x28B94EA0 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Octopus", 0x28B9551C, 0x28B9551C + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	//{ L"Unused", 0x28B95B98, 0x28B95B98 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Sea Anemone", 0x28B96214, 0x28B96214 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Clownfish", 0x28B96890, 0x28B96890 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Clione", 0x28B96F0C, 0x28B96F0C + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Black Ghost", 0x28B97588, 0x28B97588 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Nautilus", 0x28B97C04, 0x28B97C04 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Dolphin", 0x28B98280, 0x28B98280 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Green Turtle", 0x28B988FC, 0x28B988FC + 0x400, indexAquaPlusSprites_Partner, 0x02 },
	{ L"Pirarucu", 0x28B98F78, 0x28B98F78 + 0x400, indexAquaPlusSprites_Partner, 0x02 },
};

const sGame_PaletteDataset AquaPlus_MARYAN_PALETTES[] =
{
	{ L"Default A", 0x25D0DFC8, 0x25D0DFC8 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Default B", 0x25D0E644, 0x25D0E644 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Default C", 0x25D0ECC0, 0x25D0ECC0 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Default D", 0x25D0F33C, 0x25D0F33C + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Spring Princess in Love", 0x25D0F9B8, 0x25D0F9B8 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Sentimental Cocoa", 0x25D10034, 0x25D10034 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Charming Cosmic Lavender", 0x25D106B0, 0x25D106B0 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Devilish Glamorous Tiger", 0x25D10D2C, 0x25D10D2C + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	//{ L"Unused", 0x25D113A8, 0x25D113A8 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Shining Sparkling Silver", 0x25D11A24, 0x25D11A24 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Romantic Gold of Glory", 0x25D120A0, 0x25D120A0 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Deep Viridian of Sorrow", 0x25D1271C, 0x25D1271C + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Beautiful Empress of Summer", 0x25D12D98, 0x25D12D98 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Infinite Ultimate Black", 0x25D13414, 0x25D13414 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Immortal Eternal Blue", 0x25D13A90, 0x25D13A90 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Red Sunburst of Justice", 0x25D1410C, 0x25D1410C + 0x400, indexAquaPlusSprites_Partner, 0x03 },
	{ L"Dreamy Miracle Prism", 0x25D14788, 0x25D14788 + 0x400, indexAquaPlusSprites_Partner, 0x03 },
};

const sGame_PaletteDataset AquaPlus_MIZUKI_PALETTES[] =
{
	{ L"Default A", 0x27E18062, 0x27E18062 + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Default B", 0x27E186DE, 0x27E186DE + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Default C", 0x27E18D5A, 0x27E18D5A + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Default D", 0x27E193D6, 0x27E193D6 + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Simple Monotone", 0x27E19A52, 0x27E19A52 + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Autumn Café", 0x27E1A0CE, 0x27E1A0CE + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Street Khaki", 0x27E1A74A, 0x27E1A74A + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Mannish Black", 0x27E1ADC6, 0x27E1ADC6 + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	//{ L"Unused", 0x27E1B442, 0x27E1B442 + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Resort Marine", 0x27E1BABE, 0x27E1BABE + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Sunny Day", 0x27E1C13A, 0x27E1C13A + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Vitamin Yellow", 0x27E1C7B6, 0x27E1C7B6 + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Indigo Blue", 0x27E1CE32, 0x27E1CE32 + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Mysterious Purple", 0x27E1D4AE, 0x27E1D4AE + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Girly Pink", 0x27E1DB2A, 0x27E1DB2A + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Happy Mint", 0x27E1E1A6, 0x27E1E1A6 + 0x400, indexAquaPlusSprites_Partner, 0x04 },
	{ L"Dolly Blonde", 0x27E1E822, 0x27E1E822 + 0x400, indexAquaPlusSprites_Partner, 0x04 },
};

const sGame_PaletteDataset AquaPlus_OCTAVIA_PALETTES[] =
{
	{ L"Default A", 0x2710BB46, 0x2710BB46 + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Default B", 0x2710C1C2, 0x2710C1C2 + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Default C", 0x2710C83E, 0x2710C83E + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Default D", 0x2710CEBA, 0x2710CEBA + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Sweet Cherry", 0x2710D536, 0x2710D536 + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Harvest", 0x2710DBB2, 0x2710DBB2 + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Iron Maiden", 0x2710E22E, 0x2710E22E + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Vermillion", 0x2710E8AA, 0x2710E8AA + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	//{ L"Unused", 0x2710EF26, 0x2710EF26 + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Crescent Moon", 0x2710F5A2, 0x2710F5A2 + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Grace Purple", 0x2710FC1E, 0x2710FC1E + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Nostalgia", 0x2711029A, 0x2711029A + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Magnificent", 0x27110916, 0x27110916 + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Noble Jade", 0x27110F92, 0x27110F92 + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Azure Sky", 0x2711160E, 0x2711160E + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Unicorn", 0x27111C8A, 0x27111C8A + 0x400, indexAquaPlusSprites_Partner, 0x05 },
	{ L"Phoenix", 0x27112306, 0x27112306 + 0x400, indexAquaPlusSprites_Partner, 0x05 },
};

const sGame_PaletteDataset AquaPlus_RATHLY_PALETTES[] =
{
	{ L"Default A", 0x2761CC54, 0x2761CC54 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Default B", 0x2761D2D0, 0x2761D2D0 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Default C", 0x2761D94C, 0x2761D94C + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Default D", 0x2761DFC8, 0x2761DFC8 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Malachite Olive", 0x2761E644, 0x2761E644 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Calcite Orange", 0x2761ECC0, 0x2761ECC0 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Crystal White", 0x2761F33C, 0x2761F33C + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Azurite Dark", 0x2761F9B8, 0x2761F9B8 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	//{ L"Unused", 0x27620034, 0x27620034 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Tanzanite Blue", 0x276206B0, 0x276206B0 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Rubellite Red", 0x27620D2C, 0x27620D2C + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Chondrite Brown", 0x276213A8, 0x276213A8 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Tremolite Green", 0x27621A24, 0x27621A24 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Celestite Sky", 0x276220A0, 0x276220A0 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Sulfur Yellow", 0x2762271C, 0x2762271C + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Amethyst Purple", 0x27622D98, 0x27622D98 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
	{ L"Crocoite Tropical", 0x27623414, 0x27623414 + 0x400, indexAquaPlusSprites_Partner, 0x06 },
};

const sGame_PaletteDataset AquaPlus_RINA_PALETTES[] =
{
	{ L"Default A", 0x27AFB5F0, 0x27AFB5F0 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Default B", 0x27AFBC6C, 0x27AFBC6C + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Default C", 0x27AFC2E8, 0x27AFC2E8 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Default D", 0x27AFC964, 0x27AFC964 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Midsummer Love Letter", 0x27AFCFE0, 0x27AFCFE0 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Devilish Complex", 0x27AFD65C, 0x27AFD65C + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Four-Leaf Clover", 0x27AFDCD8, 0x27AFDCD8 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Flower of Passion", 0x27AFE354, 0x27AFE354 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	//{ L"Unused", 0x27AFE9D0, 0x27AFE9D0 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Spring Breeze Romance", 0x27AFF04C, 0x27AFF04C + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Summertime Love", 0x27AFF6C8, 0x27AFF6C8 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Seashore Twilight", 0x27AFFD44, 0x27AFFD44 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Heliodor Eyes", 0x27B003C0, 0x27B003C0 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Fluorite Melody", 0x27B00A3C, 0x27B00A3C + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Midnight Live", 0x27B010B8, 0x27B010B8 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Christmas Carol", 0x27B01734, 0x27B01734 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
	{ L"Winter Song", 0x27B01DB0, 0x27B01DB0 + 0x400, indexAquaPlusSprites_Partner, 0x07 },
};

const sGame_PaletteDataset AquaPlus_SATSUKI_PALETTES[] =
{
	{ L"Default A", 0x27DBA6AA, 0x27DBA6AA + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Default B", 0x27DBAD26, 0x27DBAD26 + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Default C", 0x27DBB3A2, 0x27DBB3A2 + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Default D", 0x27DBBA1E, 0x27DBBA1E + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Ash Gray", 0x27DBC09A, 0x27DBC09A + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Mocha Brown", 0x27DBC716, 0x27DBC716 + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Night Blue", 0x27DBCD92, 0x27DBCD92 + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Raspberry Red", 0x27DBD40E, 0x27DBD40E + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	//{ L"Unused", 0x27DBDA8A, 0x27DBDA8A + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Cobalt Green", 0x27DBE106, 0x27DBE106 + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Cool Black", 0x27DBE782, 0x27DBE782 + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Apple Red", 0x27DBEDFE, 0x27DBEDFE + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Seaside Blue", 0x27DBF47A, 0x27DBF47A + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Iris Purple", 0x27DBFAF6, 0x27DBFAF6 + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Blossom Pink", 0x27DC0172, 0x27DC0172 + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Bitter Orange", 0x27DC07EE, 0x27DC07EE + 0x400, indexAquaPlusSprites_Partner, 0x08 },
	{ L"Sugar White", 0x27DC0E6A, 0x27DC0E6A + 0x400, indexAquaPlusSprites_Partner, 0x08 },
};

const sGame_PaletteDataset AquaPlus_SERIKA_PALETTES[] =
{
	{ L"Default A", 0x2869BB84, 0x2869BB84 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Default B", 0x2869C200, 0x2869C200 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Default C", 0x2869C87C, 0x2869C87C + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Default D", 0x2869CEF8, 0x2869CEF8 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"School Ghost Story", 0x2869D574, 0x2869D574 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Flower Divination of Love", 0x2869DBF0, 0x2869DBF0 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Horoscope", 0x2869E26C, 0x2869E26C + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Sun God Altar", 0x2869E8E8, 0x2869E8E8 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	//{ L"Unused", 0x2869EF64, 0x2869EF64 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Gold Amulet", 0x2869F5E0, 0x2869F5E0 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Kesaran Parasan", 0x2869FC5C, 0x2869FC5C + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Halloween", 0x286A02D8, 0x286A02D8 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Purple Mirror", 0x286A0954, 0x286A0954 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Mystery Circle", 0x286A0FD0, 0x286A0FD0 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Pyramid Power", 0x286A164C, 0x286A164C + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Talisman", 0x286A1CC8, 0x286A1CC8 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
	{ L"Witch's Black Cat", 0x286A2344, 0x286A2344 + 0x400, indexAquaPlusSprites_Partner, 0x09 },
};

const sGame_PaletteDataset AquaPlus_ULTHURY_PALETTES[] =
{
	{ L"Default A", 0x25E741F4, 0x25E741F4 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Default B", 0x25E74870, 0x25E74870 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Default C", 0x25E74EEC, 0x25E74EEC + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Default D", 0x25E75568, 0x25E75568 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Lapis Lazuli", 0x25E75BE4, 0x25E75BE4 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Twilight", 0x25E76260, 0x25E76260 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Dark Gray", 0x25E768DC, 0x25E768DC + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Scarlet", 0x25E76F58, 0x25E76F58 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	//{ L"Unused", 0x25E775D4, 0x25E775D4 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Light Pink", 0x25E77C50, 0x25E77C50 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Autumn Breeze", 0x25E782CC, 0x25E782CC + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Jade", 0x25E78948, 0x25E78948 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Snow Cap", 0x25E78FC4, 0x25E78FC4 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Sappanwood", 0x25E79640, 0x25E79640 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Coral", 0x25E79CBC, 0x25E79CBC + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Orpiment", 0x25E7A338, 0x25E7A338 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
	{ L"Bluish Purple", 0x25E7A9B4, 0x25E7A9B4 + 0x400, indexAquaPlusSprites_Partner, 0x0A },
};

const sGame_PaletteDataset AquaPlus_YU_PALETTES[] =
{
	{ L"Default A", 0x2848BFF2, 0x2848BFF2 + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"Default B", 0x2848C66E, 0x2848C66E + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"Default C", 0x2848CCEA, 0x2848CCEA + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"Default D", 0x2848D366, 0x2848D366 + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"E52 [Peach]", 0x2848D9E2, 0x2848D9E2 + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"B97 [Cerulean Blue]", 0x2848E05E, 0x2848E05E + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"P99 [Pale Pink]", 0x2848E6DA, 0x2848E6DA + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"R39 [Carmine]", 0x2848ED56, 0x2848ED56 + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	//{ L"Unused", 0x2848F3D2, 0x2848F3D2 + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"R77 [Prussian Blue]", 0x2848FA4E, 0x2848FA4E + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"V51 [Pansy]", 0x284900CA, 0x284900CA + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"Y54 [Marigold]", 0x28490746, 0x28490746 + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"G75 [Aqua Mint}", 0x28490DC2, 0x28490DC2 + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"K00 [Ink Black]", 0x2849143E, 0x2849143E + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"Y66 [Trick Green]", 0x28491ABA, 0x28491ABA + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"G38 [Princess Sienna]", 0x28492136, 0x28492136 + 0x400, indexAquaPlusSprites_Partner, 0x0B },
	{ L"W33 [Cardinal]", 0x284927B2, 0x284927B2 + 0x400, indexAquaPlusSprites_Partner, 0x0B },
};

const sGame_PaletteDataset AquaPlus_YUKI_PALETTES[] =
{
	{ L"Default A", 0x2783F360, 0x2783F360 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Default B", 0x2783F9DC, 0x2783F9DC + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Default C", 0x27840058, 0x27840058 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Default D", 0x278406D4, 0x278406D4 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Margaret Kiss", 0x27840D50, 0x27840D50 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Vampire Girl", 0x278413CC, 0x278413CC + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Windy Hill", 0x27841A48, 0x27841A48 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Anemone Dream", 0x278420C4, 0x278420C4 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	//{ L"Unused", 0x27842740, 0x27842740 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Strawberry's First Love", 0x27842DBC, 0x27842DBC + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Orange Diary", 0x27843438, 0x27843438 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Lonely Mermaid", 0x27843AB4, 0x27843AB4 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Tokimeki Starlight", 0x27844130, 0x27844130 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Autumn Night Milk Tea", 0x278447AC, 0x278447AC + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Midnight Live", 0x27844E28, 0x27844E28 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Christmas Carol", 0x278454A4, 0x278454A4 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
	{ L"Winter Song", 0x27845B20, 0x27845B20 + 0x400, indexAquaPlusSprites_Partner, 0x0C },
};

const sGame_PaletteDataset AquaPlus_YUMA_PALETTES[] =
{
	{ L"Default A", 0x25CA8D5C, 0x25CA8D5C + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Default B", 0x25CA93D8, 0x25CA93D8 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Default C", 0x25CA9A54, 0x25CA9A54 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Default D", 0x25CAA0D0, 0x25CAA0D0 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Yellow Star", 0x25CAA74C, 0x25CAA74C + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Green Forest", 0x25CAADC8, 0x25CAADC8 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Aquamarine", 0x25CAB444, 0x25CAB444 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Metallic Silver", 0x25CABAC0, 0x25CABAC0 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	//{ L"Unused", 0x25CAC13C, 0x25CAC13C + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Retro Brown", 0x25CAC7B8, 0x25CAC7B8 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Milky Pink", 0x25CACE34, 0x25CACE34 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Deep Purple", 0x25CAD4B0, 0x25CAD4B0 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Apricot", 0x25CADB2C, 0x25CADB2C + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Titanium Gray", 0x25CAE1A8, 0x25CAE1A8 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Red Stream", 0x25CAE824, 0x25CAE824 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Classic Bordeaux", 0x25CAEEA0, 0x25CAEEA0 + 0x400, indexAquaPlusSprites_Partner, 0x0D },
	{ L"Sporty Blue", 0x25CAF51C, 0x25CAF51C + 0x400, indexAquaPlusSprites_Partner, 0x0D },
};

const sGame_PaletteDataset AquaPlus_MARYANBOSS_PALETTES[] =
{
	{ L"Default A", 0x296DC884, 0x296DC884 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Default B", 0x296DCF00, 0x296DCF00 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Default C", 0x296DD57C, 0x296DD57C + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Default D", 0x296DDBF8, 0x296DDBF8 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Spring Princess in Love", 0x296DE274, 0x296DE274 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Sentimental Cocoa", 0x296DE8F0, 0x296DE8F0 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Charming Cosmic Lavender", 0x296DEF6C, 0x296DEF6C + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Devilish Glamorous Tiger", 0x296DF5E8, 0x296DF5E8 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	//{ L"Unused", 0x296DFC64, 0x296DFC64 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Shining Sparkling Silver", 0x296E02E0, 0x296E02E0 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Romantic Gold of Glory", 0x296E095C, 0x296E095C + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Deep Viridian of Sorrow", 0x296E0FD8, 0x296E0FD8 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Beautiful Empress of Summer", 0x296E1654, 0x296E1654 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Infinite Ultimate Black", 0x296E1CD0, 0x296E1CD0 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Immortal Eternal Blue", 0x296E234C, 0x296E234C + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Red Sunburst of Justice", 0x296E29C8, 0x296E29C8 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
	{ L"Dreamy Miracle Prism", 0x296E3044, 0x296E3044 + 0x400, indexAquaPlusSprites_Partner, 0x00 },
};


const sDescTreeNode AquaPlus_ARAWN_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_ARAWN_PALETTES,           ARRAYSIZE(AquaPlus_ARAWN_PALETTES) },
};
const sDescTreeNode AquaPlus_CHIZURU_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_CHIZURU_PALETTES,           ARRAYSIZE(AquaPlus_CHIZURU_PALETTES) },
};
const sDescTreeNode AquaPlus_CHIZURUBLOOD_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_CHIZURUBLOOD_PALETTES,           ARRAYSIZE(AquaPlus_CHIZURUBLOOD_PALETTES) },
};
const sDescTreeNode AquaPlus_HAKUOWLO_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_HAKUOWLO_PALETTES,           ARRAYSIZE(AquaPlus_HAKUOWLO_PALETTES) },
};
const sDescTreeNode AquaPlus_HAKUOWLOEXTRAS_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_HAKUOWLOEXTRAS_PALETTES,           ARRAYSIZE(AquaPlus_HAKUOWLOEXTRAS_PALETTES) },
};
const sDescTreeNode AquaPlus_KARULAU_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_KARULAU_PALETTES,           ARRAYSIZE(AquaPlus_KARULAU_PALETTES) },
};
const sDescTreeNode AquaPlus_KONOMI_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_KONOMI_PALETTES,           ARRAYSIZE(AquaPlus_KONOMI_PALETTES) },
};
const sDescTreeNode AquaPlus_KONOMIEXTRAS_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_KONOMIEXTRAS_PALETTES,           ARRAYSIZE(AquaPlus_KONOMIEXTRAS_PALETTES) },
};
const sDescTreeNode AquaPlus_MANAKA_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_MANAKA_PALETTES,           ARRAYSIZE(AquaPlus_MANAKA_PALETTES) },
};
const sDescTreeNode AquaPlus_MORGAN_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_MORGAN_PALETTES,           ARRAYSIZE(AquaPlus_MORGAN_PALETTES) },
};
const sDescTreeNode AquaPlus_MULTI_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_MULTI_PALETTES,           ARRAYSIZE(AquaPlus_MULTI_PALETTES) },
};
const sDescTreeNode AquaPlus_MULTIBROOM_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_MULTIBROOM_PALETTES,           ARRAYSIZE(AquaPlus_MULTIBROOM_PALETTES) },
};
const sDescTreeNode AquaPlus_OBORO_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_OBORO_PALETTES,           ARRAYSIZE(AquaPlus_OBORO_PALETTES) },
};
const sDescTreeNode AquaPlus_OBOROEXTRAS_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_OBOROEXTRAS_PALETTES,           ARRAYSIZE(AquaPlus_OBOROEXTRAS_PALETTES) },
};
const sDescTreeNode AquaPlus_RIANNON_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_RIANNON_PALETTES,           ARRAYSIZE(AquaPlus_RIANNON_PALETTES) },
};
const sDescTreeNode AquaPlus_SASARA_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_SASARA_PALETTES,           ARRAYSIZE(AquaPlus_SASARA_PALETTES) },
};
const sDescTreeNode AquaPlus_SASARAEFFECT_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_SASARAEFFECT_PALETTES,           ARRAYSIZE(AquaPlus_SASARAEFFECT_PALETTES) },
};
const sDescTreeNode AquaPlus_SASARAFROG_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_SASARAFROG_PALETTES,           ARRAYSIZE(AquaPlus_SASARAFROG_PALETTES) },
};
const sDescTreeNode AquaPlus_TAMAKI_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_TAMAKI_PALETTES,           ARRAYSIZE(AquaPlus_TAMAKI_PALETTES) },
};
const sDescTreeNode AquaPlus_TAMAKIDOG_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_TAMAKIDOG_PALETTES,           ARRAYSIZE(AquaPlus_TAMAKIDOG_PALETTES) },
};
const sDescTreeNode AquaPlus_TOUKA_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_TOUKA_PALETTES,           ARRAYSIZE(AquaPlus_TOUKA_PALETTES) },
};

//Partners
const sDescTreeNode AquaPlus_CAMYU_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_CAMYU_PALETTES,           ARRAYSIZE(AquaPlus_CAMYU_PALETTES) },
};
const sDescTreeNode AquaPlus_LLYR_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_LLYR_PALETTES,           ARRAYSIZE(AquaPlus_LLYR_PALETTES) },
};
const sDescTreeNode AquaPlus_MARYAN_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_MARYAN_PALETTES,           ARRAYSIZE(AquaPlus_MARYAN_PALETTES) },
};
const sDescTreeNode AquaPlus_MIZUKI_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_MIZUKI_PALETTES,           ARRAYSIZE(AquaPlus_MIZUKI_PALETTES) },
};
const sDescTreeNode AquaPlus_OCTAVIA_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_OCTAVIA_PALETTES,           ARRAYSIZE(AquaPlus_OCTAVIA_PALETTES) },
};
const sDescTreeNode AquaPlus_RATHLY_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_RATHLY_PALETTES,           ARRAYSIZE(AquaPlus_RATHLY_PALETTES) },
};
const sDescTreeNode AquaPlus_RINA_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_RINA_PALETTES,           ARRAYSIZE(AquaPlus_RINA_PALETTES) },
};
const sDescTreeNode AquaPlus_SATSUKI_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_SATSUKI_PALETTES,           ARRAYSIZE(AquaPlus_SATSUKI_PALETTES) },
};
const sDescTreeNode AquaPlus_SERIKA_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_SERIKA_PALETTES,           ARRAYSIZE(AquaPlus_SERIKA_PALETTES) },
};
const sDescTreeNode AquaPlus_ULTHURY_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_ULTHURY_PALETTES,           ARRAYSIZE(AquaPlus_ULTHURY_PALETTES) },
};
const sDescTreeNode AquaPlus_YU_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_YU_PALETTES,           ARRAYSIZE(AquaPlus_YU_PALETTES) },
};
const sDescTreeNode AquaPlus_YUKI_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_YUKI_PALETTES,           ARRAYSIZE(AquaPlus_YUKI_PALETTES) },
};
const sDescTreeNode AquaPlus_YUMA_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_YUMA_PALETTES,           ARRAYSIZE(AquaPlus_YUMA_PALETTES) },
};
const sDescTreeNode AquaPlus_MARYANBOSS_COLLECTION[] =
{
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)AquaPlus_MARYANBOSS_PALETTES,           ARRAYSIZE(AquaPlus_MARYANBOSS_PALETTES) },
};


const sDescTreeNode AquaPlus_S_UNITS[] =
{
	{ L"Arawn",         DESC_NODETYPE_TREE, (void*)AquaPlus_ARAWN_COLLECTION,         ARRAYSIZE(AquaPlus_ARAWN_COLLECTION) },
	{ L"Chizuru",       DESC_NODETYPE_TREE, (void*)AquaPlus_CHIZURU_COLLECTION,       ARRAYSIZE(AquaPlus_CHIZURU_COLLECTION) },
	{ L"Chizuru (Blood Awakening)",        DESC_NODETYPE_TREE, (void*)AquaPlus_CHIZURUBLOOD_COLLECTION,        ARRAYSIZE(AquaPlus_CHIZURUBLOOD_COLLECTION) },
	{ L"Hakuowlo",      DESC_NODETYPE_TREE, (void*)AquaPlus_HAKUOWLO_COLLECTION,      ARRAYSIZE(AquaPlus_HAKUOWLO_COLLECTION) },
	{ L"Hakuowlo (Eruruu, Aruruu, and Mukkuru)",        DESC_NODETYPE_TREE, (void*)AquaPlus_HAKUOWLOEXTRAS_COLLECTION,        ARRAYSIZE(AquaPlus_HAKUOWLOEXTRAS_COLLECTION) },
	{ L"Karulau",       DESC_NODETYPE_TREE, (void*)AquaPlus_KARULAU_COLLECTION,       ARRAYSIZE(AquaPlus_KARULAU_COLLECTION) },
	{ L"Konomi",        DESC_NODETYPE_TREE, (void*)AquaPlus_KONOMI_COLLECTION,        ARRAYSIZE(AquaPlus_KONOMI_COLLECTION) },
	{ L"Konomi (Genjimaru, Michiru, and Chie)",        DESC_NODETYPE_TREE, (void*)AquaPlus_KONOMIEXTRAS_COLLECTION,        ARRAYSIZE(AquaPlus_KONOMIEXTRAS_COLLECTION) },
	{ L"Manaka",        DESC_NODETYPE_TREE, (void*)AquaPlus_MANAKA_COLLECTION,        ARRAYSIZE(AquaPlus_MANAKA_COLLECTION) },
	{ L"Morgan",        DESC_NODETYPE_TREE, (void*)AquaPlus_MORGAN_COLLECTION,        ARRAYSIZE(AquaPlus_MORGAN_COLLECTION) },
	{ L"Multi",         DESC_NODETYPE_TREE, (void*)AquaPlus_MULTI_COLLECTION,         ARRAYSIZE(AquaPlus_MULTI_COLLECTION) },
	{ L"Multi (Broom Swing Trails)",         DESC_NODETYPE_TREE, (void*)AquaPlus_MULTIBROOM_COLLECTION,         ARRAYSIZE(AquaPlus_MULTIBROOM_COLLECTION) },
	{ L"Oboro",         DESC_NODETYPE_TREE, (void*)AquaPlus_OBORO_COLLECTION,         ARRAYSIZE(AquaPlus_OBORO_COLLECTION) },
	{ L"Oboro (Dorry & Guraa)",         DESC_NODETYPE_TREE, (void*)AquaPlus_OBOROEXTRAS_COLLECTION,         ARRAYSIZE(AquaPlus_OBOROEXTRAS_COLLECTION) },
	{ L"Riannon",         DESC_NODETYPE_TREE, (void*)AquaPlus_RIANNON_COLLECTION,         ARRAYSIZE(AquaPlus_RIANNON_COLLECTION) },
	{ L"Sasara",         DESC_NODETYPE_TREE, (void*)AquaPlus_SASARA_COLLECTION,         ARRAYSIZE(AquaPlus_SASARA_COLLECTION) },
	{ L"Sasara (5A Attack Trail)",         DESC_NODETYPE_TREE, (void*)AquaPlus_SASARAEFFECT_COLLECTION,         ARRAYSIZE(AquaPlus_SASARAEFFECT_COLLECTION) },
	{ L"Sasara (Frog Outro)",         DESC_NODETYPE_TREE, (void*)AquaPlus_SASARAFROG_COLLECTION,         ARRAYSIZE(AquaPlus_SASARAFROG_COLLECTION) },
	{ L"Tamaki",        DESC_NODETYPE_TREE, (void*)AquaPlus_TAMAKI_COLLECTION,        ARRAYSIZE(AquaPlus_TAMAKI_COLLECTION) },
	{ L"Tamaki (Genjimaru Outro)",        DESC_NODETYPE_TREE, (void*)AquaPlus_TAMAKIDOG_COLLECTION,        ARRAYSIZE(AquaPlus_TAMAKIDOG_COLLECTION) },
	{ L"Touka",        DESC_NODETYPE_TREE, (void*)AquaPlus_TOUKA_COLLECTION,        ARRAYSIZE(AquaPlus_TOUKA_COLLECTION) },

	{ L"(Partner) Camyu",        DESC_NODETYPE_TREE, (void*)AquaPlus_CAMYU_COLLECTION,        ARRAYSIZE(AquaPlus_CAMYU_COLLECTION) },
	{ L"(Partner) Llyr",        DESC_NODETYPE_TREE, (void*)AquaPlus_LLYR_COLLECTION,        ARRAYSIZE(AquaPlus_LLYR_COLLECTION) },
	{ L"(Partner) Ma-ryan",        DESC_NODETYPE_TREE, (void*)AquaPlus_MARYAN_COLLECTION,        ARRAYSIZE(AquaPlus_MARYAN_COLLECTION) },
	{ L"(Partner) Mizuki",        DESC_NODETYPE_TREE, (void*)AquaPlus_MIZUKI_COLLECTION,        ARRAYSIZE(AquaPlus_MIZUKI_COLLECTION) },
	{ L"(Partner) Octavia",        DESC_NODETYPE_TREE, (void*)AquaPlus_OCTAVIA_COLLECTION,        ARRAYSIZE(AquaPlus_OCTAVIA_COLLECTION) },
	{ L"(Partner) Rathly",        DESC_NODETYPE_TREE, (void*)AquaPlus_RATHLY_COLLECTION,        ARRAYSIZE(AquaPlus_RATHLY_COLLECTION) },
	{ L"(Partner) Rina",        DESC_NODETYPE_TREE, (void*)AquaPlus_RINA_COLLECTION,        ARRAYSIZE(AquaPlus_RINA_COLLECTION) },
	{ L"(Partner) Serika",        DESC_NODETYPE_TREE, (void*)AquaPlus_SERIKA_COLLECTION,        ARRAYSIZE(AquaPlus_SERIKA_COLLECTION) },
	{ L"(Partner) Ulthury",        DESC_NODETYPE_TREE, (void*)AquaPlus_ULTHURY_COLLECTION,        ARRAYSIZE(AquaPlus_ULTHURY_COLLECTION) },
	{ L"(Partner) Yu",        DESC_NODETYPE_TREE, (void*)AquaPlus_YU_COLLECTION,        ARRAYSIZE(AquaPlus_YU_COLLECTION) },
	{ L"(Partner) Yuki",        DESC_NODETYPE_TREE, (void*)AquaPlus_YUKI_COLLECTION,        ARRAYSIZE(AquaPlus_YUKI_COLLECTION) },
	{ L"(Partner) Yuma",        DESC_NODETYPE_TREE, (void*)AquaPlus_YUMA_COLLECTION,        ARRAYSIZE(AquaPlus_YUMA_COLLECTION) },
	{ L"(Partner) Ma-ryan (Boss)",        DESC_NODETYPE_TREE, (void*)AquaPlus_MARYANBOSS_COLLECTION,        ARRAYSIZE(AquaPlus_MARYANBOSS_COLLECTION) },
};