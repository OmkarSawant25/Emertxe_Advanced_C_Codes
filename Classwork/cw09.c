#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the two number : ");
    scanf("%d %d", &num1, &num2);
    int result = 0;

    for (int i = 1; i <= num2; i++)
    {
        result = result + num1;
    }
    printf("The Result is %d\n", result);
}
