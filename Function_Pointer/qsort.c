#include <stdio.h>
#include <stdlib.h>
// // Ascending
// int compare(const void *a, const void *b)
// {
//     int A = *((int *) a); // Typecasting to int* and getting value
//     int B = *((int *) b); // Typecasting to int* and getting value
//     return A-B;
// }

// // Descending
// int compare(const void *a, const void *b)
// {
//     int A = *((int *) a); // Typecasting to int* and getting value
//     int B = *((int *) b); // Typecasting to int* and getting value
//     return A-B;
// }

// Absolute
int compare(const void *a, const void *b)
{
    int A = *((int *)a); // Typecasting to int* and getting value
    int B = *((int *)b); // Typecasting to int* and getting value
    return abs(A) - abs(B);
}
int main()
{
    int A[] = {-31, 22, -1, 50, -6, 4};
    qsort(A, 6, sizeof(int), compare);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}