#include "stdafx.h"
#include "ImgDat.h"

CImgDat::CImgDat(void)
:
	ppImgData(NULL),
	uCurrUnitAmt(0),
	uCurrImgAmt(0),
	nCurrGFlag(-1),
	bOnTheFly(FALSE),
	nLastImgCt(0)
{
	memset(pLastImg, 0, sizeof(sImgDef *) * MAX_IMAGE);
}

CImgDat::~CImgDat(void)
{
	FlushImageBuffer();
	CloseImgFile();

	
}

sImgDef * CImgDat::GetImageDef(UINT8 uUnitId, UINT8 uImgId)
{
	if(uUnitId >= uCurrUnitAmt || uImgId > uCurrImgAmt)
	{
		return NULL;
	}

	if(ppImgData)
	{
		if(ppImgData[uUnitId])
		{
			if(ppImgData[uUnitId][uImgId])
			{
				return ppImgData[uUnitId][uImgId];
			}
		}
	}

	return NULL;
}

void CImgDat::FlushImageBuffer()
{
	if(ppImgData)
	{
		for(int nUnitCtr = 0; nUnitCtr < uCurrUnitAmt; nUnitCtr++)
		{
			for(int nImgCtr = 0; nImgCtr < uCurrImgAmt; nImgCtr++)
			{
				if(ppImgData[nUnitCtr][nImgCtr])
				{
					if(ppImgData[nUnitCtr][nImgCtr]->pImgData)
					{
						delete [] ppImgData[nUnitCtr][nImgCtr]->pImgData;
					}

					delete ppImgData[nUnitCtr][nImgCtr];
				}
			}

			delete [] ppImgData[nUnitCtr];

		}

		delete [] ppImgData;
		ppImgData = NULL;
	}

	nLastImgCt = 0;
	//Set the current game flag to -1
	//nCurrGFlag = -1;
}

void CImgDat::FlushLastImg()
{
	for(int i = 0; i < nLastImgCt; i++)
	{
		if(pLastImg[i])
		{
			if(pLastImg[i]->pImgData)
			{
				delete [] pLastImg[i]->pImgData;
				pLastImg[i]->pImgData = NULL;
			}

			pLastImg[i] = NULL;
		}
	}

	nLastImgCt = 0;
}

UINT8 * CImgDat::GetImgData(sImgDef * pCurrImg)
{
	if(pCurrImg->pImgData)
	{
		return pCurrImg->pImgData;
	}

	/*
	if(pLastImg && pLastImg != pCurrImg)
	{
		delete [] pLastImg->pImgData;
		pLastImg->pImgData = NULL;
	}

	*/
	//Read the data
	UINT8 * pNewImgData = NULL;
	pNewImgData = new UINT8[pCurrImg->uDataSize];

	ImgDatFile.Seek(pCurrImg->uThisImgLoc, CFile::begin);
	ImgDatFile.Read(pNewImgData, pCurrImg->uDataSize);

	if(pCurrImg->bCompressed)
	{
		UINT8 * pTmpData = pNewImgData;

		//pNewImgData = new UINT8[CurrImg->uImgWidth * CurrImg->uImgHeight];

		pNewImgData = DecodeImg(
			pTmpData, 
			pCurrImg->uDataSize,
			pCurrImg->uImgWidth,
			pCurrImg->uImgHeight,
			uReadBPP);

		delete [] pTmpData;

	}

	if(bOnTheFly)
	{
		pLastImg[nLastImgCt] = pCurrImg;
		nLastImgCt++;
	}
	
	pCurrImg->pImgData = pNewImgData;
	

	return pNewImgData;
}

void CImgDat::PrepImageBuffer(UINT8 uUnitAmt, UINT8 uImgAmt)
{
	if(ppImgData)
	{
		FlushImageBuffer();
	}

	uCurrUnitAmt = uUnitAmt;
	uCurrImgAmt = uImgAmt;

	ppImgData = new sImgDef ** [uUnitAmt]; 

	for(int nUnitCtr = 0; nUnitCtr < uUnitAmt; nUnitCtr++)
	{
		ppImgData[nUnitCtr] = new sImgDef * [uImgAmt];

		for(int nImgCtr = 0; nImgCtr < uImgAmt; nImgCtr++)
		{
			ppImgData[nUnitCtr][nImgCtr] = NULL;
		}
	}

	
}

void CImgDat::CloseImgFile()
{
	if(bOnTheFly)
	{
		ImgDatFile.Abort();
	}
}

