#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    int size = 2 * n - 1;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            int a = i;
            int b = j;

            if (a > n)
                a = size - i + 1;
            if (b > n)
                b = size - j + 1;
            if (a < b)
                printf("%d ", a);
            else
                printf("%d ", b);
        }
        printf("\n");
    }
}