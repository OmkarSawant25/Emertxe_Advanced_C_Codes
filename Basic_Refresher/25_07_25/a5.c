#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);

	for (int i = n; i >= 1; i--)
	{
		for (int j = i; j <= n; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	for (int i = 2; i <= 5; i++)
	{
		for (int j = i; j <= n; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}
