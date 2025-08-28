/*
Name        : Omkar Ashok Sawant
Date        : 25/08/2025
Description : WAP to implement getword function.
              int getword(char *word)
              Create a function named getword.
              Function will receive the string from main
              Function should return the length of the first word.
I/O         : I -> Enter the string : Welcome to Emertxe
              O -> You entered Welcome and the length is 7
*/

#include <stdio.h>
int getword(char *str); // Function Prototype
int main()
{
    int len = 0;
    char str[100];

    printf("Enter the string : ");
    scanf(" %[^\n]", str);

    len = getword(str); // Function Call
    printf("You entered %s and the length is %d\n", str, len);
    return 0;
}

int getword(char *str) // Function Defination
{
    int count = 0;                     // Initializing the count to find the length
    while (*str != 32 && *str != '\0') // run until it reaches space or null character
    {
        count++; // Incrementing the count
        str++;   // Incrementing the string
    }
    *str = '\0';  // Update the last value of the string as null character
    return count; // return the count to the main function
}
