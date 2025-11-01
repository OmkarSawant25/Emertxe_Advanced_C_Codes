/*
CW51 - WAP to copy its contents in text_copy.txt\
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1;
    FILE *fp2;

    fp1 = fopen("demo1.txt", "r");
    fp2 = fopen("demo2.txt", "w");

    int ch;
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);
}
