#include <stdio.h>

int main()
{
    int size1, size2,count = 0;
    printf("Enter the array1 size : ");
    scanf("%d",&size1);
    printf("Enter the array2 size : ");
    scanf("%d",&size2);
    
    int arr1[size1];
    int arr2[size2];
    
    printf("Enter the array1 elements : ");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter the array2 elements : ");
    for(int j = 0; j < size2; j++)
    {
        scanf("%d",&arr2[j]);
    }
    
    for(int i = 0; i < size1; i++)
    {
        for(int j = i; j < size2; j++)
        {
            if(arr1[i]<arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;

            }
            if(arr2[i]<arr2[j])
            {
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;

            }
        }
    }
    for(int j = 0; j < size2; j++)
    {
        if(arr1[j] != arr2[j]){
            count++;
        }
    }
    if(count == 0)
    {
        printf("Array elements are equal.");
    }
    else
    {
        printf("Array elements are not equal.");
    }
}