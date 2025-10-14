/*
Name        : Omkar Ashok Sawant
Date        : 14/10/2025
Description : WAP to implement fragments using Array of Pointers.
              Implement fragments using array of pointers.
              Rows are static and columns are dynamic. Fixed no.of rows and columns will vary for each row.
              Example:
              Read no.of rows from user and allocate the memory statically for rows.
              Read no.of columns for each row and allocate the memory dynamically.
              Let us Assume, Row = 3.
              Row[0] = 4 columns, Row[1] = 3 columns and Row[2] = 5 columns.
              While allocating the memory for columns you have allocate for no.of columns + 1 dynamically.
              After that read the values from user and calculate the average for each row seperatly and store that average in that extra memory block which you added while allocating the memory.
              Example is given below.Then sort the array based on the average.
              Print the output on the screen.
I/O         : I  -> Enter no.of rows : 3
                    Enter no of columns in row[0] : 4
                    Enter no of columns in row[1] : 3
                    Enter no of columns in row[2] : 5
                    Enter 4 values for row[0] : 1 2 3 4
                    Enter 3 values for row[1] : 2 5 9
                    Enter 5 values for row[2] : 1 3 2 4 1
              O  -> Before sorting output is:
                    1.000000 2.000000 3.000000 4.000000 2.500000
                    2.000000 5.000000 9.000000 5.333333
                    1.000000 3.000000 2.000000 4.000000 1.000000 2.200000
                    After sorting output is:
                    1.000000 3.000000 2.000000 4.000000 1.000000 2.200000
                    1.000000 2.000000 3.000000 4.000000 2.500000
                    2.000000 5.000000 9.000000 5.333333
*/

#include <stdio.h>
#include <stdlib.h>

// Function declaration
int fragments(int row, float *[], int *); // Takes total rows, array of row pointers, and array of column counts

int main()
{
    int row;
    printf("Enter no.of rows : ");
    scanf("%d", &row);

    // Array of float pointers — each pointer points to one row
    float *arr[row];

    // Array to store the number of columns for each row
    int columnIndex[row];

    // For each row, ask how many columns it has and allocate memory dynamically
    for (int i = 0; i < row; i++)
    {
        printf("Enter no of columns in row[%d] : ", i);
        scanf("%d", &columnIndex[i]);

        // Allocate memory for columns + 1 (extra space for average)
        arr[i] = malloc(sizeof(float) * (columnIndex[i] + 1));
    }

    // Read elements for each row
    for (int i = 0; i < row; i++)
    {
        printf("Enter %d values for row[%d] : ", columnIndex[i], i);
        for (int j = 0; j < columnIndex[i]; j++)
        {
            scanf("%f", &arr[i][j]); // Store user input in row
        }
    }

    // Call function to calculate averages and sort the rows
    fragments(row, arr, columnIndex);

    // Free dynamically allocated memory for each row
    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }

    return 0;
}

int fragments(int row, float *arr[], int *columnIndex)
{
    // Step 1: Calculate average for each row and store it in the extra memory space
    for (int i = 0; i < row; i++)
    {
        float avg = 0;

        // Calculate sum of all elements in this row
        for (int j = 0; j < columnIndex[i]; j++)
        {
            avg += arr[i][j];
        }

        // Find average and store it in last position of that row
        avg = avg / columnIndex[i];
        arr[i][columnIndex[i]] = avg;
    }

    // Step 2: Print before sorting
    printf("Before sorting output is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < columnIndex[i] + 1; j++)
        {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }

    // Step 3: Sort rows based on their average (Bubble Sort)
    // The average is stored at the last index in each row
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i - 1; j++)
        {
            // Compare averages of two adjacent rows
            if (arr[j][columnIndex[j]] > arr[j + 1][columnIndex[j + 1]])
            {
                // Swap the row pointers
                float *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Swap the corresponding column counts
                int tempIdx = columnIndex[j];
                columnIndex[j] = columnIndex[j + 1];
                columnIndex[j + 1] = tempIdx;
            }
        }
    }

    // Step 4: Print after sorting
    printf("After sorting output is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < columnIndex[i] + 1; j++)
        {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
