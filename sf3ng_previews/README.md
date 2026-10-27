Preview images for the SF3 New Generation entries, for img2020.dat (SF3 section).

They're indexed PNGs. The pixel values are the palette indices PalMod uses (0 is transparent), so Image.open(file).tobytes() gives back the raw image. The PNG palette is just the NG colours of the first entry that uses the image, so you can look at them. File names follow the usual unit-XX-img-YY-W-w-H-h raw naming, and manifest.csv says which entry uses each one.

New units in ImgIdDef.h after indexSF3NGSprites_Bonus (0x18): 0x19-0x25 are the characters (Alex ... Gill), 0x26 is Stages and 0x27 is Endings. The new Bonus images are 0x30-0x37, 0x40-0x47, 0x50-0x5d, 0x60-0x75 and 0x80-0x98; 0x00-0x14 are the ones already in the library. Entries that use 3rd Strike pictures point at images you already have, so those aren't in here.
