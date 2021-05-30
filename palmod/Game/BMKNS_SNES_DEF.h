#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to BMKNS_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const UINT16 BMKNS_SNES_IMGIDS_USED[] =
{
    indexBMKNST_Altia,                  // 0x87
    indexBMKNST_Body,                   // 0x88
    indexBMKNST_Chan,                   // 0x89
    indexBMKNST_Jian,                   // 0x8A
    indexBMKNST_Ranmaru,                // 0x8B
    indexBMKNST_Syoh,                   // 0x8C
    indexBMKNST_Watts,                  // 0x8D
    indexBMKNST_Wolvan,                 // 0x8E
    indexBMKNST_Zeno,                   // 0x8F
    indexBMKNST_Bonus,                  // 0x90
};

//Syoh
const sGame_PaletteDataset BMKNS_SNES_SYOH_Start_PALETTES[] =
{
    { L"Syoh Start", 0x1fe2ca, 0x1fe2ea, indexBMKNST_Syoh },
    { L"Syoh Portrait Start", 0x1c092, 0x1c0b2 },
};

const sGame_PaletteDataset BMKNS_SNES_SYOH_LK_PALETTES[] =
{
    { L"Syoh LK", 0x1fe2ea, 0x1fe30a, indexBMKNST_Syoh },
    { L"Syoh Portrait LK", 0x1c0b2, 0x1c0d2 },
};

const sGame_PaletteDataset BMKNS_SNES_SYOH_HoldHPStart_PALETTES[] =
{
    { L"Syoh Hold HP Start", 0x1fe30a, 0x1fe32a, indexBMKNST_Syoh },
    { L"Syoh Portrait Hold HP Start", 0x1c0d2, 0x1c0f2 },
};

const sGame_PaletteDataset BMKNS_SNES_SYOH_HoldHPLK_PALETTES[] =
{
    { L"Syoh Hold HP LK", 0x1fe32a, 0x1fe34a, indexBMKNST_Syoh },
    { L"Syoh Portrait Hold HP LK", 0x1c0f2, 0x1c112 },
};

//Body

const sGame_PaletteDataset BMKNS_SNES_BODY_Start_PALETTES[] =
{
    { L"Body Start", 0x1fe34a, 0x1fe36a, indexBMKNST_Body },
    { L"Body Portrait Start", 0x1c112, 0x1c132 },
};

const sGame_PaletteDataset BMKNS_SNES_BODY_LK_PALETTES[] =
{
    { L"Body LK", 0x1fe36a, 0x1fe38a, indexBMKNST_Body },
    { L"Body Portrait LK", 0x1c132, 0x1c152 },
};

const sGame_PaletteDataset BMKNS_SNES_BODY_HoldHPStart_PALETTES[] =
{
    { L"Body Hold HP Start", 0x1fe38a, 0x1fe3aa, indexBMKNST_Body },
    { L"Body Portrait Hold HP Start", 0x1c152, 0x1c172 },
};

const sGame_PaletteDataset BMKNS_SNES_BODY_HoldHPLK_PALETTES[] =
{
    { L"Body Hold HP LK", 0x1fe3aa, 0x1fe3ca, indexBMKNST_Body },
    { L"Body Portrait Hold HP LK", 0x1c172, 0x1c192 },
};

//Chan

const sGame_PaletteDataset BMKNS_SNES_CHAN_Start_PALETTES[] =
{
    { L"Chan Start", 0x1fe3ca, 0x1fe3ea, indexBMKNST_Chan },
    { L"Chan Portrait Start", 0x1c192, 0x1c1b2 },
};

const sGame_PaletteDataset BMKNS_SNES_CHAN_LK_PALETTES[] =
{
    { L"Chan LK", 0x1fe3ea, 0x1fe40a, indexBMKNST_Chan },
    { L"Chan Portrait LK", 0x1c1b2, 0x1c1d2 },
};

