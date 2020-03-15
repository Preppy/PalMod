#include "StdAfx.h"
#include <fstream>

#include "Game\Game_MVC_A.h"
#include "Game\MVC_A_DEF.h"

using namespace std;

void CGame_MVC_A::LoadExtraFile()
{
    ifstream extraFile;

    CHAR szTargetFile[MAX_PATH];
    CHAR szCurrLine[1000];
    CHAR* szFinalLine = nullptr;
    int nSlashLoc = 0;
    int nCtr = 0;

    CHAR szCurrDesc[32];
    int nCurrStart = 0;
    int nCurrEnd = 0;

    stExtraDef rgTempExtraBuffer[1000];

    int nExtraCtr = 0;

    // First add in the already defined Extra palettes.
    stExtraDef* pCurrDef = const_cast<stExtraDef*>(&MVC_A_EXTRA[nExtraCtr]);

    while (pCurrDef->uUnitN != 0xFF)
    {
        nExtraCtr++;
        pCurrDef = const_cast<stExtraDef*>(&MVC_A_EXTRA[nExtraCtr]);
    }

    memcpy(rgTempExtraBuffer, MVC_A_EXTRA, nExtraCtr * sizeof(stExtraDef));

    // Now let's check for Extras added via our extension file.
    GetModuleFileName(NULL, szTargetFile, (DWORD)MAX_PATH * sizeof(CHAR));
    nSlashLoc = (int)((strrchr(szTargetFile, '\\') - szTargetFile));
    szTargetFile[nSlashLoc + 1] = '\0';
    strcat(szTargetFile, EXTRA_FILENAME_MVC);

    int nFileAttrib = GetFileAttributes(szTargetFile);
    if (((nFileAttrib & FILE_ATTRIBUTE_ARCHIVE) == FILE_ATTRIBUTE_ARCHIVE && nFileAttrib != 0xFFFFFFFF))
    {
        extraFile.open(szTargetFile, ios::in);

        while (!extraFile.eof())
        {
            extraFile.getline(szCurrLine, 1000);

            szFinalLine = szCurrLine;

            // Ignore blank lines and comments.
            if (strlen(szFinalLine) && (szFinalLine[0] != ';'))
            {
                int nPrevAmt = 0;

                switch (nCtr % 3)
                {
                case 0: // First the palette name.
                {
                    memcpy(szCurrDesc, szFinalLine, 31);
                    szCurrDesc[31] = '\0';
                }
                break;
                case 1: // second is the starting point
                {
                    nCurrStart = strtol(szFinalLine, NULL, 16);

                    if (nCurrStart > 0x00800000 || nCurrStart < 0)
                    {
                        nCurrStart = 0;
                    }
                }
                break;
                case 2: // third is the termination point.
                {
                    int nPalCt = 0;
                    int nDiff;
                    int nValue;
                    int nPos = 0;

                    nCurrEnd = strtol(szFinalLine, NULL, 16);

                    nDiff = (nCurrEnd - nCurrStart) / 2;

                    while (nDiff > 0)
                    {
                        if (nPos)
                        {
                            nCtr += 3;
                        }

                        if (nDiff > 64) // We can only display a max of 64 entries right now
                        {
                            nValue = 64;
                            nDiff -= 64;
                        }
                        else
                        {
                            nValue = nDiff;
                            nDiff = 0;
                        }

                        pCurrDef = &rgTempExtraBuffer[nExtraCtr + (nCtr / 3)];

                        pCurrDef->uUnitN = MVC_A_EXTRALOC;
                        strcpy(pCurrDef->szDesc, szCurrDesc);
                        pCurrDef->uOffset = nCurrStart + ((64 * 2) * nPos);
                        pCurrDef->uPalSz = nValue * 2;

                        nPos++;
                    }
                }
                break;
                }

                nCtr++;
            }
        }
    }

    if (MVC_A_EXTRA_CUSTOM == nullptr)
    {
        MVC_A_EXTRA_CUSTOM = new stExtraDef[nExtraCtr + 1 + (nCtr / 3)];

        memcpy(MVC_A_EXTRA_CUSTOM, rgTempExtraBuffer, (nExtraCtr + (nCtr / 3)) * sizeof(stExtraDef));

        MVC_A_EXTRA_CUSTOM[nExtraCtr + (nCtr / 3)].uUnitN = 0xFF;
    }
}

