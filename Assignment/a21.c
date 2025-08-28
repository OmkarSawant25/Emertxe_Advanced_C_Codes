/*
Name        : Omkar Ashok Sawant
Date        : 26/08/2025
Description : WAP to replace each string of one or more blanks by a single blank.
I/O         : I -> Enter the string with more spaces in between two words
                   Pointers     are               sharp     knives.
              O -> Pointers are sharp knives.
*/

#include <stdio.h>
void replace_blank(char *str); // Function prototype
int main()
{
    char str[100];
    // printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    replace_blank(str); // Function call
    printf("%s\n", str);
    return 0;
}
void replace_blank(char *str) // Function defination
{
    for (int i = 0; str[i] != '\0'; i++) // Initializing the loop & running upto null character
    {
        if (str[i] == 32 || str[i] == 9) // Checking if space or tab is present
        {
            str[i] = 32;                             // updating the elements with space
            if (str[i + 1] == 32 || str[i + 1] == 9) // Checking if space or tab is present in the next index
            {
                for (int j = i; str[j] != '\0'; j++)
                {
                    str[j] = str[j + 1]; // shifting the elements of the string
                }
                i--; // decrement the i by 1 if space and tab is found
            }
        }
    }
}
