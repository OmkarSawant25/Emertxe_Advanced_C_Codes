#include <stdio.h>

// If we want in ascending order
int compare(int a,int b)
{
    if(a > b) return 1;
    else return -1;
}

// // If we want in descending order
// int compare(int a,int b)
// {
//     if(a > b) return -1;
//     else return 1;
// }
void BubbleSort(int *A, int n, int (*compare)(int ,int))
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n- i - 1; j++)
        {
            if(compare(A[j], A[j+1]) > 0)
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {1,6,5,4,3,2};
    BubbleSort(A, 6, compare);
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
}