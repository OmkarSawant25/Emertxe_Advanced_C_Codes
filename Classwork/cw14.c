/*
Description :

-Read the array size and array elements from the user.
-FInd the Largest element in the array.

Sample Execution :

Test case 1 :
Enter the size : 5
Enter the array elements : 5 100 -2 75 42
Largest element is : 100
*/

#include <stdio.h>

int main()
{
    int size, max;
    printf("Enter the size : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Largest element is : %d\n", max);

    return 0;
}
