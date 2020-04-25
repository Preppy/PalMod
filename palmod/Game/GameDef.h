#pragma once

//A = Arcade
//X = XBox
//D = Dreamcast
//P = Playstation 2

//Game Definitions

constexpr auto MVC2_D = 0;
constexpr auto SFIII3_A = 1;
constexpr auto MVC2_P = 2;
constexpr auto SSF2T_A = 3;
constexpr auto SFA3_A = 4;
constexpr auto XMVSF_A = 5;
constexpr auto MVC_A = 6;
constexpr auto SFIII3_D = 7;
constexpr auto JOJOS_A = 8;
constexpr auto MSH_A = 9;
constexpr auto MSHVSF_A = 10;
constexpr auto NUM_GAMES = 11;

const CHAR g_GameFriendlyName[NUM_GAMES][32] =
{
    "MvC2 (Dreamcast)",
    "SFIII3 (Arcade)",
    "MVC2 (Playstation)",
    "SSF2T (Arcade)",
    "SFA3 (Arcade)",
    "XVSF (Arcade)",
    "MVC (Arcade)",
    "SFIII3 (Dreamcast)",
    "Jojo's",
    "MSH (Arcade)",
    "MSHVSF (Arcade)"
};

constexpr auto MVC2_D_NUMUNIT = 59;
constexpr auto SFIII3_A_NUMUNIT = 20;   

constexpr auto SFA3_A_UNIQUE_IMG_UNITS = 17;
constexpr auto XMVSF_A_UNIQUE_IMG_UNITS = 2; // Apocalypse
constexpr auto MVC_A_UNIQUE_IMG_UNITS = 2;   // Onslaught
constexpr auto MSH_A_UNIQUE_IMG_UNITS = 2;
constexpr auto MSHVSF_A_UNIQUE_IMG_UNITS = 3;

constexpr auto MVC_A_IMGSTART = MVC2_D_NUMUNIT; // MVC2, then MVC1
constexpr auto SFA3_A_IMGSTART = MVC_A_IMGSTART + MVC_A_UNIQUE_IMG_UNITS;  // MVC1, then SFA3
constexpr auto XMVSF_A_IMGSTART = SFA3_A_IMGSTART + SFA3_A_UNIQUE_IMG_UNITS; // SFA3, then XMVSF
constexpr auto MSH_A_IMGSTART = XMVSF_A_IMGSTART + XMVSF_A_UNIQUE_IMG_UNITS; // XMVSF, then MSH
constexpr auto MSHVSF_A_IMGSTART = MSH_A_IMGSTART + MSH_A_UNIQUE_IMG_UNITS;  // MSH, then MSHVSF

//Images
constexpr auto MVC2_D_NUM_IMG_UNITS = 59;
constexpr auto SSF2T_A_NUM_IMG_UNITS = 17;
constexpr auto SFIII3_A_NUM_IMG_UNITS = 20;
constexpr auto SFA3_A_NUM_IMG_UNITS = 28;
constexpr auto XMVSF_A_NUM_IMG_UNITS = 18;
constexpr auto MVC_A_NUM_IMG_UNITS = 31;
constexpr auto MSH_A_NUM_IMG_UNITS = 11;
constexpr auto MSHVSF_A_NUM_IMG_UNITS = 23;

constexpr auto JOJOS_A_NUM_IMG_UNITS = 1;

enum eIMGDat_Sections
{
    IMGDAT_SECTION_JOJOS = 0,
    IMG4,              //Image Game Flag.  Used for MVC2, MVC, SFA3, XMVSF, MSH, MSHVSF 
    IMGDAT_SECTION_3S, //Image Game Flag.  Used for SFIII3.  And Jojo's but -- we have nothing there yet.
    IMGDAT_SECTION_ST  //Image Game Flag.  Used for ST.
};

// IMG4 ranges:
//  * MVC2: 0x3b character units
//  * SFA3: 0x11 character units
//  * XMVSF: 0x1 character unit (Apocalypse)
//  * MvC: 0x1 character unit (Onslaught)

//  * SSF2T: 0x11 character units

// Aggregate count of image units per game flag
const int IMGAMT[4] =
{
    JOJOS_A_NUM_IMG_UNITS,
    MVC2_D_NUM_IMG_UNITS + MVC_A_UNIQUE_IMG_UNITS + SFA3_A_NUM_IMG_UNITS + XMVSF_A_UNIQUE_IMG_UNITS + MSH_A_UNIQUE_IMG_UNITS + MSHVSF_A_UNIQUE_IMG_UNITS,
    SFIII3_A_NUM_IMG_UNITS,
    SSF2T_A_NUM_IMG_UNITS
};

//Display types (used for image out)
enum eDispType
{
    DISP_DEF,
    DISP_ALT
};

//Basic button labels
#define BUTTON6 6
#define BUTTON7 7

// BUGBUG: Those should be legacy.
// In the new world order, these probably should be done via node primary names(?)
const CHAR DEF_BUTTONLABEL_2[2][16] =
{
    "P1", "P2"
};

