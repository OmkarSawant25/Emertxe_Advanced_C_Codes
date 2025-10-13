#include <stdio.h>

void print_arr(int **ptr)
{
    for(int i = 0; i < 3; i++)
    {
        printf("%d at %p\n", *ptr[i], ptr[i]);
    }
}
int main() {
    int a = 10, b = 20, c = 30;
    int *ptr[3];  // array of 3 pointers

    ptr[0] = &a;  // store address of a
    ptr[1] = &b;  // store address of b
    ptr[2] = &c;  // store address of c

    print_arr(ptr);

    return 0;
}
