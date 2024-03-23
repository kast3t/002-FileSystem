#pragma once
#include <windows.h>
#pragma once

class BaseFileSystem
{
private:
    unsigned int clusterSize;
    HANDLE fileHandle;

protected:
    void readBytesFromOffset(LARGE_INTEGER startOffset, BYTE *pResultBuffer, DWORD bytesToRead);
    void setClusterSize(unsigned int clSize);

public:
    virtual unsigned int getClusterSize();
    virtual void readClusterNumber();

    BaseFileSystem(const WCHAR *pFileName);
    ~BaseFileSystem();
};
