#include <stdio.h>
#include <string.h>
int main()
{
    char str[50] = {"Omkar,Maharashtra,Latur"};
    char *token;
    token = strtok(str,",");
    while(token != NULL)
    {
        printf("%s\n",token);
        token = strtok(NULL,",");
    }
    return 0;
}