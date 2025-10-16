/* WAP to program to swap a nibble using bit fields */

#include <stdio.h>
#define SWAP(n) ((n >> 4) & 0X0F) | ((n << 4) & 0XF0)
int main()
{
    unsigned char n;
    printf("Enter the hexa-decimal value : ");
    scanf("%hhx", &n);
    printf("After swap nibble : %x\n", SWAP(n));
}