const sGame_PaletteDataset BMKNS_SNES_CHAN_HoldHPStart_PALETTES[] =
{
    { L"Chan Hold HP Start", 0x1fe40a, 0x1fe42a, indexBMKNST_Chan },
    { L"Chan Portrait Hold HP Start", 0x1c1d2, 0x1c1f2 },
};

const sGame_PaletteDataset BMKNS_SNES_CHAN_HoldHPLK_PALETTES[] =
{
    { L"Chan Hold HP LK", 0x1fe42a, 0x1fe44a, indexBMKNST_Chan },
    { L"Chan Portrait Hold HP LK", 0x1c1f2, 0x1c212 },
};

//Jian

const sGame_PaletteDataset BMKNS_SNES_JIAN_Start_PALETTES[] =
{
    { L"Jian Start", 0x1fe44a, 0x1fe46a, indexBMKNST_Jian },
    { L"Jian Portrait Start", 0x1c212, 0x1c232 },
};

const sGame_PaletteDataset BMKNS_SNES_JIAN_LK_PALETTES[] =
{
    { L"Jian LK", 0x1fe46a, 0x1fe48a, indexBMKNST_Jian },
    { L"Jian Portrait LK", 0x1c232, 0x1c252 },
};

const sGame_PaletteDataset BMKNS_SNES_JIAN_HoldHPStart_PALETTES[] =
{
    { L"Jian Hold HP Start", 0x1fe48a, 0x1fe4aa, indexBMKNST_Jian },
    { L"Jian Portrait Hold HP Start", 0x1c252, 0x1c272 },
};

const sGame_PaletteDataset BMKNS_SNES_JIAN_HoldHPLK_PALETTES[] =
{
    { L"Jian Hold HP LK", 0x1fe4aa, 0x1fe4ca, indexBMKNST_Jian },
    { L"Jian Portrait Hold HP LK", 0x1c272, 0x1c292 },
};

//Watts

const sGame_PaletteDataset BMKNS_SNES_WATTS_Start_PALETTES[] =
{
    { L"Watts Start", 0x1fe4ca, 0x1fe4ea, indexBMKNST_Watts },
    { L"Watts Portrait Start", 0x1c412, 0x1c432 },
};

const sGame_PaletteDataset BMKNS_SNES_WATTS_LK_PALETTES[] =
{
    { L"Watts LK", 0x1fe4ea, 0x1fe50a, indexBMKNST_Watts },
    { L"Watts Portrait LK", 0x1c432, 0x1c452 },
};

const sGame_PaletteDataset BMKNS_SNES_WATTS_HoldHPStart_PALETTES[] =
{
    { L"Watts Hold HP Start", 0x1fe50a, 0x1fe52a, indexBMKNST_Watts },
    { L"Watts Portrait Hold HP Start", 0x1c452, 0x1c472 },
};

const sGame_PaletteDataset BMKNS_SNES_WATTS_HoldHPLK_PALETTES[] =
{
    { L"Watts Hold HP LK", 0x1fe52a, 0x1fe54a, indexBMKNST_Watts },
    { L"Watts Portrait Hold HP LK", 0x1c472, 0x1c492 },
};

//Ranmaru

const sGame_PaletteDataset BMKNS_SNES_RANMARU_Start_PALETTES[] =
{
    { L"Ranmaru Start", 0x1fe54a, 0x1fe56a, indexBMKNST_Ranmaru },
    { L"Ranmaru Portrait Start", 0x1c312, 0x1c332, indexBMKNST_Ranmaru, 0x40 },
};

const sGame_PaletteDataset BMKNS_SNES_RANMARU_LK_PALETTES[] =
{

    { L"Ranmaru LK", 0x1fe56a, 0x1fe58a, indexBMKNST_Ranmaru },
    { L"Ranmaru Portrait LK", 0x1c332, 0x1c352, indexBMKNST_Ranmaru, 0x40 },
};

