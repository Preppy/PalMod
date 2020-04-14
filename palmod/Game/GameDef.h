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
constexpr auto NUM_GAMES = 9;

const CHAR g_GameFriendlyName[NUM_GAMES][16] =
{
    "MvC2_D",
    "SFIII3_A",
    "MVC2_P",
    "SSF2T_A",
    "SFA3_A",
    "XVSF_A",
    "MVC_A",
    "SFIII3_D",
    "JOJOS_A"
};

//Images

#define IMG4 0 //Image Game Flag.  Used for MVC, MVC2, SFA3, SSF2T, XMVSF.
#define IMG5 1 //Image Game Flag.  Used for SFIII3.  And Jojo's but -- we have nothing there yet.

// IMG4 ranges:
//  * MVC2: 0x3b character units
//  * SSF2T: 0x11 character units
//  * SFA3: 0x11 character units
//  * XMVSF: 0x1 character unit (Cyber Akuma)
//  * MvC: 0x1 character unit (Onslaught)

// Aggregate count of image units per game flag
const int IMGAMT[2] =
{
    0x3B + 0x11 + 0x11 + 0x11 + 0x1 + 0x1,
    0x14
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

const CHAR DEF_BUTTONLABEL6[6][3] =
{
    "LP", "MP", "HP", "LK", "MK", "HK"
};

const CHAR DEF_BUTTONLABEL6ALT[6][3] = 
{
    "LP", "LK", "HP", "HK", "A1", "A2"
};

const CHAR DEF_BUTTONLABEL7[7][3] = 
{
    "LP", "MP", "HP", "LK", "MK", "HK", "EX"
};

const CHAR DEF_NOBUTTONS[1][16] =
{
    "Special"
};

#define DESC2 2
#define DESC6 6
//Primary / Secondary descriptions

const CHAR DEF_DESCPRISEC[3][16] = 
{
    "Primary", "Secondary"
};

//Street Fighter Alpha 3 descriptions
const CHAR DEF_DESCSFA3[6][16] = 
{
    "Primary", "Secondary", "Primary", "Secondary", "Primary", "Secondary"
};

struct stExtraDef
{
    UINT16 uUnitN = INVALID_UNIT_VALUE;
    CHAR szDesc[MAX_DESCRIPTION_LENGTH] = "uninit";
    UINT32 uOffset = 0;
    UINT16 cbPaletteSize = 0;
    bool isInvisible = false;
};
