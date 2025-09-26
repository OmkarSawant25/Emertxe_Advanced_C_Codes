/*
Name        : Omkar Ashok Sawant
Date        : 26/09/2025
Description : WAP to count number of set bits in a given number and print parity
I/O         : I -> Enter the number: 15
              O -> Number of set bits = 4
                   Bit parity is Even
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int count = 0;
    while (num > 1)
    {
        if (num & num - 1)
        {
            count++;
        }
        num = (num >> 1);
    }
    if (num == 1)
    {
        count++;
    }
    printf("Number of set bits = %d\n", count);
    if (count % 2 == 0)
    {
        printf("Bit parity is Even\n");
    }
    else
    {
        printf("Bit parity is Odd\n");
    }
}
