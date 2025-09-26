/*
Name        : Omkar Ashok Sawant
Date        : 25/09/2025
Description : WAP to print 'n' bits from LSB of a number
I/O         : I -> Enter the number: 15
                   Enter number of bits: 4
              O -> Binary form of 15: 1 1 1 1
*/

#include <stdio.h>

int print_bits(int, int);

int main()
{
    int num, n;

    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);

    printf("Binary form of %d: ", num);
    print_bits(num, n);
}

int print_bits(int num, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", (num >> i) & 1);
    }
}