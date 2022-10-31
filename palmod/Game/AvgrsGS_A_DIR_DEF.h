#pragma once

const std::vector<uint16_t> AvgrsGS_A_IMGIDS_USED =
{
    indexAiGSSprites_BlackKnight,       // 0x0b
    indexAiGSSprites_CaptainAmerica,    // 0x0c
    indexAiGSSprites_CaptainAtlas,      // 0x0d
    indexAiGSSprites_Crystal,           // 0x0e
    indexAiGSSprites_DrMinerva,         // 0x0f
    indexAiGSSprites_GalenKor,          // 0x10
    indexAiGSSprites_GiantMan,          // 0x11
    indexAiGSSprites_IronMan,           // 0x12
    indexAiGSSprites_Korath,            // 0x13
    indexAiGSSprites_MightyThor,        // 0x14
    indexAiGSSprites_Ronan,             // 0x15
    indexAiGSSprites_Sentry,            // 0x16
    indexAiGSSprites_Shatterax,         // 0x17
    indexAiGSSprites_Supremor,          // 0x18
    indexAiGSSprites_Thunderstrike,     // 0x19
    indexAiGSSprites_Ultimus,           // 0x1a
    indexAiGSSprites_Vision,            // 0x1b
    indexAiGSSprites_Stages,            // 0x1c
    indexAiGSSprites_Endings,           // 0x1d
    indexAiGSSprites_Bonus,             // 0x1e
};

