#include "StdAfx.h"
#include "Game_MSH_A.h"

CGame_MSH_A::MSHLoadingKey CGame_MSH_A::m_eVersionToLoad = MSHLoadingKey::ROM05;

void CGame_MSH_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, MSHLoadingKey> m_rgFileNameToVersion =
    {
        // these must be all lower case
        { L"msh.05", MSHLoadingKey::ROM05 },
        { L"msh.05a", MSHLoadingKey::ROM05 },
        { L"mshud.05", MSHLoadingKey::ROM05 },
        { L"msh.06b", MSHLoadingKey::ROM06 },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eVersionToLoad = result->second;
    }
    else
    {
        m_eVersionToLoad = MSHLoadingKey::ROM05;
    }

    return;
}

CGame_MSH_A::CGame_MSH_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case MSHLoadingKey::ROM05:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM05);
        break;
    case MSHLoadingKey::ROM06:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM06);
        break;
    }
}

sFileRule CGame_MSH_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case MSHLoadingKey::ROM05:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM05);
    case MSHLoadingKey::ROM06:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM06);
    }
}

uint32_t CGame_MSH_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
#ifdef MAME_NOTES
    Every 6 ROM is identical.  5 varies.
GAME(1995, msh,        0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Euro 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshu,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (USA 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",  0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b", 0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshud,      msh,      dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "Marvel Super Heroes (US 951024 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)    ROM_LOAD16_WORD_SWAP("mshud.05",0x100000, 0x80000, CRC(3b493e84) SHA1(875e616270e839218c924e09627bcf79211ee694))
    ROM_LOAD16_WORD_SWAP("mshud.05",0x100000, 0x80000, CRC(3b493e84) SHA1(875e616270e839218c924e09627bcf79211ee694))
    ROM_LOAD16_WORD_SWAP("msh.06b", 0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshj,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Japan 951117)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05a",  0x100000, 0x80000, CRC(f37539e6) SHA1(770febc25ca5615b6c2023727edab3c68b15b2c4))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshjr1,     msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Japan 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, msha,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Asia 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshh,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Hispanic 951117)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05a",  0x100000, 0x80000, CRC(f37539e6) SHA1(770febc25ca5615b6c2023727edab3c68b15b2c4))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshb,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Brazil 951117)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05a",  0x100000, 0x80000, CRC(f37539e6) SHA1(770febc25ca5615b6c2023727edab3c68b15b2c4))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshbr1,     msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Brazil 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
#endif
        { L"MSH (CPS2 951024)", L"msh.05", 0x6a091b9e, 0 },
        { L"MSH (CPS2 951117)", L"msh.05a", 0xf37539e6, 0 },
        { L"MSH (CPS2 US 951024)", L"mshud.05", 0x3b493e84, 0 },

        { L"MSH (CPS2)", L"msh.06b",  0x803e3fa4, 0 },
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

void CGame_MSH_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nCurrentExtraUnitId)
    {
        CString strMessage;
        strMessage.Format(L"CGame_MSH_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
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
