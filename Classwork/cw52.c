/* CW52 -WAP program to find the occurrences of character 'c' using ftell() */

#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("text.txt","r");
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == 'c')
        {
            printf("Position of c is : %ld \n", ftell(fp));
        }
    }

	return 0;
}
