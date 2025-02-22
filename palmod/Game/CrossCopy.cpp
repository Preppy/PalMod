#include "StdAfx.h"
#include "GameLoad.h"
#include "GameRegistry.h"
#include "Game_MVC2_D.h" // for Team View
#include "Game_MVC2_P.h" // for Cross Copy
#include "..\palmod.h"

struct sDCToSteamMapEntry
{
    const std::wstring strFileName;
    const uint32_t nDreamcastOffset;
    const uint32_t nSteamOffset;
    const uint32_t nPaletteLength;
};

const std::vector<sDCToSteamMapEntry> rgDreamcastToSteamPortMap =
{
    { L"PL00_DAT.BIN", 0x0006E440, 0x082CC60, 0x00000720 }, // Ryu
    { L"PL01_DAT.BIN", 0x000c7180, 0x09049A0, 0x00000D40 }, // Zangief
    { L"PL02_DAT.BIN", 0x00082200, 0x0997A20, 0x00000720 }, // Guile
    { L"PL03_DAT.BIN", 0x000b4b00, 0x0A5D320, 0x00001780 }, // Morrigan
    { L"PL04_DAT.BIN", 0x00108b40, 0x0B77B60, 0x00000A00 }, // Anakaris
    { L"PL05_DAT.BIN", 0x000c7600, 0x0C4FE20, 0x00000720 }, // Strider Hiryu
    { L"PL06_DAT.BIN", 0x000d6760, 0x0D36F80, 0x00001280 }, // Cyclops
    { L"PL07_DAT.BIN", 0x000ea500, 0x0E32D20, 0x00000840 }, // Wolverine
    { L"PL08_DAT.BIN", 0x000f1120, 0x0F34940, 0x00000740 }, // Psylocke
    { L"PL09_DAT.BIN", 0x00da9c0, 0x10201E0, 0x00000F40 }, // Iceman
    { L"PL0A_DAT.BIN", 0x00d5c60, 0x1107480, 0x00000A40 }, // Rogue
    { L"PL0B_DAT.BIN", 0x00dd880, 0x11F58A0, 0x00000960 }, // Captain America
    { L"PL0C_DAT.BIN", 0x00c9ca0, 0x12D44C0, 0x00001300 }, // Spider-Man
    { L"PL0D_DAT.BIN", 0x00109760, 0x13EEF80, 0x00000740 }, // Hulk
    { L"PL0E_DAT.BIN", 0x00113600, 0x1512E20, 0x00000720 }, // Venom
    { L"PL0F_DAT.BIN", 0x00102220, 0x1625A40, 0x00001C00 }, // Dr.Doom
    { L"PL10_DAT.BIN", 0x00105fa0, 0x173D7C0, 0x000008A0 }, // Tron Bonne
    { L"PL11_DAT.BIN", 0x000cb320, 0x1819B40, 0x00000760 }, // Jill
    { L"PL12_DAT.BIN", 0x000ecea0, 0x19176C0, 0x000008E0 }, // Hayato
    { L"PL13_DAT.BIN", 0x000f8ce0, 0x1A20D00, 0x00000960 }, // Ruby Heart
    { L"PL14_DAT.BIN", 0x001090a0, 0x1B3A8C0, 0x00000B00 }, // SonSon
    { L"PL15_DAT.BIN", 0x001085c0, 0x1C53DE0, 0x00000760 }, // Amingo
    { L"PL16_DAT.BIN", 0x00e4600, 0x1D48E20, 0x00000720 }, // Marrow
    { L"PL17_DAT.BIN", 0x00fba00, 0x1E55220, 0x00000720 }, // Cable
    { L"PL18_DAT.BIN", 0x00db7e0, 0x1F41800, 0x00000720 }, // Abyss(Form 1)
    { L"PL19_DAT.BIN", 0x0007cd60, 0x1FCED80, 0x00000720 }, // Abyss(Form 2)
    { L"PL1A_DAT.BIN", 0x00c9580, 0x20A8DA0,  0x00000720 }, // Abyss(Form 3)
    { L"PL1B_DAT.BIN", 0x006fd00, 0x2129520,  0x00000720 }, // Chun-Li
    { L"PL1C_DAT.BIN", 0x00082900, 0x21BC920, 0x00004840 }, // Megaman
    { L"PL1D_DAT.BIN", 0x0005f5c0, 0x2230DE0, 0x00004840 }, // Roll
    { L"PL1E_DAT.BIN", 0x00074d80, 0x22BA5A0, 0x00000720 }, // Akuma
    { L"PL1F_DAT.BIN", 0x00109a80, 0x23D4AA0, 0x00000960 }, // B.B.Hood
    { L"PL20_DAT.BIN", 0x001168e0, 0x24FC100, 0x00000720 }, // Felicia
    { L"PL21_DAT.BIN", 0x0005c980, 0x25691A0, 0x00000720 }, // Charlie
    { L"PL22_DAT.BIN", 0x00b6360, 0x2630380,  0x00000a40 }, // Sakura
    { L"PL23_DAT.BIN", 0x003db40, 0x267EB60,  0x00000720 }, // Dan
    { L"PL24_DAT.BIN", 0x008f3c0, 0x271EBE0,  0x00000dc0 }, // Cammy
    { L"PL25_DAT.BIN", 0x00a5f00, 0x27D5F20,  0x00000ac0 }, // Dhalsim
    { L"PL26_DAT.BIN", 0x0074080, 0x285B0A0,  0x00000880 }, // M.Bison
    { L"PL27_DAT.BIN", 0x0075ac0, 0x28E1AE0,  0x00000720 }, // Ken
    { L"PL28_DAT.BIN", 0x00d8f20, 0x29CB740,  0x00000ac0 }, // Gambit
    { L"PL29_DAT.BIN", 0x011c040, 0x2AF8860,  0x00000e80 }, // Juggernaut
    { L"PL2A_DAT.BIN", 0x00fd8c0, 0x2C070E0,  0x00000b40 }, // Storm
    { L"PL2B_DAT.BIN", 0x00f09c0, 0x2D089E0,  0x00000720 }, // Sabretooth
    { L"PL2C_DAT.BIN", 0x00106760, 0x2E1FF80, 0x00000740 }, // Magneto
    { L"PL2D_DAT.BIN", 0x00d7d40, 0x2F08560,  0x00002c00 }, // Shuma-Gorath
    { L"PL2E_DAT.BIN", 0x00ed980, 0x30091A0,  0x00000720 }, // War Machine
    { L"PL2F_DAT.BIN", 0x010aea0, 0x3124EC0,  0x00000d00 }, // Silver Samurai
    { L"PL30_DAT.BIN", 0x00ebb40, 0x3223B60,  0x00000a20 }, // Omega Red
    { L"PL31_DAT.BIN", 0x00104c60, 0x3339480, 0x00002040 }, // Spiral
    { L"PL32_DAT.BIN", 0x00119aa0, 0x34652C0, 0x00001f00 }, // Colossus
    { L"PL33_DAT.BIN", 0x00f0b80, 0x35683A0,  0x00000760 }, // Iron Man
    { L"PL34_DAT.BIN", 0x00115820, 0x368E840, 0x00000940 }, // Sentinel
    { L"PL35_DAT.BIN", 0x001166c0, 0x37B5EE0, 0x00000e00 }, // Blackheart
    { L"PL36_DAT.BIN", 0x00ddc60, 0x38A4C80,  0x00000a20 }, // Thanos
    { L"PL37_DAT.BIN", 0x00d3c40, 0x3989460,  0x000016e0 }, // Jin
    { L"PL38_DAT.BIN", 0x00de380, 0x3A793A0,  0x00000920 }, // Captain Commando
    { L"PL39_DAT.BIN", 0x00eeae0, 0x3B78B00,  0x00000840 }, // Wolverine(Bone Claw)
    { L"PL3A_DAT.BIN", 0x00055300, 0x3BDEB20, 0x00000b80 }, // Servbot
};

