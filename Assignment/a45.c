/*
Name        : Omkar Ashok Sawant
Date        : 15/10/2025
Description : WAP to generate a n*n magic square.
              In recreational mathematics, a magic square is an arrangement of distinct numbers (i.e. each number is used once), usually integers, in a square grid,
              where the numbers in each row, and in each column, and the numbers in the main and secondary diagonals, all add up to the same number
              A magic square has the same number of rows as it has columns, and in conventional math notation, "n" stands for the number of rows (and columns) it has.
              Thus, a magic square always contains n2 numbers, and its size (the number of rows [and columns] it has) is described as being "of order n".
              Read an odd number n from user.
              Do error checking.
              Check the number is odd or not.
              If not, continue step a.
              Create an n X n matrix.
              Insert 1 to (n * n) numbers into matrix.
              Arrange the numbers in such a way that, adding the numbers in any direction, either row wise column wise or diagonal wise, should result in same answer.
              Allocate the memory dynamically using calloc.
I/O         : I  -> Enter a number: 3
              O  -> 8      1      6
                    3      5      7
                    4      9      2
*/

#include <stdio.h>
#include <stdlib.h>

void magic_square(int **, int);

int main()
{
    int n;
    // printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is positive and odd
    if ((n % 2 != 0) && (n > 0))
    {
        // Allocate memory for rows
        int **arr = (int **)malloc(sizeof(int *) * n);
        for (int i = 0; i < n; i++)
        {
            // Allocate memory for columns and initialize with 0
            arr[i] = (int *)calloc(n, sizeof(int));
        }

        // Generate the magic square
        magic_square(arr, n);

        // Print the magic square
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }

        // Free the allocated memory for each row
        for (int i = 0; i < n; i++)
        {
            free(arr[i]);
        }

        // Free the memory allocated for row pointers
        free(arr);
    }
    else
    {
        printf("Error : Please enter only positive odd numbers\n");
    }
}

void magic_square(int **arr, int n)
{
    int i = 1;         // Start filling from number 1
    int row = 0;       // Start from first row
    int col = n / 2;   // Start from middle column
    int total = n * n; // Total numbers to be filled

    // Continue filling until all numbers are placed
    while (i <= total)
    {
        arr[row][col] = i++; // Place the number and move to next
        row--;               // Move one row up
        col++;               // Move one column right

        // If row goes out of top, wrap to bottom
        if (row < 0)
        {
            row = n - 1;
        }

        // If column goes out of right side, wrap to first column
        if (col == n)
        {
            col = 0;
        }

        // If the position is already filled
        if (arr[row][col] != 0)
        {
            col--; // Move one column left
            row++; // Move one row down

            // Handle wrap-around for left and bottom
            if (col < 0)
            {
                col = n - 1;
            }
            if (row == n)
            {
                row = 0;
            }

            row++; // Move one extra step down
        }
    }
}