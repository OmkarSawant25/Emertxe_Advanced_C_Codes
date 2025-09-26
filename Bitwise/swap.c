#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    printf("After : %d %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;   
    printf("After : %d %d\n", a, b);

	return 0;
}
