#pragma once

#include "GameClassByUnitPerFile.h"

const std::vector<uint16_t> P4AU_S_IMGIDS_USED =
{
    indexP4AUSprites_Aigis,         // 0x00
    indexP4AUSprites_Akihiko,       // 0x01
    indexP4AUSprites_Chie,          // 0x02
    indexP4AUSprites_Elizabeth,     // 0x03
    indexP4AUSprites_Junpei,        // 0x04
    indexP4AUSprites_Kanji,         // 0x05
    indexP4AUSprites_Ken,           // 0x06
    indexP4AUSprites_Labrys,        // 0x07
    indexP4AUSprites_Margaret,      // 0x08
    indexP4AUSprites_Marie,         // 0x09
    indexP4AUSprites_Mitsuru,       // 0x0a
    indexP4AUSprites_Naoto,         // 0x0b
    indexP4AUSprites_Rise,          // 0x0c
    indexP4AUSprites_Shadow,        // 0x0d
    indexP4AUSprites_Sho,           // 0x0e
    indexP4AUSprites_Solo,          // 0x0f
    indexP4AUSprites_Teddie,        // 0x10
    indexP4AUSprites_Tohru,         // 0x11
    indexP4AUSprites_Yosuke,        // 0x12
    indexP4AUSprites_Yu,            // 0x13
    indexP4AUSprites_Yukari,        // 0x14
    indexP4AUSprites_Yukiko,        // 0x15
    indexP4AUSprites_Bonus,         // 0x16
};

const std::vector<LPCWSTR> PersonaPaletteNode_ButtonLabels =
{
    L"Color 1",
    L"Color 2",
    L"Color 3",
    L"Color 4",
    L"Color 5",
    L"Color 6",
    L"Color 7",
    L"Color 8",
    L"Color 9",
    L"Color 10",
    L"Color 11",
    L"Color 12",
    L"Color 13",
    L"Color 14",
    L"Color 15",
    L"Color 16",
    L"Color 17",
    L"Color 18",
    L"Color 19",
    L"Color 20",
    L"Color 21",
    L"Color 22",
    L"Color 23",
    L"Color 24",
    L"Color 25",
    L"Color 26",
    L"Color 27",
    L"Color 28",
    L"Color 29 (Unused)",
    L"Color 30",
    L"Color 31",
    L"Color 32 (Shadow NPC)",
};

sGCBUPF_BasicNodeData PersonaNodes_Normal =
{
    {
        L"Color 1",
        L"Color 2",
        L"Color 3",
        L"Color 4",
        L"Color 5",
        L"Color 6",
        L"Color 7",
        L"Color 8",
        L"Color 9",
        L"Color 10",
        L"Color 11",
        L"Color 12",
        L"Color 13",
        L"Color 14",
        L"Color 15",
        L"Color 16",
        L"Color 17",
        L"Color 18",
        L"Color 19",
        L"Color 20",
        L"Color 21",
        L"Color 22",
        L"Color 23",
        L"Color 24",
        L"Color 25",
        L"Color 26",
        L"Color 27",
        L"Color 28",
        L"Color 29 (Unused)",
        L"Color 30",
        L"Color 31",
        L"Color 32 (Shadow NPC)",
    },
    0x2100,
    PersonaPaletteNode_ButtonLabels
};

