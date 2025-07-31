#include <stdio.h>

int main()
{
    int size,evencount,oddcount;
    //printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    evencount = 0;
    oddcount = 0;
    
    //printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        
        if(arr[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("Even count: %d\n",evencount);
    printf("Odd count: %d\n",oddcount);
}
