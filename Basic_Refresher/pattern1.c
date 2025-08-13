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
			if (j % 2 != 0)
			{
				count = num * (j - 1) + i;
				printf("%d ", count);
			}
			else if (j % 2 == 0)
			{
				count = num * j - i + 1;
				printf("%d ", count);
			}
		}
		printf("\n");
	}

	return 0;
}
