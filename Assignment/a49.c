/*
Name        : Omkar Ashok Sawant
Date        : 08/10/2025
Description : WAP to define a macro SIZEOF(x), without using sizeof operator
I/O         : I -> Enter the number: 15
              O -> Size of int : 4 bytes
                   Size of char : 1 byte
                   Size of float : 4 bytes
                   Size of double : 8 bytes
                   Size of unsigned int : 4 bytes
                   Size of long int : 8 bytes
*/

#include <stdio.h>
#define SIZEOF(n) (char *)(&n + 1) - (char *)&n

int main()
{
    int num = 10;
    char ch = 'A';
    float fl = 20.5;
    double dou = 1023131;
    unsigned int un = 10212;
    long int lo = 121212;

    printf("Size of int : %ld bytes\n", SIZEOF(num));
    printf("Size of char : %ld bytes\n", SIZEOF(ch));
    printf("Size of float : %ld bytes\n", SIZEOF(fl));
    printf("Size of double : %ld bytes\n", SIZEOF(dou));
    printf("Size of unsigned int : %ld bytes\n", SIZEOF(un));
    printf("Size of long int : %ld bytes\n", SIZEOF(lo));

    return 0;
}