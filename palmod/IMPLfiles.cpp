#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "Game\BlazBlueCF_S_DEF.h"
#include "RegProc.h" // save/restore creator name

// IMPL files are BBTAG color palette files.
// It is a collection of eight 256 color BGRA palettes: exactly enough for one full character

const uint8_t k_nIMPLSignatureLength = 0x10;
const uint8_t k_nPalettesPerFile = 8;
const uint16_t k_nColorsPerPalette = 256; // An IMPL has 8 sets of 256 (1024 bytes / 4 bytes per color) colors.
const uint8_t k_nBytesPerColor = 4;
const size_t k_nColorDataSize = k_nColorsPerPalette * k_nBytesPerColor;
constexpr auto k_nInvalidGameID = 0xff;

const std::array<uint8_t, k_nIMPLSignatureLength> k_rgIMPLSignature =
{
    0x49, 0x4d, 0x50, 0x4c, 0x00, 0x00, 0x00, 0x00, // I M P L 
    0x14, 0x00, 0x00, 0x00, 0x80, 0x20, 0x00, 0x00, // header size, data size: we're going to lock to 0x2094 files for now.
};

std::map<uint32_t, uint8_t> mapBBCFSpriteIdToBBTAGGameId =
{
    // { indexBBCFSprites_AmaneNishiki,         20 },
    // { indexBBCFSprites_Arakune,               7 },
    // { indexBBCFSprites_Azrael,               22 },
    // { indexBBCFSprites_BangShishigami,        8 },
    // { indexBBCFSprites_Bullet,               21 },
    // { indexBBCFSprites_CarlClover,            9 },
    { indexBBCFSprites_CelicaAMercury,       44 },
    { indexBBCFSprites_Es,                   13 },
    { indexBBCFSprites_Hakumen,               5 },
    { indexBBCFSprites_Hazama,                7 },
    // { indexBBCFSprites_HibikiKohaku,         28 },
    // { indexBBCFSprites_IronTager,             5 },
    // { indexBBCFSprites_Izanami,              31 },
    { indexBBCFSprites_Izayoi,               10 },
    { indexBBCFSprites_JinKisaragi,           1 },
    { indexBBCFSprites_Jubei,                15 },
    // { indexBBCFSprites_KaguraMutsuki,        23 },
    // { indexBBCFSprites_Kokonoe,              24 },
    // { indexBBCFSprites_Lambda11,             27 },
    // { indexBBCFSprites_LitchiFayeLing,        6 },
    { indexBBCFSprites_MaiNatsume,           14 },
    { indexBBCFSprites_MakotoNanaya,          8 },
    // { indexBBCFSprites_Mu12,                 14 },
    { indexBBCFSprites_NaotoKurogane,        40 },
    { indexBBCFSprites_NineThePhantom,       12 },
    { indexBBCFSprites_NoelVermillion,        2 },
    { indexBBCFSprites_Nu13,                  6 },
    { indexBBCFSprites_PlatinumtheTrinity,    9 },
    { indexBBCFSprites_RachelAlucard,         3 },
    { indexBBCFSprites_RagnaTheBloodedge,     0 },
    // { indexBBCFSprites_ReliusClover,         18 },
    { indexBBCFSprites_Susanoo,              45 },
    // { indexBBCFSprites_Taokaka,               4 },
    // { indexBBCFSprites_TsubakiYayoi,         12 },
    // { indexBBCFSprites_ValkenhaynRHellsing,  16 },
    // { indexBBCFSprites_YuukiTerumi,          25 },
};

