/*
Name        : Omkar Ashok Sawant
Date        : 26/08/2025
Description : WAP to check given string is Pangram or not.
              Read a string from the user. Check whether the string is Pangram or not
              A pangram is a sentence containing every letter in the English Alphabet.
I/O         : I -> Enter the string : +
              O -> The Entered String is a Pangram String
*/

#include <stdio.h>
int pangram(char *str); // Function Prototype
int main()
{
    char str[100]; // Declaration of string with 100 characters
    printf("Enter the string : ");
    scanf("%[^\n]", str);   // Selective Scanf
    int res = pangram(str); // Function Call
    if (!res)                // If res == 1 then condition is true
    {
        printf("The Entered String is a Pangram String\n");
    }
    else
    {
        printf("The Entered String is not a Pangram String\n");
    }
    return 0;
}

int pangram(char *str) // Function Defination
{
    int index = 0;
    for(int i =65, j = 97;i<=90;i++,j++)
    {
        int flag = 0;
        for(int k = 0; str[k] != '\0'; k++)
        {
            if(i == str[k] || j == str[k])
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            index = 1;
            break;
        }
    }
    return index;
}