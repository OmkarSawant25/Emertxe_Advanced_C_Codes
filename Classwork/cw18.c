/*
WAP to find the square of array's elements using a function.

Instructions:
Read the size and array's elements from the user
Write a function called display to print the array's elements
Write a function called square to square the array's elements and update the same array.
Donot use another additional array.

Eg:
Enter the array size : 6
Enter the array elements : 2 3 5 4 1 7
Array elements before squaring : 2 3 5 4 1 7  //print using display function
Array elements after squaring ; 4 9 25 16 1 49 // print using display function*/

#include <stdio.h>
void print(int *, int);
void Square(int *, int);

int main()
{
    int size;
    printf("Enter the array size : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements before squaring : ");
    print(arr, size);

    printf("\nArray elements after squaring : ");
    Square(arr, size);
    print(arr, size);
}

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}

void Square(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) *= *(arr + i);
    }
}