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

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_JAPAN[] =
{
    { L"Asset 1", 0xc77c0, 0xc7bc0 },
    { L"Asset 2", 0xc7fc0, 0xc83c0 },
    { L"Asset 3", 0xc87c0, 0xc8bc0 },
    { L"Asset 4", 0xc8fc0, 0xc9000 },
    { L"Asset 5", 0xc9040, 0xc9080 },
    { L"Asset 6", 0xc90c0, 0xc94c0 },
    { L"Asset 7", 0xc98c0, 0xc9cc0 },
    { L"Asset 8", 0xca0c0, 0xca4c0 },
    { L"Asset 9", 0xca8c0, 0xca900 },
    { L"Asset 10", 0xca940, 0xcad40 },
    { L"Asset 11", 0xcb140, 0xcb540 },
    { L"Asset 12", 0xcb940, 0xcbd40 },
    { L"Asset 13", 0xcc140, 0xcc540 },
    { L"Asset 14", 0xcc940, 0xcc980 },
    { L"Asset 15", 0xcc9c0, 0xcca00 },
    { L"Asset 16", 0xcca40, 0xcca80 },
    { L"Asset 17", 0xccac0, 0xccb00 },
    { L"Asset 18", 0xccb40, 0xccf40 },
    { L"Asset 19", 0xcd340, 0xcd740 },
    { L"Asset 20", 0xcdb40, 0xcdf40 },
    { L"Asset 21", 0xce340, 0xce740 },
    { L"Asset 22", 0xceb40, 0xcef40 },
    { L"Asset 23", 0xcf340, 0xcf740 },
    { L"Asset 24", 0xcfb40, 0xcff40 },
    { L"Asset 25", 0xd0340, 0xd0740 },
    { L"Asset 26", 0xd0b40, 0xd0f40 },
    { L"Asset 27", 0xd1340, 0xd1380 },
    { L"Asset 28", 0xd13c0, 0xd1400 },
    { L"Asset 29", 0xd1440, 0xd1480 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_JAPAN_MAX2[] =
{
    { L"Asset 1", 0xc7bc0, 0xc7fc0 },
    { L"Asset 2", 0xc83c0, 0xc87c0 },
    { L"Asset 3", 0xc8bc0, 0xc8fc0 },
    { L"Asset 4", 0xc9000, 0xc9040 },
    { L"Asset 5", 0xc9080, 0xc90c0 },
    { L"Asset 6", 0xc94c0, 0xc98c0 },
    { L"Asset 7", 0xc9cc0, 0xca0c0 },
    { L"Asset 8", 0xca4c0, 0xca8c0 },
    { L"Asset 9", 0xca900, 0xca940 },
    { L"Asset 10", 0xcad40, 0xcb140 },
    { L"Asset 11", 0xcb540, 0xcb940 },
    { L"Asset 12", 0xcbd40, 0xcc140 },
    { L"Asset 13", 0xcc540, 0xcc940 },
    { L"Asset 14", 0xcc980, 0xcc9c0 },
    { L"Asset 15", 0xcca00, 0xcca40 },
    { L"Asset 16", 0xcca80, 0xccac0 },
    { L"Asset 17", 0xccb00, 0xccb40 },
    { L"Asset 18", 0xccf40, 0xcd340 },
    { L"Asset 19", 0xcd740, 0xcdb40 },
    { L"Asset 20", 0xcdf40, 0xce340 },
    { L"Asset 21", 0xce740, 0xceb40 },
    { L"Asset 22", 0xcef40, 0xcf340 },
    { L"Asset 23", 0xcf740, 0xcfb40 },
    { L"Asset 24", 0xcff40, 0xd0340 },
    { L"Asset 25", 0xd0740, 0xd0b40 },
    { L"Asset 26", 0xd0f40, 0xd1340 },
    { L"Asset 27", 0xd1380, 0xd13c0 },
    { L"Asset 28", 0xd1400, 0xd1440 },
    { L"Asset 29", 0xd1480, 0xd14c0 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_JAPAN[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_JAPAN, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_JAPAN) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_JAPAN_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_JAPAN_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_KOREA[] =
{
    { L"Asset 1", 0x6d950, 0x6dd50 },
    { L"Asset 2", 0x6e150, 0x6e550 },
    { L"Asset 3", 0x6e950, 0x6ed50 },
    { L"Asset 4", 0x6f150, 0x6f550 },
    { L"Asset 5", 0x6f950, 0x6fd50 },
    { L"Asset 6", 0x70150, 0x70550 },
    { L"Asset 7", 0x70950, 0x70d50 },
    { L"Asset 8", 0x71150, 0x71550 },
    { L"Asset 9", 0x71950, 0x71d50 },
    { L"Asset 10", 0x72150, 0x72550 },
    { L"Asset 11", 0x72950, 0x72d50 },
    { L"Asset 12", 0x73150, 0x73550 },
    { L"Asset 13", 0x73950, 0x73d50 },
    { L"Asset 14", 0x74150, 0x74550 },
    { L"Asset 15", 0x74950, 0x74d50 },
    { L"Asset 16", 0x75150, 0x75550 },
    { L"Asset 17", 0x75950, 0x75d50 },
    { L"Asset 18", 0x76150, 0x76550 },
    { L"Asset 19", 0x76950, 0x76d50 },
    { L"Asset 20", 0x77150, 0x77550 },
    { L"Asset 21", 0x77950, 0x77d50 },
    { L"Asset 22", 0x78150, 0x78550 },
    { L"Asset 23", 0x78950, 0x78d50 },
    { L"Asset 24", 0x79150, 0x79550 },
    { L"Asset 25", 0x79950, 0x79d50 },
    { L"Asset 26", 0x7a150, 0x7a550 },
    { L"Asset 27", 0x7a950, 0x7ad50 },
    { L"Asset 28", 0x7b150, 0x7b550 },
    { L"Asset 29", 0x7b950, 0x7bd50 },
    { L"Asset 30", 0x7c150, 0x7c550 },
    { L"Asset 31", 0x7c950, 0x7cd50 },
    { L"Asset 32", 0x7d150, 0x7d550 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_KOREA_MAX2[] =
{
    { L"Asset 1", 0x6dd50, 0x6e150 },
    { L"Asset 2", 0x6e550, 0x6e950 },
    { L"Asset 3", 0x6ed50, 0x6f150 },
    { L"Asset 4", 0x6f550, 0x6f950 },
    { L"Asset 5", 0x6fd50, 0x70150 },
    { L"Asset 6", 0x70550, 0x70950 },
    { L"Asset 7", 0x70d50, 0x71150 },
    { L"Asset 8", 0x71550, 0x71950 },
    { L"Asset 9", 0x71d50, 0x72150 },
    { L"Asset 10", 0x72550, 0x72950 },
    { L"Asset 11", 0x72d50, 0x73150 },
    { L"Asset 12", 0x73550, 0x73950 },
    { L"Asset 13", 0x73d50, 0x74150 },
    { L"Asset 14", 0x74550, 0x74950 },
    { L"Asset 15", 0x74d50, 0x75150 },
    { L"Asset 16", 0x75550, 0x75950 },
    { L"Asset 17", 0x75d50, 0x76150 },
    { L"Asset 18", 0x76550, 0x76950 },
    { L"Asset 19", 0x76d50, 0x77150 },
    { L"Asset 20", 0x77550, 0x77950 },
    { L"Asset 21", 0x77d50, 0x78150 },
    { L"Asset 22", 0x78550, 0x78950 },
    { L"Asset 23", 0x78d50, 0x79150 },
    { L"Asset 24", 0x79550, 0x79950 },
    { L"Asset 25", 0x79d50, 0x7a150 },
    { L"Asset 26", 0x7a550, 0x7a950 },
    { L"Asset 27", 0x7ad50, 0x7b150 },
    { L"Asset 28", 0x7b550, 0x7b950 },
    { L"Asset 29", 0x7bd50, 0x7c150 },
    { L"Asset 30", 0x7c550, 0x7c950 },
    { L"Asset 31", 0x7cd50, 0x7d150 },
    { L"Asset 32", 0x7d550, 0x7d950 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_KOREA[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_KOREA, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_KOREA) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_KOREA_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_KOREA_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_KOREA2[] =
{
    { L"Asset 1", 0x6ddc0, 0x6e1c0 },
    { L"Asset 2", 0x6e5c0, 0x6e9c0 },
    { L"Asset 3", 0x6edc0, 0x6f1c0 },
    { L"Asset 4", 0x6f5c0, 0x6f9c0 },
    { L"Asset 5", 0x6fdc0, 0x701c0 },
    { L"Asset 6", 0x705c0, 0x709c0 },
    { L"Asset 7", 0x70dc0, 0x711c0 },
    { L"Asset 8", 0x715c0, 0x719c0 },
    { L"Asset 9", 0x71dc0, 0x721c0 },
    { L"Asset 10", 0x725c0, 0x729c0 },
    { L"Asset 11", 0x72dc0, 0x731c0 },
    { L"Asset 12", 0x735c0, 0x739c0 },
    { L"Asset 13", 0x73dc0, 0x741c0 },
    { L"Asset 14", 0x745c0, 0x749c0 },
    { L"Asset 15", 0x74dc0, 0x751c0 },
    { L"Asset 16", 0x755c0, 0x759c0 },
    { L"Asset 17", 0x75dc0, 0x761c0 },
    { L"Asset 18", 0x765c0, 0x769c0 },
    { L"Asset 19", 0x76dc0, 0x771c0 },
    { L"Asset 20", 0x775c0, 0x779c0 },
    { L"Asset 21", 0x77dc0, 0x781c0 },
    { L"Asset 22", 0x785c0, 0x789c0 },
    { L"Asset 23", 0x78dc0, 0x791c0 },
    { L"Asset 24", 0x795c0, 0x799c0 },
    { L"Asset 25", 0x79dc0, 0x7a1c0 },
    { L"Asset 26", 0x7a5c0, 0x7a9c0 },
    { L"Asset 27", 0x7adc0, 0x7b1c0 },
    { L"Asset 28", 0x7b5c0, 0x7b9c0 },
    { L"Asset 29", 0x7bdc0, 0x7c1c0 },
    { L"Asset 30", 0x7c5c0, 0x7c9c0 },
    { L"Asset 31", 0x7cdc0, 0x7d1c0 },
    { L"Asset 32", 0x7d5c0, 0x7d9c0 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_KOREA2_MAX2[] =
{
    { L"Asset 1", 0x6e1c0, 0x6e5c0 },
    { L"Asset 2", 0x6e9c0, 0x6edc0 },
    { L"Asset 3", 0x6f1c0, 0x6f5c0 },
    { L"Asset 4", 0x6f9c0, 0x6fdc0 },
    { L"Asset 5", 0x701c0, 0x705c0 },
    { L"Asset 6", 0x709c0, 0x70dc0 },
    { L"Asset 7", 0x711c0, 0x715c0 },
    { L"Asset 8", 0x719c0, 0x71dc0 },
    { L"Asset 9", 0x721c0, 0x725c0 },
    { L"Asset 10", 0x729c0, 0x72dc0 },
    { L"Asset 11", 0x731c0, 0x735c0 },
    { L"Asset 12", 0x739c0, 0x73dc0 },
    { L"Asset 13", 0x741c0, 0x745c0 },
    { L"Asset 14", 0x749c0, 0x74dc0 },
    { L"Asset 15", 0x751c0, 0x755c0 },
    { L"Asset 16", 0x759c0, 0x75dc0 },
    { L"Asset 17", 0x761c0, 0x765c0 },
    { L"Asset 18", 0x769c0, 0x76dc0 },
    { L"Asset 19", 0x771c0, 0x775c0 },
    { L"Asset 20", 0x779c0, 0x77dc0 },
    { L"Asset 21", 0x781c0, 0x785c0 },
    { L"Asset 22", 0x789c0, 0x78dc0 },
    { L"Asset 23", 0x791c0, 0x795c0 },
    { L"Asset 24", 0x799c0, 0x79dc0 },
    { L"Asset 25", 0x7a1c0, 0x7a5c0 },
    { L"Asset 26", 0x7a9c0, 0x7adc0 },
    { L"Asset 27", 0x7b1c0, 0x7b5c0 },
    { L"Asset 28", 0x7b9c0, 0x7bdc0 },
    { L"Asset 29", 0x7c1c0, 0x7c5c0 },
    { L"Asset 30", 0x7c9c0, 0x7cdc0 },
    { L"Asset 31", 0x7d1c0, 0x7d5c0 },
    { L"Asset 32", 0x7d9c0, 0x7ddc0 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_KOREA2[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_KOREA2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_KOREA2) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_KOREA2_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_KOREA2_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_KOREA3[] =
{
    { L"Asset 1", 0x6db90, 0x6df90 },
    { L"Asset 2", 0x6e390, 0x6e790 },
    { L"Asset 3", 0x6eb90, 0x6ef90 },
    { L"Asset 4", 0x6f390, 0x6f790 },
    { L"Asset 5", 0x6fb90, 0x6ff90 },
    { L"Asset 6", 0x70390, 0x70790 },
    { L"Asset 7", 0x70b90, 0x70f90 },
    { L"Asset 8", 0x71390, 0x71790 },
    { L"Asset 9", 0x71b90, 0x71f90 },
    { L"Asset 10", 0x72390, 0x72790 },
    { L"Asset 11", 0x72b90, 0x72f90 },
    { L"Asset 12", 0x73390, 0x73790 },
    { L"Asset 13", 0x73b90, 0x73f90 },
    { L"Asset 14", 0x74390, 0x74790 },
    { L"Asset 15", 0x74b90, 0x74f90 },
    { L"Asset 16", 0x75390, 0x75790 },
    { L"Asset 17", 0x75b90, 0x75f90 },
    { L"Asset 18", 0x76390, 0x76790 },
    { L"Asset 19", 0x76b90, 0x76f90 },
    { L"Asset 20", 0x77390, 0x77790 },
    { L"Asset 21", 0x77b90, 0x77f90 },
    { L"Asset 22", 0x78390, 0x78790 },
    { L"Asset 23", 0x78b90, 0x78f90 },
    { L"Asset 24", 0x79390, 0x79790 },
    { L"Asset 25", 0x79b90, 0x79f90 },
    { L"Asset 26", 0x7a390, 0x7a790 },
    { L"Asset 27", 0x7ab90, 0x7af90 },
    { L"Asset 28", 0x7b390, 0x7b790 },
    { L"Asset 29", 0x7bb90, 0x7bf90 },
    { L"Asset 30", 0x7c390, 0x7c790 },
    { L"Asset 31", 0x7cb90, 0x7cf90 },
    { L"Asset 32", 0x7d390, 0x7d790 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_KOREA3_MAX2[] =
{
    { L"Asset 1", 0x6df90, 0x6e390 },
    { L"Asset 2", 0x6e790, 0x6eb90 },
    { L"Asset 3", 0x6ef90, 0x6f390 },
    { L"Asset 4", 0x6f790, 0x6fb90 },
    { L"Asset 5", 0x6ff90, 0x70390 },
    { L"Asset 6", 0x70790, 0x70b90 },
    { L"Asset 7", 0x70f90, 0x71390 },
    { L"Asset 8", 0x71790, 0x71b90 },
    { L"Asset 9", 0x71f90, 0x72390 },
    { L"Asset 10", 0x72790, 0x72b90 },
    { L"Asset 11", 0x72f90, 0x73390 },
    { L"Asset 12", 0x73790, 0x73b90 },
    { L"Asset 13", 0x73f90, 0x74390 },
    { L"Asset 14", 0x74790, 0x74b90 },
    { L"Asset 15", 0x74f90, 0x75390 },
    { L"Asset 16", 0x75790, 0x75b90 },
    { L"Asset 17", 0x75f90, 0x76390 },
    { L"Asset 18", 0x76790, 0x76b90 },
    { L"Asset 19", 0x76f90, 0x77390 },
    { L"Asset 20", 0x77790, 0x77b90 },
    { L"Asset 21", 0x77f90, 0x78390 },
    { L"Asset 22", 0x78790, 0x78b90 },
    { L"Asset 23", 0x78f90, 0x79390 },
    { L"Asset 24", 0x79790, 0x79b90 },
    { L"Asset 25", 0x79f90, 0x7a390 },
    { L"Asset 26", 0x7a790, 0x7ab90 },
    { L"Asset 27", 0x7af90, 0x7b390 },
    { L"Asset 28", 0x7b790, 0x7bb90 },
    { L"Asset 29", 0x7bf90, 0x7c390 },
    { L"Asset 30", 0x7c790, 0x7cb90 },
    { L"Asset 31", 0x7cf90, 0x7d390 },
    { L"Asset 32", 0x7d790, 0x7db90 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_KOREA3[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_KOREA3, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_KOREA3) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_KOREA3_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_KOREA3_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CHINA[] =
{
    { L"Asset 1", 0x81400, 0x81800 },
    { L"Asset 2", 0x81c00, 0x82000 },
    { L"Asset 3", 0x82400, 0x82800 },
    { L"Asset 4", 0x82c00, 0x83000 },
    { L"Asset 5", 0x83400, 0x83800 },
    { L"Asset 6", 0x83c00, 0x84000 },
    { L"Asset 7", 0x84400, 0x84800 },
    { L"Asset 8", 0x84c00, 0x85000 },
    { L"Asset 9", 0x85400, 0x85800 },
    { L"Asset 10", 0x85c00, 0x86000 },
    { L"Asset 11", 0x86400, 0x86800 },
    { L"Asset 12", 0x86c00, 0x87000 },
    { L"Asset 13", 0x87400, 0x87800 },
    { L"Asset 14", 0x87c00, 0x88000 },
    { L"Asset 15", 0x88400, 0x88800 },
    { L"Asset 16", 0x88c00, 0x89000 },
    { L"Asset 17", 0x89400, 0x89800 },
    { L"Asset 18", 0x89c00, 0x8a000 },
    { L"Asset 19", 0x8a400, 0x8a800 },
    { L"Asset 20", 0x8ac00, 0x8b000 },
    { L"Asset 21", 0x8b400, 0x8b800 },
    { L"Asset 22", 0x8bc00, 0x8c000 },
    { L"Asset 23", 0x8c400, 0x8c800 },
    { L"Asset 24", 0x8cc00, 0x8d000 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CHINA_MAX2[] =
{
    { L"Asset 1", 0x81800, 0x81c00 },
    { L"Asset 2", 0x82000, 0x82400 },
    { L"Asset 3", 0x82800, 0x82c00 },
    { L"Asset 4", 0x83000, 0x83400 },
    { L"Asset 5", 0x83800, 0x83c00 },
    { L"Asset 6", 0x84000, 0x84400 },
    { L"Asset 7", 0x84800, 0x84c00 },
    { L"Asset 8", 0x85000, 0x85400 },
    { L"Asset 9", 0x85800, 0x85c00 },
    { L"Asset 10", 0x86000, 0x86400 },
    { L"Asset 11", 0x86800, 0x86c00 },
    { L"Asset 12", 0x87000, 0x87400 },
    { L"Asset 13", 0x87800, 0x87c00 },
    { L"Asset 14", 0x88000, 0x88400 },
    { L"Asset 15", 0x88800, 0x88c00 },
    { L"Asset 16", 0x89000, 0x89400 },
    { L"Asset 17", 0x89800, 0x89c00 },
    { L"Asset 18", 0x8a000, 0x8a400 },
    { L"Asset 19", 0x8a800, 0x8ac00 },
    { L"Asset 20", 0x8b000, 0x8b400 },
    { L"Asset 21", 0x8b800, 0x8bc00 },
    { L"Asset 22", 0x8c000, 0x8c400 },
    { L"Asset 23", 0x8c800, 0x8cc00 },
    { L"Asset 24", 0x8d000, 0x8d400 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_CHINA[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CHINA, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CHINA) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CHINA_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CHINA_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_USA[] =
{
    { L"Asset 1", 0xf0e90, 0xf1290 },
    { L"Asset 2", 0xf1690, 0xf1a90 },
    { L"Asset 3", 0xf1e90, 0xf2290 },
    { L"Asset 4", 0xf2690, 0xf2a90 },
    { L"Asset 5", 0xf2e90, 0xf3290 },
    { L"Asset 6", 0xf3690, 0xf36d0 },
    { L"Asset 7", 0xf3710, 0xf3b10 },
    { L"Asset 8", 0xf3f10, 0xf3f50 },
    { L"Asset 9", 0xf3f90, 0xf4390 },
    { L"Asset 10", 0xf4790, 0xf4b90 },
    { L"Asset 11", 0xf4f90, 0xf5390 },
    { L"Asset 12", 0xf5790, 0xf5b90 },
    { L"Asset 13", 0xf5f90, 0xf6390 },
    { L"Asset 14", 0xf6790, 0xf6b90 },
    { L"Asset 15", 0xf6f90, 0xf7390 },
    { L"Asset 16", 0xf7790, 0xf7b90 },
    { L"Asset 17", 0xf7f90, 0xf8390 },
    { L"Asset 18", 0xf8790, 0xf8b90 },
    { L"Asset 19", 0xf8f90, 0xf9390 },
    { L"Asset 20", 0xf9790, 0xf9b90 },
    { L"Asset 21", 0xf9f90, 0xfa390 },
    { L"Asset 22", 0xfa790, 0xfab90 },
    { L"Asset 23", 0xfaf90, 0xfb390 },
    { L"Asset 24", 0xfb790, 0xfbb90 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_USA_MAX2[] =
{
    { L"Asset 1", 0xf1290, 0xf1690 },
    { L"Asset 2", 0xf1a90, 0xf1e90 },
    { L"Asset 3", 0xf2290, 0xf2690 },
    { L"Asset 4", 0xf2a90, 0xf2e90 },
    { L"Asset 5", 0xf3290, 0xf3690 },
    { L"Asset 6", 0xf36d0, 0xf3710 },
    { L"Asset 7", 0xf3b10, 0xf3f10 },
    { L"Asset 8", 0xf3f50, 0xf3f90 },
    { L"Asset 9", 0xf4390, 0xf4790 },
    { L"Asset 10", 0xf4b90, 0xf4f90 },
    { L"Asset 11", 0xf5390, 0xf5790 },
    { L"Asset 12", 0xf5b90, 0xf5f90 },
    { L"Asset 13", 0xf6390, 0xf6790 },
    { L"Asset 14", 0xf6b90, 0xf6f90 },
    { L"Asset 15", 0xf7390, 0xf7790 },
    { L"Asset 16", 0xf7b90, 0xf7f90 },
    { L"Asset 17", 0xf8390, 0xf8790 },
    { L"Asset 18", 0xf8b90, 0xf8f90 },
    { L"Asset 19", 0xf9390, 0xf9790 },
    { L"Asset 20", 0xf9b90, 0xf9f90 },
    { L"Asset 21", 0xfa390, 0xfa790 },
    { L"Asset 22", 0xfab90, 0xfaf90 },
    { L"Asset 23", 0xfb390, 0xfb790 },
    { L"Asset 24", 0xfbb90, 0xfbf90 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_USA[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_USA, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_USA) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_USA_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_USA_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CAMBODIA[] =
{
    { L"Asset 1", 0x136620, 0x136a20 },
    { L"Asset 2", 0x136e20, 0x137220 },
    { L"Asset 3", 0x137620, 0x137a20 },
    { L"Asset 4", 0x137e20, 0x138220 },
    { L"Asset 5", 0x138620, 0x138a20 },
    { L"Asset 6", 0x138e20, 0x139220 },
    { L"Asset 7", 0x139620, 0x139a20 },
    { L"Asset 8", 0x139e20, 0x13a220 },
    { L"Asset 9", 0x13a620, 0x13aa20 },
    { L"Asset 10", 0x13ae20, 0x13b220 },
    { L"Asset 11", 0x13b620, 0x13ba20 },
    { L"Asset 12", 0x13be20, 0x13c220 },
    { L"Asset 13", 0x13c620, 0x13ca20 },
    { L"Asset 14", 0x13ce20, 0x13d220 },
    { L"Asset 15", 0x13d620, 0x13da20 },
    { L"Asset 16", 0x13de20, 0x13e220 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CAMBODIA_MAX2[] =
{
    { L"Asset 1", 0x136a20, 0x136e20 },
    { L"Asset 2", 0x137220, 0x137620 },
    { L"Asset 3", 0x137a20, 0x137e20 },
    { L"Asset 4", 0x138220, 0x138620 },
    { L"Asset 5", 0x138a20, 0x138e20 },
    { L"Asset 6", 0x139220, 0x139620 },
    { L"Asset 7", 0x139a20, 0x139e20 },
    { L"Asset 8", 0x13a220, 0x13a620 },
    { L"Asset 9", 0x13aa20, 0x13ae20 },
    { L"Asset 10", 0x13b220, 0x13b620 },
    { L"Asset 11", 0x13ba20, 0x13be20 },
    { L"Asset 12", 0x13c220, 0x13c620 },
    { L"Asset 13", 0x13ca20, 0x13ce20 },
    { L"Asset 14", 0x13d220, 0x13d620 },
    { L"Asset 15", 0x13da20, 0x13de20 },
    { L"Asset 16", 0x13e220, 0x13e620 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_CAMBODIA[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CAMBODIA, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CAMBODIA) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CAMBODIA_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CAMBODIA_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CAMBODIA2[] =
{
    { L"Asset 1", 0x137110, 0x137510 },
    { L"Asset 2", 0x137910, 0x137d10 },
    { L"Asset 3", 0x138110, 0x138510 },
    { L"Asset 4", 0x138910, 0x138d10 },
    { L"Asset 5", 0x139110, 0x139510 },
    { L"Asset 6", 0x139910, 0x139d10 },
    { L"Asset 7", 0x13a110, 0x13a510 },
    { L"Asset 8", 0x13a910, 0x13ad10 },
    { L"Asset 9", 0x13b110, 0x13b510 },
    { L"Asset 10", 0x13b910, 0x13bd10 },
    { L"Asset 11", 0x13c110, 0x13c510 },
    { L"Asset 12", 0x13c910, 0x13cd10 },
    { L"Asset 13", 0x13d110, 0x13d510 },
    { L"Asset 14", 0x13d910, 0x13dd10 },
    { L"Asset 15", 0x13e110, 0x13e510 },
    { L"Asset 16", 0x13e910, 0x13ed10 },
    { L"Asset 17", 0x13f110, 0x13f510 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_COMBODIA2_MAX2[] =
{
    { L"Asset 1", 0x137510, 0x137910 },
    { L"Asset 2", 0x137d10, 0x138110 },
    { L"Asset 3", 0x138510, 0x138910 },
    { L"Asset 4", 0x138d10, 0x139110 },
    { L"Asset 5", 0x139510, 0x139910 },
    { L"Asset 6", 0x139d10, 0x13a110 },
    { L"Asset 7", 0x13a510, 0x13a910 },
    { L"Asset 8", 0x13ad10, 0x13b110 },
    { L"Asset 9", 0x13b510, 0x13b910 },
    { L"Asset 10", 0x13bd10, 0x13c110 },
    { L"Asset 11", 0x13c510, 0x13c910 },
    { L"Asset 12", 0x13cd10, 0x13d110 },
    { L"Asset 13", 0x13d510, 0x13d910 },
    { L"Asset 14", 0x13dd10, 0x13e110 },
    { L"Asset 15", 0x13e510, 0x13e910 },
    { L"Asset 16", 0x13ed10, 0x13f110 },
    { L"Asset 17", 0x13f510, 0x13f910 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_CAMBODIA2[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CAMBODIA2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CAMBODIA2) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_COMBODIA2_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_COMBODIA2_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_TAIWAN[] =
{
    { L"Asset 1", 0x5e590, 0x5e990 },
    { L"Asset 2", 0x5ed90, 0x5f190 },
    { L"Asset 3", 0x5f590, 0x5f990 },
    { L"Asset 4", 0x5fd90, 0x60190 },
    { L"Asset 5", 0x60590, 0x60990 },
    { L"Asset 6", 0x60d90, 0x61190 },
    { L"Asset 7", 0x61590, 0x61990 },
    { L"Asset 8", 0x61d90, 0x62190 },
    { L"Asset 9", 0x62590, 0x62990 },
    { L"Asset 10", 0x62d90, 0x63190 },
    { L"Asset 11", 0x63590, 0x63990 },
    { L"Asset 12", 0x63d90, 0x64190 },
    { L"Asset 13", 0x64590, 0x64990 },
    { L"Asset 14", 0x64d90, 0x65190 },
    { L"Asset 15", 0x65590, 0x65990 },
    { L"Asset 16", 0x65d90, 0x66190 },
    { L"Asset 17", 0x66590, 0x66990 },
    { L"Asset 18", 0x66d90, 0x67190 },
    { L"Asset 19", 0x67590, 0x67990 },
    { L"Asset 20", 0x67d90, 0x68190 },
    { L"Asset 21", 0x68590, 0x68990 },
    { L"Asset 22", 0x68d90, 0x69190 },
    { L"Asset 23", 0x69590, 0x69990 },
    { L"Asset 24", 0x69d90, 0x6a190 },
    { L"Asset 25", 0x6a590, 0x6a990 },
    { L"Asset 26", 0x6ad90, 0x6b190 },
    { L"Asset 27", 0x6b590, 0x6b990 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_TAIWAN_MAX2[] =
{
    { L"Asset 1", 0x5e990, 0x5ed90 },
    { L"Asset 2", 0x5f190, 0x5f590 },
    { L"Asset 3", 0x5f990, 0x5fd90 },
    { L"Asset 4", 0x60190, 0x60590 },
    { L"Asset 5", 0x60990, 0x60d90 },
    { L"Asset 6", 0x61190, 0x61590 },
    { L"Asset 7", 0x61990, 0x61d90 },
    { L"Asset 8", 0x62190, 0x62590 },
    { L"Asset 9", 0x62990, 0x62d90 },
    { L"Asset 10", 0x63190, 0x63590 },
    { L"Asset 11", 0x63990, 0x63d90 },
    { L"Asset 12", 0x64190, 0x64590 },
    { L"Asset 13", 0x64990, 0x64d90 },
    { L"Asset 14", 0x65190, 0x65590 },
    { L"Asset 15", 0x65990, 0x65d90 },
    { L"Asset 16", 0x66190, 0x66590 },
    { L"Asset 17", 0x66990, 0x66d90 },
    { L"Asset 18", 0x67190, 0x67590 },
    { L"Asset 19", 0x67990, 0x67d90 },
    { L"Asset 20", 0x68190, 0x68590 },
    { L"Asset 21", 0x68990, 0x68d90 },
    { L"Asset 22", 0x69190, 0x69590 },
    { L"Asset 23", 0x69990, 0x69d90 },
    { L"Asset 24", 0x6a190, 0x6a590 },
    { L"Asset 25", 0x6a990, 0x6ad90 },
    { L"Asset 26", 0x6b190, 0x6b590 },
    { L"Asset 27", 0x6b990, 0x6bd90 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_TAIWAN[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_TAIWAN, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_TAIWAN) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_TAIWAN_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_TAIWAN_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_TAIWAN2[] =
{
    { L"Asset 1", 0x612a0, 0x616a0 },
    { L"Asset 2", 0x61aa0, 0x61ea0 },
    { L"Asset 3", 0x622a0, 0x626a0 },
    { L"Asset 4", 0x62aa0, 0x62ea0 },
    { L"Asset 5", 0x632a0, 0x636a0 },
    { L"Asset 6", 0x63aa0, 0x63ea0 },
    { L"Asset 7", 0x642a0, 0x646a0 },
    { L"Asset 8", 0x64aa0, 0x64ea0 },
    { L"Asset 9", 0x652a0, 0x656a0 },
    { L"Asset 10", 0x65aa0, 0x65ea0 },
    { L"Asset 11", 0x662a0, 0x666a0 },
    { L"Asset 12", 0x66aa0, 0x66ea0 },
    { L"Asset 13", 0x672a0, 0x676a0 },
    { L"Asset 14", 0x67aa0, 0x67ea0 },
    { L"Asset 15", 0x682a0, 0x686a0 },
    { L"Asset 16", 0x68aa0, 0x68ea0 },
    { L"Asset 17", 0x692a0, 0x696a0 },
    { L"Asset 18", 0x69aa0, 0x69ea0 },
    { L"Asset 19", 0x6a2a0, 0x6a6a0 },
    { L"Asset 20", 0x6aaa0, 0x6aea0 },
    { L"Asset 21", 0x6b2a0, 0x6b6a0 },
    { L"Asset 22", 0x6baa0, 0x6bea0 },
    { L"Asset 23", 0x6c2a0, 0x6c6a0 },
    { L"Asset 24", 0x6caa0, 0x6cea0 },
    { L"Asset 25", 0x6d2a0, 0x6d6a0 },
    { L"Asset 26", 0x6daa0, 0x6dea0 },
    { L"Asset 27", 0x6e2a0, 0x6e6a0 },
    { L"Asset 28", 0x6eaa0, 0x6eea0 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_TAIWAN2_MAX2[] =
{
    { L"Asset 1", 0x616a0, 0x61aa0 },
    { L"Asset 2", 0x61ea0, 0x622a0 },
    { L"Asset 3", 0x626a0, 0x62aa0 },
    { L"Asset 4", 0x62ea0, 0x632a0 },
    { L"Asset 5", 0x636a0, 0x63aa0 },
    { L"Asset 6", 0x63ea0, 0x642a0 },
    { L"Asset 7", 0x646a0, 0x64aa0 },
    { L"Asset 8", 0x64ea0, 0x652a0 },
    { L"Asset 9", 0x656a0, 0x65aa0 },
    { L"Asset 10", 0x65ea0, 0x662a0 },
    { L"Asset 11", 0x666a0, 0x66aa0 },
    { L"Asset 12", 0x66ea0, 0x672a0 },
    { L"Asset 13", 0x676a0, 0x67aa0 },
    { L"Asset 14", 0x67ea0, 0x682a0 },
    { L"Asset 15", 0x686a0, 0x68aa0 },
    { L"Asset 16", 0x68ea0, 0x692a0 },
    { L"Asset 17", 0x696a0, 0x69aa0 },
    { L"Asset 18", 0x69ea0, 0x6a2a0 },
    { L"Asset 19", 0x6a6a0, 0x6aaa0 },
    { L"Asset 20", 0x6aea0, 0x6b2a0 },
    { L"Asset 21", 0x6b6a0, 0x6baa0 },
    { L"Asset 22", 0x6bea0, 0x6c2a0 },
    { L"Asset 23", 0x6c6a0, 0x6caa0 },
    { L"Asset 24", 0x6cea0, 0x6d2a0 },
    { L"Asset 25", 0x6d6a0, 0x6daa0 },
    { L"Asset 26", 0x6dea0, 0x6e2a0 },
    { L"Asset 27", 0x6e6a0, 0x6eaa0 },
    { L"Asset 28", 0x6eea0, 0x6f2a0 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_TAIWAN2[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_TAIWAN2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_TAIWAN2) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_TAIWAN2_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_TAIWAN2_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_ITALY[] =
{
    { L"Asset 1", 0x95ca0, 0x960a0 },
    { L"Asset 2", 0x964a0, 0x968a0 },
    { L"Asset 3", 0x96ca0, 0x970a0 },
    { L"Asset 4", 0x974a0, 0x978a0 },
    { L"Asset 5", 0x97ca0, 0x980a0 },
    { L"Asset 6", 0x984a0, 0x988a0 },
    { L"Asset 7", 0x98ca0, 0x990a0 },
    { L"Asset 8", 0x994a0, 0x998a0 },
    { L"Asset 9", 0x99ca0, 0x9a0a0 },
    { L"Asset 10", 0x9a4a0, 0x9a8a0 },
    { L"Asset 11", 0x9aca0, 0x9b0a0 },
    { L"Asset 12", 0x9b4a0, 0x9b8a0 },
    { L"Asset 13", 0x9bca0, 0x9c0a0 },
    { L"Asset 14", 0x9c4a0, 0x9c8a0 },
    { L"Asset 15", 0x9cca0, 0x9d0a0 },
    { L"Asset 16", 0x9d4a0, 0x9d8a0 },
    { L"Asset 17", 0x9dca0, 0x9e0a0 },
    { L"Asset 18", 0x9e4a0, 0x9e8a0 },
    { L"Asset 19", 0x9eca0, 0x9f0a0 },
    { L"Asset 20", 0x9f4a0, 0x9f8a0 },
    { L"Asset 21", 0x9fca0, 0xa00a0 },
    { L"Asset 22", 0xa04a0, 0xa08a0 },
    { L"Asset 23", 0xa0ca0, 0xa10a0 },
    { L"Asset 24", 0xa14a0, 0xa18a0 },
    { L"Asset 25", 0xa1ca0, 0xa20a0 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_ITALY_MAX2[] =
{
    { L"Asset 1", 0x960a0, 0x964a0 },
    { L"Asset 2", 0x968a0, 0x96ca0 },
    { L"Asset 3", 0x970a0, 0x974a0 },
    { L"Asset 4", 0x978a0, 0x97ca0 },
    { L"Asset 5", 0x980a0, 0x984a0 },
    { L"Asset 6", 0x988a0, 0x98ca0 },
    { L"Asset 7", 0x990a0, 0x994a0 },
    { L"Asset 8", 0x998a0, 0x99ca0 },
    { L"Asset 9", 0x9a0a0, 0x9a4a0 },
    { L"Asset 10", 0x9a8a0, 0x9aca0 },
    { L"Asset 11", 0x9b0a0, 0x9b4a0 },
    { L"Asset 12", 0x9b8a0, 0x9bca0 },
    { L"Asset 13", 0x9c0a0, 0x9c4a0 },
    { L"Asset 14", 0x9c8a0, 0x9cca0 },
    { L"Asset 15", 0x9d0a0, 0x9d4a0 },
    { L"Asset 16", 0x9d8a0, 0x9dca0 },
    { L"Asset 17", 0x9e0a0, 0x9e4a0 },
    { L"Asset 18", 0x9e8a0, 0x9eca0 },
    { L"Asset 19", 0x9f0a0, 0x9f4a0 },
    { L"Asset 20", 0x9f8a0, 0x9fca0 },
    { L"Asset 21", 0xa00a0, 0xa04a0 },
    { L"Asset 22", 0xa08a0, 0xa0ca0 },
    { L"Asset 23", 0xa10a0, 0xa14a0 },
    { L"Asset 24", 0xa18a0, 0xa1ca0 },
    { L"Asset 25", 0xa20a0, 0xa24a0 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_ITALY[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_ITALY, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_ITALY) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_ITALY_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_ITALY_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_ITALY2[] =
{
    { L"Asset 1", 0xa4860, 0xa4c60 },
    { L"Asset 2", 0xa5060, 0xa5460 },
    { L"Asset 3", 0xa5860, 0xa5c60 },
    { L"Asset 4", 0xa6060, 0xa6460 },
    { L"Asset 5", 0xa6860, 0xa6c60 },
    { L"Asset 6", 0xa7060, 0xa7460 },
    { L"Asset 7", 0xa7860, 0xa7c60 },
    { L"Asset 8", 0xa8060, 0xa8460 },
    { L"Asset 9", 0xa8860, 0xa8c60 },
    { L"Asset 10", 0xa9060, 0xa9460 },
    { L"Asset 11", 0xa9860, 0xa9c60 },
    { L"Asset 12", 0xaa060, 0xaa460 },
    { L"Asset 13", 0xaa860, 0xaac60 },
    { L"Asset 14", 0xab060, 0xab460 },
    { L"Asset 15", 0xab860, 0xabc60 },
    { L"Asset 16", 0xac060, 0xac460 },
    { L"Asset 17", 0xac860, 0xacc60 },
    { L"Asset 18", 0xad060, 0xad460 },
    { L"Asset 19", 0xad860, 0xadc60 },
    { L"Asset 20", 0xae060, 0xae460 },
    { L"Asset 21", 0xae860, 0xaec60 },
    { L"Asset 22", 0xaf060, 0xaf460 },
    { L"Asset 23", 0xaf860, 0xafc60 },
    { L"Asset 24", 0xb0060, 0xb0460 },
    { L"Asset 25", 0xb0860, 0xb0c60 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_ITALY2_MAX2[] =
{
    { L"Asset 1", 0xa4c60, 0xa5060 },
    { L"Asset 2", 0xa5460, 0xa5860 },
    { L"Asset 3", 0xa5c60, 0xa6060 },
    { L"Asset 4", 0xa6460, 0xa6860 },
    { L"Asset 5", 0xa6c60, 0xa7060 },
    { L"Asset 6", 0xa7460, 0xa7860 },
    { L"Asset 7", 0xa7c60, 0xa8060 },
    { L"Asset 8", 0xa8460, 0xa8860 },
    { L"Asset 9", 0xa8c60, 0xa9060 },
    { L"Asset 10", 0xa9460, 0xa9860 },
    { L"Asset 11", 0xa9c60, 0xaa060 },
    { L"Asset 12", 0xaa460, 0xaa860 },
    { L"Asset 13", 0xaac60, 0xab060 },
    { L"Asset 14", 0xab460, 0xab860 },
    { L"Asset 15", 0xabc60, 0xac060 },
    { L"Asset 16", 0xac460, 0xac860 },
    { L"Asset 17", 0xacc60, 0xad060 },
    { L"Asset 18", 0xad460, 0xad860 },
    { L"Asset 19", 0xadc60, 0xae060 },
    { L"Asset 20", 0xae460, 0xae860 },
    { L"Asset 21", 0xaec60, 0xaf060 },
    { L"Asset 22", 0xaf460, 0xaf860 },
    { L"Asset 23", 0xafc60, 0xb0060 },
    { L"Asset 24", 0xb0460, 0xb0860 },
    { L"Asset 25", 0xb0c60, 0xb1060 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_ITALY2[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_ITALY2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_ITALY2) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_ITALY2_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_ITALY2_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_ITALY3[] =
{
    { L"Asset 1", 0x5e540, 0x5e940 },
    { L"Asset 2", 0x5ed40, 0x5f140 },
    { L"Asset 3", 0x5f540, 0x5f940 },
    { L"Asset 4", 0x5fd40, 0x60140 },
    { L"Asset 5", 0x60540, 0x60940 },
    { L"Asset 6", 0x60d40, 0x61140 },
    { L"Asset 7", 0x61540, 0x61940 },
    { L"Asset 8", 0x61d40, 0x62140 },
    { L"Asset 9", 0x62540, 0x62940 },
    { L"Asset 10", 0x62d40, 0x63140 },
    { L"Asset 11", 0x63540, 0x63940 },
    { L"Asset 12", 0x63d40, 0x64140 },
    { L"Asset 13", 0x64540, 0x64940 },
    { L"Asset 14", 0x64d40, 0x65140 },
    { L"Asset 15", 0x65540, 0x65940 },
    { L"Asset 16", 0x65d40, 0x66140 },
    { L"Asset 17", 0x66540, 0x66940 },
    { L"Asset 18", 0x66d40, 0x67140 },
    { L"Asset 19", 0x67540, 0x67940 },
    { L"Asset 20", 0x67d40, 0x68140 },
    { L"Asset 21", 0x68540, 0x68940 },
    { L"Asset 22", 0x68d40, 0x69140 },
    { L"Asset 23", 0x69540, 0x69940 },
    { L"Asset 24", 0x69d40, 0x6a140 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_ITALY3_MAX2[] =
{
    { L"Asset 1", 0x5e940, 0x5ed40 },
    { L"Asset 2", 0x5f140, 0x5f540 },
    { L"Asset 3", 0x5f940, 0x5fd40 },
    { L"Asset 4", 0x60140, 0x60540 },
    { L"Asset 5", 0x60940, 0x60d40 },
    { L"Asset 6", 0x61140, 0x61540 },
    { L"Asset 7", 0x61940, 0x61d40 },
    { L"Asset 8", 0x62140, 0x62540 },
    { L"Asset 9", 0x62940, 0x62d40 },
    { L"Asset 10", 0x63140, 0x63540 },
    { L"Asset 11", 0x63940, 0x63d40 },
    { L"Asset 12", 0x64140, 0x64540 },
    { L"Asset 13", 0x64940, 0x64d40 },
    { L"Asset 14", 0x65140, 0x65540 },
    { L"Asset 15", 0x65940, 0x65d40 },
    { L"Asset 16", 0x66140, 0x66540 },
    { L"Asset 17", 0x66940, 0x66d40 },
    { L"Asset 18", 0x67140, 0x67540 },
    { L"Asset 19", 0x67940, 0x67d40 },
    { L"Asset 20", 0x68140, 0x68540 },
    { L"Asset 21", 0x68940, 0x68d40 },
    { L"Asset 22", 0x69140, 0x69540 },
    { L"Asset 23", 0x69940, 0x69d40 },
    { L"Asset 24", 0x6a140, 0x6a540 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_ITALY3[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_ITALY3, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_ITALY3) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_ITALY3_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_ITALY3_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_GREECE[] =
{
    { L"Asset 1", 0x88940, 0x88d40 },
    { L"Asset 2", 0x89140, 0x89540 },
    { L"Asset 3", 0x89940, 0x89d40 },
    { L"Asset 4", 0x8a140, 0x8a540 },
    { L"Asset 5", 0x8a940, 0x8ad40 },
    { L"Asset 6", 0x8b140, 0x8b540 },
    { L"Asset 7", 0x8b940, 0x8bd40 },
    { L"Asset 8", 0x8c140, 0x8c540 },
    { L"Asset 9", 0x8c940, 0x8cd40 },
    { L"Asset 10", 0x8d140, 0x8d540 },
    { L"Asset 11", 0x8d940, 0x8dd40 },
    { L"Asset 12", 0x8e140, 0x8e540 },
    { L"Asset 13", 0x8e940, 0x8ed40 },
    { L"Asset 14", 0x8f140, 0x8f540 },
    { L"Asset 15", 0x8f940, 0x8fd40 },
    { L"Asset 16", 0x90140, 0x90540 },
    { L"Asset 17", 0x90940, 0x90d40 },
    { L"Asset 18", 0x91140, 0x91540 },
    { L"Asset 19", 0x91940, 0x91d40 },
    { L"Asset 20", 0x92140, 0x92540 },
    { L"Asset 21", 0x92940, 0x92d40 },
    { L"Asset 22", 0x93140, 0x93540 },
    { L"Asset 23", 0x93940, 0x93d40 },
    { L"Asset 24", 0x94140, 0x94540 },
    { L"Asset 25", 0x94940, 0x94d40 },
    { L"Asset 26", 0x95140, 0x95540 },
    { L"Asset 27", 0x95940, 0x95d40 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_GREECE_MAX2[] =
{
    { L"Asset 1", 0x88d40, 0x89140 },
    { L"Asset 2", 0x89540, 0x89940 },
    { L"Asset 3", 0x89d40, 0x8a140 },
    { L"Asset 4", 0x8a540, 0x8a940 },
    { L"Asset 5", 0x8ad40, 0x8b140 },
    { L"Asset 6", 0x8b540, 0x8b940 },
    { L"Asset 7", 0x8bd40, 0x8c140 },
    { L"Asset 8", 0x8c540, 0x8c940 },
    { L"Asset 9", 0x8cd40, 0x8d140 },
    { L"Asset 10", 0x8d540, 0x8d940 },
    { L"Asset 11", 0x8dd40, 0x8e140 },
    { L"Asset 12", 0x8e540, 0x8e940 },
    { L"Asset 13", 0x8ed40, 0x8f140 },
    { L"Asset 14", 0x8f540, 0x8f940 },
    { L"Asset 15", 0x8fd40, 0x90140 },
    { L"Asset 16", 0x90540, 0x90940 },
    { L"Asset 17", 0x90d40, 0x91140 },
    { L"Asset 18", 0x91540, 0x91940 },
    { L"Asset 19", 0x91d40, 0x92140 },
    { L"Asset 20", 0x92540, 0x92940 },
    { L"Asset 21", 0x92d40, 0x93140 },
    { L"Asset 22", 0x93540, 0x93940 },
    { L"Asset 23", 0x93d40, 0x94140 },
    { L"Asset 24", 0x94540, 0x94940 },
    { L"Asset 25", 0x94d40, 0x95140 },
    { L"Asset 26", 0x95540, 0x95940 },
    { L"Asset 27", 0x95d40, 0x96140 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_GREECE[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_GREECE, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_GREECE) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_GREECE_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_GREECE_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_NEOGEO[] =
{
    { L"Asset 1", 0x918b0, 0x91cb0 },
    { L"Asset 2", 0x920b0, 0x924b0 },
    { L"Asset 3", 0x928b0, 0x92cb0 },
    { L"Asset 4", 0x930b0, 0x934b0 },
    { L"Asset 5", 0x938b0, 0x93cb0 },
    { L"Asset 6", 0x940b0, 0x944b0 },
    { L"Asset 7", 0x948b0, 0x94cb0 },
    { L"Asset 8", 0x950b0, 0x954b0 },
    { L"Asset 9", 0x958b0, 0x95cb0 },
    { L"Asset 10", 0x960b0, 0x964b0 },
    { L"Asset 11", 0x968b0, 0x96cb0 },
    { L"Asset 12", 0x970b0, 0x974b0 },
    { L"Asset 13", 0x978b0, 0x97cb0 },
    { L"Asset 14", 0x980b0, 0x984b0 },
    { L"Asset 15", 0x988b0, 0x98cb0 },
    { L"Asset 16", 0x990b0, 0x994b0 },
    { L"Asset 17", 0x998b0, 0x99cb0 },
    { L"Asset 18", 0x9a0b0, 0x9a4b0 },
    { L"Asset 19", 0x9a8b0, 0x9acb0 },
    { L"Asset 20", 0x9b0b0, 0x9b4b0 },
    { L"Asset 21", 0x9b8b0, 0x9bcb0 },
    { L"Asset 22", 0x9c0b0, 0x9c4b0 },
    { L"Asset 23", 0x9c8b0, 0x9ccb0 },
    { L"Asset 24", 0x9d0b0, 0x9d4b0 },
    { L"Asset 25", 0x9d8b0, 0x9dcb0 },
    { L"Asset 26", 0x9e0b0, 0x9e4b0 },
    { L"Asset 27", 0x9e8b0, 0x9ecb0 },
    { L"Asset 28", 0x9f0b0, 0x9f4b0 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_NEOGEO_MAX2[] =
{
    { L"Asset 1", 0x91cb0, 0x920b0 },
    { L"Asset 2", 0x924b0, 0x928b0 },
    { L"Asset 3", 0x92cb0, 0x930b0 },
    { L"Asset 4", 0x934b0, 0x938b0 },
    { L"Asset 5", 0x93cb0, 0x940b0 },
    { L"Asset 6", 0x944b0, 0x948b0 },
    { L"Asset 7", 0x94cb0, 0x950b0 },
    { L"Asset 8", 0x954b0, 0x958b0 },
    { L"Asset 9", 0x95cb0, 0x960b0 },
    { L"Asset 10", 0x964b0, 0x968b0 },
    { L"Asset 11", 0x96cb0, 0x970b0 },
    { L"Asset 12", 0x974b0, 0x978b0 },
    { L"Asset 13", 0x97cb0, 0x980b0 },
    { L"Asset 14", 0x984b0, 0x988b0 },
    { L"Asset 15", 0x98cb0, 0x990b0 },
    { L"Asset 16", 0x994b0, 0x998b0 },
    { L"Asset 17", 0x99cb0, 0x9a0b0 },
    { L"Asset 18", 0x9a4b0, 0x9a8b0 },
    { L"Asset 19", 0x9acb0, 0x9b0b0 },
    { L"Asset 20", 0x9b4b0, 0x9b8b0 },
    { L"Asset 21", 0x9bcb0, 0x9c0b0 },
    { L"Asset 22", 0x9c4b0, 0x9c8b0 },
    { L"Asset 23", 0x9ccb0, 0x9d0b0 },
    { L"Asset 24", 0x9d4b0, 0x9d8b0 },
    { L"Asset 25", 0x9dcb0, 0x9e0b0 },
    { L"Asset 26", 0x9e4b0, 0x9e8b0 },
    { L"Asset 27", 0x9ecb0, 0x9f0b0 },
    { L"Asset 28", 0x9f4b0, 0x9f8b0 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_NEOGEO[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_NEOGEO, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_NEOGEO) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_NEOGEO_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_NEOGEO_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_NEOGEO2[] =
{
    { L"Asset 1", 0x6b8f0, 0x6bcf0 },
    { L"Asset 2", 0x6c0f0, 0x6c4f0 },
    { L"Asset 3", 0x6c8f0, 0x6ccf0 },
    { L"Asset 4", 0x6d0f0, 0x6d4f0 },
    { L"Asset 5", 0x6d8f0, 0x6dcf0 },
    { L"Asset 6", 0x6e0f0, 0x6e4f0 },
    { L"Asset 7", 0x6e8f0, 0x6ecf0 },
    { L"Asset 8", 0x6f0f0, 0x6f4f0 },
    { L"Asset 9", 0x6f8f0, 0x6fcf0 },
    { L"Asset 10", 0x700f0, 0x704f0 },
    { L"Asset 11", 0x708f0, 0x70cf0 },
    { L"Asset 12", 0x710f0, 0x714f0 },
    { L"Asset 13", 0x718f0, 0x71cf0 },
    { L"Asset 14", 0x720f0, 0x724f0 },
    { L"Asset 15", 0x728f0, 0x72cf0 },
    { L"Asset 16", 0x730f0, 0x734f0 },
    { L"Asset 17", 0x738f0, 0x73cf0 },
    { L"Asset 18", 0x740f0, 0x744f0 },
    { L"Asset 19", 0x748f0, 0x74cf0 },
    { L"Asset 20", 0x750f0, 0x754f0 },
    { L"Asset 21", 0x758f0, 0x75cf0 },
    { L"Asset 22", 0x760f0, 0x764f0 },
    { L"Asset 23", 0x768f0, 0x76cf0 },
    { L"Asset 24", 0x770f0, 0x774f0 },
    { L"Asset 25", 0x778f0, 0x77cf0 },
    { L"Asset 26", 0x780f0, 0x784f0 },
    { L"Asset 27", 0x788f0, 0x78cf0 },
    { L"Asset 28", 0x790f0, 0x794f0 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_NEOGEO2_MAX2[] =
{
    { L"Asset 1", 0x6bcf0, 0x6c0f0 },
    { L"Asset 2", 0x6c4f0, 0x6c8f0 },
    { L"Asset 3", 0x6ccf0, 0x6d0f0 },
    { L"Asset 4", 0x6d4f0, 0x6d8f0 },
    { L"Asset 5", 0x6dcf0, 0x6e0f0 },
    { L"Asset 6", 0x6e4f0, 0x6e8f0 },
    { L"Asset 7", 0x6ecf0, 0x6f0f0 },
    { L"Asset 8", 0x6f4f0, 0x6f8f0 },
    { L"Asset 9", 0x6fcf0, 0x700f0 },
    { L"Asset 10", 0x704f0, 0x708f0 },
    { L"Asset 11", 0x70cf0, 0x710f0 },
    { L"Asset 12", 0x714f0, 0x718f0 },
    { L"Asset 13", 0x71cf0, 0x720f0 },
    { L"Asset 14", 0x724f0, 0x728f0 },
    { L"Asset 15", 0x72cf0, 0x730f0 },
    { L"Asset 16", 0x734f0, 0x738f0 },
    { L"Asset 17", 0x73cf0, 0x740f0 },
    { L"Asset 18", 0x744f0, 0x748f0 },
    { L"Asset 19", 0x74cf0, 0x750f0 },
    { L"Asset 20", 0x754f0, 0x758f0 },
    { L"Asset 21", 0x75cf0, 0x760f0 },
    { L"Asset 22", 0x764f0, 0x768f0 },
    { L"Asset 23", 0x76cf0, 0x770f0 },
    { L"Asset 24", 0x774f0, 0x778f0 },
    { L"Asset 25", 0x77cf0, 0x780f0 },
    { L"Asset 26", 0x784f0, 0x788f0 },
    { L"Asset 27", 0x78cf0, 0x790f0 },
    { L"Asset 28", 0x794f0, 0x798f0 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_NEOGEO2[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_NEOGEO2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_NEOGEO2) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_NEOGEO2_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_NEOGEO2_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CLONE[] =
{
    { L"Asset 1", 0xb45c0, 0xb4600 },
    { L"Asset 2", 0xb4640, 0xb4680 },
    { L"Asset 3", 0xb46c0, 0xb4ac0 },
    { L"Asset 4", 0xb4ec0, 0xb4f00 },
    { L"Asset 5", 0xb4f40, 0xb5340 },
    { L"Asset 6", 0xb5740, 0xb5b40 },
    { L"Asset 7", 0xb5f40, 0xb6340 },
    { L"Asset 8", 0xb6740, 0xb6780 },
    { L"Asset 9", 0xb67c0, 0xb6800 },
    { L"Asset 10", 0xb6840, 0xb6c40 },
    { L"Asset 11", 0xb7040, 0xb7440 },
    { L"Asset 12", 0xb7840, 0xb7c40 },
    { L"Asset 13", 0xb8040, 0xb8440 },
    { L"Asset 14", 0xb8840, 0xb8c40 },
    { L"Asset 15", 0xb9040, 0xb9440 },
    { L"Asset 16", 0xb9840, 0xb9c40 },
    { L"Asset 17", 0xba040, 0xba440 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CLONE_MAX2[] =
{
    { L"Asset 1", 0xb4600, 0xb4640 },
    { L"Asset 2", 0xb4680, 0xb46c0 },
    { L"Asset 3", 0xb4ac0, 0xb4ec0 },
    { L"Asset 4", 0xb4f00, 0xb4f40 },
    { L"Asset 5", 0xb5340, 0xb5740 },
    { L"Asset 6", 0xb5b40, 0xb5f40 },
    { L"Asset 7", 0xb6340, 0xb6740 },
    { L"Asset 8", 0xb6780, 0xb67c0 },
    { L"Asset 9", 0xb6800, 0xb6840 },
    { L"Asset 10", 0xb6c40, 0xb7040 },
    { L"Asset 11", 0xb7440, 0xb7840 },
    { L"Asset 12", 0xb7c40, 0xb8040 },
    { L"Asset 13", 0xb8440, 0xb8840 },
    { L"Asset 14", 0xb8c40, 0xb9040 },
    { L"Asset 15", 0xb9440, 0xb9840 },
    { L"Asset 16", 0xb9c40, 0xba040 },
    { L"Asset 17", 0xba440, 0xba840 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_CLONE[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CLONE, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CLONE) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CLONE_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CLONE_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CLONE2[] =
{
    { L"Asset 1", 0x79eb0, 0x79ef0 },
    { L"Asset 2", 0x79f30, 0x79f70 },
    { L"Asset 3", 0x79fb0, 0x79ff0 },
    { L"Asset 4", 0x7a030, 0x7a070 },
    { L"Asset 5", 0x7a0b0, 0x7a4b0 },
    { L"Asset 6", 0x7a8b0, 0x7acb0 },
    { L"Asset 7", 0x7b0b0, 0x7b4b0 },
    { L"Asset 8", 0x7b8b0, 0x7b8f0 },
    { L"Asset 9", 0x7b930, 0x7bd30 },
    { L"Asset 10", 0x7c130, 0x7c530 },
    { L"Asset 11", 0x7c930, 0x7cd30 },
    { L"Asset 12", 0x7d130, 0x7d530 },
    { L"Asset 13", 0x7d930, 0x7dd30 },
    { L"Asset 14", 0x7e130, 0x7e530 },
    { L"Asset 15", 0x7e930, 0x7ed30 },
    { L"Asset 16", 0x7f130, 0x7f530 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CLONE2_MAX2[] =
{
    { L"Asset 1", 0x79ef0, 0x79f30 },
    { L"Asset 2", 0x79f70, 0x79fb0 },
    { L"Asset 3", 0x79ff0, 0x7a030 },
    { L"Asset 4", 0x7a070, 0x7a0b0 },
    { L"Asset 5", 0x7a4b0, 0x7a8b0 },
    { L"Asset 6", 0x7acb0, 0x7b0b0 },
    { L"Asset 7", 0x7b4b0, 0x7b8b0 },
    { L"Asset 8", 0x7b8f0, 0x7b930 },
    { L"Asset 9", 0x7bd30, 0x7c130 },
    { L"Asset 10", 0x7c530, 0x7c930 },
    { L"Asset 11", 0x7cd30, 0x7d130 },
    { L"Asset 12", 0x7d530, 0x7d930 },
    { L"Asset 13", 0x7dd30, 0x7e130 },
    { L"Asset 14", 0x7e530, 0x7e930 },
    { L"Asset 15", 0x7ed30, 0x7f130 },
    { L"Asset 16", 0x7f530, 0x7f930 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_CLONE2[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CLONE2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CLONE2) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CLONE2_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CLONE2_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_RUGAL[] =
{
    { L"Asset 1", 0x71360, 0x71760 },
    { L"Asset 2", 0x71b60, 0x71f60 },
    { L"Asset 3", 0x72360, 0x72760 },
    { L"Asset 4", 0x72b60, 0x72f60 },
    { L"Asset 5", 0x73360, 0x73760 },
    { L"Asset 6", 0x73b60, 0x73f60 },
    { L"Asset 7", 0x74360, 0x743a0 },
    { L"Asset 8", 0x743e0, 0x74420 },
    { L"Asset 9", 0x74460, 0x744a0 },
    { L"Asset 10", 0x744e0, 0x74520 },
    { L"Asset 11", 0x74560, 0x745a0 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_RUGAL_MAX2[] =
{
    { L"Asset 1", 0x71760, 0x71b60 },
    { L"Asset 2", 0x71f60, 0x72360 },
    { L"Asset 3", 0x72760, 0x72b60 },
    { L"Asset 4", 0x72f60, 0x73360 },
    { L"Asset 5", 0x73760, 0x73b60 },
    { L"Asset 6", 0x73f60, 0x74360 },
    { L"Asset 7", 0x743a0, 0x743e0 },
    { L"Asset 8", 0x74420, 0x74460 },
    { L"Asset 9", 0x744a0, 0x744e0 },
    { L"Asset 10", 0x74520, 0x74560 },
    { L"Asset 11", 0x745a0, 0x745e0 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_RUGAL[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_RUGAL, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_RUGAL) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_RUGAL_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_RUGAL_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_KRIZALID[] =
{
    { L"Asset 1", 0x1edc90, 0x1edcd0 },
    { L"Asset 2", 0x1edd10, 0x1edd50 },
    { L"Asset 3", 0x1edd90, 0x1eddd0 },
    { L"Asset 4", 0x1ede10, 0x1ede50 },
    { L"Asset 5", 0x1ede90, 0x1eded0 },
    { L"Asset 6", 0x1edf10, 0x1edf50 },
    { L"Asset 7", 0x1edf90, 0x1edfd0 },
    { L"Asset 8", 0x1ee010, 0x1ee050 },
    { L"Asset 9", 0x1ee090, 0x1ee0d0 },
    { L"Asset 10", 0x1ee110, 0x1ee510 },
    { L"Asset 11", 0x1ee910, 0x1eed10 },
    { L"Asset 12", 0x1ef110, 0x1ef510 },
    { L"Asset 13", 0x1ef910, 0x1ef950 },
    { L"Asset 14", 0x1ef990, 0x1ef9d0 },
    { L"Asset 15", 0x1efa10, 0x1efa50 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_KRIZALID_MAX2[] =
{
    { L"Asset 1", 0x1edcd0, 0x1edd10 },
    { L"Asset 2", 0x1edd50, 0x1edd90 },
    { L"Asset 3", 0x1eddd0, 0x1ede10 },
    { L"Asset 4", 0x1ede50, 0x1ede90 },
    { L"Asset 5", 0x1eded0, 0x1edf10 },
    { L"Asset 6", 0x1edf50, 0x1edf90 },
    { L"Asset 7", 0x1edfd0, 0x1ee010 },
    { L"Asset 8", 0x1ee050, 0x1ee090 },
    { L"Asset 9", 0x1ee0d0, 0x1ee110 },
    { L"Asset 10", 0x1ee510, 0x1ee910 },
    { L"Asset 11", 0x1eed10, 0x1ef110 },
    { L"Asset 12", 0x1ef510, 0x1ef910 },
    { L"Asset 13", 0x1ef950, 0x1ef990 },
    { L"Asset 14", 0x1ef9d0, 0x1efa10 },
    { L"Asset 15", 0x1efa50, 0x1efa90 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_KRIZALID[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_KRIZALID, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_KRIZALID) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_KRIZALID_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_KRIZALID_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CLONEZERO[] =
{
    { L"Asset 1", 0x6fc00, 0x70000 },
    { L"Asset 2", 0x70400, 0x70800 },
    { L"Asset 3", 0x70c00, 0x71000 },
    { L"Asset 4", 0x71400, 0x71800 },
    { L"Asset 5", 0x71c00, 0x72000 },
    { L"Asset 6", 0x72400, 0x72800 },
    { L"Asset 7", 0x72c00, 0x73000 },
    { L"Asset 8", 0x73400, 0x73800 },
    { L"Asset 9", 0x73c00, 0x74000 },
    { L"Asset 10", 0x74400, 0x74800 },
    { L"Asset 11", 0x74c00, 0x75000 },
    { L"Asset 12", 0x75400, 0x75800 },
    { L"Asset 13", 0x75c00, 0x76000 },
    { L"Asset 14", 0x76400, 0x76800 },
    { L"Asset 15", 0x76c00, 0x77000 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_CLONEZERO_MAX2[] =
{
    { L"Asset 1", 0x70000, 0x70400 },
    { L"Asset 2", 0x70800, 0x70c00 },
    { L"Asset 3", 0x71000, 0x71400 },
    { L"Asset 4", 0x71800, 0x71c00 },
    { L"Asset 5", 0x72000, 0x72400 },
    { L"Asset 6", 0x72800, 0x72c00 },
    { L"Asset 7", 0x73000, 0x73400 },
    { L"Asset 8", 0x73800, 0x73c00 },
    { L"Asset 9", 0x74000, 0x74400 },
    { L"Asset 10", 0x74800, 0x74c00 },
    { L"Asset 11", 0x75000, 0x75400 },
    { L"Asset 12", 0x75800, 0x75c00 },
    { L"Asset 13", 0x76000, 0x76400 },
    { L"Asset 14", 0x76800, 0x76c00 },
    { L"Asset 15", 0x77000, 0x77400 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_CLONEZERO[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CLONEZERO, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CLONEZERO) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_CLONEZERO_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_CLONEZERO_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_ORIGINALZERO[] =
{
    { L"Asset 1", 0xf2120, 0xf2520 },
    { L"Asset 2", 0xf2920, 0xf2d20 },
    { L"Asset 3", 0xf3120, 0xf3520 },
    { L"Asset 4", 0xf3920, 0xf3d20 },
    { L"Asset 5", 0xf4120, 0xf4520 },
    { L"Asset 6", 0xf4920, 0xf4d20 },
    { L"Asset 7", 0xf5120, 0xf5520 },
    { L"Asset 8", 0xf5920, 0xf5d20 },
    { L"Asset 9", 0xf6120, 0xf6520 },
    { L"Asset 10", 0xf6920, 0xf6d20 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_ORIGINALZERO_MAX2[] =
{
    { L"Asset 1", 0xf2520, 0xf2920 },
    { L"Asset 2", 0xf2d20, 0xf3120 },
    { L"Asset 3", 0xf3520, 0xf3920 },
    { L"Asset 4", 0xf3d20, 0xf4120 },
    { L"Asset 5", 0xf4520, 0xf4920 },
    { L"Asset 6", 0xf4d20, 0xf5120 },
    { L"Asset 7", 0xf5520, 0xf5920 },
    { L"Asset 8", 0xf5d20, 0xf6120 },
    { L"Asset 9", 0xf6520, 0xf6920 },
    { L"Asset 10", 0xf6d20, 0xf7120 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_ORIGINALZERO[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_ORIGINALZERO, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_ORIGINALZERO) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_ORIGINALZERO_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_ORIGINALZERO_MAX2) },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_IGNIZ[] =
{
    { L"Asset 1", 0x7a280, 0x7a680 },
    { L"Asset 2", 0x7aa80, 0x7ae80 },
    { L"Asset 3", 0x7b280, 0x7b680 },
    { L"Asset 4", 0x7ba80, 0x7be80 },
    { L"Asset 5", 0x7c280, 0x7c680 },
    { L"Asset 6", 0x7ca80, 0x7ce80 },
    { L"Asset 7", 0x7d280, 0x7d680 },
    { L"Asset 8", 0x7da80, 0x7de80 },
    { L"Asset 9", 0x7e280, 0x7e680 },
    { L"Asset 10", 0x7ea80, 0x7ee80 },
    { L"Asset 11", 0x7f280, 0x7f680 },
    { L"Asset 12", 0x7fa80, 0x7fe80 },
    { L"Asset 13", 0x80280, 0x80680 },
    { L"Asset 14", 0x80a80, 0x80e80 },
    { L"Asset 15", 0x81280, 0x81680 },
    { L"Asset 16", 0x81a80, 0x81e80 },
    { L"Asset 17", 0x82280, 0x82680 },
    { L"Asset 18", 0x82a80, 0x82e80 },
    { L"Asset 19", 0x83280, 0x83680 },
    { L"Asset 20", 0x83a80, 0x83e80 },
    { L"Asset 21", 0x84280, 0x84680 },
    { L"Asset 22", 0x84a80, 0x84e80 },
    { L"Asset 23", 0x85280, 0x85680 },
    { L"Asset 24", 0x85a80, 0x85e80 },
    { L"Asset 25", 0x86280, 0x86680 },
    { L"Asset 26", 0x86a80, 0x86e80 },
};

const sGame_PaletteDataset KOF02UM_PS2_STAGE_PALETTES_IGNIZ_MAX2[] =
{
    { L"Asset 1", 0x7a680, 0x7aa80 },
    { L"Asset 2", 0x7ae80, 0x7b280 },
    { L"Asset 3", 0x7b680, 0x7ba80 },
    { L"Asset 4", 0x7be80, 0x7c280 },
    { L"Asset 5", 0x7c680, 0x7ca80 },
    { L"Asset 6", 0x7ce80, 0x7d280 },
    { L"Asset 7", 0x7d680, 0x7da80 },
    { L"Asset 8", 0x7de80, 0x7e280 },
    { L"Asset 9", 0x7e680, 0x7ea80 },
    { L"Asset 10", 0x7ee80, 0x7f280 },
    { L"Asset 11", 0x7f680, 0x7fa80 },
    { L"Asset 12", 0x7fe80, 0x80280 },
    { L"Asset 13", 0x80680, 0x80a80 },
    { L"Asset 14", 0x80e80, 0x81280 },
    { L"Asset 15", 0x81680, 0x81a80 },
    { L"Asset 16", 0x81e80, 0x82280 },
    { L"Asset 17", 0x82680, 0x82a80 },
    { L"Asset 18", 0x82e80, 0x83280 },
    { L"Asset 19", 0x83680, 0x83a80 },
    { L"Asset 20", 0x83e80, 0x84280 },
    { L"Asset 21", 0x84680, 0x84a80 },
    { L"Asset 22", 0x84e80, 0x85280 },
    { L"Asset 23", 0x85680, 0x85a80 },
    { L"Asset 24", 0x85e80, 0x86280 },
    { L"Asset 25", 0x86680, 0x86a80 },
    { L"Asset 26", 0x86e80, 0x87280 },
};

const sDescTreeNode KOF02UM_PS2_STAGES_COLLECTION_IGNIZ[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_IGNIZ, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_IGNIZ) },
    { L"Iori MAX2", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_STAGE_PALETTES_IGNIZ_MAX2, ARRAYSIZE(KOF02UM_PS2_STAGE_PALETTES_IGNIZ_MAX2) },
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

const sGame_PaletteDataset KOF02UM_PS2_COMMAND_PALETTES[] =
{
    { L"HUD and Buttons", 0x80, 0x480 },
    { L"Text", 0x10480, 0x10880 },
};

const sDescTreeNode KOF02UM_PS2_COMMAND_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_COMMAND_PALETTES, ARRAYSIZE(KOF02UM_PS2_COMMAND_PALETTES) },
};

const sGame_PaletteDataset KOF02UM_PS2_PRACTICE_PALETTES[] =
{
    { L"Text", 0x80, 0x480 },
    { L"Overlay and Buttons", 0x10480, 0x10880 },
};

const sDescTreeNode KOF02UM_PS2_PRACTICE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_PS2_PRACTICE_PALETTES, ARRAYSIZE(KOF02UM_PS2_PRACTICE_PALETTES) },
};

const std::vector<sGameUnitsByFile> KOF02UM_S_DIR_BGR555_UNITS =
{
    { L"game\\base\\max2bg.bin", 38912, L"MAX2 Backgrounds", KOF02UM_S_MAX2_BG_COLLECTION, ARRAYSIZE(KOF02UM_S_MAX2_BG_COLLECTION) },
    { L"game\\base\\bar.bin", 8704, L"HUD", KOF02UM_S_BAR_HUD_COLLECTION, ARRAYSIZE(KOF02UM_S_BAR_HUD_COLLECTION) },
};

const std::vector<sGameUnitsByFile> KOF02UM_PS2_DIR_BGR555_UNITS =
{
    { L"data\\base\\max2bg.bin", 38912, L"MAX2 Backgrounds", KOF02UM_S_MAX2_BG_COLLECTION, ARRAYSIZE(KOF02UM_S_MAX2_BG_COLLECTION) },
    { L"data\\base\\bar.bin", 8704, L"HUD", KOF02UM_S_BAR_HUD_COLLECTION, ARRAYSIZE(KOF02UM_S_BAR_HUD_COLLECTION) },
};

const std::vector<sGameUnitsByFile> KOF02UM_S_DIR_8887_UNITS =
{
    { L"game\\demo\\psel.bin-n", 5697572, L"Character Select (ENG, JPN, PT-BR)", KOF02UM_S_PSEL_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_PSEL_COLLECTION_ENU) },
    { L"game\\demo\\psels.bin-n", 5697572, L"Character Select (Spanish)", KOF02UM_S_PSEL_COLLECTION_SPN, ARRAYSIZE(KOF02UM_S_PSEL_COLLECTION_SPN) },

    { L"game\\demo\\osel.bin-n", 0x28cbb8, L"Order Select (ENG, JPN, PT-BR)", KOF02UM_S_ORDERSELECT_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_ORDERSELECT_COLLECTION_ENU) },
    { L"game\\demo\\osels.bin-n", 0x28cbb8, L"Order Select (Spanish)", KOF02UM_S_ORDERSELECT_COLLECTION_SPN, ARRAYSIZE(KOF02UM_S_ORDERSELECT_COLLECTION_SPN) },

    { L"game\\demo\\conte.bin", 1249860, L"Continue Screen (English)", KOF02UM_S_CONT_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_CONT_COLLECTION_ENU) },
    { L"game\\demo\\cont.bin-n", 1249820, L"Continue Screen (Japanese)", KOF02UM_S_CONT_COLLECTION_JPN, ARRAYSIZE(KOF02UM_S_CONT_COLLECTION_JPN) },
    { L"game\\demo\\contb.bin", 1249860, L"Continue Screen (Portuguese-Brazil)", KOF02UM_S_CONT_COLLECTION_PBR, ARRAYSIZE(KOF02UM_S_CONT_COLLECTION_PBR) },
    { L"game\\demo\\conts.bin", 1249860, L"Continue Screen (Spanish)", KOF02UM_S_CONT_COLLECTION_SPN, ARRAYSIZE(KOF02UM_S_CONT_COLLECTION_SPN) },

    { L"game\\demo\\rank.bin", 769318, L"Rankings (ENG, JPN, PT-BR)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
    { L"game\\demo\\ranks.bin", 769318, L"Rankings (Spanish)", KOF02UM_S_RANK_COLLECTION_SPN, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_SPN) },

    { L"game\\menu\\clear.bin", 137422, L"Clear", KOF02UM_S_CLEAR_COLLECTION, ARRAYSIZE(KOF02UM_S_CLEAR_COLLECTION)},

    { L"game\\vic\\vic0_00.bin-n", 0x479bae, L"Victory Screens: Arcade Mode (Team)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"game\\vic\\vic1_00.bin-n", 0x4784c6, L"Victory Screens: Arcade Mode (Loss)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"game\\vic\\vic3_00.bin-n", 0x478fe2, L"Victory Screens: Arcade Mode (Single)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"game\\vic\\vic2_00.bin-n", 0x4790ea, L"Victory Screens: VS Mode (Team)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"game\\vic\\vic4_00.bin-n", 0x47851a, L"Victory Screens: VS Mode (Single)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },

    { L"game\\vic\\messe_r.dat", 38766, L"Win Quotes Text: English Win", KOF02UM_S_WINQUOTES_COLLECTION_EN, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_EN) },
    { L"game\\vic\\messe.dat", 38766, L"Win Quotes Text: English Loss", KOF02UM_S_WINQUOTES_COLLECTION_EN, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_EN) },
    { L"game\\vic\\mess_r.dat-n", 167770, L"Win Quotes Text: Japanese Win", KOF02UM_S_WINQUOTES_COLLECTION_JPN, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_JPN) },
    { L"game\\vic\\mess.dat-n", 167770, L"Win Quotes Text: Japanese Loss", KOF02UM_S_WINQUOTES_COLLECTION_JPN, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_JPN) },
    { L"game\\vic\\messb_r.dat", 39920, L"Win Quotes Text: Portugese-Brazil Win", KOF02UM_S_WINQUOTES_COLLECTION_BRS, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_BRS) },
    { L"game\\vic\\messb.dat", 39920, L"Win Quotes Text: Portugese-Brazil Loss", KOF02UM_S_WINQUOTES_COLLECTION_BRS, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_BRS) },
    { L"game\\vic\\messs_r.dat", 40360, L"Win Quotes Text: Spanish Win", KOF02UM_S_WINQUOTES_COLLECTION_ES, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_ES) },
    { L"game\\vic\\messs.dat", 40388, L"Win Quotes Text: Spanish Loss", KOF02UM_S_WINQUOTES_COLLECTION_ES, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_ES) },

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

const std::vector<sGameUnitsByFile> KOF02UM_PS2_DIR_8887_UNITS =
{
    { L"data\\demo\\psel.bin",  0x56ef34,    L"Character Select", KOF02UM_S_PSEL_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_PSEL_COLLECTION_ENU) },
    { L"data\\demo\\osel.bin",  0x28cbba,   L"Order Select",    KOF02UM_S_ORDERSELECT_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_ORDERSELECT_COLLECTION_ENU) },
    { L"data\\demo\\cont.bin",  0x13121e,    L"Continue Screen", KOF02UM_S_CONT_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_CONT_COLLECTION_ENU) },
    { L"data\\demo\\rank.bin",  769318,     L"Rankings (Idle Screen)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },

        // Not correct? { L"data\\menu\\rank.bin",    0x15bb6a,    L"Rankings Menu", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
        { L"data\\menu\\rank_A.bin",  0xa4e7a,     L"Rankings (Arcade, Team)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
        { L"data\\menu\\rank_C.bin",  0xa55ca,     L"Rankings (Character Usage)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
        { L"data\\menu\\rank_E.bin",  0xa4bf2,     L"Rankings (Endless Mode)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
        { L"data\\menu\\rank_S.bin",  0xa4e7a,     L"Rankings (Arcade, Single)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
    { L"data\\menu\\clear.bin",     137422, L"Clear",           KOF02UM_S_CLEAR_COLLECTION, ARRAYSIZE(KOF02UM_S_CLEAR_COLLECTION)},
    { L"data\\menu\\command.bin",   0x26a56, L"Command Change",   KOF02UM_PS2_COMMAND_COLLECTION, ARRAYSIZE(KOF02UM_PS2_COMMAND_COLLECTION)},
    { L"data\\menu\\practice.bin",  0x24310, L"Practice Overlay", KOF02UM_PS2_PRACTICE_COLLECTION, ARRAYSIZE(KOF02UM_PS2_PRACTICE_COLLECTION)},

    { L"data\\vic\\mess_r.dat", 167770, L"Win Quotes Text: Japanese Win", KOF02UM_S_WINQUOTES_COLLECTION_JPN, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_JPN) },
    { L"data\\vic\\mess.dat",   167770, L"Win Quotes Text: Japanese Loss", KOF02UM_S_WINQUOTES_COLLECTION_JPN, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_JPN) },

    //{ L"data\\vic\\vic0_00.bin-n", 0x479bae, L"Victory Screens: Arcade Mode (Team)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"data\\vic\\vic1_00.bin", 0x4680f6, L"Victory Screens: Arcade Mode (Loss)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"data\\vic\\vic3_00.bin", 0x468c12, L"Victory Screens: Arcade Mode (Single)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"data\\vic\\vic2_00.bin", 0x468d1a, L"Victory Screens: VS Mode (Team)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"data\\vic\\vic4_00.bin", 0x46814a, L"Victory Screens: VS Mode (Single)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },

    { L"data\\vic\\vic0_00.bin", 0x4697de, L"Kyo Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa), 0xD35C0 },
    { L"data\\vic\\vic0_01.bin", 0x4697de, L"Benimaru Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru), 0xD35C0 },
    { L"data\\vic\\vic0_02.bin", 0x4697de, L"Daimon Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon), 0xD35C0 },
    { L"data\\vic\\vic0_03.bin", 0x4697de, L"Terry Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry), 0xD35C0 },
    { L"data\\vic\\vic0_04.bin", 0x4697de, L"Andy Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy), 0xD35C0 },
    { L"data\\vic\\vic0_05.bin", 0x4697de, L"Joe Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe), 0xD35C0 },
    { L"data\\vic\\vic0_06.bin", 0x4697de, L"Kim Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim), 0xD35C0 },
    { L"data\\vic\\vic0_07.bin", 0x4697de, L"Chang Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang), 0xD35C0 },
    { L"data\\vic\\vic0_08.bin", 0x4697de, L"Choi Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi), 0xD35C0 },
    { L"data\\vic\\vic0_09.bin", 0x4697de, L"Athena Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena), 0xD35C0 },
    { L"data\\vic\\vic0_0A.bin", 0x4697de, L"Kensou Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou), 0xD35C0 },
    { L"data\\vic\\vic0_0B.bin", 0x4697de, L"Chin Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin), 0xD35C0 },
    { L"data\\vic\\vic0_0C.bin", 0x4697de, L"Leona Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic0_0D.bin", 0x4697de, L"Ralf Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf), 0xD35C0 },
    { L"data\\vic\\vic0_0E.bin", 0x4697de, L"Clark Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark), 0xD35C0 },
    { L"data\\vic\\vic0_0F.bin", 0x4697de, L"Ryo Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo), 0xD35C0 },
    { L"data\\vic\\vic0_10.bin", 0x4697de, L"Robert Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert), 0xD35C0 },
    { L"data\\vic\\vic0_11.bin", 0x4697de, L"Takuma Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma), 0xD35C0 },
    { L"data\\vic\\vic0_12.bin", 0x4697de, L"Mai Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic0_13.bin", 0x4697de, L"Yuri Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri), 0xD35C0 },
    { L"data\\vic\\vic0_14.bin", 0x4697de, L"May Lee Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic0_15.bin", 0x4697de, L"Iori Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori), 0xD35C0 },
    { L"data\\vic\\vic0_16.bin", 0x4697de, L"Mature Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature), 0xD35C0 },
    { L"data\\vic\\vic0_17.bin", 0x4697de, L"Vice Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice), 0xD35C0 },
    { L"data\\vic\\vic0_18.bin", 0x4697de, L"Yamazaki Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki), 0xD35C0 },
    { L"data\\vic\\vic0_19.bin", 0x4697de, L"Blue Mary Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary), 0xD35C0 },
    { L"data\\vic\\vic0_1A.bin", 0x4697de, L"Billy Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy), 0xD35C0 },
    { L"data\\vic\\vic0_1B.bin", 0x4697de, L"Yashiro Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro), 0xD35C0 },
    { L"data\\vic\\vic0_1C.bin", 0x4697de, L"Shermie Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie), 0xD35C0 },
    { L"data\\vic\\vic0_1D.bin", 0x4697de, L"Chris Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris), 0xD35C0 },
    { L"data\\vic\\vic0_1E.bin", 0x4697de, L"K' Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K), 0xD35C0 },
    { L"data\\vic\\vic0_1F.bin", 0x4697de, L"Maxima Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima), 0xD35C0 },
    { L"data\\vic\\vic0_20.bin", 0x4697de, L"Whip Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip), 0xD35C0 },
    { L"data\\vic\\vic0_21.bin", 0x4697de, L"Vanessa Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa), 0xD35C0 },
    { L"data\\vic\\vic0_22.bin", 0x4697de, L"Seth Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth), 0xD35C0 },
    { L"data\\vic\\vic0_23.bin", 0x4697de, L"Ramon Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon), 0xD35C0 },
    { L"data\\vic\\vic0_24.bin", 0x4697de, L"Kula Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic0_25.bin", 0x4697de, L"Nameless Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic0_26.bin", 0x4697de, L"Angel Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel), 0xD35C0 },
    { L"data\\vic\\vic0_27.bin", 0x4697de, L"Omega Rugal Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal), 0xD35C0 },
    { L"data\\vic\\vic0_28.bin", 0x4697de, L"KUSANAGI Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi), 0xD35C0 },
    { L"data\\vic\\vic0_29.bin", 0x4697de, L"Shingo Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo), 0xD35C0 },
    { L"data\\vic\\vic0_2A.bin", 0x4697de, L"King Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King), 0xD35C0 },
    { L"data\\vic\\vic0_2B.bin", 0x4697de, L"Xiangfei Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei), 0xD35C0 },
    { L"data\\vic\\vic0_2C.bin", 0x4697de, L"Hinako Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako), 0xD35C0 },
    { L"data\\vic\\vic0_2D.bin", 0x4697de, L"Heidern Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern), 0xD35C0 },
    { L"data\\vic\\vic0_2E.bin", 0x4697de, L"Lin Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin), 0xD35C0 },
    //{ L"data\\vic\\vic0_2F.bin-n", 0x4697de, L"TakumaEX (Unused) Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX), 0xD35C0 },
    { L"data\\vic\\vic0_30.bin", 0x4697de, L"Bao Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },
    { L"data\\vic\\vic0_31.bin", 0x4697de, L"Jhun Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun), 0xD35C0 },
    { L"data\\vic\\vic0_32.bin", 0x4697de, L"Kyo1 Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1), 0xD35C0 },
    { L"data\\vic\\vic0_33.bin", 0x4697de, L"Foxy Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy), 0xD35C0 },
    { L"data\\vic\\vic0_34.bin", 0x4697de, L"Kasumi Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi), 0xD35C0 },
    { L"data\\vic\\vic0_35.bin", 0x4697de, L"Geese Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese), 0xD35C0 },
    { L"data\\vic\\vic0_36.bin", 0x4697de, L"Nightmare Geese Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM), 0xD35C0 },
    //{ L"data\\vic\\vic0_37.bin-n", 0x4697de, L"EX Robert (Unused) Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX), 0xD35C0 },
    //{ L"data\\vic\\vic0_38.bin-n", 0x4697de, L"EX Kensou (Unused) Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX), 0xD35C0 },
    { L"data\\vic\\vic0_39.bin", 0x4697de, L"Kyo2 Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2), 0xD35C0 },
    { L"data\\vic\\vic0_3A.bin", 0x4697de, L"Goenitz Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz), 0xD35C0 },
    { L"data\\vic\\vic0_3B.bin", 0x4697de, L"Krizalid Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid), 0xD35C0 },
    { L"data\\vic\\vic0_3C.bin", 0x4697de, L"Clone Zero Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero), 0xD35C0 },
    { L"data\\vic\\vic0_3D.bin", 0x4697de, L"Original Zero Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG), 0xD35C0 },
    { L"data\\vic\\vic0_3E.bin", 0x4697de, L"Igniz Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz), 0xD35C0 },
    //{ L"data\\vic\\vic0_3F.bin-n", 0x4697de, L"Unknown (Unused) Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY), 0xD35C0 },
    { L"data\\vic\\vic0_40.bin", 0x4697de, L"Orochi Yashiro Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi), 0xD35C0 },
    { L"data\\vic\\vic0_41.bin", 0x4697de, L"Orochi Shermie Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi), 0xD35C0 },
    { L"data\\vic\\vic0_42.bin", 0x4697de, L"Orochi Chris Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi), 0xD35C0 },

    { L"data\\vic\\vic0_43.bin", 0x4697de, L"Leona Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic0_44.bin", 0x4697de, L"Mai Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic0_45.bin", 0x4697de, L"May Lee Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic0_46.bin", 0x4697de, L"Kula Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic0_47.bin", 0x4697de, L"Nameless Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic0_48.bin", 0x4697de, L"Kasumi Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi), 0xD35C0 },
    //{ L"data\\vic\\vic0_49.bin", 0x4697de, L"Mai Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    //{ L"data\\vic\\vic0_4A.bin-n", 0x4697de, L"Bao (Unused) Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },

    { L"data\\vic\\vic1_00.bin", 0x4680f6, L"Kyo Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa), 0xD35C0 },
    { L"data\\vic\\vic1_01.bin", 0x4680f6, L"Benimaru Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru), 0xD35C0 },
    { L"data\\vic\\vic1_02.bin", 0x4680f6, L"Daimon Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon), 0xD35C0 },
    { L"data\\vic\\vic1_03.bin", 0x4680f6, L"Terry Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry), 0xD35C0 },
    { L"data\\vic\\vic1_04.bin", 0x4680f6, L"Andy Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy), 0xD35C0 },
    { L"data\\vic\\vic1_05.bin", 0x4680f6, L"Joe Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe), 0xD35C0 },
    { L"data\\vic\\vic1_06.bin", 0x4680f6, L"Kim Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim), 0xD35C0 },
    { L"data\\vic\\vic1_07.bin", 0x4680f6, L"Chang Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang), 0xD35C0 },
    { L"data\\vic\\vic1_08.bin", 0x4680f6, L"Choi Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi), 0xD35C0 },
    { L"data\\vic\\vic1_09.bin", 0x4680f6, L"Athena Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena), 0xD35C0 },
    { L"data\\vic\\vic1_0A.bin", 0x4680f6, L"Kensou Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou), 0xD35C0 },
    { L"data\\vic\\vic1_0B.bin", 0x4680f6, L"Chin Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin), 0xD35C0 },
    { L"data\\vic\\vic1_0C.bin", 0x4680f6, L"Leona Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic1_0D.bin", 0x4680f6, L"Ralf Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf), 0xD35C0 },
    { L"data\\vic\\vic1_0E.bin", 0x4680f6, L"Clark Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark), 0xD35C0 },
    { L"data\\vic\\vic1_0F.bin", 0x4680f6, L"Ryo Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo), 0xD35C0 },
    { L"data\\vic\\vic1_10.bin", 0x4680f6, L"Robert Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert), 0xD35C0 },
    { L"data\\vic\\vic1_11.bin", 0x4680f6, L"Takuma Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma), 0xD35C0 },
    { L"data\\vic\\vic1_12.bin", 0x4680f6, L"Mai Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic1_13.bin", 0x4680f6, L"Yuri Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri), 0xD35C0 },
    { L"data\\vic\\vic1_14.bin", 0x4680f6, L"May Lee Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic1_15.bin", 0x4680f6, L"Iori Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori), 0xD35C0 },
    { L"data\\vic\\vic1_16.bin", 0x4680f6, L"Mature Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature), 0xD35C0 },
    { L"data\\vic\\vic1_17.bin", 0x4680f6, L"Vice Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice), 0xD35C0 },
    { L"data\\vic\\vic1_18.bin", 0x4680f6, L"Yamazaki Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki), 0xD35C0 },
    { L"data\\vic\\vic1_19.bin", 0x4680f6, L"Blue Mary Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary), 0xD35C0 },
    { L"data\\vic\\vic1_1A.bin", 0x4680f6, L"Billy Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy), 0xD35C0 },
    { L"data\\vic\\vic1_1B.bin", 0x4680f6, L"Yashiro Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro), 0xD35C0 },
    { L"data\\vic\\vic1_1C.bin", 0x4680f6, L"Shermie Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie), 0xD35C0 },
    { L"data\\vic\\vic1_1D.bin", 0x4680f6, L"Chris Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris), 0xD35C0 },
    { L"data\\vic\\vic1_1E.bin", 0x4680f6, L"K' Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K), 0xD35C0 },
    { L"data\\vic\\vic1_1F.bin", 0x4680f6, L"Maxima Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima), 0xD35C0 },
    { L"data\\vic\\vic1_20.bin", 0x4680f6, L"Whip Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip), 0xD35C0 },
    { L"data\\vic\\vic1_21.bin", 0x4680f6, L"Vanessa Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa), 0xD35C0 },
    { L"data\\vic\\vic1_22.bin", 0x4680f6, L"Seth Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth), 0xD35C0 },
    { L"data\\vic\\vic1_23.bin", 0x4680f6, L"Ramon Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon), 0xD35C0 },
    { L"data\\vic\\vic1_24.bin", 0x4680f6, L"Kula Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic1_25.bin", 0x4680f6, L"Nameless Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic1_26.bin", 0x4680f6, L"Angel Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel), 0xD35C0 },
    { L"data\\vic\\vic1_27.bin", 0x4680f6, L"Omega Rugal Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal), 0xD35C0 },
    { L"data\\vic\\vic1_28.bin", 0x4680f6, L"KUSANAGI Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi), 0xD35C0 },
    { L"data\\vic\\vic1_29.bin", 0x4680f6, L"Shingo Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo), 0xD35C0 },
    { L"data\\vic\\vic1_2A.bin", 0x4680f6, L"King Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King), 0xD35C0 },
    { L"data\\vic\\vic1_2B.bin", 0x4680f6, L"Xiangfei Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei), 0xD35C0 },
    { L"data\\vic\\vic1_2C.bin", 0x4680f6, L"Hinako Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako), 0xD35C0 },
    { L"data\\vic\\vic1_2D.bin", 0x4680f6, L"Heidern Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern), 0xD35C0 },
    { L"data\\vic\\vic1_2E.bin", 0x4680f6, L"Lin Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin), 0xD35C0 },
    //{ L"data\\vic\\vic1_2F.bin-n", 0x4680f6, L"TakumaEX (Unused) Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX), 0xD35C0 },
    { L"data\\vic\\vic1_30.bin", 0x4680f6, L"Bao Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },
    { L"data\\vic\\vic1_31.bin", 0x4680f6, L"Jhun Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun), 0xD35C0 },
    { L"data\\vic\\vic1_32.bin", 0x4680f6, L"Kyo1 Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1), 0xD35C0 },
    { L"data\\vic\\vic1_33.bin", 0x4680f6, L"Foxy Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy), 0xD35C0 },
    { L"data\\vic\\vic1_34.bin", 0x4680f6, L"Kasumi Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi), 0xD35C0 },
    { L"data\\vic\\vic1_35.bin", 0x4680f6, L"Geese Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese), 0xD35C0 },
    { L"data\\vic\\vic1_36.bin", 0x4680f6, L"Nightmare Geese Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM), 0xD35C0 },
    //{ L"data\\vic\\vic1_37.bin-n", 0x4680f6, L"EX Robert (Unused) Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX), 0xD35C0 },
    //{ L"data\\vic\\vic1_38.bin-n", 0x4680f6, L"EX Kensou (Unused) Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX), 0xD35C0 },
    { L"data\\vic\\vic1_39.bin", 0x4680f6, L"Kyo2 Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2), 0xD35C0 },
    { L"data\\vic\\vic1_3A.bin", 0x4680f6, L"Goenitz Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz), 0xD35C0 },
    { L"data\\vic\\vic1_3B.bin", 0x4680f6, L"Krizalid Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid), 0xD35C0 },
    { L"data\\vic\\vic1_3C.bin", 0x4680f6, L"Clone Zero Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero), 0xD35C0 },
    { L"data\\vic\\vic1_3D.bin", 0x4680f6, L"Original Zero Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG), 0xD35C0 },
    { L"data\\vic\\vic1_3E.bin", 0x4680f6, L"Igniz Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz), 0xD35C0 },
    //{ L"data\\vic\\vic1_3F.bin-n", 0x4680f6, L"Unknown (Unused) Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY), 0xD35C0 },
    { L"data\\vic\\vic1_40.bin", 0x4680f6, L"Orochi Yashiro Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi), 0xD35C0 },
    { L"data\\vic\\vic1_41.bin", 0x4680f6, L"Orochi Shermie Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi), 0xD35C0 },
    { L"data\\vic\\vic1_42.bin", 0x4680f6, L"Orochi Chris Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi), 0xD35C0 },

    { L"data\\vic\\vic1_43.bin", 0x4680f6, L"Leona Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic1_44.bin", 0x4680f6, L"Mai Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic1_45.bin", 0x4680f6, L"May Lee Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic1_46.bin", 0x4680f6, L"Kula Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic1_47.bin", 0x4680f6, L"Nameless Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic1_48.bin", 0x4680f6, L"Kasumi Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi), 0xD35C0 },
    //{ L"data\\vic\\vic1_49.bin", 0x4680f6, L"Mai Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    //{ L"data\\vic\\vic1_4A.bin-n", 0x4680f6, L"Bao (Unused) Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },

    { L"data\\vic\\vic2_00.bin", 0x468d1a, L"Kyo Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa), 0xD35C0 },
    { L"data\\vic\\vic2_01.bin", 0x468d1a, L"Benimaru Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru), 0xD35C0 },
    { L"data\\vic\\vic2_02.bin", 0x468d1a, L"Daimon Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon), 0xD35C0 },
    { L"data\\vic\\vic2_03.bin", 0x468d1a, L"Terry Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry), 0xD35C0 },
    { L"data\\vic\\vic2_04.bin", 0x468d1a, L"Andy Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy), 0xD35C0 },
    { L"data\\vic\\vic2_05.bin", 0x468d1a, L"Joe Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe), 0xD35C0 },
    { L"data\\vic\\vic2_06.bin", 0x468d1a, L"Kim Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim), 0xD35C0 },
    { L"data\\vic\\vic2_07.bin", 0x468d1a, L"Chang Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang), 0xD35C0 },
    { L"data\\vic\\vic2_08.bin", 0x468d1a, L"Choi Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi), 0xD35C0 },
    { L"data\\vic\\vic2_09.bin", 0x468d1a, L"Athena Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena), 0xD35C0 },
    { L"data\\vic\\vic2_0A.bin", 0x468d1a, L"Kensou Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou), 0xD35C0 },
    { L"data\\vic\\vic2_0B.bin", 0x468d1a, L"Chin Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin), 0xD35C0 },
    { L"data\\vic\\vic2_0C.bin", 0x468d1a, L"Leona Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic2_0D.bin", 0x468d1a, L"Ralf Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf), 0xD35C0 },
    { L"data\\vic\\vic2_0E.bin", 0x468d1a, L"Clark Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark), 0xD35C0 },
    { L"data\\vic\\vic2_0F.bin", 0x468d1a, L"Ryo Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo), 0xD35C0 },
    { L"data\\vic\\vic2_10.bin", 0x468d1a, L"Robert Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert), 0xD35C0 },
    { L"data\\vic\\vic2_11.bin", 0x468d1a, L"Takuma Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma), 0xD35C0 },
    { L"data\\vic\\vic2_12.bin", 0x468d1a, L"Mai Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic2_13.bin", 0x468d1a, L"Yuri Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri), 0xD35C0 },
    { L"data\\vic\\vic2_14.bin", 0x468d1a, L"May Lee Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic2_15.bin", 0x468d1a, L"Iori Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori), 0xD35C0 },
    { L"data\\vic\\vic2_16.bin", 0x468d1a, L"Mature Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature), 0xD35C0 },
    { L"data\\vic\\vic2_17.bin", 0x468d1a, L"Vice Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice), 0xD35C0 },
    { L"data\\vic\\vic2_18.bin", 0x468d1a, L"Yamazaki Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki), 0xD35C0 },
    { L"data\\vic\\vic2_19.bin", 0x468d1a, L"Blue Mary Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary), 0xD35C0 },
    { L"data\\vic\\vic2_1A.bin", 0x468d1a, L"Billy Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy), 0xD35C0 },
    { L"data\\vic\\vic2_1B.bin", 0x468d1a, L"Yashiro Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro), 0xD35C0 },
    { L"data\\vic\\vic2_1C.bin", 0x468d1a, L"Shermie Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie), 0xD35C0 },
    { L"data\\vic\\vic2_1D.bin", 0x468d1a, L"Chris Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris), 0xD35C0 },
    { L"data\\vic\\vic2_1E.bin", 0x468d1a, L"K' Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K), 0xD35C0 },
    { L"data\\vic\\vic2_1F.bin", 0x468d1a, L"Maxima Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima), 0xD35C0 },
    { L"data\\vic\\vic2_20.bin", 0x468d1a, L"Whip Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip), 0xD35C0 },
    { L"data\\vic\\vic2_21.bin", 0x468d1a, L"Vanessa Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa), 0xD35C0 },
    { L"data\\vic\\vic2_22.bin", 0x468d1a, L"Seth Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth), 0xD35C0 },
    { L"data\\vic\\vic2_23.bin", 0x468d1a, L"Ramon Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon), 0xD35C0 },
    { L"data\\vic\\vic2_24.bin", 0x468d1a, L"Kula Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic2_25.bin", 0x468d1a, L"Nameless Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic2_26.bin", 0x468d1a, L"Angel Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel), 0xD35C0 },
    { L"data\\vic\\vic2_27.bin", 0x468d1a, L"Omega Rugal Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal), 0xD35C0 },
    { L"data\\vic\\vic2_28.bin", 0x468d1a, L"KUSANAGI Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi), 0xD35C0 },
    { L"data\\vic\\vic2_29.bin", 0x468d1a, L"Shingo Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo), 0xD35C0 },
    { L"data\\vic\\vic2_2A.bin", 0x468d1a, L"King Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King), 0xD35C0 },
    { L"data\\vic\\vic2_2B.bin", 0x468d1a, L"Xiangfei Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei), 0xD35C0 },
    { L"data\\vic\\vic2_2C.bin", 0x468d1a, L"Hinako Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako), 0xD35C0 },
    { L"data\\vic\\vic2_2D.bin", 0x468d1a, L"Heidern Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern), 0xD35C0 },
    { L"data\\vic\\vic2_2E.bin", 0x468d1a, L"Lin Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin), 0xD35C0 },
    //{ L"data\\vic\\vic2_2F.bin-n", 0x468d1a, L"TakumaEX (Unused) Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX), 0xD35C0 },
    { L"data\\vic\\vic2_30.bin", 0x468d1a, L"Bao Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },
    { L"data\\vic\\vic2_31.bin", 0x468d1a, L"Jhun Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun), 0xD35C0 },
    { L"data\\vic\\vic2_32.bin", 0x468d1a, L"Kyo1 Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1), 0xD35C0 },
    { L"data\\vic\\vic2_33.bin", 0x468d1a, L"Foxy Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy), 0xD35C0 },
    { L"data\\vic\\vic2_34.bin", 0x468d1a, L"Kasumi Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi), 0xD35C0 },
    { L"data\\vic\\vic2_35.bin", 0x468d1a, L"Geese Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese), 0xD35C0 },
    { L"data\\vic\\vic2_36.bin", 0x468d1a, L"Nightmare Geese Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM), 0xD35C0 },
    //{ L"data\\vic\\vic2_37.bin-n", 0x468d1a, L"EX Robert (Unused) Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX), 0xD35C0 },
    //{ L"data\\vic\\vic2_38.bin-n", 0x468d1a, L"EX Kensou (Unused) Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX), 0xD35C0 },
    { L"data\\vic\\vic2_39.bin", 0x468d1a, L"Kyo2 Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2), 0xD35C0 },
    { L"data\\vic\\vic2_3A.bin", 0x468d1a, L"Goenitz Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz), 0xD35C0 },
    { L"data\\vic\\vic2_3B.bin", 0x468d1a, L"Krizalid Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid), 0xD35C0 },
    { L"data\\vic\\vic2_3C.bin", 0x468d1a, L"Clone Zero Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero), 0xD35C0 },
    { L"data\\vic\\vic2_3D.bin", 0x468d1a, L"Original Zero Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG), 0xD35C0 },
    { L"data\\vic\\vic2_3E.bin", 0x468d1a, L"Igniz Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz), 0xD35C0 },
    //{ L"data\\vic\\vic2_3F.bin-n", 0x468d1a, L"Unknown (Unused) Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY), 0xD35C0 },
    { L"data\\vic\\vic2_40.bin", 0x468d1a, L"Orochi Yashiro Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi), 0xD35C0 },
    { L"data\\vic\\vic2_41.bin", 0x468d1a, L"Orochi Shermie Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi), 0xD35C0 },
    { L"data\\vic\\vic2_42.bin", 0x468d1a, L"Orochi Chris Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi), 0xD35C0 },

    { L"data\\vic\\vic2_43.bin", 0x468d1a, L"Leona Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic2_44.bin", 0x468d1a, L"Mai Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic2_45.bin", 0x468d1a, L"May Lee Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic2_46.bin", 0x468d1a, L"Kula Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic2_47.bin", 0x468d1a, L"Nameless Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic2_48.bin", 0x468d1a, L"Kasumi Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi), 0xD35C0 },
    //{ L"data\\vic\\vic2_49.bin", 0x468d1a, L"Mai Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    //{ L"data\\vic\\vic2_4A.bin-n", 0x468d1a, L"Bao (Unused) Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },

    { L"data\\vic\\vic3_00.bin", 0x468c12, L"Kyo Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa), 0xD35C0 },
    { L"data\\vic\\vic3_01.bin", 0x468c12, L"Benimaru Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru), 0xD35C0 },
    { L"data\\vic\\vic3_02.bin", 0x468c12, L"Daimon Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon), 0xD35C0 },
    { L"data\\vic\\vic3_03.bin", 0x468c12, L"Terry Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry), 0xD35C0 },
    { L"data\\vic\\vic3_04.bin", 0x468c12, L"Andy Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy), 0xD35C0 },
    { L"data\\vic\\vic3_05.bin", 0x468c12, L"Joe Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe), 0xD35C0 },
    { L"data\\vic\\vic3_06.bin", 0x468c12, L"Kim Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim), 0xD35C0 },
    { L"data\\vic\\vic3_07.bin", 0x468c12, L"Chang Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang), 0xD35C0 },
    { L"data\\vic\\vic3_08.bin", 0x468c12, L"Choi Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi), 0xD35C0 },
    { L"data\\vic\\vic3_09.bin", 0x468c12, L"Athena Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena), 0xD35C0 },
    { L"data\\vic\\vic3_0A.bin", 0x468c12, L"Kensou Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou), 0xD35C0 },
    { L"data\\vic\\vic3_0B.bin", 0x468c12, L"Chin Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin), 0xD35C0 },
    { L"data\\vic\\vic3_0C.bin", 0x468c12, L"Leona Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic3_0D.bin", 0x468c12, L"Ralf Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf), 0xD35C0 },
    { L"data\\vic\\vic3_0E.bin", 0x468c12, L"Clark Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark), 0xD35C0 },
    { L"data\\vic\\vic3_0F.bin", 0x468c12, L"Ryo Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo), 0xD35C0 },
    { L"data\\vic\\vic3_10.bin", 0x468c12, L"Robert Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert), 0xD35C0 },
    { L"data\\vic\\vic3_11.bin", 0x468c12, L"Takuma Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma), 0xD35C0 },
    { L"data\\vic\\vic3_12.bin", 0x468c12, L"Mai Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic3_13.bin", 0x468c12, L"Yuri Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri), 0xD35C0 },
    { L"data\\vic\\vic3_14.bin", 0x468c12, L"May Lee Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic3_15.bin", 0x468c12, L"Iori Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori), 0xD35C0 },
    { L"data\\vic\\vic3_16.bin", 0x468c12, L"Mature Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature), 0xD35C0 },
    { L"data\\vic\\vic3_17.bin", 0x468c12, L"Vice Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice), 0xD35C0 },
    { L"data\\vic\\vic3_18.bin", 0x468c12, L"Yamazaki Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki), 0xD35C0 },
    { L"data\\vic\\vic3_19.bin", 0x468c12, L"Blue Mary Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary), 0xD35C0 },
    { L"data\\vic\\vic3_1A.bin", 0x468c12, L"Billy Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy), 0xD35C0 },
    { L"data\\vic\\vic3_1B.bin", 0x468c12, L"Yashiro Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro), 0xD35C0 },
    { L"data\\vic\\vic3_1C.bin", 0x468c12, L"Shermie Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie), 0xD35C0 },
    { L"data\\vic\\vic3_1D.bin", 0x468c12, L"Chris Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris), 0xD35C0 },
    { L"data\\vic\\vic3_1E.bin", 0x468c12, L"K' Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K), 0xD35C0 },
    { L"data\\vic\\vic3_1F.bin", 0x468c12, L"Maxima Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima), 0xD35C0 },
    { L"data\\vic\\vic3_20.bin", 0x468c12, L"Whip Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip), 0xD35C0 },
    { L"data\\vic\\vic3_21.bin", 0x468c12, L"Vanessa Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa), 0xD35C0 },
    { L"data\\vic\\vic3_22.bin", 0x468c12, L"Seth Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth), 0xD35C0 },
    { L"data\\vic\\vic3_23.bin", 0x468c12, L"Ramon Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon), 0xD35C0 },
    { L"data\\vic\\vic3_24.bin", 0x468c12, L"Kula Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic3_25.bin", 0x468c12, L"Nameless Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic3_26.bin", 0x468c12, L"Angel Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel), 0xD35C0 },
    { L"data\\vic\\vic3_27.bin", 0x468c12, L"Omega Rugal Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal), 0xD35C0 },
    { L"data\\vic\\vic3_28.bin", 0x468c12, L"KUSANAGI Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi), 0xD35C0 },
    { L"data\\vic\\vic3_29.bin", 0x468c12, L"Shingo Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo), 0xD35C0 },
    { L"data\\vic\\vic3_2A.bin", 0x468c12, L"King Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King), 0xD35C0 },
    { L"data\\vic\\vic3_2B.bin", 0x468c12, L"Xiangfei Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei), 0xD35C0 },
    { L"data\\vic\\vic3_2C.bin", 0x468c12, L"Hinako Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako), 0xD35C0 },
    { L"data\\vic\\vic3_2D.bin", 0x468c12, L"Heidern Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern), 0xD35C0 },
    { L"data\\vic\\vic3_2E.bin", 0x468c12, L"Lin Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin), 0xD35C0 },
    //{ L"data\\vic\\vic3_2F.bin-n", 0x468c12, L"TakumaEX (Unused) Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX), 0xD35C0 },
    { L"data\\vic\\vic3_30.bin", 0x468c12, L"Bao Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },
    { L"data\\vic\\vic3_31.bin", 0x468c12, L"Jhun Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun), 0xD35C0 },
    { L"data\\vic\\vic3_32.bin", 0x468c12, L"Kyo1 Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1), 0xD35C0 },
    { L"data\\vic\\vic3_33.bin", 0x468c12, L"Foxy Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy), 0xD35C0 },
    { L"data\\vic\\vic3_34.bin", 0x468c12, L"Kasumi Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi), 0xD35C0 },
    { L"data\\vic\\vic3_35.bin", 0x468c12, L"Geese Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese), 0xD35C0 },
    { L"data\\vic\\vic3_36.bin", 0x468c12, L"Nightmare Geese Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM), 0xD35C0 },
    //{ L"data\\vic\\vic3_37.bin-n", 0x468c12, L"EX Robert (Unused) Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX), 0xD35C0 },
    //{ L"data\\vic\\vic3_38.bin-n", 0x468c12, L"EX Kensou (Unused) Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX), 0xD35C0 },
    { L"data\\vic\\vic3_39.bin", 0x468c12, L"Kyo2 Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2), 0xD35C0 },
    { L"data\\vic\\vic3_3A.bin", 0x468c12, L"Goenitz Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz), 0xD35C0 },
    { L"data\\vic\\vic3_3B.bin", 0x468c12, L"Krizalid Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid), 0xD35C0 },
    { L"data\\vic\\vic3_3C.bin", 0x468c12, L"Clone Zero Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero), 0xD35C0 },
    { L"data\\vic\\vic3_3D.bin", 0x468c12, L"Original Zero Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG), 0xD35C0 },
    { L"data\\vic\\vic3_3E.bin", 0x468c12, L"Igniz Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz), 0xD35C0 },
    //{ L"data\\vic\\vic3_3F.bin-n", 0x468c12, L"Unknown (Unused) Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY), 0xD35C0 },
    { L"data\\vic\\vic3_40.bin", 0x468c12, L"Orochi Yashiro Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi), 0xD35C0 },
    { L"data\\vic\\vic3_41.bin", 0x468c12, L"Orochi Shermie Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi), 0xD35C0 },
    { L"data\\vic\\vic3_42.bin", 0x468c12, L"Orochi Chris Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi), 0xD35C0 },

    { L"data\\vic\\vic3_43.bin", 0x468c12, L"Leona Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic3_44.bin", 0x468c12, L"Mai Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic3_45.bin", 0x468c12, L"May Lee Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic3_46.bin", 0x468c12, L"Kula Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic3_47.bin", 0x468c12, L"Nameless Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic3_48.bin", 0x468c12, L"Kasumi Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi), 0xD35C0 },
    //{ L"data\\vic\\vic3_49.bin", 0x468c12, L"Mai Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    //{ L"data\\vic\\vic3_4A.bin-n", 0x468c12, L"Bao (Unused) Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },

    { L"data\\vic\\vic4_00.bin", 0x46814a, L"Kyo Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa), 0xD35C0 },
    { L"data\\vic\\vic4_01.bin", 0x46814a, L"Benimaru Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru), 0xD35C0 },
    { L"data\\vic\\vic4_02.bin", 0x46814a, L"Daimon Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon), 0xD35C0 },
    { L"data\\vic\\vic4_03.bin", 0x46814a, L"Terry Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry), 0xD35C0 },
    { L"data\\vic\\vic4_04.bin", 0x46814a, L"Andy Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy), 0xD35C0 },
    { L"data\\vic\\vic4_05.bin", 0x46814a, L"Joe Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe), 0xD35C0 },
    { L"data\\vic\\vic4_06.bin", 0x46814a, L"Kim Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim), 0xD35C0 },
    { L"data\\vic\\vic4_07.bin", 0x46814a, L"Chang Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang), 0xD35C0 },
    { L"data\\vic\\vic4_08.bin", 0x46814a, L"Choi Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi), 0xD35C0 },
    { L"data\\vic\\vic4_09.bin", 0x46814a, L"Athena Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena), 0xD35C0 },
    { L"data\\vic\\vic4_0A.bin", 0x46814a, L"Kensou Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou), 0xD35C0 },
    { L"data\\vic\\vic4_0B.bin", 0x46814a, L"Chin Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin), 0xD35C0 },
    { L"data\\vic\\vic4_0C.bin", 0x46814a, L"Leona Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic4_0D.bin", 0x46814a, L"Ralf Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf), 0xD35C0 },
    { L"data\\vic\\vic4_0E.bin", 0x46814a, L"Clark Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark), 0xD35C0 },
    { L"data\\vic\\vic4_0F.bin", 0x46814a, L"Ryo Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo), 0xD35C0 },
    { L"data\\vic\\vic4_10.bin", 0x46814a, L"Robert Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert), 0xD35C0 },
    { L"data\\vic\\vic4_11.bin", 0x46814a, L"Takuma Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma), 0xD35C0 },
    { L"data\\vic\\vic4_12.bin", 0x46814a, L"Mai Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic4_13.bin", 0x46814a, L"Yuri Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri), 0xD35C0 },
    { L"data\\vic\\vic4_14.bin", 0x46814a, L"May Lee Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic4_15.bin", 0x46814a, L"Iori Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori), 0xD35C0 },
    { L"data\\vic\\vic4_16.bin", 0x46814a, L"Mature Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature), 0xD35C0 },
    { L"data\\vic\\vic4_17.bin", 0x46814a, L"Vice Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice), 0xD35C0 },
    { L"data\\vic\\vic4_18.bin", 0x46814a, L"Yamazaki Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki), 0xD35C0 },
    { L"data\\vic\\vic4_19.bin", 0x46814a, L"Blue Mary Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary), 0xD35C0 },
    { L"data\\vic\\vic4_1A.bin", 0x46814a, L"Billy Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy), 0xD35C0 },
    { L"data\\vic\\vic4_1B.bin", 0x46814a, L"Yashiro Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro), 0xD35C0 },
    { L"data\\vic\\vic4_1C.bin", 0x46814a, L"Shermie Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie), 0xD35C0 },
    { L"data\\vic\\vic4_1D.bin", 0x46814a, L"Chris Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris), 0xD35C0 },
    { L"data\\vic\\vic4_1E.bin", 0x46814a, L"K' Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K), 0xD35C0 },
    { L"data\\vic\\vic4_1F.bin", 0x46814a, L"Maxima Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima), 0xD35C0 },
    { L"data\\vic\\vic4_20.bin", 0x46814a, L"Whip Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip), 0xD35C0 },
    { L"data\\vic\\vic4_21.bin", 0x46814a, L"Vanessa Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa), 0xD35C0 },
    { L"data\\vic\\vic4_22.bin", 0x46814a, L"Seth Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth), 0xD35C0 },
    { L"data\\vic\\vic4_23.bin", 0x46814a, L"Ramon Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon), 0xD35C0 },
    { L"data\\vic\\vic4_24.bin", 0x46814a, L"Kula Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic4_25.bin", 0x46814a, L"Nameless Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic4_26.bin", 0x46814a, L"Angel Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel), 0xD35C0 },
    { L"data\\vic\\vic4_27.bin", 0x46814a, L"Omega Rugal Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal), 0xD35C0 },
    { L"data\\vic\\vic4_28.bin", 0x46814a, L"KUSANAGI Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi), 0xD35C0 },
    { L"data\\vic\\vic4_29.bin", 0x46814a, L"Shingo Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo), 0xD35C0 },
    { L"data\\vic\\vic4_2A.bin", 0x46814a, L"King Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King), 0xD35C0 },
    { L"data\\vic\\vic4_2B.bin", 0x46814a, L"Xiangfei Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei), 0xD35C0 },
    { L"data\\vic\\vic4_2C.bin", 0x46814a, L"Hinako Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako), 0xD35C0 },
    { L"data\\vic\\vic4_2D.bin", 0x46814a, L"Heidern Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern), 0xD35C0 },
    { L"data\\vic\\vic4_2E.bin", 0x46814a, L"Lin Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin), 0xD35C0 },
    //{ L"data\\vic\\vic4_2F.bin-n", 0x46814a, L"TakumaEX (Unused) Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX), 0xD35C0 },
    { L"data\\vic\\vic4_30.bin", 0x46814a, L"Bao Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },
    { L"data\\vic\\vic4_31.bin", 0x46814a, L"Jhun Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun), 0xD35C0 },
    { L"data\\vic\\vic4_32.bin", 0x46814a, L"Kyo1 Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1), 0xD35C0 },
    { L"data\\vic\\vic4_33.bin", 0x46814a, L"Foxy Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy), 0xD35C0 },
    { L"data\\vic\\vic4_34.bin", 0x46814a, L"Kasumi Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi), 0xD35C0 },
    { L"data\\vic\\vic4_35.bin", 0x46814a, L"Geese Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese), 0xD35C0 },
    { L"data\\vic\\vic4_36.bin", 0x46814a, L"Nightmare Geese Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM), 0xD35C0 },
    //{ L"data\\vic\\vic4_37.bin-n", 0x46814a, L"EX Robert (Unused) Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX), 0xD35C0 },
    //{ L"data\\vic\\vic4_38.bin-n", 0x46814a, L"EX Kensou (Unused) Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX), 0xD35C0 },
    { L"data\\vic\\vic4_39.bin", 0x46814a, L"Kyo2 Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2), 0xD35C0 },
    { L"data\\vic\\vic4_3A.bin", 0x46814a, L"Goenitz Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz), 0xD35C0 },
    { L"data\\vic\\vic4_3B.bin", 0x46814a, L"Krizalid Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid), 0xD35C0 },
    { L"data\\vic\\vic4_3C.bin", 0x46814a, L"Clone Zero Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero), 0xD35C0 },
    { L"data\\vic\\vic4_3D.bin", 0x46814a, L"Original Zero Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG), 0xD35C0 },
    { L"data\\vic\\vic4_3E.bin", 0x46814a, L"Igniz Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz), 0xD35C0 },
    //{ L"data\\vic\\vic4_3F.bin-n", 0x46814a, L"Unknown (Unused) Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY), 0xD35C0 },
    { L"data\\vic\\vic4_40.bin", 0x46814a, L"Orochi Yashiro Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi), 0xD35C0 },
    { L"data\\vic\\vic4_41.bin", 0x46814a, L"Orochi Shermie Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi), 0xD35C0 },
    { L"data\\vic\\vic4_42.bin", 0x46814a, L"Orochi Chris Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi), 0xD35C0 },

    { L"data\\vic\\vic4_43.bin", 0x46814a, L"Leona Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic4_44.bin", 0x46814a, L"Mai Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic4_45.bin", 0x46814a, L"May Lee Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic4_46.bin", 0x46814a, L"Kula Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic4_47.bin", 0x46814a, L"Nameless Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic4_48.bin", 0x46814a, L"Kasumi Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi), 0xD35C0 },
    //{ L"data\\vic\\vic4_49.bin", 0x46814a, L"Mai Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    //{ L"data\\vic\\vic4_4A.bin-n", 0x46814a, L"Bao (Unused) Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },

    { L"data\\bg_bin\\bga0.bin", 0x2514c0, L"Japan High School Stage", KOF02UM_PS2_STAGES_COLLECTION_JAPAN, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_JAPAN) },
    { L"data\\bg_bin\\bgb0.bin", 0x27d950, L"Korea-1 Stage", KOF02UM_PS2_STAGES_COLLECTION_KOREA, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KOREA) },
    { L"data\\bg_bin\\bgb1.bin", 0x27ddc0, L"Korea-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_KOREA2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KOREA2) },
    { L"data\\bg_bin\\bgb2.bin", 0x27db90, L"Korea-3 Stage", KOF02UM_PS2_STAGES_COLLECTION_KOREA3, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KOREA3) },
    { L"data\\bg_bin\\bgc0.bin", 0x20d400, L"China Stage", KOF02UM_PS2_STAGES_COLLECTION_CHINA, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CHINA) },
    { L"data\\bg_bin\\bgd0.bin", 0x26bf90, L"USA Stage", KOF02UM_PS2_STAGES_COLLECTION_USA, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_USA) },
    { L"data\\bg_bin\\bge0.bin", 0x23e620, L"Cambodia-1 Stage", KOF02UM_PS2_STAGES_COLLECTION_CAMBODIA, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CAMBODIA) },
    { L"data\\bg_bin\\bge4.bin", 0x24f910, L"Cambodia-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_CAMBODIA2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CAMBODIA2) },
    { L"data\\bg_bin\\bgf0.bin", 0x21bd90, L"Taiwan-1 Stage", KOF02UM_PS2_STAGES_COLLECTION_TAIWAN, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_TAIWAN) },
    { L"data\\bg_bin\\bgf1.bin", 0x22f2a0, L"Taiwan-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_TAIWAN2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_TAIWAN2) },
    { L"data\\bg_bin\\bgg0.bin", 0x2324a0, L"Italy-1 Stage", KOF02UM_PS2_STAGES_COLLECTION_ITALY, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_ITALY) },
    { L"data\\bg_bin\\bgg1.bin", 0x241060, L"Italy-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_ITALY2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_ITALY2) },
    { L"data\\bg_bin\\bgg2.bin", 0x1ea540, L"Italy-3 Stage", KOF02UM_PS2_STAGES_COLLECTION_ITALY3, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_ITALY3) },
    { L"data\\bg_bin\\bgh0.bin", 0x246140, L"Greece Stage", KOF02UM_PS2_STAGES_COLLECTION_GREECE, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_GREECE) },
    { L"data\\bg_bin\\bgi0.bin", 0x25f8b0, L"NeoGeo World-1 Stage", KOF02UM_PS2_STAGES_COLLECTION_NEOGEO, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_NEOGEO) },
    { L"data\\bg_bin\\bgi1.bin", 0x2398f0, L"NeoGeo World-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_NEOGEO2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_NEOGEO2) },
    { L"data\\bg_bin\\bgj0.bin", 0x1a2840, L"Clone Factory Stage", KOF02UM_PS2_STAGES_COLLECTION_CLONE, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CLONE) },
    //{ L"data\\bg_bin\\bgj1.bin", 5804748, L"Clone Factory-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_CLONE2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CLONE2) },
    { L"data\\bg_bin\\bgk0.bin", 0xfc5e0, L"Rugal Stage", KOF02UM_PS2_STAGES_COLLECTION_RUGAL, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_RUGAL) },
    // What is the L stage set?
    //{ L"data\\bg_bin\\bgl0.bin", 2, L"Krizalid Stage", KOF02UM_PS2_STAGES_COLLECTION_KOREA, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KOREA) },
    { L"data\\bg_bin\\bgm0.bin", 0x27fa90, L"Krizalid Stage", KOF02UM_PS2_STAGES_COLLECTION_KRIZALID, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KRIZALID) },
    //{ L"data\\bg_bin\\bgm1.bin", 2647066, L"Krizalid-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_KRIZALID, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KRIZALID) },
    { L"data\\bg_bin\\bgn0.bin", 0x167400, L"Clone Zero Stage", KOF02UM_PS2_STAGES_COLLECTION_CLONEZERO, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CLONEZERO) },
    { L"data\\bg_bin\\bgo0.bin", 0x197120, L"Original Zero Stage", KOF02UM_PS2_STAGES_COLLECTION_ORIGINALZERO, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_ORIGINALZERO) },
    { L"data\\bg_bin\\bgp0.bin", 0x227280, L"Igniz Stage", KOF02UM_PS2_STAGES_COLLECTION_IGNIZ, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_IGNIZ) },
};

const std::vector<sGameUnitsByFile> KOF02UM_PS2_DIR_8887_UNITS_TOUGEKI =
{
    { L"data\\demo\\psel.bin",  0x56ef34,    L"Character Select", KOF02UM_S_PSEL_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_PSEL_COLLECTION_ENU) },
    { L"data\\demo\\osel.bin",  0x28cbba,   L"Order Select",    KOF02UM_S_ORDERSELECT_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_ORDERSELECT_COLLECTION_ENU) },
    { L"data\\demo\\cont.bin",  0x13121e,    L"Continue Screen", KOF02UM_S_CONT_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_CONT_COLLECTION_ENU) },
    { L"data\\demo\\rank.bin",  769318,     L"Rankings (Idle Screen)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },

        // Not correct? { L"data\\menu\\rank.bin",    0x15bb6a,    L"Rankings Menu", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
        { L"data\\menu\\rank_A.bin",  0xa4e7a,     L"Rankings (Arcade, Team)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
        { L"data\\menu\\rank_C.bin",  0xa55ca,     L"Rankings (Character Usage)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
        { L"data\\menu\\rank_E.bin",  0xa4bf2,     L"Rankings (Endless Mode)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
        { L"data\\menu\\rank_S.bin",  0xa4e7a,     L"Rankings (Arcade, Single)", KOF02UM_S_RANK_COLLECTION_ENU, ARRAYSIZE(KOF02UM_S_RANK_COLLECTION_ENU) },
    { L"data\\menu\\clear.bin",     137422, L"Clear",           KOF02UM_S_CLEAR_COLLECTION, ARRAYSIZE(KOF02UM_S_CLEAR_COLLECTION)},
    { L"data\\menu\\command.bin",   0x26a56, L"Command Change",   KOF02UM_PS2_COMMAND_COLLECTION, ARRAYSIZE(KOF02UM_PS2_COMMAND_COLLECTION)},
    { L"data\\menu\\practice.bin",  0x24310, L"Practice Overlay", KOF02UM_PS2_PRACTICE_COLLECTION, ARRAYSIZE(KOF02UM_PS2_PRACTICE_COLLECTION)},

    { L"data\\vic\\mess_r.dat", 0x28f58, L"Win Quotes Text: Japanese Win", KOF02UM_S_WINQUOTES_COLLECTION_JPN, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_JPN) },
    { L"data\\vic\\mess.dat",   0x28f58, L"Win Quotes Text: Japanese Loss", KOF02UM_S_WINQUOTES_COLLECTION_JPN, ARRAYSIZE(KOF02UM_S_WINQUOTES_COLLECTION_JPN) },

    //{ L"data\\vic\\vic0_00.bin-n", 0x479bae, L"Victory Screens: Arcade Mode (Team)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"data\\vic\\vic1_00.bin", 0x4680f6, L"Victory Screens: Arcade Mode (Loss)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"data\\vic\\vic3_00.bin", 0x468c12, L"Victory Screens: Arcade Mode (Single)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"data\\vic\\vic2_00.bin", 0x468d1a, L"Victory Screens: VS Mode (Team)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },
    { L"data\\vic\\vic4_00.bin", 0x46814a, L"Victory Screens: VS Mode (Single)", KOF02UM_S_VictorySequence_COLLECTION, ARRAYSIZE(KOF02UM_S_VictorySequence_COLLECTION) },

    { L"data\\vic\\vic0_00.bin", 0x4697de, L"Kyo Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa), 0xD35C0 },
    { L"data\\vic\\vic0_01.bin", 0x4697de, L"Benimaru Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru), 0xD35C0 },
    { L"data\\vic\\vic0_02.bin", 0x4697de, L"Daimon Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon), 0xD35C0 },
    { L"data\\vic\\vic0_03.bin", 0x4697de, L"Terry Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry), 0xD35C0 },
    { L"data\\vic\\vic0_04.bin", 0x4697de, L"Andy Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy), 0xD35C0 },
    { L"data\\vic\\vic0_05.bin", 0x4697de, L"Joe Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe), 0xD35C0 },
    { L"data\\vic\\vic0_06.bin", 0x4697de, L"Kim Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim), 0xD35C0 },
    { L"data\\vic\\vic0_07.bin", 0x4697de, L"Chang Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang), 0xD35C0 },
    { L"data\\vic\\vic0_08.bin", 0x4697de, L"Choi Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi), 0xD35C0 },
    { L"data\\vic\\vic0_09.bin", 0x4697de, L"Athena Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena), 0xD35C0 },
    { L"data\\vic\\vic0_0A.bin", 0x4697de, L"Kensou Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou), 0xD35C0 },
    { L"data\\vic\\vic0_0B.bin", 0x4697de, L"Chin Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin), 0xD35C0 },
    { L"data\\vic\\vic0_0C.bin", 0x4697de, L"Leona Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic0_0D.bin", 0x4697de, L"Ralf Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf), 0xD35C0 },
    { L"data\\vic\\vic0_0E.bin", 0x4697de, L"Clark Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark), 0xD35C0 },
    { L"data\\vic\\vic0_0F.bin", 0x4697de, L"Ryo Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo), 0xD35C0 },
    { L"data\\vic\\vic0_10.bin", 0x4697de, L"Robert Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert), 0xD35C0 },
    { L"data\\vic\\vic0_11.bin", 0x4697de, L"Takuma Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma), 0xD35C0 },
    { L"data\\vic\\vic0_12.bin", 0x4697de, L"Mai Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic0_13.bin", 0x4697de, L"Yuri Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri), 0xD35C0 },
    { L"data\\vic\\vic0_14.bin", 0x4697de, L"May Lee Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic0_15.bin", 0x4697de, L"Iori Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori), 0xD35C0 },
    { L"data\\vic\\vic0_16.bin", 0x4697de, L"Mature Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature), 0xD35C0 },
    { L"data\\vic\\vic0_17.bin", 0x4697de, L"Vice Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice), 0xD35C0 },
    { L"data\\vic\\vic0_18.bin", 0x4697de, L"Yamazaki Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki), 0xD35C0 },
    { L"data\\vic\\vic0_19.bin", 0x4697de, L"Blue Mary Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary), 0xD35C0 },
    { L"data\\vic\\vic0_1A.bin", 0x4697de, L"Billy Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy), 0xD35C0 },
    { L"data\\vic\\vic0_1B.bin", 0x4697de, L"Yashiro Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro), 0xD35C0 },
    { L"data\\vic\\vic0_1C.bin", 0x4697de, L"Shermie Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie), 0xD35C0 },
    { L"data\\vic\\vic0_1D.bin", 0x4697de, L"Chris Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris), 0xD35C0 },
    { L"data\\vic\\vic0_1E.bin", 0x4697de, L"K' Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K), 0xD35C0 },
    { L"data\\vic\\vic0_1F.bin", 0x4697de, L"Maxima Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima), 0xD35C0 },
    { L"data\\vic\\vic0_20.bin", 0x4697de, L"Whip Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip), 0xD35C0 },
    { L"data\\vic\\vic0_21.bin", 0x4697de, L"Vanessa Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa), 0xD35C0 },
    { L"data\\vic\\vic0_22.bin", 0x4697de, L"Seth Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth), 0xD35C0 },
    { L"data\\vic\\vic0_23.bin", 0x4697de, L"Ramon Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon), 0xD35C0 },
    { L"data\\vic\\vic0_24.bin", 0x4697de, L"Kula Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic0_25.bin", 0x4697de, L"Nameless Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic0_26.bin", 0x4697de, L"Angel Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel), 0xD35C0 },
    { L"data\\vic\\vic0_27.bin", 0x4697de, L"Omega Rugal Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal), 0xD35C0 },
    { L"data\\vic\\vic0_28.bin", 0x4697de, L"KUSANAGI Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi), 0xD35C0 },
    { L"data\\vic\\vic0_29.bin", 0x4697de, L"Shingo Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo), 0xD35C0 },
    { L"data\\vic\\vic0_2A.bin", 0x4697de, L"King Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King), 0xD35C0 },
    { L"data\\vic\\vic0_2B.bin", 0x4697de, L"Xiangfei Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei), 0xD35C0 },
    { L"data\\vic\\vic0_2C.bin", 0x4697de, L"Hinako Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako), 0xD35C0 },
    { L"data\\vic\\vic0_2D.bin", 0x4697de, L"Heidern Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern), 0xD35C0 },
    { L"data\\vic\\vic0_2E.bin", 0x4697de, L"Lin Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin), 0xD35C0 },
    //{ L"data\\vic\\vic0_2F.bin-n", 0x4697de, L"TakumaEX (Unused) Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX), 0xD35C0 },
    { L"data\\vic\\vic0_30.bin", 0x4697de, L"Bao Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },
    { L"data\\vic\\vic0_31.bin", 0x4697de, L"Jhun Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun), 0xD35C0 },
    { L"data\\vic\\vic0_32.bin", 0x4697de, L"Kyo1 Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1), 0xD35C0 },
    { L"data\\vic\\vic0_33.bin", 0x4697de, L"Foxy Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy), 0xD35C0 },
    { L"data\\vic\\vic0_34.bin", 0x4697de, L"Kasumi Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi), 0xD35C0 },
    { L"data\\vic\\vic0_35.bin", 0x4697de, L"Geese Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese), 0xD35C0 },
    { L"data\\vic\\vic0_36.bin", 0x4697de, L"Nightmare Geese Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM), 0xD35C0 },
    //{ L"data\\vic\\vic0_37.bin-n", 0x4697de, L"EX Robert (Unused) Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX), 0xD35C0 },
    //{ L"data\\vic\\vic0_38.bin-n", 0x4697de, L"EX Kensou (Unused) Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX), 0xD35C0 },
    { L"data\\vic\\vic0_39.bin", 0x4697de, L"Kyo2 Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2), 0xD35C0 },
    { L"data\\vic\\vic0_3A.bin", 0x4697de, L"Goenitz Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz), 0xD35C0 },
    { L"data\\vic\\vic0_3B.bin", 0x4697de, L"Krizalid Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid), 0xD35C0 },
    { L"data\\vic\\vic0_3C.bin", 0x4697de, L"Clone Zero Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero), 0xD35C0 },
    { L"data\\vic\\vic0_3D.bin", 0x4697de, L"Original Zero Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG), 0xD35C0 },
    { L"data\\vic\\vic0_3E.bin", 0x4697de, L"Igniz Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz), 0xD35C0 },
    //{ L"data\\vic\\vic0_3F.bin-n", 0x4697de, L"Unknown (Unused) Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY), 0xD35C0 },
    { L"data\\vic\\vic0_40.bin", 0x4697de, L"Orochi Yashiro Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi), 0xD35C0 },
    { L"data\\vic\\vic0_41.bin", 0x4697de, L"Orochi Shermie Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi), 0xD35C0 },
    { L"data\\vic\\vic0_42.bin", 0x4697de, L"Orochi Chris Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi), 0xD35C0 },

    { L"data\\vic\\vic0_43.bin", 0x4697de, L"Leona Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic0_44.bin", 0x4697de, L"Mai Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic0_45.bin", 0x4697de, L"May Lee Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic0_46.bin", 0x4697de, L"Kula Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic0_47.bin", 0x4697de, L"Nameless Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic0_48.bin", 0x4697de, L"Kasumi Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi), 0xD35C0 },
    //{ L"data\\vic\\vic0_49.bin", 0x4697de, L"Mai Special Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    //{ L"data\\vic\\vic0_4A.bin-n", 0x4697de, L"Bao (Unused) Victory portraits (Arcade Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },

    { L"data\\vic\\vic1_00.bin", 0x4680f6, L"Kyo Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa), 0xD35C0 },
    { L"data\\vic\\vic1_01.bin", 0x4680f6, L"Benimaru Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru), 0xD35C0 },
    { L"data\\vic\\vic1_02.bin", 0x4680f6, L"Daimon Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon), 0xD35C0 },
    { L"data\\vic\\vic1_03.bin", 0x4680f6, L"Terry Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry), 0xD35C0 },
    { L"data\\vic\\vic1_04.bin", 0x4680f6, L"Andy Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy), 0xD35C0 },
    { L"data\\vic\\vic1_05.bin", 0x4680f6, L"Joe Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe), 0xD35C0 },
    { L"data\\vic\\vic1_06.bin", 0x4680f6, L"Kim Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim), 0xD35C0 },
    { L"data\\vic\\vic1_07.bin", 0x4680f6, L"Chang Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang), 0xD35C0 },
    { L"data\\vic\\vic1_08.bin", 0x4680f6, L"Choi Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi), 0xD35C0 },
    { L"data\\vic\\vic1_09.bin", 0x4680f6, L"Athena Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena), 0xD35C0 },
    { L"data\\vic\\vic1_0A.bin", 0x4680f6, L"Kensou Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou), 0xD35C0 },
    { L"data\\vic\\vic1_0B.bin", 0x4680f6, L"Chin Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin), 0xD35C0 },
    { L"data\\vic\\vic1_0C.bin", 0x4680f6, L"Leona Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic1_0D.bin", 0x4680f6, L"Ralf Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf), 0xD35C0 },
    { L"data\\vic\\vic1_0E.bin", 0x4680f6, L"Clark Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark), 0xD35C0 },
    { L"data\\vic\\vic1_0F.bin", 0x4680f6, L"Ryo Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo), 0xD35C0 },
    { L"data\\vic\\vic1_10.bin", 0x4680f6, L"Robert Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert), 0xD35C0 },
    { L"data\\vic\\vic1_11.bin", 0x4680f6, L"Takuma Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma), 0xD35C0 },
    { L"data\\vic\\vic1_12.bin", 0x4680f6, L"Mai Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic1_13.bin", 0x4680f6, L"Yuri Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri), 0xD35C0 },
    { L"data\\vic\\vic1_14.bin", 0x4680f6, L"May Lee Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic1_15.bin", 0x4680f6, L"Iori Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori), 0xD35C0 },
    { L"data\\vic\\vic1_16.bin", 0x4680f6, L"Mature Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature), 0xD35C0 },
    { L"data\\vic\\vic1_17.bin", 0x4680f6, L"Vice Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice), 0xD35C0 },
    { L"data\\vic\\vic1_18.bin", 0x4680f6, L"Yamazaki Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki), 0xD35C0 },
    { L"data\\vic\\vic1_19.bin", 0x4680f6, L"Blue Mary Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary), 0xD35C0 },
    { L"data\\vic\\vic1_1A.bin", 0x4680f6, L"Billy Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy), 0xD35C0 },
    { L"data\\vic\\vic1_1B.bin", 0x4680f6, L"Yashiro Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro), 0xD35C0 },
    { L"data\\vic\\vic1_1C.bin", 0x4680f6, L"Shermie Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie), 0xD35C0 },
    { L"data\\vic\\vic1_1D.bin", 0x4680f6, L"Chris Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris), 0xD35C0 },
    { L"data\\vic\\vic1_1E.bin", 0x4680f6, L"K' Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K), 0xD35C0 },
    { L"data\\vic\\vic1_1F.bin", 0x4680f6, L"Maxima Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima), 0xD35C0 },
    { L"data\\vic\\vic1_20.bin", 0x4680f6, L"Whip Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip), 0xD35C0 },
    { L"data\\vic\\vic1_21.bin", 0x4680f6, L"Vanessa Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa), 0xD35C0 },
    { L"data\\vic\\vic1_22.bin", 0x4680f6, L"Seth Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth), 0xD35C0 },
    { L"data\\vic\\vic1_23.bin", 0x4680f6, L"Ramon Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon), 0xD35C0 },
    { L"data\\vic\\vic1_24.bin", 0x4680f6, L"Kula Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic1_25.bin", 0x4680f6, L"Nameless Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic1_26.bin", 0x4680f6, L"Angel Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel), 0xD35C0 },
    { L"data\\vic\\vic1_27.bin", 0x4680f6, L"Omega Rugal Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal), 0xD35C0 },
    { L"data\\vic\\vic1_28.bin", 0x4680f6, L"KUSANAGI Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi), 0xD35C0 },
    { L"data\\vic\\vic1_29.bin", 0x4680f6, L"Shingo Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo), 0xD35C0 },
    { L"data\\vic\\vic1_2A.bin", 0x4680f6, L"King Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King), 0xD35C0 },
    { L"data\\vic\\vic1_2B.bin", 0x4680f6, L"Xiangfei Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei), 0xD35C0 },
    { L"data\\vic\\vic1_2C.bin", 0x4680f6, L"Hinako Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako), 0xD35C0 },
    { L"data\\vic\\vic1_2D.bin", 0x4680f6, L"Heidern Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern), 0xD35C0 },
    { L"data\\vic\\vic1_2E.bin", 0x4680f6, L"Lin Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin), 0xD35C0 },
    //{ L"data\\vic\\vic1_2F.bin-n", 0x4680f6, L"TakumaEX (Unused) Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX), 0xD35C0 },
    { L"data\\vic\\vic1_30.bin", 0x4680f6, L"Bao Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },
    { L"data\\vic\\vic1_31.bin", 0x4680f6, L"Jhun Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun), 0xD35C0 },
    { L"data\\vic\\vic1_32.bin", 0x4680f6, L"Kyo1 Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1), 0xD35C0 },
    { L"data\\vic\\vic1_33.bin", 0x4680f6, L"Foxy Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy), 0xD35C0 },
    { L"data\\vic\\vic1_34.bin", 0x4680f6, L"Kasumi Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi), 0xD35C0 },
    { L"data\\vic\\vic1_35.bin", 0x4680f6, L"Geese Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese), 0xD35C0 },
    { L"data\\vic\\vic1_36.bin", 0x4680f6, L"Nightmare Geese Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM), 0xD35C0 },
    //{ L"data\\vic\\vic1_37.bin-n", 0x4680f6, L"EX Robert (Unused) Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX), 0xD35C0 },
    //{ L"data\\vic\\vic1_38.bin-n", 0x4680f6, L"EX Kensou (Unused) Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX), 0xD35C0 },
    { L"data\\vic\\vic1_39.bin", 0x4680f6, L"Kyo2 Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2), 0xD35C0 },
    { L"data\\vic\\vic1_3A.bin", 0x4680f6, L"Goenitz Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz), 0xD35C0 },
    { L"data\\vic\\vic1_3B.bin", 0x4680f6, L"Krizalid Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid), 0xD35C0 },
    { L"data\\vic\\vic1_3C.bin", 0x4680f6, L"Clone Zero Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero), 0xD35C0 },
    { L"data\\vic\\vic1_3D.bin", 0x4680f6, L"Original Zero Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG), 0xD35C0 },
    { L"data\\vic\\vic1_3E.bin", 0x4680f6, L"Igniz Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz), 0xD35C0 },
    //{ L"data\\vic\\vic1_3F.bin-n", 0x4680f6, L"Unknown (Unused) Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY), 0xD35C0 },
    { L"data\\vic\\vic1_40.bin", 0x4680f6, L"Orochi Yashiro Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi), 0xD35C0 },
    { L"data\\vic\\vic1_41.bin", 0x4680f6, L"Orochi Shermie Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi), 0xD35C0 },
    { L"data\\vic\\vic1_42.bin", 0x4680f6, L"Orochi Chris Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi), 0xD35C0 },

    { L"data\\vic\\vic1_43.bin", 0x4680f6, L"Leona Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic1_44.bin", 0x4680f6, L"Mai Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic1_45.bin", 0x4680f6, L"May Lee Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic1_46.bin", 0x4680f6, L"Kula Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic1_47.bin", 0x4680f6, L"Nameless Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic1_48.bin", 0x4680f6, L"Kasumi Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi), 0xD35C0 },
    //{ L"data\\vic\\vic1_49.bin", 0x4680f6, L"Mai Special Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    //{ L"data\\vic\\vic1_4A.bin-n", 0x4680f6, L"Bao (Unused) Victory portraits (Arcade Mode, Loss)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },

    { L"data\\vic\\vic2_00.bin", 0x468d1a, L"Kyo Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa), 0xD35C0 },
    { L"data\\vic\\vic2_01.bin", 0x468d1a, L"Benimaru Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru), 0xD35C0 },
    { L"data\\vic\\vic2_02.bin", 0x468d1a, L"Daimon Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon), 0xD35C0 },
    { L"data\\vic\\vic2_03.bin", 0x468d1a, L"Terry Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry), 0xD35C0 },
    { L"data\\vic\\vic2_04.bin", 0x468d1a, L"Andy Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy), 0xD35C0 },
    { L"data\\vic\\vic2_05.bin", 0x468d1a, L"Joe Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe), 0xD35C0 },
    { L"data\\vic\\vic2_06.bin", 0x468d1a, L"Kim Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim), 0xD35C0 },
    { L"data\\vic\\vic2_07.bin", 0x468d1a, L"Chang Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang), 0xD35C0 },
    { L"data\\vic\\vic2_08.bin", 0x468d1a, L"Choi Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi), 0xD35C0 },
    { L"data\\vic\\vic2_09.bin", 0x468d1a, L"Athena Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena), 0xD35C0 },
    { L"data\\vic\\vic2_0A.bin", 0x468d1a, L"Kensou Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou), 0xD35C0 },
    { L"data\\vic\\vic2_0B.bin", 0x468d1a, L"Chin Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin), 0xD35C0 },
    { L"data\\vic\\vic2_0C.bin", 0x468d1a, L"Leona Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic2_0D.bin", 0x468d1a, L"Ralf Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf), 0xD35C0 },
    { L"data\\vic\\vic2_0E.bin", 0x468d1a, L"Clark Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark), 0xD35C0 },
    { L"data\\vic\\vic2_0F.bin", 0x468d1a, L"Ryo Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo), 0xD35C0 },
    { L"data\\vic\\vic2_10.bin", 0x468d1a, L"Robert Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert), 0xD35C0 },
    { L"data\\vic\\vic2_11.bin", 0x468d1a, L"Takuma Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma), 0xD35C0 },
    { L"data\\vic\\vic2_12.bin", 0x468d1a, L"Mai Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic2_13.bin", 0x468d1a, L"Yuri Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri), 0xD35C0 },
    { L"data\\vic\\vic2_14.bin", 0x468d1a, L"May Lee Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic2_15.bin", 0x468d1a, L"Iori Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori), 0xD35C0 },
    { L"data\\vic\\vic2_16.bin", 0x468d1a, L"Mature Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature), 0xD35C0 },
    { L"data\\vic\\vic2_17.bin", 0x468d1a, L"Vice Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice), 0xD35C0 },
    { L"data\\vic\\vic2_18.bin", 0x468d1a, L"Yamazaki Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki), 0xD35C0 },
    { L"data\\vic\\vic2_19.bin", 0x468d1a, L"Blue Mary Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary), 0xD35C0 },
    { L"data\\vic\\vic2_1A.bin", 0x468d1a, L"Billy Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy), 0xD35C0 },
    { L"data\\vic\\vic2_1B.bin", 0x468d1a, L"Yashiro Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro), 0xD35C0 },
    { L"data\\vic\\vic2_1C.bin", 0x468d1a, L"Shermie Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie), 0xD35C0 },
    { L"data\\vic\\vic2_1D.bin", 0x468d1a, L"Chris Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris), 0xD35C0 },
    { L"data\\vic\\vic2_1E.bin", 0x468d1a, L"K' Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K), 0xD35C0 },
    { L"data\\vic\\vic2_1F.bin", 0x468d1a, L"Maxima Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima), 0xD35C0 },
    { L"data\\vic\\vic2_20.bin", 0x468d1a, L"Whip Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip), 0xD35C0 },
    { L"data\\vic\\vic2_21.bin", 0x468d1a, L"Vanessa Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa), 0xD35C0 },
    { L"data\\vic\\vic2_22.bin", 0x468d1a, L"Seth Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth), 0xD35C0 },
    { L"data\\vic\\vic2_23.bin", 0x468d1a, L"Ramon Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon), 0xD35C0 },
    { L"data\\vic\\vic2_24.bin", 0x468d1a, L"Kula Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic2_25.bin", 0x468d1a, L"Nameless Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic2_26.bin", 0x468d1a, L"Angel Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel), 0xD35C0 },
    { L"data\\vic\\vic2_27.bin", 0x468d1a, L"Omega Rugal Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal), 0xD35C0 },
    { L"data\\vic\\vic2_28.bin", 0x468d1a, L"KUSANAGI Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi), 0xD35C0 },
    { L"data\\vic\\vic2_29.bin", 0x468d1a, L"Shingo Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo), 0xD35C0 },
    { L"data\\vic\\vic2_2A.bin", 0x468d1a, L"King Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King), 0xD35C0 },
    { L"data\\vic\\vic2_2B.bin", 0x468d1a, L"Xiangfei Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei), 0xD35C0 },
    { L"data\\vic\\vic2_2C.bin", 0x468d1a, L"Hinako Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako), 0xD35C0 },
    { L"data\\vic\\vic2_2D.bin", 0x468d1a, L"Heidern Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern), 0xD35C0 },
    { L"data\\vic\\vic2_2E.bin", 0x468d1a, L"Lin Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin), 0xD35C0 },
    //{ L"data\\vic\\vic2_2F.bin-n", 0x468d1a, L"TakumaEX (Unused) Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX), 0xD35C0 },
    { L"data\\vic\\vic2_30.bin", 0x468d1a, L"Bao Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },
    { L"data\\vic\\vic2_31.bin", 0x468d1a, L"Jhun Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun), 0xD35C0 },
    { L"data\\vic\\vic2_32.bin", 0x468d1a, L"Kyo1 Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1), 0xD35C0 },
    { L"data\\vic\\vic2_33.bin", 0x468d1a, L"Foxy Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy), 0xD35C0 },
    { L"data\\vic\\vic2_34.bin", 0x468d1a, L"Kasumi Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi), 0xD35C0 },
    { L"data\\vic\\vic2_35.bin", 0x468d1a, L"Geese Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese), 0xD35C0 },
    { L"data\\vic\\vic2_36.bin", 0x468d1a, L"Nightmare Geese Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM), 0xD35C0 },
    //{ L"data\\vic\\vic2_37.bin-n", 0x468d1a, L"EX Robert (Unused) Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX), 0xD35C0 },
    //{ L"data\\vic\\vic2_38.bin-n", 0x468d1a, L"EX Kensou (Unused) Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX), 0xD35C0 },
    { L"data\\vic\\vic2_39.bin", 0x468d1a, L"Kyo2 Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2), 0xD35C0 },
    { L"data\\vic\\vic2_3A.bin", 0x468d1a, L"Goenitz Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz), 0xD35C0 },
    { L"data\\vic\\vic2_3B.bin", 0x468d1a, L"Krizalid Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid), 0xD35C0 },
    { L"data\\vic\\vic2_3C.bin", 0x468d1a, L"Clone Zero Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero), 0xD35C0 },
    { L"data\\vic\\vic2_3D.bin", 0x468d1a, L"Original Zero Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG), 0xD35C0 },
    { L"data\\vic\\vic2_3E.bin", 0x468d1a, L"Igniz Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz), 0xD35C0 },
    //{ L"data\\vic\\vic2_3F.bin-n", 0x468d1a, L"Unknown (Unused) Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY), 0xD35C0 },
    { L"data\\vic\\vic2_40.bin", 0x468d1a, L"Orochi Yashiro Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi), 0xD35C0 },
    { L"data\\vic\\vic2_41.bin", 0x468d1a, L"Orochi Shermie Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi), 0xD35C0 },
    { L"data\\vic\\vic2_42.bin", 0x468d1a, L"Orochi Chris Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi), 0xD35C0 },

    { L"data\\vic\\vic2_43.bin", 0x468d1a, L"Leona Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic2_44.bin", 0x468d1a, L"Mai Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic2_45.bin", 0x468d1a, L"May Lee Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic2_46.bin", 0x468d1a, L"Kula Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic2_47.bin", 0x468d1a, L"Nameless Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic2_48.bin", 0x468d1a, L"Kasumi Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi), 0xD35C0 },
    //{ L"data\\vic\\vic2_49.bin", 0x468d1a, L"Mai Special Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    //{ L"data\\vic\\vic2_4A.bin-n", 0x468d1a, L"Bao (Unused) Victory portraits (VS Mode, Team)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },

    { L"data\\vic\\vic3_00.bin", 0x468c12, L"Kyo Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa), 0xD35C0 },
    { L"data\\vic\\vic3_01.bin", 0x468c12, L"Benimaru Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru), 0xD35C0 },
    { L"data\\vic\\vic3_02.bin", 0x468c12, L"Daimon Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon), 0xD35C0 },
    { L"data\\vic\\vic3_03.bin", 0x468c12, L"Terry Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry), 0xD35C0 },
    { L"data\\vic\\vic3_04.bin", 0x468c12, L"Andy Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy), 0xD35C0 },
    { L"data\\vic\\vic3_05.bin", 0x468c12, L"Joe Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe), 0xD35C0 },
    { L"data\\vic\\vic3_06.bin", 0x468c12, L"Kim Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim), 0xD35C0 },
    { L"data\\vic\\vic3_07.bin", 0x468c12, L"Chang Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang), 0xD35C0 },
    { L"data\\vic\\vic3_08.bin", 0x468c12, L"Choi Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi), 0xD35C0 },
    { L"data\\vic\\vic3_09.bin", 0x468c12, L"Athena Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena), 0xD35C0 },
    { L"data\\vic\\vic3_0A.bin", 0x468c12, L"Kensou Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou), 0xD35C0 },
    { L"data\\vic\\vic3_0B.bin", 0x468c12, L"Chin Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin), 0xD35C0 },
    { L"data\\vic\\vic3_0C.bin", 0x468c12, L"Leona Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic3_0D.bin", 0x468c12, L"Ralf Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf), 0xD35C0 },
    { L"data\\vic\\vic3_0E.bin", 0x468c12, L"Clark Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark), 0xD35C0 },
    { L"data\\vic\\vic3_0F.bin", 0x468c12, L"Ryo Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo), 0xD35C0 },
    { L"data\\vic\\vic3_10.bin", 0x468c12, L"Robert Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert), 0xD35C0 },
    { L"data\\vic\\vic3_11.bin", 0x468c12, L"Takuma Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma), 0xD35C0 },
    { L"data\\vic\\vic3_12.bin", 0x468c12, L"Mai Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic3_13.bin", 0x468c12, L"Yuri Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri), 0xD35C0 },
    { L"data\\vic\\vic3_14.bin", 0x468c12, L"May Lee Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic3_15.bin", 0x468c12, L"Iori Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori), 0xD35C0 },
    { L"data\\vic\\vic3_16.bin", 0x468c12, L"Mature Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature), 0xD35C0 },
    { L"data\\vic\\vic3_17.bin", 0x468c12, L"Vice Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice), 0xD35C0 },
    { L"data\\vic\\vic3_18.bin", 0x468c12, L"Yamazaki Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki), 0xD35C0 },
    { L"data\\vic\\vic3_19.bin", 0x468c12, L"Blue Mary Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary), 0xD35C0 },
    { L"data\\vic\\vic3_1A.bin", 0x468c12, L"Billy Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy), 0xD35C0 },
    { L"data\\vic\\vic3_1B.bin", 0x468c12, L"Yashiro Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro), 0xD35C0 },
    { L"data\\vic\\vic3_1C.bin", 0x468c12, L"Shermie Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie), 0xD35C0 },
    { L"data\\vic\\vic3_1D.bin", 0x468c12, L"Chris Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris), 0xD35C0 },
    { L"data\\vic\\vic3_1E.bin", 0x468c12, L"K' Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K), 0xD35C0 },
    { L"data\\vic\\vic3_1F.bin", 0x468c12, L"Maxima Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima), 0xD35C0 },
    { L"data\\vic\\vic3_20.bin", 0x468c12, L"Whip Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip), 0xD35C0 },
    { L"data\\vic\\vic3_21.bin", 0x468c12, L"Vanessa Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa), 0xD35C0 },
    { L"data\\vic\\vic3_22.bin", 0x468c12, L"Seth Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth), 0xD35C0 },
    { L"data\\vic\\vic3_23.bin", 0x468c12, L"Ramon Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon), 0xD35C0 },
    { L"data\\vic\\vic3_24.bin", 0x468c12, L"Kula Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic3_25.bin", 0x468c12, L"Nameless Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic3_26.bin", 0x468c12, L"Angel Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel), 0xD35C0 },
    { L"data\\vic\\vic3_27.bin", 0x468c12, L"Omega Rugal Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal), 0xD35C0 },
    { L"data\\vic\\vic3_28.bin", 0x468c12, L"KUSANAGI Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi), 0xD35C0 },
    { L"data\\vic\\vic3_29.bin", 0x468c12, L"Shingo Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo), 0xD35C0 },
    { L"data\\vic\\vic3_2A.bin", 0x468c12, L"King Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King), 0xD35C0 },
    { L"data\\vic\\vic3_2B.bin", 0x468c12, L"Xiangfei Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei), 0xD35C0 },
    { L"data\\vic\\vic3_2C.bin", 0x468c12, L"Hinako Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako), 0xD35C0 },
    { L"data\\vic\\vic3_2D.bin", 0x468c12, L"Heidern Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern), 0xD35C0 },
    { L"data\\vic\\vic3_2E.bin", 0x468c12, L"Lin Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin), 0xD35C0 },
    //{ L"data\\vic\\vic3_2F.bin-n", 0x468c12, L"TakumaEX (Unused) Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX), 0xD35C0 },
    { L"data\\vic\\vic3_30.bin", 0x468c12, L"Bao Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },
    { L"data\\vic\\vic3_31.bin", 0x468c12, L"Jhun Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun), 0xD35C0 },
    { L"data\\vic\\vic3_32.bin", 0x468c12, L"Kyo1 Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1), 0xD35C0 },
    { L"data\\vic\\vic3_33.bin", 0x468c12, L"Foxy Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy), 0xD35C0 },
    { L"data\\vic\\vic3_34.bin", 0x468c12, L"Kasumi Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi), 0xD35C0 },
    { L"data\\vic\\vic3_35.bin", 0x468c12, L"Geese Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese), 0xD35C0 },
    { L"data\\vic\\vic3_36.bin", 0x468c12, L"Nightmare Geese Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM), 0xD35C0 },
    //{ L"data\\vic\\vic3_37.bin-n", 0x468c12, L"EX Robert (Unused) Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX), 0xD35C0 },
    //{ L"data\\vic\\vic3_38.bin-n", 0x468c12, L"EX Kensou (Unused) Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX), 0xD35C0 },
    { L"data\\vic\\vic3_39.bin", 0x468c12, L"Kyo2 Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2), 0xD35C0 },
    { L"data\\vic\\vic3_3A.bin", 0x468c12, L"Goenitz Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz), 0xD35C0 },
    { L"data\\vic\\vic3_3B.bin", 0x468c12, L"Krizalid Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid), 0xD35C0 },
    { L"data\\vic\\vic3_3C.bin", 0x468c12, L"Clone Zero Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero), 0xD35C0 },
    { L"data\\vic\\vic3_3D.bin", 0x468c12, L"Original Zero Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG), 0xD35C0 },
    { L"data\\vic\\vic3_3E.bin", 0x468c12, L"Igniz Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz), 0xD35C0 },
    //{ L"data\\vic\\vic3_3F.bin-n", 0x468c12, L"Unknown (Unused) Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY), 0xD35C0 },
    { L"data\\vic\\vic3_40.bin", 0x468c12, L"Orochi Yashiro Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi), 0xD35C0 },
    { L"data\\vic\\vic3_41.bin", 0x468c12, L"Orochi Shermie Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi), 0xD35C0 },
    { L"data\\vic\\vic3_42.bin", 0x468c12, L"Orochi Chris Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi), 0xD35C0 },

    { L"data\\vic\\vic3_43.bin", 0x468c12, L"Leona Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic3_44.bin", 0x468c12, L"Mai Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic3_45.bin", 0x468c12, L"May Lee Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic3_46.bin", 0x468c12, L"Kula Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic3_47.bin", 0x468c12, L"Nameless Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic3_48.bin", 0x468c12, L"Kasumi Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi), 0xD35C0 },
    //{ L"data\\vic\\vic3_49.bin", 0x468c12, L"Mai Special Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    //{ L"data\\vic\\vic3_4A.bin-n", 0x468c12, L"Bao (Unused) Victory portraits (Arcade Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },

    { L"data\\vic\\vic4_00.bin", 0x46814a, L"Kyo Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KyoKusa), 0xD35C0 },
    { L"data\\vic\\vic4_01.bin", 0x46814a, L"Benimaru Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Benimaru), 0xD35C0 },
    { L"data\\vic\\vic4_02.bin", 0x46814a, L"Daimon Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Daimon), 0xD35C0 },
    { L"data\\vic\\vic4_03.bin", 0x46814a, L"Terry Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Terry), 0xD35C0 },
    { L"data\\vic\\vic4_04.bin", 0x46814a, L"Andy Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Andy), 0xD35C0 },
    { L"data\\vic\\vic4_05.bin", 0x46814a, L"Joe Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Joe), 0xD35C0 },
    { L"data\\vic\\vic4_06.bin", 0x46814a, L"Kim Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kim), 0xD35C0 },
    { L"data\\vic\\vic4_07.bin", 0x46814a, L"Chang Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chang), 0xD35C0 },
    { L"data\\vic\\vic4_08.bin", 0x46814a, L"Choi Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Choi), 0xD35C0 },
    { L"data\\vic\\vic4_09.bin", 0x46814a, L"Athena Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Athena), 0xD35C0 },
    { L"data\\vic\\vic4_0A.bin", 0x46814a, L"Kensou Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kensou), 0xD35C0 },
    { L"data\\vic\\vic4_0B.bin", 0x46814a, L"Chin Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chin), 0xD35C0 },
    { L"data\\vic\\vic4_0C.bin", 0x46814a, L"Leona Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic4_0D.bin", 0x46814a, L"Ralf Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ralf), 0xD35C0 },
    { L"data\\vic\\vic4_0E.bin", 0x46814a, L"Clark Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Clark), 0xD35C0 },
    { L"data\\vic\\vic4_0F.bin", 0x46814a, L"Ryo Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ryo), 0xD35C0 },
    { L"data\\vic\\vic4_10.bin", 0x46814a, L"Robert Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Robert), 0xD35C0 },
    { L"data\\vic\\vic4_11.bin", 0x46814a, L"Takuma Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Takuma), 0xD35C0 },
    { L"data\\vic\\vic4_12.bin", 0x46814a, L"Mai Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic4_13.bin", 0x46814a, L"Yuri Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yuri), 0xD35C0 },
    { L"data\\vic\\vic4_14.bin", 0x46814a, L"May Lee Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic4_15.bin", 0x46814a, L"Iori Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Iori), 0xD35C0 },
    { L"data\\vic\\vic4_16.bin", 0x46814a, L"Mature Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Mature), 0xD35C0 },
    { L"data\\vic\\vic4_17.bin", 0x46814a, L"Vice Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vice), 0xD35C0 },
    { L"data\\vic\\vic4_18.bin", 0x46814a, L"Yamazaki Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yamazaki), 0xD35C0 },
    { L"data\\vic\\vic4_19.bin", 0x46814a, L"Blue Mary Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_BlueMary), 0xD35C0 },
    { L"data\\vic\\vic4_1A.bin", 0x46814a, L"Billy Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Billy), 0xD35C0 },
    { L"data\\vic\\vic4_1B.bin", 0x46814a, L"Yashiro Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Yashiro), 0xD35C0 },
    { L"data\\vic\\vic4_1C.bin", 0x46814a, L"Shermie Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shermie), 0xD35C0 },
    { L"data\\vic\\vic4_1D.bin", 0x46814a, L"Chris Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Chris), 0xD35C0 },
    { L"data\\vic\\vic4_1E.bin", 0x46814a, L"K' Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_K), 0xD35C0 },
    { L"data\\vic\\vic4_1F.bin", 0x46814a, L"Maxima Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Maxima), 0xD35C0 },
    { L"data\\vic\\vic4_20.bin", 0x46814a, L"Whip Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Whip), 0xD35C0 },
    { L"data\\vic\\vic4_21.bin", 0x46814a, L"Vanessa Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Vanessa), 0xD35C0 },
    { L"data\\vic\\vic4_22.bin", 0x46814a, L"Seth Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Seth), 0xD35C0 },
    { L"data\\vic\\vic4_23.bin", 0x46814a, L"Ramon Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Ramon), 0xD35C0 },
    { L"data\\vic\\vic4_24.bin", 0x46814a, L"Kula Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic4_25.bin", 0x46814a, L"Nameless Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic4_26.bin", 0x46814a, L"Angel Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Angel), 0xD35C0 },
    { L"data\\vic\\vic4_27.bin", 0x46814a, L"Omega Rugal Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_OmegaRugal), 0xD35C0 },
    { L"data\\vic\\vic4_28.bin", 0x46814a, L"KUSANAGI Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kusanagi), 0xD35C0 },
    { L"data\\vic\\vic4_29.bin", 0x46814a, L"Shingo Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Shingo), 0xD35C0 },
    { L"data\\vic\\vic4_2A.bin", 0x46814a, L"King Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_King), 0xD35C0 },
    { L"data\\vic\\vic4_2B.bin", 0x46814a, L"Xiangfei Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Xiangfei), 0xD35C0 },
    { L"data\\vic\\vic4_2C.bin", 0x46814a, L"Hinako Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Hinako), 0xD35C0 },
    { L"data\\vic\\vic4_2D.bin", 0x46814a, L"Heidern Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Heidern), 0xD35C0 },
    { L"data\\vic\\vic4_2E.bin", 0x46814a, L"Lin Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Lin), 0xD35C0 },
    //{ L"data\\vic\\vic4_2F.bin-n", 0x46814a, L"TakumaEX (Unused) Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_TakumaEX), 0xD35C0 },
    { L"data\\vic\\vic4_30.bin", 0x46814a, L"Bao Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },
    { L"data\\vic\\vic4_31.bin", 0x46814a, L"Jhun Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Jhun), 0xD35C0 },
    { L"data\\vic\\vic4_32.bin", 0x46814a, L"Kyo1 Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo1), 0xD35C0 },
    { L"data\\vic\\vic4_33.bin", 0x46814a, L"Foxy Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Foxy), 0xD35C0 },
    { L"data\\vic\\vic4_34.bin", 0x46814a, L"Kasumi Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kasumi), 0xD35C0 },
    { L"data\\vic\\vic4_35.bin", 0x46814a, L"Geese Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Geese), 0xD35C0 },
    { L"data\\vic\\vic4_36.bin", 0x46814a, L"Nightmare Geese Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_GeeseNM), 0xD35C0 },
    //{ L"data\\vic\\vic4_37.bin-n", 0x46814a, L"EX Robert (Unused) Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_RobertEX), 0xD35C0 },
    //{ L"data\\vic\\vic4_38.bin-n", 0x46814a, L"EX Kensou (Unused) Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_KensouEX), 0xD35C0 },
    { L"data\\vic\\vic4_39.bin", 0x46814a, L"Kyo2 Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Kyo2), 0xD35C0 },
    { L"data\\vic\\vic4_3A.bin", 0x46814a, L"Goenitz Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Goenitz), 0xD35C0 },
    { L"data\\vic\\vic4_3B.bin", 0x46814a, L"Krizalid Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Krizalid), 0xD35C0 },
    { L"data\\vic\\vic4_3C.bin", 0x46814a, L"Clone Zero Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_CloneZero), 0xD35C0 },
    { L"data\\vic\\vic4_3D.bin", 0x46814a, L"Original Zero Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ZeroOG), 0xD35C0 },
    { L"data\\vic\\vic4_3E.bin", 0x46814a, L"Igniz Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Igniz), 0xD35C0 },
    //{ L"data\\vic\\vic4_3F.bin-n", 0x46814a, L"Unknown (Unused) Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY), 0xD35C0 },
    { L"data\\vic\\vic4_40.bin", 0x46814a, L"Orochi Yashiro Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_YashiroOChi), 0xD35C0 },
    { L"data\\vic\\vic4_41.bin", 0x46814a, L"Orochi Shermie Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ShermieOChi), 0xD35C0 },
    { L"data\\vic\\vic4_42.bin", 0x46814a, L"Orochi Chris Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_ChrisOChi), 0xD35C0 },

    { L"data\\vic\\vic4_43.bin", 0x46814a, L"Leona Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Leona), 0xD35C0 },
    { L"data\\vic\\vic4_44.bin", 0x46814a, L"Mai Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    { L"data\\vic\\vic4_45.bin", 0x46814a, L"May Lee Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_MayLee), 0xD35C0 },
    { L"data\\vic\\vic4_46.bin", 0x46814a, L"Kula Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kula), 0xD35C0 },
    { L"data\\vic\\vic4_47.bin", 0x46814a, L"Nameless Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Nameless), 0xD35C0 },
    { L"data\\vic\\vic4_48.bin", 0x46814a, L"Kasumi Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Kasumi), 0xD35C0 },
    //{ L"data\\vic\\vic4_49.bin", 0x46814a, L"Mai Special Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_SPECIALVICTORY_Mai), 0xD35C0 },
    //{ L"data\\vic\\vic4_4A.bin-n", 0x46814a, L"Bao (Unused) Victory portraits (VS Mode, Single)", KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao, ARRAYSIZE(KOF02UM_S_PORTRAIT_COLLECTION_VICTORY_Bao), 0xD35C0 },

    { L"data\\bg_bin\\bga0.bin", 0x2514c0, L"Japan High School Stage", KOF02UM_PS2_STAGES_COLLECTION_JAPAN, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_JAPAN) },
    { L"data\\bg_bin\\bgb0.bin", 0x27d950, L"Korea-1 Stage", KOF02UM_PS2_STAGES_COLLECTION_KOREA, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KOREA) },
    { L"data\\bg_bin\\bgb1.bin", 0x27ddc0, L"Korea-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_KOREA2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KOREA2) },
    { L"data\\bg_bin\\bgb2.bin", 0x27db90, L"Korea-3 Stage", KOF02UM_PS2_STAGES_COLLECTION_KOREA3, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KOREA3) },
    { L"data\\bg_bin\\bgc0.bin", 0x20d400, L"China Stage", KOF02UM_PS2_STAGES_COLLECTION_CHINA, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CHINA) },
    { L"data\\bg_bin\\bgd0.bin", 0x26bf90, L"USA Stage", KOF02UM_PS2_STAGES_COLLECTION_USA, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_USA) },
    { L"data\\bg_bin\\bge0.bin", 0x23e620, L"Cambodia-1 Stage", KOF02UM_PS2_STAGES_COLLECTION_CAMBODIA, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CAMBODIA) },
    { L"data\\bg_bin\\bge4.bin", 0x24f910, L"Cambodia-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_CAMBODIA2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CAMBODIA2) },
    { L"data\\bg_bin\\bgf0.bin", 0x21bd90, L"Taiwan-1 Stage", KOF02UM_PS2_STAGES_COLLECTION_TAIWAN, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_TAIWAN) },
    { L"data\\bg_bin\\bgf1.bin", 0x22f2a0, L"Taiwan-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_TAIWAN2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_TAIWAN2) },
    { L"data\\bg_bin\\bgg0.bin", 0x2324a0, L"Italy-1 Stage", KOF02UM_PS2_STAGES_COLLECTION_ITALY, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_ITALY) },
    { L"data\\bg_bin\\bgg1.bin", 0x241060, L"Italy-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_ITALY2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_ITALY2) },
    { L"data\\bg_bin\\bgg2.bin", 0x1ea540, L"Italy-3 Stage", KOF02UM_PS2_STAGES_COLLECTION_ITALY3, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_ITALY3) },
    { L"data\\bg_bin\\bgh0.bin", 0x246140, L"Greece Stage", KOF02UM_PS2_STAGES_COLLECTION_GREECE, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_GREECE) },
    { L"data\\bg_bin\\bgi0.bin", 0x25f8b0, L"NeoGeo World-1 Stage", KOF02UM_PS2_STAGES_COLLECTION_NEOGEO, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_NEOGEO) },
    { L"data\\bg_bin\\bgi1.bin", 0x2398f0, L"NeoGeo World-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_NEOGEO2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_NEOGEO2) },
    { L"data\\bg_bin\\bgj0.bin", 0x1a2840, L"Clone Factory Stage", KOF02UM_PS2_STAGES_COLLECTION_CLONE, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CLONE) },
    //{ L"data\\bg_bin\\bgj1.bin", 5804748, L"Clone Factory-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_CLONE2, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CLONE2) },
    { L"data\\bg_bin\\bgk0.bin", 0xfc5e0, L"Rugal Stage", KOF02UM_PS2_STAGES_COLLECTION_RUGAL, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_RUGAL) },
    // What is the L stage set?
    //{ L"data\\bg_bin\\bgl0.bin", 2, L"Krizalid Stage", KOF02UM_PS2_STAGES_COLLECTION_KOREA, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KOREA) },
    { L"data\\bg_bin\\bgm0.bin", 0x27fa90, L"Krizalid Stage", KOF02UM_PS2_STAGES_COLLECTION_KRIZALID, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KRIZALID) },
    //{ L"data\\bg_bin\\bgm1.bin", 2647066, L"Krizalid-2 Stage", KOF02UM_PS2_STAGES_COLLECTION_KRIZALID, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_KRIZALID) },
    { L"data\\bg_bin\\bgn0.bin", 0x167400, L"Clone Zero Stage", KOF02UM_PS2_STAGES_COLLECTION_CLONEZERO, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_CLONEZERO) },
    { L"data\\bg_bin\\bgo0.bin", 0x197120, L"Original Zero Stage", KOF02UM_PS2_STAGES_COLLECTION_ORIGINALZERO, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_ORIGINALZERO) },
    { L"data\\bg_bin\\bgp0.bin", 0x227280, L"Igniz Stage", KOF02UM_PS2_STAGES_COLLECTION_IGNIZ, ARRAYSIZE(KOF02UM_PS2_STAGES_COLLECTION_IGNIZ) },
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

    { L"game\\base\\pal_a.bin", 394976, L"MAX2 Portraits", KOF02UM_S_PORTRAITS_COLLECTION, ARRAYSIZE(KOF02UM_S_PORTRAITS_COLLECTION) },

    { L"game\\base\\pal_a.bin", 394976, L"Bonus Palettes", KOF02UM_S_BONUS_COLLECTION, ARRAYSIZE(KOF02UM_S_BONUS_COLLECTION) },
};

const std::vector<sGameUnitsByFile> KOF02UM_PS2_DIR_RGB555_UNITS =
{
    { L"data\\base\\pal_a.bin", 394976, L"Kyo", KOF02UM_S_KYO_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO_COLLECTION)},
    { L"data\\base\\pal_a.bin", 394976, L"Benimaru", KOF02UM_S_BENIMARU_COLLECTION, ARRAYSIZE(KOF02UM_S_BENIMARU_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Daimon", KOF02UM_S_DAIMON_COLLECTION, ARRAYSIZE(KOF02UM_S_DAIMON_COLLECTION) },

    { L"data\\base\\pal_a.bin", 394976, L"Terry", KOF02UM_S_TERRY_COLLECTION, ARRAYSIZE(KOF02UM_S_TERRY_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Andy", KOF02UM_S_ANDY_COLLECTION, ARRAYSIZE(KOF02UM_S_ANDY_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Joe", KOF02UM_S_JOE_COLLECTION, ARRAYSIZE(KOF02UM_S_JOE_COLLECTION) },

    { L"data\\base\\pal_a.bin", 394976, L"Athena", KOF02UM_S_ATHENA_COLLECTION, ARRAYSIZE(KOF02UM_S_ATHENA_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Kensou", KOF02UM_S_KENSOU_COLLECTION, ARRAYSIZE(KOF02UM_S_KENSOU_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"EX Kensou", KOF02UM_S_EXKENSOU_COLLECTION, ARRAYSIZE(KOF02UM_S_EXKENSOU_COLLECTION) },

    { L"data\\base\\pal_a.bin", 394976, L"Bao", KOF02UM_S_BAO_COLLECTION, ARRAYSIZE(KOF02UM_S_BAO_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Leona", KOF02UM_S_LEONA_COLLECTION, ARRAYSIZE(KOF02UM_S_LEONA_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Ralf", KOF02UM_S_RALF_COLLECTION, ARRAYSIZE(KOF02UM_S_RALF_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Clark", KOF02UM_S_CLARK_COLLECTION, ARRAYSIZE(KOF02UM_S_CLARK_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"K’", KOF02UM_S_K_COLLECTION, ARRAYSIZE(KOF02UM_S_K_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Maxima", KOF02UM_S_MAXIMA_COLLECTION, ARRAYSIZE(KOF02UM_S_MAXIMA_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Whip", KOF02UM_S_WHIP_COLLECTION, ARRAYSIZE(KOF02UM_S_WHIP_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Kim", KOF02UM_S_KIM_COLLECTION, ARRAYSIZE(KOF02UM_S_KIM_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Chang", KOF02UM_S_CHANG_COLLECTION, ARRAYSIZE(KOF02UM_S_CHANG_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Choi", KOF02UM_S_CHOI_COLLECTION, ARRAYSIZE(KOF02UM_S_CHOI_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Yamazaki", KOF02UM_S_YAMAZAKI_COLLECTION, ARRAYSIZE(KOF02UM_S_YAMAZAKI_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Blue Mary", KOF02UM_S_BLUEMARY_COLLECTION, ARRAYSIZE(KOF02UM_S_BLUEMARY_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Billy", KOF02UM_S_BILLY_COLLECTION, ARRAYSIZE(KOF02UM_S_BILLY_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Xiangfei", KOF02UM_S_XIANGFEI_COLLECTION, ARRAYSIZE(KOF02UM_S_XIANGFEI_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Hinako", KOF02UM_S_HINAKO_COLLECTION, ARRAYSIZE(KOF02UM_S_HINAKO_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"May Lee", KOF02UM_S_MAYLEE_COLLECTION, ARRAYSIZE(KOF02UM_S_MAYLEE_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Iori", KOF02UM_S_IORI_COLLECTION, ARRAYSIZE(KOF02UM_S_IORI_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Mature", KOF02UM_S_MATURE_COLLECTION, ARRAYSIZE(KOF02UM_S_MATURE_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Vice", KOF02UM_S_VICE_COLLECTION, ARRAYSIZE(KOF02UM_S_VICE_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Ryo", KOF02UM_S_RYO_COLLECTION, ARRAYSIZE(KOF02UM_S_RYO_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Robert", KOF02UM_S_ROBERT_COLLECTION, ARRAYSIZE(KOF02UM_S_ROBERT_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"EX Robert", KOF02UM_S_EXROBERT_COLLECTION, ARRAYSIZE(KOF02UM_S_EXROBERT_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Yuri", KOF02UM_S_YURI_COLLECTION, ARRAYSIZE(KOF02UM_S_YURI_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Vanessa", KOF02UM_S_VANESSA_COLLECTION, ARRAYSIZE(KOF02UM_S_VANESSA_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Seth", KOF02UM_S_SETH_COLLECTION, ARRAYSIZE(KOF02UM_S_SETH_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Ramon", KOF02UM_S_RAMON_COLLECTION, ARRAYSIZE(KOF02UM_S_RAMON_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Yashiro", KOF02UM_S_YASHIRO_COLLECTION, ARRAYSIZE(KOF02UM_S_YASHIRO_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Orochi Yashiro", KOF02UM_S_OYASHIRO_COLLECTION, ARRAYSIZE(KOF02UM_S_OYASHIRO_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Shermie", KOF02UM_S_SHERMIE_COLLECTION, ARRAYSIZE(KOF02UM_S_SHERMIE_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Orochi Shermie", KOF02UM_S_OSHERMIE_COLLECTION, ARRAYSIZE(KOF02UM_S_OSHERMIE_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Chris", KOF02UM_S_CHRIS_COLLECTION, ARRAYSIZE(KOF02UM_S_CHRIS_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Orochi Chris", KOF02UM_S_OCHRIS_COLLECTION, ARRAYSIZE(KOF02UM_S_OCHRIS_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Kula", KOF02UM_S_KULA_COLLECTION, ARRAYSIZE(KOF02UM_S_KULA_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Foxy", KOF02UM_S_FOXY_COLLECTION, ARRAYSIZE(KOF02UM_S_FOXY_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Angel", KOF02UM_S_ANGEL_COLLECTION, ARRAYSIZE(KOF02UM_S_ANGEL_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Jhun Hoon", KOF02UM_S_JHUNHOON_COLLECTION, ARRAYSIZE(KOF02UM_S_JHUNHOON_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Lin", KOF02UM_S_LIN_COLLECTION, ARRAYSIZE(KOF02UM_S_LIN_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Shingo", KOF02UM_S_SHINGO_COLLECTION, ARRAYSIZE(KOF02UM_S_SHINGO_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Heidern", KOF02UM_S_HEIDERN_COLLECTION, ARRAYSIZE(KOF02UM_S_HEIDERN_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Takuma", KOF02UM_S_TAKUMA_COLLECTION, ARRAYSIZE(KOF02UM_S_TAKUMA_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"EX Takuma", KOF02UM_S_EXTAKUMA_COLLECTION, ARRAYSIZE(KOF02UM_S_EXTAKUMA_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Chin", KOF02UM_S_CHIN_COLLECTION, ARRAYSIZE(KOF02UM_S_CHIN_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"King", KOF02UM_S_KING_COLLECTION, ARRAYSIZE(KOF02UM_S_KING_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Mai", KOF02UM_S_MAI_COLLECTION, ARRAYSIZE(KOF02UM_S_MAI_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Kasumi", KOF02UM_S_KASUMI_COLLECTION, ARRAYSIZE(KOF02UM_S_KASUMI_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"KUSANAGI", KOF02UM_S_KUSANAGI_COLLECTION, ARRAYSIZE(KOF02UM_S_KUSANAGI_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Kyo-1", KOF02UM_S_KYO1_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO1_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Kyo-2", KOF02UM_S_KYO2_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO2_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Geese", KOF02UM_S_GEESE_COLLECTION, ARRAYSIZE(KOF02UM_S_GEESE_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Goenitz", KOF02UM_S_GOENITZ_COLLECTION, ARRAYSIZE(KOF02UM_S_GOENITZ_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Nameless", KOF02UM_S_NAMELESS_COLLECTION, ARRAYSIZE(KOF02UM_S_NAMELESS_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Krizalid", KOF02UM_S_KRIZALID_COLLECTION, ARRAYSIZE(KOF02UM_S_KRIZALID_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Clone Zero", KOF02UM_S_CLONEZERO_COLLECTION, ARRAYSIZE(KOF02UM_S_CLONEZERO_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Original Zero", KOF02UM_S_ORIGINALZERO_COLLECTION, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Igniz", KOF02UM_S_IGNIZ_COLLECTION, ARRAYSIZE(KOF02UM_S_IGNIZ_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Omega Rugal", KOF02UM_S_OMEGARUGAL_COLLECTION, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Nightmare Geese", KOF02UM_S_NIGHTMAREGEESE_COLLECTION, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_COLLECTION) },
    { L"data\\base\\pal_a.bin", 394976, L"Orochi Iori (Unplayable)", KOF02UM_S_OROCHIIORI_COLLECTION, ARRAYSIZE(KOF02UM_S_OROCHIIORI_COLLECTION) },

    { L"data\\base\\pal_a.bin", 394976, L"MAX2 Portraits", KOF02UM_S_PORTRAITS_COLLECTION, ARRAYSIZE(KOF02UM_S_PORTRAITS_COLLECTION) },

    { L"data\\base\\pal_a.bin", 394976, L"Bonus Palettes", KOF02UM_S_BONUS_COLLECTION, ARRAYSIZE(KOF02UM_S_BONUS_COLLECTION) },
};
