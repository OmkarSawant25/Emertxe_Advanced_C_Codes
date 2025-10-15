#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int (*fun_ptr)(int , int) = &add;
    printf("Addition is %d\n", (*fun_ptr)(10,20));
}