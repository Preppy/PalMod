#include "StdAfx.h"
#include "Game_JOJOS_A.h"

#define NEED_TO_UPDATE_JOJO_HEADERS 0

JojosLoadingKey CGame_JOJOS_A::m_eVersionToLoad = JojosLoadingKey::JOJOS_A_51_ROMKEY;

CGame_JOJOS_A::CGame_JOJOS_A(uint32_t nConfirmedROMSize, JojosLoadingKey nJojosModeToLoad /*= JojosLoadingKey::JOJOS_A_51_ROMKEY */)
{
    m_eVersionToLoad = nJojosModeToLoad;
         
    switch (m_eVersionToLoad)
    {
    case JojosLoadingKey::JOJOS_A_50_ROMKEY:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_50);
        break;
    case JojosLoadingKey::JOJOS_A_51_ROMKEY:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_51);
        break;
    case JojosLoadingKey::JOJOS_US_A_51_ROMKEY:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_51RegOn);
        break;
    case JojosLoadingKey::JOJOS_A_50_ROMKEY_RERIP:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_50Rerip);
        break;
    case JojosLoadingKey::JOJOS_A_51_ROMKEY_RERIP:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_51Rerip);
        break;
    case JojosLoadingKey::JOJOS_US_A_51_ROMKEY_RERIP:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_51RegOnRerip);
        break;
    }
}

sFileRule CGame_JOJOS_A::GetRule(uint32_t nRuleId)
{
    m_eVersionToLoad = static_cast<JojosLoadingKey>(nRuleId);
    return CGameClassByDir::GetRule(0, UseDataFor50() ? m_sFileLoadingData_50 : m_sFileLoadingData_51);
}

#if NEED_TO_UPDATE_JOJO_HEADERS
void ExportTableToDebugger()
{
    // Quick function/prototype that shows you the basic logic for exporting out a new palette for each character color
    // Update as you need
    struct sGame_PaletteExport
    {
        const std::wstring wstrPaletteName = L"uninit";
        const uint32_t nPaletteOffset = 0;
        const uint32_t nPaletteOffsetEnd = 0;
        const std::wstring wstrRest = L"uninit";
        const uint32_t nSpecialOffset = 0;
    };

    const std::vector<sGame_PaletteExport> rgJojosBaseCharacterInformation =
    {
        { L"Jotaro & Star Platinum", 0x336400, 0x336480, L"indexJojos51Jotaro" },
        { L"Kakyoin & Hierophant Green", 0x337080, 0x337100, L"indexJojos51Kakyo, 0x01"  },
        { L"Avdol & Magician's Red", 0x337d00, 0x337d80, L"indexJojos51Avdol" },
        { L"Polnareff & Silver Chariot", 0x338980, 0x338a00, L"indexJojos51Pol" },
        { L"Joseph & Hermit Purple", 0x339600, 0x339680, L"indexJojos51Joseph" },
        { L"Iggy & The Fool", 0x33a280, 0x33a300, L"indexJojos51Iggy" },
        { L"Alessi & Sethan", 0x33af00, 0x33af80, L"indexJojos51Alessi" },
        { L"Chaka", 0x33bb80, 0x33bc00, L"indexJojos51Chaka" },
        // We already have these!
        { L"Devo & Ebony Devil", 0x33c800, 0x33c880, L"indexJojos51Devo", 0x480 },
        { L"Midler & High Priestess", 0x33e100, 0x33e180, L"indexJojos51Midler" },
        { L"DIO & The World", 0x33ed80, 0x33ee00, L"indexJojos51Dio" },
        { L"Shadow DIO", 0x341300, 0x341380, L"indexJojos51SDio", 0x480 },
        { L"Young Joseph", 0x341f80, 0x342000, L"indexJojos51YSeph" },
        // unusable
        { L"Hol Horse", 0x342c00, 0x342c80, L"indexJojos51Hol" },
        { L"Vanilla Ice & Cream", 0x343880, 0x343900, L"indexJojos51VIce" },
        { L"New Kakyoin & Hierophant", 0x344500, 0x344580, L"indexJojos51NewKakyo" },
        { L"Anubis Polnareff", 0x345180, 0x345200, L"indexJojos51Anubis", 0x480 },
        { L"Petshop", 0x345e00, 0x345e80, L"indexJojos51Petshop" },
        { L"Mariah", 0x347700, 0x347780, L"indexJojos51Mariah" },
        // unused
        { L"Hol Horse & Boingo", 0x348380, 0x348400, L"indexJojos51HolBoingo" },
        { L"Rubber Soul", 0x349000, 0x349080, L"indexJojos51RSoul" },
        // garbage?        
        { L"Khan", 0x349c80, 0x349d00, L"indexJojos51Khan" },
        // B is game data, not a palette
        { L"N'Doul & Geb", 0x33d480, 0x33d500, L"indexJojos51NDoul" },
        { L"Boss Ice", 0x33fa00, 0x33fa80, L"indexJojos51BIce" },
        { L"Death 13", 0x340680, 0x340700, L"indexJojos51Death13" },
    };

    const std::vector<std::wstring> rgPossibleColors =
    {
        L"A",
        L"B",
        L"C",
        L"S",
        L"Start"
    };

    const size_t nOffsetForGCS = 0x700;
    const size_t nOffsetDeltaBetweenColors = 0x14500;

    for (size_t iCurrChar = 0; iCurrChar < rgJojosBaseCharacterInformation.size(); iCurrChar++)
    {
        for (size_t iCurrColor = 0; iCurrColor < rgPossibleColors.size(); iCurrColor++)
        {
            CString strOutput;
            CString strCurrName;
            size_t nStartingPosition = 0;
            size_t nEndingPosition = 0;

            if (rgJojosBaseCharacterInformation.at(iCurrChar).nSpecialOffset)
            {
                const size_t nTotalDelta = rgJojosBaseCharacterInformation.at(iCurrChar).nSpecialOffset + (iCurrColor * nOffsetDeltaBetweenColors);
                nStartingPosition = rgJojosBaseCharacterInformation.at(iCurrChar).nPaletteOffset + nTotalDelta;
                nEndingPosition = rgJojosBaseCharacterInformation.at(iCurrChar).nPaletteOffsetEnd + nTotalDelta;
            }
            else
            {
                const size_t nTotalDelta = nOffsetForGCS + (iCurrColor * nOffsetDeltaBetweenColors);
                nStartingPosition = rgJojosBaseCharacterInformation.at(iCurrChar).nPaletteOffset + nTotalDelta;
                nEndingPosition = rgJojosBaseCharacterInformation.at(iCurrChar).nPaletteOffsetEnd + nTotalDelta;
            }

            strCurrName.Format(L"%s %s Guard Cancel Stance", rgJojosBaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str(), rgPossibleColors.at(iCurrColor).c_str());

            strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s },\r\n", strCurrName.GetString(),
                nStartingPosition,
                nEndingPosition,
                rgJojosBaseCharacterInformation.at(iCurrChar).wstrRest.c_str());
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"\r\n");
    }
};
#endif

