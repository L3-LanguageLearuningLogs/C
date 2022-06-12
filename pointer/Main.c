/*
Main.c
*/

#include <stdio.h>
#include "Sample.h"

int main(void)
{   
    int num = 10;
    int *pNum = &num;

    int arr[] = {1, 2, 3, 4, 5};
    int *pArr = &arr[0];

    char str[] = "hoge";
    char *pStr = &str[0];

    //変数を渡す時は&演算子をつける
    PrintIntPointer(&num);
    printf("// ----- 変数:num (アドレス[%p], 値[%d])\n", &num, num);
    printf("num:%d\n&num:%p\n*&num:%d\n", num, &num, *&num);
    printf("\n");
    
    printf("// ----- ポインタ変数:pNum (アドレス[%p], 値[%d])\n", pNum, *pNum);
    printf("pNum:%p\n*pNum:%d\n&*pNum:%p\n", pNum, *pNum, &*pNum);
    printf("\n");

    //配列をそのまま渡すとその先頭ポインタを渡す
    PrintIntPointer(arr);
    //配列の先頭をポインタとして定義し渡す
    PrintIntPointer(pArr);
    //配列の先頭ポインタを渡す
    PrintIntPointer(&arr[0]);
    printf("\n");

    //配列をそのまま渡すとその先頭ポインタを渡す
    PrintStrPointer(str);
    //配列の先頭をポインタとして定義し渡す
    PrintStrPointer(pStr);
    //配列の先頭ポインタを渡す
    PrintStrPointer(&str[0]);
    printf("\n");

    //それぞれの変数のメモリサイズを表示
    printf("size of char      : %lu\n", sizeof(char));
    printf("size of short     : %lu\n", sizeof(short));
    printf("size of int       : %lu\n", sizeof(int));
    printf("size of long      : %lu\n", sizeof(long));
    printf("\n");

    printf("size of (char *)  : %lu\n", sizeof(char *));
    printf("size of (short *) : %lu\n", sizeof(short *));
    printf("size of (int *)   : %lu\n", sizeof(int *));
    printf("size of (long *)  : %lu\n", sizeof(long *));
    printf("\n");
    
    return 0;
}