#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    int res = (num*(num+1))/2;

    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("Sum of n Natural Number is %d\n", sum);
    printf("Sum of n Natural Number is %d\n", res);

    return 0;
}