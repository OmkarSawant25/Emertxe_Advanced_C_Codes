/* Print all the Environmental Variables */

#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    printf("Environmental Variables\n");
    for(int i = 0; envp[i] != NULL; i++)
    {
        printf("%s\n", envp[i]);
    }
}