#pragma once

#include <afxole.h> // for drag and drop support

class CPalDropTarget : public COleDropTarget
{
public:
    DROPEFFECT OnDragEnter(CWnd* pWnd, COleDataObject* pDataObject, DWORD dwKeyState, CPoint point) override;
    BOOL OnDrop(CWnd* pWnd, COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point) override;
    // maintain state until we have a new enter event
    DROPEFFECT OnDragOver(CWnd* pWnd, COleDataObject* pDataObject, DWORD dwKeyState, CPoint point) override;

private:
    DROPEFFECT m_currentEffectState = DROPEFFECT_NONE;
    DWORD m_dwLastKeyState = 0;

    bool _IsDataObjectFromFirefox(COleDataObject* pDataObject, bool& fIsSupportable, _In_opt_ CString* pstrFilename = nullptr);
};
