#include<stdio.h>

int main()
{
	int size,count = 0,flag;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];
	int uniq_arr[size];
	
	printf("Enter the elements in array: ");
	for(int i = 0; i < size ; i++)
	{
		scanf("%d",&arr[i]);
	}

	uniq_arr[0] = arr[0];
	count++;
	for(int j = 1; j < size; j++)
	{
		flag = 0;
		for(int k = 0; k < count; k++)
		{
			if(arr[j] == uniq_arr[k])
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			uniq_arr[count] = arr[j];
			count++;
		}
	}
	printf("Unique elements in array are : ");
	for(int i = 0; i < count; i++)
	{
		printf("%d ",uniq_arr[i]);
	}
	return 0;
}
