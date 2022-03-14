#include "StdAfx.h"
#include "Game_KOF02UM_S_DIR.h"
#include "KOF02UM_S_DIR_DEF.h"
#include "..\PalMod.h"

CDescTree CGame_KOF02UM_S_DIR::MainDescTree = nullptr;

CGame_KOF02UM_S_DIR::CGame_KOF02UM_S_DIR(UINT32 nConfirmedROMSize, SupportedGamesList nKOF02UMROMSetToLoad)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX, 0 };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);

    _sCurrentGameFlag = nGameFlag = nKOF02UMROMSetToLoad;

    switch (nKOF02UMROMSetToLoad)
    {
    case KOF02UM_S_DIR_8888:
        SetColorMode(ColMode::COLMODE_RGBA8887);
        pButtonLabelSet = DEF_NOBUTTONS;
        _sCurrentGameUnits = KOF02UM_S_DIR_8888_UNITS;
        break;
    case KOF02UM_S_DIR_BGR555:
        SetColorMode(ColMode::COLMODE_BGR555_LE);
        pButtonLabelSet = DEF_NOBUTTONS;
        _sCurrentGameUnits = KOF02UM_S_DIR_BGR555_UNITS;
        break;
    default:
    case KOF02UM_S_DIR_RGB555:
        SetColorMode(ColMode::COLMODE_RGB555_BE);
        pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;
        _sCurrentGameUnits = KOF02UM_S_DIR_RGB555_UNITS;
        break;
    };

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = static_cast<uint32_t>(_sCurrentGameUnits.size());

    InitDataBuffer();

    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF02UM_S_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_KOF02UM_S_DIR::~CGame_KOF02UM_S_DIR()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

sFileRule CGame_KOF02UM_S_DIR::GetRule_8888(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", KOF02UM_S_DIR_8888_UNITS[nAdjustedUnitId].strFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = KOF02UM_S_DIR_8888_UNITS[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_KOF02UM_S_DIR::GetNextRule_8888()
{
    sFileRule NewFileRule = GetRule_8888(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= KOF02UM_S_DIR_8888_UNITS.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sFileRule CGame_KOF02UM_S_DIR::GetRule_BGR555(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", KOF02UM_S_DIR_BGR555_UNITS[nAdjustedUnitId].strFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = KOF02UM_S_DIR_BGR555_UNITS[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_KOF02UM_S_DIR::GetNextRule_BGR555()
{
    sFileRule NewFileRule = GetRule_BGR555(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= KOF02UM_S_DIR_BGR555_UNITS.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sFileRule CGame_KOF02UM_S_DIR::GetRule_RGB555(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", KOF02UM_S_DIR_RGB555_UNITS[nAdjustedUnitId].strFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = KOF02UM_S_DIR_RGB555_UNITS[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_KOF02UM_S_DIR::GetNextRule_RGB555()
{
    sFileRule NewFileRule = GetRule_RGB555(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= KOF02UM_S_DIR_RGB555_UNITS.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

void CGame_KOF02UM_S_DIR::InitializeStatics()
{
    sDescTreeNode* NewTree = new sDescTreeNode;
    
    uint32_t nPaletteCount = InitDescTreeForFileSet(NewTree);

    MainDescTree.SetRootTree(NewTree);
}

LPCWSTR CGame_KOF02UM_S_DIR::GetGameName()
{
    switch (_sCurrentGameFlag)
    {
    case KOF02UM_S_DIR_8888:
        return L"King of Fighters 2002UM (Steam, RGBA8888 parts)";
    case KOF02UM_S_DIR_BGR555:
        return L"King of Fighters 2002UM (Steam, BGR555 parts)";
    default:
    case KOF02UM_S_DIR_RGB555:
        return L"King of Fighters 2002UM (Steam, RGB555 parts)";
    };
}
