#include "StdAfx.h"
#include "ImgDat.h"
#include "RLEData.h"
#include "Game\GameRegistry.h"
#include "PalMod.h"

#define IMGDAT_DEBUG 0

void OutputDebugString_ImgDat(LPCWSTR pszString)
{
#if IMGDAT_DEBUG
    OutputDebugString(pszString);
#else
#endif
}

typedef std::map<uint16_t, ImgInfoList*>::iterator imgMapIter;

CImgDat::CImgDat()
{
}

CImgDat::~CImgDat()
{
    if (!imageBufferFlushed)
    {
        FlushImageBuffer();
    }
    CloseImgFile();
}

bool CImgDat::FlushImageBuffer()
{
    if (imageBufferFlushed)
    {
        return imageBufferFlushed;
    }

    if (nImgMap)
    {
        for (imgMapIter it = nImgMap->begin(); it != nImgMap->end(); ++it)
        {
            safe_delete(it->second);
        }

        if (!nImgMap->empty())
        {
            nImgMap->clear();
        }
    }

    safe_delete(nImgMap);

    imageBufferPrepped = false;
    imageBufferFlushed = true;

    return true;
}

bool CImgDat::PrepImageBuffer(std::vector<uint16_t> prgGameImageSet, const uint8_t uGameFlag)
{
    if (!imageBufferFlushed)
    {
        imageBufferFlushed = FlushImageBuffer();
    }

#if IMGDAT_DEBUG
    CString strDebugInfo;
    OutputDebugString(L"CImgDat::PrepImageBuffer : Prepping Image Buffer \n");
#endif

    if (prgGameImageSet.empty())
    {
        OutputDebugString(L"CImgDat::PrepImageBuffer : WARNING: Unhandled game id.  You won't get images for this game.\n");
        return false;
    }

    nImgMap = new std::map<uint16_t, ImgInfoList*>;

    // We have an individual entry here for every game so we can optimize image loads
    for (uint16_t nUnitCtr = 0; nUnitCtr < prgGameImageSet.size(); nUnitCtr++)
    {
        const uint16_t nImageUnitCounterToUse = prgGameImageSet.at(nUnitCtr);

#if IMGDAT_DEBUG
        strDebugInfo.Format(L"\tCImgDat::PrepImageBuffer : Trying to insert unitID: 0x%02X into nImgMap\n", nImageUnitCounterToUse);
        OutputDebugString(strDebugInfo);
#endif
        if (nImgMap->find(nImageUnitCounterToUse) == nImgMap->cend())
        {
            nImgMap->insert({ nImageUnitCounterToUse, new ImgInfoList });
        }
    }

#if IMGDAT_DEBUG
    OutputDebugString(L"CImgDat::PrepImageBuffer : Prepping Image Buffer is complete.\n");
#endif

    imageBufferFlushed = false;
    return true;
}

