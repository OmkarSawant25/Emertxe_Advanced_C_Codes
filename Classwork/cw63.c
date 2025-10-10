/*
CW63 - WAM to find the sum of two nos
You have to read two inputs from the user and write a macro to find the sum.
*/

#include <stdio.h>
#define SUM(a, b) (a + b)

int main()
{
    int num1, num2;
    printf("Enter the num1 : ");
    scanf("%d", &num1);
    printf("Enter the num2 : ");
    scanf("%d", &num2);
    printf("The Sum is %d\n", SUM(num1, num2));
}