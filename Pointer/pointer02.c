#include <stdio.h>

void input(int *p)
{
	printf("Enter the Elements in array :\n");
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", p + i);
	}
}

void display(int *p)
{
	printf("\nThe Elements in array are :\n");

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(p + i));
	}
}
void sort(int *p)
{
	int i, j, t;
	for (i = 1; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				t = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
		}
	}
}

int main()
{
	int a[5];
	input(a);
	display(a);
	sort(a);
	display(a);

	return 0;
}
