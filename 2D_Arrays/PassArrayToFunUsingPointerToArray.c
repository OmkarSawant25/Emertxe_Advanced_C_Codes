#include <stdio.h>

void print_array(int (*p)[5])
{
    for (int i = 0; i < 5; i++)
        printf("%d ", (*p)[i]);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    print_array(&arr); // pass address of array
    return 0;
}
