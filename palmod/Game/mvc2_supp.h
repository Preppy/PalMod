#pragma once
#include "Game_MVC2_D.h"
#include "Game_MVC2_A.h"

//SUPP_NODE_ABSOL, Dest Start, Dest Increment, Src Start, Src Increment
// SUPP_NODE_ABSOL adds two values: the starting palette and the number of colors to include.
constexpr UINT16 SUPP_NODE_ABSOL = 0x4002;

// Normally we offset at ID_MOD unless MOD_ABS is specified.  If MOD_ABS is specified we use the 
// raw palette ID.
constexpr UINT16 MOD_ABS = 0x8000; // Start at absolute 0x0 within the unit for this palette
// ID_MOD is 47: (button_colors * palettes_per_button) - 1 (zero-based)

extern UINT8 k_mvc2_character_coloroption_count;

extern UINT16 ID_MOD; // = ((6 * 8) - 1); // Index mod - this is also EXTRA_OMNI for MvC2 only

// These are palettes wholly located within the Extra nodes.  
constexpr UINT16 EXTRA_NODE_ONLY = 0x4008;

//Syntax: SUPP_NODE_EX, Dest Palette, Dest Increment, Src Start Index, Number of Items to Copy, Dest Index
// This indicates that the supplemental node to be changed is located within the EX/Extras section and is not one of the core palettes
constexpr UINT16 SUPP_NODE_EX = 0x4001;

namespace MVC2_SupplementProcessing
{
    extern CGame_MVC2_D* CurrMVC2;
    extern CGame_MVC2_A* CurrMVC2_Arcade;

    UINT16* get_pal_16(size_t char_id, size_t pal_no);

    int supp_copy_spiral(size_t char_id, size_t source_palette, size_t destination_palette, UINT8 source_index = 0, UINT8 destination_index = 0, UINT8 copy_amount = 0x10);

    void prep_supp(bool forDreamcast = true);
    void proc_supp(size_t char_no, size_t pal_no);

    // We fork some characters in order to accommodate for the non-linear extras in the expansion.
    // While LP...A2 Extras transfer perfectly, Extras of form "LP...A2...LP...A2" need adjustments for the initial locations
    // of secondary starting points
    // The characters that require different handling are:
    // * Cyclops, Iceman, Jin, Morrigan, Rogue, Sakura, Sonson, and Zangief

    const std::vector<UINT16> supp_data_zangief_6color =
    {
        0x01 |  SUPP_START, //Zangief

            // For Zangief we want to do two things:
            // * Handle his increasing rage during FAB when the user mashes.  Apply tint to certain colors.
            // * Handle his non-modified boots also used during those frames.  This is autocopied.

            //Node, Start, Increment    //, Copy
        
            // 0x17-0x19 are the mashed tint for FAB
                //Type, Pal Index Start, Pal Index Amt
            SUPP_NODE, 0x17, 3,
                MOD_TINT, 1, 7, 1, 2, NEG + 2, NEG + 2, // ~15% tint
            SUPP_NODE, 0x18, 3, 
                MOD_TINT, 1, 7, 1, 4, NEG + 4, NEG + 4, // ~35% tint
            SUPP_NODE, 0x19, 3,
                MOD_TINT, 1, 7, 1, 7, NEG + 6, NEG + 6, // ~75% tint

            // 0x29-0x2b are the mashed tint for FAB for mecha Zangief.  mecha zangief is 11 Extra, 12 Extra, 13 Extra, etc
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x29, 3, 0x11, 1,
                MOD_TINT, 1, 7, 1, 2, NEG + 2, NEG + 2, // ~15% tint
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x2A, 3, 0x11, 1,
                MOD_TINT, 1, 7, 1, 4, NEG + 4, NEG + 4, // ~35% tint
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x2B, 3, 0x11, 1,
                MOD_TINT, 1, 7, 1, 7, NEG + 6, NEG + 6, // ~75% tint
    };

    const std::vector<UINT16> supp_data_morrigan_6color =
    {
        0x03 | SUPP_START, //Morrigan
            //SUPP_NODE_ABSOL, Dest Start, Dest Inc, Src Start, Src Inc

            // Lilith join pose: should match main lilith
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x4B, 9, MOD_ABS | 0x01, 8,
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x4C, 9, MOD_ABS | 0x01, 8,
                MOD_WHITE, 1, 1,

            // Morrigan join pose: should match main morrigan
            SUPP_NODE, 0x4D, 9,
            SUPP_NODE, 0x4E, 9,
                MOD_WHITE, 1, 1,

            // Morrigan phase-in intro: 4 frames
            SUPP_NODE, 0x50, 9,
                MOD_LUM, 1, 15, 20,
            SUPP_NODE, 0x51, 9,
                MOD_LUM, 1, 15, 13,
            SUPP_NODE, 0x52, 9,
                MOD_LUM, 1, 15, 7,
            SUPP_NODE, 0x53, 9,
            //    MOD_LUM, 1, 15, 0
        
            // pose sprite: full copy and then we manually tweak further.
            SUPP_NODE, 0x81, 1,

            // pose sprite sleeves
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x81, 1, 10, 1, 10,
                MOD_LUM, 10, 1, NEG + 21,
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x81, 1, 10, 1, 11,
                MOD_LUM, 11, 1, NEG + 13,
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x81, 1, 10, 1, 12,
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x81, 1, 11, 1, 13,
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x81, 1, 12, 1, 14,
    };

    const std::vector<UINT16> supp_data_cyclops_6color =
    {
        0x06 | SUPP_START, //Cyclops
            //SUPP_NODE_ABSOL | SUPP_NODE_EX, Dest Start, Dest Inc, Src Pal Start, Src Pal Inc, Src Index Start, Src Index Amt, Dst Index

            // sHK swing effect: doesn't matter right now due to palette pairing
            /*
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
                */

            // there are 8 intro frames
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

            // Mega Optic Blast Stance
            // default color
            SUPP_NODE, 0x59, 2,
            // default color with red tint
            SUPP_NODE, 0x5A, 2,
                MOD_TINT, 1, 15, 1, 3, NEG + 1, NEG + 1,
    };

    const std::vector<UINT16> supp_data_iceman_6color =
    {
        0x09 | SUPP_START, //Iceman
            // Stance Frame
            SUPP_NODE, 0x02 | MOD_ABS, 8,
            // Bobby Drake taunt: normal plus face colors
            //SUPP_NODE_EX, Dest Start, Dest Inc, Src Start, Src Amt, Dst Index
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 1, 1, 1,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 3, 1, 2,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 5, 1, 3,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 7, 1, 4,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 9, 1, 5,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 10, 1, 6,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 11, 4, 11,
            // Intro - iceman letters melting
            SUPP_NODE_EX, 0x04 | MOD_ABS, 8, 1, 8, 1,
            // Iceballs
            SUPP_NODE, 0x05 | MOD_ABS, 8,
            // 7 shine frames, but the second (0x22) is pure white
            SUPP_NODE, 0x21, 7,
            // We need to duplicate some pixels here
            SUPP_NODE, 0x23, 7,
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
    };

