/*
Name        : Omkar Ashok Sawant
Date        : 07/10/2025
Description : WAP to put the (b-a+1) lsb’s of num into val[b:a]
              Read number num from user.
              Read number val from user.
              Read number a from user.
              Read number b from user(a <= b <=31)
              Do error checking
              Check b is within limit or not.
              Call replace_nbits_from_pos function by passing val, b - a + 1, b and n as arguments.
              replace_nbits_from_pos(num, a, b, val);
              Print the new value of i.
              Prompt for continue option
I/O         : I  -> Enter the value of 'num' : 11
                    Enter the value of 'a' : 3
                    Enter the value of 'b' : 5
                    Enter the value of 'val': 174
              O  -> Result = 158
*/

#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);

int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);
    if((a > b) || (b > 31))
    {
        return 0;
    }
    res = replace_nbits_from_pos(num, a, b, val);
    
    printf("Result = %d\n", res);
}

int replace_nbits_from_pos(int num, int a, int b, int val)
{
    int n = b - a + 1;                           // number of bits to replace
    int mask = ~(((1 << n) - 1) << a);           // clears n bits in val starting at position a
    val = val & mask;                            // clear those bits in val
    num = num & ((1 << n) - 1);                  // take only n bits from num (from LSB)
    val = val | (num << a);                      // insert num bits into val
    return val;                                  // return final value
}