std::map<uint32_t, uint8_t> mapBBTAGSpriteIdToBBTAGGameId =
{
    { indexBBTAGSprites_Adachi,               46 },
    { indexBBTAGSprites_Aegis,                24 },
    { indexBBTAGSprites_Akatsuki,             48 },
    { indexBBTAGSprites_Akihiko,              23 },
    { indexBBTAGSprites_Azrael,               11 },
    { indexBBTAGSprites_Blake,                38 },
    { indexBBTAGSprites_Blitztank,            52 },
    { indexBBTAGSprites_Boss,                 53 },
    { indexBBTAGSprites_Carmine,              29 },
    { indexBBTAGSprites_Celica,               44 },
    { indexBBTAGSprites_Chie,                 18 },
    { indexBBTAGSprites_Elizabeth,            47 },
    { indexBBTAGSprites_Es,                   13 },
    { indexBBTAGSprites_Gordeau,              31 },
    { indexBBTAGSprites_Hakumen,              5 },
    { indexBBTAGSprites_Hazama,               7 },
    { indexBBTAGSprites_Heart,                43 },
    { indexBBTAGSprites_Hilda,                49 },
    { indexBBTAGSprites_Hyde,                 26 },
    { indexBBTAGSprites_Izayoi,               10 },
    { indexBBTAGSprites_Jin,                  1 },
    { indexBBTAGSprites_Jubei,                15 },
    { indexBBTAGSprites_Kanji,                20 },
    { indexBBTAGSprites_Labrys,               25 },
    { indexBBTAGSprites_Linne,                27 },
    { indexBBTAGSprites_Mai,                  14 },
    { indexBBTAGSprites_Makoto,               8 },
    { indexBBTAGSprites_Merkava,              32 },
    { indexBBTAGSprites_Mika,                 35 },
    { indexBBTAGSprites_Mitsuru,              22 },
    { indexBBTAGSprites_Naoto,                21 },
    { indexBBTAGSprites_NaotoKurogane,        40 },
    { indexBBTAGSprites_Neo,                  50 },
    { indexBBTAGSprites_Nine,                 12 },
    { indexBBTAGSprites_Noel,                 2 },
    { indexBBTAGSprites_Nu,                   6 },
    { indexBBTAGSprites_Orie,                 30 },
    { indexBBTAGSprites_Platinum,             9 },
    { indexBBTAGSprites_Rachel,               3 },
    { indexBBTAGSprites_Ragna,                0 },
    { indexBBTAGSprites_Ruby,                 36 },
    { indexBBTAGSprites_Seth,                 42 },
    { indexBBTAGSprites_Susanoo,              45 },
    { indexBBTAGSprites_Tager,                4 },
    { indexBBTAGSprites_Teddie,               41 },
    { indexBBTAGSprites_Vatista,              33 },
    { indexBBTAGSprites_Waldstein,            28 },
    { indexBBTAGSprites_Weiss,                37 },
    { indexBBTAGSprites_Yang,                 39 },
    { indexBBTAGSprites_Yosuke,               17 },
    { indexBBTAGSprites_Yu,                   16 },
    { indexBBTAGSprites_Yukiko,               19 },
    { indexBBTAGSprites_Yumi,                 51 },
    { indexBBTAGSprites_Yuzuriha,             34 },
};

uint32_t TranslateBBTAGGameIdToPalModBBCFSpriteId(uint8_t nGameId)
{
    for (auto it = mapBBCFSpriteIdToBBTAGGameId.begin(); it != mapBBCFSpriteIdToBBTAGGameId.end(); it++)
    {
        if (it->second == nGameId)
        {
            return it->first;
        }
    }

    OutputDebugString(L"BBTAG character specified not available in BBCF.\r\n");
    return 0;
}

uint32_t TranslateBBTAGGameIdToPalModBBTAGSpriteId(uint8_t nGameId)
{
    for (auto it = mapBBCFSpriteIdToBBTAGGameId.begin(); it != mapBBCFSpriteIdToBBTAGGameId.end(); it++)
    {
        if (it->second == nGameId)
        {
            return it->first;
        }
    }

    OutputDebugString(L"Error: invalid BBTAG ID.\r\n");
    return 0;
}

uint8_t TranslateBBCFSpriteIdToBBTAGGameId(uint32_t nSpriteId)
{
    std::map<uint32_t, uint8_t>::iterator it;

    it = mapBBCFSpriteIdToBBTAGGameId.find(nSpriteId);

    if (it != mapBBCFSpriteIdToBBTAGGameId.end())
    {
        return it->second;
    }
    else
    {
        // BBCF character not available in BBTAG
        return k_nInvalidGameID;
    }
}

class CIMPLFileImportDialog : public CDialog
{
    DECLARE_DYNAMIC(CIMPLFileImportDialog)

public:
    CIMPLFileImportDialog(std::wstring strCurrentCharacter, const std::vector<LPCWSTR> vpszColorList, int nCurrentSelection, CWnd* pParent = NULL);   // standard constructor
    virtual ~CIMPLFileImportDialog() {};

    BOOL OnInitDialog();
    afx_msg void OnUpdateCombobox();

