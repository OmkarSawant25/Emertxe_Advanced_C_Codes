/*  Write a program to find the average of 5 array elements using function */

#include <stdio.h>
void average(int *, int, double *);
int main()
{
    int size;
    double avg;
    printf("Enter the size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    average(arr, size, &avg);
    printf("Average is %g\n", avg);
    return 0;
}
void average(int *arr, int n, double *avg)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *(arr + i);
    }
    *avg = (double)sum / n;
}