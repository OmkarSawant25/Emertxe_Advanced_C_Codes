/*WAP to print the elements of the array using pointer */

#include <stdio.h>
void display(int *);
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    display(arr);
    return 0;
}
void display(int *a)
{
    printf("Array's elements are\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(a + i));
    }
}