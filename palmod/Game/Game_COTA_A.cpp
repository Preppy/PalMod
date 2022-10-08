#include "StdAfx.h"
#include "Game_COTA_A.h"

uint32_t CGame_COTA_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"X-Men: Children of the Atom (Asia/Japan 9412--)", L"xmn.05", 0xc3ed62a2, -0x1AB8 },
        { L"X-Men: Children of the Atom (Japan Rent 940812)", L"xmno.05a", 0x0303d672, -0x35F4 },
        { L"X-Men: Children of the Atom (950105)", L"xmn.05a", 0xac0d7759, 0 },
        { L"X-Men: Children of the Atom (950331)", L"xmne.05b", 0x87b0ed0f, 0 },
        { L"X-Men: Children of the Atom (Hispanic 950331)", L"xmnh.05b", 0x87b0ed0f, 0 },
    };

    if (ppKnownROMSet != nullptr)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);

#ifdef NOTES
        // These are the MAME values...
        xmcotar1    05/01/1995 (c) 1994 (Euro)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotau     05/01/1995 (c) 1994 (USA)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotahr1   05/01/1995 (c) 1994 (Hispanic)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotaj     05/01/1995 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotaa     05/01/1995 (c) 1994 (Asia)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))

        xmcotaj1    22/12/1994 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaj2    19/12/1994 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaj3    17/12/1994 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaar1   19/12/1994 (c) 1994 (Asia)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaar2   17/12/1994 (c) 1994 (Asia)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))

        xmcotajr    08/12/1994 (c) 1994 (Japan Rent)
            ROM_LOAD16_WORD_SWAP("xmno.05a", 0x100000, 0x80000, CRC(0303d672) SHA1(4816b5ac6a9bf78665112d54a8f3569d590721b2))


        xmcota      31/03/1995 (c) 1994 (Euro)
            ROM_LOAD16_WORD_SWAP("xmne.05b", 0x100000, 0x80000, CRC(87b0ed0f) SHA1(f4d78fdd9fcf864e909d9a2bb351b49a5f8ec7a0))
        xmcotah     31/03/1995 (c) 1994 (Hispanic)
            ROM_LOAD16_WORD_SWAP("xmnh.05b", 0x100000, 0x80000, CRC(87b0ed0f) SHA1(f4d78fdd9fcf864e909d9a2bb351b49a5f8ec7a0))
        xmcotab     31/03/1995 (c) 1995 (Brazil)
            ROM_LOAD16_WORD_SWAP("xmne.05b", 0x100000, 0x80000, CRC(87b0ed0f) SHA1(f4d78fdd9fcf864e909d9a2bb351b49a5f8ec7a0))
#endif
}

void CGame_COTA_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nCurrentExtraUnitId)
    {
        CString strMessage;
        strMessage.Format(L"CGame_COTA_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
        OutputDebugString(strMessage);

        const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(nUnitId, nPalId);

        if (pThisPalette && pThisPalette->pExtraProcessing && pThisPalette->pExtraProcessing->pProcessingSteps.size())
        {
            OutputDebugString(L"\tThis palette is linked to additional palettes: updating those as well now.\n");
            ProcessAdditionalPaletteChangesRequired(nUnitId, nPalId, pThisPalette->pExtraProcessing->pProcessingSteps);
        }
        else
        {
            OutputDebugString(L"\tNo further processing needed.\n");
        }
    }
}
