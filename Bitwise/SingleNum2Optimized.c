#include <stdio.h>

int SingleNum(int *num, int size)
{
    for(int j = 0; j < size - 1; j++)
    {
        for(int i = j; i < size - j - 1; i++)
        {
            if(num[i] > num[i+1])
            {
                int temp = num[i];
                num[i] = num [i + 1];
                num[i+1] = temp;
            }
        }
    }
    for(int i = 1; i < size; i += 3)
    {
        if(num[i] != num[i-1])
        {
            return num[i-1];
        }
    }
    return num[size-1];
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int num[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &num[i]);

    int single = SingleNum(num, size);
    printf("Unique Element in the given array is %d \n", single);

    return 0;
}
