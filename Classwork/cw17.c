/*Write a program to check if a given number is even or odd. Function should return TRUE or FALSE*/

#include <stdio.h>
int evenOdd(int);
int main()
{
    int num, result;
    printf("Enter the number : ");
    scanf("%d", &num);
    result = evenOdd(num);
    if (result)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}
int evenOdd(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}