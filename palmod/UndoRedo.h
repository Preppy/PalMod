#pragma once

constexpr auto UR_LIMIT = 100;

class CUndoNode
{
public:
    CUndoNode()
    {
    };

    ~CUndoNode()
    {
        safe_delete_array(rgPalData);
        safe_delete_array(rgBasePalData);
    };

    CUndoNode& operator=(const CUndoNode& rhc)
    {
        if (this != &rhc)
        {
            this->nPalIndex = rhc.nPalIndex;
            this->nPalSz = rhc.nPalSz;
            this->rgPalData = rhc.rgPalData;
            this->rgBasePalData = rhc.rgBasePalData;

            return *this;
        }
    }

    COLORREF* rgPalData = nullptr;
    COLORREF* rgBasePalData = nullptr;

    int nPalSz = 0;
    int nPalIndex = 0;

    CUndoNode* next = nullptr;
};

class CUndoRedo
{
public:
    CUndoRedo();
    ~CUndoRedo() { Clear(); }

    CUndoNode* NewUndo() { return NewNode(&UndoStart, &UndoTail); }
    CUndoNode* NewRedo() { return NewNode(&RedoStart, &RedoTail); }

    CUndoNode* PopUndo() { return Pop(&UndoStart, &UndoTail); }
    CUndoNode* PopRedo() { return Pop(&RedoStart, &RedoTail); }

    int        GetUndoCount() { return GetCount(UndoStart); }
    int        GetRedoCount() { return GetCount(RedoStart); }

    void    DeleteRedoList() { DeleteList(&RedoStart); RedoTail = NULL; }

    void    Clear() { DeleteUndoList(); DeleteRedoList(); }

private:
    CUndoNode* UndoStart = nullptr;
    CUndoNode* RedoStart = nullptr;

    CUndoNode* UndoTail = nullptr;
    CUndoNode* RedoTail = nullptr;

    CUndoNode* NewNode(CUndoNode** start, CUndoNode** tail);

    void Insert(CUndoNode* newnode, CUndoNode** start, CUndoNode** tail);
    void InsertUndo(CUndoNode* newnode) { Insert(newnode, &UndoStart, &UndoTail); }
    void InsertRedo(CUndoNode* newnode) { Insert(newnode, &RedoStart, &RedoTail); }

    CUndoNode* Pop(CUndoNode** start, CUndoNode** tail);

    void    Delete(CUndoNode** start, CUndoNode** tail);
    void    DeleteUndo() { Delete(&UndoStart, &UndoTail); }
    void    DeleteRedo() { Delete(&RedoStart, &RedoTail); }

    void    DeleteTail(CUndoNode** start, CUndoNode** tail);
    void    DeleteUndoTail() { DeleteTail(&UndoStart, &UndoTail); }
    void    DeleteRedoTail() { DeleteTail(&RedoStart, &RedoTail); }

    void    DeleteList(CUndoNode** start);
    void    DeleteUndoList() { DeleteList(&UndoStart); UndoTail = NULL; }

    int     GetCount(CUndoNode* start);
};

//  Hotkey Start
