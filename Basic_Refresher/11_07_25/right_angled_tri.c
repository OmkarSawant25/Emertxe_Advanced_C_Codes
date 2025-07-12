#include <stdio.h>

int main(){

	int x,y,z;
	printf("Enter the numbers : \n");
	scanf("%d %d %d",&x,&y,&z);

	if(x*x + y*y == z*z || y*y + z*z == x*x || z*z + x*x == y*y )
	 {
		printf("Triangle is an right angled triangle\n");
	}
	else
	{
		printf("Triangle is not an right angled triangle\n");
	}
}

