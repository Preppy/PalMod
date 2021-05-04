#include "StdAfx.h"
#include "Gamedef.h"
#include "Game_MVC2_D.h"
#include "MVC2_A_DEF.h"
#include "mvc2_validate.h"
#include "MVC2_SUPP.h"
#include "mvc2_descs.h"

#define MV2C_D_DEBUG DEFAULT_GAME_DEBUG_STATE

//Initialize the selection tree
CDescTree CGame_MVC2_D::MainDescTree = nullptr;

UINT16 CGame_MVC2_D::uRuleCtr = 0;

UINT16 CGame_MVC2_D::rgExtraChrLoc[MVC2_D_NUMUNIT_WITH_TEAMVIEW];

void CGame_MVC2_D::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_MVC2_D::InitDescTree());
}

CGame_MVC2_D::CGame_MVC2_D(void)
{
    //Set color mode
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    InitializeStatics();

    // InitDataBuffer uses this value so make sure to set first
    nUnitAmt = MVC2_D_NUMUNIT_WITH_TEAMVIEW;

    InitDataBuffer();

    //Set game information
    nGameFlag = MVC2_D;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = MVC2_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(MVC2_IMG_UNITS);

    m_fGameUsesAlphaValue = true;

    nFileAmt = MVC2_D_NUMUNIT_WITH_TEAMVIEW;

    //Prepare the file list
    PrepChangeTrackingArray();
    // the DC and PS2 games use one file per character/unit: we can handle those slightly differently
    m_fGameUnitsMapToIndividualFiles = TRUE;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_TOPTOBOTTOM;
    pButtonLabelSet = DEF_BUTTONLABEL6_MVC2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL6_MVC2);

    //Set the MVC2 supp game
    CurrMVC2 = this;
    CurrMVC2_Arcade = nullptr;
    //Prepare it
    prep_supp();

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);
}

CGame_MVC2_D::~CGame_MVC2_D(void)
{
    FlushChangeTrackingArray();
    ClearDataBuffer();

    CurrMVC2 = NULL;
}

CDescTree* CGame_MVC2_D::GetMainTree()
{
    return &CGame_MVC2_D::MainDescTree;
}

sDescTreeNode* CGame_MVC2_D::InitDescTree()
{
    //Initialize extra range
    InitExtraRg();

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MVC2_D]);
    NewDescTree->ChildNodes = new sDescTreeNode[MVC2_D_NUMUNIT_WITH_TEAMVIEW];
    NewDescTree->uChildAmt = MVC2_D_NUMUNIT_WITH_TEAMVIEW;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_MVC2_D::InitDescTree: Building desc tree for MVC2_D...\n");
    OutputDebugString(strMsg);

    //Go through each character
    for (int iUnitCtr = 0; iUnitCtr < MVC2_D_NUMUNIT; iUnitCtr++)
    {
        //Omni extra count
        int nNumExtra = CountExtraRg(iUnitCtr, TRUE);

        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* ButtonNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];
        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", MVC2_D_UNITDESC[iUnitCtr]);

        //Init each character to have all 6 basic buttons + extra
        UnitNode->ChildNodes = new sDescTreeNode[ARRAYSIZE(DEF_BUTTONLABEL6_MVC2) + (nNumExtra ? 1 : 0)];

        //All children have button trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = ARRAYSIZE(DEF_BUTTONLABEL6_MVC2) + (nNumExtra ? 1 : 0);

        //Set each button data
        const int nButtonExtraCt = CountExtraRg(iUnitCtr, FALSE) + 1;

