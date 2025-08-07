#include<stdio.h>

int main()
{
	printf("Before\n");
	goto label;
	printf("Skip\n");
	label:
	printf("After\n");


	return 0;
}
