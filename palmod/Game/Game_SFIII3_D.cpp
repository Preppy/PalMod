#include "StdAfx.h"
#include "GameRegistry.h"
#include "Game_SFIII3_D.h"
#include "SFIII3_D_DEF.h"

CDescTree CGame_SFIII3_D::m_MainDescTree = nullptr;

uint32_t CGame_SFIII3_D::m_uRuleCtr = 0;

void CGame_SFIII3_D::InitializeStatics()
{
    m_MainDescTree.SetRootTree(CGame_SFIII3_D::InitDescTree());
}

CGame_SFIII3_D::CGame_SFIII3_D()
{
    //Set color mode
    m_createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_BE);

    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    m_nUnitAmt = SFIII3_D_NUMUNIT;

    InitDataBuffer();

    //Set game information
    m_nGameFlag = SFIII3_D;
    m_nImgGameFlag = IMGDAT_SECTION_SF3;
    m_prgGameImageSet = SFIII3_D_IMGID_SORTED_BY_UNIT;

    m_nFileAmt = SFIII3_D_NUMUNIT;

    //Set the image out display type
    m_DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    m_pButtonLabelSet = DEF_BUTTONLABEL7_SF3;

    //Create the redirect buffer
    m_rgUnitRedir.resize(m_nUnitAmt, 0);

    //Create the file changed flag array
    PrepChangeTrackingArray();
    // the DC and PS2 games use one file per character/unit: we can handle those slightly differently
    m_fGameUnitsMapToIndividualFiles = TRUE;
}

CGame_SFIII3_D::~CGame_SFIII3_D()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SFIII3_D::GetMainTree()
{
    return &CGame_SFIII3_D::m_MainDescTree;
}

sDescTreeNode* CGame_SFIII3_D::InitDescTree()
{
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    sDescTreeNode* UnitNode;
    sDescTreeNode* ButtonNode;
    sDescNode* ChildNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", KnownGameInfo::GetGameNameForGameID(SFIII3_D));
    NewDescTree->ChildNodes = new sDescTreeNode[SFIII3_D_NUMUNIT];
    NewDescTree->uChildAmt = SFIII3_D_NUMUNIT;

    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    //Go through each character
    for (uint16_t iUnitCtr = 0; iUnitCtr < SFIII3_D_NUMUNIT; iUnitCtr++)
    {
        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];
        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", SFIII3_D_UNITDESC[iUnitCtr]);

        //Init each character to have all 6 basic buttons + extra
        UnitNode->ChildNodes = new sDescTreeNode[1];

        //All children have button trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = 1;

        for (uint16_t iButtonCtr = 0; iButtonCtr < 1; iButtonCtr++)
        {
            uint16_t nCurrChildAmt = 32;

            ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iButtonCtr];

            //Set each button data
            _snwprintf_s(ButtonNode->szDesc, ARRAYSIZE(ButtonNode->szDesc), _TRUNCATE, L"Palettes");

            //Button children have nodes
            ButtonNode->uChildType = DESC_NODETYPE_NODE;
            ButtonNode->uChildAmt = nCurrChildAmt;

            ButtonNode->ChildNodes = (sDescTreeNode*)new sDescNode[nCurrChildAmt];

            for (uint16_t nChildCtr = 0; nChildCtr < nCurrChildAmt; nChildCtr++)
            {
                const uint16_t k_nNumberOfBonusColors = 6;
                ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nChildCtr];

                ChildNode->uUnitId = iUnitCtr;

                if (nChildCtr < DEF_BUTTONLABEL7_SF3.size())
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, DEF_BUTTONLABEL7_SF3[nChildCtr]);
                }
                else if (nChildCtr < (DEF_BUTTONLABEL7_SF3.size() + k_nNumberOfBonusColors))
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"Second Impact %s", DEF_BUTTONLABEL7_SF3[nChildCtr - DEF_BUTTONLABEL7_SF3.size()]);
                }
                else
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"Palette %02X", nChildCtr);
                }

                ChildNode->uPalId = nChildCtr;
            }
        }
    }

    return NewDescTree;
}

