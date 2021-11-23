#pragma once

// We reuse a lot of the core palettes out of here
#include "KOF02UM_S_DEF.h"

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_JAPAN[] =
{
    { L"Japan High School Asset 1", 0x80, 0x480 },
    { L"Japan High School Asset 2", 0x40480, 0x40880 },
    { L"Japan High School Asset 3", 0x80880, 0x80c80 },
    { L"Japan High School Asset 4", 0xc0c80, 0xc1080 },
    { L"Japan High School Asset 5", 0x101080, 0x101480 },
    { L"Japan High School Asset 6", 0x141480, 0x141880 },
    { L"Japan High School Asset 7", 0x181880, 0x181c80 },
    { L"Japan High School Asset 8", 0x1c1c80, 0x1c2080 },
    { L"Japan High School Asset 9", 0x202080, 0x202480 },
    { L"Japan High School Asset 10", 0x242480, 0x242880 },
    { L"Japan High School Asset 11", 0x282880, 0x282c80 },
    { L"Japan High School Asset 12", 0x2c2c80, 0x2c3080 },
    { L"Japan High School Asset 13", 0x303080, 0x303480 },
    { L"Japan High School Asset 14", 0x343480, 0x343880 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_JAPAN[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_JAPAN, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_JAPAN) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_KOREA[] =
{
    { L"Korea-1 Asset 1", 0xc0, 0x4c0 },
    { L"Korea-1 Asset 2", 0x404c0, 0x408c0 },
    { L"Korea-1 Asset 3", 0x808c0, 0x80cc0 },
    { L"Korea-1 Asset 4", 0xc0cc0, 0xc10c0 },
    { L"Korea-1 Asset 5", 0x1010c0, 0x1014c0 },
    { L"Korea-1 Asset 6", 0x1414c0, 0x1418c0 },
    { L"Korea-1 Asset 7", 0x1818c0, 0x181cc0 },
    { L"Korea-1 Asset 8", 0x1c1cc0, 0x1c20c0 },
    { L"Korea-1 Asset 9", 0x2020c0, 0x2024c0 },
    { L"Korea-1 Asset 10", 0x2424c0, 0x2428c0 },
    { L"Korea-1 Asset 11", 0x2828c0, 0x282cc0 },
    { L"Korea-1 Asset 12", 0x2c2cc0, 0x2c30c0 },
    { L"Korea-1 Asset 13", 0x3030c0, 0x3034c0 },
    { L"Korea-1 Asset 14", 0x3434c0, 0x3438c0 },
    { L"Korea-1 Asset 15", 0x3838c0, 0x383cc0 },
    { L"Korea-1 Asset 16", 0x3c3cc0, 0x3c40c0 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_KOREA[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_KOREA, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_KOREA) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_CHINA[] =
{
    { L"China Asset 1", 0xc0, 0x4c0 },
    { L"China Asset 2", 0x404c0, 0x408c0 },
    { L"China Asset 3", 0x808c0, 0x80cc0 },
    { L"China Asset 4", 0xc0cc0, 0xc10c0 },
    { L"China Asset 5", 0x1010c0, 0x1014c0 },
    { L"China Asset 6", 0x1414c0, 0x1418c0 },
    { L"China Asset 7", 0x1818c0, 0x181cc0 },
    { L"China Asset 8", 0x1c1cc0, 0x1c20c0 },
    { L"China Asset 9", 0x2020c0, 0x2024c0 },
    { L"China Asset 10", 0x2424c0, 0x2428c0 },
    { L"China Asset 11", 0x2828c0, 0x282cc0 },
    { L"China Asset 12", 0x2c2cc0, 0x2c30c0 },
    { L"China Asset 13", 0x3030c0, 0x3034c0 },
    { L"China Asset 14", 0x3434c0, 0x3438c0 },
    { L"China Asset 15", 0x3838c0, 0x383cc0 },
    { L"China Asset 16", 0x3c3cc0, 0x3c40c0 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_CHINA[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_CHINA, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_CHINA) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_USA[] =
{
    { L"USA Asset 1", 0x80, 0x480 },
    { L"USA Asset 2", 0x40480, 0x40880 },
    { L"USA Asset 3", 0x80880, 0x80c80 },
    { L"USA Asset 4", 0xc0c80, 0xc1080 },
    { L"USA Asset 5", 0x101080, 0x101480 },
    { L"USA Asset 6", 0x141480, 0x141880 },
    { L"USA Asset 7", 0x181880, 0x181c80 },
    { L"USA Asset 8", 0x1c1c80, 0x1c2080 },
    { L"USA Asset 9", 0x202080, 0x202480 },
    { L"USA Asset 10", 0x242480, 0x242880 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_USA[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_USA, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_USA) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_CAMBODIA[] =
{
    { L"Cambodia Asset 1", 0x80, 0x480 },
    { L"Cambodia Asset 2", 0x40480, 0x40880 },
    { L"Cambodia Asset 3", 0x80880, 0x80c80 },
    { L"Cambodia Asset 4", 0xc0c80, 0xc1080 },
    { L"Cambodia Asset 5", 0x101080, 0x101480 },
    { L"Cambodia Asset 6", 0x141480, 0x141880 },
    { L"Cambodia Asset 7", 0x181880, 0x181c80 },
    { L"Cambodia Asset 8", 0x1c1c80, 0x1c2080 },
    { L"Cambodia Asset 9", 0x202080, 0x202480 },
    { L"Cambodia Asset 10", 0x242480, 0x242880 },
    { L"Cambodia Asset 11", 0x282880, 0x282c80 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_CAMBODIA[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_CAMBODIA, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_CAMBODIA) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_TAIWAN[] =
{
    { L"Taiwan Asset 1", 0x80, 0x480 },
    { L"Taiwan Asset 2", 0x40480, 0x40880 },
    { L"Taiwan Asset 3", 0x80880, 0x80c80 },
    { L"Taiwan Asset 4", 0xc0c80, 0xc1080 },
    { L"Taiwan Asset 5", 0x101080, 0x101480 },
    { L"Taiwan Asset 6", 0x141480, 0x141880 },
    { L"Taiwan Asset 7", 0x181880, 0x181c80 },
    { L"Taiwan Asset 8", 0x1c1c80, 0x1c2080 },
    { L"Taiwan Asset 9", 0x202080, 0x202480 },
    { L"Taiwan Asset 10", 0x242480, 0x242880 },
    { L"Taiwan Asset 11", 0x282880, 0x282c80 },
    { L"Taiwan Asset 12", 0x2c2c80, 0x2c3080 },
    { L"Taiwan Asset 13", 0x303080, 0x303480 },
    { L"Taiwan Asset 14", 0x343480, 0x343880 },
    { L"Taiwan Asset 15", 0x383880, 0x383c80 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_TAIWAN[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_TAIWAN, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_TAIWAN) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_ITALY[] =
{
    { L"Italy Asset 1", 0xc0, 0x4c0 },
    { L"Italy Asset 2", 0x404c0, 0x408c0 },
    { L"Italy Asset 3", 0x808c0, 0x80cc0 },
    { L"Italy Asset 4", 0xc0cc0, 0xc10c0 },
    { L"Italy Asset 5", 0x1010c0, 0x1014c0 },
    { L"Italy Asset 6", 0x1414c0, 0x1418c0 },
    { L"Italy Asset 7", 0x1818c0, 0x181cc0 },
    { L"Italy Asset 8", 0x1c1cc0, 0x1c20c0 },
    { L"Italy Asset 9", 0x2020c0, 0x2024c0 },
    { L"Italy Asset 10", 0x2424c0, 0x2428c0 },
    { L"Italy Asset 11", 0x2828c0, 0x282cc0 },
    { L"Italy Asset 12", 0x2c2cc0, 0x2c30c0 },
    { L"Italy Asset 13", 0x3030c0, 0x3034c0 },
    { L"Italy Asset 14", 0x3434c0, 0x3438c0 },
    { L"Italy Asset 15", 0x3838c0, 0x383cc0 },
    { L"Italy Asset 16", 0x3c3cc0, 0x3c40c0 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_ITALY[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_ITALY, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_ITALY) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_GREECE[] =
{
    { L"Greece Asset 1", 0xc0, 0x4c0 },
    { L"Greece Asset 2", 0x404c0, 0x408c0 },
    { L"Greece Asset 3", 0x808c0, 0x80cc0 },
    { L"Greece Asset 4", 0xc0cc0, 0xc10c0 },
    { L"Greece Asset 5", 0x1010c0, 0x1014c0 },
    { L"Greece Asset 6", 0x1414c0, 0x1418c0 },
    { L"Greece Asset 7", 0x1818c0, 0x181cc0 },
    { L"Greece Asset 8", 0x1c1cc0, 0x1c20c0 },
    { L"Greece Asset 9", 0x2020c0, 0x2024c0 },
    { L"Greece Asset 10", 0x2424c0, 0x2428c0 },
    { L"Greece Asset 11", 0x2828c0, 0x282cc0 },
    { L"Greece Asset 12", 0x2c2cc0, 0x2c30c0 },
    { L"Greece Asset 13", 0x3030c0, 0x3034c0 },
    { L"Greece Asset 14", 0x3434c0, 0x3438c0 },
    { L"Greece Asset 15", 0x3838c0, 0x383cc0 },
    { L"Greece Asset 16", 0x3c3cc0, 0x3c40c0 },
    { L"Greece Asset 17", 0x4040c0, 0x4044c0 },
    { L"Greece Asset 18", 0x4444c0, 0x4448c0 },
    { L"Greece Asset 19", 0x4848c0, 0x484cc0 },
    { L"Greece Asset 20", 0x4c4cc0, 0x4c50c0 },
    { L"Greece Asset 21", 0x5050c0, 0x5054c0 },
    { L"Greece Asset 22", 0x5454c0, 0x5458c0 },
    { L"Greece Asset 23", 0x5858c0, 0x585cc0 },
    { L"Greece Asset 24", 0x5c5cc0, 0x5c60c0 },
    { L"Greece Asset 25", 0x6060c0, 0x6064c0 },
    { L"Greece Asset 26", 0x6464c0, 0x6468c0 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_GREECE[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_GREECE, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_GREECE) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_NEOGEO[] =
{
    { L"NeoGeo World Asset 1", 0xc0, 0x4c0 },
    { L"NeoGeo World Asset 2", 0x404c0, 0x408c0 },
    { L"NeoGeo World Asset 3", 0x808c0, 0x80cc0 },
    { L"NeoGeo World Asset 4", 0xc0cc0, 0xc10c0 },
    { L"NeoGeo World Asset 5", 0x1010c0, 0x1014c0 },
    { L"NeoGeo World Asset 6", 0x1414c0, 0x1418c0 },
    { L"NeoGeo World Asset 7", 0x1818c0, 0x181cc0 },
    { L"NeoGeo World Asset 8", 0x1c1cc0, 0x1c20c0 },
    { L"NeoGeo World Asset 9", 0x2020c0, 0x2024c0 },
    { L"NeoGeo World Asset 10", 0x2424c0, 0x2428c0 },
    { L"NeoGeo World Asset 11", 0x2828c0, 0x282cc0 },
    { L"NeoGeo World Asset 12", 0x2c2cc0, 0x2c30c0 },
    { L"NeoGeo World Asset 13", 0x3030c0, 0x3034c0 },
    { L"NeoGeo World Asset 14", 0x3434c0, 0x3438c0 },
    { L"NeoGeo World Asset 15", 0x3838c0, 0x383cc0 },
    { L"NeoGeo World Asset 16", 0x3c3cc0, 0x3c40c0 },
    { L"NeoGeo World Asset 17", 0x4040c0, 0x4044c0 },
    { L"NeoGeo World Asset 18", 0x4444c0, 0x4448c0 },
    { L"NeoGeo World Asset 19", 0x4848c0, 0x484cc0 },
    { L"NeoGeo World Asset 20", 0x4c4cc0, 0x4c50c0},
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_NEOGEO[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_NEOGEO, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_NEOGEO) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_CLONE[] =
{
    { L"Clone Factory Asset 1", 0xc0, 0x4c0 },
    { L"Clone Factory Asset 2", 0x404c0, 0x408c0 },
    { L"Clone Factory Asset 3", 0x808c0, 0x80cc0 },
    { L"Clone Factory Asset 4", 0xc0cc0, 0xc10c0 },
    { L"Clone Factory Asset 5", 0x1010c0, 0x1014c0 },
    { L"Clone Factory Asset 6", 0x1414c0, 0x1418c0 },
    { L"Clone Factory Asset 7", 0x1818c0, 0x181cc0 },
    { L"Clone Factory Asset 8", 0x1c1cc0, 0x1c20c0 },
    { L"Clone Factory Asset 9", 0x2020c0, 0x2024c0 },
    { L"Clone Factory Asset 10", 0x2424c0, 0x2428c0 },
    { L"Clone Factory Asset 11", 0x2828c0, 0x282cc0 },
    { L"Clone Factory Asset 12", 0x2c2cc0, 0x2c30c0 },
    { L"Clone Factory Asset 13", 0x3030c0, 0x3034c0 },
    { L"Clone Factory Asset 14", 0x3434c0, 0x3438c0 },
    { L"Clone Factory Asset 15", 0x3838c0, 0x383cc0 },
    { L"Clone Factory Asset 16", 0x3c3cc0, 0x3c40c0 },
    { L"Clone Factory Asset 17", 0x4040c0, 0x4044c0 },
    { L"Clone Factory Asset 18", 0x4444c0, 0x4448c0 },
    { L"Clone Factory Asset 19", 0x4848c0, 0x484cc0 },
    { L"Clone Factory Asset 20", 0x4c4cc0, 0x4c50c0 },
    { L"Clone Factory Asset 21", 0x5050c0, 0x5054c0 },
    { L"Clone Factory Asset 22", 0x5454c0, 0x5458c0 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_CLONE[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_CLONE, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_CLONE) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_RUGAL[] =
{
    { L"Rugal Stage Asset 1", 0xc0, 0x4c0 },
    { L"Rugal Stage Asset 2", 0x404c0, 0x408c0 },
    { L"Rugal Stage Asset 3", 0x808c0, 0x80cc0 },
    { L"Rugal Stage Asset 4", 0xc0cc0, 0xc10c0 },
    { L"Rugal Stage Asset 5", 0x1010c0, 0x1014c0 },
    { L"Rugal Stage Asset 6", 0x1414c0, 0x1418c0 },
    { L"Rugal Stage Asset 7", 0x1818c0, 0x181cc0 },
    { L"Rugal Stage Asset 8", 0x1c1cc0, 0x1c20c0 },
    { L"Rugal Stage Asset 9", 0x2020c0, 0x2024c0 },
    { L"Rugal Stage Asset 10", 0x2424c0, 0x2428c0 },
    { L"Rugal Stage Asset 11", 0x2828c0, 0x282cc0 },
    { L"Rugal Stage Asset 12", 0x2c2cc0, 0x2c30c0 },
    { L"Rugal Stage Asset 13", 0x3030c0, 0x3034c0 },
    { L"Rugal Stage Asset 14", 0x3434c0, 0x3438c0 },
    { L"Rugal Stage Asset 15", 0x3838c0, 0x383cc0 },
    { L"Rugal Stage Asset 16", 0x3c3cc0, 0x3c40c0 },
    { L"Rugal Stage Asset 17", 0x4040c0, 0x4044c0 },
    { L"Rugal Stage Asset 18", 0x4444c0, 0x4448c0 },
    { L"Rugal Stage Asset 19", 0x4848c0, 0x484cc0 },
    { L"Rugal Stage Asset 20", 0x4c4cc0, 0x4c50c0 },
    { L"Rugal Stage Asset 21", 0x5050c0, 0x5054c0 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_RUGAL[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_RUGAL, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_RUGAL) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_KRIZALID[] =
{
    { L"Krizalid Stage Asset 1", 0x80, 0x480 },
    { L"Krizalid Stage Asset 2", 0x40480, 0x40880 },
    { L"Krizalid Stage Asset 3", 0x80880, 0x80c80 },
    { L"Krizalid Stage Asset 4", 0xc0c80, 0xc1080 },
    { L"Krizalid Stage Asset 5", 0x101080, 0x101480 },
    { L"Krizalid Stage Asset 6", 0x141480, 0x141880 },
    { L"Krizalid Stage Asset 7", 0x181880, 0x181c80 },
    { L"Krizalid Stage Asset 8", 0x1c1c80, 0x1c2080 },
    { L"Krizalid Stage Asset 9", 0x202080, 0x202480 },
    { L"Krizalid Stage Asset 10", 0x242480, 0x242880 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_KRIZALID[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_KRIZALID, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_KRIZALID) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_CLONEZERO[] =
{
    { L"Clone Zero Stage Asset 1", 0x80, 0x480 },
    { L"Clone Zero Stage Asset 2", 0x40480, 0x40880 },
    { L"Clone Zero Stage Asset 3", 0x80880, 0x80c80 },
    { L"Clone Zero Stage Asset 4", 0xc0c80, 0xc1080 },
    { L"Clone Zero Stage Asset 5", 0x101080, 0x101480 },
    { L"Clone Zero Stage Asset 6", 0x141480, 0x141880 },
    { L"Clone Zero Stage Asset 7", 0x181880, 0x181c80 },
    { L"Clone Zero Stage Asset 8", 0x1c1c80, 0x1c2080 },
    { L"Clone Zero Stage Asset 9", 0x202080, 0x202480 },
    { L"Clone Zero Stage Asset 10", 0x242480, 0x242880 },
    { L"Clone Zero Stage Asset 11", 0x282880, 0x282c80 },
    { L"Clone Zero Stage Asset 12", 0x2c2c80, 0x2c3080 },
    { L"Clone Zero Stage Asset 13", 0x303080, 0x303480 },
    { L"Clone Zero Stage Asset 14", 0x343480, 0x343880 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_CLONEZERO[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_CLONEZERO, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_CLONEZERO) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_ORIGINALZERO[] =
{
    { L"Original Zero Stage Asset 1", 0x100, 0x500 },
    { L"Original Zero Stage Asset 2", 0x40500, 0x40900 },
    { L"Original Zero Stage Asset 3", 0x80900, 0x80d00 },
    { L"Original Zero Stage Asset 4", 0xc0d00, 0xc1100 },
    { L"Original Zero Stage Asset 5", 0x101100, 0x101500 },
    { L"Original Zero Stage Asset 6", 0x141500, 0x141900 },
    { L"Original Zero Stage Asset 7", 0x181900, 0x181d00 },
    { L"Original Zero Stage Asset 8", 0x1c1d00, 0x1c2100 },
    { L"Original Zero Stage Asset 9", 0x202100, 0x202500 },
    { L"Original Zero Stage Asset 10", 0x242500, 0x242900 },
    { L"Original Zero Stage Asset 11", 0x282900, 0x282d00 },
    { L"Original Zero Stage Asset 12", 0x2c2d00, 0x2c3100 },
    { L"Original Zero Stage Asset 13", 0x303100, 0x303500 },
    { L"Original Zero Stage Asset 14", 0x343500, 0x343900 },
    { L"Original Zero Stage Asset 15", 0x383900, 0x383d00 },
    { L"Original Zero Stage Asset 16", 0x3c3d00, 0x3c4100 },
    { L"Original Zero Stage Asset 17", 0x404100, 0x404500 },
    { L"Original Zero Stage Asset 18", 0x444500, 0x444900 },
    { L"Original Zero Stage Asset 19", 0x484900, 0x484d00 },
    { L"Original Zero Stage Asset 20", 0x4c4d00, 0x4c5100 },
    { L"Original Zero Stage Asset 21", 0x505100, 0x505500 },
    { L"Original Zero Stage Asset 22", 0x545500, 0x545900 },
    { L"Original Zero Stage Asset 23", 0x585900, 0x585d00 },
    { L"Original Zero Stage Asset 24", 0x5c5d00, 0x5c6100 },
    { L"Original Zero Stage Asset 25", 0x606100, 0x606500 },
    { L"Original Zero Stage Asset 26", 0x646500, 0x646900 },
    { L"Original Zero Stage Asset 27", 0x686900, 0x686d00 },
    { L"Original Zero Stage Asset 28", 0x6c6d00, 0x6c7100 },
    { L"Original Zero Stage Asset 29", 0x707100, 0x707500 },
    { L"Original Zero Stage Asset 30", 0x747500, 0x747900 },
    { L"Original Zero Stage Asset 32", 0x787900, 0x787d00 },
    { L"Original Zero Stage Asset 33", 0x7c7d00, 0x7c8100 },
    { L"Original Zero Stage Asset 34", 0x808100, 0x808500 },
    { L"Original Zero Stage Asset 35", 0x848500, 0x848900 },
    { L"Original Zero Stage Asset 36", 0x888900, 0x888d00 },
    { L"Original Zero Stage Asset 37", 0x8c8d00, 0x8c9100 },
    { L"Original Zero Stage Asset 38", 0x909100, 0x909500 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_ORIGINALZERO[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_ORIGINALZERO, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_ORIGINALZERO) },
};

const sGame_PaletteDataset KOF02UM_S_STAGE_PALETTES_IGNIZ[] =
{
    { L"Igniz Stage Asset 1", 0xc0, 0x4c0 },
    { L"Igniz Stage Asset 2", 0x404c0, 0x408c0 },
    { L"Igniz Stage Asset 3", 0x808c0, 0x80cc0 },
    { L"Igniz Stage Asset 4", 0xc0cc0, 0xc10c0 },
    { L"Igniz Stage Asset 5", 0x1010c0, 0x1014c0 },
    { L"Igniz Stage Asset 6", 0x1414c0, 0x1418c0 },
    { L"Igniz Stage Asset 7", 0x1818c0, 0x181cc0 },
    { L"Igniz Stage Asset 8", 0x1c1cc0, 0x1c20c0 },
    { L"Igniz Stage Asset 9", 0x2020c0, 0x2024c0 },
    { L"Igniz Stage Asset 10", 0x2424c0, 0x2428c0 },
    { L"NeoGeo World Asset 11", 0x2828c0, 0x282cc0 },
    { L"Igniz Stage Asset 12", 0x2c2cc0, 0x2c30c0 },
    { L"Igniz Stage Asset 13", 0x3030c0, 0x3034c0 },
    { L"Igniz Stage Asset 14", 0x3434c0, 0x3438c0 },
    { L"Igniz Stage Asset 15", 0x3838c0, 0x383cc0 },
    { L"Igniz Stage Asset 16", 0x3c3cc0, 0x3c40c0 },
    { L"Igniz Stage Asset 17", 0x4040c0, 0x4044c0 },
    { L"Igniz Stage Asset 18", 0x4444c0, 0x4448c0 },
    { L"Igniz Stage Asset 19", 0x4848c0, 0x484cc0 },
    { L"Igniz Stage Asset 20", 0x4c4cc0, 0x4c50c0 },
    { L"Igniz Stage Asset 21", 0x5050c0, 0x5054c0 },
    { L"Igniz Stage Asset 22", 0x5454c0, 0x5458c0 },
    { L"Igniz Stage Asset 23", 0x5858c0, 0x585cc0 },
};

const sDescTreeNode KOF02UM_S_STAGES_COLLECTION_IGNIZ[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_STAGE_PALETTES_IGNIZ, ARRAYSIZE(KOF02UM_S_STAGE_PALETTES_IGNIZ) },
};

const std::vector<sGameUnitsByFile> KOF02UM_S_DIR_BGR555_UNITS =
{
    { L"game\\base\\max2bg.bin", 38912, L"MAX2 Backgrounds", KOF02UM_S_MAX2_BG_COLLECTION, ARRAYSIZE(KOF02UM_S_MAX2_BG_COLLECTION) },
    { L"game\\base\\bar.bin", 8704, L"HUD", KOF02UM_S_BAR_HUD_COLLECTION, ARRAYSIZE(KOF02UM_S_BAR_HUD_COLLECTION) },
};

const std::vector<sGameUnitsByFile> KOF02UM_S_DIR_8888_UNITS =
{
    { L"game\\menu\\clear.bin", 137422, L"Clear", KOF02UM_S_CLEAR_COLLECTION, ARRAYSIZE(KOF02UM_S_CLEAR_COLLECTION)},
    { L"game\\demo\\psel.bin-n", 5697572, L"Character Select", KOF02UM_S_PSEL_COLLECTION, ARRAYSIZE(KOF02UM_S_PSEL_COLLECTION) },
    { L"game\\demo\\rank.bin", 769318, L"Rank screens", KOF02UM_S_RANK_COLLECTION, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION) },
    { L"game\\demo\\conte.bin", 1249860, L"Continue palettes", KOF02UM_S_CONTE_COLLECTION, ARRAYSIZE(KOF02UM_S_CONTE_COLLECTION) },

    { L"game\\b\\bg\\bga0.bin", 3701504, L"Japan High School Stage", KOF02UM_S_STAGES_COLLECTION_JAPAN, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_JAPAN) },
    { L"game\\b\\bg\\bgb0.bin", 4224460, L"Korea-1 Stage", KOF02UM_S_STAGES_COLLECTION_KOREA, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_KOREA) },
        { L"game\\b\\bg\\bgb1.bin", 4224460, L"Korea-2 Stage", KOF02UM_S_STAGES_COLLECTION_KOREA, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_KOREA) },
        { L"game\\b\\bg\\bgb2.bin", 4224478, L"Korea-3 Stage", KOF02UM_S_STAGES_COLLECTION_KOREA, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_KOREA) },
    { L"game\\b\\bg\\bgc0.bin", 4229846, L"China Stage", KOF02UM_S_STAGES_COLLECTION_CHINA, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_CHINA) },
    { L"game\\b\\bg\\bgd0.bin", 2645234, L"USA Stage", KOF02UM_S_STAGES_COLLECTION_USA, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_USA) },
    { L"game\\b\\bg\\bge0.bin", 2902512, L"Cambodia-1 Stage", KOF02UM_S_STAGES_COLLECTION_CAMBODIA, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_CAMBODIA) },
        { L"game\\b\\bg\\bge1.bin", 2902512, L"Cambodia-2 Stage", KOF02UM_S_STAGES_COLLECTION_CAMBODIA, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_CAMBODIA) },
    { L"game\\b\\bg\\bgf0.bin", 3979412, L"Taiwan-1 Stage", KOF02UM_S_STAGES_COLLECTION_TAIWAN, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_TAIWAN) },
        { L"game\\b\\bg\\bgf1.bin", 3979520, L"Taiwan-2 Stage", KOF02UM_S_STAGES_COLLECTION_TAIWAN, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_TAIWAN) },
    { L"game\\b\\bg\\bgg0.bin", 5015566, L"Italy-1 Stage", KOF02UM_S_STAGES_COLLECTION_ITALY, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_ITALY) },
        { L"game\\b\\bg\\bgg1.bin", 5284788, L"Italy-2 Stage", KOF02UM_S_STAGES_COLLECTION_ITALY, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_ITALY) },
        { L"game\\b\\bg\\bgg2.bin", 5285858, L"Italy-3 Stage", KOF02UM_S_STAGES_COLLECTION_ITALY, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_ITALY) },
    { L"game\\b\\bg\\bgh0.bin", 6857152, L"Greece Stage", KOF02UM_S_STAGES_COLLECTION_GREECE, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_GREECE) },
    { L"game\\b\\bg\\bgi0.bin", 5276514, L"NeoGeo World-1 Stage", KOF02UM_S_STAGES_COLLECTION_NEOGEO, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_NEOGEO) },
        { L"game\\b\\bg\\bgi1.bin", 5016102, L"NeoGeo World-2 Stage", KOF02UM_S_STAGES_COLLECTION_NEOGEO, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_NEOGEO) },
    { L"game\\b\\bg\\bgj0.bin", 5804952, L"Clone Factory-1 Stage", KOF02UM_S_STAGES_COLLECTION_CLONE, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_CLONE) },
        { L"game\\b\\bg\\bgj1.bin", 5804748, L"Clone Factory-2 Stage", KOF02UM_S_STAGES_COLLECTION_CLONE, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_CLONE) },
    { L"game\\b\\bg\\bgk0.bin", 5530916, L"Rugal Stage", KOF02UM_S_STAGES_COLLECTION_RUGAL, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_RUGAL) },
    // What is the L stage set?
    //{ L"game\\b\\bg\\bgl0.bin", 2, L"Krizalid Stage", KOF02UM_S_STAGES_COLLECTION_KOREA, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_KOREA) },
    { L"game\\b\\bg\\bgm0.bin", 2655654, L"Krizalid-1 Stage", KOF02UM_S_STAGES_COLLECTION_KRIZALID, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_KRIZALID) },
        { L"game\\b\\bg\\bgm1.bin", 2647066, L"Krizalid-2 Stage", KOF02UM_S_STAGES_COLLECTION_KRIZALID, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_KRIZALID) },
    { L"game\\b\\bg\\bgn0.bin", 3697732, L"Clone Zero Stage", KOF02UM_S_STAGES_COLLECTION_CLONEZERO, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_CLONEZERO) },
    { L"game\\b\\bg\\bgo0.bin", 9768482, L"Original Zero Stage", KOF02UM_S_STAGES_COLLECTION_ORIGINALZERO, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_ORIGINALZERO) },
    { L"game\\b\\bg\\bgp0.bin", 6064262, L"Igniz Stage", KOF02UM_S_STAGES_COLLECTION_IGNIZ, ARRAYSIZE(KOF02UM_S_STAGES_COLLECTION_IGNIZ) },
};

