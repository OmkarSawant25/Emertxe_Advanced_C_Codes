#include <stdio.h>

int main()
{
	int iter = 0;

	while(iter < 10)
	{
		if (iter == 5)
		{
		    iter++;
			continue;
		}
		
        printf("%d\n",iter);
		iter++;
	}

	return 0;
}
