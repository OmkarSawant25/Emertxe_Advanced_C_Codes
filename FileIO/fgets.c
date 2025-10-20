#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>

int main()
{
    FILE *fp;
    fp = fopen("new.txt","r");
    char str[10];
    while(fgets(str,8,fp) != NULL)
    {
        printf("%s",str);
        sleep(1);
    }
    fclose(fp);
	return 0;
}
