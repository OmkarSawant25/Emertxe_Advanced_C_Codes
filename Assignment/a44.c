/*
Name        : Omkar Ashok Sawant
Date        : 10/10/2025
Description : WAP to convert Little Endian data to Big Endian.
              Read 2 byte or 4 byte data according to given size(short or Int).
              Swap the bytes and convert the given data to Big Endian
I/O         : I -> Enter the size: 2
                   Enter any number in Hexadecimal: ABCD
              O -> After conversion CDAB
*/

#include <stdio.h>

int main()
{
    int size;
    unsigned int num;

    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter any number in Hexadecimal: ");

    scanf("%X", &num);

    char *ptr;          // Take character pointer to fetch only 1 byte
    ptr = (char *)&num; // Store the address of int to char pointer
    int i = 0;          // Initialize i with 0
    int j = size - 1;   // Assign value of j as size - 1
    while (i < j)
    {
        char temp = *(ptr + i); // Swap the position of stored data in the memory
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
        i++; // increment the value of i
        j--; // decrement the value of j
    }
    printf("After conversion %X\n", num);
    return 0;
}