#if MV2C_D_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, MVC2_D_NUMUNIT_WITH_TEAMVIEW, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        for (int iButtonCtr = 0; iButtonCtr < ARRAYSIZE(DEF_BUTTONLABEL6_MVC2); iButtonCtr++)
        {
            int nExtraPos = 0;

            ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iButtonCtr];

            //Set each button data
            _snwprintf_s(ButtonNode->szDesc, ARRAYSIZE(ButtonNode->szDesc), _TRUNCATE, L"%s", DEF_BUTTONLABEL6_MVC2[iButtonCtr]);

            //Button children have nodes
            ButtonNode->uChildType = DESC_NODETYPE_NODE;
            ButtonNode->uChildAmt = nButtonExtraCt;

            ButtonNode->ChildNodes = (sDescTreeNode*)new sDescNode[nButtonExtraCt];

            //Start of the basic extra node in the current character
            int nBasicStart = 0;

            if (rgExtraChrLoc[iUnitCtr])
            {
                nBasicStart = rgExtraChrLoc[iUnitCtr] + 1;
            }

            const int nButtonExtraTotal = 8;

#if MV2C_D_DEBUG
            strMsg.Format(L"\t\"%s\" Collection: \"%s\", %u of %u, %u children\n", UnitNode->szDesc, ButtonNode->szDesc, iButtonCtr + 1, UnitNode->uChildAmt, nButtonExtraTotal);
            OutputDebugString(strMsg);
#endif

            const sMoveDescriptionLookup CurrentMoveDescriptionSet = MVC2_MOVE_DESCRIPTIONS[iUnitCtr];

            //Set each button's extra nodes
            for (int nButtonExtra = 0; nButtonExtra < nButtonExtraTotal; nButtonExtra++)
            {
                BOOL bSetInfo = false;
                ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nExtraPos];

                for (UINT32 nDescriptionLookup = 0; nDescriptionLookup < CurrentMoveDescriptionSet.nArraySize; nDescriptionLookup++)
                {
                    if (CurrentMoveDescriptionSet.pMoveDescriptions[nDescriptionLookup].nCharacterIndex == nButtonExtra)
                    {
                        //_snwprintf(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), L"%s %s", DEF_BUTTONLABEL6_MVC2[iButtonCtr], CurrentMoveDescriptionSet.pMoveDescriptions[nDescriptionLookup].szMoveName);
                        // We can skip the button label since the second combo box already has that information
                        _snwprintf(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), L"%s", CurrentMoveDescriptionSet.pMoveDescriptions[nDescriptionLookup].szMoveName);
                        ChildNode->szDesc[ARRAYSIZE(ChildNode->szDesc) - 1] = 0;
                        bSetInfo = true;
                        break;
                    }
                }

                if (!bSetInfo)
                {
                    if (nButtonExtra == 0)
                    {
                        _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s Main", DEF_BUTTONLABEL6_MVC2[iButtonCtr]);
                        bSetInfo = true;
                    }
                    else if (!nBasicStart || 1)//MVC2_D_EXTRADEF[nBasicStart + (nButtonExtra - 1)])
                    {
                        _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%02X %s (Extra - %02X)", nExtraPos, DEF_BUTTONLABEL6_MVC2[iButtonCtr],
                            (iButtonCtr * nButtonExtraTotal) + nExtraPos + 1);

                        bSetInfo = true;
                    }
                }

                if (bSetInfo)
                {
                    ChildNode->uUnitId = iUnitCtr;
                    ChildNode->uPalId = (iButtonCtr * 8) + nExtraPos;

                    nExtraPos++;
                }

#if MV2C_D_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nButtonExtra + 1, nButtonExtraTotal);
                OutputDebugString(strMsg);
