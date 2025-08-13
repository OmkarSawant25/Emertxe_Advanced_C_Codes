#include <stdio.h>
int Sum(int a[], int size)
{
    int Sum = 0;
    for (int i = 0; i < size; i++)
    {
        Sum += a[i];
    }
    return Sum;
}

int main()
{
    int a[] = {2, 4, 5, 8, 1};
    int size = sizeof(a) / sizeof(a[0]);
    int total = Sum(a, size);
    printf("The Sum of elements in array = %d\n", total);

    return 0;
}
