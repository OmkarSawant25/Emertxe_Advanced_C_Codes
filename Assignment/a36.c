/*
Name        : Omkar Ashok Sawant
Date        : 06/10/2025
Description : WAP to implement Circular left shift.
              Read a number num from user.
              Read a number n from user.
              Pass num and n to the function.
              Shift num, n times (towards left).
              While shifting the shifted bits should get replaced at the alternate end.
              For left shifting, the shifted bits should come at right most side.
              Return the new number from the function.
              Print the new number.
I/O         : I -> Enter num: 12
                   Enter n : 3
              O -> Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/

#include <stdio.h>

int circular_left(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;

    // printf("Enter the num: ");
    scanf("%d", &num);

    // printf("Enter n: ");
    scanf("%d", &n);

    ret = circular_left(num, n);

    print_bits(ret);
}

int circular_left(int num, int n)
{
    int left_shift = (num << n) | ((unsigned)num >> 32 - n); // shift the num to left for n times & get n bits from MSB & shift the got value to LSB (unsigned) and perform and operation on it
    return left_shift;                                       // return the value
}

int print_bits(int ret) // print it in the binary format
{
    printf("Result in Binary: ");
    for (int i = 31; i >= 0; i--)
    {
        printf("%d ", (ret >> i) & 1);
    }
}