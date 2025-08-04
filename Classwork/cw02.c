#include <stdio.h>

int main()
{
    int n, ans = 1;
    printf("Enter the number : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error : Number should be an positive number.");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", ans);
            ans = ans * 2;
        }
    }
}
