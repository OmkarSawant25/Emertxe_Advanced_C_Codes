#include <stdio.h>

int removeDuplicates(int arr[], int n); // Function prototype

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    int new_n = removeDuplicates(arr, n);

    for (int i = 0; i < new_n; ++i)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

// int removeDuplicates(int arr[], int n)
// {
//     int i = 0;
//     for (int j = 1; j < n; j++)
//     {
//         if (arr[j] != arr[i])
//         {
//             arr[i + 1] = arr[j];
//             i++;
//         }
//     }
//     return i+1;
// }

int removeDuplicates(int arr[], int n)
{
    int new_n = 0;

    for (int i = 0; i < n; i++)
    {
        int found = 0;

        for (int j = 0; j < new_n; j++)
        {
            if (arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            arr[new_n] = arr[i];
            new_n++;
        }
    }

    return new_n;
}
