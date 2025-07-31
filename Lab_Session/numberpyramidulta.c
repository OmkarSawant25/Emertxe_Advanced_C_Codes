#include<stdio.h>

int main()
{
	int x;
	printf("Enter the number of lines : ");
	scanf("%d",&x);
	int a = x;
	int sum = 0;
	while(a != 0)
	{
		sum = sum + a;
		a--;
	}

	for(int i = 1; i <= x; i++)
	{
		for(int j = 1; j<= i-1 ; j++)
		{
			printf("   ");
		}	

		for(int j = 1; j<= x - i + 1; j++)
		{
			printf("%3d",sum);
			sum--;
		}
		printf("\n");		
	}
	return 0;
}

// a = (num(num+1))/2		to get the starting value

