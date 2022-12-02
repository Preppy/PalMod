#include "StdAfx.h"
#include "Game_UMK3_A.h"

CGame_UMK3_A::UMK3ALoadingKey CGame_UMK3_A::m_eVersionToLoad = UMK3ALoadingKey::V12Normal;

void CGame_UMK3_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, UMK3ALoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"l1.0_mortal_kombat_3_u54_ultimate.u54", UMK3ALoadingKey::V10 },
        { L"l1.1_mortal_kombat_3_u54_ultimate.u54", UMK3ALoadingKey::V11 },

        { L"l1.2_mortal_kombat_3_u54_ultimate.u54", UMK3ALoadingKey::V12Normal },
        { L"um312u54.bin", UMK3ALoadingKey::V12Alt },

        { L"u54_umk3plus.u54", UMK3ALoadingKey::V12Plus },
        { L"umk3plus_beta1.u54", UMK3ALoadingKey::V12PlusBeta },
        { L"umk3te.u54", UMK3ALoadingKey::V12TE },
        { L"umk3uc-u54.bin", UMK3ALoadingKey::V12UC },
        { L"umk3uk-u54.bin", UMK3ALoadingKey::V12UK },
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
        m_eVersionToLoad = UMK3ALoadingKey::V12Normal;
    }

    return;
}

CGame_UMK3_A::CGame_UMK3_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case UMK3ALoadingKey::V10:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V10);
        break;
    case UMK3ALoadingKey::V11:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V11);
        break;
    case UMK3ALoadingKey::V12Normal:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12Normal);
        break;
    case UMK3ALoadingKey::V12Alt:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12Alt);
        break;
    case UMK3ALoadingKey::V12Plus:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12Plus);
        break;
    case UMK3ALoadingKey::V12PlusBeta:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12PlusBeta);
        break;
    case UMK3ALoadingKey::V12TE:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12TE);
        break;
    case UMK3ALoadingKey::V12UC:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12UC);
        break;
    case UMK3ALoadingKey::V12UK:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12UK);
        break;
    }
}

sFileRule CGame_UMK3_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case UMK3ALoadingKey::V10:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V10);
    case UMK3ALoadingKey::V11:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V11);
    case UMK3ALoadingKey::V12Normal:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12Normal);
    case UMK3ALoadingKey::V12Alt:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12Alt);
    case UMK3ALoadingKey::V12Plus:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12Plus);
    case UMK3ALoadingKey::V12PlusBeta:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12PlusBeta);
    case UMK3ALoadingKey::V12TE:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12TE);
    case UMK3ALoadingKey::V12UC:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12UC);
    case UMK3ALoadingKey::V12UK:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12UK);
    }
}

uint32_t CGame_UMK3_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        // This won't work so we're not exposing this right now: there's a double-shift for both 1.0 and 1.1
        { L"Ultimate Mortal Kombat 3 (rev 1.0)", L"l1.0_mortal_kombat_3_u54_ultimate.u54", 0xdfd735da, -0x140 },
        { L"Ultimate Mortal Kombat 3 (rev 1.1)", L"l1.1_mortal_kombat_3_u54_ultimate.u54", 0x712b4db6, -0xc0 },

        { L"Ultimate Mortal Kombat 3 (rev 1.2)", L"l1.2_mortal_kombat_3_u54_ultimate.u54", 0x712b4db6, 0 },
        { L"Ultimate Mortal Kombat 3 (rev 1.2)", L"um312u54.bin", 0xcf100a75, 0 },

        { L"Ultimate Mortal Kombat 3 Plus (Hack, Beta 2)", L"u54_umk3plus.u54", 0x54a5359f, 0 },
        { L"Ultimate Mortal Kombat 3 Plus (Hack, Beta 1)", L"umk3plus_beta1.u54", 0xa46ee73c, 0 },
        { L"Ultimate Mortal Kombat 3 Tournament Edition (hack, V2.0.042/August 2018)", L"umk3te.u54", 0xd0df2866, 0 },
        { L"Ultimate Mortal Kombat 3 Ultimate Cup Edition (hack)", L"umk3uc-u54.bin", 0x5010d92d, 0 },
        { L"Ultimate Mortal Kombat 3 UK (rev 1.2)", L"umk3uk-u54.bin", 0xbc509bce, 0 },
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
