/*
CW48 - W.A.P to count set bits in a given number
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int count = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (((num >> i) & 1) == 1)
            count++;
    }
    printf("The count of set bits is %d\n", count);
}