    // Dialog Data
    enum { IDD = IDD_IMPL_IMPORT };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    DECLARE_MESSAGE_MAP()

    CComboBox m_CBColorPosition;
    std::wstring m_strCharacterName;
    std::vector<LPCWSTR> m_vstrColorOptions;

public:
    int m_nCurrentSel = 0;
};

IMPLEMENT_DYNAMIC(CIMPLFileImportDialog, CDialog)

CIMPLFileImportDialog::CIMPLFileImportDialog(std::wstring strCurrentCharacter, const std::vector<LPCWSTR> vpszColorList, int nCurrentSelection, CWnd* pParent /*=NULL*/)
    : CDialog(CIMPLFileImportDialog::IDD, pParent)
{
    m_strCharacterName = strCurrentCharacter;

    m_vstrColorOptions = vpszColorList;

    m_nCurrentSel = nCurrentSelection;
}

BOOL CIMPLFileImportDialog::OnInitDialog()
{
    CDialog::OnInitDialog();

    GetDlgItem(IDC_IMPL_CHARACTERNAME)->SetWindowText(m_strCharacterName.data());

    for (const std::wstring& strColorOption : m_vstrColorOptions)
    {
        m_CBColorPosition.AddString(strColorOption.c_str());
    }

    m_CBColorPosition.SetCurSel(m_nCurrentSel);

    UpdateData();

    return TRUE;
}

void CIMPLFileImportDialog::OnUpdateCombobox()
{
    m_nCurrentSel = m_CBColorPosition.GetCurSel();
}

void CIMPLFileImportDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_IMPL_COLOROPTIONS, m_CBColorPosition);
}

BEGIN_MESSAGE_MAP(CIMPLFileImportDialog, CDialog)
    ON_CBN_SELCHANGE(IDC_IMPL_COLOROPTIONS, &OnUpdateCombobox)
END_MESSAGE_MAP()

class CIMPLFileExportDialog : public CDialog
{
    DECLARE_DYNAMIC(CIMPLFileExportDialog)

public:
    CIMPLFileExportDialog(std::wstring strCurrentCharacter, CWnd* pParent = NULL);   // standard constructor
    ~CIMPLFileExportDialog();

    BOOL OnInitDialog();

    afx_msg void OnUpdatePalName();

    // Dialog Data
    enum { IDD = IDD_IMPL_EXPORT };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    DECLARE_MESSAGE_MAP()

    std::wstring m_strCharacterName;
    const std::wstring m_strCreatorValueName = L"pref_CreatorName";

public:
    CString m_strPaletteName;
    CString m_strCreator;
    CString m_strDescription;
};

IMPLEMENT_DYNAMIC(CIMPLFileExportDialog, CDialog)

CIMPLFileExportDialog::CIMPLFileExportDialog(std::wstring strCurrentCharacter, CWnd* pParent /*=NULL*/)
    : CDialog(CIMPLFileExportDialog::IDD, pParent)
{
    m_strCharacterName = strCurrentCharacter;
}

CIMPLFileExportDialog::~CIMPLFileExportDialog()
{
    // Store creator name preference if found
    if (m_strCreator.GetLength() > 0)
    {
        HKEY hKey = nullptr;

        if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_SET_VALUE, &hKey) == ERROR_SUCCESS)
        {
            RegSetValueEx(hKey, m_strCreatorValueName.data(), 0, REG_SZ, reinterpret_cast<const BYTE *>(m_strCreator.GetString()), static_cast<DWORD>(m_strCreator.GetLength() + 1) * sizeof(wchar_t));

            RegCloseKey(hKey);
        }
    }
}

BOOL CIMPLFileExportDialog::OnInitDialog()
{
    CDialog::OnInitDialog();

    GetDlgItem(IDC_IMPL_CHARACTERNAME)->SetWindowText(m_strCharacterName.data());

    HKEY hKey = nullptr;

    if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
    {
        DWORD dwRegType = REG_SZ;
        wchar_t szCreatorName[MAX_PATH] = {};
        DWORD cbDataSize = sizeof(szCreatorName);

        if ((RegQueryValueEx(hKey, m_strCreatorValueName.data(), 0, &dwRegType, reinterpret_cast<LPBYTE>(szCreatorName), &cbDataSize) == ERROR_SUCCESS) &&
            (dwRegType == REG_SZ))
        {
            m_strCreator = szCreatorName;
        }

        RegCloseKey(hKey);
    }

    GetDlgItem(IDC_IMPL_CREATOR)->SetWindowText(m_strCreator);

    GetDlgItem(IDOK)->EnableWindow(m_strPaletteName.GetLength());

    UpdateData();

    return TRUE;
}

void CIMPLFileExportDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Text(pDX, IDC_IMPL_PALNAME, m_strPaletteName);
    DDX_Text(pDX, IDC_IMPL_CREATOR, m_strCreator);
    DDX_Text(pDX, IDC_IMPL_DESCRIPTION, m_strDescription);
}

void CIMPLFileExportDialog::OnUpdatePalName()
{
    UpdateData();

    GetDlgItem(IDOK)->EnableWindow(m_strPaletteName.GetLength());

    UpdateData(FALSE);
}

BEGIN_MESSAGE_MAP(CIMPLFileExportDialog, CDialog)
    ON_EN_CHANGE(IDC_IMPL_PALNAME, &OnUpdatePalName)
END_MESSAGE_MAP()

bool CPalModDlg::LoadPaletteFromIMPL(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    bool fUserWantsToApply = true;
    CGameClass* CurrGame = GetHost()->GetCurrGame();

    CFile IMPLFile;
    if (IMPLFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        // IMPLs are 8340 bytes (0x2094 bytes) long.
        // There is a 32 byte header followed by a text section (32b per section) followed by
        // 8 sets of 256 ARGB colors.
        // Header:
            // 0x00-0x08 IMPL signature
            // 0x08-0x0c header length
            // 0x0c-0x10 data length
            // 0x10-0x14 character ID
            // 0x14-0x34 customized palette name
            // 0x34-0x54 optional creator name 
            // 0x54-0x94 optional description
        const size_t k_nRequiredFileSize = 0x2094;
        const uint8_t k_nIMPLHeaderLength = 0x94;

        bool fFileIsValidIMPL = false;

        // Read data from the IMPL...
        if (IMPLFile.GetLength() == k_nRequiredFileSize)
        {
            std::array<uint8_t, k_nIMPLSignatureLength> rgHeaderBytes = {};

            IMPLFile.Seek(0, CFile::begin);
            IMPLFile.Read(&rgHeaderBytes, k_nIMPLSignatureLength);
            uint8_t nMatchCount = 0;

            for (size_t nPos = 0; nPos < k_nIMPLSignatureLength; nPos++)
            {
                if (rgHeaderBytes[nPos] == k_rgIMPLSignature[nPos])
                {
                    nMatchCount++;
                }
                else
                {
                    break;
                }
            }

            if (nMatchCount == k_nIMPLSignatureLength)
            {
                fFileIsValidIMPL = true;
            }
        }

        uint16_t nCollectionIndex = 0;
        bool fCanUseCharacterAssignment = false;

        if (fFileIsValidIMPL)
        {
            uint8_t nCharacterToApplyTo = 0;
            IMPLFile.Read(&nCharacterToApplyTo, 1);

            uint32_t nSpriteId = -1;
            
            switch (GetHost()->GetCurrGame()->GetGameFlag())
            {
                case BlazBlueCF_S:
                {
                    nSpriteId = TranslateBBTAGGameIdToPalModBBCFSpriteId(nCharacterToApplyTo);

                    for (; nCollectionIndex < BlazBlueCF_S_CharacterData.size(); nCollectionIndex++)
                    {
                        if (BlazBlueCF_S_CharacterData[nCollectionIndex].nImageUnitIndex == nSpriteId)
                        {
                            fCanUseCharacterAssignment = true;
                            break;
                        }
                    }

                    break;
                }
#ifdef HAVE_BBTAG_SUPPORT
                case BlazBlueTAG_S:
                    nSpriteId = TranslateBBTAGGameIdToPalModBBTAGSpriteId(nCharacterToApplyTo);
                    break;
#endif
                default:
                    break;
            }
        }

        if (fFileIsValidIMPL && !fCanUseCharacterAssignment)
        {
            CString strError;
            if (strError.LoadString(IDS_BBGTAGBBCF_MISMATCH))
            {
                if (MessageBox(strError, GetHost()->GetAppName(), MB_ICONWARNING | MB_YESNO) == IDYES)
                {
                    nCollectionIndex = m_nPrevUnitSel;
                    fCanUseCharacterAssignment = true;
                }
                else
                {
                    fUserWantsToApply = false;
                }
            }
        }

        uint8_t nColorPositionToWriteTo = -1;

        if (fCanUseCharacterAssignment)
        {
            if (m_nPrevUnitSel == nCollectionIndex) // This character is being displayed
            {
                nColorPositionToWriteTo = m_nPrevChildSel1;
            }
            else
            {
                nColorPositionToWriteTo = 0;
            }

            if (nColorPositionToWriteTo < BlazBlueCF_S_CharacterData[nCollectionIndex].sNodeData.rgpszNodeNames.size())
            {
                CIMPLFileImportDialog implFileDialog(BlazBlueCF_S_CharacterData[nCollectionIndex].strCharacter,
                                                     BlazBlueCF_S_CharacterData[nCollectionIndex].sNodeData.rgpszNodeNames,
                                                     nColorPositionToWriteTo);

                if (implFileDialog.DoModal() == IDOK)
                {
                    nColorPositionToWriteTo = static_cast<uint8_t>(implFileDialog.m_nCurrentSel);
                }
                else
                {
                    fUserWantsToApply = false;
                }
            }
            else
            {
                fCanUseCharacterAssignment = false;
            }
        }

        if (fCanUseCharacterAssignment && fUserWantsToApply)
        {
            const uint16_t k_nStartingPaletteAdjustment = k_nPalettesPerFile * nColorPositionToWriteTo;

            std::array<uint8_t, k_nColorDataSize> rgIMPL = {};

            IMPLFile.Seek(k_nIMPLHeaderLength, CFile::begin);

            for (uint8_t nPaletteId = 0; nPaletteId < k_nPalettesPerFile; nPaletteId++)
            {
                uint8_t rgConvertedPalette[k_nColorDataSize] = {};

                IMPLFile.Read(&rgIMPL, static_cast<UINT>(rgIMPL.size()));

                for (size_t nPaletteIndex = 0; nPaletteIndex < k_nColorsPerPalette; nPaletteIndex++)
                {
                    // incoming is BGRA, so flip to be RBGA
                    rgConvertedPalette[(nPaletteIndex * 4) + 2] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgIMPL[(nPaletteIndex * k_nBytesPerColor)]);
                    rgConvertedPalette[(nPaletteIndex * 4) + 1] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgIMPL[(nPaletteIndex * k_nBytesPerColor) + 1]);
                    rgConvertedPalette[(nPaletteIndex * 4)]     = CurrGame->GetNearestLegal8BitColorValue_RGB(rgIMPL[(nPaletteIndex * k_nBytesPerColor) + 2]);
                    rgConvertedPalette[(nPaletteIndex * 4) + 3] = CurrGame->GetNearestLegal8BitColorValue_A(rgIMPL[(nPaletteIndex * k_nBytesPerColor) + 3]);
                }

                GetHost()->GetCurrGame()->WritePal(nCollectionIndex, nPaletteId + k_nStartingPaletteAdjustment, (COLORREF*)&rgConvertedPalette, k_nColorsPerPalette);
                GetHost()->GetCurrGame()->MarkPaletteDirty(nCollectionIndex, nPaletteId + k_nStartingPaletteAdjustment);
            }

            IMPLFile.Close();

            if ((m_nPrevUnitSel == nCollectionIndex) &&
                (m_nPrevChildSel1 == nColorPositionToWriteTo))
            {
                // They're currently displaying this palette: reload
                UpdateCombo(true);
            }

            // Mark the file load dirty.  We don't mark the palettes dirty-to-user as we don't have an Undo here.
            m_fFileChanged = TRUE;

            fSuccess = true;
            CString strStatus;
            strStatus.Format(IDS_IMPL_LOADED, BlazBlueCF_S_CharacterData.at(nCollectionIndex).strCharacter.c_str(), BlazBlueCF_S_CharacterData[nCollectionIndex].sNodeData.rgpszNodeNames.at(nColorPositionToWriteTo));
            SetStatusText(strStatus);
        }
    }

    if (fUserWantsToApply && !fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(IDS_IMPL_LOADFAILURE);
    }

    return fSuccess;
}

