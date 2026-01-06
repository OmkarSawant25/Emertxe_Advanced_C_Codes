#include <stdio.h>
int findPivot(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int left = 0, right = 0;
        for (int j = 0; j < i; j++)
            left += arr[j];
        for (int j = i + 1; j < n; j++)
            right += arr[j];
        if (left == right)
            return i;
    }
    return -1;
}
int main()
{
    int n, arr[50];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int pivot = findPivot(arr, n);
    if (pivot != -1)
        printf("Pivot element = %d at index %d\n", arr[pivot],
               pivot);
    else
        printf("No pivot found\n");
    return 0;
}