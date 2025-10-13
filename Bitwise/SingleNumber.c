#include <stdio.h>

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int num[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &num[i]);
    int unique = 0;

    for (int i = 0; i < size; i++)
    {
        unique ^= num[i];
    }
    printf("Unique Element in the given array is %d \n", unique);

    return 0;
}
