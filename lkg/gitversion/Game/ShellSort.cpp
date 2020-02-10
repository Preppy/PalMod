/*

     SHELL SORT
     Written by Sanchit Karve AKA born2c0de
     born2c0de AT hotmail DOT com
*/
#include "stdafx.h"
#include "ShellSort.h"
#include "math.h"

void ShellSort(double * fpSrc, double * fpExtra1, double * fpExtra2, int * pPalette, UINT16 * pTable, int max)
{
     int stop,swap,limit;

	 double temp, temp2, temp3;

	 int nPalTemp, nTableTemp;
   int x=(int)(max/2)-1;
   while(x>0)
   {
        stop=0;
      limit=max-x;
      while(stop==0)
      {
           swap=0;
         for(int k=0;k<limit;k++)
         {
              if(fpSrc[k]>fpSrc[k+x])
            {
               temp=fpSrc[k];
               fpSrc[k]=fpSrc[k+x];
               fpSrc[k+x]=temp;

			   temp2=fpExtra1[k];
               fpExtra1[k]=fpExtra1[k+x];
               fpExtra1[k+x]=temp2;

			   temp3=fpExtra2[k];
               fpExtra2[k]=fpExtra2[k+x];
               fpExtra2[k+x]=temp3;

			    nPalTemp=pPalette[k];
               pPalette[k]=pPalette[k+x];
               pPalette[k+x]=nPalTemp;

			    nTableTemp=pTable[k];
               pTable[k]=pTable[k+x];
               pTable[k+x]=nTableTemp;


               swap=k;
            }
         }
         limit=swap-x;
         if(swap==0)
              stop=1;
      }
      x=(int)(x/2);
   }
}

void ccRGBtoXYZ(double r, double g, double b, double* x, double* y, double* z)

{

  double var_R = r;        //R = From 0 to 255

  double var_G = g;        //G = From 0 to 255

  double var_B = b;        //B = From 0 to 255

 

  if ( var_R > 0.04045 ) var_R = pow(( ( var_R + 0.055 ) / 1.055 ),2.4);

  else                   var_R = var_R / 12.92;

  if ( var_G > 0.04045 ) var_G = pow(( ( var_G + 0.055 ) / 1.055 ),2.4);

  else                   var_G = var_G / 12.92;

  if ( var_B > 0.04045 ) var_B = pow(( ( var_B + 0.055 ) / 1.055 ),2.4);

  else                   var_B = var_B / 12.92;

 

  var_R = var_R * 100;

  var_G = var_G * 100;

  var_B = var_B * 100;

 

  *x = var_R * 0.4124 + var_G * 0.3576 + var_B * 0.1805;

  *y = var_R * 0.2126 + var_G * 0.7152 + var_B * 0.0722;

  *z = var_R * 0.0193 + var_G * 0.1192 + var_B * 0.9505;

}
void SpecialSort(double * fpSrc, int * pPalette, UINT16 * pTable, int nSize)
{

	//if(nSize)
	//{
	//	int * rgUsed = new int[nSize];
	//	int nUsedAmt = 0;
	//	double fpCurrDist = 0;
	//	double fpLowDist = 0;
	//	int nLowIndex = 0;

	//	rgUsed[0] = 0;

	//	for(int i = 0; i < nSize-1; i++)
	//	{
	//		fpCurrDist = 0;
	//		fpLowDist = 0;
	//		nLowIndex = 0;
	//		
	//		COLORREF crCol = pPalette[i];
	//		
	//		double 
	//		fpR = (double)GetRValue(crCol)/255.0, 
	//		fpG = (double)GetGValue(crCol)/255.0, 
	//		fpB = (double)GetBValue(crCol)/255.0;

	//		for(int j = 0; j < nSize; j++)
	//		{
	//			
	//			COLORREF crAlt = pPalette[j];

	//			double
	//			fpAltR = (double)GetRValue(crAlt)/255.0, 
	//			fpAltG = (double)GetGValue(crAlt)/255.0, 
	//			fpAltB = (double)GetBValue(crAlt)/255.0;
	//			

	//			fpCurrDist = sqrt(sq(fpR - fpAltR) + sq(fpG - fpAltG) + sq(fpB- fpAltB));

	//			if(j == 0)
	//			{
	//				fpLowDist = fpCurrDist;
	//				nLowIndex = j;
	//			}
	//			else
	//			{
	//				if(fabs(fpLowDist) > fabs(fpCurrDist))
	//				{
	//					fpLowDist = fpCurrDist;
	//					nLowIndex = j;
	//				}
	//			}
	//		}
	//	}
	//}


}