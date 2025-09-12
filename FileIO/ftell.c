#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("ftell.txt","r");
    while((ch = fgetc(fp)) != EOF)
    {
        // fputc(ch,stdout);
        if(ch == 'c')
        {
            printf("Position of c is : %ld \n", ftell(fp));
        }
    }

	return 0;
}
