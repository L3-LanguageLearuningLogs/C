#include <stdio.h>
#include "Sample.h"

int PrintIntPointer(int* pNum)
{
    if(NULL == pNum){
        return 0;
    }
    printf("pointer:%p → pointing:%d\n", pNum, *pNum);
    return 1;
}

int PrintStrPointer(char* pStr)
{
    if(NULL == pStr){
        return 0;
    }
    printf("pointer:%p → pointing:%c\n", pStr, *pStr);
    return 1;
}