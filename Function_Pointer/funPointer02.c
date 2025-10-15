#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int main()
{
    int (*p)(int , int);
    p = &add;
    int c = (*p)(10,20); // dereferencing and executing the function
    printf("Addition is %d\n", c);
}