#include "StdAfx.h"
#include "GameDef.h"
#include "Game_MVC2_A.h"
#include "Game_MVC2_D.h"
#include "mvc2_descs.h"
#include "mvc2_supp.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define MVC2_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_MVC2_A::MVC2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_MVC2_A::MainDescTree = nullptr;

int CGame_MVC2_A::rgExtraCountAll[MVC2_A_NUMUNIT + 1];
int CGame_MVC2_A::rgExtraLoc[MVC2_A_NUMUNIT + 1];

UINT32 CGame_MVC2_A::m_nTotalPaletteCountForMVC2 = 0;
UINT32 CGame_MVC2_A::m_nExpectedGameROMSize = 0x889B600; // 143,242,752 bytes
UINT32 CGame_MVC2_A::m_nConfirmedROMSize = -1;

void CGame_MVC2_A::InitializeStatics()
{
    safe_delete_array(CGame_MVC2_A::MVC2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_MVC2_A::InitDescTree());
}

CGame_MVC2_A::CGame_MVC2_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_MVC2_A::CGame_MVC2_A: Loading ROM...\n");

    //Set color mode
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = MVC2_A_NUMUNIT;
    m_nExtraUnit = MVC2_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 6368;
    m_pszExtraFilename = EXTRA_FILENAME_MVC2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMVC2;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x260a9c0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = MVC2_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = MVC2_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(MVC2_IMG_UNITS);

    m_fGameUsesAlphaValue = true;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_TOPTOBOTTOM;
    pButtonLabelSet = DEF_BUTTONLABEL6_MVC2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL6_MVC2);

    //Set the MVC2 supp game
    CurrMVC2 = (CGame_MVC2_D*)this;
    CurrMVC2_Arcade = this;
    //Prepare it
    prep_supp(false);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_MVC2_A::~CGame_MVC2_A(void)
{
    safe_delete_array(CGame_MVC2_A::MVC2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();

    CurrMVC2 = nullptr;
    CurrMVC2_Arcade = nullptr;
}

CDescTree* CGame_MVC2_A::GetMainTree()
{
    return &CGame_MVC2_A::MainDescTree;
}

int CGame_MVC2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, ((MVC2_A_NUMUNIT + 1) * sizeof(int)));

        stExtraDef* pCurrDef = GetExtraDefForMVC2(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCountAll[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForMVC2(nDefCtr);
        }
    }

    return rgExtraCountAll[nUnitId];
}

int CGame_MVC2_A::GetExtraLoc(UINT16 nUnitId)
{
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
    WCHAR szImageRefName[MAX_DESCRIPTION_LENGTH] = L"uninit";
    UINT16 nCharacterIndex = 0;
    WCHAR szDesc[MAX_DESCRIPTION_LENGTH] = L"uninit";
    WCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH] = L"UNINIT";
    UINT32 nStartingPosition = 0;
    UINT16 nExtraStart = 0;
    UINT16 nExtraEnd = 0;
    LPCWSTR pszPalettePairName = nullptr;
};

