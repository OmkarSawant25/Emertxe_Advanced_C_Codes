/* WAP to find the average of array's elements. */

#include <stdio.h>
void average(int arr[], int size, float *avg)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    *avg = (float)sum / size;
}

int main()
{
    int n;
    float avg;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    average(arr, n, &avg);
    printf("Average of array elements : %g\n", avg);

    return 0;
}