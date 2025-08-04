#include <stdio.h>

int main()
{
    int size1, size2, count = 0, sum1 = 0, sum2 = 0;
    printf("Enter the array1 size : ");
    scanf("%d", &size1);
    printf("Enter the array2 size : ");
    scanf("%d", &size2);

    int arr1[size1];
    int arr2[size2];

    printf("Enter the array1 elements : ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
        sum1 += arr1[i];
    }

    printf("Enter the array2 elements : ");
    for (int j = 0; j < size2; j++)
    {
        scanf("%d", &arr2[j]);
        sum2 += arr2[j];
    }

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
                break;
            }
        }
    }

    if (count == size1 && (sum1 == sum2))
    {
        printf("Array elements are equal.");
    }
    else
    {
        printf("Array elements are not equal.");
    }
}