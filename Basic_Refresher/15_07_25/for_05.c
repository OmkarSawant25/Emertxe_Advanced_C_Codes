#include <stdio.h>

int main(){

	int x;
	printf("Enter the number :");
	scanf("%d",&x);

	for(int i = 1; i<=2*x ; i++){
		if(i%2 == 0){
		printf("%d ",i);
		}
	}

	/* Optimised Code
	 * int j=2;
	for(int i =1; i <= x ; i++){
		printf("%d",j);
		j=j+2;
		}
	*/
}
