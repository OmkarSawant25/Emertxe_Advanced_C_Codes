#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",a,b);

	if(b == 0)
		goto end;
	printf("%d ",a/b);
	return 0;
}
