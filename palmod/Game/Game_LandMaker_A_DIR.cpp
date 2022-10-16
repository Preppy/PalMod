#include "StdAfx.h"
#include "PalMod.h"
#include "Game_LandMaker_A_DIR.h"

CGame_LandMaker_A_DIR::LandMakerLoadingKey CGame_LandMaker_A_DIR::m_eVersionToLoad = LandMakerLoadingKey::LandMaker202;

void CGame_LandMaker_A_DIR::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, LandMakerLoadingKey> m_rgFileNameToVersion =
    {
        { L"landmakr",  LandMakerLoadingKey::LandMaker202 },
        { L"landmakrj", LandMakerLoadingKey::LandMaker201 },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase = strFileNameLowerCase.Mid(strFileNameLowerCase.ReverseFind('\\') + 1);
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eVersionToLoad = result->second;
    }
    else
    {
        m_eVersionToLoad = LandMakerLoadingKey::LandMaker202;
    }

    return;
}

CGame_LandMaker_A_DIR::CGame_LandMaker_A_DIR(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case LandMakerLoadingKey::LandMaker202:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_202);
        break;
    case LandMakerLoadingKey::LandMaker201:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_201);
        break;
    }
}

sFileRule CGame_LandMaker_A_DIR::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case LandMakerLoadingKey::LandMaker202:
    default:
        return CGameClassByDir::GetRule(nRuleId, LandMaker_A_FileLoadingData_202);
    case LandMakerLoadingKey::LandMaker201:
        return CGameClassByDir::GetRule(nRuleId, LandMaker_A_FileLoadingData_201);
    }
}

sFileRule CGame_LandMaker_A_DIR::GetNextRule()
{
    switch (m_eVersionToLoad)
    {
    case LandMakerLoadingKey::LandMaker202:
    default:
        return CGameClassByDir::GetNextRule(LandMaker_A_FileLoadingData_202);
    case LandMakerLoadingKey::LandMaker201:
        return CGameClassByDir::GetNextRule(LandMaker_A_FileLoadingData_201);
    }
}

uint32_t CGame_LandMaker_A_DIR::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-19.20", 0xf92eccd0, 0 },
        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-18.19", 0x5a26c9e0, 0 },
        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-17.18", 0x710776a8, 0 },
        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-17.17", 0xb073cda9, 0 },

        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-13.20", 0x0af756a2, 0 },
        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-12.19", 0x636b3df9, 0 },
        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-11.18", 0x279a0ee4, 0 },
        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-10.17", 0xdaabf2b2, 0 },
    };

#ifdef MAME_NOTES
GAME( 1998, landmakr,   0,        f3,      f3, taito_f3_state, init_landmakr, ROT0,   "Taito Corporation",         "Land Maker (Ver 2.02O 1998/06/02)", 0 )
    ROM_LOAD32_BYTE("e61-19.20", 0x000000, 0x80000, CRC(f92eccd0) SHA1(88e836390be1ca08c578080662d17007a9e0bcc3) )
    ROM_LOAD32_BYTE("e61-18.19", 0x000001, 0x80000, CRC(5a26c9e0) SHA1(e7f09722f6b7a459248c2c8ad0a2695365cc78dc) )
    ROM_LOAD32_BYTE("e61-17.18", 0x000002, 0x80000, CRC(710776a8) SHA1(669aa086e7a5faedd90407e558c01bf5f0869790) )
    ROM_LOAD32_BYTE("e61-16.17", 0x000003, 0x80000, CRC(b073cda9) SHA1(a8b713c3e17e431b5789a70d6f9b0e0a6b02624a) )
GAME( 1998, landmakrj,  landmakr, f3,      f3, taito_f3_state, init_landmakr, ROT0,   "Taito Corporation",         "Land Maker (Ver 2.01J 1998/06/01)", 0 )
    ROM_LOAD32_BYTE("e61-13.20", 0x000000, 0x80000, CRC(0af756a2) SHA1(2dadac6873f2491ee77703f07f00dde2aa909355) )
    ROM_LOAD32_BYTE("e61-12.19", 0x000001, 0x80000, CRC(636b3df9) SHA1(78a5bf4977bb90d710942188ce5016f3df499feb) )
    ROM_LOAD32_BYTE("e61-11.18", 0x000002, 0x80000, CRC(279a0ee4) SHA1(08380286737b33db76a79b27d0df5faba17dfb96) )
    ROM_LOAD32_BYTE("e61-10.17", 0x000003, 0x80000, CRC(daabf2b2) SHA1(dbfbe38841fc2f937052353eff1202790d364b9f) )
#endif

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

void CGame_LandMaker_A_DIR::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        // see https://qcs.shsbs.xyz/share/ywy/land-maker#shifts
        if (m_eVersionToLoad == LandMakerLoadingKey::LandMaker201)
        {
            if (m_nCurrentPaletteROMLocation <= 0x11598)
            {
                m_nCurrentPaletteROMLocation -= 0;
            } else if (m_nCurrentPaletteROMLocation <= 0x13d02)
            {
                m_nCurrentPaletteROMLocation -= 0x4C;
            } else if (m_nCurrentPaletteROMLocation <= 0x15fb0)
            {
                m_nCurrentPaletteROMLocation -= 0x3AE;
            } else if (m_nCurrentPaletteROMLocation <= 0x163b0)
            {
                m_nCurrentPaletteROMLocation -= 0x3B4;
            } else if (m_nCurrentPaletteROMLocation <= 0x91870)
            {
                m_nCurrentPaletteROMLocation -= 0x3F4;
            } else if (m_nCurrentPaletteROMLocation <= 0xa1564)
            {
                m_nCurrentPaletteROMLocation -= 0x41C;
            } else if (m_nCurrentPaletteROMLocation <= 0xa1876)
            {
                m_nCurrentPaletteROMLocation -= 0x45E;
            } else if (m_nCurrentPaletteROMLocation > 0xa1876)
            {
                m_nCurrentPaletteROMLocation -= 0x460;
            }
        }
    }
    else // LandMaker_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &m_prgCurrentExtrasLoaded[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}
