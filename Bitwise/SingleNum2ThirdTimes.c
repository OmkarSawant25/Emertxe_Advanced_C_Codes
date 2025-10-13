#include <stdio.h>

int SingleNum(int *num, int size)
{
    int ones = 0;
    int twos = 0;
    for(int i = 0; i < size; i++)
    {
        ones = (ones ^ num[i]) & ~twos;
        twos = (twos ^ num[i]) & ~ones;
    }  
    return ones;  
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