#endif
            }
        }

        //Set extra data
        if (nNumExtra)
        {
            const int nExtraNodeIndex = 6;
            ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[nExtraNodeIndex]; //Extra data node
            wcscpy(ButtonNode->szDesc, L"Extra");
            ButtonNode->uChildAmt = nNumExtra;
            ButtonNode->uChildType = DESC_NODETYPE_NODE;

            ButtonNode->ChildNodes = (sDescTreeNode*)(new sDescTreeNode[nNumExtra]);

#if MV2C_D_DEBUG
            strMsg.Format(L"\t\"%s\" Extra Data Collection: \"%s\", %u of %u, %u children\n", UnitNode->szDesc, ButtonNode->szDesc, nExtraNodeIndex, UnitNode->uChildAmt, nNumExtra);
            OutputDebugString(strMsg);
#endif

            if (nNumExtra == (MVC2_D_PALDATASZ[iUnitCtr] - (8 * k_mvc2_character_coloroption_count * 32)) / 32)
            {
                // This path is used for Akuma/Gouki and War Machine only.
                // We don't have extended descriptions for these: instead of using MVC2_MOVE_DESCRIPTIONS just use the old defaults
                for (int nExtraCtr = 0; nExtraCtr < nNumExtra; nExtraCtr++)
                {
                    ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nExtraCtr];

                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"(%02X Extra)", nExtraCtr + 1);

                    ChildNode->uUnitId = iUnitCtr;
                    ChildNode->uPalId = (8 * k_mvc2_character_coloroption_count) + nExtraCtr;

#if MV2C_D_DEBUG
                    strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nNumExtra);
                    OutputDebugString(strMsg);
#endif
                }
            }
            else
            {
                int nStart = rgExtraChrLoc[iUnitCtr] + 1 + 7;
                int nExtraCtr = 0;
                int nRangeAmt = 0;
                int i = 0;

                UINT16* pCurrVal = const_cast<UINT16*>(&MVC2_D_EXTRADEF[nStart]);
                const sMoveDescriptionLookup CurrentMoveDescriptionSet = MVC2_MOVE_DESCRIPTIONS[iUnitCtr];

                while ((pCurrVal[0] & 0x0F00) != EXTRA_START)
                {
                    nRangeAmt = (pCurrVal[1] + 1) - pCurrVal[0];

                    for (int nRangeCtr = 0; nRangeCtr < nRangeAmt; nRangeCtr++)
                    {
                        bool bSetInfo = false;
                        const UINT16 nCurrentExtraValue = pCurrVal[0] + nRangeCtr;

                        ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nExtraCtr];

                        for (UINT32 nDescriptionLookup = 0; nDescriptionLookup < CurrentMoveDescriptionSet.nArraySize; nDescriptionLookup++)
                        {
                            if (CurrentMoveDescriptionSet.pMoveDescriptions[nDescriptionLookup].nCharacterIndex == nCurrentExtraValue)
                            {
                                _snwprintf(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), L"%02X: %s", nCurrentExtraValue, CurrentMoveDescriptionSet.pMoveDescriptions[nDescriptionLookup].szMoveName);
                                ChildNode->szDesc[ARRAYSIZE(ChildNode->szDesc) - 1] = 0;
                                bSetInfo = true;
                                break;
                            }
                        }

                        if (!bSetInfo)
                        {
                            _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"(%02X Extra)", nCurrentExtraValue);
                        }

                        ChildNode->uUnitId = iUnitCtr;
                        ChildNode->uPalId = (8 * k_mvc2_character_coloroption_count) + nCurrentExtraValue - 1;

                        nExtraCtr++;

#if MV2C_D_DEBUG
                        strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nExtraCtr, nNumExtra);
                        OutputDebugString(strMsg);
#endif

                    }

                    i += 2;

                    pCurrVal = const_cast<UINT16*>(&MVC2_D_EXTRADEF[nStart + i]);
                }
            }
        }
    }

    // Now add team view...
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* TeamNode = nullptr;
        sDescNode* ChildNode = nullptr;
        const int iUnitCtr = MVC2_D_TEAMVIEW_LOCATION; // Team view location

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", MVC2_D_UNITDESC[iUnitCtr]);

        const UINT32 nTeamCount = ARRAYSIZE(mvc2TeamList);
        const UINT32 nColorOptionCount = ARRAYSIZE(DEF_BUTTONLABEL6_MVC2);
        UnitNode->ChildNodes = new sDescTreeNode[nTeamCount];
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nTeamCount;

