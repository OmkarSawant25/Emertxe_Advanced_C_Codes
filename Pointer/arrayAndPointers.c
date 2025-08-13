#include <stdio.h>

int main()
{
    int a[] = {2, 4, 5, 8, 1};
    // printf("%p\n", a);
    // printf("%p\n", &a[0]);
    // printf("%d\n", a[0]);
    // printf("%d\n", *a);
    for (int i = 0; i < 5; i++)
    {
        printf("Address = %p\n", &a[i]);
        printf("Address = %p\n", a + i);
        printf("Value = %d\n", a[i]);
        printf("Value = %d\n", *(a + i));
    }

    return 0;
}

// int *p = A;
// A++; //Invalid
// p++; //Valid