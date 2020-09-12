unsigned long CRC32_BlockChecksum(CFile *pFile, int length);
unsigned long CRC32_BlockChecksum(unsigned char* buf, int length);

void CRC32_InitChecksum(unsigned long& crcvalue);
void CRC32_UpdateChecksum(unsigned long& crcvalue, unsigned char* pInBuffer, int length);
void CRC32_FinishChecksum(unsigned long& crcvalue);
