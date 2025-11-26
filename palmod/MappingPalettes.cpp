#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "MappingPalettes.h"

void CMappingPaletteManager::_Reset(ColMode colorMode)
{
    m_lastColorMode = colorMode;
    m_nRedStep = m_nGreenStep = m_nBlueStep = m_fAvoidPureColors ? 1 : 0;
}

std::vector<uint32_t> CMappingPaletteManager::GetMappingPaletteSequence(ColMode colorMode, PALWriteOutputOptions alpha, uint16_t nWriteLength, uint8_t nStepLength)
{
    CGameClass* CurrGame = GetHost()->GetCurrGame();
    std::vector<uint32_t> colorMap;

    if (colorMode != m_lastColorMode)
    {
        _Reset(colorMode);
    }

    const int nPlaneLength = ColorSystem::GetPlaneAmtForColor(colorMode, ColFlag::COL_RGB);
    const int nAlphaLocation = static_cast<int>(alpha);

    for (uint32_t iWritePos = 0; iWritePos < nWriteLength; iWritePos++)
    {
        if ((iWritePos % nAlphaLocation) != 0)
        {
            const uint16_t nRedColor   = CurrGame->GetNearestLegal8BitColorValue_RGB(ColorSystem::Get8BitValueForColorStep_ByPlaneLength(colorMode, nPlaneLength, m_nRedStep));
            const uint16_t nGreenColor = CurrGame->GetNearestLegal8BitColorValue_RGB(ColorSystem::Get8BitValueForColorStep_ByPlaneLength(colorMode, nPlaneLength, m_nGreenStep));
            const uint16_t nBlueColor  = CurrGame->GetNearestLegal8BitColorValue_RGB(ColorSystem::Get8BitValueForColorStep_ByPlaneLength(colorMode, nPlaneLength, m_nBlueStep));

            const uint32_t argb888 = (0xFF << 24) | (nBlueColor << 16) | (nGreenColor << 8) | nRedColor;

            colorMap.push_back(argb888);

            m_nRedStep += nStepLength;
            if (m_nRedStep > nPlaneLength)
            {
                m_nRedStep = m_fAvoidPureColors ? 1 : 0;
                m_nGreenStep += nStepLength;
                if (m_nGreenStep > nPlaneLength)
                {
                    m_nGreenStep = m_fAvoidPureColors ? 1 : 0;
                    m_nBlueStep += nStepLength;
                    // We use >= instead of > here so that we avoid pure white
                    if (m_nBlueStep >= nPlaneLength)
                    {
                        m_nBlueStep = m_fAvoidPureColors ? 1 : 0;
                        // completely loop the table
                        m_nRedStep = m_fAvoidPureColors ? 1 : 0;
                    }
                }
            }
        }
        else
        {
            // ignored alpha value
            const uint32_t argb888 = 0xff000000;

            colorMap.push_back(argb888);
        }
    }

    return colorMap;
}

void CPalModDlg::OnMappingPaletteUse(uint8_t nStep)
{
    CGameClass* CurrGame = GetHost()->GetCurrGame();

    if (CurrGame)
    {
        sPalDef* PalDef = MainPalGroup->GetPalDef(static_cast<uint32_t>(m_nCurrSelPal));
        uint8_t* pPal = reinterpret_cast<uint8_t*>(PalDef->pPal);
        const uint16_t nPalLength = PalDef->uPalSz;
        const int nAlphaLocation = static_cast<int>(CurrGame->GetMaximumWritePerEachTransparency());

        std::vector<uint32_t> colorMap = PaletteMapper.GetMappingPaletteSequence(CurrGame->GetColorMode(), CurrGame->GetMaximumWritePerEachTransparency(), nPalLength, nStep);

        for (uint32_t iCurrentIndexInPalette = 0; iCurrentIndexInPalette < colorMap.size(); iCurrentIndexInPalette++)
        {
            if ((iCurrentIndexInPalette % nAlphaLocation) != 0)
            {
                pPal[(iCurrentIndexInPalette * 4)]     = GetRValue(colorMap.at(iCurrentIndexInPalette));
                pPal[(iCurrentIndexInPalette * 4) + 1] = GetGValue(colorMap.at(iCurrentIndexInPalette));
                pPal[(iCurrentIndexInPalette * 4) + 2] = GetBValue(colorMap.at(iCurrentIndexInPalette));
            }
        }

        ImgDispCtrl->UpdateCtrl();
        m_PalHost.UpdateAllPalCtrls();

        ProcChange();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();

        GetHost()->GetPalModDlg()->SetStatusText(L"Updated this palette to use a mapping palette.");
    }
}
