#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    
    printf("Enter the elements in the array : \n");
    for(int i = 0; i <=size-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("The elements in the array are : \n");
    for(int i = 0; i <=size-1; i++)
    {
        printf("%d\n",arr[i]);
    }
}
