/*
Name        : Omkar Ashok Sawant
Date        : 26/08/2025
Description : WAP to check given string is Pangram or not.
              Read a string from the user. Check whether the string is Pangram or not
              A pangram is a sentence containing every letter in the English Alphabet.
I/O         : I -> Enter the string : The quick brown fox jumps over the lazy dog
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
    if (res)                // If res == 1 then condition is true
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
    char arr[26] = {0};  // declaration array of size 26 and initializing it with 0
    while (*str != '\0') // checking the string until it reaches the null character
    {
        int size = 0;                 // Initializing size with 0 for every loop
        if (*str >= 65 && *str <= 90) // Condition for Uppercase
        {
            size = *str - 65; // Subtracting it with 65 so that we can add the elements in array according to the size 0 to 25
            arr[size] = 1;    // Updating the array elements with 1
        }
        else if (*str >= 97 && *str <= 122) // Condition for Lowercase
        {
            size = *str - 97; // Subtracting it with 97 so that we can add the elements in array according to the size 0 to 25
            arr[size] = 1;    // Updating the array elements with 1
        }
        str++; // incrementing the size of str
    }
    for (int i = 0; i < 26; i++) // checking that is all the elements in array are 1 or 0
    {
        if (!arr[i]) // if any one of the elements is not updated as 1 then we can get the answer
        {
            return 0; // return 0 if we get the element of array as 0
        }
    }
    return 1; // if all the elements of array are 1 then return 1
}
