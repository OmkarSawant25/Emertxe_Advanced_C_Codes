#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);

	if (a>b)
	{
		printf("%d is greater number\n",a);
	}
	else
	{
		printf("%d is greater \n",b);
	}
}

