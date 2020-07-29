#pragma once

struct sImgTicket
{
    int nUnitId = 0;
    int nImgId = 0;

    int nXOffs = 0;
    int nYOffs = 0;

    sImgTicket* NextTicket = nullptr;
};
