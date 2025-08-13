#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter the size of array 1 : ");
	scanf("%d", &a);
	int arr[a];
	printf("Enter the elements in  array 1 : ");
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter the size of array 2 : ");
	scanf("%d", &b);
	int brr[b];
	printf("Enter the elements in  array 2 : ");
	for (int i = 0; i < b; i++)
	{
		scanf("%d", &brr[i]);
	}

	int sum = a + b;
	int add[sum];
	for (int i = 0; i < a; i++)
	{
		add[i] = arr[i];
	}
	for (int i = a; i < sum; i++)
	{
		add[i] = brr[i - a];
	}
	for (int i = 0; i < sum; i++)
	{
		printf("%d ", add[i]);
	}
	

	return 0;
}
