#pragma once

struct sImgTicket
{
    int32_t nUnitId = 0;
    int32_t nImgId = 0;

    int nXOffs = 0;
    int nYOffs = 0;

    BlendMode nBlendMode = BlendMode::Alpha;

    sImgTicket* NextTicket = nullptr;
};
