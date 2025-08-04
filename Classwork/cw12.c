/*
WAP to Remove duplicates in an array

Comment the prompting messages printf statements.

Instructions :-
Create array arr of user defined size
Read array elements and store in arr
Create a new array named uniq_array of same size
Implement code to copy only unique values (non duplicate values) into uniq_array
Print uniq_array
*/
#include <stdio.h>

int main()
{
    int size, count = 0, flag;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size], uniq_arr[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    uniq_arr[0] = arr[0];
    count++;

    for (int i = 1; i < size; i++)
    {
        flag = 0;
        for (int j = 0; j < count; j++)
        {
            if (arr[i] == uniq_arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            uniq_arr[count] = arr[i];
            count++;
        }
    }
    printf("Unique array elements: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", uniq_arr[i]);
    }
    return 0;
}