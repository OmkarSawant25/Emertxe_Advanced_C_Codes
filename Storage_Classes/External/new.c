#include <stdio.h>
int main()
{
    int x;
    {
        int x = 10;
        {
            extern int x;
            printf("x % d\n", x);
        }
        printf("x % d\n", x);
    }
    printf("x % d\n", x);

    return 0;
}
// static int x = 20; // GIVES ERROR DUE TO LINKAGE
int x = 20;
