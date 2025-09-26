/*
Name        : Omkar Ashok Sawant
Date        : 26/09/2025
Description : WAP to replace 'n' bits of a given number
I/O         : I -> Enter the number: 15
                   Enter number of bits: 2
                   Enter the value: 1
              O -> Result =  13
*/

#include <stdio.h>

int replace_nbits(int, int, int);

int main()
{
    int num, n, val, res = 0;

    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);

    res = replace_nbits(num, n, val);

    printf("Result = %d\n", res);
}

int replace_nbits(int num, int n, int val)
{
    num = num & (~((1 << n) - 1));      // clear n bits in num
    val = val & ((1 << n) - 1);         // get n bits from val
    return num | val;                   // set the get value to num
}