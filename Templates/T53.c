/*Print array elements using Function*/

#include <stdio.h>
void print(int *);
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    print(arr);
    return 0;
}
void print(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }
}
