#include <stdio.h>

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		if (i == 4)
		{
			printf("Pen found\n");
			break;
		}
		printf("Missing\n");
	}
	printf("Thanks\n");
}
