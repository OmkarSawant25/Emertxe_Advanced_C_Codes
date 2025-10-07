/*
Name        : Omkar Ashok Sawant
Date        : 06/10/2025
Description : WAP to implement Circular right shift.
              Read a number num from user.
              Read a number n from user.
              Pass num and n to the function.
              Shift num, n times (towards right).
              While shifting the shifted bits should get replaced at the alternate end.
              For right shifting, the shifted bits should come at left most side.
              Return the new number from the function.
              Print the new number.
I/O         : I -> Enter num: 12
                   Enter n : 3
              O -> Result : 10000000 00000000 00000000 00000001
*/

#include <stdio.h>

int circular_right(int, int);  // Function Prototype
int print_bits(int);

int main()
{
    int num, n, ret;

    // printf("Enter the num:");
    scanf("%d", &num);

    // printf("Enter n:");
    scanf("%d", &n);

    ret = circular_right(num, n);       // Function Call

    print_bits(ret);                
}

int circular_right(int num, int n)
{
    int right_shift = ((unsigned)num >> n) | (num << 32 - n); // shift the num to right for n times(unsigned) & get n bits from LSB & shift the got value to MSB and perform or operation on it
    return right_shift;                                       // return the value
}

int print_bits(int ret) // print it in the binary format
{
    printf("Result in Binary: ");
    for (int i = 31; i >= 0; i--)
    {
        printf("%d ", (ret >> i) & 1);
    }
}