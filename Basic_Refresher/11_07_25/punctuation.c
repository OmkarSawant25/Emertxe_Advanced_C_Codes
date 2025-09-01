#include <stdio.h>

int main()
{
	char x;
	printf("Enter the character :\n");
	scanf("%c", &x);

	if ((x >= 33 && x <= 47) || (x >= 58 && x <= 64) || (x >= 92 && x <= 96) || (x >= 123 && x <= 126))
	{
		printf("%c is punctual\n", x);
	}
	else
	{
		printf("%c is not punctual\n", x);
	}
}
