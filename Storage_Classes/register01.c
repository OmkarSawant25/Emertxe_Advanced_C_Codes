#include <stdio.h>
int main()
{
    // register int i = 10;
    // register int *j = &i;
    // printf("* j % d\n", *j);
    // error: address of register variable ‘i’ requested

    int i = 10;
    register int *j = &i;
    printf("* j % d\n", *j);

    return 0;
}
