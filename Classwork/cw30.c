/*WAP to print numbers from 0 to n using static variable and recursive  function.
Eg: Enter the number : 10
    0 1 2 3 4 5 6 7 8 9 10  */
    
#include<stdio.h>
void increasing(int x, int n)
{
	if(x > n)	return;
	printf("%d ", x);
	increasing(x + 1, n);
	return;
}

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	increasing(0, n);
	return 0;
}

