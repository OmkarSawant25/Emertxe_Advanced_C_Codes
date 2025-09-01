#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter a number : ");
	scanf("%d %d", &x, &y);

	int res = 0;

	for (int i = 1; i <= y; i++)
	{
		res += x;
	}

	printf("Answer is %d\n", res);
}
