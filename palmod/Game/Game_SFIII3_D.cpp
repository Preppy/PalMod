#include "StdAfx.h"
#include "Game_SFIII3_D.h"
#include "GameDef.h"

CDescTree CGame_SFIII3_D::MainDescTree;

UINT16 CGame_SFIII3_D::uRuleCtr = 0;

void CGame_SFIII3_D::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_SFIII3_D::InitDescTree());
}

CGame_SFIII3_D::CGame_SFIII3_D(void)
{
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = SFIII3_D_NUMUNIT;

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_15ALT);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_8);

    //Set game information
    nGameFlag = SFIII3_D;
    nImgGameFlag = IMGDAT_SECTION_3S;
    nImgUnitAmt = nUnitAmt;

    nDisplayW = 8;
    nFileAmt = SFIII3_D_NUMUNIT;

    //Prepare the file list
    //PrepUnitFile();

    //Set the image out display type
    DisplayType = DISP_DEF;
    pButtonLabel = const_cast<TCHAR*>((TCHAR*)DEF_BUTTONLABEL7);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag array
    rgFileChanged = new UINT16[SFIII3_D_NUMUNIT];
    memset(rgFileChanged, NULL, sizeof(UINT16) * SFIII3_D_NUMUNIT);

    nRGBIndexAmt = 31;
    nAIndexAmt = 0;

    nRGBIndexMul = 8.225;
    nAIndexMul = 0;
}

CGame_SFIII3_D::~CGame_SFIII3_D(void)
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    safe_delete_array(rgFileChanged);
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
    _stprintf(NewDescTree->szDesc, _T("%s"), g_GameFriendlyName[SFIII3_D]);
    NewDescTree->ChildNodes = new sDescTreeNode[SFIII3_D_NUMUNIT];
    NewDescTree->uChildAmt = SFIII3_D_NUMUNIT;

    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    //Go through each character
    for (int iUnitCtr = 0; iUnitCtr < SFIII3_D_NUMUNIT; iUnitCtr++)
    {
        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];
        //Set each description
        _stprintf(UnitNode->szDesc, _T("%s"), SFIII3_D_UNITDESC[iUnitCtr]);

        //Init each character to have all 6 basic buttons + extra
        UnitNode->ChildNodes = new sDescTreeNode[1];

        //All children have button trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = 1;

        for (int iButtonCtr = 0; iButtonCtr < 1; iButtonCtr++)
        {
            int nCurrChildAmt = GetPalCt(iUnitCtr); // 1 for each button for now

            ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iButtonCtr];

            //Set each button data
            _stprintf(ButtonNode->szDesc, _T("Palettes"));//, DEF_BUTTONLABEL7[iButtonCtr]);

            //Button children have nodes
            ButtonNode->uChildType = DESC_NODETYPE_NODE;
            ButtonNode->uChildAmt = nCurrChildAmt;

            ButtonNode->ChildNodes = (sDescTreeNode*)new sDescNode[nCurrChildAmt];

            for (int nChildCtr = 0; nChildCtr < nCurrChildAmt; nChildCtr++)
            {
                ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nChildCtr];

                ChildNode->uUnitId = iUnitCtr;
                _stprintf(ChildNode->szDesc, _T("Palette %02X"), nChildCtr);

                ChildNode->uPalId = nChildCtr;

                //Set each button's node
                ///////////////////////////////////////////////////////////////////////

                /*

                ChildNode = &((sDescNode *)ButtonNode->ChildNodes)[nChildCtr];

                ChildNode->uUnitId = iUnitCtr;

                if (nChildCtr)
                {
                    _stprintf(ChildNode->szDesc, _T("%s Color Alternate"), DEF_BUTTONLABEL7[iButtonCtr]);

                    ChildNode->uPalId = nChildCtr * BUTTON7 + iButtonCtr;
                }
                else
                {
                    _stprintf(ChildNode->szDesc, _T("%s Color"), DEF_BUTTONLABEL7[iButtonCtr]);

                    ChildNode->uPalId = iButtonCtr;
                }

                */
            }
        }
    }

    return NewDescTree;
}

sFileRule CGame_SFIII3_D::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // We get extra data from GameClass that we don't want: clear the lead 0xFF00 flag if present.
    const UINT16 nRuleId = (nUnitId & 0x00FF) + 1;

    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("PL%02dPL.BIN"), nRuleId);

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

int CGame_SFIII3_D::GetBasicAmt(UINT16 nUnitId)
{
    return BUTTON7;
}

int CGame_SFIII3_D::GetPalCt(UINT16 nUnitId)
{
    return 32;
}

void CGame_SFIII3_D::InitDataBuffer()
{
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SFIII3_D::ClearDataBuffer()
{
    if (pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (pppDataBuffer[nUnitCtr])
            {
                UINT16 nPalAmt = GetPalCt(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(pppDataBuffer);
    }
}

void CGame_SFIII3_D::GetPalOffsSz(UINT16 nUnitId, UINT16 nPalId)
{
    nCurrPalOffs = 0x80 * nPalId;
    nCurrPalSz = 0x80 / 2;
}

BOOL CGame_SFIII3_D::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    UINT16 nPalAmt = GetPalCt(nUnitId);

    pppDataBuffer[nUnitId] = new UINT16 * [nPalAmt];

    rgUnitRedir[nUnitId] = nUnitId; //Fix later for unit sort

    for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        GetPalOffsSz(nUnitId, nPalCtr);

        pppDataBuffer[nUnitId][nPalCtr] = new UINT16[nCurrPalSz];

        LoadedFile->Seek(nCurrPalOffs, CFile::begin);

        LoadedFile->Read(pppDataBuffer[nUnitId][nPalCtr], nCurrPalSz * 2);
    }

    return TRUE;
}

BOOL CGame_SFIII3_D::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT16 nPalAmt = GetPalCt(nUnitId);

    for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        GetPalOffsSz(nUnitId, nPalCtr);

        SaveFile->Seek(nCurrPalOffs, CFile::begin);

        SaveFile->Write(pppDataBuffer[nUnitId][nPalCtr], nCurrPalSz * 2);
    }

    return TRUE;
}

void CGame_SFIII3_D::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;

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

    sDescNode* NodeGet = MainDescTree.GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    UINT16 uUnitId = NodeGet->uUnitId;
    UINT16 uPalId = NodeGet->uPalId;

    //Change the image id if we need to
    nTargetImgId = 0;
    UINT16 nImgUnitId = uUnitId;

    int nSrcStart = 0;
    int nSrcAmt = 7;//GetBasicAmt(uUnitId);

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    //Create the default palette
    ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

    CreateDefPal(NodeGet, 0);

    SetSourcePal(0, uUnitId, nSrcStart, nSrcAmt, 1);

    return TRUE;
}

COLORREF* CGame_SFIII3_D::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    GetPalOffsSz(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[nCurrPalSz];

    for (UINT16 i = 0; i < nCurrPalSz - 1; i++)
    {
        NewPal[i] = ConvPal(pppDataBuffer[nUnitId][nPalId][i] & 0x7FFF) | 0xFF000000;
    }

    return NewPal;
}

// Update the specific changed palettes for this character.
void CGame_SFIII3_D::UpdatePalData()
{
    for (UINT16 nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);
        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;
            UINT16 uAmt = srcDef->uPalSz;

            for (int nPICtr = 1; nPICtr < uAmt; nPICtr++)
            {
                pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][nPICtr] = (ConvCol(crSrc[nPICtr]) | 0x8000);
            }

            srcDef->bChanged = FALSE;
            rgFileChanged[srcDef->uUnitId] = TRUE;
        }
    }
}
