/*
Name        : Omkar Ashok Sawant
Date        : 14/08/2025
Description : Print the values in sorted order without modifying or copying array
I/O         : I  -> Enter the size : 5
                    Enter 7 elements
                    1 3 2 5 4 7 6
              O  -> After sorting: 1 2 3 4 5 6 7
                    Original array values 1 3 2 5 4 7 6
*/

#include <stdio.h>
/* Function prototype */
void print_sort(int[], int);
int smallest(int[], int);
int largest(int[], int);

int main()
{
    int size, iter;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the %d elements\n", size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }

    print_sort(arr, size); // Function Calling
    return 0;
}

void print_sort(int a[], int n) // Function Defination
{
    int small = smallest(a, n); // calling the fuctions
    int large = largest(a, n);
    printf("After sorting: %d ", small); // printing the smallest value
    for (int i = 0; i < n - 1; i++)      // Loop size - 1
    {
        int s_small = large; // Assigning large to second small value
        for (int i = 0; i < n; i++)
        {
            if (a[i] > small && a[i] < s_small) // checking is the array elements is greater than smaller value and less than the second small
            {
                s_small = a[i]; // updating second small as array element
            }
        }
        printf("%d ", s_small); // printing the value
        small = s_small;
    }
    printf("\nOriginal array values ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int smallest(int a[], int n) // Finding the smallest value
{
    int small = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }
    }
    return small;
}

int largest(int a[], int n) // Finding the largest value
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
