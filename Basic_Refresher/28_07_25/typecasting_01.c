#include <stdio.h>

int main()
{
	int a = 10.5; // type demotion
	float b = 10; // type promotion

	printf("Result is : %d\n", a);
	printf("Result is : %f\n", b);

	return 0;
}
