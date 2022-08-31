#include "StdAfx.h"
#include "Game_XMVSF_A.h"

uint32_t CGame_XMVSF_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
#ifdef MAME_NOTES
    we want the 05 rom
GAME(1996, xmvsf,      0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Euro 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfr1,    xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Euro 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfu,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfur1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfur2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfj,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr3,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 960909)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05",   0x100000, 0x80000, CRC(030e0e1e) SHA1(164e3023bb1965768448e1bf6c45ff9e0ac964c7))
GAME(1996, xmvsfa,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 960919)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar3,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfh,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Hispanic 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfb,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Brazil 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfu1d,   xmvsf,    dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "X-Men Vs. Street Fighter (USA 961004 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",   0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
#endif
        { L"XMvSF (CPS2)", L"xvs.05a", 0x7db6025d, 0 },
        { L"XMvSF (960909 Japan CPS2)", L"xvs.05", 0x030e0e1e, 0 },
    };

    if (ppKnownROMSet)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

void CGame_XMVSF_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_sCoreGameData.nUnitCount)
    {
        CString strMessage;
        strMessage.Format(L"CGame_XMVSF_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
        OutputDebugString(strMessage);

        const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(nUnitId, nPalId);

        if (pThisPalette && pThisPalette->pExtraProcessing && pThisPalette->pExtraProcessing->pProcessingSteps.size())
        {
            OutputDebugString(L"\tThis palette is linked to additional palettes: updating those as well now.\n");
            ProcessAdditionalPaletteChangesRequired(nUnitId, nPalId, pThisPalette->pExtraProcessing->pProcessingSteps);
        }
        else
        {
            OutputDebugString(L"\tNo further processing needed.\n");
        }
    }
}