#if MV2C_D_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, MVC2_D_NUMUNIT_WITH_TEAMVIEW, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        for (int iTeamIndex = 0; iTeamIndex < nTeamCount; iTeamIndex++)
        {
            TeamNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iTeamIndex];

            // Define each team's data
            TeamNode->uChildType = DESC_NODETYPE_NODE;
            TeamNode->uChildAmt = nColorOptionCount;
            TeamNode->ChildNodes = (sDescTreeNode*)new sDescNode[nColorOptionCount];
            _snwprintf_s(TeamNode->szDesc, ARRAYSIZE(TeamNode->szDesc), _TRUNCATE, L"%s", mvc2TeamList[iTeamIndex].pszTeamName);

#if MV2C_D_DEBUG
            strMsg.Format(L"\t\"%s\" Collection: \"%s\", %u of %u, %u children\n", UnitNode->szDesc, TeamNode->szDesc, iTeamIndex + 1, UnitNode->uChildAmt, nColorOptionCount);
            OutputDebugString(strMsg);
#endif

            //Set each team's button options
            for (int iColorOption = 0; iColorOption < nColorOptionCount; iColorOption++)
            {
                ChildNode = &((sDescNode*)TeamNode->ChildNodes)[iColorOption];
                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (iTeamIndex * nColorOptionCount) + iColorOption;
                _snwprintf(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), L"%s", MVC2_A_GENERICSET_PALETTES[iColorOption].szPaletteName);

#if MV2C_D_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, iColorOption + 1, nColorOptionCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    return NewDescTree;
}

void CGame_MVC2_D::InitExtraRg()
{
    int i = 0;

    //Clear the extra buffer
    memset(CGame_MVC2_D::rgExtraChrLoc, 0, sizeof(UINT16) * MVC2_D_NUMUNIT_WITH_TEAMVIEW);

    // Set up the 
    while (MVC2_D_EXTRADEF[i] != EXTRA_END)
    {
        if ((MVC2_D_EXTRADEF[i] & EXTRA_START) == EXTRA_START)
        {
            // This is associating each character's starting point in the EXTRADEF table to the corresponding index in rgExtraChrLoc.
            // So 0x0 is set to Ryu offset 0x0, then Ryu has eight extra slots available, then 0x1 is set to 0xa for 0x1 Gief,
            // 0x2 is set to 0x14 for 0x2 Guile, and so forth.  Look at MVC2_D_EXTRADEF and this should be easy to follow.
            rgExtraChrLoc[(MVC2_D_EXTRADEF[i] & 0x00FF)] = i;
            i += 8;
        }
        else
        {
            i++;
        }
    }
}

// Returns a count of the extra sprites available for a given unit/character
int CGame_MVC2_D::CountExtraRg(UINT16 nUnitId, BOOL bOmniExtra)
{
    //(MVC2_D_PALDATASZ[nUnitId] - (8 * k_mvc2_character_coloroption_count * 32)) / 32;
    if (!rgExtraChrLoc[nUnitId])
    {
        return (bOmniExtra ? ((MVC2_D_PALDATASZ[nUnitId] - (8 * k_mvc2_character_coloroption_count * 32)) / 32) : 7);
    }
    else
    {
        if (bOmniExtra)
        {
            int nStart = rgExtraChrLoc[nUnitId] + 1 + 7;
            int nRetVal = 0;
            int i = 0;

            UINT16* pCurrVal = const_cast<UINT16*>(&MVC2_D_EXTRADEF[nStart]);

            if (pCurrVal[0] == 0x00)
            {
                return 0;
            }
            else
            {
                while ((pCurrVal[0] & EXTRA_START) != EXTRA_START)
                {
                    nRetVal += (pCurrVal[1] + 1) - pCurrVal[0];

                    i += 2;
                    pCurrVal = const_cast<UINT16*>(&MVC2_D_EXTRADEF[nStart + i]);
                }

                if (!nRetVal)
                {
                    return ((MVC2_D_PALDATASZ[nUnitId] - (8 * k_mvc2_character_coloroption_count * 32)) / 32);
                }

                return nRetVal;
            }
        }
        else
        {
            // There are seven extras for all core button colors
            return 7;
        }
    }

    return 0;
}

