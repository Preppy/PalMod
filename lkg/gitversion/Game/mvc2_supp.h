#pragma once
#include "Game_MVC2_D.h"

#define SUPP_START			0xF000
#define SUPP_END			0xFFFF

#define SUPP_NODE			0x4000
#define SUPP_NODE_EX		0x4001
#define SUPP_NODE_ABSOL		0x4002
#define SUPP_NODE_NOCOPY	0x4004


#define MOD_COPY			0xA010
#define MOD_TINT			0xA030
	#define TINT_R				0xA031
	#define TINT_G				0xA032
	#define TINT_B				0xA033

#define MOD_LUM				0xA040
#define MOD_SAT				0xA041
#define MOD_WHITE			0xA042

#define ID_MOD			47 //Index mod
#define NEG			0x8000
#define MOD_ABS		0x8000

const UINT16 _mvc2_supp_const [] =
{
	//Special copy:
	//Cyclops
	//Chun-Li
	0,

	0x01 |  SUPP_START, //Zangief
		//Node, Start, Increment	//, Copy
		SUPP_NODE, 0x17, 3,
			//Type, Pal Index Start, Pal Index Amt
			MOD_TINT, 1, 15,
		SUPP_NODE, 0x18, 3,
			MOD_TINT, 1, 15,  
		SUPP_NODE, 0x19, 3,
			MOD_TINT, 1, 15,
		SUPP_NODE, 0x29, 3,
			MOD_TINT, 1, 15,
		SUPP_NODE, 0x2A, 3,
			MOD_TINT, 1, 15,
		SUPP_NODE, 0x2B, 3,
			MOD_TINT, 1, 15,

	0x03 | SUPP_START, //Morrigan
		//SUPP_NODE_ABSOL, Dest Start, Dest Inc, Src Start, Src Inc
		SUPP_NODE_ABSOL,  0x4B, 9, MOD_ABS | 0x01, 8, 
		SUPP_NODE_ABSOL,  0x4C, 9, MOD_ABS | 0x01, 8, 
			MOD_WHITE, 1, 1,
		SUPP_NODE, 0x4D, 9,
		SUPP_NODE, 0x4E, 9,
			MOD_WHITE, 1, 1,
		SUPP_NODE, 0x50, 9,
			MOD_LUM, 1, 15, 20,
		SUPP_NODE, 0x51, 9,
			MOD_LUM, 1, 15, 13,
		SUPP_NODE, 0x52, 9,
			MOD_LUM, 1, 15, 7,
		SUPP_NODE, 0x53, 9,
		//	MOD_LUM, 0, 16, 0
		SUPP_NODE, 0x84, 1,

	0x04 | SUPP_START, //Anakaris
		SUPP_NODE, 0x02 | MOD_ABS, 8,
			MOD_LUM, 1, 15, NEG + 6,
		SUPP_NODE, 0x04 | MOD_ABS, 8,

	0x06 | SUPP_START, //Cyclops
		//SUPP_NODE_ABSOL | SUPP_NODE_EX, Dest Start, Dest Inc, Src Pal Start, Src Pal Inc, Src Index Start, Src Index Amt, Dst Index

		SUPP_NODE_EX, 1 | MOD_ABS, 8, 1, 5, 9,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 1 | MOD_ABS, 8, 1 | MOD_ABS, 8, 13, 1, 14,
			MOD_LUM, 14, 1, NEG + 5,
		SUPP_NODE_EX, 1 | MOD_ABS, 8, 6, 5, 3,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 1 | MOD_ABS, 8, 1 | MOD_ABS, 8, 3, 1, 2,
			MOD_LUM, 3, 1, 5,
			MOD_LUM, 2, 1, 12,
			MOD_LUM, 1, 1, 17,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 1 | MOD_ABS, 8, 1 | MOD_ABS, 8, 2, 1, 1,
			MOD_LUM, 1, 1, 9,

		SUPP_NODE, 0x29, 8,
			MOD_LUM, 1, 15, NEG + 3,
		SUPP_NODE, 0x2A, 8,
			MOD_LUM, 1, 15, NEG + 7,
		SUPP_NODE, 0x2B, 8,
			MOD_LUM, 1, 15, NEG + 11,
		SUPP_NODE, 0x2C, 8,
			MOD_LUM, 1, 15, NEG + 17,
		SUPP_NODE, 0x2D, 8,
			MOD_LUM, 1, 15, NEG + 24,
		SUPP_NODE, 0x2E, 8,
			MOD_LUM, 1, 15, NEG + 30,
		SUPP_NODE, 0x2F, 8,
			MOD_LUM, 1, 15, NEG + 33,
		SUPP_NODE, 0x30, 8,
			MOD_LUM, 1, 15, NEG + 39,
		SUPP_NODE, 0x59, 2,
		SUPP_NODE, 0x5A, 2,
			MOD_TINT, 1, 15,


	0x09 | SUPP_START, //Iceman
		SUPP_NODE, 0x02 | MOD_ABS, 8,
		SUPP_NODE, 0x21, 7,
		SUPP_NODE, 0x23, 7,
			//
			MOD_COPY, 11, 1, 9,
			MOD_COPY, 11, 1, 10,
		SUPP_NODE, 0x24, 7,
			MOD_COPY, 11, 1, 7,
			MOD_COPY, 11, 1, 8,
		SUPP_NODE, 0x25, 7,
			MOD_COPY, 1, 2, 5,
		SUPP_NODE, 0x26, 7,
			MOD_COPY, 11, 1, 3,
			MOD_COPY, 11, 1, 4,
		SUPP_NODE, 0x27, 7,
			MOD_COPY, 11, 1, 1,
			MOD_COPY, 11, 1, 2,

	0x0A | SUPP_START, //Rogue
		SUPP_NODE, 0x04 | MOD_ABS, 8,
			MOD_LUM, 1, 15, NEG + 8,
		SUPP_NODE, 0x05 | MOD_ABS, 8,
			MOD_LUM, 1, 15, NEG + 12,
		SUPP_NODE, 0x11, 2,
			MOD_LUM, 1, 15, NEG + 8,
		SUPP_NODE, 0x12, 2,
			MOD_LUM, 1, 15, NEG + 12,

			/*
	0x0B | SUPP_START, //Captain America
		SUPP_NODE_EX, 1 | MOD_ABS, 8, 1, 3, 1,
		SUPP_NODE_EX, 1 | MOD_ABS, 8, 5, 3, 4,

		SUPP_NODE_EX, 1 | MOD_ABS, 8, 8, 1, 7,
			MOD_LUM, 7, 1, 32,
		SUPP_NODE_EX, 1 | MOD_ABS, 8, 8, 1, 8,
			MOD_LUM, 8, 1, 25,
		SUPP_NODE_EX, 1 | MOD_ABS, 8, 8, 1, 9,
			MOD_LUM, 9, 1, 11,
		SUPP_NODE_EX, 1 | MOD_ABS, 8, 8, 1, 10,
			MOD_LUM, 10, 1, 5,

			*/

	0x0C | SUPP_START, //Spider-Man
		SUPP_NODE, 0x09, 16,
			MOD_LUM, 01, 11, NEG + 29,
			MOD_LUM, 15, 2, NEG + 29,
		SUPP_NODE, 0x0A, 16,
			MOD_LUM, 01, 11, NEG + 23,
			MOD_LUM, 15, 2, NEG + 23,
		SUPP_NODE, 0x0B, 16,
			MOD_LUM, 01, 11, NEG + 17,
			MOD_LUM, 15, 2, NEG + 17,
		SUPP_NODE, 0x0C, 16,
			MOD_LUM, 01, 11, NEG + 12,
			MOD_LUM, 15, 2, NEG + 12,
		SUPP_NODE, 0x0D, 16,
			MOD_LUM, 01, 11, NEG + 8,
			MOD_LUM, 15, 2, NEG + 8,
		SUPP_NODE, 0x0E, 16,
			MOD_LUM, 01, 11, NEG + 7,
			MOD_LUM, 15, 2, NEG + 7,
		SUPP_NODE, 0x0F, 16,
			MOD_LUM, 01, 11, NEG + 5,
			MOD_LUM, 15, 2, NEG + 5,
		SUPP_NODE, 0x10, 16,
			MOD_LUM, 01, 11, NEG + 3,
			MOD_LUM, 15, 2, NEG + 3,

	0x0F | SUPP_START, //Dr. Doom
		SUPP_NODE, 0x09, 28,

	0x14 | SUPP_START, // Sonson
		//SUPP_NODE_ABSOL, Dest Start, Dest Inc, Src Start, Src Inc
		SUPP_NODE,  0x0F, 1,
		SUPP_NODE_ABSOL,  0x17, 1, 0x0F, 1,
			MOD_LUM, 1, 15, 10,
		SUPP_NODE_ABSOL,  0x1D, 1, 0x0F, 1,
			MOD_LUM, 1, 15, 5,
		SUPP_NODE_ABSOL,  0x1E, 1, 0x0F, 1,
			MOD_LUM, 1, 15, NEG + 12,

	0x1B | SUPP_START, //Chun-Li
		SUPP_NODE_EX, 1 | MOD_ABS, 8, 1, 5, 6,
		SUPP_NODE_EX, 1 | MOD_ABS, 8, 5, 1, 11,
			MOD_LUM, 11, 1, NEG + 7,
		SUPP_NODE_EX, 1 | MOD_ABS, 8, 1, 4, 12,
			MOD_LUM, 12, 4, 13,

		

	0x1C | SUPP_START, // MegaMan
		SUPP_NODE, 0x0B, 56,
			MOD_LUM, 01, 15, NEG + 21,
		SUPP_NODE, 0x0C, 56,
			MOD_LUM, 01, 15, NEG + 13,
		SUPP_NODE, 0x0D, 56,
			MOD_LUM, 01, 15, NEG + 5,
		SUPP_NODE, 0x0E, 56,
		SUPP_NODE, 0x0F, 56,
			MOD_LUM, 01, 15, 5,
		SUPP_NODE, 0x10, 56,
			MOD_LUM, 01, 15, 13,
		SUPP_NODE, 0x11, 56,
			MOD_LUM, 01, 15, 21,
		SUPP_NODE, 0x12, 56,
			MOD_LUM, 01, 15, 35,
		SUPP_NODE, 0x4C, 56,
			MOD_LUM, 01, 15, NEG + 21,
		SUPP_NODE, 0x4D, 56,
			MOD_LUM, 01, 15, NEG + 13,
		SUPP_NODE, 0x4E, 56,
			MOD_LUM, 01, 15, NEG + 5,
		SUPP_NODE, 0x4F, 56,
		SUPP_NODE, 0x50, 56,
			MOD_LUM, 01, 15, 5,
		SUPP_NODE, 0x51, 56,
			MOD_LUM, 01, 15, 13,
		SUPP_NODE, 0x52, 56,
			MOD_LUM, 01, 15, 21,
		SUPP_NODE, 0x53, 56,
			MOD_LUM, 01, 15, 35,

	0x1D | SUPP_START, // Roll

	0x24 | SUPP_START, //Cammy
		SUPP_NODE, 0x0A, 9,
			MOD_TINT, 1, 15,
		SUPP_NODE, 0x0B, 9,
			MOD_TINT, 1, 15,
		SUPP_NODE, 0x0C, 9,
			MOD_TINT, 1, 15,
		SUPP_NODE, 0x0D, 9,
			MOD_TINT, 1, 15,
		SUPP_NODE, 0x0E, 9,
		SUPP_NODE, 0x0F, 9,
			MOD_TINT, 1, 15,
		SUPP_NODE, 0x10, 9,
			MOD_TINT, 1, 15,

	0x25 | SUPP_START, //Dhalsim
		SUPP_NODE, 0x09, 5,
			MOD_LUM, 01, 15, 15,
		SUPP_NODE, 0x0A, 5,
			MOD_LUM, 01, 15, 27,
		SUPP_NODE, 0x0B, 5,
			MOD_LUM, 01, 15, 42,
		SUPP_NODE, 0x0C, 5,
			MOD_LUM, 01, 15, 65,

	0x28 | SUPP_START, //Gambit
		SUPP_NODE, 0x09, 5,
			MOD_LUM, 01, 15, 10,
		SUPP_NODE, 0x0A, 5,
			MOD_LUM, 01, 15, 5,
		SUPP_NODE, 0x0B, 5,
		SUPP_NODE, 0x0C, 5,
			MOD_LUM, 01, 15, 5 + NEG,
		SUPP_NODE, 0x0D, 5,
			MOD_LUM, 01, 15, 10 + NEG,

	0x29 | SUPP_START, //Juggernaut
		SUPP_NODE, 0x0B, 10,
			MOD_LUM, 01, 15, 6,
		SUPP_NODE, 0x0C, 10,
			MOD_LUM, 01, 15, 12,
		SUPP_NODE, 0x0D, 10,
			MOD_LUM, 01, 15, 15,
		SUPP_NODE, 0x0E, 10,
			MOD_LUM, 01, 15, 18,
		SUPP_NODE, 0x0F, 10,
			MOD_LUM, 01, 15, 12,
		SUPP_NODE, 0x10, 10,
			MOD_LUM, 01, 15, 7,
		SUPP_NODE, 0x11, 10,
			MOD_LUM, 01, 15, 4,
		SUPP_NODE, 0x12, 10,

	0x2A | SUPP_START, //Storm
		SUPP_NODE, 0x19, 3,
		SUPP_NODE, 0x1A, 3,
			MOD_LUM, 01, 15, 7,
		SUPP_NODE, 0x1B, 3,
			MOD_LUM, 01, 15, 17,

	0x2D | SUPP_START, //Shuma Gorath
		SUPP_NODE_EX, 0x01 | MOD_ABS, 8, 1, 8, 1,
		SUPP_NODE_EX, 0x16, 0x60, 9, 3, 9,
		SUPP_NODE, 0x17, 0x60,
			MOD_SAT, 1, 8, 155,
			MOD_LUM, 1, 8, 5,
		SUPP_NODE, 0x18, 0x60,
			MOD_SAT, 1, 8, 55,
			MOD_LUM, 1, 8, 5,
		SUPP_NODE, 0x19, 0x60,
			MOD_SAT, 1, 8, 30,
			MOD_LUM, 1, 8, 5,
		SUPP_NODE, 0x1A, 0x60,

		SUPP_NODE_EX, 0x2F, 0x60, 2, 7, 2,
		SUPP_NODE_EX, 0x2F, 0x60, 9, 3, 9,

		SUPP_NODE_EX, 0x30, 0x60, 2, 7, 2,
		SUPP_NODE_EX, 0x30, 0x60, 9, 3, 9,

		SUPP_NODE_EX, 0x31, 0x60, 2, 7, 2,
		SUPP_NODE_EX, 0x31, 0x60, 9, 3, 9,

		SUPP_NODE_EX, 0x32, 0x60, 2, 7, 2,
		SUPP_NODE_EX, 0x32, 0x60, 9, 3, 9,

		SUPP_NODE_EX, 0x33, 0x60, 2, 7, 2,
		SUPP_NODE_EX, 0x33, 0x60, 9, 3, 9,

		SUPP_NODE_EX, 0x34, 0x60, 2, 7, 2,
		SUPP_NODE_EX, 0x34, 0x60, 9, 3, 9,

		SUPP_NODE_EX, 0x35, 0x60, 2, 7, 2,
		SUPP_NODE_EX, 0x35, 0x60, 9, 3, 9,

		SUPP_NODE_EX, 0x36, 0x60, 1, 11, 1,
			MOD_SAT, 2, 7, NEG + 65,
			MOD_LUM, 2, 7, 17,
			MOD_SAT, 9, 3, NEG + 25,
			MOD_LUM, 9, 3, 10,

		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x38, 0x60, 0x36, 0x60, 1, 15, 1,

		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x38, 0x60, 0x38, 0x60, 6, 1, 7,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x38, 0x60, 0x38, 0x60, 6, 1, 8,
			MOD_LUM, 7, 1, 10,
			MOD_LUM, 8, 1, 15,
			MOD_SAT, 2, 5, NEG + 30,
			MOD_LUM, 9, 3, 10,
			MOD_SAT, 9, 3, NEG + 10,

		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x60, 0x38, 0x60, 2, 7, 2,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x60, 0x3A, 0x60, 7, 1, 2,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x60, 0x3A, 0x60, 7, 1, 5,
			MOD_LUM, 7, 1, 5,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x60, 0x38, 0x60, 10, 1, 10,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x60, 0x38, 0x60, 11, 1, 9,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x60, 0x38, 0x60, 11, 1, 11,

		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x60, 0x38, 0x60, 11, 1, 9,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x60, 0x38, 0x60, 10, 1, 10,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x60, 0x38, 0x60, 9, 1, 11,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x60, 0x38, 0x60, 6, 1, 2,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x60, 0x38, 0x60, 6, 1, 3,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x60, 0x38, 0x60, 5, 1, 4,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x60, 0x38, 0x60, 4, 1, 5,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x60, 0x38, 0x60, 3, 1, 6,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x60, 0x38, 0x60, 2, 1, 7,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x60, 0x38, 0x60, 2, 1, 8,
			MOD_LUM, 3, 2, 4,
			MOD_LUM, 6, 1, 8,

		
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3E, 0x60, 0x3C, 0x60, 2, 7, 2,
			MOD_LUM, 2, 7, 4,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3E, 0x60, 0x3C, 0x60, 9, 2, 9,
			MOD_LUM, 9, 2, 4,


		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x37, 0x60, 0x36, 0x60, 1, 8, 1,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x39, 0x60, 0x38, 0x60, 1, 8, 1,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3B, 0x60, 0x3A, 0x60, 1, 8, 1,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3D, 0x60, 0x3C, 0x60, 1, 8, 1,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3F, 0x60, 0x3E, 0x60, 1, 8, 1,

		SUPP_NODE, 0x40, 0x60,
			MOD_LUM, 1, 15, NEG + 50,
			MOD_LUM, 1, 15, NEG + 10,
			

	0x2F | SUPP_START, //Silver Samurai
		SUPP_NODE, 0x01 | MOD_ABS, 8,
			MOD_LUM, 01, 15, 5 + NEG,
		SUPP_NODE, 0x09, 8,
		SUPP_NODE, 0x0A, 8,
			MOD_LUM, 8, 15, 10 + NEG,
		SUPP_NODE, 0x0B, 8,
			MOD_COPY, 8, 3, 14,
		SUPP_NODE, 0x0C, 8,
			MOD_COPY, 8, 3, 12,
		SUPP_NODE, 0x0D, 8,
			MOD_COPY, 8, 3, 10,
		SUPP_NODE, 0x0E, 8,
		SUPP_NODE, 0x0F, 8,
			MOD_LUM, 01, 15, 5 + NEG,

	0x30 | SUPP_START, //Omega Red
		SUPP_NODE, 0x09, 4,
			MOD_LUM, 01, 15, 25 + NEG,
		SUPP_NODE, 0x0A, 4,
			MOD_LUM, 01, 15, 12 + NEG,
		SUPP_NODE, 0x0B, 4,
			MOD_LUM, 01, 15, 9 + NEG,
		SUPP_NODE, 0x0C, 4,
			MOD_LUM, 01, 15, 5 + NEG,

	0x31 | SUPP_START, //Spiral
		SUPP_NODE, 0x2D, 28,
		SUPP_NODE, 0x2E, 28,
			MOD_SAT, 1, 1, 60,
			MOD_SAT, 6, 10, 60,
		SUPP_NODE, 0x2F, 28,
			MOD_SAT, 2, 4, NEG + 80,
			MOD_LUM, 2, 4, NEG + 8,
		SUPP_NODE, 0x33, 28,
		SUPP_NODE, 0x34, 28,
			MOD_LUM, 1, 15, 5,
		SUPP_NODE, 0x35, 28,
			MOD_LUM, 1, 15, 10,
		SUPP_NODE, 0x36, 28,
			MOD_LUM, 1, 15, 13,
		SUPP_NODE, 0x37, 28,
			MOD_LUM, 1, 15, 23,
		SUPP_NODE, 0x38, 28,
			MOD_LUM, 1, 15, 40,
		SUPP_NODE, 0x3B, 28,
		SUPP_NODE, 0x46, 28,

	0x32 | SUPP_START, // Colossus
		SUPP_NODE, 0x09, 32,
			MOD_LUM, 02, 5, 13 + NEG,
			MOD_LUM, 12, 3, 13 + NEG,
			MOD_WHITE, 7, 1,
		SUPP_NODE, 0x0A, 32,
			MOD_LUM, 02, 5, 5 + NEG,
			MOD_LUM, 12, 3, 5 + NEG,
			MOD_WHITE, 6, 1,
		SUPP_NODE, 0x0B, 32,
			MOD_LUM, 02, 5, 8,
			MOD_LUM, 12, 3, 8,
			MOD_WHITE, 5, 1,
		SUPP_NODE, 0x0C, 32,
			MOD_LUM, 02, 5, 13,
			MOD_LUM, 12, 3, 13,
			MOD_WHITE, 4, 1,
		SUPP_NODE, 0x0D, 32,
			MOD_LUM, 02, 5, 29,
			MOD_LUM, 12, 3, 29,
			MOD_WHITE, 3, 1,
		SUPP_NODE, 0x0E, 32,
			MOD_LUM, 02, 5, 46,
			MOD_LUM, 12, 3, 46,
			MOD_WHITE, 2, 1,
		SUPP_NODE, 0x0F, 32,
		SUPP_NODE, 0x10, 32,
			MOD_WHITE, 2, 6,
		SUPP_NODE, 0x11, 32,
			MOD_COPY, 3, 2, 6,
		SUPP_NODE, 0x12, 32,
			MOD_COPY, 2, 2, 4,
		SUPP_NODE, 0x13, 32,
			MOD_WHITE, 3, 1,
		SUPP_NODE, 0x14, 32,
			MOD_COPY, 4, 1, 7,
		SUPP_NODE, 0x15, 32,
			MOD_COPY, 3, 1, 6,
		SUPP_NODE, 0x16, 32,
			MOD_COPY, 2, 1, 5,
		SUPP_NODE, 0x17, 32,
			MOD_COPY, 2, 1, 4,
		SUPP_NODE, 0x18, 32,
			MOD_LUM, 01, 15, 31,
		SUPP_NODE, 0x19, 32,
			MOD_LUM, 01, 15, 45,
		SUPP_NODE, 0x1B, 32,
			MOD_LUM, 01, 15, NEG + 18,

		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1B, 32, 0x1B, 32, 9, 1, 8,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1B, 32, 0x1B, 32, 3, 1, 2,

		SUPP_NODE, 0x1C, 32,
			MOD_LUM, 01, 15, NEG + 13,

		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1C, 32, 0x1C, 32, 9, 1, 8,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1C, 32, 0x1C, 32, 3, 1, 2,

		SUPP_NODE, 0x1D, 32,
			MOD_LUM, 01, 15, NEG + 6,

		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1D, 32, 0x1D, 32, 9, 1, 8,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1D, 32, 0x1D, 32, 3, 1, 6,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1D, 32, 0x1D, 32, 4, 1, 7,
		SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1D, 32, 0x1D, 32, 3, 1, 2,

		SUPP_NODE, 0x1E, 32,
		SUPP_NODE, 0x1F, 32,
			MOD_LUM, 01, 15, NEG + 5,
		SUPP_NODE, 0x20, 32,
			MOD_LUM, 01, 15, 25,
		SUPP_NODE, 0x21, 32,
		SUPP_NODE, 0x22, 32,
			MOD_LUM, 02, 14, NEG + 5,
			MOD_WHITE, 7, 1,
		SUPP_NODE, 0x23, 32,
			MOD_LUM, 02, 14, NEG + 8,
			MOD_WHITE, 6, 1,
		SUPP_NODE, 0x24, 32,
			MOD_LUM, 02, 14, NEG + 4,
			MOD_WHITE, 5, 1,
		SUPP_NODE, 0x25, 32,
			MOD_WHITE, 4, 1,
		SUPP_NODE, 0x26, 32,
			MOD_LUM, 02, 14, 30,
		SUPP_NODE, 0x27, 32,
			MOD_LUM, 02, 14, 45,
			MOD_LUM, 07, 1, NEG + 7,
			MOD_SAT, 07, 1, 50,
		SUPP_NODE, 0x28, 32,



	0x34 | SUPP_START, //Sentinel
		SUPP_NODE, 0x01 | MOD_ABS, 8,

	0x37 | SUPP_START, //Jin
		SUPP_NODE, 0x2E, 6,
			MOD_LUM, 01, 15, 64,
		SUPP_NODE, 0x2F, 6,
			MOD_LUM, 01, 15, 50,
		SUPP_NODE, 0x30, 6,
			MOD_LUM, 01, 15, 32,
		SUPP_NODE, 0x31, 6,
			MOD_LUM, 01, 15, 21,

		//SUPP_NODE_EX, Dest Start, Dest Inc, Src Start, Src Amt, Dst Index
		SUPP_NODE_EX, 0x51, 3, 6, 10, 6,
			MOD_LUM, 6, 11, 21,
		SUPP_NODE_EX, 0x63, 6, 6, 10, 6,
			MOD_COPY, 8, 3, 10,
		SUPP_NODE_EX, 0x64, 6, 6, 10, 6,
			MOD_COPY, 8, 3, 10,
		SUPP_NODE_EX, 0x65, 6, 6, 10, 6,
			MOD_COPY, 8, 3, 10,
		SUPP_NODE_EX, 0x66, 6, 6, 10, 6,
			MOD_COPY, 8, 3, 10,
		SUPP_NODE_EX, 0x67, 6, 6, 10, 6,
			MOD_COPY, 8, 3, 10,
		SUPP_NODE_EX, 0x68, 6, 6, 10, 6,
			MOD_COPY, 8, 3, 10,
			
	0x3A | SUPP_START, //Kobun
		SUPP_NODE, 0x09, 5, 
		SUPP_NODE, 0x0A, 5,
			MOD_LUM, 01, 15, 23,
		SUPP_NODE, 0x0B, 5,
			MOD_LUM, 01, 15, 32,
		SUPP_NODE, 0x0C, 5,
			MOD_LUM, 01, 15, 40,






  //0x2D | SUPP_START, //Shuma-Gorath
  //0x31 | SUPP_START, //Spiral
		
	
	SUPP_END
};

extern CGame_MVC2_D * CurrMVC2;
extern int rgSuppLoc[MVC2_D_NUMUNIT];

void prep_supp();
void proc_supp(int char_no, int pal_no);
void supp_copy_palette(UINT16 char_id, UINT16 dst_pal, UINT16 src_pal);
void supp_copy_index(UINT16 char_id, UINT16 src_pal, UINT16 dst_pal, UINT8 dst_index, UINT8 src_index, UINT8 index_amt);
void supp_mod_white(UINT16 char_id, UINT16 dst_pal, UINT8 index_start, UINT8 index_inc);
void supp_mod_hsl(UINT16 char_id, UINT16 mod_type, int mod_amt, UINT16 dst_pal, UINT8 index_start, UINT8 index_inc);