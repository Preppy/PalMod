
void dump_palettes(UINT16 char_id, UINT16 source_palette, UINT16 compare_char, UINT16 destination_palette);
void DumpAllPalettes();
bool IsPaletteOutOfSync(UINT16 char_id, UINT16 source_palette, UINT16 compare_char, UINT16 destination_palette);
void ValidateAllPalettes(BOOL* pfChangesWereMade, BOOL* rgPaletteChangeArray);
void FixAllProblemPalettes(BOOL* rgPaletteChangeArray);
