#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SFEX2P_A_RYU_PALETTES_A. 
// * Update every array using SFEX2P_A_NUMUNITS below
// That should be it.  Good luck.

const std::vector<uint16_t> SFEX2P_A_IMGIDS_USED =
{
};

const sGame_PaletteDataset SFEX2P_A_KairiPlayer_Default[] =
{
    { L"Kairi (Player) Light", 0x14283e4, 0x14285e4 },
    { L"Kairi (Player) Medium", 0x1430604, 0x1430804 },
    { L"Kairi (Player) Heavy", 0x1448c64, 0x1448e64 },
};

const sGame_PaletteDataset SFEX2P_A_Hokuto_Default[] =
{
    { L"Hokuto Light", 0x148db54, 0x148dd54 },
    { L"Hokuto Medium", 0x1495d74, 0x1495f74 },
    { L"Hokuto Heavy", 0x14ae014, 0x14ae214 },
};

const sGame_PaletteDataset SFEX2P_A_Nanase_Default[] =
{
    { L"Nanase Light", 0x1506554, 0x1506754 },
    { L"Nanase Medium", 0x150e774, 0x150e974 },
    { L"Nanase Heavy", 0x1522dd4, 0x1522fd4 },
};

const sGame_PaletteDataset SFEX2P_A_NanaseShorts_Default[] =
{
    { L"Nanase (Shorts) Light", 0x157b310, 0x157b510 },
    { L"Nanase (Shorts) Medium", 0x1583530, 0x1583730 },
    { L"Nanase (Shorts) Heavy", 0x1597b90, 0x1597d90 },
};

const sGame_PaletteDataset SFEX2P_A_DDark_Default[] =
{
    { L"D.Dark Light", 0x15ded10, 0x15def10 },
    { L"D.Dark Medium", 0x15e6f30, 0x15e7130 },
    { L"D.Dark Heavy", 0x15ff3b0, 0x15ff5b0 },
};

const sGame_PaletteDataset SFEX2P_A_Pullum_Default[] =
{
    { L"Pullum Light", 0x1647108, 0x1647308 },
    { L"Pullum Medium", 0x164f328, 0x164f528 },
    { L"Pullum Heavy", 0x165f988, 0x165fb88 },
};

const sGame_PaletteDataset SFEX2P_A_Sharon_Default[] =
{
    { L"Sharon Light", 0x16bd814, 0x16bda14 },
    { L"Sharon Medium", 0x16c5a34, 0x16c5c34 },
    { L"Sharon Heavy", 0x16d6094, 0x16d6294 },
};

const sGame_PaletteDataset SFEX2P_A_Skullo_Default[] =
{
    { L"Skullo Light", 0x171f254, 0x171f454 },
    { L"Skullo Medium", 0x1727474, 0x1727674 },
    { L"Skullo Heavy", 0x173fad4, 0x173fcd4 },
};

const sGame_PaletteDataset SFEX2P_A_ShadowGeistPlayer_Default[] =
{
    { L"Shadow Geist (Player) Light", 0x179a8dc, 0x179aadc },
    { L"Shadow Geist (Player) Medium", 0x17a2afc, 0x17a2cfc },
    { L"Shadow Geist (Player) Heavy", 0x17b715c, 0x17b735c },
};

const sGame_PaletteDataset SFEX2P_A_CrackerJack_Default[] =
{
    { L"Cracker Jack Light", 0x17ffef8, 0x18000f8 },
    { L"Cracker Jack Medium", 0x1808118, 0x1808318 },
    { L"Cracker Jack Heavy", 0x181c778, 0x181c978 },
};

const sGame_PaletteDataset SFEX2P_A_Guile_Default[] =
{
    { L"Guile Light", 0x185b54c, 0x185b74c },
    { L"Guile Medium", 0x186376c, 0x186396c },
    { L"Guile Heavy", 0x1877dcc, 0x1877fcc },
};

const sGame_PaletteDataset SFEX2P_A_Dhalsim_Default[] =
{
    { L"Dhalsim Light", 0x18bab58, 0x18bad58 },
    { L"Dhalsim Medium", 0x18c2d78, 0x18c2f78 },
    { L"Dhalsim Heavy", 0x18d31f8, 0x18d33f8 },
};

