#include <stdio.h>

int main()
{
    // int a = 5;
    // int b = 3;
    // int c = a & b;
    // if(a & 1)
    // {
    //     printf("Even");
    // }
    // printf("%d\n", c);

    int a = 10;
    int c = 0;
    while(a > 1)
    {
        c += a & 1;
        printf("%d\n",c);

        a = a >> 1;
    }
    if(a == 1) c++;
    // printf("%d",c);

	return 0;
}
