#include "StdAfx.h"
#include "Game_WakuWaku7_A.h"

BOOL CGame_WakuWaku7_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Waku uses a custom UpdatePalImg because the paired palette count varies between 4 and 5
    switch (GetCollectionCountForUnit(NodeGet->uUnitId))
    {
    case 5: // A/B/C/D/Bonus
        m_pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;
        break;
    case 6: // A/B/C/D/Dark/Bonus
    default:
        m_pButtonLabelSet = DEF_BUTTONLABEL_WAKUWAKU7_FIVE;
        break;
    }

    return CGameClassByDir::UpdatePalImg(Node01, Node02, Node03, Node04);
}
