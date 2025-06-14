#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"

void CPalModDlg::GetPlaneData()
{
    CGameClass* CurrGame = GetHost()->GetCurrGame();

    m_nRGBAmt = CurrGame->GetPlaneAmt(ColFlag::COL_RGB);
    m_nAAmt = CurrGame->GetPlaneAmt(ColFlag::COL_A);
}

void CPalModDlg::OnCBUnitChildChange()
{
    if (VerifyMsg(eVerifyType::VM_PALCHANGE))
    {
        UpdateCombo();
    }
}

void CPalModDlg::UpdateCombo(bool fForceUpdate /*= false */)
{
    CGameClass* CurrGame = GetHost()->GetCurrGame();

    if (m_fLoadUnit)
    {
        //Grab the main tree
        sDescTreeNode* UnitTree = CurrGame->GetMainTree()->GetDescTree(-1);

#if DUMP_DESCRIPTION_TREE_ON_LOAD
        // Added this in so I could see the active game tree easily.
        static SupportedGamesList s_LastDumpedGame = NUM_GAMES;

        if (s_LastDumpedGame != CurrGame->GetGameFlag())
        {
            s_LastDumpedGame = CurrGame->GetGameFlag();

            // You can dump in tree form:
            //CurrGame->GetMainTree()->DumpTree(nullptr);
            // or sorted by rom location:
            CurrGame->DumpTreeSorted();
        }
#endif

        //Clear the unit list
        while (m_CBUnitSel.DeleteString(0) >= 0) NULL;

        //Add each unit in the sorted fashion indicated by rgUnitRedir
        for (const uint32_t& nRedirIndex : CurrGame->m_rgUnitRedir)
        {
            m_CBUnitSel.AddString(reinterpret_cast<sDescTreeNode*>(UnitTree->ChildNodes)[nRedirIndex].szDesc);
        }

        //Since we just updated, set to 0
        m_CBUnitSel.SetCurSel(0);

        m_fLoadUnit = FALSE;
    }

    int nCurrUnitSel = m_CBUnitSel.GetCurSel();

    if (nCurrUnitSel == -1)
    {
        return;
    }

    if (nCurrUnitSel != m_nPrevUnitSel)
    {
        sDescTreeNode* ChildTree = CurrGame->GetMainTree()->GetDescTree(CurrGame->m_rgUnitRedir.at(nCurrUnitSel), -1);

        //Clear the 1st child list
        while (m_CBChildSel1.DeleteString(0) >= 0) NULL;

        for (uint32_t nDescCtr = 0; nDescCtr < ChildTree->uChildAmt; nDescCtr++)
        {
            m_CBChildSel1.AddString(reinterpret_cast<sDescTreeNode*>(ChildTree->ChildNodes)[nDescCtr].szDesc);
        }

        //Set to 0 since update
        m_CBChildSel1.SetCurSel(0);
        m_nPrevUnitSel = nCurrUnitSel;

        //Reset the next list
        m_nPrevChildSel1 = 0xFFFF;
    }

    int nCurrChildSel1 = m_CBChildSel1.GetCurSel();

    if (nCurrChildSel1 == -1)
    {
        return;
    }

if (nCurrChildSel1 != m_nPrevChildSel1)
{
    sDescTreeNode* ChildTree = CurrGame->GetMainTree()->GetDescTree(CurrGame->m_rgUnitRedir.at(nCurrUnitSel), nCurrChildSel1, -1);

    //Clear the 1st child list
    while (m_CBChildSel2.DeleteString(0) >= 0) { NULL; }

    for (uint32_t nDescCtr = 0; nDescCtr < ChildTree->uChildAmt; nDescCtr++)
    {
        m_CBChildSel2.AddString(reinterpret_cast<sDescNode*>(ChildTree->ChildNodes)[nDescCtr].szDesc);
    }

    //Set to 0 since update
    m_CBChildSel2.SetCurSel(0);
    m_nPrevChildSel1 = nCurrChildSel1;

    //Reset the next selection
    m_nPrevChildSel2 = 0xFFFF;
}

int nCurrChildSel2 = m_CBChildSel2.GetCurSel();

if (nCurrChildSel2 == -1)
{
    return;
}

if ((nCurrChildSel2 != m_nPrevChildSel2) || fForceUpdate)
{
    //Clear the undo data
    UndoProc.Clear();

    //Get the selected palette
    GetHost()->GetCurrGame()->UpdatePalImg(
        CurrGame->m_rgUnitRedir.at(nCurrUnitSel), nCurrChildSel1, nCurrChildSel2);

    PostPalSel();

    m_nPrevChildSel2 = nCurrChildSel2;

    //Select None
    //OnEditSelectNone();

    //Update the display palette selection
    const UINT_PTR nActivePaletteIndex = m_PalHost.GetActivePaletteIndex();

    if (m_PalHost.GetPalCtrl(nActivePaletteIndex))
    {
        OnPalSelChange(nActivePaletteIndex);
    }
    else
    {
        OnEditSelectNone();
        OnPalSelChange(0);
    }
}

sDescTreeNode* UnitTree = CurrGame->GetMainTree()->GetDescTree(CurrGame->m_rgUnitRedir.at(nCurrUnitSel), -1);
sDescTreeNode* ButtonTree = CurrGame->GetMainTree()->GetDescTree(CurrGame->m_rgUnitRedir.at(nCurrUnitSel), nCurrChildSel1, -1);
sDescNode PaletteNode = (reinterpret_cast<sDescNode*>(ButtonTree->ChildNodes))[nCurrChildSel2];

m_ToolTip.AddTool(GetDlgItem(IDC_CHARCOMBO), UnitTree->szDesc);
m_ToolTip.AddTool(GetDlgItem(IDC_CHILDCOMBO1), ButtonTree->szDesc);
m_ToolTip.AddTool(GetDlgItem(IDC_CHILDCOMBO2), PaletteNode.szDesc);
SetStatusText(PaletteNode.szDesc);
}

