#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int *arr, int l, int r)
{
    if (l >= r)
        return;
    swap(&arr[l], &arr[r]);
    reverse(arr, l + 1, r - 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 0, 4);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}