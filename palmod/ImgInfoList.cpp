#include "stdafx.h"
#include "ImgInfoList.h"
//#ifndef IMGINFOLIST_CPP
//#define IMGINFOLIST_CPP

#define IMGINFOLIST_DEBUG 0

ImgInfoList::ImgInfoList()
{   
}

ImgInfoList::~ImgInfoList()
{
    ImgInfoNode* del = headNode;
    while (headNode)
    {
        headNode = headNode->nextNode;

        if (del->imgInfo)
        {
            if (del->imgInfo->pImgData)
            {
                delete del->imgInfo->pImgData;
            }
            delete del->imgInfo;
        }

        delete del;
        del = headNode;
    }
}

bool ImgInfoList::insertNode(UINT16 newImgID)
{
    CString strDebugInfo;

    if (valueExists(newImgID))
    {
        strDebugInfo.Format("ImgInfoList::insertNode : Will not insert node; node with imgID:0x%02X already exists.\n", newImgID);
        OutputDebugString_DebugOnly(strDebugInfo);
        return false;
    }

    strDebugInfo.Format("ImgInfoList::insertNode : Inserting node with imgID:0x%02X\n", newImgID);
    OutputDebugString_DebugOnly(strDebugInfo);

    ImgInfoNode* toAdd = makeNode(newImgID);
    toAdd->nextNode = headNode;
    headNode = toAdd;
    listCount++;
    return true;
}

ImgInfoNode* ImgInfoList::makeNode(UINT16 newImgID)
{
    // New next node
    ImgInfoNode* infoNode = new ImgInfoNode;
    
    // Log imgID
    infoNode->imgID = newImgID;

    // Create Image Definition
    sImgDef* newImgDef = new sImgDef;
    infoNode->imgInfo = newImgDef;

    // Make nextNode nullptr
    infoNode->nextNode = nullptr;
    return infoNode;
}

bool ImgInfoList::isEmpty()
{
    return (listCount == 0);
}

void ImgInfoList::listAllImgIDs()
{
    if (!headNode)
    {
        return;
    }

    CString strDebugInfo;
    strDebugInfo.Format("\nImgInfoList::listAllImgIDs : Listing all imgIDs - [ ");
    OutputDebugString_DebugOnly(strDebugInfo);
    ImgInfoNode* currentNode = headNode;
    while (currentNode->nextNode != nullptr)
    {
        strDebugInfo.Format("0x%02X, ", currentNode->imgID);
        OutputDebugString_DebugOnly(strDebugInfo);
        currentNode = currentNode->nextNode;
    }

    if (currentNode->nextNode == nullptr)
    {
        strDebugInfo.Format("0x%02X ]\n\n", currentNode->imgID);
        OutputDebugString_DebugOnly(strDebugInfo);
    }
}

ImgInfoNode* ImgInfoList::getToNode(UINT16 desiredImgID)
{
    CString strDebugInfo;
    if (isEmpty())
    {
        strDebugInfo.Format("ImgInfoList::getToNode : There are no nodes in this list.\n");
        OutputDebugString_DebugOnly(strDebugInfo);
        return nullptr;
    }

    ImgInfoNode* currentNode = headNode;

    while (desiredImgID != currentNode->imgID)
    {
        strDebugInfo.Format("ImgInfoList::getToNode : Looking for desiredImgID:0x%02X, Currently looking at currentNode->imgID:0x%02X \n", desiredImgID, currentNode->imgID);
        OutputDebugString_DebugOnly(strDebugInfo);

        if (currentNode->nextNode == nullptr)
        {
            strDebugInfo.Format("\tImgInfoList::getToNode : Search exhausted.\n");
            OutputDebugString_DebugOnly(strDebugInfo);
            break;
        }
        else
        {
            currentNode = currentNode->nextNode;
        }
    }

    if (desiredImgID == currentNode->imgID)
    {
        strDebugInfo.Format("\tImgInfoList::getToNode : Found desiredImgID:0x%02X in list.\n", desiredImgID);
        OutputDebugString_DebugOnly(strDebugInfo);
    }
    return currentNode;
}

bool ImgInfoList::valueExists(UINT16 desiredImgID)
{
    bool found = false;
    CString strDebugInfo;

    if (isEmpty())
    {
        strDebugInfo.Format("\tImgInfoList::valueExists : There are no nodes in this list.\n");
        OutputDebugString_DebugOnly(strDebugInfo);
        return found;
    }

    ImgInfoNode* currentNode = headNode;
    while (!found && currentNode)
    {
        strDebugInfo.Format("\tImgInfoList::valueExists : Looking for desiredImgID:0x%02X, Currently looking at currentNode->imgID:0x%02X \n", desiredImgID, currentNode->imgID);
        OutputDebugString_DebugOnly(strDebugInfo);

        if (desiredImgID == currentNode->imgID)
        {
            found = true;
            break;
        }

        currentNode = currentNode->nextNode;
        strDebugInfo.Format("\t\tImgInfoList::valueExists : not here, checking next item.\n");
        OutputDebugString_DebugOnly(strDebugInfo);
    }

    if (found)
    {
        strDebugInfo.Format("\t\tImgInfoList::valueExists : Search success: found desiredImgID:0x%02X\n", desiredImgID);
    }
    else
    {
        strDebugInfo.Format("\t\tImgInfoList::valueExists : Search exhausted.\n");
    }
    OutputDebugString_DebugOnly(strDebugInfo);

    return found;
}

//#endif