const sGame_PaletteDataset SFEX2P_A_GarudaPlayer_Default[] =
{
    { L"Garuda (Player) Light", 0x1917d28, 0x1917f28 },
    { L"Garuda (Player) Medium", 0x191ff48, 0x1920148 },
    { L"Garuda (Player) Heavy", 0x19303c8, 0x19305c8 },
};

const sGame_PaletteDataset SFEX2P_A_Ryu_Default[] =
{
    { L"Ryu Light", 0x1973e48, 0x1974048 },
    { L"Ryu Medium", 0x197c068, 0x197c268 },
    { L"Ryu Heavy", 0x19944e8, 0x19946e8 },
};

const sGame_PaletteDataset SFEX2P_A_Ken_Default[] =
{
    { L"Ken Light", 0x19d8f60, 0x19d9160 },
    { L"Ken Medium", 0x19e1180, 0x19e1380 },
    { L"Ken Heavy", 0x19f9600, 0x19f9800 },
};

const sGame_PaletteDataset SFEX2P_A_ChunLi_Default[] =
{
    { L"Chun Light", 0x1a3832c, 0x1a3852c },
    { L"Chun Medium", 0x1a4054c, 0x1a4074c },
    { L"Chun Heavy", 0x1a587ec, 0x1a589ec },
};

const sGame_PaletteDataset SFEX2P_A_Zangief_Default[] =
{
    { L"Zangief Light", 0x1a9e508, 0x1a9e708 },
    { L"Zangief Medium", 0x1aa6728, 0x1aa6928 },
    { L"Zangief Heavy", 0x1ab6d88, 0x1ab6f88 },
};

const sGame_PaletteDataset SFEX2P_A_Blanka_Default[] =
{
    { L"Blanka Light", 0x1b018cc, 0x1b01acc },
    { L"Blanka Medium", 0x1b09aec, 0x1b09cec },
    { L"Blanka Heavy", 0x1b1a14c, 0x1b1a34c },
};

const sGame_PaletteDataset SFEX2P_A_Claw_Default[] =
{
    { L"Claw Light", 0x1b69ff0, 0x1b6a1f0 },
    { L"Claw Medium", 0x1b72210, 0x1b72410 },
    { L"Claw Heavy", 0x1b82870, 0x1b82a70 },
};

const sGame_PaletteDataset SFEX2P_A_KairiBoss_Default[] =
{
    { L"Kairi (Boss) Light", 0x1bc04f4, 0x1bc06f4 },
    { L"Kairi (Boss) Medium", 0x1bc8714, 0x1bc8914 },
    { L"Kairi (Boss) Heavy", 0x1be0d74, 0x1be0f74 },
};

const sGame_PaletteDataset SFEX2P_A_ShadowGeistBoss_Default[] =
{
    { L"Shadow Geist (Boss) Light", 0x1c3bb74, 0x1c3bd74 },
    { L"Shadow Geist (Boss) Medium", 0x1c43d94, 0x1c43f94 },
    { L"Shadow Geist (Boss) Heavy", 0x1c583f4, 0x1c585f4 },
};

const sGame_PaletteDataset SFEX2P_A_GarudaBoss_Default[] =
{
    { L"Garuda (Boss) Light", 0x1c9cedc, 0x1c9d0dc },
    { L"Garuda (Boss) Medium", 0x1ca50fc, 0x1ca52fc },
    { L"Garuda (Boss) Heavy", 0x1cb557c, 0x1cb577c },
};

const sGame_PaletteDataset SFEX2P_A_DicPlayer_Default[] =
{
    { L"Dic (Player) Light", 0x1cec888, 0x1ceca88 },
    { L"Dic (Player) Medium", 0x1cf4aa8, 0x1cf4ca8 },
    { L"Dic (Player) Heavy", 0x1d05108, 0x1d05308 },
};

