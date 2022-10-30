#pragma once

const std::vector<uint16_t> DaemonBride_NL_IMGIDS_USED =
{
    indexDaemonBrideSprites_Asuma,              // 0x1f
    indexDaemonBrideSprites_Dawn,               // 0x20
    indexDaemonBrideSprites_Dies,               // 0x21
    indexDaemonBrideSprites_Dusk,               // 0x22
    indexDaemonBrideSprites_Eve,                // 0x23
    indexDaemonBrideSprites_JudgementDay,       // 0x24
    indexDaemonBrideSprites_Kuon,               // 0x25
    indexDaemonBrideSprites_Kureha,             // 0x26
    indexDaemonBrideSprites_Licht,              // 0x27
    indexDaemonBrideSprites_Nina,               // 0x28
    indexDaemonBrideSprites_Noah,               // 0x29
    indexDaemonBrideSprites_Pekomaru,           // 0x2a
    indexDaemonBrideSprites_Pure,               // 0x2b
    indexDaemonBrideSprites_Reizei,             // 0x2c
    indexDaemonBrideSprites_Shiffon,            // 0x2d
    indexDaemonBrideSprites_ShiningRebellion,   // 0x2e
    indexDaemonBrideSprites_Souya,              // 0x2f
    indexDaemonBrideSprites_Yui,                // 0x30
    indexDaemonBrideSprites_Stages,             // 0x31
    indexDaemonBrideSprites_Bonus,              // 0x32
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_KuonSumeragi_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Kuon, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Kuon, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Kuon, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Kuon, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Kuon, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_KuonSumeragiMichael_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Kuon, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Kuon, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Kuon, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Kuon, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_KuonSumeragiEffects_PALETTES[] =
{
    { L"Effect 1", 0x0, 0x200 },
    { L"Effect 2", 0x200, 0x400 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_AsumaShidou_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Asuma, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Asuma, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Asuma, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Asuma, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_AsumaShidouUriel_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Asuma, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Asuma, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Asuma, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Asuma, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Asuma, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_AsumaShidouEffects_PALETTES[] =
{
    { L"Effect", 0x0, 0x200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_SouyaTachibana_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Souya, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Souya, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Souya, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Souya, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Souya, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_SouyaTachibanaRaphael_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Souya, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Souya, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Souya, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Souya, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Souya, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_SouyaTachibanaEffects_PALETTES[] =
{
    { L"Effect 1", 0x0, 0x200 },
    { L"Effect 2", 0x200, 0x400 },
    { L"Effect 3", 0x400, 0x600 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_NoahTobari_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Noah, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Noah, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Noah, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Noah, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Noah, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_NoahTobariGabriel_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Noah, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Noah, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Noah, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Noah, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Noah, 0x001},
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_NoahTobariEffects_PALETTES[] =
{
    { L"Effect", 0x0, 0x200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_NoahTobariExtra_PALETTES[] =
{
    { L"Extra 1", 0x0, 0x200 },
    { L"Extra 2", 0x200, 0x400 },
    { L"Extra 3", 0x400, 0x600 },
    { L"Extra 4", 0x600, 0x800 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_NinaSumeragi_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Nina, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Nina, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Nina, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Nina, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_NinaSumeragiZadkiel_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Nina, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Nina, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Nina, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Nina, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Nina, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_NinaSumeragiEffects_PALETTES[] =
{
    { L"Effect", 0x0, 0x200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_YuiEmeliaMitsukihara_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Yui, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Yui, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Yui, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Yui, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Yui, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaMetatron_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Yui, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Yui, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Yui, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Yui, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Yui, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaEffects_PALETTES[] =
{
    { L"Effect", 0x0, 0x200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_LichtWulfstanSchwarz_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Licht, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Licht, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Licht, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Licht, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Licht, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_LichtWulfstanSchwarzHaniel_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Licht, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Licht, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Licht, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Licht, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Licht, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_LichtWulfstanSchwarzEffects_PALETTES[] =
{
    { L"Effect 1", 0x0, 0x200 },
    { L"Effect 2", 0x200, 0x400 },
    { L"Effect 3", 0x400, 0x600 },
    { L"Effect 4", 0x600, 0x800 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_ReizeiAbane_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Reizei, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Reizei, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Reizei, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Reizei, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Reizei, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_ReizeiAbaneLucifer_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Reizei, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Reizei, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Reizei, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Reizei, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Reizei, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_ReizeiAbaneEffects_PALETTES[] =
{
    { L"Effect", 0x0, 0x200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_Dusk_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Dusk, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Dusk, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Dusk, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Dusk, 0x00 },
    { L"Unused 1", 0x800, 0xa00, indexDaemonBrideSprites_Dusk, 0x00 },
    { L"Unused 2", 0xa00, 0xc00, indexDaemonBrideSprites_Dusk, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_DuskAstaroth_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Dusk, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Dusk, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Dusk, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Dusk, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Dusk, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_DuskEffects_PALETTES[] =
{
    { L"Effect", 0x0, 0x200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_DuskExtras_PALETTES[] =
{
    { L"Extra 1", 0x0, 0x200 },
    { L"Extra 2", 0x200, 0x400 },
    { L"Extra 3", 0x400, 0x600 },
    { L"Extra 4", 0x600, 0x800 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_Pekomaru_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Pekomaru, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Pekomaru, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Pekomaru, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Pekomaru, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Pekomaru, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_PekomaruSatan_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Pekomaru, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Pekomaru, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Pekomaru, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Pekomaru, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Pekomaru, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_PekomaruEffects_PALETTES[] =
{
    { L"Effect", 0x0, 0x200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_PekomaruExtras_PALETTES[] =
{
    { L"Extra 1", 0x0, 0x200 },
    { L"Extra 2", 0x200, 0x400 },
    { L"Extra 3", 0x400, 0x600 },
    { L"Extra 4", 0x600, 0x800 },
    { L"Extra 5", 0x800, 0xa00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_Dawn_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Dawn, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Dawn, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Dawn, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Dawn, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Dawn, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_DawnMammon_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Dawn, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Dawn, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Dawn, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Dawn, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Dawn, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_DawnEffects_PALETTES[] =
{
    { L"Effect 1", 0x0, 0x200 },
    { L"Effect 2", 0x200, 0x400 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_Shiffon_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Shiffon, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Shiffon, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Shiffon, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Shiffon, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Shiffon, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_ShiffonLeviathan_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Shiffon, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Shiffon, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Shiffon, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Shiffon, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_ShiffonEffects_PALETTES[] =
{
    { L"Effect 1", 0x0, 0x200 },
    { L"Effect 2", 0x200, 0x400 },
    { L"Effect 3", 0x400, 0x600 },
    { L"Effect 4", 0x600, 0x800 },
    { L"Effect 5", 0x800, 0xa00 },
    { L"Effect 6", 0xa00, 0xc00 },
    { L"Effect 7", 0xc00, 0xe00 },
    { L"Effect 8", 0xe00, 0x1000 },
    { L"Effect 9", 0x1000, 0x1200 },
    { L"Effect 10", 0x1200, 0x1400 },
    { L"Effect 11", 0x1400, 0x1600 },
    { L"Effect 12", 0x1600, 0x1800 },
    { L"Effect 13", 0x1800, 0x1a00 },
    { L"Effect 14", 0x1a00, 0x1c00 },
    { L"Effect 15", 0x1c00, 0x1e00 },
    { L"Effect 16", 0x1e00, 0x2000 },
    { L"Effect 17", 0x2000, 0x2200 },
    { L"Effect 18", 0x2200, 0x2400 },
    { L"Effect 19", 0x2400, 0x2600 },
    { L"Effect 20", 0x2600, 0x2800 },
    { L"Effect 21", 0x2800, 0x2a00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_KurehaYamisaka_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Kureha, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Kureha, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Kureha, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Kureha, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Kureha, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_KurehaYamisakaAsmodeus_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Kureha, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Kureha, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Kureha, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Kureha, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_KurehaYamisakaEffects_PALETTES[] =
{
    { L"Effect 1", 0x0, 0x200 },
    { L"Effect 2", 0x200, 0x400 },
    { L"Effect 3", 0x400, 0x600 },
    { L"Effect 4", 0x600, 0x800 },
    { L"Effect 5", 0x800, 0xa00 },
    { L"Effect 6", 0xa00, 0xc00 },
    { L"Effect 7", 0xc00, 0xe00 },
    { L"Effect 8", 0xe00, 0x1000 },
    { L"Effect 9", 0x1000, 0x1200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_Eve_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Eve, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Eve, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Eve, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Eve, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Eve, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_EveBeelzebub_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Eve, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Eve, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Eve, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Eve, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Eve, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_EveEffects_PALETTES[] =
{
    { L"Effect", 0x0, 0x200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_JudgementDay_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_JudgementDay, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_JudgementDay, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_JudgementDay, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_JudgementDay, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_JudgementDay, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_JudgementDayMichael_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_JudgementDay, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_JudgementDay, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_JudgementDay, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_JudgementDay, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_JudgementDay, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_Pure_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Pure, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Pure, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Pure, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Pure, 0x00 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_Pure, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_PureZadkiel_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_Pure, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_Pure, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_Pure, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_Pure, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_PureEffects_PALETTES[] =
{
    { L"Effect", 0x0, 0x200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_ShiningRebellion_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_ShiningRebellion, 0x00 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_ShiningRebellion, 0x00 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_ShiningRebellion, 0x00 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_ShiningRebellion, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_ShiningRebellionLucifer_PALETTES[] =
{
    { L"A", 0x0, 0x200, indexDaemonBrideSprites_ShiningRebellion, 0x01 },
    { L"B", 0x200, 0x400, indexDaemonBrideSprites_ShiningRebellion, 0x01 },
    { L"C", 0x400, 0x600, indexDaemonBrideSprites_ShiningRebellion, 0x01 },
    { L"D", 0x600, 0x800, indexDaemonBrideSprites_ShiningRebellion, 0x01 },
    { L"Unused", 0x800, 0xa00, indexDaemonBrideSprites_ShiningRebellion, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_ShiningRebellionEffects_PALETTES[] =
{
    { L"Effect", 0x0, 0x200 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_ShiningRebellionExtras_PALETTES[] =
{
    { L"Extra 1", 0x0, 0x200 },
    { L"Extra 2", 0x200, 0x400 },
    { L"Extra 3", 0x400, 0x600 },
    { L"Extra 4", 0x600, 0x800 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_DiesIraeDeusDemiurge_PALETTES[] =
{
    { L"Palette 1", 0x0, 0x200, indexDaemonBrideSprites_Dies, 0x00 },
    { L"Palette 2", 0x200, 0x400, indexDaemonBrideSprites_Dies, 0x00 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_DiesIraeDeusMichael_PALETTES[] =
{
    { L"Palette 1", 0x0, 0x200, indexDaemonBrideSprites_Dies, 0x01 },
    { L"Palette 2", 0x200, 0x400, indexDaemonBrideSprites_Dies, 0x01 },
    { L"Palette 3", 0x400, 0x600, indexDaemonBrideSprites_Dies, 0x01 },
    { L"Palette 4", 0x600, 0x800, indexDaemonBrideSprites_Dies, 0x01 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_DiesIraeDeusEffects_PALETTES[] =
{
    { L"Palette 1", 0x0, 0x200 },
    { L"Palette 2", 0x200, 0x400 },
    { L"Palette 3", 0x400, 0x600 },
    { L"Palette 4", 0x600, 0x800 },
    { L"Palette 5", 0x800, 0xa00 },
    { L"Palette 6", 0xa00, 0xc00 },
    { L"Palette 7", 0xc00, 0xe00 },
    { L"Palette 8", 0xe00, 0x1000 },
};

const sGame_PaletteDataset DAEMONBRIDGE_NL_SELECTSCREEN_PALETTES[] =
{
    { L"Kuon Sumeragi", 0x2a00, 0x2c00, indexDaemonBrideSprites_Kuon, 0x00 },
    { L"Kuon Sumeragi - Michael", 0xe00, 0x1000, indexDaemonBrideSprites_Kuon, 0x01 },
    { L"Asuma Shidou", 0x2800, 0x2a00, indexDaemonBrideSprites_Asuma, 0x00 },
    { L"Asuma Shidou - Uriel", 0xc00, 0xe00, indexDaemonBrideSprites_Asuma, 0x01 },
    { L"Souya Tachibana", 0x2600, 0x2800, indexDaemonBrideSprites_Souya, 0x00 },
    { L"Noah Tobari", 0x2400, 0x2600, indexDaemonBrideSprites_Noah, 0x00 },
    { L"Noah Tobari - Gabriel", 0xa00, 0xc00, indexDaemonBrideSprites_Noah, 0x01 },
    { L"Nina Sumeragi", 0x2200, 0x2400, indexDaemonBrideSprites_Nina, 0x00 },
    { L"Nina Sumeragi - Zadkiel", 0x800, 0xa00, indexDaemonBrideSprites_Nina, 0x01 },
    { L"Yui Emelia Mitsukihara", 0x2000, 0x2200, indexDaemonBrideSprites_Yui, 0x00 },
    { L"Licht Wulfstan Schwarz", 0x1e00, 0x2000, indexDaemonBrideSprites_Licht, 0x00 },
    { L"Licht Wulfstan Schawrz - Haniel", 0x600, 0x800, indexDaemonBrideSprites_Licht, 0x01 },
    { L"Reizei Abane", 0x1c00, 0x1e00, indexDaemonBrideSprites_Reizei, 0x00 },
    { L"Reizei Abane - Lucifer", 0x400, 0x600, indexDaemonBrideSprites_Reizei, 0x01 },
    { L"Dusk", 0x1a00, 0x1c00, indexDaemonBrideSprites_Dusk, 0x00 },
    { L"Pekomaru", 0x1800, 0x1a00, indexDaemonBrideSprites_Pekomaru, 0x00 },
    { L"Dawn", 0x1600, 0x1800, indexDaemonBrideSprites_Dawn, 0x00 },
    { L"Shiffon", 0x200, 0x400, indexDaemonBrideSprites_Shiffon, 0x00 },
    { L"Kureha Yamisaka", 0x1400, 0x1600, indexDaemonBrideSprites_Kureha, 0x00 },
    { L"Eve & Beelzebub", 0x0, 0x200, indexDaemonBrideSprites_Eve, 0x00 },
    { L"Judgement Day", 0x1200, 0x1400, indexDaemonBrideSprites_JudgementDay, 0x00 },
    { L"Shining Rebellion", 0x1000, 0x1200, indexDaemonBrideSprites_ShiningRebellion, 0x00 },
};

const sDescTreeNode DAEMONBRIDGE_NL_KuonSumeragi_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_KuonSumeragi_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_KuonSumeragi_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_KuonSumeragiMichael_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_KuonSumeragiMichael_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_KuonSumeragiMichael_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_KuonSumeragiEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_KuonSumeragiEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_KuonSumeragiEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_AsumaShidou_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_AsumaShidou_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_AsumaShidou_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_AsumaShidouUriel_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_AsumaShidouUriel_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_AsumaShidouUriel_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_AsumaShidouEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_AsumaShidouEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_AsumaShidouEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_SouyaTachibana_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_SouyaTachibana_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_SouyaTachibana_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_SouyaTachibanaRaphael_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_SouyaTachibanaRaphael_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_SouyaTachibanaRaphael_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_SouyaTachibanaEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_SouyaTachibanaEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_SouyaTachibanaEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_NoahTobari_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_NoahTobari_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_NoahTobari_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_NoahTobariGabriel_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_NoahTobariGabriel_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_NoahTobariGabriel_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_NoahTobariEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_NoahTobariEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_NoahTobariEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_NoahTobariExtra_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_NoahTobariExtra_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_NoahTobariExtra_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_NinaSumeragi_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_NinaSumeragi_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_NinaSumeragi_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_NinaSumeragiZadkiel_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_NinaSumeragiZadkiel_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_NinaSumeragiZadkiel_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_NinaSumeragiEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_NinaSumeragiEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_NinaSumeragiEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_YuiEmeliaMitsukihara_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_YuiEmeliaMitsukihara_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_YuiEmeliaMitsukihara_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaMetatron_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaMetatron_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaMetatron_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_LichtWulfstanSchwarz_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_LichtWulfstanSchwarz_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_LichtWulfstanSchwarz_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_LichtWulfstanSchwarzHaniel_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_LichtWulfstanSchwarzHaniel_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_LichtWulfstanSchwarzHaniel_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_LichtWulfstanSchwarzEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_LichtWulfstanSchwarzEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_LichtWulfstanSchwarzEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_ReizeiAbane_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_ReizeiAbane_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_ReizeiAbane_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_ReizeiAbaneLucifer_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_ReizeiAbaneLucifer_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_ReizeiAbaneLucifer_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_ReizeiAbaneEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_ReizeiAbaneEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_ReizeiAbaneEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_Dusk_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_Dusk_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_Dusk_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_DuskAstaroth_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_DuskAstaroth_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_DuskAstaroth_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_DuskEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_DuskEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_DuskEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_DuskExtras_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_DuskExtras_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_DuskExtras_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_Pekomaru_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_Pekomaru_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_Pekomaru_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_PekomaruSatan_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_PekomaruSatan_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_PekomaruSatan_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_PekomaruEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_PekomaruEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_PekomaruEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_PekomaruExtras_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_PekomaruExtras_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_PekomaruExtras_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_Dawn_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_Dawn_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_Dawn_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_DawnMammon_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_DawnMammon_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_DawnMammon_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_DawnEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_DawnEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_DawnEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_Shiffon_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_Shiffon_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_Shiffon_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_ShiffonLeviathan_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_ShiffonLeviathan_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_ShiffonLeviathan_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_ShiffonEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_ShiffonEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_ShiffonEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_KurehaYamisaka_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_KurehaYamisaka_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_KurehaYamisaka_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_KurehaYamisakaAsmodeus_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_KurehaYamisakaAsmodeus_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_KurehaYamisakaAsmodeus_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_KurehaYamisakaEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_KurehaYamisakaEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_KurehaYamisakaEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_Eve_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_Eve_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_Eve_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_EveBeelzebub_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_EveBeelzebub_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_EveBeelzebub_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_EveEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_EveEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_EveEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_JudgementDay_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_JudgementDay_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_JudgementDay_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_JudgementDayMichael_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_JudgementDayMichael_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_JudgementDayMichael_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_Pure_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_Pure_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_Pure_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_PureZadkiel_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_PureZadkiel_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_PureZadkiel_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_PureEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_PureEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_PureEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_ShiningRebellion_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_ShiningRebellion_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_ShiningRebellion_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_ShiningRebellionLucifer_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_ShiningRebellionLucifer_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_ShiningRebellionLucifer_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_ShiningRebellionEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_ShiningRebellionEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_ShiningRebellionEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_ShiningRebellionExtras_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_ShiningRebellionExtras_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_ShiningRebellionExtras_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_DiesIraeDeusDemiurge_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_DiesIraeDeusDemiurge_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_DiesIraeDeusDemiurge_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_DiesIraeDeusMichael_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_DiesIraeDeusMichael_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_DiesIraeDeusMichael_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_DiesIraeDeusEffects_COLLECTION[] =
{
    { L"Core Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_DiesIraeDeusEffects_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_DiesIraeDeusEffects_PALETTES) },
};

const sDescTreeNode DAEMONBRIDGE_NL_SELECTSCREEN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)DAEMONBRIDGE_NL_SELECTSCREEN_PALETTES, ARRAYSIZE(DAEMONBRIDGE_NL_SELECTSCREEN_PALETTES) },
};

const std::vector<sGameUnitsByFile> DAEMONBRIDE_NL_UNITS =
{
    { L"Flashrom\\Act\\Chara\\chara_00.pal",    2560, L"Kuon Sumeragi", DAEMONBRIDGE_NL_KuonSumeragi_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_KuonSumeragi_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_00b.pal",   2048, L"Kuon Sumeragi - Michael", DAEMONBRIDGE_NL_KuonSumeragiMichael_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_KuonSumeragiMichael_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_00e.pal",   1024, L"Kuon Sumeragi - Effects", DAEMONBRIDGE_NL_KuonSumeragiEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_KuonSumeragiEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_01.pal",    2048, L"Asuma Shidou", DAEMONBRIDGE_NL_AsumaShidou_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_AsumaShidou_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_01b.pal",   2560, L"Asuma Shidou - Uriel", DAEMONBRIDGE_NL_AsumaShidouUriel_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_AsumaShidouUriel_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_01e.pal",   512,  L"Asuma Shidou - Effects", DAEMONBRIDGE_NL_AsumaShidouEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_AsumaShidouEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_02.pal",    2560, L"Souya Tachibana", DAEMONBRIDGE_NL_SouyaTachibana_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_SouyaTachibana_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_02b.pal",   2560, L"Souya Tachibana - Raphael", DAEMONBRIDGE_NL_SouyaTachibanaRaphael_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_SouyaTachibanaRaphael_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_02e.pal",   1536, L"Souya Tachibana - Effects", DAEMONBRIDGE_NL_SouyaTachibanaEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_SouyaTachibanaEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_03.pal",    2560, L"Noah Tobari", DAEMONBRIDGE_NL_NoahTobari_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_NoahTobari_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_03b.pal",   2560, L"Noah Tobari - Gabriel", DAEMONBRIDGE_NL_NoahTobariGabriel_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_NoahTobariGabriel_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_03e.pal",   512,  L"Noah Tobari - Effects", DAEMONBRIDGE_NL_NoahTobariEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_NoahTobariEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_03p.pal",   2048, L"Noah Tobari - Extras", DAEMONBRIDGE_NL_NoahTobariExtra_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_NoahTobariExtra_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_04.pal",    2048, L"Nina Sumeragi", DAEMONBRIDGE_NL_NinaSumeragi_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_NinaSumeragi_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_04b.pal",   2560, L"Nina Sumeragi - Zadkiel", DAEMONBRIDGE_NL_NinaSumeragiZadkiel_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_NinaSumeragiZadkiel_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_04e.pal",   512,  L"Nina Sumeragi - Effects", DAEMONBRIDGE_NL_NinaSumeragiEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_NinaSumeragiEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_05.pal",    2560, L"Yui Emelia Mitsukihara", DAEMONBRIDGE_NL_YuiEmeliaMitsukihara_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_YuiEmeliaMitsukihara_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_05b.pal",   2560, L"Yui Emelia Mitsukihara - Metatron", DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaMetatron_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaMetatron_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_05e.pal",   512,  L"Yui Emelia Mitsukihara - Effects", DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_YuiEmeliaMitsukiharaEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_06.pal",    2560, L"Licht Wulfstan Schwarz", DAEMONBRIDGE_NL_LichtWulfstanSchwarz_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_LichtWulfstanSchwarz_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_06b.pal",   2560, L"Licht Wulfstan Schwarz - Haniel", DAEMONBRIDGE_NL_LichtWulfstanSchwarzHaniel_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_LichtWulfstanSchwarzHaniel_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_06e.pal",   2048, L"Licht Wulfstan Schwarz - Effects", DAEMONBRIDGE_NL_LichtWulfstanSchwarzEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_LichtWulfstanSchwarzEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_07.pal",    2560, L"Reizei Abane", DAEMONBRIDGE_NL_ReizeiAbane_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_ReizeiAbane_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_07b.pal",   2560, L"Reizei Abane - Lucifer", DAEMONBRIDGE_NL_ReizeiAbaneLucifer_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_ReizeiAbaneLucifer_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_07e.pal",   512,  L"Reizei Abane - Effects", DAEMONBRIDGE_NL_ReizeiAbaneEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_ReizeiAbaneEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_08.pal",    3072, L"Dusk", DAEMONBRIDGE_NL_Dusk_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_Dusk_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_08b.pal",   2560, L"Dusk - Astaroth", DAEMONBRIDGE_NL_DuskAstaroth_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_DuskAstaroth_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_08e.pal",   512,  L"Dusk - Effects", DAEMONBRIDGE_NL_DuskEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_DuskEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_08p.pal",   2048, L"Dusk - Extras", DAEMONBRIDGE_NL_DuskExtras_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_DuskExtras_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_09.pal",    2560, L"Pekomaru", DAEMONBRIDGE_NL_Pekomaru_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_Pekomaru_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_09b.pal",   2560, L"Pekomaru - Satan", DAEMONBRIDGE_NL_PekomaruSatan_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_PekomaruSatan_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_09e.pal",   512,  L"Pekomaru - Effects", DAEMONBRIDGE_NL_PekomaruEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_PekomaruEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_09p.pal",   2560, L"Pekomaru - Extras", DAEMONBRIDGE_NL_PekomaruExtras_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_PekomaruExtras_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_10.pal",    2560, L"Dawn", DAEMONBRIDGE_NL_Dawn_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_Dawn_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_10b.pal",   2560, L"Dawn - Mammon", DAEMONBRIDGE_NL_DawnMammon_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_DawnMammon_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_10e.pal",   1024, L"Dawn - Effects", DAEMONBRIDGE_NL_DawnEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_DawnEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_11b.pal",   2560, L"Shiffon", DAEMONBRIDGE_NL_Shiffon_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_Shiffon_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_11.pal",    2048, L"Shiffon - Leviathan", DAEMONBRIDGE_NL_ShiffonLeviathan_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_ShiffonLeviathan_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_11e.pal",   10752, L"Shiffon - Effects", DAEMONBRIDGE_NL_ShiffonEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_ShiffonEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_12.pal",    2560, L"Kureha Yamisaka", DAEMONBRIDGE_NL_KurehaYamisaka_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_KurehaYamisaka_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_12b.pal",   2048, L"Kureha Yamisaka - Asmodeus", DAEMONBRIDGE_NL_KurehaYamisakaAsmodeus_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_KurehaYamisakaAsmodeus_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_12e.pal",   4608, L"Kureha Yamisaka - Effects", DAEMONBRIDGE_NL_KurehaYamisakaEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_KurehaYamisakaEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_13.pal",    2560, L"Eve", DAEMONBRIDGE_NL_Eve_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_Eve_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_13b.pal",   2560, L"Eve - Beelzebub", DAEMONBRIDGE_NL_EveBeelzebub_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_EveBeelzebub_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_13e.pal",   512,  L"Eve - Effects", DAEMONBRIDGE_NL_EveEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_EveEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_14.pal",    1024, L"(Unused?) Dies Irae Deus & Demiurge", DAEMONBRIDGE_NL_DiesIraeDeusDemiurge_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_DiesIraeDeusDemiurge_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_14b.pal",   2048, L"(Unused?) Dies Irae Deus - Michael", DAEMONBRIDGE_NL_DiesIraeDeusMichael_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_DiesIraeDeusMichael_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_14e.pal",   4096, L"(Unused?) Dies Irae Deus - Effects", DAEMONBRIDGE_NL_DiesIraeDeusEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_DiesIraeDeusEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_15.pal",    2560, L"Judgement Day", DAEMONBRIDGE_NL_JudgementDay_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_JudgementDay_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_15b.pal",   2560, L"Judgement Day - Michael", DAEMONBRIDGE_NL_JudgementDayMichael_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_JudgementDayMichael_COLLECTION) },
    //{ L"Flashrom\\Act\\Chara\\chara_19.pal",    2560, L"Pure", DAEMONBRIDGE_NL_Pure_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_Pure_COLLECTION) },
    //{ L"Flashrom\\Act\\Chara\\chara_19b.pal",   2048, L"Pure - Zadkiel", DAEMONBRIDGE_NL_PureZadkiel_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_PureZadkiel_COLLECTION) },
    //{ L"Flashrom\\Act\\Chara\\chara_19e.pal",   512,  L"Pure - Effects", DAEMONBRIDGE_NL_PureEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_PureEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_22.pal",    2048, L"Shining Rebellion", DAEMONBRIDGE_NL_ShiningRebellion_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_ShiningRebellion_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_22b.pal",   2560, L"Shining Rebellion - Lucifer", DAEMONBRIDGE_NL_ShiningRebellionLucifer_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_ShiningRebellionLucifer_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_22e.pal",   512,  L"Shining Rebellion - Effects", DAEMONBRIDGE_NL_ShiningRebellionEffects_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_ShiningRebellionEffects_COLLECTION) },
    { L"Flashrom\\Act\\Chara\\chara_22p.pal",   2048, L"Shining Rebellion - Extras", DAEMONBRIDGE_NL_ShiningRebellionExtras_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_ShiningRebellionExtras_COLLECTION) },

    { L"Flashrom\\Act\\Charas\\charas_00_.pal", 11264, L"Select Screen", DAEMONBRIDGE_NL_SELECTSCREEN_COLLECTION, ARRAYSIZE(DAEMONBRIDGE_NL_SELECTSCREEN_COLLECTION) },
};
