/*
Name        : Omkar Ashok Sawant
Date        : 07/08/2025
Description : Write A Program to implement your own ispunct() function
I/O         : I -> Enter the character: a
              O -> Entered character is not punctuation character
*/

#include <stdio.h>

int my_ispunct(int); // Function Prototype

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_ispunct(ch); // Function Call
    if (ret)              // Checking the condition
    {
        printf("Entered character is punctuation character\n");
    }
    else
    {
        printf("Entered character is not punctuation character\n");
    }
}

int my_ispunct(int ch) // Function Definition
{
    if ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) || ch == 32)
    {
        return 0; // Returns 1 if condition is true
    }
    else
    {
        return 1; // Returns 0 if condition is false
    }
}