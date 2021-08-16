#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "RegProc.h"
#include <mmiscapi.h> // RIFF .PAL support

#include "Game\GameDef.h"

constexpr auto c_strLastUsedPath = L"LastUsedPath";
constexpr auto c_strLastUsedGFlag = L"LastUsedGFlag";

// NOTE: If you add a multiple-ROM option below, you will also need to update
// CGameLoad::LoadFile to pass the appropriate gameflag to that game.
// When you add or change the data here, please also update the Read Me with that data.
sSupportedGameList SupportedGameList[] =
{
    { AOF1_A,           L"Art of Fighting 1", L"Art of Fighting 1|044-p1.*|", GamePlatform::NEOGEO, GameSeries::ArtOfFighting },
    { AOF3_A,           L"Art of Fighting 3", L"Art of Fighting 3: Characters (p1), Stages (p2)|096-p1.*;096-p2.*|", GamePlatform::NEOGEO, GameSeries::ArtOfFighting },
    { BMKNS_SNES,       L"Battle Master: KnS (SNES)", L"Battle Master: KnS (SNES)|battle master - kyuukyoku no senshi-tachi (japan).s?c|", GamePlatform::Nintendo },
    { BLEACH_DS,        L"Bleach Dark Souls (DS)", L"Bleach Dark Souls (DS)|3494*Europe*nds;2761*US*nds|", GamePlatform::Nintendo }, // Sega
    { BREAKERS_A,       L"Breakers Revenge", L"Breakers Revenge|245-p1.p1|", GamePlatform::NEOGEO },
    { BSSMSJR_SNES,     L"Bishojo Senshi Sailor Moon S - JR (SNES)", L"Bishojo Senshi Sailor Moon S - JR (SNES)|Bishoujo Senshi Sailor Moon S - Jougai Rantou! Shuyaku Soudatsusen (J*).s?c|", GamePlatform::Nintendo },
    { CFTE_SNES,        L"Clay Fighter:TE (SNES)", L"Clay Fighter:TE (SNES)|Clay Fighter - Tournament Edition (USA).s?c|", GamePlatform::Nintendo },
    { COTA_A,           L"COTA", L"COTA|xmn*.05*|", GamePlatform::CapcomCPS12 },
    { CVS2_A,           L"CVS2", L"CVS2|SNKGD_SL.bin|", GamePlatform::SegaNAOMI },
    { DBZHD_SNES,       L"Dragon Ball Z: Hyper Dimension (SNES)", L"Dragon Ball Z: Hyper Dimension (SNES)|dragon ball z - hyper dimension (*).s?c|", GamePlatform::Nintendo },
    { DOUBLEDRAGON_A,   L"Double Dragon", L"Double Dragon|082-p1.*;ddrag_p1.rom|", GamePlatform::NEOGEO },
    { FatalFury1_A,     L"Fatal Fury: King of Fighters", L"Fatal Fury: KoF|033-p1.*|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { FatalFuryS_A,     L"Fatal Fury Special (Neo-Geo)", L"Fatal Fury Special (Neo-Geo)|058-p1.*|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { FatalFuryS_SNES,  L"Fatal Fury Special (SNES)", L"Fatal Fury Special (SNES)|Fatal Fury Special (USA).s?c|", GamePlatform::Nintendo },
    { Garou_A,          L"Garou: MotW", L"Garou: MotW|kf.neo-sma|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { GarouP_A,         L"Garou: MotW (Prototype)", L"Garou: MotW (Prototype)|proto_253-p1.p1;253-p1p.bin|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { Garou_S,          L"Garou: MotW", L"Garou: MotW for Steam 2|p1.bin|", GamePlatform::Steam },
    { GUNDAM_SNES,      L"Gundam Wing: Endless Duel (SNES)", L"Gundam Wing: Endless Duel (SNES)|Shin Kidou Senki Gundam W - Endless Duel (Japan).s?c|", GamePlatform::Nintendo },
    { JOJOS_A,          L"Jojo's: HFTF", L"Jojos (Japan): HUDs and menus (50), Characters (51)|50;51|", GamePlatform::CapcomCPS3 },
    { JOJOSRPG_SNES,    L"Jojo's: RPG (SNES)", L"Jojo's: RPG (SNES)|JoJo no Kimyou na Bouken (Japan).sfc;JoJo no Kimyou na Bouken (Japan) (Translated En).sfc|", GamePlatform::Nintendo },
    { KarnovsR_A,       L"Karnov's Revenge", L"Karnov's Revenge|066-p1.p1|", GamePlatform::NEOGEO }, // DataEast
    { KI_SNES,          L"Killer Instinct (SNES)", L"Killer Instinct (SNES)|Killer Instinct (USA)*.s?c;sns-akle-0.u1|", GamePlatform::Nintendo },
    { KOTM_A,           L"King of the Monsters", L"King of the Monsters (Neo-Geo)|016-p1.*;016-hp1.*|", GamePlatform::NEOGEO },
    { KIZUNA_A,         L"Kizuna Encounter", L"Kizuna Encounter|216-p1.*;ke_p1.rom|", GamePlatform::NEOGEO },
    { KOF94_A,          L"KOF94", L"KOF94|055-p1.*|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF95_A,          L"KOF95", L"KOF95|084-p1.p1|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF96_A,          L"KOF96", L"KOF96|214-p2.sp2|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF97_A,          L"KOF97", L"KOF97|232-p2.*;kof97_p2.rom;kf97-p2p.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF98_A,          L"KOF98", L"KOF98|242-p2.*;kof98_p2.rom|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF98AE2016_A,    L"KOF98AE2016 (Romhack)", L"KOF98AE2016 (Romhack)|242ae-p2.sp2|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF99AE_A,        L"KOF99AE", L"KOF99AE: A,B (p2), C,D,AC,BD (p3)|kof99ae_p2.bin;kof99ae_p3.bin;152-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF00N_A,         L"KOF00N", L"KOF00N|257-pg2.sp2;257-p2n.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF01_A,          L"KOF01", L"KOF01|262-p2-08-e0.sp2;5003-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    // normal ROM name is 265-p2.sp2, but the fightcade ROM name is 265.p2.bin
    { KOF02_A,          L"KOF02", L"KOF02|265*p2*|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF02PS2_A,       L"KOF02 (2002PS2)", L"KOF02 (2002PS2)|265ps2*p2*|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF02UM_S,        L"KOF02UM", L"KOF02UM|pal_a*.bin;bar.bin;max2bg.bin;clear.bin;psel.bin-n;rank.bin;conte.bin|", GamePlatform::Steam },
    { KOF03_A,          L"KOF03 (2004 EX Ultra Plus)", L"KOF03 (2004 EX Ultra Plus)|2k3-p1up.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOFXI_A,          L"KOFXI", L"KOFXI|gdrom_KOFXI_v5_AllFighters.bin|", GamePlatform::SammyAtomiswave },
    { LASTBLADE_A,      L"Last Blade", L"Last Blade|234-p1.p1|", GamePlatform::NEOGEO },
    { LASTBLADE2_A,     L"Last Blade 2", L"Last Blade 2 (Arcade)|243*.p1;LB2_P1.ROM;p1.bin|", GamePlatform::NEOGEO },
    { MAGICALDROPIII_A, L"Magical Drop III", L"Magical Drop III|233-p1.*|", GamePlatform::NEOGEO },
    { MartialMasters_A, L"Martial Masters", L"Martial Masters (PGM)|v104_32m.u9|", GamePlatform::PGM },
    { MATRIMELEE_A,     L"Matrimelee", L"Matrimelee|266-p2.sp2|", GamePlatform::NEOGEO },
    { MSH_A,            L"Marvel Super Heroes", L"MSH: Characters (*.05), Portraits (*.06b)|*.05*;*.06b|", GamePlatform::CapcomCPS12 },
    { MVC_A,            L"Marvel vs Capcom", L"MVC Arcade|mvc*.06*|", GamePlatform::CapcomCPS12, GameSeries::MvC },
    { MMX_SNES,         L"Mega Man X (SNES)", L"Mega Man X (SNES)|Mega*Man X (USA).s?c;sns-rx-0 p0.u1|", GamePlatform::Nintendo },
    { MMX2_SNES,        L"Mega Man X2 (SNES)", L"Mega Man X2 (SNES)|Mega*Man X2 (USA).s?c|", GamePlatform::Nintendo },
    { MMX3_SNES,        L"Mega Man X3 (SNES)", L"Mega Man X3 (SNES)|Mega*Man X3 (USA).s?c|", GamePlatform::Nintendo },
    { MMPR_SNES,        L"MMPR:TFE (SNES)", L"MMPR:TFE (SNES)|Mighty Morphin Power Rangers - The Fighting Edition (USA).s?c|", GamePlatform::Nintendo },
    { MSHVSF_A,         L"MSHVSF", L"MSHVSF: Characters (*.06a), Portraits (*.07b)|*.06a;*.07b|", GamePlatform::CapcomCPS12, GameSeries::MvC },
    { MSHWOTG_SNES,     L"MSH: War of the Gems (SNES)", L"MSH: War of the Gems (SNES)|Marvel Super Heroes in War of the Gems (USA).s?c|", GamePlatform::Nintendo },
    // MarvelVsCapcom2.bin
    // Unlocked\MarvelVsCapcom2_unlocked.bin
    { MVC2_A,           L"MVC2", L"MVC2 Arcade (MarvelVsCapcom2_unlocked.bin)|m*.dat;m*.bin|", GamePlatform::SegaNAOMI },
    { NeoBomberman_A,   L"Neo Bomberman", L"Neo Bomberman|093-p1.*|", GamePlatform::NEOGEO },
    { NGBC_A,           L"NGBC", L"NGBC|NeoGeoBattleColliseum.bin|", GamePlatform::SammyAtomiswave },
    { NINJAMASTERS_A,   L"Ninja Master's", L"Ninja Master's|217-p2.*;ninjm_p2.rom|", GamePlatform::NEOGEO },
    { RANMACRH_SNES,    L"Ranma Nibunnoichi: CRH (SNES)", L"Ranma Nibunnoichi: CRH (SNES)|Ranma Nibunnoichi - Chougi Ranbu Hen (J).s?c;ranma 1-2 - chougi ranbu hen (japan).s?c|", GamePlatform::Nintendo },
    { RANMAHB_SNES,     L"Ranma Nibunnoichi: HB (SNES)", L"Ranma Nibunnoichi: HB (SNES)|ranma 1-2 - hard battle (usa).s?c|", GamePlatform::Nintendo },
    { ROTD_A,           L"Rage of the Dragons", L"Rage of the Dragons|264-p1.*|", GamePlatform::NEOGEO },
    { RBFF1_A,          L"Real Bout Fatal Fury", L"Real Bout Fatal Fury|095-p1.*;rbff1_p1.rom|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { RBFF2_A,          L"Real Bout Fatal Fury 2", L"Real Bout Fatal Fury 2|240-p1.*;rb2_p1.rom|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    // normal ROM name is 223-p1.p1 (and 223-p1k.p1 for Korean), FC uses 223-p1.bin
    { RBFFS_A,          L"Real Bout Fatal Fury Special", L"Real Bout Fatal Fury Special|223*p1*|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { REDEARTH_A,       L"Red Earth", L"Red Earth (Stages: 30, Characters: 31, Next: 50)|30;31;50|", GamePlatform::CapcomCPS3 },
    { RODSM2_A,         L"Ring of Destruction: Slam Masters 2", L"Ring of Destruction: Slam Masters 2|smbe.05b|", GamePlatform::CapcomCPS12 },
    { SAMSHO1_A,        L"Samurai Shodown", L"Samurai Shodown|045-p1.*|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO2_A,        L"Samurai Shodown II", L"Samurai Shodown II|063-p1.*|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO3_A,        L"Samurai Shodown III", L"Samurai Shodown III|087-p5.p5|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO4_A,        L"Samurai Shodown IV", L"Samurai Shodown IV|sams4_p1.rom;222-p1.bin;222_p1.p1|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO5_A,        L"Samurai Shodown V", L"Samurai Shodown V|270-p1.*|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO5SP_A,      L"Samurai Shodown V Special", L"Samurai Shodown V Special|272-p1.*;p1*h*.bin|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAVAGEREIGN_A,    L"Savage Reign", L"Savage Reign|059-p1.*;savag_p1.rom|", GamePlatform::NEOGEO },
    { SFA1_A,           L"SFA1", L"SFA1|sfz.06|", GamePlatform::CapcomCPS12, GameSeries::SFA },
    { SFA2_A,           L"SFA2", L"SFA2: Characters (sz*.07), Bonus (sz*.08)|sz*.07*;sz*.08*|", GamePlatform::CapcomCPS12, GameSeries::SFA },
    { SFA3_A,           L"SFA3", L"SFA3 sz3.09c|*.09*|", GamePlatform::CapcomCPS12, GameSeries::SFA },
    { SFZ3U_A,          L"SFZ3U", L"SFZ3U|StreetFighterZero3Upper.bin;Street_Fighter_Zero_3_Upper.dat|", GamePlatform::SegaNAOMI },
    { SFIII1_A,         L"SFIII:NG", L"SFIII:NG Arcade|50|", GamePlatform::CapcomCPS3, GameSeries::SF3 },
    { SFIII2_A,         L"SFIII:2I", L"SFIII:2I Arcade|50|", GamePlatform::CapcomCPS3, GameSeries::SF3 },
    { SFIII3_A,         L"SFIII:3S", L"SFIII:3S Arcade (51), Gill glow/X.C.O.P.Y. (10)|10;51|", GamePlatform::CapcomCPS3 },
    { SF2CE_A,          L"SF2:CE", L"SF2:CE: Select (21), Characters (22), Continue (23)|s92*21*6f;s92*22*7f;s92*23*8f|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
    { SF2HF_A,          L"SF2:HF", L"SF2:HF: Select (21), Characters (22), Continue (23)|s2t*21.6f;s2t*22.7f;s2t*_23.8f;bundleStreetFighterII_HF.mbundle|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
    { SVG_SNES,         L"Super Variable Geo (Japan)", L"Super Variable Geo (Japan SNES)|Super Variable Geo (J*).s?c|", GamePlatform::Nintendo },
    { SVCPLUSA_A,       L"SNK vs Capcom", L"SNK vs Capcom|svc-p2pl.bin;svc-p2sp.bin|", GamePlatform::NEOGEO },
    { SSF2T_A,          L"SSF2T", L"SSF2T: Portraits (*.03c), Characters (*.04a), Stages (*.08)|sfx*.03*;sfx*.04a;sfx*.08|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
    { SSF2T_GBA,        L"SSF2T: Revival (GBA)", L"SSF2T: Revival (GBA)|Super*Street*Fighter*.gba|", GamePlatform::Nintendo },
    { SDODGEBALL_A,     L"Super Dodge Ball", L"Super Dodge Ball|208-p1.*;sdb_p1.rom|", GamePlatform::NEOGEO },
    { GEMFIGHTER_A,     L"Super Gem Fighter", L"Super Gem Fighter|pcf*.07|", GamePlatform::CapcomCPS12 },
    { SPF2T_A,          L"Super Puzzle Fighter II Turbo", L"Super Puzzle Fighter II Turbo|pzf.04*|", GamePlatform::CapcomCPS12 },
    { TMNTTF_SNES,      L"Teenage Mutant Ninja Turtles: TF (SNES)", L"Teenage Mutant Ninja Turtles: TF (SNES)|sns-ky-0.u1;teenage mutant ninja turtles - tournament fighters (U*.s*c|", GamePlatform::Nintendo },
    { TOPF2005_SEGA,    L"Top Fighter 2005 (Mega Drive)", L"Top Fighter 2005|top fighter 2005 (unl).bin|", GamePlatform::Sega },
    { VHUNT2_A,         L"Vampire Hunter 2", L"Vampire Hunter 2|vh2j.09|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
    { VSAV_A,           L"Vampire Savior", L"Vampire Savior|vm3*.10b|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
    { VSAV2_A,          L"Vampire Savior 2", L"Vampire Savior 2|vs2j.10|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
    { WakuWaku7_A,      L"Waku Waku 7", L"Waku Waku 7|225-p1.p1|", GamePlatform::NEOGEO },
    { WINDJAMMERS_A,    L"Windjammers", L"Windjammers|065-p1.p1|", GamePlatform::NEOGEO }, // Data East on NEOGEO
// Not quite ready yet - palettes need tweaks
//    { Gowcaizer_A,      L"Voltage Fighter Gowcaizer", L"Voltage Fighter Gowcaizer|094-p1.p1|", GamePlatform::NEOGEO },
    { XMMA_SNES,        L"X-Men: Mutant Apocalypse (SNES)", L"X-Men: Mutant Apocalypse (SNES)|X-Men - Mutant Apocalypse (USA).s?c|", GamePlatform::Nintendo },
    { XMVSF_A,          L"XMVSF", L"XMVSF|xvs*.05*|", GamePlatform::CapcomCPS12, GameSeries::MvC },
    { NEOGEO_A,         L"Unknown Game Mode", L"Unknown Game ROM|*.*|" },
};

sSupportedGameList* pSupportedGameList = SupportedGameList;
const int nNumberOfLoadROMOptions = ARRAYSIZE(SupportedGameList);

void CPalModDlg::LoadGameDir(SupportedGamesList nGameFlag, WCHAR* pszLoadDir)
{
    ClearGameVar();

    CGameClass* GameGet = GetHost()->GetLoader()->LoadDir(nGameFlag, pszLoadDir);

    if (GameGet)
    {
        GetHost()->SetGameClass(GameGet);

        //Set the last used location
        SetLastUsedDirectory(pszLoadDir, GetHost()->GetCurrGame()->GetGameFlag());

        //The game has loaded OK
        PostGameLoad();
    }
    else
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_GAME))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
    }

    //Since we loaded a DIR, show status of load
    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::PostGameLoad()
{
    CPalModApp* ProgHost = GetHost();

    CString strDebugInfo;
    strDebugInfo.Format(L"CPalModDlg::PostGameLoad : Successfully loaded files for '%s'\n", g_GameFriendlyName[ProgHost->GetCurrGame()->GetGameFlag()]);
    OutputDebugString(strDebugInfo);

    //Set pal, img, and img ctrl pointers
    MainPalGroup = ProgHost->GetBasePal();
    ImgDispCtrl = ProgHost->GetImgDispCtrl();

    if (ProgHost->IsImgLoaded())
    {
        ImgFile = ProgHost->GetImgFile();
    }
    else
    {
        ImgFile = NULL;
    }

    //Get color plane data
    GetPlaneData();

    //Force the image to redisplay
    bForceImg = TRUE;

    //Init the first palette selection
    OnPalSelChange(0);

    //Enable the program
    Enable(TRUE);

    //Update the combo selection
    UpdateCombo();

    GetDlgItem(IDC_BCHECKMIX)->ShowWindow((ProgHost->GetCurrGame()->GetGameFlag() == MVC2_D) ? SW_SHOW : SW_HIDE);

    CPreviewDlg* PreviewDlg = GetHost()->GetPreviewDlg();

    if (!PreviewDlg->IsWindowVisible())
    {
        PreviewDlg->ShowWindow(SW_SHOW);
        PreviewDlg->m_ImgDisp.UpdateCtrl();
    }

    UpdateAppTitle();
}

void CPalModDlg::OnBnUpdate()
{
    GetHost()->GetCurrGame()->UpdatePalData();

    bPalChanged = FALSE;
}

void CPalModDlg::OnButtonClickCheckEdits()
{
    // Commit current changes to memory if needed
    if (bPalChanged)
    {
        OnBnUpdate();
    }

    GetHost()->GetCurrGame()->ValidateMixExtraColors(&fFileChanged);
}

void CPalModDlg::OnFilePatch()
{
    // Commit current changes to memory
    if (bPalChanged)
    {
        OnBnUpdate();
    }

    GetHost()->GetLoader()->SaveGame(GetHost()->GetCurrGame());

    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());

    if (!GetHost()->GetLoader()->GetErrCt())
    {
        fFileChanged = FALSE;
    }
}

void CPalModDlg::OnFileCrossPatch()
{
    // Do *not* clear the dirty flag if set: this isn't saving to the original game files!
    GetHost()->GetLoader()->CrosscopyGame(GetHost()->GetCurrGame());

    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::OnSavePatchFile()
{
    // Commit current changes to memory
    if (bPalChanged)
    {
        OnBnUpdate();
    }

    // Generate an IPS file of the current changes
    if (GetHost()->GetCurrGame()->GetIsDir())
    {
        CString strTargetDirectory;

        if (SetLoadDir(&strTargetDirectory))
        {
            GetHost()->GetLoader()->SaveMultiplePatchFiles(GetHost()->GetCurrGame(), strTargetDirectory);
        }
    }
    else
    {
        GetHost()->GetLoader()->SavePatchFile(GetHost()->GetCurrGame());
    }

    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::OnNMReleasedCaptureAll(NMHDR* pNMHDR, LRESULT* pResult)
{
    if (!bGetSliderUndo)
    {
        bGetSliderUndo = TRUE;
    }

    *pResult = 0;
}

void CPalModDlg::ProcChange(BOOL bReset /* = FALSE */)
{
    if (bReset)
    {
        UndoProc.Clear();

        bPalChanged = FALSE;
    }
    else
    {
        UndoProc.DeleteRedoList();
        NewUndoData();

        fFileChanged = TRUE;
        bPalChanged = TRUE;
    }
}

void CPalModDlg::OnFileExit()
{
    OnClose();
}

void CPalModDlg::OnFileOpenExtrasFile()
{
    if (GetHost()->GetCurrGame() && GetHost()->GetCurrGame()->GameAllowsExtraFile())
    {
        GetHost()->GetCurrGame()->OpenExtraFile();
    }
}

void CPalModDlg::OnFileCloseFileDir()
{
    if (VerifyMsg(eVerifyType::VM_FILECHANGE))
    {
        CloseFileDir();
    }
}

void CPalModDlg::OnBnShowPrev()
{
    CPreviewDlg* PreviewDlg = GetHost()->GetPreviewDlg();
    if (!PreviewDlg->IsWindowVisible())
    {
        PreviewDlg->ShowWindow(SW_SHOW);

        PreviewDlg->m_ImgDisp.UpdateCtrl();
    }
    else
    {
        PreviewDlg->ShowWindow(SW_HIDE);
    }
}

void CPalModDlg::SetColorsPerLineTo8()
{
    CRegProc::SetColorsPerLine(PAL_MAXWIDTH_8COLORSPERLINE);

    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_8COLORSPERLINE, MF_BYCOMMAND | MF_CHECKED);
    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_16COLORSPERLINE, MF_BYCOMMAND | MF_UNCHECKED);
}

void CPalModDlg::SetColorsPerLineTo16()
{
    CRegProc::SetColorsPerLine(PAL_MAXWIDTH_16COLORSPERLINE);

    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu
    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_8COLORSPERLINE, MF_BYCOMMAND | MF_UNCHECKED);
    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_16COLORSPERLINE, MF_BYCOMMAND | MF_CHECKED);
}

void CPalModDlg::UpdateColorFormatMenu()
{
    bool canChangeFormat = false;
    bool canChangeAlpha = false;
    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    if (GetHost()->GetCurrGame())
    {
        ColMode currColMode = GetHost()->GetCurrGame()->GetColorMode();
        AlphaMode currAlphaMode = GetHost()->GetCurrGame()->GetAlphaMode();
        PALWriteOutputOptions currWriteMode = GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency();
        canChangeAlpha = canChangeFormat = GetHost()->GetCurrGame()->AllowUpdatingColorFormatForGame();

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB333_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB333) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB444_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB444_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB444_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB444_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB555_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB555_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR555_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR555_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_SHARPRGB, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB555_SHARP) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_GRB555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_GRB555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB666, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB666_NEOGEO) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_xRGB888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_xRGB888) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_xBGR888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_xBGR888) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_ARGB1888, 
            MF_BYCOMMAND | (((currColMode == ColMode::COLMODE_ARGB1888) || (currColMode == ColMode::COLMODE_ARGB1888_32STEPS))? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_ARGB7888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_ARGB7888) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_ARGB8888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_ARGB8888) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_ABGR8888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_ABGR8888) ? MF_CHECKED : MF_UNCHECKED));

        // There's no allowance for alpha with NEOGEO colors
        canChangeAlpha = canChangeAlpha && (currColMode != ColMode::COLMODE_RGB666_NEOGEO);

        pSettMenu->CheckMenuItem(ID_ALPHASETTING_FIXED, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesFixedAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_VARIABLE, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesVariableAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_UNUSED, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameDoesNotUseAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_CHAOTIC, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesChaoticAlpha) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_TRANSPSETTING_16, MF_BYCOMMAND | ((currWriteMode == PALWriteOutputOptions::WRITE_16) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_TRANSPSETTING_256, MF_BYCOMMAND | ((currWriteMode == PALWriteOutputOptions::WRITE_MAX) ? MF_CHECKED : MF_UNCHECKED));
    }

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB333_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB444_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB444_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB555_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR555_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_GRB555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_SHARPRGB, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB666, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_xRGB888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_xBGR888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_ARGB1888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_ARGB7888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_ARGB8888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_ABGR8888, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_ALPHASETTING_FIXED, canChangeAlpha ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_UNUSED, canChangeAlpha ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_VARIABLE, MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_CHAOTIC, MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_TRANSPSETTING_16, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_TRANSPSETTING_256, canChangeFormat ? MF_ENABLED : MF_DISABLED);
}

