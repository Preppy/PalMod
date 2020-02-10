#include "StdAfx.h"
#include "DescTree.h"


CDescTree::CDescTree(sDescTreeNode * InputTree)
:RootTree(NULL)
{
	SetRootTree(InputTree);
}

CDescTree::~CDescTree(void)
{
	FlushRootTree();
}

void CDescTree::FlushRootTree()
{
	if(RootTree)
	{
		FlushTree(RootTree);

		delete RootTree;
	}
}

void CDescTree::FlushTree(sDescTreeNode * CurrTree)
{
	
	int nChildAmt = CurrTree->uChildAmt;

	if(CurrTree)
	{

		switch(CurrTree->uChildType)
		{
		case DESC_NODETYPE_TREE:
			{
				for(int nChildCtr = 0; nChildCtr < nChildAmt; nChildCtr++)
				{
					FlushTree(&((sDescTreeNode *)CurrTree->ChildNodes)[nChildCtr]);
				}

				delete [] (sDescTreeNode *)(CurrTree->ChildNodes);
			}
			break;

		case DESC_NODETYPE_NODE:
			{
				delete [] (sDescNode *)(CurrTree->ChildNodes);
			}
			break;
		}
	}

	
}

sDescTreeNode * CDescTree::GetDescTree(int nChildId, ...)
{
	if(nChildId == -1)
		return RootTree;

	sDescTreeNode * OutTree = RootTree;
	BOOL bChildIsNode = FALSE;

	int nCurrId = nChildId;
	va_list args;

	va_start(args, nChildId);

	while(nCurrId != -1 && !bChildIsNode)
	{
		switch(RootTree->uChildType)
		{
		case DESC_NODETYPE_NODE:
			bChildIsNode = TRUE;
			break;
		case DESC_NODETYPE_TREE:
			OutTree = &((sDescTreeNode *) OutTree->ChildNodes)[nCurrId];
			break;
		}

		nCurrId = va_arg(args, int);
	}

	va_end(args);

	return OutTree;
}

sDescNode * CDescTree::GetDescNode(int nChildId, ...)
{
	sDescTreeNode * CurrTree = RootTree;
	sDescNode * OutNode = NULL;

	int nCurrId = 0;
	BOOL bFoundNode = FALSE;

	va_list args;

	va_start(args, nChildId);

	nCurrId = nChildId;

	while(!bFoundNode && nCurrId != -1)
	{
		

		switch(CurrTree->uChildType)
		{
			case DESC_NODETYPE_NODE:
				{
					bFoundNode = TRUE;

					if(nCurrId < CurrTree->uChildAmt)
					{
						OutNode =  &((sDescNode *)CurrTree->ChildNodes)[nCurrId];
					}
				}
				break;

			case DESC_NODETYPE_TREE:
				{
					if(nCurrId < CurrTree->uChildAmt)
					{
						CurrTree =  &((sDescTreeNode *)CurrTree->ChildNodes)[nCurrId];
					}
				}
				break;
		}

		nCurrId = va_arg(args, int);
	}

	va_end(args);

	return OutNode;


}