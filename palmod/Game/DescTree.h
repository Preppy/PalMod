#pragma once
#include "Default.h"

constexpr auto DESC_NODETYPE_TREE = 0;
constexpr auto DESC_NODETYPE_NODE = 1;

//Description tree definition

struct sDescNode
{
    wchar_t szDesc[MAX_DESCRIPTION_LENGTH] = L"uninit";

    uint32_t uUnitId = INVALID_UNIT_VALUE_16;
    uint32_t uPalId = 0;
};

struct sDescTreeNode
{
    wchar_t szDesc[MAX_DESCRIPTION_LENGTH] = L"uninit";

    uint8_t uChildType = DESC_NODETYPE_TREE;
    void* ChildNodes = nullptr;
    uint32_t uChildAmt = 0;
    // Solely used within CGameClassByDir
    // Allows for reusing units from loose ROM sets by specifying their offset location
    // within the new monolithic ROM composition
    size_t nROMShift = 0;
};

class CDescTree
{
private:
    sDescTreeNode* RootTree = nullptr;
    bool m_isInitialized = false;

public:
    CDescTree(sDescTreeNode* InputTree = NULL);
    ~CDescTree();

    void SetRootTree(sDescTreeNode* NewTree);
    void DumpTree(const sDescTreeNode* pTreeOfInterest);
    void FlushTree(sDescTreeNode* CurrTree);
    void FlushRootTree();
    sDescNode* GetDescNode(int nChildId, ...);
    sDescTreeNode* GetDescTree(int nChildId, ...);
};