void SanitizeString(wchar_t* pszString)
{
    for (size_t iPos = 0; iPos < wcslen(pszString); iPos++)
    {
        if (!isalnum(pszString[iPos]) && (pszString[iPos] != L'-') && (pszString[iPos] != L'_'))
        {
            pszString[iPos] = L'_';
        }
    }
}

void CleanseButtonNodeString(const wchar_t* pszUnit, const wchar_t* pszNode, wchar_t* pszPalette)
{
    wchar_t* pszUnitNamePos = wcsstr(pszPalette, pszUnit);
    if (pszUnitNamePos)
    {
        wchar_t* pszPostUnitName = pszUnitNamePos + wcslen(pszUnit);

        if (pszPostUnitName && (pszPostUnitName[0] != L'\0'))
        {
            wchar_t* pszNodeNamePos = wcsstr(pszPostUnitName, pszNode);

            if (pszUnitNamePos && pszNodeNamePos && (pszNodeNamePos == (pszUnitNamePos + wcslen(pszUnit) + 1)))
            {
                wchar_t* pszCandidate = pszNodeNamePos + wcslen(pszNode);
                if (pszCandidate)
                {
                    if (pszCandidate[0] == L'\0')
                    {
                        // Truncate "Joe LP" to "Joe"
                        // Truncate "Main LP" to "Main"
                        if ((pszNodeNamePos - 1)[0] == L' ')
                        {
                            (pszNodeNamePos - 1)[0] = L'\0';
                        }
                    }
                    else if (!isalnum(pszCandidate[0]))
                    {
                        // Truncate "Zangief A: foo" to "foo"
                        // Truncate "Zangief A foo" to "foo"
                        wchar_t szCleansedPalette[MAX_DESCRIPTION_LENGTH] = {};

                        pszCandidate++;

                        if ((pszCandidate[0] != L'\0') && (!isalnum(pszCandidate[0])))
                        {
                            pszCandidate++;
                        }

                        wcsncpy(szCleansedPalette, pszCandidate, MAX_DESCRIPTION_LENGTH);
                        szCleansedPalette[ARRAYSIZE(szCleansedPalette) - 1] = 0;
                        wcsncpy(pszPalette, szCleansedPalette, MAX_DESCRIPTION_LENGTH);
                    }
                }
            }
        }
    }
}

