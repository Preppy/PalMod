#include "stdafx.h"
#include "RAWfiles.h"
#include "RLEData.h"
#include "PalMod.h"
#include "PreviewImport.h"

uint8_t* LoadTextureFromRAWSprite(wchar_t* pszTextureLocation, sImageDimensions& suggestedImageSize,
                                  int nImgAmt, sImgNode** ppImgBuffer, std::array<sTextureData, MAX_IMAGES_DISPLAYABLE> vSpriteOverrideTextures,
                                  UINT& nPositionToLoadTo, SpriteImportDirection& direction, SpriteImportCompositionStyle& compositionStyle, sImgNode** pImgBuffer, bool fPreferQuietMode /* = true */)
{
    // We get to have a lot of bonus logic here since RAW files don't contain height/width information...
    CFile TextureFile;
    bool fHaveViableDimensions = false;
    uint8_t* pNewOverrideTexture = nullptr;

    if (TextureFile.Open(pszTextureLocation, CFile::modeRead | CFile::typeBinary | CFile::shareDenyNone))
    {
        const int nIncomingFileSize = static_cast<int>(TextureFile.GetLength());
        const int cbMinimumReasonableFileSize = 250;
        suggestedImageSize.width = 0;
        suggestedImageSize.height = 0;

        // Filename of form: MvC2_D-offset-2230419-W-60-H-98
        _wcslwr(pszTextureLocation);
        wchar_t* pszDataW = wcsstr(pszTextureLocation, L"-w-");
        wchar_t* pszDataH = wcsstr(pszTextureLocation, L"-h-");
        wchar_t* pszCompType = wcsstr(pszTextureLocation, L"-compf-");
        wchar_t* pszTermination = wcsstr(pszTextureLocation, L".data");

        enum class RAWCompressionChoice
        {
            NoCompression,
            RLE,
            BitMaskRLE,
        };

        RAWCompressionChoice eCompType = RAWCompressionChoice::NoCompression;

        if (pszTermination == nullptr)
        {
            pszTermination = wcsstr(pszTextureLocation, L".raw");
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
                suggestedImageSize.height = static_cast<uint16_t>(nScannedH);
            }

            if (pszDataW && _stscanf_s(pszDataW, L"%u", &nScannedW))
            {
                suggestedImageSize.width = static_cast<uint16_t>(nScannedW);
            }

            nSizeIfThisIsRAW = suggestedImageSize.width * suggestedImageSize.height;

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
                    }
                }
            }

            if ((eCompType == RAWCompressionChoice::NoCompression) &&
                (suggestedImageSize.width < 10000) &&
                (suggestedImageSize.height < 10000))
            {
                // Validate that the RAW dimensions are viable
                if (nSizeIfThisIsRAW == nIncomingFileSize)
                {
                    // Perfection!
                    fHaveViableDimensions = true;
                }
                else if ((3 * nSizeIfThisIsRAW) == nIncomingFileSize)
                {
                    // This is an RGB RAW...
                    fHaveViableDimensions = true;
                    MessageBox(g_appHWnd, L"This RAW is not using indexed color.  Please recreate it using indexed colors.  This will not look right.", GetHost()->GetAppName(), MB_ICONERROR);
                }
                else if ((2 * nSizeIfThisIsRAW) == nIncomingFileSize)
                {
                    // I think it's GIMP that doubles the RAW for no apparent reason
                    fIsDoubleSizeGIMPRAW = true;
                    fHaveViableDimensions = true;
                    GetHost()->GetPalModDlg()->SetStatusText(IDS_RAW_EXTRADATA);
                }
                else if ((nSizeIfThisIsRAW != nIncomingFileSize) && (nIncomingFileSize > cbMinimumReasonableFileSize))
                {
                    CString strHelpText = L"RAW texture files do not contain header information, so we don't know what height or width to use.  To work around this, please name your filenames in the form:\r\n        WHATEVER-W-width-H-height.raw";
                    strHelpText.Append(L"\r\n\r\nWe'll present you some H/W combos that might work if this is a normal RAW file, but please update your filename.");

                    SHMessageBoxCheck(g_appHWnd, strHelpText, GetHost()->GetAppName(), MB_OK | MB_ICONERROR, IDOK, L"{468EB2CC-58A2-48a1-B4D0-7FAFE1FDD9B7}");

                    // Try to use the override H/W if available, but if not see if we can reuse the current displays dimensions.
                    if ((suggestedImageSize.width == 0) && pImgBuffer[0])
                    {
                        suggestedImageSize.width = pImgBuffer[0]->dimensions.width;
                    }

                    if ((suggestedImageSize.height == 0) && pImgBuffer[0])
                    {
                        suggestedImageSize.height = pImgBuffer[0]->dimensions.height;
                    }

                }

                if (!fPreferQuietMode || !fHaveViableDimensions)
                {
                    fHaveViableDimensions = GetUserOptionsForTextureOverride(nIncomingFileSize, suggestedImageSize,
                                                                             nImgAmt, ppImgBuffer, vSpriteOverrideTextures,
                                                                             nPositionToLoadTo, direction, &compositionStyle);
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
                        suggestedImageSize.width,
                        suggestedImageSize.height
                    );
                    break;
                }
                case RAWCompressionChoice::BitMaskRLE:
                {
                    pNewOverrideTexture = RLEData::BitMaskRLEDecodeImg(
                        reinterpret_cast<uint8_t*>(&pNewData[0]),
                        nSizeIfThisIsRAW,
                        suggestedImageSize.width,
                        suggestedImageSize.height
                    );
                    break;
                }
            }

            if (pNewOverrideTexture)
            {
                // in theory we should let the user know that this was a compressed RAW in the status bar,
                // but the caller is updating the status bar shortly so we won't
                OutputDebugString(L"Loaded RLE-compressed RAW as a custom preview.");
            }
        }
        else if (fHaveViableDimensions)
        {
            CString strInfo;
            strInfo.Format(L"CImgDisp::LoadExternalSprite texture file is: %u x %u\n", suggestedImageSize.width, suggestedImageSize.height);
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

            if (direction == SpriteImportDirection::TopDown)
            {
                TextureFile.Read(pNewOverrideTexture, nIncomingFileSize);
            }
            else if (direction == SpriteImportDirection::UpsideDown)
            {
                int nCurrentFilePosition = nIncomingFileSize;

                if (fIsDoubleSizeGIMPRAW)
                {
                    nCurrentFilePosition /= 2;
                }

                // Skip one line back since we're upside-down and walking backwards
                nCurrentFilePosition -= suggestedImageSize.width;

                // We need to flip this line by line
                for (int nLinePosition = 0; nLinePosition < suggestedImageSize.height; nLinePosition++)
                {
                    TextureFile.Read(&pNewOverrideTexture[nCurrentFilePosition], suggestedImageSize.width);
                    nCurrentFilePosition -= suggestedImageSize.width;
                }
            }
            else // if (direction == SpriteImportDirection::FlipHorizontal)
            {
                for (int iLine = 0; iLine < suggestedImageSize.height; iLine++)
                {
                    for (int iLinePos = suggestedImageSize.width; iLinePos > 0; iLinePos--)
                    {
                        TextureFile.Read(&pNewOverrideTexture[(iLine * suggestedImageSize.width) + (iLinePos - 1)], 1);
                    }
                }
            }
        }
    }

    return pNewOverrideTexture;
}
