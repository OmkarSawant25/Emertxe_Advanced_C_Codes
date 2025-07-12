#include <stdio.h>

int main()
{
	char x;
	printf("Enter the character :\n");
	scanf("%c",&x);

	if((x>='A' && x<='Z') || (x>='a' && x<='z') || (x>='0' && x<='9'))
	{
		printf("%c is an alphanumeric\n",x);
	}
	else
	{
		printf("%c is not an alphanumeric\n",x);
	}
}
