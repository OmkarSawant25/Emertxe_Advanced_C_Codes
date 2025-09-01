#include <stdio.h>

int main()
{
	int a = 10, b = 4;
	float res, res1;

	res = (float)a / b;
	printf("Result is : %f\n", res);
	res1 = a / b;
	printf("Result is : %f\n", res1);

	return 0;
}
