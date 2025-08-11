#include <stdio.h>

int main()
{
	int a = 1025;
    int *p = &a;
    printf("size of integer is %ld bytes\n",sizeof(int));
    printf("Address = %p, Value = %d\n",p,*p);
    printf("Address = %p, Value = %d\n",p+1,*(p+1));
// 1025 = 00000000 00000000 00000100 00000001
    char *p0;
    p0 = (char*)p; //typecasting
    printf("size of char is %ld bytes\n",sizeof(char));
    printf("Address = %p, Value = %d\n",p0,*p0);
    printf("Address = %p, Value = %d\n",p0+1,*(p0+1));
    printf("Address = %p, Value = %d\n",p0+2,*(p0+2));

	return 0;
}
