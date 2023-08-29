#pragma once
#include "MSHVSF_A_DEF.h"

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x9e22

const sGame_PaletteDataset MSHVSF_P_AKUMA_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Akuma },
    { L"Hadouken",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Akuma, 1 },
    { L"Zankuu Hadouken",       CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_P_AKUMA_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Akuma },
    { L"Hadouken",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Akuma, 1 },
    { L"Zankuu Hadouken",       CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_P_AKUMA_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Akuma },
    { L"Hadouken",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Akuma, 1 },
    { L"Zankuu Hadouken",       CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_P_AKUMA_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Akuma },
    { L"Hadouken",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Akuma, 1 },
    { L"Zankuu Hadouken",       CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_P_AKUMA_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Burn Light",                            CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Kinetic 1 (Unused)",                    CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Kinetic 2 (Unused)",                    CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Kinetic 3 (Unused)",                    CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Death Factor Light",                    CURRENT_LOCATION + (0x17 * 0x20), CURRENT_LOCATION + (0x18 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Death Factor Dark",                     CURRENT_LOCATION + (0x18 * 0x20), CURRENT_LOCATION + (0x19 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Energy Drain Light",                    CURRENT_LOCATION + (0x19 * 0x20), CURRENT_LOCATION + (0x1a * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Energy Drain Dark",                     CURRENT_LOCATION + (0x1a * 0x20), CURRENT_LOCATION + (0x1b * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1",    CURRENT_LOCATION + (0x1b * 0x20), CURRENT_LOCATION + (0x1c * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2",    CURRENT_LOCATION + (0x1c * 0x20), CURRENT_LOCATION + (0x1d * 0x20), indexCPS2Sprites_Akuma, 0x00 },
};

const sDescTreeNode MSHVSF_P_AKUMA_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_AKUMA_PUNCH, ARRAYSIZE(MSHVSF_P_AKUMA_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_AKUMA_KICK, ARRAYSIZE(MSHVSF_P_AKUMA_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_AKUMA_BONUS1, ARRAYSIZE(MSHVSF_P_AKUMA_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_AKUMA_BONUS2, ARRAYSIZE(MSHVSF_P_AKUMA_BONUS2) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)MSHVSF_P_AKUMA_STATUS, ARRAYSIZE(MSHVSF_P_AKUMA_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xe1f2

const sGame_PaletteDataset MSHVSF_P_ARMSPIDER_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Spidey, 00, &pairNext },
    { L"Spider-sense / Webs",   CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Spidey, 0x02, &pairPrevious },
    { L"Extra 2",               CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20) },
};

const sGame_PaletteDataset MSHVSF_P_ARMSPIDER_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Spidey, 00, &pairNext },
    { L"Spider-sense / Webs",   CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Spidey, 0x02, &pairPrevious },
    { L"Extra 2",               CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20) },
};

const sGame_PaletteDataset MSHVSF_P_ARMSPIDER_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Spidey, 00, &pairNext },
    { L"Spider-sense / Webs",   CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Spidey, 0x02, &pairPrevious },
    { L"Extra 2",               CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20) },
};

const sGame_PaletteDataset MSHVSF_P_ARMSPIDER_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Spidey, 00, &pairNext },
    { L"Spider-sense / Webs",   CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Spidey, 0x02, &pairPrevious },
    { L"Extra 2",               CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20) },
};

