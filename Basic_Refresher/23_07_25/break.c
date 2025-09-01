#include <stdio.h>

int main()
{
	int user, amount;
	int successCount = 0;
	for (user = 1; user <= 10; user++)
	{
		printf("User %d : Enter withdrawal amount: ", user);
		scanf("%d", &amount);

		if (amount == 0)
		{
			printf("Invalid amount! Skipping user %d...\n", user);
			continue;
		}

		if (successCount == 5)
		{
			printf("Atm out of cash!\n");
			break;
		}
		printf("Processing withdrawal of Rs. %d /- for user %d\n", amount, user);
		successCount++;
	}
	printf("\nTotal amount withdrawal : %d\n", successCount);
	return 0;
}
