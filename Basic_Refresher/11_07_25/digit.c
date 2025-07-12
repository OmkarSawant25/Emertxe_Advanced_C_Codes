#include <stdio.h>

int main()
{

	char ch;
	scanf("%c",&ch);

	if ( ch >= '0' && ch <= '9')
	{
		printf("%c is a digit char\n",ch);
	}
	else
	{
		printf("%c is not a digit char\n",ch);

	}
}