    const std::vector<UINT16> supp_data_rogue_6color =
    {
        0x0A | SUPP_START, //Rogue
            // Dash shadows
            SUPP_NODE, 0x04 | MOD_ABS, 8,
                MOD_LUM, 1, 15, NEG + 8,
            SUPP_NODE, 0x05 | MOD_ABS, 8,
                MOD_LUM, 1, 15, NEG + 12,
        
            // Taunt sprite,    
            // skin: 1-7, 8: hair & boots, 9-15: boots and clothes
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 1, 6, 1,

            // skin
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 3, 1, 3,
                MOD_LUM, 3, 1, 6,
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 4, 1, 4,
                MOD_LUM, 4, 1, 12,

            // These are commented out: they are not consistently related.

            // shoes, shirt
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 7, 1, 7,
            //    MOD_LUM, 7, 1, NEG + 25,

            // sunglasses, boots, skirt
            //  SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 8, 1, 8,
            //    MOD_LUM, 8, 1, NEG + 25,
            //  SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 9, 1, 9,
            //    MOD_LUM, 9, 1, NEG + 13,

            // shorts
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 9, 1, 10,
            //    MOD_LUM, 10, 1, 25,
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 10, 1, 11,
            //    MOD_LUM, 11, 1, 25,
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 11, 1, 12,
            //    MOD_LUM, 12, 1, 25,

            // jacket
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 15, 1, 13,
            //    MOD_LUM, 13, 1, 24,
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 15, 1, 14,
            //    MOD_LUM, 14, 1, 12,
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 15, 1, 15,
            //    MOD_LUM, 15, 1, 6,
    };

    const std::vector<UINT16> supp_data_sonson_6color =
    {
        0x14 | SUPP_START, // SonSon
            //SUPP_NODE_ABSOL, Dest Start, Dest Inc, Src Start, Src Inc
            // The 0x02 Monkeys palette should be handled by the user, since it's paired
            //SUPP_NODE, 0x1 | MOD_ABS, 8,
    #ifdef GIANTMONKEYMODIFY
            SUPP_NODE | SUPP_NODE_NOCOPY, 0xF, 1,
                // main bandana, extra bandana color plus hair accents
                // While the following hews close to accuracy, these colors are entertwined elsewhere in her sprite so don't touch.
                //MOD_COPY, 5, 1, 9,
                //MOD_COPY, 5, 1, 10,
                //MOD_LUM, 10, 1, 20,
                // belt border
                MOD_COPY, 6, 3, 11,
                // suit to belt
                MOD_COPY, 9, 2, 14,
    #endif

            // Giant monkey super hit frame, copying from the earlier Giant monkey extra palette
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x17, 1, 0x0F, 1,
                MOD_LUM, 1, 15, 10,
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x1D, 2, 0x0F, 1,
                MOD_LUM, 1, 15, 5,
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x1E, 2, 0x0F, 1,
                MOD_LUM, 1, 15, NEG + 12,

    };

    const std::vector<UINT16> supp_data_sakura_6color =
    {
        0x22 | SUPP_START, // Sakura - indexCPS2Sprites_Sakura 0x22
            //Kei should have the same outfit
            SUPP_NODE | SUPP_NODE_NOCOPY, 0x11, 2,
                MOD_COPY, 10, 6, 10,
            // Likewise with Evil Sakura
            SUPP_NODE | SUPP_NODE_NOCOPY, 0x1d, 1,
                MOD_COPY, 10, 6, 10,
    };

    const std::vector<UINT16> supp_data_jin_6color =
    {
        0x37 | SUPP_START, //Jin
            // power-up flash
            SUPP_NODE, 0x2E, 6,
                MOD_LUM, 1, 15, 32,
            SUPP_NODE, 0x2F, 6,
                MOD_LUM, 1, 15, 25,
            SUPP_NODE, 0x30, 6,
                MOD_LUM, 1, 15, 16,
            SUPP_NODE, 0x31, 6,
                MOD_LUM, 1, 15, 10,

            //SUPP_NODE_EX, Dest Palette, Dest Inc, Src Start, Src Amt, Dst Index
            // 0x51 are the "player" hands for blodia vulcan
            SUPP_NODE_EX, 0x51, 3, 6, 10, 6,
                MOD_LUM, 6, 10, 10,

            // these are for the towel taunt
            SUPP_NODE, 0x63, 6,
                MOD_TINT, 2, 4, 2, 0, NEG + 1, NEG + 1,
            SUPP_NODE, 0x64, 6,
                MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
            SUPP_NODE, 0x65, 6,
                MOD_TINT, 2, 4, 2, 0, NEG + 3, NEG + 3,
            SUPP_NODE, 0x66, 6,
                MOD_TINT, 2, 4, 2, 0, NEG + 4, NEG + 4,
            SUPP_NODE, 0x67, 6,
                MOD_TINT, 2, 4, 2, 0, NEG + 5, NEG + 5,
            SUPP_NODE, 0x68, 6,
                MOD_TINT, 2, 4, 2, 0, NEG + 6, NEG + 6,
    };

    const std::vector<UINT16> supp_data_zangief_16color =
    {
        0x01 | SUPP_START, //Zangief

            // For Zangief we want to do two things:
            // * Handle his increasing rage during FAB when the user mashes.  Apply tint to certain colors.
            // * Handle his non-modified boots also used during those frames.  This is autocopied.

            //Node, Start, Increment    //, Copy

            // 0x17-0x19 are the mashed tint for FAB
                //Type, Pal Index Start, Pal Index Amt
            SUPP_NODE, 0x21, 3,
                MOD_TINT, 1, 7, 1, 2, NEG + 2, NEG + 2, // ~15% tint
            SUPP_NODE, 0x22, 3,
                MOD_TINT, 1, 7, 1, 4, NEG + 4, NEG + 4, // ~35% tint
            SUPP_NODE, 0x23, 3,
                MOD_TINT, 1, 7, 1, 7, NEG + 6, NEG + 6, // ~75% tint

            // 0x29-0x2b are the mashed tint for FAB for mecha Zangief.  mecha zangief is 11 Extra, 12 Extra, 13 Extra, etc
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x51, 3, 0x11, 1,
                MOD_TINT, 1, 7, 1, 2, NEG + 2, NEG + 2, // ~15% tint
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x52, 3, 0x11, 1,
                MOD_TINT, 1, 7, 1, 4, NEG + 4, NEG + 4, // ~35% tint
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x53, 3, 0x11, 1,
                MOD_TINT, 1, 7, 1, 7, NEG + 6, NEG + 6, // ~75% tint
    };

    const std::vector<UINT16> supp_data_morrigan_16color =
    {
        0x03 | SUPP_START, //Morrigan
            //SUPP_NODE_ABSOL, Dest Start, Dest Inc, Src Start, Src Inc

            // Lilith
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x69, 9, MOD_ABS | 0x01, 8,
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x6a, 9, MOD_ABS | 0x01, 8,
                MOD_WHITE, 1, 1,

            // Morrigan phase-in intro
            SUPP_NODE, 0x6b, 9,
            SUPP_NODE, 0x6c, 9,
                MOD_WHITE, 1, 1,
            SUPP_NODE, 0x6e, 9,
                MOD_LUM, 1, 15, 20,
            SUPP_NODE, 0x6f, 9,
                MOD_LUM, 1, 15, 13,
            SUPP_NODE, 0x70, 9,
                MOD_LUM, 1, 15, 7,
            SUPP_NODE, 0x71, 9,
            //    MOD_LUM, 1, 15, 0

            // Taunt sprite: full copy and then we manually tweak further.
            SUPP_NODE, 0xf9, 1,

            // pose sprite sleeves
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0xf9, 1, 10, 1, 10,
                MOD_LUM, 10, 1, NEG + 21,
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0xf9, 1, 10, 1, 11,
                MOD_LUM, 11, 1, NEG + 13,
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0xf9, 1, 10, 1, 12,
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0xf9, 1, 11, 1, 13,
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0xf9, 1, 12, 1, 14,
    };

