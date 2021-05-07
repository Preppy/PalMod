#pragma once

constexpr auto MAX_DESCRIPTION_LENGTH = 96;
constexpr auto MAX_FILENAME_LENGTH = 32;

constexpr auto UNIT_START_VALUE   = 0x0080;
constexpr auto INVALID_UNIT_VALUE = 0xffff;

constexpr auto MAX_IMAGES_DISPLAYABLE = 32;
constexpr auto FLIPPED_IMAGES_MESSAGE_OFFSET = MAX_IMAGES_DISPLAYABLE + 1;
// MAX_PALETTES_DISPLAYABLE should be 2x images as the slicer will divide large palettes in skinny / 8cpl mode
constexpr auto MAX_PALETTES_DISPLAYABLE = MAX_IMAGES_DISPLAYABLE * 2;
constexpr auto MAX_SEPARATORS = MAX_PALETTES_DISPLAYABLE;
constexpr auto MAX_PALETTE_PAGES = MAX_PALETTES_DISPLAYABLE;

enum PALWriteOutputOptions
{
    // This is the number of colors to write when saving to the game ROM before we need to add another reserved color/counter UINT16.
    // You can set this to WRITE_MAX to write out a maximum of 256 colors.  See CGameClass::UpdatePalData for usage.
    // You're only really going to be able to prove the game's maximum palette length with palettes longer than 16 colors.
    WRITE_16 = 16,
    WRITE_MAX = 256,
};
