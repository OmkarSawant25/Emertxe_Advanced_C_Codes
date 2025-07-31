#include <stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[4]);
    arr[3] = 99;
    printf("%d\n",arr[3]);
    
    return 0;
}
