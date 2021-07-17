#pragma once

const UINT16 AOF1_A_IMGIDS_USED[] =
{
    indexAoF1Sprites_Ryo,           // 0x1F9
    indexAoF1Sprites_RobertGarcia,  // 0x1FA
    indexAoF1Sprites_RyuhakuTodoh,  // 0x1FB
    indexAoF1Sprites_JackTurner,    // 0x1FC
    indexAoF1Sprites_King,          // 0x1FD
    indexAoF1Sprites_LeePaiLong,    // 0x1FE
    indexAoF1Sprites_MickeyRogers,  // 0x1FF
    indexAoF1Sprites_JohnCrawley,   // 0x200
    indexAoF1Sprites_MrBig,         // 0x201
    indexAoF1Sprites_TakumaMrKarate, // 0x202
    indexAoF1Sprites_Bonus,         // 0x203
    indexAoF1Sprites_Stages,        // 0x204
};

// CHARACTERS
const sGame_PaletteDataset AOF1_A_RYO_P1[] =
{
    { L"Ryo P1", 0x47000, 0x47020, indexAoF1Sprites_Ryo, 0x00 },
    { L"Ryo Damaged 1 P1", 0x47020, 0x47040, indexAoF1Sprites_Ryo, 0x08, &pairPreviousFlipped },
    { L"Ryo Damaged 2 P1", 0x47040, 0x47060, indexAoF1Sprites_Ryo, 0x08, &pairPreviousFlipped2 },
    { L"Ryo Portrait P1", 0x470c0, 0x470e0, indexAoF1Sprites_Ryo, 0x80 },
};

const sGame_PaletteDataset AOF1_A_RYO_P2[] =
{
    { L"Ryo P2", 0x47060, 0x47080, indexAoF1Sprites_Ryo, 0x00 },
    { L"Ryo Damaged 1 P2", 0x47080, 0x470a0, indexAoF1Sprites_Ryo, 0x08, &pairPreviousFlipped },
    { L"Ryo Damaged 2 P2", 0x470a0, 0x470c0, indexAoF1Sprites_Ryo, 0x08, &pairPreviousFlipped2 },
    { L"Ryo Portrait P2", 0x470e0, 0x47100, indexAoF1Sprites_Ryo, 0x80 },
};

const sGame_PaletteDataset AOF1_A_ROBERT_P1[] =
{
    { L"Robert P1", 0x47200, 0x47220, indexAoF1Sprites_RobertGarcia, 0x00 },
    { L"Robert Damaged 1 P1", 0x47220, 0x47240, indexAoF1Sprites_RobertGarcia, 0x08, &pairPreviousFlipped },
    { L"Robert Damaged 2 P1", 0x47240, 0x47260, indexAoF1Sprites_RobertGarcia, 0x08, &pairPreviousFlipped2 },
    { L"Robert Portrait P1", 0x47100, 0x47120, indexAoF1Sprites_RobertGarcia, 0x80 },
};

const sGame_PaletteDataset AOF1_A_ROBERT_P2[] =
{
    { L"Robert P2", 0x47260, 0x47280, indexAoF1Sprites_RobertGarcia, 0x00 },
    { L"Robert Damaged 1 P2", 0x47280, 0x472a0, indexAoF1Sprites_RobertGarcia, 0x08, &pairPreviousFlipped },
    { L"Robert Damaged 2 P2", 0x472a0, 0x472c0, indexAoF1Sprites_RobertGarcia, 0x08, &pairPreviousFlipped2 },
    { L"Robert Portrait P2", 0x47120, 0x47140, indexAoF1Sprites_RobertGarcia, 0x80 },
};

const sGame_PaletteDataset AOF1_A_TODOH_P1[] =
{
    { L"Todoh P1", 0x47400, 0x47420, indexAoF1Sprites_RyuhakuTodoh, 0x00 },
    //{ L"Todoh Damaged 1 P1 (Unused)", 0x47420, 0x47440 },
    { L"Todoh Damaged P1", 0x47440, 0x47460, indexAoF1Sprites_RyuhakuTodoh, 0x08, &pairPreviousFlipped },
    { L"Todoh Portrait P1", 0x47140, 0x47160, indexAoF1Sprites_RyuhakuTodoh, 0x80 },
};