bool CGameLoad::IsGameUnitMvC2TeamView(int eGameID, uint32_t nGameUnit)
{
    return (((eGameID == MVC2_D) && (nGameUnit == MVC2_D_TEAMVIEW_LOCATION)) ||
            ((eGameID == MVC2_D_16) && (nGameUnit == MVC2_D_TEAMVIEW_LOCATION)) ||
            ((eGameID == MVC2_P) && (nGameUnit == MVC2_D_TEAMVIEW_LOCATION)) ||
            ((eGameID == MVC2_S_DIR) && (nGameUnit == MVC2_D_TEAMVIEW_LOCATION)));
}

void CGameLoad::CrosscopyGame_DCPS2(CGameClass* CurrGame)
{
    CString strTargetDirectory;

    if (GetHost()->GetPalModDlg()->HaveUserPickADirectory(&strTargetDirectory))
    {
        CFile FileSave;

        nSaveLoadCount = 0;
        nSaveLoadSucc = 0;
        nSaveLoadErr = 0;

        SetGame(CurrGame->GetGameFlag());

        const uint32_t nFileAmt = CurrGame->GetFileAmt();
        CString strErrorFile;
        const bool fIsDreamcast = CurrGame->GetGameFlag() == MVC2_D;

        if (CurrGame->GetIsDir()) // just a sanity check
        {
            for (uint32_t nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
            {
                nSaveLoadCount++;

                // Ignore the virtualized team view
                if (nFileCtr != MVC2_D_TEAMVIEW_LOCATION)
                {
                    CString strLoad;
                    sFileRule CurrRule = fIsDreamcast ? CGame_MVC2_P::GetRule(nFileCtr | RULE_COUNTER_MASK) : CGame_MVC2_D::GetRuleDC(nFileCtr | RULE_COUNTER_MASK);

                    strLoad.Format(L"%s\\%s", strTargetDirectory.GetString(), CurrRule.szFileName);

                    if (FileSave.Open(strLoad, CFile::modeReadWrite | CFile::typeBinary))
                    {
                        if (CurrGame->SaveFile(&FileSave, nFileCtr))
                        {
                            nSaveLoadSucc++;
                        }
                        else
                        {
                            strErrorFile = strLoad;
                            nSaveLoadErr++;
                        }

                        if (FileSave.m_hFile != CFile::hFileNull)
                        {
                            FileSave.Abort();
                        }
                    }
                    else
                    {
                        strErrorFile = strLoad;
                        nSaveLoadErr++;
                    }
                }
                else
                {
                    // Ignore the virtual team view
                    nSaveLoadSucc++;
                }
            }
        }

        if (!strErrorFile.IsEmpty())
        {
            CString strError;
            UINT uErrorString;
            if ((GetFileAttributes(strErrorFile)) == INVALID_FILE_ATTRIBUTES)
            {
                uErrorString = IDS_ERROR_FILENOTFOUND_FORMAT;
            }
            else
            {
                uErrorString = IDS_ERROR_NOTWRITABLE_FORMAT;
            }

            strError.Format(uErrorString, strErrorFile);
            MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
        }

        CString strErrorText = L"";
        if (nSaveLoadErr)
        {
            strErrorText.Format((nSaveLoadErr == 1) ? IDS_LOADERROR_SINGLE : IDS_LOADERROR_MULTI, nSaveLoadErr);
        }

        if (nSaveLoadCount == 1)
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_SINGLE_SUCCESS, strErrorText.GetString());
        }
        else
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_MULTI_SUCCESS, nSaveLoadSucc, nSaveLoadCount, strErrorText.GetString());
        }
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_CROSSCOPY_NODIR))
        {
            strLoadSaveStr = L"<resource loading failure>";
        }
    }
}

