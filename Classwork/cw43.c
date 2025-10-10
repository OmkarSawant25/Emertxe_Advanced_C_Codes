/*WAP to program to swap a nibble using bit fields*/

#include <stdio.h>

int main()
{
    unsigned char n;
    printf("Enter the hexa-decimal value : ");
    scanf("%hhX", &n);
    unsigned char a = n >> 4;
    unsigned char b = n << 4;
    printf("After swap nibble : %X\n", (unsigned)(a | b));
}