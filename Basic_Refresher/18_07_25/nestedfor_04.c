#include <stdio.h>

int main(){
	int n,m;
	printf("Enter the size of row : ");
	scanf("%d",&n);
	printf("Enter the size of column : ");
	scanf("%d",&m);

	for(int row=1;row<=n;row++){
		for(int col=1;col<=m;col++){
			printf("* ");
		}
		printf("\n");
	}
}
