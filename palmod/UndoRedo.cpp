#include "stdafx.h"
#include "UndoRedo.h"

CUndoRedo::CUndoRedo()
{
}

CUndoNode* CUndoRedo::NewNode(CUndoNode** start, CUndoNode** tail)
{
    if (GetCount(*start) >= UR_LIMIT)
    {
        DeleteTail(start, tail);
    }

    CUndoNode* newnode;

    BOOL fIsTail = (*start == NULL);

    newnode = new CUndoNode;
    newnode->next = *start;
    *start = newnode;

    if (fIsTail) *tail = *start;

    return newnode;
}

void CUndoRedo::Insert(CUndoNode* newnode, CUndoNode** start, CUndoNode** tail)
{
    if (GetCount(*start) >= UR_LIMIT)
    {
        DeleteTail(start, tail);
    }

    BOOL fIsTail = (*start == NULL);

    newnode->next = *start;
    *start = newnode;

    if (fIsTail) *tail = *start;
}

void CUndoRedo::Delete(CUndoNode** start, CUndoNode** tail)
{
    CUndoNode* delnode;

    if (*start == *tail)
    {
        delete* start;
        *start = NULL;
        *tail = NULL;

        return;
    }

    if (*start)
    {
        delnode = *start;
        *start = delnode->next;
        delete delnode;
    }
}

void CUndoRedo::DeleteTail(CUndoNode** start, CUndoNode** tail)
{
    if (*start == *tail)
    {
        delete* tail;
        *start = NULL;
        *tail = NULL;

        return;
    }
    else if (*tail == NULL)
    {
        return;
    }

    CUndoNode* delnodenext = *start;
    CUndoNode* delnode = nullptr;

    while (delnodenext != *tail)
    {
        delnode = delnodenext;
        delnodenext = delnodenext->next;
    }

    if (delnode)
    {
        delnode->next = NULL;
    }

    delete* tail;
    *tail = delnode;
}

CUndoNode* CUndoRedo::Pop(CUndoNode** start, CUndoNode** tail)
{
    if (*start)
    {
        if (*start == *tail)
        {

            *tail = NULL;
        }

        CUndoNode* popnode = *start;
        *start = popnode->next;
        return popnode;
    }
    else
    {
        return NULL;
    }
}

int CUndoRedo::GetCount(CUndoNode* start)
{
    CUndoNode* countnode;
    int iPos = 0;

    countnode = start;

    while (countnode)
    {
        iPos++;

        countnode = countnode->next;
    }

    return iPos;
}

void CUndoRedo::DeleteList(CUndoNode** start)
{
    CUndoNode* delnode;
    CUndoNode* delnodenext;

    delnodenext = *start;

    while (delnodenext)
    {
        delnode = delnodenext;
        delnodenext = delnode->next;
        delete delnode;
    }

    *start = NULL;
}