const sGame_PaletteDataset BMKNS_SNES_RANMARU_HoldHPStart_PALETTES[] =
{
    { L"Ranmaru Hold HP Start", 0x1fe58a, 0x1fe5aa, indexBMKNST_Ranmaru },
    { L"Ranmaru Portrait Hold HP Start", 0x1c352, 0x1c372, indexBMKNST_Ranmaru, 0x40 },
};

const sGame_PaletteDataset BMKNS_SNES_RANMARU_HoldHPLK_PALETTES[] =
{
    { L"Ranmaru Hold HP LK", 0x1fe5aa, 0x1fe5ca, indexBMKNST_Ranmaru },
    { L"Ranmaru Portrait Hold HP LK", 0x1c372, 0x1c392, indexBMKNST_Ranmaru, 0x40 },
};

//Altia

const sGame_PaletteDataset BMKNS_SNES_ALTIA_Start_PALETTES[] =
{
    { L"Altia Start", 0x1fe5ca, 0x1fe5ea, indexBMKNST_Altia },
    { L"Altia Portrait Start", 0x1c392, 0x1c3b2 },
};

const sGame_PaletteDataset BMKNS_SNES_ALTIA_LK_PALETTES[] =
{

    { L"Altia LK", 0x1fe5ea, 0x1fe60a, indexBMKNST_Altia },
    { L"Altia Portrait LK", 0x1c3b2, 0x1c3d2 },
};

const sGame_PaletteDataset BMKNS_SNES_ALTIA_HoldHPStart_PALETTES[] =
{
    { L"Altia Hold HP Start", 0x1fe60a, 0x1fe62a, indexBMKNST_Altia },
    { L"Altia Portrait Hold HP Start", 0x1c3d2, 0x1c3f2 },
};

const sGame_PaletteDataset BMKNS_SNES_ALTIA_HoldHPLK_PALETTES[] =
{
    { L"Altia Hold HP LK", 0x1fe62a, 0x1fe64a, indexBMKNST_Altia },
    { L"Altia Portrait Hold HP LK", 0x1c3f2, 0x1c412 },
};

//Wolvan
const sGame_PaletteDataset BMKNS_SNES_WOLVAN_Start_PALETTES[] =
{
    { L"Wolvan Start", 0x1fe64a, 0x1fe66a, indexBMKNST_Wolvan },
    { L"Wolvan Portrait Start", 0x1c292, 0x1c2b2 },
};

const sGame_PaletteDataset BMKNS_SNES_WOLVAN_LK_PALETTES[] =
{
    { L"Wolvan LK", 0x1fe66a, 0x1fe68a, indexBMKNST_Wolvan },
    { L"Wolvan Portrait LK", 0x1c2b2, 0x1c2d2 },
};

const sGame_PaletteDataset BMKNS_SNES_WOLVAN_HoldHPStart_PALETTES[] =
{
    { L"Wolvan Hold HP Start", 0x1fe68a, 0x1fe6aa, indexBMKNST_Wolvan },
    { L"Wolvan Portrait Hold HP Start", 0x1c2d2, 0x1c2f2 },
};

const sGame_PaletteDataset BMKNS_SNES_WOLVAN_HoldHPLK_PALETTES[] =
{
    { L"Wolvan Hold HP LK", 0x1fe6aa, 0x1fe6ca, indexBMKNST_Wolvan },
    { L"Wolvan Portrait Hold HP LK", 0x1c2f2, 0x1c312 },
};

//Zeno

const sGame_PaletteDataset BMKNS_SNES_ZENO_Start_PALETTES[] =
{
    { L"Zeno Start", 0x1fe6ca, 0x1fe6ea, indexBMKNST_Zeno },
    { L"Zeno Portrait Start", 0x1c492, 0x1c4b2 },
};

const sGame_PaletteDataset BMKNS_SNES_ZENO_LK_PALETTES[] =
{
    { L"Zeno LK", 0x1fe6ea, 0x1fe70a, indexBMKNST_Zeno },
    { L"Zeno Portrait LK", 0x1c4b2, 0x1c4d2 },
};

