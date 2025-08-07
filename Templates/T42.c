/*WAF to find the average of 3 integers and the print the result in main function.*/

#include <stdio.h>
double average(int, int, int);
int main()
{
    int num1, num2, num3;
    double result;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = average(num1, num2, num3);
    printf("Average is %g\n", result);
}
double average(int a, int b, int c)
{
    double avg = 0;
    avg = (double)(a + b + c) / 3.0;
    return avg;
}
