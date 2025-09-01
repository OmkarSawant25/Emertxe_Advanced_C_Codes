#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d", &num);

	int result = 0;
	int x = num;
	int rem = 0;

	while (num != 0)
	{
		rem = num % 10;
		result = result * 10 + rem;
		num = num / 10;
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