void CPalModDlg::SetAlphaModeTo(AlphaMode newAlphaMode)
{
    if (GetHost()->GetCurrGame())
    {
        GetHost()->GetCurrGame()->SetAlphaMode(newAlphaMode);
    }
}

void CPalModDlg::SetColorFormatTo(ColMode newColMode)
{
    if (GetHost()->GetCurrGame())
    {
        GetHost()->GetCurrGame()->SetColorMode(newColMode);
    }
}

void CPalModDlg::SetMaximumWritePerEachTransparency(PALWriteOutputOptions eUpdatedOption)
{
    if (GetHost()->GetCurrGame())
    {
        GetHost()->GetCurrGame()->SetMaximumWritePerEachTransparency(eUpdatedOption);
    }
}

void CPalModDlg::LoadLastDir()
{
    SupportedGamesList nLastUsedGFlag = NUM_GAMES;
    BOOL bIsDir;
    WCHAR szLastDir[MAX_PATH];

    if (GetLastUsedPath(szLastDir, sizeof(szLastDir), &nLastUsedGFlag, FALSE, &bIsDir))
    {
        if (VerifyMsg(eVerifyType::VM_FILECHANGE)) // Save current changes if needed
        {
            if ((nLastUsedGFlag >= NUM_GAMES) || (nLastUsedGFlag < 0))
            {
                CString strError;
                if (strError.LoadString(IDS_ERROR_PARAMETERS))
                {
                    MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
                }
                return;
            }
            else
            {
                if (bIsDir)
                {
                    LoadGameDir(nLastUsedGFlag, szLastDir);
                }
                else
                {
                    LoadGameFile(nLastUsedGFlag, szLastDir);
                }
            }
        }
    }
    else
    {
        // No previous game information: give them the normal prompts.
        OnFileOpen();
    }
}

