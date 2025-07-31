#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter the elements in array :\n");
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("The elements in array are :\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }
}
