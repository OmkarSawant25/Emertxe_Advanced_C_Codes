#include <stdio.h>
void fun()
{
    printf("Hi Omkar\n");
}
int main()
{
    void (*fun_ptr)() = &fun;
    fun_ptr();
}