bool CPalModDlg::TryFallbackImageLoad(CGameClass* CurrGame, int nPosition)
{
    // Note that used pathing is off CurrentWorkingDirectory\\Previews
    // Note that since we key off of combobox palette names at this point, we can only do this for image 0
    wchar_t szUnit[MAX_DESCRIPTION_LENGTH], szNode[MAX_DESCRIPTION_LENGTH], szPalette[MAX_DESCRIPTION_LENGTH];
    bool fLoadedImage = false;

    if (CurrGame &&
        (m_CBUnitSel.GetLBText(m_CBUnitSel.GetCurSel(), szUnit) != CB_ERR) &&
        (m_CBChildSel1.GetLBText(m_CBChildSel1.GetCurSel(), szNode) != CB_ERR) &&
        (m_CBChildSel2.GetLBText(m_CBChildSel2.GetCurSel(), szPalette) != CB_ERR))
    {
        CString strPath;

        SanitizeString(szNode);
        wcsncpy(szPalette, m_PalHost.GetPalName(nPosition), ARRAYSIZE(szPalette));
        szPalette[ARRAYSIZE(szPalette) - 1] = 0;

        if (_wcsicmp(CurrGame->GetExtraUnitDescription(), szUnit) == 0)
        {
            SanitizeString(szUnit);

            for (size_t iChar = 2; iChar < wcslen(szPalette); iChar++)
            {
                // For the purposes of finding palettes, you might have a lengthy multipalette search chunk
                // Within PalMod we break that up by appending (x/y) to [search chunk]
                // To avoid needing the user to have Y number of [search chunk].png files, we can just
                // remove that specific suffix.
                if (szPalette[iChar] == L'(')
                {
                    for (size_t iSlash = iChar + 1; iSlash < wcslen(szPalette); iSlash++)
                    {
                        if (szPalette[iSlash] == L'/')
                        {
                            if (szPalette[iChar - 1] == L' ')
                            {
                                szPalette[iChar - 1] = 0;
                            }

                            break;
                        }
                    }

                    break;
                }               
            }

            SanitizeString(szPalette);
            strPath.Format(L"previews\\%s.png", szPalette);
        }
        else
        {
            bool fIsButtonNode = false;
            SanitizeString(szUnit);

            std::vector<LPCWSTR> pButtonLabelSet = CurrGame->GetButtonDescSet();

            SanitizeString(szPalette);

            for (LPCWSTR pszButtonLabel : pButtonLabelSet)
            {
                if (_wcsicmp(pszButtonLabel, szNode) == 0)
                {
                    fIsButtonNode = true;
                    break;
                }
            }

            if (fIsButtonNode)
            {
                CleanseButtonNodeString(szUnit, szNode, szPalette);

                strPath.Format(L"previews\\%s-%s.png", szUnit, szPalette);
            }
            else
            {
                strPath.Format(L"previews\\%s-%s-%s.png", szUnit, szNode, szPalette);
            }
        }

        if (GetFileAttributes(strPath.GetBuffer()) != INVALID_FILE_ATTRIBUTES)
        {
#ifdef DEBUG
            CString strFile;
            strFile.Format(L"CPalModDlg::TryFallbackImageLoad: Loading \"%s\" to position %u\n", strPath.GetBuffer(), nPosition);
            OutputDebugString(strFile.GetBuffer());
#endif

            fLoadedImage = ImgDispCtrl->LoadExternalPNGSprite(nPosition, SpriteImportDirection::TopDown, strPath.GetBuffer(), true);
        }
    }

    return fLoadedImage;
}

