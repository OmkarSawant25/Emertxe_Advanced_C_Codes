/*
Sum of variable numbers using variadic function
Template - Sum of variable numbers using variadic function
Eg: 
    result = sum(4, 10, 20, 30, 40);
    result = sum(5, 10, 20, 30, 40, 50);
    result = sum(3, 15, 12, 13);
    Print the results of above function call
Output: Result = 100
        Result = 150
        Result = 40
*/

#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list a;
    int sum = 0;
    va_start(a, count);
    for (int i = 0; i < count; i++)
    {
        sum += va_arg(a, int);
    }
    va_end(a);
    return sum;
}

int main()
{
    printf("Result = %d\n", sum(4, 10, 20, 30, 40));
    printf("Result = %d\n", sum(5, 10, 20, 30, 40, 50));
    printf("Result = %d\n", sum(3, 15, 12, 13));
}