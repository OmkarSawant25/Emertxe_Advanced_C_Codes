/*
Description : 
You have to print the below pattern

Sample Execution : 
Test case 1 : 
Enter n value: 3

        *

      * * *

    * * * * * 

      * * *

        *
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp <= n - i; sp++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int sp = 1; sp <= n - i; sp++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
