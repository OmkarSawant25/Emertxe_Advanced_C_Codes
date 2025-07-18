#include <stdio.h>

int main()
{
	int start,diff,terms;
	printf("Enter the start, diff, no. of terms : ");
	scanf("%d %d %d",&start,&diff,&terms);
	int result = start;

	for(int i = start ; i <= terms ; i++ )
	{
		printf("%d ", result);
		result = result + diff;
	}
	return 0;
}

