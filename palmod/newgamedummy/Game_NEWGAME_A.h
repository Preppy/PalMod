#pragma once
#include "GameClassByDir.h"
#include "NEWGAME_A_DEF.h"

// Howdy!  To adapt this file for your game:
// 
// In this file:
// * replace usage of NEWGAME with the shortname for your game.
// * Update the m_sCoreGameData struct with the specific information for your game.

// Elsewhere:
// * go to game\gamedef.h and add your game to the end of SupportedGamesList
// * in gamedef.h add a string for your name to the end of g_GameFriendlyName
// * go to game\gameload.cpp and add an include for your game's header
// * in game\gameload.cpp add a handler for your game to CGameLoad::SetGame
// * in game\gameload.cpp add a handler for your game to CGameLoad::CreateGame
// * go to palmoddlg_file.cpp and add your game to the SupportedGameList array
// There are static asserts that will fire at build time if you forget to update GameLoad and PalmodDlg_File -
// hopefully that makes it all very easy to remember.

// That's it!  Good luck!  If you have any questions, feel free to ask.

class CGame_NEWGAME_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            // Game file name and file size.
            { L"NEWGAME.ROM", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        // Name to display in the title bar in PalMod when this game is loaded.
        L"My Exciting NEWGAME",
        // Game flag: you need to add a value for your game in gamedef.h and then use that value here.
        NEWGAME_A,
        // This value is used to determine which section of the image file is used.  Only relevant
        // once you have images in imgdat to use for previews.
        IMGDAT_SECTION_CPS2,
        // This is the vector of images present in imgdat once that happens.
        NEWGAME_A_IMG_UNITS,
        {
            // NO_SPECIAL_OPTIONS is obsolete, don't change this value.
            NO_SPECIAL_OPTIONS,
            // This is the number of colors to write when saving to the game ROM before we need to add another reserved color / "counter" color.
            // You can set this to PALWriteOutputOptions::WRITE_MAX to write out a maximum of 256 colors.  See CGameClass::UpdatePalData for 
            // further insight if you really care.
            PALWriteOutputOptions::WRITE_16
    },
        //Set the image out display type: either left to right or top down.
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        // Check out the available options in buttondef.h.  This is for P1/P2, A/B/C/D, LP/LK/MP/MK/HP/HK style nodes.
        // Note that this value should reflect the actual nodes defined in your DEF file.
        DEF_NOBUTTONS,
        // Set alpha mode: this determines whether or not we set alpha values for the data we write back to the game ROM.
        // For color mode COLMODE_RGB444_BE you usually want it not set, for NEOGEO you cannot use it (there's no bit(s) for it), and for 15/15ALT you probably want it on.
        AlphaMode::GameDoesNotUseAlpha,
        // Set color mode: see the definitions in ColorSystem.h
        ColMode::COLMODE_RGB444_BE,
        // Don't change this: this is the struct above.
        m_sFileLoadingData,
        // You can optionally plug in CRC32 / version-specific data here through defining a vector of type sCRC32ValueSet.
        // This allows for handling different versions of a game that need to shift offset locations, for example.
        {},
        // This is the array you defined in the DEF file.
        NEWGAME_A_UNITS,
        // ... and the sizeof that array
        ARRAYSIZE(NEWGAME_A_UNITS),
        // Extra filename: allows user to load new palettes at runtime
        L"NewGameE.txt",                
        // Count of known palettes listed in the header NEWGAME_A_DEF
        8,                              
        // Lowest known location used for internally listed palettes
        0xbadf00d,                      
    };

public:
    CGame_NEWGAME_A(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
