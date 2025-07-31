#include <stdio.h>

int main()
{
    int size;
    //printf("Enter array size: ");
    scanf("%d",&size);
    
    int arr1[size],arr2[size];
    
    //printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i] = arr1[i];
    }
    
    printf("Array1 elements: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr1[i]);
    }
    
    printf("\nArray2 elements: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr2[i]);
    }
}