    const std::vector<UINT16> supp_data_anakaris =
    {
        0x04 | SUPP_START, //Anakaris
            // Upward hands
            SUPP_NODE, 0x02 | MOD_ABS, 8,
                MOD_LUM, 1, 15, NEG + 6,
            // Super body
            SUPP_NODE, 0x04 | MOD_ABS, 8,
    };

    const std::vector<UINT16> supp_data_cyclops_16color =
    {
        0x06 | SUPP_START, //Cyclops
            //SUPP_NODE_ABSOL | SUPP_NODE_EX, Dest Start, Dest Inc, Src Pal Start, Src Pal Inc, Src Index Start, Src Index Amt, Dst Index

            // sHK swing effect: doesn't matter right now due to palette pairing
            /*
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
                */

            // there are 8 intro frames
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

            // Mega Optic Blast Stance
            // default color
            SUPP_NODE, 0xa9, 2,
            // default color with red tint
            SUPP_NODE, 0xaA, 2,
                MOD_TINT, 1, 15, 1, 3, NEG + 1, NEG + 1,
    };

    const std::vector<UINT16> supp_data_wolverine =
    {
        0x07 | SUPP_START, // Wolverine (adm).  If you link palette 0 and 1 please update HandleSpiralCopies_ForSupplementedPalettes
            // his berserker barrage trails a bit of his costume.
            SUPP_NODE | SUPP_NODE_NOCOPY, 2 | MOD_ABS, 8,
                MOD_COPY, 2, 1, 12,
                MOD_COPY, 11, 1, 13,
                MOD_COPY, 10, 1, 14,
                MOD_COPY,  9, 1, 15,
    };

    const std::vector<UINT16> supp_data_iceman_16color =
    {
        0x09 | SUPP_START, //Iceman
            // Stance Frame
            SUPP_NODE, 0x02 | MOD_ABS, 8,
            // Bobby Drake taunt: normal plus face colors
            //SUPP_NODE_EX, Dest Start, Dest Inc, Src Start, Src Amt, Dst Index
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 1, 1, 1,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 3, 1, 2,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 5, 1, 3,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 7, 1, 4,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 9, 1, 5,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 10, 1, 6,
            SUPP_NODE_EX, 0x03 | MOD_ABS, 8, 11, 4, 11,
            // Intro - iceman letters melting
            SUPP_NODE_EX, 0x04 | MOD_ABS, 8, 1, 8, 1,
            // Iceballs
            SUPP_NODE, 0x05 | MOD_ABS, 8,

            // 7 shine frames, but the second (0x22) is pure white
            SUPP_NODE, 0x49, 7,
                    // this palette is solid white, no need to change
            // We need to duplicate some pixels here
            SUPP_NODE, 0x4b, 7,
                MOD_COPY, 11, 1, 9,
                MOD_COPY, 11, 1, 10,
            SUPP_NODE, 0x4c, 7,
                MOD_COPY, 11, 1, 7,
                MOD_COPY, 11, 1, 8,
            SUPP_NODE, 0x4d, 7,
                MOD_COPY, 1, 2, 5,
            SUPP_NODE, 0x4e, 7,
                MOD_COPY, 11, 1, 3,
                MOD_COPY, 11, 1, 4,
            SUPP_NODE, 0x4f, 7,
                MOD_COPY, 11, 1, 1,
                MOD_COPY, 11, 1, 2,
    };

    const std::vector<UINT16> supp_data_rogue_16color =
    {
        0x0A | SUPP_START, //Rogue
            // Dash shadows
            SUPP_NODE, 0x04 | MOD_ABS, 8,
                MOD_LUM, 1, 15, NEG + 8,
            SUPP_NODE, 0x05 | MOD_ABS, 8,
                MOD_LUM, 1, 15, NEG + 12,
        
            // Taunt sprite,    
            // skin: 1-7, 8: hair & boots, 9-15: boots and clothes
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x0a, 1, 1, 6, 1,

            // skin
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x0a, 1, 3, 1, 3,
                MOD_LUM, 3, 1, 6,
            SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x0a, 1, 4, 1, 4,
                MOD_LUM, 4, 1, 12,

            // These are commented out: they are not consistently related.

            // shoes, shirt
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 7, 1, 7,
            //    MOD_LUM, 7, 1, NEG + 25,

            // sunglasses, boots, skirt
            //  SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 8, 1, 8,
            //    MOD_LUM, 8, 1, NEG + 25,
            //  SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 9, 1, 9,
            //    MOD_LUM, 9, 1, NEG + 13,

            // shorts
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 9, 1, 10,
            //    MOD_LUM, 10, 1, 25,
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 10, 1, 11,
            //    MOD_LUM, 11, 1, 25,
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 11, 1, 12,
            //    MOD_LUM, 12, 1, 25,

            // jacket
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 15, 1, 13,
            //    MOD_LUM, 13, 1, 24,
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 15, 1, 14,
            //    MOD_LUM, 14, 1, 12,
            // SUPP_NODE_EX | SUPP_NODE_NOCOPY, 0x1D, 1, 15, 1, 15,
            //    MOD_LUM, 15, 1, 6,
    };

    const std::vector<UINT16> supp_data_captainamerica =
    {
        /* Shield links are already handled since this palette is paired
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
    };

    const std::vector<UINT16> supp_data_spiderman =
    {
        0x0C | SUPP_START, //Spider-Man
            // 01 ABS: Taunt balloon
            // 02 ABS: spider-sense intro
            // 0x09 through 0x10 are for the Intro animation
             
            SUPP_NODE, 0x09, 16, 
                MOD_LUM, 01, 10, NEG + 29,
            SUPP_NODE, 0x0A, 16,
                MOD_LUM, 01, 10, NEG + 23,
            SUPP_NODE, 0x0B, 16,
                MOD_LUM, 01, 10, NEG + 17,
            SUPP_NODE, 0x0C, 16,
                MOD_LUM, 01, 10, NEG + 12,
            SUPP_NODE, 0x0D, 16,
                MOD_LUM, 01, 10, NEG + 8,
            SUPP_NODE, 0x0E, 16,
                MOD_LUM, 01, 10, NEG + 7,
            SUPP_NODE, 0x0F, 16,
                MOD_LUM, 01, 10, NEG + 5,
            SUPP_NODE, 0x10, 16,
                MOD_LUM, 01, 10, NEG + 3,

            // 11/12, 20/21, 31,32, etc are the spider signal pairs
            // These aren't changed per color, though

    };

    const std::vector<UINT16> supp_data_doom =
    {
        0x0F | SUPP_START, //Dr. Doom
            // If you link palette 0 and 1 please update HandleSpiralCopies_ForSupplementedPalettes
            // LP intro
            SUPP_NODE, 0x09, 28,
    };

    const std::vector<UINT16> supp_data_sonson_16color =
    {
        0x14 | SUPP_START, // SonSon
            // The 0x02 Monkeys palette should be handled by the user, since it's paired
            //SUPP_NODE, 0x1 | MOD_ABS, 8,
#ifdef GIANTMONKEYMODIFY
            SUPP_NODE | SUPP_NODE_NOCOPY, 0xF, 1,
            // main bandana, extra bandana color plus hair accents
            // While the following hews close to accuracy, these colors are entertwined elsewhere in her sprite so don't touch.
            //MOD_COPY, 5, 1, 9,
            //MOD_COPY, 5, 1, 10,
            //MOD_LUM, 10, 1, 20,
            // belt border
            MOD_COPY, 6, 3, 11,
            // suit to belt
            MOD_COPY, 9, 2, 14,
#endif

            // Giant monkey super hit frame, copying from the earlier Giant monkey extra palette
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x21, 1, 0x0F, 1,
                MOD_LUM, 1, 15, 10,
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x31, 2, 0x0F, 1,
                MOD_LUM, 1, 15, 5,
            SUPP_NODE_ABSOL | EXTRA_NODE_ONLY, 0x32, 2, 0x0F, 1,
                MOD_LUM, 1, 15, NEG + 12,
    };

    const std::vector<UINT16> supp_data_amingo =
    {
        indexCPS2Sprites_Amingo | SUPP_START,
            SUPP_NODE | SUPP_NODE_NOCOPY, 4 | MOD_ABS, 8,
                MOD_COPY, 6, 4, 7,
    };

    const std::vector<UINT16> supp_data_chunli =
    {
            /* The kick links have to be done by the user since this palette is paired
        0x1B | SUPP_START, //Chun-Li
            //SUPP_NODE_EX, Dest Start, Dest Inc, Src Start, Src Amt, Dst Index
            // I believe there's a bug in HPE1 and HKE1.  I think those are switched somehow: if you switch those
            // you see that they are identical as in HP==HKE1 and HK==HPE1. 

            SUPP_NODE_EX, 1 | MOD_ABS, 8, 1, 5, 1,  // straight copy
            SUPP_NODE_EX, 1 | MOD_ABS, 8, 8, 6, 6,  // straight copy
            SUPP_NODE_EX, 1 | MOD_ABS, 8, 8, 4, 12, MOD_LUM, 11, 1, NEG + 7,  // bugbug: yes this is wrong shade but hey it's closer

            //SUPP_NODE_EX, 1 | MOD_ABS, 8, 1, 5, 6,  // the dest offset here should have been 1
            //SUPP_NODE_EX, 1 | MOD_ABS, 8, 1, 4, 12,  // i don't think this does anything we care about
            //    MOD_LUM, 12, 4, 13,
            //SUPP_NODE_EX, 1 | MOD_ABS, 8, 5, 1, 11,  // unclear of this logic. 
            //    MOD_LUM, 11, 1, NEG + 7,
            */
    };

