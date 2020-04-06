#include "StdAfx.h"
#include "ImgDat.h"
#include "game\gamedef.h"

#define IMGDAT_DEBUG 0

CImgDat::CImgDat(void)
{
    pLastImg = new sImgDef * [MAX_IMAGE];
}

CImgDat::~CImgDat(void)
{   
    if (!imageBufferFlushed)
    {
        FlushImageBuffer();
        FlushLastImg();
    }
    CloseImgFile();
}

bool CImgDat::FlushImageBuffer()
{
    if (imageBufferFlushed)
    {
        return imageBufferFlushed;
    }

    CString strDebugInfo;
    if (ppImgData)
    {
#if IMGDAT_DEBUG
        strDebugInfo.Format("CImgDat::FlushImageBuffer : ppImgData exists will try to delete.\n");
        OutputDebugString(strDebugInfo);
#endif

        for (int nUnitCtr = 0; nUnitCtr < uCurrUnitAmt; nUnitCtr++)
        {
            if (ppImgData[nUnitCtr])
            {
#if IMGDAT_DEBUG
                strDebugInfo.Format("CImgDat::FlushImageBuffer : ppImgData[nUnitCtr] list exists will try to delete.\n");
                OutputDebugString(strDebugInfo);
#endif
                delete ppImgData[nUnitCtr];
            }

#if IMGDAT_DEBUG
            strDebugInfo.Format("CImgDat::FlushImageBuffer : ppImgData[nUnitCtr] = nullptr \n");
            OutputDebugString(strDebugInfo);
#endif
            ppImgData[nUnitCtr] = nullptr;

        }
        safe_delete_array(ppImgData);
    }

    imageBufferPrepped = false;
    
    return true;
}

void CImgDat::FlushLastImg()
{
    for (int i = 0; i < nLastImgCt; i++)
    {
        if (pLastImg[i])
        {
            if (pLastImg[i]->pImgData)
            {
                delete (pLastImg[i]->pImgData);
                pLastImg[i] = nullptr;
            }
        }
    }
    safe_delete_array(pLastImg);
    nLastImgCt = 0;
}

bool CImgDat::PrepImageBuffer(const UINT16 uUnitAmt)
{
    CString strDebugInfo;
    strDebugInfo.Format("CImgDat::PrepImageBuffer : Beginning on preparing ImageBuffer\n");
    OutputDebugString(strDebugInfo);
    strDebugInfo.Format("CImgDat::PrepImageBuffer : Unit amount = uUnitAmt 0x%02X (%u) \n", uUnitAmt, uUnitAmt);
    OutputDebugString(strDebugInfo);

    if (!imageBufferFlushed)
    {
        imageBufferFlushed = FlushImageBuffer();
    }

    uCurrUnitAmt = uUnitAmt;
    ppImgData = new ImgInfoList* [uUnitAmt];
    for (UINT16 nUnitCtr = 0; nUnitCtr < uUnitAmt; nUnitCtr++)
    {
        ImgInfoList* newList = new ImgInfoList;
        ppImgData[nUnitCtr] = newList;
    }

    imageBufferFlushed = false;
    return true;
}

sImgDef* CImgDat::GetImageDef(UINT16 uUnitId, UINT16 uImgId)
{   
    CString strDebugInfo;
    strDebugInfo.Format("CImgDat::GetImageDef : Attempting to get ImageDef for unit 0x%02x img 0x%x.\n", uUnitId, uImgId);
    OutputDebugString(strDebugInfo);

    //if ((uUnitId >= uCurrUnitAmt) || (uImgId > uCurrImgAmt))

    if (ppImgData)
    {
        strDebugInfo.Format("CImgDat::GetImageDef : ppImgData exists \n");
        OutputDebugString(strDebugInfo);
        if (uUnitId > uCurrUnitAmt)
        {
            strDebugInfo.Format("CImgDat::GetImageDef : Failed to get ImageDef for unit 0x%02x img 0x%x.\n", uUnitId, uImgId);
            OutputDebugString(strDebugInfo);
            strDebugInfo.Format("CImgDat::GetImageDef : (uUnitId:0x%02X  >= uCurrUnitAmt:0x%02X) || (uImgId:0x%02X > uCurrImgAmt:0x%02X).\n", uUnitId, uCurrUnitAmt, uImgId, uCurrImgAmt);
            OutputDebugString(strDebugInfo);
            return nullptr;
        }

        if (ppImgData[uUnitId])
        {
            ppImgData[uUnitId]->listAllImgIDs();
            strDebugInfo.Format("CImgDat::GetImageDef : ppImgData[0x%02X] exists \n", uUnitId);
            OutputDebugString(strDebugInfo);
            if (ppImgData[uUnitId]->valueExists(uImgId))
            {
                strDebugInfo.Format("CImgDat::GetImageDef : Found imgID 0x%02X in list for unitID 0x%02X \n", uImgId, uUnitId);
                OutputDebugString(strDebugInfo);
                return ppImgData[uUnitId]->getImgDef(uImgId);
            }

            strDebugInfo.Format("CImgDat::GetImageDef : Could not find imgID:0x%02X in list for unitID:0x%02X\n", uImgId, uUnitId);
            OutputDebugString(strDebugInfo);
        }
    }

    strDebugInfo.Format("CImgDat::GetImageDef : No image found \n");
    OutputDebugString(strDebugInfo);
    return nullptr;
}

