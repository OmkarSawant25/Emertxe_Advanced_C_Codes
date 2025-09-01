#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of lines : ");
	scanf("%d", &n);
	int min = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int a = i;
			int b = j;
			if (a < b)
				min = a;
			else
				min = b;
			printf("%d", min);
		}
		printf("\n");
	}
}
