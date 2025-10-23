#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    fp = fopen("eof.txt", "r");
    char ch[100];
    while(fscanf(fp,"%[^\n]",ch) == 1)
    {
        printf("%s\n", ch);
    }
    fclose(fp);
    return 0;
}

// when we are keeeping it in writing mode then we were getting garbage value
// 
