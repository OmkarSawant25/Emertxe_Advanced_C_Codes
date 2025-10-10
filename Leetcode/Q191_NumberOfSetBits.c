#include <stdio.h>

int hammingWeight(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of set bits = %d\n", hammingWeight(num));
    return 0;
}
