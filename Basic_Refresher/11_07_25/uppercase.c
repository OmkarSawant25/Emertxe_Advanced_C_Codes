#include <stdio.h>

int main()
{
	char x;
	printf("Enter the character :\n");
	scanf("%c", &x);

	if ((x >= 'A') && (x <= 'Z'))
	{
		printf("%c is in Uppercase\n", x);
	}
	else
	{
		printf("%c is not in Uppercase\n", x);
	}
}
