/*
Create a 2D array using pointer

WAP to read size and create a 2D array. Read the elements to the array and print using function
Eg:
Enter the number of rows and cols : 2 3
Enter the elements : 10 20 30 40 50 60
Elements of the array are : 
10 20 30
40 50 60
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    printf("Enter the number of rows and cols : ");
    scanf("%d%d", &row, &col);
    int **arr = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        arr[i] = (int *)malloc(col * sizeof(int));
    }
    printf("Enter the elements : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elements of the array are :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    free(arr);
}