int CALLBACK CPalModDlg::OnBrowseDialog(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData)
{
    switch (uMsg)
    {
    case BFFM_INITIALIZED:
    {
        WCHAR szPath[MAX_PATH];
        BOOL fIsDir = FALSE;
        SupportedGamesList nDefaultGameFlag = (SupportedGamesList)lpData;

        if (GetLastUsedPath(szPath, sizeof(szPath), &nDefaultGameFlag, FALSE, &fIsDir))
        {
            if (!fIsDir)
            {
                // We're pointing at a file, so switch over to the path
                LPWSTR pszSlash = wcsrchr(szPath, L'\\');

                if (pszSlash)
                {
                    pszSlash[0] = 0;
                }
            }

            ::SendMessage(hwnd, BFFM_SETSELECTION, TRUE, (LPARAM)szPath);
        }
        break;
    }
    default:
        break;
    }

    return 0;
}

void CPalModDlg::SetLastUsedDirectory(LPCWSTR pszPath, SupportedGamesList nGameFlag)
{
    if (pszPath != nullptr)
    {
        HKEY hKey = nullptr;

        //Set the directory / Game Flag
        if (ERROR_SUCCESS == RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, nullptr, REG_OPTION_NON_VOLATILE, KEY_WRITE | KEY_SET_VALUE, NULL, &hKey, NULL))
        {
            CString strPerGameString;

            strPerGameString.Format(L"%s_%u", c_strLastUsedPath, nGameFlag);
            RegSetValueEx(hKey, strPerGameString, 0, REG_SZ, (LPBYTE)pszPath, (DWORD)(wcslen(pszPath) + 1) * sizeof(WCHAR));
            RegSetValueEx(hKey, c_strLastUsedPath, 0, REG_SZ, (LPBYTE)pszPath, (DWORD)(wcslen(pszPath) + 1) * sizeof(WCHAR));
            RegSetValueEx(hKey, c_strLastUsedGFlag, 0, REG_DWORD, (LPBYTE)&nGameFlag, (DWORD)sizeof(int));

            RegCloseKey(hKey);
        }
    }

    return;
}

