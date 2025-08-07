/*WAF to find the sum of two numbers*/

#include <stdio.h>
void add(int, int);

int main()
{
    int num1, num2;
    printf("Enter num1 and num2 : ");
    scanf("%d %d", &num1, &num2);
    add(num1, num2);

    return 0;
}

void add(int a, int b)
{
    printf("Sum of two numbers is %d\n", a + b);
}