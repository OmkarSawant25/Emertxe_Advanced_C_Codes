/*
Name        : Omkar Ashok Sawant
Date        : 14/08/2025
Description : WAP to find 3rd largest element in an array
I/O         : I  -> Enter the size of the Array : 5
                    Enter the elements into the array: 5 1 4 2 8
              O  -> Third largest element of the array is 4
*/

#include <stdio.h>

int third_largest(int[], int); // function prototype

int main()
{
    int size, ret;
    printf("Enter the size of the array :");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // Read elements into the array
    }

    ret = third_largest(arr, size); // Function call

    printf("Third largest element of the array is %d\n", ret);
    return 0;
}

int third_largest(int a[], int n)
{
    int max = a[0];
    int smax;
    int tmax;

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i]; // Changing the value of max to array element
        }
        if (smax > a[i]) // Finding the smallest element
        {
            smax = a[i]; // Changing the value of smax to array element
        }
    }
    for (int i = 0; i < n; i++) // Finding the second max element
    {
        if (smax < a[i] && a[i] != max)
        {
            tmax = smax;
            smax = a[i];
        }
        else if (tmax < a[i] && smax != a[i] && max != a[i]) // condition checking for third max
        {
            tmax = a[i];
        }
    }
    return tmax; // Returning the third max value
}