const sGame_PaletteDataset BMKNS_SNES_ZENO_HoldHPStart_PALETTES[] =
{
    { L"Zeno Hold HP Start", 0x1fe70a, 0x1fe72a, indexBMKNST_Zeno },
    { L"Zeno Portrait Hold HP Start", 0x1c4d2, 0x1c4f2 },
};

const sGame_PaletteDataset BMKNS_SNES_ZENO_HoldHPLK_PALETTES[] =
{
    { L"Zeno Hold HP LK", 0x1fe72a, 0x1fe74a, indexBMKNST_Zeno },
    { L"Zeno Portrait Hold HP LK", 0x1c4f2, 0x1c512 },
};

//-BONUS-
const sGame_PaletteDataset BMKNS_SNES_BONUS_PALETTES[] =
{
    { L"Player Select Screen", 0x1fd18a, 0x1fd28a },
    { L"VS Logo", 0x1c5d2, 0x1c5f2 },
};

const sDescTreeNode BMKNS_SNES_SYOH_COLLECTION[] =
{
    { L"Start",         DESC_NODETYPE_TREE, (void*)BMKNS_SNES_SYOH_Start_PALETTES, ARRAYSIZE(BMKNS_SNES_SYOH_Start_PALETTES) },
    { L"LK",            DESC_NODETYPE_TREE, (void*)BMKNS_SNES_SYOH_LK_PALETTES, ARRAYSIZE(BMKNS_SNES_SYOH_LK_PALETTES) },
    { L"Hold HP Start", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_SYOH_HoldHPStart_PALETTES, ARRAYSIZE(BMKNS_SNES_SYOH_HoldHPStart_PALETTES) },
    { L"Hold HP LK",    DESC_NODETYPE_TREE, (void*)BMKNS_SNES_SYOH_HoldHPLK_PALETTES, ARRAYSIZE(BMKNS_SNES_SYOH_HoldHPLK_PALETTES) },
};

const sDescTreeNode BMKNS_SNES_BODY_COLLECTION[] =
{
    { L"Start",         DESC_NODETYPE_TREE, (void*)BMKNS_SNES_BODY_Start_PALETTES, ARRAYSIZE(BMKNS_SNES_BODY_Start_PALETTES) },
    { L"LK",            DESC_NODETYPE_TREE, (void*)BMKNS_SNES_BODY_LK_PALETTES, ARRAYSIZE(BMKNS_SNES_BODY_LK_PALETTES) },
    { L"Hold HP Start", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_BODY_HoldHPStart_PALETTES, ARRAYSIZE(BMKNS_SNES_BODY_HoldHPStart_PALETTES) },
    { L"Hold HP LK",    DESC_NODETYPE_TREE, (void*)BMKNS_SNES_BODY_HoldHPLK_PALETTES, ARRAYSIZE(BMKNS_SNES_BODY_HoldHPLK_PALETTES) },
};

const sDescTreeNode BMKNS_SNES_CHAN_COLLECTION[] =
{
    { L"Start",         DESC_NODETYPE_TREE, (void*)BMKNS_SNES_CHAN_Start_PALETTES, ARRAYSIZE(BMKNS_SNES_CHAN_Start_PALETTES) },
    { L"LK",            DESC_NODETYPE_TREE, (void*)BMKNS_SNES_CHAN_LK_PALETTES, ARRAYSIZE(BMKNS_SNES_CHAN_LK_PALETTES) },
    { L"Hold HP Start", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_CHAN_HoldHPStart_PALETTES, ARRAYSIZE(BMKNS_SNES_CHAN_HoldHPStart_PALETTES) },
    { L"Hold HP LK",    DESC_NODETYPE_TREE, (void*)BMKNS_SNES_CHAN_HoldHPLK_PALETTES, ARRAYSIZE(BMKNS_SNES_CHAN_HoldHPLK_PALETTES) },
};

