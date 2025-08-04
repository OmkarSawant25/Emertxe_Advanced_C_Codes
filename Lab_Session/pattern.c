#include <stdio.h>

int main()
{
    int n, min = 0;
    printf("Enter the number of lines : ");
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int a = i;
            if (i > n)
                a = 2 * n - i;
            int b = j;
            if (j > n)
                b = 2 * n - j;
            min = (a < b) ? a : b;
            printf("%d ", n - min + 1);
        }
        printf("\n");
    }

    return 0;
}
