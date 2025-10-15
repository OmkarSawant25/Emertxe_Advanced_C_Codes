/*
WAM to swap a nibble in a byte
You have to read a hexadecimal value from user and swap the nibble.
Sample Execution : 
    Test case 1 : 
    Enter the hexa-decimal value : AB
    After swap nibble : BA

    Test case 2 :
    Enter the hexa-decimal value : cd
    After swap nibble : dc
*/

#include <stdio.h>

#define SWAP(n) (((n >> 4) & 0x0F) | ((n << 4) & 0xF0))                           

int main()
{
    unsigned char n;
    printf("Enter the hexa-decimal value : ");
    scanf("%hhx", &n);
    printf("After swap nibble : %x\n",SWAP(n));
}