#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter a number of rows : ");
	scanf("%d",&x);
	printf("Enter a number of column : ");
	scanf("%d",&y);
	int a = 1;

	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
}

		
