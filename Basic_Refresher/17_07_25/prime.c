#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int count = 0;

	for(int i = 2 ; i < n ; i++)
	{
		if(n % i == 0){
		count = 1;
		}
	}

	if(n == 1){
		printf("1 is neither prime nor compliment\n");
	}
	else if(count == 0){
		printf("%d is an Prime number\n",n);
	}
	else{
		printf("%d is not a prime number\n",n);
	}
	

}
