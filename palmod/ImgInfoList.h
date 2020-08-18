#pragma once

#include "stdafx.h"

//#ifndef IMGINFOLIST_H
//#define IMGINFOLIST_H
struct sImgDef
{
    UINT16 uImgWidth = 0;
    UINT16 uImgHeight = 0;

    UINT8 nCompressionType = 0;
    UINT32 uDataSize = 0;
    UINT32 uThisImgLoc = 0;
    UINT8* pImgData = nullptr;
};

struct ImgInfoNode
{
    UINT16 imgID = 0xFFFF;
    sImgDef* imgInfo = nullptr;
    ImgInfoNode* nextNode = nullptr;
};

class ImgInfoList
{
private:
    ImgInfoNode* headNode = nullptr;
    UINT16 listCount = 0;
    
    ImgInfoNode* makeNode(UINT16 imgID);
    ImgInfoNode* getToNode(UINT16 desiredImgID);

public:
    bool isEmpty();
    ImgInfoList();
    ~ImgInfoList();
    void listAllImgIDs();
    sImgDef* getImgDef(UINT16 imgID) { return (getToNode(imgID)->imgInfo); };
    bool valueExists(UINT16 desiredImgID);
    bool insertNode(UINT16 imgID);
};
//#endif
