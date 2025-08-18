#include <stdio.h>

int sum(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else
	{
		return num + sum(num - 1);
	}
}

int main()
{
	int num, result;
	printf("Enter the number : ");
	scanf("%d", &num);

	result = sum(num);
	printf("Sum of the numbers is %d\n", result);

	return 0;
}
