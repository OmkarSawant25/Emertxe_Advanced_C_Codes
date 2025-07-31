#include<stdio.h>

int main()
{
	int num;
	printf("Enter the number of lines : ");
	scanf("%d",&num);
	int mid = num/2 + 1;

	for(int i = 1 ; i <= num; i++)
	{
		for(int j = 1; j <=num ;j++)
		{
			if(i == mid || j == mid || (i == 1 && j < mid) || (j == 1 && i > mid) || (i == num && j > mid) || (j == num && i < mid))
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
	return 0;
}
