#include "StdAfx.h"
#include "Game_GGXXACR_S.h"
#include "..\PalMod.h"

#define GGXXACR_S_DEBUG DEFAULT_GAME_DEBUG_STATE

void CGame_GGXXACR_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassPerUnitPerFile::LoadSpecificPaletteData(nUnitId, nPalId);

    // The portrait palettes don't actually use a transparency color: we'll use this check to handle this for now.
    if (GGXXACR_S_CharacterData[nUnitId].prgBasicPalettes.empty())
    {
        createPalOptions.nTransparencyColorPosition = 257; 

    }
    else
    {
        createPalOptions.nTransparencyColorPosition = 0;
    }
}

bool CGame_GGXXACR_S::IsGGXXACRFileEncrypted(CFile* LoadedFile)
{
    bool fIsEncrypted = false;
    // check the first four bytes
    const uint32_t nuint16_tsToRead = 2;
    std::array<uint16_t, nuint16_tsToRead> prgFileStart = { 0, 0 };
    std::map<std::wstring, uint64_t> decryptedFileBytes =
    {
        { L"ab.bin", 0x20000000 },
        { L"ak.bin", 0x20000000 },
        { L"an.bin", 0x20000000 },
        { L"ax.bin", 0x20000000 },
        { L"bk.bin", 0x20000000 },
        { L"ch.bin", 0x20000000 },
        { L"dz.bin", 0x20000000 },
        { L"eab.bin", 0x20000000 },
        { L"ean.bin", 0x20000000 },
        { L"eax.bin", 0x20000000 },
        { L"ebk.bin", 0x20000000 },
        { L"ech.bin", 0x20000000 },
        { L"edz.bin", 0x20000000 },
        { L"efa.bin", 0x20000000 },
        { L"efr.bin", 0x20000000 },
        { L"ein.bin", 0x20000000 },
        { L"ejm.bin", 0x30000000 },
        { L"ejy.bin", 0x20000000 },
        { L"eky.bin", 0x10000000 },
        { L"eml.bin", 0x20000000 },
        { L"emy.bin", 0x30000000 },
        { L"epo.bin", 0x20000000 },
        { L"erk.bin", 0x20000000 },
        { L"esl.bin", 0x20000000 },
        { L"esy.bin", 0x20000000 },
        { L"ets.bin", 0x20000000 },
        { L"eve.bin", 0x30000000 },
        { L"eyy.bin", 0x20000000 },
        { L"ezp.bin", 0x20000000 },
        { L"ezt.bin", 0x20000000 },
        { L"fa.bin", 0x20000000 },
        { L"fr.bin", 0x20000000 },
        { L"in.bin", 0x20000000 },
        { L"jm.bin", 0x30000000 },
        { L"js.bin", 0x20000000 },
        { L"jy.bin", 0x20000000 },
        { L"kr.bin", 0x10000000 },
        { L"ky.bin", 0x10000000 },
        { L"ml.bin", 0x20000000 },
        { L"my.bin", 0x30000000 },
        { L"po.bin", 0x20000000 },
        { L"rk.bin", 0x20000000 },
        { L"sl.bin", 0x20000000 },
        { L"sy.bin", 0x20000000 },
        { L"ts.bin", 0x20000000 },
        { L"ve.bin", 0x30000000 },
        { L"yy.bin", 0x20000000 },
        { L"zp.bin", 0x20000000 },
        { L"zt.bin", 0x20000000 }
    };

    LoadedFile->Seek(0, CFile::begin);
    LoadedFile->Read((void*)&prgFileStart[0], nuint16_tsToRead * sizeof(uint16_t));

#if GGXXACR_S_DEBUG
    CString strByteWatch;
    OutputDebugString(L"\tByte sniff for this file: ");
    for (uint16_t nIndex = 0; nIndex < nuint16_tsToRead; nIndex++)
    {
        strByteWatch.Format(L"0x%04x, ", prgFileStart[nIndex]);
        OutputDebugString(strByteWatch);
    }
#endif

    auto thisFile = decryptedFileBytes.find(LoadedFile->GetFileName().GetString());

    if (thisFile != decryptedFileBytes.end())
    {
        fIsEncrypted = ((((thisFile->second & 0xFF000000) >> 24) != prgFileStart[0]) ||
                          (((thisFile->second & 0xFF0000) >> 16) != prgFileStart[1]));
    }

#if GGXXACR_S_DEBUG
    OutputDebugString(fIsEncrypted ? L": confirmed ENCRYPTED\n" : L": confirmed decrypted\n");
#endif
    return fIsEncrypted;
}

BOOL CGame_GGXXACR_S::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;
    
#if GGXXACR_S_DEBUG
    strInfo.Format(L"CGame_GGXXACR_S::LoadFile: Preload for file unit number %u (character %s): checking encryption state\n", nUnitNumber, GGXXACR_S_CharacterData[nUnitNumber].strCharacter.c_str());
    OutputDebugString(strInfo);
#endif
    if (!m_fIsFileSetEncrypted)
    {
        if (IsGGXXACRFileEncrypted(LoadedFile))
        {
            // They aren't using a decrypted file set...
            // Fail the load: warn one time
            m_fIsFileSetEncrypted = true;

            CString strWarning;
            if (strWarning.LoadString(IDS_ERROR_ENCRYPTED))
            {
                MessageBox(g_appHWnd, strWarning, GetHost()->GetAppName(), MB_ICONSTOP);
            }
        }
    }
    
    if (m_fIsFileSetEncrypted)
    {
        fSuccess = FALSE;
        OutputDebugString(L"\tThis fileset is encrypted: skipping.\r\n");
        rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;
    }
    else
    {
        CGameClassPerUnitPerFile::LoadFile(LoadedFile, nUnitNumber);
    }

    return fSuccess;
}
