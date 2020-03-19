#pragma once

struct sImgTicket
{
    int nUnitId;
    int nImgId;

    int nXOffs = 0;
    int nYOffs = 0;

    sImgTicket* NextTicket = nullptr;
};
