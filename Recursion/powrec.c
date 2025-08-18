#include <stdio.h>
int power(int a, int b)
{
    if(b == 0)return 1;
    int recAns = a * power(a,b-1);
    return recAns;
    // int r = 1;
    // for (int i = 1; i <= b; i++)
    // {
    //     r = r * a;
    // }
    // return r;
}
int main()
{
    int a, b;
    printf("Enter base : ");
    scanf("%d", &a);
    printf("Enter power : ");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d raised to the power %d is %d\n", a, b, p);
    return 0;
}
