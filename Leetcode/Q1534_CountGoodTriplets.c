#include <stdio.h>
#include <stdlib.h>

int countGoodTriplets(int *arr, int arrSize, int a, int b, int c);

int main()
{
    int arr[] = {3, 0, 1, 1, 9, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int a = 7, b = 2, c = 3;

    int result = countGoodTriplets(arr, arrSize, a, b, c);

    printf("Good Triplets = %d\n", result);

    return 0;
}
int countGoodTriplets(int *arr, int arrSize, int a, int b, int c)
{
    int count = 0;
    for (int i = 0; i < arrSize - 2; i++)
    {
        for (int j = i + 1; j < arrSize - 1; j++)
        {
            if (abs(arr[i] - arr[j]) <= a)
            {
                for (int k = j + 1; k < arrSize; k++)
                {
                    if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                        count++;
                }
            }
        }
    }
    return count;
}