#include "StdAfx.h"
#include "Game_CFE_P.h"
#include "..\PalMod.h" // for dynamic image set reset

std::array<eIMGDat_Sections, ARRAYSIZE(CFJ_S_UNITS)> activeImageSetTable =
{
    // darkstalker
    /* Demitri */       IMGDAT_SECTION_CPS2,
    /* Anakaris */      IMGDAT_SECTION_CPS2,
    /* Felicia */       IMGDAT_SECTION_CPS2,
    /* Jedah */         IMGDAT_SECTION_CPS2,
    /* Pyron */         IMGDAT_SECTION_CPS2,

    // sf2
    /* Ryu */           IMGDAT_SECTION_CPS2,
    /* Guile */         IMGDAT_SECTION_CPS2,
    /* Zangief */       IMGDAT_SECTION_CPS2,
    /* M.Bison */       IMGDAT_SECTION_CPS2,
    /* Shin Akuma */    IMGDAT_SECTION_CPS2,

    // sf alpha
    /* Guy */           IMGDAT_SECTION_CPS2,
    /* Rose */          IMGDAT_SECTION_CPS2,
    /* Sakura */        IMGDAT_SECTION_CPS2,
    /* Karin */         IMGDAT_SECTION_CPS2,

    // sfiii
    /* Ingrid */        IMGDAT_SECTION_CPS2,    // It's in CPS2 not CPS3, but it all works out
    /* Chun-Li */       IMGDAT_SECTION_SF3,
    /* Yun */           IMGDAT_SECTION_SF3,
    /* Alex */          IMGDAT_SECTION_SF3,
    /* Urien */         IMGDAT_SECTION_SF3,

    // redearth
    /* Leo */           IMGDAT_SECTION_REDEARTH,
    /* Kenji */         IMGDAT_SECTION_REDEARTH,
    /* Hauzer */        IMGDAT_SECTION_REDEARTH,
    /* Hydron */        IMGDAT_SECTION_REDEARTH,
};

void CGame_CFE_P::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        if (m_nImgGameFlag != activeImageSetTable.at(nUnitId))
        {
            m_nImgGameFlag = activeImageSetTable.at(nUnitId);
            GetHost()->UpdateForNewImageGameFlag();
        }
    }

    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);
}

void CGame_CFJ_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        if (m_nImgGameFlag != activeImageSetTable.at(nUnitId))
        {
            m_nImgGameFlag = activeImageSetTable.at(nUnitId);
            GetHost()->UpdateForNewImageGameFlag();
        }
    }

    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);
}

BOOL CGame_CFE_P::LoadFile(CFile* LoadedFile, uint32_t nUnitId /* = 0 */)
{
    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];

        // These are already sorted, no need to redirect
        m_rgUnitRedir.at(nUnitCtr) = nUnitCtr;

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (m_rgfMustSwizzlePaletteLoad.at(nUnitCtr))
            {
                // OK, now we're to why we have an override here.
                // CFE/CFJ palette storage is striped **for some characters**
                // vertically in 4 strips of 8clr chunks, so we need to walk one 
                // chunk at a time for them.  Note that this logic is different for Steam.

                uint16_t nColorsToRead = m_nCurrentPaletteSizeInColors;
                uint16_t* pColors = new uint16_t[nColorsToRead];

                for (uint32_t nCurrentPaletteOffset = 0; nCurrentPaletteOffset < m_nCurrentPaletteSizeInColors; nCurrentPaletteOffset += 32)
                {
                    LoadedFile->Seek(m_nCurrentPaletteROMLocation + (static_cast<ULONGLONG>(nCurrentPaletteOffset) * 2), CFile::begin);
                    LoadedFile->Read(&pColors[nCurrentPaletteOffset], min(nColorsToRead, 8) * 2);
                    nColorsToRead -= min(nColorsToRead, 8);

                    if (nColorsToRead)
                    {
                        LoadedFile->Seek(m_nCurrentPaletteROMLocation + (static_cast<ULONGLONG>(nCurrentPaletteOffset) * 2) + (16 * 2), CFile::begin);
                        LoadedFile->Read(&pColors[nCurrentPaletteOffset + 8], min(nColorsToRead, 8) * 2);
                        nColorsToRead -= min(nColorsToRead, 8);
                    }

                    if (nColorsToRead)
                    {
                        LoadedFile->Seek(m_nCurrentPaletteROMLocation + (static_cast<ULONGLONG>(nCurrentPaletteOffset) * 2) + (8 * 2), CFile::begin);
                        LoadedFile->Read(&pColors[nCurrentPaletteOffset + 16], min(nColorsToRead, 8) * 2);
                        nColorsToRead -= min(nColorsToRead, 8);
                    }

                    if (nColorsToRead)
                    {
                        LoadedFile->Seek(m_nCurrentPaletteROMLocation + (static_cast<ULONGLONG>(nCurrentPaletteOffset) * 2) + (24 * 2), CFile::begin);
                        LoadedFile->Read(&pColors[nCurrentPaletteOffset + 24], min(nColorsToRead, 8) * 2);
                        nColorsToRead -= min(nColorsToRead, 8);
                    }
                }

                m_pppDataBuffer[nUnitCtr][nPalCtr] = pColors;
            }
            else // standard palette
            {
                m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];
                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
            }
        }
    }

    return TRUE;
}

