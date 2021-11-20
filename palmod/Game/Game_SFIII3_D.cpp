#include "StdAfx.h"
#include "Game_SFIII3_D.h"
#include "SFIII3_D_DEF.h"
#include "GameDef.h"

CDescTree CGame_SFIII3_D::MainDescTree = nullptr;

size_t CGame_SFIII3_D::uRuleCtr = 0;

void CGame_SFIII3_D::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_SFIII3_D::InitDescTree());
}

CGame_SFIII3_D::CGame_SFIII3_D(void)
{
    //Set color mode
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_BE);

    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = SFIII3_D_NUMUNIT;

    InitDataBuffer();

    //Set game information
    nGameFlag = SFIII3_D;
    nImgGameFlag = IMGDAT_SECTION_SF3;
    m_prgGameImageSet = SFIII3_D_IMGID_SORTED_BY_UNIT;

    nFileAmt = SFIII3_D_NUMUNIT;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL7_SF3;

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(size_t) * nUnitAmt);

    //Create the file changed flag array
    PrepChangeTrackingArray();
    // the DC and PS2 games use one file per character/unit: we can handle those slightly differently
    m_fGameUnitsMapToIndividualFiles = TRUE;
}

CGame_SFIII3_D::~CGame_SFIII3_D(void)
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SFIII3_D::GetMainTree()
{
    return &CGame_SFIII3_D::MainDescTree;
}

sDescTreeNode* CGame_SFIII3_D::InitDescTree()
{
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    sDescTreeNode* UnitNode;
    sDescTreeNode* ButtonNode;
    sDescNode* ChildNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SFIII3_D]);
    NewDescTree->ChildNodes = new sDescTreeNode[SFIII3_D_NUMUNIT];
    NewDescTree->uChildAmt = SFIII3_D_NUMUNIT;

    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < SFIII3_D_NUMUNIT; iUnitCtr++)
    {
        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];
        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", SFIII3_D_UNITDESC[iUnitCtr]);

        //Init each character to have all 6 basic buttons + extra
        UnitNode->ChildNodes = new sDescTreeNode[1];

        //All children have button trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = 1;

        for (UINT16 iButtonCtr = 0; iButtonCtr < 1; iButtonCtr++)
        {
            UINT16 nCurrChildAmt = 32;

            ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iButtonCtr];

            //Set each button data
            _snwprintf_s(ButtonNode->szDesc, ARRAYSIZE(ButtonNode->szDesc), _TRUNCATE, L"Palettes");

            //Button children have nodes
            ButtonNode->uChildType = DESC_NODETYPE_NODE;
            ButtonNode->uChildAmt = nCurrChildAmt;

            ButtonNode->ChildNodes = (sDescTreeNode*)new sDescNode[nCurrChildAmt];

            for (UINT16 nChildCtr = 0; nChildCtr < nCurrChildAmt; nChildCtr++)
            {
                const UINT16 k_nNumberOfBonusColors = 6;
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

sFileRule CGame_SFIII3_D::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    // We get extra data from GameClass that we don't want: clear the lead flag if present.
    UINT16 nRuleId = (nUnitId & RULE_COUNTER_DEMASK);

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
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= SFIII3_D_NUMUNIT)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

size_t CGame_SFIII3_D::GetBasicAmt(size_t nUnitId)
{
    return DEF_BUTTONLABEL7_SF3.size();
}

size_t CGame_SFIII3_D::GetPaletteCountForUnit(size_t nUnitId)
{
    return 32;
}

void CGame_SFIII3_D::GetPalOffsSz(size_t nUnitId, size_t nPalId)
{
    m_nCurrentPaletteROMLocation = 0x80 * nPalId;
    nCurrPalSz = 0x80 / 2;
}

BOOL CGame_SFIII3_D::LoadFile(CFile* LoadedFile, size_t nUnitId)
{
    size_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    m_pppDataBuffer[nUnitId] = new UINT16 * [nPalAmt];

    rgUnitRedir[nUnitId] = nUnitId; // this is presorted

    for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        GetPalOffsSz(nUnitId, nPalCtr);

        m_pppDataBuffer[nUnitId][nPalCtr] = new UINT16[nCurrPalSz];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

        LoadedFile->Read(m_pppDataBuffer[nUnitId][nPalCtr], nCurrPalSz * 2);
    }

    return TRUE;
}

BOOL CGame_SFIII3_D::SaveFile(CFile* SaveFile, size_t nUnitId)
{
    size_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        if (IsPaletteDirty(nUnitId, nPalCtr))
        {
            GetPalOffsSz(nUnitId, nPalCtr);

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            SaveFile->Write(m_pppDataBuffer[nUnitId][nPalCtr], nCurrPalSz * 2);
        }
    }

    return TRUE;
}

void CGame_SFIII3_D::CreateDefPal(sDescNode* srcNode, size_t nSepId)
{
    size_t nUnitId = srcNode->uUnitId;
    size_t nPalId = srcNode->uPalId;

    GetPalOffsSz(nUnitId, nPalId);

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
    BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, nCurrPalSz);
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

    size_t uUnitId = NodeGet->uUnitId;
    size_t uPalId = NodeGet->uPalId;

    //Change the image id if we need to
    nTargetImgId = 0;
    size_t nImgUnitId = SFIII3_D_IMGID_SORTED_BY_UNIT[uUnitId];

    int nSrcStart = (int)0;
    size_t nSrcAmt = DEF_BUTTONLABEL7_SF3.size();//GetBasicAmt(uUnitId);

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    //Create the default palette
    ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

    CreateDefPal(NodeGet, 0);

    SetSourcePal(0, uUnitId, nSrcStart, nSrcAmt, 1);

    return TRUE;
}

COLORREF* CGame_SFIII3_D::CreatePal(size_t nUnitId, size_t nPalId)
{
    GetPalOffsSz(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[nCurrPalSz];

    for (UINT16 i = 0; i < nCurrPalSz; i++)
    {
        NewPal[i] = ConvPal16(m_pppDataBuffer[nUnitId][nPalId][i]);

        if (i != 0)
        {
            // Force alpha, but leave the first transparency color alone
            NewPal[i] |= 0xFF000000;
        }
    }

    return NewPal;
}
