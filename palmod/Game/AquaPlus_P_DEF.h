#pragma once

const std::vector<uint16_t>AquaPlus_P_IMGIDS_USED =
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

const std::vector<LPCWSTR> AquaPlusButtonLabelsNormal =
{
    L"01",
    L"02",
    L"03",
    L"04",
    L"05",
    L"06",
    L"07",
    L"08",
    L"09",
    L"10",
    L"11",
    L"12",
    L"13",
    L"14",
    L"15",
    L"16",
    L"17",
    // Unused Palettes
    L"18 (Unused)",
    L"19 (Unused)",
    L"20 (Unused)",
    L"21 (Unused)",
    L"22 (Unused)",
    L"23 (Unused)",
    L"24 (Unused)",
    L"25 (Unused)",
    L"26 (Unused)",
    L"27 (Unused)",
    L"28 (Unused)",
    L"29 (Unused)",
    L"30 (Unused)",
    L"31 (Unused)",
    L"32 (Unused)",
    L"33 (Unused)",
    L"34 (Unused)",
    L"35 (Unused)",
    L"36 (Unused)",
    L"37 (Unused)",
    L"38 (Unused)",
    L"39 (Unused)",
    L"40 (Unused)",
    L"41 (Unused)",
    L"42 (Unused)",
    L"43 (Unused)",
    L"44 (Unused)",
    L"45 (Unused)",
    L"46 (Unused)",
    L"47 (Unused)",
    L"48 (Unused)",
    L"49 (Unused)",
    L"50 (Unused)",
    L"51 (Unused)",
    L"52 (Unused)",
    L"53 (Unused)",
    L"54 (Unused)",
    L"55 (Unused)",
    L"56 (Unused)",
    L"57 (Unused)",
    L"58 (Unused)",
    L"59 (Unused)",
    L"60 (Unused)",
    L"61 (Unused)",
    L"62 (Unused)",
    L"63 (Unused)",
    L"64 (Unused)",
};

const std::vector<LPCWSTR> AquaPlusButtonLabelsBoss =
{
    L"01",
    L"02",
    L"03",
    L"04",
    L"05",
    L"06",
    L"07",
    L"08",
    L"09",
    L"10",
    L"11",
    L"12",
    L"13",
    L"14",
    L"15",
    L"16",
    L"17",
    // Unused Palettes
    L"18 (Unused)",
    L"19 (Unused)",
    L"20 (Unused)",
    L"21 (Unused)",
    L"22 (Unused)",
    L"23 (Unused)",
    L"24 (Unused)",
    L"25 (Unused)",
    L"26 (Unused)",
    L"27 (Unused)",
    L"28 (Unused)",
    L"29 (Unused)",
    L"30 (Unused)",
    L"31 (Unused)",
    L"32 (Unused)",
    L"33 (Unused)",
    L"34 (Unused)",
    L"35 (Unused)",
    L"36 (Unused)",
    L"37 (Unused)",
    L"38 (Unused)",
    L"39 (Unused)",
    L"40 (Unused)",
    L"41 (Unused)",
    L"42 (Unused)",
    L"43 (Unused)",
    L"44 (Unused)",
    L"45 (Unused)",
    L"46 (Unused)",
    L"47 (Unused)",
    L"48 (Unused)",
    L"49 (Unused)",
    L"50 (Unused)",
    L"51 (Unused)",
    L"52 (Unused)",
    L"53 (Unused)",
    L"54 (Unused)",
    L"55 (Unused)",
    L"56 (Unused)",
    L"57 (Unused)",
    L"58 (Unused)",
    L"59 (Unused)",
    L"60 (Unused)",
    L"61 (Unused)",
    L"62 (Unused)",
    L"63 (Unused)",
    L"64 (Unused)",
};

const sGCBUPF_BasicNodeData AquaPlusPaletteNodesNormal =
{
    { L"Palettes" }, 0x0, AquaPlusButtonLabelsNormal
};

const sGCBUPF_BasicNodeData AquaPlusPaletteNodesBoss =
{
    { L"Palettes" }, 0x0, AquaPlusButtonLabelsBoss
};

