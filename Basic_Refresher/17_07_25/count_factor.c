#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int count = 0;

	for(int i = 1 ; i <= n ; i++)
	{
		if(n % i == 0){
			count++;
		}
	}

	printf("The count of Factors of %d are %d \n",n,count);
}
