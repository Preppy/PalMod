#include "StdAfx.h"
#include <fstream>

#include "Game\Game_SFIII3_A.h"
#include "Game\SFIII3_A_DEF.h"

using namespace std;

void CGame_SFIII3_A::LoadExtraFile()
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

    // Before we load the Extra extension file, load our hardcoded known Extras list.
    stExtraDef* pCurrDef = const_cast<stExtraDef*>(&SFIII3_A_EXTRA[nExtraCtr]);

    // Check count to ensure correct offset of the file additions
    while (pCurrDef->uUnitN != 0xFF)
    {
        nExtraCtr++;
        pCurrDef = const_cast<stExtraDef*>(&SFIII3_A_EXTRA[nExtraCtr]);
    }

    memcpy(rgTempExtraBuffer, SFIII3_A_EXTRA, nExtraCtr * sizeof(stExtraDef));

    // Now we look for the Extra extension file.
    GetModuleFileName(NULL, szTargetFile, (DWORD)MAX_PATH * sizeof(CHAR));
    nSlashLoc = (int)((strrchr(szTargetFile, '\\') - szTargetFile));
    szTargetFile[nSlashLoc + 1] = '\0';
    strcat(szTargetFile, EXTRA_FILENAME);

    int nFileAttrib = GetFileAttributes(szTargetFile);
    if ((((nFileAttrib & FILE_ATTRIBUTE_ARCHIVE) == FILE_ATTRIBUTE_ARCHIVE) && (nFileAttrib != 0xFFFFFFFF)))
    {
        extraFile.open(szTargetFile, ios::in);

        while (!extraFile.eof())
        {
            extraFile.getline(szCurrLine, 1000);

            szFinalLine = szCurrLine;

            //while ((szModLine = strchr(szCurrLine, ' ')))
            //{
            //    szFinalLine = szModLine;
            //}

            if (strlen(szFinalLine) && (szFinalLine[0] != ';'))
            {
                int nPrevAmt = 0;

                switch (nCtr % 3)
                {
                case 0:
                {
                    memcpy(szCurrDesc, szFinalLine, 31);
                    szCurrDesc[31] = '\0';
                }
                break;
                case 1:
                {
                    nCurrStart = strtol(szFinalLine, NULL, 16);

                    if (nCurrStart > 0x00800000 || nCurrStart < 0)
                    {
                        nCurrStart = 0;
                    }
                }
                break;
                case 2:
                {
                    int nPalCt = 0;
                    int nPos = 0;

                    nCurrEnd = strtol(szFinalLine, NULL, 16);

                    int nDiff = (nCurrEnd - nCurrStart) / 2;

                    while (nDiff > 0)
                    {
                        int nValue = 0;

                        if (nPos)
                        {
                            // Create a new extra node item if the range for this complete item is over 64.
                            nCtr += 3;
                        }

                        // If you wanted to fit long palettes on one page you would need to remove this 
                        // overflow check, add an Extra compatible version of CPalGroup::AddSep, and
                        // call that from CGame_SFIII3_A::UpdatePalImg
                        if (nDiff > 64)
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

                        pCurrDef->uUnitN = SFIII3_A_EXTRALOC;
                        strcpy(pCurrDef->szDesc, szCurrDesc);
                        pCurrDef->uOffset = nCurrStart + ((64 * 2) * nPos);
                        pCurrDef->uPalSz = nValue * 2;

                        // Ensure that if we loop through here again we are using a new Extra node item
                        nPos++;
                    }
                }
                break;
                }

                nCtr++;
            }
        }
    }

    if (SFIII3_A_EXTRA_CUSTOM == nullptr)
    {
        SFIII3_A_EXTRA_CUSTOM = new stExtraDef[nExtraCtr + 1 + (nCtr / 3)];

        memcpy(SFIII3_A_EXTRA_CUSTOM, rgTempExtraBuffer, (nExtraCtr + (nCtr / 3)) * sizeof(stExtraDef));

        SFIII3_A_EXTRA_CUSTOM[nExtraCtr + (nCtr / 3)].uUnitN = 0xFF;
    }
}
