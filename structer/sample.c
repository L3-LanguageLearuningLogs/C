#include <stdio.h>
#include<string.h>
struct Student {
    char name[10];
    int class;
};


int main(void)
{
    struct Student yoshida;
    
    
    yoshida.class = 2;
    strcpy(yoshida.name, "yoshida");
    
    printf("%s%d\n", yoshida.name, yoshida.class);

    return;
}