BOOL CGame_CFE_P::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    uint32_t nTotalPalettesSaved = 0;

    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if (m_rgfMustSwizzlePaletteLoad.at(nUnitCtr))
                {
                    // as mentioned above:
                    // CFE/CFJ palette storage is striped vertically in 4 strips of 8clr chunks, so 
                    // we need to walk one chunk at a time
                    uint16_t nColorsToWrite = m_nCurrentPaletteSizeInColors;

                    for (uint32_t nCurrentPaletteOffset = 0; nCurrentPaletteOffset < m_nCurrentPaletteSizeInColors; nCurrentPaletteOffset += 32)
                    {
                        SaveFile->Seek(m_nCurrentPaletteROMLocation + (nCurrentPaletteOffset * 2), CFile::begin);
                        SaveFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nCurrentPaletteOffset], min(nColorsToWrite, 8) * 2);
                        nColorsToWrite -= min(nColorsToWrite, 8);

                        if (nColorsToWrite)
                        {
                            SaveFile->Seek(m_nCurrentPaletteROMLocation + (nCurrentPaletteOffset * 2) + (16 * 2), CFile::begin);
                            SaveFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nCurrentPaletteOffset + 8], min(nColorsToWrite, 8) * 2);
                            nColorsToWrite -= min(nColorsToWrite, 8);
                        }

                        if (nColorsToWrite)
                        {
                            SaveFile->Seek(m_nCurrentPaletteROMLocation + (nCurrentPaletteOffset * 2) + (8 * 2), CFile::begin);
                            SaveFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nCurrentPaletteOffset + 16], min(nColorsToWrite, 8) * 2);
                            nColorsToWrite -= min(nColorsToWrite, 8);
                        }

                        if (nColorsToWrite)
                        {
                            SaveFile->Seek(m_nCurrentPaletteROMLocation + (nCurrentPaletteOffset * 2) + (24 * 2), CFile::begin);
                            SaveFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nCurrentPaletteOffset + 24], min(nColorsToWrite, 8) * 2);
                            nColorsToWrite -= min(nColorsToWrite, 8);
                        }
                    }
                }
                else
                {
                    SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    SaveFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
                }

                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGame_CFE_P::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, m_nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

