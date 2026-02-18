#include "StdAfx.h"
#include "Game_SSF2T_GBA.h"

CGame_SSF2T_GBA::SSF2T_GBA_LoadingKey CGame_SSF2T_GBA::m_eVersionToLoad = SSF2T_GBA_LoadingKey::USA;

void CGame_SSF2T_GBA::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SSF2T_GBA_LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"super street fighter ii turbo - revival (usa).gba", SSF2T_GBA_LoadingKey::USA },
        { L"super_street_fighter_ii_turbo_-_revival_europe.gba", SSF2T_GBA_LoadingKey::Euro },
        { L"super street fighter ii turbo - revival (europe).gba", SSF2T_GBA_LoadingKey::Euro },
        { L"super street fighter ii x - revival (japan).gba", SSF2T_GBA_LoadingKey::Japan },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eVersionToLoad = result->second;
    }
    else
    {
        m_eVersionToLoad = SSF2T_GBA_LoadingKey::USA;
    }

    return;
}

void CGame_SSF2T_GBA::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);

    if (nUnitId != m_nCurrentExtraUnitId)
    {
        switch (m_eVersionToLoad)
        {
        case SSF2T_GBA_LoadingKey::USA:
            // Palettes are targeted against USA
            break;
        case SSF2T_GBA_LoadingKey::Euro:
            // 0-0x7e7770 (start to Ryu stage) no shift
            // 0x7e7770-EOF is offset
            if (m_nCurrentPaletteROMLocation >= 0x7e7770) // shift after ryu stage
            {
                m_nCurrentPaletteROMLocation -= 0x418;
            }
            break;
        case SSF2T_GBA_LoadingKey::Japan:
            // 0-0x7e7770 (start to Ryu stage) is offset.
            if (m_nCurrentPaletteROMLocation < 0x4ac63c) // this is from dictator stage to cammy stage
            {
                // no shift, this is fine.
            }
            else if (m_nCurrentPaletteROMLocation < 0x7e7770) // this is from cammy stage up to ryu stage
            {
                m_nCurrentPaletteROMLocation -= 0x3a0;
            }
            else if (m_nCurrentPaletteROMLocation < 0x7f2168) // this is from ryu stage to bonus casks
            {
                m_nCurrentPaletteROMLocation += 0x1680;
            }
            else if (m_nCurrentPaletteROMLocation < 0x7f4c1e) // this is from bonus casks to win ports
            {
                m_nCurrentPaletteROMLocation += 0x1690;
            }
            else // this is from win ports to EOF
            {
                m_nCurrentPaletteROMLocation += 0xF20;
            }
            break;
        };
    }
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
    uint32_t nImgUnitId = -1;
    uint32_t nSrcStart = -1;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;
    uint32_t nSelectedPaletteIndex = 0;

    //Get rid of any palettes if there are any
    m_BasePalGroup.FlushPalAll();

    bool fUsingSpecialPairing = false;

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
                nSelectedPaletteIndex = NodeGet->uPalId;
                fUsingSpecialPairing = true;
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

    if (fUsingSpecialPairing)
    {
        // Use the default logic
        CreateDefPal(NodeGet, 0);
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));
        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement, nSelectedPaletteIndex);
    }
    else
    {
        return CGameClassByDir::UpdatePalImg(Node01, Node02, Node03, Node04);
    }

    return TRUE;
}
