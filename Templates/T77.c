#include <stdio.h>

#define PRODUCT(a, b) (a * b)

int main()
{
    int a, b;
    printf("Enter a & b : ");
    scanf("%d%d", &a, &b);
    printf("Product of %d and %d is %d\n", a, b, PRODUCT(a, b));

    double c, d;
    printf("Enter c & d : ");
    scanf("%lf%lf", &c, &d);
    printf("Product of %g and %g is %g\n", c, d, PRODUCT(c, d));
}