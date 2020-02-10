#include "stdafx.h"
#include "UndoRedo.h"

CUndoRedo::CUndoRedo()
{
	UndoStart = NULL;
	RedoStart = NULL;

	UndoTail = NULL;
	RedoTail = NULL;
}

CUndoNode * CUndoRedo::NewNode(CUndoNode **start, CUndoNode **tail)
{	
	if(GetCount(*start) >= UR_LIMIT)
		DeleteTail(start, tail);

	CUndoNode * newnode;

	BOOL bIsTail = *start == NULL ? TRUE : FALSE;

	newnode = new CUndoNode;
	newnode->next = *start;
	*start = newnode;

	if(bIsTail) *tail = *start;

	return newnode;
}

void CUndoRedo::Insert(CUndoNode *newnode, CUndoNode **start, CUndoNode **tail)
{	
	if(GetCount(*start) >= UR_LIMIT)
		DeleteTail(start, tail);

	BOOL bIsTail = *start == NULL ? TRUE : FALSE;

	newnode->next = *start;
	*start = newnode;

	if(bIsTail) *tail = *start;
	
}

void CUndoRedo::Delete(CUndoNode **start, CUndoNode **tail)
{
	CUndoNode *delnode;

	if(*start == *tail)
	{
		delete *start;
		*start = NULL;
		*tail = NULL;

		return;
	}

	if(*start)
	{
		delnode = *start;
		*start = delnode->next;
		delete delnode;
	}
	

	
}

void CUndoRedo::DeleteTail(CUndoNode **start, CUndoNode **tail)
{
	CUndoNode * delnode;
	CUndoNode * delnodenext;

	if(*start == *tail)
	{

		delete *tail;
		*start = NULL;
		*tail = NULL;

		return;
	}
	else if(*tail == NULL)
		return;

	delnodenext = *start;
	while(delnodenext != *tail)
	{
		delnode = delnodenext;
		delnodenext = delnodenext->next;
	}

	delnode->next = NULL;

	delete *tail;
	*tail = delnode;
}

CUndoNode * CUndoRedo::Pop(CUndoNode **start, CUndoNode **tail)
{
	CUndoNode *popnode;

	if(*start)
	{
		if(*start == *tail)
		{

			*tail = NULL;
		}

		popnode = *start;
		*start = popnode->next;
		return popnode;
	}
	else
		return NULL;
}


int CUndoRedo::GetCount(CUndoNode *start)
{
	CUndoNode * countnode;
	int i = 0;

	countnode = start;

	while(countnode)
	{
		i++;

		countnode = countnode->next;
	}

	return i;
}

void CUndoRedo::DeleteList(CUndoNode **start)
{
	CUndoNode * delnode;
	CUndoNode * delnodenext;

	delnodenext = *start;

	while(delnodenext)
	{
		delnode = delnodenext;
		delnodenext = delnode->next;
		delete delnode;
	}

	*start = NULL;
}
