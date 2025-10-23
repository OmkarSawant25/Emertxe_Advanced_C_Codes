/*
Name        : Omkar Ashok Sawant
Date        : 21/10/2025
Description : Variance calculation with dynamic arrays.
              In probability theory and statistics, variance measures how far a set of numbers is spread out. A variance of zero indicates that all the values are identical. Variance is always non-negative: a small variance indicates that the data points tend to be very close to the mean (expected value) and hence to each other, while a high variance indicates that the data points are very spread out around the mean and from each other.
              Mean = (sum of x) / size
              where : size = Number of items in the input
              Formula to calculate the variance:
              sigma = (sum of D2 ) / size
I/O         : I -> Enter the no.of elements : 10
                   Enter the 10 elements:
                   [0] -> 9
                   [1] -> 12
                   [2] -> 15
                   [3] -> 18
                   [4] -> 20
                   [5] -> 22
                   [6] -> 23
                   [7] -> 24
                   [8] -> 26
                   [9] -> 31
              O -> Variance is 40.000000
*/

#include <stdio.h>
#include <stdlib.h>

float variance(int *, int);

int main()
{
    int size;
    printf("Enter the no.of elements : ");
    scanf("%d", &size);
    int *arr = malloc(size * sizeof(int));
    printf("Enter the %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("[%d] -> ", i);
        scanf("%d", &arr[i]);
    }
    float res = variance(arr, size);
    printf("variance is %f\n", res);
    free(arr);
    return 0;
}
float variance(int *arr, int size)
{
    int mean, sum = 0;
    int D[size];
    int D_Sq[size];
    // Calculate the mean
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    mean = sum / size;
    sum = 0;

    for (int i = 0; i < size; i++)
    {
        D[i] = arr[i] - mean;  // Calculate Deviation (D)
        D_Sq[i] = D[i] * D[i]; // Calculate the square of Deviation
        sum += D_Sq[i];        // Calculate Sum for square of the Deviation
    }
    float var = (float)sum / size; // Variance = sum of all elements in ‘D_Sq’ / size
    return var;
}