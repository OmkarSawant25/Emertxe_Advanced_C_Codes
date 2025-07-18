#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int sum = 0;

	for(int i = 1; i <= n ; i++)
	{
		sum = sum + i;
	}
	printf("Sum of natural numbers is %d\n",sum);
}

