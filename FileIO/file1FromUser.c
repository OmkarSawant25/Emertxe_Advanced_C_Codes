#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
    char s[20];
    fp = fopen("f1.txt", "w");
    if(fp == NULL)
    {
        printf("File cannot open\n");
        return 0;
    }
    printf("Enter the string : ");
    scanf("%[^\n]",s);

    // for(int i = 0; i < strlen(s); i++)
    // {
    //     fputs(s,fp);
    // }
        fputs(s,fp);

	fclose(fp);
	return 0;
}