const CHAR DEF_BUTTONLABEL6[6][16] =
{
    "LP", "MP", "HP", "LK", "MK", "HK"
};

const CHAR DEF_BUTTONLABEL_ISMS[6][16] =
{
    "X-Ism 1", "X-Ism 2", "A-Ism 1", "A-Ism 2", "V-Ism 1", "V-Ism 2"
};

const CHAR DEF_BUTTONLABEL6ALT[6][16] = 
{
    "LP", "LK", "HP", "HK", "A1", "A2"
};

const CHAR DEF_BUTTONLABEL7[7][16] = 
{
    "LP", "MP", "HP", "LK", "MK", "HK", "EX"
};

const CHAR DEF_BUTTONLABEL_ST10[10][16] =
{
    "Jab", "Strong", "Fierce", "Short", "Forward", "RH", "Start", "Hold", "Old 1P", "Old 2P"
};

const CHAR DEF_NOBUTTONS[1][16] =
{
    "Special"
};

struct stExtraDef
{
    UINT16 uUnitN = INVALID_UNIT_VALUE;
    CHAR szDesc[MAX_DESCRIPTION_LENGTH] = "uninit";
    UINT32 uOffset = 0;
    UINT16 cbPaletteSize = 0;
    bool isInvisible = false;
};

struct sGame_PaletteDataset
{
    LPCSTR szPaletteName = "uninit";
    int nPaletteOffset = 0;
    int nPaletteOffsetEnd = 0;
    UINT16 indexImgToUse = INVALID_UNIT_VALUE; // the major character/collection index
    UINT16 indexOffsetToUse = 0x0; // subsprites within that collection
    bool isJoinedPalette = false;
};

const UINT8 MVC2_IMG_UNITS[MVC2_D_NUM_IMG_UNITS] =
{
    0x00, // Ryu
    0x01, // Zangief
    0x02, // Guile
    0x03, // Morrigan
    0x04, // Anakaris
    0x05, // Strider Hiryu
    0x06, // Cyclops
    0x07, // Wolverine
    0x08, // Psylocke
    0x09, // Iceman
    0x0A, // Rogue
    0x0B, // Captain America
    0x0C, // Spider-Man
    0x0D, // Hulk,
    0x0E, // Venom
    0x0F, // Dr. Doom
    0x10, // Tron Bonne
    0x11, // Jill Valentine
    0x12, // Hayato
    0x13, // Ruby Heart
    0x14, // SonSon
    0x15, // Amingo
    0x16, // Marrow
    0x17, // Cable
    0x18, // Abyss (Form 1)
    0x19, // Abyss (Form 2)
    0x1A, // Abyss (Form 3)
    0x1B, // Chun-Li
    0x1C, // Megaman
    0x1D, // Roll
    0x1E, // Gouki
    0x1F, // B.B. Hood
    0x20, // Felicia
    0x21, // Charlie
    0x22, // Sakura
    0x23, // Dan
    0x24, // Cammy
    0x25, // Dhalsim
    0x26, // M.Bison
    0x27, // Ken
    0x28, // Gambit
    0x29, // Juggernaut
    0x2A, // Storm
    0x2B, // Sabretooth
    0x2C, // Magneto
    0x2D, // Shuma-Gorath
    0x2E, // War Machine
    0x2F, // Silver Samurai
    0x30, // Omega Red
    0x31, // Spiral
    0x32, // Colossus
    0x33, // Iron Man
    0x34, // Sentinel
    0x35, // Blackheart
    0x36, // Thanos
    0x37, // Jin
    0x38, // Captain Commando
    0x39, // Bonerine
    0x3A  // Kobun
};

const UINT8 SFIII3_A_IMG_UNITS[SFIII3_A_NUM_IMG_UNITS] =
{
    0x00, // Alex
    0x01, // Ryu
    0x02, // Yun
    0x03, // Dudley
    0x04, // Necro
    0x05, // Hugo
    0x06, // Ibuki
    0x07, // Elena
    0x08, // Oro
    0x09, // Yang
    0x0A, // Ken
    0x0B, // Sean
    0x0C, // Urien
    0x0D, // Gouki
    0x0E, // Shin-Gouki
    0x0F, // Chun-Li
    0x10, // Makoto
    0x11, // Q
    0x12, // Twelve
    0x13  // Remy
};

const UINT8 SFIII3_D_IMG_UNITS[SFIII3_A_NUM_IMG_UNITS - 0x01] =
{
    0x00, // Alex
    0x01, // Ryu
    0x02, // Yun
    0x03, // Dudley
    0x04, // Necro
    0x05, // Hugo
    0x06, // Ibuki
    0x07, // Elena
    0x08, // Oro
    0x09, // Yang
    0x0A, // Ken
    0x0B, // Sean
    0x0C, // Urien
    0x0D, // Gouki
    0x0F, // Chun-Li
    0x10, // Makoto
    0x11, // Q
    0x12, // Twelve
    0x13  // Remy
};