BOOL CGame_CFJ_S::LoadFile(CFile* LoadedFile, uint32_t nUnitId /* = 0 */)
{
    static bool s_fShownSadnessOnce = false;

    if (!s_fShownSadnessOnce)
    {
        s_fShownSadnessOnce = true;
        MessageBox(g_appHWnd, L"WARNING: Please note that the support for CFE/CFJ for Steam is preliminary.  You will not be able to change these palettes, just read them.",
            GetHost()->GetAppName(), MB_ICONSTOP);
    }

    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];

        // These are already sorted, no need to redirect
        m_rgUnitRedir.at(nUnitCtr) = nUnitCtr;

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            // OK, now we're to why we have an override here.
            // CFE/CFJ palette storage is striped vertically in 4 strips of 8clr chunks, so 
            // we need to walk one chunk at a time

            uint16_t nColorsToRead = m_nCurrentPaletteSizeInColors;
            uint16_t* pColors = new uint16_t[nColorsToRead];

            for (uint32_t nCurrentPaletteOffset = 0; nCurrentPaletteOffset < m_nCurrentPaletteSizeInColors; nCurrentPaletteOffset += 32)
            {
                LoadedFile->Seek(m_nCurrentPaletteROMLocation + (static_cast<ULONGLONG>(nCurrentPaletteOffset) * 2), CFile::begin);
                LoadedFile->Read(&pColors[nCurrentPaletteOffset], min(nColorsToRead, 8) * 2);
                nColorsToRead -= min(nColorsToRead, 8);

                if (nColorsToRead)
                {
                    LoadedFile->Seek(m_nCurrentPaletteROMLocation + (static_cast<ULONGLONG>(nCurrentPaletteOffset) * 2) + (16 * 2), CFile::begin);
                    LoadedFile->Read(&pColors[nCurrentPaletteOffset + 8], min(nColorsToRead, 8) * 2);
                    nColorsToRead -= min(nColorsToRead, 8);
                }

                if (nColorsToRead)
                {
                    LoadedFile->Seek(m_nCurrentPaletteROMLocation + (static_cast<ULONGLONG>(nCurrentPaletteOffset) * 2) + (8 * 2), CFile::begin);
                    LoadedFile->Read(&pColors[nCurrentPaletteOffset + 16], min(nColorsToRead, 8) * 2);
                    nColorsToRead -= min(nColorsToRead, 8);
                }

                if (nColorsToRead)
                {
                    LoadedFile->Seek(m_nCurrentPaletteROMLocation + (static_cast<ULONGLONG>(nCurrentPaletteOffset) * 2) + (24 * 2), CFile::begin);
                    LoadedFile->Read(&pColors[nCurrentPaletteOffset + 24], min(nColorsToRead, 8) * 2);
                    nColorsToRead -= min(nColorsToRead, 8);
                }
            }

            m_pppDataBuffer[nUnitCtr][nPalCtr] = pColors;
        }
    }

    return TRUE;
}

BOOL CGame_CFJ_S::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    static bool s_fShownSadnessOnce = false;

    if (!s_fShownSadnessOnce)
    {
        s_fShownSadnessOnce = true;
        MessageBox(g_appHWnd, L"As noted, this game is currently supported as read-only.  No changes will be made.",
            GetHost()->GetAppName(), MB_ICONSTOP);
    }

#ifdef ALLOW_OUTPUT
    uint32_t nTotalPalettesSaved = 0;

    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                // as mentioned above:
                // CFE/CFJ palette storage is striped vertically in 4 strips of 8clr chunks, so 
                // we need to walk one chunk at a time
                uint16_t nColorsToWrite = m_nCurrentPaletteSizeInColors;

                for (uint32_t nCurrentPaletteOffset = 0; nCurrentPaletteOffset < m_nCurrentPaletteSizeInColors; nCurrentPaletteOffset += 32)
                {
                    SaveFile->Seek(m_nCurrentPaletteROMLocation + (nCurrentPaletteOffset * 2), CFile::begin);
                    SaveFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nCurrentPaletteOffset], min(nColorsToWrite, 8) * 2);
                    nColorsToWrite -= min(nColorsToWrite, 8);

                    if (nColorsToWrite)
                    {
                        SaveFile->Seek(m_nCurrentPaletteROMLocation + (nCurrentPaletteOffset * 2) + (16 * 2), CFile::begin);
                        SaveFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nCurrentPaletteOffset + 8], min(nColorsToWrite, 8) * 2);
                        nColorsToWrite -= min(nColorsToWrite, 8);
                    }

                    if (nColorsToWrite)
                    {
                        SaveFile->Seek(m_nCurrentPaletteROMLocation + (nCurrentPaletteOffset * 2) + (8 * 2), CFile::begin);
                        SaveFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nCurrentPaletteOffset + 16], min(nColorsToWrite, 8) * 2);
                        nColorsToWrite -= min(nColorsToWrite, 8);
                    }

                    if (nColorsToWrite)
                    {
                        SaveFile->Seek(m_nCurrentPaletteROMLocation + (nCurrentPaletteOffset * 2) + (24 * 2), CFile::begin);
                        SaveFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nCurrentPaletteOffset + 24], min(nColorsToWrite, 8) * 2);
                        nColorsToWrite -= min(nColorsToWrite, 8);
                    }
                }

                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGame_CFJ_S::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, m_nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
#endif

    return FALSE;
}
