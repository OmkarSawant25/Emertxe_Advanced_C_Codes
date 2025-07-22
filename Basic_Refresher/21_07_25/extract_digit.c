#include <stdio.h>

int main()
{
	int num,rem;
	printf("Enter a number : ");
	scanf("%d",&num);
	int res = 0;
	
	while(num != 0)
	{
		rem = num % 10;
		res = res * 10 + rem;
		num = num/10;
	}
	printf("%d ",res);
}

