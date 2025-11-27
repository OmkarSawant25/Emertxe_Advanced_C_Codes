#include <stdio.h>

void diagonalPattern(int n); // Function prototype

int main()
{
    int n;
    scanf("%d", &n);

    diagonalPattern(n);

    return 0;
}

void diagonalPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int num = i;

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num = num + (n - j);
        }

        printf("\n");
    }
}



// Row 1: 1
// Row 2: 2 5
// Row 3: 3 6 8
// Row 4: 4 7 9 10
