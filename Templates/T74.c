/*
WAP to read and print the string using DMA
Instruction : Allocate 15 bytes in heap segment
Read hello world from the user and store it in the 15 bytes
print the string 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr = (char *) malloc(15 * sizeof(char));
    scanf("%[^\n]", ptr);
    getchar();
    printf("%s\n",ptr);
}