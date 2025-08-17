/*WAP to find the sum of the digits of a number using recursive function
Eg: Enter the number: 10359
    Sum of the digits is 18*/
#include <stdio.h>
int sum(int);
int main()
{
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of the digits is %d\n", result);
    return 0;
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int rem = n % 10;
    return rem + sum(n / 10);
}