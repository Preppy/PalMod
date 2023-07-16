#include "StdAfx.h"
#include "RLEData.h"

namespace RLEData
{
    void getBMRLEData(uint8_t chunkSize, uint8_t* inputData, uint8_t* output_data, uint32_t& i_byteCtr, uint32_t& o_dataCtr)
    {
        uint8_t data = 0;
        uint8_t bitMask = 0;
        uint32_t count = 0;
        uint8_t tempCount = 0;
        uint16_t multiplier = 0;

        bitMask = *(inputData + i_byteCtr++);
        // printf("New Group - \n  BitMask: 0x%02X\n", bitMask);

        for (uint8_t chunk = 0; chunk < chunkSize; chunk++)
        {
            count = 0;
            tempCount = 0;
            if ((bitMask & (0x80 >> chunk)) != 0)
            {
                count = inputData[i_byteCtr++];
                if (count == 0xFF)
                {
                    multiplier = 0;
                    tempCount = inputData[i_byteCtr++];
                    while (tempCount == 0xFF)
                    {
                        multiplier += tempCount;
                        tempCount = inputData[i_byteCtr++];
                    }
                    multiplier += tempCount;
                    count *= multiplier;
                    tempCount = inputData[i_byteCtr++];
                    count += tempCount;
                }
            }

            data = inputData[i_byteCtr++];
            // printf("    Payload - Count: 0x%08X, Data: 0x%02X\n", count, data);
            if (count != 0)
            {
                for (uint32_t writing = 0; writing < (count - 1); writing++)
                {
                    output_data[o_dataCtr++] = data;
                }
            }

            output_data[o_dataCtr++] = data;
        }
    }

    uint8_t* RLEDecodeImg(uint8_t* pSrcImgData, uint32_t uiDataSz, uint16_t uiImgWidth, uint16_t uiImgHeight)
    {
        const int nImageSize = uiImgWidth * uiImgHeight;
        uint8_t* output_data = nullptr;

        if (nImageSize)
        {
            output_data = new uint8_t[nImageSize];
            memset(output_data, NULL, sizeof(uint8_t) * nImageSize);

            uint8_t count = 0;
            bool isDigit = true;
            uint32_t byte_ctr = 0;
            int data_ctr = 0;
            while (byte_ctr < uiDataSz)
            {
                if (isDigit) // The character is numerical...
                {
                    // get the count
                    count = pSrcImgData[byte_ctr];
                    byte_ctr++;
                    isDigit = !isDigit;
                }
                else
                {
                    // expand the next character by count times
                    // the decoding
                    for (uint16_t iPos = 0; iPos < count; iPos++)
                    {
                        if ((data_ctr + iPos) < nImageSize)
                        {
                            output_data[data_ctr + iPos] = pSrcImgData[byte_ctr];
                        }
                    }

                    byte_ctr++;
                    data_ctr += count;
                    isDigit = !isDigit;
                }
            }
        }
        return output_data;
    }

    uint8_t* BitMaskRLEDecodeImg(uint8_t* pSrcImgData, uint32_t uiDataSz, uint16_t uiImgWidth, uint16_t uiImgHeight)
    {
        uint8_t* output_data = nullptr;
        const auto nRequiredDataSize = uiImgWidth * uiImgHeight;

        if (nRequiredDataSize)
        {
            output_data = new uint8_t[nRequiredDataSize];
            memset(output_data, NULL, sizeof(uint8_t) * uiImgWidth * uiImgHeight);

            uint32_t i_byteCtr = 0;
            uint32_t o_dataCtr = 0;
            uint32_t byteGroups = 0;
            uint8_t extraChunks = 0;

            memcpy(&byteGroups, pSrcImgData, 4);
            i_byteCtr += 4;
            extraChunks = *(pSrcImgData + i_byteCtr++);

            // printf("byteGroups: 0x%08X\n  extraChunks: 0x%02X\n", byteGroups, extraChunks);

            for (uint32_t group = 0; group < byteGroups; group++)
            {
                getBMRLEData(8, pSrcImgData, output_data, i_byteCtr, o_dataCtr);
            }

            if (extraChunks != 0)
            {
                getBMRLEData(extraChunks, pSrcImgData, output_data, i_byteCtr, o_dataCtr);
            }
        }

        return output_data;
    }
}
