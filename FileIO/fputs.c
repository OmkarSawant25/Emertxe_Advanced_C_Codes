#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    fp = fopen("f1.txt","w");
    char str[100];
    printf("Enter the name : ");
    scanf("%[^\n]",str);
    fputs(str,fp);
    fclose(fp);
	return 0;
}
