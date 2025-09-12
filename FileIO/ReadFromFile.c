#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    fp = fopen("new.txt","r");
    char ch = fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch = fgetc(fp);
    }
    fclose(fp);
	return 0;
}
