#include <stdio.h>

void print(char *name)
{
    printf("Hello %s\n", name);
}

int main()
{
    void (*p)(char *);
    p = print;
    p("Omkar");
}