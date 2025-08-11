/*
Name        : Omkar Ashok Sawant
Date        : 07/08/2025
Description : Write A Program to implement your own islower() function
I/O         : I -> Enter the character: a
              O -> Entered character is lower case alphabet.
*/

#include <stdio.h>

int my_islower(int); // Function Prototype

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_islower(ch); // Function Call
    if (ret)              // Checking the condition
    {
        printf("Entered character is lower case alphabet\n");
    }
    else
    {
        printf("Entered character is not lower case alphabet\n");
    }

    return 0;
}

int my_islower(int ch) // Function Definition
{
    if ((ch >= 97 && ch <= 122))
    {
        return 1; // Returns 1 if condition is true
    }
    else
    {
        return 0; // Returns 0 if condition is false
    }
}