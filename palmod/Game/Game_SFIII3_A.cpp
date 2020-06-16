#include "StdAfx.h"
#include "Game_SFIII3_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"

stExtraDef* CGame_SFIII3_A::SFIII3_A_EXTRA_CUSTOM = NULL;

int CGame_SFIII3_A::rgExtraCountAll[SFIII3_A_NUMUNIT + 1] = { -1 };
int CGame_SFIII3_A::rgExtraCountVisibleOnly[SFIII3_A_NUMUNIT + 1] = { -1 };

CDescTree CGame_SFIII3_A::MainDescTree;
UINT32 CGame_SFIII3_A::m_nGameROMSize = 0x800000; // 8,388,608 bytes

void CGame_SFIII3_A::InitializeStatics()
{
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraCountVisibleOnly, -1, sizeof(rgExtraCountVisibleOnly));

    MainDescTree.SetRootTree(CGame_SFIII3_A::InitDescTree());
}

CGame_SFIII3_A::CGame_SFIII3_A(void)
{
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = SFIII3_A_NUMUNIT + (GetExtraCt(SFIII3_A_EXTRALOC) ? 1 : 0);

    OutputDebugString(GetExtraCt(SFIII3_A_EXTRALOC) ? "Loaded SF3_A with Extras.\n" : "Loaded SF3_A without Extras\n");

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_15);

    //Set palette conversion mode=
    BasePalGroup.SetMode(PALTYPE_8);

    //Set game information
    nGameFlag = SFIII3_A;
    nImgGameFlag = IMGDAT_SECTION_3S;
    nImgUnitAmt = nUnitAmt;

    nDisplayW = 8;
    nFileAmt = 1;

    //Set the image out display type
    DisplayType = DISP_DEF;
    pButtonLabel = const_cast<CHAR*>((CHAR*)DEF_BUTTONLABEL7);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    rgFileChanged = new UINT16;

    nRGBIndexAmt = 31;
    nAIndexAmt = 0;

    nRGBIndexMul = 8.225;
    nAIndexMul = 0;
}

CGame_SFIII3_A::~CGame_SFIII3_A(void)
{
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_EXTRA_CUSTOM);
    //Get rid of the file changed flag
    ClearDataBuffer();
    safe_delete(rgFileChanged);
}

