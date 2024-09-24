#include "StdAfx.h"
#include "Game_SF2CE_A.h"

CGame_SF2CE_A::SF2CELoadingKey CGame_SF2CE_A::m_eVersionToLoad = SF2CELoadingKey::ROM21;

void CGame_SF2CE_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SF2CELoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"s92_21a.6f", SF2CELoadingKey::ROM21 },
        { L"s92j_21a.6f", SF2CELoadingKey::ROM21 },

        // 22 shifts consistently across revisions
        { L"s92_22a.7f", SF2CELoadingKey::ROM22 },
        { L"s92_22b.7f", SF2CELoadingKey::ROM22 },
        { L"s92_22c.7f", SF2CELoadingKey::ROM22 },

        // these use two shifts, the second shift is for boxer and P2 colors at least
        { k_SF2CE_JapanROMName_RevA, SF2CELoadingKey::ROM22 },
        { k_SF2CE_JapanROMName_RevB, SF2CELoadingKey::ROM22 },
        { k_SF2CE_JapanROMName_RevC, SF2CELoadingKey::ROM22 },

        // 23
        { L"s92e_23b.8f", SF2CELoadingKey::ROM23 }, // ce - core
        { L"s92e_23a.8f", SF2CELoadingKey::ROM23 }, // ceea

        { L"s92u_23a.8f", SF2CELoadingKey::ROM23 }, // ceua
        { L"s92u_23b.8f", SF2CELoadingKey::ROM23 }, // ceub
        { L"s92u_23c.8f", SF2CELoadingKey::ROM23 }, // ceuc

        { L"s92t_23a.8f", SF2CELoadingKey::ROM23 }, // cet
        { L"s92j_23a.8f", SF2CELoadingKey::ROM23 }, // ceja
        { L"s92j_23b.8f", SF2CELoadingKey::ROM23 }, // cejb
        { L"s92j_23c.8f", SF2CELoadingKey::ROM23 }, // cejc
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
        m_eVersionToLoad = SF2CELoadingKey::ROM21;
    }

    return;
}

CGame_SF2CE_A::CGame_SF2CE_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case SF2CELoadingKey::ROM21:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM21);
        break;
    case SF2CELoadingKey::ROM22:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM22);
        break;
    case SF2CELoadingKey::ROM23:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM23);
        break;
    }
}

sFileRule CGame_SF2CE_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case SF2CELoadingKey::ROM21:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM21);
    case SF2CELoadingKey::ROM22:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM22);
    case SF2CELoadingKey::ROM23:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM23);
    }
}

void CGame_SF2CE_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = static_cast<int>(max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset)));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        // Adjust for ROM-specific variant locations
        if (m_pCRC32SpecificData)
        {
            // There's a different shift in Japanese 22 ROMs above this location.
            bool isLocationLow = (m_nCurrentPaletteROMLocation < 0x19000);
            if (isLocationLow && (wcscmp(m_pCRC32SpecificData->strROMFileName.c_str(), k_SF2CE_JapanROMName_RevA) == 0))
            {
                m_nCurrentPaletteROMLocation += 0x1b3c;
            }
            else if (isLocationLow && (wcscmp(m_pCRC32SpecificData->strROMFileName.c_str(), k_SF2CE_JapanROMName_RevB) == 0))
            {
                m_nCurrentPaletteROMLocation += 0x1b4e;
            }
            else if (isLocationLow && (wcscmp(m_pCRC32SpecificData->strROMFileName.c_str(), k_SF2CE_JapanROMName_RevC) == 0))
            {
                m_nCurrentPaletteROMLocation += 0x1b56;
            }
            else
            {
                m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
            }
        }
    }
    else // SF2CE_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &m_prgCurrentExtrasLoaded[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

void CGame_SF2CE_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);

    if (nUnitId != m_nCurrentExtraUnitId)
    {
        // For Steam, we can handle the split ROMs as one unit.  Adjust the 04 units for the offset.
        if (nUnitId < ARRAYSIZE(SF2CE_A_22_UNITS))
        {
            m_nCurrentPaletteROMLocation += 0x8a50ac - 0x242c6;
        }
        else if (nUnitId < (ARRAYSIZE(SF2CE_A_22_UNITS) + ARRAYSIZE(SF2CE_A_21_UNITS)))
        {
            m_nCurrentPaletteROMLocation += 0x90f210 - 0xe41e;
        }
        else
        {
            m_nCurrentPaletteROMLocation += 0x81ee2a - 0x1e038;
        }
    }
}
