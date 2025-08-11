#include <stdio.h>

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("After Swapping inside function a = %d, b = %d\n", a, b);
}

int main()
{
	int a = 10, b = 5;
	printf("Before Swapping a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("After Swapping a = %d, b = %d\n", a, b);
	return 0;
}
