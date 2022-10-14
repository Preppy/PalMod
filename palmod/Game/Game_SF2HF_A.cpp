#include "StdAfx.h"
#include "Game_SF2HF_A.h"

CGame_SF2HF_A::SF2HFLoadingKey CGame_SF2HF_A::m_eVersionToLoad = SF2HFLoadingKey::ROM21;

void CGame_SF2HF_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SF2HFLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"s2tu_21.6f", SF2HFLoadingKey::ROM21 },
        { L"s2tu_22.7f", SF2HFLoadingKey::ROM22 },
        { L"s2tu_23.8f", SF2HFLoadingKey::ROM23 },

        { L"s2te_21.6f", SF2HFLoadingKey::ROM21 },
        { L"s2te_22.7f", SF2HFLoadingKey::ROM22 },
        { L"s2te_23.8f", SF2HFLoadingKey::ROM23 },


        { L"s2tj_21.6f", SF2HFLoadingKey::ROM21 },
        { L"s2tj_22.7f", SF2HFLoadingKey::ROM22 },
        { L"s2tj_23.8f", SF2HFLoadingKey::ROM23 },

        { L"bundlestreetfighterii_hf.mbundle", SF2HFLoadingKey::SF30th },
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
        m_eVersionToLoad = SF2HFLoadingKey::ROM21;
    }

    return;
}

CGame_SF2HF_A::CGame_SF2HF_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case SF2HFLoadingKey::ROM21:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM21);
        break;
    case SF2HFLoadingKey::ROM22:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM22);
        break;
    case SF2HFLoadingKey::ROM23:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM23);
        break;
    case SF2HFLoadingKey::SF30th:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_SF30th);
        break;
    }
}

sFileRule CGame_SF2HF_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case SF2HFLoadingKey::ROM21:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM21);
    case SF2HFLoadingKey::ROM22:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM22);
    case SF2HFLoadingKey::ROM23:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM23);
    case SF2HFLoadingKey::SF30th:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_SF30th);
    }
}

uint32_t CGame_SF2HF_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        { L"Street Fighter II' - Hyper Fighting (US 921209)", L"s2tu_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (US 921209)", L"s2tu_22.7f", 0xaea6e035, 0 },
        { L"Street Fighter II' - Hyper Fighting (US 921209)", L"s2tu_23.8f", 0x89a1fc38, 0 },

        { L"Street Fighter II' - Hyper Fighting (World 921209)", L"s2te_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (World 921209)", L"s2te_22.7f", 0xaea6e035, 0 },
        { L"Street Fighter II' - Hyper Fighting (World 921209)", L"s2te_23.8f", 0xaea6e035, 0 },
        

        { L"Street Fighter II' - Hyper Fighting (Japan 921209)", L"s2tj_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (Japan 921209)", L"s2tj_22.7f", 0xaea6e035, 0 },
        { L"Street Fighter II' - Hyper Fighting (Japan 921209)", L"s2tj_23.8f", 0xea73b4dc, 0 },

        // SF2 HF 30th anniversary collates all the roms.  The shifts are:
        // case SF2HFLoadingKey::ROM21:
        //    m_nCurrentPaletteROMLocation += 0x70009e;
        // case SF2HFLoadingKey::ROM22:
        //    m_nCurrentPaletteROMLocation += 0x68009e;
        // case SF2HFLoadingKey::ROM23:
        //    m_nCurrentPaletteROMLocation += 0x60009E;
        { L"Street Fighter II' - Hyper Fighting (30th Anniversary)", L"bundleStreetFighterII_HF.mbundle", 0x299ce4f8, 0x68009e },
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
