/*
Name        : Omkar Ashok Sawant
Date        : 17/10/2025
Description : WAP to find the product of given matrix.
              Read no.of rows and columns for 2 arrays from user and allocate the memory dynamically using malloc or calloc (Assume Matrix A and Matrix B).
              Read the Matrix A and B from user.
              Find the product for matrix A with matrix B amd store the result in Matrix R.
I/O         : I  -> Enter number of rows : 3
                    Enter number of columns : 3
                    Enter values for 3 x 3 matrix :
                    1  2  3
                    1  2  3
                    1  2  3
                    Enter number of rows : 3
                    Enter number of columns : 3
                    Enter values for 3 x 3 matrix :
                    1  1  1
                    2  2  2
                    3  3  3
              O  -> Product of two matrix :
                    14  14  14
                    14  14  14
                    14  14  14
*/
#include <stdio.h>
#include <stdlib.h>

int matrix_mul(int **, int, int, int **, int, int, int **, int, int);

int main()
{
    int **mat_a, **mat_b, **result;
    int rowA, rowB, colA, colB;
    // printf("Enter numbers of rows : ");
    scanf("%d", &rowA);
    // printf("Enter numbers of columns : ");
    scanf("%d", &colA);
    mat_a = (int **)malloc(rowA * sizeof(int *));

    // printf("Enter values for %d x %d matrix : \n",rowA, colA);
    for (int i = 0; i < rowA; i++)
    {
        mat_a[i] = (int *)malloc(colA * sizeof(int *));
        for (int j = 0; j < colA; j++)
        {
            scanf("%d", &mat_a[i][j]);
        }
    }

    // printf("Enter numbers of rows : ");
    scanf("%d", &rowB);
    // printf("Enter numbers of columns : ");
    scanf("%d", &colB);
    mat_b = (int **)malloc(rowB * sizeof(int *));

    // printf("Enter values for %d x %d matrix : \n", rowB, colB);
    for (int i = 0; i < rowB; i++)
    {
        mat_b[i] = (int *)malloc(colB * sizeof(int *));
        for (int j = 0; j < colB; j++)
        {
            scanf("%d", &mat_b[i][j]);
        }
    }

    if (colA == rowB)
    {
        result = (int **)malloc(sizeof(int *) * rowA);
        for (int j = 0; j < colB; j++)
        {
            result[j] = (int *)malloc(sizeof(int) * colB);
        }
        matrix_mul(mat_a, rowA, colA, mat_b, rowB, colB, result, rowA, colB);
        printf("Product of two matrix : \n");
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colB; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible\n");
    }
    return 0;
}

int matrix_mul(int **mat_a, int rowA, int colA, int **mat_b, int rowB, int colB, int **result, int rowR, int colR)
{
    for (int i = 0; i < rowR; i++)
    {
        for (int j = 0; j < colR; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++)
            {
                result[i][j] += mat_a[i][k] * mat_b[k][j];
            }
        }
    }
}
