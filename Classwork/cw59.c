/*
You have to read a 2d array inputs from the user and find the minimum and maximum value. 
Sample Execution : 
Test case 1 : 
Enter the row size : 2
Enter the column size : 2
Enter the array elements : 4 3 2 1
Min is 1
Max is 4 
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int row, col;
    printf("Enter the row size : ");
    scanf("%d", &row);
    printf("Enter the column size : ");
    scanf("%d", &col);
    int arr[row][col];
    int min = INT_MAX;
    int max = INT_MIN;
    printf("Enter the array elements : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("Min is %d\n", min);
    printf("Max is %d\n", max);
}