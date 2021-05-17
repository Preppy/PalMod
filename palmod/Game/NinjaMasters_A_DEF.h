#pragma once

const UINT16 NINJAMASTERS_A_IMGIDS_USED[] =
{
    indexNinjaMastersSprites_Goemon,        // 0x14
    indexNinjaMastersSprites_Houoh,         // 0x15
    indexNinjaMastersSprites_Kamui,         // 0x16
    indexNinjaMastersSprites_Karasu,        // 0x17
    indexNinjaMastersSprites_Kasumi,        // 0x18
    indexNinjaMastersSprites_Nobunaga,      // 0x19
    indexNinjaMastersSprites_Natsume,       // 0x1a
    indexNinjaMastersSprites_Sasuke,        // 0x1b
    indexNinjaMastersSprites_Raiga,         // 0x1c
    indexNinjaMastersSprites_Ranmaru,       // 0x1d
    indexNinjaMastersSprites_Tenho,         // 0x1e
    indexNinjaMastersSprites_Unzen,         // 0x1f
    indexNinjaMastersSprites_Bonus,         // 0x20
    indexNinjaMastersSprites_Stages,        // 0x21
};

// Sasuke
const sGame_PaletteDataset NINJAMASTERS_A_SASUKE_A[] =
{
    { L"Sasuke A", 0x08166c, 0x08168c, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon A", 0x08172c, 0x08174c, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Hyper Changing A", 0x08168c, 0x0816ac, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon Changing A", 0x08174c, 0x08176c, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Supertrail A", 0x0816ac, 0x0816cc, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x0816cc, 0x0816ec, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Super Combo A", 0x0816ec, 0x08170c, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x08170c, 0x08172c, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Darkness Combo A", 0x0817ec, 0x08180c, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x08180c, 0x08182c, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Desperation Move A", 0x08182c, 0x08184c, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x08184c, 0x08186c, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Burned A", 0x08176c, 0x08178c },
    { L"Blue Burned A", 0x08178c, 0x0817ac },
    { L"Zapped A", 0x0817ac, 0x0817cc },
    { L"Energy Zapped A", 0x0817cc, 0x0817ec },
};

