#include <stdio.h>

int main(){
	int n;
	printf("Enter the size : ");
	scanf("%d",&n);

	for(int row=1;row<=n;row++){	
		for(int col=1;col<=n-row;col++){
			printf(" ");
		}
		for(int col=1;col<=row;col++){
			printf("* ");
		}
		printf("\n");
	}
}