const std::vector<sGameUnitsByFile> KOF02UM_S_DIR_RGB555_UNITS =
{
    { L"game\\base\\pal_a.bin", 394976, L"Kyo", KOF02UM_S_KYO_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO_COLLECTION)},
    { L"game\\base\\pal_a.bin", 394976, L"Benimaru", KOF02UM_S_BENIMARU_COLLECTION, ARRAYSIZE(KOF02UM_S_BENIMARU_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Daimon", KOF02UM_S_DAIMON_COLLECTION, ARRAYSIZE(KOF02UM_S_DAIMON_COLLECTION) },

    { L"game\\base\\pal_a.bin", 394976, L"Terry", KOF02UM_S_TERRY_COLLECTION, ARRAYSIZE(KOF02UM_S_TERRY_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Andy", KOF02UM_S_ANDY_COLLECTION, ARRAYSIZE(KOF02UM_S_ANDY_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Joe", KOF02UM_S_JOE_COLLECTION, ARRAYSIZE(KOF02UM_S_JOE_COLLECTION) },

    { L"game\\base\\pal_a.bin", 394976, L"Athena", KOF02UM_S_ATHENA_COLLECTION, ARRAYSIZE(KOF02UM_S_ATHENA_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Kensou", KOF02UM_S_KENSOU_COLLECTION, ARRAYSIZE(KOF02UM_S_KENSOU_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"EX Kensou", KOF02UM_S_EXKENSOU_COLLECTION, ARRAYSIZE(KOF02UM_S_EXKENSOU_COLLECTION) },

    { L"game\\base\\pal_a.bin", 394976, L"Bao", KOF02UM_S_BAO_COLLECTION, ARRAYSIZE(KOF02UM_S_BAO_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Leona", KOF02UM_S_LEONA_COLLECTION, ARRAYSIZE(KOF02UM_S_LEONA_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Ralf", KOF02UM_S_RALF_COLLECTION, ARRAYSIZE(KOF02UM_S_RALF_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Clark", KOF02UM_S_CLARK_COLLECTION, ARRAYSIZE(KOF02UM_S_CLARK_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"K’", KOF02UM_S_K_COLLECTION, ARRAYSIZE(KOF02UM_S_K_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Maxima", KOF02UM_S_MAXIMA_COLLECTION, ARRAYSIZE(KOF02UM_S_MAXIMA_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Whip", KOF02UM_S_WHIP_COLLECTION, ARRAYSIZE(KOF02UM_S_WHIP_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Kim", KOF02UM_S_KIM_COLLECTION, ARRAYSIZE(KOF02UM_S_KIM_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Chang", KOF02UM_S_CHANG_COLLECTION, ARRAYSIZE(KOF02UM_S_CHANG_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Choi", KOF02UM_S_CHOI_COLLECTION, ARRAYSIZE(KOF02UM_S_CHOI_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Yamazaki", KOF02UM_S_YAMAZAKI_COLLECTION, ARRAYSIZE(KOF02UM_S_YAMAZAKI_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Blue Mary", KOF02UM_S_BLUEMARY_COLLECTION, ARRAYSIZE(KOF02UM_S_BLUEMARY_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Billy", KOF02UM_S_BILLY_COLLECTION, ARRAYSIZE(KOF02UM_S_BILLY_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Xiangfei", KOF02UM_S_XIANGFEI_COLLECTION, ARRAYSIZE(KOF02UM_S_XIANGFEI_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Hinako", KOF02UM_S_HINAKO_COLLECTION, ARRAYSIZE(KOF02UM_S_HINAKO_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"May Lee", KOF02UM_S_MAYLEE_COLLECTION, ARRAYSIZE(KOF02UM_S_MAYLEE_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Iori", KOF02UM_S_IORI_COLLECTION, ARRAYSIZE(KOF02UM_S_IORI_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Mature", KOF02UM_S_MATURE_COLLECTION, ARRAYSIZE(KOF02UM_S_MATURE_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Vice", KOF02UM_S_VICE_COLLECTION, ARRAYSIZE(KOF02UM_S_VICE_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Ryo", KOF02UM_S_RYO_COLLECTION, ARRAYSIZE(KOF02UM_S_RYO_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Robert", KOF02UM_S_ROBERT_COLLECTION, ARRAYSIZE(KOF02UM_S_ROBERT_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"EX Robert", KOF02UM_S_EXROBERT_COLLECTION, ARRAYSIZE(KOF02UM_S_EXROBERT_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Yuri", KOF02UM_S_YURI_COLLECTION, ARRAYSIZE(KOF02UM_S_YURI_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Vanessa", KOF02UM_S_VANESSA_COLLECTION, ARRAYSIZE(KOF02UM_S_VANESSA_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Seth", KOF02UM_S_SETH_COLLECTION, ARRAYSIZE(KOF02UM_S_SETH_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Ramon", KOF02UM_S_RAMON_COLLECTION, ARRAYSIZE(KOF02UM_S_RAMON_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Yashiro", KOF02UM_S_YASHIRO_COLLECTION, ARRAYSIZE(KOF02UM_S_YASHIRO_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Orochi Yashiro", KOF02UM_S_OYASHIRO_COLLECTION, ARRAYSIZE(KOF02UM_S_OYASHIRO_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Shermie", KOF02UM_S_SHERMIE_COLLECTION, ARRAYSIZE(KOF02UM_S_SHERMIE_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Orochi Shermie", KOF02UM_S_OSHERMIE_COLLECTION, ARRAYSIZE(KOF02UM_S_OSHERMIE_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Chris", KOF02UM_S_CHRIS_COLLECTION, ARRAYSIZE(KOF02UM_S_CHRIS_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Orochi Chris", KOF02UM_S_OCHRIS_COLLECTION, ARRAYSIZE(KOF02UM_S_OCHRIS_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Kula", KOF02UM_S_KULA_COLLECTION, ARRAYSIZE(KOF02UM_S_KULA_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Foxy", KOF02UM_S_FOXY_COLLECTION, ARRAYSIZE(KOF02UM_S_FOXY_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Angel", KOF02UM_S_ANGEL_COLLECTION, ARRAYSIZE(KOF02UM_S_ANGEL_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Jhun Hoon", KOF02UM_S_JHUNHOON_COLLECTION, ARRAYSIZE(KOF02UM_S_JHUNHOON_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Lin", KOF02UM_S_LIN_COLLECTION, ARRAYSIZE(KOF02UM_S_LIN_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Shingo", KOF02UM_S_SHINGO_COLLECTION, ARRAYSIZE(KOF02UM_S_SHINGO_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Heidern", KOF02UM_S_HEIDERN_COLLECTION, ARRAYSIZE(KOF02UM_S_HEIDERN_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Takuma", KOF02UM_S_TAKUMA_COLLECTION, ARRAYSIZE(KOF02UM_S_TAKUMA_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"EX Takuma", KOF02UM_S_EXTAKUMA_COLLECTION, ARRAYSIZE(KOF02UM_S_EXTAKUMA_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Chin", KOF02UM_S_CHIN_COLLECTION, ARRAYSIZE(KOF02UM_S_CHIN_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"King", KOF02UM_S_KING_COLLECTION, ARRAYSIZE(KOF02UM_S_KING_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Mai", KOF02UM_S_MAI_COLLECTION, ARRAYSIZE(KOF02UM_S_MAI_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Kasumi", KOF02UM_S_KASUMI_COLLECTION, ARRAYSIZE(KOF02UM_S_KASUMI_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"KUSANAGI", KOF02UM_S_KUSANAGI_COLLECTION, ARRAYSIZE(KOF02UM_S_KUSANAGI_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Kyo-1", KOF02UM_S_KYO1_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO1_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Kyo-2", KOF02UM_S_KYO2_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO2_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Geese", KOF02UM_S_GEESE_COLLECTION, ARRAYSIZE(KOF02UM_S_GEESE_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Goenitz", KOF02UM_S_GOENITZ_COLLECTION, ARRAYSIZE(KOF02UM_S_GOENITZ_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Nameless", KOF02UM_S_NAMELESS_COLLECTION, ARRAYSIZE(KOF02UM_S_NAMELESS_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Krizalid", KOF02UM_S_KRIZALID_COLLECTION, ARRAYSIZE(KOF02UM_S_KRIZALID_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Clone Zero", KOF02UM_S_CLONEZERO_COLLECTION, ARRAYSIZE(KOF02UM_S_CLONEZERO_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Original Zero", KOF02UM_S_ORIGINALZERO_COLLECTION, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Igniz", KOF02UM_S_IGNIZ_COLLECTION, ARRAYSIZE(KOF02UM_S_IGNIZ_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Omega Rugal", KOF02UM_S_OMEGARUGAL_COLLECTION, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Nightmare Geese", KOF02UM_S_NIGHTMAREGEESE_COLLECTION, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_COLLECTION) },
    { L"game\\base\\pal_a.bin", 394976, L"Orochi Iori (Unplayable)", KOF02UM_S_OROCHIIORI_COLLECTION, ARRAYSIZE(KOF02UM_S_OROCHIIORI_COLLECTION) },

    { L"game\\base\\pal_a.bin", 394976, L"Bonus Palettes", KOF02UM_S_BONUS_COLLECTION, ARRAYSIZE(KOF02UM_S_BONUS_COLLECTION) },
};