const UINT8 SSF2T_A_IMG_UNITS[SSF2T_A_NUM_IMG_UNITS] =
{
    0x00, // Ryu
    0x01, // E-Honda
    0x02, // Blanka
    0x03, // Guile
    0x04, // Ken
    0x05, // Chun-Li
    0x06, // Zangief
    0x07, // Dhalsim
    0x08, // M.Bison
    0x09, // Sagat
    0x0A, // Balrog
    0x0B, // Vega
    0x0C, // Cammy
    0x0D, // T-Hawk
    0x0E, // Fei Long
    0x0F, // Dee Jay
    0x10  // Gouki
};

const UINT8 SFA3_A_IMG_UNITS[SFA3_A_NUM_IMG_UNITS] =
{
    // MVC2 Assets
    0x00, // Ryu
    0x01, // Zangief
    0x1B, // Chun-Li
    0x1E, // Gouki
    0x21, // Charlie
    0x22, // Sakura
    0x23, // Dan
    0x24, // Cammy
    0x25, // Dhalsim
    0x26, // M.Bison
    0x27, // Ken
    // SFA3 Unique
    0x3D, // Adon
    0x3E, // Sodom
    0x3F, // Guy
    0x40, // Birdie
    0x41, // Rose
    0x42, // Sagat
    0x43, // Rolento
    0x44, // Gen
    0x45, // Balrog
    0x46, // E.Honda
    0x47, // Blanka
    0x48, // R.Mika
    0x49, // Cody
    0x4A, // Vega
    0x4B, // Karin
    0x4C, // Juni
    0x4D  // Juli
};

const UINT8 XMVSF_A_IMG_UNITS[XMVSF_A_NUM_IMG_UNITS] =
{
    0x00, // Ryu
    0x01, // Zangief
    0x06, // Cyclops
    0x07, // Wolverine
    0x0A, // Rogue
    0x1B, // Chun-Li
    0x1E, // Gouki
    0x21, // Charlie
    0x24, // Cammy
    0x25, // Dhalsim
    0x26, // M.Bison
    0x27, // Ken
    0x28, // Gambit
    0x29, // Juggernaut
    0x2A, // Storm
    0x2B, // Sabretooth
    0x2C, // Magneto
    0x4D  // Apocalypse
};

const UINT8 MVC_A_IMG_UNITS[MVC_A_NUM_IMG_UNITS] =
{
    // Main Roster
    0x00, // Ryu
    0x01, // Zangief
    0x03, // Morrigan
    0x05, // Strider Hiryu
    0x07, // Wolverine
    0x0B, // Captain America
    0x0C, // Spider-Man
    0x0D, // Hulk,
    0x0E, // Venom
    0x1B, // Chun-Li
    0x1D, // Roll
    0x1C, // Megaman
    0x28, // Gambit
    0x2E, // War Machine
    0x37, // Jin
    0x38, // Captain Commando
    // MvC1 Unique
    0x3B, // Onslaught
    0x3C, // MvC1 Unique Assets
    // Hidden
    0x1E, // Gouki
    0x27, // Ken
    // Assists
    0x06, // Cyclops
    0x08, // Psylocke
    0x09, // Iceman
    0x0A, // Rogue
    0x21, // Charlie
    0x29, // Juggernaut
    0x2A, // Storm
    0x2C, // Magneto
    0x32, // Colossus
    0x34,  // Sentinel
    0x33, // Iron Man
};

const UINT8 MSH_A_IMG_UNITS[MSH_A_NUM_IMG_UNITS] =
{
    0x07, // Wolverine
    0x08, // Psylocke
    0x0B, // Captain America
    0x0C, // Spider-Man
    0x0D, // Hulk,
    0x0F, // Dr.Doom
    0x29, // Juggernaut
    0x2C, // Magneto
  //0x2D, // Shuma-Gorath
    0x33, // Iron Man
    0x35, // Blackheart
    0x36  // Thanos
    //indexMSHAnita = 0,
};

const UINT8 MSHVSF_A_IMG_UNITS[MSHVSF_A_NUM_IMG_UNITS] =
{
    0x00, // Ryu
    0x01, // Zangief & Mech Zangief
    0x06, // Cyclops
    0x07, // Wolverine
    0x0B, // Captain America & U.S Agent
    0x0C, // Spider-Man & Armored Spider-Man
    0x0D, // Hulk
    0x1E, // Gouki
    0x1B, // Chun-Li
    0x21, // Shadow
    0x22, // Sakura
    0x22, // Dark Sakura
    0x23, // Dan
    0x25, // Dhalsim
    0x26, // M. Bison
    0x27, // Ken
    0x2D, // Shuma-Gorath
    0x30, // Omega Red
    0x35, // Blackheart
    0x35, // Mephisto
    //0xZZ, // Apocalypse
    //0xZZ, // Cyber Gouki
    //0xZZ, // Norimaro
};

const UINT8 JOJOS_A_IMG_UNITS[JOJOS_A_NUM_IMG_UNITS] =
{
    0x03, // Pol
};

