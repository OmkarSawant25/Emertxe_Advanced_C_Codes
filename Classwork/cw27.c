/*WAP to find n to the power of m value using recursive function*/
#include <stdio.h>
int power(int n, int m);
int main()
{
    int n, m, result;
    printf("Enter n and m : ");
    scanf("%d %d", &n, &m);
    result = power(n, m);
    printf("%d to the power of %d is %d\n", n, m, result);
    return 0;
}
int power(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }
    return n * power(n, m - 1);
}