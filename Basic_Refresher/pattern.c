#include <stdio.h>

int main()
{
	int num;
	printf("Enter the value : ");
	scanf("%d", &num);
	int count = 1;

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			if (i % 2 != 0)
			{
				count = num * (i - 1) + j;
				printf("%d ", count);
			}
			else if (i % 2 == 0)
			{
				count = num * i - j + 1;
				printf("%d ", count);
			}
		}
		printf("\n");
	}

	return 0;
}
