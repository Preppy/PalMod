#include "StdAfx.h"
#include "Game_AquaPlus_S.h"

void CGame_AquaPlus_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    static AlphaMode s_amCurrent = AlphaMode::Unknown;
    AlphaMode amTarget = AlphaMode::GameDoesNotUseAlpha;

    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);

    // AquaPlus Steam uses messed up Alpha, so change to the appropriate choice per unit
    if (nUnitId != m_nCurrentExtraUnitId)
    {
        if ((wcscmp(m_sCoreGameData.psUnitData[nUnitId].szDesc, c_strMultiBroom) == 0) ||
            (wcscmp(m_sCoreGameData.psUnitData[nUnitId].szDesc, c_strSasara5A) == 0))
        {
            amTarget = AlphaMode::GameUsesVariableAlpha;
        }
    }

    if (amTarget != s_amCurrent)
    {
        SetAlphaMode(amTarget);
        s_amCurrent = amTarget;
    }
}
