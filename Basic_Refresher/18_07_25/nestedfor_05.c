#include <stdio.h>

int main()
{
	int n;
	printf("Enter the size : ");
	scanf("%d", &n);

	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= n; col++)
		{
			if (row == 1 || row == n)
			{
				printf("* ");
			}
			else if (col == 1 || col == n)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
