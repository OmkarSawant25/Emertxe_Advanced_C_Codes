#include <stdio.h>

void sequentialPattern(int n);   // Function prototype

int main()
{
    int n;
    scanf("%d", &n);

    sequentialPattern(n);

    return 0;
}

void sequentialPattern(int n)
{
    for(int i = 1; i <= n; i++)
    {
        int num = i;
        for(int j = 1; j <= i; j++)
        {
            printf("%d",num++);
        }
        printf("\n");
    }
}


// 1
// 23
// 345
// 4567
