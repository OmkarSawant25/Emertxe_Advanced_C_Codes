#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("read.txt", "w");
    if (fp == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    fprintf(fp, "Hello, this is a sample text file.\nWelcome to the Classwork number 55\nOmkar Sawant Here!");
    fclose(fp);

    fp = fopen("read.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Contents of text.txt:\n\n");

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    printf("\n");
    fclose(fp);
    return 0;
}
