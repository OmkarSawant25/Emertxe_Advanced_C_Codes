#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    printf("Enter the number of rows and cols : ");
    scanf("%d%d", &row, &col);
    
    // Allocate array of row pointer
    int **ptr = (int **) malloc(row * sizeof(int *));

    // Allocate each row individually
    for(int i = 0; i < row; i++)
    {
        ptr[i] = (int *) malloc(col * sizeof(int));
    }

    // Assigning the value to the elements
    printf("Enter the elements : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }

    printf("Elements of the array are :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < row; i++)
    {
        free(ptr[i]);
    }
    free(ptr);
}