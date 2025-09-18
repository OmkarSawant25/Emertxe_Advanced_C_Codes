#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    fp = fopen("f1.txt", "w");
    int a = 10, b = 5;
    fprintf(fp,"sum of %d & %d is %d\n", a,b,a+b);
    fclose(fp);
	return 0;
}
