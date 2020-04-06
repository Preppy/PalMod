#include "stdafx.h"
#include "ImgInfoList.h"
//#ifndef IMGINFOLIST_CPP
//#define IMGINFOLIST_CPP

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
        OutputDebugString(strDebugInfo);
        return false;
    }

    strDebugInfo.Format("ImgInfoList::insertNode : Inserting node with imgID:0x%02X\n", newImgID);
    OutputDebugString(strDebugInfo);

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
    OutputDebugString(strDebugInfo);
    ImgInfoNode* currentNode = headNode;
    while (currentNode->nextNode != nullptr)
    {
        strDebugInfo.Format("0x%02X, ", currentNode->imgID);
        OutputDebugString(strDebugInfo);
        currentNode = currentNode->nextNode;
    }

    if (currentNode->nextNode == nullptr)
    {
        strDebugInfo.Format("0x%02X ]\n\n", currentNode->imgID);
        OutputDebugString(strDebugInfo);
    }
}

ImgInfoNode* ImgInfoList::getToNode(UINT16 desiredImgID)
{
    CString strDebugInfo;
    if (isEmpty())
    {
        strDebugInfo.Format("ImgInfoList::getToNode : There are no nodes in this list.\n");
        OutputDebugString(strDebugInfo);
        return nullptr;
    }

    ImgInfoNode* currentNode = headNode;

    while (desiredImgID != currentNode->imgID)
    {
        strDebugInfo.Format("ImgInfoList::getToNode : Looking for imgID:0x%02X, Currently looking at imgID:0x%02X \n", desiredImgID, currentNode->imgID);
        OutputDebugString(strDebugInfo);

        if (currentNode->nextNode == nullptr)
        {
            strDebugInfo.Format("ImgInfoList::getToNode : Search exhausted.\n");
            OutputDebugString(strDebugInfo);
            break;
        }
        else
        {
            currentNode = currentNode->nextNode;
        }
    }

    if (desiredImgID != currentNode->imgID)
    {
        strDebugInfo.Format("ImgInfoList::getToNode : Found imgID:0x%02X in list. \n", desiredImgID);
        OutputDebugString(strDebugInfo);
    }
    return currentNode;
}

bool ImgInfoList::valueExists(UINT16 desiredImgID)
{
    bool found = false;
    CString strDebugInfo;

    if (isEmpty())
    {
        strDebugInfo.Format("ImgInfoList::valueExists : There are no nodes in this list.\n");
        OutputDebugString(strDebugInfo);
        return found;
    }

    ImgInfoNode* currentNode = headNode;
    while (!found && currentNode)
    {
        strDebugInfo.Format("ImgInfoList::valueExists : Looking for imgID:0x%02X, Currently looking at imgID:0x%02X \n", desiredImgID, currentNode->imgID);
        OutputDebugString(strDebugInfo);

        if (currentNode->nextNode == nullptr)
        {
            strDebugInfo.Format("ImgInfoList::valueExists : Search exhausted.\n");
            OutputDebugString(strDebugInfo);
            if (currentNode->imgID == desiredImgID)
            {
                found = true;
            }

            return found;
        }

        if (desiredImgID == currentNode->imgID)
        {
            strDebugInfo.Format("ImgInfoList::valueExists : Search success found imgID:0x%02X\n", desiredImgID);
            OutputDebugString(strDebugInfo);
            return true;
        }
        else
        {
            currentNode = currentNode->nextNode;
        }
    }

    return found;
}

//#endif