UINT8* CImgDat::GetImgData(sImgDef* pCurrImg, UINT8 uGameFlag, int nCurrentUnitId, int nCurrentImgId)
{
    CString strDebugInfo;
    if (pCurrImg->pImgData)
    {
        strDebugInfo.Format("CImgDat::GetImgData : Image at position '0x%x' for unit 0x%02x img 0x%x is already loaded.\n", pCurrImg->uThisImgLoc, nCurrentUnitId, nCurrentImgId);
        OutputDebugString(strDebugInfo);

        strDebugInfo.Format(" W: 0x%x (%u), H: 0x%x (%u), compressed: %u, size 0x%x, offset 0x%x (%lu) to offset 0x%x\n\n", pCurrImg->uImgWidth, pCurrImg->uImgWidth, pCurrImg->uImgHeight, pCurrImg->uImgHeight, pCurrImg->bCompressed, pCurrImg->uDataSize, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc + pCurrImg->uDataSize);
        OutputDebugString(strDebugInfo);

        return pCurrImg->pImgData;
    }
    
    //Read the data

    UINT8* pNewImgData = new UINT8[pCurrImg->uDataSize];

    strDebugInfo.Format("CImgDat::GetImgData : Making pNewImgData for unitID:0x%X, imgID:0x%X .\n", nCurrentUnitId, nCurrentImgId);
    OutputDebugString(strDebugInfo);
    strDebugInfo.Format(" W: 0x%x (%u), H: 0x%x (%u), compressed: %u, size 0x%x, offset 0x%x (%lu) to offset 0x%x\n\n", pCurrImg->uImgWidth, pCurrImg->uImgWidth, pCurrImg->uImgHeight, pCurrImg->uImgHeight, pCurrImg->bCompressed, pCurrImg->uDataSize, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc + pCurrImg->uDataSize);
    OutputDebugString(strDebugInfo);
    ImgDatFile.Seek(pCurrImg->uThisImgLoc, CFile::begin);
    ImgDatFile.Read(pNewImgData, pCurrImg->uDataSize);

    if (pCurrImg->bCompressed)
    {
        UINT8* pTmpData = pNewImgData;

        //pNewImgData = new UINT8[CurrImg->uImgWidth * CurrImg->uImgHeight];

        pNewImgData = DecodeImg(
            pTmpData,
            pCurrImg->uDataSize,
            pCurrImg->uImgWidth,
            pCurrImg->uImgHeight,
            uReadBPP);

        safe_delete_array(pTmpData);
    }

#ifdef EXPORT_IMG_DAT_TO_DISK
    static bool shouldExportItAll = true;
    if (shouldExportItAll)
    {
        int uLengthToWrite = (pCurrImg->bCompressed) ? (pCurrImg->uImgHeight * pCurrImg->uImgWidth) : pCurrImg->uDataSize;

        CString strThisGameName;
        strThisGameName = g_GameFriendlyName[uGameFlag];

        // We could use known CurrentUnitId offsets to get back to the friendly character name...
        // We previously included the offset ( pCurrImg->uThisImgLoc ) in the filename, but that's probably not useful overall.
        CString strFilePath;
        strFilePath.Format(".\\Assets\\%s-unit-0x%02x-imgid-0x%02x-W-%i-H-%i.raw", strThisGameName, nCurrentUnitId, nCurrentImgId, pCurrImg->uImgWidth, pCurrImg->uImgHeight);

        CString strDebugInfo;
        strDebugInfo.Format("Special Export: Image '0x%x', H %u W %u for LEN %u to %s\n ", pCurrImg->uThisImgLoc, pCurrImg->uImgHeight, pCurrImg->uImgWidth, uLengthToWrite, strFilePath);
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
            OutputDebugString("Error exporting image file\n");
        }
    }
