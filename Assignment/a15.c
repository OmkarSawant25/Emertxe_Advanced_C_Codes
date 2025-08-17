/*
Name        : Omkar Ashok Sawant
Date        : 17/08/2025
Description : WAP to remove duplicate elements in a given array. Read size and elements into the array. After reading the input, you need to pass array to the function. In function, you need to remove duplicates/copy non-duplicate elements into new array.
You need to print he final output in main.
I/O         : I  -> Enter the size: 5
                    Enter elements into the array: 5 1 3 1 5
              O  -> After removing duplicates: 5 1 3
*/

#include <stdio.h>
void fun(int *arr1, int size, int *arr2, int *new_size); // Function prototype
int main()
{
    int size, new_size; // Declaration of variables
    // printf("Enter the size : ");
    scanf("%d", &size); // Input of size from the user
    int arr1[size];
    int arr2[size];
    // printf("Enter the array elements : ");
    for (int i = 0; i < size; i++) // Taking Array elements from user
    {
        scanf("%d", &arr1[i]);
    }
    fun(arr1, size, arr2, &new_size); // Function calling
    printf("After removing duplicates: ");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
void fun(int *arr1, int size, int *arr2, int *new_size) // Function Declaration
{
    *new_size = 0; // modifying the value as 0
    for (int i = 0; i < size; i++)
    {
        int flag = 0; // Declaring the variable & initializing the value of flag
        for (int j = 0; j < *new_size; j++)
        {
            if (arr1[i] == arr2[j]) // Checking the value of array1 & array2, if it matches make the flag as 1
            {
                flag = 1;
                break;
            }
        }
        if (!flag) // If flag is 0 then add them to array
        {
            arr2[(*new_size)++] = arr1[i]; // add to the *new_size and after that increment it.
        }
    }
}