#include "StdAfx.h"
#include "Game_VHUNT2_A.h"

CGame_VHUNT2_A::VHunt2LoadingKey CGame_VHUNT2_A::m_eVersionToLoad = VHunt2LoadingKey::ROM09;

void CGame_VHUNT2_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, VHunt2LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"vh2j.09", VHunt2LoadingKey::ROM09 },
        { L"vh2j.10", VHunt2LoadingKey::ROM10 },        
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
        m_eVersionToLoad = VHunt2LoadingKey::ROM09;
    }

    return;
}

CGame_VHUNT2_A::CGame_VHUNT2_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == VHunt2LoadingKey::ROM09) ? m_sCoreGameData_09 : m_sCoreGameData_10);
}

sFileRule CGame_VHUNT2_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == VHunt2LoadingKey::ROM09) ? m_sFileLoadingData_09 : m_sFileLoadingData_10);
}

void CGame_VHUNT2_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);

    if ((m_eVersionToLoad == VHunt2LoadingKey::ROM10) &&
        (nUnitId != m_nCurrentExtraUnitId))
    {
        // This logic is significantly incomplete and thus we are not exposing loading this ROM in GameRegistry.
        // If you want to do this in the future, what follows is partially correct logic that needs significant 
        // work and also the analysis (see partial notes below) that would enable that work.


        // We're reusing the VSAV stage data which is great.
        // What is not great but somewhat expected is that that data is shifted in different segment lengths,
        // since VSAV2 and VHUNT2 add Revenger's Roost palettes.

        // VHUNT2 vs VSAV deltas:
        // base delta -0x8a7c for start
        // new palettes (RR?): 0x1814e - 0x1828e
        /// (recolors 0x198ae - 0x199ae)
        // new palettes 0x199ae - 0x199ee
        // new palettes 0x19dae - 0x19eee
        // recolors 0x1a70e - 0x1a70e
        // MASSIVE CHANGES 0x1ab0e - 0x1aece 
            // vsav "change area" mapping here is 0x2330a - 0x236ca
        // MASSIVE CHANGE 0x1ba6e - 0x1c70e (VSAV area is 0x2422a - 0x2430a )
        // VSAV missing palettes are from 0x2464a-0x27cea
        // change 0x1c94e
        // vhunt2 0x1c48e maps to vsav 0x27cea
        // vhunt2 dealigns at 0x2020e-0x2114e
            //vsav missing palettes from  0x2ba0a-0x2bf0a
        // delign 0x227ee -0x22b8e
            // vsav chunk is 0x2d5ac - 0x2d60c
        // color change 0x2328e - 0x232ee (unset in VSAV)
        // color change 0x235ae - 0x235ce (unset in VSAV)
        // new palettes: 0x2362e - 0x236ce (not in VSAV)
        // color change 0x23dce - 0x23e2e (unset in VSAV)
        // color change 0x240ee - 0x2410e (unset in VSAV)
        // new palettes 0x2416e - 0x2420e (not in VSAV)
        // color change 0x2490e - 0x2496e (unset "")
        // color change 0x24c2e - 0x24c4e (unset "")
        // new palettes 0x24cae - 0x24d4e (not in "")
        // color change 0x2544e - 0x254ae (unset "")
        // color change 0x2576e - 0x2578e (unset "")
        // new palettes 0x257ee - 0x2588e (not in "")
        // color change 0x25f8e - 0x25fee (unset "")
        // color change 0x262ae - 0x262ce (unset in "")
        // new palettes 0x2632e - 0x263d0 (not in "")
        // color change 0x26ace - 0x26b2e
        // color change 0x26dee - 0x26e0e
        // new palettes 0x26e6e - 0x26f0e
        // color change 0x2760e - 0x2764e
        // color change 0x2792e - 0x2794e
        // new palettes 0x279ae - 0x27a4e
        // color change 0x2814e - 0x281ae
        // color change 0x2846e - 0x2846e
        // new palettes 0x284ee - 0x2858e
        // color change 0x28c8e - 0x28cee
        // color change 0x28fae - 0x28fce
        // new palettes 0x2902e - 0x290ce
        // color change 0x297ce - 0x2982e
        // color change 0x29aee - 0x29b0e
        // new palettes 0x29b6e - 0x29c0e
        // new palettes 0x2a06e - 0x2a1ae
        // new palettes 0x2a24e - 0x2a38e
        // new palettes 0x2b62e - 0x2b78e
        // DESYNC vhunt 0x2b7d0 - 0x2bf36 , vsav 0x3584c - 0x35892
        // new palettes 0x31456 - 0x31856 (vsav offset 0x3adb2)
        // color change 0x33856 - 0x33bb6
        // new palettes 0x36d76 - 0x37176 (VSAV 0x402d2)
        // notes end here!  there's a loooot more of changes
        // Finishing the analysis and coding up the associated shifts are left as an exercise to the reader.
        // Note that if we *did* finish this logic, it would be beneficial to output the 
        // updated offsets and craft unique VHUNT2 palette (ending reuse of VSAV.h) so that
        // we could more easily add in Revenger's Roost support.

        if (m_nCurrentPaletteROMLocation < 0x20c4a)
        {
            // ss section up until animation parts
            // 0x201CA - 0x1774e = 0x8a7c
            m_nCurrentPaletteROMLocation -= 0x8a7c;
        }
        else if (m_nCurrentPaletteROMLocation < 0x20fca)
        {
            // animation parts for Feast
            // 0x20c4a - 0x1828e = 0x8a7c
            m_nCurrentPaletteROMLocation -= 0x89BC;
        }
        else if (m_nCurrentPaletteROMLocation < 0x369d0)
        {
            // animation parts starting at Red Thirst SS.1.1.1
            // 0x20fca - 0x1868e = 0x8a7c
            m_nCurrentPaletteROMLocation -= 0x893C;
        }        
        else if (m_nCurrentPaletteROMLocation < 0x468fA)
        { 
            // 8bg
            // 0x369d0 - 0x2d074 = 0x995C
            m_nCurrentPaletteROMLocation -= 0x995C;
        }
        else if (m_nCurrentPaletteROMLocation < 0x58ea2)
        {
            // 16bg
            // 0x468fA - 0x39f9e = 0xC95C
            m_nCurrentPaletteROMLocation -= 0xC95C;
        }
        else 
        {
            // 32bg
            // 0x58ea2 - 0x4a546 = 0xE95C
            m_nCurrentPaletteROMLocation -= 0xE95C;
        }
    }
}
