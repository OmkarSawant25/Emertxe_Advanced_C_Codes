#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
	}

	printf("The sum for Factors of %d is %d \n", n, sum);
}