void CGameLoad::CrosscopyGame_ToSteam(CGameClass* CurrGame)
{
    CString strQuestion;
    const SupportedGamesList eCurGame = GetHost()->GetCurrGame()->GetGameFlag();

    if (eCurGame == MVC2_D)
    {
        strQuestion = L"This copy will copy the *saved* data from your Dreamcast files to the Steam version of the ROM.\n\n";
    }
    else
    {
        strQuestion = L"This copy will copy the *saved* data from your Steam file to another copy of the Steam ROM.\n\n";
    }

    strQuestion += L"If you have not already saved/patched your data so that it can be copied, please Cancel now and Patch.\n\n"
        L"Press OK if you are ready.  You will then select the Steam ROM to copy to and the palettes will be copied over.";

    if (MessageBox(g_appHWnd, strQuestion, GetHost()->GetAppName(), MB_OKCANCEL | MB_DEFBUTTON2) == IDCANCEL)
    {
        strLoadSaveStr = L"Remember to patch so the files are ready.";
        return;
    }

    CFileDialog OpenDialog(
        TRUE,
        nullptr,
        nullptr,
        OFN_FILEMUSTEXIST | OFN_HIDEREADONLY,
        L"MvC2 For Steam|mvsc2.21D3D8A7|"
    );

    OPENFILENAME& pOFN = OpenDialog.GetOFN();

    if (OpenDialog.DoModal() == IDOK)
    {
        OPENFILENAME ofn = OpenDialog.GetOFN();
        CFile TargetFile;

        nSaveLoadCount = 0;
        nSaveLoadSucc = 0;
        nSaveLoadErr = 0;

        CString strErrorFile;

        if (CurrGame->GetIsDir() || (eCurGame == MVC2_S)) // just a sanity check
        {
            if (TargetFile.Open(ofn.lpstrFile, CFile::modeWrite | CFile::typeBinary))
            {
                if (TargetFile.GetLength() != 112635968)
                {
                    MessageBox(g_appHWnd, L"Error: This is not the expected Steam ROM.  You will need an updated version of PalMod for this.", GetHost()->GetAppName(), MB_OK | MB_ICONSTOP);
                    strLoadSaveStr = L"Invalid file specified.";
                    return;
                }

                const uint32_t nChunksToCopy = static_cast<uint32_t>(rgDreamcastToSteamPortMap.size());

                CFile SourceFile;

                if (eCurGame == MVC2_S)
                {
                    SourceFile.Open(CurrGame->GetLoadedDirOrFile(), CFile::modeRead | CFile::typeBinary);
                }

                if ((eCurGame != MVC2_S) || (SourceFile.m_hFile != CFile::hFileNull))
                {
                    for (uint32_t nFileCtr = 0; nFileCtr < nChunksToCopy; nFileCtr++)
                    {
                        nSaveLoadCount++;

                        // Ignore the virtualized team view
                        if (nFileCtr != MVC2_D_TEAMVIEW_LOCATION)
                        {
                            sFileRule CurrRule = CGame_MVC2_D::GetRuleDC(nFileCtr | RULE_COUNTER_MASK);
                            CString strSourceFile;

                            if (eCurGame != MVC2_S)
                            {
                                strSourceFile.Format(L"%s\\%s", CurrGame->GetLoadedDirPathOnly(), CurrRule.szFileName);
                            }

                            for (uint32_t nTargetUnit = 0; nTargetUnit < rgDreamcastToSteamPortMap.size(); nTargetUnit++)
                            {
                                if (_wcsicmp(rgDreamcastToSteamPortMap[nTargetUnit].strFileName.c_str(), CurrRule.szFileName) == 0)
                                {
                                    if ((eCurGame == MVC2_S) ||
                                        SourceFile.Open(strSourceFile, CFile::modeRead | CFile::typeBinary))
                                    {
                                        BYTE* pByte = new BYTE[rgDreamcastToSteamPortMap[nTargetUnit].nPaletteLength];

                                        if (eCurGame == MVC2_S)
                                        {
                                            SourceFile.Seek(rgDreamcastToSteamPortMap[nTargetUnit].nSteamOffset, CFile::begin);
                                        }
                                        else
                                        {
                                            SourceFile.Seek(rgDreamcastToSteamPortMap[nTargetUnit].nDreamcastOffset, CFile::begin);
                                        }

                                        SourceFile.Read(pByte, rgDreamcastToSteamPortMap[nTargetUnit].nPaletteLength);

                                        if (eCurGame != MVC2_S)
                                        {
                                            SourceFile.Abort();
                                        }

                                        TargetFile.Seek(rgDreamcastToSteamPortMap[nTargetUnit].nSteamOffset, CFile::begin);
                                        TargetFile.Write(pByte, rgDreamcastToSteamPortMap[nTargetUnit].nPaletteLength);

                                        safe_delete_array(pByte);

                                        nSaveLoadSucc++;
                                    }
                                    else
                                    {
                                        strErrorFile = strSourceFile;
                                        nSaveLoadErr++;
                                    }
                                    break;
                                }
                            }
                        }
                        else
                        {
                            // Ignore the virtual team view
                            nSaveLoadSucc++;
                        }
                    }
                }

                if (SourceFile.m_hFile != CFile::hFileNull)
                {
                    SourceFile.Abort();
                }
            }
            else
            {
                strErrorFile = ofn.lpstrFile;
                nSaveLoadErr++;
            }

            if (TargetFile.m_hFile != CFile::hFileNull)
            {
                TargetFile.Abort();
            }
        }

        if (!strErrorFile.IsEmpty())
        {
            CString strError;
            UINT uErrorString;
            if ((GetFileAttributes(strErrorFile)) == INVALID_FILE_ATTRIBUTES)
            {
                uErrorString = IDS_ERROR_FILENOTFOUND_FORMAT;
            }
            else
            {
                uErrorString = IDS_ERROR_NOTWRITABLE_FORMAT;
            }

            strError.Format(uErrorString, strErrorFile);
            MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
        }

        CString strErrorText = L"";
        if (nSaveLoadErr)
        {
            strErrorText.Format((nSaveLoadErr == 1) ? IDS_LOADERROR_SINGLE : IDS_LOADERROR_MULTI, nSaveLoadErr);
        }

        if (nSaveLoadCount == 1)
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_SINGLE_SUCCESS, strErrorText.GetString());
        }
        else
        {
            if ((nSaveLoadCount == 0) && (nSaveLoadErr == 0))
            {
                strErrorText = L".  Target file could not be opened";
            }

            strLoadSaveStr.Format(IDS_CROSSCOPY_MULTI_SUCCESS, nSaveLoadSucc, nSaveLoadCount, strErrorText.GetString());
        }
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_CROSSCOPY_NODIR))
        {
            strLoadSaveStr = L"<resource loading failure>";
        }
    }
}

