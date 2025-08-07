/*Find the product of two numbers without using * operator*/

#include <stdio.h>
void product(int, int);
int main()
{
    int num1, num2;
    printf("Enter num1 and num2 : ");
    scanf("%d %d", &num1, &num2);
    product(num1, num2);
}
void product(int a, int b)
{
    int result = 0;
    for (int i = 1; i <= b; i++)
    {
        result = result + a;
    }
    printf("Product of two numbers is %d\n", result);
}
