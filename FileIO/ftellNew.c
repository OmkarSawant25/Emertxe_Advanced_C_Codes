#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    int ch;
    fptr = fopen("demo1.txt", "r");
    /* Need to do error checking on fopen() */
    printf("File offset is at->% ld\n\n", ftell(fptr));
    printf("--> The content of file is < --\n");
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        fputc(ch, stdout);
        ch = fgetc(fptr);
    }
    printf("\nFile offset is at->% ld\n", ftell(fptr));
    fclose(fptr);
    return 0;
}