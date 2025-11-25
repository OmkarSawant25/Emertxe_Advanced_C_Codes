#include <stdio.h>

void divideOddEven(int arr[], int n);   // Function prototype

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    divideOddEven(arr, n);

    return 0;
}

void divideOddEven(int arr[], int n)
{
    int e = 0, o = 0;
    int flag = 0;
    int even[n];
    int odd[n];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
            flag = 1;
        else if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }
    printf("Even : ");
    for(int i = 0; i < e; i++)
        printf("%d ",even[i]);
    
    printf("\nOdd : ");
    for(int i = 0; i < o; i++)
        printf("%d ",odd[i]);
    
    if(flag)
        printf("\n0 is neither even or odd\n");
    
}
