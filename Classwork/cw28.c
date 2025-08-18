/*WAP to generate fibonacci series upto nth term
Eg: Enter the limit : 15
    Fibonacci series are : 0, 1, 1, 2, 3, 5, 8, 13,
*/

#include <stdio.h>
int Fibonacci(int);
int main()
{
    int limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    int i = 0;
    int fibo = Fibonacci(i);
    printf("Fibonacci series are : ");
    while (fibo <= limit)
    {
        printf("%d, ", fibo);
        i++;
        fibo = Fibonacci(i);
    }
    return 0;
}
int Fibonacci(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}