void CGameLoad::CrosscopyGame_SteamToDC(CGameClass* CurrGame)
{
    const SupportedGamesList eCurGame = GetHost()->GetCurrGame()->GetGameFlag();

    CString strQuestion = L"This will copy the *saved* data from your Steam file to your Dreamcast files.\n\n";
    strQuestion += L"If you have not already saved/patched your data so that it can be copied, please Cancel now and Patch.\n\n"
        L"Press OK if you are ready.  You will then select the folder containing your Dreamcast files to copy to "
        L"and the palettes will be copied over.";

    if (MessageBox(g_appHWnd, strQuestion, GetHost()->GetAppName(), MB_OKCANCEL | MB_DEFBUTTON2) == IDCANCEL)
    {
        strLoadSaveStr = L"Remember to patch so the files are ready.";
        return;
    }

    CString strTargetDirectory;

    if (GetHost()->GetPalModDlg()->HaveUserPickADirectory(&strTargetDirectory))
    {
        nSaveLoadCount = 0;
        nSaveLoadSucc = 0;
        nSaveLoadErr = 0;

        // this tracks the last file that failed
        CString strErrorFile;

        for (auto& item : rgDreamcastToSteamPortMap)
        {
            // We don't have to worry about TeamView because we're walking the map directly
            nSaveLoadCount++;

            CFile SourceFile;
            CString strCurrentSource;

            if (CurrGame->GetGameFlag() == MVC2_S)
            {
                strCurrentSource = CurrGame->GetLoadedDirOrFile();
            }
            else
            {
                strCurrentSource.Format(L"%s\\%s", CurrGame->GetLoadedDirOrFile(), item.strFileName.c_str());
            }

            if (SourceFile.Open(strCurrentSource, CFile::modeReadWrite | CFile::typeBinary))
            {
                CFile DestinationFile;
                CString strDestinationFile;

                strDestinationFile.Format(L"%s\\%s", strTargetDirectory.GetString(), item.strFileName.c_str());

                if (DestinationFile.Open(strDestinationFile, CFile::modeReadWrite | CFile::typeBinary))
                {
                    BYTE* pByte = new BYTE[item.nPaletteLength];
                    uint32_t nDreamcastPalOffset = 0;
                    uint32_t nSteamPalOffset = 0;

                    if (CurrGame->GetGameFlag() == MVC2_S_DIR)
                    {
                        // get the actual location from the PAL
                        SourceFile.Seek(0x08, CFile::begin);
                        SourceFile.Read(&nSteamPalOffset, sizeof(nSteamPalOffset));
                    }
                    else
                    {
                        // ... deal with the assembled archive offsets
                        nSteamPalOffset = item.nSteamOffset;
                    }

                    DestinationFile.Seek(0x08, CFile::begin);
                    DestinationFile.Read(&nDreamcastPalOffset, sizeof(nDreamcastPalOffset));

                    if (nDreamcastPalOffset == item.nDreamcastOffset)
                    {
                        SourceFile.Seek(nSteamPalOffset, CFile::begin);
                        SourceFile.Read(pByte, item.nPaletteLength);
                        DestinationFile.Seek(item.nDreamcastOffset, CFile::begin);
                        DestinationFile.Write(pByte, item.nPaletteLength);

                        nSaveLoadSucc++;
                    }
                    else
                    {
                        // if we're here, that means that the destination offset was different.
                        // that will for example happen with the 16 color marvel files
                        // we can handle this if we want to by accounting for the palette length differential
                        // without that, we'd be doing very bad things if we used the dc-6 lengths
                        strErrorFile = strDestinationFile;
                        nSaveLoadErr++;
                    }

                    safe_delete_array(pByte);
                    if (DestinationFile.m_hFile != CFile::hFileNull)
                    {
                        DestinationFile.Abort();
                    }
                    else
                    {
                        strErrorFile = strDestinationFile;
                        nSaveLoadErr++;
                    }
                }

                if (SourceFile.m_hFile != CFile::hFileNull)
                {
                    SourceFile.Abort();
                }
            }
            else
            {
                strErrorFile = strCurrentSource;
                nSaveLoadErr++;
            }
        }

        if (!strErrorFile.IsEmpty())
        {
            // Note that we show a janky "unwritable" error for 16 color DC files for now
            CString strError;
            UINT uErrorString;
            if ((GetFileAttributes(strErrorFile)) == INVALID_FILE_ATTRIBUTES)
            {
                uErrorString = IDS_ERROR_FILENOTFOUND_FORMAT;
            }
            else
            {
                uErrorString = IDS_ERROR_NOTWRITABLE_FORMAT;
            }

            strError.Format(uErrorString, strErrorFile);
            MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
        }

        CString strErrorText = L"";
        if (nSaveLoadErr)
        {
            strErrorText.Format((nSaveLoadErr == 1) ? IDS_LOADERROR_SINGLE : IDS_LOADERROR_MULTI, nSaveLoadErr);
        }

        if (nSaveLoadCount == 1)
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_SINGLE_SUCCESS, strErrorText.GetString());
        }
        else
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_MULTI_SUCCESS, nSaveLoadSucc, nSaveLoadCount, strErrorText.GetString());
        }
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_CROSSCOPY_NODIR))
        {
            strLoadSaveStr = L"<resource loading failure>";
        }
    }
}
