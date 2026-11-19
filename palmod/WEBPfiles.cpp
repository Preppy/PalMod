#include "stdafx.h"
#include "WEBPfiles.h"

bool IsFileAWEBPFile(LPCWSTR pszFileName)
{
    bool fIsWEBP = false;

    CFile CandidateFile;

    if (CandidateFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        constexpr auto signature_length = 12;
        char aszSignature[signature_length];

        const ULONGLONG nTotalFileSize = CandidateFile.GetLength();

        if (nTotalFileSize > signature_length)
        {
            CandidateFile.Read(aszSignature, signature_length);

            // Verify RIFF : WEBP signature, ignore the middle four bytes which are size
            if ((aszSignature[0] == 'R') &&
                (aszSignature[1] == 'I') &&
                (aszSignature[2] == 'F') &&
                (aszSignature[3] == 'F') &&

                (aszSignature[8] == 'W') &&
                (aszSignature[9] == 'E') &&
                (aszSignature[10] == 'B') &&
                (aszSignature[11] == 'P'))
            {
                fIsWEBP = true;
            }
        }

        CandidateFile.Close();
    }

    return fIsWEBP;
}
