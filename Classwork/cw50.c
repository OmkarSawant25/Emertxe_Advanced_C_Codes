/* CW50 - W.A.P to swap nibbles of given number */

#include <stdio.h>

int main()
{
    unsigned char n;
    printf("Enter the hexa decimal value : ");
    scanf("%hhx", &n); // unsigned char
    unsigned char a = n >> 4;
    unsigned char b = n << 4;
    printf("After swap : %X", (unsigned)(a | b));
}