#include <stdio.h>
void print(const char *str)
{
    while (*str)
    {
        putchar(*str++);
    }
}
int main()
{
    char *str = "Hello World";
    printf("%s\n",str);
    return 0;
}
