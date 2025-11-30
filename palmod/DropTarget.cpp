#include "stdafx.h"
#include "DropTarget.h"
#include "PalMod.h"
#include "GameChoice.h"

bool CPalDropTarget::_IsDataObjectFromFirefox(COleDataObject* pDataObject, bool& fIsSupportable, _In_opt_ CString* pstrFilename /*= nullptr*/)
{
    static const CLIPFORMAT s_idDesc = RegisterClipboardFormat(CFSTR_FILEDESCRIPTOR);
    static const CLIPFORMAT s_idContent = RegisterClipboardFormat(CFSTR_FILECONTENTS);

    bool fIsFromFirefox = false;

    if (pDataObject->IsDataAvailable(s_idDesc) &&
        pDataObject->IsDataAvailable(s_idContent))
    {
        FORMATETC formatDesc = { s_idDesc, 0, DVASPECT_CONTENT, -1, TYMED_HGLOBAL };
        STGMEDIUM storageDesc = {};

        CString strFileName;

        if (pDataObject->GetData(s_idDesc, &storageDesc, &formatDesc))
        {
            FILEGROUPDESCRIPTOR* pfd = reinterpret_cast<FILEGROUPDESCRIPTOR*>(GlobalLock(storageDesc.hGlobal));

            if (pfd)
            {
                if (pfd->cItems == 1)
                {
                    FILEDESCRIPTOR* pFileData = &pfd->fgd[0];

                    if ((pFileData->nFileSizeLow == 0) &&
                        (pFileData->nFileSizeHigh == 0))
                    {
                        LPCWSTR pszExtension = wcsrchr(pFileData->cFileName, L'.');

                        fIsFromFirefox = true;

                        // These are the image types we might expect from Firefox that it might convert to a temp palettized bitmap.
                        // For these and these alone we should be able to grab source from the idropobject and work with that instead.
                        // There's a larger list in OnDragEnter that covers every droppable type: this is just images from Firefox
                        if ((_wcsicmp(pszExtension, L".bmp") == 0) ||
                            (_wcsicmp(pszExtension, L".gif") == 0) ||
                            (_wcsicmp(pszExtension, L".png") == 0))
                        {
                            fIsSupportable = true;

                            if (pstrFilename)
                            {
                                wchar_t szTempPath[MAX_PATH];

                                if (GetTempPath(ARRAYSIZE(szTempPath), szTempPath))
                                {
                                    pstrFilename->Format(L"%sPMT-%s", szTempPath, pFileData->cFileName);
                                }
                            }
                        }
                        else
                        {
                            fIsSupportable = false;
                        }
                    }
                }

                GlobalUnlock(storageDesc.hGlobal);
            }
        }
    }

    return fIsFromFirefox;
}

