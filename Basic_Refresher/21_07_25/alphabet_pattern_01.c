#include <stdio.h>

int main()
{
	int x;
	printf("Enter a number : ");
	scanf("%d",&x);
	char ch = 'A';

	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= x; j++){
			printf("%c ",ch);
		}
		ch++;
		printf("\n");
	}
}

		
