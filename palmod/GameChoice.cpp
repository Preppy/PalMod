#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "Game\GameRegistry.h"
#include "GameChoice.h"

// This is a simple dialog just letting the user pick between multiple possible games that have been found
// found to match against a specific file name.

IMPLEMENT_DYNAMIC(CGameChoiceDialog, CDialog)

CGameChoiceDialog::CGameChoiceDialog(std::vector<SupportedGamesList> rgGameMatches, CWnd* pParent /*= nullptr*/)
    : CDialog(CGameChoiceDialog::IDD, pParent)
{
    m_rgGameMatches = rgGameMatches;

    m_nCurrentSel = 0;
}

BOOL CGameChoiceDialog::OnInitDialog()
{
    CDialog::OnInitDialog();

    for (const SupportedGamesList& nThisGame: m_rgGameMatches)
    {
        m_CBGamePosition.AddString(KnownGameInfo::GetGameNameForGameID(nThisGame));
    }

    m_CBGamePosition.SetCurSel(m_nCurrentSel);

    UpdateData();

    return TRUE;
}

void CGameChoiceDialog::OnUpdateCombobox()
{
    m_nCurrentSel = m_CBGamePosition.GetCurSel();
}

void CGameChoiceDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_GAMECHOICE_OPTIONS, m_CBGamePosition);
}

BEGIN_MESSAGE_MAP(CGameChoiceDialog, CDialog)
    ON_CBN_SELCHANGE(IDC_GAMECHOICE_OPTIONS, &OnUpdateCombobox)
END_MESSAGE_MAP()
