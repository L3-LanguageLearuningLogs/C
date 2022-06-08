#include <stdio.h>

#define COFFEE (1)
#define TEA (2)

int main(void){
    int input = 0;

    printf("whitch do you like coffee[%d] or tea[%d] > ", COFFEE, TEA);
    scanf("%d", &input);

    //1か2が入力されるまで繰り返す
    while((COFFEE != input) && (TEA != input)){
        printf("omg. please input [%d] or [%d] > ", COFFEE, TEA);
        scanf("%d", &input);
    }

    //結果表示
    if(input == COFFEE){
        printf("Oh! I like coffee too!");
    }
    else{
        printf("Yeah! I like tea more coffee too!");
    }

    return 0;
}