const sGame_PaletteDataset SFEX2P_A_SagatPlayer_Default[] =
{
    { L"Sagat (Player) Light", 0x1d51788, 0x1d51988 },
    { L"Sagat (Player) Medium", 0x1d599a8, 0x1d59ba8 },
    { L"Sagat (Player) Heavy", 0x1d72008, 0x1d72208 },
};

const sGame_PaletteDataset SFEX2P_A_Darun_Default[] =
{
    { L"Darun Light", 0x1dc8f10, 0x1dc9110 },
    { L"Darun Medium", 0x1dd1130, 0x1dd1330 },
    { L"Darun Heavy", 0x1de9790, 0x1de9990 },
};

const sGame_PaletteDataset SFEX2P_A_VRosso_Default[] =
{
    { L"V Rosso Light", 0x1e41340, 0x1e41540 },
    { L"V Rosso Medium", 0x1e49560, 0x1e49760 },
    { L"V Rosso Heavy", 0x1e61a00, 0x1e61c00 },
};

const sGame_PaletteDataset SFEX2P_A_Area_Default[] =
{
    { L"Area Light", 0x1ebbef0, 0x1ebc0f0 },
    { L"Area Medium", 0x1ec4110, 0x1ec4310 },
    { L"Area Heavy", 0x1edc770, 0x1edc970 },
};

const sGame_PaletteDataset SFEX2P_A_DicBoss_Default[] =
{
    { L"Dic (Boss) Light", 0x1f13a7c, 0x1f13c7c },
    { L"Dic (Boss) Medium", 0x1f1bc9c, 0x1f1be9c },
    { L"Dic (Boss) Heavy", 0x1f2c2fc, 0x1f2c4fc },
};

const sGame_PaletteDataset SFEX2P_A_Dic2Boss_Default[] =
{
    { L"Dic 2 (Boss) Light", 0x1f6360c, 0x1f6380c },
    { L"Dic 2 (Boss) Medium", 0x1f6b82c, 0x1f6ba2c },
    { L"Dic 2 (Boss) Heavy", 0x1f7be8c, 0x1f7c08c },
};

const sGame_PaletteDataset SFEX2P_A_SagatBoss_Default[] =
{
    { L"Sagat (Boss) Light", 0x1fc8734, 0x1fc8934 },
    { L"Sagat (Boss) Medium", 0x1fd0954, 0x1fd0b54 },
    { L"Sagat (Boss) Heavy", 0x1fe8fb4, 0x1fe91b4 },
};

const sDescTreeNode SFEX2P_A_KairiPlayer_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_KairiPlayer_Default, ARRAYSIZE(SFEX2P_A_KairiPlayer_Default) },
};

const sDescTreeNode SFEX2P_A_Hokuto_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Hokuto_Default, ARRAYSIZE(SFEX2P_A_Hokuto_Default) },
};

const sDescTreeNode SFEX2P_A_Nanase_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Nanase_Default, ARRAYSIZE(SFEX2P_A_Nanase_Default) },
};

const sDescTreeNode SFEX2P_A_NanaseShorts_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_NanaseShorts_Default, ARRAYSIZE(SFEX2P_A_NanaseShorts_Default) },
};

const sDescTreeNode SFEX2P_A_DDark_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_DDark_Default, ARRAYSIZE(SFEX2P_A_DDark_Default) },
};

const sDescTreeNode SFEX2P_A_Pullum_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Pullum_Default, ARRAYSIZE(SFEX2P_A_Pullum_Default) },
};

const sDescTreeNode SFEX2P_A_Sharon_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Sharon_Default, ARRAYSIZE(SFEX2P_A_Sharon_Default) },
};

const sDescTreeNode SFEX2P_A_Skullo_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Skullo_Default, ARRAYSIZE(SFEX2P_A_Skullo_Default) },
};

const sDescTreeNode SFEX2P_A_ShadowGeistPlayer_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_ShadowGeistPlayer_Default, ARRAYSIZE(SFEX2P_A_ShadowGeistPlayer_Default) },
};

const sDescTreeNode SFEX2P_A_CrackerJack_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_CrackerJack_Default, ARRAYSIZE(SFEX2P_A_CrackerJack_Default) },
};

