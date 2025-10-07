/*
Name        : Omkar Ashok Sawant
Date        : 07/10/2025
Description : WAP to toggle 'n' bits from given position of a number
              a. Read number num from user.
              b. Read number n from user.
              c. Read number pos from user.
              d. Invert the n number of bits from pos positionth bit of num.
              e. Return the new value of num
              If num is 10, n is 3, and pos is 5
                            7 6 5 4 3 2 1 0
                      10 -> 0 0 0 0 1 0 1 0
            return value -> 0 0 1 1 0 0 1 0
            So the function should return 50 (0 0 1 1 0 0 1 0)
I/O         : I  -> Enter the number: 10
                    Enter number of bits: 3
                    Enter the pos: 5
              O  -> Result = 50
*/


#include <stdio.h>

int toggle_nbits_from_pos(int, int, int); // Function prototype

int main()
{
    int num, n, pos, res = 0;

    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);

    res = toggle_nbits_from_pos(num, n, pos);       // Function Call

    printf("Result = %d\n", res);
}

int toggle_nbits_from_pos(int num, int n, int pos)
{
    int mask = ((1 << n) - 1) << (pos - n + 1); // Create a mask with 'n' ones & Move the required bits
    return num ^ mask;                          // Then perform the XOR operation on it
}