void CPalModDlg::PostPalSel()
{
    static int nPrevImgIndex[MAX_IMAGES_DISPLAYABLE] = { -1, -1 };
    //Update the host palette control
    CGameClass* CurrGame = GetHost()->GetCurrGame();
    sImgDef* CurrImgDef = nullptr;
    sPalDef* CurrPalDef = nullptr;
    sPalSep* CurrSep = nullptr;

    sImgTicket* CurrTicket = CurrGame->GetImgTicket();

    uint32_t nPalAmt = MainPalGroup->GetPalAmt();
    uint32_t nPalIndexCtr = 0;
    uint32_t nImgIndexCtr = 0;
    uint32_t nCurrSepAmt = 0;

    bool fShouldKeepImageCache = false;

    StopBlink();

    //Flush the host pal ctrl
    m_PalHost.BeginSetPal();

    CPreviewDlg* PreviewDlg = GetHost()->GetPreviewDlg();

    if ((PreviewDlg != nullptr) && (CurrTicket != nullptr))
    {
        CString strInformation;
        // Friendly name would be kind of nice.
        if ((CurrTicket->nUnitId == 0xFFFF) || (CurrTicket->nUnitId == 0xFFFFFFFF) ||
            (CurrTicket->nImgId == 0xFFFF) || (CurrTicket->nImgId == 0xFFFFFFFF))
        {
            strInformation = L"Preview: (no internal preview available)";
        }
        else
        {
            strInformation.Format(L"Preview: unit 0x%02x, image id 0x%02x", CurrTicket->nUnitId, CurrTicket->nImgId);
        }
        PreviewDlg->SetWindowCaption(strInformation);
    }

    for (uint32_t nCurrentPalette = 0; nCurrentPalette < nPalAmt; nCurrentPalette++)
    {
        CurrPalDef = MainPalGroup->GetPalDef(nCurrentPalette);
        nCurrSepAmt = CurrPalDef->uSepAmt;

        ImgDispCtrl->AssignBackupPalette(CurrPalDef);

        //Fill the palette control
        for (uint32_t nSepCtr = 0; nSepCtr < nCurrSepAmt; nSepCtr++)
        {
            CurrSep = MainPalGroup->GetSep(nCurrentPalette, nSepCtr);

            m_PalHost.SetPal(nPalIndexCtr, CurrSep->nAmt, &CurrPalDef->pPal[CurrSep->nStart], CurrSep->szDesc);

            nPalIndexCtr++;
        }

        //Fill the image control
        if (ImgFile)
        {
            if (CurrTicket != nullptr)
            {
                // This is where we load our images from img.dat .
                // nUnitId is the character/palette index.
                // nImgId is the extra offset for that character.
                const int nImgKey = (static_cast<uint16_t>(CurrTicket->nUnitId) << 16) | static_cast<uint16_t>(CurrTicket->nImgId);
                static int s_nLastPalAmt = 1;
                const bool fChangingVisualLayout = (nPrevImgIndex[nImgIndexCtr] != nImgKey) || (s_nLastPalAmt != nPalAmt);

                CurrImgDef = ImgFile->GetImageDef(CurrTicket->nUnitId, CurrTicket->nImgId);

                if (fChangingVisualLayout && (nImgIndexCtr == 0))
                {
                    while (ImgDispCtrl->GetImgAmt() > static_cast<int>(nPalAmt))
                    {
                        ImgDispCtrl->FlushImageNode(ImgDispCtrl->GetImgAmt() - 1);
                    }

                    ImgDispCtrl->FlushCustomSpriteOverrides();
                }

                if (fChangingVisualLayout || m_fForceImg || (nPalAmt > 1))
                {
                    if (nImgIndexCtr == 0)
                    {
                        ImgDispCtrl->ResetImageCompositionLayout();
                    }

                    if (CurrImgDef)
                    {
                        ImgDispCtrl->AddImageNode(
                            nImgIndexCtr,
                            CurrImgDef->uImgWidth,
                            CurrImgDef->uImgHeight,
                            ImgFile->GetImgData(CurrImgDef, CurrGame->GetGameFlag(), CurrTicket->nUnitId, CurrTicket->nImgId),
                            MainPalGroup->GetPalDef(nCurrentPalette)->pPal,
                            MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz,
                            CurrTicket->nXOffs,
                            CurrTicket->nYOffs,
                            CurrTicket->nBlendMode);
                    }
                    else
                    {
                        // Set up stub nodes so that custom sprites can access the palettes
                        ImgDispCtrl->AddImageNode(
                            nImgIndexCtr,
                            0,
                            0,
                            nullptr,
                            MainPalGroup->GetPalDef(nCurrentPalette)->pPal,
                            MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz,
                            CurrTicket->nXOffs,
                            CurrTicket->nYOffs,
                            CurrTicket->nBlendMode);

                        if (TryFallbackImageLoad(CurrGame, nCurrentPalette))
                        {
                            fShouldKeepImageCache = true;
                        }
                    }
                }
                else
                {
                    // The sprite hasn't changed: just update the palette
                    ImgDispCtrl->UpdateImgPalette(
                        nImgIndexCtr,
                        MainPalGroup->GetPalDef(nCurrentPalette)->pPal,
                        MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz);

                    if (!CurrImgDef)
                    {
                        // This is a little loose, but here we're checking to see if we have anything more precise to load
                        if (TryFallbackImageLoad(CurrGame, nCurrentPalette))
                        {
                            fShouldKeepImageCache = true;
                        }
                    }
                    else
                    {
                        fShouldKeepImageCache = true;
                    }
                }

                nPrevImgIndex[nImgIndexCtr] = nImgKey;
                s_nLastPalAmt = nPalAmt;

                nImgIndexCtr++;
            }
        }

        if (CurrTicket)
        {
            CurrTicket = CurrTicket->NextTicket;
        }
    }

    //No images
    if (!nImgIndexCtr)
    {
        ImgDispCtrl->ResetImageCompositionLayout();
    }

    //Get rid of the unused images
    if (!fShouldKeepImageCache)
    {
        ImgDispCtrl->FlushUnused();
    }

    //Reset the prev indexes
    memset(&nPrevImgIndex[nImgIndexCtr], -1, sizeof(int) * (MAX_IMAGES_DISPLAYABLE - static_cast<size_t>(nImgIndexCtr)));

    m_PalHost.EndSetPal();

    //Display the palettes
    m_PalHost.UpdateCtrl();

    //Display the new images
    //ImgDispCtrl->CenterImg();
    ImgDispCtrl->UpdateCtrl();

    //Reset change flag
    ProcChange(TRUE);

    //Reset the palette focus 
    //m_PalHost.ResetNotifyPal(0);

    //If force img was set, unset it
    m_fForceImg = FALSE;
}

