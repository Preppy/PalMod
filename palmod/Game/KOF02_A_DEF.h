#pragma once

// To add characters or palette lists:
// * Add the character to KOF02_A_CharacterOffsetArray
// * Uncomment //DumpAllCharacters in InitDescTree
// * Run PalMod and load the ROM.
// * The new headers will be printed to the debug output: copy those and paste them below.
// * Update the various character references along the lines of how we handle indexKOF02_A_Kyo for Kyo
// That should be it.  Good luck.

constexpr auto KOF02_A_NUMUNIT = indexKOF02_A_Last;

#define KOF02_A_EXTRALOC KOF02_A_NUMUNIT

struct sKOF02_A_CharacterDump
{
    LPCTSTR pszCharacterName = nullptr;
    UINT32 locationInROM = 0;
    LPCTSTR pszImageRefName = nullptr;
};

// Sorted by ROM layout...
const sKOF02_A_CharacterDump KOF02_A_CharacterOffsetArray[] =
{
    { _T("Kyo"),        0x88b62 + (0x800 * 0), _T("indexKOFSprites_02Kyo") },
    { _T("Benimaru"),   0x88b62 + (0x800 * 1), _T("indexKOFSprites_98Benimaru") },
    { _T("Daimon"),     0x88b62 + (0x800 * 2), _T("indexKOFSprites_98Daimon") },
    { _T("Terry"),      0x88b62 + (0x800 * 3), _T("indexKOFSprites_98Terry") },
    { _T("Andy"),       0x88b62 + (0x800 * 4), _T("indexKOFSprites_02Andy") },
    { _T("Joe"),        0x88b62 + (0x800 * 5), _T("indexKOFSprites_98Joe") },
    { _T("Kim"),        0x88b62 + (0x800 * 6), _T("indexKOFSprites_98Kim") },
    { _T("Chang"),      0x88b62 + (0x800 * 7), _T("indexKOFSprites_98Chang") },
    { _T("Choi"),       0x88b62 + (0x800 * 8), _T("indexKOFSprites_98Choi") },
    { _T("Athena"),     0x88b62 + (0x800 * 9), _T("indexKOFSprites_02Athena") },
    { _T("Kensou"),     0x88b62 + (0x800 * 10), _T("indexKOFSprites_98Kensou") },
    { _T("Chin"),       0x88b62 + (0x800 * 11), _T("indexKOFSprites_02Chin") },
    { _T("Leona"),      0x88b62 + (0x800 * 12), _T("indexKOFSprites_98Leona") },
    { _T("Ralf"),       0x88b62 + (0x800 * 13), _T("indexKOFSprites_02Ralf") },
    { _T("Clark"),      0x88b62 + (0x800 * 14), _T("indexKOFSprites_02Clark") },
    { _T("Ryo"),        0x88b62 + (0x800 * 15), _T("indexKOFSprites_98Ryo") },
    { _T("Robert"),     0x88b62 + (0x800 * 16), _T("indexKOFSprites_02Robert") },
    { _T("Takuma"),     0x88b62 + (0x800 * 17), _T("indexKOFSprites_98Takuma") },
    { _T("Mai"),        0x88b62 + (0x800 * 18), _T("indexKOFSprites_98Mai") },
    { _T("Yuri"),       0x88b62 + (0x800 * 19), _T("indexKOFSprites_02Yuri") },
    { _T("May Lee"),    0x88b62 + (0x800 * 20), _T("indexKOFSprites_02MayLee") },
    { _T("Iori"),       0x88b62 + (0x800 * 21), _T("indexKOFSprites_98Iori") },
    { _T("Mature"),     0x88b62 + (0x800 * 22), _T("indexKOFSprites_98Mature") },
    { _T("Vice"),       0x88b62 + (0x800 * 23), _T("indexKOFSprites_98Vice") },
    { _T("Yamazaki"),   0x88b62 + (0x800 * 24), _T("indexKOFSprites_98Yamazaki") },
    { _T("Blue Mary"),  0x88b62 + (0x800 * 25), _T("indexKOFSprites_98BlueMary") },
    { _T("Billy"),      0x88b62 + (0x800 * 26), _T("indexKOFSprites_98Billy") },
    { _T("Yashiro"),    0x88b62 + (0x800 * 27), _T("indexKOFSprites_98Yashiro") },
    { _T("Shermie"),    0x88b62 + (0x800 * 28), _T("indexKOFSprites_98Shermie") },
    { _T("Chris"),      0x88b62 + (0x800 * 29), _T("indexKOFSprites_98Chris") },
    { _T("K’"),         0x88b62 + (0x800 * 30), _T("indexKOFSprites_02K") },
    { _T("Maxima"),     0x88b62 + (0x800 * 31), _T("indexKOFSprites_02Maxima") },
    { _T("Whip"),       0x88b62 + (0x800 * 32), _T("indexKOFSprites_02Whip") },
    { _T("Vanessa"),    0x88b62 + (0x800 * 33), _T("indexKOFSprites_02Vanessa") },
    { _T("Seth"),       0x88b62 + (0x800 * 34), _T("indexKOFSprites_02Seth") },
    { _T("Ramon"),      0x88b62 + (0x800 * 35), _T("indexKOFSprites_02Ramon") },
    { _T("Kula"),       0x88b62 + (0x800 * 36), _T("indexKOFSprites_02Kula") },
    { _T("K9999"),      0x88b62 + (0x800 * 37) },
    { _T("Angel"),      0x88b62 + (0x800 * 38), _T("indexKOFSprites_02Angel") },
    { _T("Omega Rugal"), 0x88b62 + (0x800 * 39), _T("indexKOFSprites_98Rugal") },
    { _T("Kusanagi"),   0x88b62 + (0x800 * 40), _T("indexKOFSprites_02Kusanagi") },
    { _T("O.Yashiro"),  0x88b62 + (0x800 * 41), _T("indexKOFSprites_98Yashiro") },
    { _T("O.Shermie"),  0x88b62 + (0x800 * 42), _T("indexKOFSprites_98Shermie") },
    { _T("O.Chris"),    0x88b62 + (0x800 * 43), _T("indexKOFSprites_98Chris") },
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_A[] =
{
    { _T("Kyo A"), 0x0088b62, 0x0088b82, indexKOFSprites_02Kyo },
    { _T("A - Hidden Super Desperation Move 1"), 0x0088b82, 0x0088ba2, indexKOFSprites_02Kyo },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0088ba2, 0x0088bc2, indexKOFSprites_02Kyo },
    { _T("A - Electric Shock Effect"), 0x0088bc2, 0x0088be2, indexKOFSprites_02Kyo },
    { _T("A - Max Flash"), 0x0088be2, 0x0088c02, indexKOFSprites_02Kyo },
    { _T("A - Hidden Super Desperation Move 2"), 0x0088c02, 0x0088c22, indexKOFSprites_02Kyo },
    { _T("A - Soul Palette"), 0x0088c22, 0x0088c42, indexKOFSprites_02Kyo },
    { _T("A - Hidden Super Desperation Move 3"), 0x0088c42, 0x0088c62, indexKOFSprites_02Kyo },
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_B[] =
{
    { _T("Kyo B"), 0x0088d62, 0x0088d82, indexKOFSprites_02Kyo },
    { _T("B - Hidden Super Desperation Move 1"), 0x0088d82, 0x0088da2, indexKOFSprites_02Kyo },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0088da2, 0x0088dc2, indexKOFSprites_02Kyo },
    { _T("B - Electric Shock Effect"), 0x0088dc2, 0x0088de2, indexKOFSprites_02Kyo },
    { _T("B - Max Flash"), 0x0088de2, 0x0088e02, indexKOFSprites_02Kyo },
    { _T("B - Hidden Super Desperation Move 2"), 0x0088e02, 0x0088e22, indexKOFSprites_02Kyo },
    { _T("B - Soul Palette"), 0x0088e22, 0x0088e42, indexKOFSprites_02Kyo },
    { _T("B - Hidden Super Desperation Move 3"), 0x0088e42, 0x0088e62, indexKOFSprites_02Kyo },
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_C[] =
{
    { _T("Kyo C"), 0x0088f62, 0x0088f82, indexKOFSprites_02Kyo },
    { _T("C - Hidden Super Desperation Move 1"), 0x0088f82, 0x0088fa2, indexKOFSprites_02Kyo },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0088fa2, 0x0088fc2, indexKOFSprites_02Kyo },
    { _T("C - Electric Shock Effect"), 0x0088fc2, 0x0088fe2, indexKOFSprites_02Kyo },
    { _T("C - Max Flash"), 0x0088fe2, 0x0089002, indexKOFSprites_02Kyo },
    { _T("C - Hidden Super Desperation Move 2"), 0x0089002, 0x0089022, indexKOFSprites_02Kyo },
    { _T("C - Soul Palette"), 0x0089022, 0x0089042, indexKOFSprites_02Kyo },
    { _T("C - Hidden Super Desperation Move 3"), 0x0089042, 0x0089062, indexKOFSprites_02Kyo },
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_D[] =
{
    { _T("Kyo D"), 0x0089162, 0x0089182, indexKOFSprites_02Kyo },
    { _T("D - Hidden Super Desperation Move 1"), 0x0089182, 0x00891a2, indexKOFSprites_02Kyo },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00891a2, 0x00891c2, indexKOFSprites_02Kyo },
    { _T("D - Electric Shock Effect"), 0x00891c2, 0x00891e2, indexKOFSprites_02Kyo },
    { _T("D - Max Flash"), 0x00891e2, 0x0089202, indexKOFSprites_02Kyo },
    { _T("D - Hidden Super Desperation Move 2"), 0x0089202, 0x0089222, indexKOFSprites_02Kyo },
    { _T("D - Soul Palette"), 0x0089222, 0x0089242, indexKOFSprites_02Kyo },
    { _T("D - Hidden Super Desperation Move 3"), 0x0089242, 0x0089262, indexKOFSprites_02Kyo },
};

