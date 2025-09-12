#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
    char s[20] = "Omkar Sawant";
    fp = fopen("f1.txt", "w");
    if(fp == NULL)
    {
        printf("File cannot open\n");
        return 0;
    }
    for(int i = 0; i < strlen(s); i++)
    {
        fputc(s[i],fp);
    }
	fclose(fp);
	return 0;
}
