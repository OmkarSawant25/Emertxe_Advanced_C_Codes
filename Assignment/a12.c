/*
Name        : Omkar Ashok Sawant
Date        : 08/08/2025
Description : WAP to implement your own isxdigit() function
I/O         : I -> Enter the character: a
              O -> Entered character is an hexadecimal digit
*/

#include <stdio.h>

int is_xdigit(int); // Function Prototype

int main()
{
    char ch;
    short ret;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ret = is_xdigit(ch); // Function Call

    if (ret) // Checking the condition
    {
        printf("Entered character is an hexadecimal digit\n");
    }
    else
    {
        printf("Entered character is not an hexadecimal digit\n");
    }

    return 0;
}

int is_xdigit(int ch) // Function Definition
{
    if ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 70) || (ch >= 97 && ch <= 102))
    {
        return 1; // Returns 1 if condition is true
    }
    else
    {
        return 0; // Returns 0 if condition is false
    }
}
