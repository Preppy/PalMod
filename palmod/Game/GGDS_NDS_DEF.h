#pragma once

const std::vector<uint16_t> GGDS_DS_IMGIDS_USED =
{
    indexGGDSSprites_Anji,                  // 0x1E
    indexGGDSSprites_Axl,                   // 0x1F
    indexGGDSSprites_Baiken,                // 0x20
    indexGGDSSprites_Bridget,               // 0x21
    indexGGDSSprites_Chipp,                 // 0x22
    indexGGDSSprites_Dizzy,                 // 0x23
    indexGGDSSprites_Eddie,                 // 0x24
    indexGGDSSprites_Faust,                 // 0x25
    indexGGDSSprites_Gig,                   // 0x42
    indexGGDSSprites_Ino,                   // 0x26
    indexGGDSSprites_Jam,                   // 0x27
    indexGGDSSprites_Johnny,                // 0x28
    indexGGDSSprites_KyKiske,               // 0x29
    indexGGDSSprites_Millia,                // 0x2A
    indexGGDSSprites_May,                   // 0x2B
    indexGGDSSprites_Potemkin,              // 0x2C
    indexGGDSSprites_RoboKy,                // 0x2D
    indexGGDSSprites_SolBadguy,             // 0x2E
    indexGGDSSprites_Slayer,                // 0x2F
    indexGGDSSprites_Testament,             // 0x30
    indexGGDSSprites_Venom,                 // 0x31
    indexGGDSSprites_Zappa,                 // 0x32
    indexGGDSSprites_Bonus,                 // 0x33
};

