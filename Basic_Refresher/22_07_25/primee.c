#include <stdio.h>

int main()
{
    int num, count;
    printf("Enter a limit: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
    {
        count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count < 1)
        {
            printf("%d ", i);
        }
    }
}
