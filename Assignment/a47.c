/*
Name        : Omkar Ashok Sawant
Date        : 14/10/2025
Description : WAP to implement fragments using Array of Pointers.
              Read the N name from the user
              Sort it in alphabetical order
              Use 1st dynamic and 2nd static. Char (*name)[20]
              No.of names should be dynamic and no.of characters should be static.
              Allocate the memory dynamically for no.of names.
I/O         : I  -> Enter the size: 5
                    Enter the 5 names of length max 20 characters in each
                    [0] -> Delhi
                    [1] -> Agra
                    [2] -> Kolkata
                    [3] -> Bengaluru
                    [4] -> Chennai
              O  -> The sorted names are:
                    Agra
                    Bengaluru
                    Chennai
                    Delhi
                    Kolkata
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort_names(char (*)[20], int);

int main()
{
    int row;
    printf("Enter the size: ");
    scanf("%d", &row);
    getchar();

    char (*arr)[20];
    arr = (char (*)[])malloc(row * sizeof(char[5]));

    printf("Enter the %d names of length max 20 characters in each\n", row);
    for (int i = 0; i < row; i++)
    {
        printf("[%d] -> ", i);
        scanf("%[^\n]", arr[i]);
        getchar();
    }
    sort_names(arr, row);
    printf("The sorted names are:\n");
    for (int i = 0; i < row; i++)
    {
        printf("%s\n", arr[i]);
    }
}
void sort_names(char (*arr)[20], int row)
{
    for (int i = 0; i < row - 1; i++) // Bubble Sorting
    {
        for (int j = 0; j < row - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0) // Using the strcmp check if the output of that function is greater than 0 then swap the string
            {
                char temp[20];
                strcpy(temp, arr[j]); // Swap the string using strcp
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}