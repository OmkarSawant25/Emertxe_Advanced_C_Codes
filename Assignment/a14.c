/*
Name        : Omkar Ashok Sawant
Date        : 14/08/2025
Description : WAP to find 2nd largest element in an array
I/O         : I  -> Enter the size of the Array : 5
                    Enter the elements into the array: 5 1 4 2 8
              O  -> Second largest element of the array is 5
*/

#include <stdio.h>

int sec_largest(int[], int); // function prototype

int main()
{
    int size, ret;

    // printf("Enter the size of the array : ");           //Read size from the user
    scanf("%d", &size);

    int arr[size];
    // printf("Enter the elements into the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // Read elements into the array
    }
    ret = sec_largest(arr, size); // Function call

    printf("Second largest element of the array is %d\n", ret);
    return 0;
}

int sec_largest(int a[], int n) // Function Declaration
{
    int max = a[0];  // Assigning max to the first element of array
    int smax = a[0]; // Assigning smax to the first element of array
    for (int i = 0; i < n; i++)
    {
        if (max < a[i]) // checking if max is less than array elements
        {
            max = a[i]; // assigning max as the arr[i]
        }
        if (smax > a[i]) // checking if smax is greater than array elements
        {
            smax = a[i]; // assigning smax as the arr[i] to find smallest
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max > a[i] && smax < a[i]) // checking the condition
        {
            smax = a[i]; // assigning smax as the arr[i]
        }
    }

    return smax;
}