sMVC2A_CharacterData MVC2ArcadeCharacterArray[] =
{
    { L"indexCPS2_Ryu", 0x00, L"Ryu", L"RYU", 0x260a9c2, 0, 0 },
    { L"indexCPS2_Zangief", 0x01, L"Zangief", L"ZANGIEF", 0x26E2242, 0x11, 0x3a},
    { L"indexCPS2_Guile", 0x02, L"Guile", L"GUILE", 0x2775162, 0, 0 },
    { L"indexCPS2_Morrigan", 0x03, L"Morrigan", L"MORRIGAN", 0x283a362, 0x3a, 0x86 },
    { L"indexCPS2_Anakaris", 0x04, L"Anakaris", L"ANAKARIS", 0x2954602, 0, 0 },
    { L"indexCPS2_Strider", 0x05, L"Strider Hiryu", L"STRIDER", 0x2A2c5E2, 0, 0},
    { L"indexCPS2_Cyclops", 0x06, L"Cyclops", L"CYCLOPS", 0x2B13442, 0x19, 0x64},
    // don't forget to join the claws!
    { L"indexCPS2_Wolverine", 0x07, L"Wolverine", L"WOLVERINE", 0x2C0eba2, 0x11, 0x11, L"pairNext" },
    { L"indexCPS2_Psylocke", 0x08, L"Psylocke", L"PSYLOCKE", 0x2D104E2, 0, 0 },
    { L"indexCPS2_Iceman", 0x09, L"Iceman", L"ICEMAN", 0x2DFB5C2, 0x9, 0x4a},
    { L"indexCPS2_Rogue", 0x0A, L"Rogue", L"ROGUE", 0x2EE2142 , 0x1d, 0x22},
    { L"indexCPS2_CapAm", 0x0B, L"Captain America", L"CAPTAINAMERICA", 0x2FD03E2, 0, 0, L"pairNext" },
    { L"indexCPS2_Spidey", 0x0C, L"Spider-Man", L"SPIDERMAN", 0x30Ae9C2, 0x9, 0x64},
    { L"indexCPS2_Hulk", 0x0D, L"Hulk,", L"HULK", 0x31C9402, 0xa, 0xa },
    { L"indexCPS2_Venom", 0x0E, L"Venom", L"VENOM", 0x32Ed122 , 0, 0},
    { L"indexCPS2_DrDoom", 0x0F, L"Dr. Doom", L"DRDOOM", 0x33ffa42 , 0x9, 0x98 },
    { L"indexCPS2_Tron", 0x10, L"Tron Bonne", L"TRON", 0x35175c2 , 0x11, 0x15, L"pairNext" },
    { L"indexCPS2_Jill", 0x11, L"Jill Valentine", L"JILL", 0x35f3162 , 0x9, 0xb },
    { L"indexCPS2_Hayato", 0x12, L"Hayato", L"HAYATO", 0x36f0742, 0x14, 0x17, L"pairHayatoSword" },
    { L"indexCPS2_Ruby", 0x13, L"Ruby Heart", L"RUBY", 0x37f9ce2 , 0xb, 0x10 },
    { L"indexCPS2_SonSon", 0x14, L"SonSon", L"SONSON", 0x39136C2 , 0xb, 0x28 },
    { L"indexCPS2_Amingo", 0x15, L"Amingo", L"AMINGO", 0x3A2c762 , 0x9, 0xb },
    { L"indexCPS2_Marrow", 0x16, L"Marrow", L"MARROW", 0x3B214a2 , 0, 0 },
    { L"indexCPS2_Cable", 0x17, L"Cable", L"CABLE", 0x3c2d5a2, 0, 0 },
    { L"indexCPS2_Abyss1", 0x18, L"Abyss (Form 1)", L"ABYSS1", 0x3D19482, 0, 0 },
    { L"indexCPS2_Abyss2", 0x19, L"Abyss (Form 2)", L"ABYSS2", 0x3Da68e2, 0, 0 },
    { L"indexCPS2_Abyss3", 0x1A, L"Abyss (Form 3)", L"ABYSS3", 0x3E80562, 0, 0 },
    { L"indexCPS2_ChunLi", 0x1B, L"Chun-Li", L"CHUNLI", 0x3F00962, 0, 0 },
    { L"indexCPS2_Megaman", 0x1C, L"Megaman", L"MEGAMAN", 0x3F93962, 0x9, 0x211 },
    { L"indexCPS2_Roll", 0x1D, L"Roll", L"ROLL", 0x4007742, 0x9, 0x211 },
    { L"indexCPS2_Akuma", 0x1E, L"Gouki", L"GOUKI", 0x4090ce2, 0, 0 },
    { L"indexCPS2_BBHood", 0x1F, L"B.B. Hood", L"BBHOOD", 0x41Aae62, 0xc, 0x14 },
    { L"indexCPS2_Felicia", 0x20, L"Felicia", L"FELICIA", 0x42D2082, 0, 0 },
    { L"indexCPS2_Charlie", 0x21, L"Charlie", L"CHARLIE", 0x433f102, 0, 0 },
    { L"indexCPS2_Sakura", 0x22, L"Sakura", L"SAKURA", 0x4405b62, 0xb, 0x22 },
    { L"indexCPS2_Dan", 0x23, L"Dan", L"DAN", 0x44540C2, 0, 0 },
    { L"indexCPS2_Cammy", 0x24, L"Cammy", L"CAMMY", 0x44f3b82, 0x9, 0x3e},
    { L"indexCPS2_Dhalsim", 0x25, L"Dhalsim", L"DHALSIM", 0x45AA822, 0x9, 0x26 },
    { L"indexCPS2_Bison", 0x26, L"M.Bison", L"MBISON", 0x462f342, 0x9, 0x14 },
    { L"indexCPS2_Ken", 0x27, L"Ken", L"KEN", 0x46B5662, 0, 0 },
    { L"indexCPS2_Gambit", 0x28, L"Gambit", L"GAMBIT", 0x479ec82, 0x9, 0x26 },
    { L"indexCPS2_Juggy", 0x29, L"Juggernaut", L"JUGGERNAUT", 0x48Cb762, 0x9, 0x44 },
    { L"indexCPS2_Storm", 0x2A, L"Storm", L"STORM", 0x49d9e82, 0x9, 0x2a },
    { L"indexCPS2_Sabretooth", 0x2B, L"Sabretooth", L"SABRETOOTH", 0x4ADb362, 0, 0 },
    { L"indexCPS2_Magneto", 0x2C, L"Magneto", L"MAGNETO", 0x4BF21c2, 0xa, 0xa },
    // This is actually a joint palette but it's incorrectly ripped.  We do need the
    // two step effects palettes but all the character joins can be ignored or excised.
    { L"indexCPS2_Shuma", 0x2D, L"Shuma-Gorath", L"SHUMA", 0x4CDa622, 0x11, 0x130, L"pairUnhandled" },
    { L"indexCPS2_WarMachine", 0x2E, L"War Machine", L"WARMACHINE", 0x4Ddab82, 0, 0 },
    { L"indexCPS2_SilverSamurai", 0x2F, L"Silver Samurai", L"SILVERSAMURAI", 0x4EF6122, 0x9, 0x37},
    { L"indexCPS2_OmegaRed", 0x30, L"Omega Red", L"OMEGARED", 0x4ff4942, 0x9, 0x20 },
    { L"indexCPS2_Spiral", 0x31, L"Spiral", L"SPIRAL", 0x5109fa2, 0x9, 0xd2},
    { L"indexCPS2_Colossus", 0x32, L"Colossus", L"COLOSSUS", 0x5235a62, 0x9, 0xc8},
    { L"indexCPS2_IronMan", 0x33, L"Iron Man", L"IRONMAN", 0x53384c2, 0, 0 },
    { L"indexCPS2_Sentinel", 0x34, L"Sentinel", L"SENTINEL", 0x545E422, 0x12, 0x13, L"pairHandledInCode" },
    { L"indexCPS2_Blackheart", 0x35, L"Blackheart", L"BLACKHEART", 0x5585402, 0x9, 0x1b },
    { L"indexCPS2_Thanos", 0x36, L"Thanos", L"THANOS", 0x5673e42, 0x9, 0x1f },
    { L"indexCPS2_Jin", 0x37, L"Jin", L"JIN", 0x5758482, 0x9, 0x86 },
    { L"indexCPS2_CapCom", 0x38, L"Captain Commando", L"CAPTAINCOMMANDO", 0x5847ec2 , 0x9, 0x19},
    { L"indexCPS2_Bonerine", 0x39, L"Bonerine", L"BONERINE", 0x59472a2, 0, 0, L"pairNext" },
    { L"indexCPS2_Kobun", 0x3A, L"Kobun", L"KOBUN", 0x59acdc2, 0x9, 0x26 },
};

