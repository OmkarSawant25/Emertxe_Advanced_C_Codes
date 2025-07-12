#include <stdio.h>

int main()
{

	int num;
	printf("Enter the value for num :\n");
	scanf("%d",&num);

	if((num>=10) && (num<20))
	{
		printf("%d is between the range\n",num);
	}
	else
	{
		printf("%d is not in range\n",num);
	}
}
