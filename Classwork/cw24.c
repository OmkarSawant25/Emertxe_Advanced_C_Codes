/* Write a program to find the sum and product of 2 numbers */
#include <stdio.h>
void sumProduct(int, int, int *, int *);
int main()
{
    int num1, num2, sum, product;
    printf("Enter the number1 : ");
    scanf("%d", &num1);
    printf("Enter the number2 : ");
    scanf("%d", &num2);
    sumProduct(num1, num2, &sum, &product);
    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);
    return 0;
}
void sumProduct(int a, int b, int *s, int *p)
{
    *p = a * b;
    *s = a + b;
}