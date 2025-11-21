#include <stdio.h>
#include <stdlib.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int m = matrixSize;
    int n = *matrixColSize;

    int *row = calloc(m, sizeof(int));
    int *col = calloc(n, sizeof(int));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }

    free(row);
    free(col);
}

// -------------------------
// Test main()
// -------------------------

int main() {
    int m = 3, n = 3;
    int matrixData[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    // Allocate matrix as int**
    int** matrix = malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matrix[i] = malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            matrix[i][j] = matrixData[i][j];
        }
    }

    int colSize = n;
    setZeroes(matrix, m, &colSize);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < m; i++)
        free(matrix[i]);
    free(matrix);

    return 0;
}
