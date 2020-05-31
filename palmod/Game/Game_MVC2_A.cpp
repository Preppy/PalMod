#include "StdAfx.h"
#include "..\StdAfx.h"
#include "GameDef.h"
#include "Game_MVC2_A.h"
#include "Game_MVC2_D.h"
#include "mvc2_descs.h"
#include "mvc2_supp.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define MVC2_A_DEBUG DEFAULT_GAME_DEBUG_STATE

// Cleanup on this static allocation is handled in CGameLoad::~CGameLoad
stExtraDef* CGame_MVC2_A::MVC2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_MVC2_A::MainDescTree = CGame_MVC2_A::InitDescTree();

UINT32 CGame_MVC2_A::m_nTotalPaletteCountForMVC2 = 0;

CGame_MVC2_A::CGame_MVC2_A()
{
    CString strMessage;
    strMessage.Format("CGame_MVC2_A::CGame_MVC2_A: Loading...\n" );
    OutputDebugString(strMessage);

    m_nTotalInternalUnits = MVC2_A_NUMUNIT;
    m_nExtraUnit = MVC2_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 6290;
    m_pszExtraFilename = EXTRA_FILENAME_MVC2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMVC2;
    m_nLowestKnownPaletteRomLocation = m_uLowestKnownPaletteROMLocation;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_12A);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_17);

    //Set game information
    nGameFlag = MVC2_A;
    nImgGameFlag = IMG4;
    nImgUnitAmt = MVC2_D_NUM_IMG_UNITS;

    nDisplayW = 8;
    nFileAmt = 1;

    //Set the image out display type
    DisplayType = DISP_DEF;
    pButtonLabel = const_cast<CHAR*>((CHAR*)DEF_BUTTONLABEL6_MVC2);

    //Set the MVC2 supp game
    CurrMVC2 = (CGame_MVC2_D*)this; //bugbug: lazy
    CurrMVC2_Arcade = this; //bugbug: lazy
    //Prepare it
    prep_supp(false);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    rgFileChanged = new UINT16;

    nRGBIndexAmt = 15;
    nAIndexAmt = 0;

    nRGBIndexMul = 17.0f;
    nAIndexMul = 0.0f;
}

CGame_MVC2_A::~CGame_MVC2_A(void)
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    safe_delete(rgFileChanged);
}

CDescTree* CGame_MVC2_A::GetMainTree()
{
    return &CGame_MVC2_A::MainDescTree;
}

