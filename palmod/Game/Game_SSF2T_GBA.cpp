#include "StdAfx.h"
#include "Game_SSF2T_GBA.h"

uint32_t CGame_SSF2T_GBA::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    // If we need further differentiation, we can bytesniff at 0xa0
    static const sCRC32ValueSet knownROMs[] =
    {
        { L"SSF2T - Revival (USA GBA)", L"Super Street Fighter II Turbo - Revival (USA).gba", 0x63045aa, 0 },
        { L"SSF2X - Revival (Japan)", L"Super Street Fighter II X - Revival (Japan).gba", 0x7a2c0d61, 0x1690 },
        { L"SSF2T - Revival (Euro GBA)", L"Super_Street_Fighter_II_Turbo_-_Revival_Europe.gba", 0x461b4590, -0x418 },
        { L"SSF2T - Revival (Euro GBA)", L"Super Street Fighter II Turbo - Revival (Europe).gba", 0x461b4590, -0x418 },
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

BOOL CGame_SSF2T_GBA::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    //Change the image id if we need to
    int nTargetImgId = 0;
    uint32_t nImgUnitId = NodeGet->uUnitId;

    uint32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    //Select the image
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        if (pCurrentNode) // All current nodes are one block of color options
        {
            if (_wcsicmp(pCurrentNode->szDesc, L"Colors") == 0)
            {
                nSrcAmt = static_cast<uint32_t>(DEF_BUTTONLABEL_GBA.size());
                nNodeIncrement = 1;
                // The starting point is the absolute first palette for the sprite in question which is found in A
                nSrcStart = 0;
            }
            else // Extras or Extra Range
            {
                // Status effects and etc have no peer palettes
                nSrcAmt = 1;
            }
        }

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(NodeGet, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}
