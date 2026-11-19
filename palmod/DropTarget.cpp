#include "stdafx.h"
#include "DropTarget.h"
#include "PalMod.h"
#include "Game\GameRegistry.h"
#include <cwctype> // for towlower

std::wstring GetFileNameFromURL(const std::wstring& strURL)
{
    size_t terminalChunk = strURL.find_first_of(L"?#");
    std::wstring strURLOnly = (terminalChunk == std::wstring::npos) ? strURL : strURL.substr(0, terminalChunk);

    size_t strFinalSlash = strURLOnly.find_last_of(L'/');

    if (strFinalSlash != std::wstring::npos)
    {
        return strURLOnly.substr(strFinalSlash + 1);
    }
    else
    {
        return {};
    }
}

std::wstring GetFileExtensionFromURL(const std::wstring& strURL)
{
    std::wstring strFileName = GetFileNameFromURL(strURL);

    if (!strFileName.empty())
    {
        size_t extDot = strFileName.find_last_of(L'.');

        if (extDot &&
            (extDot != std::wstring::npos) &&
            (extDot != strFileName.length()))
        {
            return strFileName.substr(extDot);
        }
    }
    
    return {};
}

bool CPalDropTarget::_IsDataObjectFromFirefox(COleDataObject* pDataObject, bool& fIsSupportable, _In_opt_ CString* pstrFilename /*= nullptr*/)
{
    static const CLIPFORMAT s_idDesc = static_cast<CLIPFORMAT>(RegisterClipboardFormat(CFSTR_FILEDESCRIPTOR));
    static const CLIPFORMAT s_idContent = static_cast<CLIPFORMAT>(RegisterClipboardFormat(CFSTR_FILECONTENTS));

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

void CPalDropTarget::_SetDropInfoFromExtension(CWnd* pWnd, LPCWSTR pszExtension, CString& strMessage, bool& fMightBeFirefox)
{
    const bool c_fGameIsLoaded = GetHost()->GetCurrGame();
    const SupportedGamesList c_gameId = c_fGameIsLoaded ? GetHost()->GetCurrGame()->GetGameFlag() : NUM_GAMES;

    const bool fPreviewDropIsPalette = GetHost()->GetPreviewDlg()->GetPreviewDropIsPalette();
    const bool fDropTargetsPreviewWindow = (pWnd->GetSafeHwnd() == GetHost()->GetPreviewDlg()->GetSafeHwnd());

    // allow hints for these two if they're using the right game or they could be
    const bool c_fAllowBBCFDrop = !c_fGameIsLoaded || (c_gameId == BlazBlueCF_S);
    const bool c_fAllowACRDrop = !c_fGameIsLoaded || (c_gameId == GGXXACR_S);

    // There's a smaller list in _IsDataObjectFromFirefox that needs to mirror all image types 
    // that Firefox might hand us.
    if ((_wcsicmp(pszExtension, L".act") == 0) ||
        (_wcsicmp(pszExtension, L".pal") == 0) ||
        (_wcsicmp(pszExtension, L".gpl") == 0) ||
        (_wcsicmp(pszExtension, L".hpl") == 0) ||
        (c_fAllowBBCFDrop && ((_wcsicmp(pszExtension, L".cfpl") == 0) || (_wcsicmp(pszExtension, L".impl") == 0))) ||
        (c_fAllowACRDrop && (_wcsicmp(pszExtension, L".prpl") == 0)))
    {
        m_currentEffectState = DROPEFFECT_COPY;
        strMessage = L"This appears to be a usable palette.";
    }
    else if (_wcsicmp(pszExtension, L".raw") == 0)
    {
        m_currentEffectState = DROPEFFECT_COPY;
        strMessage = L"This appears to be a usable preview.";
    }
    else if ((_wcsicmp(pszExtension, L".gif") == 0) ||
                (_wcsicmp(pszExtension, L".png") == 0))
    {
        m_currentEffectState = DROPEFFECT_COPY;

        if (fPreviewDropIsPalette)
        {
            strMessage = L"This appears to be a usable palette. (Update Drop Settings if you want it as a Preview.)";
        }
        else
        {
            if (fDropTargetsPreviewWindow)
            {
                strMessage = L"This appears to be a usable preview. (Drop on main window to use as a palette.)";
            }
            else
            {
                strMessage = L"This appears to be a usable palette. (Drop on Preview window to use as a preview.)";
            }
        }
    }
    else if (_wcsicmp(pszExtension, L".bmp") == 0)
    {
        // Firefox does bad things as regards image drag and drop, so flag them
        fMightBeFirefox = true;
        m_currentEffectState = DROPEFFECT_COPY;
        strMessage = L"This appears to be a usable palette.";
    }
    else if (_wcsicmp(pszExtension, L".lnk") == 0)
    {
        strMessage = L"You dragged a shortcut: go to the actual file and then use that directly.";
        m_currentEffectState = DROPEFFECT_NONE;
    }
    else if (_wcsicmp(pszExtension, L".url") == 0)
    {
        strMessage = L"You dragged a URL: save the file to disk first and then use it.";
        m_currentEffectState = DROPEFFECT_NONE;
    }
    else if ((_wcsicmp(pszExtension, L".7z") == 0) ||
            (_wcsicmp(pszExtension, L".rar") == 0) ||
            (_wcsicmp(pszExtension, L".zip") == 0))
    {
        strMessage = L"You dragged a compressed file: extract it first in order to have PalMod use it.";
        m_currentEffectState = DROPEFFECT_NONE;
    }

    // If the item is supported but requires a game to be loaded, remind them.
    if (!c_fGameIsLoaded &&
        (m_currentEffectState == DROPEFFECT_COPY))
    {
        strMessage = L"Load a game first! " + strMessage;
        m_currentEffectState = DROPEFFECT_NONE;
    }

    GetHost()->GetPalModDlg()->SetStatusText(strMessage.GetString());
}

bool HaveMultiDropSupportForThisFileType(std::wstring strDropPath)
{
    bool fHaveMultiDropSupport = false;

    std::wstring strFileNameAsLower = strDropPath;
    transform(strFileNameAsLower.begin(), strFileNameAsLower.end(), strFileNameAsLower.begin(), std::towlower);

    size_t dotPos = strFileNameAsLower.find_last_of(L'.');

    if (dotPos != std::wstring::npos)
    {
        std::wstring strExtension = strFileNameAsLower.substr(dotPos);

        if ((strExtension == L".act") || // always preview
            (strExtension == L".bmp") || // palette only at this time
            (strExtension == L".gif") || // either
            (strExtension == L".gpl") || // palette only
            (strExtension == L".pal") || // PAL RIFF: palette only
            (strExtension == L".png")) // either
        {
            fHaveMultiDropSupport = true;
        }
    }

    return fHaveMultiDropSupport;
}

DROPEFFECT CPalDropTarget::OnDragEnter(CWnd* pWnd, COleDataObject* pDataObject, DWORD /* dwKeyState */, CPoint /* point */)
{
    m_currentEffectState = DROPEFFECT_NONE;

    if (!GetHost()->GetPalModDlg()->AcceptingDropsCurrently())
    {
        GetHost()->GetPalModDlg()->SetStatusText(L"(Already in a drop operation.)");
    }
    else if (pDataObject->IsDataAvailable(CF_HDROP))
    {
        // Get the HDROP data from the data object.
        const HGLOBAL hg = pDataObject->GetGlobalData(CF_HDROP);
        bool fMightBeFirefox = false;

        if (!hg)
        {
            return DROPEFFECT_NONE;
        }

        const HDROP hDrop = static_cast<HDROP>(GlobalLock(hg));
        wchar_t szPath[MAX_PATH] = {};
        std::vector<std::wstring> rgMultiDropPaths;
        bool fHaveSinglePathData = false;

        if (hDrop)
        {
            const UINT nFilesAvailable = DragQueryFile(hDrop, 0xFFFFFFFF, nullptr, 0);

            if (nFilesAvailable == 1)
            {
                if (DragQueryFile(hDrop, 0, szPath, ARRAYSIZE(szPath)))
                {
                    fHaveSinglePathData = true;
                }
            }
            else
            {
                // We support multiple drag and drop for certain palettes (ACT, BMP, GPL, GIF, RIFF, PNG) and preview replacements (PNG, RAW) only
                for (UINT iIndex = 0; iIndex < nFilesAvailable; iIndex++)
                {
                    if (DragQueryFile(hDrop, iIndex, szPath, ARRAYSIZE(szPath)))
                    {
                        rgMultiDropPaths.push_back(szPath);
                    }
                    else
                    {
                        rgMultiDropPaths.clear();
                        break;
                    }
                }
            }
        }

        GlobalUnlock(hg);

        const bool c_fGameIsLoaded = GetHost()->GetCurrGame();

        if (fHaveSinglePathData)
        {
            // Handle palettes

            // It's a file: is it a file type we know about?
            // act, bmp, gif, pal, png, raw
            // 3S: txt.dat: not supported for drag and drop
            // BBCF: cfpl, hpal, some IMPLs
            // ACR: prpl
            LPCWSTR pszExtension = wcsrchr(szPath, L'.');
            CString strMessageOut;

            const DWORD c_nFileAttrib = GetFileAttributes(szPath);
            const bool c_fIsDirectory = (c_nFileAttrib & FILE_ATTRIBUTE_DIRECTORY);

            if (c_fIsDirectory)
            {
                strMessageOut = L"You dragged a folder: just drag the file you want from that.";
                m_currentEffectState = DROPEFFECT_NONE;
            }
            else if (pszExtension)
            {
                _SetDropInfoFromExtension(pWnd, pszExtension, strMessageOut, fMightBeFirefox);
            }

            if (strMessageOut.IsEmpty() &&
                (m_currentEffectState != DROPEFFECT_COPY))
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
        else if (rgMultiDropPaths.size())
        {
            // We allow multiple drag/drop if and only if they are potential preview replacements
            bool fCanWorkWithThis = true;

            if (fCanWorkWithThis)
            {
                for (auto& strDropPath : rgMultiDropPaths)
                {
                    if (!HaveMultiDropSupportForThisFileType(strDropPath))
                    {
                        fCanWorkWithThis = false;
                        break;
                    }
                }
            }

            if (fCanWorkWithThis)
            {
                CString strMessageOut = L"We should be able to support these as replacement options.";

                if (c_fGameIsLoaded)
                {
                    m_currentEffectState = DROPEFFECT_COPY;
                }
                else
                {
                    strMessageOut = L"Load a game first! " + strMessageOut;
                    m_currentEffectState = DROPEFFECT_NONE;
                }

                GetHost()->GetPalModDlg()->SetStatusText(strMessageOut.GetString());
            }
            else
            {
                m_currentEffectState = DROPEFFECT_NONE;
                GetHost()->GetPalModDlg()->SetStatusText(L"We only support multi-file drops for certain types (ACT, BMP, GIF, GPL, PAL, PNG, RAW).");
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

            if (fConfirmedURL)
            {
                std::wstring strExtension = GetFileExtensionFromURL(str);

                if (!strExtension.empty())
                {
                    CString strUnused;
                    bool fUnused = false;

                    // See if this appears to be something we can work with
                    _SetDropInfoFromExtension(pWnd, strExtension.c_str(), strUnused, fUnused);
                }
            }
        }

        if (m_currentEffectState == DROPEFFECT_COPY)
        {
            // we're good
        }
        else if (fConfirmedURL)
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

DROPEFFECT CPalDropTarget::OnDragOver(CWnd*, COleDataObject*, DWORD dwKeyState, CPoint)
{
    m_dwLastKeyState = dwKeyState;

    return m_currentEffectState;
}

BOOL CPalDropTarget::OnDrop(CWnd* pWnd, COleDataObject* pDataObject, DROPEFFECT /* dropEffect */, CPoint /* point */)
{
    // This handles palette/preview import via drag/drop: PalModDlg::OnImportPalette is the Tools menu version
    // It also accepts drops of supported/known game files as verified against the gameregistry information
    if (GetHost()->GetCurrGame())
    {
        bool fHaveData = false;
        bool fUsingTempFile = false;
        bool fIsSupportable = false;
        std::vector<std::wstring> rgDropPaths;
        std::wstring strURL;
        CString strFileName;

        if (_IsDataObjectFromFirefox(pDataObject, fIsSupportable, &strFileName) && fIsSupportable && strFileName.GetLength())
        {
            static const CLIPFORMAT s_idContent = static_cast<CLIPFORMAT>(RegisterClipboardFormat(CFSTR_FILECONTENTS));

            if (pDataObject->IsDataAvailable(s_idContent))
            {
                FORMATETC formatContent = { s_idContent, 0, DVASPECT_CONTENT, -1, TYMED_ISTREAM | TYMED_HGLOBAL | TYMED_ISTORAGE };
                STGMEDIUM storageContent = {};

                if (pDataObject->GetData(s_idContent, &storageContent, &formatContent))
                {
                    if (storageContent.tymed & TYMED_ISTREAM)
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
                                fUsingTempFile = true;
                                rgDropPaths.push_back(strFileName.GetString());

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
                        wchar_t szPath[MAX_PATH] = {};

                        for (UINT iIndex = 0; iIndex < nFilesAvailable; iIndex++)
                        {
                            if (DragQueryFile(hDrop, iIndex, szPath, ARRAYSIZE(szPath)))
                            {
                                rgDropPaths.push_back(szPath);
                            }
                            else
                            {
                                rgDropPaths.clear();
                                break;
                            }
                        }

                        // we just need the filename right now: test later
                        fHaveData = rgDropPaths.size();
                    }

                    GlobalUnlock(hg);
                }
            }
            else // we validate supported URLs on Enter
            {
                if (pDataObject->IsDataAvailable(CF_UNICODETEXT))
                {
                    const HGLOBAL hg = pDataObject->GetGlobalData(CF_UNICODETEXT);
                    CMemFile sf(static_cast<BYTE*>(::GlobalLock(hg)), static_cast<UINT>(::GlobalSize(hg)));

                    CString buffer;
                    LPWSTR str = buffer.GetBufferSetLength(static_cast<int>(::GlobalSize(hg)));
                    sf.Read(str, static_cast<UINT>(::GlobalSize(hg)));
                    ::GlobalUnlock(hg);

                    strURL = buffer.GetString();

                    fHaveData = true;
                }
            }
        }

        if (fHaveData)
        {
            CPalModDlg::PalModDropInformation dropInfo;

            dropInfo.rgFilePaths = rgDropPaths;
            dropInfo.strURL = strURL;
            dropInfo.fTargetingPreviewWindow = (pWnd->GetSafeHwnd() == GetHost()->GetPreviewDlg()->GetSafeHwnd());
            dropInfo.fShiftWasDown = m_dwLastKeyState & MK_SHIFT;
            dropInfo.fUsingTempFile = fUsingTempFile;

            GetHost()->GetPalModDlg()->SetDropInformation(dropInfo);
            GetHost()->GetPalModDlg()->SetStatusText(L"(Processing drop...)");
        }
    }

    return TRUE;
}
