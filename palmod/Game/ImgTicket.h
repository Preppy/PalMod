#pragma once

struct sImgTicket
{
    uint16_t nImgUnitId = 0;
    uint8_t nImgId = 0;

    int nXOffs = 0;
    int nYOffs = 0;

    BlendMode nBlendMode = BlendMode::Alpha;

    sImgTicket* NextTicket = nullptr;
};
