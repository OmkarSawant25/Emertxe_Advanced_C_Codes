#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);

	for(int i = 1; i <= num; i++)
	{
		for(int j = 1; j <= num; j++)
		{
			if(i == 1)
			{
				printf("1 ");
			}
			else if(j == 1)
			{
				printf("2 ");
			}
			else if(i == num)
			{
				printf("3 ");
			}
			else if(j == num)
			{
				printf("4 ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}
