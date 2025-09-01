#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n - 1; j++)
		{
			printf("  ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%d ", k);
		}
		for (int a = i - 1; a >= 1; a--)
		{
			printf("%d ", a);
		}
		printf("\n");
	}

	return 0;
}
