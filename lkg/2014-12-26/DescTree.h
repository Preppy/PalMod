#pragma once
#include "Default.h"

#define DESC_NODETYPE_TREE 0
#define DESC_NODETYPE_NODE 1

#define DESC_ENDGET -1

//Description tree definition

struct sDescNode
{
	CHAR szDesc[MAX_DESC];

	UINT8 uUnitId;
	UINT16 uPalId;
};

struct sDescTreeNode
{
	CHAR szDesc[MAX_DESC];

	UINT8 uChildType;
	void * ChildNodes;
	UINT16 uChildAmt;
};

class CDescTree
{
private:
	sDescTreeNode * RootTree;
public:
	CDescTree(sDescTreeNode * InputTree = NULL);
	~CDescTree(void);

	void SetRootTree(sDescTreeNode * NewTree){ RootTree = NewTree;};
	void FlushTree(sDescTreeNode * CurrTree);
	void FlushRootTree();
	sDescNode * GetDescNode(int nChildId, ...);
	sDescTreeNode * GetDescTree(int nChildId, ...);
};
