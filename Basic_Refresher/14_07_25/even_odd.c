#include <stdio.h>

int main()
{
	int x;
	printf("Enter the number :\n");
	scanf("%d",&x);

	if(x == 0)
	{
		printf("Neither Even nor Odd\n");
	}
	else if(x>0)
	{
		if(x%2 == 0)
		{
			printf("Positive even number\n");
		}
		else
		{
			printf("Positive Odd number\n");
		}
	}
	else
	{
		if(x%2 == 0)
		{
			printf("Negative even number\n");
		}
		else
		{
			printf("Negative Odd number\n");
		}
	}
}

