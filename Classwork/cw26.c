/*  Write a program to square each element of array. */
#include <stdio.h>
void square(int arr[], int size);

int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    square(arr, size);
    printf("Square is ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void square(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
}