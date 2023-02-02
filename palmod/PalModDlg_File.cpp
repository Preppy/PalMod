#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "RegProc.h"
#include "Game\GameDef.h"

constexpr auto c_strLastUsedPath = L"LastUsedPath";
constexpr auto c_strLastUsedGFlag = L"LastUsedGFlag";

// NOTE: If you add a multiple-ROM option below, you will also need to update
// CGameLoad::LoadFile to pass the appropriate gameflag to that game.
// When you add or change the data here, please also update the Read Me with that data.
std::vector<sSupportedGameToFileMap> g_rgGameToFileMap =
{
    // 1: Game ID,      2: Popup menu text,   3: Open File filter text,    4: Game Platform [,  5: Optional sub-category]
    { AODK_A,           L"Aggressors of Dark Kombat", L"Aggressors of Dark Kombat|074-p1.*|", GamePlatform::NEOGEO },
    { AOF1_A,           L"Art of Fighting 1", L"Art of Fighting 1|044-p1.*|", GamePlatform::NEOGEO, GameSeries::ArtOfFighting },
    { AOF3_A,           L"Art of Fighting 3", L"Art of Fighting 3: Characters (p1), Stages (p2)|096-p1.*;096-p2.*|", GamePlatform::NEOGEO, GameSeries::ArtOfFighting },
    { AsuraBuster_A,    L"Asura Buster: Eternal Warriors (Fuuki)", L"Asura Buster: Eternal Warriors (Fuuki)|pgm3.u1|", GamePlatform::OtherPlatform },
    { AvgrsGS_A,        L"Avengers in Galactic Storm (Data East)", L"Avengers in Galactic Storm (Data East)|sf_00-0.7k;agsbh_00-0.7k|", GamePlatform::OtherPlatform },
    { BattleFlipShot_A, L"Battle Flip Shot", L"Battle Flip Shot (Neo-Geo)|247-p1.*|", GamePlatform::NEOGEO },
    { BMKNS_SNES,       L"Battle Master: KnS", L"Battle Master: KnS (SNES)|battle master - kyuukyoku no senshi-tachi (japan).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { BLEACH_DS,        L"Bleach Dark Souls", L"Bleach Dark Souls (DS)|3494*Europe*nds;2761*US*nds|", GamePlatform::Nintendo, GameSeries::NintendoDS },
    { BREAKERS_A,       L"Breakers Revenge", L"Breakers Revenge|245-p1.*|", GamePlatform::NEOGEO },
    { BREAKERS_S,       L"Breakers Revenge", L"Breakers Revenge|245-m68k.swbin|", GamePlatform::Steam },
    { BSSMSJR_SNES,     L"Bishojo Senshi Sailor Moon S - JR", L"Bishojo Senshi Sailor Moon S - JR (SNES)|Bishoujo Senshi Sailor Moon S - Jougai Rantou! Shuyaku Soudatsusen (J*).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { BtlKRoad_A,       L"Battle K-Road (Psikyo)", L"Battle K-Road (Psikyo)|4-u46.bin|", GamePlatform::OtherPlatform },
    { CFTE_SNES,        L"Clay Fighter:TE", L"Clay Fighter:TE (SNES)|Clay Fighter - Tournament Edition (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { COTA_A,           L"COTA", L"COTA|xmn*.05*|", GamePlatform::CapcomCPS12 },
    { CVS1_A,           L"CvS1", L"CvS1|Capcom_vs_SNK_Millenium_Fight_2000.bin;Capcom_vs_SNK_Millenium_Fight_2000_Unlocked.bin;mpr-23504.ic1|", GamePlatform::SegaNAOMI },
    { CVS2_A,           L"CvS2", L"CvS2|SNKGD_SL.bin|", GamePlatform::SegaNAOMI },
    { CYBERBOTS_A,      L"Cyberbots", L"Cyberbots|cyb?.04|", GamePlatform::CapcomCPS12 },
    { DBZEB_DS,         L"Dragon Ball Z: Extreme Butoden (3DS)", L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS)|3DS1366*(USA)-decrypted.3ds;Dragon*Butoden*USA*decrypted*.3ds|", GamePlatform::Nintendo, GameSeries::NintendoDS },
    { DBZHD_SNES,       L"Dragon Ball Z: Hyper Dimension", L"Dragon Ball Z: Hyper Dimension (SNES)|dragon ball z - hyper dimension (*).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { DOUBLEDRAGON_A,   L"Double Dragon", L"Double Dragon|082-p1.*;ddrag_p1.rom|", GamePlatform::NEOGEO },
    { FatalFury1_A,     L"Fatal Fury: King of Fighters", L"Fatal Fury: KoF|033-p1.*;033-p1bh.p1|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { FatalFury2_A,     L"Fatal Fury 2", L"Fatal Fury 2|047-p1.*;047-epr.ep1|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { FatalFuryS_A,     L"Fatal Fury Special", L"Fatal Fury Special (Neo-Geo)|058-p1.*;058-p1bs.p1|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { FatalFuryS_SNES,  L"Fatal Fury Special", L"Fatal Fury Special (SNES)|Fatal Fury Special (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { FatalFury3_A,     L"Fatal Fury 3", L"Fatal Fury 3|069-p1.*;069-p1bh.p1|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { FightFever_A,     L"Fight Fever", L"Fight Fever|060-p1.p1;060-p1.bin|", GamePlatform::NEOGEO },
    { GalaxyFight_A,    L"Galaxy Fight", L"Galaxy Fight|078-p1.*|", GamePlatform::NEOGEO },
    { Garou_A,          L"Garou: MotW", L"Garou: MotW|kf.neo-sma|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { GarouP_A,         L"Garou: MotW (Prototype)", L"Garou: MotW (Prototype)|proto_253-p1.p1;253-p1p.bin;253-sma.bin|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { Garou_S,          L"Garou: MotW", L"Garou: MotW for Steam 2|p1.bin|", GamePlatform::Steam },
    { GGDS_NDS,         L"Guilty Gear: Dust Strikers", L"Guilty Gear: Dust Strikers (Nintendo DS)|0590*(Japan).nds|", GamePlatform::Nintendo, GameSeries::NintendoDS },
    { GUNDAM_SNES,      L"Gundam Wing: Endless Duel", L"Gundam Wing: Endless Duel (SNES)|Shin Kidou Senki Gundam W - Endless Duel (Japan).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { HIppo_GBA,        L"Hajime no Ippo - The Fighting! (Japan)", L"Hajime no Ippo - The Fighting! (GBA)|Hajime no Ippo - The Fighting! (Japan).gba|", GamePlatform::Nintendo, GameSeries::NintendoGBA },
    { FotNS_P,          L"Hokuto no Ken", L"Hokuto no Ken (PS2)|HK_B.bin|", GamePlatform::PS2 },
    { HSF2_A,           L"HSF2", L"HSF2: Portraits (*.03), Characters (*.04)|hs2u.03;hs2u.04|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
    { JCHAN_A,          L"Jackie Chan in Fists of Fire (Kaneko)", L"Jackie Chan in Fists of Fire (Kaneko)|j2p1x4.u70|", GamePlatform::OtherPlatform },
    { JOJOS_A,          L"Jojo's: HFTF (Normal, Regulation: Off)", L"Jojos HFTF: HUDs and menus (50), Characters (51)|50;51|", GamePlatform::CapcomCPS3 },
    { JOJOS_US_A,       L"Jojo's: HFTF (Regulation: On)", L"Jojos HFTF: HUDs and menus (50), Characters (51)|50;51|", GamePlatform::CapcomCPS3 },
    { JOJOSRPG_SNES,    L"Jojo's: RPG", L"Jojo's: RPG (SNES)|JoJo no Kimyou na Bouken (Japan).sfc;JoJo no Kimyou na Bouken (Japan) (Translated En).sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { JusticeLeagueTF_SNES, L"Justice League Task Force", L"Justice League Task Force (SNES)|Justice League Task Force (USA).sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { VENTURE_A,        L"Jojo's Venture", L"Jojo's Venture: Characters (50), HUD (31)|31;50|", GamePlatform::CapcomCPS3 },
    { KabukiKlash_A,    L"Kabuki Klash", L"Kabuki Klash|092-p1.*|", GamePlatform::NEOGEO },
    { KarnovsR_A,       L"Karnov's Revenge", L"Karnov's Revenge|066-p1.*|", GamePlatform::NEOGEO }, // DataEast
    { KI_SNES,          L"Killer Instinct", L"Killer Instinct (SNES)|Killer Instinct (USA)*.s?c;sns-akle-0.u1|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { KOTM_A,           L"King of the Monsters", L"King of the Monsters (Neo-Geo)|016-p1.*;016-hp1.*|", GamePlatform::NEOGEO },
    { KIZUNA_A,         L"Kizuna Encounter", L"Kizuna Encounter|216-p1.*;ke_p1.rom|", GamePlatform::NEOGEO },
    { KOF94_A,          L"KOF94", L"KOF94|055-p1.*|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF95_A,          L"KOF95", L"KOF95|084-p1.*;084-p2sp.p2|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF96_A,          L"KOF96", L"KOF96|214-p2.sp2;214-p2.bin;214ae-p2.p2|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF97_A,          L"KOF97", L"KOF97|232-p2.*;kof97_p2.rom;kf97-p2p.bin;97cbt-p2.bin;kf97-p2p.bin;232-p2ps.sp2;232-rc.sp2;232t.p2;232t2020-p2.sp2;232xt-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF97AE_A,        L"KOF97AE", L"KOF97AE|232ae.p2;232ae-p2.sp2;232aef-p2.sp2|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF97GM_S,        L"KOF97GM", L"KOF97GM|p1.bin|", GamePlatform::Steam },
    { KOF98_A,          L"KOF98", L"KOF98|242-p2.*;kof98_p2.rom;242cb-p2.sp2;242pfe.p2;242mix.p2;98eckvs-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF98AE2016_A,    L"KOF98AE2016 (Romhack)", L"KOF98AE2016 (Romhack)|242ae-p2.sp2;242ae-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF99AE_A,        L"KOF99AE", L"KOF99AE: A,B (p2), C,D,AC,BD (p3)|kof99ae_p2.bin;kof99ae_p3.bin;152-p2.bin;kf99eur.p2|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF00N_A,         L"KOF00N", L"KOF00N|257-pg2.sp2;257-p2n.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF01_A,          L"KOF01", L"KOF01|262-p2-08-e0.sp2;5003-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    // normal ROM name is 265-p2.sp2, but the fightcade ROM name is 265.p2.bin
    { KOF02_A,          L"KOF02", L"KOF02|265*p2*;kf2k2ru35-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF02PS2_A,       L"KOF02 (2002PS2)", L"KOF02 (2002PS2)|265ps2*p2*|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOF02UM_S,        L"KOF02UM", L"KOF02UM|pal_a*.bin;bar.bin;max2bg.bin;clear.bin;psel.bin-n;rank.bin;conte.bin|", GamePlatform::Steam },
    { KOF03_A,          L"KOF03 (2004 EX Ultra Plus)", L"KOF03 (2004 EX Ultra Plus)|2k3-p1up.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
    { KOFXI_A,          L"KOFXI", L"KOFXI|gdrom_KOFXI_v5_AllFighters.bin|", GamePlatform::SammyAtomiswave },
    { LASTBLADE_A,      L"Last Blade", L"Last Blade (Neo-Geo)|234-p1.*|", GamePlatform::NEOGEO },
    { LASTBLADE_S,      L"Last Blade", L"Last Blade (Steam)|lastblad_game_m68k|", GamePlatform::Steam },
    { LASTBLADE2_A,     L"Last Blade 2", L"Last Blade 2 (Neo-Geo)|243*.*;LB2_P1.ROM|", GamePlatform::NEOGEO },
    { LASTBLADE2_S,     L"Last Blade 2", L"Last Blade 2 (Steam)|p1.bin|", GamePlatform::Steam },
    { MAGICALDROPII_A,  L"Magical Drop II", L"Magical Drop II|221-p1*.*|", GamePlatform::NEOGEO },
    { MAGICALDROPIII_A, L"Magical Drop III", L"Magical Drop III|233-p1*.*|", GamePlatform::NEOGEO },
    { MartialMasters_A, L"Martial Masters", L"Martial Masters (PGM)|v104_32m.u9|", GamePlatform::PGM },
    { MATRIMELEE_A,     L"Matrimelee", L"Matrimelee|266-p2.*|", GamePlatform::NEOGEO },
    { MSH_A,            L"Marvel Super Heroes", L"MSH: Characters (*.05), Portraits (*.06b)|*.05*;*.06b|", GamePlatform::CapcomCPS12 },
    { MVC_A,            L"Marvel vs Capcom", L"MvC Arcade|mvc*.06*|", GamePlatform::CapcomCPS12, GameSeries::MvC },
    { MMX_SNES,         L"Mega Man X", L"Mega Man X (SNES)|Mega*Man X (USA).s?c;sns-rx-0 p0.u1|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { MMX2_SNES,        L"Mega Man X2", L"Mega Man X2 (SNES)|Mega*Man X2 (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { MMX3_SNES,        L"Mega Man X3", L"Mega Man X3 (SNES)|Mega*Man X3 (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { MMPR_SNES,        L"MMPR:TFE", L"MMPR:TFE (SNES)|Mighty Morphin Power Rangers - The Fighting Edition (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { MK1_SNES,         L"Mortal Kombat", L"Mortal Kombat (SNES)|Mortal Kombat (USA).sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { MK2_A,            L"Mortal Kombat II (Midway)", L"Mortal Kombat 2 (Arcade)|l3.1_mortal_kombat_ii_game_rom_uj12.uj12;uj12.l31;mk2ute.uj12|", GamePlatform::OtherPlatform },
    { MK2_SNES,         L"Mortal Kombat II", L"Mortal Kombat 2 (SNES)|MK2 USA.sfc;Mortal Kombat II (USA)*.sfc;Mortal_Kombat_II_USA.sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { MSHVSF_A,         L"MSHvSF", L"MSHvSF: Characters (*.06a), Portraits (*.07b)|*.06a;*.07b|", GamePlatform::CapcomCPS12, GameSeries::MvC },
    { MSHWOTG_SNES,     L"MSH: War of the Gems", L"MSH: War of the Gems (SNES)|Marvel Super Heroes in War of the Gems (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    // MarvelVsCapcom2.bin
    // Unlocked\MarvelVsCapcom2_unlocked.bin
    { MVC2_A,           L"MvC2", L"MvC2 Arcade (MarvelVsCapcom2_unlocked.bin)|m*.dat;m*.bin|", GamePlatform::SegaNAOMI },
    { NeoBomberman_A,   L"Neo Bomberman", L"Neo Bomberman|093-p1.*|", GamePlatform::NEOGEO },
    { NGBC_A,           L"NGBC", L"NGBC|NeoGeoBattleColliseum.bin|", GamePlatform::SammyAtomiswave },
    { NINJAMASTERS_A,   L"Ninja Master's", L"Ninja Master's|217-p2.*;ninjm_p2.rom|", GamePlatform::NEOGEO },
    { PrimalRage_SNES,  L"Primal Rage", L"Primal Rage (SNES)|Primal Rage (USA).sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { RANMACRH_SNES,    L"Ranma Nibunnoichi: CRH", L"Ranma Nibunnoichi: CRH (SNES)|Ranma Nibunnoichi - Chougi Ranbu Hen (J).s?c;ranma 1-2 - chougi ranbu hen (japan).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { RANMAHB_SNES,     L"Ranma Nibunnoichi: HB", L"Ranma Nibunnoichi: HB (SNES)|ranma 1-2 - hard battle (usa).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { ROTD_A,           L"Rage of the Dragons", L"Rage of the Dragons|264-p1.*|", GamePlatform::NEOGEO },
    { RBFF1_A,          L"Real Bout Fatal Fury", L"Real Bout Fatal Fury|095-p1.*;095-p1k.p1;rbff1_p1.rom|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { RBFF2_A,          L"Real Bout Fatal Fury 2", L"Real Bout Fatal Fury 2|240-p1.*;240-pg1.*;rb2_p1.rom;140-p1k.*;240-p1fc.p1|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    // normal ROM name is 223-p1.p1 (and 223-p1k.p1 for Korean), FC uses 223-p1.bin
    { RBFFS_A,          L"Real Bout Fatal Fury Special", L"Real Bout Fatal Fury Special|223*p1*|", GamePlatform::NEOGEO, GameSeries::FatalFury },
    { REDEARTH_A,       L"Red Earth", L"Red Earth (Stages: 30, Characters: 31, Next: 50)|30;31;50|", GamePlatform::CapcomCPS3 },
    { RODSM2_A,         L"Ring of Destruction: Slam Masters 2", L"Ring of Destruction: Slam Masters 2|smbe.05b|", GamePlatform::CapcomCPS12 },
    { SAMSHO1_A,        L"Samurai Shodown", L"Samurai Shodown|045-p1.p1;045-p1.bin;045-p2.rom|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO2_A,        L"Samurai Shodown II", L"Samurai Shodown II|063-p1.*;063-p1-kan.p1;063-p1new.p1|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO3_A,        L"Samurai Shodown III", L"Samurai Shodown III|087-p5.p5|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO4_A,        L"Samurai Shodown IV", L"Samurai Shodown IV|sams4_p1.rom;222-p1.*;222_p1.*;222-p1k.p1;222-p1sp.p1|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO5_A,        L"Samurai Shodown V", L"Samurai Shodown V|270-p1.*;p1.bin;270-p1c.p1|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO5X_A,       L"Samurai Shodown V (Xbox)", L"Samurai Shodown V (Xbox)|ssvx_p1.rom|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO5SP_A,      L"Samurai Shodown V Special", L"Samurai Shodown V Special (Neo-Geo)|272-p1*.*;273-p1.bin|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
    { SAMSHO5SP_S,      L"Samurai Shodown V Special", L"Samurai Shodown V Special (Steam)|p1*h*.bin|", GamePlatform::Steam },
    { SAVAGEREIGN_A,    L"Savage Reign", L"Savage Reign|059-p1.*;savag_p1.rom|", GamePlatform::NEOGEO },
    { BASARA_P,         L"Sengoku BASARA X", L"Sengoku BASARA X (PS2)|BSR.bin|", GamePlatform::PS2 },
    { SFA1_A,           L"SFA1", L"SFA1|sfz.06|", GamePlatform::CapcomCPS12, GameSeries::SFA },
    { SFA2_A,           L"SFA2", L"SFA2: Characters (sz*.07), Bonus (sz*.08)|sz*.07*;sz*.08*|", GamePlatform::CapcomCPS12, GameSeries::SFA },
    { SFA2_Hack_A,      L"SFA2 Hack", L"SFA2 Hack (sz2u.09)|sz2u.09|", GamePlatform::CapcomCPS12, GameSeries::SFA },
    { SFA3_A,           L"SFA3", L"SFA3 sz3.09c|*.09*|", GamePlatform::CapcomCPS12, GameSeries::SFA },
    { SFZ3U_A,          L"SFZ3U", L"SFZ3U|StreetFighterZero3Upper.bin;Street_Fighter_Zero_3_Upper.dat|", GamePlatform::SegaNAOMI },
    { SFIII1_A,         L"SFIII:NG", L"SFIII:NG Arcade|50|", GamePlatform::CapcomCPS3, GameSeries::SF3 },
    { SFIII2_A,         L"SFIII:2I", L"SFIII:2I Arcade|50|", GamePlatform::CapcomCPS3, GameSeries::SF3 },
    { SFIII3_A,         L"SFIII:3S", L"SFIII:3S Arcade (51), Gill glow/X.C.O.P.Y. (10)|10;51|", GamePlatform::CapcomCPS3 },
    { SF1_A,            L"Street Fighter (Capcom)", L"Street Fighter|sf*19*.*;sfd-19;sfe-19|", GamePlatform::OtherPlatform },
    { SF2CE_A,          L"SF2:CE", L"SF2:CE: Select (21), Characters (22), Continue (23)|s92*21*6f;s92*22*7f;s92*23*8f|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
    { SF2HF_A,          L"SF2:HF", L"SF2:HF: Select (21), Characters (22), Continue (23)|s2t*21.6f;s2t*22.7f;s2t*_23.8f;bundleStreetFighterII_HF.mbundle|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
    { SHAQFU_SNES,      L"Shaq Fu", L"Shaq Fu (SNES)|Shaq Fu (USA).sfc;sns-aqfe-0.u1|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { SFTM_A,           L"Street Fighter: The Movie (Incredible Technologies)", L"Street Fighter: The Movie (Arcade)|sfm_0_v1.1.prom0;sfm_0_v1.11.prom0;sfm_0_v1.12.prom0;sfmn_0_v1.12.prom0;sfmn_0_v1.14.prom0|", GamePlatform::OtherPlatform },
    { SVG_SNES,         L"Super Variable Geo (Japan)", L"Super Variable Geo (Japan SNES)|Super Variable Geo (J*).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { SurvivalArts_A,   L"Survival Arts (Scarab)", L"Survival Arts (Scarab)|prl-r6.u4;usa-pr-l.u4|", GamePlatform::OtherPlatform },
    { SVCPLUSA_A,       L"SNK vs Capcom", L"SNK vs Capcom|svc-p2pl.bin;svc-p2sp.bin|", GamePlatform::NEOGEO },
    { SSF2T_A,          L"SSF2T", L"SSF2T: Portraits (*.03c), Characters (*.04a), Stages (*.08)|sfx*.03*;sfx*.04a;sfx*.08|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
    { SSF2T_GBA,        L"SSF2T: Revival", L"SSF2T: Revival (GBA)|Super*Street*Fighter*.gba|", GamePlatform::Nintendo, GameSeries::NintendoGBA },
    { SDODGEBALL_A,     L"Super Dodge Ball", L"Super Dodge Ball|208-p1.*;sdb_p1.rom|", GamePlatform::NEOGEO },
    { GEMFIGHTER_A,     L"Super Gem Fighter", L"Super Gem Fighter|pcf*.07|", GamePlatform::CapcomCPS12 },
    { SPF2T_A,          L"Super Puzzle Fighter II Turbo", L"Super Puzzle Fighter II Turbo|pzf.04*;pzfcb.04;pzfxp.04|", GamePlatform::CapcomCPS12 },
    { TMNTTF_SNES,      L"Teenage Mutant Ninja Turtles: TF", L"Teenage Mutant Ninja Turtles: TF (SNES)|sns-ky-0.u1;teenage mutant ninja turtles - tournament fighters (U*.s*c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { TOPF2005_SEGA,    L"Top Fighter 2005 (Mega Drive)", L"Top Fighter 2005|top fighter 2005 (unl).bin|", GamePlatform::OtherPlatform },
    { UMK3_A,           L"Ultimate Mortal Kombat 3 (Midway)", L"Ultimate Mortal Kombat 3 (Arcade)|l1.2_mortal_kombat_3_u54_ultimate.u54;um312u54.bin;u54_umk3plus.u54;umk3plus_beta1.u54;umk3te.u54;umk3uc-u54.bin;umk3uk-u54.bin|", GamePlatform::OtherPlatform },
    { UMK3_DS,          L"Ultimate Mortal Kombat 3", L"Ultimate Mortal Kombat 3 (DS)|Ultimate Mortal Kombat (USA) (En,Fr,De,Es,It).nds|", GamePlatform::Nintendo, GameSeries::NintendoDS },
    { UMK3_SNES,        L"Ultimate Mortal Kombat 3", L"Ultimate Mortal Kombat 3 (SNES)|Ultimate Mortal Kombat 3 (USA).sfc;sns-a3ze.u1|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { VampireNightWarriors_A,   L"Vampire: The Night Warriors", L"Vampire: The Night Warriors: Characters (rom 9), Portraits (rom 4)|vam*.09?; vam*.04?|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
    { VampireHunter_A,          L"Vampire Hunter: Darkstalkers' Revenge", L"Vampire Hunter: Darkstalkers' Revenge|vph?.09?|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
    { VHUNT2_A,         L"Vampire Hunter 2", L"Vampire Hunter 2|vh2j.09|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
    { VSAV_A,           L"Vampire Savior", L"Vampire Savior|vm3*.10b|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
    { VSAV2_A,          L"Vampire Savior 2", L"Vampire Savior 2|vs2j.10|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
    { Gowcaizer_A,      L"Voltage Fighter Gowcaizer", L"Voltage Fighter Gowcaizer|094-p1.*|", GamePlatform::NEOGEO },
    { WakuWaku7_A,      L"Waku Waku 7", L"Waku Waku 7|225-p1.*;225-p1bh.p1|", GamePlatform::NEOGEO },
    { WINDJAMMERS_A,    L"Windjammers", L"Windjammers|065-p1.*|", GamePlatform::NEOGEO }, // Data East on NEOGEO
    { XMMA_SNES,        L"X-Men: Mutant Apocalypse", L"X-Men: Mutant Apocalypse (SNES)|X-Men - Mutant Apocalypse (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
    { XMVSF_A,          L"XMvSF", L"XMvSF|xvs*.05*|", GamePlatform::CapcomCPS12, GameSeries::MvC },
    { NEOGEO_A,         L"Unknown Game Mode (Single File)", L"Unknown Game ROM|*.*|" },
};

static_assert(ARRAYSIZE(g_GameFriendlyName) == 190, "Increment the value check here once you've determined whether or not you want to add the new game into the above array.");

void CPalModDlg::LoadGameDir(SupportedGamesList nGameFlag, wchar_t* pszLoadDir)
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
    m_fForceImg = TRUE;

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

    m_fPalChanged = FALSE;
}

void CPalModDlg::OnButtonClickCheckEdits()
{
    // Commit current changes to memory if needed
    if (m_fPalChanged)
    {
        OnBnUpdate();
    }

    GetHost()->GetCurrGame()->ValidateMixExtraColors(m_fFileChanged);
}

void CPalModDlg::OnFilePatch()
{
    // Commit current changes to memory
    if (m_fPalChanged)
    {
        OnBnUpdate();
    }

    bool fSuccess = GetHost()->GetLoader()->SaveGame(GetHost()->GetCurrGame());

    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());

    if (!GetHost()->GetLoader()->GetErrCt())
    {
        m_fFileChanged = FALSE;
    }

    if (fSuccess)
    {
        static bool s_fHaveShownOnceThisSession = false;

        if (!s_fHaveShownOnceThisSession)
        {
            s_fHaveShownOnceThisSession = true;

            // Make sure they understand the basics of what just happened
            CString strInfo;
            strInfo = L"Updated. Useful notes:\n\n"
                      L"\t * Updated files will have updated CRCs : this is expected and required.\n"
                      L"\t * If your game has multiple ZIPs, your changes won't show up until you update the right ZIP.\n"
                      L"\t * Sometimes emulators screw up and desync.  If you're playing versus somebody it can help to be on the same exact edit.  This is an emulator problem.\n"
                      ;

            SHMessageBoxCheck(g_appHWnd, strInfo, GetHost()->GetAppName(), MB_OK | MB_ICONINFORMATION, IDOK, L"{752A4A5C-4AEF-411c-9238-3AB5B55D5877}");
        }
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
    if (m_fPalChanged)
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
    if (!m_fGetSliderUndo)
    {
        m_fGetSliderUndo = TRUE;
    }

    *pResult = 0;
}

// Adds to Undo/Redo list, marks palette and file as dirty
void CPalModDlg::ProcChange(BOOL fReset /* = FALSE */)
{
    if (fReset)
    {
        UndoProc.Clear();

        m_fPalChanged = FALSE;
    }
    else
    {
        UndoProc.DeleteRedoList();
        NewUndoData();

        m_fFileChanged = TRUE;
        m_fPalChanged = TRUE;
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
    bool canVaryAlphaSetting = false;
    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    if (GetHost()->GetCurrGame())
    {
        ColMode currColMode = GetHost()->GetCurrGame()->GetColorMode();
        AlphaMode currAlphaMode = GetHost()->GetCurrGame()->GetAlphaMode();
        PALWriteOutputOptions currWriteMode = GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency();
        canChangeAlpha = canChangeFormat = GetHost()->GetCurrGame()->AllowUpdatingColorFormatForGame();

        static_assert((ColMode)28 == ColMode::COLMODE_LAST, "New color formats need checking/unchecking in the menus here.");
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR333, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR333) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RBG333, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RBG333) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB333_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB333) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR444, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR444) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BRG444, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BRG444) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RBG444, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RBG444) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB444_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB444_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB444_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB444_LE) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_xBGR555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_xBGR555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB555_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB555_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR555_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR555_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_SHARPRGB, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB555_SHARP) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BRG555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BRG555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_GRB555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_GRB555_LE) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB666, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB666_NEOGEO) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR888) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BRG888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BRG888) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_GRB888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_GRB888) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB888) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGBA8881, 
            MF_BYCOMMAND | (((currColMode == ColMode::COLMODE_RGBA8881) || (currColMode == ColMode::COLMODE_RGBA8881_32STEPS))? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGBA8887, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGBA8887) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGBA8888_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGBA8888_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGBA8888_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGBA8888_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGRA8888_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGRA8888_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGRA8888_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGRA8888_LE) ? MF_CHECKED : MF_UNCHECKED));

        // There's no allowance for alpha with NEOGEO colors, nor with 24-bit color
        canChangeAlpha = canChangeAlpha && (currColMode != ColMode::COLMODE_RGB666_NEOGEO) && (ColorSystem::GetCbForColMode(currColMode) != 3);
        canVaryAlphaSetting = canChangeAlpha && (GetHost()->GetCurrGame()->GameIsUsing32BitColor());

        pSettMenu->CheckMenuItem(ID_ALPHASETTING_FIXED, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesFixedAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_VARIABLE, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesVariableAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_UNUSED, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameDoesNotUseAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_CHAOTIC, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesChaoticAlpha) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_TRANSPSETTING_16, MF_BYCOMMAND | ((currWriteMode == PALWriteOutputOptions::WRITE_16) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_TRANSPSETTING_256, MF_BYCOMMAND | ((currWriteMode == PALWriteOutputOptions::WRITE_MAX) ? MF_CHECKED : MF_UNCHECKED));

        // jump through some minor hoops to get the bitness popup menus checked appropriately...
        const int nMenuOptions = pSettMenu->GetMenuItemCount();

        for (int nCurrentMenu = 0; nCurrentMenu < nMenuOptions; nCurrentMenu++)
        {
            CString strMenuText;

            pSettMenu->GetMenuString(nCurrentMenu, strMenuText, MF_BYPOSITION);

            if (strMenuText == L"Color Format")
            {
                CMenu* pColorFormatMenu = pSettMenu->GetSubMenu(nCurrentMenu); //3 = settings menu

                const int nCFMenuOptions = pColorFormatMenu->GetMenuItemCount();
                uint8_t cbColorSize = ColorSystem::GetCbForColMode(currColMode);

                for (int nCFMItem = 0; nCFMItem < nCFMenuOptions; nCFMItem++)
                {
                    pColorFormatMenu->GetMenuString(nCFMItem, strMenuText, MF_BYPOSITION);
                    if (strMenuText == L"16-bit color")
                    {
                        pColorFormatMenu->CheckMenuItem(nCFMItem, MF_BYPOSITION | ((cbColorSize == 2) ? MF_CHECKED : MF_UNCHECKED));
                    }
                    else if (strMenuText == L"24-bit color")
                    {
                        pColorFormatMenu->CheckMenuItem(nCFMItem, MF_BYPOSITION | ((cbColorSize == 3) ? MF_CHECKED : MF_UNCHECKED));
                    }
                    else if (strMenuText == L"32-bit color")
                    {
                        pColorFormatMenu->CheckMenuItem(nCFMItem, MF_BYPOSITION | ((cbColorSize == 4) ? MF_CHECKED : MF_UNCHECKED));
                    }
                }
                break;
            }
        }
    }

    static_assert((ColMode)28 == ColMode::COLMODE_LAST, "New color formats need enabling/disabling in the menus here.");
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR333, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RBG333, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB333_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR444, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BRG444, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RBG444, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB444_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB444_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR555_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BRG555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_GRB555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_xBGR555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB555_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_SHARPRGB, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB666, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BRG888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_GRB888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB888, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGBA8881, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGBA8887, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGBA8888_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGBA8888_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGRA8888_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGRA8888_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_ALPHASETTING_FIXED, canChangeAlpha ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_UNUSED, canChangeAlpha ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_VARIABLE, canVaryAlphaSetting ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_CHAOTIC, MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_TRANSPSETTING_16, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_TRANSPSETTING_256, canChangeFormat ? MF_ENABLED : MF_DISABLED);
}

void CPalModDlg::SetAlphaModeTo(AlphaMode newAlphaMode)
{
    if (GetHost()->GetCurrGame())
    {
        GetHost()->GetCurrGame()->SetAlphaMode(newAlphaMode);
        // Reset for new settings as needed
        PostGameLoad();
    }
}

void CPalModDlg::SetColorFormatTo(ColMode newColMode)
{
    if (GetHost()->GetCurrGame())
    {
        GetHost()->GetCurrGame()->SetColorMode(newColMode);
        // Reset for new settings as needed
        PostGameLoad();
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
    BOOL fIsDir;
    wchar_t szLastDir[MAX_PATH];

    if (GetLastUsedPath(szLastDir, sizeof(szLastDir), &nLastUsedGFlag, FALSE, &fIsDir))
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
                if (fIsDir)
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
        wchar_t szPath[MAX_PATH];
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
            RegSetValueEx(hKey, strPerGameString, 0, REG_SZ, (LPBYTE)pszPath, (DWORD)(wcslen(pszPath) + 1) * sizeof(wchar_t));
            RegSetValueEx(hKey, c_strLastUsedPath, 0, REG_SZ, (LPBYTE)pszPath, (DWORD)(wcslen(pszPath) + 1) * sizeof(wchar_t));
            RegSetValueEx(hKey, c_strLastUsedGFlag, 0, REG_DWORD, (LPBYTE)&nGameFlag, (DWORD)sizeof(int));

            RegCloseKey(hKey);
        }
    }

    return;
}

BOOL CPalModDlg::GetLastUsedPath(LPWSTR pszPath, DWORD cbSize, SupportedGamesList* nGameFlag, BOOL fCheckOnly, BOOL* pfIsDir)
{
    BOOL fFound = FALSE;
    HKEY hKey = nullptr;

    if (ERROR_SUCCESS == RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey))
    {
        DWORD dwRegType = REG_SZ;
        wchar_t szPath[MAX_PATH] = {};
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
                if (fCheckOnly)
                {
                    fFound = TRUE;
                }
                else
                {
                    GetHost()->GetPalModDlg()->SetStatusText(L"Checking file...");
                    DWORD dwAttribs = GetFileAttributes(szPath);

                    if (INVALID_FILE_ATTRIBUTES != dwAttribs)
                    {
                        if (pfIsDir)
                        {
                            //Check to see if it's actually a file without an extension
                            *pfIsDir = (dwAttribs & FILE_ATTRIBUTE_DIRECTORY);
                        }

                        // This code used to be testing for (dwAttribs & FILE_ATTRIBUTE_ARCHIVE), but I don't think we need that currently.
                        wcscpy(pszPath, szPath);
                        fFound = TRUE;
                    }

                    // Reset now that we're loaded
                    GetHost()->GetPalModDlg()->SetStatusText(L"");
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

void CPalModDlg::OnActivate(UINT nState, CWnd* pWndOther, BOOL fMinimized)
{
    CDialog::OnActivate(nState, pWndOther, fMinimized);

    // TODO: Add your message handler code here
}

void CPalModDlg::OnFileOpenInternal(UINT nDefaultGameFilter /* = NUM_GAMES */)
{
    CString szGameFileDef = L"";

    nDefaultGameFilter = nDefaultGameFilter & 0xffff; // eliminate the applied mask (k_nGameLoadROMListMask, 0xf0000) that we use to avoid existing menu items

    // The following logic ensures that their last used selection is the default filter view.
    SupportedGamesList nLastUsedGFlag = (SupportedGamesList)nDefaultGameFilter;

    // Special allowance so that the user can see both file loading modes in the Load by ROM menu
    if (nDefaultGameFilter == DEVMODE_DIR)
    {
        return OnLoadGameByUnknownFileSet();
    }

    wchar_t szLastDir[MAX_PATH];
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

            wchar_t szGameFilter[MAX_DESCRIPTION_LENGTH];
            wcsncpy(szGameFilter, g_rgGameToFileMap[0].szGameFilterString, ARRAYSIZE(szGameFilter));
            szGameFilter[MAX_DESCRIPTION_LENGTH - 1] = 0;

            LPTSTR pszPipe = wcsstr(szGameFilter, L"|");

            if (pszPipe != nullptr)
            {
                // Truncate off the filter information
                pszPipe[0] = 0;
            }

            strInfo.Format(L"%s%sRight now this is going to be set to \'%s\' for the default game, \'%s\': you need to change that to the game you're interested in so that your ROM shows up.", pszParagraph1, pszParagraph2, szGameFilter, g_GameFriendlyName[g_rgGameToFileMap[0].nInternalGameIndex]);
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
    for (int nArrayPosition = 0; nArrayPosition < static_cast<int>(g_rgGameToFileMap.size()); nArrayPosition++)
    {
        szGameFileDef.Append(g_rgGameToFileMap[nArrayPosition].szGameFilterString);
        g_rgGameToFileMap[nArrayPosition].nListedGameIndex = nArrayPosition;

        if (g_rgGameToFileMap[nArrayPosition].nInternalGameIndex == nDefaultGameFilter)
        {
            // user nFilterIndex starts at 1
            dwLastUsedGameIndex = g_rgGameToFileMap[nArrayPosition].nListedGameIndex + 1;
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
            for (const sSupportedGameToFileMap& currentGame : g_rgGameToFileMap)
            {
                // user nFilterIndex starts at 1
                if ((currentGame.nListedGameIndex + 1) == ofn.nFilterIndex)
                {
                    LoadGameFile((SupportedGamesList)currentGame.nInternalGameIndex, (wchar_t*)ofn.lpstrFile);
                    break;
                }
            }
        }
    }
}

void CPalModDlg::LoadGameFile(SupportedGamesList nGameFlag, wchar_t* pszFile)
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

void CPalModDlg::OnImportPalette()
{
    // This handles palette import via the Tools menu: CPalDropTarget::OnDrop is the drag/drop version
    if (m_fEnabled)
    {
        static LPCWSTR rgszBBCFOpenFilter[] = { L"Supported Palette Files|*.act;*.png;*.pal;*.gpl;*.hpl;*.cfpl|"
                                                L"ACT Palette|*.act|"
                                                L"Indexed PNG|*.png|"
                                                L"Microsoft PAL|*.pal|"
                                                L"Upside-down ACT Palette|*.act|"
                                                L"Upside-down Indexed PNG|*.png|"
                                                L"GIMP palette file|*.gpl|"
                                                L"HipPalette|*.hpl|"
                                                L"BBCF palette set|*.cfpl|"
                                                L"BBTAG palette set|*.impl|"
                                                L"|" };

        static LPCWSTR rgszSF3OpenFilter[] = { L"Supported Palette Files|*.act;*.png;*.pal;*txt.dat;*.gpl;*.hpl|"
                                               L"ACT Palette|*.act|"
                                               L"Indexed PNG|*.png|"
                                               L"Microsoft PAL|*.pal|"
                                               L"Upside-down ACT Palette|*.act|"
                                               L"Upside-down Indexed PNG|*.png|"
                                               L"PS3 SF3::OE color file|*.txt.dat"
                                               L"GIMP palette file|*.gpl|"
                                               L"HipPalette|*.hpl|"
                                               L"|" };

        static LPCWSTR rgszOpenFilter[] = { L"Supported Palette Files|*.act;*.png;*.pal;*.gpl;*.hpl|"
                                            L"ACT Palette|*.act|"
                                            L"Indexed PNG|*.png|"
                                            L"Microsoft PAL|*.pal|"
                                            L"Upside-down ACT Palette|*.act|"
                                            L"Upside-down Indexed PNG|*.png|"
                                            L"GIMP palette file|*.gpl|"
                                            L"HipPalette|*.hpl|"
                                            L"|" };

        LPCWSTR pszFilterInUse = nullptr;

        switch (GetHost()->GetCurrGame()->GetGameFlag())
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
            pszFilterInUse = *rgszSF3OpenFilter;
            break;
        case BlazBlueCF_S:
            pszFilterInUse = *rgszBBCFOpenFilter;
            break;
        default:
            pszFilterInUse = *rgszOpenFilter;
            break;
        }

        CFileDialog PaletteLoad(TRUE, NULL, NULL, NULL, pszFilterInUse);

        if (PaletteLoad.DoModal() == IDOK)
        {
            CString strFileName = PaletteLoad.GetOFN().lpstrFile;
            bool fSuccess = false;

            wchar_t szExtension[_MAX_EXT];
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
            else if (_wcsicmp(szExtension, L".cfpl") == 0)
            {
                LoadPaletteFromCFPL(strFileName);
            }
            else if (_wcsicmp(szExtension, L".gpl") == 0)
            {
                LoadPaletteFromGPL(strFileName);
            }
            else if (_wcsicmp(szExtension, L".hpl") == 0)
            {
                LoadPaletteFromHPAL(strFileName);
            }
            else if (_wcsicmp(szExtension, L".impl") == 0)
            {
                LoadPaletteFromIMPL(strFileName);
            }
            else
            {
                LoadPaletteFromACT(strFileName, (PaletteLoad.GetOFN().nFilterIndex > 3));
            }
        }
    }
}

void CPalModDlg::OnExportPalette()
{
    static LPCWSTR rgszSaveFilter[] = { L"ACT Palette|*.act|"
                                        L"GIMP Palette File|*.gpl|"
                                        L"Microsoft PAL|*.pal|"
                                        L"Upside-down ACT Palette|*.act|" // This is at position four: that is important below!
                                        L"HipPalette|*.hpl|"
                                        L"|" };

    static LPCWSTR rgszBBCFSaveFilter[] = { L"HipPalette|*.hpl|"
                                            L"BlazBlue Central Fiction Palette Set|*.cfpl|"
                                            L"ACT Palette|*.act|"
                                            L"Upside-down ACT Palette|*.act|" // This is at position four: that is important below!
                                            L"GIMP Palette File|*.gpl|"
                                            L"Microsoft PAL|*.pal|"
                                            L"|" };

    static LPCWSTR rgszBBCFAndBBTAGSaveFilter[] = { L"HipPalette|*.hpl|"
                                            L"BlazBlue Central Fiction Palette Set|*.cfpl|"
                                            L"ACT Palette|*.act|"
                                            L"Upside-down ACT Palette|*.act|" // This is at position four: that is important below!
                                            L"BlazBlue Cross Tag Battle Palette Set|*.impl|"
                                            L"GIMP Palette File|*.gpl|"
                                            L"Microsoft PAL|*.pal|"
                                            L"|" };

    LPCWSTR pszDefaultExt = L"act";
    LPCWSTR pszFilterToUse = *rgszSaveFilter;
    bool fUseBBCFLogic = (GetHost()->GetCurrGame()->GetGameFlag() == BlazBlueCF_S);

    if (fUseBBCFLogic)
    {
        pszDefaultExt = L"hpl";

        if (CurrentBBCFCharacterIsInBBTAG())
        {
            pszFilterToUse = *rgszBBCFAndBBTAGSaveFilter;
        }
        else
        {
            pszFilterToUse = *rgszBBCFSaveFilter;
        }
    }

    CFileDialog ActSave(FALSE, pszDefaultExt, nullptr, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, pszFilterToUse);

    OPENFILENAME& pOFN = ActSave.GetOFN();

    pOFN.nFilterIndex = CRegProc::GetOFNIndexForPaletteExport(fUseBBCFLogic);

    if (ActSave.DoModal() == IDOK)
    {
        CFile ActFile;

        CString szFile = ActSave.GetOFN().lpstrFile;

        wchar_t szExtension[_MAX_EXT];
        _tsplitpath(szFile, nullptr, nullptr, nullptr, szExtension);
        bool fShouldShowGenericError = false;

        if (_wcsicmp(szExtension, L".gpl") == 0)
        {
            SavePaletteToGPL(ActSave.GetOFN().lpstrFile, fShouldShowGenericError);
        }
        else if (fUseBBCFLogic && (_wcsicmp(szExtension, L".cfpl") == 0)) // only allow cfpl for BBCF
        {
            SavePaletteToCFPL(ActSave.GetOFN().lpstrFile, fShouldShowGenericError);
        }
        else if (_wcsicmp(szExtension, L".hpl") == 0)
        {
            SavePaletteToHPAL(ActSave.GetOFN().lpstrFile, fShouldShowGenericError);
        }
        else if (fUseBBCFLogic && (_wcsicmp(szExtension, L".impl") == 0)) // only allow impl for BBCF
        {
            SavePaletteToIMPL(ActSave.GetOFN().lpstrFile, fShouldShowGenericError);
        }
        else if (_wcsicmp(szExtension, L".pal") == 0)
        {
            SavePaletteToPAL(ActSave.GetOFN().lpstrFile, fShouldShowGenericError);
        }
        else
        {
            if (ActSave.GetOFN().nFilterIndex == 4) // This is in reference to our array's sort order above
            {
                SavePaletteToACT(ActSave.GetOFN().lpstrFile, false, fShouldShowGenericError);
            }
            else
            {
                SavePaletteToACT(ActSave.GetOFN().lpstrFile, true, fShouldShowGenericError);
            }
        }

        if (fShouldShowGenericError)
        {
            CString strError;
            if (strError.LoadString(IDS_ERROR_SAVING_PALETTE_FILE))
            {
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
        
         CRegProc::StoreOFNIndexForPaletteExport(fUseBBCFLogic, pOFN.nFilterIndex);
    }
}

void CPalModDlg::OnGetMinMaxInfo(MINMAXINFO* lpMMI)
{
    // TODO: Add your message handler code here and/or call default

    if (m_fCanMinMax)
    {
        //lpMMI->ptMinTrackSize = r
    }

    CDialog::OnGetMinMaxInfo(lpMMI);
}
