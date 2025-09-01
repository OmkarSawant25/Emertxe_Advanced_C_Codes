#include <stdio.h>

int main()
{
	int x;
	printf("Enter the number :\n");
	scanf("%d", &x);

	if (x >= 0)
	{
		printf("%d is a positive number\n", x);
	}
	else
	{
		printf("%d is a negative number\n", x);
	}
}
