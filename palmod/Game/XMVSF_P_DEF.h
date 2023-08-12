#pragma once
#include "XMVSF_A_DEF.h"

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x611e 

const sGame_PaletteDataset XMVSF_P_AKUMA_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Akuma },
    { L"Hadouken",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Akuma, 1 },
    { L"Zankuu Hadouken",       CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset XMVSF_P_AKUMA_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Akuma },
    { L"Hadouken",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Akuma, 1 },
    { L"Zankuu Hadouken",       CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset XMVSF_P_AKUMA_EXTRAS[] =
{
    { L"Bonus 1 Palette",           CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Akuma },
    { L"Bonus 1 Hadouken",          CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Akuma, 1 },
    { L"Bonus 1 Zankuu Hadouken",   CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Akuma, 1 },
    { L"Bonus 2 Palette",           CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Akuma },
    { L"Bonus 2 Hadouken",          CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Akuma, 1 },
    { L"Bonus 2 Zankuu Hadouken",   CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset XMVSF_P_AKUMA_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Burn Light",                            CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Kinetic 1",                             CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Kinetic 2",                             CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Kinetic 3",                             CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
};

const sDescTreeNode XMVSF_P_AKUMA_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_AKUMA_PUNCH, ARRAYSIZE(XMVSF_P_AKUMA_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_AKUMA_KICK, ARRAYSIZE(XMVSF_P_AKUMA_KICK) },
    { L"Extras" ,           DESC_NODETYPE_TREE, (void*)XMVSF_P_AKUMA_EXTRAS, ARRAYSIZE(XMVSF_P_AKUMA_EXTRAS) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_AKUMA_STATUS, ARRAYSIZE(XMVSF_P_AKUMA_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x3c86

const sGame_PaletteDataset XMVSF_P_CHUN_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Keiokuken (shades)",    CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_ChunLi, 0x01 },
    { L"Lightning Kicks / Kikouken / Kikosho",   CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_CHUN_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Keiokuken (shades)",    CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_ChunLi, 0x01 },
    { L"Lightning Kicks / Kikouken / Kikosho",   CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_CHUN_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Burn Light",                            CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kinetic 1",                             CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kinetic 2",                             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kinetic 3",                             CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
};

const sDescTreeNode XMVSF_P_CHUN_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_CHUN_PUNCH, ARRAYSIZE(XMVSF_P_CHUN_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_CHUN_KICK, ARRAYSIZE(XMVSF_P_CHUN_KICK) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_CHUN_STATUS, ARRAYSIZE(XMVSF_P_CHUN_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x3ea6

const sGame_PaletteDataset XMVSF_P_CHUNSFA_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"Keiokuken (shades)",    CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_ChunLi, 0x0f },
    { L"Lightning Kicks / Kikouken / Kikosho",   CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_CHUNSFA_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"Keiokuken (shades)",    CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_ChunLi, 0x0f },
    { L"Lightning Kicks / Kikouken / Kikosho",   CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_CHUNSFA_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Burn Light",                            CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kinetic 1",                             CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kinetic 2",                             CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kinetic 3",                             CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
};

const sDescTreeNode XMVSF_P_CHUNSFA_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_CHUNSFA_PUNCH, ARRAYSIZE(XMVSF_P_CHUNSFA_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_CHUNSFA_KICK, ARRAYSIZE(XMVSF_P_CHUNSFA_KICK) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_CHUNSFA_STATUS, ARRAYSIZE(XMVSF_P_CHUNSFA_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x66f6

const sGame_PaletteDataset XMVSF_P_CYCLOPS_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Cyclops, 0x00, &pairNext },
    { L"HK Extra",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Cyclops, 0x01 },
    { L"Optic Blast Super",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Cyclops, 0x02 },

    { L"Intro 1",               CURRENT_LOCATION + (0x17 * 0x20), CURRENT_LOCATION + (0x18 * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 2",               CURRENT_LOCATION + (0x18 * 0x20), CURRENT_LOCATION + (0x19 * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 3",               CURRENT_LOCATION + (0x19 * 0x20), CURRENT_LOCATION + (0x1a * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 4",               CURRENT_LOCATION + (0x1a * 0x20), CURRENT_LOCATION + (0x1b * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 5",               CURRENT_LOCATION + (0x1b * 0x20), CURRENT_LOCATION + (0x1c * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 6",               CURRENT_LOCATION + (0x1c * 0x20), CURRENT_LOCATION + (0x1d * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 7",               CURRENT_LOCATION + (0x1d * 0x20), CURRENT_LOCATION + (0x1e * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 8",               CURRENT_LOCATION + (0x1e * 0x20), CURRENT_LOCATION + (0x1f * 0x20), indexCPS2Sprites_Cyclops, 0x0c },

    { L"Optic Blast 1",         CURRENT_LOCATION + (0x2c * 0x20), CURRENT_LOCATION + (0x2d * 0x20), indexCPS2Sprites_Cyclops, 0x0d },
    { L"Optic Blast 2",         CURRENT_LOCATION + (0x2d * 0x20), CURRENT_LOCATION + (0x2e * 0x20), indexCPS2Sprites_Cyclops, 0x0d },
};

const sGame_PaletteDataset XMVSF_P_CYCLOPS_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Cyclops, 0x00, &pairNext },
    { L"HK Extra",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Cyclops, 0x01 },
    { L"Optic Blast Super",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Cyclops, 0x02 },

    { L"Intro 1",               CURRENT_LOCATION + (0x1f * 0x20), CURRENT_LOCATION + (0x20 * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 2",               CURRENT_LOCATION + (0x20 * 0x20), CURRENT_LOCATION + (0x21 * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 3",               CURRENT_LOCATION + (0x21 * 0x20), CURRENT_LOCATION + (0x22 * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 4",               CURRENT_LOCATION + (0x22 * 0x20), CURRENT_LOCATION + (0x23 * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 5",               CURRENT_LOCATION + (0x23 * 0x20), CURRENT_LOCATION + (0x24 * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 6",               CURRENT_LOCATION + (0x24 * 0x20), CURRENT_LOCATION + (0x25 * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 7",               CURRENT_LOCATION + (0x25 * 0x20), CURRENT_LOCATION + (0x26 * 0x20), indexCPS2Sprites_Cyclops, 0x0c },
    { L"Intro 8",               CURRENT_LOCATION + (0x26 * 0x20), CURRENT_LOCATION + (0x27 * 0x20), indexCPS2Sprites_Cyclops, 0x0c },

    { L"Optic Blast 1",         CURRENT_LOCATION + (0x2e * 0x20), CURRENT_LOCATION + (0x2f * 0x20), indexCPS2Sprites_Cyclops, 0x0d },
    { L"Optic Blast 2",         CURRENT_LOCATION + (0x2f * 0x20), CURRENT_LOCATION + (0x30 * 0x20), indexCPS2Sprites_Cyclops, 0x0d },
};

const sGame_PaletteDataset XMVSF_P_CYCLOPS_EXTRAS[] =
{
    { L"Bonus 1 Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Cyclops, 0x00, &pairNext },
    { L"Bonus 1 HK Extra",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Cyclops, 0x01 },
    { L"Bonus 1 Optic Blast Super",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Cyclops, 0x02 },
    { L"Bonus 2 Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Cyclops, 0x00, &pairNext },
    { L"Bonus 2 HK Extra",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Cyclops, 0x01 },
    { L"Bonus 2 Optic Blast Super",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Cyclops, 0x02 },

    { L"Optic Blast / Optic Bullet (Shared) 1",         CURRENT_LOCATION + (0x27 * 0x20), CURRENT_LOCATION + (0x28 * 0x20), indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet (Shared) 2",         CURRENT_LOCATION + (0x28 * 0x20), CURRENT_LOCATION + (0x29 * 0x20), indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet (Shared) 3 Unused?", CURRENT_LOCATION + (0x29 * 0x20), CURRENT_LOCATION + (0x2a * 0x20), indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet (Shared) 4",         CURRENT_LOCATION + (0x2a * 0x20), CURRENT_LOCATION + (0x2b * 0x20), indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet (Shared) 5 Unused?", CURRENT_LOCATION + (0x2b * 0x20), CURRENT_LOCATION + (0x2c * 0x20), indexCPS2Sprites_Cyclops, 0x0b },

    { L"Taunt",                         CURRENT_LOCATION + (0x30 * 0x20), CURRENT_LOCATION + (0x31 * 0x20) },
};

const sGame_PaletteDataset XMVSF_P_CYCLOPS_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
    { L"Burn Light",                            CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
    { L"Kinetic 1",                             CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
    { L"Kinetic 2",                             CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
    { L"Kinetic 3",                             CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Cyclops, 0x00 },
};

const sDescTreeNode XMVSF_P_CYCLOPS_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_CYCLOPS_PUNCH, ARRAYSIZE(XMVSF_P_CYCLOPS_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_CYCLOPS_KICK, ARRAYSIZE(XMVSF_P_CYCLOPS_KICK) },
    { L"Extras",            DESC_NODETYPE_TREE, (void*)XMVSF_P_CYCLOPS_EXTRAS, ARRAYSIZE(XMVSF_P_CYCLOPS_EXTRAS) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_CYCLOPS_STATUS, ARRAYSIZE(XMVSF_P_CYCLOPS_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x4456

const sGame_PaletteDataset XMVSF_P_DHALSIM_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Flames",        CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Sally",         CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Dhalsim, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_DHALSIM_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Flames",        CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Sally",         CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Dhalsim, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_DHALSIM_EXTRA[] =
{
    { L"Bonus 1",       CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Bonus 2",       CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset XMVSF_P_DHALSIM_STATUS[] =
{
    { L"Light Super Trail", CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Dark Super Trail",  CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Burn Light",        CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Burn Dark",         CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Shocked Light",     CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Shocked Dark",      CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Dark Burn Light",   CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Dark Burn Dark",    CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kinetic 1",         CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kinetic 2",         CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kinetic 3",         CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
};

const sDescTreeNode XMVSF_P_DHALSIM_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_DHALSIM_PUNCH, ARRAYSIZE(XMVSF_P_DHALSIM_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_DHALSIM_KICK, ARRAYSIZE(XMVSF_P_DHALSIM_KICK) },
    { L"Extra",             DESC_NODETYPE_TREE, (void*)XMVSF_P_DHALSIM_EXTRA, ARRAYSIZE(XMVSF_P_DHALSIM_EXTRA) },
    { L"Status",            DESC_NODETYPE_TREE, (void*)XMVSF_P_DHALSIM_STATUS, ARRAYSIZE(XMVSF_P_DHALSIM_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x503a

const sGame_PaletteDataset XMVSF_P_KEN_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Hadouken",      CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Ken, 0x10 },
    { L"Shoryuken",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Ken, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_KEN_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Hadouken",      CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Ken, 0x10 },
    { L"Shoryuken",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Ken, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_KEN_EXTRAS[] =
{
    { L"Bonus 1 Palette",       CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Bonus 1 Hadouken",      CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Ken, 0x10 },
    { L"Bonus 1 Shoryuken",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Ken, 0x02 },
    { L"Bonus 2 Palette",       CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Bonus 2 Hadouken",      CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Ken, 0x10 },
    { L"Bonus 2 Shoryuken",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Ken, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_KEN_STATUS[] =
{
    { L"Light Super Trail",     CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Dark Super Trail",      CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Burn Light",            CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Burn Dark",             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Shocked Light",         CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Shocked Dark",          CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Dark Burn Light",       CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Dark Burn Dark",        CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Kinetic 1",             CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Kinetic 2",             CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Kinetic 3",             CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Ken, 0x00 },
};

const sDescTreeNode XMVSF_P_KEN_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_KEN_PUNCH, ARRAYSIZE(XMVSF_P_KEN_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_KEN_KICK, ARRAYSIZE(XMVSF_P_KEN_KICK) },
    { L"Extras",            DESC_NODETYPE_TREE, (void*)XMVSF_P_KEN_EXTRAS, ARRAYSIZE(XMVSF_P_KEN_EXTRAS) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_KEN_STATUS, ARRAYSIZE(XMVSF_P_KEN_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x6b6e

const sGame_PaletteDataset XMVSF_P_BISON_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Psycho FX 1",   CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Bison, 0x08 },
    { L"Psycho FX 2",   CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Bison, 0x09 },
    { L"Psycho FX 1",   CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Bison, 0x08 },
    { L"Psycho FX 2",   CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Bison, 0x09 },
};

const sGame_PaletteDataset XMVSF_P_BISON_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Psycho FX 1",   CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Bison, 0x08 },
    { L"Psycho FX 2",   CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Bison, 0x09 },
    { L"Psycho FX 1",   CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Bison, 0x08 },
    { L"Psycho FX 2",   CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Bison, 0x09 },
};

const sGame_PaletteDataset XMVSF_P_BISON_STATUS[] =
{
    { L"Light Super Trail",     CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Dark Super Trail",      CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Burn Light",            CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Burn Dark",             CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Shocked Light",         CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Shocked Dark",          CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Dark Burn Light",       CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Dark Burn Dark",        CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Kinetic 1",             CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Kinetic 2",             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Kinetic 3",             CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Bison, 0x00 },
};

const sDescTreeNode XMVSF_P_BISON_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_BISON_PUNCH, ARRAYSIZE(XMVSF_P_BISON_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_BISON_KICK, ARRAYSIZE(XMVSF_P_BISON_KICK) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_BISON_STATUS, ARRAYSIZE(XMVSF_P_BISON_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x48ee

const sGame_PaletteDataset XMVSF_P_RYU_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadouken",      CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Ryu, 0x01 },
    { L"Extra 2",       CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Ryu, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_RYU_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadouken",      CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Ryu, 0x01 },
    { L"Extra 2",       CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Ryu, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_RYU_EXTRAS[] =
{
    { L"Bonus 1 Palette",       CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Bonus 1 Hadouken",      CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Ryu, 0x01 },
    { L"Bonus 1 Extra 2",       CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Ryu, 0x02 },
    { L"Bonus 2 Palette",       CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Bonus 2 Hadouken",      CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Ryu, 0x01 },
    { L"Bonus 2 Extra 2",       CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Ryu, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_RYU_STATUS[] =
{
    { L"Light Super Trail",     CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Dark Super Trail",      CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Burn Light",            CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Burn Dark",             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Shocked Light",         CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Shocked Dark",          CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Dark Burn Light",       CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Dark Burn Dark",        CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Kinetic 1",             CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Kinetic 2",             CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Kinetic 3",             CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
};

const sDescTreeNode XMVSF_P_RYU_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_RYU_PUNCH, ARRAYSIZE(XMVSF_P_RYU_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_RYU_KICK, ARRAYSIZE(XMVSF_P_RYU_KICK) },
    { L"Extras" ,           DESC_NODETYPE_TREE, (void*)XMVSF_P_RYU_EXTRAS, ARRAYSIZE(XMVSF_P_RYU_EXTRAS) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_RYU_STATUS, ARRAYSIZE(XMVSF_P_RYU_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x558a

const sGame_PaletteDataset XMVSF_P_WOLVIE_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws",         CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Wolverine, 0x01 },
    { L"Slash FX",      CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Wolverine, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_WOLVIE_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws",         CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Wolverine, 0x01 },
    { L"Slash FX",      CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Wolverine, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_WOLVIE_STATUS[] =
{
    { L"Light Super Trail",     CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
    { L"Dark Super Trail",      CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
    { L"Burn Light",            CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
    { L"Burn Dark",             CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
    { L"Shocked Light",         CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
    { L"Shocked Dark",          CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
    { L"Dark Burn Light",       CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
    { L"Dark Burn Dark",        CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
    { L"Kinetic 1",             CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
    { L"Kinetic 2",             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
    { L"Kinetic 3",             CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Wolverine, 0x00 },
};

const sDescTreeNode XMVSF_P_WOLVIE_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_WOLVIE_PUNCH, ARRAYSIZE(XMVSF_P_WOLVIE_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_WOLVIE_KICK, ARRAYSIZE(XMVSF_P_WOLVIE_KICK) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_WOLVIE_STATUS, ARRAYSIZE(XMVSF_P_WOLVIE_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x585a

const sGame_PaletteDataset XMVSF_P_ZANGIEF_PUNCH[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Banishing Fist",    CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Zangief, 0x01 },
    { L"Extra 2",           CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Zangief, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_ZANGIEF_KICK[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Banishing Fist",    CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Zangief, 0x01 },
    { L"Extra 2",           CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Zangief, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_ZANGIEF_EXTRA[] =
{
    { L"Bonus 1 Palette",           CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Bonus 1 Banishing Fist",    CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Zangief, 0x01 },
    { L"Bonus 1 Extra 2",           CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Zangief, 0x02 },
    { L"Bonus 2 Palette",           CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Bonus 2 Banishing Fist",    CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Zangief, 0x01 },
    { L"Bonus 2 Extra 2",           CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Zangief, 0x02 },
    { L"Bonus 3 Palette",           CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Bonus 3 Banishing Fist",    CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Zangief, 0x01 },
    { L"Bonus 3 Extra 2",           CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Zangief, 0x02 },
    { L"Bonus 4 Palette",           CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Bonus 4 Banishing Fist",    CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Zangief, 0x01 },
    { L"Bonus 4 Extra 2",           CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Zangief, 0x02 },

};

const sGame_PaletteDataset XMVSF_P_ZANGIEF_STATUS[] =
{
    { L"Light Super Trail",     CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Dark Super Trail",      CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Burn Light",            CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Burn Dark",             CURRENT_LOCATION + (0x17 * 0x20), CURRENT_LOCATION + (0x18 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Shocked Light",         CURRENT_LOCATION + (0x18 * 0x20), CURRENT_LOCATION + (0x19 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Shocked Dark",          CURRENT_LOCATION + (0x19 * 0x20), CURRENT_LOCATION + (0x1a * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Dark Burn Light",       CURRENT_LOCATION + (0x1a * 0x20), CURRENT_LOCATION + (0x1b * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Dark Burn Dark",        CURRENT_LOCATION + (0x1b * 0x20), CURRENT_LOCATION + (0x1c * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Kinetic 1",             CURRENT_LOCATION + (0x1c * 0x20), CURRENT_LOCATION + (0x1d * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Kinetic 2",             CURRENT_LOCATION + (0x1d * 0x20), CURRENT_LOCATION + (0x1e * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Kinetic 3",             CURRENT_LOCATION + (0x1e * 0x20), CURRENT_LOCATION + (0x1f * 0x20), indexCPS2Sprites_Zangief, 0x00 },
};

const sDescTreeNode XMVSF_P_ZANGIEF_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_ZANGIEF_PUNCH, ARRAYSIZE(XMVSF_P_ZANGIEF_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_ZANGIEF_KICK, ARRAYSIZE(XMVSF_P_ZANGIEF_KICK) },
    { L"Extras",            DESC_NODETYPE_TREE, (void*)XMVSF_P_ZANGIEF_EXTRA, ARRAYSIZE(XMVSF_P_ZANGIEF_EXTRA) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_ZANGIEF_STATUS, ARRAYSIZE(XMVSF_P_ZANGIEF_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x4e06

const sGame_PaletteDataset XMVSF_P_CAMMY_PUNCH[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Psycho FX",         CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Cammy, 0x01 },
    { L"Coat",              CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Cammy, 0x02 },

    { L"Cannon Revenge 1",  CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 2",  CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 3",  CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 4",  CURRENT_LOCATION + (0x17 * 0x20), CURRENT_LOCATION + (0x18 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 5",  CURRENT_LOCATION + (0x18 * 0x20), CURRENT_LOCATION + (0x19 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 6",  CURRENT_LOCATION + (0x19 * 0x20), CURRENT_LOCATION + (0x1a * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 7",  CURRENT_LOCATION + (0x1a * 0x20), CURRENT_LOCATION + (0x1b * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 8",  CURRENT_LOCATION + (0x1b * 0x20), CURRENT_LOCATION + (0x1c * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 9",  CURRENT_LOCATION + (0x1c * 0x20), CURRENT_LOCATION + (0x1d * 0x20), indexCPS2Sprites_Cammy, 0x0b },
};

const sGame_PaletteDataset XMVSF_P_CAMMY_KICK[] =
{
    { L"Palette",   CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Psycho FX", CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Cammy, 0x01 },
    { L"Coat",      CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Cammy, 0x02 },

    { L"Cannon Revenge 1",  CURRENT_LOCATION + (0x1d * 0x20), CURRENT_LOCATION + (0x1e * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 2",  CURRENT_LOCATION + (0x1e * 0x20), CURRENT_LOCATION + (0x1f * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 3",  CURRENT_LOCATION + (0x1f * 0x20), CURRENT_LOCATION + (0x20 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 4",  CURRENT_LOCATION + (0x20 * 0x20), CURRENT_LOCATION + (0x21 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 5",  CURRENT_LOCATION + (0x21 * 0x20), CURRENT_LOCATION + (0x22 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 6",  CURRENT_LOCATION + (0x22 * 0x20), CURRENT_LOCATION + (0x23 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 7",  CURRENT_LOCATION + (0x23 * 0x20), CURRENT_LOCATION + (0x24 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 8",  CURRENT_LOCATION + (0x24 * 0x20), CURRENT_LOCATION + (0x25 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
    { L"Cannon Revenge 9",  CURRENT_LOCATION + (0x25 * 0x20), CURRENT_LOCATION + (0x26 * 0x20), indexCPS2Sprites_Cammy, 0x0b },
};

const sGame_PaletteDataset XMVSF_P_CAMMY_EXTRAS[] =
{
    { L"Extra 1",   CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Extra 2",   CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Extra 3",   CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset XMVSF_P_CAMMY_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Burn Light",                            CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Kinetic 1",                             CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Kinetic 2",                             CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Cammy, 0x00 },
    { L"Kinetic 3",                             CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Cammy, 0x00 },
};

const sDescTreeNode XMVSF_P_CAMMY_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_CAMMY_PUNCH, ARRAYSIZE(XMVSF_P_CAMMY_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_CAMMY_KICK, ARRAYSIZE(XMVSF_P_CAMMY_KICK) },
    { L"Extras",            DESC_NODETYPE_TREE, (void*)XMVSF_P_CAMMY_EXTRAS, ARRAYSIZE(XMVSF_P_CAMMY_EXTRAS) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_CAMMY_STATUS, ARRAYSIZE(XMVSF_P_CAMMY_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x3a0a

const sGame_PaletteDataset XMVSF_P_CHARLIE_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Sonic Booms",   CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Charlie, 0x01 },
    { L"Flash Kick",    CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Charlie, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_CHARLIE_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Sonic Booms",   CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Charlie, 0x01 },
    { L"Flash Kick",    CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Charlie, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_CHARLIE_EXTRAS[] =
{
    { L"Bonus 1 Palette",       CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Bonus 1 Sonic Booms",   CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Charlie, 0x01 },
    { L"Bonus 1 Flash Kick",    CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Charlie, 0x02 },
    { L"Bonus 2 Palette",       CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Bonus 2 Sonic Booms",   CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Charlie, 0x01 },
    { L"Bonus 2 Flash Kick",    CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Charlie, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_CHARLIE_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Burn Light",                            CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Kinetic 1",                             CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Kinetic 2",                             CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Kinetic 3",                             CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
};

const sDescTreeNode XMVSF_P_CHARLIE_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_CHARLIE_PUNCH, ARRAYSIZE(XMVSF_P_CHARLIE_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_CHARLIE_KICK, ARRAYSIZE(XMVSF_P_CHARLIE_KICK) },
    { L"Extras",            DESC_NODETYPE_TREE, (void*)XMVSF_P_CHARLIE_EXTRAS, ARRAYSIZE(XMVSF_P_CHARLIE_EXTRAS) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_CHARLIE_STATUS, ARRAYSIZE(XMVSF_P_CHARLIE_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x4eb2

const sGame_PaletteDataset XMVSF_P_GAMBIT_PUNCH[] =
{
    { L"Palette",                       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Kinetic Card // Trick Card",    CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Gambit, 0x01 },
    { L"Cajun Strike",                  CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Gambit, 0x02 },

    { L"Glow Effects 1",                CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 2",                CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 3",                CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 4",                CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 5",                CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
};

const sGame_PaletteDataset XMVSF_P_GAMBIT_KICK[] =
{
    { L"Palette",                       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Kinetic Card // Trick Card",    CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Gambit, 0x01 },
    { L"Cajun Strike",                  CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Gambit, 0x02 },

    { L"Glow Effects 1",                CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 2",                CURRENT_LOCATION + (0x17 * 0x20), CURRENT_LOCATION + (0x18 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 3",                CURRENT_LOCATION + (0x18 * 0x20), CURRENT_LOCATION + (0x19 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 4",                CURRENT_LOCATION + (0x19 * 0x20), CURRENT_LOCATION + (0x1a * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 5",                CURRENT_LOCATION + (0x1a * 0x20), CURRENT_LOCATION + (0x1b * 0x20), indexCPS2Sprites_Gambit, 0x00 },
};

const sGame_PaletteDataset XMVSF_P_GAMBIT_STATUS[] =
{
    { L"Light Super Trail",             CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Dark Super Trail",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Burn Light",                    CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Burn Dark",                     CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Shocked Light",                 CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Shocked Dark",                  CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Dark Burn Light",               CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Dark Burn Dark",                CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Kinetic 1",                     CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Kinetic 2",                     CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
    { L"Kinetic 3",                     CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Gambit, 0x00 },
};

const sDescTreeNode XMVSF_P_GAMBIT_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_GAMBIT_PUNCH, ARRAYSIZE(XMVSF_P_GAMBIT_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_GAMBIT_KICK, ARRAYSIZE(XMVSF_P_GAMBIT_KICK) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_GAMBIT_STATUS, ARRAYSIZE(XMVSF_P_GAMBIT_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x461a

const sGame_PaletteDataset XMVSF_P_JUGGERNAUT_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Palette (01)",  CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20) },
    { L"Ground FX",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Juggy, 0x02 },

    { L"Juggernaut Headcrush Frame 1",  CURRENT_LOCATION + (0x21 * 0x20), CURRENT_LOCATION + (0x22 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Juggernaut Headcrush Frame 2",  CURRENT_LOCATION + (0x22 * 0x20), CURRENT_LOCATION + (0x23 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Cyttorak Power-Up 1",           CURRENT_LOCATION + (0x23 * 0x20), CURRENT_LOCATION + (0x24 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 2",           CURRENT_LOCATION + (0x24 * 0x20), CURRENT_LOCATION + (0x25 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 3",           CURRENT_LOCATION + (0x25 * 0x20), CURRENT_LOCATION + (0x26 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 4",           CURRENT_LOCATION + (0x26 * 0x20), CURRENT_LOCATION + (0x27 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 5",           CURRENT_LOCATION + (0x27 * 0x20), CURRENT_LOCATION + (0x28 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 6",           CURRENT_LOCATION + (0x28 * 0x20), CURRENT_LOCATION + (0x29 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 7",           CURRENT_LOCATION + (0x29 * 0x20), CURRENT_LOCATION + (0x2a * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 8",           CURRENT_LOCATION + (0x2a * 0x20), CURRENT_LOCATION + (0x2b * 0x20), indexCPS2Sprites_Juggy, 11 },
};

const sGame_PaletteDataset XMVSF_P_JUGGERNAUT_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Palette (01)",  CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20) },
    { L"Ground FX",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Juggy, 0x02 },

    { L"Juggernaut Headcrush Frame 1",  CURRENT_LOCATION + (0x2b * 0x20), CURRENT_LOCATION + (0x2c * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Juggernaut Headcrush Frame 2",  CURRENT_LOCATION + (0x2c * 0x20), CURRENT_LOCATION + (0x2d * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Cyttorak Power-Up 1",           CURRENT_LOCATION + (0x2d * 0x20), CURRENT_LOCATION + (0x2e * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 2",           CURRENT_LOCATION + (0x2e * 0x20), CURRENT_LOCATION + (0x2f * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 3",           CURRENT_LOCATION + (0x2f * 0x20), CURRENT_LOCATION + (0x30 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 4",           CURRENT_LOCATION + (0x30 * 0x20), CURRENT_LOCATION + (0x31 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 5",           CURRENT_LOCATION + (0x31 * 0x20), CURRENT_LOCATION + (0x32 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 6",           CURRENT_LOCATION + (0x32 * 0x20), CURRENT_LOCATION + (0x33 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 7",           CURRENT_LOCATION + (0x33 * 0x20), CURRENT_LOCATION + (0x34 * 0x20), indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 8",           CURRENT_LOCATION + (0x34 * 0x20), CURRENT_LOCATION + (0x35 * 0x20), indexCPS2Sprites_Juggy, 11 },
};

const sGame_PaletteDataset XMVSF_P_JUGGERNAUT_EXTRAS[] =
{
    { L"Palette 1",     CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Palette 2",     CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Palette 3",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
};

const sGame_PaletteDataset XMVSF_P_JUGGERNAUT_STATUS[] =
{
    { L"Light Super Trail",     CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Dark Super Trail",      CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Burn Light",            CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Burn Dark",             CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Shocked Light",         CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Shocked Dark",          CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Dark Burn Light",       CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Dark Burn Dark",        CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Kinetic 1",             CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Kinetic 2",             CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
    { L"Kinetic 3",             CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Juggy, 0x00 },
};

const sDescTreeNode XMVSF_P_JUGGERNAUT_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_JUGGERNAUT_PUNCH, ARRAYSIZE(XMVSF_P_JUGGERNAUT_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_JUGGERNAUT_KICK, ARRAYSIZE(XMVSF_P_JUGGERNAUT_KICK) },
    { L"Extras",            DESC_NODETYPE_TREE, (void*)XMVSF_P_JUGGERNAUT_EXTRAS, ARRAYSIZE(XMVSF_P_JUGGERNAUT_EXTRAS) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_JUGGERNAUT_STATUS, ARRAYSIZE(XMVSF_P_JUGGERNAUT_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x4e8a

const sGame_PaletteDataset XMVSF_P_MAGNETO_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Magnetic FX",   CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Magneto, 0x01 },
    { L"Magnetic FX 2", CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Magneto, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_MAGNETO_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Magnetic FX",   CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Magneto, 0x01 },
    { L"Magnetic FX 2", CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Magneto, 0x02 },
};

const sGame_PaletteDataset XMVSF_P_MAGNETO_EXTRAS[] =
{
    { L"Magnetic Shockwave", CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Magneto, 0x03 }, 
};

const sGame_PaletteDataset XMVSF_P_MAGNETO_STATUS[] =
{
    { L"Light Super Trail",     CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Dark Super Trail",      CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Burn Light",            CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Burn Dark",             CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Shocked Light",         CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Shocked Dark",          CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Dark Burn Light",       CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Dark Burn Dark",        CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Kinetic 1",             CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Kinetic 2",             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Magneto, 0x00 },
    { L"Kinetic 3",             CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Magneto, 0x00 },
};

const sDescTreeNode XMVSF_P_MAGNETO_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_MAGNETO_PUNCH, ARRAYSIZE(XMVSF_P_MAGNETO_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_MAGNETO_KICK, ARRAYSIZE(XMVSF_P_MAGNETO_KICK) },
    { L"Extras",              DESC_NODETYPE_TREE, (void*)XMVSF_P_MAGNETO_EXTRAS, ARRAYSIZE(XMVSF_P_MAGNETO_EXTRAS) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_MAGNETO_STATUS, ARRAYSIZE(XMVSF_P_MAGNETO_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x5e8e

const sGame_PaletteDataset XMVSF_P_ROGUE_PUNCH[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Palette (01)",      CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Ground FX",         CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Rogue, 0x02 },

    { L"Glow Effects 1",    CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Glow Effects 2",    CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Winposes",          CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Rogue, 0x0b },
};

const sGame_PaletteDataset XMVSF_P_ROGUE_KICK[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Palette (01)",      CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Ground FX",         CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Rogue, 0x02 },

    { L"Glow Effects 1",    CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Glow Effects 2",    CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Winposes",          CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Rogue, 0x0b },
};

const sGame_PaletteDataset XMVSF_P_ROGUE_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Burn Light",                            CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Kinetic 1",                             CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Kinetic 2",                             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
    { L"Kinetic 3",                             CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Rogue, 0x0c },
};

const sDescTreeNode XMVSF_P_ROGUE_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_ROGUE_PUNCH, ARRAYSIZE(XMVSF_P_ROGUE_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_ROGUE_KICK, ARRAYSIZE(XMVSF_P_ROGUE_KICK) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_ROGUE_STATUS, ARRAYSIZE(XMVSF_P_ROGUE_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x4dd2

const sGame_PaletteDataset XMVSF_P_SABRETOOTH_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Slash FX",      CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Sabretooth, 0x01 },
    { L"Birdy",         CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Sabretooth, 0x02 },

    { L"Getaway Car",   CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Sabretooth, 0x03 },
};

const sGame_PaletteDataset XMVSF_P_SABRETOOTH_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Slash FX",      CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Sabretooth, 0x01 },
    { L"Birdy",         CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Sabretooth, 0x02 },

    { L"Getaway Car",   CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Sabretooth, 0x03 },
};

const sGame_PaletteDataset XMVSF_P_SABRETOOTH_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Burn Light",                            CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Kinetic 1",                             CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Kinetic 2",                             CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
    { L"Kinetic 3",                             CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Sabretooth, 0x00 },
};

const sDescTreeNode XMVSF_P_SABRETOOTH_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_SABRETOOTH_PUNCH, ARRAYSIZE(XMVSF_P_SABRETOOTH_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_SABRETOOTH_KICK, ARRAYSIZE(XMVSF_P_SABRETOOTH_KICK) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_SABRETOOTH_STATUS, ARRAYSIZE(XMVSF_P_SABRETOOTH_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x4a16

const sGame_PaletteDataset XMVSF_P_STORM_PUNCH[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (01)",      CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (02)",      CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Storm, 0x00 },
};

const sGame_PaletteDataset XMVSF_P_STORM_KICK[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (01)",      CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (02)",      CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Storm, 0x00 },
};

const sGame_PaletteDataset XMVSF_P_STORM_EXTRAS[] =
{
    { L"Bonus 1 Palette",       CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 1 Palette (01)",  CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 1 Palette (02)",  CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 2 Palette",       CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 2 Palette (01)",  CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 2 Palette (02)",  CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 3 Palette",       CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 3 Palette (01)",  CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 3 Palette (02)",  CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 4 Palette",       CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 4 Palette (01)",  CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 4 Palette (02)",  CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 5 Palette",       CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 5 Palette (01)",  CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 5 Palette (02)",  CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 6 Palette",       CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 6 Palette (01)",  CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 6 Palette (02)",  CURRENT_LOCATION + (0x17 * 0x20), CURRENT_LOCATION + (0x18 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 7 Palette",       CURRENT_LOCATION + (0x18 * 0x20), CURRENT_LOCATION + (0x19 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 7 Palette (01)",  CURRENT_LOCATION + (0x19 * 0x20), CURRENT_LOCATION + (0x1a * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Bonus 7 Palette (02)",  CURRENT_LOCATION + (0x1a * 0x20), CURRENT_LOCATION + (0x1b * 0x20), indexCPS2Sprites_Storm, 0x00 },
    // There's a bunch more effects after Kinetic 3
};

const sGame_PaletteDataset XMVSF_P_STORM_STATUS[] =
{
    { L"Light Super Trail",     CURRENT_LOCATION + (0x1b * 0x20), CURRENT_LOCATION + (0x1c * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Dark Super Trail",      CURRENT_LOCATION + (0x1c * 0x20), CURRENT_LOCATION + (0x1d * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Burn Light",            CURRENT_LOCATION + (0x1d * 0x20), CURRENT_LOCATION + (0x1e * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Burn Dark",             CURRENT_LOCATION + (0x1e * 0x20), CURRENT_LOCATION + (0x1f * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Shocked Light",         CURRENT_LOCATION + (0x1f * 0x20), CURRENT_LOCATION + (0x20 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Shocked Dark",          CURRENT_LOCATION + (0x20 * 0x20), CURRENT_LOCATION + (0x21 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Dark Burn Light",       CURRENT_LOCATION + (0x21 * 0x20), CURRENT_LOCATION + (0x22 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Dark Burn Dark",        CURRENT_LOCATION + (0x22 * 0x20), CURRENT_LOCATION + (0x23 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Kinetic 1",             CURRENT_LOCATION + (0x23 * 0x20), CURRENT_LOCATION + (0x24 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Kinetic 2",             CURRENT_LOCATION + (0x24 * 0x20), CURRENT_LOCATION + (0x25 * 0x20), indexCPS2Sprites_Storm, 0x00 },
    { L"Kinetic 3",             CURRENT_LOCATION + (0x25 * 0x20), CURRENT_LOCATION + (0x26 * 0x20), indexCPS2Sprites_Storm, 0x00 },
};

const sDescTreeNode XMVSF_P_STORM_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)XMVSF_P_STORM_PUNCH, ARRAYSIZE(XMVSF_P_STORM_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)XMVSF_P_STORM_KICK, ARRAYSIZE(XMVSF_P_STORM_KICK) },
    { L"Extras",            DESC_NODETYPE_TREE, (void*)XMVSF_P_STORM_EXTRAS, ARRAYSIZE(XMVSF_P_STORM_EXTRAS) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)XMVSF_P_STORM_STATUS, ARRAYSIZE(XMVSF_P_STORM_STATUS) },
};

const std::vector<sGameUnitsByFile> XMVSF_P_UNITS =
{
    { L"PL11_10.BIN",   0xd500, L"Cammy",           XMVSF_P_CAMMY_COLLECTION, ARRAYSIZE(XMVSF_P_CAMMY_COLLECTION) },
    { L"PL10_10.BIN",   0xb284, L"Charlie",         XMVSF_P_CHARLIE_COLLECTION, ARRAYSIZE(XMVSF_P_CHARLIE_COLLECTION) },
    { L"PL0B_10.BIN",   0xfeb8, L"Chun-Li",         XMVSF_P_CHUN_COLLECTION, ARRAYSIZE(XMVSF_P_CHUN_COLLECTION) },
    { L"PL0B_10.BIN",   0xfeb8, L"Chun-Li (SFA)",   XMVSF_P_CHUNSFA_COLLECTION, ARRAYSIZE(XMVSF_P_CHUNSFA_COLLECTION) },
    { L"PL01_10.BIN",   0x100b4, L"Cyclops",        XMVSF_P_CYCLOPS_COLLECTION, ARRAYSIZE(XMVSF_P_CYCLOPS_COLLECTION) },
    { L"PL0C_10.BIN",   0xc7d8, L"Dhalsim",         XMVSF_P_DHALSIM_COLLECTION, ARRAYSIZE(XMVSF_P_DHALSIM_COLLECTION) },
    { L"PL04_10.BIN",   0xdb20, L"Gambit",          XMVSF_P_GAMBIT_COLLECTION, ARRAYSIZE(XMVSF_P_GAMBIT_COLLECTION) },
    { L"PL06_10.BIN",   0xce88, L"Juggernaut",      XMVSF_P_JUGGERNAUT_COLLECTION, ARRAYSIZE(XMVSF_P_JUGGERNAUT_COLLECTION) },
    { L"PL0A_10.BIN",   0xc61e, L"Ken",             XMVSF_P_KEN_COLLECTION, ARRAYSIZE(XMVSF_P_KEN_COLLECTION) },
    { L"PL0E_10.BIN",   0xd0b8, L"M. Bison",        XMVSF_P_BISON_COLLECTION, ARRAYSIZE(XMVSF_P_BISON_COLLECTION) },
    { L"PL07_10.BIN",   0xe8fc, L"Magneto",         XMVSF_P_MAGNETO_COLLECTION, ARRAYSIZE(XMVSF_P_MAGNETO_COLLECTION) },
    { L"PL03_10.BIN",   0xfdc4, L"Rogue",           XMVSF_P_ROGUE_COLLECTION, ARRAYSIZE(XMVSF_P_ROGUE_COLLECTION) },
    { L"PL09_10.BIN",   0xb47c, L"Ryu",             XMVSF_P_RYU_COLLECTION, ARRAYSIZE(XMVSF_P_RYU_COLLECTION) },
    { L"PL05_10.BIN",   0xd418, L"Sabretooth",      XMVSF_P_SABRETOOTH_COLLECTION, ARRAYSIZE(XMVSF_P_SABRETOOTH_COLLECTION) },
    { L"PL02_10.BIN",   0xe1a8, L"Storm",           XMVSF_P_STORM_COLLECTION, ARRAYSIZE(XMVSF_P_STORM_COLLECTION) },
    { L"PL00_10.BIN",   0xec40, L"Wolverine",       XMVSF_P_WOLVIE_COLLECTION, ARRAYSIZE(XMVSF_P_WOLVIE_COLLECTION) },
    { L"PL0D_10.BIN",   0xd730, L"Zangief",         XMVSF_P_ZANGIEF_COLLECTION, ARRAYSIZE(XMVSF_P_ZANGIEF_COLLECTION) },
    { L"PL0F_10.BIN",   0xd974, L"Akuma",           XMVSF_P_AKUMA_COLLECTION, ARRAYSIZE(XMVSF_P_AKUMA_COLLECTION) },
};
