#include <stdio.h>

struct Str10 {
    short   s1;
    char    c1;
    short   s2;
};
struct Str11 {
    short   s1;
    short   s2;
    char    c1;
};

struct Str20 {
    int     i;
    double  d;
    char    c;
};

struct Str30 {
    char    c1[5];
    int     i;
    char    c2;
    short   s;
};

int main(void)
{
    struct Str10 str10;
    struct Str11 str11;
    struct Str20 str20;
    struct Str30 str30;

    printf("str10 size:%lu\n", sizeof(str10));
    printf("str11 size:%lu\n", sizeof(str11));
    printf("str20 size:%lu\n", sizeof(str20));
    printf("str30 size:%lu\n", sizeof(str30));

    return 0;
}