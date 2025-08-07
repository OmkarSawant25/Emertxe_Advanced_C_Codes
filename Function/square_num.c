#include <stdio.h>
void square(int);									//Function prototype

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d", &num);
	square(num);									//Function call
	return 0;
}

void square(int a)									//Function definition
{
	int ans;
	ans = a * a;
	printf("Square of %d is %d\n", a, ans);
}