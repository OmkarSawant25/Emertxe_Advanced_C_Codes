#include <stdio.h>

int main()
{
	int a = 10;
    int *p = &a;
    char *p1 = &a;
    printf("Address p is %ld\n",p);
    printf("size of integer is %ld bytes\n",sizeof(int));
    printf("Address p+1 is %ld\n",p+1);
	return 0;
}
