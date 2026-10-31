#include "stdafx.h"
#include "RAWfiles.h"
#include "RLEData.h"
#include "PalMod.h"
#include "PreviewImport.h"
#include "lodepng\lodepng.h"
#include "Util.h"

bool LoadTextureFromRAWSprite(LPCWSTR pszTextureLocation, sTextureData& textureData, bool& fHaveConfirmedDimensions)
{
    // We get to have a lot of bonus logic here since RAW files don't contain height/width information...
    CFile TextureFile;
    uint8_t* pNewOverrideTexture = nullptr;
    bool fReadData = false;

    fHaveConfirmedDimensions = false;

    if (TextureFile.Open(pszTextureLocation, CFile::modeRead | CFile::typeBinary | CFile::shareDenyNone))
    {
        const int nIncomingFileSize = static_cast<int>(TextureFile.GetLength());
        int nInflatedFileSize = 0;
        const int cbMinimumReasonableFileSize = 250;
        textureData.dimensions.width = 0;
        textureData.dimensions.height = 0;

        // Filename of form: MvC2_D-offset-2230419-W-60-H-98
        wchar_t szTextureLocationLower[MAX_PATH];
        wcsncpy(szTextureLocationLower, pszTextureLocation, MAX_PATH);

        _wcslwr(szTextureLocationLower);
        wchar_t* pszDataW = wcsstr(szTextureLocationLower, L"-w-");
        wchar_t* pszDataH = wcsstr(szTextureLocationLower, L"-h-");
        wchar_t* pszCompType = wcsstr(szTextureLocationLower, L"-compf-");
        wchar_t* pszTermination = wcsstr(szTextureLocationLower, L".data");

        enum class RAWCompressionChoice
        {
            NoCompression,
            RLE,
            BitMaskRLE,
            ZLib,
        };

        RAWCompressionChoice eCompType = RAWCompressionChoice::NoCompression;

        if (pszTermination == nullptr)
        {
            pszTermination = wcsstr(szTextureLocationLower, L".raw");
        }

        bool fIsDoubleSizeGIMPRAW = false;
        int nSizeIfThisIsRAW = 0;

        if (pszTermination != nullptr)
        {
            uint32_t nScannedH = 0, nScannedW = 0;

            pszTermination[0] = 0;

            if (pszDataH)
            {
                pszDataH[0] = 0;
                pszDataH += ARRAYSIZE(L"H-");
            }

            if (pszDataW)
            {
                pszDataW[0] = 0;
                pszDataW += ARRAYSIZE(L"W-");
            }

            if (pszDataH && _stscanf_s(pszDataH, L"%u", &nScannedH))
            {
                textureData.dimensions.height = static_cast<uint16_t>(nScannedH);
            }

            if (pszDataW && _stscanf_s(pszDataW, L"%u", &nScannedW))
            {
                textureData.dimensions.width = static_cast<uint16_t>(nScannedW);
            }

            nSizeIfThisIsRAW = textureData.dimensions.width * textureData.dimensions.height;

            if (pszCompType)
            {
                uint32_t nCompType = 0;
                pszCompType[0] = 0;
                pszCompType += ARRAYSIZE(L"compf-");

                if (_stscanf_s(pszCompType, L"%u", &nCompType))
                {
                    switch (nCompType)
                    {
                        default:
                            eCompType = RAWCompressionChoice::NoCompression;
                            break;
                        case 1:
                            OutputDebugString(L"RAW is marked as being RLE compressed.\n");
                            eCompType = RAWCompressionChoice::RLE;
                            break;
                        case 2:
                            OutputDebugString(L"RAW is marked as being BitMask RLE compressed.\n");
                            eCompType = RAWCompressionChoice::BitMaskRLE;
                            break;
                        case 3:
                            OutputDebugString(L"RAW is marked as being ZLib compressed.\n");
                            eCompType = RAWCompressionChoice::ZLib;
                            break;
                    }
                }
            }

            if ((eCompType == RAWCompressionChoice::NoCompression) &&
                (textureData.dimensions.width < 10000) &&
                (textureData.dimensions.height < 10000))
            {
                // Validate that the RAW dimensions are viable
                if (nSizeIfThisIsRAW == nIncomingFileSize)
                {
                    // Perfection!
                    fHaveConfirmedDimensions = true;
                }
                else if ((3 * nSizeIfThisIsRAW) == nIncomingFileSize)
                {
                    // This is an RGB RAW...
                    fHaveConfirmedDimensions = true;
                    MessageBox(g_appHWnd, L"This RAW is not using indexed color.  Please recreate it using indexed colors.  This will not look right.", GetHost()->GetAppName(), MB_ICONERROR);
                }
                else if ((2 * nSizeIfThisIsRAW) == nIncomingFileSize)
                {
                    // I think it's GIMP that doubles the RAW for no apparent reason
                    fIsDoubleSizeGIMPRAW = true;
                    fHaveConfirmedDimensions = true;
                    GetHost()->GetPalModDlg()->SetStatusText(IDS_RAW_EXTRADATA);
                }
                else if ((nSizeIfThisIsRAW != nIncomingFileSize) && (nIncomingFileSize > cbMinimumReasonableFileSize))
                {
                    CString strHelpText = L"RAW texture files do not contain header information, so we don't know what height or width to use.  To work around this, please name your filenames in the form:\r\n        WHATEVER-W-width-H-height.raw";
                    strHelpText.Append(L"\r\n\r\nWe'll present you some H/W combos that might work if this is a normal RAW file, but please update your filename.");

                    SafeSHMessageBoxCheck(g_appHWnd, strHelpText, GetHost()->GetAppName(), MB_OK | MB_ICONERROR, IDOK, L"{468EB2CC-58A2-48a1-B4D0-7FAFE1FDD9B7}");
                }
            }
        }

        if (eCompType != RAWCompressionChoice::NoCompression)
        {
            std::vector<uint8_t> pNewData;
            pNewData.resize(nIncomingFileSize);

            TextureFile.Read(pNewData.data(), nIncomingFileSize);

            pNewOverrideTexture = nullptr;

            switch (eCompType)
            {
                case RAWCompressionChoice::RLE:
                {
                    pNewOverrideTexture = RLEData::RLEDecodeImg(
                        reinterpret_cast<uint8_t*>(&pNewData[0]),
                        nSizeIfThisIsRAW,
                        static_cast<uint16_t>(textureData.dimensions.width),
                        static_cast<uint16_t>(textureData.dimensions.height)
                    );

                    if (pNewOverrideTexture)
                    {
                        nInflatedFileSize = textureData.dimensions.GetPixelCount();
                    }
                    break;
                }
                case RAWCompressionChoice::BitMaskRLE:
                {
                    pNewOverrideTexture = RLEData::BitMaskRLEDecodeImg(
                        reinterpret_cast<uint8_t*>(&pNewData[0]),
                        nSizeIfThisIsRAW,
                        static_cast<uint16_t>(textureData.dimensions.width),
                        static_cast<uint16_t>(textureData.dimensions.height)
                    );

                    if (pNewOverrideTexture)
                    {
                        nInflatedFileSize = textureData.dimensions.GetPixelCount();
                    }
                    break;
                }
                case RAWCompressionChoice::ZLib:
                {
                    size_t nZLibExtractedSize = 0;
                    lodepng_inflate(&pNewOverrideTexture, &nZLibExtractedSize, &pNewData[0], pNewData.size(), &lodepng_default_decompress_settings);

                    nInflatedFileSize = static_cast<int>(nZLibExtractedSize);
                    break;
                }
            }

            if (pNewOverrideTexture)
            {
                // in theory we should let the user know that this was a compressed RAW in the status bar,
                // but the caller is updating the status bar shortly so we won't
                OutputDebugString(L"Loaded compressed RAW as a custom preview.\r\n");
                fHaveConfirmedDimensions = true;
            }
        }
        else
        {
            CString strInfo;
            if (fHaveConfirmedDimensions)
            {
                strInfo.Format(L"LoadTextureFromRAWSprite: texture file is: %u x %u\r\n", textureData.dimensions.width, textureData.dimensions.height);
            }
            else
            {
                strInfo = L"LoadTextureFromRAWSprite: no valid dimensions found.  User will have to select in our UI.\r\n";
            }

            OutputDebugString(strInfo);

            TextureFile.SeekToBegin();

            // Note: at one point (July 4, 2024) I wrote alternate loading code for GIMP RAWs.
            // That change loaded flipped RAWs topdown (?) and did a 2 byte stride across the file.
            // Both those changes seem non-optimum.  Reverting the change gets us loading the 
            // test files I currently have correctly.  I am solidly guessing that we had a different 
            // sample file with different behavior, but can't find it in the archives right now.
            // If we do need to revisit this, make sure to test both with that new mystery file that 
            // lead to this change as well as the GIMP 2x sample texture I've now put in the archive.

            // Read the data first
            pNewOverrideTexture = new uint8_t[nIncomingFileSize];
            TextureFile.Read(pNewOverrideTexture, nIncomingFileSize);
            nInflatedFileSize = nIncomingFileSize;
        }

        if (pNewOverrideTexture)
        {
            fReadData = true;
            textureData.indexedPixels.assign(pNewOverrideTexture, pNewOverrideTexture + nInflatedFileSize);

            safe_delete_array(pNewOverrideTexture);
        }
    }

    return fReadData;
}
