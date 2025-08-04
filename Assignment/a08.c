/*
Name        : Omkar Ashok Sawant
Date        : 01/08/2025
Description : WAP to find the median of two unsorted arrays. In probability theory and statistics,
              a median is described as the number separating the higher half of a sample,
              a population, or a probability distribution, from the lower half.
              The median of a finite list of numbers can be found by arranging all the numbers
              from lowest value to highest value and picking the middle one.
I/O         : I ->  Enter the 'n' value for Array A: 5
                    Enter the 'n' value for Array B: 4
                    Enter the elements one by one for Array A: 3 2 8 5 4
                    Enter the elements one by one for Array B: 12 13 7 5

              O ->  Median of array1 : 4
                    Median of array2 : 9.5
                    Median of both arrays : 6.75
*/

#include <stdio.h>

int main()
{
    int size1, size2, temp; // Declaration of size1, size2 & temp variable
    float median1, median2; // Declaration of median1 & median2

    /* Taking input of the n value of Array A & Array B from the user */

    printf("Enter the 'n' value for Array A: ");
    scanf("%d", &size1);
    printf("Enter the 'n' value for Array B: ");
    scanf("%d", &size2);

    int mid1 = size1 / 2; // Taking the mid value of size1
    int mid2 = size2 / 2; // Taking the mid value of size2

    int arr1[size1]; // Declaration of Array A
    int arr2[size2]; // Declaration of Array B

    /* Taking elements from the user in Array A & Array B */

    printf("Enter the elements one by one for Array A: ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements one by one for Array B: ");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    /* Bubble sorting of the Array A & Array B */

    for (int i = 0; i < size1; i++) // Initializing the Outer loop
    {
        for (int j = 0; j < size1 - 1 - i; j++) // Initializing the Inner loop upto size1 - 1 - i
        {
            if (arr1[j] > arr1[j + 1]) // checking j is max than j+1 element
            {
                temp = arr1[j]; // Swapping the numbers
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size2; i++) // Initializing the Outer loop
    {
        for (int j = 0; j < size2 - 1 - i; j++) // Initializing the Inner loop upto size2 - 1 - i
        {
            if (arr2[j] > arr2[j + 1]) // checking j is max than j+1 element
            {
                temp = arr2[j]; // Swapping the numbers
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    /* Finding the median of the Array A & Array B  */

    if (size1 % 2 == 0) // Checking is the size is even
    {
        median1 = (float)(arr1[mid1 - 1] + arr1[mid1]) / 2; // If even then (mid-1 + mid) / 2
    }
    else
    {
        median1 = arr1[mid1]; // If odd then mid1
    }

    if (size2 % 2 == 0)
    {
        median2 = (float)(arr2[mid2 - 1] + arr2[mid2]) / 2;
    }
    else
    {
        median2 = arr2[mid2];
    }

    printf("Median of array1 : %g\n", median1);                      // Printing the median of array1
    printf("Median of array2 : %g\n", median2);                      // Printing the median of array2
    printf("Median of both arrays : %g\n", (median2 + median1) / 2); // Printing the median of both arrays

    return 0;
}