const sDescTreeNode SFEX2P_A_Guile_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Guile_Default, ARRAYSIZE(SFEX2P_A_Guile_Default) },
};

const sDescTreeNode SFEX2P_A_Dhalsim_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Dhalsim_Default, ARRAYSIZE(SFEX2P_A_Dhalsim_Default) },
};

const sDescTreeNode SFEX2P_A_GarudaPlayer_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_GarudaPlayer_Default, ARRAYSIZE(SFEX2P_A_GarudaPlayer_Default) },
};

const sDescTreeNode SFEX2P_A_Ryu_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Ryu_Default, ARRAYSIZE(SFEX2P_A_Ryu_Default) },
};

const sDescTreeNode SFEX2P_A_Ken_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Ken_Default, ARRAYSIZE(SFEX2P_A_Ken_Default) },
};

const sDescTreeNode SFEX2P_A_ChunLi_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_ChunLi_Default, ARRAYSIZE(SFEX2P_A_ChunLi_Default) },
};

const sDescTreeNode SFEX2P_A_Zangief_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Zangief_Default, ARRAYSIZE(SFEX2P_A_Zangief_Default) },
};

const sDescTreeNode SFEX2P_A_Blanka_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Blanka_Default, ARRAYSIZE(SFEX2P_A_Blanka_Default) },
};

const sDescTreeNode SFEX2P_A_Claw_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Claw_Default, ARRAYSIZE(SFEX2P_A_Claw_Default) },
};

const sDescTreeNode SFEX2P_A_KairiBoss_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_KairiBoss_Default, ARRAYSIZE(SFEX2P_A_KairiBoss_Default) },
};

const sDescTreeNode SFEX2P_A_ShadowGeistBoss_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_ShadowGeistBoss_Default, ARRAYSIZE(SFEX2P_A_ShadowGeistBoss_Default) },
};

const sDescTreeNode SFEX2P_A_GarudaBoss_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_GarudaBoss_Default, ARRAYSIZE(SFEX2P_A_GarudaBoss_Default) },
};

const sDescTreeNode SFEX2P_A_DicPlayer_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_DicPlayer_Default, ARRAYSIZE(SFEX2P_A_DicPlayer_Default) },
};

const sDescTreeNode SFEX2P_A_SagatPlayer_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_SagatPlayer_Default, ARRAYSIZE(SFEX2P_A_SagatPlayer_Default) },
};

const sDescTreeNode SFEX2P_A_Darun_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Darun_Default, ARRAYSIZE(SFEX2P_A_Darun_Default) },
};

const sDescTreeNode SFEX2P_A_VRosso_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_VRosso_Default, ARRAYSIZE(SFEX2P_A_VRosso_Default) },
};

const sDescTreeNode SFEX2P_A_Area_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Area_Default, ARRAYSIZE(SFEX2P_A_Area_Default) },
};

const sDescTreeNode SFEX2P_A_DicBoss_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_DicBoss_Default, ARRAYSIZE(SFEX2P_A_DicBoss_Default) },
};

const sDescTreeNode SFEX2P_A_Dic2Boss_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Dic2Boss_Default, ARRAYSIZE(SFEX2P_A_Dic2Boss_Default) },
};

const sDescTreeNode SFEX2P_A_SagatBoss_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFEX2P_A_SagatBoss_Default, ARRAYSIZE(SFEX2P_A_SagatBoss_Default) },
};

