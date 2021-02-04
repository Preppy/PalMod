#include "StdAfx.h"
#include "debugutil.h"

constexpr auto c_PalModRegistryRoot = L"Software\\knarxed\\PalMod";

CDebugHelper g_DebugHelper;

CDebugHelper::CDebugHelper()
{
    // figure out canary status here
    for (size_t iPos = 0; iPos < ARRAYSIZE(ppszKnownCanaries); iPos++)
    {
        CRegKey extraKey;

        if (extraKey.Open(HKEY_CURRENT_USER, c_PalModRegistryRoot) == ERROR_SUCCESS)
        {
            DWORD dwLastKnownValue = 0;
            CString strValueName;
            strValueName.Format(m_pczCanaryRoot, ppszKnownCanaries[iPos]);
            if (extraKey.QueryDWORDValue(strValueName.GetString(), dwLastKnownValue) == ERROR_SUCCESS)
            {
                rgfCanaryStatus[iPos] = (dwLastKnownValue != (DWORD)eCanaryState::CANARY_FREED);
            }

            if (rgfCanaryStatus[iPos])
            {
                extraKey.SetDWORDValue(strValueName.GetString(), (DWORD)eCanaryState::CANARY_TOASTED);
            }
        }
    }
}

CDebugHelper::~CDebugHelper()
{
    m_debugNotes.Abort();
}

void CDebugHelper::AddCanary(LPCWSTR pszCanaryName)
{
    if (!CanaryWasKilled(pszCanaryName))
    {
        CRegKey extraKey;

        if (extraKey.Create(HKEY_CURRENT_USER, c_PalModRegistryRoot) == ERROR_SUCCESS)
        {
            CString strValueName;
            strValueName.Format(m_pczCanaryRoot, pszCanaryName);
            extraKey.SetDWORDValue(strValueName.GetString(), (DWORD)eCanaryState::CANARY_PRESENT);
        }
    }
}

void CDebugHelper::FreeCanary(LPCWSTR pszCanaryName)
{
    if (!CanaryWasKilled(pszCanaryName))
    {
        CRegKey extraKey;

        if (extraKey.Open(HKEY_CURRENT_USER, c_PalModRegistryRoot) == ERROR_SUCCESS)
        {
            CString strValueName;
            strValueName.Format(m_pczCanaryRoot, pszCanaryName);
            extraKey.SetDWORDValue(strValueName.GetString(), (DWORD)eCanaryState::CANARY_FREED);
        }
    }
}

bool CDebugHelper::CanaryWasKilled(LPCWSTR pszCanaryName)
{
    bool fWasItKilled = false;

    for (size_t iPos = 0; iPos < ARRAYSIZE(ppszKnownCanaries); iPos++)
    {
        if (wcscmp(pszCanaryName, ppszKnownCanaries[iPos]) == 0)
        {
            return rgfCanaryStatus[iPos];
        }
    }    

    return fWasItKilled;
}

bool CDebugHelper::HaveOutputFile()
{
    if (!m_fDebugFileIsOpen)
    {
        WCHAR szPath[MAX_PATH];

        if (GetCurrentDirectory(ARRAYSIZE(szPath), szPath))
        {
            wcsncat(szPath, L".\\palmod-debug.txt", (ARRAYSIZE(szPath) - wcslen(szPath)));

            m_fDebugFileIsOpen = m_debugNotes.Open(szPath, CFile::modeWrite | CFile::typeUnicode | CFile::modeCreate);
        }
    }

    return m_fDebugFileIsOpen;
}

void CDebugHelper::DebugPrint(LPCWSTR pszCanaryName, LPCSTR pszMessage)
{
    if (CanaryWasKilled(pszCanaryName))
    {
        if (HaveOutputFile())
        {
            m_debugNotes.Write(pszMessage, (UINT)strlen(pszMessage));
        }
    }
}
