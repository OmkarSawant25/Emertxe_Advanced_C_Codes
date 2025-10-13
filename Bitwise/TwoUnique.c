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

    long int xor = 0;
    int rightMost;
    for (int i = 0; i < size; i++)
    {
        xor = xor ^ num[i];
    }
    rightMost = (xor & (xor - 1)) & xor;

    int b1 = 0;
    int b2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (num[i] & rightMost)
        {
            b1 = b1 ^ num[i];
        }
        else
        {
            b2 = b2 ^ num[i];
        }
    }

    printf("Unique Elements in the given array are %d & %d\n", b1, b2);

    return 0;
}