const sGame_PaletteDataset AOF1_A_TODOH_P2[] =
{
    { L"Todoh P2", 0x47460, 0x47480, indexAoF1Sprites_RyuhakuTodoh, 0x00 },
    //{ L"Todoh Damaged 1 P2 (Unused)", 0x47480, 0x474a0 },
    { L"Todoh Damaged P2", 0x474a0, 0x474c0, indexAoF1Sprites_RyuhakuTodoh, 0x08, &pairPreviousFlipped },
    { L"Todoh Portrait P2", 0x47160, 0x47180, indexAoF1Sprites_RyuhakuTodoh, 0x80 },
};

const sGame_PaletteDataset AOF1_A_JACK_P1[] =
{
    { L"Jack P1", 0x474c0, 0x474e0, indexAoF1Sprites_JackTurner, 0x00, &pairNext4 },
    // Not used, and moved the Bubble Gum to a shared section
    //{ L"Jack Damaged 1 P1 (Unused)", 0x474e0, 0x47500 },
    //{ L"Jack Shared Bubble Gum", 0x47500, 0x47520 },
    { L"Jack Portrait P1", 0x47180, 0x471a0, indexAoF1Sprites_JackTurner, 0x80 },
};

const sGame_PaletteDataset AOF1_A_JACK_P2[] =
{
    { L"Jack P2", 0x47520, 0x47540, indexAoF1Sprites_JackTurner, 0x00, &pairNext2 },
    //{ L"Jack Damaged 1 P2 (Unused)", 0x47540, 0x47560 },
    //{ L"Jack Damaged 2 P2 (Unused)", 0x47560, 0x47580 },
    { L"Jack Portrait P2", 0x471a0, 0x471c0, indexAoF1Sprites_JackTurner, 0x80 },
};

const sGame_PaletteDataset AOF1_A_JACK_SHARED[] =
{
    { L"Jack Shared Bubble Gum", 0x47500, 0x47520, indexAoF1Sprites_JackTurner, 0x01 },
};

const sGame_PaletteDataset AOF1_A_LEE_P1[] =
{
    { L"Lee P1", 0x47580, 0x475a0, indexAoF1Sprites_LeePaiLong, 0x00, &pairNext },
    { L"Lee Mask P1", 0x475a0, 0x475c0, indexAoF1Sprites_LeePaiLong, 0x01 },
    { L"Lee Portrait P1", 0x47300, 0x47320, indexAoF1Sprites_LeePaiLong, 0x80, &pairNext },
    { L"Lee Mask Portrait P1", 0x472c0, 0x472e0, indexAoF1Sprites_LeePaiLong, 0x81 },
};

const sGame_PaletteDataset AOF1_A_LEE_P2[] =
{
    { L"Lee P2", 0x475e0, 0x47600, indexAoF1Sprites_LeePaiLong, 0x00, &pairNext },
    { L"Lee Mask P2", 0x47600, 0x47620, indexAoF1Sprites_LeePaiLong, 0x01 },
    { L"Lee Portrait P2", 0x47320, 0x47340, indexAoF1Sprites_LeePaiLong, 0x80, &pairNext },
    { L"Lee Mask Portrait P2", 0x472e0, 0x47300, indexAoF1Sprites_LeePaiLong, 0x81 },
};

// King has special-handling for her triple-join in CGame_AOF1_A::UpdatePalImg, so if you
// change anything here make sure to update that code too
const sGame_PaletteDataset AOF1_A_KING_P1[] =
{
    { L"King P1", 0x47640, 0x47660, indexAoF1Sprites_King, 0x00, &pairNext3 },
    { L"King Damaged 1 P1", 0x47660, 0x47680, indexAoF1Sprites_King, 0x08, &pairPreviousFlipped },
    { L"King Damaged 2 P1", 0x47680, 0x476a0, indexAoF1Sprites_King, 0x08, &pairPreviousFlipped2 },
    { L"King Bra P1", 0x47d80, 0x47da0, indexAoF1Sprites_King, 0x01 },
    { L"King Portrait P1", 0x471c0, 0x471e0, indexAoF1Sprites_King, 0x80, &pairNext6 },
};

