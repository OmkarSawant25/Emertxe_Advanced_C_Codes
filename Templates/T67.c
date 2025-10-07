/*
T67 - Practice left and right shift operators
    WAP to perform Left shift and right shift operations on the entered number.
    Comment the prompting messages printf statements.
*/
#include <stdio.h>

int main()
{
    int num, n;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter the number of shifts to perform:");
    scanf("%d", &n);
    printf("After shifting to the right, the output is : %d\n", num >> n);
    printf("After shifting to the left, the output is : %d\n", num << n);
    return 0;
}