#include <stdio.h>
#include <limits.h>

int main()
{
    FILE *fptr;
    fptr = fopen("eof.txt", "r+");
    if(fptr == NULL)
    {
        printf("File not created\n");
        return 0;
    }
    char ch;
    while(ch = fgetc(fptr))
    {
        if(feof(fptr)) 
        {
            printf("\nEnd of the file\n");
            break;
        }
        fputc(ch, stdout);
    }
    fclose(fptr);
}