const sGame_PaletteDataset AOF1_A_KING_P2[] =
{
    { L"King P2", 0x476a0, 0x476c0, indexAoF1Sprites_King, 0x00, &pairNext3 },
    { L"King Damaged 1 P2", 0x476c0, 0x476e0, indexAoF1Sprites_King, 0x08, &pairPreviousFlipped },
    { L"King Damaged 2 P2", 0x476e0, 0x47700, indexAoF1Sprites_King, 0x08, &pairPreviousFlipped2 },
    { L"King Bra P2", 0x47de0, 0x47e00, indexAoF1Sprites_King, 0x01 },
    { L"King Portrait P2", 0x471e0, 0x47200, indexAoF1Sprites_King, 0x80, &pairNext },
};

const sGame_PaletteDataset AOF1_A_KING_SHARED[] =
{
    { L"King Shared Bra Portrait", 0x43020, 0x43040, indexAoF1Sprites_King, 0x81 },
};

const sGame_PaletteDataset AOF1_A_MICKEY_P1[] =
{
    { L"Mickey P1", 0x47700, 0x47720, indexAoF1Sprites_MickeyRogers, 0x00 },
    { L"Mickey Damaged 1 P1", 0x47720, 0x47740, indexAoF1Sprites_MickeyRogers, 0x08, &pairPreviousFlipped },
    { L"Mickey Damaged 2 P1", 0x47740, 0x47760, indexAoF1Sprites_MickeyRogers, 0x08, &pairPreviousFlipped2 },
    { L"Mickey Portrait P1", 0x47340, 0x47360, indexAoF1Sprites_MickeyRogers, 0x80 },
};

const sGame_PaletteDataset AOF1_A_MICKEY_P2[] =
{
    { L"Mickey P2", 0x47760, 0x47780, indexAoF1Sprites_MickeyRogers, 0x00 },
    { L"Mickey Damaged 1 P2", 0x47780, 0x477a0, indexAoF1Sprites_MickeyRogers, 0x08, &pairPreviousFlipped },
    { L"Mickey Damaged 2 P2", 0x477a0, 0x477c0, indexAoF1Sprites_MickeyRogers, 0x08, &pairPreviousFlipped2 },
    { L"Mickey Portrait P2", 0x47360, 0x47380, indexAoF1Sprites_MickeyRogers, 0x80 },
};

const sGame_PaletteDataset AOF1_A_JOHN_P1[] =
{
    { L"John P1", 0x477c0, 0x477e0, indexAoF1Sprites_JohnCrawley, 0x00 },
    { L"John Damaged 1 P1", 0x477e0, 0x47800, indexAoF1Sprites_JohnCrawley, 0x08, &pairPreviousFlipped },
    { L"John Damaged 2 P1", 0x47800, 0x47820, indexAoF1Sprites_JohnCrawley, 0x08, &pairPreviousFlipped2 },
    { L"John Portrait P1", 0x47380, 0x473a0, indexAoF1Sprites_JohnCrawley, 0x80 },
};

const sGame_PaletteDataset AOF1_A_JOHN_P2[] =
{
    { L"John P2", 0x47820, 0x47840, indexAoF1Sprites_JohnCrawley, 0x00 },
    { L"John Damaged 1 P2", 0x47840, 0x47860, indexAoF1Sprites_JohnCrawley, 0x08, &pairPreviousFlipped },
    { L"John Damaged 2 P2", 0x47860, 0x47880, indexAoF1Sprites_JohnCrawley, 0x08, &pairPreviousFlipped2 },
    { L"John Portrait P2", 0x473a0, 0x473c0, indexAoF1Sprites_JohnCrawley, 0x80 },
};

// Mr. Big's handling of portraits is different between P1 and P2, so we need to avoid pairing that
#define k_aof1NameKey_MrBigPortrait L"Mr. Big Portrait P1"

