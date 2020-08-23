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
    CString strMessage;
    strMessage.Format(_T("CGame_MVC2_A::CGame_MVC2_A: Loading ROM...\n"));
    OutputDebugString(strMessage);

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

    //Set color mode
    SetColMode(COLMODE_12A);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_17);

    //Set game information
    nGameFlag = MVC2_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    nImgUnitAmt = MVC2_D_NUM_IMG_UNITS;

    m_fMustWriteAlphaValue = true;

    nDisplayW = 8;
    nFileAmt = 1;

    //Set the image out display type
    DisplayType = DISPLAY_SPRITES_TOPTOBOTTOM;
    pButtonLabel = const_cast<TCHAR*>((TCHAR*)DEF_BUTTONLABEL6_MVC2);
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL6_MVC2);

    //Set the MVC2 supp game
    CurrMVC2 = (CGame_MVC2_D*)this; //bugbug: lazy
    CurrMVC2_Arcade = this; //bugbug: lazy
    //Prepare it
    prep_supp(false);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();

    nRGBIndexAmt = 15;
    nAIndexAmt = 15;

    nRGBIndexMul = 17.0f;
    nAIndexMul = 17.0f;
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
    TCHAR szImageRefName[MAX_DESCRIPTION_LENGTH] = _T("uninit");
    UINT16 nCharacterIndex = 0;
    TCHAR szDesc[MAX_DESCRIPTION_LENGTH] = _T("uninit");
    TCHAR szCodeDesc[MAX_DESCRIPTION_LENGTH] = _T("UNINIT");
    UINT32 nStartingPosition = 0;
    UINT16 nExtraStart = 0;
    UINT16 nExtraEnd = 0;
    LPCTSTR pszPalettePairName = nullptr;
};

