#include<stdio.h>

int main()
{

	int size;
	int arr[size];

	printf("Enter the size of an array: ");
	scanf("%d",&size);

	for(int i = 0; i <= size-1; i++)
	{
		printf("Enter the element at %d index ",i);
		scanf("%d",&arr[i]);
	}
	for(int j = 0; j <= size-1; j++)
	{
		printf("The element at %d index is %d.\n",j,arr[j]);
	}

	return 0;
}
