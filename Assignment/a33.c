/*
Name        : Omkar Ashok Sawant
Date        : 25/09/2025
Description : WAP to get 'n' bits of a given number
I/O         : I  -> Enter the number: 10
                    Enter number of bits: 3
              O  -> Result = 2
*/

#include <stdio.h>

int get_nbits(int, int); // Function Prototype

int main()
{
    int num, n, res = 0;

    printf("Enter num and n:");
    scanf("%d%d", &num, &n);

    res = get_nbits(num, n); // Function call

    printf("Result = %d\n", res);
}

int get_nbits(int num, int n)
{
    int res = num & ((1 << n) - 1); // Getting n bits from a given num
    return res;
}