#include <stdio.h>
void greet();

int main()
{
	printf("In main function\n");
	greet();
	printf("In main function\n");
	return 0;
}

void greet()
{
	printf("In greet function\n");
}