bool CPalModDlg::CurrentBBCFCharacterIsInBBTAG()
{
    return (TranslateBBCFSpriteIdToBBTAGGameId(BlazBlueCF_S_CharacterData[m_nPrevUnitSel].nImageUnitIndex) != k_nInvalidGameID);
}

void CPalModDlg::SavePaletteToIMPL(LPCWSTR pszFileName, bool& fShouldShowGenericError)
{
    CFile IMPLFile;
    bool fSuccess = false;
    fShouldShowGenericError = false;

    CIMPLFileExportDialog implFileDialog(BlazBlueCF_S_CharacterData.at(m_nPrevUnitSel).strCharacter.c_str());

    bool fShouldAllowExport = (implFileDialog.DoModal() == IDOK);

    if (fShouldAllowExport)
    {
        if (implFileDialog.m_strPaletteName.GetLength() == 0)
        {
            fShouldAllowExport = false;
            MessageBox(L"Error: Palette name is required.", GetHost()->GetAppName(), MB_ICONERROR);
        }
    }

    if (fShouldAllowExport)
    {
        if (IMPLFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
        {
            // IMPLs are 8340 bytes (0x2094 bytes) long.
            // There is a 32 byte header followed by a text section (32b per section) followed by
            // 8 sets of 256 ARGB colors.
            // Header:
                // 0x00-0x08 IMPLCF signature
                // 0x08-0x0c header length
                // 0x0c-0x10 data length
                // 0x10-0x14 character ID
                // 0x14-0x34 customized palette name
                // 0x34-0x54 optional creator name 
                // 0x54-0x94 optional description
            const UINT k_nRequiredLength = 0x20;
            const UINT k_nDescRequiredLength = 0x40;
            const std::array<BYTE, k_nDescRequiredLength> k_rgFillBytes = { };
            const uint8_t nBBFCIMId = TranslateBBCFSpriteIdToBBTAGGameId(BlazBlueCF_S_CharacterData.at(m_nPrevUnitSel).nImageUnitIndex);

            IMPLFile.Write(&k_rgIMPLSignature, static_cast<UINT>(k_rgIMPLSignature.size()));

            IMPLFile.Write(&nBBFCIMId, 1);
            IMPLFile.Write(&k_rgFillBytes, 3);

            _WriteToFileAsANSIWithForcedLength(IMPLFile, implFileDialog.m_strPaletteName, k_nRequiredLength);
            _WriteToFileAsANSIWithForcedLength(IMPLFile, implFileDialog.m_strCreator, k_nRequiredLength);
            _WriteToFileAsANSIWithForcedLength(IMPLFile, implFileDialog.m_strDescription, k_nDescRequiredLength);

            const uint16_t k_nStartingPaletteAdjustment = k_nPalettesPerFile * m_nPrevChildSel1;

            // Now write the actual palettes
            for (uint8_t nPaletteId = 0; nPaletteId < k_nPalettesPerFile; nPaletteId++)
            {
                COLORREF* rgCurrentPalette = GetHost()->GetCurrGame()->CreatePal(m_nPrevUnitSel, nPaletteId + k_nStartingPaletteAdjustment);

                for (size_t nPaletteIndex = 0; nPaletteIndex < k_nColorsPerPalette; nPaletteIndex++)
                {
                    // we store as RBGA, IMPLs want BGRA, so flip here.
                    // incoming is BGRA, so flip to be RBGA

                    uint8_t alpha = static_cast<uint8_t>((rgCurrentPalette[nPaletteIndex] & 0xFF000000) >> 24);
                    uint8_t blue =  static_cast<uint8_t>((rgCurrentPalette[nPaletteIndex] & 0x00FF0000) >> 16);
                    uint8_t green = static_cast<uint8_t>((rgCurrentPalette[nPaletteIndex] & 0x0000FF00) >> 8);
                    uint8_t red =   static_cast<uint8_t>(rgCurrentPalette[nPaletteIndex] & 0xFF);
                   
                    IMPLFile.Write(&blue, 1);
                    IMPLFile.Write(&green, 1);
                    IMPLFile.Write(&red, 1);
                    IMPLFile.Write(&alpha, 1);
                }

                delete[] rgCurrentPalette;
            }
            
            IMPLFile.Close();

            fSuccess = true;
        }
        else
        {
            fShouldShowGenericError = true;
        }
    }

    SetStatusText(fSuccess ? IDS_IMPLSAVE_SUCCESS : IDS_IMPLSAVE_FAILURE);
}