const sGame_PaletteDataset GGDS_DS_ANJI_SPECIAL[] =
{
    { L"Base", 0x1175e28, 0x1175e48, indexGGDSSprites_Anji, 0x0},
    { L"Extra", 0x12a4228, 0x12a4248, indexGGDSSprites_Anji, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ANJI_LIGHT[] =
{
    { L"Base", 0x1176228, 0x1176248, indexGGDSSprites_Anji, 0x0 },
    { L"Extra", 0x12a4628, 0x12a4648, indexGGDSSprites_Anji, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ANJI_HEAVY[] =
{
    { L"Base", 0x1176428, 0x1176448, indexGGDSSprites_Anji, 0x0 },
    { L"Extra", 0x12a4828, 0x12a4848, indexGGDSSprites_Anji, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ANJI_DUST[] =
{
    { L"Base", 0x1176028, 0x1176048, indexGGDSSprites_Anji, 0x0 },
    { L"Extra", 0x12a4428, 0x12a4448, indexGGDSSprites_Anji, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ANJI_STATUS[] =
{
    { L"Blue", 0x1176a28, 0x1176a48, indexGGDSSprites_Anji, 0x0 },
    { L"Purple", 0x1176c28, 0x1176c48, indexGGDSSprites_Anji, 0x0 },
    { L"Orange", 0x1176e28, 0x1176e48, indexGGDSSprites_Anji, 0x0 },
    { L"White", 0x1177028, 0x1177048, indexGGDSSprites_Anji, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_ANJI_UNUSED[] =
{
    { L"Unused 1", 0x1176628, 0x1176648, indexGGDSSprites_Anji, 0x0 },
    { L"Unused 2", 0x1176828, 0x1176848, indexGGDSSprites_Anji, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_AXL_SPECIAL[] =
{
    { L"Base", 0x12bc228, 0x12bc248, indexGGDSSprites_Axl, 0x0 },
    { L"Extra", 0x13ad028, 0x13ad048, indexGGDSSprites_Axl, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_AXL_LIGHT[] =
{
    { L"Base", 0x12bc628, 0x12bc648, indexGGDSSprites_Axl, 0x0 },
    { L"Extra", 0x13ad428, 0x13ad448, indexGGDSSprites_Axl, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_AXL_HEAVY[] =
{
    { L"Base", 0x12bc828, 0x12bc848, indexGGDSSprites_Axl, 0x0 },
    { L"Extra", 0x13ad628, 0x13ad648, indexGGDSSprites_Axl, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_AXL_DUST[] =
{
    { L"Base", 0x12bc428, 0x12bc448, indexGGDSSprites_Axl, 0x0 },
    { L"Extra", 0x13ad228, 0x13ad248, indexGGDSSprites_Axl, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_AXL_STATUS[] =
{
    { L"Blue", 0x12bce28, 0x12bce48, indexGGDSSprites_Axl, 0x0 },
    { L"Purple", 0x12bd028, 0x12bd048, indexGGDSSprites_Axl, 0x0 },
    { L"Orange", 0x12bd228, 0x12bd248, indexGGDSSprites_Axl, 0x0 },
    { L"White", 0x12bd428, 0x12bd448, indexGGDSSprites_Axl, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_AXL_UNUSED[] =
{
    { L"Unused 1", 0x12bca28, 0x12bca48, indexGGDSSprites_Axl, 0x0 },
    { L"Unused 2", 0x12bcc28, 0x12bcc48, indexGGDSSprites_Axl, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_BAIKEN_SPECIAL[] =
{
    { L"Base", 0x13ea628, 0x13ea648, indexGGDSSprites_Baiken, 0x0 },
    { L"Extra", 0x14ce628, 0x14ce648, indexGGDSSprites_Baiken, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_BAIKEN_LIGHT[] =
{
    { L"Base", 0x13eaa28, 0x13eaa48, indexGGDSSprites_Baiken, 0x0 },
    { L"Extra", 0x14cea28, 0x14cea48, indexGGDSSprites_Baiken, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_BAIKEN_HEAVY[] =
{
    { L"Base", 0x13eac28, 0x13eac48, indexGGDSSprites_Baiken, 0x0 },
    { L"Extra", 0x14cec28, 0x14cec48, indexGGDSSprites_Baiken, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_BAIKEN_DUST[] =
{
    { L"Base", 0x13ea828, 0x13ea848, indexGGDSSprites_Baiken, 0x0 },
    { L"Extra", 0x14ce828, 0x14ce848, indexGGDSSprites_Baiken, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_BAIKEN_UNUSED[] =
{
    { L"Unused 1", 0x13eae28, 0x13eae48, indexGGDSSprites_Baiken, 0x0 },
    { L"Unused 2", 0x13eb028, 0x13eb048, indexGGDSSprites_Baiken, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_BAIKEN_STATUS[] =
{
    { L"Blue", 0x13eb228, 0x13eb248, indexGGDSSprites_Baiken, 0x0 },
    { L"Purple", 0x13eb428, 0x13eb448, indexGGDSSprites_Baiken, 0x0 },
    { L"Orange", 0x13eb628, 0x13eb648, indexGGDSSprites_Baiken, 0x0 },
    { L"White", 0x13eb828, 0x13eb848, indexGGDSSprites_Baiken, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_BRIDGET_SPECIAL[] =
{
    { L"Base", 0x29d3628, 0x29d3648, indexGGDSSprites_Bridget, 0x0 },
    { L"Extra", 0x2aea228, 0x2aea248, indexGGDSSprites_Bridget, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_BRIDGET_LIGHT[] =
{
    { L"Base", 0x29d3a28, 0x29d3a48, indexGGDSSprites_Bridget, 0x0 },
    { L"Extra", 0x2aea628, 0x2aea648, indexGGDSSprites_Bridget, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_BRIDGET_HEAVY[] =
{
    { L"Base", 0x29d3c28, 0x29d3c48, indexGGDSSprites_Bridget, 0x0 },
    { L"Extra", 0x2aea828, 0x2aea848, indexGGDSSprites_Bridget, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_BRIDGET_DUST[] =
{
    { L"Base", 0x29d3828, 0x29d3848, indexGGDSSprites_Bridget, 0x0 },
    { L"Extra", 0x2aea428, 0x2aea448, indexGGDSSprites_Bridget, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_BRIDGET_UNUSED[] =
{
    { L"Unused 1", 0x29d3e28, 0x29d3e48, indexGGDSSprites_Bridget, 0x0 },
    { L"Unused 2", 0x29d4028, 0x29d4048, indexGGDSSprites_Bridget, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_BRIDGET_STATUS[] =
{
    { L"Blue", 0x29d4228, 0x29d4248, indexGGDSSprites_Bridget, 0x0 },
    { L"Purple", 0x29d4428, 0x29d4448, indexGGDSSprites_Bridget, 0x0 },
    { L"Orange", 0x29d4628, 0x29d4648, indexGGDSSprites_Bridget, 0x0 },
    { L"White", 0x29d4828, 0x29d4848, indexGGDSSprites_Bridget, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_CHIPP_SPECIAL[] =
{
    { L"Base", 0x14e2628, 0x14e2648, indexGGDSSprites_Chipp, 0x0 },
    { L"Extra", 0x15bd828, 0x15bd848, indexGGDSSprites_Chipp, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_CHIPP_LIGHT[] =
{
    { L"Base", 0x14e2a28, 0x14e2a48, indexGGDSSprites_Chipp, 0x0 },
    { L"Extra", 0x15bdc28, 0x15bdc48, indexGGDSSprites_Chipp, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_CHIPP_HEAVY[] =
{
    { L"Base", 0x14e2c28, 0x14e2c48, indexGGDSSprites_Chipp, 0x0 },
    { L"Extra", 0x15bde28, 0x15bde48, indexGGDSSprites_Chipp, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_CHIPP_DUST[] =
{
    { L"Base", 0x14e2828, 0x14e2848, indexGGDSSprites_Chipp, 0x0 },
    { L"Extra", 0x15bda28, 0x15bda48, indexGGDSSprites_Chipp, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_CHIPP_UNUSED[] =
{
    { L"Unused 1", 0x14e2e28, 0x14e2e48, indexGGDSSprites_Chipp, 0x0 },
    { L"Unused 2", 0x14e3028, 0x14e3048, indexGGDSSprites_Chipp, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_CHIPP_STATUS[] =
{
    { L"Blue", 0x14e3228, 0x14e3248, indexGGDSSprites_Chipp, 0x0 },
    { L"Purple", 0x14e3428, 0x14e3448, indexGGDSSprites_Chipp, 0x0 },
    { L"Orange", 0x14e3628, 0x14e3648, indexGGDSSprites_Chipp, 0x0 },
    { L"White", 0x14e3828, 0x14e3848, indexGGDSSprites_Chipp, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_DIZZY_SPECIAL[] =
{
    { L"Base", 0x16b0c28, 0x16b0c48, indexGGDSSprites_Dizzy, 0x0 },
    { L"Extra", 0x17f8c28, 0x17f8c48, indexGGDSSprites_Dizzy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_DIZZY_LIGHT[] =
{
    { L"Base", 0x16b1028, 0x16b1048, indexGGDSSprites_Dizzy, 0x0 },
    { L"Extra", 0x17f9028, 0x17f9048, indexGGDSSprites_Dizzy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_DIZZY_HEAVY[] =
{
    { L"Base", 0x16b1228, 0x16b1248, indexGGDSSprites_Dizzy, 0x0 },
    { L"Extra", 0x17f9228, 0x17f9248, indexGGDSSprites_Dizzy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_DIZZY_DUST[] =
{
    { L"Base", 0x16b0e28, 0x16b0e48, indexGGDSSprites_Dizzy, 0x0 },
    { L"Extra", 0x17f8e28, 0x17f8e48, indexGGDSSprites_Dizzy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_DIZZY_UNUSED[] =
{
    { L"Unused 1", 0x16b1428, 0x16b1448, indexGGDSSprites_Dizzy, 0x0 },
    { L"Unused 2", 0x16b1628, 0x16b1648, indexGGDSSprites_Dizzy, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_DIZZY_STATUS[] =
{
    { L"Blue", 0x16b1828, 0x16b1848, indexGGDSSprites_Dizzy, 0x0 },
    { L"Purple", 0x16b1a28, 0x16b1a48, indexGGDSSprites_Dizzy, 0x0 },
    { L"Orange", 0x16b1c28, 0x16b1c48, indexGGDSSprites_Dizzy, 0x0 },
    { L"White", 0x16b1e28, 0x16b1e48, indexGGDSSprites_Dizzy, 0x0 },
};
const sGame_PaletteDataset GGDS_DS_EDDIE_SPECIAL[] =
{
    { L"Base", 0x2ca7028, 0x2ca7048, indexGGDSSprites_Eddie, 0x0 },
    { L"Extra", 0x2d9ce28, 0x2d9ce48, indexGGDSSprites_Eddie, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_EDDIE_LIGHT[] =
{
    { L"Base", 0x2ca7428, 0x2ca7448, indexGGDSSprites_Eddie, 0x0 },
    { L"Extra", 0x2d9d228, 0x2d9d248, indexGGDSSprites_Eddie, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_EDDIE_HEAVY[] =
{
    { L"Base", 0x2ca7628, 0x2ca7648, indexGGDSSprites_Eddie, 0x0 },
    { L"Extra", 0x2d9d428, 0x2d9d448, indexGGDSSprites_Eddie, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_EDDIE_DUST[] =
{
    { L"Base", 0x2ca7228, 0x2ca7248, indexGGDSSprites_Eddie, 0x0 },
    { L"Extra", 0x2d9d028, 0x2d9d048, indexGGDSSprites_Eddie, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_EDDIE_UNUSED[] =
{
    { L"Unused 1", 0x2ca7828, 0x2ca7848, indexGGDSSprites_Eddie, 0x0 },
    { L"Unused 2", 0x2ca7a28, 0x2ca7a48, indexGGDSSprites_Eddie, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_EDDIE_STATUS[] =
{
    { L"Blue", 0x2ca7c28, 0x2ca7c48, indexGGDSSprites_Eddie, 0x0 },
    { L"Purple", 0x2ca7e28, 0x2ca7e48, indexGGDSSprites_Eddie, 0x0 },
    { L"Orange", 0x2ca8028, 0x2ca8048, indexGGDSSprites_Eddie, 0x0 },
    { L"White", 0x2ca8228, 0x2ca8248, indexGGDSSprites_Eddie, 0x0 },
};

//Faust extras look bizzare, but they are correct
const sGame_PaletteDataset GGDS_DS_FAUST_SPECIAL[] =
{
    { L"Base", 0x1831428, 0x1831448, indexGGDSSprites_Faust, 0x0 },
    { L"Extra", 0x1942228, 0x1942248, indexGGDSSprites_Faust, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_FAUST_LIGHT[] =
{
    { L"Base", 0x1831828, 0x1831848, indexGGDSSprites_Faust, 0x0 },
    { L"Extra", 0x1942628, 0x1942648, indexGGDSSprites_Faust, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_FAUST_HEAVY[] =
{
    { L"Base", 0x1831a28, 0x1831a48, indexGGDSSprites_Faust, 0x0 },
    { L"Extra", 0x1942828, 0x1942848, indexGGDSSprites_Faust, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_FAUST_DUST[] =
{
    { L"Base", 0x1831628, 0x1831648, indexGGDSSprites_Faust, 0x0 },
    { L"Extra", 0x1942428, 0x1942448, indexGGDSSprites_Faust, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_FAUST_UNUSED[] =
{
    { L"Unused 1", 0x1831c28, 0x1831c48, indexGGDSSprites_Faust, 0x0 },
    { L"Unused 2", 0x1831e28, 0x1831e48, indexGGDSSprites_Faust, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_FAUST_STATUS[] =
{
    { L"Blue", 0x1832028, 0x1832048, indexGGDSSprites_Faust, 0x0 },
    { L"Purple", 0x1832228, 0x1832248, indexGGDSSprites_Faust, 0x0 },
    { L"Orange", 0x1832428, 0x1832448, indexGGDSSprites_Faust, 0x0 },
    { L"White", 0x1832628, 0x1832648, indexGGDSSprites_Faust, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_INO_SPECIAL[] =
{
    { L"Base", 0x1967028, 0x1967048, indexGGDSSprites_Ino, 0x0 },
    { L"Extra", 0x1a55c28, 0x1a55c48, indexGGDSSprites_Ino, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_INO_LIGHT[] =
{
    { L"Base", 0x1967428, 0x1967448, indexGGDSSprites_Ino, 0x0 },
    { L"Extra", 0x1a56028, 0x1a56048, indexGGDSSprites_Ino, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_INO_HEAVY[] =
{
    { L"Base", 0x1967628, 0x1967648, indexGGDSSprites_Ino, 0x0 },
    { L"Extra", 0x1a56228, 0x1a56248, indexGGDSSprites_Ino, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_INO_DUST[] =
{
    { L"Base", 0x1967228, 0x1967248, indexGGDSSprites_Ino, 0x0 },
    { L"Extra", 0x1a55e28, 0x1a55e48, indexGGDSSprites_Ino, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_INO_UNUSED[] =
{
    { L"Unused 1", 0x1967828, 0x1967848, indexGGDSSprites_Ino, 0x0 },
    { L"Unused 2", 0x1967a28, 0x1967a48, indexGGDSSprites_Ino, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_INO_STATUS[] =
{
    { L"Blue", 0x1967c28, 0x1967c48, indexGGDSSprites_Ino, 0x0 },
    { L"Purple", 0x1967e28, 0x1967e48, indexGGDSSprites_Ino, 0x0 },
    { L"Orange", 0x1968028, 0x1968048, indexGGDSSprites_Ino, 0x0 },
    { L"White", 0x1968228, 0x1968248, indexGGDSSprites_Ino, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_JAM_SPECIAL[] =
{
    { L"Base", 0x1a92e28, 0x1a92e48, indexGGDSSprites_Jam, 0x0 },
    { L"Extra", 0x1b90e28, 0x1b90e48, indexGGDSSprites_Jam, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_JAM_LIGHT[] =
{
    { L"Base", 0x1a93228, 0x1a93248, indexGGDSSprites_Jam, 0x0 },
    { L"Extra", 0x1b91228, 0x1b91248, indexGGDSSprites_Jam, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_JAM_HEAVY[] =
{
    { L"Base", 0x1a93428, 0x1a93448, indexGGDSSprites_Jam, 0x0 },
    { L"Extra", 0x1b91428, 0x1b91448, indexGGDSSprites_Jam, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_JAM_DUST[] =
{
    { L"Base", 0x1a93028, 0x1a93048, indexGGDSSprites_Jam, 0x0 },
    { L"Extra", 0x1b91028, 0x1b91048, indexGGDSSprites_Jam, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_JAM_UNUSED[] =
{
    { L"Unused 1", 0x1a93628, 0x1a93648, indexGGDSSprites_Jam, 0x0 },
    { L"Unused 2", 0x1a93828, 0x1a93848, indexGGDSSprites_Jam, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_JAM_STATUS[] =
{
    { L"Blue", 0x1a93a28, 0x1a93a48, indexGGDSSprites_Jam, 0x0 },
    { L"Purple", 0x1a93c28, 0x1a93c48, indexGGDSSprites_Jam, 0x0 },
    { L"Orange", 0x1a93e28, 0x1a93e48, indexGGDSSprites_Jam, 0x0 },
    { L"White", 0x1a94028, 0x1a94048, indexGGDSSprites_Jam, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_JOHNNY_SPECIAL[] =
{
    { L"Base", 0x1bcdc28, 0x1bcdc48, indexGGDSSprites_Johnny, 0x0 },
    { L"Extra", 0x1d08e28, 0x1d08e48, indexGGDSSprites_Johnny, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_JOHNNY_LIGHT[] =
{
    { L"Base", 0x1bce028, 0x1bce048, indexGGDSSprites_Johnny, 0x0 },
    { L"Extra", 0x1d09228, 0x1d09248, indexGGDSSprites_Johnny, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_JOHNNY_HEAVY[] =
{
    { L"Base", 0x1bce228, 0x1bce248, indexGGDSSprites_Johnny, 0x0 },
    { L"Extra", 0x1d09428, 0x1d09448, indexGGDSSprites_Johnny, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_JOHNNY_DUST[] =
{
    { L"Base", 0x1bcde28, 0x1bcde48, indexGGDSSprites_Johnny, 0x0 },
    { L"Extra", 0x1d09028, 0x1d09048, indexGGDSSprites_Johnny, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_JOHNNY_UNUSED[] =
{
    { L"Unused 1", 0x1bce428, 0x1bce448, indexGGDSSprites_Johnny, 0x0 },
    { L"Unused 2", 0x1bce628, 0x1bce648, indexGGDSSprites_Johnny, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_JOHNNY_STATUS[] =
{
    { L"Blue", 0x1bce828, 0x1bce848, indexGGDSSprites_Johnny, 0x0 },
    { L"Purple", 0x1bcea28, 0x1bcea48, indexGGDSSprites_Johnny, 0x0 },
    { L"Orange", 0x1bcec28, 0x1bcec48, indexGGDSSprites_Johnny, 0x0 },
    { L"White", 0x1bcee28, 0x1bcee48, indexGGDSSprites_Johnny, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_KY_SPECIAL[] =
{
    { L"Base", 0x1d23428, 0x1d23448, indexGGDSSprites_KyKiske, 0x0 },
    { L"Extra", 0x1e4a028, 0x1e4a048, indexGGDSSprites_KyKiske, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_KY_LIGHT[] =
{
    { L"Base", 0x1d23828, 0x1d23848, indexGGDSSprites_KyKiske, 0x0 },
    { L"Extra", 0x1e4a428, 0x1e4a448, indexGGDSSprites_KyKiske, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_KY_HEAVY[] =
{
    { L"Base", 0x1d23a28, 0x1d23a48, indexGGDSSprites_KyKiske, 0x0 },
    { L"Extra", 0x1e4a628, 0x1e4a648, indexGGDSSprites_KyKiske, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_KY_DUST[] =
{
    { L"Base", 0x1d23628, 0x1d23648, indexGGDSSprites_KyKiske, 0x0 },
    { L"Extra", 0x1e4a228, 0x1e4a248, indexGGDSSprites_KyKiske, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_KY_UNUSED[] =
{
    { L"Unused 1", 0x1d23c28, 0x1d23c48, indexGGDSSprites_KyKiske, 0x0 },
    { L"Unused 2", 0x1d23e28, 0x1d23e48, indexGGDSSprites_KyKiske, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_KY_STATUS[] =
{
    { L"Blue", 0x1d24028, 0x1d24048, indexGGDSSprites_KyKiske, 0x0 },
    { L"Purple", 0x1d24228, 0x1d24248, indexGGDSSprites_KyKiske, 0x0 },
    { L"Orange", 0x1d24428, 0x1d24448, indexGGDSSprites_KyKiske, 0x0 },
    { L"White", 0x1d24628, 0x1d24648, indexGGDSSprites_KyKiske, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_MAY_SPECIAL[] =
{
    { L"Base", 0x2009a28, 0x2009a48, indexGGDSSprites_May, 0x0 },
    { L"Extra", 0x212e428, 0x212e448, indexGGDSSprites_May, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_MAY_LIGHT[] =
{
    { L"Base", 0x2009e28, 0x2009e48, indexGGDSSprites_May, 0x0 },
    { L"Extra", 0x212e828, 0x212e848, indexGGDSSprites_May, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_MAY_HEAVY[] =
{
    { L"Base", 0x200a028, 0x200a048, indexGGDSSprites_May, 0x0 },
    { L"Extra", 0x212ea28, 0x212ea48, indexGGDSSprites_May, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_MAY_DUST[] =
{
    { L"Base", 0x2009c28, 0x2009c48, indexGGDSSprites_May, 0x0 },
    { L"Extra", 0x212e628, 0x212e648, indexGGDSSprites_May, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_MAY_UNUSED[] =
{
    { L"Unused 1", 0x200a228, 0x200a248, indexGGDSSprites_May, 0x0 },
    { L"Unused 2", 0x200a428, 0x200a448, indexGGDSSprites_May, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_MAY_STATUS[] =
{
    { L"Blue", 0x200a628, 0x200a648, indexGGDSSprites_May, 0x0 },
    { L"Purple", 0x200a828, 0x200a848, indexGGDSSprites_May, 0x0 },
    { L"Orange", 0x200aa28, 0x200aa48, indexGGDSSprites_May, 0x0 },
    { L"White", 0x200ac28, 0x200ac48, indexGGDSSprites_May, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_MILLIA_SPECIAL[] =
{
    { L"Base", 0x1f23028, 0x1f23048, indexGGDSSprites_Millia, 0x0 },
    { L"Extra", 0x1ff7828, 0x1ff7848, indexGGDSSprites_Millia, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_MILLIA_LIGHT[] =
{
    { L"Base", 0x1f23428, 0x1f23448, indexGGDSSprites_Millia, 0x0 },
    { L"Extra", 0x1ff7c28, 0x1ff7c48, indexGGDSSprites_Millia, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_MILLIA_HEAVY[] =
{
    { L"Base", 0x1f23628, 0x1f23648, indexGGDSSprites_Millia, 0x0 },
    { L"Extra", 0x1ff7e28, 0x1ff7e48, indexGGDSSprites_Millia, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_MILLIA_DUST[] =
{
    { L"Base", 0x1f23228, 0x1f23248, indexGGDSSprites_Millia, 0x0 },
    { L"Extra", 0x1ff7a28, 0x1ff7a48, indexGGDSSprites_Millia, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_MILLIA_UNUSED[] =
{
    { L"Unused 1", 0x1f23828, 0x1f23848, indexGGDSSprites_Millia, 0x0 },
    { L"Unused 2", 0x1f23a28, 0x1f23a48, indexGGDSSprites_Millia, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_MILLIA_STATUS[] =
{
    { L"Blue", 0x1f23c28, 0x1f23c48, indexGGDSSprites_Millia, 0x0 },
    { L"Purple", 0x1f23e28, 0x1f23e48, indexGGDSSprites_Millia, 0x0 },
    { L"Orange", 0x1f24028, 0x1f24048, indexGGDSSprites_Millia, 0x0 },
    { L"White", 0x1f24228, 0x1f24248, indexGGDSSprites_Millia, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_POTEMKIN_SPECIAL[] =
{
    { L"Base", 0x2159228, 0x2159248, indexGGDSSprites_Potemkin, 0x0 },
    { L"Extra", 0x22bac28, 0x22bac48, indexGGDSSprites_Potemkin, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_POTEMKIN_LIGHT[] =
{
    { L"Base", 0x2159628, 0x2159648, indexGGDSSprites_Potemkin, 0x0 },
    { L"Extra", 0x22bb028, 0x22bb048, indexGGDSSprites_Potemkin, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_POTEMKIN_HEAVY[] =
{
    { L"Base", 0x2159828, 0x2159848, indexGGDSSprites_Potemkin, 0x0 },
    { L"Extra", 0x22bb228, 0x22bb248, indexGGDSSprites_Potemkin, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_POTEMKIN_DUST[] =
{
    { L"Base", 0x2159428, 0x2159448, indexGGDSSprites_Potemkin, 0x0 },
    { L"Extra", 0x22bae28, 0x22bae48, indexGGDSSprites_Potemkin, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_POTEMKIN_UNUSED[] =
{
    { L"Unused 1", 0x2159a28, 0x2159a48, indexGGDSSprites_Potemkin, 0x0 },
    { L"Unused 2", 0x2159c28, 0x2159c48, indexGGDSSprites_Potemkin, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_POTEMKIN_STATUS[] =
{
    { L"Blue", 0x2159e28, 0x2159e48, indexGGDSSprites_Potemkin, 0x0 },
    { L"Purple", 0x215a028, 0x215a048, indexGGDSSprites_Potemkin, 0x0 },
    { L"Orange", 0x215a228, 0x215a248, indexGGDSSprites_Potemkin, 0x0 },
    { L"White", 0x215a428, 0x215a448, indexGGDSSprites_Potemkin, 0x0 },
};

//Unsure about RK, most of his effects are shared with the games universal effects (RC/Healthbar/Fonts)
const sGame_PaletteDataset GGDS_DS_ROBOKY_SPECIAL[] =
{
    { L"Base", 0x22d9c28, 0x22d9c48, indexGGDSSprites_RoboKy, 0x0 },
    { L"Extra", 0x2444228, 0x2444248, indexGGDSSprites_RoboKy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ROBOKY_LIGHT[] =
{
    { L"Base", 0x22da028, 0x22da048, indexGGDSSprites_RoboKy, 0x0 },
    { L"Extra", 0x2444628, 0x2444648, indexGGDSSprites_RoboKy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ROBOKY_HEAVY[] =
{
    { L"Base", 0x22da228, 0x22da248, indexGGDSSprites_RoboKy, 0x0 },
    { L"Extra", 0x2444828, 0x2444848, indexGGDSSprites_RoboKy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ROBOKY_DUST[] =
{
    { L"Base", 0x22d9e28, 0x22d9e48, indexGGDSSprites_RoboKy, 0x0 },
    { L"Extra", 0x2444428, 0x2444448, indexGGDSSprites_RoboKy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ROBOKY_UNUSED[] =
{
    { L"Unused 1", 0x22da428, 0x22da448, indexGGDSSprites_RoboKy, 0x0 },
    { L"Unused 2", 0x22da628, 0x22da648, indexGGDSSprites_RoboKy, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_ROBOKY_STATUS[] =
{
    { L"Blue", 0x22da828, 0x22da848, indexGGDSSprites_RoboKy, 0x0 },
    { L"Purple", 0x22daa28, 0x22daa48, indexGGDSSprites_RoboKy, 0x0 },
    { L"Orange", 0x22dac28, 0x22dac48, indexGGDSSprites_RoboKy, 0x0 },
    { L"White", 0x22dae28, 0x22dae48, indexGGDSSprites_RoboKy, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_SOL_SPECIAL[] =
{
    { L"Base", 0x24e3228, 0x24e3248, indexGGDSSprites_SolBadguy, 0x0 },
    { L"Extra", 0x25fe628, 0x25fe648, indexGGDSSprites_SolBadguy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_SOL_LIGHT[] =
{
    { L"Base", 0x24e3628, 0x24e3648, indexGGDSSprites_SolBadguy, 0x0 },
    { L"Extra", 0x25fea28, 0x25fea48, indexGGDSSprites_SolBadguy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_SOL_HEAVY[] =
{
    { L"Base", 0x24e3828, 0x24e3848, indexGGDSSprites_SolBadguy, 0x0 },
    { L"Extra", 0x25fec28, 0x25fec48, indexGGDSSprites_SolBadguy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_SOL_DUST[] =
{
    { L"Base", 0x24e3428, 0x24e3448, indexGGDSSprites_SolBadguy, 0x0 },
    { L"Extra", 0x25fe828, 0x25fe848, indexGGDSSprites_SolBadguy, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_SOL_UNUSED[] =
{
    { L"Unused 1", 0x24e3a28, 0x24e3a48, indexGGDSSprites_SolBadguy, 0x0 },
    { L"Unused 2", 0x24e3c28, 0x24e3c48, indexGGDSSprites_SolBadguy, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_SOL_STATUS[] =
{
    { L"Blue", 0x24e3e28, 0x24e3e48, indexGGDSSprites_SolBadguy, 0x0 },
    { L"Purple", 0x24e4028, 0x24e4048, indexGGDSSprites_SolBadguy, 0x0 },
    { L"Orange", 0x24e4228, 0x24e4248, indexGGDSSprites_SolBadguy, 0x0 },
    { L"White", 0x24e4428, 0x24e4448, indexGGDSSprites_SolBadguy, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_SLAYER_SPECIAL[] =
{
    { L"Base", 0x264aa28, 0x264aa48, indexGGDSSprites_Slayer, 0x0 },
    { L"Extra", 0x2760828, 0x2760848, indexGGDSSprites_Slayer, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_SLAYER_LIGHT[] =
{
    { L"Base", 0x264ae28, 0x264ae48, indexGGDSSprites_Slayer, 0x0 },
    { L"Extra", 0x2760c28, 0x2760c48, indexGGDSSprites_Slayer, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_SLAYER_HEAVY[] =
{
    { L"Base", 0x264b028, 0x264b048, indexGGDSSprites_Slayer, 0x0 },
    { L"Extra", 0x2760e28, 0x2760e48, indexGGDSSprites_Slayer, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_SLAYER_DUST[] =
{
    { L"Base", 0x264ac28, 0x264ac48, indexGGDSSprites_Slayer, 0x0 },
    { L"Extra", 0x2760a28, 0x2760a48, indexGGDSSprites_Slayer, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_SLAYER_UNUSED[] =
{
    { L"Unused 1", 0x264b228, 0x264b248, indexGGDSSprites_Slayer, 0x0 },
    { L"Unused 2", 0x264b428, 0x264b448, indexGGDSSprites_Slayer, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_SLAYER_STATUS[] =
{
    { L"Blue", 0x264b628, 0x264b648, indexGGDSSprites_Slayer, 0x0 },
    { L"Purple", 0x264b828, 0x264b848, indexGGDSSprites_Slayer, 0x0 },
    { L"Orange", 0x264ba28, 0x264ba48, indexGGDSSprites_Slayer, 0x0 },
    { L"White", 0x264bc28, 0x264bc48, indexGGDSSprites_Slayer, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_TESTAMENT_SPECIAL[] =
{
    { L"Base", 0x27a9428, 0x27a9448, indexGGDSSprites_Testament, 0x0 },
    { L"Extra", 0x28c1a28, 0x28c1a48, indexGGDSSprites_Testament, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_TESTAMENT_LIGHT[] =
{
    { L"Base", 0x27a9828, 0x27a9848, indexGGDSSprites_Testament, 0x0 },
    { L"Extra", 0x28c1e28, 0x28c1e48, indexGGDSSprites_Testament, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_TESTAMENT_HEAVY[] =
{
    { L"Base", 0x27a9a28, 0x27a9a48, indexGGDSSprites_Testament, 0x0 },
    { L"Extra", 0x28c2028, 0x28c2048, indexGGDSSprites_Testament, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_TESTAMENT_DUST[] =
{
    { L"Base", 0x27a9628, 0x27a9648, indexGGDSSprites_Testament, 0x0 },
    { L"Extra", 0x28c1c28, 0x28c1c48, indexGGDSSprites_Testament, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_TESTAMENT_UNUSED[] =
{
    { L"Unused 1", 0x27a9c28, 0x27a9c48, indexGGDSSprites_Testament, 0x0 },
    { L"Unused 2", 0x27a9e28, 0x27a9e48, indexGGDSSprites_Testament, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_TESTAMENT_STATUS[] =
{
    { L"Blue", 0x27aa028, 0x27aa048, indexGGDSSprites_Testament, 0x0 },
    { L"Purple", 0x27aa228, 0x27aa248, indexGGDSSprites_Testament, 0x0 },
    { L"Orange", 0x27aa428, 0x27aa448, indexGGDSSprites_Testament, 0x0 },
    { L"White", 0x27aa628, 0x27aa648, indexGGDSSprites_Testament, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_VENOM_SPECIAL[] =
{
    { L"Base", 0x28e8428, 0x28e8448, indexGGDSSprites_Venom, 0x0 },
    { L"Extra", 0x29b4a28, 0x29b4a48, indexGGDSSprites_Venom, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_VENOM_LIGHT[] =
{
    { L"Base", 0x28e8828, 0x28e8848, indexGGDSSprites_Venom, 0x0 },
    { L"Extra", 0x29b4e28, 0x29b4e48, indexGGDSSprites_Venom, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_VENOM_HEAVY[] =
{
    { L"Base", 0x28e8a28, 0x28e8a48, indexGGDSSprites_Venom, 0x0 },
    { L"Extra", 0x29b5028, 0x29b5048, indexGGDSSprites_Venom, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_VENOM_DUST[] =
{
    { L"Base", 0x28e8628, 0x28e8648, indexGGDSSprites_Venom, 0x0 },
    { L"Extra", 0x29b4c28, 0x29b4c48, indexGGDSSprites_Venom, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_VENOM_UNUSED[] =
{
    { L"Unused 1", 0x28e8c28, 0x28e8c48, indexGGDSSprites_Venom, 0x0 },
    { L"Unused 2", 0x28e8e28, 0x28e8e48, indexGGDSSprites_Venom, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_VENOM_STATUS[] =
{
    { L"Blue", 0x28e9028, 0x28e9048, indexGGDSSprites_Venom, 0x0 },
    { L"Purple", 0x28e9228, 0x28e9248, indexGGDSSprites_Venom, 0x0 },
    { L"Orange", 0x28e9428, 0x28e9448, indexGGDSSprites_Venom, 0x0 },
    { L"White", 0x28e9628, 0x28e9648, indexGGDSSprites_Venom, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_ZAPPA_SPECIAL[] =
{
    { L"Base", 0x2b14828, 0x2b14848, indexGGDSSprites_Zappa, 0x0 },
    { L"Extra", 0x2bcf628, 0x2bcf648, indexGGDSSprites_Zappa, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ZAPPA_LIGHT[] =
{
    { L"Base", 0x2b14c28, 0x2b14c48, indexGGDSSprites_Zappa, 0x0 },
    { L"Extra", 0x2bcfa28, 0x2bcfa48, indexGGDSSprites_Zappa, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ZAPPA_HEAVY[] =
{
    { L"Base", 0x2b14e28, 0x2b14e48, indexGGDSSprites_Zappa, 0x0 },
    { L"Extra", 0x2bcfc28, 0x2bcfc48, indexGGDSSprites_Zappa, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ZAPPA_DUST[] =
{
    { L"Base", 0x2b14a28, 0x2b14a48, indexGGDSSprites_Zappa, 0x0 },
    { L"Extra", 0x2bcf828, 0x2bcf848, indexGGDSSprites_Zappa, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_ZAPPA_UNUSED[] =
{
    { L"Unused 1", 0x2b15028, 0x2b15048, indexGGDSSprites_Zappa, 0x0 },
    { L"Unused 2", 0x2b15228, 0x2b15248, indexGGDSSprites_Zappa, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_ZAPPA_STATUS[] =
{
    { L"Blue", 0x2b15428, 0x2b15448, indexGGDSSprites_Zappa, 0x0 },
    { L"Purple", 0x2b15628, 0x2b15648, indexGGDSSprites_Zappa, 0x0 },
    { L"Orange", 0x2b15828, 0x2b15848, indexGGDSSprites_Zappa, 0x0 },
    { L"White", 0x2b15a28, 0x2b15a48, indexGGDSSprites_Zappa, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_GIG_USED[] =
{
    { L"Base", 0x1e82e28, 0x1e82e48, indexGGDSSprites_Gig, 0x0 },
    { L"Weak", 0x1efb828, 0x1efb848, indexGGDSSprites_Gig, 0x1 },
};

const sGame_PaletteDataset GGDS_DS_GIG_UNUSED[] =
{
    { L"Unused Base Alt. 1 ", 0x1e83028, 0x1e83048, indexGGDSSprites_Gig, 0x0 },
    { L"Unused Weak Alt. 1 ", 0x1efba28, 0x1efba48, indexGGDSSprites_Gig, 0x1 },

    { L"Unused Base Alt. 2 ", 0x1e83228, 0x1e83248, indexGGDSSprites_Gig, 0x0 },
    { L"Unused Weak Alt. 2 ", 0x1efbc28, 0x1efbc48, indexGGDSSprites_Gig, 0x1 },

    { L"Unused Base Alt. 3 ", 0x1e83428, 0x1e83448, indexGGDSSprites_Gig, 0x0 },
    { L"Unused Weak Alt. 3 ", 0x1efbe28, 0x1efbe48, indexGGDSSprites_Gig, 0x1 },

    { L"Unused Base Alt. 4 ", 0x1e83628, 0x1e83648, indexGGDSSprites_Gig, 0x0 },

    { L"Unused Base Alt. 5 ", 0x1e83828, 0x1e83848, indexGGDSSprites_Gig, 0x0 },

    { L"Unused Character Select", 0x15d6c28, 0x15d6c48, indexGGDSSprites_Gig, 0x0 },
};

const sGame_PaletteDataset GGDS_DS_GIG_STATUS[] =
{
    { L"Blue", 0x1e83a28, 0x1e83a48, indexGGDSSprites_Gig, 0x0 },
    { L"Purple", 0x1e83c28, 0x1e83c48, indexGGDSSprites_Gig, 0x0 },
    { L"Orange", 0x1e83e28, 0x1e83e48, indexGGDSSprites_Gig, 0x0 },
    { L"White", 0x1e84028, 0x1e84048, indexGGDSSprites_Gig, 0x0 },
};

const sDescTreeNode GGDS_DS_ANJI[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_ANJI_SPECIAL, ARRAYSIZE(GGDS_DS_ANJI_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_ANJI_LIGHT, ARRAYSIZE(GGDS_DS_ANJI_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_ANJI_HEAVY, ARRAYSIZE(GGDS_DS_ANJI_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_ANJI_DUST, ARRAYSIZE(GGDS_DS_ANJI_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_ANJI_STATUS, ARRAYSIZE(GGDS_DS_ANJI_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_ANJI_UNUSED, ARRAYSIZE(GGDS_DS_ANJI_UNUSED) },
};

const sDescTreeNode GGDS_DS_AXL[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_AXL_SPECIAL, ARRAYSIZE(GGDS_DS_AXL_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_AXL_LIGHT, ARRAYSIZE(GGDS_DS_AXL_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_AXL_HEAVY, ARRAYSIZE(GGDS_DS_AXL_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_AXL_DUST, ARRAYSIZE(GGDS_DS_AXL_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_AXL_STATUS, ARRAYSIZE(GGDS_DS_AXL_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_AXL_UNUSED, ARRAYSIZE(GGDS_DS_AXL_UNUSED) },
};

const sDescTreeNode GGDS_DS_BAIKEN[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_BAIKEN_SPECIAL, ARRAYSIZE(GGDS_DS_BAIKEN_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_BAIKEN_LIGHT, ARRAYSIZE(GGDS_DS_BAIKEN_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_BAIKEN_HEAVY, ARRAYSIZE(GGDS_DS_BAIKEN_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_BAIKEN_DUST, ARRAYSIZE(GGDS_DS_BAIKEN_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_BAIKEN_STATUS, ARRAYSIZE(GGDS_DS_BAIKEN_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_BAIKEN_UNUSED, ARRAYSIZE(GGDS_DS_BAIKEN_UNUSED) },
};

const sDescTreeNode GGDS_DS_BRIDGET[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_BRIDGET_SPECIAL, ARRAYSIZE(GGDS_DS_BRIDGET_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_BRIDGET_LIGHT, ARRAYSIZE(GGDS_DS_BRIDGET_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_BRIDGET_HEAVY, ARRAYSIZE(GGDS_DS_BRIDGET_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_BRIDGET_DUST, ARRAYSIZE(GGDS_DS_BRIDGET_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_BRIDGET_STATUS, ARRAYSIZE(GGDS_DS_BRIDGET_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_BRIDGET_UNUSED, ARRAYSIZE(GGDS_DS_BRIDGET_UNUSED) },
};

const sDescTreeNode GGDS_DS_CHIPP[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_CHIPP_SPECIAL, ARRAYSIZE(GGDS_DS_CHIPP_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_CHIPP_LIGHT, ARRAYSIZE(GGDS_DS_CHIPP_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_CHIPP_HEAVY, ARRAYSIZE(GGDS_DS_CHIPP_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_CHIPP_DUST, ARRAYSIZE(GGDS_DS_CHIPP_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_CHIPP_STATUS, ARRAYSIZE(GGDS_DS_CHIPP_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_CHIPP_UNUSED, ARRAYSIZE(GGDS_DS_CHIPP_UNUSED) },
};

const sDescTreeNode GGDS_DS_DIZZY[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_DIZZY_SPECIAL, ARRAYSIZE(GGDS_DS_DIZZY_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_DIZZY_LIGHT, ARRAYSIZE(GGDS_DS_DIZZY_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_DIZZY_HEAVY, ARRAYSIZE(GGDS_DS_DIZZY_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_DIZZY_DUST, ARRAYSIZE(GGDS_DS_DIZZY_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_DIZZY_STATUS, ARRAYSIZE(GGDS_DS_DIZZY_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_DIZZY_UNUSED, ARRAYSIZE(GGDS_DS_DIZZY_UNUSED) },
};

const sDescTreeNode GGDS_DS_EDDIE[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_EDDIE_SPECIAL, ARRAYSIZE(GGDS_DS_EDDIE_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_EDDIE_LIGHT, ARRAYSIZE(GGDS_DS_EDDIE_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_EDDIE_HEAVY, ARRAYSIZE(GGDS_DS_EDDIE_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_EDDIE_DUST, ARRAYSIZE(GGDS_DS_EDDIE_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_EDDIE_STATUS, ARRAYSIZE(GGDS_DS_EDDIE_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_EDDIE_UNUSED, ARRAYSIZE(GGDS_DS_EDDIE_UNUSED) },
};

const sDescTreeNode GGDS_DS_FAUST[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_FAUST_SPECIAL, ARRAYSIZE(GGDS_DS_FAUST_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_FAUST_LIGHT, ARRAYSIZE(GGDS_DS_FAUST_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_FAUST_HEAVY, ARRAYSIZE(GGDS_DS_FAUST_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_FAUST_DUST, ARRAYSIZE(GGDS_DS_FAUST_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_FAUST_STATUS, ARRAYSIZE(GGDS_DS_FAUST_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_FAUST_UNUSED, ARRAYSIZE(GGDS_DS_FAUST_UNUSED) },
};

const sDescTreeNode GGDS_DS_INO[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_INO_SPECIAL, ARRAYSIZE(GGDS_DS_INO_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_INO_LIGHT, ARRAYSIZE(GGDS_DS_INO_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_INO_HEAVY, ARRAYSIZE(GGDS_DS_INO_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_INO_DUST, ARRAYSIZE(GGDS_DS_INO_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_INO_STATUS, ARRAYSIZE(GGDS_DS_INO_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_INO_UNUSED, ARRAYSIZE(GGDS_DS_INO_UNUSED) },
};

const sDescTreeNode GGDS_DS_JAM[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_JAM_SPECIAL, ARRAYSIZE(GGDS_DS_JAM_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_JAM_LIGHT, ARRAYSIZE(GGDS_DS_JAM_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_JAM_HEAVY, ARRAYSIZE(GGDS_DS_JAM_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_JAM_DUST, ARRAYSIZE(GGDS_DS_JAM_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_JAM_STATUS, ARRAYSIZE(GGDS_DS_JAM_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_JAM_UNUSED, ARRAYSIZE(GGDS_DS_JAM_UNUSED) },
};

const sDescTreeNode GGDS_DS_JOHNNY[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_JOHNNY_SPECIAL, ARRAYSIZE(GGDS_DS_JOHNNY_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_JOHNNY_LIGHT, ARRAYSIZE(GGDS_DS_JOHNNY_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_JOHNNY_HEAVY, ARRAYSIZE(GGDS_DS_JOHNNY_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_JOHNNY_DUST, ARRAYSIZE(GGDS_DS_JOHNNY_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_JOHNNY_STATUS, ARRAYSIZE(GGDS_DS_JOHNNY_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_JOHNNY_UNUSED, ARRAYSIZE(GGDS_DS_JOHNNY_UNUSED) },
};

const sDescTreeNode GGDS_DS_KY[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_KY_SPECIAL, ARRAYSIZE(GGDS_DS_KY_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_KY_LIGHT, ARRAYSIZE(GGDS_DS_KY_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_KY_HEAVY, ARRAYSIZE(GGDS_DS_KY_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_KY_DUST, ARRAYSIZE(GGDS_DS_KY_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_KY_STATUS, ARRAYSIZE(GGDS_DS_KY_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_KY_UNUSED, ARRAYSIZE(GGDS_DS_KY_UNUSED) },
};

const sDescTreeNode GGDS_DS_MAY[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_MAY_SPECIAL, ARRAYSIZE(GGDS_DS_MAY_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_MAY_LIGHT, ARRAYSIZE(GGDS_DS_MAY_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_MAY_HEAVY, ARRAYSIZE(GGDS_DS_MAY_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_MAY_DUST, ARRAYSIZE(GGDS_DS_MAY_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_MAY_STATUS, ARRAYSIZE(GGDS_DS_MAY_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_MAY_UNUSED, ARRAYSIZE(GGDS_DS_MAY_UNUSED) },
};

const sDescTreeNode GGDS_DS_MILLIA[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_MILLIA_SPECIAL, ARRAYSIZE(GGDS_DS_MILLIA_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_MILLIA_LIGHT, ARRAYSIZE(GGDS_DS_MILLIA_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_MILLIA_HEAVY, ARRAYSIZE(GGDS_DS_MILLIA_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_MILLIA_DUST, ARRAYSIZE(GGDS_DS_MILLIA_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_MILLIA_STATUS, ARRAYSIZE(GGDS_DS_MILLIA_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_MILLIA_UNUSED, ARRAYSIZE(GGDS_DS_MILLIA_UNUSED) },
};

const sDescTreeNode GGDS_DS_POTEMKIN[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_POTEMKIN_SPECIAL, ARRAYSIZE(GGDS_DS_POTEMKIN_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_POTEMKIN_LIGHT, ARRAYSIZE(GGDS_DS_POTEMKIN_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_POTEMKIN_HEAVY, ARRAYSIZE(GGDS_DS_POTEMKIN_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_POTEMKIN_DUST, ARRAYSIZE(GGDS_DS_POTEMKIN_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_POTEMKIN_STATUS, ARRAYSIZE(GGDS_DS_POTEMKIN_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_POTEMKIN_UNUSED, ARRAYSIZE(GGDS_DS_POTEMKIN_UNUSED) },
};

const sDescTreeNode GGDS_DS_ROBOKY[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_ROBOKY_SPECIAL, ARRAYSIZE(GGDS_DS_ROBOKY_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_ROBOKY_LIGHT, ARRAYSIZE(GGDS_DS_ROBOKY_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_ROBOKY_HEAVY, ARRAYSIZE(GGDS_DS_ROBOKY_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_ROBOKY_DUST, ARRAYSIZE(GGDS_DS_ROBOKY_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_ROBOKY_STATUS, ARRAYSIZE(GGDS_DS_ROBOKY_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_ROBOKY_UNUSED, ARRAYSIZE(GGDS_DS_ROBOKY_UNUSED) },
};

const sDescTreeNode GGDS_DS_SOL[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_SOL_SPECIAL, ARRAYSIZE(GGDS_DS_SOL_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_SOL_LIGHT, ARRAYSIZE(GGDS_DS_SOL_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_SOL_HEAVY, ARRAYSIZE(GGDS_DS_SOL_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_SOL_DUST, ARRAYSIZE(GGDS_DS_SOL_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_SOL_STATUS, ARRAYSIZE(GGDS_DS_SOL_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_SOL_UNUSED, ARRAYSIZE(GGDS_DS_SOL_UNUSED) },
};

const sDescTreeNode GGDS_DS_SLAYER[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_SLAYER_SPECIAL, ARRAYSIZE(GGDS_DS_SLAYER_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_SLAYER_LIGHT, ARRAYSIZE(GGDS_DS_SLAYER_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_SLAYER_HEAVY, ARRAYSIZE(GGDS_DS_SLAYER_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_SLAYER_DUST, ARRAYSIZE(GGDS_DS_SLAYER_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_SLAYER_STATUS, ARRAYSIZE(GGDS_DS_SLAYER_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_SLAYER_UNUSED, ARRAYSIZE(GGDS_DS_SLAYER_UNUSED) },
};

const sDescTreeNode GGDS_DS_TESTAMENT[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_TESTAMENT_SPECIAL, ARRAYSIZE(GGDS_DS_TESTAMENT_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_TESTAMENT_LIGHT, ARRAYSIZE(GGDS_DS_TESTAMENT_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_TESTAMENT_HEAVY, ARRAYSIZE(GGDS_DS_TESTAMENT_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_TESTAMENT_DUST, ARRAYSIZE(GGDS_DS_TESTAMENT_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_TESTAMENT_STATUS, ARRAYSIZE(GGDS_DS_TESTAMENT_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_TESTAMENT_UNUSED, ARRAYSIZE(GGDS_DS_TESTAMENT_UNUSED) },
};

const sDescTreeNode GGDS_DS_VENOM[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_VENOM_SPECIAL, ARRAYSIZE(GGDS_DS_VENOM_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_VENOM_LIGHT, ARRAYSIZE(GGDS_DS_VENOM_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_VENOM_HEAVY, ARRAYSIZE(GGDS_DS_VENOM_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_VENOM_DUST, ARRAYSIZE(GGDS_DS_VENOM_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_VENOM_STATUS, ARRAYSIZE(GGDS_DS_VENOM_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_VENOM_UNUSED, ARRAYSIZE(GGDS_DS_VENOM_UNUSED) },
};

const sDescTreeNode GGDS_DS_ZAPPA[] =
{
    { L"Special", DESC_NODETYPE_TREE, (void*)GGDS_DS_ZAPPA_SPECIAL, ARRAYSIZE(GGDS_DS_ZAPPA_SPECIAL) },
    { L"Light", DESC_NODETYPE_TREE, (void*)GGDS_DS_ZAPPA_LIGHT, ARRAYSIZE(GGDS_DS_ZAPPA_LIGHT) },
    { L"Heavy", DESC_NODETYPE_TREE, (void*)GGDS_DS_ZAPPA_HEAVY, ARRAYSIZE(GGDS_DS_ZAPPA_HEAVY) },
    { L"Dust", DESC_NODETYPE_TREE, (void*)GGDS_DS_ZAPPA_DUST, ARRAYSIZE(GGDS_DS_ZAPPA_DUST) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_ZAPPA_STATUS, ARRAYSIZE(GGDS_DS_ZAPPA_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_ZAPPA_UNUSED, ARRAYSIZE(GGDS_DS_ZAPPA_UNUSED) },
};

const sDescTreeNode GGDS_DS_GIG[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_GIG_USED, ARRAYSIZE(GGDS_DS_GIG_USED) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)GGDS_DS_GIG_STATUS, ARRAYSIZE(GGDS_DS_GIG_STATUS) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)GGDS_DS_GIG_UNUSED, ARRAYSIZE(GGDS_DS_GIG_UNUSED) },
};

//Minigame content can be expanded later
const sGame_PaletteDataset GGDS_MINIGAME_MENU[] =
{
    { L"Minigame Icons", 0x3640a28, 0x3640b08 },
    { L"Minigame Icons (Faded)", 0x3640b08, 0x3640be8 },
};

const sGame_PaletteDataset GGDS_MINIGAME_MAY[] =
{
    { L"Minigame May", 0x2f99a28, 0x2f99a48 },
};

const sDescTreeNode GGDS_DS_MINIGAMES[] =
{
    { L"Menu", DESC_NODETYPE_TREE, (void*)GGDS_MINIGAME_MENU, ARRAYSIZE(GGDS_MINIGAME_MENU) },
    { L"May", DESC_NODETYPE_TREE, (void*)GGDS_MINIGAME_MAY, ARRAYSIZE(GGDS_MINIGAME_MAY) },
};

const sDescTreeNode GGDS_NDS_UNITS[] =
{
    { L"Anji Mito",         DESC_NODETYPE_TREE, (void*)GGDS_DS_ANJI,        ARRAYSIZE(GGDS_DS_ANJI) },
    { L"Axl Low",           DESC_NODETYPE_TREE, (void*)GGDS_DS_AXL,         ARRAYSIZE(GGDS_DS_AXL) },
    { L"Baiken",            DESC_NODETYPE_TREE, (void*)GGDS_DS_BAIKEN,      ARRAYSIZE(GGDS_DS_BAIKEN) },
    { L"Bridget",           DESC_NODETYPE_TREE, (void*)GGDS_DS_BRIDGET,     ARRAYSIZE(GGDS_DS_BRIDGET) },
    { L"Chipp Zanuff",      DESC_NODETYPE_TREE, (void*)GGDS_DS_CHIPP,       ARRAYSIZE(GGDS_DS_CHIPP) },
    { L"Dizzy",             DESC_NODETYPE_TREE, (void*)GGDS_DS_DIZZY,       ARRAYSIZE(GGDS_DS_DIZZY) },
    { L"Eddie",             DESC_NODETYPE_TREE, (void*)GGDS_DS_EDDIE,       ARRAYSIZE(GGDS_DS_EDDIE) },
    { L"Faust",             DESC_NODETYPE_TREE, (void*)GGDS_DS_FAUST,       ARRAYSIZE(GGDS_DS_FAUST) },
    { L"I-No",              DESC_NODETYPE_TREE, (void*)GGDS_DS_INO,         ARRAYSIZE(GGDS_DS_INO) },
    { L"Jam Kuradoberi",    DESC_NODETYPE_TREE, (void*)GGDS_DS_JAM,         ARRAYSIZE(GGDS_DS_JAM) },
    { L"Johnny",            DESC_NODETYPE_TREE, (void*)GGDS_DS_JOHNNY,      ARRAYSIZE(GGDS_DS_JOHNNY) },
    { L"Ky Kiske",          DESC_NODETYPE_TREE, (void*)GGDS_DS_KY,          ARRAYSIZE(GGDS_DS_KY) },
    { L"May",               DESC_NODETYPE_TREE, (void*)GGDS_DS_MAY,         ARRAYSIZE(GGDS_DS_MAY) },
    { L"Millia Rage",       DESC_NODETYPE_TREE, (void*)GGDS_DS_MILLIA,      ARRAYSIZE(GGDS_DS_MILLIA) },
    { L"Potemkin",          DESC_NODETYPE_TREE, (void*)GGDS_DS_POTEMKIN,    ARRAYSIZE(GGDS_DS_POTEMKIN) },
    { L"Robo-Ky",           DESC_NODETYPE_TREE, (void*)GGDS_DS_ROBOKY,      ARRAYSIZE(GGDS_DS_ROBOKY) },
    { L"Sol Badguy",        DESC_NODETYPE_TREE, (void*)GGDS_DS_SOL,         ARRAYSIZE(GGDS_DS_SOL) },
    { L"Slayer",            DESC_NODETYPE_TREE, (void*)GGDS_DS_SLAYER,      ARRAYSIZE(GGDS_DS_SLAYER) },
    { L"Testament",         DESC_NODETYPE_TREE, (void*)GGDS_DS_TESTAMENT,   ARRAYSIZE(GGDS_DS_TESTAMENT) },
    { L"Venom",             DESC_NODETYPE_TREE, (void*)GGDS_DS_VENOM,       ARRAYSIZE(GGDS_DS_VENOM) },
    { L"Zappa",             DESC_NODETYPE_TREE, (void*)GGDS_DS_ZAPPA,       ARRAYSIZE(GGDS_DS_ZAPPA) },
    { L"Gig",               DESC_NODETYPE_TREE, (void*)GGDS_DS_GIG,         ARRAYSIZE(GGDS_DS_GIG) },
    
    { L"Mini Games",         DESC_NODETYPE_TREE, (void*)GGDS_DS_MINIGAMES,   ARRAYSIZE(GGDS_DS_MINIGAMES) },
    //{ L"Bonus",             DESC_NODETYPE_TREE, (void*)GGDS_DS_BONUS,       ARRAYSIZE(GGDS_DS_BONUS) },
};
