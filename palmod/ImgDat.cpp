#include "stdafx.h"
#include "ImgDat.h"
#include "Game/GameDef.h"
#include "lodepng/lodepng.h"
#include "PalMod.h"

#define IMGDAT_DEBUG 1

void OutputDebugString_ImgDat(LPCWSTR pszString) {
#if IMGDAT_DEBUG
    OutputDebugString(pszString);
#else
#endif
}

typedef std::map<uint16_t, ImgInfoList*>::iterator imgMapIter;

CImgDat::CImgDat() {}

CImgDat::~CImgDat() {
    if (!imageBufferFlushed) {
      FlushImageBuffer();
    }
}

bool CImgDat::FlushImageBuffer() {
    if (imageBufferFlushed) {
      return imageBufferFlushed;
    }

    if (nImgMap) {
      for (imgMapIter it = nImgMap->begin(); it != nImgMap->end(); ++it) {
        if (it->second) {
          delete it->second;
        }
      }

      if (!nImgMap->empty()) {
        nImgMap->clear();
      }
    }

    safe_delete(nImgMap);

    imageBufferPrepped = false;
    imageBufferFlushed = true;

    return true;
}

bool CImgDat::PrepImageBuffer(std::vector<uint16_t> prgGameImageSet, const uint8_t uGameFlag) {
    if (!imageBufferFlushed) {
      imageBufferFlushed = FlushImageBuffer();
    }

#if IMGDAT_DEBUG
    CString strDebugInfo;
    OutputDebugString(L"CImgDat::PrepImageBuffer : Prepping Image Buffer \n");
#endif

    if (prgGameImageSet.empty()) {
        OutputDebugString(L"CImgDat::PrepImageBuffer : WARNING: Unhandled game id.  You won't get images for this game.\n");
        return false;
    }

    nImgMap = new std::map<uint16_t, ImgInfoList*>;

    // We have an individual entry here for every game so we can optimize image loads
    for (uint16_t nUnitCtr = 0; nUnitCtr < prgGameImageSet.size(); nUnitCtr++) {
        uint16_t nImageUnitCounterToUse = prgGameImageSet.at(nUnitCtr);

#if IMGDAT_DEBUG
        strDebugInfo.Format(L"\tCImgDat::PrepImageBuffer : Trying to insert unitID: 0x%02X into nImgMap\n", nImageUnitCounterToUse);
        OutputDebugString(strDebugInfo);
#endif
        nImgMap->insert({ nImageUnitCounterToUse, new ImgInfoList });
    }

#if IMGDAT_DEBUG
    OutputDebugString(L"CImgDat::PrepImageBuffer : Prepping Image Buffer is complete.\n");
#endif

    imageBufferFlushed = false;
    return true;
}

sImgDef* CImgDat::GetImageDef(uint32_t uUnitId, uint16_t uImgId) {
#if IMGDAT_DEBUG
    CString strDebugInfo;
    strDebugInfo.Format(L"CImgDat::GetImageDef : Attempting to get ImageDef for unit 0x%02x img 0x%x.\n", uUnitId, uImgId);
    OutputDebugString(strDebugInfo);
#endif

    //if ((uUnitId >= uCurrUnitAmt) || (uImgId > uCurrImgAmt))

    if (nImgMap) {
#if IMGDAT_DEBUG
        strDebugInfo.Format(L"\tCImgDat::GetImageDef : nImgMap exists containing 0x%x items \n", nImgMap->size() );
        OutputDebugString(strDebugInfo);
#endif

        imgMapIter it = nImgMap->find((uint16_t)uUnitId);
        if (it != nImgMap->cend()) {
            // it->second->listAllImgIDs();
#if IMGDAT_DEBUG
            strDebugInfo.Format(L"\tCImgDat::GetImageDef : ppImgData[0x%02X] exists containings 0x%x items\n", uUnitId, it->second->size());
            OutputDebugString(strDebugInfo);
#endif
            if (it->second->valueExists(uImgId)) {
#if IMGDAT_DEBUG
                strDebugInfo.Format(L"\tCImgDat::GetImageDef : Found imgID 0x%02X in list for unitID 0x%02X \n", uImgId, uUnitId);
                OutputDebugString(strDebugInfo);
#endif
                return it->second->getImgDef(uImgId);
            }
#if IMGDAT_DEBUG
            strDebugInfo.Format(L"\t\tCImgDat::GetImageDef : Could not find imgID:0x%02X in list for unitID:0x%02X\n", uImgId, uUnitId);
            OutputDebugString(strDebugInfo);
#endif
        } else {
            if ((uUnitId != INVALID_UNIT_VALUE) && (uUnitId != INVALID_UNIT_VALUE32)) {
                CString strWarning;
                strWarning.Format(L"\n    **************\nCImgDat::GetImageDef : WARNING: UnitId 0x%02x was not found in the image map for this game.  Did you forget to update this game's array in gamedef.h?\n    **************\n", uUnitId);
                OutputDebugString(strWarning);
            }
        }
    }

#if IMGDAT_DEBUG
    OutputDebugString(L"\tCImgDat::GetImageDef : No image found\n");
#endif
    return nullptr;
}

