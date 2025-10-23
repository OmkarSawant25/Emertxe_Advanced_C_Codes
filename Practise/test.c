#include <stdio.h>

int function(int i)
{
    if (i <= 1)
        return 1;
    if (i % 2 == 0)
        return function(i / 2);
    else
        return function((i - 1) / 2);
}
int main()
{
    extern int function(int);
    int i;
    i = function(5);
    printf("%d", i);
    return 0;
}