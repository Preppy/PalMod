#pragma once

#define k_ContextMenuCopyCanary L"ContextCopy"

const LPCWSTR ppszKnownCanaries[] =
{
    k_ContextMenuCopyCanary,
};

class CDebugHelper
{
public:
    CDebugHelper();
    ~CDebugHelper();

    void AddCanary(LPCWSTR pszCanaryName);
    void FreeCanary(LPCWSTR pszCanaryName);

    void DebugPrint(LPCWSTR pszOwningCanary, LPCSTR pszMessage);

private:
    LPCWSTR m_pczCanaryRoot = L"debugCanary_%s";

    bool CanaryWasKilled(LPCWSTR pszCanaryName);
    bool HaveOutputFile();

    enum class eCanaryState
    {
        CANARY_FREED,
        CANARY_PRESENT,
        CANARY_TOASTED,
    };

    CFile m_debugNotes;
    bool m_fDebugFileIsOpen = false;
    bool rgfCanaryStatus[ARRAYSIZE(ppszKnownCanaries)] = { false };
};

extern CDebugHelper g_DebugHelper;