const sDescTreeNode KOF02_A_KYO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_A, ARRAYSIZE(KOF02_A_KYO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_B, ARRAYSIZE(KOF02_A_KYO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_C, ARRAYSIZE(KOF02_A_KYO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_D, ARRAYSIZE(KOF02_A_KYO_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_A[] =
{
    { _T("Benimaru A"), 0x0089362, 0x0089382, indexKOFSprites_98Benimaru },
    { _T("A - Hidden Super Desperation Move 1"), 0x0089382, 0x00893a2, indexKOFSprites_98Benimaru },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00893a2, 0x00893c2, indexKOFSprites_98Benimaru },
    { _T("A - Electric Shock Effect"), 0x00893c2, 0x00893e2, indexKOFSprites_98Benimaru },
    { _T("A - Max Flash"), 0x00893e2, 0x0089402, indexKOFSprites_98Benimaru },
    { _T("A - Hidden Super Desperation Move 2"), 0x0089402, 0x0089422, indexKOFSprites_98Benimaru },
    { _T("A - Soul Palette"), 0x0089422, 0x0089442, indexKOFSprites_98Benimaru },
    { _T("A - Hidden Super Desperation Move 3"), 0x0089442, 0x0089462, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_B[] =
{
    { _T("Benimaru B"), 0x0089562, 0x0089582, indexKOFSprites_98Benimaru },
    { _T("B - Hidden Super Desperation Move 1"), 0x0089582, 0x00895a2, indexKOFSprites_98Benimaru },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00895a2, 0x00895c2, indexKOFSprites_98Benimaru },
    { _T("B - Electric Shock Effect"), 0x00895c2, 0x00895e2, indexKOFSprites_98Benimaru },
    { _T("B - Max Flash"), 0x00895e2, 0x0089602, indexKOFSprites_98Benimaru },
    { _T("B - Hidden Super Desperation Move 2"), 0x0089602, 0x0089622, indexKOFSprites_98Benimaru },
    { _T("B - Soul Palette"), 0x0089622, 0x0089642, indexKOFSprites_98Benimaru },
    { _T("B - Hidden Super Desperation Move 3"), 0x0089642, 0x0089662, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_C[] =
{
    { _T("Benimaru C"), 0x0089762, 0x0089782, indexKOFSprites_98Benimaru },
    { _T("C - Hidden Super Desperation Move 1"), 0x0089782, 0x00897a2, indexKOFSprites_98Benimaru },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00897a2, 0x00897c2, indexKOFSprites_98Benimaru },
    { _T("C - Electric Shock Effect"), 0x00897c2, 0x00897e2, indexKOFSprites_98Benimaru },
    { _T("C - Max Flash"), 0x00897e2, 0x0089802, indexKOFSprites_98Benimaru },
    { _T("C - Hidden Super Desperation Move 2"), 0x0089802, 0x0089822, indexKOFSprites_98Benimaru },
    { _T("C - Soul Palette"), 0x0089822, 0x0089842, indexKOFSprites_98Benimaru },
    { _T("C - Hidden Super Desperation Move 3"), 0x0089842, 0x0089862, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_D[] =
{
    { _T("Benimaru D"), 0x0089962, 0x0089982, indexKOFSprites_98Benimaru },
    { _T("D - Hidden Super Desperation Move 1"), 0x0089982, 0x00899a2, indexKOFSprites_98Benimaru },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00899a2, 0x00899c2, indexKOFSprites_98Benimaru },
    { _T("D - Electric Shock Effect"), 0x00899c2, 0x00899e2, indexKOFSprites_98Benimaru },
    { _T("D - Max Flash"), 0x00899e2, 0x0089a02, indexKOFSprites_98Benimaru },
    { _T("D - Hidden Super Desperation Move 2"), 0x0089a02, 0x0089a22, indexKOFSprites_98Benimaru },
    { _T("D - Soul Palette"), 0x0089a22, 0x0089a42, indexKOFSprites_98Benimaru },
    { _T("D - Hidden Super Desperation Move 3"), 0x0089a42, 0x0089a62, indexKOFSprites_98Benimaru },
};

const sDescTreeNode KOF02_A_BENIMARU_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_A, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_B, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_C, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_D, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_A[] =
{
    { _T("Daimon A"), 0x0089b62, 0x0089b82, indexKOFSprites_98Daimon },
    { _T("A - Hidden Super Desperation Move 1"), 0x0089b82, 0x0089ba2, indexKOFSprites_98Daimon },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0089ba2, 0x0089bc2, indexKOFSprites_98Daimon },
    { _T("A - Electric Shock Effect"), 0x0089bc2, 0x0089be2, indexKOFSprites_98Daimon },
    { _T("A - Max Flash"), 0x0089be2, 0x0089c02, indexKOFSprites_98Daimon },
    { _T("A - Hidden Super Desperation Move 2"), 0x0089c02, 0x0089c22, indexKOFSprites_98Daimon },
    { _T("A - Soul Palette"), 0x0089c22, 0x0089c42, indexKOFSprites_98Daimon },
    { _T("A - Hidden Super Desperation Move 3"), 0x0089c42, 0x0089c62, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_B[] =
{
    { _T("Daimon B"), 0x0089d62, 0x0089d82, indexKOFSprites_98Daimon },
    { _T("B - Hidden Super Desperation Move 1"), 0x0089d82, 0x0089da2, indexKOFSprites_98Daimon },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0089da2, 0x0089dc2, indexKOFSprites_98Daimon },
    { _T("B - Electric Shock Effect"), 0x0089dc2, 0x0089de2, indexKOFSprites_98Daimon },
    { _T("B - Max Flash"), 0x0089de2, 0x0089e02, indexKOFSprites_98Daimon },
    { _T("B - Hidden Super Desperation Move 2"), 0x0089e02, 0x0089e22, indexKOFSprites_98Daimon },
    { _T("B - Soul Palette"), 0x0089e22, 0x0089e42, indexKOFSprites_98Daimon },
    { _T("B - Hidden Super Desperation Move 3"), 0x0089e42, 0x0089e62, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_C[] =
{
    { _T("Daimon C"), 0x0089f62, 0x0089f82, indexKOFSprites_98Daimon },
    { _T("C - Hidden Super Desperation Move 1"), 0x0089f82, 0x0089fa2, indexKOFSprites_98Daimon },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0089fa2, 0x0089fc2, indexKOFSprites_98Daimon },
    { _T("C - Electric Shock Effect"), 0x0089fc2, 0x0089fe2, indexKOFSprites_98Daimon },
    { _T("C - Max Flash"), 0x0089fe2, 0x008a002, indexKOFSprites_98Daimon },
    { _T("C - Hidden Super Desperation Move 2"), 0x008a002, 0x008a022, indexKOFSprites_98Daimon },
    { _T("C - Soul Palette"), 0x008a022, 0x008a042, indexKOFSprites_98Daimon },
    { _T("C - Hidden Super Desperation Move 3"), 0x008a042, 0x008a062, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_D[] =
{
    { _T("Daimon D"), 0x008a162, 0x008a182, indexKOFSprites_98Daimon },
    { _T("D - Hidden Super Desperation Move 1"), 0x008a182, 0x008a1a2, indexKOFSprites_98Daimon },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008a1a2, 0x008a1c2, indexKOFSprites_98Daimon },
    { _T("D - Electric Shock Effect"), 0x008a1c2, 0x008a1e2, indexKOFSprites_98Daimon },
    { _T("D - Max Flash"), 0x008a1e2, 0x008a202, indexKOFSprites_98Daimon },
    { _T("D - Hidden Super Desperation Move 2"), 0x008a202, 0x008a222, indexKOFSprites_98Daimon },
    { _T("D - Soul Palette"), 0x008a222, 0x008a242, indexKOFSprites_98Daimon },
    { _T("D - Hidden Super Desperation Move 3"), 0x008a242, 0x008a262, indexKOFSprites_98Daimon },
};

const sDescTreeNode KOF02_A_DAIMON_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_A, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_B, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_C, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_D, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_A[] =
{
    { _T("Terry A"), 0x008a362, 0x008a382, indexKOFSprites_98Terry },
    { _T("A - Hidden Super Desperation Move 1"), 0x008a382, 0x008a3a2, indexKOFSprites_98Terry },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008a3a2, 0x008a3c2, indexKOFSprites_98Terry },
    { _T("A - Electric Shock Effect"), 0x008a3c2, 0x008a3e2, indexKOFSprites_98Terry },
    { _T("A - Max Flash"), 0x008a3e2, 0x008a402, indexKOFSprites_98Terry },
    { _T("A - Hidden Super Desperation Move 2"), 0x008a402, 0x008a422, indexKOFSprites_98Terry },
    { _T("A - Soul Palette"), 0x008a422, 0x008a442, indexKOFSprites_98Terry },
    { _T("A - Hidden Super Desperation Move 3"), 0x008a442, 0x008a462, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_B[] =
{
    { _T("Terry B"), 0x008a562, 0x008a582, indexKOFSprites_98Terry },
    { _T("B - Hidden Super Desperation Move 1"), 0x008a582, 0x008a5a2, indexKOFSprites_98Terry },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008a5a2, 0x008a5c2, indexKOFSprites_98Terry },
    { _T("B - Electric Shock Effect"), 0x008a5c2, 0x008a5e2, indexKOFSprites_98Terry },
    { _T("B - Max Flash"), 0x008a5e2, 0x008a602, indexKOFSprites_98Terry },
    { _T("B - Hidden Super Desperation Move 2"), 0x008a602, 0x008a622, indexKOFSprites_98Terry },
    { _T("B - Soul Palette"), 0x008a622, 0x008a642, indexKOFSprites_98Terry },
    { _T("B - Hidden Super Desperation Move 3"), 0x008a642, 0x008a662, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_C[] =
{
    { _T("Terry C"), 0x008a762, 0x008a782, indexKOFSprites_98Terry },
    { _T("C - Hidden Super Desperation Move 1"), 0x008a782, 0x008a7a2, indexKOFSprites_98Terry },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008a7a2, 0x008a7c2, indexKOFSprites_98Terry },
    { _T("C - Electric Shock Effect"), 0x008a7c2, 0x008a7e2, indexKOFSprites_98Terry },
    { _T("C - Max Flash"), 0x008a7e2, 0x008a802, indexKOFSprites_98Terry },
    { _T("C - Hidden Super Desperation Move 2"), 0x008a802, 0x008a822, indexKOFSprites_98Terry },
    { _T("C - Soul Palette"), 0x008a822, 0x008a842, indexKOFSprites_98Terry },
    { _T("C - Hidden Super Desperation Move 3"), 0x008a842, 0x008a862, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_D[] =
{
    { _T("Terry D"), 0x008a962, 0x008a982, indexKOFSprites_98Terry },
    { _T("D - Hidden Super Desperation Move 1"), 0x008a982, 0x008a9a2, indexKOFSprites_98Terry },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008a9a2, 0x008a9c2, indexKOFSprites_98Terry },
    { _T("D - Electric Shock Effect"), 0x008a9c2, 0x008a9e2, indexKOFSprites_98Terry },
    { _T("D - Max Flash"), 0x008a9e2, 0x008aa02, indexKOFSprites_98Terry },
    { _T("D - Hidden Super Desperation Move 2"), 0x008aa02, 0x008aa22, indexKOFSprites_98Terry },
    { _T("D - Soul Palette"), 0x008aa22, 0x008aa42, indexKOFSprites_98Terry },
    { _T("D - Hidden Super Desperation Move 3"), 0x008aa42, 0x008aa62, indexKOFSprites_98Terry },
};

const sDescTreeNode KOF02_A_TERRY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_A, ARRAYSIZE(KOF02_A_TERRY_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_B, ARRAYSIZE(KOF02_A_TERRY_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_C, ARRAYSIZE(KOF02_A_TERRY_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_D, ARRAYSIZE(KOF02_A_TERRY_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_A[] =
{
    { _T("Andy A"), 0x008ab62, 0x008ab82, indexKOFSprites_02Andy },
    { _T("A - Hidden Super Desperation Move 1"), 0x008ab82, 0x008aba2, indexKOFSprites_02Andy },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008aba2, 0x008abc2, indexKOFSprites_02Andy },
    { _T("A - Electric Shock Effect"), 0x008abc2, 0x008abe2, indexKOFSprites_02Andy },
    { _T("A - Max Flash"), 0x008abe2, 0x008ac02, indexKOFSprites_02Andy },
    { _T("A - Hidden Super Desperation Move 2"), 0x008ac02, 0x008ac22, indexKOFSprites_02Andy },
    { _T("A - Soul Palette"), 0x008ac22, 0x008ac42, indexKOFSprites_02Andy },
    { _T("A - Hidden Super Desperation Move 3"), 0x008ac42, 0x008ac62, indexKOFSprites_02Andy },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_B[] =
{
    { _T("Andy B"), 0x008ad62, 0x008ad82, indexKOFSprites_02Andy },
    { _T("B - Hidden Super Desperation Move 1"), 0x008ad82, 0x008ada2, indexKOFSprites_02Andy },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008ada2, 0x008adc2, indexKOFSprites_02Andy },
    { _T("B - Electric Shock Effect"), 0x008adc2, 0x008ade2, indexKOFSprites_02Andy },
    { _T("B - Max Flash"), 0x008ade2, 0x008ae02, indexKOFSprites_02Andy },
    { _T("B - Hidden Super Desperation Move 2"), 0x008ae02, 0x008ae22, indexKOFSprites_02Andy },
    { _T("B - Soul Palette"), 0x008ae22, 0x008ae42, indexKOFSprites_02Andy },
    { _T("B - Hidden Super Desperation Move 3"), 0x008ae42, 0x008ae62, indexKOFSprites_02Andy },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_C[] =
{
    { _T("Andy C"), 0x008af62, 0x008af82, indexKOFSprites_02Andy },
    { _T("C - Hidden Super Desperation Move 1"), 0x008af82, 0x008afa2, indexKOFSprites_02Andy },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008afa2, 0x008afc2, indexKOFSprites_02Andy },
    { _T("C - Electric Shock Effect"), 0x008afc2, 0x008afe2, indexKOFSprites_02Andy },
    { _T("C - Max Flash"), 0x008afe2, 0x008b002, indexKOFSprites_02Andy },
    { _T("C - Hidden Super Desperation Move 2"), 0x008b002, 0x008b022, indexKOFSprites_02Andy },
    { _T("C - Soul Palette"), 0x008b022, 0x008b042, indexKOFSprites_02Andy },
    { _T("C - Hidden Super Desperation Move 3"), 0x008b042, 0x008b062, indexKOFSprites_02Andy },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_D[] =
{
    { _T("Andy D"), 0x008b162, 0x008b182, indexKOFSprites_02Andy },
    { _T("D - Hidden Super Desperation Move 1"), 0x008b182, 0x008b1a2, indexKOFSprites_02Andy },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008b1a2, 0x008b1c2, indexKOFSprites_02Andy },
    { _T("D - Electric Shock Effect"), 0x008b1c2, 0x008b1e2, indexKOFSprites_02Andy },
    { _T("D - Max Flash"), 0x008b1e2, 0x008b202, indexKOFSprites_02Andy },
    { _T("D - Hidden Super Desperation Move 2"), 0x008b202, 0x008b222, indexKOFSprites_02Andy },
    { _T("D - Soul Palette"), 0x008b222, 0x008b242, indexKOFSprites_02Andy },
    { _T("D - Hidden Super Desperation Move 3"), 0x008b242, 0x008b262, indexKOFSprites_02Andy },
};

const sDescTreeNode KOF02_A_ANDY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_A, ARRAYSIZE(KOF02_A_ANDY_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_B, ARRAYSIZE(KOF02_A_ANDY_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_C, ARRAYSIZE(KOF02_A_ANDY_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_D, ARRAYSIZE(KOF02_A_ANDY_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_A[] =
{
    { _T("Joe A"), 0x008b362, 0x008b382, indexKOFSprites_98Joe },
    { _T("A - Hidden Super Desperation Move 1"), 0x008b382, 0x008b3a2, indexKOFSprites_98Joe },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008b3a2, 0x008b3c2, indexKOFSprites_98Joe },
    { _T("A - Electric Shock Effect"), 0x008b3c2, 0x008b3e2, indexKOFSprites_98Joe },
    { _T("A - Max Flash"), 0x008b3e2, 0x008b402, indexKOFSprites_98Joe },
    { _T("A - Hidden Super Desperation Move 2"), 0x008b402, 0x008b422, indexKOFSprites_98Joe },
    { _T("A - Soul Palette"), 0x008b422, 0x008b442, indexKOFSprites_98Joe },
    { _T("A - Hidden Super Desperation Move 3"), 0x008b442, 0x008b462, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_B[] =
{
    { _T("Joe B"), 0x008b562, 0x008b582, indexKOFSprites_98Joe },
    { _T("B - Hidden Super Desperation Move 1"), 0x008b582, 0x008b5a2, indexKOFSprites_98Joe },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008b5a2, 0x008b5c2, indexKOFSprites_98Joe },
    { _T("B - Electric Shock Effect"), 0x008b5c2, 0x008b5e2, indexKOFSprites_98Joe },
    { _T("B - Max Flash"), 0x008b5e2, 0x008b602, indexKOFSprites_98Joe },
    { _T("B - Hidden Super Desperation Move 2"), 0x008b602, 0x008b622, indexKOFSprites_98Joe },
    { _T("B - Soul Palette"), 0x008b622, 0x008b642, indexKOFSprites_98Joe },
    { _T("B - Hidden Super Desperation Move 3"), 0x008b642, 0x008b662, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_C[] =
{
    { _T("Joe C"), 0x008b762, 0x008b782, indexKOFSprites_98Joe },
    { _T("C - Hidden Super Desperation Move 1"), 0x008b782, 0x008b7a2, indexKOFSprites_98Joe },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008b7a2, 0x008b7c2, indexKOFSprites_98Joe },
    { _T("C - Electric Shock Effect"), 0x008b7c2, 0x008b7e2, indexKOFSprites_98Joe },
    { _T("C - Max Flash"), 0x008b7e2, 0x008b802, indexKOFSprites_98Joe },
    { _T("C - Hidden Super Desperation Move 2"), 0x008b802, 0x008b822, indexKOFSprites_98Joe },
    { _T("C - Soul Palette"), 0x008b822, 0x008b842, indexKOFSprites_98Joe },
    { _T("C - Hidden Super Desperation Move 3"), 0x008b842, 0x008b862, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_D[] =
{
    { _T("Joe D"), 0x008b962, 0x008b982, indexKOFSprites_98Joe },
    { _T("D - Hidden Super Desperation Move 1"), 0x008b982, 0x008b9a2, indexKOFSprites_98Joe },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008b9a2, 0x008b9c2, indexKOFSprites_98Joe },
    { _T("D - Electric Shock Effect"), 0x008b9c2, 0x008b9e2, indexKOFSprites_98Joe },
    { _T("D - Max Flash"), 0x008b9e2, 0x008ba02, indexKOFSprites_98Joe },
    { _T("D - Hidden Super Desperation Move 2"), 0x008ba02, 0x008ba22, indexKOFSprites_98Joe },
    { _T("D - Soul Palette"), 0x008ba22, 0x008ba42, indexKOFSprites_98Joe },
    { _T("D - Hidden Super Desperation Move 3"), 0x008ba42, 0x008ba62, indexKOFSprites_98Joe },
};

const sDescTreeNode KOF02_A_JOE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_A, ARRAYSIZE(KOF02_A_JOE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_B, ARRAYSIZE(KOF02_A_JOE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_C, ARRAYSIZE(KOF02_A_JOE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_D, ARRAYSIZE(KOF02_A_JOE_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_A[] =
{
    { _T("Kim A"), 0x008bb62, 0x008bb82, indexKOFSprites_98Kim },
    { _T("A - Hidden Super Desperation Move 1"), 0x008bb82, 0x008bba2, indexKOFSprites_98Kim },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008bba2, 0x008bbc2, indexKOFSprites_98Kim },
    { _T("A - Electric Shock Effect"), 0x008bbc2, 0x008bbe2, indexKOFSprites_98Kim },
    { _T("A - Max Flash"), 0x008bbe2, 0x008bc02, indexKOFSprites_98Kim },
    { _T("A - Hidden Super Desperation Move 2"), 0x008bc02, 0x008bc22, indexKOFSprites_98Kim },
    { _T("A - Soul Palette"), 0x008bc22, 0x008bc42, indexKOFSprites_98Kim },
    { _T("A - Hidden Super Desperation Move 3"), 0x008bc42, 0x008bc62, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_B[] =
{
    { _T("Kim B"), 0x008bd62, 0x008bd82, indexKOFSprites_98Kim },
    { _T("B - Hidden Super Desperation Move 1"), 0x008bd82, 0x008bda2, indexKOFSprites_98Kim },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008bda2, 0x008bdc2, indexKOFSprites_98Kim },
    { _T("B - Electric Shock Effect"), 0x008bdc2, 0x008bde2, indexKOFSprites_98Kim },
    { _T("B - Max Flash"), 0x008bde2, 0x008be02, indexKOFSprites_98Kim },
    { _T("B - Hidden Super Desperation Move 2"), 0x008be02, 0x008be22, indexKOFSprites_98Kim },
    { _T("B - Soul Palette"), 0x008be22, 0x008be42, indexKOFSprites_98Kim },
    { _T("B - Hidden Super Desperation Move 3"), 0x008be42, 0x008be62, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_C[] =
{
    { _T("Kim C"), 0x008bf62, 0x008bf82, indexKOFSprites_98Kim },
    { _T("C - Hidden Super Desperation Move 1"), 0x008bf82, 0x008bfa2, indexKOFSprites_98Kim },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008bfa2, 0x008bfc2, indexKOFSprites_98Kim },
    { _T("C - Electric Shock Effect"), 0x008bfc2, 0x008bfe2, indexKOFSprites_98Kim },
    { _T("C - Max Flash"), 0x008bfe2, 0x008c002, indexKOFSprites_98Kim },
    { _T("C - Hidden Super Desperation Move 2"), 0x008c002, 0x008c022, indexKOFSprites_98Kim },
    { _T("C - Soul Palette"), 0x008c022, 0x008c042, indexKOFSprites_98Kim },
    { _T("C - Hidden Super Desperation Move 3"), 0x008c042, 0x008c062, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_D[] =
{
    { _T("Kim D"), 0x008c162, 0x008c182, indexKOFSprites_98Kim },
    { _T("D - Hidden Super Desperation Move 1"), 0x008c182, 0x008c1a2, indexKOFSprites_98Kim },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008c1a2, 0x008c1c2, indexKOFSprites_98Kim },
    { _T("D - Electric Shock Effect"), 0x008c1c2, 0x008c1e2, indexKOFSprites_98Kim },
    { _T("D - Max Flash"), 0x008c1e2, 0x008c202, indexKOFSprites_98Kim },
    { _T("D - Hidden Super Desperation Move 2"), 0x008c202, 0x008c222, indexKOFSprites_98Kim },
    { _T("D - Soul Palette"), 0x008c222, 0x008c242, indexKOFSprites_98Kim },
    { _T("D - Hidden Super Desperation Move 3"), 0x008c242, 0x008c262, indexKOFSprites_98Kim },
};

const sDescTreeNode KOF02_A_KIM_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_A, ARRAYSIZE(KOF02_A_KIM_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_B, ARRAYSIZE(KOF02_A_KIM_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_C, ARRAYSIZE(KOF02_A_KIM_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_D, ARRAYSIZE(KOF02_A_KIM_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_A[] =
{
    { _T("Chang A"), 0x008c362, 0x008c382, indexKOFSprites_98Chang },
    { _T("A - Hidden Super Desperation Move 1"), 0x008c382, 0x008c3a2, indexKOFSprites_98Chang },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008c3a2, 0x008c3c2, indexKOFSprites_98Chang },
    { _T("A - Electric Shock Effect"), 0x008c3c2, 0x008c3e2, indexKOFSprites_98Chang },
    { _T("A - Max Flash"), 0x008c3e2, 0x008c402, indexKOFSprites_98Chang },
    { _T("A - Hidden Super Desperation Move 2"), 0x008c402, 0x008c422, indexKOFSprites_98Chang },
    { _T("A - Soul Palette"), 0x008c422, 0x008c442, indexKOFSprites_98Chang },
    { _T("A - Hidden Super Desperation Move 3"), 0x008c442, 0x008c462, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_B[] =
{
    { _T("Chang B"), 0x008c562, 0x008c582, indexKOFSprites_98Chang },
    { _T("B - Hidden Super Desperation Move 1"), 0x008c582, 0x008c5a2, indexKOFSprites_98Chang },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008c5a2, 0x008c5c2, indexKOFSprites_98Chang },
    { _T("B - Electric Shock Effect"), 0x008c5c2, 0x008c5e2, indexKOFSprites_98Chang },
    { _T("B - Max Flash"), 0x008c5e2, 0x008c602, indexKOFSprites_98Chang },
    { _T("B - Hidden Super Desperation Move 2"), 0x008c602, 0x008c622, indexKOFSprites_98Chang },
    { _T("B - Soul Palette"), 0x008c622, 0x008c642, indexKOFSprites_98Chang },
    { _T("B - Hidden Super Desperation Move 3"), 0x008c642, 0x008c662, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_C[] =
{
    { _T("Chang C"), 0x008c762, 0x008c782, indexKOFSprites_98Chang },
    { _T("C - Hidden Super Desperation Move 1"), 0x008c782, 0x008c7a2, indexKOFSprites_98Chang },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008c7a2, 0x008c7c2, indexKOFSprites_98Chang },
    { _T("C - Electric Shock Effect"), 0x008c7c2, 0x008c7e2, indexKOFSprites_98Chang },
    { _T("C - Max Flash"), 0x008c7e2, 0x008c802, indexKOFSprites_98Chang },
    { _T("C - Hidden Super Desperation Move 2"), 0x008c802, 0x008c822, indexKOFSprites_98Chang },
    { _T("C - Soul Palette"), 0x008c822, 0x008c842, indexKOFSprites_98Chang },
    { _T("C - Hidden Super Desperation Move 3"), 0x008c842, 0x008c862, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_D[] =
{
    { _T("Chang D"), 0x008c962, 0x008c982, indexKOFSprites_98Chang },
    { _T("D - Hidden Super Desperation Move 1"), 0x008c982, 0x008c9a2, indexKOFSprites_98Chang },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008c9a2, 0x008c9c2, indexKOFSprites_98Chang },
    { _T("D - Electric Shock Effect"), 0x008c9c2, 0x008c9e2, indexKOFSprites_98Chang },
    { _T("D - Max Flash"), 0x008c9e2, 0x008ca02, indexKOFSprites_98Chang },
    { _T("D - Hidden Super Desperation Move 2"), 0x008ca02, 0x008ca22, indexKOFSprites_98Chang },
    { _T("D - Soul Palette"), 0x008ca22, 0x008ca42, indexKOFSprites_98Chang },
    { _T("D - Hidden Super Desperation Move 3"), 0x008ca42, 0x008ca62, indexKOFSprites_98Chang },
};

const sDescTreeNode KOF02_A_CHANG_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_A, ARRAYSIZE(KOF02_A_CHANG_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_B, ARRAYSIZE(KOF02_A_CHANG_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_C, ARRAYSIZE(KOF02_A_CHANG_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_D, ARRAYSIZE(KOF02_A_CHANG_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_A[] =
{
    { _T("Choi A"), 0x008cb62, 0x008cb82, indexKOFSprites_98Choi },
    { _T("A - Hidden Super Desperation Move 1"), 0x008cb82, 0x008cba2, indexKOFSprites_98Choi },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008cba2, 0x008cbc2, indexKOFSprites_98Choi },
    { _T("A - Electric Shock Effect"), 0x008cbc2, 0x008cbe2, indexKOFSprites_98Choi },
    { _T("A - Max Flash"), 0x008cbe2, 0x008cc02, indexKOFSprites_98Choi },
    { _T("A - Hidden Super Desperation Move 2"), 0x008cc02, 0x008cc22, indexKOFSprites_98Choi },
    { _T("A - Soul Palette"), 0x008cc22, 0x008cc42, indexKOFSprites_98Choi },
    { _T("A - Hidden Super Desperation Move 3"), 0x008cc42, 0x008cc62, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_B[] =
{
    { _T("Choi B"), 0x008cd62, 0x008cd82, indexKOFSprites_98Choi },
    { _T("B - Hidden Super Desperation Move 1"), 0x008cd82, 0x008cda2, indexKOFSprites_98Choi },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008cda2, 0x008cdc2, indexKOFSprites_98Choi },
    { _T("B - Electric Shock Effect"), 0x008cdc2, 0x008cde2, indexKOFSprites_98Choi },
    { _T("B - Max Flash"), 0x008cde2, 0x008ce02, indexKOFSprites_98Choi },
    { _T("B - Hidden Super Desperation Move 2"), 0x008ce02, 0x008ce22, indexKOFSprites_98Choi },
    { _T("B - Soul Palette"), 0x008ce22, 0x008ce42, indexKOFSprites_98Choi },
    { _T("B - Hidden Super Desperation Move 3"), 0x008ce42, 0x008ce62, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_C[] =
{
    { _T("Choi C"), 0x008cf62, 0x008cf82, indexKOFSprites_98Choi },
    { _T("C - Hidden Super Desperation Move 1"), 0x008cf82, 0x008cfa2, indexKOFSprites_98Choi },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008cfa2, 0x008cfc2, indexKOFSprites_98Choi },
    { _T("C - Electric Shock Effect"), 0x008cfc2, 0x008cfe2, indexKOFSprites_98Choi },
    { _T("C - Max Flash"), 0x008cfe2, 0x008d002, indexKOFSprites_98Choi },
    { _T("C - Hidden Super Desperation Move 2"), 0x008d002, 0x008d022, indexKOFSprites_98Choi },
    { _T("C - Soul Palette"), 0x008d022, 0x008d042, indexKOFSprites_98Choi },
    { _T("C - Hidden Super Desperation Move 3"), 0x008d042, 0x008d062, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_D[] =
{
    { _T("Choi D"), 0x008d162, 0x008d182, indexKOFSprites_98Choi },
    { _T("D - Hidden Super Desperation Move 1"), 0x008d182, 0x008d1a2, indexKOFSprites_98Choi },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008d1a2, 0x008d1c2, indexKOFSprites_98Choi },
    { _T("D - Electric Shock Effect"), 0x008d1c2, 0x008d1e2, indexKOFSprites_98Choi },
    { _T("D - Max Flash"), 0x008d1e2, 0x008d202, indexKOFSprites_98Choi },
    { _T("D - Hidden Super Desperation Move 2"), 0x008d202, 0x008d222, indexKOFSprites_98Choi },
    { _T("D - Soul Palette"), 0x008d222, 0x008d242, indexKOFSprites_98Choi },
    { _T("D - Hidden Super Desperation Move 3"), 0x008d242, 0x008d262, indexKOFSprites_98Choi },
};

const sDescTreeNode KOF02_A_CHOI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_A, ARRAYSIZE(KOF02_A_CHOI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_B, ARRAYSIZE(KOF02_A_CHOI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_C, ARRAYSIZE(KOF02_A_CHOI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_D, ARRAYSIZE(KOF02_A_CHOI_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_A[] =
{
    { _T("Athena A"), 0x008d362, 0x008d382, indexKOFSprites_02Athena },
    { _T("A - Hidden Super Desperation Move 1"), 0x008d382, 0x008d3a2, indexKOFSprites_02Athena },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008d3a2, 0x008d3c2, indexKOFSprites_02Athena },
    { _T("A - Electric Shock Effect"), 0x008d3c2, 0x008d3e2, indexKOFSprites_02Athena },
    { _T("A - Max Flash"), 0x008d3e2, 0x008d402, indexKOFSprites_02Athena },
    { _T("A - Hidden Super Desperation Move 2"), 0x008d402, 0x008d422, indexKOFSprites_02Athena },
    { _T("A - Soul Palette"), 0x008d422, 0x008d442, indexKOFSprites_02Athena },
    { _T("A - Hidden Super Desperation Move 3"), 0x008d442, 0x008d462, indexKOFSprites_02Athena },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_B[] =
{
    { _T("Athena B"), 0x008d562, 0x008d582, indexKOFSprites_02Athena },
    { _T("B - Hidden Super Desperation Move 1"), 0x008d582, 0x008d5a2, indexKOFSprites_02Athena },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008d5a2, 0x008d5c2, indexKOFSprites_02Athena },
    { _T("B - Electric Shock Effect"), 0x008d5c2, 0x008d5e2, indexKOFSprites_02Athena },
    { _T("B - Max Flash"), 0x008d5e2, 0x008d602, indexKOFSprites_02Athena },
    { _T("B - Hidden Super Desperation Move 2"), 0x008d602, 0x008d622, indexKOFSprites_02Athena },
    { _T("B - Soul Palette"), 0x008d622, 0x008d642, indexKOFSprites_02Athena },
    { _T("B - Hidden Super Desperation Move 3"), 0x008d642, 0x008d662, indexKOFSprites_02Athena },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_C[] =
{
    { _T("Athena C"), 0x008d762, 0x008d782, indexKOFSprites_02Athena },
    { _T("C - Hidden Super Desperation Move 1"), 0x008d782, 0x008d7a2, indexKOFSprites_02Athena },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008d7a2, 0x008d7c2, indexKOFSprites_02Athena },
    { _T("C - Electric Shock Effect"), 0x008d7c2, 0x008d7e2, indexKOFSprites_02Athena },
    { _T("C - Max Flash"), 0x008d7e2, 0x008d802, indexKOFSprites_02Athena },
    { _T("C - Hidden Super Desperation Move 2"), 0x008d802, 0x008d822, indexKOFSprites_02Athena },
    { _T("C - Soul Palette"), 0x008d822, 0x008d842, indexKOFSprites_02Athena },
    { _T("C - Hidden Super Desperation Move 3"), 0x008d842, 0x008d862, indexKOFSprites_02Athena },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_D[] =
{
    { _T("Athena D"), 0x008d962, 0x008d982, indexKOFSprites_02Athena },
    { _T("D - Hidden Super Desperation Move 1"), 0x008d982, 0x008d9a2, indexKOFSprites_02Athena },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008d9a2, 0x008d9c2, indexKOFSprites_02Athena },
    { _T("D - Electric Shock Effect"), 0x008d9c2, 0x008d9e2, indexKOFSprites_02Athena },
    { _T("D - Max Flash"), 0x008d9e2, 0x008da02, indexKOFSprites_02Athena },
    { _T("D - Hidden Super Desperation Move 2"), 0x008da02, 0x008da22, indexKOFSprites_02Athena },
    { _T("D - Soul Palette"), 0x008da22, 0x008da42, indexKOFSprites_02Athena },
    { _T("D - Hidden Super Desperation Move 3"), 0x008da42, 0x008da62, indexKOFSprites_02Athena },
};

const sDescTreeNode KOF02_A_ATHENA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_A, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_B, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_C, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_D, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_A[] =
{
    { _T("Kensou A"), 0x008db62, 0x008db82, indexKOFSprites_98Kensou },
    { _T("A - Hidden Super Desperation Move 1"), 0x008db82, 0x008dba2, indexKOFSprites_98Kensou },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008dba2, 0x008dbc2, indexKOFSprites_98Kensou },
    { _T("A - Electric Shock Effect"), 0x008dbc2, 0x008dbe2, indexKOFSprites_98Kensou },
    { _T("A - Max Flash"), 0x008dbe2, 0x008dc02, indexKOFSprites_98Kensou },
    { _T("A - Hidden Super Desperation Move 2"), 0x008dc02, 0x008dc22, indexKOFSprites_98Kensou },
    { _T("A - Soul Palette"), 0x008dc22, 0x008dc42, indexKOFSprites_98Kensou },
    { _T("A - Hidden Super Desperation Move 3"), 0x008dc42, 0x008dc62, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_B[] =
{
    { _T("Kensou B"), 0x008dd62, 0x008dd82, indexKOFSprites_98Kensou },
    { _T("B - Hidden Super Desperation Move 1"), 0x008dd82, 0x008dda2, indexKOFSprites_98Kensou },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008dda2, 0x008ddc2, indexKOFSprites_98Kensou },
    { _T("B - Electric Shock Effect"), 0x008ddc2, 0x008dde2, indexKOFSprites_98Kensou },
    { _T("B - Max Flash"), 0x008dde2, 0x008de02, indexKOFSprites_98Kensou },
    { _T("B - Hidden Super Desperation Move 2"), 0x008de02, 0x008de22, indexKOFSprites_98Kensou },
    { _T("B - Soul Palette"), 0x008de22, 0x008de42, indexKOFSprites_98Kensou },
    { _T("B - Hidden Super Desperation Move 3"), 0x008de42, 0x008de62, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_C[] =
{
    { _T("Kensou C"), 0x008df62, 0x008df82, indexKOFSprites_98Kensou },
    { _T("C - Hidden Super Desperation Move 1"), 0x008df82, 0x008dfa2, indexKOFSprites_98Kensou },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008dfa2, 0x008dfc2, indexKOFSprites_98Kensou },
    { _T("C - Electric Shock Effect"), 0x008dfc2, 0x008dfe2, indexKOFSprites_98Kensou },
    { _T("C - Max Flash"), 0x008dfe2, 0x008e002, indexKOFSprites_98Kensou },
    { _T("C - Hidden Super Desperation Move 2"), 0x008e002, 0x008e022, indexKOFSprites_98Kensou },
    { _T("C - Soul Palette"), 0x008e022, 0x008e042, indexKOFSprites_98Kensou },
    { _T("C - Hidden Super Desperation Move 3"), 0x008e042, 0x008e062, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_D[] =
{
    { _T("Kensou D"), 0x008e162, 0x008e182, indexKOFSprites_98Kensou },
    { _T("D - Hidden Super Desperation Move 1"), 0x008e182, 0x008e1a2, indexKOFSprites_98Kensou },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008e1a2, 0x008e1c2, indexKOFSprites_98Kensou },
    { _T("D - Electric Shock Effect"), 0x008e1c2, 0x008e1e2, indexKOFSprites_98Kensou },
    { _T("D - Max Flash"), 0x008e1e2, 0x008e202, indexKOFSprites_98Kensou },
    { _T("D - Hidden Super Desperation Move 2"), 0x008e202, 0x008e222, indexKOFSprites_98Kensou },
    { _T("D - Soul Palette"), 0x008e222, 0x008e242, indexKOFSprites_98Kensou },
    { _T("D - Hidden Super Desperation Move 3"), 0x008e242, 0x008e262, indexKOFSprites_98Kensou },
};

const sDescTreeNode KOF02_A_KENSOU_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_A, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_B, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_C, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_D, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_A[] =
{
    { _T("Chin A"), 0x008e362, 0x008e382, indexKOFSprites_02Chin },
    { _T("A - Hidden Super Desperation Move 1"), 0x008e382, 0x008e3a2, indexKOFSprites_02Chin },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008e3a2, 0x008e3c2, indexKOFSprites_02Chin },
    { _T("A - Electric Shock Effect"), 0x008e3c2, 0x008e3e2, indexKOFSprites_02Chin },
    { _T("A - Max Flash"), 0x008e3e2, 0x008e402, indexKOFSprites_02Chin },
    { _T("A - Hidden Super Desperation Move 2"), 0x008e402, 0x008e422, indexKOFSprites_02Chin },
    { _T("A - Soul Palette"), 0x008e422, 0x008e442, indexKOFSprites_02Chin },
    { _T("A - Hidden Super Desperation Move 3"), 0x008e442, 0x008e462, indexKOFSprites_02Chin },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_B[] =
{
    { _T("Chin B"), 0x008e562, 0x008e582, indexKOFSprites_02Chin },
    { _T("B - Hidden Super Desperation Move 1"), 0x008e582, 0x008e5a2, indexKOFSprites_02Chin },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008e5a2, 0x008e5c2, indexKOFSprites_02Chin },
    { _T("B - Electric Shock Effect"), 0x008e5c2, 0x008e5e2, indexKOFSprites_02Chin },
    { _T("B - Max Flash"), 0x008e5e2, 0x008e602, indexKOFSprites_02Chin },
    { _T("B - Hidden Super Desperation Move 2"), 0x008e602, 0x008e622, indexKOFSprites_02Chin },
    { _T("B - Soul Palette"), 0x008e622, 0x008e642, indexKOFSprites_02Chin },
    { _T("B - Hidden Super Desperation Move 3"), 0x008e642, 0x008e662, indexKOFSprites_02Chin },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_C[] =
{
    { _T("Chin C"), 0x008e762, 0x008e782, indexKOFSprites_02Chin },
    { _T("C - Hidden Super Desperation Move 1"), 0x008e782, 0x008e7a2, indexKOFSprites_02Chin },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008e7a2, 0x008e7c2, indexKOFSprites_02Chin },
    { _T("C - Electric Shock Effect"), 0x008e7c2, 0x008e7e2, indexKOFSprites_02Chin },
    { _T("C - Max Flash"), 0x008e7e2, 0x008e802, indexKOFSprites_02Chin },
    { _T("C - Hidden Super Desperation Move 2"), 0x008e802, 0x008e822, indexKOFSprites_02Chin },
    { _T("C - Soul Palette"), 0x008e822, 0x008e842, indexKOFSprites_02Chin },
    { _T("C - Hidden Super Desperation Move 3"), 0x008e842, 0x008e862, indexKOFSprites_02Chin },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_D[] =
{
    { _T("Chin D"), 0x008e962, 0x008e982, indexKOFSprites_02Chin },
    { _T("D - Hidden Super Desperation Move 1"), 0x008e982, 0x008e9a2, indexKOFSprites_02Chin },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008e9a2, 0x008e9c2, indexKOFSprites_02Chin },
    { _T("D - Electric Shock Effect"), 0x008e9c2, 0x008e9e2, indexKOFSprites_02Chin },
    { _T("D - Max Flash"), 0x008e9e2, 0x008ea02, indexKOFSprites_02Chin },
    { _T("D - Hidden Super Desperation Move 2"), 0x008ea02, 0x008ea22, indexKOFSprites_02Chin },
    { _T("D - Soul Palette"), 0x008ea22, 0x008ea42, indexKOFSprites_02Chin },
    { _T("D - Hidden Super Desperation Move 3"), 0x008ea42, 0x008ea62, indexKOFSprites_02Chin },
};

const sDescTreeNode KOF02_A_CHIN_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_A, ARRAYSIZE(KOF02_A_CHIN_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_B, ARRAYSIZE(KOF02_A_CHIN_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_C, ARRAYSIZE(KOF02_A_CHIN_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_D, ARRAYSIZE(KOF02_A_CHIN_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_A[] =
{
    { _T("Leona A"), 0x008eb62, 0x008eb82, indexKOFSprites_98Leona },
    { _T("A - Hidden Super Desperation Move 1"), 0x008eb82, 0x008eba2, indexKOFSprites_98Leona },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008eba2, 0x008ebc2, indexKOFSprites_98Leona },
    { _T("A - Electric Shock Effect"), 0x008ebc2, 0x008ebe2, indexKOFSprites_98Leona },
    { _T("A - Max Flash"), 0x008ebe2, 0x008ec02, indexKOFSprites_98Leona },
    { _T("A - Hidden Super Desperation Move 2"), 0x008ec02, 0x008ec22, indexKOFSprites_98Leona },
    { _T("A - Soul Palette"), 0x008ec22, 0x008ec42, indexKOFSprites_98Leona },
    { _T("A - Hidden Super Desperation Move 3"), 0x008ec42, 0x008ec62, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_B[] =
{
    { _T("Leona B"), 0x008ed62, 0x008ed82, indexKOFSprites_98Leona },
    { _T("B - Hidden Super Desperation Move 1"), 0x008ed82, 0x008eda2, indexKOFSprites_98Leona },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008eda2, 0x008edc2, indexKOFSprites_98Leona },
    { _T("B - Electric Shock Effect"), 0x008edc2, 0x008ede2, indexKOFSprites_98Leona },
    { _T("B - Max Flash"), 0x008ede2, 0x008ee02, indexKOFSprites_98Leona },
    { _T("B - Hidden Super Desperation Move 2"), 0x008ee02, 0x008ee22, indexKOFSprites_98Leona },
    { _T("B - Soul Palette"), 0x008ee22, 0x008ee42, indexKOFSprites_98Leona },
    { _T("B - Hidden Super Desperation Move 3"), 0x008ee42, 0x008ee62, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_C[] =
{
    { _T("Leona C"), 0x008ef62, 0x008ef82, indexKOFSprites_98Leona },
    { _T("C - Hidden Super Desperation Move 1"), 0x008ef82, 0x008efa2, indexKOFSprites_98Leona },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008efa2, 0x008efc2, indexKOFSprites_98Leona },
    { _T("C - Electric Shock Effect"), 0x008efc2, 0x008efe2, indexKOFSprites_98Leona },
    { _T("C - Max Flash"), 0x008efe2, 0x008f002, indexKOFSprites_98Leona },
    { _T("C - Hidden Super Desperation Move 2"), 0x008f002, 0x008f022, indexKOFSprites_98Leona },
    { _T("C - Soul Palette"), 0x008f022, 0x008f042, indexKOFSprites_98Leona },
    { _T("C - Hidden Super Desperation Move 3"), 0x008f042, 0x008f062, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_D[] =
{
    { _T("Leona D"), 0x008f162, 0x008f182, indexKOFSprites_98Leona },
    { _T("D - Hidden Super Desperation Move 1"), 0x008f182, 0x008f1a2, indexKOFSprites_98Leona },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008f1a2, 0x008f1c2, indexKOFSprites_98Leona },
    { _T("D - Electric Shock Effect"), 0x008f1c2, 0x008f1e2, indexKOFSprites_98Leona },
    { _T("D - Max Flash"), 0x008f1e2, 0x008f202, indexKOFSprites_98Leona },
    { _T("D - Hidden Super Desperation Move 2"), 0x008f202, 0x008f222, indexKOFSprites_98Leona },
    { _T("D - Soul Palette"), 0x008f222, 0x008f242, indexKOFSprites_98Leona },
    { _T("D - Hidden Super Desperation Move 3"), 0x008f242, 0x008f262, indexKOFSprites_98Leona },
};

const sDescTreeNode KOF02_A_LEONA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_A, ARRAYSIZE(KOF02_A_LEONA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_B, ARRAYSIZE(KOF02_A_LEONA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_C, ARRAYSIZE(KOF02_A_LEONA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_D, ARRAYSIZE(KOF02_A_LEONA_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_A[] =
{
    { _T("Ralf A"), 0x008f362, 0x008f382, indexKOFSprites_02Ralf },
    { _T("A - Hidden Super Desperation Move 1"), 0x008f382, 0x008f3a2, indexKOFSprites_02Ralf },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008f3a2, 0x008f3c2, indexKOFSprites_02Ralf },
    { _T("A - Electric Shock Effect"), 0x008f3c2, 0x008f3e2, indexKOFSprites_02Ralf },
    { _T("A - Max Flash"), 0x008f3e2, 0x008f402, indexKOFSprites_02Ralf },
    { _T("A - Hidden Super Desperation Move 2"), 0x008f402, 0x008f422, indexKOFSprites_02Ralf },
    { _T("A - Soul Palette"), 0x008f422, 0x008f442, indexKOFSprites_02Ralf },
    { _T("A - Hidden Super Desperation Move 3"), 0x008f442, 0x008f462, indexKOFSprites_02Ralf },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_B[] =
{
    { _T("Ralf B"), 0x008f562, 0x008f582, indexKOFSprites_02Ralf },
    { _T("B - Hidden Super Desperation Move 1"), 0x008f582, 0x008f5a2, indexKOFSprites_02Ralf },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008f5a2, 0x008f5c2, indexKOFSprites_02Ralf },
    { _T("B - Electric Shock Effect"), 0x008f5c2, 0x008f5e2, indexKOFSprites_02Ralf },
    { _T("B - Max Flash"), 0x008f5e2, 0x008f602, indexKOFSprites_02Ralf },
    { _T("B - Hidden Super Desperation Move 2"), 0x008f602, 0x008f622, indexKOFSprites_02Ralf },
    { _T("B - Soul Palette"), 0x008f622, 0x008f642, indexKOFSprites_02Ralf },
    { _T("B - Hidden Super Desperation Move 3"), 0x008f642, 0x008f662, indexKOFSprites_02Ralf },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_C[] =
{
    { _T("Ralf C"), 0x008f762, 0x008f782, indexKOFSprites_02Ralf },
    { _T("C - Hidden Super Desperation Move 1"), 0x008f782, 0x008f7a2, indexKOFSprites_02Ralf },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008f7a2, 0x008f7c2, indexKOFSprites_02Ralf },
    { _T("C - Electric Shock Effect"), 0x008f7c2, 0x008f7e2, indexKOFSprites_02Ralf },
    { _T("C - Max Flash"), 0x008f7e2, 0x008f802, indexKOFSprites_02Ralf },
    { _T("C - Hidden Super Desperation Move 2"), 0x008f802, 0x008f822, indexKOFSprites_02Ralf },
    { _T("C - Soul Palette"), 0x008f822, 0x008f842, indexKOFSprites_02Ralf },
    { _T("C - Hidden Super Desperation Move 3"), 0x008f842, 0x008f862, indexKOFSprites_02Ralf },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_D[] =
{
    { _T("Ralf D"), 0x008f962, 0x008f982, indexKOFSprites_02Ralf },
    { _T("D - Hidden Super Desperation Move 1"), 0x008f982, 0x008f9a2, indexKOFSprites_02Ralf },
    { _T("D - Desperation Move / Super Desperation Move"), 0x008f9a2, 0x008f9c2, indexKOFSprites_02Ralf },
    { _T("D - Electric Shock Effect"), 0x008f9c2, 0x008f9e2, indexKOFSprites_02Ralf },
    { _T("D - Max Flash"), 0x008f9e2, 0x008fa02, indexKOFSprites_02Ralf },
    { _T("D - Hidden Super Desperation Move 2"), 0x008fa02, 0x008fa22, indexKOFSprites_02Ralf },
    { _T("D - Soul Palette"), 0x008fa22, 0x008fa42, indexKOFSprites_02Ralf },
    { _T("D - Hidden Super Desperation Move 3"), 0x008fa42, 0x008fa62, indexKOFSprites_02Ralf },
};

const sDescTreeNode KOF02_A_RALF_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_A, ARRAYSIZE(KOF02_A_RALF_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_B, ARRAYSIZE(KOF02_A_RALF_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_C, ARRAYSIZE(KOF02_A_RALF_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_D, ARRAYSIZE(KOF02_A_RALF_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_A[] =
{
    { _T("Clark A"), 0x008fb62, 0x008fb82, indexKOFSprites_02Clark },
    { _T("A - Hidden Super Desperation Move 1"), 0x008fb82, 0x008fba2, indexKOFSprites_02Clark },
    { _T("A - Desperation Move / Super Desperation Move"), 0x008fba2, 0x008fbc2, indexKOFSprites_02Clark },
    { _T("A - Electric Shock Effect"), 0x008fbc2, 0x008fbe2, indexKOFSprites_02Clark },
    { _T("A - Max Flash"), 0x008fbe2, 0x008fc02, indexKOFSprites_02Clark },
    { _T("A - Hidden Super Desperation Move 2"), 0x008fc02, 0x008fc22, indexKOFSprites_02Clark },
    { _T("A - Soul Palette"), 0x008fc22, 0x008fc42, indexKOFSprites_02Clark },
    { _T("A - Hidden Super Desperation Move 3"), 0x008fc42, 0x008fc62, indexKOFSprites_02Clark },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_B[] =
{
    { _T("Clark B"), 0x008fd62, 0x008fd82, indexKOFSprites_02Clark },
    { _T("B - Hidden Super Desperation Move 1"), 0x008fd82, 0x008fda2, indexKOFSprites_02Clark },
    { _T("B - Desperation Move / Super Desperation Move"), 0x008fda2, 0x008fdc2, indexKOFSprites_02Clark },
    { _T("B - Electric Shock Effect"), 0x008fdc2, 0x008fde2, indexKOFSprites_02Clark },
    { _T("B - Max Flash"), 0x008fde2, 0x008fe02, indexKOFSprites_02Clark },
    { _T("B - Hidden Super Desperation Move 2"), 0x008fe02, 0x008fe22, indexKOFSprites_02Clark },
    { _T("B - Soul Palette"), 0x008fe22, 0x008fe42, indexKOFSprites_02Clark },
    { _T("B - Hidden Super Desperation Move 3"), 0x008fe42, 0x008fe62, indexKOFSprites_02Clark },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_C[] =
{
    { _T("Clark C"), 0x008ff62, 0x008ff82, indexKOFSprites_02Clark },
    { _T("C - Hidden Super Desperation Move 1"), 0x008ff82, 0x008ffa2, indexKOFSprites_02Clark },
    { _T("C - Desperation Move / Super Desperation Move"), 0x008ffa2, 0x008ffc2, indexKOFSprites_02Clark },
    { _T("C - Electric Shock Effect"), 0x008ffc2, 0x008ffe2, indexKOFSprites_02Clark },
    { _T("C - Max Flash"), 0x008ffe2, 0x0090002, indexKOFSprites_02Clark },
    { _T("C - Hidden Super Desperation Move 2"), 0x0090002, 0x0090022, indexKOFSprites_02Clark },
    { _T("C - Soul Palette"), 0x0090022, 0x0090042, indexKOFSprites_02Clark },
    { _T("C - Hidden Super Desperation Move 3"), 0x0090042, 0x0090062, indexKOFSprites_02Clark },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_D[] =
{
    { _T("Clark D"), 0x0090162, 0x0090182, indexKOFSprites_02Clark },
    { _T("D - Hidden Super Desperation Move 1"), 0x0090182, 0x00901a2, indexKOFSprites_02Clark },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00901a2, 0x00901c2, indexKOFSprites_02Clark },
    { _T("D - Electric Shock Effect"), 0x00901c2, 0x00901e2, indexKOFSprites_02Clark },
    { _T("D - Max Flash"), 0x00901e2, 0x0090202, indexKOFSprites_02Clark },
    { _T("D - Hidden Super Desperation Move 2"), 0x0090202, 0x0090222, indexKOFSprites_02Clark },
    { _T("D - Soul Palette"), 0x0090222, 0x0090242, indexKOFSprites_02Clark },
    { _T("D - Hidden Super Desperation Move 3"), 0x0090242, 0x0090262, indexKOFSprites_02Clark },
};

const sDescTreeNode KOF02_A_CLARK_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_A, ARRAYSIZE(KOF02_A_CLARK_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_B, ARRAYSIZE(KOF02_A_CLARK_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_C, ARRAYSIZE(KOF02_A_CLARK_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_D, ARRAYSIZE(KOF02_A_CLARK_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_A[] =
{
    { _T("Ryo A"), 0x0090362, 0x0090382, indexKOFSprites_98Ryo },
    { _T("A - Hidden Super Desperation Move 1"), 0x0090382, 0x00903a2, indexKOFSprites_98Ryo },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00903a2, 0x00903c2, indexKOFSprites_98Ryo },
    { _T("A - Electric Shock Effect"), 0x00903c2, 0x00903e2, indexKOFSprites_98Ryo },
    { _T("A - Max Flash"), 0x00903e2, 0x0090402, indexKOFSprites_98Ryo },
    { _T("A - Hidden Super Desperation Move 2"), 0x0090402, 0x0090422, indexKOFSprites_98Ryo },
    { _T("A - Soul Palette"), 0x0090422, 0x0090442, indexKOFSprites_98Ryo },
    { _T("A - Hidden Super Desperation Move 3"), 0x0090442, 0x0090462, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_B[] =
{
    { _T("Ryo B"), 0x0090562, 0x0090582, indexKOFSprites_98Ryo },
    { _T("B - Hidden Super Desperation Move 1"), 0x0090582, 0x00905a2, indexKOFSprites_98Ryo },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00905a2, 0x00905c2, indexKOFSprites_98Ryo },
    { _T("B - Electric Shock Effect"), 0x00905c2, 0x00905e2, indexKOFSprites_98Ryo },
    { _T("B - Max Flash"), 0x00905e2, 0x0090602, indexKOFSprites_98Ryo },
    { _T("B - Hidden Super Desperation Move 2"), 0x0090602, 0x0090622, indexKOFSprites_98Ryo },
    { _T("B - Soul Palette"), 0x0090622, 0x0090642, indexKOFSprites_98Ryo },
    { _T("B - Hidden Super Desperation Move 3"), 0x0090642, 0x0090662, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_C[] =
{
    { _T("Ryo C"), 0x0090762, 0x0090782, indexKOFSprites_98Ryo },
    { _T("C - Hidden Super Desperation Move 1"), 0x0090782, 0x00907a2, indexKOFSprites_98Ryo },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00907a2, 0x00907c2, indexKOFSprites_98Ryo },
    { _T("C - Electric Shock Effect"), 0x00907c2, 0x00907e2, indexKOFSprites_98Ryo },
    { _T("C - Max Flash"), 0x00907e2, 0x0090802, indexKOFSprites_98Ryo },
    { _T("C - Hidden Super Desperation Move 2"), 0x0090802, 0x0090822, indexKOFSprites_98Ryo },
    { _T("C - Soul Palette"), 0x0090822, 0x0090842, indexKOFSprites_98Ryo },
    { _T("C - Hidden Super Desperation Move 3"), 0x0090842, 0x0090862, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_D[] =
{
    { _T("Ryo D"), 0x0090962, 0x0090982, indexKOFSprites_98Ryo },
    { _T("D - Hidden Super Desperation Move 1"), 0x0090982, 0x00909a2, indexKOFSprites_98Ryo },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00909a2, 0x00909c2, indexKOFSprites_98Ryo },
    { _T("D - Electric Shock Effect"), 0x00909c2, 0x00909e2, indexKOFSprites_98Ryo },
    { _T("D - Max Flash"), 0x00909e2, 0x0090a02, indexKOFSprites_98Ryo },
    { _T("D - Hidden Super Desperation Move 2"), 0x0090a02, 0x0090a22, indexKOFSprites_98Ryo },
    { _T("D - Soul Palette"), 0x0090a22, 0x0090a42, indexKOFSprites_98Ryo },
    { _T("D - Hidden Super Desperation Move 3"), 0x0090a42, 0x0090a62, indexKOFSprites_98Ryo },
};

const sDescTreeNode KOF02_A_RYO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_A, ARRAYSIZE(KOF02_A_RYO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_B, ARRAYSIZE(KOF02_A_RYO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_C, ARRAYSIZE(KOF02_A_RYO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_D, ARRAYSIZE(KOF02_A_RYO_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_A[] =
{
    { _T("Robert A"), 0x0090b62, 0x0090b82, indexKOFSprites_02Robert },
    { _T("A - Hidden Super Desperation Move 1"), 0x0090b82, 0x0090ba2, indexKOFSprites_02Robert },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0090ba2, 0x0090bc2, indexKOFSprites_02Robert },
    { _T("A - Electric Shock Effect"), 0x0090bc2, 0x0090be2, indexKOFSprites_02Robert },
    { _T("A - Max Flash"), 0x0090be2, 0x0090c02, indexKOFSprites_02Robert },
    { _T("A - Hidden Super Desperation Move 2"), 0x0090c02, 0x0090c22, indexKOFSprites_02Robert },
    { _T("A - Soul Palette"), 0x0090c22, 0x0090c42, indexKOFSprites_02Robert },
    { _T("A - Hidden Super Desperation Move 3"), 0x0090c42, 0x0090c62, indexKOFSprites_02Robert },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_B[] =
{
    { _T("Robert B"), 0x0090d62, 0x0090d82, indexKOFSprites_02Robert },
    { _T("B - Hidden Super Desperation Move 1"), 0x0090d82, 0x0090da2, indexKOFSprites_02Robert },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0090da2, 0x0090dc2, indexKOFSprites_02Robert },
    { _T("B - Electric Shock Effect"), 0x0090dc2, 0x0090de2, indexKOFSprites_02Robert },
    { _T("B - Max Flash"), 0x0090de2, 0x0090e02, indexKOFSprites_02Robert },
    { _T("B - Hidden Super Desperation Move 2"), 0x0090e02, 0x0090e22, indexKOFSprites_02Robert },
    { _T("B - Soul Palette"), 0x0090e22, 0x0090e42, indexKOFSprites_02Robert },
    { _T("B - Hidden Super Desperation Move 3"), 0x0090e42, 0x0090e62, indexKOFSprites_02Robert },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_C[] =
{
    { _T("Robert C"), 0x0090f62, 0x0090f82, indexKOFSprites_02Robert },
    { _T("C - Hidden Super Desperation Move 1"), 0x0090f82, 0x0090fa2, indexKOFSprites_02Robert },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0090fa2, 0x0090fc2, indexKOFSprites_02Robert },
    { _T("C - Electric Shock Effect"), 0x0090fc2, 0x0090fe2, indexKOFSprites_02Robert },
    { _T("C - Max Flash"), 0x0090fe2, 0x0091002, indexKOFSprites_02Robert },
    { _T("C - Hidden Super Desperation Move 2"), 0x0091002, 0x0091022, indexKOFSprites_02Robert },
    { _T("C - Soul Palette"), 0x0091022, 0x0091042, indexKOFSprites_02Robert },
    { _T("C - Hidden Super Desperation Move 3"), 0x0091042, 0x0091062, indexKOFSprites_02Robert },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_D[] =
{
    { _T("Robert D"), 0x0091162, 0x0091182, indexKOFSprites_02Robert },
    { _T("D - Hidden Super Desperation Move 1"), 0x0091182, 0x00911a2, indexKOFSprites_02Robert },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00911a2, 0x00911c2, indexKOFSprites_02Robert },
    { _T("D - Electric Shock Effect"), 0x00911c2, 0x00911e2, indexKOFSprites_02Robert },
    { _T("D - Max Flash"), 0x00911e2, 0x0091202, indexKOFSprites_02Robert },
    { _T("D - Hidden Super Desperation Move 2"), 0x0091202, 0x0091222, indexKOFSprites_02Robert },
    { _T("D - Soul Palette"), 0x0091222, 0x0091242, indexKOFSprites_02Robert },
    { _T("D - Hidden Super Desperation Move 3"), 0x0091242, 0x0091262, indexKOFSprites_02Robert },
};

const sDescTreeNode KOF02_A_ROBERT_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_A, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_B, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_C, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_D, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_A[] =
{
    { _T("Takuma A"), 0x0091362, 0x0091382, indexKOFSprites_98Takuma },
    { _T("A - Hidden Super Desperation Move 1"), 0x0091382, 0x00913a2, indexKOFSprites_98Takuma },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00913a2, 0x00913c2, indexKOFSprites_98Takuma },
    { _T("A - Electric Shock Effect"), 0x00913c2, 0x00913e2, indexKOFSprites_98Takuma },
    { _T("A - Max Flash"), 0x00913e2, 0x0091402, indexKOFSprites_98Takuma },
    { _T("A - Hidden Super Desperation Move 2"), 0x0091402, 0x0091422, indexKOFSprites_98Takuma },
    { _T("A - Soul Palette"), 0x0091422, 0x0091442, indexKOFSprites_98Takuma },
    { _T("A - Hidden Super Desperation Move 3"), 0x0091442, 0x0091462, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_B[] =
{
    { _T("Takuma B"), 0x0091562, 0x0091582, indexKOFSprites_98Takuma },
    { _T("B - Hidden Super Desperation Move 1"), 0x0091582, 0x00915a2, indexKOFSprites_98Takuma },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00915a2, 0x00915c2, indexKOFSprites_98Takuma },
    { _T("B - Electric Shock Effect"), 0x00915c2, 0x00915e2, indexKOFSprites_98Takuma },
    { _T("B - Max Flash"), 0x00915e2, 0x0091602, indexKOFSprites_98Takuma },
    { _T("B - Hidden Super Desperation Move 2"), 0x0091602, 0x0091622, indexKOFSprites_98Takuma },
    { _T("B - Soul Palette"), 0x0091622, 0x0091642, indexKOFSprites_98Takuma },
    { _T("B - Hidden Super Desperation Move 3"), 0x0091642, 0x0091662, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_C[] =
{
    { _T("Takuma C"), 0x0091762, 0x0091782, indexKOFSprites_98Takuma },
    { _T("C - Hidden Super Desperation Move 1"), 0x0091782, 0x00917a2, indexKOFSprites_98Takuma },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00917a2, 0x00917c2, indexKOFSprites_98Takuma },
    { _T("C - Electric Shock Effect"), 0x00917c2, 0x00917e2, indexKOFSprites_98Takuma },
    { _T("C - Max Flash"), 0x00917e2, 0x0091802, indexKOFSprites_98Takuma },
    { _T("C - Hidden Super Desperation Move 2"), 0x0091802, 0x0091822, indexKOFSprites_98Takuma },
    { _T("C - Soul Palette"), 0x0091822, 0x0091842, indexKOFSprites_98Takuma },
    { _T("C - Hidden Super Desperation Move 3"), 0x0091842, 0x0091862, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_D[] =
{
    { _T("Takuma D"), 0x0091962, 0x0091982, indexKOFSprites_98Takuma },
    { _T("D - Hidden Super Desperation Move 1"), 0x0091982, 0x00919a2, indexKOFSprites_98Takuma },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00919a2, 0x00919c2, indexKOFSprites_98Takuma },
    { _T("D - Electric Shock Effect"), 0x00919c2, 0x00919e2, indexKOFSprites_98Takuma },
    { _T("D - Max Flash"), 0x00919e2, 0x0091a02, indexKOFSprites_98Takuma },
    { _T("D - Hidden Super Desperation Move 2"), 0x0091a02, 0x0091a22, indexKOFSprites_98Takuma },
    { _T("D - Soul Palette"), 0x0091a22, 0x0091a42, indexKOFSprites_98Takuma },
    { _T("D - Hidden Super Desperation Move 3"), 0x0091a42, 0x0091a62, indexKOFSprites_98Takuma },
};

const sDescTreeNode KOF02_A_TAKUMA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_A, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_B, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_C, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_D, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_A[] =
{
    { _T("Mai A"), 0x0091b62, 0x0091b82, indexKOFSprites_98Mai },
    { _T("A - Hidden Super Desperation Move 1"), 0x0091b82, 0x0091ba2, indexKOFSprites_98Mai },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0091ba2, 0x0091bc2, indexKOFSprites_98Mai },
    { _T("A - Electric Shock Effect"), 0x0091bc2, 0x0091be2, indexKOFSprites_98Mai },
    { _T("A - Max Flash"), 0x0091be2, 0x0091c02, indexKOFSprites_98Mai },
    { _T("A - Hidden Super Desperation Move 2"), 0x0091c02, 0x0091c22, indexKOFSprites_98Mai },
    { _T("A - Soul Palette"), 0x0091c22, 0x0091c42, indexKOFSprites_98Mai },
    { _T("A - Hidden Super Desperation Move 3"), 0x0091c42, 0x0091c62, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_B[] =
{
    { _T("Mai B"), 0x0091d62, 0x0091d82, indexKOFSprites_98Mai },
    { _T("B - Hidden Super Desperation Move 1"), 0x0091d82, 0x0091da2, indexKOFSprites_98Mai },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0091da2, 0x0091dc2, indexKOFSprites_98Mai },
    { _T("B - Electric Shock Effect"), 0x0091dc2, 0x0091de2, indexKOFSprites_98Mai },
    { _T("B - Max Flash"), 0x0091de2, 0x0091e02, indexKOFSprites_98Mai },
    { _T("B - Hidden Super Desperation Move 2"), 0x0091e02, 0x0091e22, indexKOFSprites_98Mai },
    { _T("B - Soul Palette"), 0x0091e22, 0x0091e42, indexKOFSprites_98Mai },
    { _T("B - Hidden Super Desperation Move 3"), 0x0091e42, 0x0091e62, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_C[] =
{
    { _T("Mai C"), 0x0091f62, 0x0091f82, indexKOFSprites_98Mai },
    { _T("C - Hidden Super Desperation Move 1"), 0x0091f82, 0x0091fa2, indexKOFSprites_98Mai },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0091fa2, 0x0091fc2, indexKOFSprites_98Mai },
    { _T("C - Electric Shock Effect"), 0x0091fc2, 0x0091fe2, indexKOFSprites_98Mai },
    { _T("C - Max Flash"), 0x0091fe2, 0x0092002, indexKOFSprites_98Mai },
    { _T("C - Hidden Super Desperation Move 2"), 0x0092002, 0x0092022, indexKOFSprites_98Mai },
    { _T("C - Soul Palette"), 0x0092022, 0x0092042, indexKOFSprites_98Mai },
    { _T("C - Hidden Super Desperation Move 3"), 0x0092042, 0x0092062, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_D[] =
{
    { _T("Mai D"), 0x0092162, 0x0092182, indexKOFSprites_98Mai },
    { _T("D - Hidden Super Desperation Move 1"), 0x0092182, 0x00921a2, indexKOFSprites_98Mai },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00921a2, 0x00921c2, indexKOFSprites_98Mai },
    { _T("D - Electric Shock Effect"), 0x00921c2, 0x00921e2, indexKOFSprites_98Mai },
    { _T("D - Max Flash"), 0x00921e2, 0x0092202, indexKOFSprites_98Mai },
    { _T("D - Hidden Super Desperation Move 2"), 0x0092202, 0x0092222, indexKOFSprites_98Mai },
    { _T("D - Soul Palette"), 0x0092222, 0x0092242, indexKOFSprites_98Mai },
    { _T("D - Hidden Super Desperation Move 3"), 0x0092242, 0x0092262, indexKOFSprites_98Mai },
};

const sDescTreeNode KOF02_A_MAI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_A, ARRAYSIZE(KOF02_A_MAI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_B, ARRAYSIZE(KOF02_A_MAI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_C, ARRAYSIZE(KOF02_A_MAI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_D, ARRAYSIZE(KOF02_A_MAI_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_A[] =
{
    { _T("Yuri A"), 0x0092362, 0x0092382, indexKOFSprites_02Yuri },
    { _T("A - Hidden Super Desperation Move 1"), 0x0092382, 0x00923a2, indexKOFSprites_02Yuri },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00923a2, 0x00923c2, indexKOFSprites_02Yuri },
    { _T("A - Electric Shock Effect"), 0x00923c2, 0x00923e2, indexKOFSprites_02Yuri },
    { _T("A - Max Flash"), 0x00923e2, 0x0092402, indexKOFSprites_02Yuri },
    { _T("A - Hidden Super Desperation Move 2"), 0x0092402, 0x0092422, indexKOFSprites_02Yuri },
    { _T("A - Soul Palette"), 0x0092422, 0x0092442, indexKOFSprites_02Yuri },
    { _T("A - Hidden Super Desperation Move 3"), 0x0092442, 0x0092462, indexKOFSprites_02Yuri },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_B[] =
{
    { _T("Yuri B"), 0x0092562, 0x0092582, indexKOFSprites_02Yuri },
    { _T("B - Hidden Super Desperation Move 1"), 0x0092582, 0x00925a2, indexKOFSprites_02Yuri },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00925a2, 0x00925c2, indexKOFSprites_02Yuri },
    { _T("B - Electric Shock Effect"), 0x00925c2, 0x00925e2, indexKOFSprites_02Yuri },
    { _T("B - Max Flash"), 0x00925e2, 0x0092602, indexKOFSprites_02Yuri },
    { _T("B - Hidden Super Desperation Move 2"), 0x0092602, 0x0092622, indexKOFSprites_02Yuri },
    { _T("B - Soul Palette"), 0x0092622, 0x0092642, indexKOFSprites_02Yuri },
    { _T("B - Hidden Super Desperation Move 3"), 0x0092642, 0x0092662, indexKOFSprites_02Yuri },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_C[] =
{
    { _T("Yuri C"), 0x0092762, 0x0092782, indexKOFSprites_02Yuri },
    { _T("C - Hidden Super Desperation Move 1"), 0x0092782, 0x00927a2, indexKOFSprites_02Yuri },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00927a2, 0x00927c2, indexKOFSprites_02Yuri },
    { _T("C - Electric Shock Effect"), 0x00927c2, 0x00927e2, indexKOFSprites_02Yuri },
    { _T("C - Max Flash"), 0x00927e2, 0x0092802, indexKOFSprites_02Yuri },
    { _T("C - Hidden Super Desperation Move 2"), 0x0092802, 0x0092822, indexKOFSprites_02Yuri },
    { _T("C - Soul Palette"), 0x0092822, 0x0092842, indexKOFSprites_02Yuri },
    { _T("C - Hidden Super Desperation Move 3"), 0x0092842, 0x0092862, indexKOFSprites_02Yuri },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_D[] =
{
    { _T("Yuri D"), 0x0092962, 0x0092982, indexKOFSprites_02Yuri },
    { _T("D - Hidden Super Desperation Move 1"), 0x0092982, 0x00929a2, indexKOFSprites_02Yuri },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00929a2, 0x00929c2, indexKOFSprites_02Yuri },
    { _T("D - Electric Shock Effect"), 0x00929c2, 0x00929e2, indexKOFSprites_02Yuri },
    { _T("D - Max Flash"), 0x00929e2, 0x0092a02, indexKOFSprites_02Yuri },
    { _T("D - Hidden Super Desperation Move 2"), 0x0092a02, 0x0092a22, indexKOFSprites_02Yuri },
    { _T("D - Soul Palette"), 0x0092a22, 0x0092a42, indexKOFSprites_02Yuri },
    { _T("D - Hidden Super Desperation Move 3"), 0x0092a42, 0x0092a62, indexKOFSprites_02Yuri },
};

const sDescTreeNode KOF02_A_YURI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_A, ARRAYSIZE(KOF02_A_YURI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_B, ARRAYSIZE(KOF02_A_YURI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_C, ARRAYSIZE(KOF02_A_YURI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_D, ARRAYSIZE(KOF02_A_YURI_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_A[] =
{
    { _T("May Lee A"), 0x0092b62, 0x0092b82, indexKOFSprites_02MayLee },
    { _T("A - Hidden Super Desperation Move 1"), 0x0092b82, 0x0092ba2, indexKOFSprites_02MayLee },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0092ba2, 0x0092bc2, indexKOFSprites_02MayLee },
    { _T("A - Electric Shock Effect"), 0x0092bc2, 0x0092be2, indexKOFSprites_02MayLee },
    { _T("A - Max Flash"), 0x0092be2, 0x0092c02, indexKOFSprites_02MayLee },
    { _T("A - Hidden Super Desperation Move 2"), 0x0092c02, 0x0092c22, indexKOFSprites_02MayLee },
    { _T("A - Soul Palette"), 0x0092c22, 0x0092c42, indexKOFSprites_02MayLee },
    { _T("A - Hidden Super Desperation Move 3"), 0x0092c42, 0x0092c62, indexKOFSprites_02MayLee },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_B[] =
{
    { _T("May Lee B"), 0x0092d62, 0x0092d82, indexKOFSprites_02MayLee },
    { _T("B - Hidden Super Desperation Move 1"), 0x0092d82, 0x0092da2, indexKOFSprites_02MayLee },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0092da2, 0x0092dc2, indexKOFSprites_02MayLee },
    { _T("B - Electric Shock Effect"), 0x0092dc2, 0x0092de2, indexKOFSprites_02MayLee },
    { _T("B - Max Flash"), 0x0092de2, 0x0092e02, indexKOFSprites_02MayLee },
    { _T("B - Hidden Super Desperation Move 2"), 0x0092e02, 0x0092e22, indexKOFSprites_02MayLee },
    { _T("B - Soul Palette"), 0x0092e22, 0x0092e42, indexKOFSprites_02MayLee },
    { _T("B - Hidden Super Desperation Move 3"), 0x0092e42, 0x0092e62, indexKOFSprites_02MayLee },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_C[] =
{
    { _T("May Lee C"), 0x0092f62, 0x0092f82, indexKOFSprites_02MayLee },
    { _T("C - Hidden Super Desperation Move 1"), 0x0092f82, 0x0092fa2, indexKOFSprites_02MayLee },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0092fa2, 0x0092fc2, indexKOFSprites_02MayLee },
    { _T("C - Electric Shock Effect"), 0x0092fc2, 0x0092fe2, indexKOFSprites_02MayLee },
    { _T("C - Max Flash"), 0x0092fe2, 0x0093002, indexKOFSprites_02MayLee },
    { _T("C - Hidden Super Desperation Move 2"), 0x0093002, 0x0093022, indexKOFSprites_02MayLee },
    { _T("C - Soul Palette"), 0x0093022, 0x0093042, indexKOFSprites_02MayLee },
    { _T("C - Hidden Super Desperation Move 3"), 0x0093042, 0x0093062, indexKOFSprites_02MayLee },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_D[] =
{
    { _T("May Lee D"), 0x0093162, 0x0093182, indexKOFSprites_02MayLee },
    { _T("D - Hidden Super Desperation Move 1"), 0x0093182, 0x00931a2, indexKOFSprites_02MayLee },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00931a2, 0x00931c2, indexKOFSprites_02MayLee },
    { _T("D - Electric Shock Effect"), 0x00931c2, 0x00931e2, indexKOFSprites_02MayLee },
    { _T("D - Max Flash"), 0x00931e2, 0x0093202, indexKOFSprites_02MayLee },
    { _T("D - Hidden Super Desperation Move 2"), 0x0093202, 0x0093222, indexKOFSprites_02MayLee },
    { _T("D - Soul Palette"), 0x0093222, 0x0093242, indexKOFSprites_02MayLee },
    { _T("D - Hidden Super Desperation Move 3"), 0x0093242, 0x0093262, indexKOFSprites_02MayLee },
};

const sDescTreeNode KOF02_A_MAYLEE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_A, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_B, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_C, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_D, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_A[] =
{
    { _T("Iori A"), 0x0093362, 0x0093382, indexKOFSprites_98Iori },
    { _T("A - Hidden Super Desperation Move 1"), 0x0093382, 0x00933a2, indexKOFSprites_98Iori },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00933a2, 0x00933c2, indexKOFSprites_98Iori },
    { _T("A - Electric Shock Effect"), 0x00933c2, 0x00933e2, indexKOFSprites_98Iori },
    { _T("A - Max Flash"), 0x00933e2, 0x0093402, indexKOFSprites_98Iori },
    { _T("A - Hidden Super Desperation Move 2"), 0x0093402, 0x0093422, indexKOFSprites_98Iori },
    { _T("A - Soul Palette"), 0x0093422, 0x0093442, indexKOFSprites_98Iori },
    { _T("A - Hidden Super Desperation Move 3"), 0x0093442, 0x0093462, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_B[] =
{
    { _T("Iori B"), 0x0093562, 0x0093582, indexKOFSprites_98Iori },
    { _T("B - Hidden Super Desperation Move 1"), 0x0093582, 0x00935a2, indexKOFSprites_98Iori },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00935a2, 0x00935c2, indexKOFSprites_98Iori },
    { _T("B - Electric Shock Effect"), 0x00935c2, 0x00935e2, indexKOFSprites_98Iori },
    { _T("B - Max Flash"), 0x00935e2, 0x0093602, indexKOFSprites_98Iori },
    { _T("B - Hidden Super Desperation Move 2"), 0x0093602, 0x0093622, indexKOFSprites_98Iori },
    { _T("B - Soul Palette"), 0x0093622, 0x0093642, indexKOFSprites_98Iori },
    { _T("B - Hidden Super Desperation Move 3"), 0x0093642, 0x0093662, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_C[] =
{
    { _T("Iori C"), 0x0093762, 0x0093782, indexKOFSprites_98Iori },
    { _T("C - Hidden Super Desperation Move 1"), 0x0093782, 0x00937a2, indexKOFSprites_98Iori },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00937a2, 0x00937c2, indexKOFSprites_98Iori },
    { _T("C - Electric Shock Effect"), 0x00937c2, 0x00937e2, indexKOFSprites_98Iori },
    { _T("C - Max Flash"), 0x00937e2, 0x0093802, indexKOFSprites_98Iori },
    { _T("C - Hidden Super Desperation Move 2"), 0x0093802, 0x0093822, indexKOFSprites_98Iori },
    { _T("C - Soul Palette"), 0x0093822, 0x0093842, indexKOFSprites_98Iori },
    { _T("C - Hidden Super Desperation Move 3"), 0x0093842, 0x0093862, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_D[] =
{
    { _T("Iori D"), 0x0093962, 0x0093982, indexKOFSprites_98Iori },
    { _T("D - Hidden Super Desperation Move 1"), 0x0093982, 0x00939a2, indexKOFSprites_98Iori },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00939a2, 0x00939c2, indexKOFSprites_98Iori },
    { _T("D - Electric Shock Effect"), 0x00939c2, 0x00939e2, indexKOFSprites_98Iori },
    { _T("D - Max Flash"), 0x00939e2, 0x0093a02, indexKOFSprites_98Iori },
    { _T("D - Hidden Super Desperation Move 2"), 0x0093a02, 0x0093a22, indexKOFSprites_98Iori },
    { _T("D - Soul Palette"), 0x0093a22, 0x0093a42, indexKOFSprites_98Iori },
    { _T("D - Hidden Super Desperation Move 3"), 0x0093a42, 0x0093a62, indexKOFSprites_98Iori },
};

const sDescTreeNode KOF02_A_IORI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_A, ARRAYSIZE(KOF02_A_IORI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_B, ARRAYSIZE(KOF02_A_IORI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_C, ARRAYSIZE(KOF02_A_IORI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_D, ARRAYSIZE(KOF02_A_IORI_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_A[] =
{
    { _T("Mature A"), 0x0093b62, 0x0093b82, indexKOFSprites_98Mature },
    { _T("A - Hidden Super Desperation Move 1"), 0x0093b82, 0x0093ba2, indexKOFSprites_98Mature },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0093ba2, 0x0093bc2, indexKOFSprites_98Mature },
    { _T("A - Electric Shock Effect"), 0x0093bc2, 0x0093be2, indexKOFSprites_98Mature },
    { _T("A - Max Flash"), 0x0093be2, 0x0093c02, indexKOFSprites_98Mature },
    { _T("A - Hidden Super Desperation Move 2"), 0x0093c02, 0x0093c22, indexKOFSprites_98Mature },
    { _T("A - Soul Palette"), 0x0093c22, 0x0093c42, indexKOFSprites_98Mature },
    { _T("A - Hidden Super Desperation Move 3"), 0x0093c42, 0x0093c62, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_B[] =
{
    { _T("Mature B"), 0x0093d62, 0x0093d82, indexKOFSprites_98Mature },
    { _T("B - Hidden Super Desperation Move 1"), 0x0093d82, 0x0093da2, indexKOFSprites_98Mature },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0093da2, 0x0093dc2, indexKOFSprites_98Mature },
    { _T("B - Electric Shock Effect"), 0x0093dc2, 0x0093de2, indexKOFSprites_98Mature },
    { _T("B - Max Flash"), 0x0093de2, 0x0093e02, indexKOFSprites_98Mature },
    { _T("B - Hidden Super Desperation Move 2"), 0x0093e02, 0x0093e22, indexKOFSprites_98Mature },
    { _T("B - Soul Palette"), 0x0093e22, 0x0093e42, indexKOFSprites_98Mature },
    { _T("B - Hidden Super Desperation Move 3"), 0x0093e42, 0x0093e62, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_C[] =
{
    { _T("Mature C"), 0x0093f62, 0x0093f82, indexKOFSprites_98Mature },
    { _T("C - Hidden Super Desperation Move 1"), 0x0093f82, 0x0093fa2, indexKOFSprites_98Mature },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0093fa2, 0x0093fc2, indexKOFSprites_98Mature },
    { _T("C - Electric Shock Effect"), 0x0093fc2, 0x0093fe2, indexKOFSprites_98Mature },
    { _T("C - Max Flash"), 0x0093fe2, 0x0094002, indexKOFSprites_98Mature },
    { _T("C - Hidden Super Desperation Move 2"), 0x0094002, 0x0094022, indexKOFSprites_98Mature },
    { _T("C - Soul Palette"), 0x0094022, 0x0094042, indexKOFSprites_98Mature },
    { _T("C - Hidden Super Desperation Move 3"), 0x0094042, 0x0094062, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_D[] =
{
    { _T("Mature D"), 0x0094162, 0x0094182, indexKOFSprites_98Mature },
    { _T("D - Hidden Super Desperation Move 1"), 0x0094182, 0x00941a2, indexKOFSprites_98Mature },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00941a2, 0x00941c2, indexKOFSprites_98Mature },
    { _T("D - Electric Shock Effect"), 0x00941c2, 0x00941e2, indexKOFSprites_98Mature },
    { _T("D - Max Flash"), 0x00941e2, 0x0094202, indexKOFSprites_98Mature },
    { _T("D - Hidden Super Desperation Move 2"), 0x0094202, 0x0094222, indexKOFSprites_98Mature },
    { _T("D - Soul Palette"), 0x0094222, 0x0094242, indexKOFSprites_98Mature },
    { _T("D - Hidden Super Desperation Move 3"), 0x0094242, 0x0094262, indexKOFSprites_98Mature },
};

const sDescTreeNode KOF02_A_MATURE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_A, ARRAYSIZE(KOF02_A_MATURE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_B, ARRAYSIZE(KOF02_A_MATURE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_C, ARRAYSIZE(KOF02_A_MATURE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_D, ARRAYSIZE(KOF02_A_MATURE_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_A[] =
{
    { _T("Vice A"), 0x0094362, 0x0094382, indexKOFSprites_98Vice },
    { _T("A - Hidden Super Desperation Move 1"), 0x0094382, 0x00943a2, indexKOFSprites_98Vice },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00943a2, 0x00943c2, indexKOFSprites_98Vice },
    { _T("A - Electric Shock Effect"), 0x00943c2, 0x00943e2, indexKOFSprites_98Vice },
    { _T("A - Max Flash"), 0x00943e2, 0x0094402, indexKOFSprites_98Vice },
    { _T("A - Hidden Super Desperation Move 2"), 0x0094402, 0x0094422, indexKOFSprites_98Vice },
    { _T("A - Soul Palette"), 0x0094422, 0x0094442, indexKOFSprites_98Vice },
    { _T("A - Hidden Super Desperation Move 3"), 0x0094442, 0x0094462, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_B[] =
{
    { _T("Vice B"), 0x0094562, 0x0094582, indexKOFSprites_98Vice },
    { _T("B - Hidden Super Desperation Move 1"), 0x0094582, 0x00945a2, indexKOFSprites_98Vice },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00945a2, 0x00945c2, indexKOFSprites_98Vice },
    { _T("B - Electric Shock Effect"), 0x00945c2, 0x00945e2, indexKOFSprites_98Vice },
    { _T("B - Max Flash"), 0x00945e2, 0x0094602, indexKOFSprites_98Vice },
    { _T("B - Hidden Super Desperation Move 2"), 0x0094602, 0x0094622, indexKOFSprites_98Vice },
    { _T("B - Soul Palette"), 0x0094622, 0x0094642, indexKOFSprites_98Vice },
    { _T("B - Hidden Super Desperation Move 3"), 0x0094642, 0x0094662, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_C[] =
{
    { _T("Vice C"), 0x0094762, 0x0094782, indexKOFSprites_98Vice },
    { _T("C - Hidden Super Desperation Move 1"), 0x0094782, 0x00947a2, indexKOFSprites_98Vice },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00947a2, 0x00947c2, indexKOFSprites_98Vice },
    { _T("C - Electric Shock Effect"), 0x00947c2, 0x00947e2, indexKOFSprites_98Vice },
    { _T("C - Max Flash"), 0x00947e2, 0x0094802, indexKOFSprites_98Vice },
    { _T("C - Hidden Super Desperation Move 2"), 0x0094802, 0x0094822, indexKOFSprites_98Vice },
    { _T("C - Soul Palette"), 0x0094822, 0x0094842, indexKOFSprites_98Vice },
    { _T("C - Hidden Super Desperation Move 3"), 0x0094842, 0x0094862, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_D[] =
{
    { _T("Vice D"), 0x0094962, 0x0094982, indexKOFSprites_98Vice },
    { _T("D - Hidden Super Desperation Move 1"), 0x0094982, 0x00949a2, indexKOFSprites_98Vice },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00949a2, 0x00949c2, indexKOFSprites_98Vice },
    { _T("D - Electric Shock Effect"), 0x00949c2, 0x00949e2, indexKOFSprites_98Vice },
    { _T("D - Max Flash"), 0x00949e2, 0x0094a02, indexKOFSprites_98Vice },
    { _T("D - Hidden Super Desperation Move 2"), 0x0094a02, 0x0094a22, indexKOFSprites_98Vice },
    { _T("D - Soul Palette"), 0x0094a22, 0x0094a42, indexKOFSprites_98Vice },
    { _T("D - Hidden Super Desperation Move 3"), 0x0094a42, 0x0094a62, indexKOFSprites_98Vice },
};

const sDescTreeNode KOF02_A_VICE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_A, ARRAYSIZE(KOF02_A_VICE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_B, ARRAYSIZE(KOF02_A_VICE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_C, ARRAYSIZE(KOF02_A_VICE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_D, ARRAYSIZE(KOF02_A_VICE_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_A[] =
{
    { _T("Yamazaki A"), 0x0094b62, 0x0094b82, indexKOFSprites_98Yamazaki },
    { _T("A - Hidden Super Desperation Move 1"), 0x0094b82, 0x0094ba2, indexKOFSprites_98Yamazaki },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0094ba2, 0x0094bc2, indexKOFSprites_98Yamazaki },
    { _T("A - Electric Shock Effect"), 0x0094bc2, 0x0094be2, indexKOFSprites_98Yamazaki },
    { _T("A - Max Flash"), 0x0094be2, 0x0094c02, indexKOFSprites_98Yamazaki },
    { _T("A - Hidden Super Desperation Move 2"), 0x0094c02, 0x0094c22, indexKOFSprites_98Yamazaki },
    { _T("A - Soul Palette"), 0x0094c22, 0x0094c42, indexKOFSprites_98Yamazaki },
    { _T("A - Hidden Super Desperation Move 3"), 0x0094c42, 0x0094c62, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_B[] =
{
    { _T("Yamazaki B"), 0x0094d62, 0x0094d82, indexKOFSprites_98Yamazaki },
    { _T("B - Hidden Super Desperation Move 1"), 0x0094d82, 0x0094da2, indexKOFSprites_98Yamazaki },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0094da2, 0x0094dc2, indexKOFSprites_98Yamazaki },
    { _T("B - Electric Shock Effect"), 0x0094dc2, 0x0094de2, indexKOFSprites_98Yamazaki },
    { _T("B - Max Flash"), 0x0094de2, 0x0094e02, indexKOFSprites_98Yamazaki },
    { _T("B - Hidden Super Desperation Move 2"), 0x0094e02, 0x0094e22, indexKOFSprites_98Yamazaki },
    { _T("B - Soul Palette"), 0x0094e22, 0x0094e42, indexKOFSprites_98Yamazaki },
    { _T("B - Hidden Super Desperation Move 3"), 0x0094e42, 0x0094e62, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_C[] =
{
    { _T("Yamazaki C"), 0x0094f62, 0x0094f82, indexKOFSprites_98Yamazaki },
    { _T("C - Hidden Super Desperation Move 1"), 0x0094f82, 0x0094fa2, indexKOFSprites_98Yamazaki },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0094fa2, 0x0094fc2, indexKOFSprites_98Yamazaki },
    { _T("C - Electric Shock Effect"), 0x0094fc2, 0x0094fe2, indexKOFSprites_98Yamazaki },
    { _T("C - Max Flash"), 0x0094fe2, 0x0095002, indexKOFSprites_98Yamazaki },
    { _T("C - Hidden Super Desperation Move 2"), 0x0095002, 0x0095022, indexKOFSprites_98Yamazaki },
    { _T("C - Soul Palette"), 0x0095022, 0x0095042, indexKOFSprites_98Yamazaki },
    { _T("C - Hidden Super Desperation Move 3"), 0x0095042, 0x0095062, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_D[] =
{
    { _T("Yamazaki D"), 0x0095162, 0x0095182, indexKOFSprites_98Yamazaki },
    { _T("D - Hidden Super Desperation Move 1"), 0x0095182, 0x00951a2, indexKOFSprites_98Yamazaki },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00951a2, 0x00951c2, indexKOFSprites_98Yamazaki },
    { _T("D - Electric Shock Effect"), 0x00951c2, 0x00951e2, indexKOFSprites_98Yamazaki },
    { _T("D - Max Flash"), 0x00951e2, 0x0095202, indexKOFSprites_98Yamazaki },
    { _T("D - Hidden Super Desperation Move 2"), 0x0095202, 0x0095222, indexKOFSprites_98Yamazaki },
    { _T("D - Soul Palette"), 0x0095222, 0x0095242, indexKOFSprites_98Yamazaki },
    { _T("D - Hidden Super Desperation Move 3"), 0x0095242, 0x0095262, indexKOFSprites_98Yamazaki },
};

const sDescTreeNode KOF02_A_YAMAZAKI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_A, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_B, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_C, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_D, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_A[] =
{
    { _T("Blue Mary A"), 0x0095362, 0x0095382, indexKOFSprites_98BlueMary },
    { _T("A - Hidden Super Desperation Move 1"), 0x0095382, 0x00953a2, indexKOFSprites_98BlueMary },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00953a2, 0x00953c2, indexKOFSprites_98BlueMary },
    { _T("A - Electric Shock Effect"), 0x00953c2, 0x00953e2, indexKOFSprites_98BlueMary },
    { _T("A - Max Flash"), 0x00953e2, 0x0095402, indexKOFSprites_98BlueMary },
    { _T("A - Hidden Super Desperation Move 2"), 0x0095402, 0x0095422, indexKOFSprites_98BlueMary },
    { _T("A - Soul Palette"), 0x0095422, 0x0095442, indexKOFSprites_98BlueMary },
    { _T("A - Hidden Super Desperation Move 3"), 0x0095442, 0x0095462, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_B[] =
{
    { _T("Blue Mary B"), 0x0095562, 0x0095582, indexKOFSprites_98BlueMary },
    { _T("B - Hidden Super Desperation Move 1"), 0x0095582, 0x00955a2, indexKOFSprites_98BlueMary },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00955a2, 0x00955c2, indexKOFSprites_98BlueMary },
    { _T("B - Electric Shock Effect"), 0x00955c2, 0x00955e2, indexKOFSprites_98BlueMary },
    { _T("B - Max Flash"), 0x00955e2, 0x0095602, indexKOFSprites_98BlueMary },
    { _T("B - Hidden Super Desperation Move 2"), 0x0095602, 0x0095622, indexKOFSprites_98BlueMary },
    { _T("B - Soul Palette"), 0x0095622, 0x0095642, indexKOFSprites_98BlueMary },
    { _T("B - Hidden Super Desperation Move 3"), 0x0095642, 0x0095662, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_C[] =
{
    { _T("Blue Mary C"), 0x0095762, 0x0095782, indexKOFSprites_98BlueMary },
    { _T("C - Hidden Super Desperation Move 1"), 0x0095782, 0x00957a2, indexKOFSprites_98BlueMary },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00957a2, 0x00957c2, indexKOFSprites_98BlueMary },
    { _T("C - Electric Shock Effect"), 0x00957c2, 0x00957e2, indexKOFSprites_98BlueMary },
    { _T("C - Max Flash"), 0x00957e2, 0x0095802, indexKOFSprites_98BlueMary },
    { _T("C - Hidden Super Desperation Move 2"), 0x0095802, 0x0095822, indexKOFSprites_98BlueMary },
    { _T("C - Soul Palette"), 0x0095822, 0x0095842, indexKOFSprites_98BlueMary },
    { _T("C - Hidden Super Desperation Move 3"), 0x0095842, 0x0095862, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_D[] =
{
    { _T("Blue Mary D"), 0x0095962, 0x0095982, indexKOFSprites_98BlueMary },
    { _T("D - Hidden Super Desperation Move 1"), 0x0095982, 0x00959a2, indexKOFSprites_98BlueMary },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00959a2, 0x00959c2, indexKOFSprites_98BlueMary },
    { _T("D - Electric Shock Effect"), 0x00959c2, 0x00959e2, indexKOFSprites_98BlueMary },
    { _T("D - Max Flash"), 0x00959e2, 0x0095a02, indexKOFSprites_98BlueMary },
    { _T("D - Hidden Super Desperation Move 2"), 0x0095a02, 0x0095a22, indexKOFSprites_98BlueMary },
    { _T("D - Soul Palette"), 0x0095a22, 0x0095a42, indexKOFSprites_98BlueMary },
    { _T("D - Hidden Super Desperation Move 3"), 0x0095a42, 0x0095a62, indexKOFSprites_98BlueMary },
};

const sDescTreeNode KOF02_A_BLUEMARY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_A, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_B, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_C, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_D, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_A[] =
{
    { _T("Billy A"), 0x0095b62, 0x0095b82, indexKOFSprites_98Billy },
    { _T("A - Hidden Super Desperation Move 1"), 0x0095b82, 0x0095ba2, indexKOFSprites_98Billy },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0095ba2, 0x0095bc2, indexKOFSprites_98Billy },
    { _T("A - Electric Shock Effect"), 0x0095bc2, 0x0095be2, indexKOFSprites_98Billy },
    { _T("A - Max Flash"), 0x0095be2, 0x0095c02, indexKOFSprites_98Billy },
    { _T("A - Hidden Super Desperation Move 2"), 0x0095c02, 0x0095c22, indexKOFSprites_98Billy },
    { _T("A - Soul Palette"), 0x0095c22, 0x0095c42, indexKOFSprites_98Billy },
    { _T("A - Hidden Super Desperation Move 3"), 0x0095c42, 0x0095c62, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_B[] =
{
    { _T("Billy B"), 0x0095d62, 0x0095d82, indexKOFSprites_98Billy },
    { _T("B - Hidden Super Desperation Move 1"), 0x0095d82, 0x0095da2, indexKOFSprites_98Billy },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0095da2, 0x0095dc2, indexKOFSprites_98Billy },
    { _T("B - Electric Shock Effect"), 0x0095dc2, 0x0095de2, indexKOFSprites_98Billy },
    { _T("B - Max Flash"), 0x0095de2, 0x0095e02, indexKOFSprites_98Billy },
    { _T("B - Hidden Super Desperation Move 2"), 0x0095e02, 0x0095e22, indexKOFSprites_98Billy },
    { _T("B - Soul Palette"), 0x0095e22, 0x0095e42, indexKOFSprites_98Billy },
    { _T("B - Hidden Super Desperation Move 3"), 0x0095e42, 0x0095e62, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_C[] =
{
    { _T("Billy C"), 0x0095f62, 0x0095f82, indexKOFSprites_98Billy },
    { _T("C - Hidden Super Desperation Move 1"), 0x0095f82, 0x0095fa2, indexKOFSprites_98Billy },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0095fa2, 0x0095fc2, indexKOFSprites_98Billy },
    { _T("C - Electric Shock Effect"), 0x0095fc2, 0x0095fe2, indexKOFSprites_98Billy },
    { _T("C - Max Flash"), 0x0095fe2, 0x0096002, indexKOFSprites_98Billy },
    { _T("C - Hidden Super Desperation Move 2"), 0x0096002, 0x0096022, indexKOFSprites_98Billy },
    { _T("C - Soul Palette"), 0x0096022, 0x0096042, indexKOFSprites_98Billy },
    { _T("C - Hidden Super Desperation Move 3"), 0x0096042, 0x0096062, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_D[] =
{
    { _T("Billy D"), 0x0096162, 0x0096182, indexKOFSprites_98Billy },
    { _T("D - Hidden Super Desperation Move 1"), 0x0096182, 0x00961a2, indexKOFSprites_98Billy },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00961a2, 0x00961c2, indexKOFSprites_98Billy },
    { _T("D - Electric Shock Effect"), 0x00961c2, 0x00961e2, indexKOFSprites_98Billy },
    { _T("D - Max Flash"), 0x00961e2, 0x0096202, indexKOFSprites_98Billy },
    { _T("D - Hidden Super Desperation Move 2"), 0x0096202, 0x0096222, indexKOFSprites_98Billy },
    { _T("D - Soul Palette"), 0x0096222, 0x0096242, indexKOFSprites_98Billy },
    { _T("D - Hidden Super Desperation Move 3"), 0x0096242, 0x0096262, indexKOFSprites_98Billy },
};

const sDescTreeNode KOF02_A_BILLY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_A, ARRAYSIZE(KOF02_A_BILLY_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_B, ARRAYSIZE(KOF02_A_BILLY_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_C, ARRAYSIZE(KOF02_A_BILLY_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_D, ARRAYSIZE(KOF02_A_BILLY_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_A[] =
{
    { _T("Yashiro A"), 0x0096362, 0x0096382, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 1"), 0x0096382, 0x00963a2, indexKOFSprites_98Yashiro },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00963a2, 0x00963c2, indexKOFSprites_98Yashiro },
    { _T("A - Electric Shock Effect"), 0x00963c2, 0x00963e2, indexKOFSprites_98Yashiro },
    { _T("A - Max Flash"), 0x00963e2, 0x0096402, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 2"), 0x0096402, 0x0096422, indexKOFSprites_98Yashiro },
    { _T("A - Soul Palette"), 0x0096422, 0x0096442, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 3"), 0x0096442, 0x0096462, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_B[] =
{
    { _T("Yashiro B"), 0x0096562, 0x0096582, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 1"), 0x0096582, 0x00965a2, indexKOFSprites_98Yashiro },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00965a2, 0x00965c2, indexKOFSprites_98Yashiro },
    { _T("B - Electric Shock Effect"), 0x00965c2, 0x00965e2, indexKOFSprites_98Yashiro },
    { _T("B - Max Flash"), 0x00965e2, 0x0096602, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 2"), 0x0096602, 0x0096622, indexKOFSprites_98Yashiro },
    { _T("B - Soul Palette"), 0x0096622, 0x0096642, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 3"), 0x0096642, 0x0096662, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_C[] =
{
    { _T("Yashiro C"), 0x0096762, 0x0096782, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 1"), 0x0096782, 0x00967a2, indexKOFSprites_98Yashiro },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00967a2, 0x00967c2, indexKOFSprites_98Yashiro },
    { _T("C - Electric Shock Effect"), 0x00967c2, 0x00967e2, indexKOFSprites_98Yashiro },
    { _T("C - Max Flash"), 0x00967e2, 0x0096802, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 2"), 0x0096802, 0x0096822, indexKOFSprites_98Yashiro },
    { _T("C - Soul Palette"), 0x0096822, 0x0096842, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 3"), 0x0096842, 0x0096862, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_D[] =
{
    { _T("Yashiro D"), 0x0096962, 0x0096982, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 1"), 0x0096982, 0x00969a2, indexKOFSprites_98Yashiro },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00969a2, 0x00969c2, indexKOFSprites_98Yashiro },
    { _T("D - Electric Shock Effect"), 0x00969c2, 0x00969e2, indexKOFSprites_98Yashiro },
    { _T("D - Max Flash"), 0x00969e2, 0x0096a02, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 2"), 0x0096a02, 0x0096a22, indexKOFSprites_98Yashiro },
    { _T("D - Soul Palette"), 0x0096a22, 0x0096a42, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 3"), 0x0096a42, 0x0096a62, indexKOFSprites_98Yashiro },
};

const sDescTreeNode KOF02_A_YASHIRO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_A, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_B, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_C, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_D, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_A[] =
{
    { _T("Shermie A"), 0x0096b62, 0x0096b82, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 1"), 0x0096b82, 0x0096ba2, indexKOFSprites_98Shermie },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0096ba2, 0x0096bc2, indexKOFSprites_98Shermie },
    { _T("A - Electric Shock Effect"), 0x0096bc2, 0x0096be2, indexKOFSprites_98Shermie },
    { _T("A - Max Flash"), 0x0096be2, 0x0096c02, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 2"), 0x0096c02, 0x0096c22, indexKOFSprites_98Shermie },
    { _T("A - Soul Palette"), 0x0096c22, 0x0096c42, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 3"), 0x0096c42, 0x0096c62, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_B[] =
{
    { _T("Shermie B"), 0x0096d62, 0x0096d82, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 1"), 0x0096d82, 0x0096da2, indexKOFSprites_98Shermie },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0096da2, 0x0096dc2, indexKOFSprites_98Shermie },
    { _T("B - Electric Shock Effect"), 0x0096dc2, 0x0096de2, indexKOFSprites_98Shermie },
    { _T("B - Max Flash"), 0x0096de2, 0x0096e02, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 2"), 0x0096e02, 0x0096e22, indexKOFSprites_98Shermie },
    { _T("B - Soul Palette"), 0x0096e22, 0x0096e42, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 3"), 0x0096e42, 0x0096e62, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_C[] =
{
    { _T("Shermie C"), 0x0096f62, 0x0096f82, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 1"), 0x0096f82, 0x0096fa2, indexKOFSprites_98Shermie },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0096fa2, 0x0096fc2, indexKOFSprites_98Shermie },
    { _T("C - Electric Shock Effect"), 0x0096fc2, 0x0096fe2, indexKOFSprites_98Shermie },
    { _T("C - Max Flash"), 0x0096fe2, 0x0097002, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 2"), 0x0097002, 0x0097022, indexKOFSprites_98Shermie },
    { _T("C - Soul Palette"), 0x0097022, 0x0097042, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 3"), 0x0097042, 0x0097062, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_D[] =
{
    { _T("Shermie D"), 0x0097162, 0x0097182, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 1"), 0x0097182, 0x00971a2, indexKOFSprites_98Shermie },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00971a2, 0x00971c2, indexKOFSprites_98Shermie },
    { _T("D - Electric Shock Effect"), 0x00971c2, 0x00971e2, indexKOFSprites_98Shermie },
    { _T("D - Max Flash"), 0x00971e2, 0x0097202, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 2"), 0x0097202, 0x0097222, indexKOFSprites_98Shermie },
    { _T("D - Soul Palette"), 0x0097222, 0x0097242, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 3"), 0x0097242, 0x0097262, indexKOFSprites_98Shermie },
};

const sDescTreeNode KOF02_A_SHERMIE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_A, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_B, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_C, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_D, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_A[] =
{
    { _T("Chris A"), 0x0097362, 0x0097382, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 1"), 0x0097382, 0x00973a2, indexKOFSprites_98Chris },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00973a2, 0x00973c2, indexKOFSprites_98Chris },
    { _T("A - Electric Shock Effect"), 0x00973c2, 0x00973e2, indexKOFSprites_98Chris },
    { _T("A - Max Flash"), 0x00973e2, 0x0097402, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 2"), 0x0097402, 0x0097422, indexKOFSprites_98Chris },
    { _T("A - Soul Palette"), 0x0097422, 0x0097442, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 3"), 0x0097442, 0x0097462, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_B[] =
{
    { _T("Chris B"), 0x0097562, 0x0097582, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 1"), 0x0097582, 0x00975a2, indexKOFSprites_98Chris },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00975a2, 0x00975c2, indexKOFSprites_98Chris },
    { _T("B - Electric Shock Effect"), 0x00975c2, 0x00975e2, indexKOFSprites_98Chris },
    { _T("B - Max Flash"), 0x00975e2, 0x0097602, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 2"), 0x0097602, 0x0097622, indexKOFSprites_98Chris },
    { _T("B - Soul Palette"), 0x0097622, 0x0097642, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 3"), 0x0097642, 0x0097662, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_C[] =
{
    { _T("Chris C"), 0x0097762, 0x0097782, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 1"), 0x0097782, 0x00977a2, indexKOFSprites_98Chris },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00977a2, 0x00977c2, indexKOFSprites_98Chris },
    { _T("C - Electric Shock Effect"), 0x00977c2, 0x00977e2, indexKOFSprites_98Chris },
    { _T("C - Max Flash"), 0x00977e2, 0x0097802, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 2"), 0x0097802, 0x0097822, indexKOFSprites_98Chris },
    { _T("C - Soul Palette"), 0x0097822, 0x0097842, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 3"), 0x0097842, 0x0097862, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_D[] =
{
    { _T("Chris D"), 0x0097962, 0x0097982, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 1"), 0x0097982, 0x00979a2, indexKOFSprites_98Chris },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00979a2, 0x00979c2, indexKOFSprites_98Chris },
    { _T("D - Electric Shock Effect"), 0x00979c2, 0x00979e2, indexKOFSprites_98Chris },
    { _T("D - Max Flash"), 0x00979e2, 0x0097a02, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 2"), 0x0097a02, 0x0097a22, indexKOFSprites_98Chris },
    { _T("D - Soul Palette"), 0x0097a22, 0x0097a42, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 3"), 0x0097a42, 0x0097a62, indexKOFSprites_98Chris },
};

const sDescTreeNode KOF02_A_CHRIS_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_A, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_B, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_C, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_D, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_A[] =
{
    { _T("K’ A"), 0x0097b62, 0x0097b82, indexKOFSprites_02K },
    { _T("A - Hidden Super Desperation Move 1"), 0x0097b82, 0x0097ba2, indexKOFSprites_02K },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0097ba2, 0x0097bc2, indexKOFSprites_02K },
    { _T("A - Electric Shock Effect"), 0x0097bc2, 0x0097be2, indexKOFSprites_02K },
    { _T("A - Max Flash"), 0x0097be2, 0x0097c02, indexKOFSprites_02K },
    { _T("A - Hidden Super Desperation Move 2"), 0x0097c02, 0x0097c22, indexKOFSprites_02K },
    { _T("A - Soul Palette"), 0x0097c22, 0x0097c42, indexKOFSprites_02K },
    { _T("A - Hidden Super Desperation Move 3"), 0x0097c42, 0x0097c62, indexKOFSprites_02K },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_B[] =
{
    { _T("K’ B"), 0x0097d62, 0x0097d82, indexKOFSprites_02K },
    { _T("B - Hidden Super Desperation Move 1"), 0x0097d82, 0x0097da2, indexKOFSprites_02K },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0097da2, 0x0097dc2, indexKOFSprites_02K },
    { _T("B - Electric Shock Effect"), 0x0097dc2, 0x0097de2, indexKOFSprites_02K },
    { _T("B - Max Flash"), 0x0097de2, 0x0097e02, indexKOFSprites_02K },
    { _T("B - Hidden Super Desperation Move 2"), 0x0097e02, 0x0097e22, indexKOFSprites_02K },
    { _T("B - Soul Palette"), 0x0097e22, 0x0097e42, indexKOFSprites_02K },
    { _T("B - Hidden Super Desperation Move 3"), 0x0097e42, 0x0097e62, indexKOFSprites_02K },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_C[] =
{
    { _T("K’ C"), 0x0097f62, 0x0097f82, indexKOFSprites_02K },
    { _T("C - Hidden Super Desperation Move 1"), 0x0097f82, 0x0097fa2, indexKOFSprites_02K },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0097fa2, 0x0097fc2, indexKOFSprites_02K },
    { _T("C - Electric Shock Effect"), 0x0097fc2, 0x0097fe2, indexKOFSprites_02K },
    { _T("C - Max Flash"), 0x0097fe2, 0x0098002, indexKOFSprites_02K },
    { _T("C - Hidden Super Desperation Move 2"), 0x0098002, 0x0098022, indexKOFSprites_02K },
    { _T("C - Soul Palette"), 0x0098022, 0x0098042, indexKOFSprites_02K },
    { _T("C - Hidden Super Desperation Move 3"), 0x0098042, 0x0098062, indexKOFSprites_02K },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_D[] =
{
    { _T("K’ D"), 0x0098162, 0x0098182, indexKOFSprites_02K },
    { _T("D - Hidden Super Desperation Move 1"), 0x0098182, 0x00981a2, indexKOFSprites_02K },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00981a2, 0x00981c2, indexKOFSprites_02K },
    { _T("D - Electric Shock Effect"), 0x00981c2, 0x00981e2, indexKOFSprites_02K },
    { _T("D - Max Flash"), 0x00981e2, 0x0098202, indexKOFSprites_02K },
    { _T("D - Hidden Super Desperation Move 2"), 0x0098202, 0x0098222, indexKOFSprites_02K },
    { _T("D - Soul Palette"), 0x0098222, 0x0098242, indexKOFSprites_02K },
    { _T("D - Hidden Super Desperation Move 3"), 0x0098242, 0x0098262, indexKOFSprites_02K },
};

const sDescTreeNode KOF02_A_K_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_A, ARRAYSIZE(KOF02_A_K_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_B, ARRAYSIZE(KOF02_A_K_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_C, ARRAYSIZE(KOF02_A_K_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_D, ARRAYSIZE(KOF02_A_K_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_A[] =
{
    { _T("Maxima A"), 0x0098362, 0x0098382, indexKOFSprites_02Maxima },
    { _T("A - Hidden Super Desperation Move 1"), 0x0098382, 0x00983a2, indexKOFSprites_02Maxima },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00983a2, 0x00983c2, indexKOFSprites_02Maxima },
    { _T("A - Electric Shock Effect"), 0x00983c2, 0x00983e2, indexKOFSprites_02Maxima },
    { _T("A - Max Flash"), 0x00983e2, 0x0098402, indexKOFSprites_02Maxima },
    { _T("A - Hidden Super Desperation Move 2"), 0x0098402, 0x0098422, indexKOFSprites_02Maxima },
    { _T("A - Soul Palette"), 0x0098422, 0x0098442, indexKOFSprites_02Maxima },
    { _T("A - Hidden Super Desperation Move 3"), 0x0098442, 0x0098462, indexKOFSprites_02Maxima },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_B[] =
{
    { _T("Maxima B"), 0x0098562, 0x0098582, indexKOFSprites_02Maxima },
    { _T("B - Hidden Super Desperation Move 1"), 0x0098582, 0x00985a2, indexKOFSprites_02Maxima },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00985a2, 0x00985c2, indexKOFSprites_02Maxima },
    { _T("B - Electric Shock Effect"), 0x00985c2, 0x00985e2, indexKOFSprites_02Maxima },
    { _T("B - Max Flash"), 0x00985e2, 0x0098602, indexKOFSprites_02Maxima },
    { _T("B - Hidden Super Desperation Move 2"), 0x0098602, 0x0098622, indexKOFSprites_02Maxima },
    { _T("B - Soul Palette"), 0x0098622, 0x0098642, indexKOFSprites_02Maxima },
    { _T("B - Hidden Super Desperation Move 3"), 0x0098642, 0x0098662, indexKOFSprites_02Maxima },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_C[] =
{
    { _T("Maxima C"), 0x0098762, 0x0098782, indexKOFSprites_02Maxima },
    { _T("C - Hidden Super Desperation Move 1"), 0x0098782, 0x00987a2, indexKOFSprites_02Maxima },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00987a2, 0x00987c2, indexKOFSprites_02Maxima },
    { _T("C - Electric Shock Effect"), 0x00987c2, 0x00987e2, indexKOFSprites_02Maxima },
    { _T("C - Max Flash"), 0x00987e2, 0x0098802, indexKOFSprites_02Maxima },
    { _T("C - Hidden Super Desperation Move 2"), 0x0098802, 0x0098822, indexKOFSprites_02Maxima },
    { _T("C - Soul Palette"), 0x0098822, 0x0098842, indexKOFSprites_02Maxima },
    { _T("C - Hidden Super Desperation Move 3"), 0x0098842, 0x0098862, indexKOFSprites_02Maxima },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_D[] =
{
    { _T("Maxima D"), 0x0098962, 0x0098982, indexKOFSprites_02Maxima },
    { _T("D - Hidden Super Desperation Move 1"), 0x0098982, 0x00989a2, indexKOFSprites_02Maxima },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00989a2, 0x00989c2, indexKOFSprites_02Maxima },
    { _T("D - Electric Shock Effect"), 0x00989c2, 0x00989e2, indexKOFSprites_02Maxima },
    { _T("D - Max Flash"), 0x00989e2, 0x0098a02, indexKOFSprites_02Maxima },
    { _T("D - Hidden Super Desperation Move 2"), 0x0098a02, 0x0098a22, indexKOFSprites_02Maxima },
    { _T("D - Soul Palette"), 0x0098a22, 0x0098a42, indexKOFSprites_02Maxima },
    { _T("D - Hidden Super Desperation Move 3"), 0x0098a42, 0x0098a62, indexKOFSprites_02Maxima },
};

const sDescTreeNode KOF02_A_MAXIMA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_A, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_B, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_C, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_D, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_A[] =
{
    { _T("Whip A"), 0x0098b62, 0x0098b82, indexKOFSprites_02Whip },
    { _T("A - Hidden Super Desperation Move 1"), 0x0098b82, 0x0098ba2, indexKOFSprites_02Whip },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0098ba2, 0x0098bc2, indexKOFSprites_02Whip },
    { _T("A - Electric Shock Effect"), 0x0098bc2, 0x0098be2, indexKOFSprites_02Whip },
    { _T("A - Max Flash"), 0x0098be2, 0x0098c02, indexKOFSprites_02Whip },
    { _T("A - Hidden Super Desperation Move 2"), 0x0098c02, 0x0098c22, indexKOFSprites_02Whip },
    { _T("A - Soul Palette"), 0x0098c22, 0x0098c42, indexKOFSprites_02Whip },
    { _T("A - Hidden Super Desperation Move 3"), 0x0098c42, 0x0098c62, indexKOFSprites_02Whip },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_B[] =
{
    { _T("Whip B"), 0x0098d62, 0x0098d82, indexKOFSprites_02Whip },
    { _T("B - Hidden Super Desperation Move 1"), 0x0098d82, 0x0098da2, indexKOFSprites_02Whip },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0098da2, 0x0098dc2, indexKOFSprites_02Whip },
    { _T("B - Electric Shock Effect"), 0x0098dc2, 0x0098de2, indexKOFSprites_02Whip },
    { _T("B - Max Flash"), 0x0098de2, 0x0098e02, indexKOFSprites_02Whip },
    { _T("B - Hidden Super Desperation Move 2"), 0x0098e02, 0x0098e22, indexKOFSprites_02Whip },
    { _T("B - Soul Palette"), 0x0098e22, 0x0098e42, indexKOFSprites_02Whip },
    { _T("B - Hidden Super Desperation Move 3"), 0x0098e42, 0x0098e62, indexKOFSprites_02Whip },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_C[] =
{
    { _T("Whip C"), 0x0098f62, 0x0098f82, indexKOFSprites_02Whip },
    { _T("C - Hidden Super Desperation Move 1"), 0x0098f82, 0x0098fa2, indexKOFSprites_02Whip },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0098fa2, 0x0098fc2, indexKOFSprites_02Whip },
    { _T("C - Electric Shock Effect"), 0x0098fc2, 0x0098fe2, indexKOFSprites_02Whip },
    { _T("C - Max Flash"), 0x0098fe2, 0x0099002, indexKOFSprites_02Whip },
    { _T("C - Hidden Super Desperation Move 2"), 0x0099002, 0x0099022, indexKOFSprites_02Whip },
    { _T("C - Soul Palette"), 0x0099022, 0x0099042, indexKOFSprites_02Whip },
    { _T("C - Hidden Super Desperation Move 3"), 0x0099042, 0x0099062, indexKOFSprites_02Whip },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_D[] =
{
    { _T("Whip D"), 0x0099162, 0x0099182, indexKOFSprites_02Whip },
    { _T("D - Hidden Super Desperation Move 1"), 0x0099182, 0x00991a2, indexKOFSprites_02Whip },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00991a2, 0x00991c2, indexKOFSprites_02Whip },
    { _T("D - Electric Shock Effect"), 0x00991c2, 0x00991e2, indexKOFSprites_02Whip },
    { _T("D - Max Flash"), 0x00991e2, 0x0099202, indexKOFSprites_02Whip },
    { _T("D - Hidden Super Desperation Move 2"), 0x0099202, 0x0099222, indexKOFSprites_02Whip },
    { _T("D - Soul Palette"), 0x0099222, 0x0099242, indexKOFSprites_02Whip },
    { _T("D - Hidden Super Desperation Move 3"), 0x0099242, 0x0099262, indexKOFSprites_02Whip },
};

const sDescTreeNode KOF02_A_WHIP_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_A, ARRAYSIZE(KOF02_A_WHIP_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_B, ARRAYSIZE(KOF02_A_WHIP_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_C, ARRAYSIZE(KOF02_A_WHIP_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_D, ARRAYSIZE(KOF02_A_WHIP_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_A[] =
{
    { _T("Vanessa A"), 0x0099362, 0x0099382, indexKOFSprites_02Vanessa },
    { _T("A - Hidden Super Desperation Move 1"), 0x0099382, 0x00993a2, indexKOFSprites_02Vanessa },
    { _T("A - Desperation Move / Super Desperation Move"), 0x00993a2, 0x00993c2, indexKOFSprites_02Vanessa },
    { _T("A - Electric Shock Effect"), 0x00993c2, 0x00993e2, indexKOFSprites_02Vanessa },
    { _T("A - Max Flash"), 0x00993e2, 0x0099402, indexKOFSprites_02Vanessa },
    { _T("A - Hidden Super Desperation Move 2"), 0x0099402, 0x0099422, indexKOFSprites_02Vanessa },
    { _T("A - Soul Palette"), 0x0099422, 0x0099442, indexKOFSprites_02Vanessa },
    { _T("A - Hidden Super Desperation Move 3"), 0x0099442, 0x0099462, indexKOFSprites_02Vanessa },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_B[] =
{
    { _T("Vanessa B"), 0x0099562, 0x0099582, indexKOFSprites_02Vanessa },
    { _T("B - Hidden Super Desperation Move 1"), 0x0099582, 0x00995a2, indexKOFSprites_02Vanessa },
    { _T("B - Desperation Move / Super Desperation Move"), 0x00995a2, 0x00995c2, indexKOFSprites_02Vanessa },
    { _T("B - Electric Shock Effect"), 0x00995c2, 0x00995e2, indexKOFSprites_02Vanessa },
    { _T("B - Max Flash"), 0x00995e2, 0x0099602, indexKOFSprites_02Vanessa },
    { _T("B - Hidden Super Desperation Move 2"), 0x0099602, 0x0099622, indexKOFSprites_02Vanessa },
    { _T("B - Soul Palette"), 0x0099622, 0x0099642, indexKOFSprites_02Vanessa },
    { _T("B - Hidden Super Desperation Move 3"), 0x0099642, 0x0099662, indexKOFSprites_02Vanessa },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_C[] =
{
    { _T("Vanessa C"), 0x0099762, 0x0099782, indexKOFSprites_02Vanessa },
    { _T("C - Hidden Super Desperation Move 1"), 0x0099782, 0x00997a2, indexKOFSprites_02Vanessa },
    { _T("C - Desperation Move / Super Desperation Move"), 0x00997a2, 0x00997c2, indexKOFSprites_02Vanessa },
    { _T("C - Electric Shock Effect"), 0x00997c2, 0x00997e2, indexKOFSprites_02Vanessa },
    { _T("C - Max Flash"), 0x00997e2, 0x0099802, indexKOFSprites_02Vanessa },
    { _T("C - Hidden Super Desperation Move 2"), 0x0099802, 0x0099822, indexKOFSprites_02Vanessa },
    { _T("C - Soul Palette"), 0x0099822, 0x0099842, indexKOFSprites_02Vanessa },
    { _T("C - Hidden Super Desperation Move 3"), 0x0099842, 0x0099862, indexKOFSprites_02Vanessa },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_D[] =
{
    { _T("Vanessa D"), 0x0099962, 0x0099982, indexKOFSprites_02Vanessa },
    { _T("D - Hidden Super Desperation Move 1"), 0x0099982, 0x00999a2, indexKOFSprites_02Vanessa },
    { _T("D - Desperation Move / Super Desperation Move"), 0x00999a2, 0x00999c2, indexKOFSprites_02Vanessa },
    { _T("D - Electric Shock Effect"), 0x00999c2, 0x00999e2, indexKOFSprites_02Vanessa },
    { _T("D - Max Flash"), 0x00999e2, 0x0099a02, indexKOFSprites_02Vanessa },
    { _T("D - Hidden Super Desperation Move 2"), 0x0099a02, 0x0099a22, indexKOFSprites_02Vanessa },
    { _T("D - Soul Palette"), 0x0099a22, 0x0099a42, indexKOFSprites_02Vanessa },
    { _T("D - Hidden Super Desperation Move 3"), 0x0099a42, 0x0099a62, indexKOFSprites_02Vanessa },
};

const sDescTreeNode KOF02_A_VANESSA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_A, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_B, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_C, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_D, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_A[] =
{
    { _T("Seth A"), 0x0099b62, 0x0099b82, indexKOFSprites_02Seth },
    { _T("A - Hidden Super Desperation Move 1"), 0x0099b82, 0x0099ba2, indexKOFSprites_02Seth },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0099ba2, 0x0099bc2, indexKOFSprites_02Seth },
    { _T("A - Electric Shock Effect"), 0x0099bc2, 0x0099be2, indexKOFSprites_02Seth },
    { _T("A - Max Flash"), 0x0099be2, 0x0099c02, indexKOFSprites_02Seth },
    { _T("A - Hidden Super Desperation Move 2"), 0x0099c02, 0x0099c22, indexKOFSprites_02Seth },
    { _T("A - Soul Palette"), 0x0099c22, 0x0099c42, indexKOFSprites_02Seth },
    { _T("A - Hidden Super Desperation Move 3"), 0x0099c42, 0x0099c62, indexKOFSprites_02Seth },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_B[] =
{
    { _T("Seth B"), 0x0099d62, 0x0099d82, indexKOFSprites_02Seth },
    { _T("B - Hidden Super Desperation Move 1"), 0x0099d82, 0x0099da2, indexKOFSprites_02Seth },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0099da2, 0x0099dc2, indexKOFSprites_02Seth },
    { _T("B - Electric Shock Effect"), 0x0099dc2, 0x0099de2, indexKOFSprites_02Seth },
    { _T("B - Max Flash"), 0x0099de2, 0x0099e02, indexKOFSprites_02Seth },
    { _T("B - Hidden Super Desperation Move 2"), 0x0099e02, 0x0099e22, indexKOFSprites_02Seth },
    { _T("B - Soul Palette"), 0x0099e22, 0x0099e42, indexKOFSprites_02Seth },
    { _T("B - Hidden Super Desperation Move 3"), 0x0099e42, 0x0099e62, indexKOFSprites_02Seth },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_C[] =
{
    { _T("Seth C"), 0x0099f62, 0x0099f82, indexKOFSprites_02Seth },
    { _T("C - Hidden Super Desperation Move 1"), 0x0099f82, 0x0099fa2, indexKOFSprites_02Seth },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0099fa2, 0x0099fc2, indexKOFSprites_02Seth },
    { _T("C - Electric Shock Effect"), 0x0099fc2, 0x0099fe2, indexKOFSprites_02Seth },
    { _T("C - Max Flash"), 0x0099fe2, 0x009a002, indexKOFSprites_02Seth },
    { _T("C - Hidden Super Desperation Move 2"), 0x009a002, 0x009a022, indexKOFSprites_02Seth },
    { _T("C - Soul Palette"), 0x009a022, 0x009a042, indexKOFSprites_02Seth },
    { _T("C - Hidden Super Desperation Move 3"), 0x009a042, 0x009a062, indexKOFSprites_02Seth },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_D[] =
{
    { _T("Seth D"), 0x009a162, 0x009a182, indexKOFSprites_02Seth },
    { _T("D - Hidden Super Desperation Move 1"), 0x009a182, 0x009a1a2, indexKOFSprites_02Seth },
    { _T("D - Desperation Move / Super Desperation Move"), 0x009a1a2, 0x009a1c2, indexKOFSprites_02Seth },
    { _T("D - Electric Shock Effect"), 0x009a1c2, 0x009a1e2, indexKOFSprites_02Seth },
    { _T("D - Max Flash"), 0x009a1e2, 0x009a202, indexKOFSprites_02Seth },
    { _T("D - Hidden Super Desperation Move 2"), 0x009a202, 0x009a222, indexKOFSprites_02Seth },
    { _T("D - Soul Palette"), 0x009a222, 0x009a242, indexKOFSprites_02Seth },
    { _T("D - Hidden Super Desperation Move 3"), 0x009a242, 0x009a262, indexKOFSprites_02Seth },
};

const sDescTreeNode KOF02_A_SETH_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_A, ARRAYSIZE(KOF02_A_SETH_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_B, ARRAYSIZE(KOF02_A_SETH_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_C, ARRAYSIZE(KOF02_A_SETH_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_D, ARRAYSIZE(KOF02_A_SETH_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_A[] =
{
    { _T("Ramon A"), 0x009a362, 0x009a382, indexKOFSprites_02Ramon },
    { _T("A - Hidden Super Desperation Move 1"), 0x009a382, 0x009a3a2, indexKOFSprites_02Ramon },
    { _T("A - Desperation Move / Super Desperation Move"), 0x009a3a2, 0x009a3c2, indexKOFSprites_02Ramon },
    { _T("A - Electric Shock Effect"), 0x009a3c2, 0x009a3e2, indexKOFSprites_02Ramon },
    { _T("A - Max Flash"), 0x009a3e2, 0x009a402, indexKOFSprites_02Ramon },
    { _T("A - Hidden Super Desperation Move 2"), 0x009a402, 0x009a422, indexKOFSprites_02Ramon },
    { _T("A - Soul Palette"), 0x009a422, 0x009a442, indexKOFSprites_02Ramon },
    { _T("A - Hidden Super Desperation Move 3"), 0x009a442, 0x009a462, indexKOFSprites_02Ramon },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_B[] =
{
    { _T("Ramon B"), 0x009a562, 0x009a582, indexKOFSprites_02Ramon },
    { _T("B - Hidden Super Desperation Move 1"), 0x009a582, 0x009a5a2, indexKOFSprites_02Ramon },
    { _T("B - Desperation Move / Super Desperation Move"), 0x009a5a2, 0x009a5c2, indexKOFSprites_02Ramon },
    { _T("B - Electric Shock Effect"), 0x009a5c2, 0x009a5e2, indexKOFSprites_02Ramon },
    { _T("B - Max Flash"), 0x009a5e2, 0x009a602, indexKOFSprites_02Ramon },
    { _T("B - Hidden Super Desperation Move 2"), 0x009a602, 0x009a622, indexKOFSprites_02Ramon },
    { _T("B - Soul Palette"), 0x009a622, 0x009a642, indexKOFSprites_02Ramon },
    { _T("B - Hidden Super Desperation Move 3"), 0x009a642, 0x009a662, indexKOFSprites_02Ramon },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_C[] =
{
    { _T("Ramon C"), 0x009a762, 0x009a782, indexKOFSprites_02Ramon },
    { _T("C - Hidden Super Desperation Move 1"), 0x009a782, 0x009a7a2, indexKOFSprites_02Ramon },
    { _T("C - Desperation Move / Super Desperation Move"), 0x009a7a2, 0x009a7c2, indexKOFSprites_02Ramon },
    { _T("C - Electric Shock Effect"), 0x009a7c2, 0x009a7e2, indexKOFSprites_02Ramon },
    { _T("C - Max Flash"), 0x009a7e2, 0x009a802, indexKOFSprites_02Ramon },
    { _T("C - Hidden Super Desperation Move 2"), 0x009a802, 0x009a822, indexKOFSprites_02Ramon },
    { _T("C - Soul Palette"), 0x009a822, 0x009a842, indexKOFSprites_02Ramon },
    { _T("C - Hidden Super Desperation Move 3"), 0x009a842, 0x009a862, indexKOFSprites_02Ramon },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_D[] =
{
    { _T("Ramon D"), 0x009a962, 0x009a982, indexKOFSprites_02Ramon },
    { _T("D - Hidden Super Desperation Move 1"), 0x009a982, 0x009a9a2, indexKOFSprites_02Ramon },
    { _T("D - Desperation Move / Super Desperation Move"), 0x009a9a2, 0x009a9c2, indexKOFSprites_02Ramon },
    { _T("D - Electric Shock Effect"), 0x009a9c2, 0x009a9e2, indexKOFSprites_02Ramon },
    { _T("D - Max Flash"), 0x009a9e2, 0x009aa02, indexKOFSprites_02Ramon },
    { _T("D - Hidden Super Desperation Move 2"), 0x009aa02, 0x009aa22, indexKOFSprites_02Ramon },
    { _T("D - Soul Palette"), 0x009aa22, 0x009aa42, indexKOFSprites_02Ramon },
    { _T("D - Hidden Super Desperation Move 3"), 0x009aa42, 0x009aa62, indexKOFSprites_02Ramon },
};

const sDescTreeNode KOF02_A_RAMON_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_A, ARRAYSIZE(KOF02_A_RAMON_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_B, ARRAYSIZE(KOF02_A_RAMON_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_C, ARRAYSIZE(KOF02_A_RAMON_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_D, ARRAYSIZE(KOF02_A_RAMON_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_A[] =
{
    { _T("Kula A"), 0x009ab62, 0x009ab82, indexKOFSprites_02Kula },
    { _T("A - Hidden Super Desperation Move 1"), 0x009ab82, 0x009aba2, indexKOFSprites_02Kula },
    { _T("A - Desperation Move / Super Desperation Move"), 0x009aba2, 0x009abc2, indexKOFSprites_02Kula },
    { _T("A - Electric Shock Effect"), 0x009abc2, 0x009abe2, indexKOFSprites_02Kula },
    { _T("A - Max Flash"), 0x009abe2, 0x009ac02, indexKOFSprites_02Kula },
    { _T("A - Hidden Super Desperation Move 2"), 0x009ac02, 0x009ac22, indexKOFSprites_02Kula },
    { _T("A - Soul Palette"), 0x009ac22, 0x009ac42, indexKOFSprites_02Kula },
    { _T("A - Hidden Super Desperation Move 3"), 0x009ac42, 0x009ac62, indexKOFSprites_02Kula },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_B[] =
{
    { _T("Kula B"), 0x009ad62, 0x009ad82, indexKOFSprites_02Kula },
    { _T("B - Hidden Super Desperation Move 1"), 0x009ad82, 0x009ada2, indexKOFSprites_02Kula },
    { _T("B - Desperation Move / Super Desperation Move"), 0x009ada2, 0x009adc2, indexKOFSprites_02Kula },
    { _T("B - Electric Shock Effect"), 0x009adc2, 0x009ade2, indexKOFSprites_02Kula },
    { _T("B - Max Flash"), 0x009ade2, 0x009ae02, indexKOFSprites_02Kula },
    { _T("B - Hidden Super Desperation Move 2"), 0x009ae02, 0x009ae22, indexKOFSprites_02Kula },
    { _T("B - Soul Palette"), 0x009ae22, 0x009ae42, indexKOFSprites_02Kula },
    { _T("B - Hidden Super Desperation Move 3"), 0x009ae42, 0x009ae62, indexKOFSprites_02Kula },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_C[] =
{
    { _T("Kula C"), 0x009af62, 0x009af82, indexKOFSprites_02Kula },
    { _T("C - Hidden Super Desperation Move 1"), 0x009af82, 0x009afa2, indexKOFSprites_02Kula },
    { _T("C - Desperation Move / Super Desperation Move"), 0x009afa2, 0x009afc2, indexKOFSprites_02Kula },
    { _T("C - Electric Shock Effect"), 0x009afc2, 0x009afe2, indexKOFSprites_02Kula },
    { _T("C - Max Flash"), 0x009afe2, 0x009b002, indexKOFSprites_02Kula },
    { _T("C - Hidden Super Desperation Move 2"), 0x009b002, 0x009b022, indexKOFSprites_02Kula },
    { _T("C - Soul Palette"), 0x009b022, 0x009b042, indexKOFSprites_02Kula },
    { _T("C - Hidden Super Desperation Move 3"), 0x009b042, 0x009b062, indexKOFSprites_02Kula },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_D[] =
{
    { _T("Kula D"), 0x009b162, 0x009b182, indexKOFSprites_02Kula },
    { _T("D - Hidden Super Desperation Move 1"), 0x009b182, 0x009b1a2, indexKOFSprites_02Kula },
    { _T("D - Desperation Move / Super Desperation Move"), 0x009b1a2, 0x009b1c2, indexKOFSprites_02Kula },
    { _T("D - Electric Shock Effect"), 0x009b1c2, 0x009b1e2, indexKOFSprites_02Kula },
    { _T("D - Max Flash"), 0x009b1e2, 0x009b202, indexKOFSprites_02Kula },
    { _T("D - Hidden Super Desperation Move 2"), 0x009b202, 0x009b222, indexKOFSprites_02Kula },
    { _T("D - Soul Palette"), 0x009b222, 0x009b242, indexKOFSprites_02Kula },
    { _T("D - Hidden Super Desperation Move 3"), 0x009b242, 0x009b262, indexKOFSprites_02Kula },
};

const sDescTreeNode KOF02_A_KULA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_A, ARRAYSIZE(KOF02_A_KULA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_B, ARRAYSIZE(KOF02_A_KULA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_C, ARRAYSIZE(KOF02_A_KULA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_D, ARRAYSIZE(KOF02_A_KULA_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_A[] =
{
    { _T("K9999 A"), 0x009b362, 0x009b382 },
    { _T("A - Hidden Super Desperation Move 1"), 0x009b382, 0x009b3a2 },
    { _T("A - Desperation Move / Super Desperation Move"), 0x009b3a2, 0x009b3c2 },
    { _T("A - Electric Shock Effect"), 0x009b3c2, 0x009b3e2 },
    { _T("A - Max Flash"), 0x009b3e2, 0x009b402 },
    { _T("A - Hidden Super Desperation Move 2"), 0x009b402, 0x009b422 },
    { _T("A - Soul Palette"), 0x009b422, 0x009b442 },
    { _T("A - Hidden Super Desperation Move 3"), 0x009b442, 0x009b462 },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_B[] =
{
    { _T("K9999 B"), 0x009b562, 0x009b582 },
    { _T("B - Hidden Super Desperation Move 1"), 0x009b582, 0x009b5a2 },
    { _T("B - Desperation Move / Super Desperation Move"), 0x009b5a2, 0x009b5c2 },
    { _T("B - Electric Shock Effect"), 0x009b5c2, 0x009b5e2 },
    { _T("B - Max Flash"), 0x009b5e2, 0x009b602 },
    { _T("B - Hidden Super Desperation Move 2"), 0x009b602, 0x009b622 },
    { _T("B - Soul Palette"), 0x009b622, 0x009b642 },
    { _T("B - Hidden Super Desperation Move 3"), 0x009b642, 0x009b662 },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_C[] =
{
    { _T("K9999 C"), 0x009b762, 0x009b782 },
    { _T("C - Hidden Super Desperation Move 1"), 0x009b782, 0x009b7a2 },
    { _T("C - Desperation Move / Super Desperation Move"), 0x009b7a2, 0x009b7c2 },
    { _T("C - Electric Shock Effect"), 0x009b7c2, 0x009b7e2 },
    { _T("C - Max Flash"), 0x009b7e2, 0x009b802 },
    { _T("C - Hidden Super Desperation Move 2"), 0x009b802, 0x009b822 },
    { _T("C - Soul Palette"), 0x009b822, 0x009b842 },
    { _T("C - Hidden Super Desperation Move 3"), 0x009b842, 0x009b862 },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_D[] =
{
    { _T("K9999 D"), 0x009b962, 0x009b982 },
    { _T("D - Hidden Super Desperation Move 1"), 0x009b982, 0x009b9a2 },
    { _T("D - Desperation Move / Super Desperation Move"), 0x009b9a2, 0x009b9c2 },
    { _T("D - Electric Shock Effect"), 0x009b9c2, 0x009b9e2 },
    { _T("D - Max Flash"), 0x009b9e2, 0x009ba02 },
    { _T("D - Hidden Super Desperation Move 2"), 0x009ba02, 0x009ba22 },
    { _T("D - Soul Palette"), 0x009ba22, 0x009ba42 },
    { _T("D - Hidden Super Desperation Move 3"), 0x009ba42, 0x009ba62 },
};

const sDescTreeNode KOF02_A_K9999_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_A, ARRAYSIZE(KOF02_A_K9999_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_B, ARRAYSIZE(KOF02_A_K9999_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_C, ARRAYSIZE(KOF02_A_K9999_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_D, ARRAYSIZE(KOF02_A_K9999_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_A[] =
{
    { _T("Angel A"), 0x009bb62, 0x009bb82, indexKOFSprites_02Angel },
    { _T("A - Hidden Super Desperation Move 1"), 0x009bb82, 0x009bba2, indexKOFSprites_02Angel },
    { _T("A - Desperation Move / Super Desperation Move"), 0x009bba2, 0x009bbc2, indexKOFSprites_02Angel },
    { _T("A - Electric Shock Effect"), 0x009bbc2, 0x009bbe2, indexKOFSprites_02Angel },
    { _T("A - Max Flash"), 0x009bbe2, 0x009bc02, indexKOFSprites_02Angel },
    { _T("A - Hidden Super Desperation Move 2"), 0x009bc02, 0x009bc22, indexKOFSprites_02Angel },
    { _T("A - Soul Palette"), 0x009bc22, 0x009bc42, indexKOFSprites_02Angel },
    { _T("A - Hidden Super Desperation Move 3"), 0x009bc42, 0x009bc62, indexKOFSprites_02Angel },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_B[] =
{
    { _T("Angel B"), 0x009bd62, 0x009bd82, indexKOFSprites_02Angel },
    { _T("B - Hidden Super Desperation Move 1"), 0x009bd82, 0x009bda2, indexKOFSprites_02Angel },
    { _T("B - Desperation Move / Super Desperation Move"), 0x009bda2, 0x009bdc2, indexKOFSprites_02Angel },
    { _T("B - Electric Shock Effect"), 0x009bdc2, 0x009bde2, indexKOFSprites_02Angel },
    { _T("B - Max Flash"), 0x009bde2, 0x009be02, indexKOFSprites_02Angel },
    { _T("B - Hidden Super Desperation Move 2"), 0x009be02, 0x009be22, indexKOFSprites_02Angel },
    { _T("B - Soul Palette"), 0x009be22, 0x009be42, indexKOFSprites_02Angel },
    { _T("B - Hidden Super Desperation Move 3"), 0x009be42, 0x009be62, indexKOFSprites_02Angel },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_C[] =
{
    { _T("Angel C"), 0x009bf62, 0x009bf82, indexKOFSprites_02Angel },
    { _T("C - Hidden Super Desperation Move 1"), 0x009bf82, 0x009bfa2, indexKOFSprites_02Angel },
    { _T("C - Desperation Move / Super Desperation Move"), 0x009bfa2, 0x009bfc2, indexKOFSprites_02Angel },
    { _T("C - Electric Shock Effect"), 0x009bfc2, 0x009bfe2, indexKOFSprites_02Angel },
    { _T("C - Max Flash"), 0x009bfe2, 0x009c002, indexKOFSprites_02Angel },
    { _T("C - Hidden Super Desperation Move 2"), 0x009c002, 0x009c022, indexKOFSprites_02Angel },
    { _T("C - Soul Palette"), 0x009c022, 0x009c042, indexKOFSprites_02Angel },
    { _T("C - Hidden Super Desperation Move 3"), 0x009c042, 0x009c062, indexKOFSprites_02Angel },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_D[] =
{
    { _T("Angel D"), 0x009c162, 0x009c182, indexKOFSprites_02Angel },
    { _T("D - Hidden Super Desperation Move 1"), 0x009c182, 0x009c1a2, indexKOFSprites_02Angel },
    { _T("D - Desperation Move / Super Desperation Move"), 0x009c1a2, 0x009c1c2, indexKOFSprites_02Angel },
    { _T("D - Electric Shock Effect"), 0x009c1c2, 0x009c1e2, indexKOFSprites_02Angel },
    { _T("D - Max Flash"), 0x009c1e2, 0x009c202, indexKOFSprites_02Angel },
    { _T("D - Hidden Super Desperation Move 2"), 0x009c202, 0x009c222, indexKOFSprites_02Angel },
    { _T("D - Soul Palette"), 0x009c222, 0x009c242, indexKOFSprites_02Angel },
    { _T("D - Hidden Super Desperation Move 3"), 0x009c242, 0x009c262, indexKOFSprites_02Angel },
};

const sDescTreeNode KOF02_A_ANGEL_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_A, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_B, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_C, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_D, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_A[] =
{
    { _T("Omega Rugal A"), 0x009c362, 0x009c382, indexKOFSprites_98Rugal },
    { _T("A - Hidden Super Desperation Move 1"), 0x009c382, 0x009c3a2, indexKOFSprites_98Rugal },
    { _T("A - Desperation Move / Super Desperation Move"), 0x009c3a2, 0x009c3c2, indexKOFSprites_98Rugal },
    { _T("A - Electric Shock Effect"), 0x009c3c2, 0x009c3e2, indexKOFSprites_98Rugal },
    { _T("A - Max Flash"), 0x009c3e2, 0x009c402, indexKOFSprites_98Rugal },
    { _T("A - Hidden Super Desperation Move 2"), 0x009c402, 0x009c422, indexKOFSprites_98Rugal },
    { _T("A - Soul Palette"), 0x009c422, 0x009c442, indexKOFSprites_98Rugal },
    { _T("A - Hidden Super Desperation Move 3"), 0x009c442, 0x009c462, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_B[] =
{
    { _T("Omega Rugal B"), 0x009c562, 0x009c582, indexKOFSprites_98Rugal },
    { _T("B - Hidden Super Desperation Move 1"), 0x009c582, 0x009c5a2, indexKOFSprites_98Rugal },
    { _T("B - Desperation Move / Super Desperation Move"), 0x009c5a2, 0x009c5c2, indexKOFSprites_98Rugal },
    { _T("B - Electric Shock Effect"), 0x009c5c2, 0x009c5e2, indexKOFSprites_98Rugal },
    { _T("B - Max Flash"), 0x009c5e2, 0x009c602, indexKOFSprites_98Rugal },
    { _T("B - Hidden Super Desperation Move 2"), 0x009c602, 0x009c622, indexKOFSprites_98Rugal },
    { _T("B - Soul Palette"), 0x009c622, 0x009c642, indexKOFSprites_98Rugal },
    { _T("B - Hidden Super Desperation Move 3"), 0x009c642, 0x009c662, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_C[] =
{
    { _T("Omega Rugal C"), 0x009c762, 0x009c782, indexKOFSprites_98Rugal },
    { _T("C - Hidden Super Desperation Move 1"), 0x009c782, 0x009c7a2, indexKOFSprites_98Rugal },
    { _T("C - Desperation Move / Super Desperation Move"), 0x009c7a2, 0x009c7c2, indexKOFSprites_98Rugal },
    { _T("C - Electric Shock Effect"), 0x009c7c2, 0x009c7e2, indexKOFSprites_98Rugal },
    { _T("C - Max Flash"), 0x009c7e2, 0x009c802, indexKOFSprites_98Rugal },
    { _T("C - Hidden Super Desperation Move 2"), 0x009c802, 0x009c822, indexKOFSprites_98Rugal },
    { _T("C - Soul Palette"), 0x009c822, 0x009c842, indexKOFSprites_98Rugal },
    { _T("C - Hidden Super Desperation Move 3"), 0x009c842, 0x009c862, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_D[] =
{
    { _T("Omega Rugal D"), 0x009c962, 0x009c982, indexKOFSprites_98Rugal },
    { _T("D - Hidden Super Desperation Move 1"), 0x009c982, 0x009c9a2, indexKOFSprites_98Rugal },
    { _T("D - Desperation Move / Super Desperation Move"), 0x009c9a2, 0x009c9c2, indexKOFSprites_98Rugal },
    { _T("D - Electric Shock Effect"), 0x009c9c2, 0x009c9e2, indexKOFSprites_98Rugal },
    { _T("D - Max Flash"), 0x009c9e2, 0x009ca02, indexKOFSprites_98Rugal },
    { _T("D - Hidden Super Desperation Move 2"), 0x009ca02, 0x009ca22, indexKOFSprites_98Rugal },
    { _T("D - Soul Palette"), 0x009ca22, 0x009ca42, indexKOFSprites_98Rugal },
    { _T("D - Hidden Super Desperation Move 3"), 0x009ca42, 0x009ca62, indexKOFSprites_98Rugal },
};

const sDescTreeNode KOF02_A_OMEGARUGAL_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_A, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_B, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_C, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_D, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_A[] =
{
    { _T("Kusanagi A"), 0x009cb62, 0x009cb82, indexKOFSprites_02Kusanagi },
    { _T("A - Hidden Super Desperation Move 1"), 0x009cb82, 0x009cba2, indexKOFSprites_02Kusanagi },
    { _T("A - Desperation Move / Super Desperation Move"), 0x009cba2, 0x009cbc2, indexKOFSprites_02Kusanagi },
    { _T("A - Electric Shock Effect"), 0x009cbc2, 0x009cbe2, indexKOFSprites_02Kusanagi },
    { _T("A - Max Flash"), 0x009cbe2, 0x009cc02, indexKOFSprites_02Kusanagi },
    { _T("A - Hidden Super Desperation Move 2"), 0x009cc02, 0x009cc22, indexKOFSprites_02Kusanagi },
    { _T("A - Soul Palette"), 0x009cc22, 0x009cc42, indexKOFSprites_02Kusanagi },
    { _T("A - Hidden Super Desperation Move 3"), 0x009cc42, 0x009cc62, indexKOFSprites_02Kusanagi },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_B[] =
{
    { _T("Kusanagi B"), 0x009cd62, 0x009cd82, indexKOFSprites_02Kusanagi },
    { _T("B - Hidden Super Desperation Move 1"), 0x009cd82, 0x009cda2, indexKOFSprites_02Kusanagi },
    { _T("B - Desperation Move / Super Desperation Move"), 0x009cda2, 0x009cdc2, indexKOFSprites_02Kusanagi },
    { _T("B - Electric Shock Effect"), 0x009cdc2, 0x009cde2, indexKOFSprites_02Kusanagi },
    { _T("B - Max Flash"), 0x009cde2, 0x009ce02, indexKOFSprites_02Kusanagi },
    { _T("B - Hidden Super Desperation Move 2"), 0x009ce02, 0x009ce22, indexKOFSprites_02Kusanagi },
    { _T("B - Soul Palette"), 0x009ce22, 0x009ce42, indexKOFSprites_02Kusanagi },
    { _T("B - Hidden Super Desperation Move 3"), 0x009ce42, 0x009ce62, indexKOFSprites_02Kusanagi },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_C[] =
{
    { _T("Kusanagi C"), 0x009cf62, 0x009cf82, indexKOFSprites_02Kusanagi },
    { _T("C - Hidden Super Desperation Move 1"), 0x009cf82, 0x009cfa2, indexKOFSprites_02Kusanagi },
    { _T("C - Desperation Move / Super Desperation Move"), 0x009cfa2, 0x009cfc2, indexKOFSprites_02Kusanagi },
    { _T("C - Electric Shock Effect"), 0x009cfc2, 0x009cfe2, indexKOFSprites_02Kusanagi },
    { _T("C - Max Flash"), 0x009cfe2, 0x009d002, indexKOFSprites_02Kusanagi },
    { _T("C - Hidden Super Desperation Move 2"), 0x009d002, 0x009d022, indexKOFSprites_02Kusanagi },
    { _T("C - Soul Palette"), 0x009d022, 0x009d042, indexKOFSprites_02Kusanagi },
    { _T("C - Hidden Super Desperation Move 3"), 0x009d042, 0x009d062, indexKOFSprites_02Kusanagi },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_D[] =
{
    { _T("Kusanagi D"), 0x009d162, 0x009d182, indexKOFSprites_02Kusanagi },
    { _T("D - Hidden Super Desperation Move 1"), 0x009d182, 0x009d1a2, indexKOFSprites_02Kusanagi },
    { _T("D - Desperation Move / Super Desperation Move"), 0x009d1a2, 0x009d1c2, indexKOFSprites_02Kusanagi },
    { _T("D - Electric Shock Effect"), 0x009d1c2, 0x009d1e2, indexKOFSprites_02Kusanagi },
    { _T("D - Max Flash"), 0x009d1e2, 0x009d202, indexKOFSprites_02Kusanagi },
    { _T("D - Hidden Super Desperation Move 2"), 0x009d202, 0x009d222, indexKOFSprites_02Kusanagi },
    { _T("D - Soul Palette"), 0x009d222, 0x009d242, indexKOFSprites_02Kusanagi },
    { _T("D - Hidden Super Desperation Move 3"), 0x009d242, 0x009d262, indexKOFSprites_02Kusanagi },
};

const sDescTreeNode KOF02_A_KUSANAGI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_A, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_B, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_C, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_D, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_A[] =
{
    { _T("O.Yashiro A"), 0x009d362, 0x009d382, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 1"), 0x009d382, 0x009d3a2, indexKOFSprites_98Yashiro },
    { _T("A - Desperation Move / Super Desperation Move"), 0x009d3a2, 0x009d3c2, indexKOFSprites_98Yashiro },
    { _T("A - Electric Shock Effect"), 0x009d3c2, 0x009d3e2, indexKOFSprites_98Yashiro },
    { _T("A - Max Flash"), 0x009d3e2, 0x009d402, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 2"), 0x009d402, 0x009d422, indexKOFSprites_98Yashiro },
    { _T("A - Soul Palette"), 0x009d422, 0x009d442, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 3"), 0x009d442, 0x009d462, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_B[] =
{
    { _T("O.Yashiro B"), 0x009d562, 0x009d582, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 1"), 0x009d582, 0x009d5a2, indexKOFSprites_98Yashiro },
    { _T("B - Desperation Move / Super Desperation Move"), 0x009d5a2, 0x009d5c2, indexKOFSprites_98Yashiro },
    { _T("B - Electric Shock Effect"), 0x009d5c2, 0x009d5e2, indexKOFSprites_98Yashiro },
    { _T("B - Max Flash"), 0x009d5e2, 0x009d602, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 2"), 0x009d602, 0x009d622, indexKOFSprites_98Yashiro },
    { _T("B - Soul Palette"), 0x009d622, 0x009d642, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 3"), 0x009d642, 0x009d662, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_C[] =
{
    { _T("O.Yashiro C"), 0x009d762, 0x009d782, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 1"), 0x009d782, 0x009d7a2, indexKOFSprites_98Yashiro },
    { _T("C - Desperation Move / Super Desperation Move"), 0x009d7a2, 0x009d7c2, indexKOFSprites_98Yashiro },
    { _T("C - Electric Shock Effect"), 0x009d7c2, 0x009d7e2, indexKOFSprites_98Yashiro },
    { _T("C - Max Flash"), 0x009d7e2, 0x009d802, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 2"), 0x009d802, 0x009d822, indexKOFSprites_98Yashiro },
    { _T("C - Soul Palette"), 0x009d822, 0x009d842, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 3"), 0x009d842, 0x009d862, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_D[] =
{
    { _T("O.Yashiro D"), 0x009d962, 0x009d982, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 1"), 0x009d982, 0x009d9a2, indexKOFSprites_98Yashiro },
    { _T("D - Desperation Move / Super Desperation Move"), 0x009d9a2, 0x009d9c2, indexKOFSprites_98Yashiro },
    { _T("D - Electric Shock Effect"), 0x009d9c2, 0x009d9e2, indexKOFSprites_98Yashiro },
    { _T("D - Max Flash"), 0x009d9e2, 0x009da02, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 2"), 0x009da02, 0x009da22, indexKOFSprites_98Yashiro },
    { _T("D - Soul Palette"), 0x009da22, 0x009da42, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 3"), 0x009da42, 0x009da62, indexKOFSprites_98Yashiro },
};

const sDescTreeNode KOF02_A_OYASHIRO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_A, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_B, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_C, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_D, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_A[] =
{
    { _T("O.Shermie A"), 0x009db62, 0x009db82, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 1"), 0x009db82, 0x009dba2, indexKOFSprites_98Shermie },
    { _T("A - Desperation Move / Super Desperation Move"), 0x009dba2, 0x009dbc2, indexKOFSprites_98Shermie },
    { _T("A - Electric Shock Effect"), 0x009dbc2, 0x009dbe2, indexKOFSprites_98Shermie },
    { _T("A - Max Flash"), 0x009dbe2, 0x009dc02, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 2"), 0x009dc02, 0x009dc22, indexKOFSprites_98Shermie },
    { _T("A - Soul Palette"), 0x009dc22, 0x009dc42, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 3"), 0x009dc42, 0x009dc62, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_B[] =
{
    { _T("O.Shermie B"), 0x009dd62, 0x009dd82, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 1"), 0x009dd82, 0x009dda2, indexKOFSprites_98Shermie },
    { _T("B - Desperation Move / Super Desperation Move"), 0x009dda2, 0x009ddc2, indexKOFSprites_98Shermie },
    { _T("B - Electric Shock Effect"), 0x009ddc2, 0x009dde2, indexKOFSprites_98Shermie },
    { _T("B - Max Flash"), 0x009dde2, 0x009de02, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 2"), 0x009de02, 0x009de22, indexKOFSprites_98Shermie },
    { _T("B - Soul Palette"), 0x009de22, 0x009de42, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 3"), 0x009de42, 0x009de62, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_C[] =
{
    { _T("O.Shermie C"), 0x009df62, 0x009df82, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 1"), 0x009df82, 0x009dfa2, indexKOFSprites_98Shermie },
    { _T("C - Desperation Move / Super Desperation Move"), 0x009dfa2, 0x009dfc2, indexKOFSprites_98Shermie },
    { _T("C - Electric Shock Effect"), 0x009dfc2, 0x009dfe2, indexKOFSprites_98Shermie },
    { _T("C - Max Flash"), 0x009dfe2, 0x009e002, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 2"), 0x009e002, 0x009e022, indexKOFSprites_98Shermie },
    { _T("C - Soul Palette"), 0x009e022, 0x009e042, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 3"), 0x009e042, 0x009e062, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_D[] =
{
    { _T("O.Shermie D"), 0x009e162, 0x009e182, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 1"), 0x009e182, 0x009e1a2, indexKOFSprites_98Shermie },
    { _T("D - Desperation Move / Super Desperation Move"), 0x009e1a2, 0x009e1c2, indexKOFSprites_98Shermie },
    { _T("D - Electric Shock Effect"), 0x009e1c2, 0x009e1e2, indexKOFSprites_98Shermie },
    { _T("D - Max Flash"), 0x009e1e2, 0x009e202, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 2"), 0x009e202, 0x009e222, indexKOFSprites_98Shermie },
    { _T("D - Soul Palette"), 0x009e222, 0x009e242, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 3"), 0x009e242, 0x009e262, indexKOFSprites_98Shermie },
};

const sDescTreeNode KOF02_A_OSHERMIE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_A, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_B, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_C, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_D, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_D) },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_A[] =
{
    { _T("O.Chris A"), 0x009e362, 0x009e382, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 1"), 0x009e382, 0x009e3a2, indexKOFSprites_98Chris },
    { _T("A - Desperation Move / Super Desperation Move"), 0x009e3a2, 0x009e3c2, indexKOFSprites_98Chris },
    { _T("A - Electric Shock Effect"), 0x009e3c2, 0x009e3e2, indexKOFSprites_98Chris },
    { _T("A - Max Flash"), 0x009e3e2, 0x009e402, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 2"), 0x009e402, 0x009e422, indexKOFSprites_98Chris },
    { _T("A - Soul Palette"), 0x009e422, 0x009e442, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 3"), 0x009e442, 0x009e462, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_B[] =
{
    { _T("O.Chris B"), 0x009e562, 0x009e582, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 1"), 0x009e582, 0x009e5a2, indexKOFSprites_98Chris },
    { _T("B - Desperation Move / Super Desperation Move"), 0x009e5a2, 0x009e5c2, indexKOFSprites_98Chris },
    { _T("B - Electric Shock Effect"), 0x009e5c2, 0x009e5e2, indexKOFSprites_98Chris },
    { _T("B - Max Flash"), 0x009e5e2, 0x009e602, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 2"), 0x009e602, 0x009e622, indexKOFSprites_98Chris },
    { _T("B - Soul Palette"), 0x009e622, 0x009e642, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 3"), 0x009e642, 0x009e662, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_C[] =
{
    { _T("O.Chris C"), 0x009e762, 0x009e782, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 1"), 0x009e782, 0x009e7a2, indexKOFSprites_98Chris },
    { _T("C - Desperation Move / Super Desperation Move"), 0x009e7a2, 0x009e7c2, indexKOFSprites_98Chris },
    { _T("C - Electric Shock Effect"), 0x009e7c2, 0x009e7e2, indexKOFSprites_98Chris },
    { _T("C - Max Flash"), 0x009e7e2, 0x009e802, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 2"), 0x009e802, 0x009e822, indexKOFSprites_98Chris },
    { _T("C - Soul Palette"), 0x009e822, 0x009e842, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 3"), 0x009e842, 0x009e862, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_D[] =
{
    { _T("O.Chris D"), 0x009e962, 0x009e982, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 1"), 0x009e982, 0x009e9a2, indexKOFSprites_98Chris },
    { _T("D - Desperation Move / Super Desperation Move"), 0x009e9a2, 0x009e9c2, indexKOFSprites_98Chris },
    { _T("D - Electric Shock Effect"), 0x009e9c2, 0x009e9e2, indexKOFSprites_98Chris },
    { _T("D - Max Flash"), 0x009e9e2, 0x009ea02, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 2"), 0x009ea02, 0x009ea22, indexKOFSprites_98Chris },
    { _T("D - Soul Palette"), 0x009ea22, 0x009ea42, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 3"), 0x009ea42, 0x009ea62, indexKOFSprites_98Chris },
};

const sDescTreeNode KOF02_A_OCHRIS_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_A, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_B, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_C, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_D, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_D) },
};

const UINT8 KOF02_A_UNITSORT[KOF02_A_NUMUNIT + 1] // Plus 1 for extras
{
    indexKOF02_A_Andy,
    indexKOF02_A_Angel,
    indexKOF02_A_Athena,
    indexKOF02_A_Benimaru,
    indexKOF02_A_Billy,
    indexKOF02_A_BlueMary,
    indexKOF02_A_Chang,
    indexKOF02_A_Chin,
    indexKOF02_A_Choi,
    indexKOF02_A_Chris,
    indexKOF02_A_Clark,
    indexKOF02_A_Daimon,
    indexKOF02_A_Iori,
    indexKOF02_A_Joe,
    indexKOF02_A_K,
    indexKOF02_A_K9999,
    indexKOF02_A_Kensou,
    indexKOF02_A_Kim,
    indexKOF02_A_Kula,
    indexKOF02_A_Kusanagi,
    indexKOF02_A_Kyo,
    indexKOF02_A_Leona,
    indexKOF02_A_Mai,
    indexKOF02_A_Mature,
    indexKOF02_A_Maxima,
    indexKOF02_A_MayLee,
    indexKOF02_A_Ralf,
    indexKOF02_A_Ramon,
    indexKOF02_A_Robert,
    indexKOF02_A_Ryo,
    indexKOF02_A_Seth,
    indexKOF02_A_Shermie,
    indexKOF02_A_Takuma,
    indexKOF02_A_Terry,
    indexKOF02_A_Vanessa,
    indexKOF02_A_Vice,
    indexKOF02_A_Whip,
    indexKOF02_A_Yamazaki,
    indexKOF02_A_Yashiro,
    indexKOF02_A_Yuri,

    indexKOF02_A_OChris,
    indexKOF02_A_OShermie,
    indexKOF02_A_OYashiro,
    indexKOF02_A_OmegaRugal,

    KOF02_A_EXTRALOC
};

const sDescTreeNode KOF02_A_UNITS[KOF02_A_NUMUNIT] =
{
    { _T("Andy"), DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_COLLECTION, ARRAYSIZE(KOF02_A_ANDY_COLLECTION) },
    { _T("Angel"), DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_COLLECTION, ARRAYSIZE(KOF02_A_ANGEL_COLLECTION) },
    { _T("Athena"), DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_COLLECTION, ARRAYSIZE(KOF02_A_ATHENA_COLLECTION) },
    { _T("Benimaru"), DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF02_A_BENIMARU_COLLECTION) },
    { _T("Billy"), DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_COLLECTION, ARRAYSIZE(KOF02_A_BILLY_COLLECTION) },
    { _T("Blue Mary"), DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_COLLECTION, ARRAYSIZE(KOF02_A_BLUEMARY_COLLECTION) },
    { _T("Chang"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_COLLECTION, ARRAYSIZE(KOF02_A_CHANG_COLLECTION) },
    { _T("Chin"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_COLLECTION, ARRAYSIZE(KOF02_A_CHIN_COLLECTION) },
    { _T("Choi"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_COLLECTION, ARRAYSIZE(KOF02_A_CHOI_COLLECTION) },
    { _T("Chris"), DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_COLLECTION, ARRAYSIZE(KOF02_A_CHRIS_COLLECTION) },
    { _T("Clark"), DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_COLLECTION, ARRAYSIZE(KOF02_A_CLARK_COLLECTION) },
    { _T("Daimon"), DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_COLLECTION, ARRAYSIZE(KOF02_A_DAIMON_COLLECTION) },
    { _T("Iori"), DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_COLLECTION, ARRAYSIZE(KOF02_A_IORI_COLLECTION) },
    { _T("Joe"), DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_COLLECTION, ARRAYSIZE(KOF02_A_JOE_COLLECTION) },
    { _T("K’"), DESC_NODETYPE_TREE, (void*)KOF02_A_K_COLLECTION, ARRAYSIZE(KOF02_A_K_COLLECTION) },
    { _T("K9999"), DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_COLLECTION, ARRAYSIZE(KOF02_A_K9999_COLLECTION) },
    { _T("Kensou"), DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_COLLECTION, ARRAYSIZE(KOF02_A_KENSOU_COLLECTION) },
    { _T("Kim"), DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_COLLECTION, ARRAYSIZE(KOF02_A_KIM_COLLECTION) },
    { _T("Kula"), DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_COLLECTION, ARRAYSIZE(KOF02_A_KULA_COLLECTION) },
    { _T("Kusanagi"), DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_COLLECTION, ARRAYSIZE(KOF02_A_KUSANAGI_COLLECTION) },
    { _T("Kyo"), DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_COLLECTION, ARRAYSIZE(KOF02_A_KYO_COLLECTION) },
    { _T("Leona"), DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_COLLECTION, ARRAYSIZE(KOF02_A_LEONA_COLLECTION) },
    { _T("Mai"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_COLLECTION, ARRAYSIZE(KOF02_A_MAI_COLLECTION) },
    { _T("Mature"), DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_COLLECTION, ARRAYSIZE(KOF02_A_MATURE_COLLECTION) },
    { _T("Maxima"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_COLLECTION, ARRAYSIZE(KOF02_A_MAXIMA_COLLECTION) },
    { _T("May Lee"), DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_COLLECTION, ARRAYSIZE(KOF02_A_MAYLEE_COLLECTION) },
    { _T("Ralf"), DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_COLLECTION, ARRAYSIZE(KOF02_A_RALF_COLLECTION) },
    { _T("Ramon"), DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_COLLECTION, ARRAYSIZE(KOF02_A_RAMON_COLLECTION) },
    { _T("Robert"), DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_COLLECTION, ARRAYSIZE(KOF02_A_ROBERT_COLLECTION) },
    { _T("Ryo"), DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_COLLECTION, ARRAYSIZE(KOF02_A_RYO_COLLECTION) },
    { _T("Seth"), DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_COLLECTION, ARRAYSIZE(KOF02_A_SETH_COLLECTION) },
    { _T("Shermie"), DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_COLLECTION, ARRAYSIZE(KOF02_A_SHERMIE_COLLECTION) },
    { _T("Takuma"), DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_COLLECTION, ARRAYSIZE(KOF02_A_TAKUMA_COLLECTION) },
    { _T("Terry"), DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_COLLECTION, ARRAYSIZE(KOF02_A_TERRY_COLLECTION) },
    { _T("Vanessa"), DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_COLLECTION, ARRAYSIZE(KOF02_A_VANESSA_COLLECTION) },
    { _T("Vice"), DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_COLLECTION, ARRAYSIZE(KOF02_A_VICE_COLLECTION) },
    { _T("Whip"), DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_COLLECTION, ARRAYSIZE(KOF02_A_WHIP_COLLECTION) },
    { _T("Yamazaki"), DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_COLLECTION, ARRAYSIZE(KOF02_A_YAMAZAKI_COLLECTION) },
    { _T("Yashiro"), DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_COLLECTION, ARRAYSIZE(KOF02_A_YASHIRO_COLLECTION) },
    { _T("Yuri"), DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_COLLECTION, ARRAYSIZE(KOF02_A_YURI_COLLECTION) },

    { _T("O.Chris"), DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_COLLECTION, ARRAYSIZE(KOF02_A_OCHRIS_COLLECTION) },
    { _T("O.Shermie"), DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_COLLECTION, ARRAYSIZE(KOF02_A_OSHERMIE_COLLECTION) },
    { _T("O.Yashiro"), DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_COLLECTION, ARRAYSIZE(KOF02_A_OYASHIRO_COLLECTION) },

    { _T("Omega Rugal"), DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_COLLECTION, ARRAYSIZE(KOF02_A_OMEGARUGAL_COLLECTION) },
};

// We extend this array with data groveled from the GarouE.txt extensible extras file, if any.
const stExtraDef KOF02_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
