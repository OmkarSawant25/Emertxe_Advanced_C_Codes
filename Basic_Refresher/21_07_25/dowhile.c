#include <stdio.h>

int main()
{
	char ch;

	do
	{
		printf("You ate a candy! ");
		printf("\nCan I eat one more : ");
		scanf("%c", &ch);
		getchar();
	} while (ch == 'y');

	printf("No more candies!\n");
	return 0;
}
