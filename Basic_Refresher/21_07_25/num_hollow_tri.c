#include <stdio.h>

int main()
{
	int x;
	printf("Enter a number : ");
	scanf("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		for (int j = i; j <= x; j++)
		{
			if ((i == 1) || (j == i) || j == x)
			{
				printf("%d ", j);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
