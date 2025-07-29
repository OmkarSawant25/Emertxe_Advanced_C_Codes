#include<stdio.h>

int main()
{
	float x,y;
	x = 10/4;
	printf("Result is : %f\n",x);
	y = 10/4.0;							//Implicit typecasting (type promotion)
	printf("Result is : %f\n",y);

	return 0;
}
