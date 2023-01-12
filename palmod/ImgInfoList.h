#pragma once

#include "stdafx.h"

//#ifndef IMGINFOLIST_H
//#define IMGINFOLIST_H
struct sImgDef
{
    uint16_t uImgWidth = 0;
    uint16_t uImgHeight = 0;

    uint8_t nCompressionType = 0;
    uint32_t uDataSize = 0;
    uint32_t uThisImgLoc = 0;
    WCHAR* pImgPath = nullptr;
    uint8_t* pImgData = nullptr;
};

struct ImgInfoNode
{
    uint16_t imgID = 0xFFFF;
    sImgDef* imgInfo = nullptr;
    ImgInfoNode* nextNode = nullptr;
};

class ImgInfoList
{
private:
    ImgInfoNode* headNode = nullptr;
    uint16_t listCount = 0;
    
    ImgInfoNode* makeNode(uint16_t imgID);
    ImgInfoNode* getToNode(uint16_t desiredImgID);

public:
    bool isEmpty();
    ImgInfoList();
    ~ImgInfoList();
    void listAllImgIDs();
    sImgDef* getImgDef(uint16_t imgID) { return (getToNode(imgID)->imgInfo); };
    bool valueExists(uint16_t desiredImgID);
    bool insertNode(uint16_t imgID);
    uint16_t size() { return listCount; };
};
//#endif