DROPEFFECT CPalDropTarget::OnDragEnter(CWnd* pWnd, COleDataObject* pDataObject, DWORD dwKeyState, CPoint point)
{
    m_currentEffectState = DROPEFFECT_NONE;

    if (pDataObject->IsDataAvailable(CF_HDROP))
    {
        // Get the HDROP data from the data object.
        const HGLOBAL hg = pDataObject->GetGlobalData(CF_HDROP);
        bool fMightBeFirefox = false;

        if (!hg)
        {
            return DROPEFFECT_NONE;
        }

        const HDROP hDrop = static_cast<HDROP>(GlobalLock(hg));
        bool fHavePathData = false;
        wchar_t szPath[MAX_PATH] = {};

        if (hDrop)
        {
            const UINT nFilesAvailable = DragQueryFile(hDrop, 0xFFFFFFFF, nullptr, 0);

            if (nFilesAvailable == 1)
            {
                if (DragQueryFile(hDrop, 0, szPath, ARRAYSIZE(szPath)))
                {
                    fHavePathData = true;
                }
            }
            else
            {
                GetHost()->GetPalModDlg()->SetStatusText(L"We only support single-file drops, not multi-file drops.");
            }
        }

        GlobalUnlock(hg);

        if (fHavePathData)
        {
            const bool fGameIsLoaded = GetHost()->GetCurrGame();
            const SupportedGamesList gameId = fGameIsLoaded ? GetHost()->GetCurrGame()->GetGameFlag() : NUM_GAMES;

            // Handle palettes

            // It's a file: is it a file type we know about?
            // act, bmp, gif, pal, png, raw
            // 3S: txt.dat: not supported for drag and drop
            // BBCF: cfpl, hpal, some IMPLs
            // ACR: prpl
            LPCWSTR pszExtension = wcsrchr(szPath, L'.');
            CString strMessageOut;

            // allow hints for these two if they're using the right game or they could be
            const bool fAllowBBCFDrop = !fGameIsLoaded || (gameId == BlazBlueCF_S);
            const bool fAllowACRDrop = !fGameIsLoaded || (gameId == GGXXACR_S);

            if (pszExtension)
            {
                // There's a smaller list in _IsDataObjectFromFirefox that needs to mirror all image types 
                // that Firefox might hand us.
                if ((_wcsicmp(pszExtension, L".act") == 0) ||
                    (_wcsicmp(pszExtension, L".pal") == 0) ||
                    (_wcsicmp(pszExtension, L".gpl") == 0) ||
                    (_wcsicmp(pszExtension, L".hpl") == 0) ||
                    (fAllowBBCFDrop && ((_wcsicmp(pszExtension, L".cfpl") == 0) || (_wcsicmp(pszExtension, L".impl") == 0))) ||
                    (fAllowACRDrop && (_wcsicmp(pszExtension, L".prpl") == 0)))
                {
                    m_currentEffectState = DROPEFFECT_COPY;
                    strMessageOut = L"This appears to be a usable palette.";
                }
                else if (_wcsicmp(pszExtension, L".raw") == 0)
                {
                    m_currentEffectState = DROPEFFECT_COPY;
                    strMessageOut = L"This appears to be a usable preview.";
                }
                else if ((_wcsicmp(pszExtension, L".gif") == 0) ||
                         (_wcsicmp(pszExtension, L".png") == 0))
                {
                    m_currentEffectState = DROPEFFECT_COPY;
                    bool fPreviewDropIsPalette = GetHost()->GetPreviewDlg()->GetPreviewDropIsPalette();

                    if (fPreviewDropIsPalette)
                    {
                        strMessageOut = L"This appears to be a usable palette. (Update Drop Settings if you want it as a Preview.)";
                    }
                    else
                    {
                        if ((pWnd->GetSafeHwnd() == GetHost()->GetPreviewDlg()->GetSafeHwnd()))
                        {
                            strMessageOut = L"This appears to be a usable preview. (Drop on main window to use as a palette.)";
                        }
                        else
                        {
                            strMessageOut = L"This appears to be a usable palette. (Drop on Preview window to use as a preview.)";
                        }
                    }
                }
                else if (_wcsicmp(pszExtension, L".bmp") == 0)
                {
                    // Firefox does bad things as regards image drag and drop, so flag them
                    fMightBeFirefox = true;
                    m_currentEffectState = DROPEFFECT_COPY;
                    strMessageOut = L"This appears to be a usable palette.";
                }
                else if (_wcsicmp(pszExtension, L".lnk") == 0)
                {
                    strMessageOut = L"You dragged a shortcut: go to the actual file and then use that directly.";
                    m_currentEffectState = DROPEFFECT_NONE;
                }
                else if (_wcsicmp(pszExtension, L".url") == 0)
                {
                    strMessageOut = L"You dragged a URL: save the file to disk first and then use it.";
                    m_currentEffectState = DROPEFFECT_NONE;
                }
            }

            if (!strMessageOut.IsEmpty())
            {
                if (!fGameIsLoaded)
                {
                    strMessageOut = L"Load a game first! " + strMessageOut;
                    m_currentEffectState = DROPEFFECT_NONE;
                }

                GetHost()->GetPalModDlg()->SetStatusText(strMessageOut.GetString());
            }
            else if (m_currentEffectState != DROPEFFECT_COPY)
            {
                std::vector<SupportedGamesList> rgGameMatches;
                std::vector<SupportedGamesList> rgGameDirectoryMatches;

                KnownGameInfo::GetMatchingGamesFromFilePath(szPath, rgGameMatches, rgGameDirectoryMatches);

                rgGameMatches.insert(std::end(rgGameMatches), std::begin(rgGameDirectoryMatches), std::end(rgGameDirectoryMatches));

                if (rgGameMatches.size())
                {
                    m_currentEffectState = DROPEFFECT_COPY;

                    if (rgGameMatches.size() == 1)
                    {
                        strMessageOut.Format(L"We may be able to load this as '%s'.", KnownGameInfo::GetGameNameForGameID(rgGameMatches.at(0)));
                    }
                    else
                    {
                        strMessageOut.Format(L"This file may be from %u games that we know about.", static_cast<uint16_t>(rgGameMatches.size()));
                    }
                    GetHost()->GetPalModDlg()->SetStatusText(strMessageOut.GetString());
                }
                else
                {
                    GetHost()->GetPalModDlg()->SetStatusText(L"This specific file is not known.  You may want to manually load this file.");
                }
            }
        }

        if (fMightBeFirefox)
        {
            bool fIsSupportable = false;

            if (_IsDataObjectFromFirefox(pDataObject, fIsSupportable))
            {
                if (fIsSupportable)
                {
                    GetHost()->GetPalModDlg()->SetStatusText(L"Firefox is weird: will create a temp file for this.");
                }
                else
                {
                    GetHost()->GetPalModDlg()->SetStatusText(L"This is not a supported palette source.");
                    m_currentEffectState = DROPEFFECT_NONE;
                }
            }
        }
    }
    else // no hdrop data available
    {
        bool fConfirmedURL = false;

        if (pDataObject->IsDataAvailable(CF_UNICODETEXT))
        {
            HGLOBAL hg = pDataObject->GetGlobalData(CF_UNICODETEXT);
            CMemFile sf(static_cast<BYTE*>(::GlobalLock(hg)), static_cast<UINT>(::GlobalSize(hg)));

            CString buffer;
            LPWSTR str = buffer.GetBufferSetLength(static_cast<int>(::GlobalSize(hg)));
            sf.Read(str, static_cast<UINT>(::GlobalSize(hg)));
            ::GlobalUnlock(hg);

            fConfirmedURL = (_wcsnicmp(str, L"http", 4) == 0);
        }

        if (fConfirmedURL)
        {
            GetHost()->GetPalModDlg()->SetStatusText(L"You dragged a URL: save the file to disk first and then use it.");
        }
        else
        {
            // https://issues.chromium.org/issues/40083002
            GetHost()->GetPalModDlg()->SetStatusText(L"Chromium's drag and drop is broken: if you use Firefox that would have worked.");
        }
    }

    return m_currentEffectState;
}

