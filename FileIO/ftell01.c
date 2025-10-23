#include <stdio.h>
#include <limits.h>

int main()
{
    FILE *fptr;
    fptr = fopen("eof.txt", "r");
    if (fptr == NULL)
    {
        printf("File not created\n");
        return 0;
    }
    char ch;
    printf("File offset is at -> %ld\n", ftell(fptr));
    printf("The content of the file are : \n");
    while (ch = fgetc(fptr))
    {
        if (feof(fptr))
        {
            break;
        }
        fputc(ch, stdout);
    }
    printf("\nFile offset is at -> %ld\n", ftell(fptr));
    fclose(fptr);
}