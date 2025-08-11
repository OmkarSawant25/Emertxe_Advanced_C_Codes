/*
Name        : Omkar Ashok Sawant
Date        : 07/08/2025
Description : WAP to implement your own isalnum() function
I/O         : I -> Enter the character: a
              O -> The character 'a' is an alnum character.
*/

#include <stdio.h>

int my_isalnum(int); // Function Prototype

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_isalnum(ch); // Function Call

    if (ret) // Checking the condition
    {
        printf("\nEntered character is alphanumeric character");
    }
    else
    {
        printf("\nEntered character is not alphanumeric character");
    }
}

int my_isalnum(int ch) // Function Definition
{
    if ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        return 1; // Returns 1 if condition is true
    }
    else
    {
        return 0; // Returns 0 if condition is false
    }
}