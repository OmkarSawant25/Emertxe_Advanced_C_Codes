#include <stdio.h>

int main()
{
	char *str1 = "Hello"; // constant string shares same memory
	char *str2 = "Hello";
	printf("Address of str1 is %p\n", str1);
	printf("Address of str2 is %p\n", str2);
	str2 = "World"; // We can change this address
	str2[4] = 'D';	// We cannot modify the constants value
	printf("str2 is %s\n", str2);

	return 0;
}
