/*
Set, clear , get n bits to the right from given position

WAP to set, clear , get n bits to the right from given position.
Read an unsigned integer number in the hexadecimal format. Read number of bits and position in the decimal format. Set, clear and get n bits form given position (position should be greater than n).

Eg1:
Enter the number in hexadecimal : 25
Enter the number of bits in decimal: 3
Enter the position :5
After setting 3 bits from 5 pos : 3D
After clearing 3 bits from 5 pos : 5
After getting 3 bits from 5 pos : 4

*/
#include <stdio.h>

int main()
{
    unsigned int num;
    int n, pos;
    // printf("Enter the number in hexadecimal : ");
    scanf("%x", &num);
    // printf("Enter the number of bits in decimal: ");
    scanf("%d", &n);
    // printf("Enter the position :");
    scanf("%d", &pos);

    int set = num | (((1 << n) - 1) << (pos - n + 1));
    printf("After setting %d bits from %d pos : %x\n", n, pos, set);
    int clr = num & ~(((1 << n) - 1) << (pos - n + 1));
    printf("After clearing %d bits from %d pos : %x\n", n, pos, clr);
    int get = (num & (((1 << n) - 1) << (pos - n + 1))) >> (pos - n + 1);
    printf("After getting %d bits from %d pos : %x\n", n, pos, get);
}