    const std::vector<UINT16> supp_data_megaman =
    {
        0x1C | SUPP_START, // Megaman
            // intro animation is 9 frames 0xb-0x13
                    // SUPP_NODE: starting_palette, palette_increment
            // color 0x01 is his outline, but it does change to align with the dominant color
            SUPP_NODE, 0x0B, 0x57,
                MOD_LUM, 1, 15, NEG + 25,
            SUPP_NODE, 0x0C, 0x57,
                MOD_LUM, 1, 15, NEG + 7,
            SUPP_NODE, 0x0D, 0x57,
                MOD_LUM, 1, 15, NEG + 5,
            SUPP_NODE, 0x0E, 0x57,
            SUPP_NODE, 0x0F, 0x57,
                MOD_LUM, 1, 15, 5,
            SUPP_NODE, 0x10, 0x57,
                MOD_LUM, 1, 15, 10,
            SUPP_NODE, 0x11, 0x57,
                MOD_LUM, 1, 15, 16,
            SUPP_NODE, 0x12, 0x57,
                MOD_LUM, 1, 15, 22,
            // 0x14-1c: rush: brightened version of the main rush/beat palette
            // 0x1d-25: beat: brightened version of the main rush/beat palette
            // 0x26-23: beat plane: uses a 5-color stretch of beat's 4 colors
            // 0x2f-37: charging
            // 0x38-40: rush drill: rush drill uses 6 colors of the rush palette starting at 0x02
            // 0x43-4b: hyper megaman armor/wings
            // 0x4c-54: hyper megaman: darkened version of the main palette
            SUPP_NODE, 0x4C, 0x57,
                MOD_LUM, 1, 15, NEG + 35,
            SUPP_NODE, 0x4D, 0x57,
                MOD_LUM, 1, 15, NEG + 27,
            SUPP_NODE, 0x4E, 0x57,
                MOD_LUM, 1, 15, NEG + 21,
            SUPP_NODE, 0x4F, 0x57,
            SUPP_NODE, 0x50, 0x57,
                MOD_LUM, 1, 15, 13,
            SUPP_NODE, 0x51, 0x57,
                MOD_LUM, 1, 15, 21,
            SUPP_NODE, 0x52, 0x57,
                MOD_LUM, 1, 15, 27,
            SUPP_NODE, 0x53, 0x57,
                MOD_LUM, 1, 15, 35,
            // 0x56-5d: hyper megaman switching back
    };

    const std::vector<UINT16> supp_data_roll =
    {
        0x1D | SUPP_START, // Roll: Identical to Megaman, except the outline is 0x15 instead of 0x01
            // intro animation is frames 0xb-0x13
            SUPP_NODE, 0x0B, 0x57,
                MOD_LUM, 1, 14, NEG + 21,
            SUPP_NODE, 0x0C, 0x57,
                MOD_LUM, 1, 14, NEG + 13,
            SUPP_NODE, 0x0D, 0x57,
                MOD_LUM, 1, 14, NEG + 5,
            SUPP_NODE, 0x0E, 0x57,
            SUPP_NODE, 0x0F, 0x57,
                MOD_LUM, 1, 14, 5,
            SUPP_NODE, 0x10, 0x57,
                MOD_LUM, 1, 14, 13,
            SUPP_NODE, 0x11, 0x57,
                MOD_LUM, 1, 14, 21,
            SUPP_NODE, 0x12, 0x57,
                MOD_LUM, 1, 14, 35,
            // 0x14-1c: rush
            // 0x1d-25: beat
            // 0x26-23: beat plane
            // 0x2f-37: charging
            // 0x38-40: rush drill
            // 0x4c-54: hyper roll
            SUPP_NODE, 0x4C, 0x57,
                MOD_LUM, 1, 14, NEG + 25,
            SUPP_NODE, 0x4D, 0x57,
                MOD_LUM, 1, 14, NEG + 7,
            SUPP_NODE, 0x4E, 0x57,
                MOD_LUM, 1, 14, NEG + 5,
            SUPP_NODE, 0x4F, 0x57,
            SUPP_NODE, 0x50, 0x57,
                MOD_LUM, 1, 14, 5,
            SUPP_NODE, 0x51, 0x57,
                MOD_LUM, 1, 14, 10,
            SUPP_NODE, 0x52, 0x57,
                MOD_LUM, 1, 14, 16,
            SUPP_NODE, 0x53, 0x57,
                MOD_LUM, 1, 14, 22,
            // 0x56-5d: hyper roll switching back
    };

    const std::vector<UINT16> supp_data_sakura_16color =
    {
        0x22 | SUPP_START, // Sakura - indexCPS2Sprites_Sakura 0x22
            //Kei should have the same outfit
            SUPP_NODE | SUPP_NODE_NOCOPY, 0x11, 2,
                MOD_COPY, 9, 7, 9,
            // Likewise with Evil Sakura
            SUPP_NODE | SUPP_NODE_NOCOPY, 0x31, 1,
                MOD_COPY, 9, 7, 9,
    };

