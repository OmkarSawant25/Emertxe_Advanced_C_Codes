#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	int fact = 1;

	for (int i = n; i >= 1; i--)
	{
		fact = fact * i;
	}
	printf("Factorial of %d is %d\n", n, fact);
}
