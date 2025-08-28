/*
Name        : Omkar Ashok Sawant
Date        : 27/08/2025
Description : WAP to reverse the given string using recursive method.
              Implement using recursive function without using any loops
              Implement using loops.
              Do not print character by character.
I/O         : I -> Enter a string : Hello World
              O -> Reverse string is : dlroW olleH
*/

#include <stdio.h>
void reverse_recursive(char str[], int i, int j); // Function prototype
int length(char str[]);                           // Function prototype

int main()
{
    char str[30];
    int i = 0;
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    int j = length(str) - 1;      // getting the length of the string to get value for j and subtracting by 1 as index starts from 0
    reverse_recursive(str, i, j); // Function call

    printf("Reversed string is %s\n", str);
}

void reverse_recursive(char str[], int i, int j) // Function defination
{
    char temp;
    if (i < j) // Checking the condition i less than j
    {
        temp = str[i]; // Swapping the elements
        str[i] = str[j];
        str[j] = temp;
        i++;                          // increasing i by 1
        j--;                          // Decreasing j by 1
        reverse_recursive(str, i, j); // recursive function
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