    const std::vector<UINT16> supp_data_cammy =
    {
        0x24 | SUPP_START, //Cammy
            // 0x9-0x11 are the counter flash
            SUPP_NODE, 0x09, 9,
                MOD_TINT, 1, 15, 1, 0, 8, 15, // blue + 15
            SUPP_NODE, 0x0A, 9,
                MOD_TINT, 1, 15, 1, 0, 6, 14, // blue + 14
            SUPP_NODE, 0x0B, 9, 
                MOD_TINT, 1, 15, 1, 0, 4, 10, // blue + 10
            SUPP_NODE, 0x0C, 9,
                MOD_TINT, 1, 15, 1, 0, 2, 7, // blue + 7
            SUPP_NODE, 0x0D, 9,
                MOD_TINT, 1, 15, 1, 0, 0, 4, // blue + 3
            SUPP_NODE, 0x0E, 9,  // xcopy
            SUPP_NODE, 0x0F, 9,
                MOD_TINT, 1, 15, 1, NEG + 1, NEG + 1, 3, // dark blue + 3
            SUPP_NODE, 0x10, 9,
                MOD_TINT, 1, 15, 1, NEG + 2, NEG + 2, 5, // dark blue + 5
            SUPP_NODE, 0x11, 9,
                MOD_TINT, 1, 15, 1, NEG + 4, NEG + 4, 7, // dark blue + 7
    };

    const std::vector<UINT16> supp_data_dhalsim =
    {
        // 5 teleport frames
        0x25 | SUPP_START, //Dhalsim
            SUPP_NODE, 0x09, 5,
                MOD_LUM, 1, 15, 15,
            SUPP_NODE, 0x0A, 5,
                MOD_LUM, 1, 15, 27,
            SUPP_NODE, 0x0B, 5,
                MOD_LUM, 1, 15, 42,
            SUPP_NODE, 0x0C, 5,
                MOD_LUM, 1, 15, 65,
    };

    const std::vector<UINT16> supp_data_gambit =
    {
        // 5 win pose frames
        0x28 | SUPP_START, //Gambit
            SUPP_NODE, 0x09, 5,
                MOD_LUM, 1, 15, 10,
            SUPP_NODE, 0x0A, 5,
                MOD_LUM, 1, 15, 5,
            SUPP_NODE, 0x0B, 5,
            SUPP_NODE, 0x0C, 5,
                MOD_LUM, 1, 15, 5 + NEG,
            SUPP_NODE, 0x0D, 5,
                MOD_LUM, 1, 15, 10 + NEG,
    };

    const std::vector<UINT16> supp_data_juggernaut =
    {
        0x29 | SUPP_START, //Juggernaut
            // 8 Power-up frames
            SUPP_NODE, 0x0B, 10, 
                MOD_LUM, 1, 15, 6,
            SUPP_NODE, 0x0C, 10,
                MOD_LUM, 1, 15, 12,
            SUPP_NODE, 0x0D, 10,
                MOD_LUM, 1, 15, 15,
            SUPP_NODE, 0x0E, 10,
                MOD_LUM, 1, 15, 18,
            SUPP_NODE, 0x0F, 10,
                MOD_LUM, 1, 15, 12,
            SUPP_NODE, 0x10, 10,
                MOD_LUM, 1, 15, 7,
            SUPP_NODE, 0x11, 10,
                MOD_LUM, 1, 15, 4,
            SUPP_NODE, 0x12, 10,
    };

    const std::vector<UINT16> supp_data_storm =
    {
        0x2A | SUPP_START, //Storm
            // the 0x09-0x11 lightning super effect is SHARED for all 6 colors, so no you don't really want to touch it

            //  lightning effect
            SUPP_NODE, 0x19, 3,
            SUPP_NODE, 0x1A, 3,
                MOD_LUM, 1, 15, 7,
            // hail storm
            SUPP_NODE, 0x1B, 3,
                MOD_LUM, 1, 15, 17,
    };

    const std::vector<UINT16> supp_data_shuma =
    {
        0x2D | SUPP_START, //Shuma Gorath
            // Dash/Guard: Extra 01
            SUPP_NODE_EX, 0x01 | MOD_ABS, 8, 1, 8, 1,

            // Stance (after FP): 11-15
            SUPP_NODE_EX, 0x11, 0x30, 2, 7, 2,
            SUPP_NODE_EX, 0x12, 0x30, 2, 7, 2,
            SUPP_NODE_EX, 0x13, 0x30, 2, 7, 2,
            SUPP_NODE_EX, 0x14, 0x30, 2, 7, 2,
            SUPP_NODE_EX, 0x15, 0x30, 2, 7, 2,

            // Stone Drop (d+HK): 16-1A
            SUPP_NODE_EX, 0x16, 0x30, 9, 3, 9,
            SUPP_NODE, 0x17, 0x30,
                MOD_SAT, 1, 8, NEG + 70,
                MOD_LUM, 1, 8, 5,
            SUPP_NODE, 0x18, 0x30,
                MOD_SAT, 1, 8, NEG + 55,
                MOD_LUM, 1, 8, 5,
            SUPP_NODE, 0x19, 0x30,
                MOD_SAT, 1, 8, NEG + 30,
                MOD_LUM, 1, 8, 5,
            SUPP_NODE, 0x1A, 0x30,

            // HP Flash frames: 2F-35
            SUPP_NODE_EX, 0x2F, 0x30, 2, 7, 2,
            SUPP_NODE_EX, 0x30, 0x30, 2, 7, 2,
            SUPP_NODE_EX, 0x31, 0x30, 2, 7, 2,
            SUPP_NODE_EX, 0x32, 0x30, 2, 7, 2,
            SUPP_NODE_EX, 0x33, 0x30, 2, 7, 2,
            SUPP_NODE_EX, 0x34, 0x30, 2, 7, 2,
            SUPP_NODE_EX, 0x35, 0x30, 2, 7, 2,

            // Chaos Dimension: 0x36-3F
            SUPP_NODE_EX, 0x36, 0x30, 1, 11, 1,
                MOD_SAT, 2, 7, NEG + 65,
                MOD_LUM, 2, 7, 17,
                MOD_SAT, 9, 3, NEG + 25,
                MOD_LUM, 9, 3, 10,

            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x38, 0x30, 0x36, 0x30, 1, 15, 1,

            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x38, 0x30, 0x38, 0x30, 6, 1, 7,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x38, 0x30, 0x38, 0x30, 6, 1, 8,
                MOD_LUM, 7, 1, 10,
                MOD_LUM, 8, 1, 15,
                MOD_SAT, 2, 5, NEG + 30,
                MOD_LUM, 9, 3, 10,
                MOD_SAT, 9, 3, NEG + 10,

            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x30, 0x38, 0x30, 2, 7, 2,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x30, 0x3A, 0x30, 7, 1, 2,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x30, 0x3A, 0x30, 7, 1, 5,
                MOD_LUM, 7, 1, 5,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x30, 0x38, 0x30, 10, 1, 10,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x30, 0x38, 0x30, 11, 1, 9,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3A, 0x30, 0x38, 0x30, 11, 1, 11,

            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x30, 0x38, 0x30, 11, 1, 9,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x30, 0x38, 0x30, 10, 1, 10,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x30, 0x38, 0x30, 9, 1, 11,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x30, 0x38, 0x30, 6, 1, 2,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x30, 0x38, 0x30, 6, 1, 3,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x30, 0x38, 0x30, 5, 1, 4,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x30, 0x38, 0x30, 4, 1, 5,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x30, 0x38, 0x30, 3, 1, 6,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x30, 0x38, 0x30, 2, 1, 7,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3C, 0x30, 0x38, 0x30, 2, 1, 8,
                MOD_LUM, 3, 2, 4,
                MOD_LUM, 6, 1, 8,
        
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3E, 0x30, 0x3C, 0x30, 2, 7, 2,
                MOD_LUM, 2, 7, 4,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3E, 0x30, 0x3C, 0x30, 9, 2, 9,
                MOD_LUM, 9, 2, 4,

            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x37, 0x30, 0x36, 0x30, 1, 8, 1,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x39, 0x30, 0x38, 0x30, 1, 8, 1,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3B, 0x30, 0x3A, 0x30, 1, 8, 1,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3D, 0x30, 0x3C, 0x30, 1, 8, 1,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x3F, 0x30, 0x3E, 0x30, 1, 8, 1,

            // Mystic Smash Shadows
            SUPP_NODE, 0x40, 0x30,
                MOD_LUM, 1, 15, NEG + 60,
    };

