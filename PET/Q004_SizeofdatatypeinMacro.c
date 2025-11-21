// WAP Size of data type in Macro
// C program to create own sizeof using macro

#include <stdio.h>

#define SIZE(var) (char *)(&var + 1) - (char *)(&var)

int main()
{
    int a = 0;
    char b = '0';
    short c = 123;

    printf("Int : %ld\n", SIZE(a));
    printf("Char : %ld\n", SIZE(b));
    printf("Short : %ld\n", SIZE(c));

    // printf("Int : %ld\n", (long)SIZE(a));
    // printf("Char : %ld\n", (long)SIZE(b));
    // printf("Short : %ld\n", (long)SIZE(c));

        return 0;
}