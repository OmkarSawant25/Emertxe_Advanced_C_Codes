#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char ch;
	fptr = fopen("new.txt", "a");
	while(ch != '\n')
	{
		scanf("%c",&ch);
		fputc(ch,fptr);
	}
	
	fclose(fptr);
	return 0;
}