BOOL CPalModDlg::GetLastUsedPath(LPWSTR pszPath, DWORD cbSize, SupportedGamesList* nGameFlag, BOOL bCheckOnly, BOOL* bIsDir)
{
    BOOL fFound = FALSE;
    HKEY hKey = nullptr;

    if (ERROR_SUCCESS == RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey))
    {
        DWORD dwRegType = REG_SZ;
        WCHAR szPath[MAX_PATH] = {};
        DWORD cbDataSize = sizeof(szPath);

        //Get the directory: tune to the last usage of the current game if desired and possible
        for (int nPass = 0; (nPass < 2) && !fFound; nPass++)
        {
            cbDataSize = sizeof(szPath);

            CString strPerGameString;

            if (nPass == 0)
            {
                if ((nGameFlag) && (*nGameFlag != NUM_GAMES))
                {
                    strPerGameString.Format(L"%s_%u", c_strLastUsedPath, *nGameFlag);
                }
                else
                {
                    continue;
                }
            }
            else
            {
                strPerGameString = c_strLastUsedPath;
            }

            if ((ERROR_SUCCESS == RegQueryValueEx(hKey, strPerGameString, 0, &dwRegType, (LPBYTE)szPath, &cbDataSize))
                && (REG_SZ == dwRegType))
            {
                if (bCheckOnly)
                {
                    fFound = TRUE;
                }
                else
                {
                    DWORD dwAttribs = GetFileAttributes(szPath);

                    if (INVALID_FILE_ATTRIBUTES != dwAttribs)
                    {
                        if (bIsDir)
                        {
                            //Check to see if it's actually a file without an extension
                            *bIsDir = (dwAttribs & FILE_ATTRIBUTE_DIRECTORY);
                        }

                        // This code used to be testing for (dwAttribs & FILE_ATTRIBUTE_ARCHIVE), but I don't think we need that currently.
                        wcscpy(pszPath, szPath);
                        fFound = TRUE;
                    }
                }
            }
        }

        //Grab the game flag
        if (nGameFlag)
        {
            *nGameFlag = NUM_GAMES;

            dwRegType = REG_DWORD;
            cbDataSize = sizeof(int);

            if ((ERROR_SUCCESS == RegQueryValueEx(hKey, c_strLastUsedGFlag, 0, &dwRegType, (LPBYTE)nGameFlag, &cbDataSize)))
            {
                //fFound = TRUE;
            }
        }

        RegCloseKey(hKey);
    }

    return(fFound);
}

void CPalModDlg::OnSetFocus(CWnd* pOldWnd)
{
    CDialog::OnSetFocus(pOldWnd);

    // TODO: Add your message handler code here
}

void CPalModDlg::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
    CDialog::OnActivate(nState, pWndOther, bMinimized);

    // TODO: Add your message handler code here
}

void CPalModDlg::OnFileOpenInternal(UINT nDefaultGameFilter /* = NUM_GAMES */)
{
    CString szGameFileDef = L"";

    nDefaultGameFilter = nDefaultGameFilter & 0xffff; // eliminate the applied mask (k_nGameLoadROMListMask, 0xf0000) that we use to avoid existing menu items

    // The following logic ensures that their last used selection is the default filter view.
    SupportedGamesList nLastUsedGFlag = (SupportedGamesList)nDefaultGameFilter;

    WCHAR szLastDir[MAX_PATH];
    BOOL fIsDir = FALSE;
    bool fHaveLastUsedPath = GetLastUsedPath(szLastDir, sizeof(szLastDir), &nLastUsedGFlag, FALSE, &fIsDir);

    if (nLastUsedGFlag == NUM_GAMES)
    {
        if (!fHaveLastUsedPath)
        {
            // If we're here, that means that they have never used PalMod to load a game before.  Help them.
            CString strInfo;
            LPCWSTR pszParagraph1 = L"Howdy!  You appear to be new to PalMod.  Welcome!\n\n";
            LPCWSTR pszParagraph2 = L"The first step is to load the ROM for the game you care about. There are a lot of game ROMs out there: the filter in the bottom right of the Load ROM dialog that you will see next helps show the right one for your game.\n\n";

            WCHAR szGameFilter[MAX_DESCRIPTION_LENGTH];
            wcsncpy(szGameFilter, SupportedGameList[0].szGameFilterString, ARRAYSIZE(szGameFilter));
            szGameFilter[MAX_DESCRIPTION_LENGTH - 1] = 0;

            LPTSTR pszPipe = wcsstr(szGameFilter, L"|");

            if (pszPipe != nullptr)
            {
                // Truncate off the filter information
                pszPipe[0] = 0;
            }

            strInfo.Format(L"%s%sRight now this is going to be set to \'%s\' for the default game, \'%s\': you need to change that to the game you're interested in so that your ROM shows up.", pszParagraph1, pszParagraph2, szGameFilter, g_GameFriendlyName[SupportedGameList[0].nInternalGameIndex]);
            MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONINFORMATION);
        }
    }
    else
    {
        // If there wasn't a specfic filter requested, use the last used game flag
        if (nDefaultGameFilter == NUM_GAMES)
        {
            nDefaultGameFilter = nLastUsedGFlag;
        }
    }

    DWORD dwLastUsedGameIndex = 0;

    // Add all the games, and make sure we know how to map index to game code
    for (int nArrayPosition = 0; nArrayPosition < ARRAYSIZE(SupportedGameList); nArrayPosition++)
    {
        szGameFileDef.Append(SupportedGameList[nArrayPosition].szGameFilterString);
        SupportedGameList[nArrayPosition].nListedGameIndex = nArrayPosition;

        if (SupportedGameList[nArrayPosition].nInternalGameIndex == nDefaultGameFilter)
        {
            // user nFilterIndex starts at 1
            dwLastUsedGameIndex = SupportedGameList[nArrayPosition].nListedGameIndex + 1;
        }
    }

    szGameFileDef.Append(L"|"); //End

    CFileDialog OpenDialog(
        TRUE,
        NULL,
        NULL,
        OFN_FILEMUSTEXIST | OFN_HIDEREADONLY,
        szGameFileDef
    );

    OPENFILENAME &pOFN = OpenDialog.GetOFN();

    pOFN.nFilterIndex = dwLastUsedGameIndex;

    if (fHaveLastUsedPath)
    {
        if (!fIsDir)
        {
            // We're pointing at a file, so switch over to the path
            LPWSTR pszSlash = wcsrchr(szLastDir, L'\\');

            if (pszSlash)
            {
                pszSlash[0] = 0;
            }
        }

        pOFN.lpstrInitialDir = szLastDir;
    }

    if (OpenDialog.DoModal() == IDOK)
    {
        bool fSafeToContinue = true;
        OPENFILENAME ofn = OpenDialog.GetOFN();

        if (ofn.nFileExtension != 0)
        {
            if ((_wcsicmp(ofn.lpstrFile + ofn.nFileExtension, L"rar") == 0) ||
                (_wcsicmp(ofn.lpstrFile + ofn.nFileExtension, L"zip") == 0))
            {
                CString strInfo = L"PalMod cannot use RAR or ZIP compressed files.  You must first extract out the files from those archives.  Then point PalMod to the files inside.\n\nAre you sure you wish to continue?";
                if (MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONWARNING | MB_YESNO | MB_DEFBUTTON2) != IDYES)
                {
                    fSafeToContinue = false;
                }
            }
        }

        if (fSafeToContinue)
        {
            for (const sSupportedGameList &currentGame : SupportedGameList)
            {
                // user nFilterIndex starts at 1
                if ((currentGame.nListedGameIndex + 1) == ofn.nFilterIndex)
                {
                    LoadGameFile((SupportedGamesList)currentGame.nInternalGameIndex, (WCHAR*)ofn.lpstrFile);
                    break;
                }
            }
        }
    }
}

void CPalModDlg::LoadGameFile(SupportedGamesList nGameFlag, WCHAR* pszFile)
{
    if (!VerifyMsg(eVerifyType::VM_FILECHANGE))
    {
        return;
    }

    ClearGameVar();

    CGameClass* GameGet = GetHost()->GetLoader()->LoadFile(nGameFlag, pszFile);

    if (GameGet)
    {
        GetHost()->SetGameClass(GameGet);

        //Set the last used location
        SetLastUsedDirectory(pszFile, GetHost()->GetCurrGame()->GetGameFlag());

        //The game has loaded OK
        PostGameLoad();
    }
    else
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_GAME))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
    }

    //Since we loaded a DIR, show status of load
    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::OnBnBlink()
{
    Blink();
}

