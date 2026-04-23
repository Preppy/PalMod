#pragma once

const std::vector<uint16_t> BladeStrangers_S_IMGIDS_USED =
{
    indexBladeStrangersSprites_Aban,            // 0x103
    indexBladeStrangersSprites_Ali,             // 0x104
    indexBladeStrangersSprites_Curly,           // 0x105
    indexBladeStrangersSprites_Emiko,           // 0x106
    indexBladeStrangersSprites_Gunvolt,         // 0x107
    indexBladeStrangersSprites_Helen,           // 0x108
    indexBladeStrangersSprites_Isaac,           // 0x109
    indexBladeStrangersSprites_Kawase,          // 0x10a
    indexBladeStrangersSprites_Lina,            // 0x10b
    indexBladeStrangersSprites_Liongate,        // 0x10c
    indexBladeStrangersSprites_MasterT,         // 0x10d
    indexBladeStrangersSprites_Noko,            // 0x10e
    indexBladeStrangersSprites_Piaa,            // 0x10f
    indexBladeStrangersSprites_Quote,           // 0x110
    indexBladeStrangersSprites_ShovelKnight,    // 0x111
    indexBladeStrangersSprites_Solange,         // 0x112
    indexBladeStrangersSprites_SummerKawase,    // 0x113
    indexBladeStrangersSprites_Stages,          // 0x114
    indexBladeStrangersSprites_Bonus,           // 0x115
};

const std::vector<LPCWSTR> BladeStrangers_S_PaletteNamesNormal =
{
    L"Mapping Color (Unused)",
    L"Color 1",
    L"Color 2",
    L"Color 3",
    L"Color 4",
    L"Color 5",
    L"Color 6",
    L"Color 7",
    L"Color 8",
};

const sGCBUPF_BasicNodeData BladeStrangers_S_PaletteNodesNormal =
{
    { L"Palettes" }, 0, BladeStrangers_S_PaletteNamesNormal
};

const std::vector<sGCBUPF_BasicFileData> BladeStrangers_S_CharacterData =
{
    { L"cop_ali.rani",      L"Ali",                             0x2c946ef,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x3615, indexBladeStrangersSprites_Ali },
    { L"sel_cop_ali.rani",  L"Ali (CharaSelect)",               0x374e56,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x519,  indexBladeStrangersSprites_Ali },

    { L"cop_lio.rani",      L"Liongate",                        0x397f93e,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x3129, indexBladeStrangersSprites_Liongate },
    { L"sel_cop_lio.rani",  L"Liongate (CharaSelect)",          0x737db9,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x6f9,  indexBladeStrangersSprites_Liongate },
    { L"cop_mas.rani",      L"Master T",                        0x4dcc4ac,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x35d9, indexBladeStrangersSprites_MasterT },
    { L"sel_cop_mas.rani",  L"Master T (CharaSelect)",          0x6ca3e2,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x541,  indexBladeStrangersSprites_MasterT },
    { L"cop_sol.rani",      L"Solange",                         0x36db4ef,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x3039, indexBladeStrangersSprites_Solange },
    { L"sel_cop_sol.rani",  L"Solange (CharaSelect)",           0x67a7e1,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x66d,  indexBladeStrangersSprites_Solange },
    { L"int_gun.rani",      L"Gunvolt",                         0x1f7b7cb,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x29bd, indexBladeStrangersSprites_Gunvolt },
    { L"sel_int_gun.rani",  L"Gunvolt (CharaSelect)",           0x2afe91,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x43d,  indexBladeStrangersSprites_Gunvolt },
    { L"nic_aba.rani",      L"Aban",                            0x1da175c,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x25d5, indexBladeStrangersSprites_Aban },
    { L"sel_nic_aba.rani",  L"Aban (CharaSelect)",              0x2a2c29,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x43d,  indexBladeStrangersSprites_Aban },
    { L"nic_cul.rani",      L"Curly",                           0x1c14320,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x2f99, indexBladeStrangersSprites_Curly },
    { L"sel_nic_cul.rani",  L"Curly (CharaSelect)",             0x219a7c,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x48d,  indexBladeStrangersSprites_Curly },
    { L"nic_hel.rani",      L"Helen",                           0x2e9493e,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x322d, indexBladeStrangersSprites_Helen },
    { L"sel_nic_hel.rani",  L"Helen (CharaSelect)",             0x4051aa,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x52d,  indexBladeStrangersSprites_Helen },
    { L"nic_isa.rani",      L"Isaac",                           0xfaaa9a,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x2715, indexBladeStrangersSprites_Isaac },
    { L"sel_nic_isa.rani",  L"Isaac (CharaSelect)",             0x1ae90c,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x519,  indexBladeStrangersSprites_Isaac },
    { L"nic_quo.rani",      L"Quote",                           0x241b7bd,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x3539, indexBladeStrangersSprites_Quote },
    { L"sel_nic_quo.rani",  L"Quote (CharaSelect)",             0x2fe16f,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x52d,  indexBladeStrangersSprites_Quote },
    { L"ori_lin.rani",      L"Lina",                            0x50c9318,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x2c79, indexBladeStrangersSprites_Lina },
    { L"sel_ori_lin.rani",  L"Lina (CharaSelect)",              0x9f4742,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x5cd,  indexBladeStrangersSprites_Lina },
    { L"poy_pia.rani",      L"Piaa",                            0x1b9cd28,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x2981, indexBladeStrangersSprites_Piaa },
    { L"sel_poy_pia.rani",  L"Piaa (CharaSelect)",              0x28f30d,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x4a1,  indexBladeStrangersSprites_Piaa },
    { L"uhr_bkw.rani",      L"Summer Kawase",                   0x25bb98c,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x3b15, indexBladeStrangersSprites_SummerKawase },
    { L"sel_uhr_bkw.rani",  L"Summer Kawase (CharaSelect)",     0x256ce4,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x4b5,  indexBladeStrangersSprites_SummerKawase },
    { L"uhr_emi.rani",      L"Emiko",                           0x5218c3c,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x30ed, indexBladeStrangersSprites_Emiko },
    { L"uhr_emi_shake.rani", L"Emiko (Clean-up Hitter Emiko!)", 0x396576,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x5cd,  indexBladeStrangersSprites_Emiko },
    { L"sel_uhr_emi.rani",  L"Emiko (CharaSelect)",             0x7e6af3,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x541,  indexBladeStrangersSprites_Emiko },
    { L"uhr_kws.rani",      L"Kawase",                          0x20864ce,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x32f5, indexBladeStrangersSprites_Kawase },
    { L"sel_uhr_kws.rani",  L"Kawase (CharaSelect)",            0x274109,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x4c9,  indexBladeStrangersSprites_Kawase },
    { L"uhr_nok.rani",      L"Noko",                            0x1d44aa3,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x2f85, indexBladeStrangersSprites_Noko },
    { L"sel_uhr_nok.rani",  L"Noko (CharaSelect)",              0x222fbc,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x465,  indexBladeStrangersSprites_Noko },
    { L"ycg_sho.rani",      L"Shovel Knight",                   0x3a7536e,      BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x2b39, indexBladeStrangersSprites_ShovelKnight },
    { L"sel_ycg_sho.rani",  L"Shovel Knight (CharaSelect)",     0x5f38a8,       BladeStrangers_S_PaletteNodesNormal,      GCBUPF_UseButtonLabelsAsPaletteSet,        0x519,  indexBladeStrangersSprites_ShovelKnight },
};