void CPalModDlg::OnPalSelChange(UINT_PTR nCtrlId)
{
    //Update the base palette if multi-edit
    UpdateMultiEdit();

    //Fill the current palette info
    m_nCurrSelPal = nCtrlId;
    CurrPalCtrl = m_PalHost.GetPalCtrl(m_nCurrSelPal);
    CurrPalDef = MainPalGroup->GetPalDef(MainPalGroup->GetRedir()[m_nCurrSelPal].nDefIndex);
    CurrPalSep = CurrPalDef->SepList[MainPalGroup->GetRedir()[m_nCurrSelPal].nSepIndex];
    m_nPalImgIndex = MainPalGroup->GetRedir()[m_nCurrSelPal].nDefIndex;

    UpdateSliderSel();
}

void CPalModDlg::_UpdateStatusBarWidthIfNeeded(uint32_t nPaneTwoWidth)
{
    static uint32_t s_nLastKnownWidth = 0;

    if (nPaneTwoWidth != s_nLastKnownWidth)
    {
        CRect rClient;
        GetClientRect(&rClient);

        const uint32_t c_nRightBuffer = static_cast<uint32_t>(floor(nPaneTwoWidth * GetDpiForScreen() / 96.0));
        m_StatusBar.SetPaneInfo(0, ID_INDICATOR_MAIN, 0, rClient.Width() - c_nRightBuffer);
        m_StatusBar.SetPaneInfo(1, ID_INDICATOR_EXTRA, 0, c_nRightBuffer);

        RepositionBars(AFX_IDW_CONTROLBAR_FIRST, AFX_IDW_CONTROLBAR_LAST, ID_INDICATOR_MAIN);
    }

    s_nLastKnownWidth = nPaneTwoWidth;
}

void CPalModDlg::OnPalHLChange(void* pPalCtrl, UINT_PTR nCtrlId)
{
    CJunk* pNotifyCtrl = reinterpret_cast<CJunk*>(pPalCtrl);
    int nHLAmt = pNotifyCtrl->GetHLAmt();

    _UpdateStatusBarWidthIfNeeded(55);

    if (!nHLAmt)
    {
        m_StatusBar.SetPaneText(1, L"");
    }
    else if (nHLAmt == 1)
    {
        CString strMsg;
        strMsg.Format(L"(%d: %d)", static_cast<int>(nCtrlId), pNotifyCtrl->GetHighlightIndex());

        m_StatusBar.SetPaneText(1, strMsg);
    }
    else
    {
        m_StatusBar.SetPaneText(1, L"--");
    }
}

void CPalModDlg::OnTimer(UINT_PTR nIDEvent)
{
    switch (nIDEvent)
    {
        case TIMER_STATUS:
        {
            // Why would we reset this and stomp data?
            //m_StatusBar.SetPaneText(0, DEFAULT_STATUS_TEXT);
            KillTimer(TIMER_STATUS);
            break;
        }
        case TIMER_BLINK:
        {
            PerformBlink();

            if (!m_nBlinkState)
            {
                KillTimer(TIMER_BLINK);

                m_fCanBlink = TRUE;

                safe_delete_array(m_pTempPalCopy);
            }

            ImgDispCtrl->Redraw();
            break;
        }
        default:
            break;
    }

    CDialog::OnTimer(nIDEvent);
}

void CPalModDlg::StopBlink()
{
    //Stop blinking
    m_nBlinkState = 0;
    KillTimer(TIMER_BLINK);
    m_fCanBlink = TRUE;

    safe_delete_array(m_pTempPalCopy);
}