bool CPalModDlg::LoadPaletteFromACT(LPCWSTR pszFileName, bool fReadUpsideDown)
{
    bool fSuccess = false;
    CFile ActFile;
    if (ActFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        ProcChange();

        int nFileSz = (int)ActFile.GetLength();
        int nACTColorCount = 256; // An ACT by default has 256 (768 bytes / 3 bytes per color) colors.
        bool fHadToFlip = false;

        // Read data from the ACT...
        if (nFileSz == 772) // The documentation states that 768b ACT files do not include color count, but 772b files do.
        {
            WORD wColorCount;
            ActFile.Seek(768, CFile::begin);
            ActFile.Read(&wColorCount, 2);
            // 772b ACT files store their color count big endian: fix.
            nACTColorCount = _byteswap_ushort(wColorCount);
            ActFile.Seek(0, CFile::begin);

            // The last four bytes are reserved: don't use them for color copies.
            nFileSz = 768;
        }

        if (nACTColorCount == 0)
        {
            // Default to everything
            nACTColorCount = 256;
        }

        UINT8* pAct = new UINT8[nACTColorCount * 3];
        memset(pAct, 0, nACTColorCount * 3);

        ActFile.Read(pAct, nACTColorCount * 3);
        ActFile.Close();

        // Now consume those colors...
        const UINT8 nTotalPaletteCount = MainPalGroup->GetPalAmt();
        int nTotalNumberOfCurrentColors = 0;

        for (int iPalette = 0; iPalette < nTotalPaletteCount; iPalette++)
        {
            nTotalNumberOfCurrentColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
        }

        UINT16 iACTIndex = 0;
        UINT16 nCurrentPalette = 0;
        UINT16 nTotalColorsUsed = 0;
        bool fHaveLooped = false;
        int iCurrentIndexInPalette = 0;
        UINT8* pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

        UINT16 nBlackColorCount = 0;

        // This code exists because Fighter Factory writes upside-down color tables.
        for (iACTIndex = 0; iACTIndex < nACTColorCount; iACTIndex++)
        {
            if ((pAct[(iACTIndex * 3)] == 0) &&
                (pAct[(iACTIndex * 3) + 1] == 0) &&
                (pAct[(iACTIndex * 3) + 2] == 0))
            {
                nBlackColorCount++;
            }
            else
            {
                break;
            }
        }

        const bool fShouldProcessTopdown = !fReadUpsideDown && (nBlackColorCount < 32) && (nBlackColorCount < nTotalNumberOfCurrentColors);

        bool fHaveMultiplePalettes = (nTotalPaletteCount != 1);
        bool* rgfACTHasColorsForThisPalette = new bool[nTotalPaletteCount];
        memset(rgfACTHasColorsForThisPalette, false, sizeof(bool) * nTotalPaletteCount);

        if (fHaveMultiplePalettes)
        {
            // we have multiple palettes: ensure that we only use useful data from the ACT
            int nOffsetThisPass = 0;
            for (int iPalette = 0; iPalette < nTotalPaletteCount; iPalette++)
            {
                for (iACTIndex = nOffsetThisPass; (iACTIndex < nACTColorCount) && ((iACTIndex - nOffsetThisPass) < MainPalGroup->GetPalDef(iPalette)->uPalSz); iACTIndex++)
                {
                    int iIndexToUse= fShouldProcessTopdown ? iACTIndex : (nACTColorCount - iACTIndex);
                    if ((pAct[(iIndexToUse * 3)] != 0) ||
                        (pAct[(iIndexToUse * 3) + 1] != 0) ||
                        (pAct[(iIndexToUse * 3) + 2] != 0))
                    {
                        rgfACTHasColorsForThisPalette[iPalette] = true;
                        break;
                    }
                }

                nOffsetThisPass += MainPalGroup->GetPalDef(iPalette)->uPalSz;
            }
        }

        if (fShouldProcessTopdown)
        {
            iACTIndex = 0;

            for (int iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
            {
                pPal[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3)]);
                pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3) + 1]);
                pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3) + 2]);

                if (++iACTIndex >= nACTColorCount)
                {
                    // If the palette is larger than our ACT, loop it.
                    iACTIndex = 0;
                    fHaveLooped = true;
                }

                iCurrentIndexInPalette++;
                if (((nCurrentPalette + 1) < nTotalPaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                {
                    if (fHaveLooped)
                    {
                        // Applying a looping palette to a secondary palette will be generally illogical, so don't
                        nTotalColorsUsed++;
                        break;
                    }
                    else
                    {
                        // advance to the next palette
                        nCurrentPalette++;

                        if (rgfACTHasColorsForThisPalette[nCurrentPalette])
                        {
                            iCurrentIndexInPalette = 0;
                            pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
        else
        {
            // TODO: Maybe ask the user before flipping?
            iACTIndex = nACTColorCount - 1;
            fHadToFlip = true;
            iCurrentIndexInPalette = 0;
            nCurrentPalette = 0;
            fHaveLooped = false;
            pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

            OutputDebugString(L"This appears to be a bogus SFF ACT... flipping our ACT table logic...\n");

            for (int iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
            {
                pPal[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3)]);
                pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3) + 1]);
                pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3) + 2]);

                // This code exists because Fighter Factory writes upside-down color tables.
                if (--iACTIndex >= nACTColorCount)
                {
                    // If the palette is larger than our ACT, loop it.
                    iACTIndex = nTotalNumberOfCurrentColors;
                    fHaveLooped = true;
                }

                iCurrentIndexInPalette++;
                if (((nCurrentPalette + 1) < nTotalPaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                {
                    if (fHaveLooped)
                    {
                        // Applying a looping palette to a secondary palette will be generally illogical, so don't
                        nTotalColorsUsed++;
                        break;
                    }
                    else
                    {
                        if (iACTIndex >= nBlackColorCount)
                        {
                            // advance to the next palette
                            nCurrentPalette++;

                            if (rgfACTHasColorsForThisPalette[nCurrentPalette])
                            {
                                iCurrentIndexInPalette = 0;
                                pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                            }
                            else
                            {
                                break;
                            }
                        }
                        else
                        {
                            // The next palette chunk is all black: don't stomp on a further palette with reversed black/empty colors
                            nTotalColorsUsed++;
                            break;
                        }
                    }
                }               
            }
        }

        safe_delete_array(rgfACTHasColorsForThisPalette);

        ImgDispCtrl->UpdateCtrl();
        m_PalHost.UpdateAllPalCtrls();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();

        delete[] pAct;

        fSuccess = true;
        CString strStatus;
        if (fHadToFlip)
        {
            strStatus.Format(IDS_ACT_REVERSEDLOAD, nTotalColorsUsed);
        }
        else
        {
            strStatus.Format(IDS_ACT_LOADED, nTotalColorsUsed, nACTColorCount);
        }

        SetStatusText(strStatus);
    }

    if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(IDS_ACT_LOADFAILURE);
    }

    return fSuccess;
}

bool CPalModDlg::LoadPaletteFromPAL(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    bool fFoundPALChunk = false;

    HMMIO hRIFFFile = mmioOpen((LPTSTR)pszFileName, nullptr, MMIO_READ);

    if (hRIFFFile)
    {
        MMCKINFO mmckinfoParent;

        memset(&mmckinfoParent, 0, sizeof(mmckinfoParent));

        MMRESULT mmRes = mmioDescend(hRIFFFile, &mmckinfoParent, nullptr, MMIO_FINDCHUNK);
        if (mmRes == MMSYSERR_NOERROR)
        {
            // found some palette data.
            FOURCC fourCCPal = mmioFOURCC('P', 'A', 'L', ' ');

            if (mmckinfoParent.fccType == fourCCPal)
            {
                MMCKINFO mmckinfoSubchunk;
                memset(&mmckinfoSubchunk, 0, sizeof(mmckinfoSubchunk));

                fFoundPALChunk = true;

                mmckinfoSubchunk.ckid = mmioFOURCC('d', 'a', 't', 'a');

                if (mmioDescend(hRIFFFile, &mmckinfoSubchunk, &mmckinfoParent, MMIO_FINDCHUNK) == MMSYSERR_NOERROR)
                {
                    DWORD dwDataSize;
                    dwDataSize = mmckinfoSubchunk.cksize;

                    if ((dwDataSize > 0))
                    {
                        UINT8* pPALFileData = new UINT8[dwDataSize];
                        if (mmioRead(hRIFFFile, (HPSTR)pPALFileData, dwDataSize) == dwDataSize)
                        {
                            // party.
                            ProcChange();

                            const UINT8 nActivePaletteCount = MainPalGroup->GetPalAmt();
                            const int nPALColorCount = (dwDataSize / 4);

                            UINT16 iPALDataIndex = 0;
                            UINT16 nCurrentPalette = 0;
                            UINT16 nTotalColorsUsed = 0;
                            bool fHaveLooped = false;
                            int iCurrentIndexInPalette = 0;
                            int nTotalNumberOfCurrentPaletteColors = 0;

                            for (UINT8 iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                            {
                                nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                            }

                            UINT8* pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

                            for (int iAbsoluteColorIndex = 0; iAbsoluteColorIndex < nTotalNumberOfCurrentPaletteColors; iAbsoluteColorIndex++, nTotalColorsUsed++)
                            {
                                // copy over the RGB data, skipping the A value
                                pPal[(iCurrentIndexInPalette * 4)] =     GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pPALFileData[(iPALDataIndex * 4)]);
                                pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pPALFileData[(iPALDataIndex * 4) + 1]);
                                pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pPALFileData[(iPALDataIndex * 4) + 2]);

                                if (++iPALDataIndex >= nPALColorCount)
                                {
                                    // If the palette is larger than our PAL, loop it.
                                    iPALDataIndex = 0;
                                    fHaveLooped = true;
                                }

                                iCurrentIndexInPalette++;
                                if (((nCurrentPalette + 1) < nActivePaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                                {
                                    if (fHaveLooped)
                                    {
                                        // Applying a looping palette to a secondary palette will be generally illogical, so don't
                                        nTotalColorsUsed++;
                                        break;
                                    }
                                    else
                                    {
                                        // advance to the next palette
                                        nCurrentPalette++;
                                        iCurrentIndexInPalette = 0;
                                        pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                                    }
                                }
                            }

                            ImgDispCtrl->UpdateCtrl();
                            m_PalHost.UpdateAllPalCtrls();

                            UpdateMultiEdit(TRUE);
                            UpdateSliderSel();

                            fSuccess = true;
                            CString strStatus;
                            strStatus.Format(IDS_PAL_LOADED, nTotalColorsUsed, nPALColorCount);
                            SetStatusText(strStatus);
                        }

                        safe_delete_array(pPALFileData);
                    }
                }
            }
        }

        mmioClose(hRIFFFile, 0);
    }

    if (!fFoundPALChunk)
    {
        MessageBox(L"Error: This is not a Microsoft PAL RIFF file.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(IDS_PAL_LOADFAILURE);
    }
    else if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(IDS_PAL_LOADFAILURE);
    }

    return fSuccess;
}

