#pragma once
#include "Default.h"

constexpr auto DESC_NODETYPE_TREE = 0;
constexpr auto DESC_NODETYPE_NODE = 1;

#define DESC_ENDGET -1

//Description tree definition

struct sDescNode
{
    TCHAR szDesc[MAX_DESCRIPTION_LENGTH] = _T("uninit");

    UINT16 uUnitId = INVALID_UNIT_VALUE;
    UINT16 uPalId = 0;
};

struct sDescTreeNode
{
    TCHAR szDesc[MAX_DESCRIPTION_LENGTH] = _T("uninit");

    UINT8 uChildType = DESC_NODETYPE_TREE;
    void* ChildNodes = nullptr;
    UINT16 uChildAmt = 0;
};

class CDescTree
{
private:
    sDescTreeNode* RootTree = nullptr;

public:
    CDescTree(sDescTreeNode* InputTree = NULL);
    ~CDescTree(void);

    void SetRootTree(sDescTreeNode* NewTree);
    void DumpTree(const sDescTreeNode* pTreeOfInterest);
    void FlushTree(sDescTreeNode* CurrTree);
    void FlushRootTree();
    sDescNode* GetDescNode(int nChildId, ...);
    sDescTreeNode* GetDescTree(int nChildId, ...);
};