const sGame_PaletteDataset AOF1_A_MRBIG_P1[] =
{
    { L"Mr. Big P1", 0x47880, 0x478a0, indexAoF1Sprites_MrBig, 0x00 },
    { L"Mr. Big Damaged 1 P1", 0x478a0, 0x478c0, indexAoF1Sprites_MrBig, 0x08, &pairPreviousFlipped },
    { L"Mr. Big Damaged 2 P1", 0x478c0, 0x478e0, indexAoF1Sprites_MrBig, 0x08, &pairPreviousFlipped2 },
    { k_aof1NameKey_MrBigPortrait, 0x473c0, 0x473e0, indexAoF1Sprites_MrBig, 0x80 },
};

const sGame_PaletteDataset AOF1_A_MRBIG_P2[] =
{
    { L"Mr. Big P2", 0x478e0, 0x47900, indexAoF1Sprites_MrBig, 0x00 },
    { L"Mr. Big Damaged 1 P2", 0x47900, 0x47920, indexAoF1Sprites_MrBig, 0x08, &pairPreviousFlipped },
    { L"Mr. Big Damaged 2 P2", 0x47920, 0x47940, indexAoF1Sprites_MrBig, 0x08, &pairPreviousFlipped2 },
};

const sGame_PaletteDataset AOF1_A_MRKARATE_P1[] =
{
    { L"Mr. Karate P1", 0x47940, 0x47960, indexAoF1Sprites_TakumaMrKarate, 0x00 },
    { L"Mr. Karate Mask P1", 0x47960, 0x47980, indexAoF1Sprites_TakumaMrKarate, 0x01, &pairPreviousFlipped },
    { L"Mr. Karate Portrait P1", 0x473e0, 0x47400, indexAoF1Sprites_TakumaMrKarate, 0x80 },
};

const sGame_PaletteDataset AOF1_A_MRKARATE_P2[] =
{
    { L"Mr. Karate P2", 0x479a0, 0x479c0, indexAoF1Sprites_TakumaMrKarate, 0x00 },
    { L"Mr. Karate Mask P2", 0x479c0, 0x479e0, indexAoF1Sprites_TakumaMrKarate, 0x01, &pairPreviousFlipped },
    { L"Mr. Karate Portrait P2", 0x47be0, 0x47c00, indexAoF1Sprites_TakumaMrKarate, 0x80 },
};

const sGame_PaletteDataset AOF1_A_BONUS_PALETTES[] =
{
    { L"Shadow/Dust/Hitsparks", 0x47a00, 0x47a20 },
    { L"Bonus: Ryo", 0x47c00, 0x47c20 },
    { L"Bonus: Robert", 0x47c20, 0x47c40 },
    { L"Bonus: Ice Pillar", 0x47c40, 0x47c60 },
    { L"Bonus: Bottle Cut", 0x47c60, 0x47c80 },
    { L"Select Icons ", 0x47a20, 0x47a40 },
    { L"Win Icon ", 0x47a40, 0x47a60 },
    { L"Character Screen Names", 0x47e00, 0x47e20 },
};

const sDescTreeNode AOF1_A_RYO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AOF1_A_RYO_P1, ARRAYSIZE(AOF1_A_RYO_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AOF1_A_RYO_P2, ARRAYSIZE(AOF1_A_RYO_P2) },
};

const sDescTreeNode AOF1_A_ROBERT_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AOF1_A_ROBERT_P1, ARRAYSIZE(AOF1_A_ROBERT_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AOF1_A_ROBERT_P2, ARRAYSIZE(AOF1_A_ROBERT_P2) },
};

const sDescTreeNode AOF1_A_TODOH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AOF1_A_TODOH_P1, ARRAYSIZE(AOF1_A_TODOH_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AOF1_A_TODOH_P2, ARRAYSIZE(AOF1_A_TODOH_P2) },
};

const sDescTreeNode AOF1_A_JACK_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AOF1_A_JACK_P1, ARRAYSIZE(AOF1_A_JACK_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AOF1_A_JACK_P2, ARRAYSIZE(AOF1_A_JACK_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)AOF1_A_JACK_SHARED, ARRAYSIZE(AOF1_A_JACK_SHARED) },
};

const sDescTreeNode AOF1_A_LEE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AOF1_A_LEE_P1, ARRAYSIZE(AOF1_A_LEE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AOF1_A_LEE_P2, ARRAYSIZE(AOF1_A_LEE_P2) },
};

