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
    { L"Italy Asset 17", 0x4040c0, 0x4044c0 },
    { L"Italy Asset 18", 0x4444c0, 0x4448c0 },
    { L"Italy Asset 19", 0x4848c0, 0x484cc0 },
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

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Andy[] =
{
    // The victory palettes use replicated palettes: handle those on Update
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Andy, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Andy, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Andy) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Angel[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Angel, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Angel, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Angel) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Athena[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Athena, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Athena, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Athena) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Bao[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Bao, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Bao, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Bao) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Benimaru[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Benimaru, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Benimaru, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Benimaru) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Billy[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Billy, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Billy, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Billy) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_BlueMary[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_BlueMary, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_BlueMary, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_BlueMary) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Chang[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Chang, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Chang, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Chang) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Chin[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Chin, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Chin, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Chin) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Choi[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Choi, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Choi, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Choi) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Chris[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Chris, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Chris, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Chris) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_ChrisOChi[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_ChrisOChi, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_ChrisOChi, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_ChrisOChi) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Clark[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Clark, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Clark, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Clark) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_CloneZero[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_CloneZero, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_CloneZero, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_CloneZero) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Daimon[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Daimon, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Daimon, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Daimon) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Foxy[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Foxy, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Foxy, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Foxy) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Geese[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Geese, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Geese, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Geese) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_GeeseNM[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_GeeseNM, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_GeeseNM, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_GeeseNM) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Goenitz[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Goenitz, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Goenitz, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Goenitz) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Heidern[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Heidern, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Heidern, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Heidern) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Hinako[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Hinako, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Hinako, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Hinako) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Igniz[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Igniz, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Igniz, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Igniz) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Iori[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Iori, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Iori, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Iori) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Jhun[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Jhun, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Jhun, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Jhun) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Joe[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Joe, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Joe, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Joe) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_K[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_K, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_K, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_K) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_K9999[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_K9999, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_K9999, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K9999[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_K9999, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_K9999) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kasumi[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Kasumi, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Kasumi, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kasumi) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kensou[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Kensou, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Kensou, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kensou) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_KensouEX[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_KensouEX, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_KensouEX, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_KensouEX) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kim[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Kim, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Kim, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kim) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_King[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_King, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_King, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_King) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Krizalid[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Krizalid, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Krizalid, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Krizalid) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kula[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Kula, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Kula, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kula) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kusanagi[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Kusanagi, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Kusanagi, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kusanagi) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_KyoKusa[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_KyoKusa, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_KyoKusa, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_KyoKusa) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kyo1[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Kyo1, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Kyo1, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kyo1) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kyo2[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Kyo2, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Kyo2, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Kyo2) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Leona[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Leona, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Leona, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Leona) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Lin[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Lin, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Lin, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Lin) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Mai[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Mai, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Mai, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Mai) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Mature[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Mature, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Mature, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Mature) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Maxima[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Maxima, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Maxima, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Maxima) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_MayLee[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_MayLee, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_MayLee, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_MayLee) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Nameless[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Nameless, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Nameless, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Nameless) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_OmegaRugal[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_OmegaRugal, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_OmegaRugal, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_OmegaRugal) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Ralf[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Ralf, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Ralf, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Ralf) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Ramon[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Ramon, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Ramon, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Ramon) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Robert[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Robert, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Robert, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Robert) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_RobertEX[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_RobertEX, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_RobertEX, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_RobertEX) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Ryo[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Ryo, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Ryo, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Ryo) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Seth[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Seth, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Seth, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Seth) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Shermie[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Shermie, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Shermie, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Shermie) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_ShermieOChi[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_ShermieOChi, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_ShermieOChi, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_ShermieOChi) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Shingo[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Shingo, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Shingo, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Shingo) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Takuma[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Takuma, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Takuma, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Takuma) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_TakumaEX[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_TakumaEX, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_TakumaEX, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_TakumaEX) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Terry[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Terry, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Terry, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Terry) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Vanessa[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Vanessa, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Vanessa, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Vanessa) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Vice[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Vice, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Vice, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Vice) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Whip[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Whip, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Whip, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Whip) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Xiangfei[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Xiangfei, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Xiangfei, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Xiangfei) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Yamazaki[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Yamazaki, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Yamazaki, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Yamazaki) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Yashiro[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Yashiro, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Yashiro, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Yashiro) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_YashiroOChi[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_YashiroOChi, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_YashiroOChi, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_YashiroOChi) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Yuri[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Yuri, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Yuri, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_Yuri) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_VICTORY_ZeroOG[] =
{
    { L"Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_ZeroOG, 0x40, &pairNext, &secondaryProcCopyToNext },
    { L"Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_ZeroOG, 0x41, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_VICTORY_ZeroOG) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Leona[] =
{
    { L"Special Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Leona, 0x42, &pairNext, &secondaryProcCopyToNext },
    { L"Special Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Leona, 0x43, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Leona) },
};
const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_MayLee[] =
{
    { L"Special Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_MayLee, 0x42, &pairNext, &secondaryProcCopyToNext },
    { L"Special Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_MayLee, 0x43, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_MayLee) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Kula[] =
{
    { L"Special Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Kula, 0x42, &pairNext, &secondaryProcCopyToNext },
    { L"Special Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Kula, 0x43, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Kula) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Nameless[] =
{
    { L"Special Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Nameless, 0x42, &pairNext, &secondaryProcCopyToNext },
    { L"Special Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Nameless, 0x43, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Nameless) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Kasumi[] =
{
    { L"Special Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Kasumi, 0x42, &pairNext, &secondaryProcCopyToNext },
    { L"Special Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Kasumi, 0x43, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Kasumi) },
};

const sGame_PaletteDataset KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Mai[] =
{
    { L"Special Victory Portrait Palette 1", 0x40, 0x440, indexKOF02UMSprites_Mai, 0x42, &pairNext, &secondaryProcCopyToNext },
    { L"Special Victory Portrait Palette 2", 0x10440, 0x10840, indexKOF02UMSprites_Mai, 0x43, &pairPrevious },
};

const sDescTreeNode KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_PALETTES_SPECIALVICTORY_Mai) },
};

const std::vector<sGameUnitsByFile> KOF02UM_S_DIR_BGR555_UNITS =
{
    { L"game\\base\\max2bg.bin", 38912, L"MAX2 Backgrounds", KOF02UM_S_MAX2_BG_COLLECTION, ARRAYSIZE(KOF02UM_S_MAX2_BG_COLLECTION) },
    { L"game\\base\\bar.bin", 8704, L"HUD", KOF02UM_S_BAR_HUD_COLLECTION, ARRAYSIZE(KOF02UM_S_BAR_HUD_COLLECTION) },
};

const std::vector<sGameUnitsByFile> KOF02UM_S_DIR_8888_UNITS =
{
    { L"game\\demo\\psel.bin-n", 5697572, L"Character Select (ENG, JPN, PT-BR)", KOF02UM_S_PSEL_COLLECTION, ARRAYSIZE(KOF02UM_S_PSEL_COLLECTION) },
    { L"game\\demo\\psels.bin-n", 5697572, L"Character Select (Spanish)", KOF02UM_S_PSEL_COLLECTION, ARRAYSIZE(KOF02UM_S_PSEL_COLLECTION) },

    { L"game\\demo\\osel.bin-n", 0x28cbb8, L"Order Select (ENG, JPN, PT-BR)", KOF02UM_S_ORDERSELECT_COLLECTION, ARRAYSIZE(KOF02UM_S_ORDERSELECT_COLLECTION) },
    { L"game\\demo\\osels.bin-n", 0x28cbb8, L"Order Select (Spanish)", KOF02UM_S_ORDERSELECT_COLLECTION, ARRAYSIZE(KOF02UM_S_ORDERSELECT_COLLECTION) },

    { L"game\\demo\\conte.bin", 1249860, L"Continue Screen (English)", KOF02UM_S_CONTE_COLLECTION, ARRAYSIZE(KOF02UM_S_CONTE_COLLECTION) },
    { L"game\\demo\\cont.bin-n", 1249820, L"Continue Screen (Japanese)", KOF02UM_S_CONTE_COLLECTION, ARRAYSIZE(KOF02UM_S_CONTE_COLLECTION) },
    { L"game\\demo\\contb.bin", 1249860, L"Continue Screen (Portuguese-Brazil)", KOF02UM_S_CONTE_COLLECTION, ARRAYSIZE(KOF02UM_S_CONTE_COLLECTION) },
    { L"game\\demo\\conts.bin", 1249860, L"Continue Screen (Spanish)", KOF02UM_S_CONTE_COLLECTION, ARRAYSIZE(KOF02UM_S_CONTE_COLLECTION) },

    { L"game\\demo\\rank.bin", 769318, L"Rankings (ENG, JPN, PT-BR)", KOF02UM_S_RANK_COLLECTION, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION) },
    { L"game\\demo\\ranks.bin", 769318, L"Rankings (Spanish)", KOF02UM_S_RANK_COLLECTION, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION) },

    { L"game\\menu\\clear.bin", 137422, L"Clear", KOF02UM_S_CLEAR_COLLECTION, ARRAYSIZE(KOF02UM_S_CLEAR_COLLECTION)},

    { L"game\\vic\\vic0_00.bin-n", 0x479bae, L"Victory Screens: Arcade Mode (Team)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"game\\vic\\vic1_00.bin-n", 0x4784c6, L"Victory Screens: Arcade Mode (Loss)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"game\\vic\\vic3_00.bin-n", 0x478fe2, L"Victory Screens: Arcade Mode (Single)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"game\\vic\\vic2_00.bin-n", 0x4790ea, L"Victory Screens: VS Mode (Team)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"game\\vic\\vic4_00.bin-n", 0x47851a, L"Victory Screens: VS Mode (Single)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },

    { L"game\\vic\\messe_r.dat", 38766, L"Win Quotes Text: English Win", KOF02UM_S_WINQUOTES_COLLECTION, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION) },
    { L"game\\vic\\messe.dat", 38766, L"Win Quotes Text: English Loss", KOF02UM_S_WINQUOTES_COLLECTION, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION) },
    { L"game\\vic\\mess_r.dat-n", 167770, L"Win Quotes Text: Japanese Win", KOF02UM_S_WINQUOTES_COLLECTION, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION) },
    { L"game\\vic\\mess.dat-n", 167770, L"Win Quotes Text: Japanese Loss", KOF02UM_S_WINQUOTES_COLLECTION, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION) },
    { L"game\\vic\\messb_r.dat", 39920, L"Win Quotes Text: Portugese-Brazil Win", KOF02UM_S_WINQUOTES_COLLECTION, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION) },
    { L"game\\vic\\messb.dat", 39920, L"Win Quotes Text: Portugese-Brazil Loss", KOF02UM_S_WINQUOTES_COLLECTION, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION) },
    { L"game\\vic\\messs_r.dat", 40360, L"Win Quotes Text: Spanish Win", KOF02UM_S_WINQUOTES_COLLECTION, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION) },
    { L"game\\vic\\messs.dat", 40388, L"Win Quotes Text: Spanish Loss", KOF02UM_S_WINQUOTES_COLLECTION, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION) },

    { L"game\\vic\\vic_00.bin-n", 266304, L"Kyo Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa) },
    { L"game\\vic\\vic_01.bin-n", 266304, L"Benimaru Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru) },
    { L"game\\vic\\vic_02.bin-n", 266304, L"Daimon Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon) },
    { L"game\\vic\\vic_03.bin-n", 266304, L"Terry Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry) },
    { L"game\\vic\\vic_04.bin-n", 266304, L"Andy Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy) },
    { L"game\\vic\\vic_05.bin-n", 266304, L"Joe Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe) },
    { L"game\\vic\\vic_06.bin-n", 266304, L"Kim Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim) },
    { L"game\\vic\\vic_07.bin-n", 266304, L"Chang Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang) },
    { L"game\\vic\\vic_08.bin-n", 266304, L"Choi Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi) },
    { L"game\\vic\\vic_09.bin-n", 266304, L"Athena Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena) },
    { L"game\\vic\\vic_0A.bin-n", 266304, L"Kensou Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou) },
    { L"game\\vic\\vic_0B.bin-n", 266304, L"Chin Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin) },
    { L"game\\vic\\vic_0C.bin-n", 266304, L"Leona Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona) },
    { L"game\\vic\\vic_0D.bin-n", 266304, L"Ralf Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf) },
    { L"game\\vic\\vic_0E.bin-n", 266304, L"Clark Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark) },
    { L"game\\vic\\vic_0F.bin-n", 266304, L"Ryo Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo) },
    { L"game\\vic\\vic_10.bin-n", 266304, L"Robert Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert) },
    { L"game\\vic\\vic_11.bin-n", 266304, L"Takuma Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma) },
    { L"game\\vic\\vic_12.bin-n", 266304, L"Mai Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai) },
    { L"game\\vic\\vic_13.bin-n", 266304, L"Yuri Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri) },
    { L"game\\vic\\vic_14.bin-n", 266304, L"May Lee Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee) },
    { L"game\\vic\\vic_15.bin-n", 266304, L"Iori Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori) },
    { L"game\\vic\\vic_16.bin-n", 266304, L"Mature Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature) },
    { L"game\\vic\\vic_17.bin-n", 266304, L"Vice Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice) },
    { L"game\\vic\\vic_18.bin-n", 266304, L"Yamazaki Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki) },
    { L"game\\vic\\vic_19.bin-n", 266304, L"Blue Mary Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary) },
    { L"game\\vic\\vic_1A.bin-n", 266304, L"Billy Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy) },
    { L"game\\vic\\vic_1B.bin-n", 266304, L"Yashiro Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro) },
    { L"game\\vic\\vic_1C.bin-n", 266304, L"Shermie Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie) },
    { L"game\\vic\\vic_1D.bin-n", 266304, L"Chris Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris) },
    { L"game\\vic\\vic_1E.bin-n", 266304, L"K' Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K) },
    { L"game\\vic\\vic_1F.bin-n", 266304, L"Maxima Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima) },
    { L"game\\vic\\vic_20.bin-n", 266304, L"Whip Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip) },
    { L"game\\vic\\vic_21.bin-n", 266304, L"Vanessa Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa) },
    { L"game\\vic\\vic_22.bin-n", 266304, L"Seth Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth) },
    { L"game\\vic\\vic_23.bin-n", 266304, L"Ramon Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon) },
    { L"game\\vic\\vic_24.bin-n", 266304, L"Kula Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula) },
    { L"game\\vic\\vic_25.bin-n", 266304, L"Nameless Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless) },
    { L"game\\vic\\vic_26.bin-n", 266304, L"Angel Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel) },
    { L"game\\vic\\vic_27.bin-n", 266304, L"Omega Rugal Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal) },
    { L"game\\vic\\vic_28.bin-n", 266304, L"KUSANAGI Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi) },
    { L"game\\vic\\vic_29.bin-n", 266304, L"Shingo Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo) },
    { L"game\\vic\\vic_2A.bin-n", 266304, L"King Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King) },
    { L"game\\vic\\vic_2B.bin-n", 266304, L"Xiangfei Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei) },
    { L"game\\vic\\vic_2C.bin-n", 266304, L"Hinako Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako) },
    { L"game\\vic\\vic_2D.bin-n", 266304, L"Heidern Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern) },
    { L"game\\vic\\vic_2E.bin-n", 266304, L"Lin Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin) },
    //{ L"game\\vic\\vic_2F.bin-n", 266304, L"TakumaEX (Unused) Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX) },
    { L"game\\vic\\vic_30.bin-n", 266304, L"Bao Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao) },
    { L"game\\vic\\vic_31.bin-n", 266304, L"Jhun Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun) },
    { L"game\\vic\\vic_32.bin-n", 266304, L"Kyo1 Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1) },
    { L"game\\vic\\vic_33.bin-n", 266304, L"Foxy Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy) },
    { L"game\\vic\\vic_34.bin-n", 266304, L"Kasumi Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi) },
    { L"game\\vic\\vic_35.bin-n", 266304, L"Geese Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese) },
    { L"game\\vic\\vic_36.bin-n", 266304, L"Nightmare Geese Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM) },
    //{ L"game\\vic\\vic_37.bin-n", 266304, L"EX Robert (Unused) Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX) },
    //{ L"game\\vic\\vic_38.bin-n", 266304, L"EX Kensou (Unused) Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX) },
    { L"game\\vic\\vic_39.bin-n", 266304, L"Kyo2 Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2) },
    { L"game\\vic\\vic_3A.bin-n", 266304, L"Goenitz Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz) },
    { L"game\\vic\\vic_3B.bin-n", 266304, L"Krizalid Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid) },
    { L"game\\vic\\vic_3C.bin-n", 266304, L"Clone Zero Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero) },
    { L"game\\vic\\vic_3D.bin-n", 266304, L"Original Zero Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG) },
    { L"game\\vic\\vic_3E.bin-n", 266304, L"Igniz Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz) },
    //{ L"game\\vic\\vic_3F.bin-n", 266304, L"Unknown (Unused) Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY) },
    { L"game\\vic\\vic_40.bin-n", 266304, L"Orochi Yashiro Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi) },
    { L"game\\vic\\vic_41.bin-n", 266304, L"Orochi Shermie Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi) },
    { L"game\\vic\\vic_42.bin-n", 266304, L"Orochi Chris Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi) },

    { L"game\\vic\\vic_43.bin-n", 266304, L"Leona Special Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona) },
    //{ L"game\\vic\\vic_44.bin-n", 266304, L"Mai Special (Unused) Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai) },
    { L"game\\vic\\vic_45.bin-n", 266304, L"May Lee Special Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee) },
    { L"game\\vic\\vic_46.bin-n", 266304, L"Kula Special Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula) },
    { L"game\\vic\\vic_47.bin-n", 266304, L"Nameless Special Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless) },
    { L"game\\vic\\vic_48.bin-n", 266304, L"Kasumi Special Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi) },
    { L"game\\vic\\vic_49.bin-n", 266304, L"Mai Special Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai) },
    //{ L"game\\vic\\vic_4A.bin-n", 266304, L"Bao (Unused) Victory portraits", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao) },

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
