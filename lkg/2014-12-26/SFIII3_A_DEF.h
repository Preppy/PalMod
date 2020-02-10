#pragma once

#define SFIII3_A_NUMUNIT 0x14
#define SFIII3_A_PALSZ 64

#define SFIII3_A_EXTRALOC SFIII3_A_NUMUNIT

struct stExtraDef
{
	UINT8 uUnitN;
	CHAR szDesc[32];
	UINT32 uOffset;
	UINT16 uPalSz;
	UINT8 bInvisible;

	UINT16 uReserved;
	UINT8 uReserved2;
};

const char SFIII3_A_UNITDESC[SFIII3_A_NUMUNIT][16] = 
{
	//"Gill",		//0x
	"Alex",			//0x00 
	"Ryu",			//0x01
	"Yun",			//0x02
	"Dudley",		//0x03
	"Necro",		//0x04
	"Hugo",			//0x05
	"Ibuki",		//0x06
	"Elena",		//0x07
	"Oro",			//0x08
	"Yang",			//0x09
	"Ken",			//0x0A
	"Sean",			//0x0B
	"Urien",		//0x0C
	"Gouki",		//0x0D
	"Shin-Gouki",	//0x0E
	"Chun-Li",		//0x0F
	"Makoto",		//0x10
	"Q",			//0x11
	"Twelve",		//0x12
	"Remy"			//0x13
};

const UINT8 SFIII3_A_UNITSORT[SFIII3_A_NUMUNIT + 1] = //Plus 1 for the extra palettes
{
	0x00, 
	0x0F, 
	0x03, 
	0x07, 
	0x0D, 
	0x05, 
	0x06, 
	0x0A, 
	0x10, 
	0x04, 
	0x08, 
	0x11, 
	0x13, 
	0x01, 
	0x0B, 
	0x0E, 
	0x12, 
	0x0C, 
	0x09, 
	0x02,

	SFIII3_A_EXTRALOC //Extra palettes

};

const stExtraDef SFIII3_A_EXTRA[] = 
{
	//Start

	{ 0x80 },

	//Ken
	{ 0x0A, "Hadouken", 0x00706400, 30 * 2, 1},
	{ 0x0A, "Shoryuken Flames", 0x00706560, 16 * 2},

	//Oro
	{ 0x08, "Tengu Stones", 0x00763100, 0x80},
	{ 0x08, "Bricks", 0x00763180, 0x20, 1},

	//Urien
	{ 0x0C, "Intro", 0x00706600, 0x80 },
	{ 0x0C, "Morph", 0x00706680, 0x80, 1 },

	//{ SFIII3_A_EXTRALOC, "Check", 0x00706580, 0x80 },
	
	//{ SFIII3_A_EXTRALOC, "Check Tengu", 0x00763180, 0x80 },

	//{ SFIII3_A_EXTRALOC, "Elena's Stage", 0x740B80, 0x2E00 },

	//Extra

	{ 0xFF }
};

//
//const stExtraDef SFIII3_A_EXTRA[] = 
//{
//	//Start
//
//	{ 0x80 },
//
//	
//
//	//Extra
//
//	/*
//
//	{ SFIII3_A_EXTRALOC, "Check Tengu", 0x00763000, 0x80 },
//	{ SFIII3_A_EXTRALOC, "Check Tengu", 0x00763080, 0x80 },
//	{ SFIII3_A_EXTRALOC, "Check Tengu", 0x00763100, 0x80 },
//	{ SFIII3_A_EXTRALOC, "Check Tengu", 0x00763180, 0x80 },
//
//	*/
//
//	//End
//
//	{ 0xFF }
//};

