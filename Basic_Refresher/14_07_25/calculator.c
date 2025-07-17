#include <stdio.h>

int main()
{
	int ch;
	int x,y;
	while(1)
	{
	printf("Operations numbers : \n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");

	scanf("%d",&ch);
	
	printf("Enter two Numbers\n");
	scanf("%d %d",&x,&y);

	switch (ch)
	{
		case 1 :
			printf("Addition of two number is %d\n",x+y);
			break;
		case 2 :
			printf("Subtraction of two number is %d\n",x-y);
			break;
		case 3 :
			printf("Multiplication of two number is %d\n",x*y);
			break;
		case 4 :
			printf("Division of two number is %d\n",x/y);
			break;
		default :
			printf("Invalid Input\n");
			break;
	}
	}
}
