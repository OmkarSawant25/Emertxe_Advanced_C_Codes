#include <stdio.h>

int main()
{
	int a = 10, b = 20, c = 30;
	int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	printf("Max = %d\n",max);
}

