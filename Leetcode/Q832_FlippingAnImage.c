#include <stdio.h>
#include <stdlib.h>

int **flipAndInvertImage(int **image, int imageSize, int *imageColSize, int *returnSize, int **returnColumnSizes);
void swap(int *a, int *b);
int main()
{
    int imageSize = 3;
    int imageColSize[3] = {3, 3, 3};

    // Allocate 2D array
    int **image = (int **)malloc(imageSize * sizeof(int *));
    for (int i = 0; i < imageSize; i++)
    {
        image[i] = (int *)malloc(imageColSize[i] * sizeof(int));
    }

    // Example values
    int temp[3][3] = {{1, 0, 1}, {1, 1, 1}, {0, 1, 1}};
    for (int i = 0; i < imageSize; i++)
        for (int j = 0; j < imageColSize[i]; j++)
            image[i][j] = temp[i][j];

    int returnSize;
    int *returnColumnSizes;
    int **result = flipAndInvertImage(image, imageSize, imageColSize, &returnSize, &returnColumnSizes);

    // Print result
    for (int i = 0; i < returnSize; i++)
    {
        for (int j = 0; j < returnColumnSizes[i]; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    // Free memory
    // Free memory
    for (int i = 0; i < imageSize; i++)
        free(image[i]);
    free(image);
    free(returnColumnSizes);

    // Do NOT free 'result' because it's the same as 'image'

    return 0;
}
int **flipAndInvertImage(int **image, int imageSize, int *imageColSize, int *returnSize, int **returnColumnSizes)
{
    *returnSize = imageSize;
    *returnColumnSizes = (int *)malloc(imageSize * sizeof(int));
    for (int i = 0; i < imageSize; i++)
        (*returnColumnSizes)[i] = imageColSize[i];

    for (int i = 0; i < imageSize; i++)
    {
        int j = 0;
        int n = imageColSize[i] - 1;
        while (j < n)
        {
            swap(&image[i][j], &image[i][n]);
            j++;
            n--;
        }
    }
    for (int i = 0; i < imageSize; i++)
    {
        for (int j = 0; j < imageColSize[i]; j++)
        {
            if (image[i][j] == 1)
                image[i][j] = 0;
            else
                image[i][j] = 1;
        }
    }
    return image;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}