sFileRule CGame_SFIII3_D::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // We get extra data from GameClass that we don't want: clear the lead flag if present.
    uint16_t nRuleId = (nUnitId & RULE_COUNTER_DEMASK);

    if (nRuleId > 14)
    {
        // Shin Gouki doesn't exist
        nRuleId++;
    }

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"PL%02dPL.BIN", nRuleId);

    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = -1;

    return NewFileRule;
}

sFileRule CGame_SFIII3_D::GetNextRule()
{
    sFileRule NewFileRule = GetRule(m_uRuleCtr);

    m_uRuleCtr++;

    if (m_uRuleCtr >= SFIII3_D_NUMUNIT)
    {
        m_uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

uint32_t CGame_SFIII3_D::GetBasicAmt(uint32_t nUnitId)
{
    return static_cast<uint32_t>(DEF_BUTTONLABEL7_SF3.size());
}

uint32_t CGame_SFIII3_D::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return 32;
}

void CGame_SFIII3_D::GetPalOffsSz(uint32_t nUnitId, uint32_t nPalId)
{
    m_nCurrentPaletteROMLocation = 0x80 * nPalId;
    m_nCurrPalSz = 0x80 / 2;
}

BOOL CGame_SFIII3_D::LoadFile(CFile* LoadedFile, uint32_t nUnitId)
{
    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    m_pppDataBuffer[nUnitId] = new uint16_t * [nPalAmt];

    m_rgUnitRedir.at(nUnitId) = nUnitId; // this is presorted

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        GetPalOffsSz(nUnitId, nPalCtr);

        m_pppDataBuffer[nUnitId][nPalCtr] = new uint16_t[m_nCurrPalSz];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

        LoadedFile->Read(m_pppDataBuffer[nUnitId][nPalCtr], m_nCurrPalSz * 2);
    }

    return TRUE;
}

BOOL CGame_SFIII3_D::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        if (IsPaletteDirty(nUnitId, nPalCtr))
        {
            GetPalOffsSz(nUnitId, nPalCtr);

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            SaveFile->Write(m_pppDataBuffer[nUnitId][nPalCtr], m_nCurrPalSz * 2);
        }
    }

    return TRUE;
}

void CGame_SFIII3_D::CreateDefPal(sDescNode* srcNode, uint32_t nSepId)
{
    uint32_t nUnitId = srcNode->uUnitId;
    uint32_t nPalId = srcNode->uPalId;

    GetPalOffsSz(nUnitId, nPalId);

    m_BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrPalSz, nUnitId, nPalId);
    m_BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrPalSz);
}

BOOL CGame_SFIII3_D::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

    uint32_t uUnitId = NodeGet->uUnitId;
    uint32_t uPalId = NodeGet->uPalId;

    //Change the image id if we need to
    int nTargetImgId = 0;
    uint32_t nImgUnitId = SFIII3_D_IMGID_SORTED_BY_UNIT[uUnitId];

    int nSrcStart = 0;
    uint32_t nSrcAmt = static_cast<uint32_t>(m_pButtonLabelSet.size());//GetBasicAmt(uUnitId);

    //Get rid of any palettes if there are any
    m_BasePalGroup.FlushPalAll();

    //Create the default palette
    ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

    CreateDefPal(NodeGet, 0);

    SetSourcePal(0, uUnitId, nSrcStart, nSrcAmt, 1);

    return TRUE;
}

COLORREF* CGame_SFIII3_D::CreatePal(uint32_t nUnitId, uint32_t nPalId)
{
    GetPalOffsSz(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[m_nCurrPalSz];

    for (uint16_t iPos = 0; iPos < m_nCurrPalSz; iPos++)
    {
        NewPal[iPos] = ConvPal16(m_pppDataBuffer[nUnitId][nPalId][iPos]);

        if (iPos != 0)
        {
            // Force alpha, but leave the first transparency color alone
            NewPal[iPos] |= 0xFF000000;
        }
    }

    return NewPal;
}