sFileRule CGame_MVC2_D::GetRule(UINT16 nRuleId)
{
    sFileRule NewFileRule;

    nRuleId = (nRuleId & 0xFF00) == 0xFF00 ? (nRuleId & 0x00FF) : MVC2_D_UNITSORT[nRuleId];
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"PL%02X_DAT.BIN", nRuleId);

    NewFileRule.uUnitId = nRuleId;
    NewFileRule.uVerifyVar = MVC2_D_FILESZ[nRuleId];

    return NewFileRule;
}

sFileRule CGame_MVC2_D::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= MVC2_D_NUMUNIT_WITH_TEAMVIEW)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

void CGame_MVC2_D::InitDataBuffer()
{
    ppDataBuffer = new UINT16 * [nUnitAmt];
    memset(ppDataBuffer, NULL, sizeof(UINT16*) * nUnitAmt);
}

void CGame_MVC2_D::ClearDataBuffer()
{
    if (ppDataBuffer)
    {
        for (int i = 0; i < nUnitAmt; i++)
        {
            safe_delete_array(ppDataBuffer[i]);
        }

        safe_delete_array(ppDataBuffer);
    }
}

int CGame_MVC2_D::GetBasicOffset(UINT16 nPalId)
{
    // Each character by default gets 6 buttons worth of 8 palettes.  
    if (nPalId >= (8 * k_mvc2_character_coloroption_count))
    {
        // This palette is in the Extra group for this character
        return -1;
    }
    else
    {
        // This is a stock palette entry for this character: return the MOD so we know the 
        // particular offset within this button group.
        return (nPalId % 8);
    }
}

BOOL CGame_MVC2_D::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    if (ppDataBuffer[nUnitId])
    {
        //This should always be NULL
        return FALSE;
    }
    else
    {
        // Team view is a generated view not associated with a file: no need to load for it.
        if (nUnitId != MVC2_D_TEAMVIEW_LOCATION)
        {
            UINT32 nStart, nEnd;

            LoadedFile->Seek(0x08, CFile::begin);

            LoadedFile->Read(&nStart, 0x04);
            LoadedFile->Read(&nEnd, 0x04);

            int nDataSz = nEnd - nStart;

            if (nDataSz != MVC2_D_PALDATASZ[nUnitId])
            {
                return FALSE;
            }

            ppDataBuffer[nUnitId] = new UINT16[nDataSz / 2];

            LoadedFile->Seek(nStart, CFile::begin);

            LoadedFile->Read(ppDataBuffer[nUnitId], nDataSz);
        }

        //Set the redirect
        rgUnitRedir[nRedirCtr] = nUnitId;

        return TRUE;
    }

    return FALSE; // not reachable
}

BOOL CGame_MVC2_D::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    if (ppDataBuffer[nUnitId])
    {
        if (nUnitId != MVC2_D_TEAMVIEW_LOCATION)
        {
            UINT32 uPalPos, uPalSz;

            SaveFile->Seek(0x08, CFile::begin);
            SaveFile->Read(&uPalPos, 0x04);
            SaveFile->Read(&uPalSz, 0x04);

            uPalSz = uPalSz - uPalPos;

            if (uPalPos > SaveFile->GetLength())
            {
                return FALSE;
            }

            SaveFile->Seek(uPalPos, CFile::begin);
            SaveFile->Write(ppDataBuffer[nUnitId], uPalSz);
        }

        return TRUE;
    }

    return FALSE; // not reachable
}