    const std::vector<UINT16> supp_data_silversamurai =
    {
        0x2F | SUPP_START, //Silver Samurai
            // Shadow frame
            SUPP_NODE, 0x01 | MOD_ABS, 8,
                MOD_LUM, 1, 15, 5 + NEG,
            // Shine frames 1-7
            SUPP_NODE, 0x09, 8,
            SUPP_NODE, 0x0A, 8,
                MOD_LUM, 8, 7, 10 + NEG,
            SUPP_NODE, 0x0B, 8,
                MOD_COPY, 7, 2, 13,
            SUPP_NODE, 0x0C, 8,
                MOD_COPY, 7, 4, 11,
            SUPP_NODE, 0x0D, 8,
                MOD_COPY, 7, 6, 10,
            SUPP_NODE, 0x0E, 8,
            SUPP_NODE, 0x0F, 8,
                MOD_LUM, 1, 15, 5 + NEG,
    };

    const std::vector<UINT16> supp_data_omegared =
    {
        0x30 | SUPP_START, //Omega Red: intro frames
            SUPP_NODE, 0x09, 4,
                MOD_LUM, 1, 15, 25 + NEG,
            SUPP_NODE, 0x0A, 4,
                MOD_LUM, 1, 15, 12 + NEG,
            SUPP_NODE, 0x0B, 4,
                MOD_LUM, 1, 15, 9 + NEG,
            SUPP_NODE, 0x0C, 4,
                MOD_LUM, 1, 15, 5 + NEG,
    };

    const std::vector<UINT16> supp_data_spiral =
    {
        0x31 | SUPP_START, //Spiral

            // 2D-32 Power-Up Enhance
            SUPP_NODE, 0x2D, 28,
            SUPP_NODE, 0x2E, 28,
                MOD_SAT, 1, 1, 60,
                MOD_SAT, 6, 10, 60,
            SUPP_NODE, 0x2F, 28,
                MOD_SAT, 2, 4, NEG + 80,
                MOD_LUM, 2, 4, NEG + 8,
            SUPP_NODE, 0x30, 28,
                MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
                MOD_TINT, 6, 3, 6, 2, 0, 0,
                MOD_TINT, 14, 2, 14, 2, 0, 0,
                MOD_TINT, 10, 4, 10, 8, 0, 0,
            SUPP_NODE, 0x31, 28,
                MOD_TINT, 2, 4, 2, 6, 0, 0,
                MOD_TINT, 6, 3, 6, 4, 0, 0,
                MOD_TINT, 14, 2, 14, 4, 0, 0,
                MOD_TINT, 10, 4, 10, 8, NEG + 2, NEG + 2,
            SUPP_NODE, 0x32, 28,
                MOD_TINT, 2, 4, 2, 5, NEG + 1, NEG + 1,
                MOD_TINT, 6, 3, 6, 2, 0, 0,
                MOD_TINT, 14, 2, 14, 2, 0, 0,
                MOD_TINT, 10, 4, 10, 10, 0, 0,


            // 33-38 Speed-up Enhance
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
        
            // 38-46 Metamorphosis Dance
            SUPP_NODE, 0x3B, 28,

            SUPP_NODE, 0x3C, 28,
                MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
                MOD_TINT, 6, 3, 6, 4, 0, 0,
                MOD_TINT, 14, 2, 14, 4, 0, 0,
                MOD_TINT, 10, 4, 10, 2, 2, 4,
            SUPP_NODE, 0x3D, 28,
                MOD_TINT, 2, 4, 2, 6, 0, 0,
                MOD_TINT, 6, 3, 6, 2, 0, 0,
                MOD_TINT, 14, 2, 14, 2, 0, 0,
                MOD_TINT, 10, 4, 10, 3, 5, NEG + 3,
            SUPP_NODE, 0x3E, 28,
                MOD_TINT, 2, 4, 2, 5, NEG + 1, NEG + 1,
                MOD_TINT, 6, 3, 6, 4, 0, 0,
                MOD_TINT, 14, 2, 14, 4, 0, 0,
                MOD_TINT, 10, 4, 10, 5, 5, NEG + 3,
            SUPP_NODE, 0x3F, 28,
                MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
                MOD_TINT, 6, 3, 6, 2, 0, 0,
                MOD_TINT, 14, 2, 14, 2, 0, 0,
                MOD_TINT, 10, 4, 10, 5, 5, NEG + 6,
            SUPP_NODE, 0x40, 28,
                MOD_TINT, 2, 4, 2, 6, 0, 0,
                MOD_TINT, 6, 3, 6, 4, 0, 0,
                MOD_TINT, 14, 2, 14, 4, 0, 0,
                MOD_TINT, 10, 4, 10, 5, 4, NEG + 4,
            SUPP_NODE, 0x41, 28,
                MOD_TINT, 2, 4, 2, 5, NEG + 1, NEG + 1,
                MOD_TINT, 6, 3, 6, 2, 0, 0,
                MOD_TINT, 14, 2, 14, 2, 0, 0,
                MOD_TINT, 10, 4, 10, 7, NEG + 1, NEG + 4,
            SUPP_NODE, 0x42, 28,
                MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
                MOD_TINT, 6, 3, 6, 4, 0, 0,
                MOD_TINT, 14, 2, 14, 4, 0, 0,
                MOD_TINT, 10, 4, 10, 10, NEG + 2, NEG + 2,
            SUPP_NODE, 0x43, 28,
                MOD_TINT, 2, 4, 2, 6, 0, 0,
                MOD_TINT, 6, 3, 6, 2, 0, 0,
                MOD_TINT, 14, 2, 14, 2, 0, 0,
                MOD_TINT, 10, 4, 10, 10, 0, 0,
            SUPP_NODE, 0x44, 28,
                MOD_TINT, 2, 4, 2, 5, NEG + 1, NEG + 1,
                MOD_TINT, 6, 3, 6, 4, 0, 0,
                MOD_TINT, 14, 2, 14, 4, 0, 0,
                MOD_TINT, 10, 4, 10, 2, NEG + 1, 9,
            SUPP_NODE, 0x45, 28,
                MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
                MOD_TINT, 6, 3, 6, 2, 0, 0,
                MOD_TINT, 14, 2, 14, 2, 0, 0,
                MOD_TINT, 10, 4, 10, 2, 2, 13,

            SUPP_NODE, 0x46, 28,
    };

