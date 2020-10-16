#pragma once

constexpr auto MAX_DESCRIPTION_LENGTH = 96;
constexpr auto MAX_FILENAME_LENGTH = 32;

constexpr auto UNIT_START_VALUE   = 0x0080;
constexpr auto INVALID_UNIT_VALUE = 0xffff;

constexpr auto MAX_IMAGES_DISPLAYABLE = 32;
// MAX_PALETTES_DISPLAYABLE should be 2x images as the slicer will divide large palettes in skinny / 8cpl mode
constexpr auto MAX_PALETTES_DISPLAYABLE = MAX_IMAGES_DISPLAYABLE * 2;
constexpr auto MAX_SEPARATORS = MAX_PALETTES_DISPLAYABLE;
constexpr auto MAX_PALETTE_PAGES = MAX_PALETTES_DISPLAYABLE;
