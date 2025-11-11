#include <stdio.h>

int countOperations(int num1, int num2)
{
    int count = 0;
    while (num1 != 0 && num2 != 0)
    {
        if (num1 >= num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
        count++;
    }
    return count;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = countOperations(num1, num2);
    printf("Number of operations = %d\n", result);

    return 0;
}