void CGame_MVC2_A::DumpAllCharacters()
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

            for (UINT16 iButtonIndex = 0; iButtonIndex < m_nNumberOfColorOptions; iButtonIndex++)
            {
                strOutput.Format(L"const sGame_PaletteDataset MVC2_A_%s_PALETTES_%s[] =\r\n{\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, (LPCWSTR)pButtonLabelSet[iButtonIndex]);
                OutputDebugString(strOutput);

                if (MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName) 
                {
                    strOutput.Format(L"    { \"%s %s\", 0x%07x, 0x%7x, %s, 0, &%s },\r\n", sCurrentMoveDescriptors[0].szMoveName, pButtonLabelSet[iButtonIndex],
                                                                                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                                                                                        MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName);
                }
                else
                {
                    strOutput.Format(L"    { \"%s %s\", 0x%07x, 0x%7x, %s, 0 },\r\n", sCurrentMoveDescriptors[0].szMoveName, pButtonLabelSet[iButtonIndex],
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
                            strOutput.Format(L"    { \"%s\", 0x%07x, 0x%7x, %s, %u, %s },\r\n", sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sCurrentMoveDescriptors[iCurrentExtra].pszImageUnitOverride, 
                                                                                                   sCurrentMoveDescriptors[iCurrentExtra].nImageIndex, sCurrentMoveDescriptors[iCurrentExtra].pszPairedPaletteName);
                        }
                        else if (sCurrentMoveDescriptors[iCurrentExtra].pszImageUnitOverride != nullptr)
                        {
                            strOutput.Format(L"    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sCurrentMoveDescriptors[iCurrentExtra].pszImageUnitOverride, sCurrentMoveDescriptors[iCurrentExtra].nImageIndex);
                        }
                        else
                        {
                            strOutput.Format(L"    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, sCurrentMoveDescriptors[iCurrentExtra].nImageIndex);
                        }
                    }
                    else
                    {
                        //strOutput.Format(L"    { \"%02u %s (Extra - %02x)\", 0x%07x, 0x%7x, %s, %u },\r\n", iCurrentExtra + 1, pButtonLabel[iButtonIndex], nPaletteCount, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, iCurrentExtra + 1 );
                        strOutput.Format(L"    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, iCurrentExtra);
                    }
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                    nPaletteCount++;
                }

                OutputDebugString(L"};\r\n\r\n");
            }

            // Status effects...
            strOutput.Format(L"const sGame_PaletteDataset MVC2_A_%s_PALETTES_SHARED[] =\r\n{\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
            OutputDebugString(strOutput);

            const WCHAR* StatusDescriptions[8] =
            {
                L"Burning Dark", L"Burning Light", L"Shocked Dark", L"Shocked Light", L"Dark Burning Dark", L"Dark Burning Light", L"Kinetic Charge Dark", L"Kinetic Charge Light"
            };

            for (UINT16 iStatusEffect = 0; iStatusEffect < 8; iStatusEffect++)
            {
                // Use this for people with two body pieces
                if (MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName)
                {
                    strOutput.Format(L"    { \"%s\", 0x%07x, 0x%7x, %s, %u, &%s },\r\n", StatusDescriptions[iStatusEffect], nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, 0,
                                                                                        MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName);
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                    strOutput.Format(L"    { \"%s 2\", 0x%07x, 0x%7x, %s, %u },\r\n", StatusDescriptions[iStatusEffect], nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, 1);
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                }
                else
                {
                    strOutput.Format(L"    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", StatusDescriptions[iStatusEffect], nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, 0);
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                }
            }

            OutputDebugString(L"};\r\n\r\n");

            // Dump the extras if we have any...
            if (MVC2ArcadeCharacterArray[iUnitCtr].nExtraStart != 0)
            {
                strOutput.Format(L"const sGame_PaletteDataset MVC2_A_%s_PALETTES_EXTRAS[] =\r\n{\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
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

                    strOutput.Format(L"    { \"%02x: ", iExtraPosition);
                    OutputDebugString(strOutput);

                    if (sExtraDescription)
                    {
                        if (sExtraDescription->nImageIndex != 0xFF)
                        {
                            if ((sExtraDescription->pszPairedPaletteName != nullptr) && (sExtraDescription->pszImageUnitOverride != nullptr))
                            {
                                strOutput.Format(L"%s\", 0x%07x, 0x%7x, %s, %u, %s },\r\n", sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sExtraDescription->pszImageUnitOverride,
                                                                                                       sExtraDescription->nImageIndex, sExtraDescription->pszPairedPaletteName);
                            }
                            else if (sExtraDescription->pszImageUnitOverride != nullptr)
                            {
                                strOutput.Format(L"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sExtraDescription->pszImageUnitOverride, sExtraDescription->nImageIndex);
                            }
                            else
                            {
                                strOutput.Format(L"%s\", 0x%07x, 0x%7x, %s, %u },\r\n", sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, sExtraDescription->nImageIndex);
                            }
                            OutputDebugString(strOutput);
                        }
                        else
                        {
                            // Note that this adds "Not Used" values because we need everything for Extras math.
                            strOutput.Format(L"%s\", 0x%07x, 0x%7x },\r\n", sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                            OutputDebugString(strOutput);
                        }
                    }
                    else
                    {
                        // We need everything in the layout for Extras math to work.
                        strOutput.Format(L"Unused Extra\", 0x%07x, 0x%7x },\r\n", nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20 );
                        OutputDebugString(strOutput);
                    }

                    nCurrentCharacterOffset += 0x20;
                }

                OutputDebugString(L"};\r\n\r\n");
            }

            // Now create the collection...
            strOutput.Format(L"const sDescTreeNode MVC2_A_%s_COLLECTION[] =\r\n{\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
            OutputDebugString(strOutput);

            for (UINT16 iButtonIndex = 0; iButtonIndex < m_nNumberOfColorOptions; iButtonIndex++)
            {
                strOutput.Format(L"    { \"%s\", DESC_NODETYPE_TREE, (void*)MVC2_A_%s_PALETTES_%s, ARRAYSIZE(MVC2_A_%s_PALETTES_%s) },\r\n", pButtonLabelSet[iButtonIndex], MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, DEF_BUTTONLABEL6_MVC2[iButtonIndex],
                                            MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, pButtonLabelSet[iButtonIndex] );
                OutputDebugString(strOutput);
            }

            // These are the 7th set in the ROM layout, so either leave these here or adjust the Extra offsets.
            strOutput.Format(L"    { \"Status Effects\", DESC_NODETYPE_TREE, (void*)MVC2_A_%s_PALETTES_SHARED, ARRAYSIZE(MVC2_A_%s_PALETTES_SHARED) },\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
            OutputDebugString(strOutput);

            if (MVC2ArcadeCharacterArray[iUnitCtr].nExtraStart != 0)
            {
                strOutput.Format(L"    { \"Extras\", DESC_NODETYPE_TREE, (void*)MVC2_A_%s_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_%s_PALETTES_EXTRAS) },\r\n", MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
                OutputDebugString(strOutput);
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }
}

sDescTreeNode* CGame_MVC2_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MVC2_A, MVC2_A_EXTRA, &MVC2_A_EXTRA_CUSTOM, MVC2_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = MVC2_A_NUMUNIT + (GetExtraCt(MVC2_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MVC2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(MVC2_A_EXTRALOC) > 0);
    strMsg.Format(L"CGame_MVC2_A::InitDescTree: Building desc tree for MVC2_A %s extras...\n", fHaveExtras ? L"with" : L"without");
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
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", MVC2_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if MVC2_A_DEBUG
            strMsg.Format(L"Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, bUseExtra ? L"with extras" : L"no extras", nUnitChildCount);
            OutputDebugString(strMsg);
#endif
            
            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if MVC2_A_DEBUG
                strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _snwprintf(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), L"%s", paletteSetToUse[nNodeIndex].szPaletteName);
                    ChildNode->szDesc[ARRAYSIZE(ChildNode->szDesc) - 1] = 0;

                    ChildNode->uUnitId = iUnitCtr;
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if MVC2_A_DEBUG
                    strMsg.Format(L"\t\tPalette: \"%s\", %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(L", 0x%06x to 0x%06x (%u colors),", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(L" image unit 0x%02x image index 0x%02x.\n", paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(L" no image available.\n");
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
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"Extra Palettes");
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if MVC2_A_DEBUG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(MVC2_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node

            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if MVC2_A_DEBUG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
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

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((MVC2_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if MVC2_A_DEBUG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGame_MVC2_A::InitDescTree: Loaded %u palettes for MVC2\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForMVC2 = nTotalPaletteCount;

    // For development use to speed things up
    //DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_MVC2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"Marvel vs. Capcom 2.dat");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

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

LPCWSTR CGame_MVC2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == MVC2_A_EXTRALOC)
    {
        return L"Extra Palettes";
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
        strMsg.Format(L"CGame_MVC2_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
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

UINT16 CGame_MVC2_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nNodeSize = 0;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_MVC2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
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
                if (!fReturnBasicNodesOnly || (nCollectionIndex < m_nNumberOfColorOptions))
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

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
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

void CGame_MVC2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != MVC2_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
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

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MVC2_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        // Use a sorted layout
        rgUnitRedir[nUnitCtr] = MVC2_A_UNITSORT[nUnitCtr];

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];

            if (nUnitCtr == indexMVC2ATeamView)
            {
                // This is a virtual group.
                // We just need to be indexed in the rgUnitRedir
                ZeroMemory(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors);
                continue;
            }
            else
            {
                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
            }
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;
    
    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_MVC2_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        if (nUnitCtr == indexMVC2ATeamView)
        {
            // This is a virtual group.
            continue;
        }

        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            // We don't mark proc_supp palettes dirty: only use this check if we change that behavior
            //if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                SaveFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGame_MVC2_A::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

BOOL CGame_MVC2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    UINT16 nSrcStart = NodeGet->uPalId;
    UINT16 nSrcAmt = 1;
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

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if (NodeGet->uUnitId == indexMVC2ATeamView)
                {
                    UINT16 nJoinedUnit1 = indexMVC2AMagneto;
                    UINT16 nJoinedUnit2 = indexMVC2AStorm;
                    UINT16 nJoinedUnit3 = indexMVC2APsylocke;
                    bool fTeamFound = false;

                    for (UINT16 nTeamIndex = 0; nTeamIndex < ARRAYSIZE(mvc2TeamList); nTeamIndex++)
                    {
                        if (_wcsicmp(mvc2TeamList[nTeamIndex].pszTeamName, pCurrentNode->szDesc) == 0)
                        {
                            nJoinedUnit1 = mvc2TeamList[nTeamIndex].nCharacterOne;
                            nJoinedUnit2 = mvc2TeamList[nTeamIndex].nCharacterTwo;
                            nJoinedUnit3 = mvc2TeamList[nTeamIndex].nCharacterThree;
                            fTeamFound = true;
                            break;
                        }
                    }

                    if (!fTeamFound)
                    {
                        OutputDebugString(L"WARNING: MVC2 Team lookup failed. Please fix.  Will use MSP for now.\n");
                    }

                    // Fudge some visual offsets here so fatter sprites don't collide.
                    int nXOffsetForSecond = 100;
                    int nYOffsetForSecond = 0;
                    int nXOffsetForThird = nXOffsetForSecond + 80;
                    int nYOffsetForThird = 0;

                    if ((nJoinedUnit2 == indexMVC2AStorm) && (nJoinedUnit3 == indexMVC2APsylocke))
                    {
                        nXOffsetForThird += 20;
                    }
                    else if ((nJoinedUnit1 == indexMVC2AStorm) && (nJoinedUnit2 == indexMVC2ASentinel) && (nJoinedUnit3 == indexMVC2ACaptainCommando))
                    {
                        // Santhrax
                        nXOffsetForSecond += 40;
                        nXOffsetForThird += 90;
                    }
                    else if ((nJoinedUnit1 == indexMVC2ACable) && (nJoinedUnit2 == indexMVC2ASentinel) && (nJoinedUnit3 == indexMVC2ACaptainCommando))
                    {
                        // scrub
                        nXOffsetForSecond += 40;
                        nXOffsetForThird += 90;
                    }
                    else if ((nJoinedUnit1 == indexMVC2AMagneto) && (nJoinedUnit2 == indexMVC2ACable) && (nJoinedUnit3 == indexMVC2ASentinel))
                    {
                        // rowtron
                        nXOffsetForThird += 40;
                    }
                    else if ((nJoinedUnit1 == indexMVC2AStorm) && (nJoinedUnit2 == indexMVC2ASentinel) && (nJoinedUnit3 == indexMVC2ACyclops))
                    {
                        // matrix
                        nXOffsetForSecond += 40;
                        nXOffsetForThird += 70;
                    }
                    else if ((nJoinedUnit1 == indexMVC2ASpiral) && (nJoinedUnit2 == indexMVC2ACable) && (nJoinedUnit3 == indexMVC2ASentinel))
                    {
                        // duc
                        nXOffsetForThird += 60;
                    }
                    else if ((nJoinedUnit1 == indexMVC2ASentinel) && (nJoinedUnit2 == indexMVC2AStrider) && (nJoinedUnit3 == indexMVC2ADrDoom))
                    {
                        // clockw0rk
                        nXOffsetForSecond += 60;
                        nXOffsetForThird += 40;
                    }
                    else if ((nJoinedUnit1 == indexMVC2AMagneto) && (nJoinedUnit2 == indexMVC2AIronMan) && (nJoinedUnit3 == indexMVC2ASentinel))
                    {
                        // combofiend
                        nXOffsetForThird += 60;
                    }
                    else if ((nJoinedUnit1 == indexMVC2ARogue) && (nJoinedUnit2 == indexMVC2AColossus) && (nJoinedUnit3 == indexMVC2AKen))
                    {
                        // vdo
                        nXOffsetForThird += 40;
                    }
                    else
                    {
                        if (nJoinedUnit2 == indexMVC2ASentinel)
                        {
                            nXOffsetForSecond += 40;
                            nXOffsetForThird += 40;
                        }
                        else if (nJoinedUnit2 == indexMVC2AStrider)
                        {
                            nXOffsetForSecond += 280;
                            nXOffsetForThird += 40;
                        }
                        else if (nJoinedUnit2 == indexMVC2ADrDoom)
                        {
                            nXOffsetForSecond += 80;
                            nXOffsetForThird += 80;
                        }
                        else if (nJoinedUnit2 == indexMVC2AColossus)
                        {
                            nXOffsetForThird += 40;
                        }

                        if (nJoinedUnit3 == indexMVC2ASentinel)
                        {
                            nXOffsetForThird += 40;
                        }
                        else if (nJoinedUnit3 == indexMVC2ACaptainCommando)
                        {
                            nXOffsetForThird += 50;
                        }
                        else if (nJoinedUnit3 == indexMVC2AAkuma)
                        {
                            nXOffsetForThird += 20;
                        }
                    }

                    UINT16 nNodeIndex = (NodeGet->uPalId % 6);
                    // there are 8 palettes per main character button/color section
                    UINT16 nPaletteIndex = nNodeIndex * 8;
                    const sGame_PaletteDataset* palette1ToJoin = GetSpecificPalette(nJoinedUnit1, nPaletteIndex);
                    const sGame_PaletteDataset* palette2ToJoin = GetSpecificPalette(nJoinedUnit2, nPaletteIndex);
                    const sGame_PaletteDataset* palette3ToJoin = GetSpecificPalette(nJoinedUnit3, nPaletteIndex);

                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(palette1ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex,
                            CreateImgTicket(palette2ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex,
                                CreateImgTicket(palette3ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex, nullptr, nXOffsetForThird, nYOffsetForThird),
                                nXOffsetForSecond, nYOffsetForSecond)
                        )
                    );

                    //Set each palette
                    sDescNode* JoinedNode[3] = {
                        GetMainTree()->GetDescNode(nJoinedUnit1, nNodeIndex, 0, -1),
                        GetMainTree()->GetDescNode(nJoinedUnit2, nNodeIndex, 0, -1),
                        GetMainTree()->GetDescNode(nJoinedUnit3, nNodeIndex, 0, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);

                    nSrcAmt = 6; // 6 button colors
                    nNodeIncrement = 8; // 8 palettes per main character color set
                    SetSourcePal(0, nJoinedUnit1, 0, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, nJoinedUnit2, 0, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, nJoinedUnit3, 0, nSrcAmt, nNodeIncrement);
                }
                else  if ((_wcsicmp(pCurrentNode->szDesc, L"LP") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"LK") == 0) ||
                          (_wcsicmp(pCurrentNode->szDesc, L"HP") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"HK") == 0) ||
                          (_wcsicmp(pCurrentNode->szDesc, L"A1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"A2") == 0))
                {
                    // We show 6 sprites (LP...A2) for export for all normal MVC2 sprites
                    nSrcAmt = m_nNumberOfColorOptions;
                    nNodeIncrement = pCurrentNode->uChildAmt;
                    // Need to reset because we have a status effect label set as well.
                    pButtonLabelSet = DEF_BUTTONLABEL6_MVC2;
                    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL6_MVC2);

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
                else if (_wcsicmp(pCurrentNode->szDesc, L"Status Effects") == 0)
                {
                    // Status Effects follow main buttons but are before Extras, if any
                    UINT16 nCollectionCount = ARRAYSIZE(DEF_BUTTONLABEL6_MVC2);

                    nSrcStart = 0;

                    for (UINT16 iCollectionIndex = 0; iCollectionIndex < nCollectionCount; iCollectionIndex++)
                    {
                        nSrcStart += GetNodeCountForCollection(NodeGet->uUnitId, iCollectionIndex);
                    }

                    // There are 8 status effects
                    nSrcAmt = 8;
                    nNodeIncrement = paletteDataSet->pPalettePairingInfo ? 2 : 1;
                    pButtonLabelSet = DEF_LABEL_STATUS_EFFECTS;
                    m_nNumberOfColorOptions = ARRAYSIZE(DEF_LABEL_STATUS_EFFECTS);
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (NodeGet->uUnitId == indexMVC2AShuma)
                {
                    OutputDebugString(L"Sadness: this sprite is wrong.  Should be reripped as paired.\n");
                }
                else
                {
                    if (((NodeGet->uUnitId == indexMVC2ASentinel) && (paletteDataSet->pPalettePairingInfo == &pairHandledInCode)) ||
                        ((NodeGet->uUnitId == indexMVC2ATron) && (paletteDataSet->pPalettePairingInfo == &pairHandledInCode)))
                    {
                        INT8 nPeerPaletteDistance1 = 1;
                        INT8 nPeerPaletteDistance2 = 3;
                        const sGame_PaletteDataset* paletteDataSetToJoin1 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1);
                        const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);
                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse)
                                    ))
                        );

                        //Set each palette
                        sDescNode* JoinedNode[] = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);
                        CreateDefPal(JoinedNode[2], 2);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                        SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                    }
                    else if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                    {
                        const UINT16 nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                        fShouldUseAlternateLoadLogic = true;
                        sImgTicket* pImgArray = nullptr;

                        for (INT16 nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
                        {
                            // The palettes get added forward, but the image tickets need to be generated in reverse order
                            const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + (nStageCount - 1 - nStageIndex));
                            if (paletteDataSetToJoin)
                            {
                                pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                                //Set each palette
                                sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nStageIndex, -1);
                                CreateDefPal(JoinedNode, nStageIndex);
                                SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                            }
                        }

                        ClearSetImgTicket(pImgArray);
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
                                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nDeltaToSecondElement, -1)
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
    strMessage.Format(L"CGame_MVC2_A::GetBasicOffset : Palette %u updated.  This palette is %s.\n", nPalId, (nBasicOffset != -1) ? L"basic" : L"Extra");
    OutputDebugString(strMessage);

    proc_supp(nUnitId, nPalId);
}
