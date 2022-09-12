#include "StdAfx.h"
#include "Game_BlazBlueCF_S.h"

std::map<uint32_t, uint8_t> mapSpriteIdToGameId =
{
    { indexBBCFSprites_AmaneNishiki,         20 },
    { indexBBCFSprites_Arakune,               7 },
    { indexBBCFSprites_Azrael,               22 },
    { indexBBCFSprites_BangShishigami,        8 },
    { indexBBCFSprites_Bullet,               21 },
    { indexBBCFSprites_CarlClover,            9 },
    { indexBBCFSprites_CelicaAMercury,       26 },
    { indexBBCFSprites_Es,                   33 },
    { indexBBCFSprites_Hakumen,              10 },
    { indexBBCFSprites_Hazama,               13 },
    { indexBBCFSprites_HibikiKohaku,         28 },   //-2 Colors
    { indexBBCFSprites_IronTager,             5 },
    { indexBBCFSprites_Izanami,              31 },   //-1 Colors
    { indexBBCFSprites_Izayoi,               19 },
    { indexBBCFSprites_JinKisaragi,           1 },
    { indexBBCFSprites_Jubei,                35 },
    { indexBBCFSprites_KaguraMutsuki,        23 },
    { indexBBCFSprites_Kokonoe,              24 },
    { indexBBCFSprites_Lambda11,             27 },
    { indexBBCFSprites_LitchiFayeLing,        6 },
    { indexBBCFSprites_MaiNatsume,           34 },   //-1 Colors
    { indexBBCFSprites_MakotoNanaya,         15 },
    { indexBBCFSprites_Mu12,                 14 },
    { indexBBCFSprites_NaotoKurogane,        30 },   //-1 Colors
    { indexBBCFSprites_NineThePhantom,       29 },   //-2 Colors
    { indexBBCFSprites_NoelVermillion,        2 },
    { indexBBCFSprites_Nu13,                 11 },
    { indexBBCFSprites_PlatinumtheTrinity,   17 },
    { indexBBCFSprites_RachelAlucard,         3 },
    { indexBBCFSprites_RagnaTheBloodedge,     0 },
    { indexBBCFSprites_ReliusClover,         18 },
    { indexBBCFSprites_Susanoo,              32 },
    { indexBBCFSprites_Taokaka,               4 },
    { indexBBCFSprites_TsubakiYayoi,         12 },
    { indexBBCFSprites_ValkenhaynRHellsing,  16 },
    { indexBBCFSprites_YuukiTerumi,          25 },
};

uint8_t TranslatePalModSpriteIdToBBCFGameId(uint32_t nSpriteId)
{
    std::map<uint32_t, uint8_t>::iterator it;
    
    it = mapSpriteIdToGameId.find(nSpriteId);

    if (it != mapSpriteIdToGameId.end())
    {
        return it->second;
    }
    else
    {
        OutputDebugString(L"Error: invalid BBCF ID.\r\n");
        return 0;
    }
}

uint32_t TranslateBBCFGameIdToPalModSpriteId(uint8_t nGameId)
{
    for (auto it = mapSpriteIdToGameId.begin(); it != mapSpriteIdToGameId.end(); it++)
    {
        if (it->second == nGameId)
        {
            return it->first;
        }
    }

    OutputDebugString(L"Error: invalid BBCF ID.\r\n");
    return 0;
}
