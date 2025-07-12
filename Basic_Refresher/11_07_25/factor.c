#include <stdio.h>

int main()
{
	int x;
	printf("Enter the number\n");
	scanf("%d",&x);

	if( (x%3 == 0) || (x%5 == 0))
	{
		printf("%d is a factor\n",x);
	}
	else
	{
		printf("%d is not a factor\n",x);
	}
}