bool CPalModDlg::LoadPaletteFromPNG(LPCWSTR pszFileName, bool fReadUpsideDown)
{
    bool fSuccess = false;
    bool fFoundPaletteData = false;
    CFile PNGFile;
    if (PNGFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        ProcChange();

        char aszSignature[8];

        const ULONGLONG nTotalFileSize = PNGFile.GetLength();
        ULONGLONG nFileSizeRemaining = nTotalFileSize;

        PNGFile.Read(aszSignature, 8);
        nFileSizeRemaining -= 8;

        // Verify PNG signature
        if ((aszSignature[0] == (char)0x89) &&
            (aszSignature[1] == (char)0x50) &&
            (aszSignature[2] == (char)0x4E) &&
            (aszSignature[3] == (char)0x47) &&
            (aszSignature[4] == (char)0x0D) &&
            (aszSignature[5] == (char)0x0A) &&
            (aszSignature[6] == (char)0x1A) &&
            (aszSignature[7] == (char)0x0A))
        {
            CString strInfo;
            bool fHadToFlip = false;

            OutputDebugString(L"this is a png.... reading chunks now...\n");

#define READFROMFILEANDDECREMENT(buffer, cbchunk) { if (cbchunk > nFileSizeRemaining) {break;} PNGFile.Read(buffer, cbchunk); nFileSizeRemaining -= cbchunk; }

            while (nFileSizeRemaining > 0)
            {
                UINT32 chunkLength;
                READFROMFILEANDDECREMENT(&chunkLength, sizeof(chunkLength));
                chunkLength = _byteswap_ulong(chunkLength);
                char chunkType[5];
                READFROMFILEANDDECREMENT(chunkType, sizeof(chunkType) - 1);
                chunkType[sizeof(chunkType) - 1] = 0;

                strInfo.Format(L"Chunk: %4S, size 0x%x\n", chunkType, chunkLength);
                OutputDebugString(strInfo);

                char crcBuffer[4];

                if (strcmp(chunkType, "IHDR") == 0)
                {
                    // 13 bytes for the header
                    UINT32 imageWidth, imageHeight;
                    READFROMFILEANDDECREMENT(&imageWidth, 4);
                    READFROMFILEANDDECREMENT(&imageHeight, 4);

                    imageWidth = _byteswap_ulong(imageWidth);
                    imageHeight = _byteswap_ulong(imageHeight);

                    char IHDRBuffer[5];
                    READFROMFILEANDDECREMENT(IHDRBuffer, sizeof(IHDRBuffer));
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    UINT32 bitDepth = IHDRBuffer[0];
                    char colorType = IHDRBuffer[1];

                    if ((colorType == 0) || (colorType == 4)) // grayscale options
                    {
                        // PLTE entry cannot appear for this type
                        OutputDebugString(L"pngreader: grayscale: PLTE cannot be present.\n");
                        break;
                    }
                    else if (colorType == 3) // indexed color
                    {
                        OutputDebugString(L"pngreader: indexed: PLTE must be present.\n");
                    }
                    else // 2 - truecolor and 6 - truecolor with alpha
                    {
                        OutputDebugString(L"pngreader: truecolor: PLTE may be present.\n");
                    }
                }
                else if (strcmp(chunkType, "PLTE") == 0)
                {
                    fFoundPaletteData = true;
                    UINT8* paszPaletteData = new UINT8[chunkLength];

                    READFROMFILEANDDECREMENT(paszPaletteData, chunkLength);
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    OutputDebugString(L"pngreader: processing PLTE header...\n");

                    const UINT8 nActivePaletteCount = MainPalGroup->GetPalAmt();
                    const int nPNGColorCount = (chunkLength / 3);

                    strInfo.Format(L"\tpngreader: processing %u colors...\n", nPNGColorCount);
                    OutputDebugString(strInfo);

                    UINT32 nTotalNumberOfCurrentPaletteColors = 0;

                    for (UINT16 iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                    {
                        nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                    }

                    UINT16 iPNGIndex = 0;
                    UINT16 nCurrentPalette = 0;
                    UINT16 nTotalColorsUsed = 0;
                    UINT32 nBlackColorCount = 0;
                    bool fHaveLooped = false;
                    int iCurrentIndexInPalette = 0;
                    UINT8* pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

                    // This code exists because Fighter Factory writes upside-down color tables.
                    for (iPNGIndex = 0; iPNGIndex < nPNGColorCount; iPNGIndex++)
                    {
                        if ((paszPaletteData[(iPNGIndex * 3)] == 0) &&
                            (paszPaletteData[(iPNGIndex * 3) + 1] == 0) &&
                            (paszPaletteData[(iPNGIndex * 3) + 2] == 0))
                        {
                            nBlackColorCount++;
                        }
                        else
                        {
                            break;
                        }
                    }

                    const bool fShouldProcessTopdown = !fReadUpsideDown && (nBlackColorCount < 32) && (nBlackColorCount < nTotalNumberOfCurrentPaletteColors);

                    bool fHaveMultiplePalettes = (nActivePaletteCount != 1);
                    bool* rgfPNGHasColorsForThisPalette = new bool[nActivePaletteCount];
                    memset(rgfPNGHasColorsForThisPalette, false, sizeof(bool) * nActivePaletteCount);

                    if (fHaveMultiplePalettes)
                    {
                        int nOffsetThisPass = 0;
                        for (int iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                        {
                            for (iPNGIndex = nOffsetThisPass; (iPNGIndex < nTotalNumberOfCurrentPaletteColors) && ((iPNGIndex - nOffsetThisPass) < MainPalGroup->GetPalDef(iPalette)->uPalSz) && (iPNGIndex < nPNGColorCount); iPNGIndex++)
                            {
                                int iIndexToUse = fShouldProcessTopdown ? iPNGIndex : (nPNGColorCount - iPNGIndex);
                                if ((paszPaletteData[(iIndexToUse * 3)] != 0) ||
                                    (paszPaletteData[(iIndexToUse * 3) + 1] != 0) ||
                                    (paszPaletteData[(iIndexToUse * 3) + 2] != 0))
                                {
                                    rgfPNGHasColorsForThisPalette[iPalette] = true;
                                    break;
                                }
                            }

                            nOffsetThisPass += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                        }
                    }

                    if (fShouldProcessTopdown)
                    {
                        iPNGIndex = 0;

                        for (UINT32 iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentPaletteColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
                        {
                            pPal[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3)]);
                            pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3) + 1]);
                            pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3) + 2]);

                            if (++iPNGIndex >= nPNGColorCount)
                            {
                                // If the palette is larger than our PNG, loop it.
                                iPNGIndex = 0;
                                fHaveLooped = true;
                            }

                            iCurrentIndexInPalette++;
                            if (((nCurrentPalette + 1) < nActivePaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                            {
                                if (fHaveLooped)
                                {
                                    // Applying a looping palette to a secondary palette will be generally illogical, so don't
                                    nTotalColorsUsed++;
                                    break;
                                }
                                else
                                {
                                    // advance to the next palette
                                    nCurrentPalette++;

                                    if (rgfPNGHasColorsForThisPalette[nCurrentPalette])
                                    {
                                        iCurrentIndexInPalette = 0;
                                        pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                                    }
                                    else
                                    {
                                        nTotalColorsUsed++;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        // TODO: Maybe ask the user before flipping?
                        iPNGIndex = nPNGColorCount - 1;
                        fHadToFlip = true;
                        iCurrentIndexInPalette = 0;
                        nCurrentPalette = 0;
                        fHaveLooped = false;
                        pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

                        OutputDebugString(L"This appears to be a bogus SFF PNG... flipping our PNG table logic...\n");

                        for (UINT32 iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentPaletteColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
                        {
                            pPal[(iCurrentIndexInPalette * 4)] =     GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3)]);
                            pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3) + 1]);
                            pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3) + 2]);

                            // This code exists because Fighter Factory writes upside-down color tables.
                            if (--iPNGIndex >= nPNGColorCount)
                            {
                                // If the palette is larger than our PNG, loop it.
                                fHaveLooped = true;
                                iPNGIndex = nTotalNumberOfCurrentPaletteColors;
                            }

                            iCurrentIndexInPalette++;
                            if (((nCurrentPalette + 1) < nActivePaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                            {
                                if (fHaveLooped)
                                {
                                    // Applying a looping palette to a secondary palette will be generally illogical, so don't
                                    nTotalColorsUsed++;
                                    break;
                                }
                                else
                                {
                                    if (iPNGIndex >= nBlackColorCount)
                                    {
                                        // advance to the next palette
                                        nCurrentPalette++;

                                        if (rgfPNGHasColorsForThisPalette[nCurrentPalette])
                                        {
                                            iCurrentIndexInPalette = 0;
                                            pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                                        }
                                        else
                                        {
                                            nTotalColorsUsed++;
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        // The next palette chunk is all black: don't stomp on a further palette with reversed black/empty colors
                                        nTotalColorsUsed++;
                                        break;
                                    }
                                }
                            }
                        }
                    }

                    safe_delete_array(rgfPNGHasColorsForThisPalette);

                    ImgDispCtrl->UpdateCtrl();
                    m_PalHost.UpdateAllPalCtrls();

                    UpdateMultiEdit(TRUE);
                    UpdateSliderSel();

                    if (fHadToFlip)
                    {
                        strInfo.Format(IDS_PNG_REVERSEDLOAD, nTotalColorsUsed);
                    }
                    else
                    {
                        strInfo.Format(IDS_PNG_LOADED, nTotalColorsUsed, nPNGColorCount);
                    }
                    SetStatusText(strInfo);

                    fSuccess = true;

                    safe_delete_array(paszPaletteData);
                    break;
                }
                else if (strcmp(chunkType, "IDAT") == 0)
                {
                    // PLTE data if present must be present before the IDAT chunks
                    OutputDebugString(L"pngreader: IDAT section hit: PLTE cannot be present from here on out.\n");
                    break;
                }
                else
                {
                    // This is a chunk we don't care about: just walk past.
                    char* paszNope = new char[chunkLength];

                    READFROMFILEANDDECREMENT(paszNope, chunkLength);
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    safe_delete_array(paszNope);
                }
            }

            OutputDebugString(L"pngreader: done!\n");
        }

        PNGFile.Close();
    }

    if (!fFoundPaletteData)
    {
        CString strMessage;
        strMessage = L"Error: This PNG file is not using indexed color and cannot be used.  Only type 3 (indexed color) PNGs contain the palette information PalMod needs.\n";
        strMessage.Append(L"\nYou might want to ask the person who made this to provide you an indexed color PNG or the ACT.\n");
        strMessage.Append(L"Failing that, open up the PNG in a picture viewer.  While PalMod is the foreground application, select a color in PalMod. ");
        strMessage.Append(L"Then hover your mouse over the \"new\" color in your image, and press CTRL+SHIFT+V to copy that color to PalMod.  Repeat until you're done.");
        MessageBox(strMessage, GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(IDS_PNGLOAD_NOTABLE);
    }
    else if (!fSuccess)
    {
        MessageBox(L"Error: This is not a valid PNG file.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(IDS_PNG_LOADFAILURE);
    }

    return fSuccess;
}

bool CPalModDlg::LoadPaletteFromPS3SF3OETXT(LPCWSTR pszFileName)
{
    CString strMsg;
    bool fSuccess = false;
    CStdioFile SF3DLCFile;

    if (SF3DLCFile.Open(pszFileName, CFile::modeRead))
    {
        bool fAbleToReadFile = false;

        CString strCharacterName;
        fAbleToReadFile = SF3DLCFile.ReadString(strCharacterName);
        CString strDLCName;
        fAbleToReadFile = fAbleToReadFile && SF3DLCFile.ReadString(strDLCName);
        CString strDLCLoc;
        fAbleToReadFile = fAbleToReadFile && SF3DLCFile.ReadString(strDLCLoc);
        CString strDLCLocDesc;
        fAbleToReadFile = fAbleToReadFile && SF3DLCFile.ReadString(strDLCLocDesc);

        if (fAbleToReadFile)
        {
            CString strCurrentColors;
            CGameClass* CurrGame = GetHost()->GetCurrGame();

            // Only import the full set if we're on the core colors
            sPalDef* spdPalInfo = MainPalGroup->GetPalDef(0);

            int nActivePaletteId = spdPalInfo->uPalId;
            int nPaletteDistance = CurrGame->GetCurrentPaletteIncrement();

            if ((nActivePaletteId != 0) && (nPaletteDistance != 0))
            {
                // Convert from absolute index to step-based index
                nActivePaletteId /= nPaletteDistance;
            }

            int nHowManyColorsToImport = CurrGame->GetImgOutPalAmt();
            UINT16 nUnitId = spdPalInfo->uUnitId;

            int iKeyPosition = strCharacterName.Find('=');
            strCharacterName.Delete(0, iKeyPosition + 1);
            OutputDebugString(strCharacterName);
            OutputDebugString(L"\n");
            iKeyPosition = strDLCName.Find('=');
            OutputDebugString(strDLCName.Mid(iKeyPosition + 1));
            OutputDebugString(L"\n");

            // localize
            CString strMsg;
            strMsg.Format(L"This file appears to contain seven palettes for '%s'.\n\nDo you wish to apply %s to the current character?", strCharacterName.GetString(), (nActivePaletteId == 0) ? L"these" : L"the current color");

            if (MessageBox(strMsg, GetHost()->GetAppName(), MB_YESNO) == IDYES)
            {
                ProcChange();

                for (int iPaletteId = 0; iPaletteId < nHowManyColorsToImport; iPaletteId++)
                {
                    if (SF3DLCFile.ReadString(strCurrentColors))
                    {
                        if ((nActivePaletteId != 0) && (nActivePaletteId != iPaletteId))
                        {
                            // Only copy the current color
                            continue;
                        }

                        const UINT32 nDLCColorCount = 64;
                        COLORREF* pDLCColors = new COLORREF[nDLCColorCount];
                        memset(pDLCColors, 0, nDLCColorCount * sizeof(COLORREF));

                        // OK, now parse the actual colors.
                        iKeyPosition = strCurrentColors.Find('=');
                        CString strColorList = strCurrentColors.Mid(iKeyPosition + 1);
                        OutputDebugString(strCurrentColors.Left(iKeyPosition));
                        OutputDebugString(L"\n");
                        for (UINT32 iPosition = 0; iPosition < nDLCColorCount; iPosition++)
                        {
                            // The final pass won't have a trailing ',', so just use the raw string at that point
                            const int iEndPosition = strColorList.Find(',');
                            CString strThisColor = (iEndPosition != -1) ? strColorList.Left(iEndPosition) : strColorList;

                            UINT32 nThisColor = _wtol(strThisColor);
                            UINT8 alpha = (nThisColor & 0xFF000000) >> 24;
                            UINT8 red = (nThisColor & 0xFF0000) >> 16;
                            UINT8 green = (nThisColor & 0xFF00) >> 8;
                            UINT8 blue = (nThisColor & 0xFF);

                            pDLCColors[iPosition] = RGB(red, green, blue) | (alpha << 24);

                            //strMsg.Format(L"Converted color %u :: %s to rgb 0x%x\n", iPosition, strThisColor.GetString(), pDLCColors[iPosition]);
                            //OutputDebugString(strMsg.GetString());

                            strColorList.Delete(0, iEndPosition + 1);
                        }

                        // Now consume those colors...
                        if (spdPalInfo->uPalId == (iPaletteId * nPaletteDistance))
                        {
                            // This is the active palette: use the palgroup logic so we get easy live updates
                            UINT8* pVisiblePalette = (UINT8*)MainPalGroup->GetPalDef(0)->pPal;

                            for (int iCurrentIndexInPalette = 0; iCurrentIndexInPalette < nDLCColorCount; iCurrentIndexInPalette++)
                            {
                                pVisiblePalette[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetRValue(pDLCColors[iCurrentIndexInPalette]));
                                pVisiblePalette[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetGValue(pDLCColors[iCurrentIndexInPalette]));
                                pVisiblePalette[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetBValue(pDLCColors[iCurrentIndexInPalette]));
                            }
                        }
                        else
                        {
                            // These are the inactive palettes: we need to directly update these
                            CurrGame->WritePal(nUnitId, (iPaletteId * nPaletteDistance), pDLCColors, nDLCColorCount);
                            CurrGame->MarkPaletteDirty(nUnitId, (iPaletteId * nPaletteDistance));
                        }

                        delete[] pDLCColors;
                    }
                }

                ImgDispCtrl->UpdateCtrl();
                m_PalHost.UpdateAllPalCtrls();

                UpdateMultiEdit(TRUE);
                UpdateSliderSel();

                fSuccess = true;

                // localize
                CString strStatus;
                strStatus.Format(L"Imported %u %s palettes.", nHowManyColorsToImport, strCharacterName.GetString());
                SetStatusText(strStatus);
            }
        }

        if (!fSuccess)
        {
            // localize
            SetStatusText(L"Palettes were not imported.");
        }
    }

    return fSuccess;
}

void CPalModDlg::OnImportPalette()
{
    if (bEnabled)
    {
        int nGameFlag = GetHost()->GetCurrGame()->GetGameFlag();
        bool fIsSF3 = false;

        switch (nGameFlag)
        {
        case SFIII3_A:
        case SFIII3_D:
        case SFIII3_A_DIR_51:
        case SFIII2_A:
        case SFIII1_A:
        case SFIII3_A_DIR_10:
        case SFIII3_A_DIR_4rd:
        case SFIII3_A_DIR_EX:
        case SFIII3_A_DIR_4rd_10:
        case SFIII1_A_DIR:
        case SFIII2_A_DIR:
            fIsSF3 = true;
            break;
        default:
            break;
        }

        static LPCWSTR szSF3OpenFilter[] = { L"Supported Palette Files|*.act;*.png;*.pal;*txt.dat|"
                                              L"ACT Palette|*.act|"
                                              L"Indexed PNG|*.png|"
                                              L"Microsoft PAL|*.pal|"
                                              L"Upside-down ACT Palette|*.act|"
                                              L"Upside-down Indexed PNG|*.png|"
                                              L"PS3 SF3::OE color file|*.txt.dat"
                                              L"|" };

        static LPCWSTR szOpenFilter[] = { L"Supported Palette Files|*.act;*.png;*.pal;*txt.dat|"
                                          L"ACT Palette|*.act|"
                                          L"Indexed PNG|*.png|"
                                          L"Microsoft PAL|*.pal|"
                                          L"Upside-down ACT Palette|*.act|"
                                          L"Upside-down Indexed PNG|*.png|"
                                          L"|" };

        CFileDialog PaletteLoad(TRUE, NULL, NULL, NULL, fIsSF3 ? *szSF3OpenFilter : *szOpenFilter);

        if (PaletteLoad.DoModal() == IDOK)
        {
            CString strFileName = PaletteLoad.GetOFN().lpstrFile;
            bool fSuccess = false;

            WCHAR szExtension[_MAX_EXT];
            _wsplitpath(strFileName, nullptr, nullptr, nullptr, szExtension);

            if (_wcsicmp(szExtension, L".png") == 0)
            {
                LoadPaletteFromPNG(strFileName, (PaletteLoad.GetOFN().nFilterIndex > 3));
            }
            else if (_wcsicmp(szExtension, L".pal") == 0)
            {
                LoadPaletteFromPAL(strFileName);
            }
            else if (_wcsicmp(szExtension, L".dat") == 0)
            {
                LoadPaletteFromPS3SF3OETXT(strFileName);
            }
            else
            {
                LoadPaletteFromACT(strFileName, (PaletteLoad.GetOFN().nFilterIndex > 3));
            }
        }
    }
}

bool CPalModDlg::SavePaletteToACT(LPCWSTR pszFileName, bool fRightsideUp)
{
    CFile ActFile;
    bool fSuccess = false;

    if (ActFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
    {
        // We are writing this file in accordance with the spec as found here--
        //   https://www.adobe.com/devnet-apps/photoshop/fileformatashtml/#50577411_pgfId-1070626
        // In theory we should be able to just write a 768 byte file, but there appears to be a bug in PhotoShop's
        // ACT import wherein they mangle the parse for 768b files.  Thus we are forcibly using 772b here.

        const int k_nMaxColorsAllowed = 256;
        const int nActSz = k_nMaxColorsAllowed * 3;
        UINT8* pAct = new UINT8[nActSz];
        memset(pAct, 0, nActSz);

        UINT8* pPal = (UINT8*)CurrPalCtrl->GetBasePal();
        int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
        UINT8 nPalettePageCount;

        if (CurrPalCtrl->GetSelAmt() == 0) // they want everything
        {
            nPalettePageCount = m_PalHost.GetCurrentPageCount();
        }
        else
        {
            nPalettePageCount = 1;
        }

        int nTotalColorsUsed = 0;

        if (fRightsideUp)
        {
            for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
            {
                pAct[nTotalColorsUsed * 3] = pPal[nTotalColorsUsed * 4];
                pAct[nTotalColorsUsed * 3 + 1] = pPal[nTotalColorsUsed * 4 + 1];
                pAct[nTotalColorsUsed * 3 + 2] = pPal[nTotalColorsUsed * 4 + 2];
            }

            for (UINT8 nCurrentPage = 1; nCurrentPage < nPalettePageCount; nCurrentPage++)
            {
                CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

                if (pPalCtrlNextPage)
                {
                    const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                    for (int nActivePageIndex = 0; (nTotalColorsUsed < k_nMaxColorsAllowed) && (nActivePageIndex < nNextPageWorkingAmt); nActivePageIndex++)
                    {
                        pAct[nTotalColorsUsed * 3] = pPal[nTotalColorsUsed * 4];
                        pAct[nTotalColorsUsed * 3 + 1] = pPal[nTotalColorsUsed * 4 + 1];
                        pAct[nTotalColorsUsed * 3 + 2] = pPal[nTotalColorsUsed * 4 + 2];
                        nTotalColorsUsed++;
                    }
                }
            }
        }
        else //upside-down for fighter factory 3
        {
            int nWriteLocation = k_nMaxColorsAllowed - 1;
            for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
            {
                pAct[(nWriteLocation - nTotalColorsUsed) * 3] = pPal[nTotalColorsUsed * 4];
                pAct[(nWriteLocation - nTotalColorsUsed) * 3 + 1] = pPal[nTotalColorsUsed * 4 + 1];
                pAct[(nWriteLocation - nTotalColorsUsed) * 3 + 2] = pPal[nTotalColorsUsed * 4 + 2];
            }

            for (UINT8 nCurrentPage = 1; nCurrentPage < nPalettePageCount; nCurrentPage++)
            {
                CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

                if (pPalCtrlNextPage)
                {
                    const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                    for (int nActivePageIndex = 0; (nTotalColorsUsed < k_nMaxColorsAllowed) && (nActivePageIndex < nNextPageWorkingAmt); nActivePageIndex++)
                    {
                        pAct[(nWriteLocation - nTotalColorsUsed) * 3] = pPal[nTotalColorsUsed * 4];
                        pAct[(nWriteLocation - nTotalColorsUsed) * 3 + 1] = pPal[nTotalColorsUsed * 4 + 1];
                        pAct[(nWriteLocation - nTotalColorsUsed) * 3 + 2] = pPal[nTotalColorsUsed * 4 + 2];
                        nTotalColorsUsed++;
                    }
                }
            }

            // max this since we started the write at the end
            nTotalColorsUsed = k_nMaxColorsAllowed;
        }

        ActFile.Write(pAct, nActSz);

        // Add 4 bytes per the 772b file syntax...
        // First two here is the number of useful colors in the file.
        // Second two here is be the index to use for the transparency color.  This is 0 in all the games we care about.

        // Please note that Photoshop is expecting this big endian, so we byteswap to ensure correct orientation.
        WORD transparencyColorIndex = 0;
        WORD colorCount = _byteswap_ushort(nTotalColorsUsed);
        ActFile.Write(&colorCount, 2);
        ActFile.Write(&transparencyColorIndex, 2);

        ActFile.Close();

        delete[] pAct;
        fSuccess = true;
    }

    SetStatusText(fSuccess ? IDS_ACTSAVE_SUCCESS : IDS_ACTSAVE_FAILURE);
    return fSuccess;
}

bool CPalModDlg::SavePaletteToGPL(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    CFile GPLFile;

    // Save to GPL file.
    if (GPLFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite))
    {
        char szBuffer[MAX_PATH];

        // Write the header...
        strcpy(szBuffer, "GIMP Palette\n");
        GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));
        _snprintf_s(szBuffer, ARRAYSIZE(szBuffer), _TRUNCATE, "Name: %S\n", m_PalHost.GetPalName(0));
        GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));
        strcpy(szBuffer, "Columns: 0\n");
        GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));
        strcpy(szBuffer, "# Created by PalMod\n");
        GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));

        // Write out the colors...
        UINT8* pPal = (UINT8*)CurrPalCtrl->GetBasePal();
        int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
        UINT8 nPalettePageCount;

        if (CurrPalCtrl->GetSelAmt() == 0) // they want everything
        {
            nPalettePageCount = m_PalHost.GetCurrentPageCount();
        }
        else
        {
            nPalettePageCount = 1;
        }

        // Skip the first color for GIMP's usage
        int nTotalColorsUsed = 1;
        for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
        {
            _snprintf_s(szBuffer, ARRAYSIZE(szBuffer), _TRUNCATE, "%3u %3u %3u\n", pPal[nTotalColorsUsed * 4], pPal[nTotalColorsUsed * 4 + 1], pPal[nTotalColorsUsed * 4 + 2]);
            GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));
        }

        for (UINT8 nCurrentPage = 1; nCurrentPage < nPalettePageCount; nCurrentPage++)
        {
            CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

            if (pPalCtrlNextPage)
            {
                const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                for (int nActivePageIndex = 0; nActivePageIndex < nNextPageWorkingAmt; nActivePageIndex++)
                {
                    _snprintf_s(szBuffer, ARRAYSIZE(szBuffer), _TRUNCATE, "%3u %3u %3u\n", pPal[nTotalColorsUsed * 4], pPal[nTotalColorsUsed * 4 + 1], pPal[nTotalColorsUsed * 4 + 2]);
                    GPLFile.Write(szBuffer, (UINT)strlen(szBuffer));
                    nTotalColorsUsed++;
                }
            }
        }

        GPLFile.Close();
        fSuccess = true;
    }

    SetStatusText(fSuccess ? IDS_GPLSAVE_SUCCESS : IDS_GPLSAVE_FAILURE);
    return fSuccess;
}

