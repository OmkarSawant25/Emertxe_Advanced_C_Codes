#include <stdio.h>

int main()
{

	int num1, num2;

	printf("Enter the num1 & num2 : \n");
	scanf("%d %d", &num1, &num2);

	int rem = num1 % num2;

	if (rem == 0)
	{
		printf("%d is a factor of %d\n", num2, num1);
	}
}
