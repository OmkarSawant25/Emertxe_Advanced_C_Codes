#include <stdio.h>

int main()
{
    int size,sum;
    float avg;
   // printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    sum = 0;
    
   // printf("Enter the array elements : ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    
    avg = (float) sum/size;
    printf("Sum: %d\n",sum);
    printf("Average: %f\n",avg);
    
}
