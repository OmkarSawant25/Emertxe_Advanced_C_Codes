/*
Name        : Omkar Ashok Sawant
Date        : 03/09/2025
Description : WAP to implement itoa function.
              void itoa(int n, char *s)
              Convert integer n into a string and store the string in s.
I/O         : I -> Enter the number : -1234
              O -> Integer to string is -1234
              I -> Enter the number : 1234
              O -> Integer to string is 1234
*/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]); // Function Prototype

int main()
{
    char str[50], delim[50];

    printf("Enter the string  : ");
    scanf("%s", str);

    __fpurge(stdout);

    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);

    char *token = my_strtok(str, delim); // Function Call
    printf("Tokens :\n");

    while (token) // Runs untill token reaches null
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim); // Function Call
    }
}
char *my_strtok(char str[], const char delim[]) // Function Defination
{
    static int i;     // Declare static variable
    static char *ptr; // Declare static character pointer
    if (str != NULL)  // if str is not equal to NULL then assign ptr as str
    {
        ptr = str; // Point to the string
        i = 0;
    }
    if (ptr == NULL) // If no string left -> return NULL
        return NULL;

    int start = i; // Save starting index of a token

    while (ptr[i] != '\0') // Traverse string
    {
        int j = 0;
        while (delim[j] != '\0') // run the loop untill it reaches null
        {
            if (ptr[i] == delim[j]) // If current char matches a delimiter
            {
                ptr[i] = '\0';          // make it as null
                i++;                    // Move forward
                if (ptr[start] != '\0') // If token is not empty
                    return &ptr[start]; // Return pointer to the token
                else
                {
                    start = i; // Skip consecutive delimiters
                    j = -1;    // Restart delimiter check
                }
            }
            j++;
        }
        i++;
    }
    if (ptr[start] != '\0')
        return &ptr[start]; // for last token
    else
        return NULL; // else null
}