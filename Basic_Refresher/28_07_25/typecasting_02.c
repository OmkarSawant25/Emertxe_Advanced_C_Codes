#include <stdio.h>

int main()
{
	char a = 10;
	char b = 20;

	printf("Size of char is : %ld\n", sizeof(a));
	printf("Size of a+b is : %ld\n", sizeof(a + b));
	printf("Size of !a is : %ld\n", sizeof(!a));

	return 0;
}
