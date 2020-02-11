#pragma once

//A = Arcade
//X = XBox
//D = Dreamcast
//P = Playstation 2

//Game Definitions
#define NUM_GAMES 8



constexpr auto MVC2_D = 0;
constexpr auto SFIII3_A = 1;
constexpr auto MVC2_P = 2;
constexpr auto SSF2T_A = 3;
constexpr auto SFA3_A = 4;
constexpr auto XMVSF_A = 5;
constexpr auto MVC_A = 6;
constexpr auto SFIII3_D = 7;
constexpr auto JOJO_A = 8;

//Images

#define IMG4 0 //Image Game Flag
#define IMG5 1 //Image Game Flag

//Size of image per image game flag
const int IMGAMT[2] =
{
	0x3B + 0x11,
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