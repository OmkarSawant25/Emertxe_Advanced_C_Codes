#include <stdio.h>
int even_odd(int);

int main()
{
	int num, a;
	printf("Enter the number : ");
	scanf("%d", &num);

	a = even_odd(num);
	if (a == 1)
		printf("Number is Even\n");
	else
		printf("Number is Odd\n");

	return 0;
}

int even_odd(int num)
{
	int res;
	if (num % 2 == 0)
		res = 1;
	else
		res = 0;
	return res;
}
