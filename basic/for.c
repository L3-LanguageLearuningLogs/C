#include <stdio.h>

#define DATA_NUMBER (10)
#define DATA_LENGTH (8)
#define STRING_LENGTH (10 + 1)
#define DATA_LANK_SIZE (4)

int main(void){
    //固定値
    char name[DATA_NUMBER][STRING_LENGTH] = {
        "Moone", "Statue", "Wreed", "Thesuer", "Firerider", "Samontall", "Soonow", "Depther", "Georg", "Moe"
    };
    int data[DATA_NUMBER][DATA_LENGTH] = {
        {92, 56, 77},
        {34, 67, 88},
        {45, 34, 33},
        {12, 78, 45},
        {55, 62, 58},
        {29, 43, 32},
        {92, 88, 97},
        {85, 76, 67},
        {44, 52, 72},
        {83, 70, 69}
    };

    //変数宣言
    int i, j;

    //合計点の代入
    for(i = 0; DATA_NUMBER > i; i++){
        data[i][3] = data[i][0] + data[i][1] + data[i][2];
    }

    //データ出力
    printf("%2s %-10s %-7s %-7s %-7s %-7s\n", "No", "Name", "Math", "Eng", "Sci", "Amount");
    printf("----------------------------------------------\n");
    for(i = 0; DATA_NUMBER > i; i++){
        printf("%02d %-10s ", i + 1, name[i]);
        for(j = 0; DATA_LANK_SIZE > j; j++){
            printf("%3d[%2d] ", data[i][j], data[i][j + DATA_LANK_SIZE]);
        }
        printf("\n");
    }
}