uint8_t* CImgDat::GetImgData(sImgDef* pCurrImg, uint8_t uGameFlag, uint16_t nCurrentUnitId, uint8_t nCurrentImgId) {
    if (pCurrImg->pImgData) {
        return pCurrImg->pImgData;
    }

    switch (pCurrImg->nCompressionType) {
    case 0: // "RAW" 8 bit indexed file
    {
        CFile file;
        if (!file.Open(pCurrImg->pImgPath, CFile::modeRead | CFile::typeBinary)) {
            return nullptr;
        }
        UINT dataSize = (UINT)file.GetLength();
        uint8_t* pNewImgData = new uint8_t[dataSize];
        file.Read(pNewImgData, dataSize);

        pCurrImg->pImgData = pNewImgData;
        return pNewImgData;
        break;
    }
    case 1: // PNG file
    {
        CFile file;
        if (!file.Open(pCurrImg->pImgPath, CFile::modeRead | CFile::typeBinary)) {
            return nullptr;
        }
        UINT dataSize = (UINT)file.GetLength();
        uint8_t* pngData = new uint8_t[dataSize];
        file.Read(pngData, dataSize);

        unsigned width, height;
        unsigned error = lodepng_decode_memory(&pCurrImg->pImgData, &width, &height, pngData, dataSize, LCT_PALETTE, 8);
        if(error) OutputDebugString(L"CImgDat::GetImgData: lodepng::decode error\n");

        return pCurrImg->pImgData;
        break;
    }
    default:
        OutputDebugString(L"CImgDat::GetImgData : WARNING: Unhandled compression type.  Skipping loading this image\n");
        return nullptr;
    }

    return nullptr;
}

bool CImgDat::sameGameAlreadyLoaded(uint8_t uGameFlag, uint8_t uImgGameFlag) {
    return (uImgGameFlag == nCurImgGameFlag) && (uGameFlag == nCurGameFlag);
}

BOOL CImgDat::ParsePreviewName(LPCWSTR filename, uint16_t *uCurrUnitId, uint8_t *uCurrImgId, uint16_t  *uCurrImgWidth, uint16_t *uCurrImgHeight, bool *isPng) {
    std::wstring strFile(filename);
    std::wstring d1 = L"-unit-";
    std::wstring d2 = L"-imgid-";
    std::wstring d3 = L"-W-";
    std::wstring d4 = L"-H-";
    size_t start = 0;
    size_t end = strFile.find(d1);
    // not validating if game name field is correct
    start = end + d1.length();
    end = strFile.find(d2, start);
    *uCurrUnitId = (uint16_t)std::stoul(strFile.substr(start, end - start), &start, 16);
    start = end + d2.length();
    end = strFile.find(d3, start);
    *uCurrImgId = (uint8_t)std::stoul(strFile.substr(start, end - start), &start, 16);
    start = end + d3.length();
    end = strFile.find(d4, start);
    *uCurrImgWidth = (uint16_t)std::stoul(strFile.substr(start, end - start));
    start = end + d4.length();
    *uCurrImgHeight = (uint16_t)std::stoul(strFile.substr(start));
    // naive
    start = strFile.rfind(L'.');
    std::wstring extension = strFile.substr(start + 1);
    *isPng = extension == L"png" || extension == L"PNG";

    if(end == std::string::npos){
        return false;
    }
    return true;
}