const sGame_PaletteDataset NINJAMASTERS_A_SASUKE_B[] =
{
    { L"Sasuke B", 0x082e90, 0x082eb0, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon B", 0x082f50, 0x082f70, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Hyper Changing B", 0x082eb0, 0x082ed0, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon Changing B", 0x082f70, 0x082f90, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Supertrail B", 0x082ed0, 0x082ef0, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x082ef0, 0x082f10, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Super Combo B", 0x082f10, 0x082f30, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x082f30, 0x082f50, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Darkness Combo B", 0x083010, 0x083030, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x083030, 0x083050, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Desperation Move B", 0x083050, 0x083070, indexNinjaMastersSprites_Sasuke, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x083070, 0x083090, indexNinjaMastersSprites_Sasuke, 0x01 },
    { L"Burned B", 0x082f90, 0x082fb0 },
    { L"Blue Burned B", 0x082fb0, 0x082fd0 },
    { L"Zapped B", 0x082fd0, 0x082ff0 },
    { L"Energy Zapped B", 0x082ff0, 0x083010 },
};

const sGame_PaletteDataset NINJAMASTERS_A_SASUKE_Portrait[] =
{
    { L"Sasuke Portrait A", 0x087bdc, 0x087bfc },
    { L"Sasuke Hud A", 0x087bfc, 0x087c1c },
    { L"Sasuke Portrait B", 0x087c1c, 0x087c3c },
    { L"Sasuke Hud B", 0x087c3c, 0x087c5c },
};

// Kamui
const sGame_PaletteDataset NINJAMASTERS_A_KAMUI_A[] =
{
    { L"Kamui A", 0x08186c, 0x08188c, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon A", 0x08192c, 0x08194c, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Hyper Changing A", 0x08188c, 0x0818ac, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon Changing A", 0x08194c, 0x08196c, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Supertrail A", 0x0818ac, 0x0818cc, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x0818cc, 0x0818ec, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Super Combo A", 0x0818ec, 0x08190c, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x08190c, 0x08192c, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Darkness Combo A", 0x0819ec, 0x081a0c, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x081a0c, 0x081a2c, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Desperation Move A", 0x081a2c, 0x081a4c, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x081a4c, 0x081a6c, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Burned A", 0x08196c, 0x08198c },
    { L"Blue Burned A", 0x08198c, 0x0819ac },
    { L"Zapped A", 0x0819ac, 0x0819cc },
    { L"Energy Zapped A", 0x0819cc, 0x0819ec },
};

const sGame_PaletteDataset NINJAMASTERS_A_KAMUI_B[] =
{
    { L"Kamui B", 0x083090, 0x0830b0, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon B", 0x083150, 0x083170, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Hyper Changing B", 0x0830b0, 0x0830d0, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon Changing B", 0x083170, 0x083190, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Supertrail B", 0x0830d0, 0x0830f0, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x0830f0, 0x083110, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Super Combo B", 0x083110, 0x083130, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x083130, 0x083150, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Darkness Combo B", 0x083210, 0x083230, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x083230, 0x083250, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Desperation Move B", 0x083250, 0x083270, indexNinjaMastersSprites_Kamui, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x083270, 0x083290, indexNinjaMastersSprites_Kamui, 0x01 },
    { L"Burned B", 0x083190, 0x0831b0 },
    { L"Blue Burned B", 0x0831b0, 0x0831d0 },
    { L"Zapped B", 0x0831d0, 0x0831f0 },
    { L"Energy Zapped B", 0x0831f0, 0x083210 },
};

const sGame_PaletteDataset NINJAMASTERS_A_KAMUI_Portrait[] =
{
    { L"Kamui Portrait A", 0x087c5c, 0x087c7c },
    { L"Kamui Hud A", 0x087c7c, 0x087c9c },
    { L"Kamui Portrait B", 0x087c9c, 0x087cbc },
    { L"Kamui Hud B", 0x087cbc, 0x087cdc },
};

// Raiga
const sGame_PaletteDataset NINJAMASTERS_A_RAIGA_A[] =
{
    { L"Raiga A", 0x081a6c, 0x081a8c, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon A", 0x081b2c, 0x081b4c, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Hyper Changing A", 0x081a8c, 0x081aac, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon Changing A", 0x081b4c, 0x081b6c, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Supertrail A", 0x081aac, 0x081acc, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x081acc, 0x081aec, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Super Combo A", 0x081aec, 0x081b0c, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x081b0c, 0x081b2c, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Darkness Combo A", 0x081bec, 0x081c0c, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x081c0c, 0x081c2c, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Desperation Move A", 0x081c2c, 0x081c4c, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x081c4c, 0x081c6c, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Burned A", 0x081b6c, 0x081b8c },
    { L"Blue Burned A", 0x081b8c, 0x081bac },
    { L"Zapped A", 0x081bac, 0x081bcc },
    { L"Energy Zapped A", 0x081bcc, 0x081bec },
};

const sGame_PaletteDataset NINJAMASTERS_A_RAIGA_B[] =
{
    { L"Raiga B", 0x083290, 0x0832b0, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon B", 0x083350, 0x083370, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Hyper Changing B", 0x0832b0, 0x0832d0, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon Changing B", 0x083370, 0x083390, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Supertrail B", 0x0832d0, 0x0832f0, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x0832f0, 0x083310, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Super Combo B", 0x083310, 0x083330, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x083330, 0x083350, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Darkness Combo B", 0x083410, 0x083430, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x083430, 0x083450, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Desperation Move B", 0x083450, 0x083470, indexNinjaMastersSprites_Raiga, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x083470, 0x083490, indexNinjaMastersSprites_Raiga, 0x01 },
    { L"Burned B", 0x083390, 0x0833b0 },
    { L"Blue Burned B", 0x0833b0, 0x0833d0 },
    { L"Zapped B", 0x0833d0, 0x0833f0 },
    { L"Energy Zapped B", 0x0833f0, 0x083410 },
};

const sGame_PaletteDataset NINJAMASTERS_A_RAIGA_Portrait[] =
{
    { L"Raiga Portrait A", 0x087cdc, 0x087cfc },
    { L"Raiga Hud A", 0x087cfc, 0x087d1c },
    { L"Raiga Portrait B", 0x087d1c, 0x087d3c },
    { L"Raiga Hud B", 0x087d3c, 0x087d5c },
};

// Tenho
const sGame_PaletteDataset NINJAMASTERS_A_TENHO_A[] =
{
    { L"Tenho A", 0x081c6c, 0x081c8c, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon A", 0x081d2c, 0x081d4c, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Hyper Changing A", 0x081c8c, 0x081cac, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon Changing A", 0x081d4c, 0x081d6c, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Supertrail A", 0x081cac, 0x081ccc, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x081ccc, 0x081cec, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Super Combo A", 0x081cec, 0x081d0c, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x081d0c, 0x081d2c, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Darkness Combo A", 0x081dec, 0x081e0c, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x081e0c, 0x081e2c, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Desperation Move A", 0x081e2c, 0x081e4c, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x081e4c, 0x081e6c, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Burned A", 0x081d6c, 0x081d8c },
    { L"Blue Burned A", 0x081d8c, 0x081dac },
    { L"Zapped A", 0x081dac, 0x081dcc },
    { L"Energy Zapped A", 0x081dcc, 0x081dec },
};

const sGame_PaletteDataset NINJAMASTERS_A_TENHO_B[] =
{
    { L"Tenho B", 0x083490, 0x0834b0, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon B", 0x083550, 0x083570, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Hyper Changing B", 0x0834b0, 0x0834d0, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon Changing B", 0x083570, 0x083590, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Supertrail B", 0x0834d0, 0x0834f0, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x0834f0, 0x083510, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Super Combo B", 0x083510, 0x083530, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x083530, 0x083550, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Darkness Combo B", 0x083610, 0x083630, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x083630, 0x083650, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Desperation Move B", 0x083650, 0x083670, indexNinjaMastersSprites_Tenho, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x083670, 0x083690, indexNinjaMastersSprites_Tenho, 0x01 },
    { L"Burned B", 0x083590, 0x0835b0 },
    { L"Blue Burned B", 0x0835b0, 0x0835d0 },
    { L"Zapped B", 0x0835d0, 0x0835f0 },
    { L"Energy Zapped B", 0x0835f0, 0x083610 },
};

const sGame_PaletteDataset NINJAMASTERS_A_TENHO_Portrait[] =
{
    { L"Tenho Portrait A", 0x087d5c, 0x087d7c },
    { L"Tenho Hud A", 0x087d7c, 0x087d9c },
    { L"Tenho Portrait B", 0x087d9c, 0x087dbc },
    { L"Tenho Hud B", 0x087dbc, 0x087ddc },
};

// Karasu
const sGame_PaletteDataset NINJAMASTERS_A_KARASU_A[] =
{
    { L"Karasu A", 0x081e6c, 0x081e8c, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon A", 0x081f2c, 0x081f4c, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Hyper Changing A", 0x081e8c, 0x081eac, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon Changing A", 0x081f4c, 0x081f6c, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Supertrail A", 0x081eac, 0x081ecc, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x081ecc, 0x081eec, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Super Combo A", 0x081eec, 0x081f0c, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x081f0c, 0x081f2c, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Darkness Combo A", 0x081fec, 0x08200c, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x08200c, 0x08202c, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Desperation Move A", 0x08202c, 0x08204c, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x08204c, 0x08206c, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Burned A", 0x081f6c, 0x081f8c },
    { L"Blue Burned A", 0x081f8c, 0x081fac },
    { L"Zapped A", 0x081fac, 0x081fcc },
    { L"Energy Zapped A", 0x081fcc, 0x081fec },
};

const sGame_PaletteDataset NINJAMASTERS_A_KARASU_B[] =
{
    { L"Karasu B", 0x083690, 0x0836b0, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon B", 0x083750, 0x083770, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Hyper Changing B", 0x0836b0, 0x0836d0, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon Changing B", 0x083770, 0x083790, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Supertrail B", 0x0836d0, 0x0836f0, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x0836f0, 0x083710, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Super Combo B", 0x083710, 0x083730, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x083730, 0x083750, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Darkness Combo B", 0x083810, 0x083830, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x083830, 0x083850, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Desperation Move B", 0x083850, 0x083870, indexNinjaMastersSprites_Karasu, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x083870, 0x083890, indexNinjaMastersSprites_Karasu, 0x01 },
    { L"Burned B", 0x083790, 0x0837b0 },
    { L"Blue Burned B", 0x0837b0, 0x0837d0 },
    { L"Zapped B", 0x0837d0, 0x0837f0 },
    { L"Energy Zapped B", 0x0837f0, 0x083810 },
};

const sGame_PaletteDataset NINJAMASTERS_A_KARASU_Portrait[] =
{
    { L"Karasu Portrait A", 0x087ddc, 0x087dfc },
    { L"Karasu Hud A", 0x087dfc, 0x087e1c },
    { L"Karasu Portrait B", 0x087e1c, 0x087e3c },
    { L"Karasu Hud B", 0x087e3c, 0x087e5c },
};

// Houoh
const sGame_PaletteDataset NINJAMASTERS_A_HOUOH_A[] =
{
    { L"Houoh A", 0x08206c, 0x08208c, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon A", 0x08212c, 0x08214c, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Hyper Changing A", 0x08208c, 0x0820ac, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon Changing A", 0x08214c, 0x08216c, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Supertrail A", 0x0820ac, 0x0820cc, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x0820cc, 0x0820ec, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Super Combo A", 0x0820ec, 0x08210c, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x08210c, 0x08212c, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Darkness Combo A", 0x0821ec, 0x08220c, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x08220c, 0x08222c, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Desperation Move A", 0x08222c, 0x08224c, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x08224c, 0x08226c, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Burned A", 0x08216c, 0x08218c },
    { L"Blue Burned A", 0x08218c, 0x0821ac },
    { L"Zapped A", 0x0821ac, 0x0821cc },
    { L"Energy Zapped A", 0x0821cc, 0x0821ec },
};

const sGame_PaletteDataset NINJAMASTERS_A_HOUOH_B[] =
{
    { L"Houoh B", 0x083890, 0x0838b0, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon B", 0x083950, 0x083970, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Hyper Changing B", 0x0838b0, 0x0838d0, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon Changing B", 0x083970, 0x083990, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Supertrail B", 0x0838d0, 0x0838f0, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x0838f0, 0x083910, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Super Combo B", 0x083910, 0x083930, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x083930, 0x083950, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Darkness Combo B", 0x083a10, 0x083a30, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x083a30, 0x083a50, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Desperation Move B", 0x083a50, 0x083a70, indexNinjaMastersSprites_Houoh, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x083a70, 0x083a90, indexNinjaMastersSprites_Houoh, 0x01 },
    { L"Burned B", 0x083990, 0x0839b0 },
    { L"Blue Burned B", 0x0839b0, 0x0839d0 },
    { L"Zapped B", 0x0839d0, 0x0839f0 },
    { L"Energy Zapped B", 0x0839f0, 0x083a10 },
};

const sGame_PaletteDataset NINJAMASTERS_A_HOUOH_Portrait[] =
{
    { L"Houoh Portrait A", 0x087e5c, 0x087e7c },
    { L"Houoh Hud A", 0x087e7c, 0x087e9c },
    { L"Houoh Portrait B", 0x087e9c, 0x087ebc },
    { L"Houoh Hud B", 0x087ebc, 0x087edc },
};

// Natsume
const sGame_PaletteDataset NINJAMASTERS_A_NATSUME_A[] =
{
    { L"Natsume A", 0x08226c, 0x08228c, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon A", 0x08232c, 0x08234c, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Hyper Changing A", 0x08228c, 0x0822ac, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon Changing A", 0x08234c, 0x08236c, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Supertrail A", 0x0822ac, 0x0822cc, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x0822cc, 0x0822ec, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Super Combo A", 0x0822ec, 0x08230c, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x08230c, 0x08232c, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Darkness Combo A", 0x0823ec, 0x08240c, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x08240c, 0x08242c, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Desperation Move A", 0x08242c, 0x08244c, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x08244c, 0x08246c, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Burned A", 0x08236c, 0x08238c },
    { L"Blue Burned A", 0x08238c, 0x0823ac },
    { L"Zapped A", 0x0823ac, 0x0823cc },
    { L"Energy Zapped A", 0x0823cc, 0x0823ec },
};

const sGame_PaletteDataset NINJAMASTERS_A_NATSUME_B[] =
{
    { L"Natsume B", 0x083a90, 0x083ab0, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon B", 0x083b50, 0x083b70, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Hyper Changing B", 0x083ab0, 0x083ad0, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon Changing B", 0x083b70, 0x083b90, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Supertrail B", 0x083ad0, 0x083af0, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x083af0, 0x083b10, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Super Combo B", 0x083b10, 0x083b30, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x083b30, 0x083b50, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Darkness Combo B", 0x083c10, 0x083c30, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x083c30, 0x083c50, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Desperation Move B", 0x083c50, 0x083c70, indexNinjaMastersSprites_Natsume, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x083c70, 0x083c90, indexNinjaMastersSprites_Natsume, 0x01 },
    { L"Burned B", 0x083b90, 0x083bb0 },
    { L"Blue Burned B", 0x083bb0, 0x083bd0 },
    { L"Zapped B", 0x083bd0, 0x083bf0 },
    { L"Energy Zapped B", 0x083bf0, 0x083c10 },
};

const sGame_PaletteDataset NINJAMASTERS_A_NATSUME_Portrait[] =
{
    { L"Natsume Portrait A", 0x087edc, 0x087efc },
    { L"Natsume Hud A", 0x087efc, 0x087f1c },
    { L"Natsume Portrait B", 0x087f1c, 0x087f3c },
    { L"Natsume Hud B", 0x087f3c, 0x087f5c },
};

// Goemon
const sGame_PaletteDataset NINJAMASTERS_A_GOEMON_A[] =
{
    { L"Goemon A", 0x08246c, 0x08248c, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon A", 0x08252c, 0x08254c, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Hyper Changing A", 0x08248c, 0x0824ac, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon Changing A", 0x08254c, 0x08256c, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Supertrail A", 0x0824ac, 0x0824cc, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x0824cc, 0x0824ec, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Super Combo A", 0x0824ec, 0x08250c, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x08250c, 0x08252c, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Darkness Combo A", 0x0825ec, 0x08260c, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x08260c, 0x08262c, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Desperation Move A", 0x08262c, 0x08264c, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x08264c, 0x08266c, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Burned A", 0x08256c, 0x08258c },
    { L"Blue Burned A", 0x08258c, 0x0825ac },
    { L"Zapped A", 0x0825ac, 0x0825cc },
    { L"Energy Zapped A", 0x0825cc, 0x0825ec },
};

const sGame_PaletteDataset NINJAMASTERS_A_GOEMON_B[] =
{
    { L"Goemon B", 0x083c90, 0x083cb0, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon B", 0x083d50, 0x083d70, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Hyper Changing B", 0x083cb0, 0x083cd0, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon Changing B", 0x083d70, 0x083d90, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Supertrail B", 0x083cd0, 0x083cf0, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x083cf0, 0x083d10, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Super Combo B", 0x083d10, 0x083d30, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x083d30, 0x083d50, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Darkness Combo B", 0x083e10, 0x083e30, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x083e30, 0x083e50, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Desperation Move B", 0x083e50, 0x083e70, indexNinjaMastersSprites_Goemon, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x083e70, 0x083e90, indexNinjaMastersSprites_Goemon, 0x01 },
    { L"Burned B", 0x083d90, 0x083db0 },
    { L"Blue Burned B", 0x083db0, 0x083dd0 },
    { L"Zapped B", 0x083dd0, 0x083df0 },
    { L"Energy Zapped B", 0x083df0, 0x083e10 },
};

const sGame_PaletteDataset NINJAMASTERS_A_GOEMON_Portrait[] =
{
    { L"Goemon Portrait A", 0x087f5c, 0x087f7c },
    { L"Goemon Hud A", 0x087f7c, 0x087f9c },
    { L"Goemon Portrait B", 0x087f9c, 0x087fbc },
    { L"Goemon Hud B", 0x087fbc, 0x087fdc },
};

// Unzen
const sGame_PaletteDataset NINJAMASTERS_A_UNZEN_A[] =
{
    { L"Unzen A", 0x08266c, 0x08268c, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon A", 0x08272c, 0x08274c, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Hyper Changing A", 0x08268c, 0x0826ac, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon Changing A", 0x08274c, 0x08276c, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Supertrail A", 0x0826ac, 0x0826cc, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x0826cc, 0x0826ec, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Super Combo A", 0x0826ec, 0x08270c, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x08270c, 0x08272c, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Darkness Combo A", 0x0827ec, 0x08280c, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x08280c, 0x08282c, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Desperation Move A", 0x08282c, 0x08284c, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x08284c, 0x08286c, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Burned A", 0x08276c, 0x08278c },
    { L"Blue Burned A", 0x08278c, 0x0827ac },
    { L"Zapped A", 0x0827ac, 0x0827cc },
    { L"Energy Zapped A", 0x0827cc, 0x0827ec },
};

const sGame_PaletteDataset NINJAMASTERS_A_UNZEN_B[] =
{
    { L"Unzen B", 0x083e90, 0x083eb0, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon B", 0x083f50, 0x083f70, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Hyper Changing B", 0x083eb0, 0x083ed0, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon Changing B", 0x083f70, 0x083f90, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Supertrail B", 0x083ed0, 0x083ef0, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x083ef0, 0x083f10, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Super Combo B", 0x083f10, 0x083f30, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x083f30, 0x083f50, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Darkness Combo B", 0x084010, 0x084030, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x084030, 0x084050, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Desperation Move B", 0x084050, 0x084070, indexNinjaMastersSprites_Unzen, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x084070, 0x084090, indexNinjaMastersSprites_Unzen, 0x01 },
    { L"Burned B", 0x083f90, 0x083fb0 },
    { L"Blue Burned B", 0x083fb0, 0x083fd0 },
    { L"Zapped B", 0x083fd0, 0x083ff0 },
    { L"Energy Zapped B", 0x083ff0, 0x084010 },
};

const sGame_PaletteDataset NINJAMASTERS_A_UNZEN_Portrait[] =
{
    { L"Unzen Portrait A", 0x087fdc, 0x087ffc },
    { L"Unzen Hud A", 0x087ffc, 0x08801c },
    { L"Unzen Portrait B", 0x08801c, 0x08803c },
    { L"Unzen Hud B", 0x08803c, 0x08805c },
};

// Kasumi
const sGame_PaletteDataset NINJAMASTERS_A_KASUMI_A[] =
{
    { L"Kasumi A", 0x08286c, 0x08288c, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon A", 0x08292c, 0x08294c, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Hyper Changing A", 0x08288c, 0x0828ac, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon Changing A", 0x08294c, 0x08296c, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Supertrail A", 0x0828ac, 0x0828cc, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x0828cc, 0x0828ec, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Super Combo A", 0x0828ec, 0x08290c, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x08290c, 0x08292c, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Darkness Combo A", 0x0829ec, 0x082a0c, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x082a0c, 0x082a2c, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Desperation Move A", 0x082a2c, 0x082a4c, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x082a4c, 0x082a6c, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Burned A", 0x08296c, 0x08298c },
    { L"Blue Burned A", 0x08298c, 0x0829ac },
    { L"Zapped A", 0x0829ac, 0x0829cc },
    { L"Energy Zapped A", 0x0829cc, 0x0829ec },
};

const sGame_PaletteDataset NINJAMASTERS_A_KASUMI_B[] =
{
    { L"Kasumi B", 0x084090, 0x0840b0, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon B", 0x084150, 0x084170, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Hyper Changing B", 0x0840b0, 0x0840d0, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon Changing B", 0x084170, 0x084190, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Supertrail B", 0x0840d0, 0x0840f0, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x0840f0, 0x084110, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Super Combo B", 0x084110, 0x084130, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x084130, 0x084150, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Darkness Combo B", 0x084210, 0x084230, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x084230, 0x084250, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Desperation Move B", 0x084250, 0x084270, indexNinjaMastersSprites_Kasumi, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x084270, 0x084290, indexNinjaMastersSprites_Kasumi, 0x01 },
    { L"Burned B", 0x084190, 0x0841b0 },
    { L"Blue Burned B", 0x0841b0, 0x0841d0 },
    { L"Zapped B", 0x0841d0, 0x0841f0 },
    { L"Energy Zapped B", 0x0841f0, 0x084210 },
};

const sGame_PaletteDataset NINJAMASTERS_A_KASUMI_Portrait[] =
{
    { L"Kasumi Portrait A", 0x08805c, 0x08807c },
    { L"Kasumi Hud A", 0x08807c, 0x08809c },
    { L"Kasumi Portrait B", 0x08809c, 0x0880bc },
    { L"Kasumi Hud B", 0x0880bc, 0x0880dc },
};

// Ranmaru
const sGame_PaletteDataset NINJAMASTERS_A_RANMARU_A[] =
{
    { L"Ranmaru A", 0x082a6c, 0x082a8c, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon A", 0x082b2c, 0x082b4c, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Hyper Changing A", 0x082a8c, 0x082aac, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon Changing A", 0x082b4c, 0x082b6c, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Supertrail A", 0x082aac, 0x082acc, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x082acc, 0x082aec, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Super Combo A", 0x082aec, 0x082b0c, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x082b0c, 0x082b2c, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Darkness Combo A", 0x082bec, 0x082c0c, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x082c0c, 0x082c2c, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Desperation Move A", 0x082c2c, 0x082c4c, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x082c4c, 0x082c6c, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Burned A", 0x082b6c, 0x082b8c },
    { L"Blue Burned A", 0x082b8c, 0x082bac },
    { L"Zapped A", 0x082bac, 0x082bcc },
    { L"Energy Zapped A", 0x082bcc, 0x082bec },
};

const sGame_PaletteDataset NINJAMASTERS_A_RANMARU_B[] =
{
    { L"Ranmaru B", 0x084290, 0x0842b0, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon B", 0x084350, 0x084370, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Hyper Changing B", 0x0842b0, 0x0842d0, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon Changing B", 0x084370, 0x084390, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Supertrail B", 0x0842d0, 0x0842f0, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x0842f0, 0x084310, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Super Combo B", 0x084310, 0x084330, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x084330, 0x084350, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Darkness Combo B", 0x084410, 0x084430, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x084430, 0x084450, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Desperation Move B", 0x084450, 0x084470, indexNinjaMastersSprites_Ranmaru, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x084470, 0x084490, indexNinjaMastersSprites_Ranmaru, 0x01 },
    { L"Burned B", 0x084390, 0x0843b0 },
    { L"Blue Burned B", 0x0843b0, 0x0843d0 },
    { L"Zapped B", 0x0843d0, 0x0843f0 },
    { L"Energy Zapped B", 0x0843f0, 0x084410 },
};

const sGame_PaletteDataset NINJAMASTERS_A_RANMARU_Portrait[] =
{
    { L"Ranmaru Portrait A", 0x0880dc, 0x0880fc },
    { L"Ranmaru Hud A", 0x0880fc, 0x08811c },
    { L"Ranmaru Portrait B", 0x08811c, 0x08813c },
    { L"Ranmaru Hud B", 0x08813c, 0x08815c },
};

// Nobunaga
const sGame_PaletteDataset NINJAMASTERS_A_NOBUNAGA_A[] =
{
    { L"Nobunaga A", 0x082c6c, 0x082c8c, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon A", 0x082d2c, 0x082d4c, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Hyper Changing A", 0x082c8c, 0x082cac, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon Changing A", 0x082d4c, 0x082d6c, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Supertrail A", 0x082cac, 0x082ccc, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon Supertrail A", 0x082ccc, 0x082cec, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Super Combo A", 0x082cec, 0x082d0c, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon Super Combo A", 0x082d0c, 0x082d2c, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Darkness Combo A", 0x082dec, 0x082e0c, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon Darkness Combo A", 0x082e0c, 0x082e2c, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Desperation Move A", 0x082e2c, 0x082e4c, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon Desperation Move A", 0x082e4c, 0x082e6c, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Burned A", 0x082d6c, 0x082d8c },
    { L"Blue Burned A", 0x082d8c, 0x082dac },
    { L"Zapped A", 0x082dac, 0x082dcc },
    { L"Energy Zapped A", 0x082dcc, 0x082dec },
};

const sGame_PaletteDataset NINJAMASTERS_A_NOBUNAGA_B[] =
{
    { L"Nobunaga B", 0x084490, 0x0844b0, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon B", 0x084550, 0x084570, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Hyper Changing B", 0x0844b0, 0x0844d0, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon Changing B", 0x084570, 0x084590, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Supertrail B", 0x0844d0, 0x0844f0, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon Supertrail B", 0x0844f0, 0x084510, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Super Combo B", 0x084510, 0x084530, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon Super Combo B", 0x084530, 0x084550, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Darkness Combo B", 0x084610, 0x084630, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon Darkness Combo B", 0x084630, 0x084650, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Desperation Move B", 0x084650, 0x084670, indexNinjaMastersSprites_Nobunaga, 0x00, &pairNext },
    { L"Weapon Desperation Move B", 0x084670, 0x084690, indexNinjaMastersSprites_Nobunaga, 0x01 },
    { L"Burned B", 0x084590, 0x0845b0 },
    { L"Blue Burned B", 0x0845b0, 0x0845d0 },
    { L"Zapped B", 0x0845d0, 0x0845f0 },
    { L"Energy Zapped B", 0x0845f0, 0x084610 },
};

const sGame_PaletteDataset NINJAMASTERS_A_NOBUNAGA_Portrait[] =
{
    { L"Nobunaga Portrait A", 0x08815c, 0x08817c },
    { L"Nobunaga Hud A", 0x08817c, 0x08819c },
    { L"Nobunaga Portrait B", 0x08819c, 0x0881bc },
    { L"Nobunaga Hud B", 0x0881bc, 0x0881dc },
};

// -BONUS-
const sGame_PaletteDataset NINJAMASTERS_A_BONUS_SelectScreen[] =
{
    { L"Sasuke Select Icon", 0x081404, 0x081424 },
    { L"Kamui Select Icon", 0x081424, 0x081444 },
    { L"Raiga Select Icon", 0x081444, 0x081464 },
    { L"Tenho Select Icon", 0x081464, 0x081484 },
    { L"Karasu Select Icon", 0x081484, 0x0814a4 },
    { L"Houoh Select Icon", 0x0814a4, 0x0814c4 },
    { L"Natsume Select Icon", 0x0814c4, 0x0814e4 },
    { L"Goemon Select Icon", 0x0814e4, 0x081504 },
    { L"Unzen Select Icon", 0x081504, 0x081524 },
    { L"Kasumi Select Icon", 0x081524, 0x081544 },
    { L"Ranmaru Select Icon", 0x081544, 0x081564 },
    { L"Nobunaga Select Icon", 0x081564, 0x081584 },
};

const sDescTreeNode NINJAMASTERS_A_SASUKE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_SASUKE_A, ARRAYSIZE(NINJAMASTERS_A_SASUKE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_SASUKE_B, ARRAYSIZE(NINJAMASTERS_A_SASUKE_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_SASUKE_Portrait, ARRAYSIZE(NINJAMASTERS_A_SASUKE_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_KAMUI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KAMUI_A, ARRAYSIZE(NINJAMASTERS_A_KAMUI_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KAMUI_B, ARRAYSIZE(NINJAMASTERS_A_KAMUI_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KAMUI_Portrait, ARRAYSIZE(NINJAMASTERS_A_KAMUI_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_RAIGA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_RAIGA_A, ARRAYSIZE(NINJAMASTERS_A_RAIGA_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_RAIGA_B, ARRAYSIZE(NINJAMASTERS_A_RAIGA_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_RAIGA_Portrait, ARRAYSIZE(NINJAMASTERS_A_RAIGA_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_TENHO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_TENHO_A, ARRAYSIZE(NINJAMASTERS_A_TENHO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_TENHO_B, ARRAYSIZE(NINJAMASTERS_A_TENHO_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_TENHO_Portrait, ARRAYSIZE(NINJAMASTERS_A_TENHO_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_KARASU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KARASU_A, ARRAYSIZE(NINJAMASTERS_A_KARASU_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KARASU_B, ARRAYSIZE(NINJAMASTERS_A_KARASU_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KARASU_Portrait, ARRAYSIZE(NINJAMASTERS_A_KARASU_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_HOUOH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_HOUOH_A, ARRAYSIZE(NINJAMASTERS_A_HOUOH_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_HOUOH_B, ARRAYSIZE(NINJAMASTERS_A_HOUOH_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_HOUOH_Portrait, ARRAYSIZE(NINJAMASTERS_A_HOUOH_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_NATSUME_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_NATSUME_A, ARRAYSIZE(NINJAMASTERS_A_NATSUME_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_NATSUME_B, ARRAYSIZE(NINJAMASTERS_A_NATSUME_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_NATSUME_Portrait, ARRAYSIZE(NINJAMASTERS_A_NATSUME_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_GOEMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_GOEMON_A, ARRAYSIZE(NINJAMASTERS_A_GOEMON_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_GOEMON_B, ARRAYSIZE(NINJAMASTERS_A_GOEMON_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_GOEMON_Portrait, ARRAYSIZE(NINJAMASTERS_A_GOEMON_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_UNZEN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_UNZEN_A, ARRAYSIZE(NINJAMASTERS_A_UNZEN_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_UNZEN_B, ARRAYSIZE(NINJAMASTERS_A_UNZEN_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_UNZEN_Portrait, ARRAYSIZE(NINJAMASTERS_A_UNZEN_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_KASUMI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KASUMI_A, ARRAYSIZE(NINJAMASTERS_A_KASUMI_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KASUMI_B, ARRAYSIZE(NINJAMASTERS_A_KASUMI_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KASUMI_Portrait, ARRAYSIZE(NINJAMASTERS_A_KASUMI_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_RANMARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_RANMARU_A, ARRAYSIZE(NINJAMASTERS_A_RANMARU_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_RANMARU_B, ARRAYSIZE(NINJAMASTERS_A_RANMARU_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_RANMARU_Portrait, ARRAYSIZE(NINJAMASTERS_A_RANMARU_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_NOBUNAGA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_NOBUNAGA_A, ARRAYSIZE(NINJAMASTERS_A_NOBUNAGA_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_NOBUNAGA_B, ARRAYSIZE(NINJAMASTERS_A_NOBUNAGA_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_NOBUNAGA_Portrait, ARRAYSIZE(NINJAMASTERS_A_NOBUNAGA_Portrait) },
};

const sDescTreeNode NINJAMASTERS_A_BONUS_COLLECTION[] =
{
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_BONUS_SelectScreen, ARRAYSIZE(NINJAMASTERS_A_BONUS_SelectScreen) },
};

const sDescTreeNode NINJAMASTERS_A_UNITS[] =
{
    { L"Sasuke", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_SASUKE_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_SASUKE_COLLECTION) },
    { L"Kamui", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KAMUI_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_KAMUI_COLLECTION) },
    { L"Raiga", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_RAIGA_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_RAIGA_COLLECTION) },
    { L"Tenho", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_TENHO_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_TENHO_COLLECTION) },
    { L"Karasu", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KARASU_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_KARASU_COLLECTION) },
    { L"Houoh", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_HOUOH_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_HOUOH_COLLECTION) },
    { L"Natsume", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_NATSUME_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_NATSUME_COLLECTION) },
    { L"Goemon", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_GOEMON_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_GOEMON_COLLECTION) },
    { L"Unzen", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_UNZEN_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_UNZEN_COLLECTION) },
    { L"Kasumi", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_KASUMI_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_KASUMI_COLLECTION) },
    { L"Ranmaru", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_RANMARU_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_RANMARU_COLLECTION) },
    { L"Nobunaga", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_NOBUNAGA_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_NOBUNAGA_COLLECTION) },

    { L"Bonus", DESC_NODETYPE_TREE, (void*)NINJAMASTERS_A_BONUS_COLLECTION, ARRAYSIZE(NINJAMASTERS_A_BONUS_COLLECTION) },
};

constexpr auto NINJAMASTERS_A_NUMUNIT = ARRAYSIZE(NINJAMASTERS_A_UNITS);
#define NINJAMASTERS_A_EXTRALOC NINJAMASTERS_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef NINJAMASTERS_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
