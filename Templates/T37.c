#include <stdio.h>

int main()
{
    int size,odd_count,even_count;
    //printf("Enter array size: ");
    scanf("%d",&size);
    
    even_count = 0;
    odd_count = 0;
    
    int arr[size],odd[size],even[size];
    //printf("Enter array elements: ");
    
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0)
        {
            even[even_count++] = arr[i];
            
        }
        else
        {
            odd[odd_count++] = arr[i];
        }
    }
    
    printf("Odd array elements: ");
    for(int k = 0; k < odd_count; k++)
    {
        printf("%d ",odd[k]);
    }
    
    printf("\nEven array elements: ");
    for(int j = 0; j < even_count; j++)
    {
        printf("%d ",even[j]);
    }
    
    
}
