#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter the number : ");
	scanf("%d %d", &x, &y);
	int result = x;

	for (int i = 1; i <= y; i++)
	{
		printf("%d ", result);
		result = result * x;
	}
}
