#include <stdio.h>

int main()
{
    int size, key, flag = 0;
    //printf("Enter array size: ");
    scanf("%d",&size);
    
    int arr[size];
    //printf("Enter array element: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d",&key);
    
    for(int j = 0; j < size; j++)
    {
        if(key == arr[j])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Element Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
    
}
