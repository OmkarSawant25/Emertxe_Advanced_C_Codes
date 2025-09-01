/*
Name        : Omkar Ashok Sawant
Date        : 29/08/2025
Description : WAP to print all possible combinations of given string.
              Read a string from the user, find and print all the
              possible combinations of given string.
I/O         : I -> Enter a string: abc
              O -> All possible combinations of given string :abc
                   acb
                   bca
                   bac
                   cab
                   cba
*/

#include <stdio.h>

void combination(char[], int, int); // Function Prototype
int my_strlen(char[]);
void swap(char *, int, int);
int main()

{
    char str[100];
    int n;
    int res;
    printf("Enter a string: ");
    scanf("%100[^\n]", str);
    n = my_strlen(str); // Finding the length of the str
    int i = 0;
    while (str[i] != 0) // Validating
    {
        if (str[i] == str[i + 1])
        {
            printf("Error: please enter distinct characters.\n");
            return 0;
        }
        i++;
    }
    printf("All possible combinations of given string :");
    combination(str, 0, n - 1); // Function Calling
    return 0;
}
void combination(char *str, int start, int end) // Function  Defination
{
    if (start == end) // Base condition
    {
        printf("%s\n", str); // Printing the string
        return;
    }
    for (int i = start; i <= end; i++) // Running the for loop
    {
        swap(str, start, i);              // Swapping start and end
        combination(str, start + 1, end); // Recursive Functions
        swap(str, start, i);              // Swapping start and end
    }
}
int my_strlen(char *str) // Finding the length of the string
{
    int len = 0;
    while (*str != 0)
    {
        len++;
        str++;
    }
    return len;
}
void swap(char *str, int start, int end) // Swapping the elements of the string
{
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
}