int CGame_MVC2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    static int rgExtraCountAll[MVC2_A_NUMUNIT + 1] = { -1 };

    int* rgExtraCt = (int*)rgExtraCountAll;

    if (rgExtraCt[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCt, 0, ((MVC2_A_NUMUNIT + 1) * sizeof(int)));

        stExtraDef* pCurrDef = GetExtraDefForMVC2(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCt[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForMVC2(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_MVC2_A::GetExtraLoc(UINT16 nUnitId)
{
    static int rgExtraLoc[MVC2_A_NUMUNIT + 1] = { -1 };

    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (MVC2_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForMVC2(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForMVC2(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

struct sMVC2A_CharacterData
{
    CHAR szImageRefName[MAX_DESCRIPTION_LENGTH] = "uninit";
    UINT16 nCharacterIndex = 0;
    CHAR szDesc[MAX_DESCRIPTION_LENGTH] = "uninit";
    CHAR szCodeDesc[MAX_DESCRIPTION_LENGTH] = "UNINIT";
    UINT32 nStartingPosition = 0;
    UINT16 nExtraStart = 0;
    UINT16 nExtraEnd = 0;
    LPCSTR pszPalettePairName = nullptr;
};

sMVC2A_CharacterData MVC2ArcadeCharacterArray[] =
{
    { "indexCPS2_Ryu", 0x00, "Ryu", "RYU", 0x260a9c2, 0, 0 },
    { "indexCPS2_Zangief", 0x01, "Zangief", "ZANGIEF", 0x26E2242, 0x11, 0x3a},
    { "indexCPS2_Guile", 0x02, "Guile", "GUILE", 0x2775162, 0, 0 },
    { "indexCPS2_Morrigan", 0x03, "Morrigan", "MORRIGAN", 0x283a362, 0x3a, 0x86 },
    { "indexCPS2_Anakaris", 0x04, "Anakaris", "ANAKARIS", 0x2954602, 0, 0 },
    { "indexCPS2_Strider", 0x05, "Strider Hiryu", "STRIDER", 0x2A2c5E2, 0, 0},
    { "indexCPS2_Cyclops", 0x06, "Cyclops", "CYCLOPS", 0x2B13442, 0x19, 0x64},
    // don't forget to join the claws!
    { "indexCPS2_Wolverine", 0x07, "Wolverine", "WOLVERINE", 0x2C0eba2, 0x11, 0x11, "pairWolvieClaws" },
    { "indexCPS2_Psylocke", 0x08, "Psylocke", "PSYLOCKE", 0x2D104E2, 0, 0 },
    { "indexCPS2_Iceman", 0x09, "Iceman", "ICEMAN", 0x2DFB5C2, 0x9, 0x4a},
    { "indexCPS2_Rogue", 0x0A, "Rogue", "ROGUE", 0x2EE2142 , 0x1d, 0x22},
    { "indexCPS2_CapAm", 0x0B, "Captain America", "CAPTAINAMERICA", 0x2FD03E2, 0, 0, "pairCaptainAmericaShield" },
    { "indexCPS2_Spidey", 0x0C, "Spider-Man", "SPIDERMAN", 0x30Ae9C2, 0x9, 0x64},
    { "indexCPS2_Hulk", 0x0D, "Hulk,", "HULK", 0x31C9402, 0xa, 0xa },
    { "indexCPS2_Venom", 0x0E, "Venom", "VENOM", 0x32Ed122 , 0, 0},
    { "indexCPS2_DrDoom", 0x0F, "Dr. Doom", "DRDOOM", 0x33ffa42 , 0x9, 0x98 },
    { "indexCPS2_Tron", 0x10, "Tron Bonne", "TRON", 0x35175c2 , 0x11, 0x15, "pairTronBody" },
    { "indexCPS2_Jill", 0x11, "Jill Valentine", "JILL", 0x35f3162 , 0x9, 0xb },
    { "indexCPS2_Hayato", 0x12, "Hayato", "HAYATO", 0x36f0742, 0x14, 0x17, "pairHayatoSword" },
    { "indexCPS2_Ruby", 0x13, "Ruby Heart", "RUBY", 0x37f9ce2 , 0xb, 0x10 },
    { "indexCPS2_SonSon", 0x14, "SonSon", "SONSON", 0x39136C2 , 0xb, 0x28 },
    { "indexCPS2_Amingo", 0x15, "Amingo", "AMINGO", 0x3A2c762 , 0x9, 0xb },
    { "indexCPS2_Marrow", 0x16, "Marrow", "MARROW", 0x3B214a2 , 0, 0 },
    { "indexCPS2_Cable", 0x17, "Cable", "CABLE", 0x3c2d5a2, 0, 0 },
    { "indexCPS2_Abyss1", 0x18, "Abyss (Form 1)", "ABYSS1", 0x3D19482, 0, 0 },
    { "indexCPS2_Abyss2", 0x19, "Abyss (Form 2)", "ABYSS2", 0x3Da68e2, 0, 0 },
    { "indexCPS2_Abyss3", 0x1A, "Abyss (Form 3)", "ABYSS3", 0x3E80562, 0, 0 },
    { "indexCPS2_ChunLi", 0x1B, "Chun-Li", "CHUNLI", 0x3F00962, 0, 0 },
    { "indexCPS2_Megaman", 0x1C, "Megaman", "MEGAMAN", 0x3F93962, 0x9, 0x211 },
    { "indexCPS2_Roll", 0x1D, "Roll", "ROLL", 0x4007742, 0x9, 0x211 },
    { "indexCPS2_Akuma", 0x1E, "Gouki", "GOUKI", 0x4090ce2, 0, 0 },
    { "indexCPS2_BBHood", 0x1F, "B.B. Hood", "BBHOOD", 0x41Aae62, 0xc, 0x14 },
    { "indexCPS2_Felicia", 0x20, "Felicia", "FELICIA", 0x42D2082, 0, 0 },
    { "indexCPS2_Charlie", 0x21, "Charlie", "CHARLIE", 0x433f102, 0, 0 },
    { "indexCPS2_Sakura", 0x22, "Sakura", "SAKURA", 0x4405b62, 0xb, 0x22 },
    { "indexCPS2_Dan", 0x23, "Dan", "DAN", 0x44540C2, 0, 0 },
    { "indexCPS2_Cammy", 0x24, "Cammy", "CAMMY", 0x44f3b82, 0x9, 0x3e},
    { "indexCPS2_Dhalsim", 0x25, "Dhalsim", "DHALSIM", 0x45AA822, 0x9, 0x26 },
    { "indexCPS2_Bison", 0x26, "M.Bison", "MBISON", 0x462f342, 0x9, 0x14 },
    { "indexCPS2_Ken", 0x27, "Ken", "KEN", 0x46B5662, 0, 0 },
    { "indexCPS2_Gambit", 0x28, "Gambit", "GAMBIT", 0x479ec82, 0x9, 0x26 },
    { "indexCPS2_Juggy", 0x29, "Juggernaut", "JUGGERNAUT", 0x48Cb762, 0x9, 0x44 },
    { "indexCPS2_Storm", 0x2A, "Storm", "STORM", 0x49d9e82, 0x9, 0x2a },
    { "indexCPS2_Sabretooth", 0x2B, "Sabretooth", "SABRETOOTH", 0x4ADb362, 0, 0 },
    { "indexCPS2_Magneto", 0x2C, "Magneto", "MAGNETO", 0x4BF21c2, 0xa, 0xa },
    // This is actually a joint palette but it's incorrectly ripped.  We do need the
    // two step effects palettes but all the character joins can be ignored or excised.
    { "indexCPS2_Shuma", 0x2D, "Shuma-Gorath", "SHUMA", 0x4CDa622, 0x11, 0x130, "pairUnhandled" },
    { "indexCPS2_WarMachine", 0x2E, "War Machine", "WARMACHINE", 0x4Ddab82, 0, 0 },
    { "indexCPS2_SilverSamurai", 0x2F, "Silver Samurai", "SILVERSAMURAI", 0x4EF6122, 0x9, 0x37},
    { "indexCPS2_OmegaRed", 0x30, "Omega Red", "OMEGARED", 0x4ff4942, 0x9, 0x20 },
    { "indexCPS2_Spiral", 0x31, "Spiral", "SPIRAL", 0x5109fa2, 0x9, 0xd2},
    { "indexCPS2_Colossus", 0x32, "Colossus", "COLOSSUS", 0x5235a62, 0x9, 0xc8},
    { "indexCPS2_IronMan", 0x33, "Iron Man", "IRONMAN", 0x53384c2, 0, 0 },
    { "indexCPS2_Sentinel", 0x34, "Sentinel", "SENTINEL", 0x545E422, 0x12, 0x13, "pairUnhandled" },
    { "indexCPS2_Blackheart", 0x35, "Blackheart", "BLACKHEART", 0x5585402, 0x9, 0x1b },
    { "indexCPS2_Thanos", 0x36, "Thanos", "THANOS", 0x5673e42, 0x9, 0x1f },
    { "indexCPS2_Jin", 0x37, "Jin", "JIN", 0x5758482, 0x9, 0x86 },
    { "indexCPS2_CapCom", 0x38, "Captain Commando", "CAPTAINCOMMANDO", 0x5847ec2 , 0x9, 0x19},
    { "indexCPS2_Bonerine", 0x39, "Bonerine", "BONERINE", 0x59472a2, 0, 0, "pairWolvieClaws" },
    { "indexCPS2_Kobun", 0x3A, "Kobun", "KOBUN", 0x59acdc2, 0x9, 0x26 },
};

void DumpAllCharacters()
{
    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < ARRAYSIZE(MVC2ArcadeCharacterArray); iUnitCtr++)
    {
        if (MVC2ArcadeCharacterArray[iUnitCtr].nStartingPosition != 0)
        {
            const sMoveDescription* sCurrentMoveDescriptors = MVC2_MOVE_DESCRIPTIONS[iUnitCtr].pMoveDescriptions;
            const UINT32 nMoveDescriptorCount = MVC2_MOVE_DESCRIPTIONS[iUnitCtr].nArraySize;

            UINT32 nCurrentCharacterOffset = MVC2ArcadeCharacterArray[iUnitCtr].nStartingPosition;
            UINT16 nPaletteCount = 0;
            CString strOutput;

            for (UINT16 iButtonIndex = 0; iButtonIndex < 6; iButtonIndex++)
            {
                strOutput.Format("const sGame_PaletteDataset MVC2_A_%s_PALETTES_%s[] =\r\n{\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, DEF_BUTTONLABEL6_MVC2[iButtonIndex]);
                OutputDebugString(strOutput);

                if (MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName) 
                {
                    strOutput.Format("    { \"%s %s\", 0x%07x, 0x%7x, %s, 0, &%s },\r\n", sCurrentMoveDescriptors[0].szMoveName, DEF_BUTTONLABEL6_MVC2[iButtonIndex],
                                                                                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                                                                                        MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName);
                }
                else
                {
                    strOutput.Format("    { \"%s %s\", 0x%07x, 0x%7x, %s, 0 },\r\n", sCurrentMoveDescriptors[0].szMoveName, DEF_BUTTONLABEL6_MVC2[iButtonIndex],
                                                                                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                                                                                    MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName );
                }
                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;

                for (UINT16 iCurrentExtra = 1; iCurrentExtra < 8; iCurrentExtra++)
                {
                    if (sCurrentMoveDescriptors[iCurrentExtra].nImageIndex != 0xFF)
                    {
                        if ((sCurrentMoveDescriptors[iCurrentExtra].pszPairedPaletteName != nullptr) && (sCurrentMoveDescriptors[iCurrentExtra].pszImageUnitOverride != nullptr))
                        {
                            strOutput.Format("    { \"%s\", 0x%07x, 0x%7x, %s, %u, %s },\r\n", sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sCurrentMoveDescriptors[iCurrentExtra].pszImageUnitOverride, 
                                                                                                   sCurrentMoveDescriptors[iCurrentExtra].nImageIndex, sCurrentMoveDescriptors[iCurrentExtra].pszPairedPaletteName);
                        }
                        else if (sCurrentMoveDescriptors[iCurrentExtra].pszImageUnitOverride != nullptr)
                        {
                            strOutput.Format("    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sCurrentMoveDescriptors[iCurrentExtra].pszImageUnitOverride, sCurrentMoveDescriptors[iCurrentExtra].nImageIndex);
                        }
                        else
                        {
                            strOutput.Format("    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, sCurrentMoveDescriptors[iCurrentExtra].nImageIndex);
                        }
                    }
                    else
                    {
                        //strOutput.Format("    { \"%02u %s (Extra - %02x)\", 0x%07x, 0x%7x, %s, %u },\r\n", iCurrentExtra + 1, DEF_BUTTONLABEL6_MVC2[iButtonIndex], nPaletteCount, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, iCurrentExtra + 1 );
                        strOutput.Format("    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, iCurrentExtra);
                    }
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                    nPaletteCount++;
                }

                OutputDebugString("};\r\n\r\n");
            }

            // Status effects...
            strOutput.Format("const sGame_PaletteDataset MVC2_A_%s_PALETTES_SHARED[] =\r\n{\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
            OutputDebugString(strOutput);

            const CHAR* StatusDescriptions[8] =
            {
                "Burning Dark", "Burning Light", "Shocked Dark", "Shocked Light", "Dark Burning Dark", "Dark Burning Light", "Kinetic Charge Dark", "Kinetic Charge Light"
            };

            for (UINT16 iStatusEffect = 0; iStatusEffect < 8; iStatusEffect++)
            {
                // Use this for people with two body pieces
                if (MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName)
                {
                    strOutput.Format("    { \"%s\", 0x%07x, 0x%7x, %s, %u, &%s },\r\n", StatusDescriptions[iStatusEffect], nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, 0,
                                                                                        MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName);
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                    strOutput.Format("    { \"%s 2\", 0x%07x, 0x%7x, %s, %u },\r\n", StatusDescriptions[iStatusEffect], nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, 1);
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                }
                else
                {
                    strOutput.Format("    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", StatusDescriptions[iStatusEffect], nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, 0);
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                }
            }

            OutputDebugString("};\r\n\r\n");

            // Dump the extras if we have any...
            if (MVC2ArcadeCharacterArray[iUnitCtr].nExtraStart != 0)
            {
                strOutput.Format("const sGame_PaletteDataset MVC2_A_%s_PALETTES_EXTRAS[] =\r\n{\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
                OutputDebugString(strOutput);
                const UINT16 nExtraStart = MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName ? (8 + 0x9) : 0x9;

                for (UINT16 iExtraPosition = nExtraStart; iExtraPosition <= MVC2ArcadeCharacterArray[iUnitCtr].nExtraEnd; iExtraPosition++)
                {
                    const sMoveDescription* sExtraDescription = nullptr;

                    for (UINT32 iDescriptionIndex = 8; iDescriptionIndex < nMoveDescriptorCount; iDescriptionIndex++)
                    {
                        if (sCurrentMoveDescriptors[iDescriptionIndex].nCharacterIndex == iExtraPosition)
                        {
                            sExtraDescription = &sCurrentMoveDescriptors[iDescriptionIndex];
                            break;
                        }
                        else if (sCurrentMoveDescriptors[iDescriptionIndex].nCharacterIndex > iExtraPosition)
                        {
                            // We've passed beyond the range of interest
                            break;
                        }
                    }

                    strOutput.Format("    { /* 0x%02x */ ", iExtraPosition);
                    OutputDebugString(strOutput);

                    if (sExtraDescription)
                    {
                        if (sExtraDescription->nImageIndex != 0xFF)
                        {
                            if ((sExtraDescription->pszPairedPaletteName != nullptr) && (sExtraDescription->pszImageUnitOverride != nullptr))
                            {
                                strOutput.Format("\"%s\", 0x%07x, 0x%7x, %s, %u, %s },\r\n", sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sExtraDescription->pszImageUnitOverride,
                                                                                                       sExtraDescription->nImageIndex, sExtraDescription->pszPairedPaletteName);
                            }
                            else if (sExtraDescription->pszImageUnitOverride != nullptr)
                            {
                                strOutput.Format("\"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sExtraDescription->pszImageUnitOverride, sExtraDescription->nImageIndex);
                            }
                            else
                            {
                                strOutput.Format("\"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, sExtraDescription->nImageIndex);
                            }
                            OutputDebugString(strOutput);
                        }
                        else
                        {
                            // Note that this adds "Not Used" values because we need everything for Extras math.
                            strOutput.Format("\"%s\", 0x%07x, 0x%7x },\r\n", sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                            OutputDebugString(strOutput);
                        }
                    }
                    else
                    {
                        // We need everything in the layout for Extras math to work.
                        strOutput.Format("\"Unused: %s 0x%x\", 0x%07x, 0x%7x },\r\n", "Extra", iExtraPosition, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20 );
                        OutputDebugString(strOutput);
                    }

                    nCurrentCharacterOffset += 0x20;
                }

                OutputDebugString("};\r\n\r\n");
            }

            // Now create the collection...
            strOutput.Format("const sDescTreeNode MVC2_A_%s_COLLECTION[] =\r\n{\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
            OutputDebugString(strOutput);

            for (UINT16 iButtonIndex = 0; iButtonIndex < 6; iButtonIndex++)
            {
                strOutput.Format("    { \"%s\", DESC_NODETYPE_TREE, (void*)MVC2_A_%s_PALETTES_%s, ARRAYSIZE(MVC2_A_%s_PALETTES_%s) },\r\n", DEF_BUTTONLABEL6_MVC2[iButtonIndex], MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, DEF_BUTTONLABEL6_MVC2[iButtonIndex],
                                            MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, DEF_BUTTONLABEL6_MVC2[iButtonIndex] );
                OutputDebugString(strOutput);
            }

            // These are the 7th set in the ROM layout, so either leave these here or adjust the Extra offsets.
            strOutput.Format("    { \"Status Effects\", DESC_NODETYPE_TREE, (void*)MVC2_A_%s_PALETTES_SHARED, ARRAYSIZE(MVC2_A_%s_PALETTES_SHARED) },\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
            OutputDebugString(strOutput);

            if (MVC2ArcadeCharacterArray[iUnitCtr].nExtraStart != 0)
            {
                strOutput.Format("    { \"Extras\", DESC_NODETYPE_TREE, (void*)MVC2_A_%s_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_%s_PALETTES_EXTRAS) },\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
                OutputDebugString(strOutput);
            }

            OutputDebugString("};\r\n\r\n");
        }
    }
}

CDescTree CGame_MVC2_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MVC2_A, MVC2_A_EXTRA, &MVC2_A_EXTRA_CUSTOM, MVC2_A_EXTRALOC);

    UINT16 nUnitCt = MVC2_A_NUMUNIT + (GetExtraCt(MVC2_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    sprintf(NewDescTree->szDesc, "%s", g_GameFriendlyName[MVC2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(MVC2_A_EXTRALOC) > 0);
    strMsg.Format("CGame_MVC2_A::InitDescTree: Building desc tree for MVC2 %s extras...\n", fHaveExtras ? "with" : "without");
    OutputDebugString(strMsg);

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UINT16 nExtraCt = GetExtraCt(iUnitCtr, TRUE);
        BOOL bUseExtra = (GetExtraLoc(iUnitCtr) ? 1 : 0);

        UINT16 nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        if (iUnitCtr < MVC2_A_EXTRALOC)
        {
            //Set each description
            sprintf(UnitNode->szDesc, "%s", MVC2_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if MVC2_A_DEBUG
            strMsg.Format("Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, bUseExtra ? "with extras" : "no extras", nUnitChildCount);
            OutputDebugString(strMsg);
#endif
            
            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                sprintf(CollectionNode->szDesc, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if MVC2_A_DEBUG
                strMsg.Format("\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    snprintf(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), "%s", paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if MVC2_A_DEBUG
                    strMsg.Format("\t\tPalette: \"%s\", %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(", 0x%06x to 0x%06x (%u colors),", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(" image unit 0x%02x image index 0x%02x.\n", paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(" no image available.\n");
                    }
                    OutputDebugString(strMsg);
#endif
                }
            }
        }
        else
        {
            // This handles data loaded from the Extra extension file, which are treated
            // each as their own separate node with one collection with everything under that.
            sprintf(UnitNode->szDesc, "Extra Palettes");
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if MVC2_A_DEBUG
            strMsg.Format("Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(MVC2_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node

            sprintf(CollectionNode->szDesc, "Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if MVC2_A_DEBUG
            strMsg.Format("\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetExtraDefForMVC2(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForMVC2(nExtraPos + nCurrExtra);
                }

                sprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((MVC2_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if MVC2_A_DEBUG
                strMsg.Format("\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format("CGame_MVC2_A::InitDescTree: Loaded %u palettes for MVC2\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForMVC2 = nTotalPaletteCount;

    // hopefully we don't need to do this again........
    // TODO: proc_supp :'(
    //DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_MVC2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    sprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, "Marvel vs. Capcom 2.dat");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = 0x889B600; // 143242752

    return NewFileRule;
}

UINT16 CGame_MVC2_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == MVC2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return MVC2_A_UNITS[nUnitId].uChildAmt;
    }
}

UINT16 CGame_MVC2_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == MVC2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(MVC2_A_UNITS[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCSTR CGame_MVC2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == MVC2_A_EXTRALOC)
    {
        return "Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)MVC2_A_UNITS[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

UINT16 CGame_MVC2_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    if (nUnitId == MVC2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        const sDescTreeNode* pCompleteROMTree = MVC2_A_UNITS;
        UINT16 nCollectionCount = pCompleteROMTree[nUnitId].uChildAmt;

        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pCompleteROMTree[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if MVC2_A_DEBUG
        CString strMsg;
        strMsg.Format("CGame_MVC2_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

const sGame_PaletteDataset* CGame_MVC2_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)MVC2_A_UNITS[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sDescTreeNode* CGame_MVC2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (int nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount;

        if (nUnitId == MVC2_A_EXTRALOC)
        {
            nNodeCount = GetExtraCt(nUnitId);

            if (nDistanceFromZero < nNodeCount)
            {
                pCollectionNode = nullptr;
                break;
            }
        }
        else
        {
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(MVC2_A_UNITS[nUnitId].ChildNodes);
            
            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < 6)) // 6 colors
                {
                    pCollectionNode = &(pCollectionNodeToCheck[nCollectionIndex]);
                }
                else
                {
                    pCollectionNode = nullptr;
                }

                break;
            }
        }

        nDistanceFromZero -= nNodeCount;
    }

    return pCollectionNode;
}

const sGame_PaletteDataset* CGame_MVC2_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (int nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

void CGame_MVC2_A::InitDataBuffer()
{
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_MVC2_A::ClearDataBuffer()
{
    if (pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (pppDataBuffer[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(pppDataBuffer);
    }
}

void CGame_MVC2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != MVC2_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            nCurrPalOffs = paletteData->nPaletteOffset;
            m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // MVC2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMVC2(GetExtraLoc(nUnitId) + nPalId);

        nCurrPalOffs = pCurrDef->uOffset;
        m_nCurrentPaletteSize = (pCurrDef->cbPaletteSize / 2);
    }

    m_nCurrentPaletteROMLocation = nCurrPalOffs;
}

BOOL CGame_MVC2_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        int nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        rgUnitRedir[nUnitCtr] = nUnitCtr; // probably can remove this

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSize];

            LoadedFile->Seek(nCurrPalOffs, CFile::begin);

            LoadedFile->Read(pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;
    
    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_MVC2_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    bool fShownOnce = false;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (!fShownOnce && (nCurrPalOffs < m_nLowestKnownPaletteRomLocation)) // This magic number is the lowest known ROM location.
            {
                CString strMsg;
                strMsg.Format("Warning: Unit %u palette %u is trying to write to ROM location 0x%06x which is lower than we usually write to.", nUnitCtr, nPalCtr, nCurrPalOffs);
                MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
                fShownOnce = true;
            }

            SaveFile->Seek(nCurrPalOffs, CFile::begin);
            SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format("CGame_MVC2_A::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_MVC2_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;
    static DWORD s_nColorsPerPage = CRegProc::GetMaxPalettePageSize();

    LoadSpecificPaletteData(nUnitId, nPalId);

    const UINT8 nTotalPagesNeeded = (UINT8)ceil(m_nCurrentPaletteSize / s_nColorsPerPage);
    const bool fCanFitWithinCurrentPageLayout = (nTotalPagesNeeded <= MAX_PALETTE_PAGES);

    if (!fCanFitWithinCurrentPageLayout)
    {
        CString strWarning;
        strWarning.Format("ERROR: The UI currently only supports %u pages. \"%s\" is trying to use %u pages which will not work.\n", MAX_PALETTE_PAGES, srcNode->szDesc, nTotalPagesNeeded);
        OutputDebugString(strWarning);
    }

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSize, nUnitId, nPalId);

    if (fCanFitWithinCurrentPageLayout && (m_nCurrentPaletteSize > s_nColorsPerPage))
    {
        CString strPageDescription;
        int nColorsRemaining = m_nCurrentPaletteSize;

        for (UINT16 nCurrentPage = 0; (nCurrentPage * s_nColorsPerPage) < m_nCurrentPaletteSize; nCurrentPage++)
        {
            strPageDescription.Format("%s (%u/%u)", srcNode->szDesc, nCurrentPage + 1, nTotalPagesNeeded);
            BasePalGroup.AddSep(0, strPageDescription, nCurrentPage * s_nColorsPerPage, min(s_nColorsPerPage, (DWORD)nColorsRemaining));
            nColorsRemaining -= s_nColorsPerPage;
        }
    }
    else
    {
        BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSize);
    }
}

BOOL CGame_MVC2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = MainDescTree.GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    int nSrcStart = 0;
    int nSrcAmt = 0;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
     if (NodeGet->uUnitId != MVC2_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if ((_stricmp(pCurrentNode->szDesc, "LP") == 0) || (_stricmp(pCurrentNode->szDesc, "LK") == 0) ||
                    (_stricmp(pCurrentNode->szDesc, "HP") == 0) || (_stricmp(pCurrentNode->szDesc, "HK") == 0) ||
                    (_stricmp(pCurrentNode->szDesc, "A1") == 0) || (_stricmp(pCurrentNode->szDesc, "A2") == 0))
                {
                    // We show 6 sprites (LP...A2) for export for all normal MVC2 sprites
                    nSrcAmt = 6;
                    nNodeIncrement = pCurrentNode->uChildAmt;
                    // Need to reset because we have a status effect label set as well.
                    pButtonLabel = const_cast<CHAR*>((CHAR*)DEF_BUTTONLABEL6_MVC2);

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
                else if (_stricmp(pCurrentNode->szDesc, "Status Effects") == 0)
                {
                    // Status effects are the last 8 palettes in the last node.
                    UINT16 nCollectionCount = GetCollectionCountForUnit(NodeGet->uUnitId) - 1;
                    nSrcStart = 0;

                    for (UINT16 iCollectionIndex = 0; iCollectionIndex < nCollectionCount; iCollectionIndex++)
                    {
                        nSrcStart += GetNodeCountForCollection(NodeGet->uUnitId, iCollectionIndex);
                    }

                    // There are 8 status effects
                    nSrcAmt = 8;
                    nNodeIncrement = paletteDataSet->pPalettePairingInfo ? 2 : 1;
                    pButtonLabel = const_cast<CHAR*>((CHAR*)DEF_LABEL_STATUS_EFFECTS);
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if ((NodeGet->uUnitId == indexMVC2AShuma) ||
                    (NodeGet->uUnitId == indexMVC2ASentinel))
                {
                    OutputDebugString("Sadness: this sprite is wrong.  Should be reripped as paired.\n");
                }
                else
                {
                    UINT16 nDeltaToSecondElement = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                    int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;

                    const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nDeltaToSecondElement);
                    if (paletteDataSetToJoin)
                    {
                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                            )
                        );

                        //Set each palette
                        sDescNode* JoinedNode[2] = {
                            MainDescTree.GetDescNode(Node01, Node02, Node03, -1),
                            MainDescTree.GetDescNode(Node01, Node02, Node03 + nDeltaToSecondElement, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nDeltaToSecondElement, nSrcAmt, nNodeIncrement);
                    }
                }
            }
        }
    }
    
    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

COLORREF* CGame_MVC2_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[m_nCurrentPaletteSize];

    for (int i = 0; i < m_nCurrentPaletteSize - 1; i++)
    {
        NewPal[i + 1] = ConvPal(pppDataBuffer[nUnitId][nPalId][i]) | 0xFF000000;
    }

    NewPal[0] = 0xFF000000;

    return NewPal;
}

void CGame_MVC2_A::UpdatePalData()
{
    for (int nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;

            int nTotalColorsRemaining = srcDef->uPalSz;
            UINT16 nCurrentTotalWrites = 0;
            // Every 16 colors there is another counter WORD (color length) to preserve.
            const UINT16 nMaxSafeColorsToWrite = 16;
            const UINT16 iFixedCounterPosition = 0; // The lead 'color' is a counter and needs to be preserved.

            while (nTotalColorsRemaining > 0)
            {
                UINT16 nCurrentColorCountToWrite = min(nMaxSafeColorsToWrite, nTotalColorsRemaining);

                for (int nPICtr = 0; nPICtr < nCurrentColorCountToWrite; nPICtr++)
                {
                    if (nPICtr == iFixedCounterPosition)
                    {
                        continue;
                    }

                    UINT16 iCurrentArrayOffset = nPICtr + nCurrentTotalWrites;
                    // NAOMI wants alpha set to 15
                    pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - 1] = ((ConvCol(crSrc[iCurrentArrayOffset]) & 0x0FFF)) | 0xF000;
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;

            if (bPostSetPalProc)
            {
                // commented out until megaman is fixed
                //PostSetPal(srcDef->uUnitId, srcDef->uPalId);
            }
        }
    }
}

int CGame_MVC2_A::GetBasicOffset(UINT16 nPalId)
{
    // Each character by default gets 6 buttons worth of 8 palettes.  
    if (nPalId >= (8 * k_mvc2_character_coloroption_count))
    {
        // This palette is in the Extra group for this character
        return -1;
    }
    else
    {
        // This is a stock palette entry for this character: return the MOD so we know the 
        // particular offset within this button group.
        return (nPalId % 8);
    }
}

void CGame_MVC2_A::PostSetPal(UINT16 nUnitId, UINT16 nPalId)
{
    int nBasicOffset = GetBasicOffset(nPalId);

    CString strMessage;
    strMessage.Format("CGame_MVC2_A::GetBasicOffset : Palette %u updated.  This palette is %s.\n", nPalId, (nBasicOffset != -1) ? "basic" : "Extra");
    OutputDebugString(strMessage);

    supp_offset_override(8 * 6); // six button sets of 8.  BUGBUG: status effects?  paired status effect sets?

    proc_supp(nUnitId, nPalId);
}