const sGame_PaletteDataset AvgrsGS_A_CaptainAmerica_P1[] =
{
    { L"Captain America P1", 0xf23c0, 0xf23e0, indexAiGSSprites_CaptainAmerica, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_CaptainAmerica_P2[] =
{
    { L"Captain America P2", 0xf24a0, 0xf24c0, indexAiGSSprites_CaptainAmerica, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_CaptainAmerica_Effects[] =
{
    { L"Captain America Burned", 0xf23e0, 0xf2400, indexAiGSSprites_CaptainAmerica, 0x00 },
    { L"Captain America Zapped", 0xf2400, 0xf2420, indexAiGSSprites_CaptainAmerica, 0x00 },
    { L"Captain America Effect 1", 0xf2420, 0xf2440 },
    { L"Captain America Effect 2", 0xf2440, 0xf2460 },
    { L"Captain America Effect 3", 0xf2460, 0xf2480, indexAiGSSprites_CaptainAmerica, 0x00 },
    { L"Captain America Effect 4", 0xf2480, 0xf24a0 },
};

const sGame_PaletteDataset AvgrsGS_A_Thunderstrike_P1[] =
{
    { L"Thunderstrike P1", 0xf24c0, 0xf24e0, indexAiGSSprites_Thunderstrike, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Thunderstrike_P2[] =
{
    { L"Thunderstrike P2", 0xf25a0, 0xf25c0, indexAiGSSprites_Thunderstrike, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Thunderstrike_Effects[] =
{
    { L"Thunderstrike Burned", 0xf24e0, 0xf2500, indexAiGSSprites_Thunderstrike, 0x00 },
    { L"Thunderstrike Zapped", 0xf2500, 0xf2520, indexAiGSSprites_Thunderstrike, 0x00 },
    { L"Thunderstrike Effect 1", 0xf2520, 0xf2540 },
    { L"Thunderstrike Effect 2", 0xf2540, 0xf2560 },
    { L"Thunderstrike Effect 3", 0xf2560, 0xf2580 },
    { L"Thunderstrike Effect 4", 0xf2580, 0xf25a0 },
};

const sGame_PaletteDataset AvgrsGS_A_Crystal_P1[] =
{
    { L"Crystal P1", 0xf25c0, 0xf25e0, indexAiGSSprites_Crystal, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Crystal_P2[] =
{
    { L"Crystal P2", 0xf26a0, 0xf26c0, indexAiGSSprites_Crystal, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Crystal_Effects[] =
{
    { L"Crystal Burned", 0xf25e0, 0xf2600, indexAiGSSprites_Crystal, 0x00 },
    { L"Crystal Zapped", 0xf2600, 0xf2620, indexAiGSSprites_Crystal, 0x00 },
    { L"Crystal Effect 1", 0xf2620, 0xf2640 },
    { L"Crystal Effect 2", 0xf2640, 0xf2660 },
    { L"Crystal Effect 3", 0xf2660, 0xf2680 },
    { L"Crystal Effect 4", 0xf2680, 0xf26a0 },
};

const sGame_PaletteDataset AvgrsGS_A_BlackKnight_P1[] =
{
    { L"Black Knight P1", 0xf26c0, 0xf26e0, indexAiGSSprites_BlackKnight, 0x00, &pairNext4Unsafe },
};

const sGame_PaletteDataset AvgrsGS_A_BlackKnight_P2[] =
{
    { L"Black Knight P2", 0xf27a0, 0xf27c0, indexAiGSSprites_BlackKnight, 0x00, &pairNext3Unsafe },
};

const sGame_PaletteDataset AvgrsGS_A_BlackKnight_Effects[] =
{
    { L"Black Knight Burned", 0xf26e0, 0xf2700, indexAiGSSprites_BlackKnight, 0x00 },
    { L"Black Knight Zapped", 0xf2700, 0xf2720, indexAiGSSprites_BlackKnight, 0x00 },
    { L"Black Knight Effect 1", 0xf2720, 0xf2740, indexAiGSSprites_BlackKnight, 0x01 },
    { L"Black Knight Effect 2", 0xf2740, 0xf2760 },
    { L"Black Knight Effect 3", 0xf2760, 0xf2780 },
    { L"Black Knight Effect 4", 0xf2780, 0xf27a0, indexAiGSSprites_BlackKnight, 0x01 },
};

const sGame_PaletteDataset AvgrsGS_A_Shatterax_P1[] =
{
    { L"Shatterax P1", 0xf27c0, 0xf27e0, indexAiGSSprites_Shatterax, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Shatterax_P2[] =
{
    { L"Shatterax P2", 0xf28a0, 0xf28c0, indexAiGSSprites_Shatterax, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Shatterax_Effects[] =
{
    { L"Shatterax Burned", 0xf27e0, 0xf2800, indexAiGSSprites_Shatterax, 0x00 },
    { L"Shatterax Zapped", 0xf2800, 0xf2820, indexAiGSSprites_Shatterax, 0x00 },
    { L"Shatterax Effect 1", 0xf2820, 0xf2840 },
    { L"Shatterax Effect 2", 0xf2840, 0xf2860 },
    { L"Shatterax Effect 3", 0xf2860, 0xf2880 },
    { L"Shatterax Effect 4", 0xf2880, 0xf28a0 },
};

const sGame_PaletteDataset AvgrsGS_A_Korath_P1[] =
{
    { L"Korath P1", 0xf28c0, 0xf28e0, indexAiGSSprites_Korath, 0x00, &pairNext4Unsafe },
};

const sGame_PaletteDataset AvgrsGS_A_Korath_P2[] =
{
    { L"Korath P2", 0xf29a0, 0xf29c0, indexAiGSSprites_Korath, 0x00, &pairNext3Unsafe },
};

const sGame_PaletteDataset AvgrsGS_A_Korath_Effects[] =
{
    { L"Korath Burned", 0xf28e0, 0xf2900, indexAiGSSprites_Korath, 0x00 },
    { L"Korath Zapped", 0xf2900, 0xf2920, indexAiGSSprites_Korath, 0x00 },
    { L"Korath Effect 1", 0xf2920, 0xf2940, indexAiGSSprites_Korath, 0x01 },
    { L"Korath Effect 2", 0xf2940, 0xf2960 },
    { L"Korath Effect 3", 0xf2960, 0xf2980 },
    { L"Korath Effect 4", 0xf2980, 0xf29a0 },
};

const sGame_PaletteDataset AvgrsGS_A_DrMinerva_P1[] =
{
    { L"Dr.Minerva P1", 0xf29c0, 0xf29e0, indexAiGSSprites_DrMinerva, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_DrMinerva_P2[] =
{
    { L"Dr.Minerva P2", 0xf2aa0, 0xf2ac0, indexAiGSSprites_DrMinerva, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_DrMinerva_Effects[] =
{
    { L"Dr.Minerva Burned", 0xf29e0, 0xf2a00, indexAiGSSprites_DrMinerva, 0x00 },
    { L"Dr.Minerva Zapped", 0xf2a00, 0xf2a20, indexAiGSSprites_DrMinerva, 0x00 },
    { L"Dr.Minerva Effect 1", 0xf2a20, 0xf2a40 },
    { L"Dr.Minerva Effect 2", 0xf2a40, 0xf2a60 },
    { L"Dr.Minerva Effect 3", 0xf2a60, 0xf2a80 },
    { L"Dr.Minerva Effect 4", 0xf2a80, 0xf2aa0 },
};

const sGame_PaletteDataset AvgrsGS_A_Supremor_P1[] =
{
    { L"Supremor P1", 0xf2ac0, 0xf2ae0, indexAiGSSprites_Supremor, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Supremor_P2[] =
{
    { L"Supremor P2", 0xf2ba0, 0xf2bc0, indexAiGSSprites_Supremor, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Supremor_Effects[] =
{
    { L"Supremor Burned", 0xf2ae0, 0xf2b00, indexAiGSSprites_Supremor, 0x00 },
    { L"Supremor Zapped", 0xf2b00, 0xf2b20, indexAiGSSprites_Supremor, 0x00 },
    { L"Supremor Effect 1", 0xf2b20, 0xf2b40 },
    { L"Supremor Effect 2", 0xf2b40, 0xf2b60 },
    { L"Supremor Effect 3", 0xf2b60, 0xf2b80 },
    { L"Supremor Effect 4", 0xf2b80, 0xf2ba0 },
};

const sGame_PaletteDataset AvgrsGS_A_GalenKor_P1[] =
{
    { L"Galen-Kor P1", 0xf2bc0, 0xf2be0, indexAiGSSprites_GalenKor, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_GalenKor_P2[] =
{
    { L"Galen-Kor P2", 0xf2ca0, 0xf2cc0, indexAiGSSprites_GalenKor, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_GalenKor_Effects[] =
{
    { L"Galen-Kor Burned", 0xf2be0, 0xf2c00, indexAiGSSprites_GalenKor, 0x00 },
    { L"Galen-Kor Zapped", 0xf2c00, 0xf2c20, indexAiGSSprites_GalenKor, 0x00 },
    { L"Galen-Kor Effect 1", 0xf2c20, 0xf2c40 },
    { L"Galen-Kor Effect 2", 0xf2c40, 0xf2c60 },
    { L"Galen-Kor Effect 3", 0xf2c60, 0xf2c80 },
    { L"Galen-Kor Effect 4", 0xf2c80, 0xf2ca0 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_IronMan_P1[] =
{
    { L"Iron Man P1", 0xf2cc0, 0xf2ce0, indexAiGSSprites_IronMan, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_IronMan_P2[] =
{
    { L"Iron Man P2", 0xf2d00, 0xf2d20, indexAiGSSprites_IronMan, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_IronMan_Effects[] =
{
    { L"Iron Man Effect", 0xf2ce0, 0xf2d00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_MightyThor_P1[] =
{
    { L"Mighty Thor P1", 0xf2d20, 0xf2d40, indexAiGSSprites_MightyThor, 0x00, &pairNext2Unsafe },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_MightyThor_P2[] =
{
    { L"Mighty Thor P2", 0xf2d60, 0xf2d80, indexAiGSSprites_MightyThor, 0x00, &pairNextUnsafe },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_MightyThor_Effects[] =
{
    { L"Mighty Thor Effect", 0xf2d40, 0xf2d60, indexAiGSSprites_MightyThor, 0x01 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Vision_P1[] =
{
    { L"Vision P1", 0xf2d80, 0xf2da0, indexAiGSSprites_Vision, 0x00, &pairNext2Unsafe },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Vision_P2[] =
{
    { L"Vision P2", 0xf2dc0, 0xf2de0, indexAiGSSprites_Vision, 0x00, &pairNextUnsafe },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Vision_Effects[] =
{
    { L"Vision Effect", 0xf2da0, 0xf2dc0, indexAiGSSprites_Vision, 0x01 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_GiantMan_P1[] =
{
    { L"Giant Man P1", 0xf2de0, 0xf2e00, indexAiGSSprites_GiantMan, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_GiantMan_P2[] =
{
    { L"Giant Man P2", 0xf2e20, 0xf2e40, indexAiGSSprites_GiantMan, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_GiantMan_Effects[] =
{
    { L"Giant Man Effect", 0xf2e00, 0xf2e20, indexAiGSSprites_GiantMan, 0x01 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Ultimus_P1[] =
{
    { L"Ultimus P1", 0xf2e40, 0xf2e60, indexAiGSSprites_Ultimus, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Ultimus_P2[] =
{
    { L"Ultimus P2", 0xf2e80, 0xf2ea0, indexAiGSSprites_Ultimus, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Ultimus_Effects[] =
{
    { L"Ultimus Effect", 0xf2e60, 0xf2e80 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Ronan_P1[] =
{
    { L"Ronan P1", 0xf2ea0, 0xf2ec0, indexAiGSSprites_Ronan, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Ronan_P2[] =
{
    { L"Ronan P2", 0xf2ee0, 0xf2f00, indexAiGSSprites_Ronan, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Ronan_Effects[] =
{
    { L"Ronan Effect", 0xf2ec0, 0xf2ee0 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Sentry_P1[] =
{
    { L"Sentry P1", 0xf2f00, 0xf2f20, indexAiGSSprites_Sentry, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Sentry_P2[] =
{
    { L"Sentry P2", 0xf2f40, 0xf2f60, indexAiGSSprites_Sentry, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_Sentry_Effects[] =
{
    { L"Sentry Effect", 0xf2f20, 0xf2f40 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_CaptainAtlas_P1[] =
{
    { L"Captain Atlas P1", 0xf2f60, 0xf2f80, indexAiGSSprites_CaptainAtlas, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_CaptainAtlas_P2[] =
{
    { L"Captain Atlas P2", 0xf2fa0, 0xf2fc0, indexAiGSSprites_CaptainAtlas, 0x00 },
};

const sGame_PaletteDataset AvgrsGS_A_Assists_CaptainAtlas_Effects[] =
{
    { L"Captain Atlas Effect", 0xf2f80, 0xf2fa0 },
};

const sDescTreeNode AvgrsGS_A_Crystal_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Crystal_P1, ARRAYSIZE(AvgrsGS_A_Crystal_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Crystal_P2, ARRAYSIZE(AvgrsGS_A_Crystal_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Crystal_Effects, ARRAYSIZE(AvgrsGS_A_Crystal_Effects) },
};

const sDescTreeNode AvgrsGS_A_CaptainAmerica_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_CaptainAmerica_P1, ARRAYSIZE(AvgrsGS_A_CaptainAmerica_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_CaptainAmerica_P2, ARRAYSIZE(AvgrsGS_A_CaptainAmerica_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_CaptainAmerica_Effects, ARRAYSIZE(AvgrsGS_A_CaptainAmerica_Effects) },
};

const sDescTreeNode AvgrsGS_A_BlackKnight_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BlackKnight_P1, ARRAYSIZE(AvgrsGS_A_BlackKnight_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BlackKnight_P2, ARRAYSIZE(AvgrsGS_A_BlackKnight_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BlackKnight_Effects, ARRAYSIZE(AvgrsGS_A_BlackKnight_Effects) },
};

const sDescTreeNode AvgrsGS_A_Thunderstrike_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Thunderstrike_P1, ARRAYSIZE(AvgrsGS_A_Thunderstrike_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Thunderstrike_P2, ARRAYSIZE(AvgrsGS_A_Thunderstrike_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Thunderstrike_Effects, ARRAYSIZE(AvgrsGS_A_Thunderstrike_Effects) },
};

const sDescTreeNode AvgrsGS_A_Vision_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Vision_P1, ARRAYSIZE(AvgrsGS_A_Assists_Vision_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Vision_P2, ARRAYSIZE(AvgrsGS_A_Assists_Vision_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Vision_Effects, ARRAYSIZE(AvgrsGS_A_Assists_Vision_Effects) },
};

const sDescTreeNode AvgrsGS_A_DrMinerva_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_DrMinerva_P1, ARRAYSIZE(AvgrsGS_A_DrMinerva_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_DrMinerva_P2, ARRAYSIZE(AvgrsGS_A_DrMinerva_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_DrMinerva_Effects, ARRAYSIZE(AvgrsGS_A_DrMinerva_Effects) },
};

const sDescTreeNode AvgrsGS_A_Shatterax_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Shatterax_P1, ARRAYSIZE(AvgrsGS_A_Shatterax_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Shatterax_P2, ARRAYSIZE(AvgrsGS_A_Shatterax_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Shatterax_Effects, ARRAYSIZE(AvgrsGS_A_Shatterax_Effects) },
};

const sDescTreeNode AvgrsGS_A_CaptainAtlas_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_CaptainAtlas_P1, ARRAYSIZE(AvgrsGS_A_Assists_CaptainAtlas_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_CaptainAtlas_P2, ARRAYSIZE(AvgrsGS_A_Assists_CaptainAtlas_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_CaptainAtlas_Effects, ARRAYSIZE(AvgrsGS_A_Assists_CaptainAtlas_Effects) },
};

const sDescTreeNode AvgrsGS_A_Korath_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Korath_P1, ARRAYSIZE(AvgrsGS_A_Korath_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Korath_P2, ARRAYSIZE(AvgrsGS_A_Korath_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Korath_Effects, ARRAYSIZE(AvgrsGS_A_Korath_Effects) },
};

const sDescTreeNode AvgrsGS_A_IronMan_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_IronMan_P1, ARRAYSIZE(AvgrsGS_A_Assists_IronMan_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_IronMan_P2, ARRAYSIZE(AvgrsGS_A_Assists_IronMan_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_IronMan_Effects, ARRAYSIZE(AvgrsGS_A_Assists_IronMan_Effects) },
};

const sDescTreeNode AvgrsGS_A_MightyThor_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_MightyThor_P1, ARRAYSIZE(AvgrsGS_A_Assists_MightyThor_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_MightyThor_P2, ARRAYSIZE(AvgrsGS_A_Assists_MightyThor_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_MightyThor_Effects, ARRAYSIZE(AvgrsGS_A_Assists_MightyThor_Effects) },
};

const sDescTreeNode AvgrsGS_A_Supremor_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Supremor_P1, ARRAYSIZE(AvgrsGS_A_Supremor_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Supremor_P2, ARRAYSIZE(AvgrsGS_A_Supremor_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Supremor_Effects, ARRAYSIZE(AvgrsGS_A_Supremor_Effects) },
};

const sDescTreeNode AvgrsGS_A_GalenKor_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_GalenKor_P1, ARRAYSIZE(AvgrsGS_A_GalenKor_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_GalenKor_P2, ARRAYSIZE(AvgrsGS_A_GalenKor_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_GalenKor_Effects, ARRAYSIZE(AvgrsGS_A_GalenKor_Effects) },
};

const sDescTreeNode AvgrsGS_A_GiantMan_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_GiantMan_P1, ARRAYSIZE(AvgrsGS_A_Assists_GiantMan_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_GiantMan_P2, ARRAYSIZE(AvgrsGS_A_Assists_GiantMan_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_GiantMan_Effects, ARRAYSIZE(AvgrsGS_A_Assists_GiantMan_Effects) },
};

const sDescTreeNode AvgrsGS_A_Ronan_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Ronan_P1, ARRAYSIZE(AvgrsGS_A_Assists_Ronan_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Ronan_P2, ARRAYSIZE(AvgrsGS_A_Assists_Ronan_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Ronan_Effects, ARRAYSIZE(AvgrsGS_A_Assists_Ronan_Effects) },
};

const sDescTreeNode AvgrsGS_A_Sentry_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Sentry_P1, ARRAYSIZE(AvgrsGS_A_Assists_Sentry_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Sentry_P2, ARRAYSIZE(AvgrsGS_A_Assists_Sentry_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Sentry_Effects, ARRAYSIZE(AvgrsGS_A_Assists_Sentry_Effects) },
};

const sDescTreeNode AvgrsGS_A_Ultimus_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Ultimus_P1, ARRAYSIZE(AvgrsGS_A_Assists_Ultimus_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Ultimus_P2, ARRAYSIZE(AvgrsGS_A_Assists_Ultimus_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Assists_Ultimus_Effects, ARRAYSIZE(AvgrsGS_A_Assists_Ultimus_Effects) },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_GalenKorsHideout[] =
{
    { L"Galen-Kor's Hideout 1", 0xf33e0, 0xf3460 },
    { L"Galen-Kor's Hideout 2", 0xf3ea0, 0xf40a0 },
    { L"Galen-Kor's Hideout 3", 0xf40a0, 0xf42a0 },
    { L"Galen-Kor's Hideout 4 1/4", 0xf3d40, 0xf3d60 },
    { L"Galen-Kor's Hideout 4 2/4", 0xf3d60, 0xf3d80 },
    { L"Galen-Kor's Hideout 4 3/4", 0xf3d80, 0xf3da0 },
    { L"Galen-Kor's Hideout 4 4/4", 0xf3da0, 0xf3dc0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_KreeOutpost51K[] =
{
    { L"Kree Outpost 51K 1", 0xf34a0, 0xf34c0 },
    { L"Kree Outpost 51K 2", 0xf42a0, 0xf44a0 },
    { L"Kree Outpost 51K 3", 0xf44a0, 0xf46a0 },
    { L"Kree Outpost 51K 4 1/8", 0xf3ba0, 0xf3bc0 },
    { L"Kree Outpost 51K 4 2/8", 0xf3bc0, 0xf3be0 },
    { L"Kree Outpost 51K 4 3/8", 0xf3be0, 0xf3c00 },
    { L"Kree Outpost 51K 4 4/8", 0xf3c00, 0xf3c20 },
    { L"Kree Outpost 51K 4 5/8", 0xf3c20, 0xf3c40 },
    { L"Kree Outpost 51K 4 6/8", 0xf3c40, 0xf3c60 },
    { L"Kree Outpost 51K 4 7/8", 0xf3c60, 0xf3c80 },
    { L"Kree Outpost 51K 4 8/8", 0xf3c80, 0xf3ca0 },
    { L"Kree Outpost 51K 5 1/7 ", 0xf3dc0, 0xf3de0 },
    { L"Kree Outpost 51K 5 2/7", 0xf3de0, 0xf3e00 },
    { L"Kree Outpost 51K 5 3/7", 0xf3e00, 0xf3e20 },
    { L"Kree Outpost 51K 5 4/7", 0xf3e20, 0xf3e40 },
    { L"Kree Outpost 51K 5 5/7", 0xf3e40, 0xf3e60 },
    { L"Kree Outpost 51K 5 6/7", 0xf3e60, 0xf3e80 },
    { L"Kree Outpost 51K 5 7/7", 0xf3e80, 0xf3ea0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_KreeLarBase[] =
{
    { L"Kree-Lar Base 1", 0xf34c0, 0xf3520 },
    { L"Kree-Lar Base 2", 0xf46a0, 0xf48a0 },
    { L"Kree-Lar Base 3 1/5", 0xfe4a0, 0xfe6a0 },
    { L"Kree-Lar Base 3 2/5", 0xfe6a0, 0xfe8a0 },
    { L"Kree-Lar Base 3 3/5", 0xfe8a0, 0xfeaa0 },
    { L"Kree-Lar Base 3 4/5", 0xfeaa0, 0xfeca0 },
    { L"Kree-Lar Base 3 5/5", 0xfeca0, 0xfeea0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_ShiarThrone[] =
{
    { L"Shi'ar Throne 1", 0xf3520, 0xf35a0 },
    { L"Shi'ar Throne 2", 0xf4aa0, 0xf4ca0 },
    { L"Shi'ar Throne 3", 0xf4ca0, 0xf4ea0 },
    { L"Shi'ar Throne 4", 0xf4ea0, 0xf50a0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_SupremeIntelligence[] =
{
    { L"Supreme Intelligence 1", 0xf35a0, 0xf3640 },
    { L"Supreme Intelligence 2", 0xf50a0, 0xf52a0 },
    { L"Supreme Intelligence 3", 0xf52a0, 0xf54a0 },
    { L"Supreme Intelligence 4", 0xf54a0, 0xf56a0 },
    { L"Supreme Intelligence 5 1/3", 0xf3ce0, 0xf3d00 },
    { L"Supreme Intelligence 5 2/3", 0xf3d00, 0xf3d20 },
    { L"Supreme Intelligence 5 3/3", 0xf3d20, 0xf3d40 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_AvengersMansionNight[] =
{
    { L"Avengers Mansion Night 1", 0xf3640, 0xf36a0 },
    { L"Avengers Mansion Night 2", 0xf56a0, 0xf58a0 },
    { L"Avengers Mansion Night 3", 0xf58a0, 0xf5aa0 },
    { L"Avengers Mansion Night 4 1/2", 0xf3ca0, 0xf3cc0 },
    { L"Avengers Mansion Night 4 2/2", 0xf3cc0, 0xf3ce0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_AvengersMansionDay[] =
{
    { L"Avengers Mansion Day 1", 0xf36a0, 0xf3700 },
    { L"Avengers Mansion Day 2", 0xf5aa0, 0xf5ca0 },
    { L"Avengers Mansion Day 3", 0xf5ca0, 0xf5ea0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_ENDINGS_CaptainAmerica[] =
{
    { L"Captain America Ending 1/3", 0xfaaa0, 0xfaca0 },
    { L"Captain America Ending 2/3", 0xfaca0, 0xfaea0 },
    { L"Captain America Ending 3/3", 0xfaea0, 0xfb0a0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_ENDINGS_Thunderstrike[] =
{
    { L"Thunderstrike Ending 1/3", 0xfb0a0, 0xfb2a0 },
    { L"Thunderstrike Ending 2/3", 0xfb2a0, 0xfb4a0 },
    { L"Thunderstrike Ending 3/3", 0xfb4a0, 0xfb6a0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_ENDINGS_Crystal[] =
{
    { L"Crystal Ending 1/3", 0xfb6a0, 0xfb8a0 },
    { L"Crystal Ending 2/3", 0xfb8a0, 0xfbaa0 },
    { L"Crystal Ending 3/3", 0xfbaa0, 0xfbca0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_ENDINGS_BlackKnight[] =
{
    { L"Black Knight Ending 1/3", 0xfbca0, 0xfbea0 },
    { L"Black Knight Ending 2/3", 0xfbea0, 0xfc0a0 },
    { L"Black Knight Ending 3/3", 0xfc0a0, 0xfc2a0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_ENDINGS_Shatterax[] =
{
    { L"Shatterax Ending 1/3", 0xfc2a0, 0xfc4a0 },
    { L"Shatterax Ending 2/3", 0xfc4a0, 0xfc6a0 },
    { L"Shatterax Ending 3/3", 0xfc6a0, 0xfc8a0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_ENDINGS_Korath[] =
{
    { L"Korath Ending 1/3", 0xfc8a0, 0xfcaa0 },
    { L"Korath Ending 2/3", 0xfcaa0, 0xfcca0 },
    { L"Korath Ending 3/3", 0xfcca0, 0xfcea0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_ENDINGS_DrMinerva[] =
{
    { L"Dr.Minerva Ending 1/3", 0xfcea0, 0xfd0a0 },
    { L"Dr.Minerva Ending 2/3", 0xfd0a0, 0xfd2a0 },
    { L"Dr.Minerva Ending 3/3", 0xfd2a0, 0xfd4a0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_ENDINGS_Supremor[] =
{
    { L"Supremor Ending 1/3", 0xfd4a0, 0xfd6a0 },
    { L"Supremor Ending 2/3", 0xfd6a0, 0xfd8a0 },
    { L"Supremor Ending 3/3", 0xfd8a0, 0xfdaa0 },
};

const sGame_PaletteDataset AvgrsGS_A_STAGES_ENDINGS_GalenKor[] =
{
    { L"Galen-Kor Ending 1/3", 0xfdaa0, 0xfdca0 },
    { L"Galen-Kor Ending 2/3", 0xfdca0, 0xfdea0 },
    { L"Galen-Kor Ending 3/3", 0xfdea0, 0xfe0a0 },
};

const sGame_PaletteDataset AvgrsGS_A_BONUS_Intro[] =
{
    { L"Data East Logo", 0xf5ea0, 0xf60a0, indexAiGSSprites_Bonus, 0x16 },
    { L"Intro Scenes 1", 0xf68a0, 0xf6aa0, indexAiGSSprites_Bonus, 0x17 },
    { L"Intro Scenes 2", 0xf6aa0, 0xf6ca0, indexAiGSSprites_Bonus, 0x18 },
    { L"Intro Scenes 3", 0xf6ca0, 0xf6ea0, indexAiGSSprites_Bonus, 0x19 },
    { L"Intro Scenes 4", 0xf6ea0, 0xf70a0, indexAiGSSprites_Bonus, 0x1a },
    { L"Captain America Poster 1/2", 0xf70a0, 0xf72a0, indexAiGSSprites_Bonus, 0x10, &pairNext },
    { L"Captain America Poster 2/2", 0xf72a0, 0xf74a0, indexAiGSSprites_Bonus, 0x11 },
    { L"Captain America Poster Faded", 0xf74a0, 0xf76a0, indexAiGSSprites_Bonus, 0x12 },
    { L"Thunderstrike Poster 1/2", 0xf76a0, 0xf78a0, indexAiGSSprites_Bonus, 0x1b, &pairNext },
    { L"Thunderstrike Poster 2/2", 0xf78a0, 0xf7aa0, indexAiGSSprites_Bonus, 0x1c },
    { L"Thunderstrike Poster Faded", 0xf7aa0, 0xf7ca0, indexAiGSSprites_Bonus, 0x1d },
    { L"Crystal Poster 1/2", 0xf7ca0, 0xf7ea0, indexAiGSSprites_Bonus, 0x13, &pairNext },
    { L"Crystal Poster 2/2", 0xf7ea0, 0xf80a0, indexAiGSSprites_Bonus, 0x14 },
    { L"Crystal Poster Faded", 0xf80a0, 0xf82a0, indexAiGSSprites_Bonus, 0x15 },
    { L"Black Knight Poster 1/2", 0xf82a0, 0xf84a0, indexAiGSSprites_Bonus, 0x0d, &pairNext },
    { L"Black Knight Poster 2/2", 0xf84a0, 0xf86a0, indexAiGSSprites_Bonus, 0x0e },
    { L"Black Knight Poster Faded", 0xf86a0, 0xf88a0, indexAiGSSprites_Bonus, 0x0f },
    { L"Assist Heroes Poster", 0xfe0a0, 0xfe2a0, indexAiGSSprites_Bonus, 0x0b },
    { L"Assist Villains Poster", 0xfe2a0, 0xfe4a0, indexAiGSSprites_Bonus, 0x0c },
};

const sGame_PaletteDataset AvgrsGS_A_BONUS_TitleScreen[] =
{
    { L"Title Screen Spaceship", 0xf62a0, 0xf64a0 },
    { L"Title Screen Logo", 0xf64a0, 0xf66a0, indexAiGSSprites_Bonus, 0x23 },
    { L"Title Screen Background", 0xf66a0, 0xf68a0, indexAiGSSprites_Bonus, 0x22 },
    { L"Story Mode Icon", 0xf88a0, 0xf8aa0, indexAiGSSprites_Bonus, 0x24 },
    { L"Versus Mode Icon", 0xf8aa0, 0xf8ca0, indexAiGSSprites_Bonus, 0x25 },
    { L"Mode Select Background", 0xf8ca0, 0xf8ea0 },
};

const sGame_PaletteDataset AvgrsGS_A_BONUS_StoryMode[] =
{
    { L"Story Mode Spaceship", 0xf3700, 0xf3720 },
    { L"Story Mode Cutscene 1 1/2", 0xf90a0, 0xf92a0 },
    { L"Story Mode Cutscene 1 2/2", 0xf92a0, 0xf94a0 },
    { L"Story Mode Cutscene 2", 0xf94a0, 0xf96a0 },
    { L"Story Mode Cutscene 3 1/2", 0xf96a0, 0xf98a0 },
    { L"Story Mode Cutscene 3 2/2", 0xf98a0, 0xf9aa0 },
    { L"Story Mode Cutscene 4 1/2", 0xf9aa0, 0xf9ca0 },
    { L"Story Mode Cutscene 4 2/2", 0xf9ca0, 0xf9ea0 },
    { L"Story Mode Cutscene 5 1/3", 0xf9ea0, 0xfa0a0 },
    { L"Story Mode Cutscene 5 2/3", 0xfa0a0, 0xfa2a0 },
    { L"Story Mode Cutscene 5 3/3", 0xfa2a0, 0xfa4a0 },
    { L"Story Mode Ending 1/3", 0xfa4a0, 0xfa6a0 },
    { L"Story Mode Ending 2/3", 0xfa6a0, 0xfa8a0 },
    { L"Story Mode Ending 3/3", 0xfa8a0, 0xfaaa0 },
};

const sGame_PaletteDataset AvgrsGS_A_BONUS_SelectScreen[] =
{
    { L"Select Icons", 0xf8ea0, 0xf90a0, indexAiGSSprites_Bonus, 0x1f },
    { L"Select Assist Icons", 0xf3aa0, 0xf3ba0, indexAiGSSprites_Bonus, 0x1e },
    { L"Select Rotating Characters", 0xf3880, 0xf3980, indexAiGSSprites_Bonus, 0x20 },
    { L"VS Screen", 0xf21e0, 0xf2200, indexAiGSSprites_Bonus, 0x21 },
};

const sGame_PaletteDataset AvgrsGS_A_BONUS_KreeSoldier[] =
{
    { L"Kree Soldier", 0xf2240, 0xf2260 },
    { L"Kree Soldier Burned", 0xf2260, 0xf2280 },
    { L"Kree Soldier Zapped", 0xf2280, 0xf22a0 },
};

const sGame_PaletteDataset AvgrsGS_A_BONUS_HUD[] =
{
    { L"HUD", 0xf2060, 0xf20a0 },
    { L"HUD Names", 0xf2220, 0xf2240, indexAiGSSprites_Bonus, 0x07 },
    { L"HUD OK/MAX", 0xf2120, 0xf2140 },
    { L"HUD Win Icon", 0xf21c0, 0xf21e0 },
    { L"HUD Black Tile ", 0xf2200, 0xf2220 },
    { L"Various Text 1", 0xf2040, 0xf2060 },
    { L"Various Text 2", 0xf20c0, 0xf20e0 },
    { L"Various Text 3", 0xf2320, 0xf2340 },
    { L"Various Text 4", 0xf2340, 0xf2360 },
    { L"Round Text", 0xf20a0, 0xf20c0 },
    { L"FIGHT/PERFECT Text", 0xf22a0, 0xf22c0 },
    { L"Winner Text", 0xf2360, 0xf2380 },
    { L"Loser Text", 0xf22c0, 0xf22e0 },
    { L"Captain America HUD", 0xf3980, 0xf39a0, indexAiGSSprites_Bonus, 0x02 },
    { L"Thunderstrike HUD", 0xf39a0, 0xf39c0, indexAiGSSprites_Bonus, 0x0a },
    { L"Crystal HUD", 0xf39c0, 0xf39e0, indexAiGSSprites_Bonus, 0x03 },
    { L"Black Knight HUD", 0xf39e0, 0xf3a00, indexAiGSSprites_Bonus, 0x01 },
    { L"Shatterax HUD", 0xf3a00, 0xf3a20, indexAiGSSprites_Bonus, 0x08 },
    { L"Korath HUD", 0xf3a20, 0xf3a40, indexAiGSSprites_Bonus, 0x06 },
    { L"Dr.Minerva HUD", 0xf3a40, 0xf3a60, indexAiGSSprites_Bonus, 0x04 },
    { L"Supremor HUD", 0xf3a60, 0xf3a80, indexAiGSSprites_Bonus, 0x09 },
    { L"Galen-Kor HUD", 0xf3a80, 0xf3aa0, indexAiGSSprites_Bonus, 0x05 },
};

const sGame_PaletteDataset AvgrsGS_A_BONUS_Effects[] =
{
    { L"Black Palette", 0xf2000, 0xf2020 },
    { L"White Palette", 0xf2020, 0xf2040 },
    { L"Hitsparks", 0xf20e0, 0xf2100 },
    { L"Shield", 0xf2140, 0xf2160 },
    { L"Burned Effects", 0xf2160, 0xf2180 },
    { L"Zapped Effects", 0xf2180, 0xf21a0, indexAiGSSprites_Bonus, 0x00 },
    { L"Dust Effects", 0xf21a0, 0xf21c0 },
    { L"Dust Sparks", 0xf2300, 0xf2320 },
};

const sDescTreeNode AvgrsGS_A_STAGES_COLLECTION[] =
{
    { L"Galen-Kor's Hideout", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_GalenKorsHideout, ARRAYSIZE(AvgrsGS_A_STAGES_GalenKorsHideout) },
    { L"Kree Outpost 51K", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_KreeOutpost51K, ARRAYSIZE(AvgrsGS_A_STAGES_KreeOutpost51K) },
    { L"Kree-Lar Base", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_KreeLarBase, ARRAYSIZE(AvgrsGS_A_STAGES_KreeLarBase) },
    { L"Shi'ar Throne", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_ShiarThrone, ARRAYSIZE(AvgrsGS_A_STAGES_ShiarThrone) },
    { L"Supreme Intelligence", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_SupremeIntelligence, ARRAYSIZE(AvgrsGS_A_STAGES_SupremeIntelligence) },
    { L"Avengers Mansion Night", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_AvengersMansionNight, ARRAYSIZE(AvgrsGS_A_STAGES_AvengersMansionNight) },
    { L"Avengers Mansion Day", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_AvengersMansionDay, ARRAYSIZE(AvgrsGS_A_STAGES_AvengersMansionDay) },
};

const sDescTreeNode AvgrsGS_A_STAGES_ENDINGS_COLLECTION[] =
{
    { L"Captain America", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_ENDINGS_CaptainAmerica, ARRAYSIZE(AvgrsGS_A_STAGES_ENDINGS_CaptainAmerica) },
    { L"Thunderstrike", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_ENDINGS_Thunderstrike, ARRAYSIZE(AvgrsGS_A_STAGES_ENDINGS_Thunderstrike) },
    { L"Crystal", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_ENDINGS_Crystal, ARRAYSIZE(AvgrsGS_A_STAGES_ENDINGS_Crystal) },
    { L"Black Knight", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_ENDINGS_BlackKnight, ARRAYSIZE(AvgrsGS_A_STAGES_ENDINGS_BlackKnight) },
    { L"Shatterax", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_ENDINGS_Shatterax, ARRAYSIZE(AvgrsGS_A_STAGES_ENDINGS_Shatterax) },
    { L"Korath", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_ENDINGS_Korath, ARRAYSIZE(AvgrsGS_A_STAGES_ENDINGS_Korath) },
    { L"Dr.Minerva", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_ENDINGS_DrMinerva, ARRAYSIZE(AvgrsGS_A_STAGES_ENDINGS_DrMinerva) },
    { L"Supremor", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_ENDINGS_Supremor, ARRAYSIZE(AvgrsGS_A_STAGES_ENDINGS_Supremor) },
    { L"Galen-Kor", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_ENDINGS_GalenKor, ARRAYSIZE(AvgrsGS_A_STAGES_ENDINGS_GalenKor) },
};

const sDescTreeNode AvgrsGS_A_BONUS_COLLECTION[] =
{
    { L"Intro", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BONUS_Intro, ARRAYSIZE(AvgrsGS_A_BONUS_Intro) },
    { L"Title Screen", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BONUS_TitleScreen, ARRAYSIZE(AvgrsGS_A_BONUS_TitleScreen) },
    { L"Story Mode", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BONUS_StoryMode, ARRAYSIZE(AvgrsGS_A_BONUS_StoryMode) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BONUS_SelectScreen, ARRAYSIZE(AvgrsGS_A_BONUS_SelectScreen) },
    { L"Kree Soldier", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BONUS_KreeSoldier, ARRAYSIZE(AvgrsGS_A_BONUS_KreeSoldier) },
    { L"HUD", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BONUS_HUD, ARRAYSIZE(AvgrsGS_A_BONUS_HUD) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BONUS_Effects, ARRAYSIZE(AvgrsGS_A_BONUS_Effects) },
};

const sDescTreeNode AvgrsGS_A_UNITS[] =
{
    { L"Captain America", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_CaptainAmerica_COLLECTION, ARRAYSIZE(AvgrsGS_A_CaptainAmerica_COLLECTION) },
    { L"Captain Atlas", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_CaptainAtlas_COLLECTION, ARRAYSIZE(AvgrsGS_A_CaptainAtlas_COLLECTION) },
    { L"Crystal", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Crystal_COLLECTION, ARRAYSIZE(AvgrsGS_A_Crystal_COLLECTION) },
    { L"Black Knight", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BlackKnight_COLLECTION, ARRAYSIZE(AvgrsGS_A_BlackKnight_COLLECTION) },
    { L"Thunderstrike", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Thunderstrike_COLLECTION, ARRAYSIZE(AvgrsGS_A_Thunderstrike_COLLECTION) },
    { L"Vision", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Vision_COLLECTION, ARRAYSIZE(AvgrsGS_A_Vision_COLLECTION) },
    { L"Dr.Minerva", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_DrMinerva_COLLECTION, ARRAYSIZE(AvgrsGS_A_DrMinerva_COLLECTION) },
    { L"Shatterax", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Shatterax_COLLECTION, ARRAYSIZE(AvgrsGS_A_Shatterax_COLLECTION) },
    { L"Korath", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Korath_COLLECTION, ARRAYSIZE(AvgrsGS_A_Korath_COLLECTION) },
    { L"Supremor", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Supremor_COLLECTION, ARRAYSIZE(AvgrsGS_A_Supremor_COLLECTION) },
    { L"Galen-Kor", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_GalenKor_COLLECTION, ARRAYSIZE(AvgrsGS_A_GalenKor_COLLECTION) },
    { L"Iron Man", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_IronMan_COLLECTION, ARRAYSIZE(AvgrsGS_A_IronMan_COLLECTION) },
    { L"Mighty Thor", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_MightyThor_COLLECTION, ARRAYSIZE(AvgrsGS_A_MightyThor_COLLECTION) },
    { L"Giant Man", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_GiantMan_COLLECTION, ARRAYSIZE(AvgrsGS_A_GiantMan_COLLECTION) },
    { L"Ultimus", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Ultimus_COLLECTION, ARRAYSIZE(AvgrsGS_A_Ultimus_COLLECTION) },
    { L"Ronan", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Ronan_COLLECTION, ARRAYSIZE(AvgrsGS_A_Ronan_COLLECTION) },
    { L"Sentry", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_Sentry_COLLECTION, ARRAYSIZE(AvgrsGS_A_Sentry_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_STAGES_COLLECTION, ARRAYSIZE(AvgrsGS_A_STAGES_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)AvgrsGS_A_BONUS_COLLECTION, ARRAYSIZE(AvgrsGS_A_BONUS_COLLECTION) },
};