BOOL CImgDat::LoadGameImages(wchar_t* lpszLoadFile, uint8_t uGameFlag, uint8_t uImgGameFlag, uint32_t uGameUnitAmt, std::vector<uint16_t> prgGameImageSet, BOOL fLoadAll)
{
    uint8_t uNumGames = 0xFF;

    CString strDebugInfo;
    strDebugInfo.Format(L"CImgDat::LoadGameImages : gameFlag is '%u' (\"%s\") and gameImageFlag is '%u'.  For 0x%02x game units we have 0x%02x image units.\n", uGameFlag, g_GameFriendlyName[uGameFlag], uImgGameFlag, uGameUnitAmt, prgGameImageSet.size());
    OutputDebugString(strDebugInfo);

    if (sameGameAlreadyLoaded(uGameFlag, uImgGameFlag) || (prgGameImageSet.empty())) {
        return TRUE;
    }
    else {
#if IMGDAT_DEBUG
        strDebugInfo.Format(L"CImgDat::LoadGameImages : New game being loaded gameFlag:0x%02X with imgGameFlag:0x%02X, flushing image buffer.\n", uGameFlag, uImgGameFlag);
        OutputDebugString(strDebugInfo);
#endif

        imageBufferFlushed = false;
        imageBufferFlushed = FlushImageBuffer();
#if IMGDAT_DEBUG
        strDebugInfo.Format(L"CImgDat::LoadGameImages : Image buffer has been flushed. imageBuffer prepped: %s \n", imageBufferPrepped ? L"true" : L"false");
        OutputDebugString(strDebugInfo);
#endif
    }

    m_fOnTheFly = !fLoadAll;

    if (!imageBufferFlushed) {
        imageBufferFlushed = FlushImageBuffer();
    }
    imageBufferPrepped = PrepImageBuffer(prgGameImageSet, uGameFlag);


    // need a g_ImgSectionFriendlyName list to look up uImgGameFlag in
    // for better folder names, eventually
    WIN32_FIND_DATAW FindFileData;
    HANDLE hFind;
    CString path;
    GetModuleFileName(NULL, path.GetBufferSetLength(MAX_PATH), MAX_PATH);
    path = path.Left(path.ReverseFind(L'\\') + 1);
    path.Format(L"%s\\Previews\\%s\\*", (LPCWSTR)path, g_IMGDatSectionName[uImgGameFlag]);
    hFind = FindFirstFile(path, &FindFileData);

    if (INVALID_HANDLE_VALUE != hFind) {
        do {
            if (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
                continue;
            }
            WCHAR* filename = FindFileData.cFileName;
            uint16_t uCurrUnitId;
            uint8_t uCurrImgId;
            uint16_t uCurrImgWidth;
            uint16_t uCurrImgHeight;
            bool isPng;
        
            ParsePreviewName(filename, &uCurrUnitId, &uCurrImgId, &uCurrImgWidth, &uCurrImgHeight, &isPng);
        
#if IMGDAT_DEBUG
            strDebugInfo.Format(L"\tCImgDat::LoadGameImages : Seeing UnitID:0x%02X imgID:0x%02X \n", uCurrUnitId, uCurrImgId);
            OutputDebugString_ImgDat(strDebugInfo);
#endif
        
            std::map<uint16_t, ImgInfoList*>::iterator it = nImgMap->find(uCurrUnitId);
            if (nImgMap->find(uCurrUnitId) != nImgMap->cend()) {
                it->second->insertNode(uCurrImgId);
                
#if IMGDAT_DEBUG
                strDebugInfo.Format(L"\tCImgDat::LoadGameImages : node[0x%X][0x%X] Inserted\n", uCurrUnitId, uCurrImgId);
                OutputDebugString_ImgDat(strDebugInfo);
#endif
                
                sImgDef* pCurrImg = it->second->getImgDef(uCurrImgId);
                pCurrImg->pImgData = nullptr;
                pCurrImg->uImgWidth = uCurrImgWidth;
                pCurrImg->uImgHeight = uCurrImgHeight;
                pCurrImg->nCompressionType = isPng; // abusing legacy tv imgdat field
                pCurrImg->uDataSize = 0; // legacy tv imgdat field
                pCurrImg->pImgPath = new WCHAR[path.GetLength() + wcslen(filename)];
                wcscpy(pCurrImg->pImgPath, path);
                wcscpy(&pCurrImg->pImgPath[path.GetLength() - 1], filename);
                
#if IMGDAT_DEBUG
                strDebugInfo.Format(L"\tCImgDat::LoadGameImages : Image info for unit 0x%02X img 0x%02X has been loaded.\n", uCurrUnitId, uCurrImgId);
                OutputDebugString_ImgDat(strDebugInfo);
#endif
                if (fLoadAll) {
                    GetImgData(pCurrImg, uReadGameFlag, uCurrUnitId, uCurrImgId);
                }
            }
            
            nCurGameFlag = uGameFlag;
            nCurImgGameFlag = uImgGameFlag;
        } while (FindNextFile(hFind, &FindFileData) != 0);

        return TRUE;
    }
    else {
        strDebugInfo.Format(L"\tCImgDat::LoadGameImages : FindFirstFileW failed for game path: %s \n", (LPCWSTR)path);
        OutputDebugString_ImgDat(strDebugInfo);

        return FALSE;
    }
}
