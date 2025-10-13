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

    for (int bitIndex = 0; bitIndex < 32; bitIndex++)
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (num[i] & (1 << bitIndex))
            {
                count++;
            }
        }
        if (count % 3 == 1)
        {
            unique = unique | (1 << bitIndex);
        }
    }
    printf("Unique Element in the given array is %d \n", unique);

    return 0;
}
