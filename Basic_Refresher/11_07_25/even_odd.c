#include <stdio.h>

int main()
{
	int num;
	printf("Enter the num :\n");
	scanf("%d",&num);

	if((num%2) == 0)
	{
		printf("%d is an Even number\n",num);
	}
	else
	{
		printf("%d is an Odd number\n",num);
	}
}
