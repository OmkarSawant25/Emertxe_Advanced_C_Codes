/*WAP to print the string character by character using a function*/

#include <stdio.h>

void print(char *str)
{
    while(*str)
    {
        putchar(*str++);
    }
}

int main()
{
    char *str = "Hello World";
    print(str);
}
