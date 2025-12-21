#pragma once

#include "GameClassByUnitPerFile.h"

const std::vector<uint16_t> MCI_S_IMGIDS_USED =
{
    indexMCI_BetaRayBill,       // 0xab
    indexMCI_BlackPanther,      // 0xac
    indexMCI_CaptainAmerica,    // 0xad
    indexMCI_CosmicGhostRider,  // 0xae
    indexMCI_IronMan,           // 0xaf
    indexMCI_Nova,              // 0xb0
    indexMCI_Phoenix,           // 0xb1
    indexMCI_PhylaVell,         // 0xb2
    indexMCI_Rocket,            // 0xb3
    indexMCI_SheHulk,           // 0xb4
    indexMCI_SpiderMan,         // 0xb5
    indexMCI_Storm,             // 0xb6
    indexMCI_SilverSurfer,      // 0xb7
    indexMCI_Venom,             // 0xb8
    indexMCI_Wolverine,         // 0xb9
    indexMCI_Bonus,             // 0xba
};

const std::vector<sGCBUPF_RelativePaletteData> MCI_PlayerPalettes_S =
{
    { L"Base 1" },
    { L"Base 2" },
    { L"Base 3" },
    { L"Base 4" },
    { L"Special 1" },
    { L"Special 2" },
    { L"Special 3" },
    { L"Special 4" },
    { L"Unused/Single sprite preview", -0x2400, INVALID_UNIT_VALUE_16, 0x01 }, // palette 00 is used for drawing sprites, we expose this for a built in single sprite preview
};

const std::vector<sGCBUPF_RelativePaletteData> MCI_BossPlayerPalettes_S =
{
    { L"Base 1 / Boss (Cutscene animations only)", 0x0, INVALID_UNIT_VALUE_16, 0x02, }, // we want unique previews for the boss characters, since those other palettes wont ever use these sprites
    { L"Base 2" },
    { L"Base 3" },
    { L"Base 4" },
    { L"Special 1" },
    { L"Special 2" },
    { L"Special 3" },
    { L"Special 4" },
    { L"Unused/Single sprite preview", -0x2400, INVALID_UNIT_VALUE_16, 0x01 }, // palette 00 is used for drawing sprites, we expose this for a built in single sprite preview
};

// For the smaller Export listbox
const std::vector<LPCWSTR> MCI_SPaletteNamesShort =
{
    { L"B1" },
    { L"B2" },
    { L"B3" },
    { L"B4" },
    { L"S1" },
    { L"S2" },
    { L"S3" },
    { L"S4" },
    { L"Unused" },
};

const sGCBUPF_BasicNodeData MCI_S_NormalNode =
{
    { L"Palettes" }, 0x00, MCI_SPaletteNamesShort
};

const std::vector<sGCBUPF_RelativePaletteData> MCI_ExtrasPalettes_S =
{
    { L"Bifrost Rainbow", 0x00, indexMCI_Bonus, 0x00 },
};

const sGCBUPF_BasicNodeData MCI_S_ExtrasNode =
{
    { L"Preview Only" }
};

const std::vector<sGCBUPF_RelativePaletteData> MCI_BossesPalettes_S =
{
    { L"Palette", 0x00, indexMCI_Bonus, 0x01 },
};

const sGCBUPF_BasicNodeData MCI_S_BossesNode =
{
    { L"Palette" },
};

std::vector<sGCBUPF_BasicFileData> MCI_S_CharacterData =
{
    { L"Content\\Animations\\Players\\BetaRayBill\\BetaRayBillPalette.xnb",             L"Beta Ray Bill",       0x2855,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_BetaRayBill },
    { L"Content\\Animations\\Players\\BlackPanther\\BlackPantherPalette.xnb",           L"Black Panther",       0x2855,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_BlackPanther },
    { L"Content\\Animations\\Players\\CaptainAmerica\\CaptainAmericaPalette.xnb",       L"Captain America",     0x2855,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_CaptainAmerica },
    { L"Content\\Animations\\Players\\CosmicGhostRider\\CosmicGhostRiderPalette.xnb",   L"Cosmic Ghost Rider",  0x2855,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_CosmicGhostRider },
    { L"Content\\Animations\\Players\\IronMan\\IronManPalette.xnb",                     L"Iron Man",            0x2855,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_IronMan },
    { L"Content\\Animations\\Players\\Nova\\NovaPalette.xnb",                           L"Nova",                0x2455,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_Nova },
    { L"Content\\Animations\\Players\\Phoenix\\PhoenixPalette.xnb",                     L"Phoenix",             0x2855,    MCI_S_NormalNode, MCI_BossPlayerPalettes_S,  0x00455,  indexMCI_Phoenix },
    { L"Content\\Animations\\Players\\PhylaVell\\PhylaVellPalette.xnb",                 L"Phyla-Vell",          0x2855,    MCI_S_NormalNode, MCI_BossPlayerPalettes_S,  0x00455,  indexMCI_PhylaVell },
    { L"Content\\Animations\\Players\\Rocket\\RocketPalette.xnb",                       L"Rocket",              0x2855,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_Rocket },
    { L"Content\\Animations\\Players\\SheHulk\\SheHulkPalette.xnb",                     L"She-Hulk",            0x2855,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_SheHulk },
    { L"Content\\Animations\\Players\\SilverSurfer\\SilverSurferPalette.xnb",           L"Silver Surfer",       0x2855,    MCI_S_NormalNode, MCI_BossPlayerPalettes_S,  0x00455,  indexMCI_SilverSurfer },
    { L"Content\\Animations\\Players\\Spiderman\\SpidermanPalette.xnb",                 L"Spider-Man",          0x2455,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_SpiderMan },
    { L"Content\\Animations\\Players\\Storm\\StormPalette.xnb",                         L"Storm",               0x2455,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_Storm },
    { L"Content\\Animations\\Players\\Venom\\VenomPalette.xnb",                         L"Venom",               0x2855,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_Venom },
    { L"Content\\Animations\\Players\\Wolverine\\WolverinePalette.xnb",                 L"Wolverine",           0x2855,    MCI_S_NormalNode, MCI_PlayerPalettes_S,      0x00455,  indexMCI_Wolverine },
    { L"Content\\Animations\\Bosses\\Annihilus\\AnnihilusPalette.xnb",                  L"Annihilus",           0x0455,    MCI_S_BossesNode, MCI_BossesPalettes_S,      0x00055,  indexMCI_Bonus },
    { L"Content\\Animations\\Players\\PalModExtrasPalette",                             L"Bonus",               0x2855,    MCI_S_ExtrasNode, MCI_ExtrasPalettes_S,      0x0,  indexMCI_Bonus },
};