sMVC2A_CharacterData MVC2ArcadeCharacterArray[] =
{
    { _T("indexCPS2_Ryu"), 0x00, _T("Ryu"), _T("RYU"), 0x260a9c2, 0, 0 },
    { _T("indexCPS2_Zangief"), 0x01, _T("Zangief"), _T("ZANGIEF"), 0x26E2242, 0x11, 0x3a},
    { _T("indexCPS2_Guile"), 0x02, _T("Guile"), _T("GUILE"), 0x2775162, 0, 0 },
    { _T("indexCPS2_Morrigan"), 0x03, _T("Morrigan"), _T("MORRIGAN"), 0x283a362, 0x3a, 0x86 },
    { _T("indexCPS2_Anakaris"), 0x04, _T("Anakaris"), _T("ANAKARIS"), 0x2954602, 0, 0 },
    { _T("indexCPS2_Strider"), 0x05, _T("Strider Hiryu"), _T("STRIDER"), 0x2A2c5E2, 0, 0},
    { _T("indexCPS2_Cyclops"), 0x06, _T("Cyclops"), _T("CYCLOPS"), 0x2B13442, 0x19, 0x64},
    // don't forget to join the claws!
    { _T("indexCPS2_Wolverine"), 0x07, _T("Wolverine"), _T("WOLVERINE"), 0x2C0eba2, 0x11, 0x11, _T("pairWolvieClaws") },
    { _T("indexCPS2_Psylocke"), 0x08, _T("Psylocke"), _T("PSYLOCKE"), 0x2D104E2, 0, 0 },
    { _T("indexCPS2_Iceman"), 0x09, _T("Iceman"), _T("ICEMAN"), 0x2DFB5C2, 0x9, 0x4a},
    { _T("indexCPS2_Rogue"), 0x0A, _T("Rogue"), _T("ROGUE"), 0x2EE2142 , 0x1d, 0x22},
    { _T("indexCPS2_CapAm"), 0x0B, _T("Captain America"), _T("CAPTAINAMERICA"), 0x2FD03E2, 0, 0, _T("pairCaptainAmericaShield") },
    { _T("indexCPS2_Spidey"), 0x0C, _T("Spider-Man"), _T("SPIDERMAN"), 0x30Ae9C2, 0x9, 0x64},
    { _T("indexCPS2_Hulk"), 0x0D, _T("Hulk,"), _T("HULK"), 0x31C9402, 0xa, 0xa },
    { _T("indexCPS2_Venom"), 0x0E, _T("Venom"), _T("VENOM"), 0x32Ed122 , 0, 0},
    { _T("indexCPS2_DrDoom"), 0x0F, _T("Dr. Doom"), _T("DRDOOM"), 0x33ffa42 , 0x9, 0x98 },
    { _T("indexCPS2_Tron"), 0x10, _T("Tron Bonne"), _T("TRON"), 0x35175c2 , 0x11, 0x15, _T("pairTronBody") },
    { _T("indexCPS2_Jill"), 0x11, _T("Jill Valentine"), _T("JILL"), 0x35f3162 , 0x9, 0xb },
    { _T("indexCPS2_Hayato"), 0x12, _T("Hayato"), _T("HAYATO"), 0x36f0742, 0x14, 0x17, _T("pairHayatoSword") },
    { _T("indexCPS2_Ruby"), 0x13, _T("Ruby Heart"), _T("RUBY"), 0x37f9ce2 , 0xb, 0x10 },
    { _T("indexCPS2_SonSon"), 0x14, _T("SonSon"), _T("SONSON"), 0x39136C2 , 0xb, 0x28 },
    { _T("indexCPS2_Amingo"), 0x15, _T("Amingo"), _T("AMINGO"), 0x3A2c762 , 0x9, 0xb },
    { _T("indexCPS2_Marrow"), 0x16, _T("Marrow"), _T("MARROW"), 0x3B214a2 , 0, 0 },
    { _T("indexCPS2_Cable"), 0x17, _T("Cable"), _T("CABLE"), 0x3c2d5a2, 0, 0 },
    { _T("indexCPS2_Abyss1"), 0x18, _T("Abyss (Form 1)"), _T("ABYSS1"), 0x3D19482, 0, 0 },
    { _T("indexCPS2_Abyss2"), 0x19, _T("Abyss (Form 2)"), _T("ABYSS2"), 0x3Da68e2, 0, 0 },
    { _T("indexCPS2_Abyss3"), 0x1A, _T("Abyss (Form 3)"), _T("ABYSS3"), 0x3E80562, 0, 0 },
    { _T("indexCPS2_ChunLi"), 0x1B, _T("Chun-Li"), _T("CHUNLI"), 0x3F00962, 0, 0 },
    { _T("indexCPS2_Megaman"), 0x1C, _T("Megaman"), _T("MEGAMAN"), 0x3F93962, 0x9, 0x211 },
    { _T("indexCPS2_Roll"), 0x1D, _T("Roll"), _T("ROLL"), 0x4007742, 0x9, 0x211 },
    { _T("indexCPS2_Akuma"), 0x1E, _T("Gouki"), _T("GOUKI"), 0x4090ce2, 0, 0 },
    { _T("indexCPS2_BBHood"), 0x1F, _T("B.B. Hood"), _T("BBHOOD"), 0x41Aae62, 0xc, 0x14 },
    { _T("indexCPS2_Felicia"), 0x20, _T("Felicia"), _T("FELICIA"), 0x42D2082, 0, 0 },
    { _T("indexCPS2_Charlie"), 0x21, _T("Charlie"), _T("CHARLIE"), 0x433f102, 0, 0 },
    { _T("indexCPS2_Sakura"), 0x22, _T("Sakura"), _T("SAKURA"), 0x4405b62, 0xb, 0x22 },
    { _T("indexCPS2_Dan"), 0x23, _T("Dan"), _T("DAN"), 0x44540C2, 0, 0 },
    { _T("indexCPS2_Cammy"), 0x24, _T("Cammy"), _T("CAMMY"), 0x44f3b82, 0x9, 0x3e},
    { _T("indexCPS2_Dhalsim"), 0x25, _T("Dhalsim"), _T("DHALSIM"), 0x45AA822, 0x9, 0x26 },
    { _T("indexCPS2_Bison"), 0x26, _T("M.Bison"), _T("MBISON"), 0x462f342, 0x9, 0x14 },
    { _T("indexCPS2_Ken"), 0x27, _T("Ken"), _T("KEN"), 0x46B5662, 0, 0 },
    { _T("indexCPS2_Gambit"), 0x28, _T("Gambit"), _T("GAMBIT"), 0x479ec82, 0x9, 0x26 },
    { _T("indexCPS2_Juggy"), 0x29, _T("Juggernaut"), _T("JUGGERNAUT"), 0x48Cb762, 0x9, 0x44 },
    { _T("indexCPS2_Storm"), 0x2A, _T("Storm"), _T("STORM"), 0x49d9e82, 0x9, 0x2a },
    { _T("indexCPS2_Sabretooth"), 0x2B, _T("Sabretooth"), _T("SABRETOOTH"), 0x4ADb362, 0, 0 },
    { _T("indexCPS2_Magneto"), 0x2C, _T("Magneto"), _T("MAGNETO"), 0x4BF21c2, 0xa, 0xa },
    // This is actually a joint palette but it's incorrectly ripped.  We do need the
    // two step effects palettes but all the character joins can be ignored or excised.
    { _T("indexCPS2_Shuma"), 0x2D, _T("Shuma-Gorath"), _T("SHUMA"), 0x4CDa622, 0x11, 0x130, _T("pairUnhandled") },
    { _T("indexCPS2_WarMachine"), 0x2E, _T("War Machine"), _T("WARMACHINE"), 0x4Ddab82, 0, 0 },
    { _T("indexCPS2_SilverSamurai"), 0x2F, _T("Silver Samurai"), _T("SILVERSAMURAI"), 0x4EF6122, 0x9, 0x37},
    { _T("indexCPS2_OmegaRed"), 0x30, _T("Omega Red"), _T("OMEGARED"), 0x4ff4942, 0x9, 0x20 },
    { _T("indexCPS2_Spiral"), 0x31, _T("Spiral"), _T("SPIRAL"), 0x5109fa2, 0x9, 0xd2},
    { _T("indexCPS2_Colossus"), 0x32, _T("Colossus"), _T("COLOSSUS"), 0x5235a62, 0x9, 0xc8},
    { _T("indexCPS2_IronMan"), 0x33, _T("Iron Man"), _T("IRONMAN"), 0x53384c2, 0, 0 },
    { _T("indexCPS2_Sentinel"), 0x34, _T("Sentinel"), _T("SENTINEL"), 0x545E422, 0x12, 0x13, _T("pairUnhandled") },
    { _T("indexCPS2_Blackheart"), 0x35, _T("Blackheart"), _T("BLACKHEART"), 0x5585402, 0x9, 0x1b },
    { _T("indexCPS2_Thanos"), 0x36, _T("Thanos"), _T("THANOS"), 0x5673e42, 0x9, 0x1f },
    { _T("indexCPS2_Jin"), 0x37, _T("Jin"), _T("JIN"), 0x5758482, 0x9, 0x86 },
    { _T("indexCPS2_CapCom"), 0x38, _T("Captain Commando"), _T("CAPTAINCOMMANDO"), 0x5847ec2 , 0x9, 0x19},
    { _T("indexCPS2_Bonerine"), 0x39, _T("Bonerine"), _T("BONERINE"), 0x59472a2, 0, 0, _T("pairWolvieClaws") },
    { _T("indexCPS2_Kobun"), 0x3A, _T("Kobun"), _T("KOBUN"), 0x59acdc2, 0x9, 0x26 },
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
                strOutput.Format(_T("const sGame_PaletteDataset MVC2_A_%s_PALETTES_%s[] =\r\n{\r\n"), MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, pButtonLabel[iButtonIndex]);
                OutputDebugString(strOutput);

                if (MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName) 
                {
                    strOutput.Format(_T("    { \"%s %s\", 0x%07x, 0x%7x, %s, 0, &%s },\r\n"), sCurrentMoveDescriptors[0].szMoveName, pButtonLabel[iButtonIndex],
                                                                                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                                                                                        MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName);
                }
                else
                {
                    strOutput.Format(_T("    { \"%s %s\", 0x%07x, 0x%7x, %s, 0 },\r\n"), sCurrentMoveDescriptors[0].szMoveName, pButtonLabel[iButtonIndex],
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
                            strOutput.Format(_T("    { \"%s\", 0x%07x, 0x%7x, %s, %u, %s },\r\n"), sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sCurrentMoveDescriptors[iCurrentExtra].pszImageUnitOverride, 
                                                                                                   sCurrentMoveDescriptors[iCurrentExtra].nImageIndex, sCurrentMoveDescriptors[iCurrentExtra].pszPairedPaletteName);
                        }
                        else if (sCurrentMoveDescriptors[iCurrentExtra].pszImageUnitOverride != nullptr)
                        {
                            strOutput.Format(_T("    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n"), sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sCurrentMoveDescriptors[iCurrentExtra].pszImageUnitOverride, sCurrentMoveDescriptors[iCurrentExtra].nImageIndex);
                        }
                        else
                        {
                            strOutput.Format(_T("    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n"), sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, sCurrentMoveDescriptors[iCurrentExtra].nImageIndex);
                        }
                    }
                    else
                    {
                        //strOutput.Format(_T("    { \"%02u %s (Extra - %02x)\", 0x%07x, 0x%7x, %s, %u },\r\n"), iCurrentExtra + 1, pButtonLabel[iButtonIndex], nPaletteCount, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, iCurrentExtra + 1 );
                        strOutput.Format(_T("    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n"), sCurrentMoveDescriptors[iCurrentExtra].szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, iCurrentExtra);
                    }
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                    nPaletteCount++;
                }

                OutputDebugString(_T("};\r\n\r\n"));
            }

            // Status effects...
            strOutput.Format(_T("const sGame_PaletteDataset MVC2_A_%s_PALETTES_SHARED[] =\r\n{\r\n"), MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
            OutputDebugString(strOutput);

            const TCHAR* StatusDescriptions[8] =
            {
                _T("Burning Dark"), _T("Burning Light"), _T("Shocked Dark"), _T("Shocked Light"), _T("Dark Burning Dark"), _T("Dark Burning Light"), _T("Kinetic Charge Dark"), _T("Kinetic Charge Light")
            };

            for (UINT16 iStatusEffect = 0; iStatusEffect < 8; iStatusEffect++)
            {
                // Use this for people with two body pieces
                if (MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName)
                {
                    strOutput.Format(_T("    { \"%s\", 0x%07x, 0x%7x, %s, %u, &%s },\r\n"), StatusDescriptions[iStatusEffect], nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, 0,
                                                                                        MVC2ArcadeCharacterArray[iUnitCtr].pszPalettePairName);
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                    strOutput.Format(_T("    { \"%s 2\", 0x%07x, 0x%7x, %s, %u },\r\n"), StatusDescriptions[iStatusEffect], nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, 1);
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                }
                else
                {
                    strOutput.Format(_T("    { \"%s\", 0x%07x, 0x%7x, %s, %u },\r\n"), StatusDescriptions[iStatusEffect], nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, 0);
                    OutputDebugString(strOutput);
                    nCurrentCharacterOffset += 0x20;
                }
            }

            OutputDebugString(_T("};\r\n\r\n"));

            // Dump the extras if we have any...
            if (MVC2ArcadeCharacterArray[iUnitCtr].nExtraStart != 0)
            {
                strOutput.Format(_T("const sGame_PaletteDataset MVC2_A_%s_PALETTES_EXTRAS[] =\r\n{\r\n"), MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
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

                    strOutput.Format(_T("    { \"%02x: "), iExtraPosition);
                    OutputDebugString(strOutput);

                    if (sExtraDescription)
                    {
                        if (sExtraDescription->nImageIndex != 0xFF)
                        {
                            if ((sExtraDescription->pszPairedPaletteName != nullptr) && (sExtraDescription->pszImageUnitOverride != nullptr))
                            {
                                strOutput.Format(_T("%s\", 0x%07x, 0x%7x, %s, %u, %s },\r\n"), sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sExtraDescription->pszImageUnitOverride,
                                                                                                       sExtraDescription->nImageIndex, sExtraDescription->pszPairedPaletteName);
                            }
                            else if (sExtraDescription->pszImageUnitOverride != nullptr)
                            {
                                strOutput.Format(_T("%s\", 0x%07x, 0x%7x, %s, %u },\r\n"), sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, sExtraDescription->pszImageUnitOverride, sExtraDescription->nImageIndex);
                            }
                            else
                            {
                                strOutput.Format(_T("%s\", 0x%07x, 0x%7x, %s, %u },\r\n"), sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, MVC2ArcadeCharacterArray[iUnitCtr].szImageRefName, sExtraDescription->nImageIndex);
                            }
                            OutputDebugString(strOutput);
                        }
                        else
                        {
                            // Note that this adds "Not Used" values because we need everything for Extras math.
                            strOutput.Format(_T("%s\", 0x%07x, 0x%7x },\r\n"), sExtraDescription->szMoveName, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                            OutputDebugString(strOutput);
                        }
                    }
                    else
                    {
                        // We need everything in the layout for Extras math to work.
                        strOutput.Format(_T("Unused Extra\", 0x%07x, 0x%7x },\r\n"), nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20 );
                        OutputDebugString(strOutput);
                    }

                    nCurrentCharacterOffset += 0x20;
                }

                OutputDebugString(_T("};\r\n\r\n"));
            }

            // Now create the collection...
            strOutput.Format(_T("const sDescTreeNode MVC2_A_%s_COLLECTION[] =\r\n{\r\n"), MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
            OutputDebugString(strOutput);

            for (UINT16 iButtonIndex = 0; iButtonIndex < m_nNumberOfColorOptions; iButtonIndex++)
            {
                strOutput.Format(_T("    { \"%s\", DESC_NODETYPE_TREE, (void*)MVC2_A_%s_PALETTES_%s, ARRAYSIZE(MVC2_A_%s_PALETTES_%s) },\r\n"), pButtonLabel[iButtonIndex], MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, DEF_BUTTONLABEL6_MVC2[iButtonIndex],
                                            MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, pButtonLabel[iButtonIndex] );
                OutputDebugString(strOutput);
            }

            // These are the 7th set in the ROM layout, so either leave these here or adjust the Extra offsets.
            strOutput.Format(_T("    { \"Status Effects\", DESC_NODETYPE_TREE, (void*)MVC2_A_%s_PALETTES_SHARED, ARRAYSIZE(MVC2_A_%s_PALETTES_SHARED) },\r\n"), MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
            OutputDebugString(strOutput);

            if (MVC2ArcadeCharacterArray[iUnitCtr].nExtraStart != 0)
            {
                strOutput.Format(_T("    { \"Extras\", DESC_NODETYPE_TREE, (void*)MVC2_A_%s_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_%s_PALETTES_EXTRAS) },\r\n"), MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc, MVC2ArcadeCharacterArray[iUnitCtr].szCodeDesc);
                OutputDebugString(strOutput);
            }

            OutputDebugString(_T("};\r\n\r\n"));
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
    _stprintf(NewDescTree->szDesc, _T("%s"), g_GameFriendlyName[MVC2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(MVC2_A_EXTRALOC) > 0);
    strMsg.Format(_T("CGame_MVC2_A::InitDescTree: Building desc tree for MVC2_A %s extras...\n"), fHaveExtras ? _T("with") : _T("without"));
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
            _stprintf(UnitNode->szDesc, _T("%s"), MVC2_A_UNITS[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if MVC2_A_DEBUG
            strMsg.Format(_T("Unit: \"%s\", %u of %u (%s), %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, bUseExtra ? _T("with extras") : _T("no extras"), nUnitChildCount);
            OutputDebugString(strMsg);
#endif
            
            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _stprintf(CollectionNode->szDesc, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if MVC2_A_DEBUG
                strMsg.Format(_T("\tCollection: \"%s\", %u of %u, %u children\n"), CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _sntprintf(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _T("%s"), paletteSetToUse[nNodeIndex].szPaletteName);
                    ChildNode->szDesc[ARRAYSIZE(ChildNode->szDesc) - 1] = 0;

                    ChildNode->uUnitId = iUnitCtr;
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if MVC2_A_DEBUG
                    strMsg.Format(_T("\t\tPalette: \"%s\", %u of %u"), ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(_T(", 0x%06x to 0x%06x (%u colors),"), paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(_T(" image unit 0x%02x image index 0x%02x.\n"), paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(_T(" no image available.\n"));
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
            _stprintf(UnitNode->szDesc, _T("Extra Palettes"));
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if MVC2_A_DEBUG
            strMsg.Format(_T("Unit (Extras): %s, %u of %u, %u total children\n"), UnitNode->szDesc, iUnitCtr + 1, nUnitCt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(MVC2_A_EXTRALOC > iUnitCtr) ? (nUnitChildCount - 1) : 0]; //Extra node

            _stprintf(CollectionNode->szDesc, _T("Extra"));

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt; //EX + Extra

#if MVC2_A_DEBUG
            strMsg.Format(_T("\tCollection: %s, %u of %u, %u children\n"), CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
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

                _stprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((MVC2_A_EXTRALOC > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if MVC2_A_DEBUG
                strMsg.Format(_T("\t\tPalette: %s, %u of %u\n"), ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(_T("CGame_MVC2_A::InitDescTree: Loaded %u palettes for MVC2\n"), nTotalPaletteCount);
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
    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("Marvel vs. Capcom 2.dat"));

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

LPCTSTR CGame_MVC2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == MVC2_A_EXTRALOC)
    {
        return _T("Extra Palettes");
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
        strMsg.Format(_T("CGame_MVC2_A::GetPaletteCountForUnit: %u for unit %u which has %u collections.\n"), nCompleteCount, nUnitId, nCollectionCount);
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
            m_nCurrentPaletteSize = cbPaletteSizeOnDisc / 2;
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
        m_nCurrentPaletteSize = (pCurrDef->cbPaletteSize / 2);
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

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSize];

            if (nUnitCtr == indexMVC2ATeamView)
            {
                // This is a virtual group.
                // We just need to be indexed in the rgUnitRedir
                ZeroMemory(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize);
                continue;
            }
            else
            {
                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
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
    bool fShownOnce = false;

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
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (!fShownOnce && (m_nCurrentPaletteROMLocation < m_nLowestKnownPaletteRomLocation)) // This magic number is the lowest known ROM location.
            {
                CString strMsg;
                strMsg.Format(_T("Warning: Unit %u palette %u is trying to write to ROM location 0x%06x which is lower than we usually write to."), nUnitCtr, nPalCtr, m_nCurrentPaletteROMLocation);
                MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
                fShownOnce = true;
            }

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            SaveFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format(_T("CGame_MVC2_A::SaveFile: Saved 0x%x palettes to disk for %u units\n"), nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_MVC2_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;
    static UINT16 s_nColorsPerPage = CRegProc::GetMaxPalettePageSize();

    LoadSpecificPaletteData(nUnitId, nPalId);

    const UINT8 nTotalPagesNeeded = (UINT8)ceil(m_nCurrentPaletteSize / s_nColorsPerPage);
    const bool fCanFitWithinCurrentPageLayout = (nTotalPagesNeeded <= MAX_PALETTE_PAGES);

    if (!fCanFitWithinCurrentPageLayout)
    {
        CString strWarning;
        strWarning.Format(_T("ERROR: The UI currently only supports %u pages. \"%s\" is trying to use %u pages which will not work.\n"), MAX_PALETTE_PAGES, srcNode->szDesc, nTotalPagesNeeded);
        OutputDebugString(strWarning);
    }

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSize, nUnitId, nPalId);

    if (fCanFitWithinCurrentPageLayout && (m_nCurrentPaletteSize > s_nColorsPerPage))
    {
        CString strPageDescription;
        INT16 nColorsRemaining = m_nCurrentPaletteSize;

        for (UINT16 nCurrentPage = 0; (nCurrentPage * s_nColorsPerPage) < m_nCurrentPaletteSize; nCurrentPage++)
        {
            strPageDescription.Format(_T("%s (%u/%u)"), srcNode->szDesc, nCurrentPage + 1, nTotalPagesNeeded);
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
    UINT16 nSrcStart = 0;
    UINT16 nSrcAmt = 0;
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
                if (NodeGet->uUnitId == indexMVC2ATeamView)
                {
                    UINT16 nJoinedUnit1 = indexMVC2AMagneto;
                    UINT16 nJoinedUnit2 = indexMVC2AStorm;
                    UINT16 nJoinedUnit3 = indexMVC2APsylocke;
                    bool fTeamFound = false;

                    for (UINT16 nTeamIndex = 0; nTeamIndex < ARRAYSIZE(mvc2TeamList); nTeamIndex++)
                    {
                        if (_tcsicmp(mvc2TeamList[nTeamIndex].pszTeamName, pCurrentNode->szDesc) == 0)
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
                        OutputDebugString(_T("WARNING: MVC2 Team lookup failed. Please fix.  Will use MSP for now.\n"));
                    }

                    // Fudge some visual offsets here so fatter sprites don't collide.
                    int nXOffsetForSecond = 100;
                    int nYOffsetForSecond = 0;
                    int nXOffsetForThird = nXOffsetForSecond + 100;
                    int nYOffsetForThird = 0;

                    if (nJoinedUnit2 == indexMVC2ASentinel)
                    {
                        nXOffsetForSecond += 40;
                        nXOffsetForThird += 40;
                    }
                    else if (nJoinedUnit2 == indexMVC2AStrider)
                    {
                        nXOffsetForSecond += 280;
                        nXOffsetForThird += 280;
                    }
                    else if (nJoinedUnit2 == indexMVC2ADrDoom)
                    {
                        nXOffsetForSecond += 80;
                        nXOffsetForThird += 80;
                    }

                    if (nJoinedUnit3 == indexMVC2ASentinel)
                    {
                        nXOffsetForThird += 40;
                    }
                    else if (nJoinedUnit3 == indexMVC2ACaptainCommando)
                    {
                        nXOffsetForThird += 150;
                    }
                    else if (nJoinedUnit3 == indexMVC2AAkuma)
                    {
                        nXOffsetForThird += 180;
                    }

                    UINT16 nNodeIndex = (NodeGet->uPalId % 6);
                    // there are 8 palettes per main character button/color section
                    UINT16 nPaletteIndex = nNodeIndex * 8;
                    const sGame_PaletteDataset* palette1ToJoin = GetSpecificPalette(nJoinedUnit1, nPaletteIndex);
                    const sGame_PaletteDataset* palette2ToJoin = GetSpecificPalette(nJoinedUnit2, nPaletteIndex);
                    const sGame_PaletteDataset* palette3ToJoin = GetSpecificPalette(nJoinedUnit3, nPaletteIndex);

                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(palette1ToJoin->indexImgToUse, palette1ToJoin->indexOffsetToUse,
                            CreateImgTicket(palette2ToJoin->indexImgToUse, palette2ToJoin->indexOffsetToUse, 
                                CreateImgTicket(palette3ToJoin->indexImgToUse, palette3ToJoin->indexOffsetToUse, nullptr, nXOffsetForThird, nYOffsetForThird),
                                nXOffsetForSecond, nYOffsetForSecond)
                        )
                    );

                    //Set each palette
                    sDescNode* JoinedNode[3] = {
                        MainDescTree.GetDescNode(nJoinedUnit1, nNodeIndex, 0, -1),
                        MainDescTree.GetDescNode(nJoinedUnit2, nNodeIndex, 0, -1),
                        MainDescTree.GetDescNode(nJoinedUnit3, nNodeIndex, 0, -1)
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
                else  if ((_tcsicmp(pCurrentNode->szDesc, _T("LP")) == 0) || (_tcsicmp(pCurrentNode->szDesc, _T("LK")) == 0) ||
                          (_tcsicmp(pCurrentNode->szDesc, _T("HP")) == 0) || (_tcsicmp(pCurrentNode->szDesc, _T("HK")) == 0) ||
                          (_tcsicmp(pCurrentNode->szDesc, _T("A1")) == 0) || (_tcsicmp(pCurrentNode->szDesc, _T("A2")) == 0))
                {
                    // We show 6 sprites (LP...A2) for export for all normal MVC2 sprites
                    nSrcAmt = m_nNumberOfColorOptions;
                    nNodeIncrement = pCurrentNode->uChildAmt;
                    // Need to reset because we have a status effect label set as well.
                    pButtonLabel = const_cast<TCHAR*>((TCHAR*)DEF_BUTTONLABEL6_MVC2);

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
                else if (_tcsicmp(pCurrentNode->szDesc, _T("Status Effects")) == 0)
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
                    pButtonLabel = const_cast<TCHAR*>((TCHAR*)DEF_LABEL_STATUS_EFFECTS);
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if ((NodeGet->uUnitId == indexMVC2AShuma) ||
                    (NodeGet->uUnitId == indexMVC2ASentinel))
                {
                    OutputDebugString(_T("Sadness: this sprite is wrong.  Should be reripped as paired.\n"));
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

    for (UINT16 i = 0; i < m_nCurrentPaletteSize; i++)
    {
        NewPal[i] = ConvPal(m_pppDataBuffer[nUnitId][nPalId][i]);
    }

    NewPal[0] = 0xFF000000;

    return NewPal;
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
    strMessage.Format(_T("CGame_MVC2_A::GetBasicOffset : Palette %u updated.  This palette is %s.\n"), nPalId, (nBasicOffset != -1) ? _T("basic") : _T("Extra"));
    OutputDebugString(strMessage);

    proc_supp(nUnitId, nPalId);
}