const std::vector<sGCBUPF_BasicFileData> AquaPlusCharacterData_NL =
{
    { L"flashrom\\act\\chara\\chara_07_00.pal",          L"Arawn",                        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Arawn, 0x00 },
    { L"flashrom\\act\\chara\\chara_0D_00.pal",          L"Chizuru",                      0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Chizuru, 0x00 },
    { L"flashrom\\act\\chara\\chara_0D_01.pal",          L"Chizuru (Demon Blood)",        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Chizuru, 0x00 },
    { L"flashrom\\act\\chara\\chara_04_00.pal",          L"Hakuowlo",                     0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Hakuowlo, 0x00 },
    { L"flashrom\\act\\chara\\chara_04s_00.pal",         L"Hakuowlo (Aruruu & Eruruu)",   0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Hakuowlo, 0x01 },
    { L"flashrom\\act\\chara\\chara_06_00.pal",          L"Karulau",                      0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Karulau, 0x00 },
    { L"flashrom\\act\\chara\\chara_01_00.pal",          L"Konomi",                       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Konomi, 0x00 },
    { L"flashrom\\act\\chara\\chara_01s_00.pal",         L"Konomi (Dog & Friends)",       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Konomi, 0x01 },
    { L"flashrom\\act\\chara\\chara_02_00.pal",          L"Manaka",                       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Manaka, 0x00 },
    { L"flashrom\\act\\chara\\chara_09_00.pal",          L"Morgan",                       0x10010, AquaPlusPaletteNodesBoss,          GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Morgan, 0x00 },
    { L"flashrom\\act\\chara\\chara_03_00.pal",          L"Multi",                        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Multi, 0x00 },
    { L"flashrom\\act\\chara\\chara_03p_00.pal",         L"Multi (Broom Effect)",         0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Multi, 0x01 },
    { L"flashrom\\act\\chara\\chara_0C_00.pal",          L"Oboro",                        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Oboro, 0x00 },
    { L"flashrom\\act\\chara\\chara_0Cs_00.pal",         L"Oboro (Dorry & Guraa)",        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Oboro, 0x01 },
    { L"flashrom\\act\\chara\\chara_08_00.pal",          L"Riannon",                      0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Riannon, 0x00 },
    { L"flashrom\\act\\chara\\chara_0B_00.pal",          L"Sasara",                       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Sasara, 0x00 },
    { L"flashrom\\act\\chara\\chara_0Bp_00.pal",         L"Sasara (Frog 1)",              0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Sasara, 0x01 },
    { L"flashrom\\act\\chara\\chara_0Bs_00.pal",         L"Sasara (Frog 2)",              0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Sasara, 0x01 },
    { L"flashrom\\act\\chara\\chara_00_00.pal",          L"Tamaki",                       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Tamaki, 0x00 },
    { L"flashrom\\act\\chara\\chara_00s_00.pal",         L"Tamaki (Dog)",                 0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Tamaki, 0x01 },
    { L"flashrom\\act\\chara\\chara_05_00.pal",          L"Touka",                        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Touka, 0x00 },

    { L"flashrom\\act\\partner\\partner_0A_00.pal",      L"(Partner) Boss Ma-ryan",       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x00 },
    { L"flashrom\\act\\partner\\partner_03_00.pal",      L"(Partner) Camyu",              0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x01 },
    { L"flashrom\\act\\partner\\partner_0D_00.pal",      L"(Partner) Llyr",               0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x02 },
    { L"flashrom\\act\\partner\\partner_01_00.pal",      L"(Partner) Ma-ryan",            0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x03 },
    { L"flashrom\\act\\partner\\partner_09_00.pal",      L"(Partner) Mizuki",             0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x04 },
    { L"flashrom\\act\\partner\\partner_04_00.pal",      L"(Partner) Octavia",            0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x05 },
    { L"flashrom\\act\\partner\\partner_05_00.pal",      L"(Partner) Rathly",             0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x06 },
    { L"flashrom\\act\\partner\\partner_07_00.pal",      L"(Partner) Rina",               0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x07 },
    { L"flashrom\\act\\partner\\partner_08_00.pal",      L"(Partner) Satsuki",            0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x08 },
    { L"flashrom\\act\\partner\\partner_0C_00.pal",      L"(Partner) Serika",             0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x09 },
    { L"flashrom\\act\\partner\\partner_02_00.pal",      L"(Partner) Ulthury",            0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x0a },
    { L"flashrom\\act\\partner\\partner_0B_00.pal",      L"(Partner) Yu",                 0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x0b },
    { L"flashrom\\act\\partner\\partner_00_00.pal",      L"(Partner) Yuma",               0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x0d },
    { L"flashrom\\act\\partner\\partner_06_00.pal",      L"(Partner) Yuki",               0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x0c },

    //{ L"flashrom\\act\\chara\\chara_0A_00.pal",          L"(Unused) Tamaki",              0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Tamaki, 0x00 },
    { L"flashrom\\act\\partner\\partner_0F_00.pal",      L"(Unused) Ma-ryan",             0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x00 },
};

