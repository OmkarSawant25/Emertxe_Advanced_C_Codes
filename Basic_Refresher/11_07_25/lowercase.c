#include <stdio.h>

int main()
{
	char x;
	printf("Enter the character :\n");
	scanf("%c",&x);

	if((x >='a') && (x <= 'z'))
	{
		printf("%c is in Lowercase\n",x);
	}
	else
	{
		printf("%c is not in Lowercase\n",x);
	}
}