const sDescTreeNode MSHVSF_P_ARMSPIDER_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_ARMSPIDER_PUNCH, ARRAYSIZE(MSHVSF_P_ARMSPIDER_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_ARMSPIDER_KICK, ARRAYSIZE(MSHVSF_P_ARMSPIDER_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_ARMSPIDER_BONUS1, ARRAYSIZE(MSHVSF_P_ARMSPIDER_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_ARMSPIDER_BONUS2, ARRAYSIZE(MSHVSF_P_ARMSPIDER_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xdc12

const sGame_PaletteDataset MSHVSF_P_BLACKHEART_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Unused Dark Thunder",   CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Blackheart, 0x01 },
    { L"HP/HK Demons (hurt)",   CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_BLACKHEART_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Unused Dark Thunder",   CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Blackheart, 0x01 },
    { L"HP/HK Demons (hurt)",   CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_BLACKHEART_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Unused Dark Thunder",   CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Blackheart, 0x01 },
    { L"HP/HK Demons (hurt)",   CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_BLACKHEART_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Unused Dark Thunder",   CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Blackheart, 0x01 },
    { L"HP/HK Demons (hurt)",   CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_BLACKHEART_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Burn Light",                            CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Death Factor Light",                    CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Death Factor Dark",                     CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Energy Drain Light",                    CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Energy Drain Dark",                     CURRENT_LOCATION + (0x17 * 0x20), CURRENT_LOCATION + (0x18 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1",    CURRENT_LOCATION + (0x18 * 0x20), CURRENT_LOCATION + (0x19 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2",    CURRENT_LOCATION + (0x19 * 0x20), CURRENT_LOCATION + (0x1a * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
};

const sDescTreeNode MSHVSF_P_BLACKHEART_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_BLACKHEART_PUNCH, ARRAYSIZE(MSHVSF_P_BLACKHEART_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_BLACKHEART_KICK, ARRAYSIZE(MSHVSF_P_BLACKHEART_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_BLACKHEART_BONUS1, ARRAYSIZE(MSHVSF_P_BLACKHEART_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_BLACKHEART_BONUS2, ARRAYSIZE(MSHVSF_P_BLACKHEART_BONUS2) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)MSHVSF_P_BLACKHEART_STATUS, ARRAYSIZE(MSHVSF_P_BLACKHEART_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xe6d2

const sGame_PaletteDataset MSHVSF_P_MEPHISTO_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Unused Dark Thunder",   CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Blackheart, 0x01 },
    { L"HP/HK Demons (hurt)",   CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_MEPHISTO_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Unused Dark Thunder",   CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Blackheart, 0x01 },
    { L"HP/HK Demons (hurt)",   CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_MEPHISTO_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Unused Dark Thunder",   CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Blackheart, 0x01 },
    { L"HP/HK Demons (hurt)",   CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_MEPHISTO_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Unused Dark Thunder",   CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Blackheart, 0x01 },
    { L"HP/HK Demons (hurt)",   CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Blackheart, 0x02 },
};

const sDescTreeNode MSHVSF_P_MEPHISTO_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_MEPHISTO_PUNCH, ARRAYSIZE(MSHVSF_P_MEPHISTO_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_MEPHISTO_KICK, ARRAYSIZE(MSHVSF_P_MEPHISTO_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_MEPHISTO_BONUS1, ARRAYSIZE(MSHVSF_P_MEPHISTO_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_MEPHISTO_BONUS2, ARRAYSIZE(MSHVSF_P_MEPHISTO_BONUS2) },
};

// 0xef16 super1shield,super2shield, then normal SEs, then 2 eagles, then US Agent

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xef16

const sGame_PaletteDataset MSHVSF_P_CAPAM_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"Shield",        CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_CapAm, 0x01 },
    { L"Charging Star", CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_CapAm, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CAPAM_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"Shield",        CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_CapAm, 0x01 },
    { L"Charging Star", CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_CapAm, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CAPAM_BONUS1[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"Shield",        CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_CapAm, 0x01 },
    { L"Charging Star", CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_CapAm, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CAPAM_BONUS2[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"Shield",        CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_CapAm, 0x01 },
    { L"Charging Star", CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_CapAm, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CAPAM_EXTRAS[] =
{
    { L"P Eagle (Unused?)",         CURRENT_LOCATION + (0x28 * 0x20), CURRENT_LOCATION + (0x29 * 0x20), indexCPS2Sprites_CapAm, 0x03 },
    { L"K Eagle (Shared for P?)",   CURRENT_LOCATION + (0x29 * 0x20), CURRENT_LOCATION + (0x2a * 0x20), indexCPS2Sprites_CapAm, 0x03 },
};

const sGame_PaletteDataset MSHVSF_P_CAPAM_STATUS[] =
{
    { L"Light Super Trail",                         CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Light Shield Super Trail",                  CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_CapAm, 0x01 },
    { L"Dark Super Trail",                          CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Dark Shield Super Trail",                   CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_CapAm, 0x01 },

    { L"Cap Burn Light",                            CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"Cap Burn Dark",                             CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"Cap Shocked Light",                         CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"Cap Shocked Dark",                          CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"Cap Dark Burn Light",                       CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"Cap Dark Burn Dark",                        CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_CapAm, 0x00 },

    { L"US Agent Burn Light",                       CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"US Agent Burn Dark",                        CURRENT_LOCATION + (0x17 * 0x20), CURRENT_LOCATION + (0x18 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"US Agent Shocked Light",                    CURRENT_LOCATION + (0x18 * 0x20), CURRENT_LOCATION + (0x19 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"US Agent Shocked Dark",                     CURRENT_LOCATION + (0x19 * 0x20), CURRENT_LOCATION + (0x1a * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"US Agent Dark Burn Light",                  CURRENT_LOCATION + (0x1a * 0x20), CURRENT_LOCATION + (0x1b * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"US Agent Dark Burn Dark",                   CURRENT_LOCATION + (0x1b * 0x20), CURRENT_LOCATION + (0x1c * 0x20), indexCPS2Sprites_CapAm, 0x00 },


    { L"Cap Death Factor Light",                    CURRENT_LOCATION + (0x1c * 0x20), CURRENT_LOCATION + (0x1d * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"Cap Death Factor Dark",                     CURRENT_LOCATION + (0x1d * 0x20), CURRENT_LOCATION + (0x1e * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"Cap Energy Drain Light",                    CURRENT_LOCATION + (0x1e * 0x20), CURRENT_LOCATION + (0x1f * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"Cap Energy Drain Dark",                     CURRENT_LOCATION + (0x1f * 0x20), CURRENT_LOCATION + (0x20 * 0x20), indexCPS2Sprites_CapAm, 0x00 },

    { L"US Agent Death Factor Light",               CURRENT_LOCATION + (0x20 * 0x20), CURRENT_LOCATION + (0x21 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"US Agent Death Factor Dark",                CURRENT_LOCATION + (0x21 * 0x20), CURRENT_LOCATION + (0x22 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"US Agent Energy Drain Light",               CURRENT_LOCATION + (0x22 * 0x20), CURRENT_LOCATION + (0x23 * 0x20), indexCPS2Sprites_CapAm, 0x00 },
    { L"US Agent Energy Drain Dark",                CURRENT_LOCATION + (0x23 * 0x20), CURRENT_LOCATION + (0x24 * 0x20), indexCPS2Sprites_CapAm, 0x00 },

    { L"Blackheart/Mephisto HP/HK Demons 1",        CURRENT_LOCATION + (0x24 * 0x20), CURRENT_LOCATION + (0x25 * 0x20), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Blackheart/Mephisto HP/HK Demons 1", CURRENT_LOCATION + (0x26 * 0x20), CURRENT_LOCATION + (0x27 * 0x20), indexCPS2Sprites_CapAm, 0x01 },
    { L"Blackheart/Mephisto HP/HK Demons 2",        CURRENT_LOCATION + (0x25 * 0x20), CURRENT_LOCATION + (0x26 * 0x20), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Blackheart/Mephisto HP/HK Demons 2", CURRENT_LOCATION + (0x27 * 0x20), CURRENT_LOCATION + (0x28 * 0x20), indexCPS2Sprites_CapAm, 0x01 },
};

const sDescTreeNode MSHVSF_P_CAPAM_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_CAPAM_PUNCH, ARRAYSIZE(MSHVSF_P_CAPAM_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_CAPAM_KICK, ARRAYSIZE(MSHVSF_P_CAPAM_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_CAPAM_BONUS1, ARRAYSIZE(MSHVSF_P_CAPAM_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_CAPAM_BONUS2, ARRAYSIZE(MSHVSF_P_CAPAM_BONUS2) },
    { L"Extras",            DESC_NODETYPE_TREE, (void*)MSHVSF_P_CAPAM_EXTRAS, ARRAYSIZE(MSHVSF_P_CAPAM_EXTRAS) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)MSHVSF_P_CAPAM_STATUS, ARRAYSIZE(MSHVSF_P_CAPAM_STATUS) },
};

const sGame_PaletteDataset MSHVSF_P_USAGENT_PUNCH[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x2a * 0x20), CURRENT_LOCATION + (0x2b * 0x20), indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"Shield",        CURRENT_LOCATION + (0x2b * 0x20), CURRENT_LOCATION + (0x2c * 0x20), indexCPS2Sprites_CapAm, 0x01 },
    { L"Charging Star", CURRENT_LOCATION + (0x2c * 0x20), CURRENT_LOCATION + (0x2d * 0x20), indexCPS2Sprites_CapAm, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_USAGENT_KICK[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x2d * 0x20), CURRENT_LOCATION + (0x2e * 0x20), indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"Shield",        CURRENT_LOCATION + (0x2e * 0x20), CURRENT_LOCATION + (0x2f * 0x20), indexCPS2Sprites_CapAm, 0x01 },
    { L"Charging Star", CURRENT_LOCATION + (0x2f * 0x20), CURRENT_LOCATION + (0x30 * 0x20), indexCPS2Sprites_CapAm, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_USAGENT_BONUS1[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x30 * 0x20), CURRENT_LOCATION + (0x31 * 0x20), indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"Shield",        CURRENT_LOCATION + (0x31 * 0x20), CURRENT_LOCATION + (0x32 * 0x20), indexCPS2Sprites_CapAm, 0x01 },
    { L"Charging Star", CURRENT_LOCATION + (0x32 * 0x20), CURRENT_LOCATION + (0x33 * 0x20), indexCPS2Sprites_CapAm, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_USAGENT_BONUS2[] =
{
    { L"Palette",       CURRENT_LOCATION + (0x33 * 0x20), CURRENT_LOCATION + (0x34 * 0x20), indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"Shield",        CURRENT_LOCATION + (0x34 * 0x20), CURRENT_LOCATION + (0x35 * 0x20), indexCPS2Sprites_CapAm, 0x01 },
    { L"Charging Star", CURRENT_LOCATION + (0x35 * 0x20), CURRENT_LOCATION + (0x36 * 0x20), indexCPS2Sprites_CapAm, 0x02 },
};

const sDescTreeNode MSHVSF_P_USAGENT_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_USAGENT_PUNCH, ARRAYSIZE(MSHVSF_P_USAGENT_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_USAGENT_KICK, ARRAYSIZE(MSHVSF_P_USAGENT_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_USAGENT_BONUS1, ARRAYSIZE(MSHVSF_P_USAGENT_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_USAGENT_BONUS2, ARRAYSIZE(MSHVSF_P_USAGENT_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x731e

const sGame_PaletteDataset MSHVSF_P_CHUN_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Keiokuken (shades)",    CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_ChunLi, 0x01 },
    { L"Lightning Kicks / Kikouken / Kikosho",   CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CHUN_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Keiokuken (shades)",    CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_ChunLi, 0x01 },
    { L"Lightning Kicks / Kikouken / Kikosho",   CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CHUN_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Keiokuken (shades)",    CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_ChunLi, 0x01 },
    { L"Lightning Kicks / Kikouken / Kikosho",   CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CHUN_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Keiokuken (shades)",    CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_ChunLi, 0x01 },
    { L"Lightning Kicks / Kikouken / Kikosho",   CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CHUN_STATUS[] =
{
    { L"Light Super Trail",                     CURRENT_LOCATION + (0x0c * 0x20), CURRENT_LOCATION + (0x0d * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Dark Super Trail",                      CURRENT_LOCATION + (0x0d * 0x20), CURRENT_LOCATION + (0x0e * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Burn Light",                            CURRENT_LOCATION + (0x0e * 0x20), CURRENT_LOCATION + (0x0f * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Burn Dark",                             CURRENT_LOCATION + (0x0f * 0x20), CURRENT_LOCATION + (0x10 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Shocked Light",                         CURRENT_LOCATION + (0x10 * 0x20), CURRENT_LOCATION + (0x11 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Shocked Dark",                          CURRENT_LOCATION + (0x11 * 0x20), CURRENT_LOCATION + (0x12 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Dark Burn Light",                       CURRENT_LOCATION + (0x12 * 0x20), CURRENT_LOCATION + (0x13 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Dark Burn Dark",                        CURRENT_LOCATION + (0x13 * 0x20), CURRENT_LOCATION + (0x14 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kinetic 1 (Unused)",                    CURRENT_LOCATION + (0x14 * 0x20), CURRENT_LOCATION + (0x15 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kinetic 2 (Unused)",                    CURRENT_LOCATION + (0x15 * 0x20), CURRENT_LOCATION + (0x16 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kinetic 3 (Unused)",                    CURRENT_LOCATION + (0x16 * 0x20), CURRENT_LOCATION + (0x17 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },

    { L"Death Factor Light",                    CURRENT_LOCATION + (0x17 * 0x20), CURRENT_LOCATION + (0x18 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Death Factor Dark",                     CURRENT_LOCATION + (0x18 * 0x20), CURRENT_LOCATION + (0x19 * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Energy Drain Light",                    CURRENT_LOCATION + (0x19 * 0x20), CURRENT_LOCATION + (0x1a * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Energy Drain Dark",                     CURRENT_LOCATION + (0x1a * 0x20), CURRENT_LOCATION + (0x1b * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1",    CURRENT_LOCATION + (0x1b * 0x20), CURRENT_LOCATION + (0x1c * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2",    CURRENT_LOCATION + (0x1c * 0x20), CURRENT_LOCATION + (0x1d * 0x20), indexCPS2Sprites_ChunLi, 0x00 },
};

const sDescTreeNode MSHVSF_P_CHUN_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_CHUN_PUNCH, ARRAYSIZE(MSHVSF_P_CHUN_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_CHUN_KICK, ARRAYSIZE(MSHVSF_P_CHUN_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_CHUN_BONUS1, ARRAYSIZE(MSHVSF_P_CHUN_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_CHUN_BONUS2, ARRAYSIZE(MSHVSF_P_CHUN_BONUS2) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)MSHVSF_P_CHUN_STATUS, ARRAYSIZE(MSHVSF_P_CHUN_STATUS) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xa076

const sGame_PaletteDataset MSHVSF_P_CYBERAKUMA_PUNCH[] =
{
    { L"Palette",                   CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_CyberAkuma, 0, &pairNext2 },
    { L"Hadouken 1 Tatsu Flames",   CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Akuma, 0x01 },
    { L"Machinery, Hadouken 2",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_CyberAkuma, 0x01 },
};

const sGame_PaletteDataset MSHVSF_P_CYBERAKUMA_KICK[] =
{
    { L"Palette",                   CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_CyberAkuma, 0, &pairNext2 },
    { L"Hadouken 1 Tatsu Flames",   CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Akuma, 0x01 },
    { L"Machinery, Hadouken 2",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_CyberAkuma, 0x01 },
};

const sGame_PaletteDataset MSHVSF_P_CYBERAKUMA_BONUS1[] =
{
    { L"Palette",                   CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_CyberAkuma, 0, &pairNext2 },
    { L"Hadouken 1 Tatsu Flames",   CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Akuma, 0x01 },
    { L"Machinery, Hadouken 2",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_CyberAkuma, 0x01 },
};

const sGame_PaletteDataset MSHVSF_P_CYBERAKUMA_BONUS2[] =
{
    { L"Palette",                   CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_CyberAkuma, 0, &pairNext2 },
    { L"Hadouken 1 Tatsu Flames",   CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Akuma, 0x01 },
    { L"Machinery, Hadouken 2",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_CyberAkuma, 0x01 },
};

const sDescTreeNode MSHVSF_P_CYBERAKUMA_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_CYBERAKUMA_PUNCH, ARRAYSIZE(MSHVSF_P_CYBERAKUMA_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_CYBERAKUMA_KICK, ARRAYSIZE(MSHVSF_P_CYBERAKUMA_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_CYBERAKUMA_BONUS1, ARRAYSIZE(MSHVSF_P_CYBERAKUMA_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_CYBERAKUMA_BONUS2, ARRAYSIZE(MSHVSF_P_CYBERAKUMA_BONUS2) },
};

// MSHVSF_P_CYCLOPS_COLLECTION) }, // 

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xa692

const sGame_PaletteDataset MSHVSF_P_CYCLOPS_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Cyclops, 0x00, &pairNext },
    { L"HK Extra",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Cyclops, 0x01 },
    { L"Optic Blast Super",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Cyclops, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CYCLOPS_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Cyclops, 0x00, &pairNext },
    { L"HK Extra",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Cyclops, 0x01 },
    { L"Optic Blast Super",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Cyclops, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CYCLOPS_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Cyclops, 0x00, &pairNext },
    { L"HK Extra",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Cyclops, 0x01 },
    { L"Optic Blast Super",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Cyclops, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_CYCLOPS_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Cyclops, 0x00, &pairNext },
    { L"HK Extra",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Cyclops, 0x01 },
    { L"Optic Blast Super",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Cyclops, 0x02 },
};

const sDescTreeNode MSHVSF_P_CYCLOPS_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_CYCLOPS_PUNCH, ARRAYSIZE(MSHVSF_P_CYCLOPS_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_CYCLOPS_KICK, ARRAYSIZE(MSHVSF_P_CYCLOPS_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_CYCLOPS_BONUS1, ARRAYSIZE(MSHVSF_P_CYCLOPS_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_CYCLOPS_BONUS2, ARRAYSIZE(MSHVSF_P_CYCLOPS_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x70ca

const sGame_PaletteDataset MSHVSF_P_DAN_PUNCH[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Dan, 0x00 },
    { L"Gadoken Blue",      CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Dan, 0x01 },
    { L"Gadoken Red",       CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Dan, 0x01 },
};

const sGame_PaletteDataset MSHVSF_P_DAN_KICK[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Dan, 0x00 },
    { L"Gadoken Blue",      CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Dan, 0x01 },
    { L"Gadoken Red",       CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Dan, 0x01 },
};

const sGame_PaletteDataset MSHVSF_P_DAN_BONUS1[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Dan, 0x00 },
    { L"Gadoken Blue",      CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Dan, 0x01 },
    { L"Gadoken Red",       CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Dan, 0x01 },
};

const sGame_PaletteDataset MSHVSF_P_DAN_BONUS2[] =
{
    { L"Palette",           CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Dan, 0x00 },
    { L"Gadoken Blue",      CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Dan, 0x01 },
    { L"Gadoken Red",       CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Dan, 0x01 },
};

const sDescTreeNode MSHVSF_P_DAN_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_DAN_PUNCH, ARRAYSIZE(MSHVSF_P_DAN_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_DAN_KICK, ARRAYSIZE(MSHVSF_P_DAN_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_DAN_BONUS1, ARRAYSIZE(MSHVSF_P_DAN_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_DAN_BONUS2, ARRAYSIZE(MSHVSF_P_DAN_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xcdee

const sGame_PaletteDataset MSHVSF_P_DARKSAKURA_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Sakura, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Sakura, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_DARKSAKURA_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Sakura, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Sakura, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_DARKSAKURA_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Sakura, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Sakura, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_DARKSAKURA_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Sakura, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Sakura, 0x02 },
};

const sDescTreeNode MSHVSF_P_DARKSAKURA_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_DARKSAKURA_PUNCH, ARRAYSIZE(MSHVSF_P_DARKSAKURA_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_DARKSAKURA_KICK, ARRAYSIZE(MSHVSF_P_DARKSAKURA_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_DARKSAKURA_BONUS1, ARRAYSIZE(MSHVSF_P_DARKSAKURA_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_DARKSAKURA_BONUS2, ARRAYSIZE(MSHVSF_P_DARKSAKURA_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x7f9e

const sGame_PaletteDataset MSHVSF_P_DHALSIM_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Flames",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Sally",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Dhalsim, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_DHALSIM_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Flames",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Sally",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Dhalsim, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_DHALSIM_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Flames",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Sally",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Dhalsim, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_DHALSIM_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Flames",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Sally",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Dhalsim, 0x02 },
};

const sDescTreeNode MSHVSF_P_DHALSIM_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_DHALSIM_PUNCH, ARRAYSIZE(MSHVSF_P_DHALSIM_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_DHALSIM_KICK, ARRAYSIZE(MSHVSF_P_DHALSIM_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_DHALSIM_BONUS1, ARRAYSIZE(MSHVSF_P_DHALSIM_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_DHALSIM_BONUS2, ARRAYSIZE(MSHVSF_P_DHALSIM_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x7ee6

const sGame_PaletteDataset MSHVSF_P_HULK_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Hulk, 0x00 },
    { L"Gamma Charge/j.HP",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Hulk, 0x01 },
    { L"Gamma Slam/Gamma Wave",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Hulk, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_HULK_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Hulk, 0x00 },
    { L"Gamma Charge/j.HP",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Hulk, 0x01 },
    { L"Gamma Slam/Gamma Wave",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Hulk, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_HULK_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Hulk, 0x00 },
    { L"Gamma Charge/j.HP",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Hulk, 0x01 },
    { L"Gamma Slam/Gamma Wave",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Hulk, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_HULK_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Hulk, 0x00 },
    { L"Gamma Charge/j.HP",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Hulk, 0x01 },
    { L"Gamma Slam/Gamma Wave",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Hulk, 0x02 },
};

const sDescTreeNode MSHVSF_P_HULK_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_HULK_PUNCH, ARRAYSIZE(MSHVSF_P_HULK_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_HULK_KICK, ARRAYSIZE(MSHVSF_P_HULK_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_HULK_BONUS1, ARRAYSIZE(MSHVSF_P_HULK_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_HULK_BONUS2, ARRAYSIZE(MSHVSF_P_HULK_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x906e

const sGame_PaletteDataset MSHVSF_P_KEN_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Ken, 0x01 },
    { L"Shoryuken",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Ken, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_KEN_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Ken, 0x01 },
    { L"Shoryuken",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Ken, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_KEN_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Ken, 0x01 },
    { L"Shoryuken",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Ken, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_KEN_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Ken, 0x01 },
    { L"Shoryuken",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Ken, 0x02 },
};

const sDescTreeNode MSHVSF_P_KEN_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_KEN_PUNCH, ARRAYSIZE(MSHVSF_P_KEN_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_KEN_KICK, ARRAYSIZE(MSHVSF_P_KEN_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_KEN_BONUS1, ARRAYSIZE(MSHVSF_P_KEN_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_KEN_BONUS2, ARRAYSIZE(MSHVSF_P_KEN_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x9ed6

const sGame_PaletteDataset MSHVSF_P_BISON_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Extra 1",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Bison, 0x08 },
    { L"Extras 02",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Bison, 0x08 },
};

const sGame_PaletteDataset MSHVSF_P_BISON_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Extra 1",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Bison, 0x08 },
    { L"Extra 02",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Bison, 0x08 },
};

const sGame_PaletteDataset MSHVSF_P_BISON_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Extra 1",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Bison, 0x08 },
    { L"Extra 02",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Bison, 0x08 },
};

const sGame_PaletteDataset MSHVSF_P_BISON_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Extra 1",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Bison, 0x08 },
    { L"Extra 02",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Bison, 0x08 },
};

const sDescTreeNode MSHVSF_P_BISON_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_BISON_PUNCH, ARRAYSIZE(MSHVSF_P_BISON_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_BISON_KICK, ARRAYSIZE(MSHVSF_P_BISON_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_BISON_BONUS1, ARRAYSIZE(MSHVSF_P_BISON_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_BISON_BONUS2, ARRAYSIZE(MSHVSF_P_BISON_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xa292

const sGame_PaletteDataset MSHVSF_P_MECHGIEF_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Vodka Fire",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Zangief, 0x03 },
    { L"Extra 2",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Zangief, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_MECHGIEF_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Vodka Fire",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Zangief, 0x03 },
    { L"Extra 2",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Zangief, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_MECHGIEF_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Vodka Fire",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Zangief, 0x03 },
    { L"Extra 2",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Zangief, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_MECHGIEF_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Vodka Fire",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Zangief, 0x03 },
    { L"Extra 2",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Zangief, 0x02 },
};

const sDescTreeNode MSHVSF_P_MECHGIEF_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_MECHGIEF_PUNCH, ARRAYSIZE(MSHVSF_P_MECHGIEF_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_MECHGIEF_KICK, ARRAYSIZE(MSHVSF_P_MECHGIEF_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_MECHGIEF_BONUS1, ARRAYSIZE(MSHVSF_P_MECHGIEF_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_MECHGIEF_BONUS2, ARRAYSIZE(MSHVSF_P_MECHGIEF_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x934a

const sGame_PaletteDataset MSHVSF_P_NORIMARO_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Norimaro, 0x00 },
    { L"Variety Items",         CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x03 * 0x20) },
};

const sGame_PaletteDataset MSHVSF_P_NORIMARO_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Norimaro, 0x00 },
    { L"Variety Items",         CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x06 * 0x20) },
};

const sGame_PaletteDataset MSHVSF_P_NORIMARO_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Norimaro, 0x00 },
    { L"Variety Items",         CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x09 * 0x20) },
};

const sGame_PaletteDataset MSHVSF_P_NORIMARO_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Norimaro, 0x00 },
    { L"Variety Items",         CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0c * 0x20) },
};

const sDescTreeNode MSHVSF_P_NORIMARO_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_NORIMARO_PUNCH, ARRAYSIZE(MSHVSF_P_NORIMARO_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_NORIMARO_KICK, ARRAYSIZE(MSHVSF_P_NORIMARO_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_NORIMARO_BONUS1, ARRAYSIZE(MSHVSF_P_NORIMARO_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_NORIMARO_BONUS2, ARRAYSIZE(MSHVSF_P_NORIMARO_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xcd32

const sGame_PaletteDataset MSHVSF_P_ORED_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Intro Shockwave 1",     CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_OmegaRed, 0x01 },
    { L"Intro Shockwave 2",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_OmegaRed, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_ORED_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Intro Shockwave 1",     CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_OmegaRed, 0x01 },
    { L"Intro Shockwave 2",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_OmegaRed, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_ORED_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Intro Shockwave 1",     CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_OmegaRed, 0x01 },
    { L"Intro Shockwave 2",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_OmegaRed, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_ORED_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Intro Shockwave 1",     CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_OmegaRed, 0x01 },
    { L"Intro Shockwave 2",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_OmegaRed, 0x02 },
};

const sDescTreeNode MSHVSF_P_ORED_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_ORED_PUNCH, ARRAYSIZE(MSHVSF_P_ORED_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_ORED_KICK, ARRAYSIZE(MSHVSF_P_ORED_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_ORED_BONUS1, ARRAYSIZE(MSHVSF_P_ORED_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_ORED_BONUS2, ARRAYSIZE(MSHVSF_P_ORED_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x8326

const sGame_PaletteDataset MSHVSF_P_RYU_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Ryu, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Ryu, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_RYU_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Ryu, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Ryu, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_RYU_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Ryu, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Ryu, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_RYU_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Ryu, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Ryu, 0x02 },
};

const sDescTreeNode MSHVSF_P_RYU_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_RYU_PUNCH, ARRAYSIZE(MSHVSF_P_RYU_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_RYU_KICK, ARRAYSIZE(MSHVSF_P_RYU_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_RYU_BONUS1, ARRAYSIZE(MSHVSF_P_RYU_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_RYU_BONUS2, ARRAYSIZE(MSHVSF_P_RYU_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xb85e

const sGame_PaletteDataset MSHVSF_P_SAKURA_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Sakura, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Sakura, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_SAKURA_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Sakura, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Sakura, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_SAKURA_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Sakura, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Sakura, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_SAKURA_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Hadouken",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Sakura, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Sakura, 0x02 },
};

const sDescTreeNode MSHVSF_P_SAKURA_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_SAKURA_PUNCH, ARRAYSIZE(MSHVSF_P_SAKURA_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_SAKURA_KICK, ARRAYSIZE(MSHVSF_P_SAKURA_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_SAKURA_BONUS1, ARRAYSIZE(MSHVSF_P_SAKURA_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_SAKURA_BONUS2, ARRAYSIZE(MSHVSF_P_SAKURA_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x7f52

const sGame_PaletteDataset MSHVSF_P_SHADOW_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Sonic Boom",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Charlie, 0x01 },
    { L"Flash Kick",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Charlie, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_SHADOW_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Sonic Boom",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Charlie, 0x01 },
    { L"Flash Kick",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Charlie, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_SHADOW_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Sonic Boom",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Charlie, 0x01 },
    { L"Flash Kick",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Charlie, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_SHADOW_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Sonic Boom",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Charlie, 0x01 },
    { L"Flash Kick",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Charlie, 0x02 },
};

const sDescTreeNode MSHVSF_P_SHADOW_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_SHADOW_PUNCH, ARRAYSIZE(MSHVSF_P_SHADOW_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_SHADOW_KICK, ARRAYSIZE(MSHVSF_P_SHADOW_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_SHADOW_BONUS1, ARRAYSIZE(MSHVSF_P_SHADOW_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_SHADOW_BONUS2, ARRAYSIZE(MSHVSF_P_SHADOW_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x932a

const sGame_PaletteDataset MSHVSF_P_SHUMA_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"Dash Frame / Guard Frame",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Shuma, 0x01 },
    { L"FP / jFP / cFP / Intro",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Shuma, 0x09 },
};

const sGame_PaletteDataset MSHVSF_P_SHUMA_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"Dash Frame / Guard Frame",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Shuma, 0x01 },
    { L"FP / jFP / cFP / Intro",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Shuma, 0x09 },
};

const sGame_PaletteDataset MSHVSF_P_SHUMA_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"Dash Frame / Guard Frame",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Shuma, 0x01 },
    { L"FP / jFP / cFP / Intro",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Shuma, 0x09 },
};

const sGame_PaletteDataset MSHVSF_P_SHUMA_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"Dash Frame / Guard Frame",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Shuma, 0x01 },
    { L"FP / jFP / cFP / Intro",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Shuma, 0x09 },
};

const sDescTreeNode MSHVSF_P_SHUMA_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_SHUMA_PUNCH, ARRAYSIZE(MSHVSF_P_SHUMA_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_SHUMA_KICK, ARRAYSIZE(MSHVSF_P_SHUMA_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_SHUMA_BONUS1, ARRAYSIZE(MSHVSF_P_SHUMA_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_SHUMA_BONUS2, ARRAYSIZE(MSHVSF_P_SHUMA_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0xd712

const sGame_PaletteDataset MSHVSF_P_SPIDEY_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Spidey, 0x00, &pairNext },
    { L"Spider-sense / Webs",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Spidey, 0x02 },
    { L"Spotlight 1",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Spidey, 0x0d },
};

const sGame_PaletteDataset MSHVSF_P_SPIDEY_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Spidey, 0x00, &pairNext },
    { L"Spider-sense / Webs",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Spidey, 0x02 },
    { L"Spotlight 1",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Spidey, 0x0d },
};

const sGame_PaletteDataset MSHVSF_P_SPIDEY_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Spidey, 0x00, &pairNext },
    { L"Spider-sense / Webs",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Spidey, 0x02 },
    { L"Spotlight 1",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Spidey, 0x0d },
};

const sGame_PaletteDataset MSHVSF_P_SPIDEY_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Spidey, 0x00, &pairNext },
    { L"Spider-sense / Webs",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Spidey, 0x02 },
    { L"Spotlight 1",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Spidey, 0x0d },
};

const sDescTreeNode MSHVSF_P_SPIDEY_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_SPIDEY_PUNCH, ARRAYSIZE(MSHVSF_P_SPIDEY_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_SPIDEY_KICK, ARRAYSIZE(MSHVSF_P_SPIDEY_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_SPIDEY_BONUS1, ARRAYSIZE(MSHVSF_P_SPIDEY_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_SPIDEY_BONUS2, ARRAYSIZE(MSHVSF_P_SPIDEY_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x9826

const sGame_PaletteDataset MSHVSF_P_WOLVIE_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Wolverine, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Wolverine, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_WOLVIE_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Wolverine, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Wolverine, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_WOLVIE_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Wolverine, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Wolverine, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_WOLVIE_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Wolverine, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Wolverine, 0x02 },
};

const sDescTreeNode MSHVSF_P_WOLVIE_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_WOLVIE_PUNCH, ARRAYSIZE(MSHVSF_P_WOLVIE_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_WOLVIE_KICK, ARRAYSIZE(MSHVSF_P_WOLVIE_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_WOLVIE_BONUS1, ARRAYSIZE(MSHVSF_P_WOLVIE_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_WOLVIE_BONUS2, ARRAYSIZE(MSHVSF_P_WOLVIE_BONUS2) },
};

#undef CURRENT_LOCATION
#define CURRENT_LOCATION 0x91da

const sGame_PaletteDataset MSHVSF_P_ZANGIEF_PUNCH[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x00 * 0x20), CURRENT_LOCATION + (0x01 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Banishing Fist",              CURRENT_LOCATION + (0x01 * 0x20), CURRENT_LOCATION + (0x02 * 0x20), indexCPS2Sprites_Zangief, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x02 * 0x20), CURRENT_LOCATION + (0x03 * 0x20), indexCPS2Sprites_Zangief, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_ZANGIEF_KICK[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x03 * 0x20), CURRENT_LOCATION + (0x04 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Banishing Fist",              CURRENT_LOCATION + (0x04 * 0x20), CURRENT_LOCATION + (0x05 * 0x20), indexCPS2Sprites_Zangief, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x05 * 0x20), CURRENT_LOCATION + (0x06 * 0x20), indexCPS2Sprites_Zangief, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_ZANGIEF_BONUS1[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x06 * 0x20), CURRENT_LOCATION + (0x07 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Banishing Fist",              CURRENT_LOCATION + (0x07 * 0x20), CURRENT_LOCATION + (0x08 * 0x20), indexCPS2Sprites_Zangief, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x08 * 0x20), CURRENT_LOCATION + (0x09 * 0x20), indexCPS2Sprites_Zangief, 0x02 },
};

const sGame_PaletteDataset MSHVSF_P_ZANGIEF_BONUS2[] =
{
    { L"Palette",               CURRENT_LOCATION + (0x09 * 0x20), CURRENT_LOCATION + (0x0a * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Banishing Fist",              CURRENT_LOCATION + (0x0a * 0x20), CURRENT_LOCATION + (0x0b * 0x20), indexCPS2Sprites_Zangief, 0x01 },
    { L"Extra 2",     CURRENT_LOCATION + (0x0b * 0x20), CURRENT_LOCATION + (0x0c * 0x20), indexCPS2Sprites_Zangief, 0x02 },
};

const sDescTreeNode MSHVSF_P_ZANGIEF_COLLECTION[] =
{
    { L"Punch",             DESC_NODETYPE_TREE, (void*)MSHVSF_P_ZANGIEF_PUNCH, ARRAYSIZE(MSHVSF_P_ZANGIEF_PUNCH) },
    { L"Kick",              DESC_NODETYPE_TREE, (void*)MSHVSF_P_ZANGIEF_KICK, ARRAYSIZE(MSHVSF_P_ZANGIEF_KICK) },
    { L"Bonus 1",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_ZANGIEF_BONUS1, ARRAYSIZE(MSHVSF_P_ZANGIEF_BONUS1) },
    { L"Bonus 2",           DESC_NODETYPE_TREE, (void*)MSHVSF_P_ZANGIEF_BONUS2, ARRAYSIZE(MSHVSF_P_ZANGIEF_BONUS2) },
};

const std::vector<sGameUnitsByFile> MSHVSF_P_UNITS =
{
    { L"PL0F_10.A0",    166744, L"Akuma",               MSHVSF_P_AKUMA_COLLECTION, ARRAYSIZE(MSHVSF_P_AKUMA_COLLECTION) }, // 0x9e22
    { L"PL07_10.A0",    191988, L"Armored Spider-Man",  MSHVSF_P_ARMSPIDER_COLLECTION, ARRAYSIZE(MSHVSF_P_ARMSPIDER_COLLECTION) }, // 0xe1f2
    { L"PL08_10.A0",    199476, L"Blackheart",          MSHVSF_P_BLACKHEART_COLLECTION, ARRAYSIZE(MSHVSF_P_BLACKHEART_COLLECTION) }, // 0xdc12
    { L"PL08_10.A0",    199476, L"Mephisto",            MSHVSF_P_MEPHISTO_COLLECTION, ARRAYSIZE(MSHVSF_P_MEPHISTO_COLLECTION) }, // 0xe6d2
    { L"PL02_10.A0",    198360, L"Captain America",     MSHVSF_P_CAPAM_COLLECTION, ARRAYSIZE(MSHVSF_P_CAPAM_COLLECTION) }, // 0xef16 super1shield,super2shield, then normal SEs, then 2 eagles, then US Agent
    { L"PL0B_10.A0",    157492, L"Chun-Li",             MSHVSF_P_CHUN_COLLECTION, ARRAYSIZE(MSHVSF_P_CHUN_COLLECTION) }, // 0x731e
    { L"PL13_10.A0",    171280, L"Cyber Akuma",         MSHVSF_P_CYBERAKUMA_COLLECTION, ARRAYSIZE(MSHVSF_P_CYBERAKUMA_COLLECTION) }, // 0xa076
    { L"PL01_10.A0",    176052, L"Cyclops",             MSHVSF_P_CYCLOPS_COLLECTION, ARRAYSIZE(MSHVSF_P_CYCLOPS_COLLECTION) }, // 0xa692
    { L"PL12_10.A0",    154476, L"Dan",                 MSHVSF_P_DAN_COLLECTION, ARRAYSIZE(MSHVSF_P_DAN_COLLECTION) }, // 0x70ca
    { L"PL15_10.A0",    181352, L"Dark Sakura",         MSHVSF_P_DARKSAKURA_COLLECTION, ARRAYSIZE(MSHVSF_P_DARKSAKURA_COLLECTION) }, // 0xcdee
    { L"PL0C_10.A0",    161628, L"Dhalsim",             MSHVSF_P_DHALSIM_COLLECTION, ARRAYSIZE(MSHVSF_P_DHALSIM_COLLECTION) }, // 0x7f9e
    { L"PL03_10.A0",    161948, L"Hulk",                MSHVSF_P_HULK_COLLECTION, ARRAYSIZE(MSHVSF_P_HULK_COLLECTION) }, // 0x7ee6
    { L"PL0A_10.A0",    163524, L"Ken",                 MSHVSF_P_KEN_COLLECTION, ARRAYSIZE(MSHVSF_P_KEN_COLLECTION) }, // 0x906e
    { L"PL0E_10.A0",    164808, L"M. Bison",            MSHVSF_P_BISON_COLLECTION, ARRAYSIZE(MSHVSF_P_BISON_COLLECTION) }, // 0x9ed6
    { L"PL14_10.A0",    178912, L"Mech-Zangief",        MSHVSF_P_MECHGIEF_COLLECTION, ARRAYSIZE(MSHVSF_P_MECHGIEF_COLLECTION) }, // 0xa292
    { L"PL11_10.A0",    163880, L"Norimaro",            MSHVSF_P_NORIMARO_COLLECTION, ARRAYSIZE(MSHVSF_P_NORIMARO_COLLECTION) }, // 0x934a
    { L"PL06_10.A0",    192696, L"Omega Red",           MSHVSF_P_ORED_COLLECTION, ARRAYSIZE(MSHVSF_P_ORED_COLLECTION) }, // 0xcd32
    { L"PL09_10.A0",    158928, L"Ryu",                 MSHVSF_P_RYU_COLLECTION, ARRAYSIZE(MSHVSF_P_RYU_COLLECTION) }, // 0x8326
    { L"PL10_10.A0",    175264, L"Sakura",              MSHVSF_P_SAKURA_COLLECTION, ARRAYSIZE(MSHVSF_P_SAKURA_COLLECTION) }, // 0xb85e
    { L"PL16_10.A0",    158500, L"Shadow",              MSHVSF_P_SHADOW_COLLECTION, ARRAYSIZE(MSHVSF_P_SHADOW_COLLECTION) }, // 0x7f52
    { L"PL05_10.A0",    176416, L"Shuma-Gorath",        MSHVSF_P_SHUMA_COLLECTION, ARRAYSIZE(MSHVSF_P_SHUMA_COLLECTION) }, // 0x932a
    { L"PL07_10.A0",    191988, L"Spider-Man",          MSHVSF_P_SPIDEY_COLLECTION, ARRAYSIZE(MSHVSF_P_SPIDEY_COLLECTION) }, // 0xd712
    { L"PL02_10.A0",    198360, L"U.S. Agent",          MSHVSF_P_USAGENT_COLLECTION, ARRAYSIZE(MSHVSF_P_USAGENT_COLLECTION) },
    { L"PL04_10.A0",    173216, L"Wolverine",           MSHVSF_P_WOLVIE_COLLECTION, ARRAYSIZE(MSHVSF_P_WOLVIE_COLLECTION) }, // 0x9826
    { L"PL0D_10.A0",    168752, L"Zangief",             MSHVSF_P_ZANGIEF_COLLECTION, ARRAYSIZE(MSHVSF_P_ZANGIEF_COLLECTION) }, // 0x91da

    //    { L"PL00_10.A0",    164636, L"unknown", ...
};
