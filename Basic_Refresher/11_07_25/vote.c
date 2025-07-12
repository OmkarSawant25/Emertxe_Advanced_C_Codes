#include <stdio.h>

int main(){

	int age;
	printf("Enter your age : \n");
	scanf("%d",&age);

	if(age>=18){
		printf("Voter is Eligible for voting\n");
	}
	else{
		printf("Voter is not eligible for voting\n");
	}
}

