#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int main()
{
    int (*fptr[])(int, int) = {add, sub};
    printf("Addition is %d\n",fptr[0](10,20));
    printf("Subtraction is %d\n",fptr[1](10,20));
}