#endif

    if (bOnTheFly)
    {
        pLastImg[nLastImgCt] = pCurrImg;
        nLastImgCt++;
    }

    pCurrImg->pImgData = pNewImgData;

    return pNewImgData;
}

void CImgDat::CloseImgFile()
{
    if (bOnTheFly)
    {
        ImgDatFile.Abort();
    }
}

BOOL CImgDat::LoadImage(CHAR* lpszLoadFile, UINT8 uGameFlag, UINT16 uUnitAmt, UINT16 uImgAmt, BOOL bLoadAll)
{
    //uImgAmt = 0;
    UINT8 uNumGames = 0xF;

    CString strDebugInfo;
    strDebugInfo.Format("CimgData::LoadImage : Opening image file '%s'\n", lpszLoadFile);
    OutputDebugString(strDebugInfo);
    strDebugInfo.Format("CimgData::LoadImage : Game image flag is '%u'.  Reading 0x%x (%u) units with  %u imgs.\n", uGameFlag, uUnitAmt, uUnitAmt, uImgAmt);
    OutputDebugString(strDebugInfo);

    if (uGameFlag == (int)nCurrGFlag)
    {
        return TRUE;
    }
    else
    {
        strDebugInfo.Format("CimgData::LoadImage : New game being loaded 0x%02X, flushing image buffer.'\n", uGameFlag);
        OutputDebugString(strDebugInfo);
        imageBufferFlushed = false;
        FlushLastImg();
        imageBufferFlushed = FlushImageBuffer();
        strDebugInfo.Format("CimgData::LoadImage : Image buffer has been flushed. imageBuffer: %s '\n", imageBufferPrepped);
        OutputDebugString(strDebugInfo);
        CloseImgFile();
    }

    FlushLastImg();

    if (!ImgDatFile.Open(lpszLoadFile, CFile::modeRead | CFile::typeBinary))
    {
        ImgDatFile.Abort();         //Error loading
        return FALSE;
    }
    bOnTheFly = !bLoadAll;

    //Skip image verification
    ImgDatFile.Seek(0x04, CFile::current);
    ImgDatFile.Read(&uNumGames, 0x01);
    ImgDatFile.Seek(0x01, CFile::current);

    if (uNumGames)
    {
        for (int nGameCtr = 0; nGameCtr < uNumGames; nGameCtr++)
        {
            ImgDatFile.Read(&uReadGameFlag, 0x01);
            ImgDatFile.Read(&uReadBPP, 0x01);
            ImgDatFile.Read(&uReadNumImgs, 0x02);
            ImgDatFile.Read(&uNextImgLoc, 0x04);

            strDebugInfo.Format("CimgData::LoadImage : Detected gameID 0x%X ; game has %u imgs ; first imgLoc is 0x%X .\n", uReadGameFlag, uReadNumImgs, uNextImgLoc);
            OutputDebugString(strDebugInfo);

            if (uReadGameFlag == uGameFlag)
            {
                uCurrImgAmt = uReadNumImgs;
                strDebugInfo.Format("CimgData::LoadImage : Read matching gameID: 0x%X for current gameID: 0x%X \n", uReadGameFlag, uGameFlag);
                OutputDebugString(strDebugInfo);
               
                if (!imageBufferFlushed)
                {
                    FlushLastImg();
                    imageBufferFlushed = FlushImageBuffer();
                }

                imageBufferPrepped = PrepImageBuffer(uUnitAmt);
               
                while (uNextImgLoc != 0)
                {
                    ImgDatFile.Seek(uNextImgLoc, CFile::begin);

                    UINT8 uCurrUnitId, uCurrImgId;
                    ImgDatFile.Read(&uCurrUnitId, 0x01);
                    ImgDatFile.Read(&uCurrImgId, 0x01);

                    strDebugInfo.Format("CimgData::LoadImage : Inserting node[0x%X][0x%X] \n", uCurrUnitId, uCurrImgId);
                    OutputDebugString(strDebugInfo);

                    ppImgData[uCurrUnitId]->insertNode(uCurrImgId);

                    strDebugInfo.Format("CimgData::LoadImage : node[0x%X][0x%X] Inserted \n", uCurrUnitId, uCurrImgId);
                    OutputDebugString(strDebugInfo);
                    
                    sImgDef* pCurrImg = ppImgData[uCurrUnitId]->getImgDef(uCurrImgId);

                    pCurrImg->pImgData = nullptr;

                    ImgDatFile.Read(&pCurrImg->uImgWidth, 0x02);
                    ImgDatFile.Read(&pCurrImg->uImgHeight, 0x02);
                    ImgDatFile.Read(&pCurrImg->bCompressed, 0x01);
                    ImgDatFile.Read(&pCurrImg->uDataSize, 0x04);
                    ImgDatFile.Read(&uNextImgLoc, 0x04);
                    
                    strDebugInfo.Format("CImgDat::LoadImage : Image info for unit 0x%02X img 0x%02X has been loaded.\n", uCurrUnitId, uCurrImgId);
                    OutputDebugString(strDebugInfo);

                    strDebugInfo.Format(" W: 0x%x (%u), H: 0x%x (%u), compressed: %u, size 0x%x, offset 0x%x (%lu) to offset 0x%x\n\n", pCurrImg->uImgWidth, pCurrImg->uImgWidth, pCurrImg->uImgHeight, pCurrImg->uImgHeight, pCurrImg->bCompressed, pCurrImg->uDataSize, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc, pCurrImg->uThisImgLoc + pCurrImg->uDataSize);
                    OutputDebugString(strDebugInfo);

                    //Get the current image location
                    pCurrImg->uThisImgLoc = (0xFFFFFFFF & ImgDatFile.GetPosition());

                    if (bLoadAll)
                    {
                        GetImgData(pCurrImg, uReadGameFlag, uCurrUnitId, uCurrImgId);
                    }
                }

                break;
            }
        }

        //ImgDatFile.Close();
        nCurrGFlag = uGameFlag;

        if (bLoadAll)
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

UINT8* CImgDat::DecodeImg(UINT8* pSrcImgData, UINT32 uiDataSz, UINT16 uiImgWidth, UINT16 uiImgHeight, UINT8 uiBPP)
{
    UINT8* output_data = new UINT8[uiImgWidth * uiImgHeight];

    memset(output_data, NULL, sizeof(UINT8) * uiImgWidth * uiImgHeight);

    unsigned int bit_ctr = 0;
    int data_ctr = 0;
    int k = 0;
    int src_ctr = 0;
    int mod_amt = 0;
    int up_amt = 0;

    UINT8 uZeroPos;
    UINT8 uExtraAmt;
    UINT8 uGetAmt;
    UINT8 curr_data;
    UINT16 zero_ct = 0;
    UINT16 zero_data;
    int last_amt = ((uiDataSz - 1) * 8) % uiBPP;
    int get_from_extra;
    int zero_get_amt = 16 - uiBPP;

    while (bit_ctr < (uiDataSz * 8))
    {
        if ((8 - bit_ctr % 8 < uiBPP) && (bit_ctr / 8 != uiDataSz - 1))
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
            output_data[data_ctr] = curr_data;
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

                zero_data |= (((UINT16)(pSrcImgData[bit_ctr / 8] >> uExtraAmt) & ( (0xFF >> (8 - uGetAmt)) << (uZeroPos))));

                uZeroPos += uGetAmt;
                bit_ctr += uGetAmt;
            }

            //memcpy(&zero_data, &pSrcImgData[bit_ctr/8], 0x02);
            //zero_data = (zero_data >> bit_ctr%8) & (0xFFFF >> uiBPP);

            for (k = 0; k < zero_data; k++)
            {
                output_data[data_ctr + k] = 0;
            }

            data_ctr += zero_data;

            //bit_ctr += zero_get_amt;
        }
    }

    return output_data;
}
