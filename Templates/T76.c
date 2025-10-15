/*
WAP to square 3 numbers using array of pointes
Instruction: Take 3 numbers in main function and store their address in array of pointers. Pass this as an argument to a function and square the numbers in the function.
Use array of pointers in main and 2nd level pointer in function
*/

#include <stdio.h>

void square(int *ptr[])
{
    for (int i = 0; i < 3; i++)
    {
        *ptr[i] = (*ptr[i]) * (*ptr[i]);
    }
}
int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr[3] = {&a, &b, &c};
    square(ptr);
    // printf("Square of the numbers are :\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *ptr[i]);
    }
}