sGCBUPF_BasicNodeData PersonaNodes_CSel =
{
    {
        L"Color 1",
        L"Color 2",
        L"Color 3",
        L"Color 4",
        L"Color 5",
        L"Color 6",
        L"Color 7",
        L"Color 8",
        L"Color 9",
        L"Color 10",
        L"Color 11",
        L"Color 12",
        L"Color 13",
        L"Color 14",
        L"Color 15",
        L"Color 16",
        L"Color 17",
        L"Color 18",
        L"Color 19",
        L"Color 20",
        L"Color 21",
        L"Color 22",
        L"Color 23",
        L"Color 24",
        L"Color 25",
        L"Color 26",
        L"Color 27",
        L"Color 28",
        L"Color 29 (Unused)",
        L"Color 30",
        L"Color 31",
        L"Color 32 (Shadow NPC)",
    },
    0x840,
    PersonaPaletteNode_ButtonLabels
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesAigis =
{
    { L"Main", 0x0, indexP4AUSprites_Aigis, 0x00 },
    { L"Persona: Athena", 0x420, indexP4AUSprites_Aigis, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Aigis, 0x02 },
    { L"Extra 2", 0xc60 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesAigisCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Aigis, 0x00 },
    { L"Persona: Athena", 0x420, indexP4AUSprites_Aigis, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesAkihiko =
{
    { L"Main", 0x0, indexP4AUSprites_Akihiko, 0x00 },
    { L"Persona: Caesar", 0x420, indexP4AUSprites_Akihiko, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Akihiko, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Akihiko, 0x03 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesAkihikoCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Akihiko, 0x00 },
    { L"Persona: Caesar", 0x420, indexP4AUSprites_Akihiko, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesChie =
{
    { L"Main", 0x0, indexP4AUSprites_Chie, 0x00 },
    { L"Persona: Tomoe", 0x420, indexP4AUSprites_Chie, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Chie, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Chie, 0x03 },
    { L"Extra 3", 0x1080, indexP4AUSprites_Chie, 0x04 },
    { L"Extra 4", 0x14a0, indexP4AUSprites_Chie, 0x05 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0, indexP4AUSprites_Chie, 0x07 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesChieCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Chie, 0x00 },
    { L"Persona: Tomoe", 0x420, indexP4AUSprites_Chie, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesElizabeth =
{
    { L"Main", 0x0, indexP4AUSprites_Elizabeth, 0x00 },
    { L"Persona: Thanatos", 0x420, indexP4AUSprites_Elizabeth, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Elizabeth, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Elizabeth, 0x03 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesElizabethCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Elizabeth, 0x00 },
    { L"Persona: Thanatos", 0x420, indexP4AUSprites_Elizabeth, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesJunpei =
{
    { L"Main", 0x0, indexP4AUSprites_Junpei, 0x00 },
    { L"Persona: Trismegistus", 0x420, indexP4AUSprites_Junpei, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Junpei, 0x02 },
    { L"Extra 2", 0xc60 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesJunpeiCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Junpei, 0x00 },
    { L"Persona: Trismegistus", 0x420, indexP4AUSprites_Junpei, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesKanji =
{
    { L"Main", 0x0, indexP4AUSprites_Kanji, 0x00 },
    { L"Persona: Take-Mikazuchi", 0x420, indexP4AUSprites_Kanji, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Kanji, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Kanji, 0x03 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesKanjiCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Kanji, 0x00 },
    { L"Persona: Take-Mikazuchi", 0x420, indexP4AUSprites_Kanji, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesKen =
{
    { L"Ken - Main", 0x0, indexP4AUSprites_Ken, 0x00 },
    { L"Ken - Persona: Kala-Nemi", 0x420, indexP4AUSprites_Ken, 0x1 },
    { L"Koromaru - Main", 0x840, indexP4AUSprites_Ken, 0x02 },
    { L"Koromaru - Persona: Cerberus", 0xc60, indexP4AUSprites_Ken, 0x03 },
    { L"Extra 1", 0x1080, indexP4AUSprites_Ken, 0x04 },
    { L"Extra 2", 0x14a0 },
    { L"Extra 3", 0x18c0 },
    { L"Extra 4", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesKenCSEL =
{
    { L"Main: Ken & Koromaru", 0x0, indexP4AUSprites_Ken, 0x08 },
    { L"Personas: Kala-Nemi & Cerberus", 0x420, indexP4AUSprites_Ken, 0x09 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesLabrys =
{
    { L"Main", 0x0, indexP4AUSprites_Labrys, 0x00 },
    { L"Persona: Ariadne", 0x420, indexP4AUSprites_Labrys, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Labrys, 0x02 },
    { L"Extra 2", 0xc60 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesLabrysCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Labrys, 0x00 },
    { L"Persona: Ariadne", 0x420, indexP4AUSprites_Labrys, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesMargaret =
{
    { L"Main", 0x0, indexP4AUSprites_Margaret, 0x00 },
    { L"Persona: Ardha", 0x420, indexP4AUSprites_Margaret, 0x01 },
    { L"Persona: Cu Chulainn", 0x840, indexP4AUSprites_Margaret, 0x02 },
    { L"Persona: Yoshitsune", 0xc60, indexP4AUSprites_Margaret, 0x03 },
    { L"Extra 1", 0x1080, indexP4AUSprites_Margaret, 0x04 },
    { L"Extra 2", 0x14a0, indexP4AUSprites_Margaret, 0x05 },
    { L"Extra 3", 0x18c0, indexP4AUSprites_Margaret, 0x06 },
    { L"Extra 4", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesMargaretCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Margaret, 0x00 },
    { L"Personas: Ardha,Cu Chulainn,Yoshitsune", 0x420, indexP4AUSprites_Margaret, 0x08 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesMarie =
{
    { L"Main", 0x0, indexP4AUSprites_Marie, 0x00 },
    { L"Persona: Kaguya", 0x420, indexP4AUSprites_Marie, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Marie, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Marie, 0x03 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0, indexP4AUSprites_Marie, 0x05 },
    { L"Extra 5", 0x18c0, indexP4AUSprites_Marie, 0x05 }, //Reuse the preview from Extra4
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesMarieCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Marie, 0x00 },
    { L"Persona: Kaguya", 0x420, indexP4AUSprites_Marie, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesMitsuru =
{
    { L"Main", 0x0, indexP4AUSprites_Mitsuru, 0x00 },
    { L"Persona: Artemisia", 0x420, indexP4AUSprites_Mitsuru, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Mitsuru, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Mitsuru, 0x03 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0, indexP4AUSprites_Mitsuru, 0x06 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesMitsuruCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Mitsuru, 0x00 },
    { L"Persona: Artemisia", 0x420, indexP4AUSprites_Mitsuru, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesNaoto =
{
    { L"Main", 0x0, indexP4AUSprites_Naoto, 0x00 },
    { L"Persona: Sukuna-Hikona", 0x420, indexP4AUSprites_Naoto, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Naoto, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Naoto, 0x03 },
    { L"Extra 3", 0x1080, indexP4AUSprites_Naoto, 0x04 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesNaotoCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Naoto, 0x00 },
    { L"Persona: Sukuna-Hikona", 0x420, indexP4AUSprites_Naoto, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesRise =
{
    { L"Main", 0x0, indexP4AUSprites_Rise, 0x00 },
    { L"Persona: Himiko", 0x420, indexP4AUSprites_Rise, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Rise, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Rise, 0x03 },
    { L"Extra 3", 0x1080, indexP4AUSprites_Rise, 0x04 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesRiseCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Rise, 0x00 },
    { L"Persona: Himiko", 0x420, indexP4AUSprites_Rise, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesShadow =
{
    { L"Main", 0x0, indexP4AUSprites_Shadow, 0x00 },
    { L"Persona: Asterius", 0x420, indexP4AUSprites_Shadow, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Shadow, 0x02 },
    { L"Extra 2", 0xc60 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesShadowCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Shadow, 0x00 },
    { L"Persona: Asterius", 0x420, indexP4AUSprites_Shadow, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesSolo =
{
    { L"Main", 0x0, indexP4AUSprites_Solo, 0x00 },
    { L"Unused Persona Palette", 0x420 },
    { L"Extra 1", 0x840, indexP4AUSprites_Solo, 0x02 },
    { L"Extra 2", 0xc60 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesSoloCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Solo, 0x00 },
    { L"Unused Persona Palette", 0x420 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesSho =
{
    { L"Main", 0x0, indexP4AUSprites_Sho, 0x00 },
    { L"Persona: Tsukiyomi", 0x420, indexP4AUSprites_Sho, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Sho, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Sho, 0x03 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4: Tsukiyomi IK", 0x14a0, indexP4AUSprites_Sho, 0x05 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesShoCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Sho, 0x00 },
    { L"Persona: Tsukiyomi", 0x420, indexP4AUSprites_Sho, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesTeddie =
{
    { L"Main", 0x0, indexP4AUSprites_Teddie, 0x00 },
    { L"Persona: Kintoki-Douji", 0x420, indexP4AUSprites_Teddie, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Teddie, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Teddie, 0x03 },
    { L"Extra 3", 0x1080, indexP4AUSprites_Teddie, 0x04 },
    { L"Extra 4", 0x14a0, indexP4AUSprites_Teddie, 0x05 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesTeddieCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Teddie, 0x00 },
    { L"Persona: Kintoki-Douji", 0x420, indexP4AUSprites_Teddie, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesTohru =
{
    { L"Main", 0x0, indexP4AUSprites_Tohru, 0x00 },
    { L"Persona: Magatsu Izanagi", 0x420, indexP4AUSprites_Tohru, 0x01 },
    { L"Extra 1", 0x840 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Tohru, 0x03 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesTohruCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Tohru, 0x00 },
    { L"Persona: Magatsu Izanagi", 0x420, indexP4AUSprites_Tohru, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesYosuke =
{
    { L"Main", 0x0, indexP4AUSprites_Yosuke, 0x00 },
    { L"Persona: Jiraiya", 0x420, indexP4AUSprites_Yosuke, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Yosuke, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Yosuke, 0x03 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesYosukeCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Yosuke, 0x00 },
    { L"Persona: Jiraiya", 0x420, indexP4AUSprites_Yosuke, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesYu =
{
    { L"Main", 0x0, indexP4AUSprites_Yu, 0x00 },
    { L"Persona: Izanagi", 0x420, indexP4AUSprites_Yu, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Yu, 0x02 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Yu, 0x03 },
    { L"Extra 3: Izanagi no Okami", 0x1080, indexP4AUSprites_Yu, 0x04 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesYuCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Yu, 0x00 },
    { L"Persona: Izanagi", 0x420, indexP4AUSprites_Yu, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesYukari =
{
    { L"Main", 0x0, indexP4AUSprites_Yukari, 0x00 },
    { L"Persona: Isis", 0x420, indexP4AUSprites_Yukari, 0x01 },
    { L"Extra 1", 0x840, indexP4AUSprites_Yukari, 0x02 },
    { L"Extra 2", 0xc60 },
    { L"Extra 3", 0x1080, indexP4AUSprites_Yukari, 0x04 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesYukariCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Yukari, 0x00 },
    { L"Persona: Isis", 0x420, indexP4AUSprites_Yukari, 0x01 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesYukiko =
{
    { L"Main", 0x0, indexP4AUSprites_Yukiko, 0x00 },
    { L"Persona: Konohana-Sakuya", 0x420, indexP4AUSprites_Yukiko, 0x01 },
    { L"Extra 1", 0x840 },
    { L"Extra 2", 0xc60, indexP4AUSprites_Yukiko, 0x03 },
    { L"Extra 3", 0x1080 },
    { L"Extra 4", 0x14a0 },
    { L"Extra 5", 0x18c0 },
    { L"Extra 6", 0x1ce0 },
};

const std::vector<sGCBUPF_RelativePaletteData> Persona4PalettesYukikoCSEL =
{
    { L"Main", 0x0, indexP4AUSprites_Yukiko, 0x00 },
    { L"Persona: Konohana-Sakuya", 0x420, indexP4AUSprites_Yukiko, 0x01 },
};
