#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int oper(int (*fptr)(int ,int), int a, int b)
{
    return fptr(a,b);
}

int main()
{
    int (*fptr)(int, int);
    fptr = add;
    printf("Addition is %d\n",oper(fptr,10,20));
    fptr = sub;
    printf("Subtraction is %d\n",oper(fptr,10,20));
}