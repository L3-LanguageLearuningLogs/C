#include <stdio.h>
int main(void){
    int input;
    printf("whitch do you like coffee[1] or tea[2] > ");
    scanf("%d", &input);
    if(input == 1){
        printf("Oh! I like coffee too!");
    }
    else if(input == 2){
        printf("Wow! I like tea more coffee!");
    }
    else {
        printf("omg. please input 1 or 2.");
    }
    return 0;
}