bool CPalModDlg::SavePaletteToPAL(LPCWSTR pszFileName)
{
    bool fSuccess = false;

    // Microsoft RIFF PAL file.  Used by the UNIST workflow supposedly
    HMMIO hRIFFFile = mmioOpen((LPTSTR)pszFileName, nullptr, MMIO_WRITE | MMIO_CREATE);

    if (hRIFFFile)
    {
        MMCKINFO mmckInfo = {};
        mmckInfo.fccType = mmioFOURCC('P', 'A', 'L', ' ');
        mmckInfo.cksize = 0;
        mmckInfo.dwFlags = MMIO_DIRTY;

        if (mmioCreateChunk(hRIFFFile, &mmckInfo, MMIO_CREATERIFF) == MMSYSERR_NOERROR)
        {
            MMCKINFO mmckInfoData;
            memset(&mmckInfoData, 0, sizeof(mmckInfoData));

            // Write out the current palette
            UINT8* pPal = (UINT8*)CurrPalCtrl->GetBasePal();
            int nColorCount = CurrPalCtrl->GetWorkingAmt();

            mmckInfoData.ckid = mmioFOURCC('d', 'a', 't', 'a');
            mmckInfoData.cksize = 0;
            mmckInfoData.dwFlags = MMIO_DIRTY;

            if (mmioCreateChunk(hRIFFFile, &mmckInfoData, 0) == MMSYSERR_NOERROR)
            {
                const int nBytesToWrite = nColorCount * 4;
                fSuccess = (mmioWrite(hRIFFFile, (const char*)pPal, nBytesToWrite) == nBytesToWrite);
                mmioAscend(hRIFFFile, &mmckInfoData, 0);
            }

            mmioAscend(hRIFFFile, &mmckInfo, 0);
        }

        mmioClose(hRIFFFile, 0);
    }

    SetStatusText(fSuccess ? IDS_PALSAVE_SUCCESS : IDS_PALSAVE_FAILURE);
    return fSuccess;
}

