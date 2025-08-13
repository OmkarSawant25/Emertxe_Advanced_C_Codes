
#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;
    *p = 10;
    int **q = &p;
    int ***r = &q;
    printf("%d \n", *p);
    printf("%p \n", *q);
    printf("%d \n", **q);
    printf("%p \n", **r);
    printf("%d \n", ***r);
    ***r = 25;
    printf("x = %d \n", a);
    **q = *p + 2;
    printf("x = %d \n", a);

    return 0;
}
