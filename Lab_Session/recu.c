#include <stdio.h>
int fun(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return fun(a - 1) + fun(--a);
    }
}

int main()
{
    int limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    printf("%d\n", fun(limit));
    return 0;
}