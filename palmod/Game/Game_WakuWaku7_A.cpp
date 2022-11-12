#include "StdAfx.h"
#include "Game_WakuWaku7_A.h"

uint32_t CGame_WakuWaku7_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        // Waku Waku 7 variants...
        { L"Waku Waku 7 (Neo-Geo)", L"225-p1.p1", 0xb14da766, 0 },
        { L"Waku Waku 7 (Neo-Geo Boss Hack)", L"225-p1bh.p1", 0x0b7a3776, 0 },
    };

    if (ppKnownROMSet)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

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
        pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;
        break;
    case 6: // A/B/C/D/Dark/Bonus
    default:
        pButtonLabelSet = DEF_BUTTONLABEL_WAKUWAKU7_FIVE;
        break;
    }

    return CGameClassByDir::UpdatePalImg(Node01, Node02, Node03, Node04);
}
