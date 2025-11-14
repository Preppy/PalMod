#pragma once

#include <afxole.h> // for drag and drop support

class CPalDropTarget : public COleDropTarget
{
public:
    DROPEFFECT OnDragEnter(CWnd* pWnd, COleDataObject* pDataObject, DWORD dwKeyState, CPoint point) override;
    BOOL OnDrop(CWnd* pWnd, COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point) override;
    // maintain state until we have a new enter event
    DROPEFFECT OnDragOver(CWnd*, COleDataObject*, DWORD, CPoint) override{ return m_currentEffectState; };

private:
    DROPEFFECT m_currentEffectState = DROPEFFECT_NONE;

    bool _IsDataObjectFromFirefox(COleDataObject* pDataObject, bool& fIsSupportable, _In_opt_ CString* pstrFilename = nullptr);
};
