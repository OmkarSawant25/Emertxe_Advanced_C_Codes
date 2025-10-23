#include <stdio.h>
#include <limits.h>

int main()
{
    FILE *fptr;
    fptr = fopen("eof.txt", "w");
    if (fptr == NULL)
    {
        printf("File not created\n");
        return 0;
    }
    char ch;
    ch = fgetc(fptr);
    if (ferror(fptr))
    {
        fprintf(stderr, "Error Opening the file in write mode\n");
    }
    clearerr(fptr);
    if (ferror(fptr))
    {
        fprintf(stderr, "Error Opening the file in write mode\n");
    }
    fclose(fptr);
}