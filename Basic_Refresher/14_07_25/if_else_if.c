#include <stdio.h>

int main()
{
	int bill_amt;
	printf("Enter the amount\n");
	scanf("%d",&bill_amt);

	if(bill_amt >= 3000){
		printf("Eligible for 30 %% discount\n");
	}
	else if(bill_amt >= 2000){
		printf("Eligible for 20 percent	discount\n");
	}
	else if(bill_amt >= 1000){
		printf("Eligible for 10 percent	discount\n");
	}
	else{
		printf("Not Eligible for discount\n");
	}
}