bool CGame_JOJOS_A::CanEnableMultispriteExport(uint32_t nUnitId, uint32_t nPalId)
{
    bool isBalanced = false;

    if (!UseDataFor50() &&
        (nUnitId != m_nCurrentExtraUnitId))
    {
        const sDescTreeNode* pUnitTree = &(JOJOS_UNITS_51[nUnitId]);

        // Only enable for character nodes
        if ((wcsstr(pUnitTree->szDesc, L"Timestop") == nullptr) &&
            (wcsstr(pUnitTree->szDesc, L"Bonus") == nullptr))
        {
            if (pUnitTree->uChildAmt >= pButtonLabelSet.size())
            {
                const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pUnitTree->ChildNodes);

                isBalanced = ((pCurrentCollection[0].uChildAmt == pCurrentCollection[1].uChildAmt) &&
                              (pCurrentCollection[0].uChildAmt == pCurrentCollection[2].uChildAmt) &&
                              (pCurrentCollection[0].uChildAmt == pCurrentCollection[3].uChildAmt) &&
                              (pCurrentCollection[0].uChildAmt == pCurrentCollection[4].uChildAmt));

                if (isBalanced)
                {
                    // We know the button nodes are balanced... but are we in a core button node?
                    isBalanced = nPalId < (pButtonLabelSet.size() * pCurrentCollection[0].uChildAmt);
                }
            }
        }
    }

    return isBalanced;
}

void CGame_JOJOS_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    uint32_t nOffset = 0;
    int cbPaletteSizeOnDisc = 0;

    if (nUnitId != m_nCurrentExtraUnitId)
    {
        uint32_t nCurrentPaletteOffset = 0;
        uint32_t nDistanceFromZero = nPalId;
        const sGame_PaletteDataset* paletteSetToUse = nullptr;

        for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
        {
            paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
            uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

            if (nDistanceFromZero < nNodeCount)
            {
                nOffset = paletteSetToUse[nDistanceFromZero].nPaletteOffset;
                m_pszCurrentPaletteName = paletteSetToUse[nDistanceFromZero].szPaletteName;
                cbPaletteSizeOnDisc = (int)max(0, (paletteSetToUse[nDistanceFromZero].nPaletteOffsetEnd - paletteSetToUse[nDistanceFromZero].nPaletteOffset));

                if ((m_eVersionToLoad == JojosLoadingKey::JOJOS_US_A_51_ROMKEY) ||
                    (m_eVersionToLoad == JojosLoadingKey::JOJOS_US_A_51_ROMKEY_RERIP))
                {
                    if ((wcscmp(JOJOS_UNITS_51[nUnitId].szDesc, k_pszTimeStopName) != 0) &&
                        (wcscmp(JOJOS_UNITS_51[nUnitId].szDesc, k_pszBonusPalettesName) != 0) &&
                        (wcscmp(JOJOS_UNITS_51[nUnitId].szDesc, k_pszStoryModeName) != 0) &&
                        (nOffset < 0x3AC380)) // only shift the core character/effect palettes, not the portraits
                    {
                        // General layout is:
                        // Jotaro A (Regulations On)
                        // 0x39bd00
                        // 0x39bd80

                        // Jotaro A(Regulations Off)
                        // 0x336400
                        // 0x336480

                        // Shift everything before Gray Fly 6.
                        // The maximum confirmed shift is for Khan's Counter Anubis Start at 0x39bba0
                        // The minimum confirmed *non*-shift is for Gray Fly 6 at 0x3AC380
                        nOffset += 0x65900;
                    }
                }
                break;
            }

            nDistanceFromZero -= nNodeCount;
        }

        m_nCurrentPaletteROMLocation = nOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }
    else //Extra Palettes
    {
        stExtraDef* pCurrDef = &m_prgCurrentExtrasLoaded[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}
