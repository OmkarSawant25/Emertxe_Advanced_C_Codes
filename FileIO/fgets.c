#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    fp = fopen("new.txt","r");
    char str[10];
    while(fgets(str,9,fp) != NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
	return 0;
}
