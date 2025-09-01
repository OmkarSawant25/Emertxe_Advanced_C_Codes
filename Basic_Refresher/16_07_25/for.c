#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d", &num);

	int result = 0;
	int x = num;
	int rem = 0;

	for (; num != 0; num = num / 10)
	{
		rem = num % 10;
		result = result * 10 + rem;
	}

	if (x == result)
	{
		printf("%d is a palindrome\n", x);
	}
	else
	{
		printf("%d is not a palindrome\n", x);
	}
}