int CGame_SFIII3_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly : (int*)rgExtraCountAll;

    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, (SFIII3_A_NUMUNIT + 1) * sizeof(int));
        memset(rgExtraCountVisibleOnly, 0, (SFIII3_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetSF3ExtraDef(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            rgExtraCountAll[pCurrDef->uUnitN]++;

            if (!pCurrDef->isInvisible)
            {
                rgExtraCountVisibleOnly[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetSF3ExtraDef(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_SFIII3_A::GetExtraLoc(UINT16 nUnitId)
{
    static int rgExtraLoc[SFIII3_A_NUMUNIT + 1] = { -1 };

    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (SFIII3_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetSF3ExtraDef(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetSF3ExtraDef(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

int CGame_SFIII3_A::GetBasicAmt(UINT16 nUnitId)
{
    switch (nUnitId)
    {
    case 0x0E: // Shin-Gouki
        return 2;
    case SFIII3_A_EXTRALOC:
        return 1;
    default:
        return 7;
    }
}

CDescTree* CGame_SFIII3_A::GetMainTree()
{
    return &CGame_SFIII3_A::MainDescTree;
}

sDescTreeNode* CGame_SFIII3_A::InitDescTree()
{
#ifdef SFIII3_A_USEEXTRAFILE

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SF3, SFIII3_A_EXTRA, &SFIII3_A_EXTRA_CUSTOM, SFIII3_A_EXTRALOC, m_nGameROMSize);
        
#endif

    int nUnitCt = SFIII3_A_NUMUNIT + (GetExtraCt(SFIII3_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    sprintf(NewDescTree->szDesc, "%s", g_GameFriendlyName[SFIII3_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    //Go through each character
    for (int iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* ButtonNode = nullptr;
        sDescNode* ChildNode = nullptr;

        //Use this for the Extra support
        int nSuppAmt = 0;

        int nExtraCt = GetExtraCt(iUnitCtr, TRUE);

        BOOL bUseExtra = (GetExtraLoc(iUnitCtr) ? 1 : 0);

        int nButtonAmt = GetBasicAmt(iUnitCtr);
        int nMainChildAmt = nButtonAmt + 1 + bUseExtra;

        //int nChildAmt = (iUnitCtr == 0x0E ? 2 : BUTTON7) + 7 + 2 + 8;
        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        if (iUnitCtr < SFIII3_A_EXTRALOC)
        {
            //Set each description
            sprintf(UnitNode->szDesc, "%s", SFIII3_A_UNITDESC[iUnitCtr]);

            //Init each character to have all 7 basic buttons (or 2 for ShinGouki) + portrait + ex + extra
            UnitNode->ChildNodes = new sDescTreeNode[nMainChildAmt];
            //All children have button trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nMainChildAmt;

            //Set each button data
            for (int iButtonCtr = 0; iButtonCtr < nButtonAmt; iButtonCtr++)
            {
                ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iButtonCtr];

                //Set each button data
                sprintf(ButtonNode->szDesc, "%s", DEF_BUTTONLABEL7[iButtonCtr]);

                //Button children have nodes
                ButtonNode->uChildType = DESC_NODETYPE_NODE;
                ButtonNode->uChildAmt = 2; //Extra / Portrait

                ButtonNode->ChildNodes = (sDescTreeNode*)new sDescNode[2];

                //Set each button's extra nodes
                for (int nBasicCtr = 0; nBasicCtr < 2; nBasicCtr++)
                {
                    ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nBasicCtr];

                    if (nBasicCtr == 0)
                    {
                        sprintf(ChildNode->szDesc, "%s Main", DEF_BUTTONLABEL7[iButtonCtr]);
                    }
                    else //It's 1
                    {
                        sprintf(ChildNode->szDesc, "%s Portrait", DEF_BUTTONLABEL7[iButtonCtr]);
                    }

                    ChildNode->uUnitId = iUnitCtr;
                    ChildNode->uPalId = nBasicCtr ? (nButtonAmt + iButtonCtr) : iButtonCtr;
                }
            }

            //Set up support nodes
            nSuppAmt = 2 + 8;

            ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[nButtonAmt]; //Support node
            sprintf(ButtonNode->szDesc, "Support");

            ButtonNode->ChildNodes = new sDescTreeNode[nSuppAmt];

            ButtonNode->uChildType = DESC_NODETYPE_NODE;
            ButtonNode->uChildAmt = nSuppAmt; //EX + Extra

            for (int nExtraCtr = 0; nExtraCtr < nSuppAmt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nExtraCtr];

                if (nExtraCtr < 2)
                {
                    sprintf(ChildNode->szDesc, "EX Attack (%d)", nExtraCtr + 1);
                }
                else if (nExtraCtr < nSuppAmt)
                {
                    sprintf(ChildNode->szDesc, "????");
                }

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (nButtonAmt * 2) + nExtraCtr;
            }
        }
        else
        {
            //Set each description
            sprintf(UnitNode->szDesc, "Extra Palettes");

            //Init each character to have all 7 basic buttons (or 2 for ShinGouki) + portrait + ex + extra
            UnitNode->ChildNodes = new sDescTreeNode[1]; //Only 1 for now, "Extra"
            //All children have button trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1; //Only 1 for now, "Extra"
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0;

            ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[SFIII3_A_EXTRALOC > iUnitCtr ? (nMainChildAmt - 1) : 0]; //Extra node
            sprintf(ButtonNode->szDesc, "Extra");

            ButtonNode->ChildNodes = new sDescTreeNode[nExtraCt];

            ButtonNode->uChildType = DESC_NODETYPE_NODE;
            ButtonNode->uChildAmt = nExtraCt; //EX + Extra

            for (int nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetSF3ExtraDef(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetSF3ExtraDef(nExtraPos + nCurrExtra);
                }

                sprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((SFIII3_A_EXTRALOC > iUnitCtr ? 1 : 0)* nButtonAmt * 2) + nSuppAmt) + nCurrExtra;

                nCurrExtra++;
            }
        }
    }

    return NewDescTree;
}

sFileRule CGame_SFIII3_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    sprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, "51");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nGameROMSize;

    return NewFileRule;
}

int CGame_SFIII3_A::GetPalCt(UINT16 nUnitId)
{
    if (nUnitId == SFIII3_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return (GetBasicAmt(nUnitId) * 2) + (2 + 8) + GetExtraCt(nUnitId);
    }
}

void CGame_SFIII3_A::InitDataBuffer()
{
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_SFIII3_A::ClearDataBuffer()
{
    if (pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (pppDataBuffer[nUnitCtr])
            {
                int nPalAmt = GetPalCt(nUnitCtr);

                for (int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(pppDataBuffer);
    }
}

void CGame_SFIII3_A::GetPalOffsSz(UINT16 nUnitId, UINT16 nPalId)
{
    int nBasicPos = GetBasicAmt(nUnitId);
    int nPortPos = nBasicPos * 2;
    int nExPos = 2 + nPortPos;
    int nExtraPos = 8 + nExPos;

    UINT32 nOffset = 0;
    int cbPalSz = 0;

    //nPortPos = nBasicPos + 7;

    BOOL bUseExtra = FALSE;

    if (nUnitId == SFIII3_A_EXTRALOC)
    {
        nExtraPos = 0;
        bUseExtra = TRUE;
    }
    else if (nPalId >= nExtraPos)
    {
        bUseExtra = TRUE;
    }

    if (!bUseExtra)
    {
        if (nPalId >= 0 && nPalId < nBasicPos) //Basic palettes
        {
            nOffset = (nUnitId * 0x80 * 7) + (nPalId * 0x80) + 0x700600;

            if (nUnitId > 0x0E)
            {
                nOffset -= (5 * 0x80);
            }

            cbPalSz = 0x80;
        }
        else if (nPalId < nPortPos) //Portraits
        {
            nOffset = (nUnitId * (0x20 * 7) + ((nPalId - nBasicPos) * 0x20)) + 0x763BE0;
            cbPalSz = 0x20;
        }
        else if (nPalId < nExPos)
        {
            int nOffStart = (nPalId - nPortPos ? 0x76AE00 : 0x764E00);

            nOffset = nOffStart + (nUnitId * 0x80);
            cbPalSz = 0x80;
        }
        else if (nPalId < nExtraPos) //Extra Palettes
        {
            nOffset = 0x765C00 + (nUnitId * 0x400) + ((nPalId - nExPos) * 0x80);
            cbPalSz = 0x80;
        }
    }
    else //Extra Palette
    {
        stExtraDef* pCurrDef = GetSF3ExtraDef(GetExtraLoc(nUnitId) + (nPalId - nExtraPos));

        nOffset = pCurrDef->uOffset;
        cbPalSz = pCurrDef->cbPaletteSize;
    }

    nCurrPalOffs = nOffset;
    nCurrPalSz = cbPalSz / 2;
}

BOOL CGame_SFIII3_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPalCt(nUnitCtr); //Fix later for extras

        pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        rgUnitRedir[nUnitCtr] = SFIII3_A_UNITSORT[nUnitCtr];

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            GetPalOffsSz(nUnitCtr, nPalCtr);

            pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[nCurrPalSz];

            LoadedFile->Seek(nCurrPalOffs, CFile::begin);

            LoadedFile->Read(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return TRUE;
}

BOOL CGame_SFIII3_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT16 nPalAmt;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        nPalAmt = GetPalCt(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            GetPalOffsSz(nUnitCtr, nPalCtr);

            SaveFile->Seek(nCurrPalOffs, CFile::begin);

            SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz * 2);
        }
    }

    return TRUE;
}

void CGame_SFIII3_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;

    GetPalOffsSz(nUnitId, nPalId);

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
    BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, nCurrPalSz);
}

BOOL CGame_SFIII3_A::CreateExtraPal(UINT16 nUnitId, UINT16 nPalId)
{
    UINT16 nExtra = nPalId - nNormalPalAmt;

    if (nExtra >= 0)
    {
        switch (nUnitId)
        {
        case 0x08: //Oro
        {
            switch (nExtra)
            {
            case 0: //Tengu Stone (1)
            {
                GetPalOffsSz(nUnitId, nPalId);

                BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);

                BasePalGroup.AddSep(0, "Concrete", 0, 16);
                //BasePalGroup.AddSep(0, "", 16, 16); 
                BasePalGroup.AddSep(0, "Dinosaur / Stone", 32, 16);
                BasePalGroup.AddSep(0, "Rocket", 48, 16);

                GetPalOffsSz(nUnitId, nPalId + 1);

                BasePalGroup.AddPal(CreatePal(nUnitId, nPalId + 1), nCurrPalSz, nUnitId, nPalId + 1);

                BasePalGroup.AddSep(1, "Brick", 0, 16);

                ClearSetImgTicket(
                    CreateImgTicket(nUnitId, 2,
                        CreateImgTicket(nUnitId, 3, NULL, -2, 129)
                    )
                );

                SetSourcePal(0, nUnitId, nPalId, 1, 1);
                SetSourcePal(1, nUnitId, nPalId + 1, 1, 1);

                return TRUE;
            }
            }
            break;
        }
        case 0x0C: //Urien
        {
            switch (nExtra)
            {
            case 0:
            {
                GetPalOffsSz(nUnitId, nPalId);

                BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
                BasePalGroup.AddSep(0, "Morph", 0, 64);

                GetPalOffsSz(nUnitId, nPalId + 1);

                BasePalGroup.AddPal(CreatePal(nUnitId, nPalId + 1), nCurrPalSz, nUnitId, nPalId + 1);
                BasePalGroup.AddSep(1, "Suit", 0, 64);

                ClearSetImgTicket(
                    CreateImgTicket(nUnitId, 2,
                        CreateImgTicket(nUnitId, 3, NULL, 0, 0)
                    )
                );

                SetSourcePal(0, nUnitId, nPalId, 1, 1);
                SetSourcePal(1, nUnitId, nPalId + 1, 1, 1);

                return TRUE;
            }
            break;
            }

            break;
        }
        default:
        {
            nTargetImgId = nExtra + 2;
            return FALSE;
        }
        break;
        }
    }

    return FALSE;
}

BOOL CGame_SFIII3_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

    UINT16 nBasicAmt = GetBasicAmt(uUnitId);

    //Change the image id if we need to
    nTargetImgId = 0;
    int nImgUnitId = uUnitId;
    BOOL bCreateBasicPal = TRUE;

    int nSrcStart = 0;
    int nSrcAmt = nBasicAmt;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    switch (uUnitId)
    {
    case 0x0E: //Shin Gouki
    {
        nImgUnitId = 0x0D;
    }
    break;
    }

    //Select the image
    nNormalPalAmt = ((GetBasicAmt(uUnitId) * 2) + 10);

    if (SFIII3_A_EXTRALOC > uUnitId)
    {
        if ((uPalId >= nBasicAmt) && (uPalId < nBasicAmt * 2))
        {
            nTargetImgId = 0x01; //Portrait Image
            nSrcStart = nBasicAmt;
        }
        else if ((uPalId >= nBasicAmt * 2) && (uPalId < nNormalPalAmt))
        {
            nSrcStart = uPalId;
            nSrcAmt = 1;
        }
        else if (uPalId >= nNormalPalAmt) // This Extra is not associated to a known unit/character
        {
            bCreateBasicPal = !(CreateExtraPal(uUnitId, uPalId));

            if (bCreateBasicPal)
            {
                nSrcStart = uPalId;
                nSrcAmt = 1;
            }
        }
    }
    else
    {
        // This handles palettes loaded from the Extras extension file
    }

    if (bCreateBasicPal)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, uUnitId, nSrcStart, nSrcAmt, 1);
    }

    return TRUE;
}

int CGame_SFIII3_A::GetBasicImgId(UINT16 nUnitId, UINT16 nPalId)
{
    UINT16 nBasicAmt = GetBasicAmt(nUnitId);
    if (nPalId > nBasicAmt)
    {
        if (nPalId > (7 + nBasicAmt))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

COLORREF* CGame_SFIII3_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    GetPalOffsSz(nUnitId, nPalId);
    //We get this from create def pal

    COLORREF* NewPal = new COLORREF[nCurrPalSz];

    for (int i = 0; i < nCurrPalSz; i++)
    {
        NewPal[i] = ConvPal(pppDataBuffer[nUnitId][nPalId][i]) | 0xFF000000;
    }

    return NewPal;
}

void CGame_SFIII3_A::UpdatePalData()
{
    for (UINT16 nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);
        if (srcDef->bAvail)
        {
            int nIndexStart = 0;

            COLORREF* crSrc = srcDef->pPal;
            UINT16 uAmt = srcDef->uPalSz;
            UINT16 nBasicAmt = GetBasicAmt(srcDef->uUnitId);

            if ((srcDef->uPalId >= nBasicAmt) && (srcDef->uPalId < nBasicAmt * 2) && (srcDef->uUnitId != SFIII3_A_EXTRALOC)) //Portrait
            {
                nIndexStart = 3; //Skip surrounding portrait indexes
            }

            for (int nPICtr = nIndexStart; nPICtr < uAmt; nPICtr++)
            {
                pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][nPICtr] = ConvCol(crSrc[nPICtr]);

            }
            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}
