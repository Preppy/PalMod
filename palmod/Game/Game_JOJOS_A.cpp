#include "StdAfx.h"
#include "Game_JOJOS_A.h"
#include "GameDef.h"

stExtraDef* CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_50 = nullptr;
stExtraDef* CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_51 = nullptr;

CDescTree CGame_JOJOS_A::MainDescTree_50 = CGame_JOJOS_A::InitDescTree(50);
CDescTree CGame_JOJOS_A::MainDescTree_51 = CGame_JOJOS_A::InitDescTree(51);

int CGame_JOJOS_A::GetExtraCt(int nCurrentMode, int nUnitId, BOOL bVisible)
{
    static int rgExtraCtDef_50[JOJOS_A_NUMUNIT_50 + 1] = { -1 };
    static int rgExtraCtAlt_50[JOJOS_A_NUMUNIT_50 + 1] = { -1 }; //Fix later
    static int rgExtraCtDef_51[JOJOS_A_NUMUNIT_51 + 1] = { -1 };
    static int rgExtraCtAlt_51[JOJOS_A_NUMUNIT_51 + 1] = { -1 }; //Fix later

    int* rgExtraCt = nullptr;
    
    if (bVisible)
    {
        rgExtraCt = (nCurrentMode == 50) ? (int*)rgExtraCtAlt_50 : (int*)rgExtraCtAlt_51;
    }
    else
    {
        rgExtraCt = (nCurrentMode == 50) ? (int*)rgExtraCtDef_50 : (int*)rgExtraCtDef_51;
    }

    if (rgExtraCt[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCt, 0, (((nCurrentMode == 50) ? JOJOS_A_NUMUNIT_50 : JOJOS_A_NUMUNIT_51) + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetJojosExtraDef(nCurrentMode, 0);

        while (pCurrDef->uUnitN != 0xFF)
        {
            if ((pCurrDef->bInvisible != 1) || !bVisible)
            {
                rgExtraCt[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetJojosExtraDef(nCurrentMode, nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_JOJOS_A::GetExtraLoc(int nPaletteSetToUse, int nUnitId)
{
    static int rgExtraLoc_50[JOJOS_A_NUMUNIT_50 + 1] = { -1 };
    static int rgExtraLoc_51[JOJOS_A_NUMUNIT_51 + 1] = { -1 };

    if (UsePaletteSetFor50(nPaletteSetToUse))
    {
        if (rgExtraLoc_50[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = 0x80;
            memset(rgExtraLoc_50, 0, (JOJOS_A_NUMUNIT_50 + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetJojosExtraDef(50, 0);

            while (pCurrDef->uUnitN != 0xFF)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_50[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetJojosExtraDef(50, nDefCtr);
            }
        }

        return rgExtraLoc_50[nUnitId];
    }
    else
    {
        if (rgExtraLoc_51[0] == -1)
        {
            int nDefCtr = 0;
            int nCurrUnit = 0x80;
            memset(rgExtraLoc_51, 0, (JOJOS_A_NUMUNIT_51 + 1) * sizeof(int));

            stExtraDef* pCurrDef = GetJojosExtraDef(51, 0);

            while (pCurrDef->uUnitN != 0xFF)
            {
                if (pCurrDef->uUnitN != nCurrUnit)
                {
                    rgExtraLoc_51[pCurrDef->uUnitN] = nDefCtr;
                    nCurrUnit = pCurrDef->uUnitN;
                }

                nDefCtr++;
                pCurrDef = GetJojosExtraDef(51, nDefCtr);
            }
        }

        return rgExtraLoc_51[nUnitId];
    }
}

int CGame_JOJOS_A::GetBasicAmt(int nUnitId)
{
    return 1;
}

CGame_JOJOS_A::CGame_JOJOS_A(int nGameData)
{
    //We need the proper unit amt before we init the main buffer

    nJojosMode = nGameData;

    if (UsePaletteSetFor50())
    {
        OutputDebugString("CGame_JOJOS_A::CGame_JOJOS_A: Loading for the 50 ROM\n");
        nUnitAmt = JOJOS_A_NUMUNIT_50 + (GetExtraCt(nJojosMode, JOJOS_A_EXTRALOC_50) ? 1 : 0);
    }
    else
    {
        OutputDebugString("CGame_JOJOS_A::CGame_JOJOS_A: Loading for the 51 ROM\n");
        nUnitAmt = JOJOS_A_NUMUNIT_51 + (GetExtraCt(nJojosMode,  JOJOS_A_EXTRALOC_51) ? 1 : 0);
    }

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_15);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_8);

    //Set game information
    nGameFlag = JOJOS_A;
    nImgGameFlag = IMG5;
    nImgUnitAmt = nUnitAmt;

    nDisplayW = 8;
    nFileAmt = 1;

    //Set the image out display type
    DisplayType = DISP_DEF;
    pButtonLabel = const_cast<CHAR*>((CHAR*)DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    rgFileChanged = new UINT16;

    nRIndexAmt = 31;
    nGIndexAmt = 31;
    nBIndexAmt = 31;
    nAIndexAmt = 0;

    nRIndexMul = 8.225;
    nGIndexMul = 8.225;
    nBIndexMul = 8.225;
    nAIndexMul = 0;
}

CGame_JOJOS_A::~CGame_JOJOS_A(void)
{
    //Get rid of the file changed flag
    ClearDataBuffer();
    safe_delete(rgFileChanged);
}

CDescTree* CGame_JOJOS_A::GetMainTree()
{
    if (UsePaletteSetFor50())
    {
        return &CGame_JOJOS_A::MainDescTree_50;
    }
    else
    {
        return &CGame_JOJOS_A::MainDescTree_51;
    }
}

#ifdef NEED_TO_UPDATE_HEADERS
void ExportTableToDebugger()
{
#ifndef USE_LARGE_PALETTES
    OutputDebugString("FWIW: You want to define USE_LARGE_PALETTES so that you are working with the unsplit headers.\n");
#endif

    OutputDebugString("const sJOJOS_PaletteDataset JOJOS_A_TIMESTOP_PALETTES[] =\n{\n");
    for (int iHeaderIndex = 0; iHeaderIndex < ARRAYSIZE(JOJOS_A_TIMESTOP_PALETTES); iHeaderIndex++)
    {
        CString strstr;

        const int m_knMaxPalettePageSize = 2 * 64;
        int nPaletteTotalSize = (JOJOS_A_TIMESTOP_PALETTES[iHeaderIndex].nPaletteOffsetEnd - JOJOS_A_TIMESTOP_PALETTES[iHeaderIndex].nPaletteOffset);
        int nAdjust = 0;

        if (nPaletteTotalSize % 2 == 1)
        {
            // Looks like random errors crept into the Jojo files people were passing around: fix and move on.
            nPaletteTotalSize -= 1;
            nAdjust = 1;
        }

        if (nPaletteTotalSize > (m_knMaxPalettePageSize + 1))
        {
            const int nTotalPagesNeeded = (int)ceil((double)nPaletteTotalSize / (double)m_knMaxPalettePageSize);
            int nCurrentPaletteSectionLength = m_knMaxPalettePageSize;
            int nTotalUnusedColors = nPaletteTotalSize;

            OutputDebugString("#ifndef USE_LARGE_PALETTES\n");

            for (int nCurrentPage = 0, nCurrentOffset = 0; nCurrentPage < nTotalPagesNeeded; nCurrentPage++)
            {
                strstr.Format("    { \"%s (%u/%u)\", 0x%07x, 0x%07x }, \n", JOJOS_A_TIMESTOP_PALETTES[iHeaderIndex].szPaletteName, nCurrentPage + 1, nTotalPagesNeeded,
                                                                            JOJOS_A_TIMESTOP_PALETTES[iHeaderIndex].nPaletteOffset + nCurrentOffset, 
                                                                            JOJOS_A_TIMESTOP_PALETTES[iHeaderIndex].nPaletteOffset + nCurrentOffset + nCurrentPaletteSectionLength);

                nCurrentOffset += m_knMaxPalettePageSize;
                nTotalUnusedColors -= nCurrentPaletteSectionLength;
                nCurrentPaletteSectionLength = min(nTotalUnusedColors, m_knMaxPalettePageSize);
                OutputDebugString(strstr);
            }
            OutputDebugString("#else\n");
        }

        strstr.Format("    { \"%s\", 0x%07x, 0x%07x }, \n", JOJOS_A_TIMESTOP_PALETTES[iHeaderIndex].szPaletteName,
                                                            JOJOS_A_TIMESTOP_PALETTES[iHeaderIndex].nPaletteOffset,
                                                            JOJOS_A_TIMESTOP_PALETTES[iHeaderIndex].nPaletteOffsetEnd - nAdjust);
        OutputDebugString(strstr);

        if (nPaletteTotalSize > (m_knMaxPalettePageSize + 1))
        {
            OutputDebugString("#endif\n");
        }
    }

    OutputDebugString("};\n");
}
#endif

CDescTree CGame_JOJOS_A::InitDescTree(int nPaletteSetToUse)
{
#ifdef JOJOS_A_USEEXTRAFILE

    //Load extra file if we're using it
    LoadExtraFile(nPaletteSetToUse);

#endif

    int nUnitCt = UsePaletteSetFor50(nPaletteSetToUse) ? (JOJOS_A_NUMUNIT_50 + (GetExtraCt(50, JOJOS_A_EXTRALOC_50) ? 1 : 0)) :
                                                         (JOJOS_A_NUMUNIT_51 + (GetExtraCt(51, JOJOS_A_EXTRALOC_51) ? 1 : 0));

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    sprintf(NewDescTree->szDesc, "%s", g_GameFriendlyName[JOJOS_A]);
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

        int nExtraCt = GetExtraCt(nPaletteSetToUse, iUnitCtr, TRUE);
        BOOL bUseExtra = (GetExtraLoc(nPaletteSetToUse, iUnitCtr) ? 1 : 0);

        UINT16 nButtonAmt = 1; //  GetBasicAmt(iUnitCtr);
        UINT16 nMainChildAmt = 1; // For now, just list everything under the bottom combobox

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        if (UsePaletteSetFor50(nPaletteSetToUse) ? (iUnitCtr < JOJOS_A_EXTRALOC_50) : (iUnitCtr < JOJOS_A_EXTRALOC_51))
        {
            //Set each description
            sprintf(UnitNode->szDesc, "%s", UsePaletteSetFor50(nPaletteSetToUse) ? JOJOS_A_UNITDESC_50[iUnitCtr] : JOJOS_A_UNITDESC_51[iUnitCtr]);

            UnitNode->ChildNodes = new sDescTreeNode[nMainChildAmt];
            //All children have button trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nMainChildAmt;

#ifdef DEBUG
            CString strMsg;
            strMsg.Format("Unit: %s, %u of %u, %u total children\n", JOJOS_A_UNITDESC_50[iUnitCtr], iUnitCtr, nUnitCt, nMainChildAmt);
            OutputDebugString(strMsg);
#endif

            //Set data for each child group ("button")
            for (UINT16 iButtonCtr = 0; iButtonCtr < nButtonAmt; iButtonCtr++)
            {
                ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iButtonCtr];

                //Set each button data

                // Default label, since these aren't associated to buttons
                sprintf(ButtonNode->szDesc, "Palettes");

                //Button children have nodes
                UINT16 nListedOptionsCount = UsePaletteSetFor50(nPaletteSetToUse) ? JOJOS_A_BUTTONSORT_50[iUnitCtr] : JOJOS_A_BUTTONSORT_51[iUnitCtr];
                ButtonNode->uChildType = DESC_NODETYPE_NODE;
                ButtonNode->uChildAmt = nListedOptionsCount;
                ButtonNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedOptionsCount];

#ifdef DEBUG
                strMsg.Format("Button: %s, %u of %u, %u children\n", ButtonNode->szDesc, iButtonCtr, nButtonAmt, nListedOptionsCount);
                OutputDebugString(strMsg);
#endif

                //Set each button's extra nodes
                for (UINT16 nBasicCtr = 0; nBasicCtr < nListedOptionsCount; nBasicCtr++)
                {
                    const sJOJOS_PaletteDataset* paletteSetToUse = GetPaletteSet(nPaletteSetToUse, iUnitCtr, nBasicCtr);

                    ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nBasicCtr];

                    sprintf(ChildNode->szDesc, "%s", paletteSetToUse->szPaletteName);

                    ChildNode->uUnitId = iUnitCtr;
                    ChildNode->uPalId = nBasicCtr;

#ifdef DEBUG
                    strMsg.Format("Palette: %s, %u of %u\n", ChildNode->szDesc, nBasicCtr, nListedOptionsCount);
                    OutputDebugString(strMsg);
#endif
                }
            }
        }
        else
        {
            // This handles data loaded from the Extra extension file, which are treated
            // each as their own separate node.
            sprintf(UnitNode->szDesc, "Extra Palettes");

            UnitNode->ChildNodes = new sDescTreeNode[1]; //Only 1 for now, "Extra"
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1; //Only 1 for now, "Extra"
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(nPaletteSetToUse, iUnitCtr);
            int nCurrExtra = 0;

            if (UsePaletteSetFor50(nPaletteSetToUse))
            {
                ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[JOJOS_A_EXTRALOC_50 > iUnitCtr ? (nMainChildAmt - 1) : 0]; //Extra node
            }
            else
            {
                ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[JOJOS_A_EXTRALOC_51 > iUnitCtr ? (nMainChildAmt - 1) : 0]; //Extra node
            }

            sprintf(ButtonNode->szDesc, "Extra");

            ButtonNode->ChildNodes = new sDescTreeNode[nExtraCt];

            ButtonNode->uChildType = DESC_NODETYPE_NODE;
            ButtonNode->uChildAmt = nExtraCt; //EX + Extra

            for (int nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = GetJojosExtraDef(nPaletteSetToUse, nExtraPos + nCurrExtra);

                while (pCurrDef->bInvisible == 1)
                {
                    nCurrExtra++;

                    pCurrDef = GetJojosExtraDef(nPaletteSetToUse, nExtraPos + nCurrExtra);
                }

                sprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                if (UsePaletteSetFor50(nPaletteSetToUse))
                {
                    ChildNode->uPalId = (((JOJOS_A_EXTRALOC_50 > iUnitCtr ? 1 : 0) * nButtonAmt * 2) + nSuppAmt) + nCurrExtra;
                }
                else
                {
                    ChildNode->uPalId = (((JOJOS_A_EXTRALOC_51 > iUnitCtr ? 1 : 0) * nButtonAmt * 2) + nSuppAmt) + nCurrExtra;
                }

                nCurrExtra++;
            }
        }
    }

    return NewDescTree;
}

sFileRule CGame_JOJOS_A::GetRule(int nUnitId)
{
    sFileRule NewFileRule;

    sprintf_s(NewFileRule.szFileName, MAX_FILENAME, "%u", nUnitId);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = 0x800000;

    return NewFileRule;
}

int CGame_JOJOS_A::GetPalCt(int nUnitId)
{
    if (UsePaletteSetFor50() ?  (nUnitId == JOJOS_A_EXTRALOC_50) :
                                (nUnitId == JOJOS_A_EXTRALOC_51))
    {
        return GetExtraCt(nJojosMode, nUnitId);
    }
    else
    {
        // Base palette count.
        return UsePaletteSetFor50() ? JOJOS_A_BUTTONSORT_50[nUnitId] : JOJOS_A_BUTTONSORT_51[nUnitId];
    }
}

void CGame_JOJOS_A::InitDataBuffer()
{
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_JOJOS_A::ClearDataBuffer()
{
    if (pppDataBuffer)
    {
        for (int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
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

const sJOJOS_PaletteDataset* CGame_JOJOS_A::GetPaletteSet(int nPaletteSetToUse, int nUnitId, int nPaletteId)
{
    const sJOJOS_PaletteDataset* paletteSetToUse = nullptr;

    if (UsePaletteSetFor50(nPaletteSetToUse))
    {
        switch (nUnitId)
        {
        default:
            OutputDebugString("ERROR: Bogus palette request\n");
        case 0:
            paletteSetToUse = &JOJOS_A_HUD_PALETTES[nPaletteId];
            break;
        case 1:
            paletteSetToUse = &JOJOS_A_HUD_PORTRAIT_PALETTES[nPaletteId];
            break;
        case 2:
            paletteSetToUse = &JOJOS_A_STAGE_PALETTES[nPaletteId];
            break;
        }
    }
    else
    {
        switch (nUnitId)
        {
        default:
            OutputDebugString("ERROR: Bogus palette request\n");
        case 0:
            paletteSetToUse = &JOJOS_A_CHARACTER_PALETTES[nPaletteId];
            break;
        case 1:
            paletteSetToUse = &JOJOS_A_TIMESTOP_PALETTES[nPaletteId];
            break;
        case 2:
            paletteSetToUse = &JOJOS_A_BONUS_PALETTES[nPaletteId];
            break;
        }
    }

    return paletteSetToUse;
}

void CGame_JOJOS_A::GetPalOffsSz(int nUnitId, int nPalId)
{
    int nBasicPos = GetBasicAmt(nUnitId);
    int nOffset = 0, nPalSz = 0;
    BOOL isPaletteFromExtensionsFile = FALSE;

    if (UsePaletteSetFor50() ? (nUnitId == JOJOS_A_EXTRALOC_50) :
                               (nUnitId == JOJOS_A_EXTRALOC_51))
    {
        isPaletteFromExtensionsFile = TRUE;
    }

    if (!isPaletteFromExtensionsFile)
    {
        const sJOJOS_PaletteDataset* paletteSetToUse = GetPaletteSet(nJojosMode, nUnitId, nPalId);

        nOffset = paletteSetToUse->nPaletteOffset;
        nPalSz = max(0, (paletteSetToUse->nPaletteOffsetEnd - paletteSetToUse->nPaletteOffset));

        if (nPalSz > (2 * 64))
        {
            CString strError;
            strError.Format("BUGBUG: \"%s\" will be chopped.\n", paletteSetToUse->szPaletteName);
            OutputDebugString(strError);
        }
    }
    else //Extra Palettes
    {
        stExtraDef* pCurrDef = GetJojosExtraDef(nJojosMode, GetExtraLoc(nJojosMode, nUnitId) + nPalId);

        nOffset = pCurrDef->uOffset;
        nPalSz = pCurrDef->uPalSz;
    }

    nCurrPalOffs = nOffset;
    nCurrPalSz = nPalSz / 2;
}

BOOL CGame_JOJOS_A::LoadFile(CFile* LoadedFile, int nUnitId)
{
    for (int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        int nPalAmt = GetPalCt(nUnitCtr); //Fix later for extras

        pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        if (UsePaletteSetFor50())
        {
            rgUnitRedir[nUnitCtr] = JOJOS_A_UNITS_DISPLAYSORT_50[nUnitCtr];
        }
        else
        {
            rgUnitRedir[nUnitCtr] = JOJOS_A_UNITS_DISPLAYSORT_50[nUnitCtr];
        }

        for (int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            GetPalOffsSz(nUnitCtr, nPalCtr);

            pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[nCurrPalSz];

            LoadedFile->Seek(nCurrPalOffs, CFile::begin);

            LoadedFile->Read(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = 0xFF;

    return TRUE;
}

BOOL CGame_JOJOS_A::SaveFile(CFile* SaveFile, int nUnitId)
{
    int nPalAmt;

    for (int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        nPalAmt = GetPalCt(nUnitCtr);

        for (int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            GetPalOffsSz(nUnitCtr, nPalCtr);

            SaveFile->Seek(nCurrPalOffs, CFile::begin);

            SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz * 2);
        }
    }

    return TRUE;
}

void CGame_JOJOS_A::CreateDefPal(sDescNode* srcNode, int nSepId)
{
    int nUnitId = srcNode->uUnitId;
    int nPalId = srcNode->uPalId;

    GetPalOffsSz(nUnitId, nPalId);

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
    BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, nCurrPalSz);
}

BOOL CGame_JOJOS_A::CreateExtraPal(int nUnitId, int nPalId)
{
    const sJOJOS_PaletteDataset* paletteSetToUse = GetPaletteSet(nJojosMode, nUnitId, nPalId);

    // Check how many ARGB entries we have for this palette
    const int nPaletteTotalSize = max(0, (paletteSetToUse->nPaletteOffsetEnd - paletteSetToUse->nPaletteOffset)) / 2;

    if (nPaletteTotalSize > m_knMaxPalettePageSize)
    {
        GetPalOffsSz(nUnitId, nPalId);

        OutputDebugString("BUGBUG WARNING: This palette is being sliced: fix\n");
        int nTotalPagesNeeded = (int)ceil((double)nPaletteTotalSize / (double)m_knMaxPalettePageSize);
        int nCurrentPaletteSectionLength = m_knMaxPalettePageSize;
        int nTotalUnusedColors = nPaletteTotalSize;

       
        // We need to do this so that we have PalTool understands what palette to use.
        BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);

        for (int nCurrentPage = 0, nCurrentOffset = 0; nCurrentPage < nTotalPagesNeeded; nCurrentPage++)
        {
            CString strDisplayText;

            strDisplayText.Format("Page %u of %u: from %u for %u of %u\n", nCurrentPage + 1, nTotalPagesNeeded, nCurrentOffset, nCurrentPaletteSectionLength, nCurrPalSz);
            OutputDebugString(strDisplayText);

            //strDisplayText.Format("Page %u of %u", nCurrentPage + 1, nTotalPagesNeeded);
            strDisplayText.Format("BETA: ONLY %u/%u PAGES", nCurrentPage + 1, nTotalPagesNeeded);
            
            BasePalGroup.AddSep(nCurrentPage, strDisplayText, nCurrentOffset, nCurrentPaletteSectionLength);

            nCurrentOffset += m_knMaxPalettePageSize;
            nTotalUnusedColors -= nCurrentPaletteSectionLength;
            nCurrentPaletteSectionLength = min(nTotalUnusedColors, m_knMaxPalettePageSize);
        }

        SetSourcePal(0, nUnitId, nPalId, 1, 1);

        return TRUE;
    }

    return FALSE;
}

BOOL CGame_JOJOS_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    // This loads the data and any image for the current selection.

    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = (UsePaletteSetFor50() ? MainDescTree_50.GetDescNode(Node01, Node02, Node03, Node04) :
                                                 MainDescTree_51.GetDescNode(Node01, Node02, Node03, Node04));

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    UINT16 uUnitId = NodeGet->uUnitId;
    UINT16 uPalId = NodeGet->uPalId;

    int nBasicAmt = GetBasicAmt(uUnitId);

    //Change the image id if we need to
    nTargetImgId = 0xFF;
    int nImgUnitId = uUnitId;
    BOOL bCreateBasicPal = TRUE;

    int nSrcStart = 0;
    int nSrcAmt = nBasicAmt;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    //Select the image
    nNormalPalAmt = ((GetBasicAmt(uUnitId) * 2) + 10);

    if (UsePaletteSetFor50() ? (JOJOS_A_EXTRALOC_50 > uUnitId) : (JOJOS_A_EXTRALOC_51 > uUnitId))
{
        nSrcStart = uPalId;
        nSrcAmt = 1;

        if (uPalId >= nNormalPalAmt)
        {
            bCreateBasicPal = !(CreateExtraPal(uUnitId, uPalId));
        }
    }
    else
    {
        // This handles palettes loaded from the Extras extension file
    }

    nImgUnitId = 0xFF;

    if (bCreateBasicPal)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, uUnitId, nSrcStart, nSrcAmt, 1);
    }

    return TRUE;
}

int CGame_JOJOS_A::GetBasicImgId(int nUnitId, int nPalId)
{
    int nBasicAmt = GetBasicAmt(nUnitId);
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

COLORREF* CGame_JOJOS_A::CreatePal(int nUnitId, int nPalId)
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

COLORREF* CGame_JOJOS_A::CreatePal64WithOffset(int nUnitId, int nPalId, int nOffset)
{
    //We get this from create def pal
    GetPalOffsSz(nUnitId, nPalId);

    int nAllocLength = min(m_knMaxPalettePageSize, nCurrPalSz - nOffset);

    COLORREF* NewPal = new COLORREF[nAllocLength];

    for (int i = 0; i < nAllocLength; i++)
    {
        NewPal[i] = ConvPal(pppDataBuffer[nUnitId][nPalId][i + nOffset]) | 0xFF000000;
    }

    return NewPal;
}

void CGame_JOJOS_A::UpdatePalData()
{
    for (int nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);
        if (srcDef->bAvail)
        {
            int nIndexStart = 0;

            COLORREF* crSrc = srcDef->pPal;
            UINT16 uAmt = srcDef->uPalSz;
            int nBasicAmt = GetBasicAmt(srcDef->uUnitId);

            for (int nPICtr = nIndexStart; nPICtr < uAmt; nPICtr++)
            {
                pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][nPICtr] = ConvCol(crSrc[nPICtr]);

            }
            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}
