/*
CW44 - Set, clear, get n bits from LSB

WAP to set clear and get n bits from lsb.
Read the number form the user in the hexadecimal format .
Read the number of bits from the user in decimal format.
Set, clear, get n bits from lsb:

Eg:

Enter the number in hexadecimal : 49
Enter the number of bits in decimal: 4
After setting 4 bits from lsb : 4f
After clearing 4 bits from lsb : 40
After getting 4 bits from lsb : 9
*/
#include <stdio.h>

int main()
{
    unsigned int num;
    int n;
    printf("Enter the number in hexadecimal : ");
    scanf("%x", &num);
    printf("Enter the number of bits in decimal: ");
    scanf("%d", &n);
    int set = num | ((1 << n) - 1);
    printf("After setting %d bits from lsb : %x\n", n, set);
    int clr = num & ~((1 << n) - 1);
    printf("After clearing %d bits from lsb : %x\n", n, clr);
    int get = num & ((1 << n) - 1);
    printf("After getting %d bits from lsb : %x\n", n, get);
}