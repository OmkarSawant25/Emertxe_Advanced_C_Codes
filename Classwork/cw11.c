/*
WAP to Reverse elements in an array
Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");


Instructions :-
Define an array and read values from user
Print the elements before reversing using a loop
Reverse the array elements
Print the elements again using loop (Validate if the elements are reversed)
*/

#include <stdio.h>

int main()
{
    int size,temp;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements before reversing:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    printf("\nElements after reversing:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
