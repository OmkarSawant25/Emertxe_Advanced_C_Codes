#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        int num = i;
        for(int j = 1; j <=i; j++)
        {
            printf("%d ", num);
            num = num + (n - j);
        }
        printf("\n");
    }
}