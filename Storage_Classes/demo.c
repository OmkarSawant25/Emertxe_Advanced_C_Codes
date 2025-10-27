#include <stdio.h>

int main()
{
    int a = 5;
    {
        int a = 6;
        printf("%d\n",a);
    }
    printf("%d\n",a);
}