const sDescTreeNode AOF1_A_KING_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AOF1_A_KING_P1, ARRAYSIZE(AOF1_A_KING_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AOF1_A_KING_P2, ARRAYSIZE(AOF1_A_KING_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)AOF1_A_KING_SHARED, ARRAYSIZE(AOF1_A_KING_SHARED) },
};

const sDescTreeNode AOF1_A_MICKEY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AOF1_A_MICKEY_P1, ARRAYSIZE(AOF1_A_MICKEY_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AOF1_A_MICKEY_P2, ARRAYSIZE(AOF1_A_MICKEY_P2) },
};

const sDescTreeNode AOF1_A_JOHN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AOF1_A_JOHN_P1, ARRAYSIZE(AOF1_A_JOHN_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AOF1_A_JOHN_P2, ARRAYSIZE(AOF1_A_JOHN_P2) },
};

const sDescTreeNode AOF1_A_MRBIG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AOF1_A_MRBIG_P1, ARRAYSIZE(AOF1_A_MRBIG_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AOF1_A_MRBIG_P2, ARRAYSIZE(AOF1_A_MRBIG_P2) },
};

const sDescTreeNode AOF1_A_MRKARATE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)AOF1_A_MRKARATE_P1, ARRAYSIZE(AOF1_A_MRKARATE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)AOF1_A_MRKARATE_P2, ARRAYSIZE(AOF1_A_MRKARATE_P2) },
};

const sDescTreeNode AOF1_A_BONUS_COLLECTION[] =
{
    { L"Bonus", DESC_NODETYPE_TREE, (void*)AOF1_A_BONUS_PALETTES, ARRAYSIZE(AOF1_A_BONUS_PALETTES) },
};

#define k_aof1NameKey_Jack L"Jack Turner"
#define k_aof1NameKey_King L"King"

const sDescTreeNode AOF1_A_UNITS[] =
{
    { L"Robert Garcia", DESC_NODETYPE_TREE, (void*)AOF1_A_ROBERT_COLLECTION, ARRAYSIZE(AOF1_A_ROBERT_COLLECTION) },
    { L"Ryo Sakazaki", DESC_NODETYPE_TREE, (void*)AOF1_A_RYO_COLLECTION, ARRAYSIZE(AOF1_A_RYO_COLLECTION) },
    { L"Ryuhaku Todoh", DESC_NODETYPE_TREE, (void*)AOF1_A_TODOH_COLLECTION, ARRAYSIZE(AOF1_A_TODOH_COLLECTION) },
    { k_aof1NameKey_Jack, DESC_NODETYPE_TREE, (void*)AOF1_A_JACK_COLLECTION, ARRAYSIZE(AOF1_A_JACK_COLLECTION) },
    { L"Lee Pai Long", DESC_NODETYPE_TREE, (void*)AOF1_A_LEE_COLLECTION, ARRAYSIZE(AOF1_A_LEE_COLLECTION) },
    { k_aof1NameKey_King, DESC_NODETYPE_TREE, (void*)AOF1_A_KING_COLLECTION, ARRAYSIZE(AOF1_A_KING_COLLECTION) },
    { L"Mickey Rodgers", DESC_NODETYPE_TREE, (void*)AOF1_A_MICKEY_COLLECTION, ARRAYSIZE(AOF1_A_MICKEY_COLLECTION) },
    { L"John Crawley", DESC_NODETYPE_TREE, (void*)AOF1_A_JOHN_COLLECTION, ARRAYSIZE(AOF1_A_JOHN_COLLECTION) },
    { L"Mr. Big", DESC_NODETYPE_TREE, (void*)AOF1_A_MRBIG_COLLECTION, ARRAYSIZE(AOF1_A_MRBIG_COLLECTION) },
    { L"Mr. Karate", DESC_NODETYPE_TREE, (void*)AOF1_A_MRKARATE_COLLECTION, ARRAYSIZE(AOF1_A_MRKARATE_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)AOF1_A_BONUS_COLLECTION, ARRAYSIZE(AOF1_A_BONUS_COLLECTION) },
};

constexpr auto AOF1_A_NUMUNIT = ARRAYSIZE(AOF1_A_UNITS);
#define AOF1_A_EXTRALOC AOF1_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef AOF1_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