const sDescTreeNode BMKNS_SNES_JIAN_COLLECTION[] =
{
    { L"Start",         DESC_NODETYPE_TREE, (void*)BMKNS_SNES_JIAN_Start_PALETTES, ARRAYSIZE(BMKNS_SNES_JIAN_Start_PALETTES) },
    { L"LK",            DESC_NODETYPE_TREE, (void*)BMKNS_SNES_JIAN_LK_PALETTES, ARRAYSIZE(BMKNS_SNES_JIAN_LK_PALETTES) },
    { L"Hold HP Start", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_JIAN_HoldHPStart_PALETTES, ARRAYSIZE(BMKNS_SNES_JIAN_HoldHPStart_PALETTES) },
    { L"Hold HP LK",    DESC_NODETYPE_TREE, (void*)BMKNS_SNES_JIAN_HoldHPLK_PALETTES, ARRAYSIZE(BMKNS_SNES_JIAN_HoldHPLK_PALETTES) },
};

const sDescTreeNode BMKNS_SNES_WATTS_COLLECTION[] =
{
    { L"Start",         DESC_NODETYPE_TREE, (void*)BMKNS_SNES_WATTS_Start_PALETTES, ARRAYSIZE(BMKNS_SNES_WATTS_Start_PALETTES) },
    { L"LK",            DESC_NODETYPE_TREE, (void*)BMKNS_SNES_WATTS_LK_PALETTES, ARRAYSIZE(BMKNS_SNES_WATTS_LK_PALETTES) },
    { L"Hold HP Start", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_WATTS_HoldHPStart_PALETTES, ARRAYSIZE(BMKNS_SNES_WATTS_HoldHPStart_PALETTES) },
    { L"Hold HP LK",    DESC_NODETYPE_TREE, (void*)BMKNS_SNES_WATTS_HoldHPLK_PALETTES, ARRAYSIZE(BMKNS_SNES_WATTS_HoldHPLK_PALETTES) },
};

const sDescTreeNode BMKNS_SNES_RANMARU_COLLECTION[] =
{
    { L"Start",         DESC_NODETYPE_TREE, (void*)BMKNS_SNES_RANMARU_Start_PALETTES, ARRAYSIZE(BMKNS_SNES_RANMARU_Start_PALETTES) },
    { L"LK",            DESC_NODETYPE_TREE, (void*)BMKNS_SNES_RANMARU_LK_PALETTES, ARRAYSIZE(BMKNS_SNES_RANMARU_LK_PALETTES) },
    { L"Hold HP Start", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_RANMARU_HoldHPStart_PALETTES, ARRAYSIZE(BMKNS_SNES_RANMARU_HoldHPStart_PALETTES) },
    { L"Hold HP LK",    DESC_NODETYPE_TREE, (void*)BMKNS_SNES_RANMARU_HoldHPLK_PALETTES, ARRAYSIZE(BMKNS_SNES_RANMARU_HoldHPLK_PALETTES) },
};

const sDescTreeNode BMKNS_SNES_ALTIA_COLLECTION[] =
{
    { L"Start",         DESC_NODETYPE_TREE, (void*)BMKNS_SNES_ALTIA_Start_PALETTES, ARRAYSIZE(BMKNS_SNES_ALTIA_Start_PALETTES) },
    { L"LK",            DESC_NODETYPE_TREE, (void*)BMKNS_SNES_ALTIA_LK_PALETTES, ARRAYSIZE(BMKNS_SNES_ALTIA_LK_PALETTES) },
    { L"Hold HP Start", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_ALTIA_HoldHPStart_PALETTES, ARRAYSIZE(BMKNS_SNES_ALTIA_HoldHPStart_PALETTES) },
    { L"Hold HP LK",    DESC_NODETYPE_TREE, (void*)BMKNS_SNES_ALTIA_HoldHPLK_PALETTES, ARRAYSIZE(BMKNS_SNES_ALTIA_HoldHPLK_PALETTES) },
};

