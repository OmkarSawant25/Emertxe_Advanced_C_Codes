/*
CW47 - Set, get, clear nth bit.

WAP to set, clear and get nth bit of a given number.
Read a hexadecimal number into an unsigned integer variable.
Also read the n from the user. Perform set bit, clear bit and get bit operation for the number at nth position.
*/
#include <stdio.h>

int main()
{
    unsigned int num;
    printf("Enter the number in the hexadecimal format: ");
    scanf("%X", &num);
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    int set = num | (1 << n);
    printf("Result after setting nth bit is : %X\n", set);
    int clr = num & ~(1 << n);
    printf("Result after clearing nth bit is : %X\n", clr);
    int nbit = (num >> n) & 1;
    printf("Get bit at nth position is: %d\n", nbit);
}