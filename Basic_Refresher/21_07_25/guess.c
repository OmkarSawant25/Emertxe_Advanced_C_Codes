#include <stdio.h>

int main()
{
	int num = 25;
	int res = 0;

	/*	while(1)
		{
			printf("Enter a number : ");
			scanf("%d",&res);

			if(res == num)
			{
				printf("Correct Guess\n");
				return 0;
			}
			else
			{
				printf("Check another time\n");
			}
		}
		*/

	do
	{
		printf("Enter a number : ");
		scanf("%d", &res);

		printf("Try again \n");

	} while (num != res);

	printf("Guess Correctly");
}
