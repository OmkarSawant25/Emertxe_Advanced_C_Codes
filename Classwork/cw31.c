/*Write a program to find the sum of sequence of N from starting from 1 using recursion*/
#include <stdio.h>
int sum(int);
int main()
{
    int num, result;
    printf("Enter the N value : ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum is %d\n", result);
    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}