const sDescTreeNode SFEX2P_A_UNITS[] =
{
    { L"Kairi (Player)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_KairiPlayer_COLLECTION, ARRAYSIZE(SFEX2P_A_KairiPlayer_COLLECTION) },
    { L"Hokuto", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Hokuto_COLLECTION, ARRAYSIZE(SFEX2P_A_Hokuto_COLLECTION) },
    { L"Nanase", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Nanase_COLLECTION, ARRAYSIZE(SFEX2P_A_Nanase_COLLECTION) },
    { L"Nanase (Shorts)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_NanaseShorts_COLLECTION, ARRAYSIZE(SFEX2P_A_NanaseShorts_COLLECTION) },
    { L"D. Dark", DESC_NODETYPE_TREE, (void*)SFEX2P_A_DDark_COLLECTION, ARRAYSIZE(SFEX2P_A_DDark_COLLECTION) },
    { L"Pullum", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Pullum_COLLECTION, ARRAYSIZE(SFEX2P_A_Pullum_COLLECTION) },
    { L"Sharon", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Sharon_COLLECTION, ARRAYSIZE(SFEX2P_A_Sharon_COLLECTION) },
    { L"Skullo", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Skullo_COLLECTION, ARRAYSIZE(SFEX2P_A_Skullo_COLLECTION) },
    { L"Shadow Geist (Player)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_ShadowGeistPlayer_COLLECTION, ARRAYSIZE(SFEX2P_A_ShadowGeistPlayer_COLLECTION) },
    { L"Cracker Jack", DESC_NODETYPE_TREE, (void*)SFEX2P_A_CrackerJack_COLLECTION, ARRAYSIZE(SFEX2P_A_CrackerJack_COLLECTION) },
    { L"Guile", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Guile_COLLECTION, ARRAYSIZE(SFEX2P_A_Guile_COLLECTION) },
    { L"Dhalsim", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Dhalsim_COLLECTION, ARRAYSIZE(SFEX2P_A_Dhalsim_COLLECTION) },
    { L"Garuda (Player)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_GarudaPlayer_COLLECTION, ARRAYSIZE(SFEX2P_A_GarudaPlayer_COLLECTION) },
    { L"Ryu", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Ryu_COLLECTION, ARRAYSIZE(SFEX2P_A_Ryu_COLLECTION) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Ken_COLLECTION, ARRAYSIZE(SFEX2P_A_Ken_COLLECTION) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)SFEX2P_A_ChunLi_COLLECTION, ARRAYSIZE(SFEX2P_A_ChunLi_COLLECTION) },
    { L"Zangief", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Zangief_COLLECTION, ARRAYSIZE(SFEX2P_A_Zangief_COLLECTION) },
    { L"Blanka", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Blanka_COLLECTION, ARRAYSIZE(SFEX2P_A_Blanka_COLLECTION) },
    { L"Claw", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Claw_COLLECTION, ARRAYSIZE(SFEX2P_A_Claw_COLLECTION) },
    { L"Kairi (Boss)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_KairiBoss_COLLECTION, ARRAYSIZE(SFEX2P_A_KairiBoss_COLLECTION) },
    { L"Shadow Geist (Boss)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_ShadowGeistBoss_COLLECTION, ARRAYSIZE(SFEX2P_A_ShadowGeistBoss_COLLECTION) },
    { L"Garuda (Boss)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_GarudaBoss_COLLECTION, ARRAYSIZE(SFEX2P_A_GarudaBoss_COLLECTION) },
    { L"Dic (Player)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_DicPlayer_COLLECTION, ARRAYSIZE(SFEX2P_A_DicPlayer_COLLECTION) },
    { L"Sagat (Player)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_SagatPlayer_COLLECTION, ARRAYSIZE(SFEX2P_A_SagatPlayer_COLLECTION) },
    { L"Darun", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Darun_COLLECTION, ARRAYSIZE(SFEX2P_A_Darun_COLLECTION) },
    { L"V Rosso", DESC_NODETYPE_TREE, (void*)SFEX2P_A_VRosso_COLLECTION, ARRAYSIZE(SFEX2P_A_VRosso_COLLECTION) },
    { L"Area", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Area_COLLECTION, ARRAYSIZE(SFEX2P_A_Area_COLLECTION) },
    { L"Dic (Boss)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_DicBoss_COLLECTION, ARRAYSIZE(SFEX2P_A_DicBoss_COLLECTION) },
    { L"Dic 2 (Boss)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_Dic2Boss_COLLECTION, ARRAYSIZE(SFEX2P_A_Dic2Boss_COLLECTION) },
    { L"Sagat (Boss)", DESC_NODETYPE_TREE, (void*)SFEX2P_A_SagatBoss_COLLECTION, ARRAYSIZE(SFEX2P_A_SagatBoss_COLLECTION) },
};
