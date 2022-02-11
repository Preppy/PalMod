#pragma once

struct sImgTicket
{
    uint32_t nUnitId = 0;
    uint32_t nImgId = 0;

    int nXOffs = 0;
    int nYOffs = 0;

    sImgTicket* NextTicket = nullptr;
};
