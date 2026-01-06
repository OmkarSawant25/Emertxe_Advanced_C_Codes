#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        ch = ch - 2;
        for (int j = 1; j < i; j++)
        {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }
}