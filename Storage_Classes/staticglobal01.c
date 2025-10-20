#include <stdio.h>

int x = 5;
int x;
int foo()
{
    printf("x % d\n", x);
    return ++x;
}
int main()
{
    foo();
    printf("x % d\n", x);
    return 0;
}
