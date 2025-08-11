#include <stdio.h>

int main()
{
	int a = 10;
    // int *p = &a;
    int *p;
    p = &a;
    printf("a = %d\n",a);
    *p = 12;
    printf("a = %d\n",a);

	return 0;
}
