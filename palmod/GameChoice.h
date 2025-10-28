
class CGameChoiceDialog : public CDialog
{
    DECLARE_DYNAMIC(CGameChoiceDialog)

public:
    CGameChoiceDialog(std::vector<SupportedGamesList> rgGameMatches, CWnd* pParent = nullptr);
    virtual ~CGameChoiceDialog() {};

    BOOL OnInitDialog();
    afx_msg void OnUpdateCombobox();

    // Dialog Data
    enum { IDD = IDD_GAMECHOICE };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    DECLARE_MESSAGE_MAP()

    CComboBox m_CBGamePosition;
    std::vector<SupportedGamesList> m_rgGameMatches;

public:
    int m_nCurrentSel = 0;
};
