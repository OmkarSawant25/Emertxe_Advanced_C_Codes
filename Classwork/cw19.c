/* WAP to find the sum and product of two numbers
Eg:
Enter the two numbers : 10 20
Output : sum = 30, product = 200 */

#include <stdio.h>
void SumProduct(int, int, int *, int *);

int main()
{
    int num1, num2, sum, product;
    printf("Enter the two numbers : ");
    scanf("%d %d", &num1, &num2);
    SumProduct(num1, num2, &sum, &product);

    printf("sum = %d, product = %d", sum, product);
    return 0;
}

void SumProduct(int a, int b, int *s, int *p)
{
    *s = a + b;
    *p = a * b;
}