sImgDef* CImgDat::GetImageDef(uint32_t uUnitId, uint16_t uImgId)
{
#if IMGDAT_DEBUG
    CString strDebugInfo;
    strDebugInfo.Format(L"CImgDat::GetImageDef : Attempting to get ImageDef for unit 0x%02x img 0x%x.\n", uUnitId, uImgId);
    OutputDebugString(strDebugInfo);
#endif

    //if ((uUnitId >= uCurrUnitAmt) || (uImgId > uCurrImgAmt))

    if (nImgMap)
    {
#if IMGDAT_DEBUG
        strDebugInfo.Format(L"\tCImgDat::GetImageDef : nImgMap exists containing 0x%x items \n", nImgMap->size() );
        OutputDebugString(strDebugInfo);
#endif

        imgMapIter it = nImgMap->find(static_cast<uint16_t>(uUnitId));
        if (it != nImgMap->cend())
        {
            // it->second->listAllImgIDs();
#if IMGDAT_DEBUG
            strDebugInfo.Format(L"\tCImgDat::GetImageDef : ppImgData[0x%02X] exists containings 0x%x items\n", uUnitId, it->second->size());
            OutputDebugString(strDebugInfo);
#endif
            if (it->second->valueExists(uImgId))
            {
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
        }
        else
        {
            if ((uUnitId != INVALID_UNIT_VALUE) && (uUnitId != INVALID_UNIT_VALUE32))
            {
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

uint8_t* CImgDat::GetImgData(sImgDef* pCurrImg, uint8_t uGameFlag, uint16_t nCurrentUnitId, uint8_t nCurrentImgId)
{
#if IMGDAT_DEBUG
    CString strDebugInfo;
#endif
    if (pCurrImg->pImgData)
    {
#if IMGDAT_DEBUG
        strDebugInfo.Format(L"CImgDat::GetImgData : Image at position '0x%x' for unit 0x%02x img 0x%x is already loaded.\n", pCurrImg->uThisImgLoc, nCurrentUnitId, nCurrentImgId);
        OutputDebugString(strDebugInfo);

        strDebugInfo.Format(L"\tImage data: W: 0x%x (%u), H: 0x%x (%u), compressed: %u, size 0x%x, offset 0x%x (%lu) to offset 0x%x\n\n", pCurrImg->uImgWidth, pCurrImg->uImgWidth, pCurrImg->uImgHeight, pCurrImg->uImgHeight, pCurrImg->nCompressionType, pCurrImg->uDataSize, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc + pCurrImg->uDataSize);
        OutputDebugString(strDebugInfo);
#endif
        return pCurrImg->pImgData;
    }

    //Read the data

    uint8_t* pNewImgData = new uint8_t[pCurrImg->uDataSize];

#if IMGDAT_DEBUG
    strDebugInfo.Format(L"CImgDat::GetImgData : Making pNewImgData for unitID:0x%X, imgID:0x%X .\n", nCurrentUnitId, nCurrentImgId);
    OutputDebugString_ImgDat(strDebugInfo);
    strDebugInfo.Format(L"\tImage data: W: 0x%x (%u), H: 0x%x (%u), compressed: %u, size 0x%x, offset 0x%x (%lu) to offset 0x%x\n", pCurrImg->uImgWidth, pCurrImg->uImgWidth, pCurrImg->uImgHeight, pCurrImg->uImgHeight, pCurrImg->nCompressionType, pCurrImg->uDataSize, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc + pCurrImg->uDataSize);
    OutputDebugString_ImgDat(strDebugInfo);
#endif

    ImgDatFile.Seek(pCurrImg->uThisImgLoc, CFile::begin);
    ImgDatFile.Read(pNewImgData, pCurrImg->uDataSize);

    switch (pCurrImg->nCompressionType)
    {
    case 0: // No compression
        break;
    case 1: // RLE
    {
        uint8_t* pTmpData = pNewImgData;

        pNewImgData = RLEData::RLEDecodeImg(
            pTmpData,
            pCurrImg->uDataSize,
            pCurrImg->uImgWidth,
            pCurrImg->uImgHeight
        );

        safe_delete_array(pTmpData);
        break;
    }
    case 2: // BitmaskRLE
    {
        uint8_t* pTmpData = pNewImgData;

        pNewImgData = RLEData::BitMaskRLEDecodeImg(
            pTmpData,
            pCurrImg->uDataSize,
            pCurrImg->uImgWidth,
            pCurrImg->uImgHeight
        );

        safe_delete_array(pTmpData);
        break;
    }
    default:
        OutputDebugString(L"CImgDat::GetImgData : WARNING: Unhandled compression type.  Skipping loading this image\n");
        return nullptr;
    }

#ifdef EXPORT_IMG_DAT_TO_DISK
    static bool shouldExportItAll = true;
    if (shouldExportItAll)
    {
        int uLengthToWrite = (pCurrImg->nCompressionType) ? (pCurrImg->uImgHeight * pCurrImg->uImgWidth) : pCurrImg->uDataSize;

        CString strThisGameName;
        strThisGameName = g_GameFriendlyName[uGameFlag];

        // We could use known CurrentUnitId offsets to get back to the friendly character name...
        // We previously included the offset ( pCurrImg->uThisImgLoc ) in the filename, but that's probably not useful overall.
        CString strFilePath;
        strFilePath.Format(L".\\Assets\\%s-unit-0x%02x-imgid-0x%02x-W-%i-H-%i.raw", strThisGameName, nCurrentUnitId, nCurrentImgId, pCurrImg->uImgWidth, pCurrImg->uImgHeight);

        CString strDebugInfo;
        strDebugInfo.Format(L"Special Export: Image '0x%x', H %u W %u for LEN %u to %s\n", pCurrImg->uThisImgLoc, pCurrImg->uImgHeight, pCurrImg->uImgWidth, uLengthToWrite, strFilePath);
        OutputDebugString(strDebugInfo);

        HANDLE hFile = CreateFile(
            strFilePath,
            GENERIC_WRITE,
            0,
            NULL,
            CREATE_ALWAYS,
            FILE_ATTRIBUTE_NORMAL,
            NULL);

        if (hFile != INVALID_HANDLE_VALUE)
        {
            DWORD cbWritten = 0;

            // write the file to disk
            for (int nIndexMe = 0; nIndexMe < uLengthToWrite; nIndexMe++)
            {
                cbWritten = 0;
                WriteFile(hFile, &(pNewImgData[nIndexMe]), 1, &cbWritten, nullptr);
            }

            CloseHandle(hFile);
        }
        else
        {
            OutputDebugString(L"Error exporting image file\n");
        }
    }
#endif

    pCurrImg->pImgData = pNewImgData;

    return pNewImgData;
}

void CImgDat::CloseImgFile()
{
    if (m_fOnTheFly)
    {
        ImgDatFile.Abort();
    }
}

bool CImgDat::sameGameAlreadyLoaded(uint8_t uGameFlag, uint8_t uImgGameFlag)
{
    return (uImgGameFlag == nCurImgGameFlag) && (uGameFlag == nCurGameFlag);
}

void CImgDat::SanityCheckImgDat(ULONGLONG nFileSize, uint32_t nCurrentDatestamp, uint8_t nNumGames)
{
    static bool s_havePerformedVersionCheck = false;

    if (!s_havePerformedVersionCheck)
    {
        // here we keep track of the imgdat version we expect.
        // not super critical for daily updates, but still useful
        const uint16_t nExpectedYear = 2025;
        const uint8_t nExpectedMonth = 06;
        const uint8_t nExpectedDay = 15;
        const uint8_t nExpectedRevision = 0;
        const ULONGLONG nExpectedFileSize = 233153046;

        const uint32_t nExpectedDatestamp = (nExpectedYear << 16) | (nExpectedMonth << 8) | (nExpectedDay);

        CString strMsg;

        s_havePerformedVersionCheck = true;
        if (nNumGames != IMGDAT_SECTION_LAST)
        {
            strMsg.Format(L"Warning: You didn't copy the new img2020.dat.  Images may not show up correctly as the number of game sets has changed.\n\nTo fix this, please exit PalMod and copy the new img2020.dat.");
            MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
        }
        else if (nFileSize < nExpectedFileSize) // it's only a significant problem if the file is smaller, which should happen very rarely as a result of partial downloads
        {
            strMsg.Format(L"Please note that PalMod's key image storage file, img2020.dat, is not the correct size and may be corrupt: we expect the file to be %u bytes, but the file is currently %u bytes.\n\nTo fix this, please exit PalMod and copy the new img2020.dat from the ZIP.  If this message persists, please download PalMod again.", static_cast<uint32_t>(nExpectedFileSize), static_cast<uint32_t>(nFileSize));
            MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONWARNING);
        }
        else if (nExpectedDatestamp != nCurrentDatestamp)
        {
            if (nExpectedDatestamp > nCurrentDatestamp)
            {
                strMsg.Format(L"Please note that you are using an out of date version of img2020.dat.  Some newly added images will not be available.\n\nTo fix this, please exit PalMod and copy the new img2020.dat.");
                MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONWARNING);
            }
            else
            {
                strMsg.Format(L"WARNING: new imgdat is being used.  You may want to update the known date values in CImgDat::VersionCheckImgDat .  File size is %u bytes.\n", static_cast<uint32_t>(nFileSize));
                OutputDebugString(strMsg);
            }
        }
    }
}

BOOL CImgDat::LoadGameImages(wchar_t* lpszLoadFile, uint8_t uGameFlag, uint8_t uImgGameFlag, uint32_t uGameUnitAmt, std::vector<uint16_t> prgGameImageSet, BOOL fLoadAll)
{
    uint8_t uNumGames = 0xFF;

    CString strDebugInfo;
    strDebugInfo.Format(L"CImgDat::LoadGameImages : Opening image file '%s'\n", lpszLoadFile);
    OutputDebugString(strDebugInfo);
    strDebugInfo.Format(L"CImgDat::LoadGameImages : gameFlag is '%u' (\"%s\") and gameImageFlag is '%u'.  For 0x%02x game units we have 0x%02x image units.\n", uGameFlag, KnownGameInfo::GetGameNameForGameID(uGameFlag), uImgGameFlag, uGameUnitAmt, static_cast<int>(prgGameImageSet.size()));
    OutputDebugString(strDebugInfo);

    if (sameGameAlreadyLoaded(uGameFlag, uImgGameFlag) || (prgGameImageSet.empty()))
    {
        return TRUE;
    }
    else
    {

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
        CloseImgFile();
    }

    if (!ImgDatFile.Open(lpszLoadFile, CFile::modeRead | CFile::typeBinary))
    {
        ImgDatFile.Abort(); //Error loading
        return FALSE;
    }

    m_fOnTheFly = !fLoadAll;

    uint16_t nYear = 0;
    uint8_t nMonth = 0, nDay = 0, nDailyRevision = 0;

    ImgDatFile.Read(&nYear, 0x02);
    ImgDatFile.Read(&nMonth, 0x01);
    ImgDatFile.Read(&nDay, 0x01);
    ImgDatFile.Read(&nDailyRevision, 0x01);

    ImgDatFile.Read(&uNumGames, 0x01);

    strDebugInfo.Format(L"CImgDat::LoadGameImages: Current imgdat is the %u/%u/%u build revision %u. %u game sections are present.  File size is %u bytes.\n", nYear, nMonth, nDay, nDailyRevision, uNumGames, static_cast<uint32_t>(ImgDatFile.GetLength()));
    OutputDebugString(strDebugInfo);

    if (uNumGames)
    {
        SanityCheckImgDat(ImgDatFile.GetLength(), (nYear << 16) | (nMonth << 8) | (nDay), uNumGames);

        for (int nGameCtr = 0; nGameCtr < uNumGames; nGameCtr++)
        {
            ImgDatFile.Read(&uReadGameFlag, 0x01);
            ImgDatFile.Read(&uReadNumImgs, 0x02);
            ImgDatFile.Read(&uReadNextImgLoc, 0x04);

#if IMGDAT_DEBUG
            strDebugInfo.Format(L"\tCImgDat::LoadGameImages : Detected gameID 0x%02X ; game has %u images; first imgLoc is 0x%X .\n", uReadGameFlag, uReadNumImgs, uReadNextImgLoc);
            OutputDebugString(strDebugInfo);
#endif

            if (uReadGameFlag == uImgGameFlag)
            {
                nCurGameImgAmt = uReadNumImgs;

#if IMGDAT_DEBUG
                strDebugInfo.Format(L"\tCImgDat::LoadGameImages : Read matching uImgGameFlag: 0x%X for current uGameFlag: 0x%02X \n", uImgGameFlag, uGameFlag);
                OutputDebugString(strDebugInfo);
#endif

                if (!imageBufferFlushed)
                {
                    imageBufferFlushed = FlushImageBuffer();
                }

                imageBufferPrepped = PrepImageBuffer(prgGameImageSet, uGameFlag);

                while (uReadNextImgLoc != 0)
                {
                    ImgDatFile.Seek(uReadNextImgLoc, CFile::begin);
                    uint16_t uCurrUnitId;
                    uint8_t uCurrImgId;
                    ImgDatFile.Read(&uCurrUnitId, 0x02);
                    ImgDatFile.Read(&uCurrImgId, 0x01);
#if IMGDAT_DEBUG
                    strDebugInfo.Format(L"\tCImgDat::LoadGameImages : Seeing UnitID:0x%02X imgID:0x%02X \n", uCurrUnitId, uCurrImgId);
                    OutputDebugString_ImgDat(strDebugInfo);
#endif

                    std::map<uint16_t, ImgInfoList*>::iterator it = nImgMap->find(uCurrUnitId);
                    if (nImgMap->find(uCurrUnitId) != nImgMap->cend())
                    {
                        it->second->insertNode(uCurrImgId);

#if IMGDAT_DEBUG
                        strDebugInfo.Format(L"\tCImgDat::LoadGameImages : node[0x%X][0x%X] Inserted\n", uCurrUnitId, uCurrImgId);
                        OutputDebugString_ImgDat(strDebugInfo);
#endif

                        sImgDef* pCurrImg = it->second->getImgDef(uCurrImgId);
                        pCurrImg->pImgData = nullptr;
                        ImgDatFile.Read(&pCurrImg->uImgWidth, 0x02);
                        ImgDatFile.Read(&pCurrImg->uImgHeight, 0x02);
                        ImgDatFile.Read(&pCurrImg->nCompressionType, 0x01);
                        ImgDatFile.Read(&pCurrImg->uDataSize, 0x04);
                        ImgDatFile.Read(&uReadNextImgLoc, 0x04);
                        pCurrImg->uThisImgLoc = (0xFFFFFFFF & ImgDatFile.GetPosition());

                        if (pCurrImg->uDataSize == 0)
                        {
                            CString strError;
                            strError.Format(L"WARNING: Probable imgdat corruption at gameflag 0x%02x unit 0x%02x imgid 0x%02x: data size is 0x%x.\n\tNext location is 0x%x\n.", uImgGameFlag, uCurrUnitId, uCurrImgId, pCurrImg->uDataSize, uReadNextImgLoc);
                            OutputDebugString(strError);
                        }

#if IMGDAT_DEBUG
                        strDebugInfo.Format(L"\tCImgDat::LoadGameImages : Image info for unit 0x%02X img 0x%02X has been loaded.\n", uCurrUnitId, uCurrImgId);
                        OutputDebugString_ImgDat(strDebugInfo);
                        strDebugInfo.Format(L"\t W: 0x%x (%u), H: 0x%x (%u), compressed: %u, size 0x%x, offset 0x%x (%lu) to offset 0x%x\n\n", pCurrImg->uImgWidth, pCurrImg->uImgWidth, pCurrImg->uImgHeight, pCurrImg->uImgHeight, pCurrImg->nCompressionType, pCurrImg->uDataSize, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc + pCurrImg->uDataSize);
                        OutputDebugString_ImgDat(strDebugInfo);
#endif
                        if (fLoadAll)
                        {
                            GetImgData(pCurrImg, uReadGameFlag, uCurrUnitId, uCurrImgId);
                        }
                    }
                    else
                    {
                        uint8_t tCompressed;
                        uint16_t tImgWidth, tImgHeight;
                        uint32_t tDataSize;

                        ImgDatFile.Read(&tImgWidth, 0x02);
                        ImgDatFile.Read(&tImgHeight, 0x02);
                        ImgDatFile.Read(&tCompressed, 0x01);
                        ImgDatFile.Read(&tDataSize, 0x04);
                        if (!ImgDatFile.Read(&uReadNextImgLoc, 0x04))
                        {
                            OutputDebugString(L"WARNING: CImgDat::LoadgameImages was unable to read the next image location.  This indicates a corrupt imgdat.\r\n");
                            uReadNextImgLoc = 0;
                        }
                    }
                }

                break;
            }
        }

        nCurGameFlag = uGameFlag;
        nCurImgGameFlag = uImgGameFlag;

        if (fLoadAll)
        {
            ImgDatFile.Abort();
        }

        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

uint8_t* CImgDat::DecodeImg(uint8_t* pSrcImgData, uint32_t uiDataSz, uint16_t uiImgWidth, uint16_t uiImgHeight, uint8_t uiBPP)
{
    const int nImageSize = uiImgWidth * uiImgHeight;
    uint8_t* output_data = new uint8_t[nImageSize];
    memset(output_data, NULL, sizeof(uint8_t) * nImageSize);

    uint32_t bit_ctr = 0;
    int data_ctr = 0;
    int k = 0;

    uint8_t uZeroPos;
    uint8_t uExtraAmt;
    uint8_t uGetAmt;
    uint8_t curr_data;
    uint16_t zero_data;
    int get_from_extra;
    int zero_get_amt = 16 - uiBPP;

    while (bit_ctr < (uiDataSz * 8))
    {
        if (((8 - bit_ctr % 8) < uiBPP) && ((bit_ctr / 8) != (uiDataSz - 1)))
        {
            get_from_extra = uiBPP - (8 - bit_ctr % 8);
        }
        else
        {
            get_from_extra = 0;
        }

        curr_data = (pSrcImgData[bit_ctr / 8] >> bit_ctr % 8);

        if (get_from_extra)
        {
            curr_data |= (pSrcImgData[(bit_ctr / 8) + 1] & (0xFF >> (8 - get_from_extra))) << (8 - bit_ctr % 8);
        }

        bit_ctr += uiBPP;
        curr_data = curr_data & (0xFF >> (8 - uiBPP));

        if (curr_data != 0)
        {
            if (data_ctr < nImageSize)
            {
                output_data[data_ctr] = curr_data;
            }
            data_ctr++;
        }
        else if (bit_ctr < (uiDataSz * 8))
        {
            zero_data = 0;
            uZeroPos = 0;

            while (uZeroPos < zero_get_amt)
            {
                uExtraAmt = bit_ctr % 8;
                if (zero_get_amt - uZeroPos > 8)
                {
                    uGetAmt = 8 - uExtraAmt;
                }
                else
                {
                    uGetAmt = zero_get_amt - uZeroPos;
                }

                zero_data |= ((static_cast<uint16_t>(pSrcImgData[bit_ctr / 8] >> uExtraAmt) & (0xFF >> (8 - uGetAmt))) << (uZeroPos));

                uZeroPos += uGetAmt;
                bit_ctr += uGetAmt;
            }

            for (k = 0; k < zero_data; k++)
            {
                if ((data_ctr + k) < nImageSize)
                {
                    output_data[data_ctr + k] = 0;
                }
            }
            data_ctr += zero_data;
        }
    }
    return output_data;
}