    const std::vector<UINT16> supp_data_colossus =
    {
        0x32 | SUPP_START, // Colossus

            // Stance frame
            SUPP_NODE, 0x03 | MOD_ABS, 8,
                MOD_LUM, 1, 15, NEG + 8,

            // Super Armor Shine 1-6
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

            // Stance frame 1-9
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

            // Power Dive Shine Frame 1-10
            SUPP_NODE, 0x18, 32,
                MOD_LUM, 1, 15, 31,
            SUPP_NODE, 0x19, 32,
                MOD_LUM, 1, 15, 45,
            SUPP_NODE, 0x1B, 32,
                MOD_LUM, 1, 15, NEG + 18,

            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1B, 32, 0x1B, 32, 9, 1, 8,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1B, 32, 0x1B, 32, 3, 1, 2,

            SUPP_NODE, 0x1C, 32,
                MOD_LUM, 1, 15, NEG + 13,

            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1C, 32, 0x1C, 32, 9, 1, 8,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1C, 32, 0x1C, 32, 3, 1, 2,

            SUPP_NODE, 0x1D, 32,
                MOD_LUM, 1, 15, NEG + 6,

            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1D, 32, 0x1D, 32, 9, 1, 8,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1D, 32, 0x1D, 32, 3, 1, 6,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1D, 32, 0x1D, 32, 4, 1, 7,
            SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x1D, 32, 0x1D, 32, 3, 1, 2,

            SUPP_NODE, 0x1E, 32,

            // These three are listed as super armor stance frame 1-3 for COTA
            SUPP_NODE, 0x1F, 32,
                MOD_LUM, 1, 15, NEG + 5,
            SUPP_NODE, 0x20, 32,
                MOD_LUM, 1, 15, 25,
            SUPP_NODE, 0x21, 32,

            // Super armor stance frame 1-7
            SUPP_NODE, 0x22, 32,
                MOD_LUM, 2, 14, NEG + 5,
                MOD_WHITE, 7, 1,
            SUPP_NODE, 0x23, 32,
                MOD_LUM, 2, 14, NEG + 8,
                MOD_WHITE, 6, 1,
            SUPP_NODE, 0x24, 32,
                MOD_LUM, 2, 14, NEG + 4,
                MOD_WHITE, 5, 1,
            SUPP_NODE, 0x25, 32,
                MOD_WHITE, 4, 1,
            SUPP_NODE, 0x26, 32,
                MOD_LUM, 2, 14, 30,
            SUPP_NODE, 0x27, 32,
                MOD_LUM, 2, 14, 45,
                MOD_LUM, 07, 1, NEG + 7,
                MOD_SAT, 07, 1, 50,
            SUPP_NODE, 0x28, 32,
    };

    const std::vector<UINT16> supp_data_sentinel =
    {
        /* This is paired, so the user needs to handle guts themselves.
        0x34 | SUPP_START, //Sentinel
            SUPP_NODE | SUPP_NODE_NOCOPY, 0x01 | MOD_ABS, 8,
                MOD_COPY, 1, 7, 1,
        */
    };

    const std::vector<UINT16> supp_data_jin_16color =
    {
        0x37 | SUPP_START, //Jin
            // Special armor isn't linked to the main palette
            // 
            // power-up flash: 6 frames
                // first palette is solid white
            SUPP_NODE, 0x6a, 6,
                MOD_LUM, 1, 15, 32,
            SUPP_NODE, 0x6b, 6,
                MOD_LUM, 1, 15, 25,
            SUPP_NODE, 0x6c, 6,
                MOD_LUM, 1, 15, 16,
            SUPP_NODE, 0x6d, 6,
                MOD_LUM, 1, 15, 10,

            //SUPP_NODE_EX, Dest Palette, Dest Inc, Src Start, Src Amt, Dst Index
            // 0x51 are the "player" hands for blodia vulcan
            SUPP_NODE_EX, 0xc9, 3, 6, 10, 6,
                MOD_LUM, 6, 10, 10,

            // these are for the 6 towel taunt palettes
            SUPP_NODE, 0xf9, 6,
                MOD_TINT, 2, 4, 2, 0, NEG + 1, NEG + 1,
            SUPP_NODE, 0xfa, 6,
                MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
            SUPP_NODE, 0xfb, 6,
                MOD_TINT, 2, 4, 2, 0, NEG + 3, NEG + 3,
            SUPP_NODE, 0xfc, 6,
                MOD_TINT, 2, 4, 2, 0, NEG + 4, NEG + 4,
            SUPP_NODE, 0xfd, 6,
                MOD_TINT, 2, 4, 2, 0, NEG + 5, NEG + 5,
            SUPP_NODE, 0xfe, 6,
                MOD_TINT, 2, 4, 2, 0, NEG + 6, NEG + 6,
    };

    const std::vector<UINT16> supp_data_bonerine =
    {
        0x39 | SUPP_START, // Bonerine
            // his berserker barrage trails a bit of his costume.
            SUPP_NODE | SUPP_NODE_NOCOPY, 2 | MOD_ABS, 8,
                MOD_COPY, 2, 1, 12,
                MOD_COPY, 11, 1, 13,
                MOD_COPY, 10, 1, 14,
                MOD_COPY,  9, 1, 15,
    };

    const std::vector<UINT16> supp_data_kobun =
    {
        0x3A | SUPP_START, //Kobun
            SUPP_NODE, 6 | MOD_ABS, 8, // Kobun Assist

            SUPP_NODE, 0x09, 5, // King Kobun
            SUPP_NODE, 0x0A, 5,
                MOD_LUM, 1, 15, 23,
            SUPP_NODE, 0x0B, 5,
                MOD_LUM, 1, 15, 32,
            SUPP_NODE, 0x0C, 5,
                MOD_LUM, 1, 15, 40,
    };

    const std::vector<std::vector<UINT16>> mvc2_6color_supp_const =
    {
        // indexCPS2Sprites_Ryu,          // 0x00
        {},
        // indexCPS2Sprites_Zangief,      // 0x01
        supp_data_zangief_6color,
        // indexCPS2Sprites_Guile,        // 0x02
        {},
        // indexCPS2Sprites_Morrigan,     // 0x03
        supp_data_morrigan_6color,
        // indexCPS2Sprites_Anakaris,     // 0x04
        supp_data_anakaris,
        // indexCPS2Sprites_Strider,      // 0x05
        {},
        // indexCPS2Sprites_Cyclops,      // 0x06
        supp_data_cyclops_6color,
        // indexCPS2Sprites_Wolverine,    // 0x07
        supp_data_wolverine,
        // indexCPS2Sprites_Psylocke,     // 0x08
        {},
        // indexCPS2Sprites_Iceman,       // 0x09
        supp_data_iceman_6color,
        // indexCPS2Sprites_Rogue,        // 0x0A
        supp_data_rogue_6color,
        // indexCPS2Sprites_CapAm,        // 0x0B, // Captain America
        supp_data_captainamerica,
        // indexCPS2Sprites_Spidey,       // 0x0C, // Spider-Man
        supp_data_spiderman,
        // indexCPS2Sprites_Hulk,         // 0x0D
        {},
        // indexCPS2Sprites_Venom,        // 0x0E
        {},
        // indexCPS2Sprites_DrDoom,       // 0x0F
        supp_data_doom,
        // indexCPS2Sprites_Tron,         // 0x10, // Tron Bonne
        {},
        // indexCPS2Sprites_Jill,         // 0x11
        {},
        // indexCPS2Sprites_Hayato,       // 0x12
        {},
        // indexCPS2Sprites_Ruby,         // 0x13
        {},
        // indexCPS2Sprites_SonSon,       // 0x14
        supp_data_sonson_6color,
        // indexCPS2Sprites_Amingo,       // 0x15
        supp_data_amingo,
        // indexCPS2Sprites_Marrow,       // 0x16
        {},
        // indexCPS2Sprites_Cable,        // 0x17
        {},
        // indexCPS2Sprites_Abyss1,       // 0x18
        {},
        // indexCPS2Sprites_Abyss2,       // 0x19
        {},
        // indexCPS2Sprites_Abyss3,       // 0x1A
        {},
        // indexCPS2Sprites_ChunLi,       // 0x1B
        supp_data_chunli,
        // indexCPS2Sprites_Megaman,      // 0x1C
        supp_data_megaman,
        // indexCPS2Sprites_Roll,         // 0x1D
        supp_data_roll,
        // indexCPS2Sprites_Akuma,        // 0x1E, // Gouki
        {},
        // indexCPS2Sprites_BBHood,       // 0x1F
        {},
        // indexCPS2Sprites_Felicia,      // 0x20
        {},
        // indexCPS2Sprites_Charlie,      // 0x21, // Charlie/Nash/Shadow
        {},
        // indexCPS2Sprites_Sakura,       // 0x22
        supp_data_sakura_6color,
        // indexCPS2Sprites_Dan,          // 0x23
        {},
        // indexCPS2Sprites_Cammy,        // 0x24
        supp_data_cammy,
        // indexCPS2Sprites_Dhalsim,      // 0x25
        supp_data_dhalsim,
        // indexCPS2Sprites_Bison,        // 0x26
        {},
        // indexCPS2Sprites_Ken,          // 0x27
        {},
        // indexCPS2Sprites_Gambit,       // 0x28
        supp_data_gambit,
        // indexCPS2Sprites_Juggy,        // 0x29, // Juggernaut
        supp_data_juggernaut,
        // indexCPS2Sprites_Storm,        // 0x2A
        supp_data_storm,
        // indexCPS2Sprites_Sabretooth,   // 0x2B
        {},
        // indexCPS2Sprites_Magneto,      // 0x2C
        {},
        // indexCPS2Sprites_Shuma,        // 0x2D
        supp_data_shuma,
        // indexCPS2Sprites_WarMachine,   // 0x2E
        {},
        // indexCPS2Sprites_SilverSamurai, // 0x2F
        supp_data_silversamurai,
        // indexCPS2Sprites_OmegaRed,     // 0x30
        supp_data_omegared,
        // indexCPS2Sprites_Spiral,       // 0x31
        supp_data_spiral,
        // indexCPS2Sprites_Colossus,     // 0x32
        supp_data_colossus,
        // indexCPS2Sprites_IronMan,      // 0x33
        {},
        // indexCPS2Sprites_Sentinel,     // 0x34
        supp_data_sentinel,
        // indexCPS2Sprites_Blackheart,   // 0x35
        {},
        // indexCPS2Sprites_Thanos,       // 0x36
        {},
        // indexCPS2Sprites_Jin,          // 0x37
        supp_data_jin_6color,
        // indexCPS2Sprites_CapCom,       // 0x38, // Captain Commando
       {},
        // indexCPS2Sprites_Bonerine,     // 0x39
        supp_data_bonerine,
        // indexCPS2Sprites_Kobun,        // 0x3A
        supp_data_kobun,
    };