COLORREF* CGame_MVC2_D::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    //Create a new palette
    COLORREF* NewPal = new COLORREF[MVC2_D_PALSZ];

    for (UINT16 i = 0; i < MVC2_D_PALSZ; i++)
    {
        NewPal[i] = ConvPal16(ppDataBuffer[nUnitId][(nPalId * 16) + i]);
    }

    return NewPal;
}

void CGame_MVC2_D::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), MVC2_D_PALSZ, nUnitId, nPalId);
    BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, MVC2_D_PALSZ);
}

BOOL CGame_MVC2_D::CreateExtraPal(UINT16 nUnitId, UINT16 nPalId, int nStart, int nInc, int nImgId, int nSepId, int nAmt)
{
    int nSpecOffs;

    nStart = EXTRA_OMNI + nStart;

    if (SpecSel(&nSpecOffs, nPalId, nStart, nInc, nAmt, nExtraAmt))
    {
        nTargetImgId = nImgId | 0xFF00;
        nImgUnitId = nUnitId;

        if (nExtraAmt == 6)
        {
            // I feel like nAmt in the next line should be nInc?
            SetSourcePal(0, nUnitId, nStart + (nPalId - nStart) % nAmt, 6, nInc);
        }
        else
        {
            SetSourcePal(0, nUnitId, nPalId, 1, 1);
        }

        return TRUE;
    }

    return FALSE;
}

void CGame_MVC2_D::UpdatePalData()
{
    for (UINT16 nPalCtr = 0; nPalCtr < MAX_PALETTES_DISPLAYABLE; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);
        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;
            UINT16 uAmt = srcDef->uPalSz;

            for (UINT16 nPICtr = 0; nPICtr < uAmt; nPICtr++)
            {
                if (m_fAllowTransparency)
                {
                    ppDataBuffer[srcDef->uUnitId][(srcDef->uPalId * 16) + nPICtr] = ConvCol16(crSrc[nPICtr]);
                }
                else
                {
                    // Force opaque
                    ppDataBuffer[srcDef->uUnitId][(srcDef->uPalId * 16) + nPICtr] = ((ConvCol16(crSrc[nPICtr]) & 0x0FFF) | 0xF000);
                }
            }

            //0 out the 1st index alpha flag
            ppDataBuffer[srcDef->uUnitId][(srcDef->uPalId * 16)] &= 0x0FFF;

            MarkPaletteDirty(srcDef->uUnitId, srcDef->uPalId);
            srcDef->bChanged = FALSE;
            rgFileChanged[srcDef->uUnitId] = TRUE;

            //Process supplement palettes
            if (bPostSetPalProc)
            {
                PostSetPal(srcDef->uUnitId, srcDef->uPalId);
            }
        }
    }
}

void CGame_MVC2_D::ValidateMixExtraColors(BOOL* pfChangesWereMade)
{
    ValidateAllPalettes(pfChangesWereMade, rgFileChanged);
}

void CGame_MVC2_D::ResetChangeFlag(UINT16 nUnitId)
{
    rgFileChanged[nUnitId] = FALSE;
}

void CGame_MVC2_D::PostSetPal(UINT16 nUnitId, UINT16 nPalId)
{
    int nBasicOffset = GetBasicOffset(nPalId);

    CString strMessage;
    strMessage.Format(L"CGame_MVC2_D::GetBasicOffset : Palette %u updated.  This palette is %s.\n", nPalId, (nBasicOffset != -1) ? L"basic" : L"Extra");
    OutputDebugString(strMessage);

    proc_supp(nUnitId, nPalId);
}

void CGame_MVC2_D::SetExtraImg(UINT16 nImgId, UINT16 nUnitId, UINT16 nPalId)
{
    nTargetImgId = nImgId + 0xFF00;

    SetSourcePal(0, nUnitId, nPalId, 1, 1);
}
