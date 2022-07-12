#pragma once

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

const std::vector<LPCWSTR> PersonaPaletteNodes =
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

struct Persona4PaletteData
{
    std::wstring strName;
    int16_t nImageSet = -1;
    int16_t nImageIndex = -1;
};

const std::vector<Persona4PaletteData> Persona4PalettesDefault =
{
    { L"Main" },
    { L"Persona" },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PaletteCSEL =
{
    { L"Main" },
    { L"Persona" },
};


const std::vector<Persona4PaletteData> Persona4PalettesAigis =
{
    { L"Main", indexP4AUSprites_Aigis, 0x00 },
    { L"Persona: Athena", indexP4AUSprites_Aigis, 0x01 },
    { L"Extra 1", indexP4AUSprites_Aigis, 0x02 },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesAigisCSEL =
{
    { L"Main", indexP4AUSprites_Aigis, 0x00 },
    { L"Persona: Athena", indexP4AUSprites_Aigis, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesAkihiko =
{
    { L"Main", indexP4AUSprites_Akihiko, 0x00 },
    { L"Persona: Caesar", indexP4AUSprites_Akihiko, 0x01 },
    { L"Extra 1", indexP4AUSprites_Akihiko, 0x02 },
    { L"Extra 2", indexP4AUSprites_Akihiko, 0x03 },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesAkihikoCSEL =
{
    { L"Main", indexP4AUSprites_Akihiko, 0x00 },
    { L"Persona: Caesar", indexP4AUSprites_Akihiko, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesChie =
{
    { L"Main", indexP4AUSprites_Chie, 0x00 },
    { L"Persona: Tomoe", indexP4AUSprites_Chie, 0x01 },
    { L"Extra 1", indexP4AUSprites_Chie, 0x02 },
    { L"Extra 2", indexP4AUSprites_Chie, 0x03 },
    { L"Extra 3", indexP4AUSprites_Chie, 0x04 },
    { L"Extra 4", indexP4AUSprites_Chie, 0x05 },
    { L"Extra 5" },
    { L"Extra 6", indexP4AUSprites_Chie, 0x07 },
};

const std::vector<Persona4PaletteData> Persona4PalettesChieCSEL =
{
    { L"Main", indexP4AUSprites_Chie, 0x00 },
    { L"Persona: Tomoe", indexP4AUSprites_Chie, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesElizabeth =
{
    { L"Main", indexP4AUSprites_Elizabeth, 0x00 },
    { L"Persona: Thanatos", indexP4AUSprites_Elizabeth, 0x01 },
    { L"Extra 1", indexP4AUSprites_Elizabeth, 0x02 },
    { L"Extra 2", indexP4AUSprites_Elizabeth, 0x03 },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesElizabethCSEL =
{
    { L"Main", indexP4AUSprites_Elizabeth, 0x00 },
    { L"Persona: Thanatos", indexP4AUSprites_Elizabeth, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesJunpei =
{
    { L"Main", indexP4AUSprites_Junpei, 0x00 },
    { L"Persona: Trismegistus", indexP4AUSprites_Junpei, 0x01 },
    { L"Extra 1", indexP4AUSprites_Junpei, 0x02 },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesJunpeiCSEL =
{
    { L"Main", indexP4AUSprites_Junpei, 0x00 },
    { L"Persona: Trismegistus", indexP4AUSprites_Junpei, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesKanji =
{
    { L"Main", indexP4AUSprites_Kanji, 0x00 },
    { L"Persona: Take-Mikazuchi", indexP4AUSprites_Kanji, 0x01 },
    { L"Extra 1", indexP4AUSprites_Kanji, 0x02 },
    { L"Extra 2", indexP4AUSprites_Kanji, 0x03 },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesKanjiCSEL =
{
    { L"Main", indexP4AUSprites_Kanji, 0x00 },
    { L"Persona: Take-Mikazuchi", indexP4AUSprites_Kanji, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesKen =
{
    { L"Ken - Main", indexP4AUSprites_Ken, 0x00 },
    { L"Ken - Persona: Kala-Nemi", indexP4AUSprites_Ken, 0x1 },
    { L"Koromaru - Main", indexP4AUSprites_Ken, 0x02 },
    { L"Koromaru - Persona: Cerberus", indexP4AUSprites_Ken, 0x03 },
    { L"Extra 1", indexP4AUSprites_Ken, 0x04 },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
};

const std::vector<Persona4PaletteData> Persona4PalettesKenCSEL =
{
    { L"Main: Ken & Koromaru", indexP4AUSprites_Ken, 0x08 },
    { L"Personas: Kala-Nemi & Cerberus", indexP4AUSprites_Ken, 0x09 },
};

const std::vector<Persona4PaletteData> Persona4PalettesLabrys =
{
    { L"Main", indexP4AUSprites_Labrys, 0x00 },
    { L"Persona: Ariadne", indexP4AUSprites_Labrys, 0x01 },
    { L"Extra 1", indexP4AUSprites_Labrys, 0x02 },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesLabrysCSEL =
{
    { L"Main", indexP4AUSprites_Labrys, 0x00 },
    { L"Persona: Ariadne", indexP4AUSprites_Labrys, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesMargaret =
{
    { L"Main", indexP4AUSprites_Margaret, 0x00 },
    { L"Persona: Ardha", indexP4AUSprites_Margaret, 0x01 },
    { L"Persona: Cu Chulainn", indexP4AUSprites_Margaret, 0x02 },
    { L"Persona: Yoshitsune", indexP4AUSprites_Margaret, 0x03 },
    { L"Extra 1", indexP4AUSprites_Margaret, 0x04 },
    { L"Extra 2", indexP4AUSprites_Margaret, 0x05 },
    { L"Extra 3", indexP4AUSprites_Margaret, 0x06 },
    { L"Extra 4" },
};

const std::vector<Persona4PaletteData> Persona4PalettesMargaretCSEL =
{
    { L"Main", indexP4AUSprites_Margaret, 0x00 },
    { L"Personas: Ardha,Cu Chulainn,Yoshitsune", indexP4AUSprites_Margaret, 0x08 },
};

const std::vector<Persona4PaletteData> Persona4PalettesMarie =
{
    { L"Main", indexP4AUSprites_Marie, 0x00 },
    { L"Persona: Kaguya", indexP4AUSprites_Marie, 0x01 },
    { L"Extra 1", indexP4AUSprites_Marie, 0x02 },
    { L"Extra 2", indexP4AUSprites_Marie, 0x03 },
    { L"Extra 3" },
    { L"Extra 4", indexP4AUSprites_Marie, 0x05 },
    { L"Extra 5", indexP4AUSprites_Marie, 0x05 }, //Reuse the preview from Extra4
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesMarieCSEL =
{
    { L"Main", indexP4AUSprites_Marie, 0x00 },
    { L"Persona: Kaguya", indexP4AUSprites_Marie, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesMitsuru =
{
    { L"Main", indexP4AUSprites_Mitsuru, 0x00 },
    { L"Persona: Artemisia", indexP4AUSprites_Mitsuru, 0x01 },
    { L"Extra 1", indexP4AUSprites_Mitsuru, 0x02 },
    { L"Extra 2", indexP4AUSprites_Mitsuru, 0x03 },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5", indexP4AUSprites_Mitsuru, 0x06 },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesMitsuruCSEL =
{
    { L"Main", indexP4AUSprites_Mitsuru, 0x00 },
    { L"Persona: Artemisia", indexP4AUSprites_Mitsuru, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesNaoto =
{
    { L"Main", indexP4AUSprites_Naoto, 0x00 },
    { L"Persona: Sukuna-Hikona", indexP4AUSprites_Naoto, 0x01 },
    { L"Extra 1", indexP4AUSprites_Naoto, 0x02 },
    { L"Extra 2", indexP4AUSprites_Naoto, 0x03 },
    { L"Extra 3", indexP4AUSprites_Naoto, 0x04 },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesNaotoCSEL =
{
    { L"Main", indexP4AUSprites_Naoto, 0x00 },
    { L"Persona: Sukuna-Hikona", indexP4AUSprites_Naoto, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesRise =
{
    { L"Main", indexP4AUSprites_Rise, 0x00 },
    { L"Persona: Himiko", indexP4AUSprites_Rise, 0x01 },
    { L"Extra 1", indexP4AUSprites_Rise, 0x02 },
    { L"Extra 2", indexP4AUSprites_Rise, 0x03 },
    { L"Extra 3", indexP4AUSprites_Rise, 0x04 },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesRiseCSEL =
{
    { L"Main", indexP4AUSprites_Rise, 0x00 },
    { L"Persona: Himiko", indexP4AUSprites_Rise, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesShadow =
{
    { L"Main", indexP4AUSprites_Shadow, 0x00 },
    { L"Persona: Asterius", indexP4AUSprites_Shadow, 0x01 },
    { L"Extra 1", indexP4AUSprites_Shadow, 0x02 },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesShadowCSEL =
{
    { L"Main", indexP4AUSprites_Shadow, 0x00 },
    { L"Persona: Asterius", indexP4AUSprites_Shadow, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesSolo =
{
    { L"Main", indexP4AUSprites_Solo, 0x00 },
    { L"Unused Persona Palette" },
    { L"Extra 1", indexP4AUSprites_Solo, 0x02 },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesSoloCSEL =
{
    { L"Main", indexP4AUSprites_Solo, 0x00 },
    { L"Unused Persona Palette" },
};

const std::vector<Persona4PaletteData> Persona4PalettesSho =
{
    { L"Main", indexP4AUSprites_Sho, 0x00 },
    { L"Persona: Tsukiyomi", indexP4AUSprites_Sho, 0x01 },
    { L"Extra 1", indexP4AUSprites_Sho, 0x02 },
    { L"Extra 2", indexP4AUSprites_Sho, 0x03 },
    { L"Extra 3" },
    { L"Extra 4: Tsukiyomi IK", indexP4AUSprites_Sho, 0x05 },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesShoCSEL =
{
    { L"Main", indexP4AUSprites_Sho, 0x00 },
    { L"Persona: Tsukiyomi", indexP4AUSprites_Sho, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesTeddie =
{
    { L"Main", indexP4AUSprites_Teddie, 0x00 },
    { L"Persona: Kintoki-Douji", indexP4AUSprites_Teddie, 0x01 },
    { L"Extra 1", indexP4AUSprites_Teddie, 0x02 },
    { L"Extra 2", indexP4AUSprites_Teddie, 0x03 },
    { L"Extra 3", indexP4AUSprites_Teddie, 0x04 },
    { L"Extra 4", indexP4AUSprites_Teddie, 0x05 },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesTeddieCSEL =
{
    { L"Main", indexP4AUSprites_Teddie, 0x00 },
    { L"Persona: Kintoki-Douji", indexP4AUSprites_Teddie, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesTohru =
{
    { L"Main", indexP4AUSprites_Tohru, 0x00 },
    { L"Persona: Magatsu Izanagi", indexP4AUSprites_Tohru, 0x01 },
    { L"Extra 1" },
    { L"Extra 2", indexP4AUSprites_Tohru, 0x03 },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesTohruCSEL =
{
    { L"Main", indexP4AUSprites_Tohru, 0x00 },
    { L"Persona: Magatsu Izanagi", indexP4AUSprites_Tohru, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesYosuke =
{
    { L"Main", indexP4AUSprites_Yosuke, 0x00 },
    { L"Persona: Jiraiya", indexP4AUSprites_Yosuke, 0x01 },
    { L"Extra 1", indexP4AUSprites_Yosuke, 0x02 },
    { L"Extra 2", indexP4AUSprites_Yosuke, 0x03 },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesYosukeCSEL =
{
    { L"Main", indexP4AUSprites_Yosuke, 0x00 },
    { L"Persona: Jiraiya", indexP4AUSprites_Yosuke, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesYu =
{
    { L"Main", indexP4AUSprites_Yu, 0x00 },
    { L"Persona: Izanagi", indexP4AUSprites_Yu, 0x01 },
    { L"Extra 1", indexP4AUSprites_Yu, 0x02 },
    { L"Extra 2", indexP4AUSprites_Yu, 0x03 },
    { L"Extra 3: Izanagi no Okami", indexP4AUSprites_Yu, 0x04 },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesYuCSEL =
{
    { L"Main", indexP4AUSprites_Yu, 0x00 },
    { L"Persona: Izanagi", indexP4AUSprites_Yu, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesYukari =
{
    { L"Main", indexP4AUSprites_Yukari, 0x00 },
    { L"Persona: Isis", indexP4AUSprites_Yukari, 0x01 },
    { L"Extra 1", indexP4AUSprites_Yukari, 0x02 },
    { L"Extra 2" },
    { L"Extra 3", indexP4AUSprites_Yukari, 0x04 },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesYukariCSEL =
{
    { L"Main", indexP4AUSprites_Yukari, 0x00 },
    { L"Persona: Isis", indexP4AUSprites_Yukari, 0x01 },
};

const std::vector<Persona4PaletteData> Persona4PalettesYukiko =
{
    { L"Main", indexP4AUSprites_Yukiko, 0x00 },
    { L"Persona: Konohana-Sakuya", indexP4AUSprites_Yukiko, 0x01 },
    { L"Extra 1" },
    { L"Extra 2", indexP4AUSprites_Yukiko, 0x03 },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
};

const std::vector<Persona4PaletteData> Persona4PalettesYukikoCSEL =
{
    { L"Main", indexP4AUSprites_Yukiko, 0x00 },
    { L"Persona: Konohana-Sakuya", indexP4AUSprites_Yukiko, 0x01 },
};

struct PersonaFileData
{
    std::wstring pszFileName;
    std::wstring pszCharacter;
    uint32_t nExpectedFileSize = 0;
    const std::vector<Persona4PaletteData>* paletteInfo = nullptr;
    uint32_t nInitialLocation = 0;
    uint32_t nPaletteSetLength = 0;
};