    const std::vector<std::vector<UINT16>> mvc2_16color_supp_const =
    {
        // indexCPS2Sprites_Ryu,          // 0x00
        {},
        // indexCPS2Sprites_Zangief,      // 0x01
        supp_data_zangief_16color,
        // indexCPS2Sprites_Guile,        // 0x02
        {},
        // indexCPS2Sprites_Morrigan,     // 0x03
        supp_data_morrigan_16color,
        // indexCPS2Sprites_Anakaris,     // 0x04
        supp_data_anakaris,
        // indexCPS2Sprites_Strider,      // 0x05
        {},
        // indexCPS2Sprites_Cyclops,      // 0x06
        supp_data_cyclops_16color,
        // indexCPS2Sprites_Wolverine,    // 0x07
        supp_data_wolverine,
        // indexCPS2Sprites_Psylocke,     // 0x08
        {},
        // indexCPS2Sprites_Iceman,       // 0x09
        supp_data_iceman_16color,
        // indexCPS2Sprites_Rogue,        // 0x0A
        supp_data_rogue_16color,
        // indexCPS2Sprites_CapAm,        // 0x0B, // Captain America
        supp_data_captainamerica,
        // indexCPS2Sprites_Spidey,       // 0x0C, // Spider-Man
        supp_data_spiderman,
        // indexCPS2Sprites_Hulk,         // 0x0D
        {},
        // indexCPS2Sprites_Venom,        // 0x0E
        {},
        // indexCPS2Sprites_DrDoom,       // 0x0F
        supp_data_doom,
        // indexCPS2Sprites_Tron,         // 0x10, // Tron Bonne
        {},
        // indexCPS2Sprites_Jill,         // 0x11
        {},
        // indexCPS2Sprites_Hayato,       // 0x12
        {},
        // indexCPS2Sprites_Ruby,         // 0x13
        {},
        // indexCPS2Sprites_SonSon,       // 0x14
        supp_data_sonson_16color,
        // indexCPS2Sprites_Amingo,       // 0x15
        supp_data_amingo,
        // indexCPS2Sprites_Marrow,       // 0x16
        {},
        // indexCPS2Sprites_Cable,        // 0x17
        {},
        // indexCPS2Sprites_Abyss1,       // 0x18
        {},
        // indexCPS2Sprites_Abyss2,       // 0x19
        {},
        // indexCPS2Sprites_Abyss3,       // 0x1A
        {},
        // indexCPS2Sprites_ChunLi,       // 0x1B
        supp_data_chunli,
        // indexCPS2Sprites_Megaman,      // 0x1C
        supp_data_megaman,
        // indexCPS2Sprites_Roll,         // 0x1D
        supp_data_roll,
        // indexCPS2Sprites_Akuma,        // 0x1E, // Gouki
        {},
        // indexCPS2Sprites_BBHood,       // 0x1F
        {},
        // indexCPS2Sprites_Felicia,      // 0x20
        {},
        // indexCPS2Sprites_Charlie,      // 0x21, // Charlie/Nash/Shadow
        {},
        // indexCPS2Sprites_Sakura,       // 0x22
        supp_data_sakura_16color,
        // indexCPS2Sprites_Dan,          // 0x23
        {},
        // indexCPS2Sprites_Cammy,        // 0x24
        supp_data_cammy,
        // indexCPS2Sprites_Dhalsim,      // 0x25
        supp_data_dhalsim,
        // indexCPS2Sprites_Bison,        // 0x26
        {},
        // indexCPS2Sprites_Ken,          // 0x27
        {},
        // indexCPS2Sprites_Gambit,       // 0x28
        supp_data_gambit,
        // indexCPS2Sprites_Juggy,        // 0x29, // Juggernaut
        supp_data_juggernaut,
        // indexCPS2Sprites_Storm,        // 0x2A
        supp_data_storm,
        // indexCPS2Sprites_Sabretooth,   // 0x2B
        {},
        // indexCPS2Sprites_Magneto,      // 0x2C
        {},
        // indexCPS2Sprites_Shuma,        // 0x2D
        supp_data_shuma,
        // indexCPS2Sprites_WarMachine,   // 0x2E
        {},
        // indexCPS2Sprites_SilverSamurai, // 0x2F
        supp_data_silversamurai,
        // indexCPS2Sprites_OmegaRed,     // 0x30
        supp_data_omegared,
        // indexCPS2Sprites_Spiral,       // 0x31
        supp_data_spiral,
        // indexCPS2Sprites_Colossus,     // 0x32
        supp_data_colossus,
        // indexCPS2Sprites_IronMan,      // 0x33
        {},
        // indexCPS2Sprites_Sentinel,     // 0x34
        supp_data_sentinel,
        // indexCPS2Sprites_Blackheart,   // 0x35
        {},
        // indexCPS2Sprites_Thanos,       // 0x36
        {},
        // indexCPS2Sprites_Jin,          // 0x37
        supp_data_jin_16color,
        // indexCPS2Sprites_CapCom,       // 0x38, // Captain Commando
        {},
        // indexCPS2Sprites_Bonerine,     // 0x39
        supp_data_bonerine,
        // indexCPS2Sprites_Kobun,        // 0x3A
        supp_data_kobun,
    };
};
