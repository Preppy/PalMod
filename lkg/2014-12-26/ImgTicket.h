#pragma once

struct sImgTicket
{
	

	int nUnitId;
	int nImgId;
	
	int nXOffs;
	int nYOffs;

	sImgTicket * NextTicket;
};