void CPalModDlg::OnExportPalette()
{
    static LPCWSTR szSaveFilter[] = { L"ACT Palette|*.act|"
                                      L"GIMP Palette File|*.gpl|"
                                      L"Microsoft PAL|*.pal|"
                                      L"Upside-down ACT Palette|*.act|"
                                      L"|" };

    CFileDialog ActSave(FALSE, L"act", nullptr, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, *szSaveFilter);

    if (ActSave.DoModal() == IDOK)
    {
        CFile ActFile;

        CString szFile = ActSave.GetOFN().lpstrFile;

        WCHAR szExtension[_MAX_EXT];
        _tsplitpath(szFile, nullptr, nullptr, nullptr, szExtension);
        bool fSuccess = false;

        if (_wcsicmp(szExtension, L".gpl") == 0)
        {
            fSuccess = SavePaletteToGPL(ActSave.GetOFN().lpstrFile);
        }
        else if (_wcsicmp(szExtension, L".pal") == 0)
        {
            fSuccess = SavePaletteToPAL(ActSave.GetOFN().lpstrFile);
        }
        else
        {
            if (ActSave.GetOFN().nFilterIndex == 4)
            {
                fSuccess = SavePaletteToACT(ActSave.GetOFN().lpstrFile, false);
            }
            else
            {
                fSuccess = SavePaletteToACT(ActSave.GetOFN().lpstrFile, true);
            }
        }

        if (!fSuccess)
        {
            CString strError;
            if (strError.LoadString(IDS_ERROR_SAVING_PALETTE_FILE))
            {
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
    }
}

void CPalModDlg::OnGetMinMaxInfo(MINMAXINFO* lpMMI)
{
    // TODO: Add your message handler code here and/or call default

    if (bCanMinMax)
    {
        //lpMMI->ptMinTrackSize = r
    }

    CDialog::OnGetMinMaxInfo(lpMMI);
}
