/*
Name        : Omkar Ashok Sawant
Date        : 27/08/2025
Description : WAP to reverse the given string using iterative method.
              Read a string from user.
              Implement using loops.
              Do not print character by character.
I/O         : I -> Enter a string : Hello World
              O -> Reverse string is : dlroW olleH
*/

#include <stdio.h>
void reverse_iterative(char str[]); // Function prototype
int length(char str[]);             // Function prototype
int main()
{
    char str[30];

    printf("Enter any string : ");
    scanf("%[^\n]", str);

    reverse_iterative(str); // Function call

    printf("Reversed string is : %s\n", str); // printing the reversed string
}
void reverse_iterative(char *str) // Function defination
{
    char temp;
    int i = 0;
    int j = length(str) - 1; // getting the length of the string to get value for j and subtracting by 1 as index starts from 0
    while (i < j)            // Checking the condition i less than j
    {
        temp = str[i]; // Swapping the elements
        str[i] = str[j];
        str[j] = temp;
        i++; // increasing i by 1
        j--; // Decreasing j by 1
    }
    return;
}
int length(char *str) // Function declaration for finding the length of the string
{
    int len = 0;
    while (*str != 0)
    {
        len++;
        str++;
    }
    return len;
}