const sDescTreeNode BMKNS_SNES_WOLVAN_COLLECTION[] =
{
    { L"Start",         DESC_NODETYPE_TREE, (void*)BMKNS_SNES_WOLVAN_Start_PALETTES, ARRAYSIZE(BMKNS_SNES_WOLVAN_Start_PALETTES) },
    { L"LK",            DESC_NODETYPE_TREE, (void*)BMKNS_SNES_WOLVAN_LK_PALETTES, ARRAYSIZE(BMKNS_SNES_WOLVAN_LK_PALETTES) },
    { L"Hold HP Start", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_WOLVAN_HoldHPStart_PALETTES, ARRAYSIZE(BMKNS_SNES_WOLVAN_HoldHPStart_PALETTES) },
    { L"Hold HP LK",    DESC_NODETYPE_TREE, (void*)BMKNS_SNES_WOLVAN_HoldHPLK_PALETTES, ARRAYSIZE(BMKNS_SNES_WOLVAN_HoldHPLK_PALETTES) },
};

const sDescTreeNode BMKNS_SNES_ZENO_COLLECTION[] =
{
    { L"Start",         DESC_NODETYPE_TREE, (void*)BMKNS_SNES_ZENO_Start_PALETTES, ARRAYSIZE(BMKNS_SNES_ZENO_Start_PALETTES) },
    { L"LK",            DESC_NODETYPE_TREE, (void*)BMKNS_SNES_ZENO_LK_PALETTES, ARRAYSIZE(BMKNS_SNES_ZENO_LK_PALETTES) },
    { L"Hold HP Start", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_ZENO_HoldHPStart_PALETTES, ARRAYSIZE(BMKNS_SNES_ZENO_HoldHPStart_PALETTES) },
    { L"Hold HP LK",    DESC_NODETYPE_TREE, (void*)BMKNS_SNES_ZENO_HoldHPLK_PALETTES, ARRAYSIZE(BMKNS_SNES_ZENO_HoldHPLK_PALETTES) },
};

const sDescTreeNode BMKNS_SNES_BONUS_COLLECTION[] =
{
    { L"Palettes",      DESC_NODETYPE_TREE, (void*)BMKNS_SNES_BONUS_PALETTES, ARRAYSIZE(BMKNS_SNES_BONUS_PALETTES) },
};

const sDescTreeNode BMKNS_SNES_UNITS[] =
{
    { L"Syoh", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_SYOH_COLLECTION, ARRAYSIZE(BMKNS_SNES_SYOH_COLLECTION) },
    { L"Body", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_BODY_COLLECTION, ARRAYSIZE(BMKNS_SNES_BODY_COLLECTION) },
    { L"Chan", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_CHAN_COLLECTION, ARRAYSIZE(BMKNS_SNES_CHAN_COLLECTION) },
    { L"Jian", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_JIAN_COLLECTION, ARRAYSIZE(BMKNS_SNES_JIAN_COLLECTION) },
    { L"Watts", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_WATTS_COLLECTION, ARRAYSIZE(BMKNS_SNES_WATTS_COLLECTION) },
    { L"Ranmaru", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_RANMARU_COLLECTION, ARRAYSIZE(BMKNS_SNES_RANMARU_COLLECTION) },
    { L"Altia", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_ALTIA_COLLECTION, ARRAYSIZE(BMKNS_SNES_ALTIA_COLLECTION) },
    { L"Wolvan", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_WOLVAN_COLLECTION, ARRAYSIZE(BMKNS_SNES_WOLVAN_COLLECTION) },
    { L"Zeno", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_ZENO_COLLECTION, ARRAYSIZE(BMKNS_SNES_ZENO_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)BMKNS_SNES_BONUS_COLLECTION, ARRAYSIZE(BMKNS_SNES_BONUS_COLLECTION) },
};

constexpr auto BMKNS_SNES_NUMUNIT = ARRAYSIZE(BMKNS_SNES_UNITS);

#define BMKNS_SNES_EXTRALOC BMKNS_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef BMKNS_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
