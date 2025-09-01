#include <stdio.h>

int main()
{
	int x = 100;
	printf("Battery %% is : %d\n", x);

	do
	{
		printf("Keep playing ! Battery is %d%%\n", x);
		x = x - 10;
	} while (x >= 20);
	printf("Battery saver is on!\n");
}
