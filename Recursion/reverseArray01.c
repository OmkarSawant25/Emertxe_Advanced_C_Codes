#include <stdio.h>

int n = 5;
int arr[5] = {1, 2, 3, 4, 5};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int i)
{
    if (i >= n / 2)
        return;
    swap(&arr[i], &arr[n - i - 1]);
    reverse(i + 1);
}
int main()
{
    reverse(0);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}