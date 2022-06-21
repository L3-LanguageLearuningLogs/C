#include <stdio.h>
#include<string.h>

struct Student {
    char name[10];
    int english;
    int math;
    int japanese;
    int average;
};

void InputScore(struct Student *pStudent);
void DispScore(struct Student *pStudent);

int main(void)
{
    struct Student yoshida;

    InputScore(&yoshida);
    DispScore(&yoshida);

    return 0;
}

void InputScore(struct Student *pStudent)
{
    int num;
    printf("名前を入力してください");
    scanf("%s", pStudent->name);
    strcpy();
    printf("英語の点数を入力してください");
    scanf("%d", pStudent->english);
    printf("数学の点数を入力してください");
    scanf("%d", pStudent->math);
    printf("国語の点数を入力してください");
    scanf("%d", pStudent->japanese);
    pStudent->average = (pStudent->english + pStudent->math + pStudent->japanese) / 3.0;
}

void DispScore(struct Student *pStudent)
{
    printf("name:%s\t%d\t%d\t%d\t%d\n", pStudent->name, pStudent->english, pStudent->math, pStudent->japanese, pStudent->average);
}