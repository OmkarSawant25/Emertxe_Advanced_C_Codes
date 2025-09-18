#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int ch; // use int, because fgetc() returns EOF (-1)

    fp = fopen("new.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Read character by character until EOF
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