BOOL CPalDropTarget::OnDrop(CWnd* pWnd, COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point)
{
    // This handles palette import via drag/drop: PalModDlg::OnImportPalette is the Tools menu version
    bool fHandledDrop = false;

    if (GetHost()->GetCurrGame())
    {
        bool fHaveData = false;
        bool fUsingFirefoxTempFile = false;
        bool fIsSupportable = false;
        LPCWSTR pszExtension = nullptr;
        wchar_t szPath[MAX_PATH];
        CString strFileName;

        if (_IsDataObjectFromFirefox(pDataObject, fIsSupportable, &strFileName) && fIsSupportable && strFileName.GetLength())
        {
            static const CLIPFORMAT s_idContent = RegisterClipboardFormat(CFSTR_FILECONTENTS);

            if (pDataObject->IsDataAvailable(s_idContent))
            {
                FORMATETC formatContent = { s_idContent, 0, DVASPECT_CONTENT, -1, TYMED_ISTREAM | TYMED_HGLOBAL | TYMED_ISTORAGE };
                STGMEDIUM storageContent = {};

                if (pDataObject->GetData(s_idContent, &storageContent, &formatContent))
                {
                    if (storageContent.tymed == TYMED_ISTREAM)
                    {
                        COleStreamFile streamFile(storageContent.pstm);
                        const UINT nFileSize = static_cast<UINT>(streamFile.GetLength());

                        CFile fileTemp;
                        if (fileTemp.Open(strFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
                        {
                            BYTE* pRawData = new BYTE[nFileSize];

                            if (pRawData)
                            {
                                streamFile.Read(pRawData, nFileSize);
                                fileTemp.Write(pRawData, nFileSize);

                                fHaveData = true;
                                fUsingFirefoxTempFile = true;
                                wcsncpy(szPath, strFileName.GetString(), ARRAYSIZE(szPath));

                                safe_delete_array(pRawData);
                            }

                            fileTemp.Close();
                        }

                        ReleaseStgMedium(&storageContent);
                    }
                }
            }
        }

        if (!fHaveData)
        {
            if (pDataObject->IsDataAvailable(CF_HDROP))
            {
                // Get the HDROP data from the data object.
                const HGLOBAL hg = pDataObject->GetGlobalData(CF_HDROP);

                if (hg)
                {
                    const HDROP hDrop = static_cast<HDROP>(GlobalLock(hg));

                    if (hDrop)
                    {
                        const UINT nFilesAvailable = DragQueryFile(hDrop, 0xFFFFFFFF, nullptr, 0);

                        if (nFilesAvailable == 1)
                        {
                            if (DragQueryFile(hDrop, 0, szPath, ARRAYSIZE(szPath)))
                            {
                                // we just need the filename right now: test later
                                fHaveData = true;
                            }
                        }
                    }

                    GlobalUnlock(hg);
                }
            }
        }

        if (fHaveData)
        {
            pszExtension = wcsrchr(szPath, L'.');
        }

        if (pszExtension)
        {
            // The handling code here needs to match the "acceptable drop file types" list
            // in OnDragEnter above
            if (_wcsicmp(pszExtension, L".act") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromACT(szPath);
                fHandledDrop = true;
            }
            else if (_wcsicmp(pszExtension, L".bmp") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromBMP(szPath);
                fHandledDrop = true;
            }
            else if (_wcsicmp(pszExtension, L".cfpl") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromCFPL(szPath);
                fHandledDrop = true;
            }
            else if (_wcsicmp(pszExtension, L".gif") == 0)
            {
                if ((pWnd->GetSafeHwnd() == GetHost()->GetPreviewDlg()->GetSafeHwnd()) && !GetHost()->GetPreviewDlg()->GetPreviewDropIsPalette())
                {
                    UINT nPosition = 0;
                    GetHost()->GetPreviewDlg()->LoadCustomSpriteFromPath(&nPosition, SpriteImportDirection::TopDown, szPath, true);
                    fHandledDrop = true;
                }
                else
                {
                    GetHost()->GetPalModDlg()->LoadPaletteFromGIF(szPath);
                    fHandledDrop = true;
                }
            }
            else if (_wcsicmp(pszExtension, L".gpl") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromGPL(szPath);
                fHandledDrop = true;
            }
            else if (_wcsicmp(pszExtension, L".hpl") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromHPAL(szPath);
                fHandledDrop = true;
            }
            else if (_wcsicmp(pszExtension, L".impl") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromIMPL(szPath);
                fHandledDrop = true;
            }
            else if (_wcsicmp(pszExtension, L".pal") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromPAL(szPath);
                fHandledDrop = true;
            }
            else if (_wcsicmp(pszExtension, L".png") == 0)
            {
                if ((pWnd->GetSafeHwnd() == GetHost()->GetPreviewDlg()->GetSafeHwnd()) && !GetHost()->GetPreviewDlg()->GetPreviewDropIsPalette())
                {
                    GetHost()->GetPreviewDlg()->LoadCustomSpriteFromPath(nullptr, SpriteImportDirection::TopDown, szPath, true);
                    fHandledDrop = true;
                }
                else
                {
                    GetHost()->GetPalModDlg()->LoadPaletteFromPNG(szPath);
                    fHandledDrop = true;
                }
            }
            else if (_wcsicmp(pszExtension, L".prpl") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromPRPL(szPath);
                fHandledDrop = true;
            }
            else if (_wcsicmp(pszExtension, L".raw") == 0)
            {
                UINT nPosition = 0;
                GetHost()->GetPreviewDlg()->LoadCustomSpriteFromPath(&nPosition, SpriteImportDirection::TopDown, szPath, true);
                fHandledDrop = true;
            }
        }

        if (fUsingFirefoxTempFile)
        {
            DeleteFile(szPath);
        }
    }
    
    if (!fHandledDrop)
    {
        if (pDataObject->IsDataAvailable(CF_HDROP))
        {
            // Get the HDROP data from the data object.
            const HGLOBAL hg = pDataObject->GetGlobalData(CF_HDROP);
            wchar_t szPath[MAX_PATH];
            bool fHaveData = false;

            if (hg)
            {
                const HDROP hDrop = static_cast<HDROP>(GlobalLock(hg));

                if (hDrop)
                {
                    const UINT nFilesAvailable = DragQueryFile(hDrop, 0xFFFFFFFF, nullptr, 0);

                    if (nFilesAvailable == 1)
                    {
                        if (DragQueryFile(hDrop, 0, szPath, ARRAYSIZE(szPath)))
                        {
                            // we just need the filename right now: test later
                            fHaveData = true;
                        }
                    }
                }

                GlobalUnlock(hg);
            }

            if (fHaveData)
            {
                std::vector<SupportedGamesList> rgGameFileMatches;
                std::vector<SupportedGamesList> rgGameDirectoryMatches;

                KnownGameInfo::GetMatchingGamesFromFilePath(szPath, rgGameFileMatches, rgGameDirectoryMatches);

                std::vector<SupportedGamesList> rgGameTotalMatches = rgGameFileMatches;
                rgGameTotalMatches.insert(std::end(rgGameTotalMatches), std::begin(rgGameDirectoryMatches), std::end(rgGameDirectoryMatches));

                if (rgGameTotalMatches.size())
                {
                    SupportedGamesList nGameChoice = NUM_GAMES;
                    int nUserSelection = 0;

                    if (rgGameTotalMatches.size() > 1)
                    {
                        // for normal usage, prompt the user to make a choice...
                        // UNLESS it's LastLoaded, in which case just presume.
                        SupportedGamesList nLastUsedGame = NUM_GAMES;

                        CRegProc::GetLastUsedGameFlag(nLastUsedGame);

                        for (auto& nPossibleGame : rgGameTotalMatches)
                        {
                            if (nLastUsedGame == nPossibleGame)
                            {
                                nGameChoice = nLastUsedGame;
                                break;
                            }
                        }

                        if (nGameChoice == NUM_GAMES)
                        {
                            CGameChoiceDialog choiceDialog(rgGameTotalMatches);

                            if (choiceDialog.DoModal() == IDOK)
                            {
                                nGameChoice = rgGameTotalMatches.at(choiceDialog.m_nCurrentSel);
                            }
                            else
                            {
                                nGameChoice = NUM_GAMES;
                            }
                        }
                    }
                    else
                    {
                        nGameChoice = rgGameTotalMatches.at(0);
                    }

                    if (nGameChoice != NUM_GAMES)
                    {
                        auto it = std::find(rgGameFileMatches.begin(), rgGameFileMatches.end(), nGameChoice);
                        if (it != rgGameFileMatches.end())
                        {
                            GetHost()->GetPalModDlg()->LoadGameFile(nGameChoice, szPath);
                        }
                        else
                        {
                            // need just the path
                            wchar_t* pszSlash = wcsrchr(szPath, L'\\');

                            if (pszSlash)
                            {
                                pszSlash[0] = 0;
                            }

                            GetHost()->GetPalModDlg()->LoadGameDir(nGameChoice, szPath);
                        }
                    }
                    else
                    {
                        GetHost()->GetPalModDlg()->SetStatusText(L"Load cancelled.");
                    }
                }
            }
        }
    }

    return TRUE;
}
