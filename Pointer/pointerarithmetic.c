#include <stdio.h>

int main()
{
	int a = 10;
    int *p = &a;

    printf("Address p is %p\n",p);
    printf("size of integer is %ld bytes\n",sizeof(int));
    printf("Address p+1 is %p\n",p+1);

	return 0;
}
