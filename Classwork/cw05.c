#include <stdio.h>

int main()
{
    int base, expo;
    printf("Enter the base value : ");
    scanf("%d", &base);
    printf("Enter the exponential value : ");
    scanf("%d", &expo);
    int a = 1;

    for (int i = 0; i <= expo; i++)
    {
        printf("%d ", a);
        a = a * base;
    }
    return 0;
}