BOOL CImgDat::LoadImage(CHAR * lpszLoadFile, UINT8 uGameFlag, UINT8 uUnitAmt, UINT16 uImgAmt, BOOL bLoadAll)
{

	UINT8 uNumGames;

	

	if(uGameFlag == (int)nCurrGFlag)
	{
		return TRUE;
	}
	else
	{
		FlushImageBuffer();

		CloseImgFile();
		
	}
	
	FlushLastImg();

	if(!ImgDatFile.Open(lpszLoadFile, CFile::modeRead | CFile::typeBinary))
	{
		//Error loading
		ImgDatFile.Abort();
		return FALSE;
	}

	bOnTheFly = !bLoadAll;

	//Skip image verification
	ImgDatFile.Seek(0x04, CFile::current);
	ImgDatFile.Read(&uNumGames, 0x01);
	ImgDatFile.Seek(0x01, CFile::current);

	if(uNumGames)
	{
		for(int nGameCtr = 0; nGameCtr < uNumGames; nGameCtr++)
		{
			

			ImgDatFile.Read(&uReadGameFlag, 0x01);
			ImgDatFile.Read(&uReadBPP, 0x01);
			ImgDatFile.Read(&uReadNumImgs, 0x02);
			ImgDatFile.Read(&uNextImgLoc, 0x04);

			if(uReadGameFlag == uGameFlag)
			{
				PrepImageBuffer(uUnitAmt, uImgAmt);
				

				while(uNextImgLoc != 0)
				{
					ImgDatFile.Seek(uNextImgLoc, CFile::begin);

					sImgDef * CurrImg;
					UINT8 uCurrUnitId, uCurrImgId;

					ImgDatFile.Read(&uCurrUnitId, 0x01);
					ImgDatFile.Read(&uCurrImgId, 0x01);
					
					//Check if the img id is the unit id
					if(uCurrUnitId == uCurrImgId)
					{
						//If it is, then the image id is 0
						uCurrImgId = 0;
					}
					
					//Remove 0x7F from additional images
					if(uCurrImgId > 0x7F)
					{
						uCurrImgId -= 0x7F;
					}

					ppImgData[uCurrUnitId][uCurrImgId] = new sImgDef;

					CurrImg = ppImgData[uCurrUnitId][uCurrImgId];

					CurrImg->pImgData = NULL;

					ImgDatFile.Read(&CurrImg->uImgWidth, 0x02);
					ImgDatFile.Read(&CurrImg->uImgHeight, 0x02);
					ImgDatFile.Read(&CurrImg->bCompressed, 0x01);
					ImgDatFile.Read(&CurrImg->uDataSize, 0x04);
					
					

					ImgDatFile.Read(&uNextImgLoc, 0x04);
					
					//Get the current image location
					CurrImg->uThisImgLoc = ImgDatFile.GetPosition();

					if(bLoadAll)
					{
						GetImgData(CurrImg);
					}

					

				}

				break;
			}
		}

		//ImgDatFile.Close();
		nCurrGFlag = uGameFlag;
		
		if(bLoadAll)
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

UINT8 * CImgDat::DecodeImg(UINT8 * pSrcImgData, UINT32 uiDataSz, UINT16 uiImgWidth, UINT16 uiImgHeight, UINT8 uiBPP)
{
	
	UINT8 * output_data = new UINT8[uiImgWidth * uiImgHeight];

	memset(output_data, NULL, sizeof(UINT8) * uiImgWidth * uiImgHeight);
	

	int bit_ctr = 0;
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
	int last_amt = ((uiDataSz-1)*8)%uiBPP;
	int get_from_extra;
	int zero_get_amt = 16 - uiBPP;

	while(bit_ctr < (uiDataSz*8))
	{
		if(8 - bit_ctr%8 < uiBPP && bit_ctr/8 != uiDataSz-1)
		{
			get_from_extra = uiBPP - (8 - bit_ctr%8);
		}
		else
			get_from_extra = 0;

		curr_data = (pSrcImgData[bit_ctr/8] >> bit_ctr%8);

		if(get_from_extra)
		{
			curr_data |= (pSrcImgData[(bit_ctr/8)+1] & (0xFF >>  (8 - get_from_extra))) << (8-bit_ctr%8);
		}

		bit_ctr += uiBPP;
		curr_data = curr_data & (0xFF >> ( 8 - uiBPP));

		if(curr_data != 0)
		{
			output_data[data_ctr] = curr_data;
			data_ctr++;
		}
		else if(bit_ctr < (uiDataSz*8))
		{

			
			zero_data = 0;
			uZeroPos = 0;

			
			while(uZeroPos < zero_get_amt)
			{
				uExtraAmt = bit_ctr%8;
				
				if(zero_get_amt - uZeroPos > 8)
				{
					uGetAmt = 8 - uExtraAmt;
				}
				else
				{
					uGetAmt = zero_get_amt - uZeroPos;
				}

				
			
				zero_data |= (((UINT16)(pSrcImgData[bit_ctr/8] >> uExtraAmt) & (0xFF >> 8 - uGetAmt)) << (uZeroPos));
				
				uZeroPos += uGetAmt;
				bit_ctr += uGetAmt;

				
			}
			

			
			//memcpy(&zero_data, &pSrcImgData[bit_ctr/8], 0x02);
			//zero_data = (zero_data >> bit_ctr%8) & (0xFFFF >> uiBPP);

			for(k = 0; k < zero_data; k++)
			{
				output_data[data_ctr+k] = 0;
			}
			

			data_ctr += zero_data;

			//bit_ctr += zero_get_amt;
			
		}

		
	}

	return output_data;

}