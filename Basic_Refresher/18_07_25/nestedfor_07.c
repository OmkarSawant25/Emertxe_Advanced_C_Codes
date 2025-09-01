#include <stdio.h>

int main()
{
	int n;
	printf("Enter the size : ");
	scanf("%d", &n);
	int mid = n / 2 + 1;
	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= n; col++)
		{
			/*if(row == 1){
				printf("* ");
			}
			else if(col != mid){
				printf("  ");
			}*/

			if (row == 1 || col == mid)
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
