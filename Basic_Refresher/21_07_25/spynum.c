#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	int mux = 1;
	printf("Enter a number : ");
	scanf("%d", &num);

	while (num != 0)
	{
		num = num % 10;
		sum = sum + num;
		mux = mux * num;
		num = num / 10;
	}

	printf("sum is %d product is %d", sum, mux);
	if (sum == mux)
	{
		printf("Number is a spy number\n");
	}
	else
	{
		printf("Number is a not spy number\n");
	}
}