const std::vector<sGCBUPF_BasicFileData> AquaPlusCharacterData_P =
{
    { L"USRDIR\\act\\chara\\chara_07_00.pal",          L"Arawn",                        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Arawn, 0x00 },
    { L"USRDIR\\act\\chara\\chara_0D_00.pal",          L"Chizuru",                      0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Chizuru, 0x00 },
    { L"USRDIR\\act\\chara\\chara_0D_01.pal",          L"Chizuru (Demon Blood)",        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Chizuru, 0x00 },
    { L"USRDIR\\act\\chara\\chara_04_00.pal",          L"Hakuowlo",                     0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Hakuowlo, 0x00 },
    { L"USRDIR\\act\\chara\\chara_04s_00.pal",         L"Hakuowlo (Aruruu & Eruruu)",   0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Hakuowlo, 0x01 },
    { L"USRDIR\\act\\chara\\chara_06_00.pal",          L"Karulau",                      0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Karulau, 0x00 },
    { L"USRDIR\\act\\chara\\chara_01_00.pal",          L"Konomi",                       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Konomi, 0x00 },
    { L"USRDIR\\act\\chara\\chara_01s_00.pal",         L"Konomi (Dog & Friends)",       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Konomi, 0x01 },
    { L"USRDIR\\act\\chara\\chara_02_00.pal",          L"Manaka",                       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Manaka, 0x00 },
    { L"USRDIR\\act\\chara\\chara_09_00.pal",          L"Morgan",                       0x10010, AquaPlusPaletteNodesBoss,          GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Morgan, 0x00 },
    { L"USRDIR\\act\\chara\\chara_03_00.pal",          L"Multi",                        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Multi, 0x00 },
    { L"USRDIR\\act\\chara\\chara_03p_00.pal",         L"Multi (Broom Effect)",         0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Multi, 0x01 },
    { L"USRDIR\\act\\chara\\chara_0C_00.pal",          L"Oboro",                        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Oboro, 0x00 },
    { L"USRDIR\\act\\chara\\chara_0Cs_00.pal",         L"Oboro (Dorry & Guraa)",        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Oboro, 0x01 },
    { L"USRDIR\\act\\chara\\chara_08_00.pal",          L"Riannon",                      0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Riannon, 0x00 },
    { L"USRDIR\\act\\chara\\chara_0B_00.pal",          L"Sasara",                       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Sasara, 0x00 },
    { L"USRDIR\\act\\chara\\chara_0Bp_00.pal",         L"Sasara (Frog 1)",              0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Sasara, 0x01 },
    { L"USRDIR\\act\\chara\\chara_0Bs_00.pal",         L"Sasara (Frog 2)",              0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Sasara, 0x01 },
    { L"USRDIR\\act\\chara\\chara_00_00.pal",          L"Tamaki",                       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Tamaki, 0x00 },
    { L"USRDIR\\act\\chara\\chara_00s_00.pal",         L"Tamaki (Dog)",                 0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Tamaki, 0x01 },
    { L"USRDIR\\act\\chara\\chara_05_00.pal",          L"Touka",                        0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Touka, 0x00 },

    { L"USRDIR\\act\\partner\\partner_0A_00.pal",      L"(Partner) Boss Ma-ryan",       0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x00 },
    { L"USRDIR\\act\\partner\\partner_03_00.pal",      L"(Partner) Camyu",              0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x01 },
    { L"USRDIR\\act\\partner\\partner_0D_00.pal",      L"(Partner) Llyr",               0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x02 },
    { L"USRDIR\\act\\partner\\partner_01_00.pal",      L"(Partner) Ma-ryan",            0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x03 },
    { L"USRDIR\\act\\partner\\partner_09_00.pal",      L"(Partner) Mizuki",             0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x04 },
    { L"USRDIR\\act\\partner\\partner_04_00.pal",      L"(Partner) Octavia",            0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x05 },
    { L"USRDIR\\act\\partner\\partner_05_00.pal",      L"(Partner) Rathly",             0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x06 },
    { L"USRDIR\\act\\partner\\partner_07_00.pal",      L"(Partner) Rina",               0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x07 },
    { L"USRDIR\\act\\partner\\partner_08_00.pal",      L"(Partner) Satsuki",            0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x08 },
    { L"USRDIR\\act\\partner\\partner_0C_00.pal",      L"(Partner) Serika",             0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x09 },
    { L"USRDIR\\act\\partner\\partner_02_00.pal",      L"(Partner) Ulthury",            0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x0a },
    { L"USRDIR\\act\\partner\\partner_0B_00.pal",      L"(Partner) Yu",                 0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x0b },
    { L"USRDIR\\act\\partner\\partner_00_00.pal",      L"(Partner) Yuma",               0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x0c },
    { L"USRDIR\\act\\partner\\partner_06_00.pal",      L"(Partner) Yuki",               0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x0d },

    { L"USRDIR\\act\\chara\\chara_0A_00.pal",          L"(Unused) Tamaki",              0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Tamaki, 0x00 },
    { L"USRDIR\\act\\partner\\partner_0F_00.pal",      L"(Unused) Ma-ryan",             0x10010, AquaPlusPaletteNodesNormal,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10, indexAquaPlusSprites_Partner, 0x03 },
};
